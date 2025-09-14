#include <KMountPoint>
#define WORKAROUND_INNER_CLASS_DEFINITION_KMountPoint__List
#include <QList>
#include <QSharedData>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kmountpoint.h>
#include "libkmountpoint.h"
#include "libkmountpoint.hxx"

KMountPoint__List* KMountPoint_PossibleMountPoints() {
    return new KMountPoint::List(KMountPoint::possibleMountPoints());
}

KMountPoint__List* KMountPoint_CurrentMountPoints() {
    return new KMountPoint::List(KMountPoint::currentMountPoints());
}

libqt_string KMountPoint_MountedFrom(const KMountPoint* self) {
    QString _ret = self->mountedFrom();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KMountPoint_IsOnNetwork(const KMountPoint* self) {
    return self->isOnNetwork();
}

dev_t KMountPoint_DeviceId(const KMountPoint* self) {
    return self->deviceId();
}

libqt_string KMountPoint_RealDeviceName(const KMountPoint* self) {
    QString _ret = self->realDeviceName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMountPoint_MountPoint(const KMountPoint* self) {
    QString _ret = self->mountPoint();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMountPoint_MountType(const KMountPoint* self) {
    QString _ret = self->mountType();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KMountPoint_MountOptions(const KMountPoint* self) {
    QList<QString> _ret = self->mountOptions();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool KMountPoint_ProbablySlow(const KMountPoint* self) {
    return self->probablySlow();
}

bool KMountPoint_TestFileSystemFlag(const KMountPoint* self, int flag) {
    return self->testFileSystemFlag(static_cast<KMountPoint::FileSystemFlag>(flag));
}

KMountPoint__List* KMountPoint_PossibleMountPoints1(int infoNeeded) {
    return new KMountPoint::List(KMountPoint::possibleMountPoints(static_cast<KMountPoint::DetailsNeededFlags>(infoNeeded)));
}

KMountPoint__List* KMountPoint_CurrentMountPoints1(int infoNeeded) {
    return new KMountPoint::List(KMountPoint::currentMountPoints(static_cast<KMountPoint::DetailsNeededFlags>(infoNeeded)));
}

void KMountPoint_Delete(KMountPoint* self) {
    delete self;
}

KMountPoint__List* KMountPoint__List_new() {
    return new KMountPoint::List();
}

void KMountPoint__List_Delete(KMountPoint__List* self) {
    delete self;
}
