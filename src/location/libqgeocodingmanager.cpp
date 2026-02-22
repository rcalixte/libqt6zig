#include <QGeoAddress>
#include <QGeoCodeReply>
#include <QGeoCodingManager>
#include <QGeoCoordinate>
#include <QGeoShape>
#include <QLocale>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qgeocodingmanager.h>
#include "libqgeocodingmanager.h"
#include "libqgeocodingmanager.hxx"

QMetaObject* QGeoCodingManager_MetaObject(const QGeoCodingManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGeoCodingManager_Metacast(QGeoCodingManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGeoCodingManager_Metacall(QGeoCodingManager* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGeoCodingManager_ManagerName(const QGeoCodingManager* self) {
    QString _ret = self->managerName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QGeoCodingManager_ManagerVersion(const QGeoCodingManager* self) {
    return self->managerVersion();
}

QGeoCodeReply* QGeoCodingManager_Geocode(QGeoCodingManager* self, const QGeoAddress* address) {
    return self->geocode(*address);
}

QGeoCodeReply* QGeoCodingManager_Geocode2(QGeoCodingManager* self, const libqt_string searchString) {
    QString searchString_QString = QString::fromUtf8(searchString.data, searchString.len);
    return self->geocode(searchString_QString);
}

QGeoCodeReply* QGeoCodingManager_ReverseGeocode(QGeoCodingManager* self, const QGeoCoordinate* coordinate) {
    return self->reverseGeocode(*coordinate);
}

void QGeoCodingManager_SetLocale(QGeoCodingManager* self, const QLocale* locale) {
    self->setLocale(*locale);
}

QLocale* QGeoCodingManager_Locale(const QGeoCodingManager* self) {
    return new QLocale(self->locale());
}

void QGeoCodingManager_Finished(QGeoCodingManager* self, QGeoCodeReply* reply) {
    self->finished(reply);
}

void QGeoCodingManager_Connect_Finished(QGeoCodingManager* self, intptr_t slot) {
    void (*slotFunc)(QGeoCodingManager*, QGeoCodeReply*) = reinterpret_cast<void (*)(QGeoCodingManager*, QGeoCodeReply*)>(slot);
    QGeoCodingManager::connect(self, &QGeoCodingManager::finished, [self, slotFunc](QGeoCodeReply* reply) {
        QGeoCodeReply* sigval1 = reply;
        slotFunc(self, sigval1);
    });
}

void QGeoCodingManager_ErrorOccurred(QGeoCodingManager* self, QGeoCodeReply* reply, int errorVal) {
    self->errorOccurred(reply, static_cast<QGeoCodeReply::Error>(errorVal));
}

void QGeoCodingManager_Connect_ErrorOccurred(QGeoCodingManager* self, intptr_t slot) {
    void (*slotFunc)(QGeoCodingManager*, QGeoCodeReply*, int) = reinterpret_cast<void (*)(QGeoCodingManager*, QGeoCodeReply*, int)>(slot);
    QGeoCodingManager::connect(self, &QGeoCodingManager::errorOccurred, [self, slotFunc](QGeoCodeReply* reply, QGeoCodeReply::Error errorVal) {
        QGeoCodeReply* sigval1 = reply;
        int sigval2 = static_cast<int>(errorVal);
        slotFunc(self, sigval1, sigval2);
    });
}

QGeoCodeReply* QGeoCodingManager_Geocode22(QGeoCodingManager* self, const QGeoAddress* address, const QGeoShape* bounds) {
    return self->geocode(*address, *bounds);
}

QGeoCodeReply* QGeoCodingManager_Geocode23(QGeoCodingManager* self, const libqt_string searchString, int limit) {
    QString searchString_QString = QString::fromUtf8(searchString.data, searchString.len);
    return self->geocode(searchString_QString, static_cast<int>(limit));
}

QGeoCodeReply* QGeoCodingManager_Geocode3(QGeoCodingManager* self, const libqt_string searchString, int limit, int offset) {
    QString searchString_QString = QString::fromUtf8(searchString.data, searchString.len);
    return self->geocode(searchString_QString, static_cast<int>(limit), static_cast<int>(offset));
}

QGeoCodeReply* QGeoCodingManager_Geocode4(QGeoCodingManager* self, const libqt_string searchString, int limit, int offset, const QGeoShape* bounds) {
    QString searchString_QString = QString::fromUtf8(searchString.data, searchString.len);
    return self->geocode(searchString_QString, static_cast<int>(limit), static_cast<int>(offset), *bounds);
}

QGeoCodeReply* QGeoCodingManager_ReverseGeocode2(QGeoCodingManager* self, const QGeoCoordinate* coordinate, const QGeoShape* bounds) {
    return self->reverseGeocode(*coordinate, *bounds);
}

void QGeoCodingManager_ErrorOccurred3(QGeoCodingManager* self, QGeoCodeReply* reply, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(reply, static_cast<QGeoCodeReply::Error>(errorVal), errorString_QString);
}

void QGeoCodingManager_Connect_ErrorOccurred3(QGeoCodingManager* self, intptr_t slot) {
    void (*slotFunc)(QGeoCodingManager*, QGeoCodeReply*, int, const char*) = reinterpret_cast<void (*)(QGeoCodingManager*, QGeoCodeReply*, int, const char*)>(slot);
    QGeoCodingManager::connect(self, &QGeoCodingManager::errorOccurred, [self, slotFunc](QGeoCodeReply* reply, QGeoCodeReply::Error errorVal, const QString& errorString) {
        QGeoCodeReply* sigval1 = reply;
        int sigval2 = static_cast<int>(errorVal);
        const QString errorString_ret = errorString;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray errorString_b = errorString_ret.toUtf8();
        auto errorString_str_len = errorString_b.length();
        const char* errorString_str = static_cast<const char*>(malloc(errorString_str_len + 1));
        memcpy((void*)errorString_str, errorString_b.data(), errorString_str_len);
        ((char*)errorString_str)[errorString_str_len] = '\0';
        const char* sigval3 = errorString_str;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(errorString_str);
    });
}

void QGeoCodingManager_Delete(QGeoCodingManager* self) {
    delete self;
}
