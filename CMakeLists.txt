cmake_minimum_required(VERSION 3.12)
project(Phone)
set (EXE_NAME Phone)

##########################################
# Students, edit the items below.  In the quotes,
# put the names of the input files as they should appear
# in the argv param to main.
# Example:
#   set (input01 "train_data.csv")
#   set (input02 "train_target.csv")
# etc....

set (input01 "valid_list.txt")
set (input02 "invalid_list.txt")


##########################################

# Copy data files to build dir
foreach(file IN LISTS input01 input02)
    configure_file(${file} ${file} COPYONLY)
endforeach()

set(CMAKE_CXX_STANDARD 17)
add_executable(${EXE_NAME} main.cpp Phone_Validation.cpp Phone_Validation.h Name_Validation.cpp Name_Validation.h)