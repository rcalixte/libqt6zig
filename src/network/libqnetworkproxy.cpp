#include <QByteArray>
#include <QList>
#include <QNetworkProxy>
#include <QNetworkProxyFactory>
#include <QNetworkProxyQuery>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <qnetworkproxy.h>
#include "libqnetworkproxy.h"
#include "libqnetworkproxy.hxx"

QNetworkProxyQuery* QNetworkProxyQuery_new() {
    return new QNetworkProxyQuery();
}

QNetworkProxyQuery* QNetworkProxyQuery_new2(const QUrl* requestUrl) {
    return new QNetworkProxyQuery(*requestUrl);
}

QNetworkProxyQuery* QNetworkProxyQuery_new3(const libqt_string hostname, int port) {
    QString hostname_QString = QString::fromUtf8(hostname.data, hostname.len);
    return new QNetworkProxyQuery(hostname_QString, static_cast<int>(port));
}

QNetworkProxyQuery* QNetworkProxyQuery_new4(uint16_t bindPort) {
    return new QNetworkProxyQuery(static_cast<quint16>(bindPort));
}

QNetworkProxyQuery* QNetworkProxyQuery_new5(const QNetworkProxyQuery* other) {
    return new QNetworkProxyQuery(*other);
}

QNetworkProxyQuery* QNetworkProxyQuery_new6(const QUrl* requestUrl, int queryType) {
    return new QNetworkProxyQuery(*requestUrl, static_cast<QNetworkProxyQuery::QueryType>(queryType));
}

QNetworkProxyQuery* QNetworkProxyQuery_new7(const libqt_string hostname, int port, const libqt_string protocolTag) {
    QString hostname_QString = QString::fromUtf8(hostname.data, hostname.len);
    QString protocolTag_QString = QString::fromUtf8(protocolTag.data, protocolTag.len);
    return new QNetworkProxyQuery(hostname_QString, static_cast<int>(port), protocolTag_QString);
}

QNetworkProxyQuery* QNetworkProxyQuery_new8(const libqt_string hostname, int port, const libqt_string protocolTag, int queryType) {
    QString hostname_QString = QString::fromUtf8(hostname.data, hostname.len);
    QString protocolTag_QString = QString::fromUtf8(protocolTag.data, protocolTag.len);
    return new QNetworkProxyQuery(hostname_QString, static_cast<int>(port), protocolTag_QString, static_cast<QNetworkProxyQuery::QueryType>(queryType));
}

QNetworkProxyQuery* QNetworkProxyQuery_new9(uint16_t bindPort, const libqt_string protocolTag) {
    QString protocolTag_QString = QString::fromUtf8(protocolTag.data, protocolTag.len);
    return new QNetworkProxyQuery(static_cast<quint16>(bindPort), protocolTag_QString);
}

QNetworkProxyQuery* QNetworkProxyQuery_new10(uint16_t bindPort, const libqt_string protocolTag, int queryType) {
    QString protocolTag_QString = QString::fromUtf8(protocolTag.data, protocolTag.len);
    return new QNetworkProxyQuery(static_cast<quint16>(bindPort), protocolTag_QString, static_cast<QNetworkProxyQuery::QueryType>(queryType));
}

void QNetworkProxyQuery_OperatorAssign(QNetworkProxyQuery* self, const QNetworkProxyQuery* other) {
    self->operator=(*other);
}

void QNetworkProxyQuery_Swap(QNetworkProxyQuery* self, QNetworkProxyQuery* other) {
    self->swap(*other);
}

bool QNetworkProxyQuery_OperatorEqual(const QNetworkProxyQuery* self, const QNetworkProxyQuery* other) {
    return (*self == *other);
}

bool QNetworkProxyQuery_OperatorNotEqual(const QNetworkProxyQuery* self, const QNetworkProxyQuery* other) {
    return (*self != *other);
}

int QNetworkProxyQuery_QueryType(const QNetworkProxyQuery* self) {
    return static_cast<int>(self->queryType());
}

void QNetworkProxyQuery_SetQueryType(QNetworkProxyQuery* self, int typeVal) {
    self->setQueryType(static_cast<QNetworkProxyQuery::QueryType>(typeVal));
}

