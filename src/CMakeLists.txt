cmake_minimum_required(VERSION 2.6)
project (chessxx CXX)
message("C++ Compiler flags: " ${CMAKE_CXX_FLAGS})
file (GLOB_RECURSE header_files *.h )
file (GLOB_RECURSE source_files *.cpp)
set(header_dirs "")
set (CMAKE_INSTALL_PREFIX .)
foreach(file_path ${header_files})
    get_filename_component(dir_path ${file_path} PATH)
    set(header_dirs ${header_dirs} ${dir_path})
endforeach()
list(REMOVE_DUPLICATES header_dirs)
include_directories(${header_dirs})
add_library(chessxx STATIC ${source_files})
foreach (file ${header_files})
    message("Install: " ${file})
    install(FILES ${file} DESTINATION include)
endforeach (file)
install (FILES ${CMAKE_CURRENT_BINARY_DIR}/libchessxx.a DESTINATION lib)
