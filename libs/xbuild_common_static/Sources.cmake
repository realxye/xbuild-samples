
rbx_target_sources($(TARGETNAME)
    SUBDIR include
    SOURCES
    xbuild_common.h
)

rbx_target_sources($(TARGETNAME)
    SUBDIR src
    SOURCES
    xbuild_common.cpp
)