int QNetworkProxyQuery_PeerPort(const QNetworkProxyQuery* self) {
    return self->peerPort();
}

void QNetworkProxyQuery_SetPeerPort(QNetworkProxyQuery* self, int port) {
    self->setPeerPort(static_cast<int>(port));
}

libqt_string QNetworkProxyQuery_PeerHostName(const QNetworkProxyQuery* self) {
    QString _ret = self->peerHostName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QNetworkProxyQuery_SetPeerHostName(QNetworkProxyQuery* self, const libqt_string hostname) {
    QString hostname_QString = QString::fromUtf8(hostname.data, hostname.len);
    self->setPeerHostName(hostname_QString);
}

int QNetworkProxyQuery_LocalPort(const QNetworkProxyQuery* self) {
    return self->localPort();
}

void QNetworkProxyQuery_SetLocalPort(QNetworkProxyQuery* self, int port) {
    self->setLocalPort(static_cast<int>(port));
}

libqt_string QNetworkProxyQuery_ProtocolTag(const QNetworkProxyQuery* self) {
    QString _ret = self->protocolTag();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QNetworkProxyQuery_SetProtocolTag(QNetworkProxyQuery* self, const libqt_string protocolTag) {
    QString protocolTag_QString = QString::fromUtf8(protocolTag.data, protocolTag.len);
    self->setProtocolTag(protocolTag_QString);
}

QUrl* QNetworkProxyQuery_Url(const QNetworkProxyQuery* self) {
    return new QUrl(self->url());
}

void QNetworkProxyQuery_SetUrl(QNetworkProxyQuery* self, const QUrl* url) {
    self->setUrl(*url);
}

void QNetworkProxyQuery_Delete(QNetworkProxyQuery* self) {
    delete self;
}

QNetworkProxy* QNetworkProxy_new() {
    return new QNetworkProxy();
}

QNetworkProxy* QNetworkProxy_new2(int typeVal) {
    return new QNetworkProxy(static_cast<QNetworkProxy::ProxyType>(typeVal));
}

QNetworkProxy* QNetworkProxy_new3(const QNetworkProxy* other) {
    return new QNetworkProxy(*other);
}

QNetworkProxy* QNetworkProxy_new4(int typeVal, const libqt_string hostName) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    return new QNetworkProxy(static_cast<QNetworkProxy::ProxyType>(typeVal), hostName_QString);
}

QNetworkProxy* QNetworkProxy_new5(int typeVal, const libqt_string hostName, uint16_t port) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    return new QNetworkProxy(static_cast<QNetworkProxy::ProxyType>(typeVal), hostName_QString, static_cast<quint16>(port));
}

QNetworkProxy* QNetworkProxy_new6(int typeVal, const libqt_string hostName, uint16_t port, const libqt_string user) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    return new QNetworkProxy(static_cast<QNetworkProxy::ProxyType>(typeVal), hostName_QString, static_cast<quint16>(port), user_QString);
}

QNetworkProxy* QNetworkProxy_new7(int typeVal, const libqt_string hostName, uint16_t port, const libqt_string user, const libqt_string password) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString password_QString = QString::fromUtf8(password.data, password.len);
    return new QNetworkProxy(static_cast<QNetworkProxy::ProxyType>(typeVal), hostName_QString, static_cast<quint16>(port), user_QString, password_QString);
}

void QNetworkProxy_OperatorAssign(QNetworkProxy* self, const QNetworkProxy* other) {
    self->operator=(*other);
}

void QNetworkProxy_Swap(QNetworkProxy* self, QNetworkProxy* other) {
    self->swap(*other);
}

bool QNetworkProxy_OperatorEqual(const QNetworkProxy* self, const QNetworkProxy* other) {
    return (*self == *other);
}

bool QNetworkProxy_OperatorNotEqual(const QNetworkProxy* self, const QNetworkProxy* other) {
    return (*self != *other);
}

void QNetworkProxy_SetType(QNetworkProxy* self, int typeVal) {
    self->setType(static_cast<QNetworkProxy::ProxyType>(typeVal));
}

int QNetworkProxy_Type(const QNetworkProxy* self) {
    return static_cast<int>(self->type());
}

