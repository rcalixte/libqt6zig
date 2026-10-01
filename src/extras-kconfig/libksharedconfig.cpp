#include <KConfig>
#include <KConfigBase>
#include <KSharedConfig>
#include <QSharedData>
#include <ksharedconfig.h>
#include "libksharedconfig.h"
#include "libksharedconfig.hxx"

QSharedData* KSharedConfig_AsQSharedData(const KSharedConfig* self) {
    return const_cast<KSharedConfig*>(self);
}

void KSharedConfig_Delete(KSharedConfig* self) {
    delete self;
}
