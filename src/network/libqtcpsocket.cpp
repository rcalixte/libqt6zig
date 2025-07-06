#include <QAbstractSocket>
#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpSocket>
#include <QTimerEvent>
#include <QVariant>
#include <qtcpsocket.h>
#include "libqtcpsocket.h"
#include "libqtcpsocket.hxx"

QTcpSocket* QTcpSocket_new() {
    return new VirtualQTcpSocket();
}

QTcpSocket* QTcpSocket_new2(QObject* parent) {
    return new VirtualQTcpSocket(parent);
}

QMetaObject* QTcpSocket_MetaObject(const QTcpSocket* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTcpSocket_Metacast(QTcpSocket* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTcpSocket_Metacall(QTcpSocket* self, int param1, int param2, void** param3) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTcpSocket*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTcpSocket_OnMetacall(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Metacall_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTcpSocket_QBaseMetacall(QTcpSocket* self, int param1, int param2, void** param3) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Metacall_IsBase(true);
        return vqtcpsocket->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTcpSocket*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTcpSocket_Tr(const char* s) {
    QString _ret = QTcpSocket::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTcpSocket_Tr2(const char* s, const char* c) {
    QString _ret = QTcpSocket::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTcpSocket_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTcpSocket::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QTcpSocket_Bind2(QTcpSocket* self, int addr, uint16_t port) {
    return self->bind(static_cast<QHostAddress::SpecialAddress>(addr), static_cast<quint16>(port));
}

bool QTcpSocket_Bind3(QTcpSocket* self, int addr, uint16_t port, int mode) {
    return self->bind(static_cast<QHostAddress::SpecialAddress>(addr), static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
}

// Derived class handler implementation
void QTcpSocket_Resume(QTcpSocket* self) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->resume();
    } else {
        self->QTcpSocket::resume();
    }
}

// Base class handler implementation
void QTcpSocket_QBaseResume(QTcpSocket* self) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Resume_IsBase(true);
        vqtcpsocket->resume();
    } else {
        self->QTcpSocket::resume();
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnResume(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Resume_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Resume_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTcpSocket_Bind(QTcpSocket* self, const QHostAddress* address, uint16_t port, int mode) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return vqtcpsocket->bind(*address, static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
    } else {
        return self->QTcpSocket::bind(*address, static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
    }
}

// Base class handler implementation
bool QTcpSocket_QBaseBind(QTcpSocket* self, const QHostAddress* address, uint16_t port, int mode) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Bind_IsBase(true);
        return vqtcpsocket->bind(*address, static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
    } else {
        return self->QTcpSocket::bind(*address, static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnBind(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Bind_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Bind_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpSocket_ConnectToHost(QTcpSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    } else {
        self->QTcpSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    }
}

// Base class handler implementation
void QTcpSocket_QBaseConnectToHost(QTcpSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_ConnectToHost_IsBase(true);
        vqtcpsocket->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    } else {
        self->QTcpSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnConnectToHost(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_ConnectToHost_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_ConnectToHost_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpSocket_DisconnectFromHost(QTcpSocket* self) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->disconnectFromHost();
    } else {
        self->QTcpSocket::disconnectFromHost();
    }
}

// Base class handler implementation
void QTcpSocket_QBaseDisconnectFromHost(QTcpSocket* self) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_DisconnectFromHost_IsBase(true);
        vqtcpsocket->disconnectFromHost();
    } else {
        self->QTcpSocket::disconnectFromHost();
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnDisconnectFromHost(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_DisconnectFromHost_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_DisconnectFromHost_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTcpSocket_BytesAvailable(const QTcpSocket* self) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return static_cast<long long>(vqtcpsocket->bytesAvailable());
    } else {
        return static_cast<long long>(self->QTcpSocket::bytesAvailable());
    }
}

// Base class handler implementation
long long QTcpSocket_QBaseBytesAvailable(const QTcpSocket* self) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_BytesAvailable_IsBase(true);
        return static_cast<long long>(vqtcpsocket->bytesAvailable());
    } else {
        return static_cast<long long>(self->QTcpSocket::bytesAvailable());
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnBytesAvailable(const QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_BytesAvailable_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_BytesAvailable_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTcpSocket_BytesToWrite(const QTcpSocket* self) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return static_cast<long long>(vqtcpsocket->bytesToWrite());
    } else {
        return static_cast<long long>(self->QTcpSocket::bytesToWrite());
    }
}

// Base class handler implementation
long long QTcpSocket_QBaseBytesToWrite(const QTcpSocket* self) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_BytesToWrite_IsBase(true);
        return static_cast<long long>(vqtcpsocket->bytesToWrite());
    } else {
        return static_cast<long long>(self->QTcpSocket::bytesToWrite());
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnBytesToWrite(const QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_BytesToWrite_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_BytesToWrite_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpSocket_SetReadBufferSize(QTcpSocket* self, long long size) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setReadBufferSize(static_cast<qint64>(size));
    } else {
        self->QTcpSocket::setReadBufferSize(static_cast<qint64>(size));
    }
}

// Base class handler implementation
void QTcpSocket_QBaseSetReadBufferSize(QTcpSocket* self, long long size) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetReadBufferSize_IsBase(true);
        vqtcpsocket->setReadBufferSize(static_cast<qint64>(size));
    } else {
        self->QTcpSocket::setReadBufferSize(static_cast<qint64>(size));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSetReadBufferSize(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetReadBufferSize_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SetReadBufferSize_Callback>(slot));
    }
}

// Derived class handler implementation
intptr_t QTcpSocket_SocketDescriptor(const QTcpSocket* self) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        qintptr _ret = vqtcpsocket->socketDescriptor();
        return (intptr_t)(_ret);
    } else {
        qintptr _ret = self->QTcpSocket::socketDescriptor();
        return (intptr_t)(_ret);
    }
}