void QNetworkProxy_SetCapabilities(QNetworkProxy* self, int capab) {
    self->setCapabilities(static_cast<QNetworkProxy::Capabilities>(capab));
}

int QNetworkProxy_Capabilities(const QNetworkProxy* self) {
    return static_cast<int>(self->capabilities());
}

bool QNetworkProxy_IsCachingProxy(const QNetworkProxy* self) {
    return self->isCachingProxy();
}

bool QNetworkProxy_IsTransparentProxy(const QNetworkProxy* self) {
    return self->isTransparentProxy();
}

void QNetworkProxy_SetUser(QNetworkProxy* self, const libqt_string userName) {
    QString userName_QString = QString::fromUtf8(userName.data, userName.len);
    self->setUser(userName_QString);
}

libqt_string QNetworkProxy_User(const QNetworkProxy* self) {
    QString _ret = self->user();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QNetworkProxy_SetPassword(QNetworkProxy* self, const libqt_string password) {
    QString password_QString = QString::fromUtf8(password.data, password.len);
    self->setPassword(password_QString);
}

libqt_string QNetworkProxy_Password(const QNetworkProxy* self) {
    QString _ret = self->password();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QNetworkProxy_SetHostName(QNetworkProxy* self, const libqt_string hostName) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    self->setHostName(hostName_QString);
}

libqt_string QNetworkProxy_HostName(const QNetworkProxy* self) {
    QString _ret = self->hostName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QNetworkProxy_SetPort(QNetworkProxy* self, uint16_t port) {
    self->setPort(static_cast<quint16>(port));
}

uint16_t QNetworkProxy_Port(const QNetworkProxy* self) {
    return static_cast<uint16_t>(self->port());
}

void QNetworkProxy_SetApplicationProxy(const QNetworkProxy* proxy) {
    QNetworkProxy::setApplicationProxy(*proxy);
}

QNetworkProxy* QNetworkProxy_ApplicationProxy() {
    return new QNetworkProxy(QNetworkProxy::applicationProxy());
}

QVariant* QNetworkProxy_Header(const QNetworkProxy* self, int header) {
    return new QVariant(self->header(static_cast<QNetworkRequest::KnownHeaders>(header)));
}

void QNetworkProxy_SetHeader(QNetworkProxy* self, int header, const QVariant* value) {
    self->setHeader(static_cast<QNetworkRequest::KnownHeaders>(header), *value);
}

bool QNetworkProxy_HasRawHeader(const QNetworkProxy* self, const libqt_string headerName) {
    QByteArray headerName_QByteArray(headerName.data, headerName.len);
    return self->hasRawHeader(headerName_QByteArray);
}

libqt_list /* of libqt_string */ QNetworkProxy_RawHeaderList(const QNetworkProxy* self) {
    QList<QByteArray> _ret = self->rawHeaderList();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_qb.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QNetworkProxy_RawHeader(const QNetworkProxy* self, const libqt_string headerName) {
    QByteArray headerName_QByteArray(headerName.data, headerName.len);
    QByteArray _qb = self->rawHeader(headerName_QByteArray);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QNetworkProxy_SetRawHeader(QNetworkProxy* self, const libqt_string headerName, const libqt_string value) {
    QByteArray headerName_QByteArray(headerName.data, headerName.len);
    QByteArray value_QByteArray(value.data, value.len);
    self->setRawHeader(headerName_QByteArray, value_QByteArray);
}

void QNetworkProxy_Delete(QNetworkProxy* self) {
    delete self;
}

QNetworkProxyFactory* QNetworkProxyFactory_new() {
    return new VirtualQNetworkProxyFactory();
}

bool QNetworkProxyFactory_UsesSystemConfiguration() {
    return QNetworkProxyFactory::usesSystemConfiguration();
}

void QNetworkProxyFactory_SetUseSystemConfiguration(bool enable) {
    QNetworkProxyFactory::setUseSystemConfiguration(enable);
}

void QNetworkProxyFactory_SetApplicationProxyFactory(QNetworkProxyFactory* factory) {
    QNetworkProxyFactory::setApplicationProxyFactory(factory);
}

libqt_list /* of QNetworkProxy* */ QNetworkProxyFactory_ProxyForQuery(const QNetworkProxyQuery* query) {
    QList<QNetworkProxy> _ret = QNetworkProxyFactory::proxyForQuery(*query);
    // Convert QList<> from C++ memory to manually-managed C memory
    QNetworkProxy** _arr = static_cast<QNetworkProxy**>(malloc(sizeof(QNetworkProxy*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QNetworkProxy(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QNetworkProxy* */ QNetworkProxyFactory_SystemProxyForQuery() {
    QList<QNetworkProxy> _ret = QNetworkProxyFactory::systemProxyForQuery();
    // Convert QList<> from C++ memory to manually-managed C memory
    QNetworkProxy** _arr = static_cast<QNetworkProxy**>(malloc(sizeof(QNetworkProxy*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QNetworkProxy(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QNetworkProxyFactory_OperatorAssign(QNetworkProxyFactory* self, const QNetworkProxyFactory* param1) {
    self->operator=(*param1);
}

libqt_list /* of QNetworkProxy* */ QNetworkProxyFactory_SystemProxyForQuery1(const QNetworkProxyQuery* query) {
    QList<QNetworkProxy> _ret = QNetworkProxyFactory::systemProxyForQuery(*query);
    // Convert QList<> from C++ memory to manually-managed C memory
    QNetworkProxy** _arr = static_cast<QNetworkProxy**>(malloc(sizeof(QNetworkProxy*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QNetworkProxy(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Derived class handler implementation
libqt_list /* of QNetworkProxy* */ QNetworkProxyFactory_QueryProxy(QNetworkProxyFactory* self, const QNetworkProxyQuery* query) {
    auto* vqnetworkproxyfactory = dynamic_cast<VirtualQNetworkProxyFactory*>(self);
    if (vqnetworkproxyfactory && vqnetworkproxyfactory->isVirtualQNetworkProxyFactory) {
        QList<QNetworkProxy> _ret = vqnetworkproxyfactory->queryProxy(*query);
        // Convert QList<> from C++ memory to manually-managed C memory
        QNetworkProxy** _arr = static_cast<QNetworkProxy**>(malloc(sizeof(QNetworkProxy*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QNetworkProxy(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QNetworkProxy> _ret = ((VirtualQNetworkProxyFactory*)self)->queryProxy(*query);
        // Convert QList<> from C++ memory to manually-managed C memory
        QNetworkProxy** _arr = static_cast<QNetworkProxy**>(malloc(sizeof(QNetworkProxy*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QNetworkProxy(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QNetworkProxy* */ QNetworkProxyFactory_QBaseQueryProxy(QNetworkProxyFactory* self, const QNetworkProxyQuery* query) {
    auto* vqnetworkproxyfactory = dynamic_cast<VirtualQNetworkProxyFactory*>(self);
    if (vqnetworkproxyfactory && vqnetworkproxyfactory->isVirtualQNetworkProxyFactory) {
        vqnetworkproxyfactory->setQNetworkProxyFactory_QueryProxy_IsBase(true);
        QList<QNetworkProxy> _ret = vqnetworkproxyfactory->queryProxy(*query);
        // Convert QList<> from C++ memory to manually-managed C memory
        QNetworkProxy** _arr = static_cast<QNetworkProxy**>(malloc(sizeof(QNetworkProxy*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QNetworkProxy(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QNetworkProxy> _ret = ((VirtualQNetworkProxyFactory*)self)->queryProxy(*query);
        // Convert QList<> from C++ memory to manually-managed C memory
        QNetworkProxy** _arr = static_cast<QNetworkProxy**>(malloc(sizeof(QNetworkProxy*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QNetworkProxy(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkProxyFactory_OnQueryProxy(QNetworkProxyFactory* self, intptr_t slot) {
    auto* vqnetworkproxyfactory = dynamic_cast<VirtualQNetworkProxyFactory*>(self);
    if (vqnetworkproxyfactory && vqnetworkproxyfactory->isVirtualQNetworkProxyFactory) {
        vqnetworkproxyfactory->setQNetworkProxyFactory_QueryProxy_Callback(reinterpret_cast<VirtualQNetworkProxyFactory::QNetworkProxyFactory_QueryProxy_Callback>(slot));
    }
}

void QNetworkProxyFactory_Delete(QNetworkProxyFactory* self) {
    delete self;
}
