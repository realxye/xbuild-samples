#include "xbuild_common.h"

#define XBUILD_MAKE_VERSION(major, minor, build)	((((uint32_t)(major)) << 22) | (((uint32_t)(minor)) << 16) | (((uint32_t)(minor)) & 0xFFFF))

XBuild::XBuild()
{
}

XBuild::~XBuild()
{
}

uint32_t XBuild::getVersion() const
{
	return XBUILD_MAKE_VERSION(1, 0, 1000);
}

const char* XBuild::getVersionString() const
{
	return "1.0.1000";
}