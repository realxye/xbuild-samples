
set(TARGETNAME test_common_shared)
add_library($(TARGETNAME))
include(Sources.cmake)

set_target_properties ($(TARGETNAME) PROPERTIES FOLDER libs)
