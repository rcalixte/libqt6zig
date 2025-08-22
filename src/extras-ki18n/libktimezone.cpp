#include <KCountry>
#include <KTimeZone>
#include <ktimezone.h>
#include "libktimezone.h"
#include "libktimezone.hxx"

const char* KTimeZone_FromLocation(float param1, float param2) {
    return (const char*)KTimeZone::fromLocation(static_cast<float>(param1), static_cast<float>(param2));
}

KCountry* KTimeZone_Country(const char* param1) {
    return new KCountry(KTimeZone::country(param1));
}
