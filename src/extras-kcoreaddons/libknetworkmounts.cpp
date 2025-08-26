#include <KNetworkMounts>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <knetworkmounts.h>
#include "libknetworkmounts.h"
#include "libknetworkmounts.hxx"

QMetaObject* KNetworkMounts_MetaObject(const KNetworkMounts* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNetworkMounts_Metacast(KNetworkMounts* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNetworkMounts_Metacall(KNetworkMounts* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNetworkMounts_Tr(const char* s) {
    QString _ret = KNetworkMounts::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KNetworkMounts* KNetworkMounts_Self() {
    return KNetworkMounts::self();
}

bool KNetworkMounts_IsSlowPath(KNetworkMounts* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return self->isSlowPath(path_QString);
}

bool KNetworkMounts_IsOptionEnabledForPath(KNetworkMounts* self, const libqt_string path, int option) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return self->isOptionEnabledForPath(path_QString, static_cast<KNetworkMounts::KNetworkMountOption>(option));
}

bool KNetworkMounts_IsEnabled(const KNetworkMounts* self) {
    return self->isEnabled();
}

void KNetworkMounts_SetEnabled(KNetworkMounts* self, bool value) {
    self->setEnabled(value);
}

bool KNetworkMounts_IsOptionEnabled(const KNetworkMounts* self, const int option) {
    return self->isOptionEnabled(static_cast<const KNetworkMounts::KNetworkMountOption>(option));
}

void KNetworkMounts_SetOption(KNetworkMounts* self, const int option, const bool value) {
    self->setOption(static_cast<const KNetworkMounts::KNetworkMountOption>(option), value);
}

libqt_list /* of libqt_string */ KNetworkMounts_Paths(const KNetworkMounts* self) {
    QList<QString> _ret = self->paths();
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

void KNetworkMounts_SetPaths(KNetworkMounts* self, const libqt_list /* of libqt_string */ paths, int typeVal) {
    QList<QString> paths_QList;
    paths_QList.reserve(paths.len);
    libqt_string* paths_arr = static_cast<libqt_string*>(paths.data);
    for (size_t i = 0; i < paths.len; ++i) {
        QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
        paths_QList.push_back(paths_arr_i_QString);
    }
    self->setPaths(paths_QList, static_cast<KNetworkMounts::KNetworkMountsType>(typeVal));
}

void KNetworkMounts_AddPath(KNetworkMounts* self, const libqt_string path, int typeVal) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->addPath(path_QString, static_cast<KNetworkMounts::KNetworkMountsType>(typeVal));
}

libqt_string KNetworkMounts_CanonicalSymlinkPath(KNetworkMounts* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString _ret = self->canonicalSymlinkPath(path_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNetworkMounts_ClearCache(KNetworkMounts* self) {
    self->clearCache();
}

void KNetworkMounts_Sync(KNetworkMounts* self) {
    self->sync();
}

libqt_string KNetworkMounts_Tr2(const char* s, const char* c) {
    QString _ret = KNetworkMounts::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNetworkMounts_Tr3(const char* s, const char* c, int n) {
    QString _ret = KNetworkMounts::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KNetworkMounts_IsSlowPath2(KNetworkMounts* self, const libqt_string path, int typeVal) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return self->isSlowPath(path_QString, static_cast<KNetworkMounts::KNetworkMountsType>(typeVal));
}

bool KNetworkMounts_IsOptionEnabled2(const KNetworkMounts* self, const int option, const bool defaultValue) {
    return self->isOptionEnabled(static_cast<const KNetworkMounts::KNetworkMountOption>(option), defaultValue);
}

libqt_list /* of libqt_string */ KNetworkMounts_Paths1(const KNetworkMounts* self, int typeVal) {
    QList<QString> _ret = self->paths(static_cast<KNetworkMounts::KNetworkMountsType>(typeVal));
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
