cmake_minimum_required(VERSION 3.24)
project(BackTesting)

set(CMAKE_CXX_STANDARD 17)

INCLUDE_DIRECTORIES(/usr/local/include)
LINK_DIRECTORIES(/usr/local/lib)

aux_source_directory(. DIR_SRCS)

add_executable(BackTesting ${DIR_SRCS})
TARGET_LINK_LIBRARIES(BackTesting libta_lib.a)