#include <QByteArray>
#include <QChildEvent>
#include <QDnsDomainNameRecord>
#include <QDnsHostAddressRecord>
#include <QDnsLookup>
#include <QDnsMailExchangeRecord>
#include <QDnsServiceRecord>
#include <QDnsTextRecord>
#include <QDnsTlsAssociationRecord>
#include <QEvent>
#include <QHostAddress>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSslConfiguration>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qdnslookup.h>
#include "libqdnslookup.h"
#include "libqdnslookup.hxx"

QDnsDomainNameRecord* QDnsDomainNameRecord_new() {
    return new QDnsDomainNameRecord();
}

QDnsDomainNameRecord* QDnsDomainNameRecord_new2(const QDnsDomainNameRecord* other) {
    return new QDnsDomainNameRecord(*other);
}

void QDnsDomainNameRecord_OperatorAssign(QDnsDomainNameRecord* self, const QDnsDomainNameRecord* other) {
    self->operator=(*other);
}

void QDnsDomainNameRecord_Swap(QDnsDomainNameRecord* self, QDnsDomainNameRecord* other) {
    self->swap(*other);
}

libqt_string QDnsDomainNameRecord_Name(const QDnsDomainNameRecord* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned int QDnsDomainNameRecord_TimeToLive(const QDnsDomainNameRecord* self) {
    return static_cast<unsigned int>(self->timeToLive());
}

libqt_string QDnsDomainNameRecord_Value(const QDnsDomainNameRecord* self) {
    QString _ret = self->value();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDnsDomainNameRecord_Delete(QDnsDomainNameRecord* self) {
    delete self;
}

QDnsHostAddressRecord* QDnsHostAddressRecord_new() {
    return new QDnsHostAddressRecord();
}

QDnsHostAddressRecord* QDnsHostAddressRecord_new2(const QDnsHostAddressRecord* other) {
    return new QDnsHostAddressRecord(*other);
}

void QDnsHostAddressRecord_OperatorAssign(QDnsHostAddressRecord* self, const QDnsHostAddressRecord* other) {
    self->operator=(*other);
}

void QDnsHostAddressRecord_Swap(QDnsHostAddressRecord* self, QDnsHostAddressRecord* other) {
    self->swap(*other);
}

libqt_string QDnsHostAddressRecord_Name(const QDnsHostAddressRecord* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned int QDnsHostAddressRecord_TimeToLive(const QDnsHostAddressRecord* self) {
    return static_cast<unsigned int>(self->timeToLive());
}

QHostAddress* QDnsHostAddressRecord_Value(const QDnsHostAddressRecord* self) {
    return new QHostAddress(self->value());
}

void QDnsHostAddressRecord_Delete(QDnsHostAddressRecord* self) {
    delete self;
}

QDnsMailExchangeRecord* QDnsMailExchangeRecord_new() {
    return new QDnsMailExchangeRecord();
}

QDnsMailExchangeRecord* QDnsMailExchangeRecord_new2(const QDnsMailExchangeRecord* other) {
    return new QDnsMailExchangeRecord(*other);
}

void QDnsMailExchangeRecord_OperatorAssign(QDnsMailExchangeRecord* self, const QDnsMailExchangeRecord* other) {
    self->operator=(*other);
}

void QDnsMailExchangeRecord_Swap(QDnsMailExchangeRecord* self, QDnsMailExchangeRecord* other) {
    self->swap(*other);
}

libqt_string QDnsMailExchangeRecord_Exchange(const QDnsMailExchangeRecord* self) {
    QString _ret = self->exchange();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDnsMailExchangeRecord_Name(const QDnsMailExchangeRecord* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

uint16_t QDnsMailExchangeRecord_Preference(const QDnsMailExchangeRecord* self) {
    return static_cast<uint16_t>(self->preference());
}

unsigned int QDnsMailExchangeRecord_TimeToLive(const QDnsMailExchangeRecord* self) {
    return static_cast<unsigned int>(self->timeToLive());
}

void QDnsMailExchangeRecord_Delete(QDnsMailExchangeRecord* self) {
    delete self;
}

QDnsServiceRecord* QDnsServiceRecord_new() {
    return new QDnsServiceRecord();
}

QDnsServiceRecord* QDnsServiceRecord_new2(const QDnsServiceRecord* other) {
    return new QDnsServiceRecord(*other);
}

void QDnsServiceRecord_OperatorAssign(QDnsServiceRecord* self, const QDnsServiceRecord* other) {
    self->operator=(*other);
}

void QDnsServiceRecord_Swap(QDnsServiceRecord* self, QDnsServiceRecord* other) {
    self->swap(*other);
}

libqt_string QDnsServiceRecord_Name(const QDnsServiceRecord* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

uint16_t QDnsServiceRecord_Port(const QDnsServiceRecord* self) {
    return static_cast<uint16_t>(self->port());
}

uint16_t QDnsServiceRecord_Priority(const QDnsServiceRecord* self) {
    return static_cast<uint16_t>(self->priority());
}

libqt_string QDnsServiceRecord_Target(const QDnsServiceRecord* self) {
    QString _ret = self->target();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned int QDnsServiceRecord_TimeToLive(const QDnsServiceRecord* self) {
    return static_cast<unsigned int>(self->timeToLive());
}

uint16_t QDnsServiceRecord_Weight(const QDnsServiceRecord* self) {
    return static_cast<uint16_t>(self->weight());
}

void QDnsServiceRecord_Delete(QDnsServiceRecord* self) {
    delete self;
}

QDnsTextRecord* QDnsTextRecord_new() {
    return new QDnsTextRecord();
}

QDnsTextRecord* QDnsTextRecord_new2(const QDnsTextRecord* other) {
    return new QDnsTextRecord(*other);
}

void QDnsTextRecord_OperatorAssign(QDnsTextRecord* self, const QDnsTextRecord* other) {
    self->operator=(*other);
}

void QDnsTextRecord_Swap(QDnsTextRecord* self, QDnsTextRecord* other) {
    self->swap(*other);
}

libqt_string QDnsTextRecord_Name(const QDnsTextRecord* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned int QDnsTextRecord_TimeToLive(const QDnsTextRecord* self) {
    return static_cast<unsigned int>(self->timeToLive());
}

libqt_list /* of libqt_string */ QDnsTextRecord_Values(const QDnsTextRecord* self) {
    QList<QByteArray> _ret = self->values();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QDnsTextRecord_Delete(QDnsTextRecord* self) {
    delete self;
}

QDnsTlsAssociationRecord* QDnsTlsAssociationRecord_new() {
    return new QDnsTlsAssociationRecord();
}

QDnsTlsAssociationRecord* QDnsTlsAssociationRecord_new2(const QDnsTlsAssociationRecord* other) {
    return new QDnsTlsAssociationRecord(*other);
}

void QDnsTlsAssociationRecord_OperatorAssign(QDnsTlsAssociationRecord* self, const QDnsTlsAssociationRecord* other) {
    self->operator=(*other);
}

void QDnsTlsAssociationRecord_Swap(QDnsTlsAssociationRecord* self, QDnsTlsAssociationRecord* other) {
    self->swap(*other);
}

libqt_string QDnsTlsAssociationRecord_Name(const QDnsTlsAssociationRecord* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned int QDnsTlsAssociationRecord_TimeToLive(const QDnsTlsAssociationRecord* self) {
    return static_cast<unsigned int>(self->timeToLive());
}

uint8_t QDnsTlsAssociationRecord_Usage(const QDnsTlsAssociationRecord* self) {
    return static_cast<uint8_t>(self->usage());
}

uint8_t QDnsTlsAssociationRecord_Selector(const QDnsTlsAssociationRecord* self) {
    return static_cast<uint8_t>(self->selector());
}

uint8_t QDnsTlsAssociationRecord_MatchType(const QDnsTlsAssociationRecord* self) {
    return static_cast<uint8_t>(self->matchType());
}

libqt_string QDnsTlsAssociationRecord_Value(const QDnsTlsAssociationRecord* self) {
    QByteArray _qb = self->value();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDnsTlsAssociationRecord_Delete(QDnsTlsAssociationRecord* self) {
    delete self;
}

QDnsLookup* QDnsLookup_new() {
    return new VirtualQDnsLookup();
}

QDnsLookup* QDnsLookup_new2(int typeVal, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQDnsLookup(static_cast<QDnsLookup::Type>(typeVal), name_QString);
}

QDnsLookup* QDnsLookup_new3(int typeVal, const libqt_string name, const QHostAddress* nameserver) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQDnsLookup(static_cast<QDnsLookup::Type>(typeVal), name_QString, *nameserver);
}

QDnsLookup* QDnsLookup_new4(int typeVal, const libqt_string name, const QHostAddress* nameserver, uint16_t port) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQDnsLookup(static_cast<QDnsLookup::Type>(typeVal), name_QString, *nameserver, static_cast<quint16>(port));
}

QDnsLookup* QDnsLookup_new5(int typeVal, const libqt_string name, uint8_t protocol, const QHostAddress* nameserver) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQDnsLookup(static_cast<QDnsLookup::Type>(typeVal), name_QString, static_cast<QDnsLookup::Protocol>(protocol), *nameserver);
}

QDnsLookup* QDnsLookup_new6(QObject* parent) {
    return new VirtualQDnsLookup(parent);
}

QDnsLookup* QDnsLookup_new7(int typeVal, const libqt_string name, QObject* parent) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQDnsLookup(static_cast<QDnsLookup::Type>(typeVal), name_QString, parent);
}

QDnsLookup* QDnsLookup_new8(int typeVal, const libqt_string name, const QHostAddress* nameserver, QObject* parent) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQDnsLookup(static_cast<QDnsLookup::Type>(typeVal), name_QString, *nameserver, parent);
}

QDnsLookup* QDnsLookup_new9(int typeVal, const libqt_string name, const QHostAddress* nameserver, uint16_t port, QObject* parent) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQDnsLookup(static_cast<QDnsLookup::Type>(typeVal), name_QString, *nameserver, static_cast<quint16>(port), parent);
}

QDnsLookup* QDnsLookup_new10(int typeVal, const libqt_string name, uint8_t protocol, const QHostAddress* nameserver, uint16_t port) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQDnsLookup(static_cast<QDnsLookup::Type>(typeVal), name_QString, static_cast<QDnsLookup::Protocol>(protocol), *nameserver, static_cast<quint16>(port));
}

QDnsLookup* QDnsLookup_new11(int typeVal, const libqt_string name, uint8_t protocol, const QHostAddress* nameserver, uint16_t port, QObject* parent) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQDnsLookup(static_cast<QDnsLookup::Type>(typeVal), name_QString, static_cast<QDnsLookup::Protocol>(protocol), *nameserver, static_cast<quint16>(port), parent);
}

QMetaObject* QDnsLookup_MetaObject(const QDnsLookup* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDnsLookup_Metacast(QDnsLookup* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDnsLookup_Metacall(QDnsLookup* self, int param1, int param2, void** param3) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDnsLookup*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDnsLookup_Tr(const char* s) {
    QString _ret = QDnsLookup::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QDnsLookup_IsAuthenticData(const QDnsLookup* self) {
    return self->isAuthenticData();
}

int QDnsLookup_Error(const QDnsLookup* self) {
    return static_cast<int>(self->error());
}

libqt_string QDnsLookup_ErrorString(const QDnsLookup* self) {
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

bool QDnsLookup_IsFinished(const QDnsLookup* self) {
    return self->isFinished();
}

libqt_string QDnsLookup_Name(const QDnsLookup* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDnsLookup_SetName(QDnsLookup* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

int QDnsLookup_Type(const QDnsLookup* self) {
    return static_cast<int>(self->type());
}

void QDnsLookup_SetType(QDnsLookup* self, int typeVal) {
    self->setType(static_cast<QDnsLookup::Type>(typeVal));
}

QHostAddress* QDnsLookup_Nameserver(const QDnsLookup* self) {
    return new QHostAddress(self->nameserver());
}

void QDnsLookup_SetNameserver(QDnsLookup* self, const QHostAddress* nameserver) {
    self->setNameserver(*nameserver);
}

uint16_t QDnsLookup_NameserverPort(const QDnsLookup* self) {
    return static_cast<uint16_t>(self->nameserverPort());
}

void QDnsLookup_SetNameserverPort(QDnsLookup* self, uint16_t port) {
    self->setNameserverPort(static_cast<quint16>(port));
}

uint8_t QDnsLookup_NameserverProtocol(const QDnsLookup* self) {
    return static_cast<uint8_t>(self->nameserverProtocol());
}

void QDnsLookup_SetNameserverProtocol(QDnsLookup* self, uint8_t protocol) {
    self->setNameserverProtocol(static_cast<QDnsLookup::Protocol>(protocol));
}

void QDnsLookup_SetNameserver2(QDnsLookup* self, uint8_t protocol, const QHostAddress* nameserver) {
    self->setNameserver(static_cast<QDnsLookup::Protocol>(protocol), *nameserver);
}

void QDnsLookup_SetNameserver3(QDnsLookup* self, const QHostAddress* nameserver, uint16_t port) {
    self->setNameserver(*nameserver, static_cast<quint16>(port));
}

libqt_list /* of QDnsDomainNameRecord* */ QDnsLookup_CanonicalNameRecords(const QDnsLookup* self) {
    QList<QDnsDomainNameRecord> _ret = self->canonicalNameRecords();
    // Convert QList<> from C++ memory to manually-managed C memory
    QDnsDomainNameRecord** _arr = static_cast<QDnsDomainNameRecord**>(malloc(sizeof(QDnsDomainNameRecord*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QDnsDomainNameRecord(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QDnsHostAddressRecord* */ QDnsLookup_HostAddressRecords(const QDnsLookup* self) {
    QList<QDnsHostAddressRecord> _ret = self->hostAddressRecords();
    // Convert QList<> from C++ memory to manually-managed C memory
    QDnsHostAddressRecord** _arr = static_cast<QDnsHostAddressRecord**>(malloc(sizeof(QDnsHostAddressRecord*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QDnsHostAddressRecord(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QDnsMailExchangeRecord* */ QDnsLookup_MailExchangeRecords(const QDnsLookup* self) {
    QList<QDnsMailExchangeRecord> _ret = self->mailExchangeRecords();
    // Convert QList<> from C++ memory to manually-managed C memory
    QDnsMailExchangeRecord** _arr = static_cast<QDnsMailExchangeRecord**>(malloc(sizeof(QDnsMailExchangeRecord*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QDnsMailExchangeRecord(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QDnsDomainNameRecord* */ QDnsLookup_NameServerRecords(const QDnsLookup* self) {
    QList<QDnsDomainNameRecord> _ret = self->nameServerRecords();
    // Convert QList<> from C++ memory to manually-managed C memory
    QDnsDomainNameRecord** _arr = static_cast<QDnsDomainNameRecord**>(malloc(sizeof(QDnsDomainNameRecord*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QDnsDomainNameRecord(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QDnsDomainNameRecord* */ QDnsLookup_PointerRecords(const QDnsLookup* self) {
    QList<QDnsDomainNameRecord> _ret = self->pointerRecords();
    // Convert QList<> from C++ memory to manually-managed C memory
    QDnsDomainNameRecord** _arr = static_cast<QDnsDomainNameRecord**>(malloc(sizeof(QDnsDomainNameRecord*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QDnsDomainNameRecord(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QDnsServiceRecord* */ QDnsLookup_ServiceRecords(const QDnsLookup* self) {
    QList<QDnsServiceRecord> _ret = self->serviceRecords();
    // Convert QList<> from C++ memory to manually-managed C memory
    QDnsServiceRecord** _arr = static_cast<QDnsServiceRecord**>(malloc(sizeof(QDnsServiceRecord*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QDnsServiceRecord(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QDnsTextRecord* */ QDnsLookup_TextRecords(const QDnsLookup* self) {
    QList<QDnsTextRecord> _ret = self->textRecords();
    // Convert QList<> from C++ memory to manually-managed C memory
    QDnsTextRecord** _arr = static_cast<QDnsTextRecord**>(malloc(sizeof(QDnsTextRecord*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QDnsTextRecord(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QDnsTlsAssociationRecord* */ QDnsLookup_TlsAssociationRecords(const QDnsLookup* self) {
    QList<QDnsTlsAssociationRecord> _ret = self->tlsAssociationRecords();
    // Convert QList<> from C++ memory to manually-managed C memory
    QDnsTlsAssociationRecord** _arr = static_cast<QDnsTlsAssociationRecord**>(malloc(sizeof(QDnsTlsAssociationRecord*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QDnsTlsAssociationRecord(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QDnsLookup_SetSslConfiguration(QDnsLookup* self, const QSslConfiguration* sslConfiguration) {
    self->setSslConfiguration(*sslConfiguration);
}

QSslConfiguration* QDnsLookup_SslConfiguration(const QDnsLookup* self) {
    return new QSslConfiguration(self->sslConfiguration());
}

bool QDnsLookup_IsProtocolSupported(uint8_t protocol) {
    return QDnsLookup::isProtocolSupported(static_cast<QDnsLookup::Protocol>(protocol));
}

uint16_t QDnsLookup_DefaultPortForProtocol(uint8_t protocol) {
    return static_cast<uint16_t>(QDnsLookup::defaultPortForProtocol(static_cast<QDnsLookup::Protocol>(protocol)));
}

void QDnsLookup_Abort(QDnsLookup* self) {
    self->abort();
}

void QDnsLookup_Lookup(QDnsLookup* self) {
    self->lookup();
}

void QDnsLookup_Finished(QDnsLookup* self) {
    self->finished();
}

void QDnsLookup_Connect_Finished(QDnsLookup* self, intptr_t slot) {
    void (*slotFunc)(QDnsLookup*) = reinterpret_cast<void (*)(QDnsLookup*)>(slot);
    QDnsLookup::connect(self, &QDnsLookup::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QDnsLookup_NameChanged(QDnsLookup* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->nameChanged(name_QString);
}

void QDnsLookup_Connect_NameChanged(QDnsLookup* self, intptr_t slot) {
    void (*slotFunc)(QDnsLookup*, const char*) = reinterpret_cast<void (*)(QDnsLookup*, const char*)>(slot);
    QDnsLookup::connect(self, &QDnsLookup::nameChanged, [self, slotFunc](const QString& name) {
        const QString name_ret = name;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray name_b = name_ret.toUtf8();
        const char* name_str = static_cast<const char*>(malloc(name_b.length() + 1));
        memcpy((void*)name_str, name_b.data(), name_b.length());
        ((char*)name_str)[name_b.length()] = '\0';
        const char* sigval1 = name_str;
        slotFunc(self, sigval1);
        libqt_free(name_str);
    });
}

void QDnsLookup_TypeChanged(QDnsLookup* self, int typeVal) {
    self->typeChanged(static_cast<QDnsLookup::Type>(typeVal));
}

void QDnsLookup_Connect_TypeChanged(QDnsLookup* self, intptr_t slot) {
    void (*slotFunc)(QDnsLookup*, int) = reinterpret_cast<void (*)(QDnsLookup*, int)>(slot);
    QDnsLookup::connect(self, &QDnsLookup::typeChanged, [self, slotFunc](QDnsLookup::Type typeVal) {
        int sigval1 = static_cast<int>(typeVal);
        slotFunc(self, sigval1);
    });
}

void QDnsLookup_NameserverChanged(QDnsLookup* self, const QHostAddress* nameserver) {
    self->nameserverChanged(*nameserver);
}

void QDnsLookup_Connect_NameserverChanged(QDnsLookup* self, intptr_t slot) {
    void (*slotFunc)(QDnsLookup*, QHostAddress*) = reinterpret_cast<void (*)(QDnsLookup*, QHostAddress*)>(slot);
    QDnsLookup::connect(self, &QDnsLookup::nameserverChanged, [self, slotFunc](const QHostAddress& nameserver) {
        const QHostAddress& nameserver_ret = nameserver;
        // Cast returned reference into pointer
        QHostAddress* sigval1 = const_cast<QHostAddress*>(&nameserver_ret);
        slotFunc(self, sigval1);
    });
}

void QDnsLookup_NameserverPortChanged(QDnsLookup* self, uint16_t port) {
    self->nameserverPortChanged(static_cast<quint16>(port));
}

void QDnsLookup_Connect_NameserverPortChanged(QDnsLookup* self, intptr_t slot) {
    void (*slotFunc)(QDnsLookup*, uint16_t) = reinterpret_cast<void (*)(QDnsLookup*, uint16_t)>(slot);
    QDnsLookup::connect(self, &QDnsLookup::nameserverPortChanged, [self, slotFunc](quint16 port) {
        uint16_t sigval1 = static_cast<uint16_t>(port);
        slotFunc(self, sigval1);
    });
}

void QDnsLookup_NameserverProtocolChanged(QDnsLookup* self, uint8_t protocol) {
    self->nameserverProtocolChanged(static_cast<QDnsLookup::Protocol>(protocol));
}

void QDnsLookup_Connect_NameserverProtocolChanged(QDnsLookup* self, intptr_t slot) {
    void (*slotFunc)(QDnsLookup*, uint8_t) = reinterpret_cast<void (*)(QDnsLookup*, uint8_t)>(slot);
    QDnsLookup::connect(self, &QDnsLookup::nameserverProtocolChanged, [self, slotFunc](QDnsLookup::Protocol protocol) {
        uint8_t sigval1 = static_cast<uint8_t>(protocol);
        slotFunc(self, sigval1);
    });
}

libqt_string QDnsLookup_Tr2(const char* s, const char* c) {
    QString _ret = QDnsLookup::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDnsLookup_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDnsLookup::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDnsLookup_SetNameserver32(QDnsLookup* self, uint8_t protocol, const QHostAddress* nameserver, uint16_t port) {
    self->setNameserver(static_cast<QDnsLookup::Protocol>(protocol), *nameserver, static_cast<quint16>(port));
}

// Base class handler implementation
int QDnsLookup_QBaseMetacall(QDnsLookup* self, int param1, int param2, void** param3) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_Metacall_IsBase(true);
        return vqdnslookup->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QDnsLookup::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnMetacall(QDnsLookup* self, intptr_t slot) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_Metacall_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDnsLookup_Event(QDnsLookup* self, QEvent* event) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        return vqdnslookup->event(event);
    } else {
        return self->QDnsLookup::event(event);
    }
}

// Base class handler implementation
bool QDnsLookup_QBaseEvent(QDnsLookup* self, QEvent* event) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_Event_IsBase(true);
        return vqdnslookup->event(event);
    } else {
        return self->QDnsLookup::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnEvent(QDnsLookup* self, intptr_t slot) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_Event_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDnsLookup_EventFilter(QDnsLookup* self, QObject* watched, QEvent* event) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        return vqdnslookup->eventFilter(watched, event);
    } else {
        return self->QDnsLookup::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDnsLookup_QBaseEventFilter(QDnsLookup* self, QObject* watched, QEvent* event) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_EventFilter_IsBase(true);
        return vqdnslookup->eventFilter(watched, event);
    } else {
        return self->QDnsLookup::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnEventFilter(QDnsLookup* self, intptr_t slot) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_EventFilter_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDnsLookup_TimerEvent(QDnsLookup* self, QTimerEvent* event) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->timerEvent(event);
    } else {
        ((VirtualQDnsLookup*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDnsLookup_QBaseTimerEvent(QDnsLookup* self, QTimerEvent* event) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_TimerEvent_IsBase(true);
        vqdnslookup->timerEvent(event);
    } else {
        ((VirtualQDnsLookup*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnTimerEvent(QDnsLookup* self, intptr_t slot) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_TimerEvent_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDnsLookup_ChildEvent(QDnsLookup* self, QChildEvent* event) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->childEvent(event);
    } else {
        ((VirtualQDnsLookup*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDnsLookup_QBaseChildEvent(QDnsLookup* self, QChildEvent* event) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_ChildEvent_IsBase(true);
        vqdnslookup->childEvent(event);
    } else {
        ((VirtualQDnsLookup*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnChildEvent(QDnsLookup* self, intptr_t slot) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_ChildEvent_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDnsLookup_CustomEvent(QDnsLookup* self, QEvent* event) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->customEvent(event);
    } else {
        ((VirtualQDnsLookup*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDnsLookup_QBaseCustomEvent(QDnsLookup* self, QEvent* event) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_CustomEvent_IsBase(true);
        vqdnslookup->customEvent(event);
    } else {
        ((VirtualQDnsLookup*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnCustomEvent(QDnsLookup* self, intptr_t slot) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_CustomEvent_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDnsLookup_ConnectNotify(QDnsLookup* self, const QMetaMethod* signal) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->connectNotify(*signal);
    } else {
        ((VirtualQDnsLookup*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDnsLookup_QBaseConnectNotify(QDnsLookup* self, const QMetaMethod* signal) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_ConnectNotify_IsBase(true);
        vqdnslookup->connectNotify(*signal);
    } else {
        ((VirtualQDnsLookup*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnConnectNotify(QDnsLookup* self, intptr_t slot) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_ConnectNotify_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDnsLookup_DisconnectNotify(QDnsLookup* self, const QMetaMethod* signal) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->disconnectNotify(*signal);
    } else {
        ((VirtualQDnsLookup*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDnsLookup_QBaseDisconnectNotify(QDnsLookup* self, const QMetaMethod* signal) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_DisconnectNotify_IsBase(true);
        vqdnslookup->disconnectNotify(*signal);
    } else {
        ((VirtualQDnsLookup*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnDisconnectNotify(QDnsLookup* self, intptr_t slot) {
    auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self);
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_DisconnectNotify_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDnsLookup_Sender(const QDnsLookup* self) {
    auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self));
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        return vqdnslookup->sender();
    } else {
        return ((VirtualQDnsLookup*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDnsLookup_QBaseSender(const QDnsLookup* self) {
    auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self));
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_Sender_IsBase(true);
        return vqdnslookup->sender();
    } else {
        return ((VirtualQDnsLookup*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnSender(const QDnsLookup* self, intptr_t slot) {
    auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self));
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_Sender_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDnsLookup_SenderSignalIndex(const QDnsLookup* self) {
    auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self));
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        return vqdnslookup->senderSignalIndex();
    } else {
        return ((VirtualQDnsLookup*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDnsLookup_QBaseSenderSignalIndex(const QDnsLookup* self) {
    auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self));
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_SenderSignalIndex_IsBase(true);
        return vqdnslookup->senderSignalIndex();
    } else {
        return ((VirtualQDnsLookup*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnSenderSignalIndex(const QDnsLookup* self, intptr_t slot) {
    auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self));
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDnsLookup_Receivers(const QDnsLookup* self, const char* signal) {
    auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self));
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        return vqdnslookup->receivers(signal);
    } else {
        return ((VirtualQDnsLookup*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDnsLookup_QBaseReceivers(const QDnsLookup* self, const char* signal) {
    auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self));
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_Receivers_IsBase(true);
        return vqdnslookup->receivers(signal);
    } else {
        return ((VirtualQDnsLookup*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnReceivers(const QDnsLookup* self, intptr_t slot) {
    auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self));
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_Receivers_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDnsLookup_IsSignalConnected(const QDnsLookup* self, const QMetaMethod* signal) {
    auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self));
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        return vqdnslookup->isSignalConnected(*signal);
    } else {
        return ((VirtualQDnsLookup*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDnsLookup_QBaseIsSignalConnected(const QDnsLookup* self, const QMetaMethod* signal) {
    auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self));
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_IsSignalConnected_IsBase(true);
        return vqdnslookup->isSignalConnected(*signal);
    } else {
        return ((VirtualQDnsLookup*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnIsSignalConnected(const QDnsLookup* self, intptr_t slot) {
    auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self));
    if (vqdnslookup && vqdnslookup->isVirtualQDnsLookup) {
        vqdnslookup->setQDnsLookup_IsSignalConnected_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_IsSignalConnected_Callback>(slot));
    }
}

void QDnsLookup_Delete(QDnsLookup* self) {
    delete self;
}
