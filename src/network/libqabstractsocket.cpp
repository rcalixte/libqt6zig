#include <QAbstractSocket>
#include <QAuthenticator>
#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkProxy>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qabstractsocket.h>
#include "libqabstractsocket.h"
#include "libqabstractsocket.hxx"

QAbstractSocket* QAbstractSocket_new(int socketType, QObject* parent) {
    return new VirtualQAbstractSocket(static_cast<QAbstractSocket::SocketType>(socketType), parent);
}

QMetaObject* QAbstractSocket_MetaObject(const QAbstractSocket* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractSocket_Metacast(QAbstractSocket* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractSocket_Metacall(QAbstractSocket* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractSocket_Tr(const char* s) {
    auto _ret = QAbstractSocket::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractSocket_Resume(QAbstractSocket* self) {
    self->resume();
}

int QAbstractSocket_PauseMode(const QAbstractSocket* self) {
    return static_cast<int>(self->pauseMode());
}

void QAbstractSocket_SetPauseMode(QAbstractSocket* self, int pauseMode) {
    self->setPauseMode(static_cast<QAbstractSocket::PauseModes>(pauseMode));
}

bool QAbstractSocket_Bind(QAbstractSocket* self, const QHostAddress* address, uint16_t port, int mode) {
    return self->bind(*address, static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
}

bool QAbstractSocket_Bind2(QAbstractSocket* self) {
    return self->bind();
}

void QAbstractSocket_ConnectToHost(QAbstractSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    self->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

void QAbstractSocket_ConnectToHost2(QAbstractSocket* self, const QHostAddress* address, uint16_t port) {
    self->connectToHost(*address, static_cast<quint16>(port));
}

void QAbstractSocket_DisconnectFromHost(QAbstractSocket* self) {
    self->disconnectFromHost();
}

bool QAbstractSocket_IsValid(const QAbstractSocket* self) {
    return self->isValid();
}

long long QAbstractSocket_BytesAvailable(const QAbstractSocket* self) {
    return static_cast<long long>(self->bytesAvailable());
}

long long QAbstractSocket_BytesToWrite(const QAbstractSocket* self) {
    return static_cast<long long>(self->bytesToWrite());
}

uint16_t QAbstractSocket_LocalPort(const QAbstractSocket* self) {
    return static_cast<uint16_t>(self->localPort());
}

QHostAddress* QAbstractSocket_LocalAddress(const QAbstractSocket* self) {
    return new QHostAddress(self->localAddress());
}

uint16_t QAbstractSocket_PeerPort(const QAbstractSocket* self) {
    return static_cast<uint16_t>(self->peerPort());
}

QHostAddress* QAbstractSocket_PeerAddress(const QAbstractSocket* self) {
    return new QHostAddress(self->peerAddress());
}

libqt_string QAbstractSocket_PeerName(const QAbstractSocket* self) {
    auto _ret = self->peerName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

long long QAbstractSocket_ReadBufferSize(const QAbstractSocket* self) {
    return static_cast<long long>(self->readBufferSize());
}

void QAbstractSocket_SetReadBufferSize(QAbstractSocket* self, long long size) {
    self->setReadBufferSize(static_cast<qint64>(size));
}

void QAbstractSocket_Abort(QAbstractSocket* self) {
    self->abort();
}

intptr_t QAbstractSocket_SocketDescriptor(const QAbstractSocket* self) {
    qintptr _ret = self->socketDescriptor();
    return (intptr_t)(_ret);
}

bool QAbstractSocket_SetSocketDescriptor(QAbstractSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

void QAbstractSocket_SetSocketOption(QAbstractSocket* self, int option, const QVariant* value) {
    self->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}

QVariant* QAbstractSocket_SocketOption(QAbstractSocket* self, int option) {
    return new QVariant(self->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}

int QAbstractSocket_SocketType(const QAbstractSocket* self) {
    return static_cast<int>(self->socketType());
}

int QAbstractSocket_State(const QAbstractSocket* self) {
    return static_cast<int>(self->state());
}

int QAbstractSocket_Error(const QAbstractSocket* self) {
    return static_cast<int>(self->error());
}

void QAbstractSocket_Close(QAbstractSocket* self) {
    self->close();
}

bool QAbstractSocket_IsSequential(const QAbstractSocket* self) {
    return self->isSequential();
}

bool QAbstractSocket_Flush(QAbstractSocket* self) {
    return self->flush();
}

bool QAbstractSocket_WaitForConnected(QAbstractSocket* self, int msecs) {
    return self->waitForConnected(static_cast<int>(msecs));
}

bool QAbstractSocket_WaitForReadyRead(QAbstractSocket* self, int msecs) {
    return self->waitForReadyRead(static_cast<int>(msecs));
}

bool QAbstractSocket_WaitForBytesWritten(QAbstractSocket* self, int msecs) {
    return self->waitForBytesWritten(static_cast<int>(msecs));
}

bool QAbstractSocket_WaitForDisconnected(QAbstractSocket* self, int msecs) {
    return self->waitForDisconnected(static_cast<int>(msecs));
}

void QAbstractSocket_SetProxy(QAbstractSocket* self, const QNetworkProxy* networkProxy) {
    self->setProxy(*networkProxy);
}

QNetworkProxy* QAbstractSocket_Proxy(const QAbstractSocket* self) {
    return new QNetworkProxy(self->proxy());
}

libqt_string QAbstractSocket_ProtocolTag(const QAbstractSocket* self) {
    auto _ret = self->protocolTag();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractSocket_SetProtocolTag(QAbstractSocket* self, const libqt_string tag) {
    QString tag_QString = QString::fromUtf8(tag.data, tag.len);
    self->setProtocolTag(tag_QString);
}

void QAbstractSocket_HostFound(QAbstractSocket* self) {
    self->hostFound();
}

void QAbstractSocket_Connect_HostFound(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*) = reinterpret_cast<void (*)(QAbstractSocket*)>(slot);
    QAbstractSocket::connect(self,
                             static_cast<void (QAbstractSocket::*)()>(&QAbstractSocket::hostFound),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QAbstractSocket_Connected(QAbstractSocket* self) {
    self->connected();
}

void QAbstractSocket_Connect_Connected(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*) = reinterpret_cast<void (*)(QAbstractSocket*)>(slot);
    QAbstractSocket::connect(self,
                             static_cast<void (QAbstractSocket::*)()>(&QAbstractSocket::connected),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QAbstractSocket_Disconnected(QAbstractSocket* self) {
    self->disconnected();
}

void QAbstractSocket_Connect_Disconnected(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*) = reinterpret_cast<void (*)(QAbstractSocket*)>(slot);
    QAbstractSocket::connect(self,
                             static_cast<void (QAbstractSocket::*)()>(&QAbstractSocket::disconnected),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QAbstractSocket_StateChanged(QAbstractSocket* self, int param1) {
    self->stateChanged(static_cast<QAbstractSocket::SocketState>(param1));
}

void QAbstractSocket_Connect_StateChanged(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*, int) = reinterpret_cast<void (*)(QAbstractSocket*, int)>(slot);
    QAbstractSocket::connect(self,
                             static_cast<void (QAbstractSocket::*)(QAbstractSocket::SocketState)>(&QAbstractSocket::stateChanged),
                             [self, slotFunc](QAbstractSocket::SocketState param1) {
                                 int sigval1 = static_cast<int>(param1);
                                 slotFunc(self, sigval1);
                             });
}

void QAbstractSocket_ErrorOccurred(QAbstractSocket* self, int param1) {
    self->errorOccurred(static_cast<QAbstractSocket::SocketError>(param1));
}

void QAbstractSocket_Connect_ErrorOccurred(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*, int) = reinterpret_cast<void (*)(QAbstractSocket*, int)>(slot);
    QAbstractSocket::connect(self,
                             static_cast<void (QAbstractSocket::*)(QAbstractSocket::SocketError)>(&QAbstractSocket::errorOccurred),
                             [self, slotFunc](QAbstractSocket::SocketError param1) {
                                 int sigval1 = static_cast<int>(param1);
                                 slotFunc(self, sigval1);
                             });
}

void QAbstractSocket_ProxyAuthenticationRequired(QAbstractSocket* self, const QNetworkProxy* proxy, QAuthenticator* authenticator) {
    self->proxyAuthenticationRequired(*proxy, authenticator);
}

void QAbstractSocket_Connect_ProxyAuthenticationRequired(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*, QNetworkProxy*, QAuthenticator*) = reinterpret_cast<void (*)(QAbstractSocket*, QNetworkProxy*, QAuthenticator*)>(slot);
    QAbstractSocket::connect(self,
                             static_cast<void (QAbstractSocket::*)(const QNetworkProxy&, QAuthenticator*)>(&QAbstractSocket::proxyAuthenticationRequired),
                             [self, slotFunc](const QNetworkProxy& proxy, QAuthenticator* authenticator) {
                                 const QNetworkProxy& proxy_ret = proxy;
                                 // Cast returned reference into pointer
                                 QNetworkProxy* sigval1 = const_cast<QNetworkProxy*>(&proxy_ret);
                                 QAuthenticator* sigval2 = authenticator;
                                 slotFunc(self, sigval1, sigval2);
                             });
}

long long QAbstractSocket_ReadData(QAbstractSocket* self, char* data, long long maxlen) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket) {
        return static_cast<long long>(vqabstractsocket->readData(data, static_cast<qint64>(maxlen)));
    }
    qFatal("Error: Protected method QAbstractSocket::readData called without a directly constructed type");
}

long long QAbstractSocket_ReadLineData(QAbstractSocket* self, char* data, long long maxlen) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket) {
        return static_cast<long long>(vqabstractsocket->readLineData(data, static_cast<qint64>(maxlen)));
    }
    qFatal("Error: Protected method QAbstractSocket::readLineData called without a directly constructed type");
}

long long QAbstractSocket_SkipData(QAbstractSocket* self, long long maxSize) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket) {
        return static_cast<long long>(vqabstractsocket->skipData(static_cast<qint64>(maxSize)));
    }
    qFatal("Error: Protected method QAbstractSocket::skipData called without a directly constructed type");
}

long long QAbstractSocket_WriteData(QAbstractSocket* self, const char* data, long long len) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket) {
        return static_cast<long long>(vqabstractsocket->writeData(data, static_cast<qint64>(len)));
    }
    qFatal("Error: Protected method QAbstractSocket::writeData called without a directly constructed type");
}

libqt_string QAbstractSocket_Tr2(const char* s, const char* c) {
    auto _ret = QAbstractSocket::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractSocket_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAbstractSocket::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QAbstractSocket_Bind1(QAbstractSocket* self, uint16_t port) {
    return self->bind(static_cast<quint16>(port));
}

bool QAbstractSocket_Bind22(QAbstractSocket* self, uint16_t port, int mode) {
    return self->bind(static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
}

void QAbstractSocket_ConnectToHost3(QAbstractSocket* self, const QHostAddress* address, uint16_t port, int mode) {
    self->connectToHost(*address, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode));
}

// Base class handler implementation
QMetaObject* QAbstractSocket_SuperMetaObject(const QAbstractSocket* self) {
    return (QMetaObject*)self->QAbstractSocket::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnMetaObject(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self)))
        vqabstractsocket->qabstractsocket_metaobject_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAbstractSocket_SuperMetacast(QAbstractSocket* self, const char* param1) {
    return self->QAbstractSocket::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnMetacast(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_metacast_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAbstractSocket_SuperMetacall(QAbstractSocket* self, int param1, int param2, void** param3) {
    return self->QAbstractSocket::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnMetacall(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_metacall_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Metacall_Callback>(slot);
}

// Base class handler implementation
void QAbstractSocket_SuperResume(QAbstractSocket* self) {
    self->QAbstractSocket::resume();
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnResume(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_resume_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Resume_Callback>(slot);
}

// Base class handler implementation
bool QAbstractSocket_SuperBind(QAbstractSocket* self, const QHostAddress* address, uint16_t port, int mode) {
    return self->QAbstractSocket::bind(*address, static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnBind(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_bind_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Bind_Callback>(slot);
}

// Base class handler implementation
void QAbstractSocket_SuperConnectToHost(QAbstractSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    self->QAbstractSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnConnectToHost(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_connecttohost_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_ConnectToHost_Callback>(slot);
}

// Base class handler implementation
void QAbstractSocket_SuperDisconnectFromHost(QAbstractSocket* self) {
    self->QAbstractSocket::disconnectFromHost();
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnDisconnectFromHost(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_disconnectfromhost_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_DisconnectFromHost_Callback>(slot);
}

// Base class handler implementation
long long QAbstractSocket_SuperBytesAvailable(const QAbstractSocket* self) {
    return static_cast<long long>(self->QAbstractSocket::bytesAvailable());
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnBytesAvailable(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self)))
        vqabstractsocket->qabstractsocket_bytesavailable_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_BytesAvailable_Callback>(slot);
}

// Base class handler implementation
long long QAbstractSocket_SuperBytesToWrite(const QAbstractSocket* self) {
    return static_cast<long long>(self->QAbstractSocket::bytesToWrite());
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnBytesToWrite(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self)))
        vqabstractsocket->qabstractsocket_bytestowrite_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_BytesToWrite_Callback>(slot);
}

// Base class handler implementation
void QAbstractSocket_SuperSetReadBufferSize(QAbstractSocket* self, long long size) {
    self->QAbstractSocket::setReadBufferSize(static_cast<qint64>(size));
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetReadBufferSize(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_setreadbuffersize_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetReadBufferSize_Callback>(slot);
}

// Base class handler implementation
intptr_t QAbstractSocket_SuperSocketDescriptor(const QAbstractSocket* self) {
    qintptr _ret = self->QAbstractSocket::socketDescriptor();
    return (intptr_t)(_ret);
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSocketDescriptor(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self)))
        vqabstractsocket->qabstractsocket_socketdescriptor_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SocketDescriptor_Callback>(slot);
}

// Base class handler implementation
bool QAbstractSocket_SuperSetSocketDescriptor(QAbstractSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    return self->QAbstractSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetSocketDescriptor(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_setsocketdescriptor_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetSocketDescriptor_Callback>(slot);
}

// Base class handler implementation
void QAbstractSocket_SuperSetSocketOption(QAbstractSocket* self, int option, const QVariant* value) {
    self->QAbstractSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetSocketOption(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_setsocketoption_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetSocketOption_Callback>(slot);
}

// Base class handler implementation
QVariant* QAbstractSocket_SuperSocketOption(QAbstractSocket* self, int option) {
    return new QVariant(self->QAbstractSocket::socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSocketOption(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_socketoption_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SocketOption_Callback>(slot);
}

// Base class handler implementation
void QAbstractSocket_SuperClose(QAbstractSocket* self) {
    self->QAbstractSocket::close();
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnClose(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_close_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Close_Callback>(slot);
}

// Base class handler implementation
bool QAbstractSocket_SuperIsSequential(const QAbstractSocket* self) {
    return self->QAbstractSocket::isSequential();
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnIsSequential(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self)))
        vqabstractsocket->qabstractsocket_issequential_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_IsSequential_Callback>(slot);
}

// Base class handler implementation
bool QAbstractSocket_SuperWaitForConnected(QAbstractSocket* self, int msecs) {
    return self->QAbstractSocket::waitForConnected(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnWaitForConnected(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_waitforconnected_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_WaitForConnected_Callback>(slot);
}

// Base class handler implementation
bool QAbstractSocket_SuperWaitForReadyRead(QAbstractSocket* self, int msecs) {
    return self->QAbstractSocket::waitForReadyRead(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnWaitForReadyRead(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_waitforreadyread_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_WaitForReadyRead_Callback>(slot);
}

// Base class handler implementation
bool QAbstractSocket_SuperWaitForBytesWritten(QAbstractSocket* self, int msecs) {
    return self->QAbstractSocket::waitForBytesWritten(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnWaitForBytesWritten(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_waitforbyteswritten_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_WaitForBytesWritten_Callback>(slot);
}

// Base class handler implementation
bool QAbstractSocket_SuperWaitForDisconnected(QAbstractSocket* self, int msecs) {
    return self->QAbstractSocket::waitForDisconnected(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnWaitForDisconnected(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_waitfordisconnected_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_WaitForDisconnected_Callback>(slot);
}

// Base class handler implementation
long long QAbstractSocket_SuperReadData(QAbstractSocket* self, char* data, long long maxlen) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return static_cast<long long>(vqabstractsocket->QAbstractSocket::readData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QAbstractSocket::readData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnReadData(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_readdata_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_ReadData_Callback>(slot);
}

// Base class handler implementation
long long QAbstractSocket_SuperReadLineData(QAbstractSocket* self, char* data, long long maxlen) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return static_cast<long long>(vqabstractsocket->QAbstractSocket::readLineData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QAbstractSocket::readLineData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnReadLineData(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_readlinedata_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_ReadLineData_Callback>(slot);
}

// Base class handler implementation
long long QAbstractSocket_SuperSkipData(QAbstractSocket* self, long long maxSize) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return static_cast<long long>(vqabstractsocket->QAbstractSocket::skipData(static_cast<qint64>(maxSize)));
    } else
        qFatal("Error: Protected virtual method QAbstractSocket::skipData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSkipData(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_skipdata_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SkipData_Callback>(slot);
}

// Base class handler implementation
long long QAbstractSocket_SuperWriteData(QAbstractSocket* self, const char* data, long long len) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return static_cast<long long>(vqabstractsocket->QAbstractSocket::writeData(data, static_cast<qint64>(len)));
    } else
        qFatal("Error: Protected virtual method QAbstractSocket::writeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnWriteData(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_writedata_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_WriteData_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractSocket_Open(QAbstractSocket* self, int mode) {
    return self->open(static_cast<QIODeviceBase::OpenMode>(mode));
}

// Base class handler implementation
bool QAbstractSocket_SuperOpen(QAbstractSocket* self, int mode) {
    return self->QAbstractSocket::open(static_cast<QIODeviceBase::OpenMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnOpen(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_open_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Open_Callback>(slot);
}

// Derived class handler implementation
long long QAbstractSocket_Pos(const QAbstractSocket* self) {
    return static_cast<long long>(self->pos());
}

// Base class handler implementation
long long QAbstractSocket_SuperPos(const QAbstractSocket* self) {
    return static_cast<long long>(self->QAbstractSocket::pos());
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnPos(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self)))
        vqabstractsocket->qabstractsocket_pos_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Pos_Callback>(slot);
}

// Derived class handler implementation
long long QAbstractSocket_Size(const QAbstractSocket* self) {
    return static_cast<long long>(self->size());
}

// Base class handler implementation
long long QAbstractSocket_SuperSize(const QAbstractSocket* self) {
    return static_cast<long long>(self->QAbstractSocket::size());
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSize(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self)))
        vqabstractsocket->qabstractsocket_size_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Size_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractSocket_Seek(QAbstractSocket* self, long long pos) {
    return self->seek(static_cast<qint64>(pos));
}

// Base class handler implementation
bool QAbstractSocket_SuperSeek(QAbstractSocket* self, long long pos) {
    return self->QAbstractSocket::seek(static_cast<qint64>(pos));
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSeek(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_seek_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Seek_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractSocket_AtEnd(const QAbstractSocket* self) {
    return self->atEnd();
}

// Base class handler implementation
bool QAbstractSocket_SuperAtEnd(const QAbstractSocket* self) {
    return self->QAbstractSocket::atEnd();
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnAtEnd(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self)))
        vqabstractsocket->qabstractsocket_atend_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_AtEnd_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractSocket_Reset(QAbstractSocket* self) {
    return self->reset();
}

// Base class handler implementation
bool QAbstractSocket_SuperReset(QAbstractSocket* self) {
    return self->QAbstractSocket::reset();
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnReset(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_reset_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Reset_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractSocket_CanReadLine(const QAbstractSocket* self) {
    return self->canReadLine();
}

// Base class handler implementation
bool QAbstractSocket_SuperCanReadLine(const QAbstractSocket* self) {
    return self->QAbstractSocket::canReadLine();
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnCanReadLine(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self)))
        vqabstractsocket->qabstractsocket_canreadline_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_CanReadLine_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractSocket_Event(QAbstractSocket* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAbstractSocket_SuperEvent(QAbstractSocket* self, QEvent* event) {
    return self->QAbstractSocket::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnEvent(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_event_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractSocket_EventFilter(QAbstractSocket* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAbstractSocket_SuperEventFilter(QAbstractSocket* self, QObject* watched, QEvent* event) {
    return self->QAbstractSocket::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnEventFilter(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_eventfilter_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSocket_TimerEvent(QAbstractSocket* self, QTimerEvent* event) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket) {
        vqabstractsocket->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSocket::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSocket_SuperTimerEvent(QAbstractSocket* self, QTimerEvent* event) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->QAbstractSocket::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSocket::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnTimerEvent(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_timerevent_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSocket_ChildEvent(QAbstractSocket* self, QChildEvent* event) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket) {
        vqabstractsocket->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSocket::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSocket_SuperChildEvent(QAbstractSocket* self, QChildEvent* event) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->QAbstractSocket::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSocket::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnChildEvent(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_childevent_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSocket_CustomEvent(QAbstractSocket* self, QEvent* event) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket) {
        vqabstractsocket->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSocket::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSocket_SuperCustomEvent(QAbstractSocket* self, QEvent* event) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->QAbstractSocket::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSocket::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnCustomEvent(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_customevent_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSocket_ConnectNotify(QAbstractSocket* self, const QMetaMethod* signal) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket) {
        vqabstractsocket->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractSocket::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSocket_SuperConnectNotify(QAbstractSocket* self, const QMetaMethod* signal) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->QAbstractSocket::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractSocket::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnConnectNotify(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_connectnotify_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSocket_DisconnectNotify(QAbstractSocket* self, const QMetaMethod* signal) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket) {
        vqabstractsocket->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractSocket::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSocket_SuperDisconnectNotify(QAbstractSocket* self, const QMetaMethod* signal) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->QAbstractSocket::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractSocket::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnDisconnectNotify(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self))
        vqabstractsocket->qabstractsocket_disconnectnotify_callback = reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QAbstractSocket_SetSocketState(QAbstractSocket* self, int state) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->VirtualQAbstractSocket::setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    } else
        qFatal("Error: Protected method QAbstractSocket::setSocketState called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractSocket_SetSocketError(QAbstractSocket* self, int socketError) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->VirtualQAbstractSocket::setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    } else
        qFatal("Error: Protected method QAbstractSocket::setSocketError called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractSocket_SetLocalPort(QAbstractSocket* self, uint16_t port) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->VirtualQAbstractSocket::setLocalPort(static_cast<quint16>(port));
    } else
        qFatal("Error: Protected method QAbstractSocket::setLocalPort called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractSocket_SetLocalAddress(QAbstractSocket* self, const QHostAddress* address) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->VirtualQAbstractSocket::setLocalAddress(*address);
    } else
        qFatal("Error: Protected method QAbstractSocket::setLocalAddress called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractSocket_SetPeerPort(QAbstractSocket* self, uint16_t port) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->VirtualQAbstractSocket::setPeerPort(static_cast<quint16>(port));
    } else
        qFatal("Error: Protected method QAbstractSocket::setPeerPort called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractSocket_SetPeerAddress(QAbstractSocket* self, const QHostAddress* address) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->VirtualQAbstractSocket::setPeerAddress(*address);
    } else
        qFatal("Error: Protected method QAbstractSocket::setPeerAddress called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractSocket_SetPeerName(QAbstractSocket* self, const libqt_string name) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        QString name_QString = QString::fromUtf8(name.data, name.len);
        vqabstractsocket->VirtualQAbstractSocket::setPeerName(name_QString);
    } else
        qFatal("Error: Protected method QAbstractSocket::setPeerName called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractSocket_SetOpenMode(QAbstractSocket* self, int openMode) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->VirtualQAbstractSocket::setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else
        qFatal("Error: Protected method QAbstractSocket::setOpenMode called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractSocket_SetErrorString(QAbstractSocket* self, const libqt_string errorString) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqabstractsocket->VirtualQAbstractSocket::setErrorString(errorString_QString);
    } else
        qFatal("Error: Protected method QAbstractSocket::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QAbstractSocket_Sender(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        return vqabstractsocket->VirtualQAbstractSocket::sender();
    } else
        qFatal("Error: Protected method QAbstractSocket::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractSocket_SenderSignalIndex(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        return vqabstractsocket->VirtualQAbstractSocket::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAbstractSocket::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractSocket_Receivers(const QAbstractSocket* self, const char* signal) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        return vqabstractsocket->VirtualQAbstractSocket::receivers(signal);
    } else
        qFatal("Error: Protected method QAbstractSocket::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractSocket_IsSignalConnected(const QAbstractSocket* self, const QMetaMethod* signal) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        return vqabstractsocket->VirtualQAbstractSocket::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAbstractSocket::isSignalConnected called without a directly constructed type");
}

void QAbstractSocket_Delete(QAbstractSocket* self) {
    delete self;
}
