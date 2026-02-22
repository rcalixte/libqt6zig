#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkProxy>
#include <QObject>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslPreSharedKeyAuthenticator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpSocket>
#include <QTimerEvent>
#include <QUrl>
#include <QWebSocket>
#include <QWebSocketCorsAuthenticator>
#include <QWebSocketServer>
#include <qwebsocketserver.h>
#include "libqwebsocketserver.h"
#include "libqwebsocketserver.hxx"

QWebSocketServer* QWebSocketServer_new(const libqt_string serverName, int secureMode) {
    QString serverName_QString = QString::fromUtf8(serverName.data, serverName.len);
    return new VirtualQWebSocketServer(serverName_QString, static_cast<QWebSocketServer::SslMode>(secureMode));
}

QWebSocketServer* QWebSocketServer_new2(const libqt_string serverName, int secureMode, QObject* parent) {
    QString serverName_QString = QString::fromUtf8(serverName.data, serverName.len);
    return new VirtualQWebSocketServer(serverName_QString, static_cast<QWebSocketServer::SslMode>(secureMode), parent);
}

QMetaObject* QWebSocketServer_MetaObject(const QWebSocketServer* self) {
    auto* vqwebsocketserver = dynamic_cast<const VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQWebSocketServer*)self)->metaObject();
    }
}

void* QWebSocketServer_Metacast(QWebSocketServer* self, const char* param1) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQWebSocketServer*)self)->qt_metacast(param1);
    }
}

int QWebSocketServer_Metacall(QWebSocketServer* self, int param1, int param2, void** param3) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWebSocketServer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

bool QWebSocketServer_Listen(QWebSocketServer* self) {
    return self->listen();
}

void QWebSocketServer_Close(QWebSocketServer* self) {
    self->close();
}

bool QWebSocketServer_IsListening(const QWebSocketServer* self) {
    return self->isListening();
}

void QWebSocketServer_SetMaxPendingConnections(QWebSocketServer* self, int numConnections) {
    self->setMaxPendingConnections(static_cast<int>(numConnections));
}

int QWebSocketServer_MaxPendingConnections(const QWebSocketServer* self) {
    return self->maxPendingConnections();
}

void QWebSocketServer_SetHandshakeTimeout(QWebSocketServer* self, int64_t msec) {
    self->setHandshakeTimeout(static_cast<std::chrono::milliseconds>(msec));
}

int64_t QWebSocketServer_HandshakeTimeout(const QWebSocketServer* self) {
    std::chrono::milliseconds _ret = self->handshakeTimeout();
    return _ret.count();
}

void QWebSocketServer_SetHandshakeTimeout2(QWebSocketServer* self, int msec) {
    self->setHandshakeTimeout(static_cast<int>(msec));
}

int QWebSocketServer_HandshakeTimeoutMS(const QWebSocketServer* self) {
    return self->handshakeTimeoutMS();
}

uint16_t QWebSocketServer_ServerPort(const QWebSocketServer* self) {
    return static_cast<uint16_t>(self->serverPort());
}

QHostAddress* QWebSocketServer_ServerAddress(const QWebSocketServer* self) {
    return new QHostAddress(self->serverAddress());
}

QUrl* QWebSocketServer_ServerUrl(const QWebSocketServer* self) {
    return new QUrl(self->serverUrl());
}

int QWebSocketServer_SecureMode(const QWebSocketServer* self) {
    return static_cast<int>(self->secureMode());
}

bool QWebSocketServer_SetSocketDescriptor(QWebSocketServer* self, intptr_t socketDescriptor) {
    return self->setSocketDescriptor((qintptr)(socketDescriptor));
}

intptr_t QWebSocketServer_SocketDescriptor(const QWebSocketServer* self) {
    qintptr _ret = self->socketDescriptor();
    return (intptr_t)(_ret);
}

bool QWebSocketServer_SetNativeDescriptor(QWebSocketServer* self, intptr_t descriptor) {
    return self->setNativeDescriptor((qintptr)(descriptor));
}

