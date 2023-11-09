
set(TARGETNAME xbuild_cli)
add_executable($(TARGETNAME))
include(Sources.cmake)

set_target_properties ($(TARGETNAME) PROPERTIES FOLDER apps)
