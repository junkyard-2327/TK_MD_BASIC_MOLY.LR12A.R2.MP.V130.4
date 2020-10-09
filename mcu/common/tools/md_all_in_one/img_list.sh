#! /bin/bash
ARGV=($*)

tools_dir="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

########################################
##        variables initialize        ##
########################################
debug=0
packmd=0
unpackmd=0
display_usage=0
output_md_file="single_bin_modem.bin"

if [[ -f "$tools_dir/pack_img" ]]; then
  pack_tool="$tools_dir/pack_img"
else
  echo "Error: (un)pack tool \"pack_img\" does not exist, please help to check!"
  exit 1
fi

if [[ -f "$tools_dir/mkimage20" ]]; then
  mkimage="$tools_dir/mkimage20"
else
  echo "Error: mkimage tool \"mkimage20\" does not exist, please help to check!"
  exit 1
fi

if [[ -d "$tools_dir/cfg" ]]; then
  cfg_path="$tools_dir/cfg"
else
  echo "Error: cfg folder does not exist, please help to check!"
  exit 1
fi

########################################
##        get input parameters        ##
########################################
for var in "$@"
do
  if [[ "$var" == *\(*\) ]]; then
    project_makefile=$var
  fi
  if [[ ( "$var" == "--help" ) || ( "$var" == "-h" ) ]]; then
    display_usage=1
  fi
  if [[ "$var" == "pack" ]]; then
    packmd=1
  fi
  if [[ "$var" == "unpack" ]]; then
    unpackmd=1
  fi
  if [[ "$var" == *$output_md_file ]]; then
    input_md_file=$var
  fi
done

