
add_subdirectory(xbuild_common_static)
add_subdirectory(xbuild_common_shared)
#if (XBD_PLATFORM_WINDOWS)
#    add_subdirectory(xbuild_kernel_static)
#    add_subdirectory(xbuild_windrv)
#endif()
