cmake_minimum_required(VERSION 3.16)
project(Collection)

set(CMAKE_CXX_STANDARD 14)
set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/bin)
include_directories(include)
add_subdirectory(include)
#add_library(collection_lib user_vector.h user_vector.cpp)

add_executable(collection_binary main.cpp)
