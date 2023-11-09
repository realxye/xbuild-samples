
rbx_target_sources($(TARGETNAME)
    SUBDIR include
    SOURCES
    xbuild_common_shared.h
)

rbx_target_sources($(TARGETNAME)
    SUBDIR src
    SOURCES
    xbuild_common_shared.cpp
)
