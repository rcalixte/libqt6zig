#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSystemSemaphore>
#include <qsystemsemaphore.h>
#include "libqsystemsemaphore.h"
#include "libqsystemsemaphore.hxx"

QSystemSemaphore* QSystemSemaphore_new(const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QSystemSemaphore(key_QString);
}

QSystemSemaphore* QSystemSemaphore_new2(const libqt_string key, int initialValue) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QSystemSemaphore(key_QString, static_cast<int>(initialValue));
}

QSystemSemaphore* QSystemSemaphore_new3(const libqt_string key, int initialValue, int mode) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QSystemSemaphore(key_QString, static_cast<int>(initialValue), static_cast<QSystemSemaphore::AccessMode>(mode));
}

libqt_string QSystemSemaphore_Tr(const char* sourceText) {
    QString _ret = QSystemSemaphore::tr(sourceText);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
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
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
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
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSystemSemaphore_Tr2(const char* sourceText, const char* disambiguation) {
    QString _ret = QSystemSemaphore::tr(sourceText, disambiguation);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSystemSemaphore_Tr3(const char* sourceText, const char* disambiguation, int n) {
    QString _ret = QSystemSemaphore::tr(sourceText, disambiguation, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
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

void QSystemSemaphore_Delete(QSystemSemaphore* self) {
    delete self;
}
