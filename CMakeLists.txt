cmake_minimum_required(VERSION 3.26.5)
include(FetchContent)

if (CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    if ("$ENV{XBUILDROOT}" STREQUAL "")
        # Fetch xbuild-cmake prelude
        message(STATUS "Fetching xbuild from github ...")
        FetchContent_Declare(
            xbuild
            GIT_REPOSITORY https://github.com/realxye/xbuild.git
            GIT_TAG        2be99669b02ac32d7820316c1f28626a3ba9b209
        )
        FetchContent_MakeAvailable(xbuild)
    else()
        # Use local xbuild-cmake prelude
        message(STATUS "Use local xbuild: $ENV{XBUILDROOT}/cmake")
        include("$ENV{XBUILDROOT}/cmake/xbuild-prelude.cmake")
    endif()

    # Create project
    xbd_project(xbuild-samples C CXX)
endif()

add_subdirectory(apps)
add_subdirectory(libs)
