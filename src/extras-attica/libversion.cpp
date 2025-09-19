#include <version.h>
#include "libversion.h"
#include "libversion.hxx"

unsigned int Attica_VersionMajor() {
    return Attica::versionMajor();
}

unsigned int Attica_VersionMinor() {
    return Attica::versionMinor();
}

unsigned int Attica_VersionRelease() {
    return Attica::versionRelease();
}

const char* Attica_VersionString() {
    return (const char*)Attica::versionString();
}
