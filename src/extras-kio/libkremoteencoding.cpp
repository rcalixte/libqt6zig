#include <KRemoteEncoding>
#include <QByteArray>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <kremoteencoding.h>
#include "libkremoteencoding.h"
#include "libkremoteencoding.hxx"

KRemoteEncoding* KRemoteEncoding_new() {
    return new VirtualKRemoteEncoding();
}

KRemoteEncoding* KRemoteEncoding_new2(const char* name) {
    return new VirtualKRemoteEncoding(name);
}

libqt_string KRemoteEncoding_Decode(const KRemoteEncoding* self, const libqt_string name) {
    QByteArray name_QByteArray(name.data, name.len);
    QString _ret = self->decode(name_QByteArray);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KRemoteEncoding_Encode(const KRemoteEncoding* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QByteArray _qb = self->encode(name_QString);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KRemoteEncoding_Encode2(const KRemoteEncoding* self, const QUrl* url) {
    QByteArray _qb = self->encode(*url);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KRemoteEncoding_Directory(const KRemoteEncoding* self, const QUrl* url) {
    QByteArray _qb = self->directory(*url);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KRemoteEncoding_FileName(const KRemoteEncoding* self, const QUrl* url) {
    QByteArray _qb = self->fileName(*url);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* KRemoteEncoding_Encoding(const KRemoteEncoding* self) {
    return (const char*)self->encoding();
}

void KRemoteEncoding_SetEncoding(KRemoteEncoding* self, const char* name) {
    self->setEncoding(name);
}

void KRemoteEncoding_VirtualHook(KRemoteEncoding* self, int id, void* data) {
    auto* vkremoteencoding = dynamic_cast<VirtualKRemoteEncoding*>(self);
    if (vkremoteencoding && vkremoteencoding->isVirtualKRemoteEncoding) {
        vkremoteencoding->virtual_hook(static_cast<int>(id), data);
    }
}

libqt_string KRemoteEncoding_Directory2(const KRemoteEncoding* self, const QUrl* url, bool ignore_trailing_slash) {
    QByteArray _qb = self->directory(*url, ignore_trailing_slash);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
void KRemoteEncoding_QBaseVirtualHook(KRemoteEncoding* self, int id, void* data) {
    auto* vkremoteencoding = dynamic_cast<VirtualKRemoteEncoding*>(self);
    if (vkremoteencoding && vkremoteencoding->isVirtualKRemoteEncoding) {
        vkremoteencoding->setKRemoteEncoding_VirtualHook_IsBase(true);
        vkremoteencoding->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKRemoteEncoding*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KRemoteEncoding_OnVirtualHook(KRemoteEncoding* self, intptr_t slot) {
    auto* vkremoteencoding = dynamic_cast<VirtualKRemoteEncoding*>(self);
    if (vkremoteencoding && vkremoteencoding->isVirtualKRemoteEncoding) {
        vkremoteencoding->setKRemoteEncoding_VirtualHook_Callback(reinterpret_cast<VirtualKRemoteEncoding::KRemoteEncoding_VirtualHook_Callback>(slot));
    }
}

void KRemoteEncoding_Delete(KRemoteEncoding* self) {
    delete self;
}
