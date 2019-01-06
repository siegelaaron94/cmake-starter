cmake_minimum_required(VERSION 3.12)
cmake_policy(SET CMP0074 NEW)

include(cmake/HunterGate.cmake)
include(cmake/cotire.cmake)

HunterGate(
    URL "https://github.com/ruslo/hunter/archive/v0.23.27.tar.gz"
    SHA1 "70d75a25f895df3da00d8382417e8c2a08c93173"
)
project(cmake-starter)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCES
    src/main.cpp
)
add_executable(cmake-starter WIN32 ${SOURCES})
#cotire(cmake-starter)