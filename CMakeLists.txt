cmake_minimum_required(VERSION 3.26.5)
include(FetchContent)

if (CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    # Fetch xbuild-cmake prelude
    message(STATUS "Fetching xbuild ...")
    FetchContent_Declare(
        xbuild
        GIT_REPOSITORY https://github.com/realxye/xbuild.git
        GIT_TAG        82c087811ad8754e1614cb2e394dff419274e905
    )
    FetchContent_MakeAvailable(xbuild)
    #list(APPEND CMAKE_MODULE_PATH "${XBUILD_PRELUDE_CMAKE_DIR}")
    #list(APPEND CMAKE_MODULE_PATH "${XBUILD_PRELUDE_PACKAGES_DIR}")

    # Create project
    project(xbuild-samples C CXX)

    include(${XBUILD_PRELUDE_CMAKE_DIR}/xbuild-init-project.cmake)
endif()

add_subdirectory(apps)
add_subdirectory(libs)
