#include <QNativeIpcKey>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSystemSemaphore>
#include <qsystemsemaphore.h>
#include "libqsystemsemaphore.h"
#include "libqsystemsemaphore.hxx"

QSystemSemaphore* QSystemSemaphore_new(const QNativeIpcKey* key) {
    return new QSystemSemaphore(*key);
}

QSystemSemaphore* QSystemSemaphore_new2(const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QSystemSemaphore(key_QString);
}

QSystemSemaphore* QSystemSemaphore_new3(const QNativeIpcKey* key, int initialValue) {
    return new QSystemSemaphore(*key, static_cast<int>(initialValue));
}

QSystemSemaphore* QSystemSemaphore_new4(const QNativeIpcKey* key, int initialValue, int param3) {
    return new QSystemSemaphore(*key, static_cast<int>(initialValue), static_cast<QSystemSemaphore::AccessMode>(param3));
}

QSystemSemaphore* QSystemSemaphore_new5(const libqt_string key, int initialValue) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QSystemSemaphore(key_QString, static_cast<int>(initialValue));
}

QSystemSemaphore* QSystemSemaphore_new6(const libqt_string key, int initialValue, int mode) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QSystemSemaphore(key_QString, static_cast<int>(initialValue), static_cast<QSystemSemaphore::AccessMode>(mode));
}

libqt_string QSystemSemaphore_Tr(const char* sourceText) {
    QString _ret = QSystemSemaphore::tr(sourceText);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSystemSemaphore_SetNativeKey(QSystemSemaphore* self, const QNativeIpcKey* key) {
    self->setNativeKey(*key);
}

void QSystemSemaphore_SetNativeKey2(QSystemSemaphore* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->setNativeKey(key_QString);
}

QNativeIpcKey* QSystemSemaphore_NativeIpcKey(const QSystemSemaphore* self) {
    return new QNativeIpcKey(self->nativeIpcKey());
}

void QSystemSemaphore_SetKey(QSystemSemaphore* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->setKey(key_QString);
}

libqt_string QSystemSemaphore_Key(const QSystemSemaphore* self) {
    QString _ret = self->key();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QSystemSemaphore_Acquire(QSystemSemaphore* self) {
    return self->acquire();
}

bool QSystemSemaphore_Release(QSystemSemaphore* self) {
    return self->release();
}

int QSystemSemaphore_Error(const QSystemSemaphore* self) {
    return static_cast<int>(self->error());
}

libqt_string QSystemSemaphore_ErrorString(const QSystemSemaphore* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QSystemSemaphore_IsKeyTypeSupported(uint16_t typeVal) {
    return QSystemSemaphore::isKeyTypeSupported(static_cast<QNativeIpcKey::Type>(typeVal));
}

QNativeIpcKey* QSystemSemaphore_PlatformSafeKey(const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QNativeIpcKey(QSystemSemaphore::platformSafeKey(key_QString));
}

QNativeIpcKey* QSystemSemaphore_LegacyNativeKey(const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QNativeIpcKey(QSystemSemaphore::legacyNativeKey(key_QString));
}

libqt_string QSystemSemaphore_Tr2(const char* sourceText, const char* disambiguation) {
    QString _ret = QSystemSemaphore::tr(sourceText, disambiguation);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSystemSemaphore_Tr3(const char* sourceText, const char* disambiguation, int n) {
    QString _ret = QSystemSemaphore::tr(sourceText, disambiguation, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSystemSemaphore_SetNativeKey22(QSystemSemaphore* self, const QNativeIpcKey* key, int initialValue) {
    self->setNativeKey(*key, static_cast<int>(initialValue));
}

void QSystemSemaphore_SetNativeKey3(QSystemSemaphore* self, const QNativeIpcKey* key, int initialValue, int param3) {
    self->setNativeKey(*key, static_cast<int>(initialValue), static_cast<QSystemSemaphore::AccessMode>(param3));
}

void QSystemSemaphore_SetNativeKey23(QSystemSemaphore* self, const libqt_string key, int initialValue) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->setNativeKey(key_QString, static_cast<int>(initialValue));
}

void QSystemSemaphore_SetNativeKey32(QSystemSemaphore* self, const libqt_string key, int initialValue, int mode) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->setNativeKey(key_QString, static_cast<int>(initialValue), static_cast<QSystemSemaphore::AccessMode>(mode));
}

void QSystemSemaphore_SetNativeKey4(QSystemSemaphore* self, const libqt_string key, int initialValue, int mode, uint16_t typeVal) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->setNativeKey(key_QString, static_cast<int>(initialValue), static_cast<QSystemSemaphore::AccessMode>(mode), static_cast<QNativeIpcKey::Type>(typeVal));
}

void QSystemSemaphore_SetKey2(QSystemSemaphore* self, const libqt_string key, int initialValue) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->setKey(key_QString, static_cast<int>(initialValue));
}

void QSystemSemaphore_SetKey3(QSystemSemaphore* self, const libqt_string key, int initialValue, int mode) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->setKey(key_QString, static_cast<int>(initialValue), static_cast<QSystemSemaphore::AccessMode>(mode));
}

bool QSystemSemaphore_Release1(QSystemSemaphore* self, int n) {
    return self->release(static_cast<int>(n));
}

QNativeIpcKey* QSystemSemaphore_PlatformSafeKey2(const libqt_string key, uint16_t typeVal) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QNativeIpcKey(QSystemSemaphore::platformSafeKey(key_QString, static_cast<QNativeIpcKey::Type>(typeVal)));
}

QNativeIpcKey* QSystemSemaphore_LegacyNativeKey2(const libqt_string key, uint16_t typeVal) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QNativeIpcKey(QSystemSemaphore::legacyNativeKey(key_QString, static_cast<QNativeIpcKey::Type>(typeVal)));
}

void QSystemSemaphore_Delete(QSystemSemaphore* self) {
    delete self;
}
