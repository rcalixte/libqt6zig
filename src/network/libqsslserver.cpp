#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslPreSharedKeyAuthenticator>
#include <QSslServer>
#include <QSslSocket>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTimerEvent>
#include <qsslserver.h>
#include "libqsslserver.h"
#include "libqsslserver.hxx"

QSslServer* QSslServer_new() {
    return new VirtualQSslServer();
}

QSslServer* QSslServer_new2(QObject* parent) {
    return new VirtualQSslServer(parent);
}

QMetaObject* QSslServer_MetaObject(const QSslServer* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSslServer_Metacast(QSslServer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSslServer_Metacall(QSslServer* self, int param1, int param2, void** param3) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSslServer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSslServer_OnMetacall(QSslServer* self, intptr_t slot) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_Metacall_Callback(reinterpret_cast<VirtualQSslServer::QSslServer_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSslServer_QBaseMetacall(QSslServer* self, int param1, int param2, void** param3) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_Metacall_IsBase(true);
        return vqsslserver->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSslServer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSslServer_Tr(const char* s) {
    QString _ret = QSslServer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSslServer_SetSslConfiguration(QSslServer* self, const QSslConfiguration* sslConfiguration) {
    self->setSslConfiguration(*sslConfiguration);
}

QSslConfiguration* QSslServer_SslConfiguration(const QSslServer* self) {
    return new QSslConfiguration(self->sslConfiguration());
}

void QSslServer_SetHandshakeTimeout(QSslServer* self, int timeout) {
    self->setHandshakeTimeout(static_cast<int>(timeout));
}

int QSslServer_HandshakeTimeout(const QSslServer* self) {
    return self->handshakeTimeout();
}

void QSslServer_SslErrors(QSslServer* self, QSslSocket* socket, const libqt_list /* of QSslError* */ errors) {
    QList<QSslError> errors_QList;
    errors_QList.reserve(errors.len);
    QSslError** errors_arr = static_cast<QSslError**>(errors.data);
    for (size_t i = 0; i < errors.len; ++i) {
        errors_QList.push_back(*(errors_arr[i]));
    }
    self->sslErrors(socket, errors_QList);
}

void QSslServer_Connect_SslErrors(QSslServer* self, intptr_t slot) {
    void (*slotFunc)(QSslServer*, QSslSocket*, libqt_list /* of QSslError* */) = reinterpret_cast<void (*)(QSslServer*, QSslSocket*, libqt_list /* of QSslError* */)>(slot);
    QSslServer::connect(self, &QSslServer::sslErrors, [self, slotFunc](QSslSocket* socket, const QList<QSslError>& errors) {
        QSslSocket* sigval1 = socket;
        const QList<QSslError>& errors_ret = errors;
        // Convert QList<> from C++ memory to manually-managed C memory
        QSslError** errors_arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * errors_ret.length()));
        for (size_t i = 0; i < errors_ret.length(); ++i) {
            errors_arr[i] = new QSslError(errors_ret[i]);
        }
        libqt_list errors_out;
        errors_out.len = errors_ret.length();
        errors_out.data = static_cast<void*>(errors_arr);
        libqt_list /* of QSslError* */ sigval2 = errors_out;
        slotFunc(self, sigval1, sigval2);
    });
}

void QSslServer_PeerVerifyError(QSslServer* self, QSslSocket* socket, const QSslError* errorVal) {
    self->peerVerifyError(socket, *errorVal);
}

void QSslServer_Connect_PeerVerifyError(QSslServer* self, intptr_t slot) {
    void (*slotFunc)(QSslServer*, QSslSocket*, QSslError*) = reinterpret_cast<void (*)(QSslServer*, QSslSocket*, QSslError*)>(slot);
    QSslServer::connect(self, &QSslServer::peerVerifyError, [self, slotFunc](QSslSocket* socket, const QSslError& errorVal) {
        QSslSocket* sigval1 = socket;
        const QSslError& errorVal_ret = errorVal;
        // Cast returned reference into pointer
        QSslError* sigval2 = const_cast<QSslError*>(&errorVal_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void QSslServer_ErrorOccurred(QSslServer* self, QSslSocket* socket, int errorVal) {
    self->errorOccurred(socket, static_cast<QAbstractSocket::SocketError>(errorVal));
}

void QSslServer_Connect_ErrorOccurred(QSslServer* self, intptr_t slot) {
    void (*slotFunc)(QSslServer*, QSslSocket*, int) = reinterpret_cast<void (*)(QSslServer*, QSslSocket*, int)>(slot);
    QSslServer::connect(self, &QSslServer::errorOccurred, [self, slotFunc](QSslSocket* socket, QAbstractSocket::SocketError errorVal) {
        QSslSocket* sigval1 = socket;
        int sigval2 = static_cast<int>(errorVal);
        slotFunc(self, sigval1, sigval2);
    });
}

void QSslServer_PreSharedKeyAuthenticationRequired(QSslServer* self, QSslSocket* socket, QSslPreSharedKeyAuthenticator* authenticator) {
    self->preSharedKeyAuthenticationRequired(socket, authenticator);
}

void QSslServer_Connect_PreSharedKeyAuthenticationRequired(QSslServer* self, intptr_t slot) {
    void (*slotFunc)(QSslServer*, QSslSocket*, QSslPreSharedKeyAuthenticator*) = reinterpret_cast<void (*)(QSslServer*, QSslSocket*, QSslPreSharedKeyAuthenticator*)>(slot);
    QSslServer::connect(self, &QSslServer::preSharedKeyAuthenticationRequired, [self, slotFunc](QSslSocket* socket, QSslPreSharedKeyAuthenticator* authenticator) {
        QSslSocket* sigval1 = socket;
        QSslPreSharedKeyAuthenticator* sigval2 = authenticator;
        slotFunc(self, sigval1, sigval2);
    });
}

void QSslServer_AlertSent(QSslServer* self, QSslSocket* socket, int level, int typeVal, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->alertSent(socket, static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(typeVal), description_QString);
}

void QSslServer_Connect_AlertSent(QSslServer* self, intptr_t slot) {
    void (*slotFunc)(QSslServer*, QSslSocket*, int, int, libqt_string) = reinterpret_cast<void (*)(QSslServer*, QSslSocket*, int, int, libqt_string)>(slot);
    QSslServer::connect(self, &QSslServer::alertSent, [self, slotFunc](QSslSocket* socket, QSsl::AlertLevel level, QSsl::AlertType typeVal, const QString& description) {
        QSslSocket* sigval1 = socket;
        int sigval2 = static_cast<int>(level);
        int sigval3 = static_cast<int>(typeVal);
        const QString description_ret = description;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray description_b = description_ret.toUtf8();
        libqt_string description_str;
        description_str.len = description_b.length();
        description_str.data = static_cast<char*>(malloc((description_str.len + 1) * sizeof(char)));
        memcpy(description_str.data, description_b.data(), description_str.len);
        description_str.data[description_str.len] = '\0';
        libqt_string sigval4 = description_str;
        slotFunc(self, sigval1, sigval2, sigval3, sigval4);
    });
}

void QSslServer_AlertReceived(QSslServer* self, QSslSocket* socket, int level, int typeVal, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->alertReceived(socket, static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(typeVal), description_QString);
}

void QSslServer_Connect_AlertReceived(QSslServer* self, intptr_t slot) {
    void (*slotFunc)(QSslServer*, QSslSocket*, int, int, libqt_string) = reinterpret_cast<void (*)(QSslServer*, QSslSocket*, int, int, libqt_string)>(slot);
    QSslServer::connect(self, &QSslServer::alertReceived, [self, slotFunc](QSslSocket* socket, QSsl::AlertLevel level, QSsl::AlertType typeVal, const QString& description) {
        QSslSocket* sigval1 = socket;
        int sigval2 = static_cast<int>(level);
        int sigval3 = static_cast<int>(typeVal);
        const QString description_ret = description;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray description_b = description_ret.toUtf8();
        libqt_string description_str;
        description_str.len = description_b.length();
        description_str.data = static_cast<char*>(malloc((description_str.len + 1) * sizeof(char)));
        memcpy(description_str.data, description_b.data(), description_str.len);
        description_str.data[description_str.len] = '\0';
        libqt_string sigval4 = description_str;
        slotFunc(self, sigval1, sigval2, sigval3, sigval4);
    });
}

void QSslServer_HandshakeInterruptedOnError(QSslServer* self, QSslSocket* socket, const QSslError* errorVal) {
    self->handshakeInterruptedOnError(socket, *errorVal);
}

void QSslServer_Connect_HandshakeInterruptedOnError(QSslServer* self, intptr_t slot) {
    void (*slotFunc)(QSslServer*, QSslSocket*, QSslError*) = reinterpret_cast<void (*)(QSslServer*, QSslSocket*, QSslError*)>(slot);
    QSslServer::connect(self, &QSslServer::handshakeInterruptedOnError, [self, slotFunc](QSslSocket* socket, const QSslError& errorVal) {
        QSslSocket* sigval1 = socket;
        const QSslError& errorVal_ret = errorVal;
        // Cast returned reference into pointer
        QSslError* sigval2 = const_cast<QSslError*>(&errorVal_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void QSslServer_StartedEncryptionHandshake(QSslServer* self, QSslSocket* socket) {
    self->startedEncryptionHandshake(socket);
}

void QSslServer_Connect_StartedEncryptionHandshake(QSslServer* self, intptr_t slot) {
    void (*slotFunc)(QSslServer*, QSslSocket*) = reinterpret_cast<void (*)(QSslServer*, QSslSocket*)>(slot);
    QSslServer::connect(self, &QSslServer::startedEncryptionHandshake, [self, slotFunc](QSslSocket* socket) {
        QSslSocket* sigval1 = socket;
        slotFunc(self, sigval1);
    });
}

libqt_string QSslServer_Tr2(const char* s, const char* c) {
    QString _ret = QSslServer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSslServer_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSslServer::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QSslServer_IncomingConnection(QSslServer* self, intptr_t socket) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->incomingConnection((qintptr)(socket));
    } else {
        ((VirtualQSslServer*)self)->incomingConnection((qintptr)(socket));
    }
}

// Base class handler implementation
void QSslServer_QBaseIncomingConnection(QSslServer* self, intptr_t socket) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_IncomingConnection_IsBase(true);
        vqsslserver->incomingConnection((qintptr)(socket));
    } else {
        ((VirtualQSslServer*)self)->incomingConnection((qintptr)(socket));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnIncomingConnection(QSslServer* self, intptr_t slot) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_IncomingConnection_Callback(reinterpret_cast<VirtualQSslServer::QSslServer_IncomingConnection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSslServer_HasPendingConnections(const QSslServer* self) {
    auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self));
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        return vqsslserver->hasPendingConnections();
    } else {
        return self->QSslServer::hasPendingConnections();
    }
}

// Base class handler implementation
bool QSslServer_QBaseHasPendingConnections(const QSslServer* self) {
    auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self));
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_HasPendingConnections_IsBase(true);
        return vqsslserver->hasPendingConnections();
    } else {
        return self->QSslServer::hasPendingConnections();
    }
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnHasPendingConnections(const QSslServer* self, intptr_t slot) {
    auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self));
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_HasPendingConnections_Callback(reinterpret_cast<VirtualQSslServer::QSslServer_HasPendingConnections_Callback>(slot));
    }
}

// Derived class handler implementation
QTcpSocket* QSslServer_NextPendingConnection(QSslServer* self) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        return vqsslserver->nextPendingConnection();
    } else {
        return self->QSslServer::nextPendingConnection();
    }
}