if [[ $unpackmd == 1 ]]; then
  if [[ $# != 3 ]]; then
    echo "Error: unpack action can not support your command, please help usage by -h or --help"
    exit 1
  fi
  unpack_folder=$3
  if [[ ! -d $unpack_folder ]]; then
    mkdir -p "$unpack_folder"
  else
    rm -rf "$unpack_folder"
    mkdir -p "$unpack_folder"
  fi
  echo "The unpack process will unpack to $unpack_folder ..."
fi

if [[ $packmd == 1 ]]; then
  if [[ $# != 2 ]]; then
    echo "Error: pack action can not support your command, please help usage by -h or --help"
    exit 1
  fi
  pack_folder=$2
  if [[ ! -d $pack_folder ]]; then
    echo "Error: can not find the input folder, please help to check!"
    exit 1
  fi
  echo "The pack process will pack the files in $pack_folder ..."
fi

########################################
##              function              ##
########################################
usage() {
  echo -e "\nPlease CHECK the following usage of img_list.sh script!"
  echo -e "Usage:"
  echo -e "         1. img_list.sh \"project_name\""
  echo -e "         2. img_list.sh pack \"Folder Path\""
  echo -e "         3. img_list.sh unpack \"single_modem_image\""
  echo -e 
  echo -e "Example:"
  echo -e "         1. img_list.sh \"MT6763_SP(LWCTG)\""
  echo -e "         2. img_list.sh pack \"Folder Path\""
  echo -e "         3. img_list.sh unpack \"$output_md_file\" \"specific folder path\""
  echo -e
  echo -e "Description:"
  echo -e "         Usage1 is for modem(mcu) codebase when modem build is completed."
  echo -e "         \"pack\" action can use to pack specific folder if relvant appending files are all existing in specific folder."
  echo -e "         \"unpack\" action can use to unpack single_modem_image to specific folder."
  echo -e "\n"
}

error_handler () {
  echo "Error: $1 file cannot be found in $2, please help to check!"
  if [[ -f "$outfolder/$output_md_file" ]]; then
    echo Remove $outfolder/$output_md_file
    rm -f $outfolder/$output_md_file
  #elif [[ -f "./$output_md_file" ]]; then
  #  echo Remove $output_md_file
  #  rm -f $output_md_file
  fi
  exit 1
}

mkimage_func () {
  #usage: mkimage input_file cfg_file output_file
  if [[ $debug == 1 ]]; then
    echo $1
  fi
  echo "$mkimage $1 $2 $3" >> $outfolder/modem_all_in_one.log
  if [ ! -f "$2" ]; then
    error_handler "$2" "$cfg_path"
  else
    
    $mkimage $1 $2 $3
    if [ $? != 0 ]; then
      echo Error: fail to execute $mkimage $1 $2 $3, please check!
      exit 1
    fi
  fi
  echo "$(basename $3 .img)=$(basename $1)" >> $outfolder/md1_file_map.log
  pack_files="$pack_files $3"
}

pack_for_build () {
  project_name=$(echo "$project_makefile" | cut -d '(' -f 1 | tr -d ' ')
  project_flavor=$(echo "$project_makefile" | cut -d '(' -f 2 |cut -d ')' -f 1 | tr -d ' '| tr -d '\n')

  targetfolder="build/$project_name/$project_flavor"
  outfolder="build/$project_name/$project_flavor/bin/md_all_in_one"
  
  if [[ ! -d "$targetfolder" ]]; then
    echo Error: ./$targetfolder target folder does not exist, please help to chcek!
    exit 1
  fi

  if [[ -d "$outfolder" ]]; then
    #echo Remove and Create $outfolder!
    rm -rf $outfolder
    mkdir -p $outfolder
  else
    #echo Create $outfolder!
    mkdir -p $outfolder
  fi

  catcher_filter_files=($(find $targetfolder/dhl/database/ -name catcher_filter*))  ; if [ "$catcher_filter_files" == "" ]; then error_handler "catcher_filter_files" "$targetfolder/dhl/database";fi
  dbginfo=$(find $targetfolder/bin \( -name "DbgInfo_*" ! -name "DbgInfo_DSP*" \))  ; if [ "$dbginfo" == "" ]; then error_handler "dbginfo" "$targetfolder/bin";fi
  dbginfo_dsp=$(find $targetfolder/bin -name DbgInfo_DSP_*)                         ; if [ "$dbginfo_dsp" == "" ]; then error_handler "dbginfo_dsp" "$targetfolder/bin";fi
  mddbmetadb=$(find $targetfolder/dhl/database/ -name MDDB.META_*)                  ; if [ "$mddbmetadb" == "" ]; then error_handler "mddbmetadb" "$targetfolder/dhl/database";fi
  mddbmetaodb=$(find $targetfolder/dhl/database/ -name MDDB.META.ODB_*)             ; if [ "$mddbmetaodb" == "" ]; then error_handler "mddbmetaodb" "$targetfolder/dhl/database";fi
  mddb=$(find $targetfolder/dhl/database/ -name MDDB_*)                             ; if [ "$mddb" == "" ]; then error_handler "mddb" "$targetfolder/dhl/database";fi
  md1bin=$(find $targetfolder/bin -name *MDBIN*.bin)                                ; if [ "$md1bin" == "" ]; then error_handler "md1bin" "$targetfolder/bin";fi
  md1dsp=$(find $targetfolder/bin -name DSP_*)                                      ; if [ "$md1dsp" == "" ]; then error_handler "md1dsp" "$targetfolder/bin";fi

  pack_files="$md1bin $md1dsp"

#copy and compress
  cp -f $dbginfo $outfolder
  cp -f $dbginfo_dsp $outfolder
  dbginfo=$(find $outfolder \( -name "DbgInfo_*" ! -name "DbgInfo_DSP*" \))  ; if [ "$dbginfo" == "" ]; then error_handler "dbginfo" "$outfolder";fi
  dbginfo_dsp=$(find $outfolder -name DbgInfo_DSP*)                         ; if [ "$dbginfo_dsp" == "" ]; then error_handler "dbginfo_dsp" "$outfolder";fi
  #xz -z $dbginfo
  ./common/tools/LzmaUtil/LzmaUtil e $dbginfo $dbginfo.xz
  ./common/tools/LzmaUtil/LzmaUtil e $dbginfo_dsp $dbginfo_dsp.xz

  for catcher_filter in ${catcher_filter_files[*]}
  do
    catcher_filter_filename=$(basename $catcher_filter \.bin)
    if [[ "$catcher_filter_filename" == "catcher_filter" ]]; then
      mkimage_func $catcher_filter $cfg_path/md1_filter_hdr.cfg $outfolder/md1_filter.img
    else
      postfix=$(echo "$catcher_filter_filename" | sed -e "s/catcher_filter_*//"| tr -d '\n')
      if [[ $postfix == "Default"  ]]; then
        mkimage_func $catcher_filter $cfg_path/md1_filter__${postfix}_hdr.cfg $outfolder/md1_filter__${postfix}.img
      else
        mkimage_func $catcher_filter $cfg_path/md1_filter_${postfix}_hdr.cfg $outfolder/md1_filter_${postfix}.img
      fi
    fi
  done

  mkimage_func $targetfolder/dhl/database/em_filter.bin $cfg_path/md1_emfilter_hdr.cfg $outfolder/md1_emfilter.img
  mkimage_func $dbginfo_dsp.xz $cfg_path/md1_dbginfodsp_hdr.cfg $outfolder/md1_dbginfodsp.img
  mkimage_func $dbginfo.xz $cfg_path/md1_dbginfo_hdr.cfg $outfolder/md1_dbginfo.img
  mkimage_func $mddbmetadb $cfg_path/md1_mddbmeta_hdr.cfg $outfolder/md1_mddbmeta.img
  mkimage_func $mddbmetaodb $cfg_path/md1_mddbmetaodb_hdr.cfg $outfolder/md1_mddbmetaodb.img
  mkimage_func $mddb $cfg_path/md1_mddb_hdr.cfg $outfolder/md1_mddb.img
  mkimage_func $targetfolder/dhl/database/mdm_layout_desc.dat $cfg_path/md1_mdmlayout_hdr.cfg $outfolder/md1_mdmlayout.img
  mkimage_func $outfolder/md1_file_map.log $cfg_path/md1_file_map_hdr.cfg $outfolder/md1_file_map.img

  echo "$pack_tool pack $outfolder/$output_md_file $pack_files" >> $outfolder/modem_all_in_one.log
        $pack_tool pack $outfolder/$output_md_file $pack_files

  echo "Single Modem Binary process is done!"
}

unpack_func () {
  if [[ ($input_md_file == "") || (! -f $input_md_file) ]]; then
    echo "Error: can not find the image of modem single binary, please check!"
    exit 1
  fi
  $pack_tool unpack $input_md_file
  mv `ls | grep _unpack\.img` $unpack_folder
  echo "Unpack single modem is done"
}

pack_func () {

  outfolder=$pack_folder/md_all_in_one
  if [[ ! -d $outfolder ]]; then
    mkdir -p $outfolder
  else
    rm -rf $outfolder
    mkdir -p $outfolder
  fi

  catcher_filter_files=($(find $pack_folder -name md1_filter_*))                          ; if [ "$catcher_filter_files" == "" ]; then error_handler "md1_filter" "$pack_folder";fi
  emfilter=$(find $pack_folder -name md1_emfilter_*)                                      ; if [ "$emfilter" == "" ]; then error_handler "md1_emfilter" "$pack_folder";fi
  mdmlayout=$(find $pack_folder -name md1_mdmlayout_*)                                    ; if [ "$mdmlayout" == "" ]; then error_handler "md1_mdmlayout" "$pack_folder";fi
  filemap=$(find $pack_folder -name md1_file_map_*)                                       ; if [ "$filemap" == "" ]; then error_handler "md1_file_map" "$pack_folder";fi
  dbginfo=$(find $pack_folder \( -name "md1_dbginfo_*" ! -name "md1_dbginfodsp*" \))      ; if [ "$dbginfo" == "" ]; then error_handler "dbginfo" "$pack_folder";fi
  dbginfo_dsp=$(find $pack_folder -name md1_dbginfodsp_*)                                 ; if [ "$dbginfo_dsp" == "" ]; then error_handler "dbginfo_dsp" "$pack_folder";fi
  mddbmetadb=$(find $pack_folder \( -name "md1_mddbmeta_*" ! -name "md1_mddbmetaodb*" \)) ; if [ "$mddbmetadb" == "" ]; then error_handler "mddbmetadb" "$pack_folder";fi
  mddbmetaodb=$(find $pack_folder -name md1_mddbmetaodb_*)                                ; if [ "$mddbmetaodb" == "" ]; then error_handler "mddbmetaodb" "$pack_folder";fi
  mddb=$(find $pack_folder \( -name "md1_mddb_*" ! -name "md1_mddbmeta*" \))              ; if [ "$mddb" == "" ]; then error_handler "mddb" "$pack_folder";fi
  md1bin=$(find $pack_folder -name *MDBIN*.bin)
  if [[ $md1bin == "" ]]; then
  md1bin=$(find $pack_folder -name md1rom_*)                                              ; if [ "$md1bin" == "" ]; then error_handler "md1rom" "$pack_folder";fi
  fi
  md1dsp=$(find $pack_folder -name DSP_*)
  if [[ $md1dsp == "" ]]; then
  md1dsp=$(find $pack_folder -name md1dsp_*)                                              ; if [ "$md1dsp" == "" ]; then error_handler "md1dsp" "$pack_folder";fi
  fi

  if [[ $(basename $md1bin \.img) == "md1rom_unpack" ]]; then
    if [[ -f "$tools_dir/mkimage" ]]; then
      if [[ -f $outfolder/md1rom.img ]]; then
        rm -f $outfolder/md1rom.img
      fi
      $tools_dir/mkimage $md1bin $cfg_path/md1rom_hdr.cfg > $outfolder/md1rom.img
      md1bin=$outfolder/md1rom.img
    else
      echo "Error: mkimage for md1rom.img/md1dsp.img does not exist, please check!"
      exit 1
    fi
  else
    echo $md1bin
  fi
  
  if [[ $(basename $md1dsp \.img) == "md1dsp_unpack" ]]; then
    if [[ -f "$tools_dir/mkimage" ]]; then
      if [[ -f $outfolder/md1dsp.img ]]; then
        rm -f $outfolder/md1dsp.img
      fi
      $tools_dir/mkimage $md1dsp $cfg_path/md1dsp_hdr.cfg > $outfolder/md1dsp.img
      md1dsp=$outfolder/md1dsp.img
    else
      echo "Error: mkimage for md1rom.img/md1dsp.img does not exist, please check!"
      exit 1
    fi
  else
    echo $md1dsp
  fi

  pack_files="$md1bin $md1dsp"

  for catcher_filter in ${catcher_filter_files[*]}
  do
    catcher_filter_filename=$(basename $catcher_filter \.img)
    
    if [[ "$catcher_filter_filename" == "md1_filter_unpack" ]]; then
      mkimage_func $catcher_filter $cfg_path/md1_filter_hdr.cfg $outfolder/md1_filter.img
    else
      postfix=$(echo "$catcher_filter_filename" | sed -e "s/md1_filter_//"| sed -e "s/_unpack//"| tr -d '\n')
      if [[ $postfix == "Default"  ]]; then
        mkimage_func $catcher_filter $cfg_path/md1_filter__${postfix}_hdr.cfg $outfolder/md1_filter__${postfix}.img
      else
        mkimage_func $catcher_filter $cfg_path/md1_filter_${postfix}_hdr.cfg $outfolder/md1_filter_${postfix}.img
      fi
    fi
  done

  mkimage_func $emfilter $cfg_path/md1_emfilter_hdr.cfg $outfolder/md1_emfilter.img
  mkimage_func $dbginfo_dsp $cfg_path/md1_dbginfodsp_hdr.cfg $outfolder/md1_dbginfodsp.img
  mkimage_func $dbginfo $cfg_path/md1_dbginfo_hdr.cfg $outfolder/md1_dbginfo.img
  mkimage_func $mddbmetadb $cfg_path/md1_mddbmeta_hdr.cfg $outfolder/md1_mddbmeta.img
  mkimage_func $mddbmetaodb $cfg_path/md1_mddbmetaodb_hdr.cfg $outfolder/md1_mddbmetaodb.img
  mkimage_func $mddb $cfg_path/md1_mddb_hdr.cfg $outfolder/md1_mddb.img
  mkimage_func $mdmlayout $cfg_path/md1_mdmlayout_hdr.cfg $outfolder/md1_mdmlayout.img
  mkimage_func $filemap $cfg_path/md1_file_map_hdr.cfg $outfolder/md1_file_map.img

  if [[ -f "$outfolder/md1_file_map.log" ]]; then
    rm -f "$outfolder/md1_file_map.log"
  fi

  echo "$pack_tool pack $outfolder/$output_md_file $pack_files" >> $outfolder/modem_all_in_one.log
        $pack_tool pack $outfolder/$output_md_file $pack_files

  echo "Pack process is done!"
}

########################################
##                main                ##
########################################

if [[  $display_usage == 1 ]]; then 
  usage
fi

if [[ ($packmd == 0) && ($unpackmd == 0) ]]; then
  pack_for_build
elif [[ $unpackmd == 1 ]]; then
  unpack_func
elif [[ $packmd == 1 ]]; then
  pack_func
fi

exit 0