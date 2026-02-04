#include <QAuthenticator>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QList>
#include <QMaskGenerator>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkProxy>
#include <QNetworkRequest>
#include <QObject>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslPreSharedKeyAuthenticator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QWebSocket>
#include <QWebSocketHandshakeOptions>
#include <qwebsocket.h>
#include "libqwebsocket.h"
#include "libqwebsocket.hxx"

QWebSocket* QWebSocket_new() {
    return new VirtualQWebSocket();
}

QWebSocket* QWebSocket_new2(const libqt_string origin) {
    QString origin_QString = QString::fromUtf8(origin.data, origin.len);
    return new VirtualQWebSocket(origin_QString);
}

QWebSocket* QWebSocket_new3(const libqt_string origin, int version) {
    QString origin_QString = QString::fromUtf8(origin.data, origin.len);
    return new VirtualQWebSocket(origin_QString, static_cast<QWebSocketProtocol::Version>(version));
}

QWebSocket* QWebSocket_new4(const libqt_string origin, int version, QObject* parent) {
    QString origin_QString = QString::fromUtf8(origin.data, origin.len);
    return new VirtualQWebSocket(origin_QString, static_cast<QWebSocketProtocol::Version>(version), parent);
}

QMetaObject* QWebSocket_MetaObject(const QWebSocket* self) {
    auto* vqwebsocket = dynamic_cast<const VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQWebSocket*)self)->metaObject();
    }
}

void* QWebSocket_Metacast(QWebSocket* self, const char* param1) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQWebSocket*)self)->qt_metacast(param1);
    }
}

int QWebSocket_Metacall(QWebSocket* self, int param1, int param2, void** param3) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWebSocket*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void QWebSocket_Abort(QWebSocket* self) {
    self->abort();
}

int QWebSocket_Error(const QWebSocket* self) {
    return static_cast<int>(self->error());
}

