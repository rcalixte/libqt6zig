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
#include <QByteArray>
#include <cstring>
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
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractSocket*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractSocket_OnMetacall(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Metacall_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractSocket_QBaseMetacall(QAbstractSocket* self, int param1, int param2, void** param3) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Metacall_IsBase(true);
        return vqabstractsocket->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractSocket*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractSocket_Tr(const char* s) {
    QString _ret = QAbstractSocket::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QAbstractSocket_PauseMode(const QAbstractSocket* self) {
    return static_cast<int>(self->pauseMode());
}

void QAbstractSocket_SetPauseMode(QAbstractSocket* self, int pauseMode) {
    self->setPauseMode(static_cast<QAbstractSocket::PauseModes>(pauseMode));
}

bool QAbstractSocket_Bind2(QAbstractSocket* self) {
    return self->bind();
}

void QAbstractSocket_ConnectToHost2(QAbstractSocket* self, const QHostAddress* address, uint16_t port) {
    self->connectToHost(*address, static_cast<quint16>(port));
}

bool QAbstractSocket_IsValid(const QAbstractSocket* self) {
    return self->isValid();
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
    QString _ret = self->peerName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

long long QAbstractSocket_ReadBufferSize(const QAbstractSocket* self) {
    return static_cast<long long>(self->readBufferSize());
}

void QAbstractSocket_Abort(QAbstractSocket* self) {
    self->abort();
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

bool QAbstractSocket_Flush(QAbstractSocket* self) {
    return self->flush();
}

void QAbstractSocket_SetProxy(QAbstractSocket* self, const QNetworkProxy* networkProxy) {
    self->setProxy(*networkProxy);
}

QNetworkProxy* QAbstractSocket_Proxy(const QAbstractSocket* self) {
    return new QNetworkProxy(self->proxy());
}

libqt_string QAbstractSocket_ProtocolTag(const QAbstractSocket* self) {
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

void QAbstractSocket_SetProtocolTag(QAbstractSocket* self, const libqt_string tag) {
    QString tag_QString = QString::fromUtf8(tag.data, tag.len);
    self->setProtocolTag(tag_QString);
}

void QAbstractSocket_HostFound(QAbstractSocket* self) {
    self->hostFound();
}

void QAbstractSocket_Connect_HostFound(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*) = reinterpret_cast<void (*)(QAbstractSocket*)>(slot);
    QAbstractSocket::connect(self, &QAbstractSocket::hostFound, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractSocket_Connected(QAbstractSocket* self) {
    self->connected();
}

void QAbstractSocket_Connect_Connected(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*) = reinterpret_cast<void (*)(QAbstractSocket*)>(slot);
    QAbstractSocket::connect(self, &QAbstractSocket::connected, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractSocket_Disconnected(QAbstractSocket* self) {
    self->disconnected();
}

void QAbstractSocket_Connect_Disconnected(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*) = reinterpret_cast<void (*)(QAbstractSocket*)>(slot);
    QAbstractSocket::connect(self, &QAbstractSocket::disconnected, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractSocket_StateChanged(QAbstractSocket* self, int param1) {
    self->stateChanged(static_cast<QAbstractSocket::SocketState>(param1));
}

void QAbstractSocket_Connect_StateChanged(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*, int) = reinterpret_cast<void (*)(QAbstractSocket*, int)>(slot);
    QAbstractSocket::connect(self, &QAbstractSocket::stateChanged, [self, slotFunc](QAbstractSocket::SocketState param1) {
        int sigval1 = static_cast<int>(param1);
        slotFunc(self, sigval1);
    });
}

void QAbstractSocket_ErrorOccurred(QAbstractSocket* self, int param1) {
    self->errorOccurred(static_cast<QAbstractSocket::SocketError>(param1));
}

void QAbstractSocket_Connect_ErrorOccurred(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*, int) = reinterpret_cast<void (*)(QAbstractSocket*, int)>(slot);
    QAbstractSocket::connect(self, &QAbstractSocket::errorOccurred, [self, slotFunc](QAbstractSocket::SocketError param1) {
        int sigval1 = static_cast<int>(param1);
        slotFunc(self, sigval1);
    });
}

void QAbstractSocket_ProxyAuthenticationRequired(QAbstractSocket* self, const QNetworkProxy* proxy, QAuthenticator* authenticator) {
    self->proxyAuthenticationRequired(*proxy, authenticator);
}

void QAbstractSocket_Connect_ProxyAuthenticationRequired(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*, QNetworkProxy*, QAuthenticator*) = reinterpret_cast<void (*)(QAbstractSocket*, QNetworkProxy*, QAuthenticator*)>(slot);
    QAbstractSocket::connect(self, &QAbstractSocket::proxyAuthenticationRequired, [self, slotFunc](const QNetworkProxy& proxy, QAuthenticator* authenticator) {
        const QNetworkProxy& proxy_ret = proxy;
        // Cast returned reference into pointer
        QNetworkProxy* sigval1 = const_cast<QNetworkProxy*>(&proxy_ret);
        QAuthenticator* sigval2 = authenticator;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string QAbstractSocket_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractSocket::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractSocket_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractSocket::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QAbstractSocket_Bind1(QAbstractSocket* self, uint16_t port) {
    return self->bind(static_cast<quint16>(port));
}

bool QAbstractSocket_Bind22(QAbstractSocket* self, uint16_t port, int mode) {
    return self->bind(static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
}

void QAbstractSocket_ConnectToHost3(QAbstractSocket* self, const QHostAddress* address, uint16_t port, int mode) {
    self->connectToHost(*address, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode));
}

// Derived class handler implementation
void QAbstractSocket_Resume(QAbstractSocket* self) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->resume();
    } else {
        self->QAbstractSocket::resume();
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseResume(QAbstractSocket* self) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Resume_IsBase(true);
        vqabstractsocket->resume();
    } else {
        self->QAbstractSocket::resume();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnResume(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Resume_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Resume_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_Bind(QAbstractSocket* self, const QHostAddress* address, uint16_t port, int mode) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return vqabstractsocket->bind(*address, static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
    } else {
        return self->QAbstractSocket::bind(*address, static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseBind(QAbstractSocket* self, const QHostAddress* address, uint16_t port, int mode) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Bind_IsBase(true);
        return vqabstractsocket->bind(*address, static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
    } else {
        return self->QAbstractSocket::bind(*address, static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnBind(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Bind_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Bind_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_ConnectToHost(QAbstractSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    } else {
        self->QAbstractSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseConnectToHost(QAbstractSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_ConnectToHost_IsBase(true);
        vqabstractsocket->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    } else {
        self->QAbstractSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnConnectToHost(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_ConnectToHost_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_ConnectToHost_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_DisconnectFromHost(QAbstractSocket* self) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->disconnectFromHost();
    } else {
        self->QAbstractSocket::disconnectFromHost();
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseDisconnectFromHost(QAbstractSocket* self) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_DisconnectFromHost_IsBase(true);
        vqabstractsocket->disconnectFromHost();
    } else {
        self->QAbstractSocket::disconnectFromHost();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnDisconnectFromHost(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_DisconnectFromHost_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_DisconnectFromHost_Callback>(slot));
    }
}

// Derived class handler implementation
long long QAbstractSocket_BytesAvailable(const QAbstractSocket* self) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return static_cast<long long>(vqabstractsocket->bytesAvailable());
    } else {
        return static_cast<long long>(self->QAbstractSocket::bytesAvailable());
    }
}

// Base class handler implementation
long long QAbstractSocket_QBaseBytesAvailable(const QAbstractSocket* self) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_BytesAvailable_IsBase(true);
        return static_cast<long long>(vqabstractsocket->bytesAvailable());
    } else {
        return static_cast<long long>(self->QAbstractSocket::bytesAvailable());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnBytesAvailable(const QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_BytesAvailable_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_BytesAvailable_Callback>(slot));
    }
}

// Derived class handler implementation
long long QAbstractSocket_BytesToWrite(const QAbstractSocket* self) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return static_cast<long long>(vqabstractsocket->bytesToWrite());
    } else {
        return static_cast<long long>(self->QAbstractSocket::bytesToWrite());
    }
}

// Base class handler implementation
long long QAbstractSocket_QBaseBytesToWrite(const QAbstractSocket* self) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_BytesToWrite_IsBase(true);
        return static_cast<long long>(vqabstractsocket->bytesToWrite());
    } else {
        return static_cast<long long>(self->QAbstractSocket::bytesToWrite());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnBytesToWrite(const QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_BytesToWrite_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_BytesToWrite_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetReadBufferSize(QAbstractSocket* self, long long size) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setReadBufferSize(static_cast<qint64>(size));
    } else {
        self->QAbstractSocket::setReadBufferSize(static_cast<qint64>(size));
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetReadBufferSize(QAbstractSocket* self, long long size) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetReadBufferSize_IsBase(true);
        vqabstractsocket->setReadBufferSize(static_cast<qint64>(size));
    } else {
        self->QAbstractSocket::setReadBufferSize(static_cast<qint64>(size));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetReadBufferSize(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetReadBufferSize_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetReadBufferSize_Callback>(slot));
    }
}

// Derived class handler implementation
intptr_t QAbstractSocket_SocketDescriptor(const QAbstractSocket* self) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        qintptr _ret = vqabstractsocket->socketDescriptor();
        return (intptr_t)(_ret);
    } else {
        qintptr _ret = self->QAbstractSocket::socketDescriptor();
        return (intptr_t)(_ret);
    }
}

// Base class handler implementation
intptr_t QAbstractSocket_QBaseSocketDescriptor(const QAbstractSocket* self) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SocketDescriptor_IsBase(true);
        qintptr _ret = vqabstractsocket->socketDescriptor();
        return (intptr_t)(_ret);
    } else {
        qintptr _ret = self->QAbstractSocket::socketDescriptor();
        return (intptr_t)(_ret);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSocketDescriptor(const QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SocketDescriptor_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SocketDescriptor_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_SetSocketDescriptor(QAbstractSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return vqabstractsocket->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        return self->QAbstractSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseSetSocketDescriptor(QAbstractSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetSocketDescriptor_IsBase(true);
        return vqabstractsocket->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        return self->QAbstractSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetSocketDescriptor(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetSocketDescriptor_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetSocketDescriptor_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetSocketOption(QAbstractSocket* self, int option, const QVariant* value) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    } else {
        self->QAbstractSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetSocketOption(QAbstractSocket* self, int option, const QVariant* value) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetSocketOption_IsBase(true);
        vqabstractsocket->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    } else {
        self->QAbstractSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetSocketOption(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetSocketOption_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetSocketOption_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractSocket_SocketOption(QAbstractSocket* self, int option) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return new QVariant(vqabstractsocket->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    } else {
        return new QVariant(((VirtualQAbstractSocket*)self)->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    }
}

// Base class handler implementation
QVariant* QAbstractSocket_QBaseSocketOption(QAbstractSocket* self, int option) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SocketOption_IsBase(true);
        return new QVariant(vqabstractsocket->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    } else {
        return new QVariant(((VirtualQAbstractSocket*)self)->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSocketOption(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SocketOption_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SocketOption_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_Close(QAbstractSocket* self) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->close();
    } else {
        self->QAbstractSocket::close();
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseClose(QAbstractSocket* self) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Close_IsBase(true);
        vqabstractsocket->close();
    } else {
        self->QAbstractSocket::close();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnClose(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Close_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Close_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_IsSequential(const QAbstractSocket* self) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return vqabstractsocket->isSequential();
    } else {
        return self->QAbstractSocket::isSequential();
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseIsSequential(const QAbstractSocket* self) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_IsSequential_IsBase(true);
        return vqabstractsocket->isSequential();
    } else {
        return self->QAbstractSocket::isSequential();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnIsSequential(const QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_IsSequential_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_IsSequential_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_WaitForConnected(QAbstractSocket* self, int msecs) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return vqabstractsocket->waitForConnected(static_cast<int>(msecs));
    } else {
        return self->QAbstractSocket::waitForConnected(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseWaitForConnected(QAbstractSocket* self, int msecs) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_WaitForConnected_IsBase(true);
        return vqabstractsocket->waitForConnected(static_cast<int>(msecs));
    } else {
        return self->QAbstractSocket::waitForConnected(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnWaitForConnected(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_WaitForConnected_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_WaitForConnected_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_WaitForReadyRead(QAbstractSocket* self, int msecs) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return vqabstractsocket->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->QAbstractSocket::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseWaitForReadyRead(QAbstractSocket* self, int msecs) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_WaitForReadyRead_IsBase(true);
        return vqabstractsocket->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->QAbstractSocket::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnWaitForReadyRead(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_WaitForReadyRead_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_WaitForReadyRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_WaitForBytesWritten(QAbstractSocket* self, int msecs) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return vqabstractsocket->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->QAbstractSocket::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseWaitForBytesWritten(QAbstractSocket* self, int msecs) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_WaitForBytesWritten_IsBase(true);
        return vqabstractsocket->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->QAbstractSocket::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnWaitForBytesWritten(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_WaitForBytesWritten_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_WaitForDisconnected(QAbstractSocket* self, int msecs) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return vqabstractsocket->waitForDisconnected(static_cast<int>(msecs));
    } else {
        return self->QAbstractSocket::waitForDisconnected(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseWaitForDisconnected(QAbstractSocket* self, int msecs) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_WaitForDisconnected_IsBase(true);
        return vqabstractsocket->waitForDisconnected(static_cast<int>(msecs));
    } else {
        return self->QAbstractSocket::waitForDisconnected(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnWaitForDisconnected(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_WaitForDisconnected_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_WaitForDisconnected_Callback>(slot));
    }
}

// Derived class handler implementation
long long QAbstractSocket_ReadData(QAbstractSocket* self, char* data, long long maxlen) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return static_cast<long long>(vqabstractsocket->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQAbstractSocket*)self)->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QAbstractSocket_QBaseReadData(QAbstractSocket* self, char* data, long long maxlen) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_ReadData_IsBase(true);
        return static_cast<long long>(vqabstractsocket->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQAbstractSocket*)self)->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnReadData(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_ReadData_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_ReadData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QAbstractSocket_ReadLineData(QAbstractSocket* self, char* data, long long maxlen) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return static_cast<long long>(vqabstractsocket->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQAbstractSocket*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QAbstractSocket_QBaseReadLineData(QAbstractSocket* self, char* data, long long maxlen) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_ReadLineData_IsBase(true);
        return static_cast<long long>(vqabstractsocket->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQAbstractSocket*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnReadLineData(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_ReadLineData_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_ReadLineData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QAbstractSocket_SkipData(QAbstractSocket* self, long long maxSize) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return static_cast<long long>(vqabstractsocket->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQAbstractSocket*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Base class handler implementation
long long QAbstractSocket_QBaseSkipData(QAbstractSocket* self, long long maxSize) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SkipData_IsBase(true);
        return static_cast<long long>(vqabstractsocket->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQAbstractSocket*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSkipData(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SkipData_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SkipData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QAbstractSocket_WriteData(QAbstractSocket* self, const char* data, long long lenVal) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return static_cast<long long>(vqabstractsocket->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(((VirtualQAbstractSocket*)self)->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Base class handler implementation
long long QAbstractSocket_QBaseWriteData(QAbstractSocket* self, const char* data, long long lenVal) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_WriteData_IsBase(true);
        return static_cast<long long>(vqabstractsocket->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(((VirtualQAbstractSocket*)self)->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnWriteData(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_WriteData_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_WriteData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_Open(QAbstractSocket* self, int mode) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return vqabstractsocket->open(static_cast<QIODeviceBase::OpenMode>(mode));
    } else {
        return self->QAbstractSocket::open(static_cast<QIODeviceBase::OpenMode>(mode));
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseOpen(QAbstractSocket* self, int mode) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Open_IsBase(true);
        return vqabstractsocket->open(static_cast<QIODeviceBase::OpenMode>(mode));
    } else {
        return self->QAbstractSocket::open(static_cast<QIODeviceBase::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnOpen(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Open_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Open_Callback>(slot));
    }
}

// Derived class handler implementation
long long QAbstractSocket_Pos(const QAbstractSocket* self) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return static_cast<long long>(vqabstractsocket->pos());
    } else {
        return static_cast<long long>(self->QAbstractSocket::pos());
    }
}

// Base class handler implementation
long long QAbstractSocket_QBasePos(const QAbstractSocket* self) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Pos_IsBase(true);
        return static_cast<long long>(vqabstractsocket->pos());
    } else {
        return static_cast<long long>(self->QAbstractSocket::pos());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnPos(const QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Pos_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Pos_Callback>(slot));
    }
}

// Derived class handler implementation
long long QAbstractSocket_Size(const QAbstractSocket* self) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return static_cast<long long>(vqabstractsocket->size());
    } else {
        return static_cast<long long>(self->QAbstractSocket::size());
    }
}

// Base class handler implementation
long long QAbstractSocket_QBaseSize(const QAbstractSocket* self) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Size_IsBase(true);
        return static_cast<long long>(vqabstractsocket->size());
    } else {
        return static_cast<long long>(self->QAbstractSocket::size());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSize(const QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Size_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_Seek(QAbstractSocket* self, long long pos) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return vqabstractsocket->seek(static_cast<qint64>(pos));
    } else {
        return self->QAbstractSocket::seek(static_cast<qint64>(pos));
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseSeek(QAbstractSocket* self, long long pos) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Seek_IsBase(true);
        return vqabstractsocket->seek(static_cast<qint64>(pos));
    } else {
        return self->QAbstractSocket::seek(static_cast<qint64>(pos));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSeek(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Seek_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Seek_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_AtEnd(const QAbstractSocket* self) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return vqabstractsocket->atEnd();
    } else {
        return self->QAbstractSocket::atEnd();
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseAtEnd(const QAbstractSocket* self) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_AtEnd_IsBase(true);
        return vqabstractsocket->atEnd();
    } else {
        return self->QAbstractSocket::atEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnAtEnd(const QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_AtEnd_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_AtEnd_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_Reset(QAbstractSocket* self) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return vqabstractsocket->reset();
    } else {
        return self->QAbstractSocket::reset();
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseReset(QAbstractSocket* self) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Reset_IsBase(true);
        return vqabstractsocket->reset();
    } else {
        return self->QAbstractSocket::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnReset(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Reset_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_CanReadLine(const QAbstractSocket* self) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return vqabstractsocket->canReadLine();
    } else {
        return self->QAbstractSocket::canReadLine();
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseCanReadLine(const QAbstractSocket* self) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_CanReadLine_IsBase(true);
        return vqabstractsocket->canReadLine();
    } else {
        return self->QAbstractSocket::canReadLine();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnCanReadLine(const QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_CanReadLine_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_CanReadLine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_Event(QAbstractSocket* self, QEvent* event) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return vqabstractsocket->event(event);
    } else {
        return self->QAbstractSocket::event(event);
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseEvent(QAbstractSocket* self, QEvent* event) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Event_IsBase(true);
        return vqabstractsocket->event(event);
    } else {
        return self->QAbstractSocket::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnEvent(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Event_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_EventFilter(QAbstractSocket* self, QObject* watched, QEvent* event) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return vqabstractsocket->eventFilter(watched, event);
    } else {
        return self->QAbstractSocket::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseEventFilter(QAbstractSocket* self, QObject* watched, QEvent* event) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_EventFilter_IsBase(true);
        return vqabstractsocket->eventFilter(watched, event);
    } else {
        return self->QAbstractSocket::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnEventFilter(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_EventFilter_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_TimerEvent(QAbstractSocket* self, QTimerEvent* event) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->timerEvent(event);
    } else {
        ((VirtualQAbstractSocket*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseTimerEvent(QAbstractSocket* self, QTimerEvent* event) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_TimerEvent_IsBase(true);
        vqabstractsocket->timerEvent(event);
    } else {
        ((VirtualQAbstractSocket*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnTimerEvent(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_ChildEvent(QAbstractSocket* self, QChildEvent* event) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->childEvent(event);
    } else {
        ((VirtualQAbstractSocket*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseChildEvent(QAbstractSocket* self, QChildEvent* event) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_ChildEvent_IsBase(true);
        vqabstractsocket->childEvent(event);
    } else {
        ((VirtualQAbstractSocket*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnChildEvent(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_CustomEvent(QAbstractSocket* self, QEvent* event) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->customEvent(event);
    } else {
        ((VirtualQAbstractSocket*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseCustomEvent(QAbstractSocket* self, QEvent* event) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_CustomEvent_IsBase(true);
        vqabstractsocket->customEvent(event);
    } else {
        ((VirtualQAbstractSocket*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnCustomEvent(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_ConnectNotify(QAbstractSocket* self, const QMetaMethod* signal) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->connectNotify(*signal);
    } else {
        ((VirtualQAbstractSocket*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseConnectNotify(QAbstractSocket* self, const QMetaMethod* signal) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_ConnectNotify_IsBase(true);
        vqabstractsocket->connectNotify(*signal);
    } else {
        ((VirtualQAbstractSocket*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnConnectNotify(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_DisconnectNotify(QAbstractSocket* self, const QMetaMethod* signal) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractSocket*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseDisconnectNotify(QAbstractSocket* self, const QMetaMethod* signal) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_DisconnectNotify_IsBase(true);
        vqabstractsocket->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractSocket*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnDisconnectNotify(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetSocketState(QAbstractSocket* self, int state) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    } else {
        ((VirtualQAbstractSocket*)self)->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetSocketState(QAbstractSocket* self, int state) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetSocketState_IsBase(true);
        vqabstractsocket->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    } else {
        ((VirtualQAbstractSocket*)self)->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetSocketState(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetSocketState_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetSocketState_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetSocketError(QAbstractSocket* self, int socketError) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    } else {
        ((VirtualQAbstractSocket*)self)->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetSocketError(QAbstractSocket* self, int socketError) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetSocketError_IsBase(true);
        vqabstractsocket->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    } else {
        ((VirtualQAbstractSocket*)self)->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetSocketError(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetSocketError_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetSocketError_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetLocalPort(QAbstractSocket* self, uint16_t port) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setLocalPort(static_cast<quint16>(port));
    } else {
        ((VirtualQAbstractSocket*)self)->setLocalPort(static_cast<quint16>(port));
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetLocalPort(QAbstractSocket* self, uint16_t port) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetLocalPort_IsBase(true);
        vqabstractsocket->setLocalPort(static_cast<quint16>(port));
    } else {
        ((VirtualQAbstractSocket*)self)->setLocalPort(static_cast<quint16>(port));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetLocalPort(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetLocalPort_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetLocalPort_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetLocalAddress(QAbstractSocket* self, const QHostAddress* address) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setLocalAddress(*address);
    } else {
        ((VirtualQAbstractSocket*)self)->setLocalAddress(*address);
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetLocalAddress(QAbstractSocket* self, const QHostAddress* address) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetLocalAddress_IsBase(true);
        vqabstractsocket->setLocalAddress(*address);
    } else {
        ((VirtualQAbstractSocket*)self)->setLocalAddress(*address);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetLocalAddress(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetLocalAddress_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetLocalAddress_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetPeerPort(QAbstractSocket* self, uint16_t port) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setPeerPort(static_cast<quint16>(port));
    } else {
        ((VirtualQAbstractSocket*)self)->setPeerPort(static_cast<quint16>(port));
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetPeerPort(QAbstractSocket* self, uint16_t port) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetPeerPort_IsBase(true);
        vqabstractsocket->setPeerPort(static_cast<quint16>(port));
    } else {
        ((VirtualQAbstractSocket*)self)->setPeerPort(static_cast<quint16>(port));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetPeerPort(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetPeerPort_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetPeerPort_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetPeerAddress(QAbstractSocket* self, const QHostAddress* address) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setPeerAddress(*address);
    } else {
        ((VirtualQAbstractSocket*)self)->setPeerAddress(*address);
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetPeerAddress(QAbstractSocket* self, const QHostAddress* address) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetPeerAddress_IsBase(true);
        vqabstractsocket->setPeerAddress(*address);
    } else {
        ((VirtualQAbstractSocket*)self)->setPeerAddress(*address);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetPeerAddress(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetPeerAddress_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetPeerAddress_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetPeerName(QAbstractSocket* self, const libqt_string name) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setPeerName(name_QString);
    } else {
        ((VirtualQAbstractSocket*)self)->setPeerName(name_QString);
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetPeerName(QAbstractSocket* self, const libqt_string name) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetPeerName_IsBase(true);
        vqabstractsocket->setPeerName(name_QString);
    } else {
        ((VirtualQAbstractSocket*)self)->setPeerName(name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetPeerName(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetPeerName_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetPeerName_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetOpenMode(QAbstractSocket* self, int openMode) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualQAbstractSocket*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetOpenMode(QAbstractSocket* self, int openMode) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetOpenMode_IsBase(true);
        vqabstractsocket->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualQAbstractSocket*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetOpenMode(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetOpenMode_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetOpenMode_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetErrorString(QAbstractSocket* self, const libqt_string errorString) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setErrorString(errorString_QString);
    } else {
        ((VirtualQAbstractSocket*)self)->setErrorString(errorString_QString);
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetErrorString(QAbstractSocket* self, const libqt_string errorString) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetErrorString_IsBase(true);
        vqabstractsocket->setErrorString(errorString_QString);
    } else {
        ((VirtualQAbstractSocket*)self)->setErrorString(errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetErrorString(QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self);
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SetErrorString_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractSocket_Sender(const QAbstractSocket* self) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return vqabstractsocket->sender();
    } else {
        return ((VirtualQAbstractSocket*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAbstractSocket_QBaseSender(const QAbstractSocket* self) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Sender_IsBase(true);
        return vqabstractsocket->sender();
    } else {
        return ((VirtualQAbstractSocket*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSender(const QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Sender_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSocket_SenderSignalIndex(const QAbstractSocket* self) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return vqabstractsocket->senderSignalIndex();
    } else {
        return ((VirtualQAbstractSocket*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractSocket_QBaseSenderSignalIndex(const QAbstractSocket* self) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SenderSignalIndex_IsBase(true);
        return vqabstractsocket->senderSignalIndex();
    } else {
        return ((VirtualQAbstractSocket*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSenderSignalIndex(const QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSocket_Receivers(const QAbstractSocket* self, const char* signal) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return vqabstractsocket->receivers(signal);
    } else {
        return ((VirtualQAbstractSocket*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractSocket_QBaseReceivers(const QAbstractSocket* self, const char* signal) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Receivers_IsBase(true);
        return vqabstractsocket->receivers(signal);
    } else {
        return ((VirtualQAbstractSocket*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnReceivers(const QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_Receivers_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_IsSignalConnected(const QAbstractSocket* self, const QMetaMethod* signal) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        return vqabstractsocket->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractSocket*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseIsSignalConnected(const QAbstractSocket* self, const QMetaMethod* signal) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_IsSignalConnected_IsBase(true);
        return vqabstractsocket->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractSocket*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnIsSignalConnected(const QAbstractSocket* self, intptr_t slot) {
    auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self));
    if (vqabstractsocket && vqabstractsocket->isVirtualQAbstractSocket) {
        vqabstractsocket->setQAbstractSocket_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_IsSignalConnected_Callback>(slot));
    }
}

void QAbstractSocket_Delete(QAbstractSocket* self) {
    delete self;
}
