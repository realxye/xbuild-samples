cmake_minimum_required(VERSION 3.26.5)
include(FetchContent)

if (CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    FetchContent_Declare(
        xbuild
        GIT_REPOSITORY https://github.com/realxye/xbuild.git
        GIT_TAG        44f1284979beef57787687494bc8f53f664a04c5
    )
    project(xbuild-samples)
endif()

add_subdirectory(apps)
add_subdirectory(libs)