libqt_string QWebSocket_ErrorString(const QWebSocket* self) {
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

bool QWebSocket_Flush(QWebSocket* self) {
    return self->flush();
}

bool QWebSocket_IsValid(const QWebSocket* self) {
    return self->isValid();
}

QHostAddress* QWebSocket_LocalAddress(const QWebSocket* self) {
    return new QHostAddress(self->localAddress());
}

uint16_t QWebSocket_LocalPort(const QWebSocket* self) {
    return static_cast<uint16_t>(self->localPort());
}

int QWebSocket_PauseMode(const QWebSocket* self) {
    return static_cast<int>(self->pauseMode());
}

QHostAddress* QWebSocket_PeerAddress(const QWebSocket* self) {
    return new QHostAddress(self->peerAddress());
}

libqt_string QWebSocket_PeerName(const QWebSocket* self) {
    QString _ret = self->peerName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

uint16_t QWebSocket_PeerPort(const QWebSocket* self) {
    return static_cast<uint16_t>(self->peerPort());
}

QNetworkProxy* QWebSocket_Proxy(const QWebSocket* self) {
    return new QNetworkProxy(self->proxy());
}

void QWebSocket_SetProxy(QWebSocket* self, const QNetworkProxy* networkProxy) {
    self->setProxy(*networkProxy);
}

void QWebSocket_SetMaskGenerator(QWebSocket* self, const QMaskGenerator* maskGenerator) {
    self->setMaskGenerator(maskGenerator);
}

QMaskGenerator* QWebSocket_MaskGenerator(const QWebSocket* self) {
    return (QMaskGenerator*)self->maskGenerator();
}

long long QWebSocket_ReadBufferSize(const QWebSocket* self) {
    return static_cast<long long>(self->readBufferSize());
}

void QWebSocket_SetReadBufferSize(QWebSocket* self, long long size) {
    self->setReadBufferSize(static_cast<qint64>(size));
}

void QWebSocket_Resume(QWebSocket* self) {
    self->resume();
}

void QWebSocket_SetPauseMode(QWebSocket* self, int pauseMode) {
    self->setPauseMode(static_cast<QAbstractSocket::PauseModes>(pauseMode));
}

int QWebSocket_State(const QWebSocket* self) {
    return static_cast<int>(self->state());
}

int QWebSocket_Version(const QWebSocket* self) {
    return static_cast<int>(self->version());
}

libqt_string QWebSocket_ResourceName(const QWebSocket* self) {
    QString _ret = self->resourceName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* QWebSocket_RequestUrl(const QWebSocket* self) {
    return new QUrl(self->requestUrl());
}

QNetworkRequest* QWebSocket_Request(const QWebSocket* self) {
    return new QNetworkRequest(self->request());
}

QWebSocketHandshakeOptions* QWebSocket_HandshakeOptions(const QWebSocket* self) {
    return new QWebSocketHandshakeOptions(self->handshakeOptions());
}

libqt_string QWebSocket_Origin(const QWebSocket* self) {
    QString _ret = self->origin();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebSocket_Subprotocol(const QWebSocket* self) {
    QString _ret = self->subprotocol();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QWebSocket_CloseCode(const QWebSocket* self) {
    return static_cast<int>(self->closeCode());
}

libqt_string QWebSocket_CloseReason(const QWebSocket* self) {
    QString _ret = self->closeReason();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

long long QWebSocket_SendTextMessage(QWebSocket* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    return static_cast<long long>(self->sendTextMessage(message_QString));
}

long long QWebSocket_SendBinaryMessage(QWebSocket* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return static_cast<long long>(self->sendBinaryMessage(data_QByteArray));
}

void QWebSocket_IgnoreSslErrors(QWebSocket* self, const libqt_list /* of QSslError* */ errors) {
    QList<QSslError> errors_QList;
    errors_QList.reserve(errors.len);
    QSslError** errors_arr = static_cast<QSslError**>(errors.data);
    for (size_t i = 0; i < errors.len; ++i) {
        errors_QList.push_back(*(errors_arr[i]));
    }
    self->ignoreSslErrors(errors_QList);
}

void QWebSocket_ContinueInterruptedHandshake(QWebSocket* self) {
    self->continueInterruptedHandshake();
}

void QWebSocket_SetSslConfiguration(QWebSocket* self, const QSslConfiguration* sslConfiguration) {
    self->setSslConfiguration(*sslConfiguration);
}

QSslConfiguration* QWebSocket_SslConfiguration(const QWebSocket* self) {
    return new QSslConfiguration(self->sslConfiguration());
}

long long QWebSocket_BytesToWrite(const QWebSocket* self) {
    return static_cast<long long>(self->bytesToWrite());
}

void QWebSocket_SetMaxAllowedIncomingFrameSize(QWebSocket* self, unsigned long long maxAllowedIncomingFrameSize) {
    self->setMaxAllowedIncomingFrameSize(static_cast<quint64>(maxAllowedIncomingFrameSize));
}

unsigned long long QWebSocket_MaxAllowedIncomingFrameSize(const QWebSocket* self) {
    return static_cast<unsigned long long>(self->maxAllowedIncomingFrameSize());
}

void QWebSocket_SetMaxAllowedIncomingMessageSize(QWebSocket* self, unsigned long long maxAllowedIncomingMessageSize) {
    self->setMaxAllowedIncomingMessageSize(static_cast<quint64>(maxAllowedIncomingMessageSize));
}

unsigned long long QWebSocket_MaxAllowedIncomingMessageSize(const QWebSocket* self) {
    return static_cast<unsigned long long>(self->maxAllowedIncomingMessageSize());
}

unsigned long long QWebSocket_MaxIncomingMessageSize() {
    return static_cast<unsigned long long>(QWebSocket::maxIncomingMessageSize());
}

unsigned long long QWebSocket_MaxIncomingFrameSize() {
    return static_cast<unsigned long long>(QWebSocket::maxIncomingFrameSize());
}

void QWebSocket_SetOutgoingFrameSize(QWebSocket* self, unsigned long long outgoingFrameSize) {
    self->setOutgoingFrameSize(static_cast<quint64>(outgoingFrameSize));
}

unsigned long long QWebSocket_OutgoingFrameSize(const QWebSocket* self) {
    return static_cast<unsigned long long>(self->outgoingFrameSize());
}

unsigned long long QWebSocket_MaxOutgoingFrameSize() {
    return static_cast<unsigned long long>(QWebSocket::maxOutgoingFrameSize());
}

void QWebSocket_Close(QWebSocket* self) {
    self->close();
}

void QWebSocket_Open(QWebSocket* self, const QUrl* url) {
    self->open(*url);
}

void QWebSocket_Open2(QWebSocket* self, const QNetworkRequest* request) {
    self->open(*request);
}

void QWebSocket_Open3(QWebSocket* self, const QUrl* url, const QWebSocketHandshakeOptions* options) {
    self->open(*url, *options);
}

void QWebSocket_Open4(QWebSocket* self, const QNetworkRequest* request, const QWebSocketHandshakeOptions* options) {
    self->open(*request, *options);
}

void QWebSocket_Ping(QWebSocket* self) {
    self->ping();
}

void QWebSocket_IgnoreSslErrors2(QWebSocket* self) {
    self->ignoreSslErrors();
}

void QWebSocket_AboutToClose(QWebSocket* self) {
    self->aboutToClose();
}

void QWebSocket_Connect_AboutToClose(QWebSocket* self, intptr_t slot) {
    void (*slotFunc)(QWebSocket*) = reinterpret_cast<void (*)(QWebSocket*)>(slot);
    QWebSocket::connect(self, &QWebSocket::aboutToClose, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWebSocket_Connected(QWebSocket* self) {
    self->connected();
}

void QWebSocket_Connect_Connected(QWebSocket* self, intptr_t slot) {
    void (*slotFunc)(QWebSocket*) = reinterpret_cast<void (*)(QWebSocket*)>(slot);
    QWebSocket::connect(self, &QWebSocket::connected, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWebSocket_Disconnected(QWebSocket* self) {
    self->disconnected();
}

void QWebSocket_Connect_Disconnected(QWebSocket* self, intptr_t slot) {
    void (*slotFunc)(QWebSocket*) = reinterpret_cast<void (*)(QWebSocket*)>(slot);
    QWebSocket::connect(self, &QWebSocket::disconnected, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWebSocket_StateChanged(QWebSocket* self, int state) {
    self->stateChanged(static_cast<QAbstractSocket::SocketState>(state));
}

void QWebSocket_Connect_StateChanged(QWebSocket* self, intptr_t slot) {
    void (*slotFunc)(QWebSocket*, int) = reinterpret_cast<void (*)(QWebSocket*, int)>(slot);
    QWebSocket::connect(self, &QWebSocket::stateChanged, [self, slotFunc](QAbstractSocket::SocketState state) {
        int sigval1 = static_cast<int>(state);
        slotFunc(self, sigval1);
    });
}

void QWebSocket_ProxyAuthenticationRequired(QWebSocket* self, const QNetworkProxy* proxy, QAuthenticator* pAuthenticator) {
    self->proxyAuthenticationRequired(*proxy, pAuthenticator);
}

void QWebSocket_Connect_ProxyAuthenticationRequired(QWebSocket* self, intptr_t slot) {
    void (*slotFunc)(QWebSocket*, QNetworkProxy*, QAuthenticator*) = reinterpret_cast<void (*)(QWebSocket*, QNetworkProxy*, QAuthenticator*)>(slot);
    QWebSocket::connect(self, &QWebSocket::proxyAuthenticationRequired, [self, slotFunc](const QNetworkProxy& proxy, QAuthenticator* pAuthenticator) {
        const QNetworkProxy& proxy_ret = proxy;
        // Cast returned reference into pointer
        QNetworkProxy* sigval1 = const_cast<QNetworkProxy*>(&proxy_ret);
        QAuthenticator* sigval2 = pAuthenticator;
        slotFunc(self, sigval1, sigval2);
    });
}

void QWebSocket_AuthenticationRequired(QWebSocket* self, QAuthenticator* authenticator) {
    self->authenticationRequired(authenticator);
}

void QWebSocket_Connect_AuthenticationRequired(QWebSocket* self, intptr_t slot) {
    void (*slotFunc)(QWebSocket*, QAuthenticator*) = reinterpret_cast<void (*)(QWebSocket*, QAuthenticator*)>(slot);
    QWebSocket::connect(self, &QWebSocket::authenticationRequired, [self, slotFunc](QAuthenticator* authenticator) {
        QAuthenticator* sigval1 = authenticator;
        slotFunc(self, sigval1);
    });
}

void QWebSocket_ReadChannelFinished(QWebSocket* self) {
    self->readChannelFinished();
}

void QWebSocket_Connect_ReadChannelFinished(QWebSocket* self, intptr_t slot) {
    void (*slotFunc)(QWebSocket*) = reinterpret_cast<void (*)(QWebSocket*)>(slot);
    QWebSocket::connect(self, &QWebSocket::readChannelFinished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWebSocket_TextFrameReceived(QWebSocket* self, const libqt_string frame, bool isLastFrame) {
    QString frame_QString = QString::fromUtf8(frame.data, frame.len);
    self->textFrameReceived(frame_QString, isLastFrame);
}

void QWebSocket_Connect_TextFrameReceived(QWebSocket* self, intptr_t slot) {
    void (*slotFunc)(QWebSocket*, const char*, bool) = reinterpret_cast<void (*)(QWebSocket*, const char*, bool)>(slot);
    QWebSocket::connect(self, &QWebSocket::textFrameReceived, [self, slotFunc](const QString& frame, bool isLastFrame) {
        const QString frame_ret = frame;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray frame_b = frame_ret.toUtf8();
        const char* frame_str = static_cast<const char*>(malloc(frame_b.length() + 1));
        memcpy((void*)frame_str, frame_b.data(), frame_b.length());
        ((char*)frame_str)[frame_b.length()] = '\0';
        const char* sigval1 = frame_str;
        bool sigval2 = isLastFrame;
        slotFunc(self, sigval1, sigval2);
        libqt_free(frame_str);
    });
}

void QWebSocket_BinaryFrameReceived(QWebSocket* self, const libqt_string frame, bool isLastFrame) {
    QByteArray frame_QByteArray(frame.data, frame.len);
    self->binaryFrameReceived(frame_QByteArray, isLastFrame);
}

void QWebSocket_Connect_BinaryFrameReceived(QWebSocket* self, intptr_t slot) {
    void (*slotFunc)(QWebSocket*, const char*, bool) = reinterpret_cast<void (*)(QWebSocket*, const char*, bool)>(slot);
    QWebSocket::connect(self, &QWebSocket::binaryFrameReceived, [self, slotFunc](const QByteArray& frame, bool isLastFrame) {
        const QByteArray frame_qb = frame;
        libqt_string frame_str;
        frame_str.len = frame_qb.length();
        frame_str.data = static_cast<const char*>(malloc(frame_str.len + 1));
        memcpy((void*)frame_str.data, frame_qb.data(), frame_str.len);
        ((char*)frame_str.data)[frame_str.len] = '\0';
        const char* sigval1 = frame_str.data;
        bool sigval2 = isLastFrame;
        slotFunc(self, sigval1, sigval2);
    });
}

void QWebSocket_TextMessageReceived(QWebSocket* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->textMessageReceived(message_QString);
}

void QWebSocket_Connect_TextMessageReceived(QWebSocket* self, intptr_t slot) {
    void (*slotFunc)(QWebSocket*, const char*) = reinterpret_cast<void (*)(QWebSocket*, const char*)>(slot);
    QWebSocket::connect(self, &QWebSocket::textMessageReceived, [self, slotFunc](const QString& message) {
        const QString message_ret = message;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray message_b = message_ret.toUtf8();
        const char* message_str = static_cast<const char*>(malloc(message_b.length() + 1));
        memcpy((void*)message_str, message_b.data(), message_b.length());
        ((char*)message_str)[message_b.length()] = '\0';
        const char* sigval1 = message_str;
        slotFunc(self, sigval1);
        libqt_free(message_str);
    });
}

void QWebSocket_BinaryMessageReceived(QWebSocket* self, const libqt_string message) {
    QByteArray message_QByteArray(message.data, message.len);
    self->binaryMessageReceived(message_QByteArray);
}

void QWebSocket_Connect_BinaryMessageReceived(QWebSocket* self, intptr_t slot) {
    void (*slotFunc)(QWebSocket*, const char*) = reinterpret_cast<void (*)(QWebSocket*, const char*)>(slot);
    QWebSocket::connect(self, &QWebSocket::binaryMessageReceived, [self, slotFunc](const QByteArray& message) {
        const QByteArray message_qb = message;
        libqt_string message_str;
        message_str.len = message_qb.length();
        message_str.data = static_cast<const char*>(malloc(message_str.len + 1));
        memcpy((void*)message_str.data, message_qb.data(), message_str.len);
        ((char*)message_str.data)[message_str.len] = '\0';
        const char* sigval1 = message_str.data;
        slotFunc(self, sigval1);
    });
}

void QWebSocket_Error2(QWebSocket* self, int errorVal) {
    self->error(static_cast<QAbstractSocket::SocketError>(errorVal));
}

void QWebSocket_ErrorOccurred(QWebSocket* self, int errorVal) {
    self->errorOccurred(static_cast<QAbstractSocket::SocketError>(errorVal));
}

void QWebSocket_Connect_ErrorOccurred(QWebSocket* self, intptr_t slot) {
    void (*slotFunc)(QWebSocket*, int) = reinterpret_cast<void (*)(QWebSocket*, int)>(slot);
    QWebSocket::connect(self, &QWebSocket::errorOccurred, [self, slotFunc](QAbstractSocket::SocketError errorVal) {
        int sigval1 = static_cast<int>(errorVal);
        slotFunc(self, sigval1);
    });
}

void QWebSocket_Pong(QWebSocket* self, unsigned long long elapsedTime, const libqt_string payload) {
    QByteArray payload_QByteArray(payload.data, payload.len);
    self->pong(static_cast<quint64>(elapsedTime), payload_QByteArray);
}

void QWebSocket_Connect_Pong(QWebSocket* self, intptr_t slot) {
    void (*slotFunc)(QWebSocket*, unsigned long long, const char*) = reinterpret_cast<void (*)(QWebSocket*, unsigned long long, const char*)>(slot);
    QWebSocket::connect(self, &QWebSocket::pong, [self, slotFunc](quint64 elapsedTime, const QByteArray& payload) {
        unsigned long long sigval1 = static_cast<unsigned long long>(elapsedTime);
        const QByteArray payload_qb = payload;
        libqt_string payload_str;
        payload_str.len = payload_qb.length();
        payload_str.data = static_cast<const char*>(malloc(payload_str.len + 1));
        memcpy((void*)payload_str.data, payload_qb.data(), payload_str.len);
        ((char*)payload_str.data)[payload_str.len] = '\0';
        const char* sigval2 = payload_str.data;
        slotFunc(self, sigval1, sigval2);
    });
}

void QWebSocket_BytesWritten(QWebSocket* self, long long bytes) {
    self->bytesWritten(static_cast<qint64>(bytes));
}

void QWebSocket_Connect_BytesWritten(QWebSocket* self, intptr_t slot) {
    void (*slotFunc)(QWebSocket*, long long) = reinterpret_cast<void (*)(QWebSocket*, long long)>(slot);
    QWebSocket::connect(self, &QWebSocket::bytesWritten, [self, slotFunc](qint64 bytes) {
        long long sigval1 = static_cast<long long>(bytes);
        slotFunc(self, sigval1);
    });
}

void QWebSocket_PeerVerifyError(QWebSocket* self, const QSslError* errorVal) {
    self->peerVerifyError(*errorVal);
}

void QWebSocket_Connect_PeerVerifyError(QWebSocket* self, intptr_t slot) {
    void (*slotFunc)(QWebSocket*, QSslError*) = reinterpret_cast<void (*)(QWebSocket*, QSslError*)>(slot);
    QWebSocket::connect(self, &QWebSocket::peerVerifyError, [self, slotFunc](const QSslError& errorVal) {
        const QSslError& errorVal_ret = errorVal;
        // Cast returned reference into pointer
        QSslError* sigval1 = const_cast<QSslError*>(&errorVal_ret);
        slotFunc(self, sigval1);
    });
}

void QWebSocket_SslErrors(QWebSocket* self, const libqt_list /* of QSslError* */ errors) {
    QList<QSslError> errors_QList;
    errors_QList.reserve(errors.len);
    QSslError** errors_arr = static_cast<QSslError**>(errors.data);
    for (size_t i = 0; i < errors.len; ++i) {
        errors_QList.push_back(*(errors_arr[i]));
    }
    self->sslErrors(errors_QList);
}

void QWebSocket_Connect_SslErrors(QWebSocket* self, intptr_t slot) {
    void (*slotFunc)(QWebSocket*, libqt_list /* of QSslError* */) = reinterpret_cast<void (*)(QWebSocket*, libqt_list /* of QSslError* */)>(slot);
    QWebSocket::connect(self, &QWebSocket::sslErrors, [self, slotFunc](const QList<QSslError>& errors) {
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

void QWebSocket_PreSharedKeyAuthenticationRequired(QWebSocket* self, QSslPreSharedKeyAuthenticator* authenticator) {
    self->preSharedKeyAuthenticationRequired(authenticator);
}

void QWebSocket_Connect_PreSharedKeyAuthenticationRequired(QWebSocket* self, intptr_t slot) {
    void (*slotFunc)(QWebSocket*, QSslPreSharedKeyAuthenticator*) = reinterpret_cast<void (*)(QWebSocket*, QSslPreSharedKeyAuthenticator*)>(slot);
    QWebSocket::connect(self, &QWebSocket::preSharedKeyAuthenticationRequired, [self, slotFunc](QSslPreSharedKeyAuthenticator* authenticator) {
        QSslPreSharedKeyAuthenticator* sigval1 = authenticator;
        slotFunc(self, sigval1);
    });
}

void QWebSocket_AlertSent(QWebSocket* self, int level, int typeVal, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->alertSent(static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(typeVal), description_QString);
}

void QWebSocket_Connect_AlertSent(QWebSocket* self, intptr_t slot) {
    void (*slotFunc)(QWebSocket*, int, int, const char*) = reinterpret_cast<void (*)(QWebSocket*, int, int, const char*)>(slot);
    QWebSocket::connect(self, &QWebSocket::alertSent, [self, slotFunc](QSsl::AlertLevel level, QSsl::AlertType typeVal, const QString& description) {
        int sigval1 = static_cast<int>(level);
        int sigval2 = static_cast<int>(typeVal);
        const QString description_ret = description;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray description_b = description_ret.toUtf8();
        const char* description_str = static_cast<const char*>(malloc(description_b.length() + 1));
        memcpy((void*)description_str, description_b.data(), description_b.length());
        ((char*)description_str)[description_b.length()] = '\0';
        const char* sigval3 = description_str;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(description_str);
    });
}

void QWebSocket_AlertReceived(QWebSocket* self, int level, int typeVal, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->alertReceived(static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(typeVal), description_QString);
}

void QWebSocket_Connect_AlertReceived(QWebSocket* self, intptr_t slot) {
    void (*slotFunc)(QWebSocket*, int, int, const char*) = reinterpret_cast<void (*)(QWebSocket*, int, int, const char*)>(slot);
    QWebSocket::connect(self, &QWebSocket::alertReceived, [self, slotFunc](QSsl::AlertLevel level, QSsl::AlertType typeVal, const QString& description) {
        int sigval1 = static_cast<int>(level);
        int sigval2 = static_cast<int>(typeVal);
        const QString description_ret = description;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray description_b = description_ret.toUtf8();
        const char* description_str = static_cast<const char*>(malloc(description_b.length() + 1));
        memcpy((void*)description_str, description_b.data(), description_b.length());
        ((char*)description_str)[description_b.length()] = '\0';
        const char* sigval3 = description_str;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(description_str);
    });
}

void QWebSocket_HandshakeInterruptedOnError(QWebSocket* self, const QSslError* errorVal) {
    self->handshakeInterruptedOnError(*errorVal);
}

void QWebSocket_Connect_HandshakeInterruptedOnError(QWebSocket* self, intptr_t slot) {
    void (*slotFunc)(QWebSocket*, QSslError*) = reinterpret_cast<void (*)(QWebSocket*, QSslError*)>(slot);
    QWebSocket::connect(self, &QWebSocket::handshakeInterruptedOnError, [self, slotFunc](const QSslError& errorVal) {
        const QSslError& errorVal_ret = errorVal;
        // Cast returned reference into pointer
        QSslError* sigval1 = const_cast<QSslError*>(&errorVal_ret);
        slotFunc(self, sigval1);
    });
}

void QWebSocket_Close1(QWebSocket* self, int closeCode) {
    self->close(static_cast<QWebSocketProtocol::CloseCode>(closeCode));
}

void QWebSocket_Close2(QWebSocket* self, int closeCode, const libqt_string reason) {
    QString reason_QString = QString::fromUtf8(reason.data, reason.len);
    self->close(static_cast<QWebSocketProtocol::CloseCode>(closeCode), reason_QString);
}

void QWebSocket_Ping1(QWebSocket* self, const libqt_string payload) {
    QByteArray payload_QByteArray(payload.data, payload.len);
    self->ping(payload_QByteArray);
}

// Base class handler implementation
QMetaObject* QWebSocket_QBaseMetaObject(const QWebSocket* self) {
    auto* vqwebsocket = const_cast<VirtualQWebSocket*>(dynamic_cast<const VirtualQWebSocket*>(self));
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_MetaObject_IsBase(true);
        return (QMetaObject*)vqwebsocket->metaObject();
    } else {
        return (QMetaObject*)self->QWebSocket::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocket_OnMetaObject(const QWebSocket* self, intptr_t slot) {
    auto* vqwebsocket = const_cast<VirtualQWebSocket*>(dynamic_cast<const VirtualQWebSocket*>(self));
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_MetaObject_Callback(reinterpret_cast<VirtualQWebSocket::QWebSocket_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QWebSocket_QBaseMetacast(QWebSocket* self, const char* param1) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_Metacast_IsBase(true);
        return vqwebsocket->qt_metacast(param1);
    } else {
        return self->QWebSocket::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocket_OnMetacast(QWebSocket* self, intptr_t slot) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_Metacast_Callback(reinterpret_cast<VirtualQWebSocket::QWebSocket_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QWebSocket_QBaseMetacall(QWebSocket* self, int param1, int param2, void** param3) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_Metacall_IsBase(true);
        return vqwebsocket->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QWebSocket::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocket_OnMetacall(QWebSocket* self, intptr_t slot) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_Metacall_Callback(reinterpret_cast<VirtualQWebSocket::QWebSocket_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebSocket_Event(QWebSocket* self, QEvent* event) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        return vqwebsocket->event(event);
    } else {
        return self->QWebSocket::event(event);
    }
}

// Base class handler implementation
bool QWebSocket_QBaseEvent(QWebSocket* self, QEvent* event) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_Event_IsBase(true);
        return vqwebsocket->event(event);
    } else {
        return self->QWebSocket::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocket_OnEvent(QWebSocket* self, intptr_t slot) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_Event_Callback(reinterpret_cast<VirtualQWebSocket::QWebSocket_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebSocket_EventFilter(QWebSocket* self, QObject* watched, QEvent* event) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        return vqwebsocket->eventFilter(watched, event);
    } else {
        return self->QWebSocket::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QWebSocket_QBaseEventFilter(QWebSocket* self, QObject* watched, QEvent* event) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_EventFilter_IsBase(true);
        return vqwebsocket->eventFilter(watched, event);
    } else {
        return self->QWebSocket::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocket_OnEventFilter(QWebSocket* self, intptr_t slot) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_EventFilter_Callback(reinterpret_cast<VirtualQWebSocket::QWebSocket_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebSocket_TimerEvent(QWebSocket* self, QTimerEvent* event) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->timerEvent(event);
    } else {
        ((VirtualQWebSocket*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QWebSocket_QBaseTimerEvent(QWebSocket* self, QTimerEvent* event) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_TimerEvent_IsBase(true);
        vqwebsocket->timerEvent(event);
    } else {
        ((VirtualQWebSocket*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocket_OnTimerEvent(QWebSocket* self, intptr_t slot) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_TimerEvent_Callback(reinterpret_cast<VirtualQWebSocket::QWebSocket_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebSocket_ChildEvent(QWebSocket* self, QChildEvent* event) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->childEvent(event);
    } else {
        ((VirtualQWebSocket*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QWebSocket_QBaseChildEvent(QWebSocket* self, QChildEvent* event) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_ChildEvent_IsBase(true);
        vqwebsocket->childEvent(event);
    } else {
        ((VirtualQWebSocket*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocket_OnChildEvent(QWebSocket* self, intptr_t slot) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_ChildEvent_Callback(reinterpret_cast<VirtualQWebSocket::QWebSocket_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebSocket_CustomEvent(QWebSocket* self, QEvent* event) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->customEvent(event);
    } else {
        ((VirtualQWebSocket*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QWebSocket_QBaseCustomEvent(QWebSocket* self, QEvent* event) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_CustomEvent_IsBase(true);
        vqwebsocket->customEvent(event);
    } else {
        ((VirtualQWebSocket*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocket_OnCustomEvent(QWebSocket* self, intptr_t slot) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_CustomEvent_Callback(reinterpret_cast<VirtualQWebSocket::QWebSocket_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebSocket_ConnectNotify(QWebSocket* self, const QMetaMethod* signal) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->connectNotify(*signal);
    } else {
        ((VirtualQWebSocket*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QWebSocket_QBaseConnectNotify(QWebSocket* self, const QMetaMethod* signal) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_ConnectNotify_IsBase(true);
        vqwebsocket->connectNotify(*signal);
    } else {
        ((VirtualQWebSocket*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocket_OnConnectNotify(QWebSocket* self, intptr_t slot) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_ConnectNotify_Callback(reinterpret_cast<VirtualQWebSocket::QWebSocket_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebSocket_DisconnectNotify(QWebSocket* self, const QMetaMethod* signal) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->disconnectNotify(*signal);
    } else {
        ((VirtualQWebSocket*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QWebSocket_QBaseDisconnectNotify(QWebSocket* self, const QMetaMethod* signal) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_DisconnectNotify_IsBase(true);
        vqwebsocket->disconnectNotify(*signal);
    } else {
        ((VirtualQWebSocket*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocket_OnDisconnectNotify(QWebSocket* self, intptr_t slot) {
    auto* vqwebsocket = dynamic_cast<VirtualQWebSocket*>(self);
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_DisconnectNotify_Callback(reinterpret_cast<VirtualQWebSocket::QWebSocket_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWebSocket_Sender(const QWebSocket* self) {
    auto* vqwebsocket = const_cast<VirtualQWebSocket*>(dynamic_cast<const VirtualQWebSocket*>(self));
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        return vqwebsocket->sender();
    } else {
        return ((VirtualQWebSocket*)self)->sender();
    }
}

// Base class handler implementation
QObject* QWebSocket_QBaseSender(const QWebSocket* self) {
    auto* vqwebsocket = const_cast<VirtualQWebSocket*>(dynamic_cast<const VirtualQWebSocket*>(self));
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_Sender_IsBase(true);
        return vqwebsocket->sender();
    } else {
        return ((VirtualQWebSocket*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocket_OnSender(const QWebSocket* self, intptr_t slot) {
    auto* vqwebsocket = const_cast<VirtualQWebSocket*>(dynamic_cast<const VirtualQWebSocket*>(self));
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_Sender_Callback(reinterpret_cast<VirtualQWebSocket::QWebSocket_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebSocket_SenderSignalIndex(const QWebSocket* self) {
    auto* vqwebsocket = const_cast<VirtualQWebSocket*>(dynamic_cast<const VirtualQWebSocket*>(self));
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        return vqwebsocket->senderSignalIndex();
    } else {
        return ((VirtualQWebSocket*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QWebSocket_QBaseSenderSignalIndex(const QWebSocket* self) {
    auto* vqwebsocket = const_cast<VirtualQWebSocket*>(dynamic_cast<const VirtualQWebSocket*>(self));
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_SenderSignalIndex_IsBase(true);
        return vqwebsocket->senderSignalIndex();
    } else {
        return ((VirtualQWebSocket*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocket_OnSenderSignalIndex(const QWebSocket* self, intptr_t slot) {
    auto* vqwebsocket = const_cast<VirtualQWebSocket*>(dynamic_cast<const VirtualQWebSocket*>(self));
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_SenderSignalIndex_Callback(reinterpret_cast<VirtualQWebSocket::QWebSocket_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebSocket_Receivers(const QWebSocket* self, const char* signal) {
    auto* vqwebsocket = const_cast<VirtualQWebSocket*>(dynamic_cast<const VirtualQWebSocket*>(self));
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        return vqwebsocket->receivers(signal);
    } else {
        return ((VirtualQWebSocket*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QWebSocket_QBaseReceivers(const QWebSocket* self, const char* signal) {
    auto* vqwebsocket = const_cast<VirtualQWebSocket*>(dynamic_cast<const VirtualQWebSocket*>(self));
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_Receivers_IsBase(true);
        return vqwebsocket->receivers(signal);
    } else {
        return ((VirtualQWebSocket*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocket_OnReceivers(const QWebSocket* self, intptr_t slot) {
    auto* vqwebsocket = const_cast<VirtualQWebSocket*>(dynamic_cast<const VirtualQWebSocket*>(self));
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_Receivers_Callback(reinterpret_cast<VirtualQWebSocket::QWebSocket_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebSocket_IsSignalConnected(const QWebSocket* self, const QMetaMethod* signal) {
    auto* vqwebsocket = const_cast<VirtualQWebSocket*>(dynamic_cast<const VirtualQWebSocket*>(self));
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        return vqwebsocket->isSignalConnected(*signal);
    } else {
        return ((VirtualQWebSocket*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QWebSocket_QBaseIsSignalConnected(const QWebSocket* self, const QMetaMethod* signal) {
    auto* vqwebsocket = const_cast<VirtualQWebSocket*>(dynamic_cast<const VirtualQWebSocket*>(self));
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_IsSignalConnected_IsBase(true);
        return vqwebsocket->isSignalConnected(*signal);
    } else {
        return ((VirtualQWebSocket*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebSocket_OnIsSignalConnected(const QWebSocket* self, intptr_t slot) {
    auto* vqwebsocket = const_cast<VirtualQWebSocket*>(dynamic_cast<const VirtualQWebSocket*>(self));
    if (vqwebsocket && vqwebsocket->isVirtualQWebSocket) {
        vqwebsocket->setQWebSocket_IsSignalConnected_Callback(reinterpret_cast<VirtualQWebSocket::QWebSocket_IsSignalConnected_Callback>(slot));
    }
}

void QWebSocket_Delete(QWebSocket* self) {
    delete self;
}
