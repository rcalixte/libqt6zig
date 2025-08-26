#include <KSharedDataCache>
#include <QByteArray>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kshareddatacache.h>
#include "libkshareddatacache.h"
#include "libkshareddatacache.hxx"

KSharedDataCache* KSharedDataCache_new(const libqt_string cacheName, unsigned int defaultCacheSize) {
    QString cacheName_QString = QString::fromUtf8(cacheName.data, cacheName.len);
    return new KSharedDataCache(cacheName_QString, static_cast<unsigned int>(defaultCacheSize));
}

KSharedDataCache* KSharedDataCache_new2(const libqt_string cacheName, unsigned int defaultCacheSize, unsigned int expectedItemSize) {
    QString cacheName_QString = QString::fromUtf8(cacheName.data, cacheName.len);
    return new KSharedDataCache(cacheName_QString, static_cast<unsigned int>(defaultCacheSize), static_cast<unsigned int>(expectedItemSize));
}

int KSharedDataCache_EvictionPolicy(const KSharedDataCache* self) {
    return static_cast<int>(self->evictionPolicy());
}

void KSharedDataCache_SetEvictionPolicy(KSharedDataCache* self, int newPolicy) {
    self->setEvictionPolicy(static_cast<KSharedDataCache::EvictionPolicy>(newPolicy));
}

bool KSharedDataCache_Insert(KSharedDataCache* self, const libqt_string key, const libqt_string data) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QByteArray data_QByteArray(data.data, data.len);
    return self->insert(key_QString, data_QByteArray);
}

void KSharedDataCache_Clear(KSharedDataCache* self) {
    self->clear();
}

void KSharedDataCache_DeleteCache(const libqt_string cacheName) {
    QString cacheName_QString = QString::fromUtf8(cacheName.data, cacheName.len);
    KSharedDataCache::deleteCache(cacheName_QString);
}

bool KSharedDataCache_Contains(const KSharedDataCache* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->contains(key_QString);
}

unsigned int KSharedDataCache_TotalSize(const KSharedDataCache* self) {
    return self->totalSize();
}

unsigned int KSharedDataCache_FreeSize(const KSharedDataCache* self) {
    return self->freeSize();
}

unsigned int KSharedDataCache_Timestamp(const KSharedDataCache* self) {
    return self->timestamp();
}

void KSharedDataCache_SetTimestamp(KSharedDataCache* self, unsigned int newTimestamp) {
    self->setTimestamp(static_cast<unsigned int>(newTimestamp));
}

void KSharedDataCache_Delete(KSharedDataCache* self) {
    delete self;
}
