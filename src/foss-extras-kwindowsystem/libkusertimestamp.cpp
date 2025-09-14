#include <KUserTimestamp>
#include <kusertimestamp.h>
#include "libkusertimestamp.h"
#include "libkusertimestamp.hxx"

unsigned long KUserTimestamp_UserTimestamp() {
    return KUserTimestamp::userTimestamp();
}

void KUserTimestamp_UpdateUserTimestamp(unsigned long param1) {
    KUserTimestamp::updateUserTimestamp(static_cast<unsigned long>(param1));
}
