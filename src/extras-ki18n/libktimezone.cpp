#include <KCountry>
#include <KTimeZone>
#include <ktimezone.h>
#include "libktimezone.h"
#include "libktimezone.hxx"

const char* KTimeZone_FromLocation(float latitude, float longitude) {
    return (const char*)KTimeZone::fromLocation(static_cast<float>(latitude), static_cast<float>(longitude));
}

KCountry* KTimeZone_Country(const char* ianaId) {
    return new KCountry(KTimeZone::country(ianaId));
}
