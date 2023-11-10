#pragma once
#include <cstdint>

class XBuild
{
public:
	XBuild();
	~XBuild();

	uint32_t getVersion() const;
	const char* getVersionString() const;
};