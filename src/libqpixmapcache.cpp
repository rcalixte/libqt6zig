#include <QPixmap>
#include <QPixmapCache>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPixmapCache__Key
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpixmapcache.h>
#include "libqpixmapcache.h"
#include "libqpixmapcache.hxx"

QPixmapCache* QPixmapCache_new(const QPixmapCache* other) {
    return new QPixmapCache(*other);
}

QPixmapCache* QPixmapCache_new2(QPixmapCache* other) {
    return new QPixmapCache(std::move(*other));
}

void QPixmapCache_CopyAssign(QPixmapCache* self, QPixmapCache* other) {
    *self = *other;
}

void QPixmapCache_MoveAssign(QPixmapCache* self, QPixmapCache* other) {
    *self = std::move(*other);
}

int QPixmapCache_CacheLimit() {
    return QPixmapCache::cacheLimit();
}

void QPixmapCache_SetCacheLimit(int cacheLimit) {
    QPixmapCache::setCacheLimit(static_cast<int>(cacheLimit));
}

bool QPixmapCache_Find(const libqt_string key, QPixmap* pixmap) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return QPixmapCache::find(key_QString, pixmap);
}

bool QPixmapCache_Find2(const QPixmapCache__Key* key, QPixmap* pixmap) {
    return QPixmapCache::find(*key, pixmap);
}

bool QPixmapCache_Insert(const libqt_string key, const QPixmap* pixmap) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return QPixmapCache::insert(key_QString, *pixmap);
}

QPixmapCache__Key* QPixmapCache_InsertWithPixmap(const QPixmap* pixmap) {
    return new QPixmapCache::Key(QPixmapCache::insert(*pixmap));
}

bool QPixmapCache_Replace(const QPixmapCache__Key* key, const QPixmap* pixmap) {
    return QPixmapCache::replace(*key, *pixmap);
}

void QPixmapCache_Remove(const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QPixmapCache::remove(key_QString);
}

void QPixmapCache_RemoveWithKey(const QPixmapCache__Key* key) {
    QPixmapCache::remove(*key);
}

void QPixmapCache_Clear() {
    QPixmapCache::clear();
}

void QPixmapCache_Delete(QPixmapCache* self) {
    delete self;
}

QPixmapCache__Key* QPixmapCache__Key_new() {
    return new QPixmapCache::Key();
}

QPixmapCache__Key* QPixmapCache__Key_new2(const QPixmapCache__Key* other) {
    return new QPixmapCache::Key(*other);
}

bool QPixmapCache__Key_OperatorEqual(const QPixmapCache__Key* self, const QPixmapCache__Key* key) {
    return (*self == *key);
}

bool QPixmapCache__Key_OperatorNotEqual(const QPixmapCache__Key* self, const QPixmapCache__Key* key) {
    return (*self != *key);
}

void QPixmapCache__Key_OperatorAssign(QPixmapCache__Key* self, const QPixmapCache__Key* other) {
    self->operator=(*other);
}

void QPixmapCache__Key_Swap(QPixmapCache__Key* self, QPixmapCache__Key* other) {
    self->swap(*other);
}

bool QPixmapCache__Key_IsValid(const QPixmapCache__Key* self) {
    return self->isValid();
}

void QPixmapCache__Key_Delete(QPixmapCache__Key* self) {
    delete self;
}