// Base class handler implementation
intptr_t QTcpSocket_QBaseSocketDescriptor(const QTcpSocket* self) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SocketDescriptor_IsBase(true);
        qintptr _ret = vqtcpsocket->socketDescriptor();
        return (intptr_t)(_ret);
    } else {
        qintptr _ret = self->QTcpSocket::socketDescriptor();
        return (intptr_t)(_ret);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSocketDescriptor(const QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SocketDescriptor_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SocketDescriptor_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTcpSocket_SetSocketDescriptor(QTcpSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return vqtcpsocket->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
    } else {
        return self->QTcpSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
    }
}

// Base class handler implementation
bool QTcpSocket_QBaseSetSocketDescriptor(QTcpSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetSocketDescriptor_IsBase(true);
        return vqtcpsocket->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
    } else {
        return self->QTcpSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSetSocketDescriptor(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetSocketDescriptor_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SetSocketDescriptor_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpSocket_SetSocketOption(QTcpSocket* self, int option, const QVariant* value) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    } else {
        self->QTcpSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    }
}

// Base class handler implementation
void QTcpSocket_QBaseSetSocketOption(QTcpSocket* self, int option, const QVariant* value) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetSocketOption_IsBase(true);
        vqtcpsocket->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    } else {
        self->QTcpSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSetSocketOption(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetSocketOption_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SetSocketOption_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTcpSocket_SocketOption(QTcpSocket* self, int option) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return new QVariant(vqtcpsocket->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    } else {
        return new QVariant(((VirtualQTcpSocket*)self)->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    }
}

// Base class handler implementation
QVariant* QTcpSocket_QBaseSocketOption(QTcpSocket* self, int option) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SocketOption_IsBase(true);
        return new QVariant(vqtcpsocket->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    } else {
        return new QVariant(((VirtualQTcpSocket*)self)->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSocketOption(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SocketOption_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SocketOption_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpSocket_Close(QTcpSocket* self) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->close();
    } else {
        self->QTcpSocket::close();
    }
}

// Base class handler implementation
void QTcpSocket_QBaseClose(QTcpSocket* self) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Close_IsBase(true);
        vqtcpsocket->close();
    } else {
        self->QTcpSocket::close();
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnClose(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Close_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Close_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTcpSocket_IsSequential(const QTcpSocket* self) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return vqtcpsocket->isSequential();
    } else {
        return self->QTcpSocket::isSequential();
    }
}

// Base class handler implementation
bool QTcpSocket_QBaseIsSequential(const QTcpSocket* self) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_IsSequential_IsBase(true);
        return vqtcpsocket->isSequential();
    } else {
        return self->QTcpSocket::isSequential();
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnIsSequential(const QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_IsSequential_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_IsSequential_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTcpSocket_WaitForConnected(QTcpSocket* self, int msecs) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return vqtcpsocket->waitForConnected(static_cast<int>(msecs));
    } else {
        return self->QTcpSocket::waitForConnected(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QTcpSocket_QBaseWaitForConnected(QTcpSocket* self, int msecs) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_WaitForConnected_IsBase(true);
        return vqtcpsocket->waitForConnected(static_cast<int>(msecs));
    } else {
        return self->QTcpSocket::waitForConnected(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnWaitForConnected(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_WaitForConnected_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_WaitForConnected_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTcpSocket_WaitForReadyRead(QTcpSocket* self, int msecs) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return vqtcpsocket->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->QTcpSocket::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QTcpSocket_QBaseWaitForReadyRead(QTcpSocket* self, int msecs) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_WaitForReadyRead_IsBase(true);
        return vqtcpsocket->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->QTcpSocket::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnWaitForReadyRead(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_WaitForReadyRead_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_WaitForReadyRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTcpSocket_WaitForBytesWritten(QTcpSocket* self, int msecs) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return vqtcpsocket->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->QTcpSocket::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QTcpSocket_QBaseWaitForBytesWritten(QTcpSocket* self, int msecs) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_WaitForBytesWritten_IsBase(true);
        return vqtcpsocket->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->QTcpSocket::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnWaitForBytesWritten(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_WaitForBytesWritten_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTcpSocket_WaitForDisconnected(QTcpSocket* self, int msecs) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return vqtcpsocket->waitForDisconnected(static_cast<int>(msecs));
    } else {
        return self->QTcpSocket::waitForDisconnected(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QTcpSocket_QBaseWaitForDisconnected(QTcpSocket* self, int msecs) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_WaitForDisconnected_IsBase(true);
        return vqtcpsocket->waitForDisconnected(static_cast<int>(msecs));
    } else {
        return self->QTcpSocket::waitForDisconnected(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnWaitForDisconnected(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_WaitForDisconnected_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_WaitForDisconnected_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTcpSocket_ReadData(QTcpSocket* self, char* data, long long maxlen) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return static_cast<long long>(vqtcpsocket->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQTcpSocket*)self)->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QTcpSocket_QBaseReadData(QTcpSocket* self, char* data, long long maxlen) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_ReadData_IsBase(true);
        return static_cast<long long>(vqtcpsocket->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQTcpSocket*)self)->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnReadData(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_ReadData_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_ReadData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTcpSocket_ReadLineData(QTcpSocket* self, char* data, long long maxlen) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return static_cast<long long>(vqtcpsocket->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQTcpSocket*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QTcpSocket_QBaseReadLineData(QTcpSocket* self, char* data, long long maxlen) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_ReadLineData_IsBase(true);
        return static_cast<long long>(vqtcpsocket->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQTcpSocket*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnReadLineData(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_ReadLineData_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_ReadLineData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTcpSocket_SkipData(QTcpSocket* self, long long maxSize) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return static_cast<long long>(vqtcpsocket->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQTcpSocket*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Base class handler implementation
long long QTcpSocket_QBaseSkipData(QTcpSocket* self, long long maxSize) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SkipData_IsBase(true);
        return static_cast<long long>(vqtcpsocket->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQTcpSocket*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSkipData(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SkipData_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SkipData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTcpSocket_WriteData(QTcpSocket* self, const char* data, long long lenVal) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return static_cast<long long>(vqtcpsocket->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(((VirtualQTcpSocket*)self)->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Base class handler implementation
long long QTcpSocket_QBaseWriteData(QTcpSocket* self, const char* data, long long lenVal) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_WriteData_IsBase(true);
        return static_cast<long long>(vqtcpsocket->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(((VirtualQTcpSocket*)self)->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnWriteData(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_WriteData_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_WriteData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTcpSocket_Open(QTcpSocket* self, int mode) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return vqtcpsocket->open(static_cast<QIODeviceBase::OpenMode>(mode));
    } else {
        return self->QTcpSocket::open(static_cast<QIODeviceBase::OpenMode>(mode));
    }
}

// Base class handler implementation
bool QTcpSocket_QBaseOpen(QTcpSocket* self, int mode) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Open_IsBase(true);
        return vqtcpsocket->open(static_cast<QIODeviceBase::OpenMode>(mode));
    } else {
        return self->QTcpSocket::open(static_cast<QIODeviceBase::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnOpen(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Open_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Open_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTcpSocket_Pos(const QTcpSocket* self) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return static_cast<long long>(vqtcpsocket->pos());
    } else {
        return static_cast<long long>(self->QTcpSocket::pos());
    }
}

// Base class handler implementation
long long QTcpSocket_QBasePos(const QTcpSocket* self) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Pos_IsBase(true);
        return static_cast<long long>(vqtcpsocket->pos());
    } else {
        return static_cast<long long>(self->QTcpSocket::pos());
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnPos(const QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Pos_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Pos_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTcpSocket_Size(const QTcpSocket* self) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return static_cast<long long>(vqtcpsocket->size());
    } else {
        return static_cast<long long>(self->QTcpSocket::size());
    }
}

// Base class handler implementation
long long QTcpSocket_QBaseSize(const QTcpSocket* self) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Size_IsBase(true);
        return static_cast<long long>(vqtcpsocket->size());
    } else {
        return static_cast<long long>(self->QTcpSocket::size());
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSize(const QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Size_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTcpSocket_Seek(QTcpSocket* self, long long pos) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return vqtcpsocket->seek(static_cast<qint64>(pos));
    } else {
        return self->QTcpSocket::seek(static_cast<qint64>(pos));
    }
}

// Base class handler implementation
bool QTcpSocket_QBaseSeek(QTcpSocket* self, long long pos) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Seek_IsBase(true);
        return vqtcpsocket->seek(static_cast<qint64>(pos));
    } else {
        return self->QTcpSocket::seek(static_cast<qint64>(pos));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSeek(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Seek_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Seek_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTcpSocket_AtEnd(const QTcpSocket* self) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return vqtcpsocket->atEnd();
    } else {
        return self->QTcpSocket::atEnd();
    }
}

// Base class handler implementation
bool QTcpSocket_QBaseAtEnd(const QTcpSocket* self) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_AtEnd_IsBase(true);
        return vqtcpsocket->atEnd();
    } else {
        return self->QTcpSocket::atEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnAtEnd(const QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_AtEnd_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_AtEnd_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTcpSocket_Reset(QTcpSocket* self) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return vqtcpsocket->reset();
    } else {
        return self->QTcpSocket::reset();
    }
}

// Base class handler implementation
bool QTcpSocket_QBaseReset(QTcpSocket* self) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Reset_IsBase(true);
        return vqtcpsocket->reset();
    } else {
        return self->QTcpSocket::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnReset(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Reset_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTcpSocket_CanReadLine(const QTcpSocket* self) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return vqtcpsocket->canReadLine();
    } else {
        return self->QTcpSocket::canReadLine();
    }
}

// Base class handler implementation
bool QTcpSocket_QBaseCanReadLine(const QTcpSocket* self) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_CanReadLine_IsBase(true);
        return vqtcpsocket->canReadLine();
    } else {
        return self->QTcpSocket::canReadLine();
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnCanReadLine(const QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_CanReadLine_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_CanReadLine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTcpSocket_Event(QTcpSocket* self, QEvent* event) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return vqtcpsocket->event(event);
    } else {
        return self->QTcpSocket::event(event);
    }
}

// Base class handler implementation
bool QTcpSocket_QBaseEvent(QTcpSocket* self, QEvent* event) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Event_IsBase(true);
        return vqtcpsocket->event(event);
    } else {
        return self->QTcpSocket::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnEvent(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Event_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTcpSocket_EventFilter(QTcpSocket* self, QObject* watched, QEvent* event) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return vqtcpsocket->eventFilter(watched, event);
    } else {
        return self->QTcpSocket::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTcpSocket_QBaseEventFilter(QTcpSocket* self, QObject* watched, QEvent* event) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_EventFilter_IsBase(true);
        return vqtcpsocket->eventFilter(watched, event);
    } else {
        return self->QTcpSocket::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnEventFilter(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_EventFilter_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpSocket_TimerEvent(QTcpSocket* self, QTimerEvent* event) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->timerEvent(event);
    } else {
        ((VirtualQTcpSocket*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QTcpSocket_QBaseTimerEvent(QTcpSocket* self, QTimerEvent* event) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_TimerEvent_IsBase(true);
        vqtcpsocket->timerEvent(event);
    } else {
        ((VirtualQTcpSocket*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnTimerEvent(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_TimerEvent_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpSocket_ChildEvent(QTcpSocket* self, QChildEvent* event) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->childEvent(event);
    } else {
        ((VirtualQTcpSocket*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QTcpSocket_QBaseChildEvent(QTcpSocket* self, QChildEvent* event) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_ChildEvent_IsBase(true);
        vqtcpsocket->childEvent(event);
    } else {
        ((VirtualQTcpSocket*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnChildEvent(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_ChildEvent_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpSocket_CustomEvent(QTcpSocket* self, QEvent* event) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->customEvent(event);
    } else {
        ((VirtualQTcpSocket*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QTcpSocket_QBaseCustomEvent(QTcpSocket* self, QEvent* event) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_CustomEvent_IsBase(true);
        vqtcpsocket->customEvent(event);
    } else {
        ((VirtualQTcpSocket*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnCustomEvent(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_CustomEvent_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpSocket_ConnectNotify(QTcpSocket* self, const QMetaMethod* signal) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->connectNotify(*signal);
    } else {
        ((VirtualQTcpSocket*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTcpSocket_QBaseConnectNotify(QTcpSocket* self, const QMetaMethod* signal) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_ConnectNotify_IsBase(true);
        vqtcpsocket->connectNotify(*signal);
    } else {
        ((VirtualQTcpSocket*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnConnectNotify(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_ConnectNotify_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpSocket_DisconnectNotify(QTcpSocket* self, const QMetaMethod* signal) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->disconnectNotify(*signal);
    } else {
        ((VirtualQTcpSocket*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTcpSocket_QBaseDisconnectNotify(QTcpSocket* self, const QMetaMethod* signal) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_DisconnectNotify_IsBase(true);
        vqtcpsocket->disconnectNotify(*signal);
    } else {
        ((VirtualQTcpSocket*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnDisconnectNotify(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_DisconnectNotify_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpSocket_SetSocketState(QTcpSocket* self, int state) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    } else {
        ((VirtualQTcpSocket*)self)->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    }
}

// Base class handler implementation
void QTcpSocket_QBaseSetSocketState(QTcpSocket* self, int state) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetSocketState_IsBase(true);
        vqtcpsocket->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    } else {
        ((VirtualQTcpSocket*)self)->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSetSocketState(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetSocketState_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SetSocketState_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpSocket_SetSocketError(QTcpSocket* self, int socketError) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    } else {
        ((VirtualQTcpSocket*)self)->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    }
}

// Base class handler implementation
void QTcpSocket_QBaseSetSocketError(QTcpSocket* self, int socketError) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetSocketError_IsBase(true);
        vqtcpsocket->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    } else {
        ((VirtualQTcpSocket*)self)->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSetSocketError(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetSocketError_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SetSocketError_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpSocket_SetLocalPort(QTcpSocket* self, uint16_t port) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setLocalPort(static_cast<quint16>(port));
    } else {
        ((VirtualQTcpSocket*)self)->setLocalPort(static_cast<quint16>(port));
    }
}

// Base class handler implementation
void QTcpSocket_QBaseSetLocalPort(QTcpSocket* self, uint16_t port) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetLocalPort_IsBase(true);
        vqtcpsocket->setLocalPort(static_cast<quint16>(port));
    } else {
        ((VirtualQTcpSocket*)self)->setLocalPort(static_cast<quint16>(port));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSetLocalPort(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetLocalPort_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SetLocalPort_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpSocket_SetLocalAddress(QTcpSocket* self, const QHostAddress* address) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setLocalAddress(*address);
    } else {
        ((VirtualQTcpSocket*)self)->setLocalAddress(*address);
    }
}

// Base class handler implementation
void QTcpSocket_QBaseSetLocalAddress(QTcpSocket* self, const QHostAddress* address) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetLocalAddress_IsBase(true);
        vqtcpsocket->setLocalAddress(*address);
    } else {
        ((VirtualQTcpSocket*)self)->setLocalAddress(*address);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSetLocalAddress(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetLocalAddress_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SetLocalAddress_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpSocket_SetPeerPort(QTcpSocket* self, uint16_t port) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setPeerPort(static_cast<quint16>(port));
    } else {
        ((VirtualQTcpSocket*)self)->setPeerPort(static_cast<quint16>(port));
    }
}

// Base class handler implementation
void QTcpSocket_QBaseSetPeerPort(QTcpSocket* self, uint16_t port) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetPeerPort_IsBase(true);
        vqtcpsocket->setPeerPort(static_cast<quint16>(port));
    } else {
        ((VirtualQTcpSocket*)self)->setPeerPort(static_cast<quint16>(port));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSetPeerPort(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetPeerPort_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SetPeerPort_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpSocket_SetPeerAddress(QTcpSocket* self, const QHostAddress* address) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setPeerAddress(*address);
    } else {
        ((VirtualQTcpSocket*)self)->setPeerAddress(*address);
    }
}

// Base class handler implementation
void QTcpSocket_QBaseSetPeerAddress(QTcpSocket* self, const QHostAddress* address) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetPeerAddress_IsBase(true);
        vqtcpsocket->setPeerAddress(*address);
    } else {
        ((VirtualQTcpSocket*)self)->setPeerAddress(*address);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSetPeerAddress(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetPeerAddress_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SetPeerAddress_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpSocket_SetPeerName(QTcpSocket* self, const libqt_string name) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setPeerName(name_QString);
    } else {
        ((VirtualQTcpSocket*)self)->setPeerName(name_QString);
    }
}

// Base class handler implementation
void QTcpSocket_QBaseSetPeerName(QTcpSocket* self, const libqt_string name) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetPeerName_IsBase(true);
        vqtcpsocket->setPeerName(name_QString);
    } else {
        ((VirtualQTcpSocket*)self)->setPeerName(name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSetPeerName(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetPeerName_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SetPeerName_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpSocket_SetOpenMode(QTcpSocket* self, int openMode) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualQTcpSocket*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
void QTcpSocket_QBaseSetOpenMode(QTcpSocket* self, int openMode) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetOpenMode_IsBase(true);
        vqtcpsocket->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualQTcpSocket*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSetOpenMode(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetOpenMode_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SetOpenMode_Callback>(slot));
    }
}

// Derived class handler implementation
void QTcpSocket_SetErrorString(QTcpSocket* self, const libqt_string errorString) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setErrorString(errorString_QString);
    } else {
        ((VirtualQTcpSocket*)self)->setErrorString(errorString_QString);
    }
}

// Base class handler implementation
void QTcpSocket_QBaseSetErrorString(QTcpSocket* self, const libqt_string errorString) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetErrorString_IsBase(true);
        vqtcpsocket->setErrorString(errorString_QString);
    } else {
        ((VirtualQTcpSocket*)self)->setErrorString(errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSetErrorString(QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SetErrorString_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTcpSocket_Sender(const QTcpSocket* self) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return vqtcpsocket->sender();
    } else {
        return ((VirtualQTcpSocket*)self)->sender();
    }
}

// Base class handler implementation
QObject* QTcpSocket_QBaseSender(const QTcpSocket* self) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Sender_IsBase(true);
        return vqtcpsocket->sender();
    } else {
        return ((VirtualQTcpSocket*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSender(const QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Sender_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTcpSocket_SenderSignalIndex(const QTcpSocket* self) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return vqtcpsocket->senderSignalIndex();
    } else {
        return ((VirtualQTcpSocket*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QTcpSocket_QBaseSenderSignalIndex(const QTcpSocket* self) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SenderSignalIndex_IsBase(true);
        return vqtcpsocket->senderSignalIndex();
    } else {
        return ((VirtualQTcpSocket*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSenderSignalIndex(const QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTcpSocket_Receivers(const QTcpSocket* self, const char* signal) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return vqtcpsocket->receivers(signal);
    } else {
        return ((VirtualQTcpSocket*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QTcpSocket_QBaseReceivers(const QTcpSocket* self, const char* signal) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Receivers_IsBase(true);
        return vqtcpsocket->receivers(signal);
    } else {
        return ((VirtualQTcpSocket*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnReceivers(const QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_Receivers_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTcpSocket_IsSignalConnected(const QTcpSocket* self, const QMetaMethod* signal) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        return vqtcpsocket->isSignalConnected(*signal);
    } else {
        return ((VirtualQTcpSocket*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTcpSocket_QBaseIsSignalConnected(const QTcpSocket* self, const QMetaMethod* signal) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_IsSignalConnected_IsBase(true);
        return vqtcpsocket->isSignalConnected(*signal);
    } else {
        return ((VirtualQTcpSocket*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnIsSignalConnected(const QTcpSocket* self, intptr_t slot) {
    auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self));
    if (vqtcpsocket && vqtcpsocket->isVirtualQTcpSocket) {
        vqtcpsocket->setQTcpSocket_IsSignalConnected_Callback(reinterpret_cast<VirtualQTcpSocket::QTcpSocket_IsSignalConnected_Callback>(slot));
    }
}

void QTcpSocket_Delete(QTcpSocket* self) {
    delete self;
}