intptr_t QWebSocketServer_NativeDescriptor(const QWebSocketServer* self) {
    qintptr _ret = self->nativeDescriptor();
    return (intptr_t)(_ret);
}

bool QWebSocketServer_HasPendingConnections(const QWebSocketServer* self) {
    return self->hasPendingConnections();
}

QWebSocket* QWebSocketServer_NextPendingConnection(QWebSocketServer* self) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        return self->nextPendingConnection();
    } else {
        return ((VirtualQWebSocketServer*)self)->nextPendingConnection();
    }
}

int QWebSocketServer_Error(const QWebSocketServer* self) {
    return static_cast<int>(self->error());
}

libqt_string QWebSocketServer_ErrorString(const QWebSocketServer* self) {
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

void QWebSocketServer_PauseAccepting(QWebSocketServer* self) {
    self->pauseAccepting();
}

void QWebSocketServer_ResumeAccepting(QWebSocketServer* self) {
    self->resumeAccepting();
}

void QWebSocketServer_SetServerName(QWebSocketServer* self, const libqt_string serverName) {
    QString serverName_QString = QString::fromUtf8(serverName.data, serverName.len);
    self->setServerName(serverName_QString);
}

libqt_string QWebSocketServer_ServerName(const QWebSocketServer* self) {
    QString _ret = self->serverName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWebSocketServer_SetSupportedSubprotocols(QWebSocketServer* self, const libqt_list /* of libqt_string */ protocols) {
    QList<QString> protocols_QList;
    protocols_QList.reserve(protocols.len);
    libqt_string* protocols_arr = static_cast<libqt_string*>(protocols.data);
    for (size_t i = 0; i < protocols.len; ++i) {
        QString protocols_arr_i_QString = QString::fromUtf8(protocols_arr[i].data, protocols_arr[i].len);
        protocols_QList.push_back(protocols_arr_i_QString);
    }
    self->setSupportedSubprotocols(protocols_QList);
}

libqt_list /* of libqt_string */ QWebSocketServer_SupportedSubprotocols(const QWebSocketServer* self) {
    QList<QString> _ret = self->supportedSubprotocols();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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

void QWebSocketServer_SetProxy(QWebSocketServer* self, const QNetworkProxy* networkProxy) {
    self->setProxy(*networkProxy);
}

QNetworkProxy* QWebSocketServer_Proxy(const QWebSocketServer* self) {
    return new QNetworkProxy(self->proxy());
}

void QWebSocketServer_SetSslConfiguration(QWebSocketServer* self, const QSslConfiguration* sslConfiguration) {
    self->setSslConfiguration(*sslConfiguration);
}

QSslConfiguration* QWebSocketServer_SslConfiguration(const QWebSocketServer* self) {
    return new QSslConfiguration(self->sslConfiguration());
}

libqt_list /* of int */ QWebSocketServer_SupportedVersions(const QWebSocketServer* self) {
    QList<QWebSocketProtocol::Version> _ret = self->supportedVersions();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QWebSocketServer_HandleConnection(const QWebSocketServer* self, QTcpSocket* socket) {
    self->handleConnection(socket);
}

void QWebSocketServer_AcceptError(QWebSocketServer* self, int socketError) {
    self->acceptError(static_cast<QAbstractSocket::SocketError>(socketError));
}

void QWebSocketServer_Connect_AcceptError(QWebSocketServer* self, intptr_t slot) {
    void (*slotFunc)(QWebSocketServer*, int) = reinterpret_cast<void (*)(QWebSocketServer*, int)>(slot);
    QWebSocketServer::connect(self, &QWebSocketServer::acceptError, [self, slotFunc](QAbstractSocket::SocketError socketError) {
        int sigval1 = static_cast<int>(socketError);
        slotFunc(self, sigval1);
    });
}

void QWebSocketServer_ServerError(QWebSocketServer* self, int closeCode) {
    self->serverError(static_cast<QWebSocketProtocol::CloseCode>(closeCode));
}

void QWebSocketServer_Connect_ServerError(QWebSocketServer* self, intptr_t slot) {
    void (*slotFunc)(QWebSocketServer*, int) = reinterpret_cast<void (*)(QWebSocketServer*, int)>(slot);
    QWebSocketServer::connect(self, &QWebSocketServer::serverError, [self, slotFunc](QWebSocketProtocol::CloseCode closeCode) {
        int sigval1 = static_cast<int>(closeCode);
        slotFunc(self, sigval1);
    });
}

void QWebSocketServer_OriginAuthenticationRequired(QWebSocketServer* self, QWebSocketCorsAuthenticator* pAuthenticator) {
    self->originAuthenticationRequired(pAuthenticator);
}

void QWebSocketServer_Connect_OriginAuthenticationRequired(QWebSocketServer* self, intptr_t slot) {
    void (*slotFunc)(QWebSocketServer*, QWebSocketCorsAuthenticator*) = reinterpret_cast<void (*)(QWebSocketServer*, QWebSocketCorsAuthenticator*)>(slot);
    QWebSocketServer::connect(self, &QWebSocketServer::originAuthenticationRequired, [self, slotFunc](QWebSocketCorsAuthenticator* pAuthenticator) {
        QWebSocketCorsAuthenticator* sigval1 = pAuthenticator;
        slotFunc(self, sigval1);
    });
}

void QWebSocketServer_NewConnection(QWebSocketServer* self) {
    self->newConnection();
}

void QWebSocketServer_Connect_NewConnection(QWebSocketServer* self, intptr_t slot) {
    void (*slotFunc)(QWebSocketServer*) = reinterpret_cast<void (*)(QWebSocketServer*)>(slot);
    QWebSocketServer::connect(self, &QWebSocketServer::newConnection, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWebSocketServer_PeerVerifyError(QWebSocketServer* self, const QSslError* errorVal) {
    self->peerVerifyError(*errorVal);
}

void QWebSocketServer_Connect_PeerVerifyError(QWebSocketServer* self, intptr_t slot) {
    void (*slotFunc)(QWebSocketServer*, QSslError*) = reinterpret_cast<void (*)(QWebSocketServer*, QSslError*)>(slot);
    QWebSocketServer::connect(self, &QWebSocketServer::peerVerifyError, [self, slotFunc](const QSslError& errorVal) {
        const QSslError& errorVal_ret = errorVal;
        // Cast returned reference into pointer
        QSslError* sigval1 = const_cast<QSslError*>(&errorVal_ret);
        slotFunc(self, sigval1);
    });
}

void QWebSocketServer_SslErrors(QWebSocketServer* self, const libqt_list /* of QSslError* */ errors) {
    QList<QSslError> errors_QList;
    errors_QList.reserve(errors.len);
    QSslError** errors_arr = static_cast<QSslError**>(errors.data);
    for (size_t i = 0; i < errors.len; ++i) {
        errors_QList.push_back(*(errors_arr[i]));
    }
    self->sslErrors(errors_QList);
}

void QWebSocketServer_Connect_SslErrors(QWebSocketServer* self, intptr_t slot) {
    void (*slotFunc)(QWebSocketServer*, libqt_list /* of QSslError* */) = reinterpret_cast<void (*)(QWebSocketServer*, libqt_list /* of QSslError* */)>(slot);
    QWebSocketServer::connect(self, &QWebSocketServer::sslErrors, [self, slotFunc](const QList<QSslError>& errors) {
        const QList<QSslError>& errors_ret = errors;
        // Convert QList<> from C++ memory to manually-managed C memory
        QSslError** errors_arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * (errors_ret.size())));
        for (qsizetype i = 0; i < errors_ret.size(); ++i) {
            errors_arr[i] = new QSslError(errors_ret[i]);
        }
        libqt_list errors_out;
        errors_out.len = errors_ret.size();
        errors_out.data = static_cast<void*>(errors_arr);
        libqt_list /* of QSslError* */ sigval1 = errors_out;
        slotFunc(self, sigval1);
        free(errors_arr);
    });
}

void QWebSocketServer_PreSharedKeyAuthenticationRequired(QWebSocketServer* self, QSslPreSharedKeyAuthenticator* authenticator) {
    self->preSharedKeyAuthenticationRequired(authenticator);
}

void QWebSocketServer_Connect_PreSharedKeyAuthenticationRequired(QWebSocketServer* self, intptr_t slot) {
    void (*slotFunc)(QWebSocketServer*, QSslPreSharedKeyAuthenticator*) = reinterpret_cast<void (*)(QWebSocketServer*, QSslPreSharedKeyAuthenticator*)>(slot);
    QWebSocketServer::connect(self, &QWebSocketServer::preSharedKeyAuthenticationRequired, [self, slotFunc](QSslPreSharedKeyAuthenticator* authenticator) {
        QSslPreSharedKeyAuthenticator* sigval1 = authenticator;
        slotFunc(self, sigval1);
    });
}

void QWebSocketServer_AlertSent(QWebSocketServer* self, int level, int typeVal, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->alertSent(static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(typeVal), description_QString);
}

void QWebSocketServer_Connect_AlertSent(QWebSocketServer* self, intptr_t slot) {
    void (*slotFunc)(QWebSocketServer*, int, int, const char*) = reinterpret_cast<void (*)(QWebSocketServer*, int, int, const char*)>(slot);
    QWebSocketServer::connect(self, &QWebSocketServer::alertSent, [self, slotFunc](QSsl::AlertLevel level, QSsl::AlertType typeVal, const QString& description) {
        int sigval1 = static_cast<int>(level);
        int sigval2 = static_cast<int>(typeVal);
        const QString description_ret = description;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray description_b = description_ret.toUtf8();
        auto description_str_len = description_b.length();
        const char* description_str = static_cast<const char*>(malloc(description_str_len + 1));
        memcpy((void*)description_str, description_b.data(), description_str_len);
        ((char*)description_str)[description_str_len] = '\0';
        const char* sigval3 = description_str;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(description_str);
    });
}

void QWebSocketServer_AlertReceived(QWebSocketServer* self, int level, int typeVal, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->alertReceived(static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(typeVal), description_QString);
}

void QWebSocketServer_Connect_AlertReceived(QWebSocketServer* self, intptr_t slot) {
    void (*slotFunc)(QWebSocketServer*, int, int, const char*) = reinterpret_cast<void (*)(QWebSocketServer*, int, int, const char*)>(slot);
    QWebSocketServer::connect(self, &QWebSocketServer::alertReceived, [self, slotFunc](QSsl::AlertLevel level, QSsl::AlertType typeVal, const QString& description) {
        int sigval1 = static_cast<int>(level);
        int sigval2 = static_cast<int>(typeVal);
        const QString description_ret = description;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray description_b = description_ret.toUtf8();
        auto description_str_len = description_b.length();
        const char* description_str = static_cast<const char*>(malloc(description_str_len + 1));
        memcpy((void*)description_str, description_b.data(), description_str_len);
        ((char*)description_str)[description_str_len] = '\0';
        const char* sigval3 = description_str;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(description_str);
    });
}

void QWebSocketServer_HandshakeInterruptedOnError(QWebSocketServer* self, const QSslError* errorVal) {
    self->handshakeInterruptedOnError(*errorVal);
}

void QWebSocketServer_Connect_HandshakeInterruptedOnError(QWebSocketServer* self, intptr_t slot) {
    void (*slotFunc)(QWebSocketServer*, QSslError*) = reinterpret_cast<void (*)(QWebSocketServer*, QSslError*)>(slot);
    QWebSocketServer::connect(self, &QWebSocketServer::handshakeInterruptedOnError, [self, slotFunc](const QSslError& errorVal) {
        const QSslError& errorVal_ret = errorVal;
        // Cast returned reference into pointer
        QSslError* sigval1 = const_cast<QSslError*>(&errorVal_ret);
        slotFunc(self, sigval1);
    });
}

void QWebSocketServer_Closed(QWebSocketServer* self) {
    self->closed();
}

void QWebSocketServer_Connect_Closed(QWebSocketServer* self, intptr_t slot) {
    void (*slotFunc)(QWebSocketServer*) = reinterpret_cast<void (*)(QWebSocketServer*)>(slot);
    QWebSocketServer::connect(self, &QWebSocketServer::closed, [self, slotFunc]() {
        slotFunc(self);
    });
}

bool QWebSocketServer_Listen1(QWebSocketServer* self, const QHostAddress* address) {
    return self->listen(*address);
}

bool QWebSocketServer_Listen2(QWebSocketServer* self, const QHostAddress* address, uint16_t port) {
    return self->listen(*address, static_cast<quint16>(port));
}

// Base class handler implementation
QMetaObject* QWebSocketServer_QBaseMetaObject(const QWebSocketServer* self) {
    auto* vqwebsocketserver = const_cast<VirtualQWebSocketServer*>(dynamic_cast<const VirtualQWebSocketServer*>(self));
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_MetaObject_IsBase(true);
        return (QMetaObject*)vqwebsocketserver->metaObject();
    } else {
        return (QMetaObject*)self->QWebSocketServer::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocketServer_OnMetaObject(const QWebSocketServer* self, intptr_t slot) {
    auto* vqwebsocketserver = const_cast<VirtualQWebSocketServer*>(dynamic_cast<const VirtualQWebSocketServer*>(self));
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_MetaObject_Callback(reinterpret_cast<VirtualQWebSocketServer::QWebSocketServer_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QWebSocketServer_QBaseMetacast(QWebSocketServer* self, const char* param1) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_Metacast_IsBase(true);
        return vqwebsocketserver->qt_metacast(param1);
    } else {
        return self->QWebSocketServer::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocketServer_OnMetacast(QWebSocketServer* self, intptr_t slot) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_Metacast_Callback(reinterpret_cast<VirtualQWebSocketServer::QWebSocketServer_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QWebSocketServer_QBaseMetacall(QWebSocketServer* self, int param1, int param2, void** param3) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_Metacall_IsBase(true);
        return vqwebsocketserver->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QWebSocketServer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocketServer_OnMetacall(QWebSocketServer* self, intptr_t slot) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_Metacall_Callback(reinterpret_cast<VirtualQWebSocketServer::QWebSocketServer_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QWebSocket* QWebSocketServer_QBaseNextPendingConnection(QWebSocketServer* self) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_NextPendingConnection_IsBase(true);
        return vqwebsocketserver->nextPendingConnection();
    } else {
        return self->QWebSocketServer::nextPendingConnection();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocketServer_OnNextPendingConnection(QWebSocketServer* self, intptr_t slot) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_NextPendingConnection_Callback(reinterpret_cast<VirtualQWebSocketServer::QWebSocketServer_NextPendingConnection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebSocketServer_Event(QWebSocketServer* self, QEvent* event) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        return vqwebsocketserver->event(event);
    } else {
        return self->QWebSocketServer::event(event);
    }
}

// Base class handler implementation
bool QWebSocketServer_QBaseEvent(QWebSocketServer* self, QEvent* event) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_Event_IsBase(true);
        return vqwebsocketserver->event(event);
    } else {
        return self->QWebSocketServer::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocketServer_OnEvent(QWebSocketServer* self, intptr_t slot) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_Event_Callback(reinterpret_cast<VirtualQWebSocketServer::QWebSocketServer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebSocketServer_EventFilter(QWebSocketServer* self, QObject* watched, QEvent* event) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        return vqwebsocketserver->eventFilter(watched, event);
    } else {
        return self->QWebSocketServer::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QWebSocketServer_QBaseEventFilter(QWebSocketServer* self, QObject* watched, QEvent* event) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_EventFilter_IsBase(true);
        return vqwebsocketserver->eventFilter(watched, event);
    } else {
        return self->QWebSocketServer::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocketServer_OnEventFilter(QWebSocketServer* self, intptr_t slot) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_EventFilter_Callback(reinterpret_cast<VirtualQWebSocketServer::QWebSocketServer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebSocketServer_TimerEvent(QWebSocketServer* self, QTimerEvent* event) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->timerEvent(event);
    } else {
        ((VirtualQWebSocketServer*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QWebSocketServer_QBaseTimerEvent(QWebSocketServer* self, QTimerEvent* event) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_TimerEvent_IsBase(true);
        vqwebsocketserver->timerEvent(event);
    } else {
        ((VirtualQWebSocketServer*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocketServer_OnTimerEvent(QWebSocketServer* self, intptr_t slot) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_TimerEvent_Callback(reinterpret_cast<VirtualQWebSocketServer::QWebSocketServer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebSocketServer_ChildEvent(QWebSocketServer* self, QChildEvent* event) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->childEvent(event);
    } else {
        ((VirtualQWebSocketServer*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QWebSocketServer_QBaseChildEvent(QWebSocketServer* self, QChildEvent* event) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_ChildEvent_IsBase(true);
        vqwebsocketserver->childEvent(event);
    } else {
        ((VirtualQWebSocketServer*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocketServer_OnChildEvent(QWebSocketServer* self, intptr_t slot) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_ChildEvent_Callback(reinterpret_cast<VirtualQWebSocketServer::QWebSocketServer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebSocketServer_CustomEvent(QWebSocketServer* self, QEvent* event) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->customEvent(event);
    } else {
        ((VirtualQWebSocketServer*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QWebSocketServer_QBaseCustomEvent(QWebSocketServer* self, QEvent* event) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_CustomEvent_IsBase(true);
        vqwebsocketserver->customEvent(event);
    } else {
        ((VirtualQWebSocketServer*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocketServer_OnCustomEvent(QWebSocketServer* self, intptr_t slot) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_CustomEvent_Callback(reinterpret_cast<VirtualQWebSocketServer::QWebSocketServer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebSocketServer_ConnectNotify(QWebSocketServer* self, const QMetaMethod* signal) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->connectNotify(*signal);
    } else {
        ((VirtualQWebSocketServer*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QWebSocketServer_QBaseConnectNotify(QWebSocketServer* self, const QMetaMethod* signal) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_ConnectNotify_IsBase(true);
        vqwebsocketserver->connectNotify(*signal);
    } else {
        ((VirtualQWebSocketServer*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocketServer_OnConnectNotify(QWebSocketServer* self, intptr_t slot) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_ConnectNotify_Callback(reinterpret_cast<VirtualQWebSocketServer::QWebSocketServer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebSocketServer_DisconnectNotify(QWebSocketServer* self, const QMetaMethod* signal) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->disconnectNotify(*signal);
    } else {
        ((VirtualQWebSocketServer*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QWebSocketServer_QBaseDisconnectNotify(QWebSocketServer* self, const QMetaMethod* signal) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_DisconnectNotify_IsBase(true);
        vqwebsocketserver->disconnectNotify(*signal);
    } else {
        ((VirtualQWebSocketServer*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocketServer_OnDisconnectNotify(QWebSocketServer* self, intptr_t slot) {
    auto* vqwebsocketserver = dynamic_cast<VirtualQWebSocketServer*>(self);
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_DisconnectNotify_Callback(reinterpret_cast<VirtualQWebSocketServer::QWebSocketServer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWebSocketServer_Sender(const QWebSocketServer* self) {
    auto* vqwebsocketserver = const_cast<VirtualQWebSocketServer*>(dynamic_cast<const VirtualQWebSocketServer*>(self));
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        return vqwebsocketserver->sender();
    } else {
        return ((VirtualQWebSocketServer*)self)->sender();
    }
}

// Base class handler implementation
QObject* QWebSocketServer_QBaseSender(const QWebSocketServer* self) {
    auto* vqwebsocketserver = const_cast<VirtualQWebSocketServer*>(dynamic_cast<const VirtualQWebSocketServer*>(self));
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_Sender_IsBase(true);
        return vqwebsocketserver->sender();
    } else {
        return ((VirtualQWebSocketServer*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocketServer_OnSender(const QWebSocketServer* self, intptr_t slot) {
    auto* vqwebsocketserver = const_cast<VirtualQWebSocketServer*>(dynamic_cast<const VirtualQWebSocketServer*>(self));
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_Sender_Callback(reinterpret_cast<VirtualQWebSocketServer::QWebSocketServer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebSocketServer_SenderSignalIndex(const QWebSocketServer* self) {
    auto* vqwebsocketserver = const_cast<VirtualQWebSocketServer*>(dynamic_cast<const VirtualQWebSocketServer*>(self));
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        return vqwebsocketserver->senderSignalIndex();
    } else {
        return ((VirtualQWebSocketServer*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QWebSocketServer_QBaseSenderSignalIndex(const QWebSocketServer* self) {
    auto* vqwebsocketserver = const_cast<VirtualQWebSocketServer*>(dynamic_cast<const VirtualQWebSocketServer*>(self));
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_SenderSignalIndex_IsBase(true);
        return vqwebsocketserver->senderSignalIndex();
    } else {
        return ((VirtualQWebSocketServer*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocketServer_OnSenderSignalIndex(const QWebSocketServer* self, intptr_t slot) {
    auto* vqwebsocketserver = const_cast<VirtualQWebSocketServer*>(dynamic_cast<const VirtualQWebSocketServer*>(self));
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_SenderSignalIndex_Callback(reinterpret_cast<VirtualQWebSocketServer::QWebSocketServer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebSocketServer_Receivers(const QWebSocketServer* self, const char* signal) {
    auto* vqwebsocketserver = const_cast<VirtualQWebSocketServer*>(dynamic_cast<const VirtualQWebSocketServer*>(self));
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        return vqwebsocketserver->receivers(signal);
    } else {
        return ((VirtualQWebSocketServer*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QWebSocketServer_QBaseReceivers(const QWebSocketServer* self, const char* signal) {
    auto* vqwebsocketserver = const_cast<VirtualQWebSocketServer*>(dynamic_cast<const VirtualQWebSocketServer*>(self));
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_Receivers_IsBase(true);
        return vqwebsocketserver->receivers(signal);
    } else {
        return ((VirtualQWebSocketServer*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocketServer_OnReceivers(const QWebSocketServer* self, intptr_t slot) {
    auto* vqwebsocketserver = const_cast<VirtualQWebSocketServer*>(dynamic_cast<const VirtualQWebSocketServer*>(self));
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_Receivers_Callback(reinterpret_cast<VirtualQWebSocketServer::QWebSocketServer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebSocketServer_IsSignalConnected(const QWebSocketServer* self, const QMetaMethod* signal) {
    auto* vqwebsocketserver = const_cast<VirtualQWebSocketServer*>(dynamic_cast<const VirtualQWebSocketServer*>(self));
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        return vqwebsocketserver->isSignalConnected(*signal);
    } else {
        return ((VirtualQWebSocketServer*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QWebSocketServer_QBaseIsSignalConnected(const QWebSocketServer* self, const QMetaMethod* signal) {
    auto* vqwebsocketserver = const_cast<VirtualQWebSocketServer*>(dynamic_cast<const VirtualQWebSocketServer*>(self));
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_IsSignalConnected_IsBase(true);
        return vqwebsocketserver->isSignalConnected(*signal);
    } else {
        return ((VirtualQWebSocketServer*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocketServer_OnIsSignalConnected(const QWebSocketServer* self, intptr_t slot) {
    auto* vqwebsocketserver = const_cast<VirtualQWebSocketServer*>(dynamic_cast<const VirtualQWebSocketServer*>(self));
    if (vqwebsocketserver && vqwebsocketserver->isVirtualQWebSocketServer) {
        vqwebsocketserver->setQWebSocketServer_IsSignalConnected_Callback(reinterpret_cast<VirtualQWebSocketServer::QWebSocketServer_IsSignalConnected_Callback>(slot));
    }
}

void QWebSocketServer_Delete(QWebSocketServer* self) {
    delete self;
}
