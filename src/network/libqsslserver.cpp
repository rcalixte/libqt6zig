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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSslServer_Tr(const char* s) {
    auto _ret = QSslServer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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
    QSslServer::connect(self,
                        static_cast<void (QSslServer::*)(QSslSocket*, const QList<QSslError>&)>(&QSslServer::sslErrors),
                        [self, slotFunc](QSslSocket* socket, const QList<QSslError>& errors) {
                            QSslSocket* sigval1 = socket;
                            const QList<QSslError>& errors_ret = errors;
                            // Convert QList<> from C++ memory to manually-managed C memory
                            QSslError** errors_arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * (errors_ret.size())));
                            for (qsizetype i = 0; i < errors_ret.size(); ++i) {
                                errors_arr[i] = new QSslError(errors_ret[i]);
                            }
                            libqt_list errors_out;
                            errors_out.len = errors_ret.size();
                            errors_out.data = static_cast<void*>(errors_arr);
                            libqt_list /* of QSslError* */ sigval2 = errors_out;
                            slotFunc(self, sigval1, sigval2);
                            free(errors_arr);
                        });
}

void QSslServer_PeerVerifyError(QSslServer* self, QSslSocket* socket, const QSslError* errorVal) {
    self->peerVerifyError(socket, *errorVal);
}

