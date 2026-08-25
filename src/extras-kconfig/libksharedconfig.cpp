#include <KConfig>
#include <KConfigBase>
#include <KSharedConfig>
#include <QSharedData>
#include <ksharedconfig.h>
#include "libksharedconfig.h"
#include "libksharedconfig.hxx"

QSharedData* KSharedConfig_AsQSharedData(KSharedConfig* self) {
    return static_cast<QSharedData*>(self);
}

void KSharedConfig_Delete(KSharedConfig* self) {
    delete self;
}
