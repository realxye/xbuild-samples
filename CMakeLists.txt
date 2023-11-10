cmake_minimum_required(VERSION 3.26.5)
include(FetchContent)

#if (CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    # Fetch xbuild-cmake prelude
    message(STATUS "Fetching xbuild ...")
    FetchContent_Declare(
        xbuild
        GIT_REPOSITORY https://github.com/realxye/xbuild.git
        GIT_TAG        4c5ade0725a4682c19f5c4913f9434a195b23703
    )
    FetchContent_MakeAvailable(xbuild)

    # Create project
    project(xbuild-samples C CXX)
#endif()

add_subdirectory(apps)
add_subdirectory(libs)