// Base class handler implementation
QTcpSocket* QSslServer_QBaseNextPendingConnection(QSslServer* self) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_NextPendingConnection_IsBase(true);
        return vqsslserver->nextPendingConnection();
    } else {
        return self->QSslServer::nextPendingConnection();
    }
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnNextPendingConnection(QSslServer* self, intptr_t slot) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_NextPendingConnection_Callback(reinterpret_cast<VirtualQSslServer::QSslServer_NextPendingConnection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSslServer_Event(QSslServer* self, QEvent* event) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        return vqsslserver->event(event);
    } else {
        return self->QSslServer::event(event);
    }
}

// Base class handler implementation
bool QSslServer_QBaseEvent(QSslServer* self, QEvent* event) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_Event_IsBase(true);
        return vqsslserver->event(event);
    } else {
        return self->QSslServer::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnEvent(QSslServer* self, intptr_t slot) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_Event_Callback(reinterpret_cast<VirtualQSslServer::QSslServer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSslServer_EventFilter(QSslServer* self, QObject* watched, QEvent* event) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        return vqsslserver->eventFilter(watched, event);
    } else {
        return self->QSslServer::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSslServer_QBaseEventFilter(QSslServer* self, QObject* watched, QEvent* event) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_EventFilter_IsBase(true);
        return vqsslserver->eventFilter(watched, event);
    } else {
        return self->QSslServer::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnEventFilter(QSslServer* self, intptr_t slot) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_EventFilter_Callback(reinterpret_cast<VirtualQSslServer::QSslServer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSslServer_TimerEvent(QSslServer* self, QTimerEvent* event) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->timerEvent(event);
    } else {
        ((VirtualQSslServer*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSslServer_QBaseTimerEvent(QSslServer* self, QTimerEvent* event) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_TimerEvent_IsBase(true);
        vqsslserver->timerEvent(event);
    } else {
        ((VirtualQSslServer*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnTimerEvent(QSslServer* self, intptr_t slot) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_TimerEvent_Callback(reinterpret_cast<VirtualQSslServer::QSslServer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSslServer_ChildEvent(QSslServer* self, QChildEvent* event) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->childEvent(event);
    } else {
        ((VirtualQSslServer*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSslServer_QBaseChildEvent(QSslServer* self, QChildEvent* event) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_ChildEvent_IsBase(true);
        vqsslserver->childEvent(event);
    } else {
        ((VirtualQSslServer*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnChildEvent(QSslServer* self, intptr_t slot) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_ChildEvent_Callback(reinterpret_cast<VirtualQSslServer::QSslServer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSslServer_CustomEvent(QSslServer* self, QEvent* event) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->customEvent(event);
    } else {
        ((VirtualQSslServer*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSslServer_QBaseCustomEvent(QSslServer* self, QEvent* event) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_CustomEvent_IsBase(true);
        vqsslserver->customEvent(event);
    } else {
        ((VirtualQSslServer*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnCustomEvent(QSslServer* self, intptr_t slot) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_CustomEvent_Callback(reinterpret_cast<VirtualQSslServer::QSslServer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSslServer_ConnectNotify(QSslServer* self, const QMetaMethod* signal) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->connectNotify(*signal);
    } else {
        ((VirtualQSslServer*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSslServer_QBaseConnectNotify(QSslServer* self, const QMetaMethod* signal) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_ConnectNotify_IsBase(true);
        vqsslserver->connectNotify(*signal);
    } else {
        ((VirtualQSslServer*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnConnectNotify(QSslServer* self, intptr_t slot) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_ConnectNotify_Callback(reinterpret_cast<VirtualQSslServer::QSslServer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSslServer_DisconnectNotify(QSslServer* self, const QMetaMethod* signal) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->disconnectNotify(*signal);
    } else {
        ((VirtualQSslServer*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSslServer_QBaseDisconnectNotify(QSslServer* self, const QMetaMethod* signal) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_DisconnectNotify_IsBase(true);
        vqsslserver->disconnectNotify(*signal);
    } else {
        ((VirtualQSslServer*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnDisconnectNotify(QSslServer* self, intptr_t slot) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_DisconnectNotify_Callback(reinterpret_cast<VirtualQSslServer::QSslServer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSslServer_AddPendingConnection(QSslServer* self, QTcpSocket* socket) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->addPendingConnection(socket);
    } else {
        ((VirtualQSslServer*)self)->addPendingConnection(socket);
    }
}

// Base class handler implementation
void QSslServer_QBaseAddPendingConnection(QSslServer* self, QTcpSocket* socket) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_AddPendingConnection_IsBase(true);
        vqsslserver->addPendingConnection(socket);
    } else {
        ((VirtualQSslServer*)self)->addPendingConnection(socket);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnAddPendingConnection(QSslServer* self, intptr_t slot) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_AddPendingConnection_Callback(reinterpret_cast<VirtualQSslServer::QSslServer_AddPendingConnection_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSslServer_Sender(const QSslServer* self) {
    auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self));
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        return vqsslserver->sender();
    } else {
        return ((VirtualQSslServer*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSslServer_QBaseSender(const QSslServer* self) {
    auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self));
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_Sender_IsBase(true);
        return vqsslserver->sender();
    } else {
        return ((VirtualQSslServer*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnSender(const QSslServer* self, intptr_t slot) {
    auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self));
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_Sender_Callback(reinterpret_cast<VirtualQSslServer::QSslServer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSslServer_SenderSignalIndex(const QSslServer* self) {
    auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self));
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        return vqsslserver->senderSignalIndex();
    } else {
        return ((VirtualQSslServer*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSslServer_QBaseSenderSignalIndex(const QSslServer* self) {
    auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self));
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_SenderSignalIndex_IsBase(true);
        return vqsslserver->senderSignalIndex();
    } else {
        return ((VirtualQSslServer*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnSenderSignalIndex(const QSslServer* self, intptr_t slot) {
    auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self));
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSslServer::QSslServer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSslServer_Receivers(const QSslServer* self, const char* signal) {
    auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self));
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        return vqsslserver->receivers(signal);
    } else {
        return ((VirtualQSslServer*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSslServer_QBaseReceivers(const QSslServer* self, const char* signal) {
    auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self));
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_Receivers_IsBase(true);
        return vqsslserver->receivers(signal);
    } else {
        return ((VirtualQSslServer*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnReceivers(const QSslServer* self, intptr_t slot) {
    auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self));
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_Receivers_Callback(reinterpret_cast<VirtualQSslServer::QSslServer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSslServer_IsSignalConnected(const QSslServer* self, const QMetaMethod* signal) {
    auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self));
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        return vqsslserver->isSignalConnected(*signal);
    } else {
        return ((VirtualQSslServer*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSslServer_QBaseIsSignalConnected(const QSslServer* self, const QMetaMethod* signal) {
    auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self));
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_IsSignalConnected_IsBase(true);
        return vqsslserver->isSignalConnected(*signal);
    } else {
        return ((VirtualQSslServer*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnIsSignalConnected(const QSslServer* self, intptr_t slot) {
    auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self));
    if (vqsslserver && vqsslserver->isVirtualQSslServer) {
        vqsslserver->setQSslServer_IsSignalConnected_Callback(reinterpret_cast<VirtualQSslServer::QSslServer_IsSignalConnected_Callback>(slot));
    }
}

void QSslServer_Delete(QSslServer* self) {
    delete self;
}
