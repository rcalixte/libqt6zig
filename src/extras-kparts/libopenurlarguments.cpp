#include <KParts/OpenUrlArguments>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <openurlarguments.h>
#include "libopenurlarguments.h"
#include "libopenurlarguments.hxx"

KParts__OpenUrlArguments* KParts__OpenUrlArguments_new() {
    return new KParts::OpenUrlArguments();
}

KParts__OpenUrlArguments* KParts__OpenUrlArguments_new2(const KParts__OpenUrlArguments* other) {
    return new KParts::OpenUrlArguments(*other);
}

void KParts__OpenUrlArguments_OperatorAssign(KParts__OpenUrlArguments* self, const KParts__OpenUrlArguments* other) {
    self->operator=(*other);
}

bool KParts__OpenUrlArguments_Reload(const KParts__OpenUrlArguments* self) {
    return self->reload();
}

void KParts__OpenUrlArguments_SetReload(KParts__OpenUrlArguments* self, bool b) {
    self->setReload(b);
}

int KParts__OpenUrlArguments_XOffset(const KParts__OpenUrlArguments* self) {
    return self->xOffset();
}

void KParts__OpenUrlArguments_SetXOffset(KParts__OpenUrlArguments* self, int x) {
    self->setXOffset(static_cast<int>(x));
}

int KParts__OpenUrlArguments_YOffset(const KParts__OpenUrlArguments* self) {
    return self->yOffset();
}

void KParts__OpenUrlArguments_SetYOffset(KParts__OpenUrlArguments* self, int y) {
    self->setYOffset(static_cast<int>(y));
}

libqt_string KParts__OpenUrlArguments_MimeType(const KParts__OpenUrlArguments* self) {
    QString _ret = self->mimeType();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KParts__OpenUrlArguments_SetMimeType(KParts__OpenUrlArguments* self, const libqt_string mime) {
    QString mime_QString = QString::fromUtf8(mime.data, mime.len);
    self->setMimeType(mime_QString);
}

bool KParts__OpenUrlArguments_ActionRequestedByUser(const KParts__OpenUrlArguments* self) {
    return self->actionRequestedByUser();
}

void KParts__OpenUrlArguments_SetActionRequestedByUser(KParts__OpenUrlArguments* self, bool userRequested) {
    self->setActionRequestedByUser(userRequested);
}

libqt_map /* of libqt_string to libqt_string */ KParts__OpenUrlArguments_MetaData(KParts__OpenUrlArguments* self) {
    QMap<QString, QString>& _ret = self->metaData();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
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
        QString _mapval_ret = _itr->second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapval_b = _mapval_ret.toUtf8();
        libqt_string _mapval_str;
        _mapval_str.len = _mapval_b.length();
        _mapval_str.data = static_cast<const char*>(malloc(_mapval_str.len + 1));
        memcpy((void*)_mapval_str.data, _mapval_b.data(), _mapval_str.len);
        ((char*)_mapval_str.data)[_mapval_str.len] = '\0';
        _varr[_ctr] = _mapval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

libqt_map /* of libqt_string to libqt_string */ KParts__OpenUrlArguments_MetaData2(const KParts__OpenUrlArguments* self) {
    const QMap<QString, QString>& _ret = self->metaData();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
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
        QString _mapval_ret = _itr->second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapval_b = _mapval_ret.toUtf8();
        libqt_string _mapval_str;
        _mapval_str.len = _mapval_b.length();
        _mapval_str.data = static_cast<const char*>(malloc(_mapval_str.len + 1));
        memcpy((void*)_mapval_str.data, _mapval_b.data(), _mapval_str.len);
        ((char*)_mapval_str.data)[_mapval_str.len] = '\0';
        _varr[_ctr] = _mapval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

void KParts__OpenUrlArguments_Delete(KParts__OpenUrlArguments* self) {
    delete self;
}
