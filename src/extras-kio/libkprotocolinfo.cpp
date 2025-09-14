#include <KProtocolInfo>
#define WORKAROUND_INNER_CLASS_DEFINITION_KProtocolInfo__ExtraField
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <kprotocolinfo.h>
#include "libkprotocolinfo.h"
#include "libkprotocolinfo.hxx"

libqt_list /* of libqt_string */ KProtocolInfo_Protocols() {
    QList<QString> _ret = KProtocolInfo::protocols();
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

bool KProtocolInfo_IsKnownProtocol(const QUrl* url) {
    return KProtocolInfo::isKnownProtocol(*url);
}

bool KProtocolInfo_IsKnownProtocol2(const libqt_string protocol) {
    QString protocol_QString = QString::fromUtf8(protocol.data, protocol.len);
    return KProtocolInfo::isKnownProtocol(protocol_QString);
}

libqt_string KProtocolInfo_Exec(const libqt_string protocol) {
    QString protocol_QString = QString::fromUtf8(protocol.data, protocol.len);
    QString _ret = KProtocolInfo::exec(protocol_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of KProtocolInfo__ExtraField* */ KProtocolInfo_ExtraFields(const QUrl* url) {
    QList<KProtocolInfo::ExtraField> _ret = KProtocolInfo::extraFields(*url);
    // Convert QList<> from C++ memory to manually-managed C memory
    KProtocolInfo__ExtraField** _arr = static_cast<KProtocolInfo__ExtraField**>(malloc(sizeof(KProtocolInfo__ExtraField*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KProtocolInfo::ExtraField(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool KProtocolInfo_IsHelperProtocol(const QUrl* url) {
    return KProtocolInfo::isHelperProtocol(*url);
}

bool KProtocolInfo_IsHelperProtocol2(const libqt_string protocol) {
    QString protocol_QString = QString::fromUtf8(protocol.data, protocol.len);
    return KProtocolInfo::isHelperProtocol(protocol_QString);
}

bool KProtocolInfo_IsFilterProtocol(const QUrl* url) {
    return KProtocolInfo::isFilterProtocol(*url);
}

bool KProtocolInfo_IsFilterProtocol2(const libqt_string protocol) {
    QString protocol_QString = QString::fromUtf8(protocol.data, protocol.len);
    return KProtocolInfo::isFilterProtocol(protocol_QString);
}

libqt_string KProtocolInfo_Icon(const libqt_string protocol) {
    QString protocol_QString = QString::fromUtf8(protocol.data, protocol.len);
    QString _ret = KProtocolInfo::icon(protocol_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KProtocolInfo_Config(const libqt_string protocol) {
    QString protocol_QString = QString::fromUtf8(protocol.data, protocol.len);
    QString _ret = KProtocolInfo::config(protocol_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KProtocolInfo_MaxWorkers(const libqt_string protocol) {
    QString protocol_QString = QString::fromUtf8(protocol.data, protocol.len);
    return KProtocolInfo::maxWorkers(protocol_QString);
}

int KProtocolInfo_MaxWorkersPerHost(const libqt_string protocol) {
    QString protocol_QString = QString::fromUtf8(protocol.data, protocol.len);
    return KProtocolInfo::maxWorkersPerHost(protocol_QString);
}

bool KProtocolInfo_DetermineMimetypeFromExtension(const libqt_string protocol) {
    QString protocol_QString = QString::fromUtf8(protocol.data, protocol.len);
    return KProtocolInfo::determineMimetypeFromExtension(protocol_QString);
}

libqt_string KProtocolInfo_DefaultMimetype(const libqt_string protocol) {
    QString protocol_QString = QString::fromUtf8(protocol.data, protocol.len);
    QString _ret = KProtocolInfo::defaultMimetype(protocol_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KProtocolInfo_DocPath(const libqt_string protocol) {
    QString protocol_QString = QString::fromUtf8(protocol.data, protocol.len);
    QString _ret = KProtocolInfo::docPath(protocol_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KProtocolInfo_ProtocolClass(const libqt_string protocol) {
    QString protocol_QString = QString::fromUtf8(protocol.data, protocol.len);
    QString _ret = KProtocolInfo::protocolClass(protocol_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KProtocolInfo_ShowFilePreview(const libqt_string protocol) {
    QString protocol_QString = QString::fromUtf8(protocol.data, protocol.len);
    return KProtocolInfo::showFilePreview(protocol_QString);
}

libqt_list /* of libqt_string */ KProtocolInfo_Capabilities(const libqt_string protocol) {
    QString protocol_QString = QString::fromUtf8(protocol.data, protocol.len);
    QList<QString> _ret = KProtocolInfo::capabilities(protocol_QString);
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

libqt_list /* of libqt_string */ KProtocolInfo_ArchiveMimetypes(const libqt_string protocol) {
    QString protocol_QString = QString::fromUtf8(protocol.data, protocol.len);
    QList<QString> _ret = KProtocolInfo::archiveMimetypes(protocol_QString);
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

libqt_string KProtocolInfo_ProxiedBy(const libqt_string protocol) {
    QString protocol_QString = QString::fromUtf8(protocol.data, protocol.len);
    QString _ret = KProtocolInfo::proxiedBy(protocol_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KProtocolInfo_IsKnownProtocol22(const libqt_string protocol, bool updateCacheIfNotfound) {
    QString protocol_QString = QString::fromUtf8(protocol.data, protocol.len);
    return KProtocolInfo::isKnownProtocol(protocol_QString, updateCacheIfNotfound);
}

void KProtocolInfo_Delete(KProtocolInfo* self) {
    delete self;
}

KProtocolInfo__ExtraField* KProtocolInfo__ExtraField_new() {
    return new KProtocolInfo::ExtraField();
}

KProtocolInfo__ExtraField* KProtocolInfo__ExtraField_new2(const libqt_string _name, int _type) {
    QString _name_QString = QString::fromUtf8(_name.data, _name.len);
    return new KProtocolInfo::ExtraField(_name_QString, static_cast<KProtocolInfo::ExtraField::Type>(_type));
}

KProtocolInfo__ExtraField* KProtocolInfo__ExtraField_new3(const KProtocolInfo__ExtraField* param1) {
    return new KProtocolInfo::ExtraField(*param1);
}

libqt_string KProtocolInfo__ExtraField_Name(const KProtocolInfo__ExtraField* self) {
    QString name_ret = self->name;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray name_b = name_ret.toUtf8();
    libqt_string name_str;
    name_str.len = name_b.length();
    name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
    memcpy((void*)name_str.data, name_b.data(), name_str.len);
    ((char*)name_str.data)[name_str.len] = '\0';
    return name_str;
}

void KProtocolInfo__ExtraField_SetName(KProtocolInfo__ExtraField* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->name = name_QString;
}

int KProtocolInfo__ExtraField_Type(const KProtocolInfo__ExtraField* self) {
    return static_cast<int>(self->type);
}

void KProtocolInfo__ExtraField_SetType(KProtocolInfo__ExtraField* self, int type) {
    self->type = static_cast<KProtocolInfo::ExtraField::Type>(type);
}

void KProtocolInfo__ExtraField_OperatorAssign(KProtocolInfo__ExtraField* self, const KProtocolInfo__ExtraField* param1) {
    self->operator=(*param1);
}

void KProtocolInfo__ExtraField_Delete(KProtocolInfo__ExtraField* self) {
    delete self;
}
