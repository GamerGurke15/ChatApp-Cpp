cmake_minimum_required(VERSION 3.3)
project(ChatApp_Cpp)

# for gtkmm
find_package(PkgConfig)
pkg_check_modules(GTKMM gtkmm-3.0)

add_subdirectory(src)