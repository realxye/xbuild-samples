cmake_minimum_required(VERSION 3.26.5)
include(FetchContent)

#if (CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    # Fetch xbuild-cmake prelude
    FetchContent_Declare(
        xbuild
        GIT_REPOSITORY https://github.com/realxye/xbuild.git
        GIT_TAG        0f57c49ada65ee6b7660902c60eddb66787501e3
    )
    FetchContent_MakeAvailable(xbuild)

    # Create project
    project(xbuild-samples C CXX)
#endif()

add_subdirectory(apps)
add_subdirectory(libs)
