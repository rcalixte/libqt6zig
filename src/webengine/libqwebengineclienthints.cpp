#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWebEngineClientHints>
#include <qwebengineclienthints.h>
#include "libqwebengineclienthints.h"
#include "libqwebengineclienthints.hxx"

QMetaObject* QWebEngineClientHints_MetaObject(const QWebEngineClientHints* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebEngineClientHints_Metacast(QWebEngineClientHints* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebEngineClientHints_Metacall(QWebEngineClientHints* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QWebEngineClientHints_Tr(const char* s) {
    QString _ret = QWebEngineClientHints::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWebEngineClientHints_QmlMarkerUncreatable(QWebEngineClientHints* self) {
    self->qt_qmlMarker_uncreatable();
}

libqt_string QWebEngineClientHints_Arch(const QWebEngineClientHints* self) {
    QString _ret = self->arch();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineClientHints_Platform(const QWebEngineClientHints* self) {
    QString _ret = self->platform();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineClientHints_Model(const QWebEngineClientHints* self) {
    QString _ret = self->model();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QWebEngineClientHints_IsMobile(const QWebEngineClientHints* self) {
    return self->isMobile();
}

libqt_string QWebEngineClientHints_FullVersion(const QWebEngineClientHints* self) {
    QString _ret = self->fullVersion();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineClientHints_PlatformVersion(const QWebEngineClientHints* self) {
    QString _ret = self->platformVersion();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineClientHints_Bitness(const QWebEngineClientHints* self) {
    QString _ret = self->bitness();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_map /* of libqt_string to QVariant* */ QWebEngineClientHints_FullVersionList(const QWebEngineClientHints* self) {
    QMap<QString, QVariant> _ret = self->fullVersionList();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        QString _mapkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapkey_b = _mapkey_ret.toUtf8();
        libqt_string _mapkey_str;
        _mapkey_str.len = _mapkey_b.length();
        _mapkey_str.data = static_cast<const char*>(malloc(_mapkey_str.len + 1));
        memcpy((void*)_mapkey_str.data, _mapkey_b.data(), _mapkey_str.len);
        ((char*)_mapkey_str.data)[_mapkey_str.len] = '\0';
        _karr[_ctr] = _mapkey_str;
        _varr[_ctr] = new QVariant(_itr->second);
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

bool QWebEngineClientHints_IsWow64(const QWebEngineClientHints* self) {
    return self->isWow64();
}

void QWebEngineClientHints_SetArch(QWebEngineClientHints* self, const libqt_string arch) {
    QString arch_QString = QString::fromUtf8(arch.data, arch.len);
    self->setArch(arch_QString);
}

void QWebEngineClientHints_SetPlatform(QWebEngineClientHints* self, const libqt_string platform) {
    QString platform_QString = QString::fromUtf8(platform.data, platform.len);
    self->setPlatform(platform_QString);
}

void QWebEngineClientHints_SetModel(QWebEngineClientHints* self, const libqt_string model) {
    QString model_QString = QString::fromUtf8(model.data, model.len);
    self->setModel(model_QString);
}

void QWebEngineClientHints_SetIsMobile(QWebEngineClientHints* self, bool isMobile) {
    self->setIsMobile(isMobile);
}

void QWebEngineClientHints_SetFullVersion(QWebEngineClientHints* self, const libqt_string fullVersion) {
    QString fullVersion_QString = QString::fromUtf8(fullVersion.data, fullVersion.len);
    self->setFullVersion(fullVersion_QString);
}

void QWebEngineClientHints_SetPlatformVersion(QWebEngineClientHints* self, const libqt_string platformVersion) {
    QString platformVersion_QString = QString::fromUtf8(platformVersion.data, platformVersion.len);
    self->setPlatformVersion(platformVersion_QString);
}

void QWebEngineClientHints_SetBitness(QWebEngineClientHints* self, const libqt_string bitness) {
    QString bitness_QString = QString::fromUtf8(bitness.data, bitness.len);
    self->setBitness(bitness_QString);
}

void QWebEngineClientHints_SetFullVersionList(QWebEngineClientHints* self, const libqt_map /* of libqt_string to QVariant* */ fullVersionList) {
    QMap<QString, QVariant> fullVersionList_QMap;
    libqt_string* fullVersionList_karr = static_cast<libqt_string*>(fullVersionList.keys);
    QVariant** fullVersionList_varr = static_cast<QVariant**>(fullVersionList.values);
    for (size_t i = 0; i < fullVersionList.len; ++i) {
        QString fullVersionList_karr_i_QString = QString::fromUtf8(fullVersionList_karr[i].data, fullVersionList_karr[i].len);
        fullVersionList_QMap[fullVersionList_karr_i_QString] = *(fullVersionList_varr[i]);
    }
    self->setFullVersionList(fullVersionList_QMap);
}

void QWebEngineClientHints_SetIsWow64(QWebEngineClientHints* self, bool isWow64) {
    self->setIsWow64(isWow64);
}

bool QWebEngineClientHints_IsAllClientHintsEnabled(QWebEngineClientHints* self) {
    return self->isAllClientHintsEnabled();
}

void QWebEngineClientHints_SetAllClientHintsEnabled(QWebEngineClientHints* self, bool enabled) {
    self->setAllClientHintsEnabled(enabled);
}

void QWebEngineClientHints_ResetAll(QWebEngineClientHints* self) {
    self->resetAll();
}

libqt_string QWebEngineClientHints_Tr2(const char* s, const char* c) {
    QString _ret = QWebEngineClientHints::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineClientHints_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWebEngineClientHints::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWebEngineClientHints_Delete(QWebEngineClientHints* self) {
    delete self;
}
