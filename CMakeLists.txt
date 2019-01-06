cmake_minimum_required(VERSION 3.12)
cmake_policy(SET CMP0074 NEW)
project(cmake-starter)

include(cmake/cotire.cmake)
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 COMPONENTS Core Widgets Gui REQUIRED)

set(SOURCES
    src/MainWindow.cpp
    src/MainWindow.ui
    src/main.cpp
)

add_executable(cmake-starter ${SOURCES})
target_link_libraries(cmake-starter PUBLIC Qt5::Core Qt5::Widgets)
cotire(cmake-starter)