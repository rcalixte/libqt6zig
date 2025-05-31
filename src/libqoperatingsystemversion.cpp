#include <QOperatingSystemVersion>
#include <QOperatingSystemVersionBase>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVersionNumber>
#include <qoperatingsystemversion.h>
#include "libqoperatingsystemversion.h"
#include "libqoperatingsystemversion.hxx"

QOperatingSystemVersionBase* QOperatingSystemVersionBase_new(int osType, int vmajor) {
    return new QOperatingSystemVersionBase(static_cast<QOperatingSystemVersionBase::OSType>(osType), static_cast<int>(vmajor));
}

QOperatingSystemVersionBase* QOperatingSystemVersionBase_new2(const QOperatingSystemVersionBase* param1) {
    return new QOperatingSystemVersionBase(*param1);
}

QOperatingSystemVersionBase* QOperatingSystemVersionBase_new3(int osType, int vmajor, int vminor) {
    return new QOperatingSystemVersionBase(static_cast<QOperatingSystemVersionBase::OSType>(osType), static_cast<int>(vmajor), static_cast<int>(vminor));
}

QOperatingSystemVersionBase* QOperatingSystemVersionBase_new4(int osType, int vmajor, int vminor, int vmicro) {
    return new QOperatingSystemVersionBase(static_cast<QOperatingSystemVersionBase::OSType>(osType), static_cast<int>(vmajor), static_cast<int>(vminor), static_cast<int>(vmicro));
}

QOperatingSystemVersionBase* QOperatingSystemVersionBase_Current() {
    return new QOperatingSystemVersionBase(QOperatingSystemVersionBase::current());
}

libqt_string QOperatingSystemVersionBase_Name(QOperatingSystemVersionBase* osversion) {
    QString _ret = QOperatingSystemVersionBase::name(*osversion);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QOperatingSystemVersionBase_CurrentType() {
    return static_cast<int>(QOperatingSystemVersionBase::currentType());
}

QVersionNumber* QOperatingSystemVersionBase_Version(const QOperatingSystemVersionBase* self) {
    return new QVersionNumber(self->version());
}

int QOperatingSystemVersionBase_MajorVersion(const QOperatingSystemVersionBase* self) {
    return self->majorVersion();
}

int QOperatingSystemVersionBase_MinorVersion(const QOperatingSystemVersionBase* self) {
    return self->minorVersion();
}

int QOperatingSystemVersionBase_MicroVersion(const QOperatingSystemVersionBase* self) {
    return self->microVersion();
}

int QOperatingSystemVersionBase_SegmentCount(const QOperatingSystemVersionBase* self) {
    return self->segmentCount();
}

int QOperatingSystemVersionBase_Type(const QOperatingSystemVersionBase* self) {
    return static_cast<int>(self->type());
}

libqt_string QOperatingSystemVersionBase_Name2(const QOperatingSystemVersionBase* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QOperatingSystemVersionBase_Delete(QOperatingSystemVersionBase* self) {
    delete self;
}

QOperatingSystemVersion* QOperatingSystemVersion_new(const QOperatingSystemVersionBase* osversion) {
    return new QOperatingSystemVersion(*osversion);
}

QOperatingSystemVersion* QOperatingSystemVersion_new2(int osType, int vmajor) {
    return new QOperatingSystemVersion(static_cast<QOperatingSystemVersion::OSType>(osType), static_cast<int>(vmajor));
}

QOperatingSystemVersion* QOperatingSystemVersion_new3(const QOperatingSystemVersion* param1) {
    return new QOperatingSystemVersion(*param1);
}

QOperatingSystemVersion* QOperatingSystemVersion_new4(int osType, int vmajor, int vminor) {
    return new QOperatingSystemVersion(static_cast<QOperatingSystemVersion::OSType>(osType), static_cast<int>(vmajor), static_cast<int>(vminor));
}

QOperatingSystemVersion* QOperatingSystemVersion_new5(int osType, int vmajor, int vminor, int vmicro) {
    return new QOperatingSystemVersion(static_cast<QOperatingSystemVersion::OSType>(osType), static_cast<int>(vmajor), static_cast<int>(vminor), static_cast<int>(vmicro));
}

QOperatingSystemVersion* QOperatingSystemVersion_Current() {
    return new QOperatingSystemVersion(QOperatingSystemVersion::current());
}

int QOperatingSystemVersion_CurrentType() {
    return static_cast<int>(QOperatingSystemVersion::currentType());
}

QVersionNumber* QOperatingSystemVersion_Version(const QOperatingSystemVersion* self) {
    return new QVersionNumber(self->version());
}

int QOperatingSystemVersion_MajorVersion(const QOperatingSystemVersion* self) {
    return self->majorVersion();
}

int QOperatingSystemVersion_MinorVersion(const QOperatingSystemVersion* self) {
    return self->minorVersion();
}

int QOperatingSystemVersion_MicroVersion(const QOperatingSystemVersion* self) {
    return self->microVersion();
}

int QOperatingSystemVersion_SegmentCount(const QOperatingSystemVersion* self) {
    return self->segmentCount();
}

int QOperatingSystemVersion_Type(const QOperatingSystemVersion* self) {
    return static_cast<int>(self->type());
}

libqt_string QOperatingSystemVersion_Name(const QOperatingSystemVersion* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QOperatingSystemVersion_Delete(QOperatingSystemVersion* self) {
    delete self;
}