void QSslServer_Connect_PeerVerifyError(QSslServer* self, intptr_t slot) {
    void (*slotFunc)(QSslServer*, QSslSocket*, QSslError*) = reinterpret_cast<void (*)(QSslServer*, QSslSocket*, QSslError*)>(slot);
    QSslServer::connect(self,
                        static_cast<void (QSslServer::*)(QSslSocket*, const QSslError&)>(&QSslServer::peerVerifyError),
                        [self, slotFunc](QSslSocket* socket, const QSslError& errorVal) {
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
    QSslServer::connect(self,
                        static_cast<void (QSslServer::*)(QSslSocket*, QAbstractSocket::SocketError)>(&QSslServer::errorOccurred),
                        [self, slotFunc](QSslSocket* socket, QAbstractSocket::SocketError errorVal) {
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
    QSslServer::connect(self,
                        static_cast<void (QSslServer::*)(QSslSocket*, QSslPreSharedKeyAuthenticator*)>(&QSslServer::preSharedKeyAuthenticationRequired),
                        [self, slotFunc](QSslSocket* socket, QSslPreSharedKeyAuthenticator* authenticator) {
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
    void (*slotFunc)(QSslServer*, QSslSocket*, int, int, const char*) = reinterpret_cast<void (*)(QSslServer*, QSslSocket*, int, int, const char*)>(slot);
    QSslServer::connect(self,
                        static_cast<void (QSslServer::*)(QSslSocket*, QSsl::AlertLevel, QSsl::AlertType, const QString&)>(&QSslServer::alertSent),
                        [self, slotFunc](QSslSocket* socket, QSsl::AlertLevel level, QSsl::AlertType typeVal, const QString& description) {
                            QSslSocket* sigval1 = socket;
                            int sigval2 = static_cast<int>(level);
                            int sigval3 = static_cast<int>(typeVal);
                            const auto description_ret = description;
                            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                            QByteArray description_b = description_ret.toUtf8();
                            auto description_str_len = description_b.length();
                            const char* description_str = static_cast<const char*>(malloc(description_str_len + 1));
                            memcpy((void*)description_str, description_b.data(), description_str_len);
                            ((char*)description_str)[description_str_len] = '\0';
                            const char* sigval4 = description_str;
                            slotFunc(self, sigval1, sigval2, sigval3, sigval4);
                            libqt_free(description_str);
                        });
}

void QSslServer_AlertReceived(QSslServer* self, QSslSocket* socket, int level, int typeVal, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->alertReceived(socket, static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(typeVal), description_QString);
}

void QSslServer_Connect_AlertReceived(QSslServer* self, intptr_t slot) {
    void (*slotFunc)(QSslServer*, QSslSocket*, int, int, const char*) = reinterpret_cast<void (*)(QSslServer*, QSslSocket*, int, int, const char*)>(slot);
    QSslServer::connect(self,
                        static_cast<void (QSslServer::*)(QSslSocket*, QSsl::AlertLevel, QSsl::AlertType, const QString&)>(&QSslServer::alertReceived),
                        [self, slotFunc](QSslSocket* socket, QSsl::AlertLevel level, QSsl::AlertType typeVal, const QString& description) {
                            QSslSocket* sigval1 = socket;
                            int sigval2 = static_cast<int>(level);
                            int sigval3 = static_cast<int>(typeVal);
                            const auto description_ret = description;
                            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                            QByteArray description_b = description_ret.toUtf8();
                            auto description_str_len = description_b.length();
                            const char* description_str = static_cast<const char*>(malloc(description_str_len + 1));
                            memcpy((void*)description_str, description_b.data(), description_str_len);
                            ((char*)description_str)[description_str_len] = '\0';
                            const char* sigval4 = description_str;
                            slotFunc(self, sigval1, sigval2, sigval3, sigval4);
                            libqt_free(description_str);
                        });
}

void QSslServer_HandshakeInterruptedOnError(QSslServer* self, QSslSocket* socket, const QSslError* errorVal) {
    self->handshakeInterruptedOnError(socket, *errorVal);
}

void QSslServer_Connect_HandshakeInterruptedOnError(QSslServer* self, intptr_t slot) {
    void (*slotFunc)(QSslServer*, QSslSocket*, QSslError*) = reinterpret_cast<void (*)(QSslServer*, QSslSocket*, QSslError*)>(slot);
    QSslServer::connect(self,
                        static_cast<void (QSslServer::*)(QSslSocket*, const QSslError&)>(&QSslServer::handshakeInterruptedOnError),
                        [self, slotFunc](QSslSocket* socket, const QSslError& errorVal) {
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
    QSslServer::connect(self,
                        static_cast<void (QSslServer::*)(QSslSocket*)>(&QSslServer::startedEncryptionHandshake),
                        [self, slotFunc](QSslSocket* socket) {
                            QSslSocket* sigval1 = socket;
                            slotFunc(self, sigval1);
                        });
}

void QSslServer_IncomingConnection(QSslServer* self, intptr_t socket) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver) {
        vqsslserver->incomingConnection((qintptr)(socket));
    }
}

libqt_string QSslServer_Tr2(const char* s, const char* c) {
    auto _ret = QSslServer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSslServer_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSslServer::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QSslServer_SuperMetaObject(const QSslServer* self) {
    return (QMetaObject*)self->QSslServer::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnMetaObject(QSslServer* self, intptr_t slot) {
    if (auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self)))
        vqsslserver->qsslserver_metaobject_callback = reinterpret_cast<VirtualQSslServer::QSslServer_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSslServer_SuperMetacast(QSslServer* self, const char* param1) {
    return self->QSslServer::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnMetacast(QSslServer* self, intptr_t slot) {
    if (auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self))
        vqsslserver->qsslserver_metacast_callback = reinterpret_cast<VirtualQSslServer::QSslServer_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSslServer_SuperMetacall(QSslServer* self, int param1, int param2, void** param3) {
    return self->QSslServer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnMetacall(QSslServer* self, intptr_t slot) {
    if (auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self))
        vqsslserver->qsslserver_metacall_callback = reinterpret_cast<VirtualQSslServer::QSslServer_Metacall_Callback>(slot);
}

// Base class handler implementation
void QSslServer_SuperIncomingConnection(QSslServer* self, intptr_t socket) {
    if (auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self)) {
        vqsslserver->QSslServer::incomingConnection((qintptr)(socket));
    } else
        qFatal("Error: Protected virtual method QSslServer::incomingConnection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnIncomingConnection(QSslServer* self, intptr_t slot) {
    if (auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self))
        vqsslserver->qsslserver_incomingconnection_callback = reinterpret_cast<VirtualQSslServer::QSslServer_IncomingConnection_Callback>(slot);
}

// Derived class handler implementation
bool QSslServer_HasPendingConnections(const QSslServer* self) {
    return self->hasPendingConnections();
}

// Base class handler implementation
bool QSslServer_SuperHasPendingConnections(const QSslServer* self) {
    return self->QSslServer::hasPendingConnections();
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnHasPendingConnections(QSslServer* self, intptr_t slot) {
    if (auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self)))
        vqsslserver->qsslserver_haspendingconnections_callback = reinterpret_cast<VirtualQSslServer::QSslServer_HasPendingConnections_Callback>(slot);
}

// Derived class handler implementation
QTcpSocket* QSslServer_NextPendingConnection(QSslServer* self) {
    return self->nextPendingConnection();
}

// Base class handler implementation
QTcpSocket* QSslServer_SuperNextPendingConnection(QSslServer* self) {
    return self->QSslServer::nextPendingConnection();
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnNextPendingConnection(QSslServer* self, intptr_t slot) {
    if (auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self))
        vqsslserver->qsslserver_nextpendingconnection_callback = reinterpret_cast<VirtualQSslServer::QSslServer_NextPendingConnection_Callback>(slot);
}

// Derived class handler implementation
bool QSslServer_Event(QSslServer* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QSslServer_SuperEvent(QSslServer* self, QEvent* event) {
    return self->QSslServer::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnEvent(QSslServer* self, intptr_t slot) {
    if (auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self))
        vqsslserver->qsslserver_event_callback = reinterpret_cast<VirtualQSslServer::QSslServer_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSslServer_EventFilter(QSslServer* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSslServer_SuperEventFilter(QSslServer* self, QObject* watched, QEvent* event) {
    return self->QSslServer::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnEventFilter(QSslServer* self, intptr_t slot) {
    if (auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self))
        vqsslserver->qsslserver_eventfilter_callback = reinterpret_cast<VirtualQSslServer::QSslServer_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSslServer_TimerEvent(QSslServer* self, QTimerEvent* event) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver) {
        vqsslserver->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSslServer::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSslServer_SuperTimerEvent(QSslServer* self, QTimerEvent* event) {
    if (auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self)) {
        vqsslserver->QSslServer::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSslServer::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnTimerEvent(QSslServer* self, intptr_t slot) {
    if (auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self))
        vqsslserver->qsslserver_timerevent_callback = reinterpret_cast<VirtualQSslServer::QSslServer_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSslServer_ChildEvent(QSslServer* self, QChildEvent* event) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver) {
        vqsslserver->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSslServer::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSslServer_SuperChildEvent(QSslServer* self, QChildEvent* event) {
    if (auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self)) {
        vqsslserver->QSslServer::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSslServer::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnChildEvent(QSslServer* self, intptr_t slot) {
    if (auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self))
        vqsslserver->qsslserver_childevent_callback = reinterpret_cast<VirtualQSslServer::QSslServer_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSslServer_CustomEvent(QSslServer* self, QEvent* event) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver) {
        vqsslserver->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSslServer::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSslServer_SuperCustomEvent(QSslServer* self, QEvent* event) {
    if (auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self)) {
        vqsslserver->QSslServer::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSslServer::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnCustomEvent(QSslServer* self, intptr_t slot) {
    if (auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self))
        vqsslserver->qsslserver_customevent_callback = reinterpret_cast<VirtualQSslServer::QSslServer_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSslServer_ConnectNotify(QSslServer* self, const QMetaMethod* signal) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver) {
        vqsslserver->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSslServer::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSslServer_SuperConnectNotify(QSslServer* self, const QMetaMethod* signal) {
    if (auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self)) {
        vqsslserver->QSslServer::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSslServer::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnConnectNotify(QSslServer* self, intptr_t slot) {
    if (auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self))
        vqsslserver->qsslserver_connectnotify_callback = reinterpret_cast<VirtualQSslServer::QSslServer_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSslServer_DisconnectNotify(QSslServer* self, const QMetaMethod* signal) {
    auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self);
    if (vqsslserver) {
        vqsslserver->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSslServer::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSslServer_SuperDisconnectNotify(QSslServer* self, const QMetaMethod* signal) {
    if (auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self)) {
        vqsslserver->QSslServer::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSslServer::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSslServer_OnDisconnectNotify(QSslServer* self, intptr_t slot) {
    if (auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self))
        vqsslserver->qsslserver_disconnectnotify_callback = reinterpret_cast<VirtualQSslServer::QSslServer_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QSslServer_AddPendingConnection(QSslServer* self, QTcpSocket* socket) {
    if (auto* vqsslserver = dynamic_cast<VirtualQSslServer*>(self)) {
        vqsslserver->VirtualQSslServer::addPendingConnection(socket);
    } else
        qFatal("Error: Protected method QSslServer::addPendingConnection called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QSslServer_Sender(const QSslServer* self) {
    if (auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self))) {
        return vqsslserver->VirtualQSslServer::sender();
    } else
        qFatal("Error: Protected method QSslServer::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSslServer_SenderSignalIndex(const QSslServer* self) {
    if (auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self))) {
        return vqsslserver->VirtualQSslServer::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSslServer::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSslServer_Receivers(const QSslServer* self, const char* signal) {
    if (auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self))) {
        return vqsslserver->VirtualQSslServer::receivers(signal);
    } else
        qFatal("Error: Protected method QSslServer::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSslServer_IsSignalConnected(const QSslServer* self, const QMetaMethod* signal) {
    if (auto* vqsslserver = const_cast<VirtualQSslServer*>(dynamic_cast<const VirtualQSslServer*>(self))) {
        return vqsslserver->VirtualQSslServer::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSslServer::isSignalConnected called without a directly constructed type");
}

void QSslServer_Delete(QSslServer* self) {
    delete self;
}
