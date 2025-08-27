#include <QDateTime>
#include <klocalimagecacheimpl.h>
#include "libklocalimagecacheimpl.h"
#include "libklocalimagecacheimpl.hxx"

QDateTime* KLocalImageCacheImplementation_LastModifiedTime(const KLocalImageCacheImplementation* self) {
    return new QDateTime(self->lastModifiedTime());
}

bool KLocalImageCacheImplementation_PixmapCaching(const KLocalImageCacheImplementation* self) {
    return self->pixmapCaching();
}

void KLocalImageCacheImplementation_SetPixmapCaching(KLocalImageCacheImplementation* self, bool enable) {
    self->setPixmapCaching(enable);
}

int KLocalImageCacheImplementation_PixmapCacheLimit(const KLocalImageCacheImplementation* self) {
    return self->pixmapCacheLimit();
}

void KLocalImageCacheImplementation_SetPixmapCacheLimit(KLocalImageCacheImplementation* self, int size) {
    self->setPixmapCacheLimit(static_cast<int>(size));
}

void KLocalImageCacheImplementation_Delete(KLocalImageCacheImplementation* self) {
    delete self;
}
