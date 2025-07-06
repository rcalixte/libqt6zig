#include <QAbstractSocket>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkDatagram>
#include <QNetworkInterface>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUdpSocket>
#include <QVariant>
#include <qudpsocket.h>
#include "libqudpsocket.h"
#include "libqudpsocket.hxx"

QUdpSocket* QUdpSocket_new() {
    return new VirtualQUdpSocket();
}

QUdpSocket* QUdpSocket_new2(QObject* parent) {
    return new VirtualQUdpSocket(parent);
}

QMetaObject* QUdpSocket_MetaObject(const QUdpSocket* self) {
    return (QMetaObject*)self->metaObject();
}

void* QUdpSocket_Metacast(QUdpSocket* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QUdpSocket_Metacall(QUdpSocket* self, int param1, int param2, void** param3) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQUdpSocket*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QUdpSocket_OnMetacall(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Metacall_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QUdpSocket_QBaseMetacall(QUdpSocket* self, int param1, int param2, void** param3) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Metacall_IsBase(true);
        return vqudpsocket->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQUdpSocket*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QUdpSocket_Tr(const char* s) {
    QString _ret = QUdpSocket::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QUdpSocket_JoinMulticastGroup(QUdpSocket* self, const QHostAddress* groupAddress) {
    return self->joinMulticastGroup(*groupAddress);
}

bool QUdpSocket_JoinMulticastGroup2(QUdpSocket* self, const QHostAddress* groupAddress, const QNetworkInterface* iface) {
    return self->joinMulticastGroup(*groupAddress, *iface);
}

bool QUdpSocket_LeaveMulticastGroup(QUdpSocket* self, const QHostAddress* groupAddress) {
    return self->leaveMulticastGroup(*groupAddress);
}

bool QUdpSocket_LeaveMulticastGroup2(QUdpSocket* self, const QHostAddress* groupAddress, const QNetworkInterface* iface) {
    return self->leaveMulticastGroup(*groupAddress, *iface);
}

QNetworkInterface* QUdpSocket_MulticastInterface(const QUdpSocket* self) {
    return new QNetworkInterface(self->multicastInterface());
}

void QUdpSocket_SetMulticastInterface(QUdpSocket* self, const QNetworkInterface* iface) {
    self->setMulticastInterface(*iface);
}

bool QUdpSocket_HasPendingDatagrams(const QUdpSocket* self) {
    return self->hasPendingDatagrams();
}

long long QUdpSocket_PendingDatagramSize(const QUdpSocket* self) {
    return static_cast<long long>(self->pendingDatagramSize());
}

QNetworkDatagram* QUdpSocket_ReceiveDatagram(QUdpSocket* self) {
    return new QNetworkDatagram(self->receiveDatagram());
}

long long QUdpSocket_ReadDatagram(QUdpSocket* self, char* data, long long maxlen) {
    return static_cast<long long>(self->readDatagram(data, static_cast<qint64>(maxlen)));
}

long long QUdpSocket_WriteDatagram(QUdpSocket* self, const QNetworkDatagram* datagram) {
    return static_cast<long long>(self->writeDatagram(*datagram));
}

long long QUdpSocket_WriteDatagram2(QUdpSocket* self, const char* data, long long lenVal, const QHostAddress* host, uint16_t port) {
    return static_cast<long long>(self->writeDatagram(data, static_cast<qint64>(lenVal), *host, static_cast<quint16>(port)));
}

long long QUdpSocket_WriteDatagram3(QUdpSocket* self, const libqt_string datagram, const QHostAddress* host, uint16_t port) {
    QByteArray datagram_QByteArray(datagram.data, datagram.len);
    return static_cast<long long>(self->writeDatagram(datagram_QByteArray, *host, static_cast<quint16>(port)));
}

libqt_string QUdpSocket_Tr2(const char* s, const char* c) {
    QString _ret = QUdpSocket::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QUdpSocket_Tr3(const char* s, const char* c, int n) {
    QString _ret = QUdpSocket::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QUdpSocket_Bind2(QUdpSocket* self, int addr, uint16_t port) {
    return self->bind(static_cast<QHostAddress::SpecialAddress>(addr), static_cast<quint16>(port));
}

bool QUdpSocket_Bind3(QUdpSocket* self, int addr, uint16_t port, int mode) {
    return self->bind(static_cast<QHostAddress::SpecialAddress>(addr), static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
}

QNetworkDatagram* QUdpSocket_ReceiveDatagram1(QUdpSocket* self, long long maxSize) {
    return new QNetworkDatagram(self->receiveDatagram(static_cast<qint64>(maxSize)));
}

long long QUdpSocket_ReadDatagram3(QUdpSocket* self, char* data, long long maxlen, QHostAddress* host) {
    return static_cast<long long>(self->readDatagram(data, static_cast<qint64>(maxlen), host));
}

long long QUdpSocket_ReadDatagram4(QUdpSocket* self, char* data, long long maxlen, QHostAddress* host, uint16_t* port) {
    return static_cast<long long>(self->readDatagram(data, static_cast<qint64>(maxlen), host, static_cast<quint16*>(port)));
}

// Derived class handler implementation
void QUdpSocket_Resume(QUdpSocket* self) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->resume();
    } else {
        self->QUdpSocket::resume();
    }
}

// Base class handler implementation
void QUdpSocket_QBaseResume(QUdpSocket* self) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Resume_IsBase(true);
        vqudpsocket->resume();
    } else {
        self->QUdpSocket::resume();
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnResume(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Resume_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Resume_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUdpSocket_Bind(QUdpSocket* self, const QHostAddress* address, uint16_t port, int mode) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return vqudpsocket->bind(*address, static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
    } else {
        return self->QUdpSocket::bind(*address, static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
    }
}

// Base class handler implementation
bool QUdpSocket_QBaseBind(QUdpSocket* self, const QHostAddress* address, uint16_t port, int mode) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Bind_IsBase(true);
        return vqudpsocket->bind(*address, static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
    } else {
        return self->QUdpSocket::bind(*address, static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnBind(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Bind_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Bind_Callback>(slot));
    }
}

// Derived class handler implementation
void QUdpSocket_ConnectToHost(QUdpSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    } else {
        self->QUdpSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    }
}

// Base class handler implementation
void QUdpSocket_QBaseConnectToHost(QUdpSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_ConnectToHost_IsBase(true);
        vqudpsocket->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    } else {
        self->QUdpSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnConnectToHost(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_ConnectToHost_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_ConnectToHost_Callback>(slot));
    }
}

// Derived class handler implementation
void QUdpSocket_DisconnectFromHost(QUdpSocket* self) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->disconnectFromHost();
    } else {
        self->QUdpSocket::disconnectFromHost();
    }
}

// Base class handler implementation
void QUdpSocket_QBaseDisconnectFromHost(QUdpSocket* self) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_DisconnectFromHost_IsBase(true);
        vqudpsocket->disconnectFromHost();
    } else {
        self->QUdpSocket::disconnectFromHost();
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnDisconnectFromHost(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_DisconnectFromHost_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_DisconnectFromHost_Callback>(slot));
    }
}

// Derived class handler implementation
long long QUdpSocket_BytesAvailable(const QUdpSocket* self) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return static_cast<long long>(vqudpsocket->bytesAvailable());
    } else {
        return static_cast<long long>(self->QUdpSocket::bytesAvailable());
    }
}

// Base class handler implementation
long long QUdpSocket_QBaseBytesAvailable(const QUdpSocket* self) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_BytesAvailable_IsBase(true);
        return static_cast<long long>(vqudpsocket->bytesAvailable());
    } else {
        return static_cast<long long>(self->QUdpSocket::bytesAvailable());
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnBytesAvailable(const QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_BytesAvailable_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_BytesAvailable_Callback>(slot));
    }
}

// Derived class handler implementation
long long QUdpSocket_BytesToWrite(const QUdpSocket* self) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return static_cast<long long>(vqudpsocket->bytesToWrite());
    } else {
        return static_cast<long long>(self->QUdpSocket::bytesToWrite());
    }
}

// Base class handler implementation
long long QUdpSocket_QBaseBytesToWrite(const QUdpSocket* self) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_BytesToWrite_IsBase(true);
        return static_cast<long long>(vqudpsocket->bytesToWrite());
    } else {
        return static_cast<long long>(self->QUdpSocket::bytesToWrite());
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnBytesToWrite(const QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_BytesToWrite_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_BytesToWrite_Callback>(slot));
    }
}

// Derived class handler implementation
void QUdpSocket_SetReadBufferSize(QUdpSocket* self, long long size) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setReadBufferSize(static_cast<qint64>(size));
    } else {
        self->QUdpSocket::setReadBufferSize(static_cast<qint64>(size));
    }
}

// Base class handler implementation
void QUdpSocket_QBaseSetReadBufferSize(QUdpSocket* self, long long size) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetReadBufferSize_IsBase(true);
        vqudpsocket->setReadBufferSize(static_cast<qint64>(size));
    } else {
        self->QUdpSocket::setReadBufferSize(static_cast<qint64>(size));
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSetReadBufferSize(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetReadBufferSize_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SetReadBufferSize_Callback>(slot));
    }
}

// Derived class handler implementation
intptr_t QUdpSocket_SocketDescriptor(const QUdpSocket* self) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        qintptr _ret = vqudpsocket->socketDescriptor();
        return (intptr_t)(_ret);
    } else {
        qintptr _ret = self->QUdpSocket::socketDescriptor();
        return (intptr_t)(_ret);
    }
}

// Base class handler implementation
intptr_t QUdpSocket_QBaseSocketDescriptor(const QUdpSocket* self) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SocketDescriptor_IsBase(true);
        qintptr _ret = vqudpsocket->socketDescriptor();
        return (intptr_t)(_ret);
    } else {
        qintptr _ret = self->QUdpSocket::socketDescriptor();
        return (intptr_t)(_ret);
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSocketDescriptor(const QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SocketDescriptor_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SocketDescriptor_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUdpSocket_SetSocketDescriptor(QUdpSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return vqudpsocket->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
    } else {
        return self->QUdpSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
    }
}

// Base class handler implementation
bool QUdpSocket_QBaseSetSocketDescriptor(QUdpSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetSocketDescriptor_IsBase(true);
        return vqudpsocket->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
    } else {
        return self->QUdpSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSetSocketDescriptor(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetSocketDescriptor_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SetSocketDescriptor_Callback>(slot));
    }
}

// Derived class handler implementation
void QUdpSocket_SetSocketOption(QUdpSocket* self, int option, const QVariant* value) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    } else {
        self->QUdpSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    }
}

// Base class handler implementation
void QUdpSocket_QBaseSetSocketOption(QUdpSocket* self, int option, const QVariant* value) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetSocketOption_IsBase(true);
        vqudpsocket->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    } else {
        self->QUdpSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSetSocketOption(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetSocketOption_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SetSocketOption_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QUdpSocket_SocketOption(QUdpSocket* self, int option) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return new QVariant(vqudpsocket->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    } else {
        return new QVariant(((VirtualQUdpSocket*)self)->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    }
}

// Base class handler implementation
QVariant* QUdpSocket_QBaseSocketOption(QUdpSocket* self, int option) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SocketOption_IsBase(true);
        return new QVariant(vqudpsocket->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    } else {
        return new QVariant(((VirtualQUdpSocket*)self)->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSocketOption(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SocketOption_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SocketOption_Callback>(slot));
    }
}

// Derived class handler implementation
void QUdpSocket_Close(QUdpSocket* self) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->close();
    } else {
        self->QUdpSocket::close();
    }
}

// Base class handler implementation
void QUdpSocket_QBaseClose(QUdpSocket* self) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Close_IsBase(true);
        vqudpsocket->close();
    } else {
        self->QUdpSocket::close();
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnClose(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Close_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Close_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUdpSocket_IsSequential(const QUdpSocket* self) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return vqudpsocket->isSequential();
    } else {
        return self->QUdpSocket::isSequential();
    }
}

// Base class handler implementation
bool QUdpSocket_QBaseIsSequential(const QUdpSocket* self) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_IsSequential_IsBase(true);
        return vqudpsocket->isSequential();
    } else {
        return self->QUdpSocket::isSequential();
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnIsSequential(const QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_IsSequential_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_IsSequential_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUdpSocket_WaitForConnected(QUdpSocket* self, int msecs) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return vqudpsocket->waitForConnected(static_cast<int>(msecs));
    } else {
        return self->QUdpSocket::waitForConnected(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QUdpSocket_QBaseWaitForConnected(QUdpSocket* self, int msecs) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_WaitForConnected_IsBase(true);
        return vqudpsocket->waitForConnected(static_cast<int>(msecs));
    } else {
        return self->QUdpSocket::waitForConnected(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnWaitForConnected(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_WaitForConnected_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_WaitForConnected_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUdpSocket_WaitForReadyRead(QUdpSocket* self, int msecs) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return vqudpsocket->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->QUdpSocket::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QUdpSocket_QBaseWaitForReadyRead(QUdpSocket* self, int msecs) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_WaitForReadyRead_IsBase(true);
        return vqudpsocket->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->QUdpSocket::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnWaitForReadyRead(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_WaitForReadyRead_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_WaitForReadyRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUdpSocket_WaitForBytesWritten(QUdpSocket* self, int msecs) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return vqudpsocket->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->QUdpSocket::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QUdpSocket_QBaseWaitForBytesWritten(QUdpSocket* self, int msecs) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_WaitForBytesWritten_IsBase(true);
        return vqudpsocket->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->QUdpSocket::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnWaitForBytesWritten(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_WaitForBytesWritten_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUdpSocket_WaitForDisconnected(QUdpSocket* self, int msecs) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return vqudpsocket->waitForDisconnected(static_cast<int>(msecs));
    } else {
        return self->QUdpSocket::waitForDisconnected(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QUdpSocket_QBaseWaitForDisconnected(QUdpSocket* self, int msecs) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_WaitForDisconnected_IsBase(true);
        return vqudpsocket->waitForDisconnected(static_cast<int>(msecs));
    } else {
        return self->QUdpSocket::waitForDisconnected(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnWaitForDisconnected(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_WaitForDisconnected_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_WaitForDisconnected_Callback>(slot));
    }
}

// Derived class handler implementation
long long QUdpSocket_ReadData(QUdpSocket* self, char* data, long long maxlen) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return static_cast<long long>(vqudpsocket->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQUdpSocket*)self)->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QUdpSocket_QBaseReadData(QUdpSocket* self, char* data, long long maxlen) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_ReadData_IsBase(true);
        return static_cast<long long>(vqudpsocket->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQUdpSocket*)self)->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnReadData(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_ReadData_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_ReadData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QUdpSocket_ReadLineData(QUdpSocket* self, char* data, long long maxlen) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return static_cast<long long>(vqudpsocket->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQUdpSocket*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QUdpSocket_QBaseReadLineData(QUdpSocket* self, char* data, long long maxlen) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_ReadLineData_IsBase(true);
        return static_cast<long long>(vqudpsocket->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQUdpSocket*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnReadLineData(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_ReadLineData_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_ReadLineData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QUdpSocket_SkipData(QUdpSocket* self, long long maxSize) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return static_cast<long long>(vqudpsocket->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQUdpSocket*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Base class handler implementation
long long QUdpSocket_QBaseSkipData(QUdpSocket* self, long long maxSize) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SkipData_IsBase(true);
        return static_cast<long long>(vqudpsocket->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQUdpSocket*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSkipData(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SkipData_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SkipData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QUdpSocket_WriteData(QUdpSocket* self, const char* data, long long lenVal) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return static_cast<long long>(vqudpsocket->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(((VirtualQUdpSocket*)self)->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Base class handler implementation
long long QUdpSocket_QBaseWriteData(QUdpSocket* self, const char* data, long long lenVal) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_WriteData_IsBase(true);
        return static_cast<long long>(vqudpsocket->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(((VirtualQUdpSocket*)self)->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnWriteData(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_WriteData_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_WriteData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUdpSocket_Open(QUdpSocket* self, int mode) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return vqudpsocket->open(static_cast<QIODeviceBase::OpenMode>(mode));
    } else {
        return self->QUdpSocket::open(static_cast<QIODeviceBase::OpenMode>(mode));
    }
}

// Base class handler implementation
bool QUdpSocket_QBaseOpen(QUdpSocket* self, int mode) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Open_IsBase(true);
        return vqudpsocket->open(static_cast<QIODeviceBase::OpenMode>(mode));
    } else {
        return self->QUdpSocket::open(static_cast<QIODeviceBase::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnOpen(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Open_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Open_Callback>(slot));
    }
}

// Derived class handler implementation
long long QUdpSocket_Pos(const QUdpSocket* self) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return static_cast<long long>(vqudpsocket->pos());
    } else {
        return static_cast<long long>(self->QUdpSocket::pos());
    }
}

// Base class handler implementation
long long QUdpSocket_QBasePos(const QUdpSocket* self) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Pos_IsBase(true);
        return static_cast<long long>(vqudpsocket->pos());
    } else {
        return static_cast<long long>(self->QUdpSocket::pos());
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnPos(const QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Pos_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Pos_Callback>(slot));
    }
}

// Derived class handler implementation
long long QUdpSocket_Size(const QUdpSocket* self) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return static_cast<long long>(vqudpsocket->size());
    } else {
        return static_cast<long long>(self->QUdpSocket::size());
    }
}

// Base class handler implementation
long long QUdpSocket_QBaseSize(const QUdpSocket* self) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Size_IsBase(true);
        return static_cast<long long>(vqudpsocket->size());
    } else {
        return static_cast<long long>(self->QUdpSocket::size());
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSize(const QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Size_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUdpSocket_Seek(QUdpSocket* self, long long pos) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return vqudpsocket->seek(static_cast<qint64>(pos));
    } else {
        return self->QUdpSocket::seek(static_cast<qint64>(pos));
    }
}

// Base class handler implementation
bool QUdpSocket_QBaseSeek(QUdpSocket* self, long long pos) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Seek_IsBase(true);
        return vqudpsocket->seek(static_cast<qint64>(pos));
    } else {
        return self->QUdpSocket::seek(static_cast<qint64>(pos));
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSeek(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Seek_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Seek_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUdpSocket_AtEnd(const QUdpSocket* self) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return vqudpsocket->atEnd();
    } else {
        return self->QUdpSocket::atEnd();
    }
}

// Base class handler implementation
bool QUdpSocket_QBaseAtEnd(const QUdpSocket* self) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_AtEnd_IsBase(true);
        return vqudpsocket->atEnd();
    } else {
        return self->QUdpSocket::atEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnAtEnd(const QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_AtEnd_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_AtEnd_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUdpSocket_Reset(QUdpSocket* self) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return vqudpsocket->reset();
    } else {
        return self->QUdpSocket::reset();
    }
}

// Base class handler implementation
bool QUdpSocket_QBaseReset(QUdpSocket* self) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Reset_IsBase(true);
        return vqudpsocket->reset();
    } else {
        return self->QUdpSocket::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnReset(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Reset_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUdpSocket_CanReadLine(const QUdpSocket* self) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return vqudpsocket->canReadLine();
    } else {
        return self->QUdpSocket::canReadLine();
    }
}

// Base class handler implementation
bool QUdpSocket_QBaseCanReadLine(const QUdpSocket* self) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_CanReadLine_IsBase(true);
        return vqudpsocket->canReadLine();
    } else {
        return self->QUdpSocket::canReadLine();
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnCanReadLine(const QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_CanReadLine_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_CanReadLine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUdpSocket_Event(QUdpSocket* self, QEvent* event) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return vqudpsocket->event(event);
    } else {
        return self->QUdpSocket::event(event);
    }
}

// Base class handler implementation
bool QUdpSocket_QBaseEvent(QUdpSocket* self, QEvent* event) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Event_IsBase(true);
        return vqudpsocket->event(event);
    } else {
        return self->QUdpSocket::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnEvent(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Event_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUdpSocket_EventFilter(QUdpSocket* self, QObject* watched, QEvent* event) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return vqudpsocket->eventFilter(watched, event);
    } else {
        return self->QUdpSocket::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QUdpSocket_QBaseEventFilter(QUdpSocket* self, QObject* watched, QEvent* event) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_EventFilter_IsBase(true);
        return vqudpsocket->eventFilter(watched, event);
    } else {
        return self->QUdpSocket::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnEventFilter(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_EventFilter_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QUdpSocket_TimerEvent(QUdpSocket* self, QTimerEvent* event) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->timerEvent(event);
    } else {
        ((VirtualQUdpSocket*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QUdpSocket_QBaseTimerEvent(QUdpSocket* self, QTimerEvent* event) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_TimerEvent_IsBase(true);
        vqudpsocket->timerEvent(event);
    } else {
        ((VirtualQUdpSocket*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnTimerEvent(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_TimerEvent_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUdpSocket_ChildEvent(QUdpSocket* self, QChildEvent* event) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->childEvent(event);
    } else {
        ((VirtualQUdpSocket*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QUdpSocket_QBaseChildEvent(QUdpSocket* self, QChildEvent* event) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_ChildEvent_IsBase(true);
        vqudpsocket->childEvent(event);
    } else {
        ((VirtualQUdpSocket*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnChildEvent(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_ChildEvent_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUdpSocket_CustomEvent(QUdpSocket* self, QEvent* event) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->customEvent(event);
    } else {
        ((VirtualQUdpSocket*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QUdpSocket_QBaseCustomEvent(QUdpSocket* self, QEvent* event) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_CustomEvent_IsBase(true);
        vqudpsocket->customEvent(event);
    } else {
        ((VirtualQUdpSocket*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnCustomEvent(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_CustomEvent_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUdpSocket_ConnectNotify(QUdpSocket* self, const QMetaMethod* signal) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->connectNotify(*signal);
    } else {
        ((VirtualQUdpSocket*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QUdpSocket_QBaseConnectNotify(QUdpSocket* self, const QMetaMethod* signal) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_ConnectNotify_IsBase(true);
        vqudpsocket->connectNotify(*signal);
    } else {
        ((VirtualQUdpSocket*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnConnectNotify(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_ConnectNotify_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QUdpSocket_DisconnectNotify(QUdpSocket* self, const QMetaMethod* signal) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->disconnectNotify(*signal);
    } else {
        ((VirtualQUdpSocket*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QUdpSocket_QBaseDisconnectNotify(QUdpSocket* self, const QMetaMethod* signal) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_DisconnectNotify_IsBase(true);
        vqudpsocket->disconnectNotify(*signal);
    } else {
        ((VirtualQUdpSocket*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnDisconnectNotify(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_DisconnectNotify_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QUdpSocket_SetSocketState(QUdpSocket* self, int state) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    } else {
        ((VirtualQUdpSocket*)self)->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    }
}

// Base class handler implementation
void QUdpSocket_QBaseSetSocketState(QUdpSocket* self, int state) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetSocketState_IsBase(true);
        vqudpsocket->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    } else {
        ((VirtualQUdpSocket*)self)->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSetSocketState(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetSocketState_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SetSocketState_Callback>(slot));
    }
}

// Derived class handler implementation
void QUdpSocket_SetSocketError(QUdpSocket* self, int socketError) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    } else {
        ((VirtualQUdpSocket*)self)->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    }
}

// Base class handler implementation
void QUdpSocket_QBaseSetSocketError(QUdpSocket* self, int socketError) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetSocketError_IsBase(true);
        vqudpsocket->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    } else {
        ((VirtualQUdpSocket*)self)->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSetSocketError(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetSocketError_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SetSocketError_Callback>(slot));
    }
}

// Derived class handler implementation
void QUdpSocket_SetLocalPort(QUdpSocket* self, uint16_t port) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setLocalPort(static_cast<quint16>(port));
    } else {
        ((VirtualQUdpSocket*)self)->setLocalPort(static_cast<quint16>(port));
    }
}

// Base class handler implementation
void QUdpSocket_QBaseSetLocalPort(QUdpSocket* self, uint16_t port) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetLocalPort_IsBase(true);
        vqudpsocket->setLocalPort(static_cast<quint16>(port));
    } else {
        ((VirtualQUdpSocket*)self)->setLocalPort(static_cast<quint16>(port));
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSetLocalPort(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetLocalPort_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SetLocalPort_Callback>(slot));
    }
}

// Derived class handler implementation
void QUdpSocket_SetLocalAddress(QUdpSocket* self, const QHostAddress* address) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setLocalAddress(*address);
    } else {
        ((VirtualQUdpSocket*)self)->setLocalAddress(*address);
    }
}

// Base class handler implementation
void QUdpSocket_QBaseSetLocalAddress(QUdpSocket* self, const QHostAddress* address) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetLocalAddress_IsBase(true);
        vqudpsocket->setLocalAddress(*address);
    } else {
        ((VirtualQUdpSocket*)self)->setLocalAddress(*address);
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSetLocalAddress(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetLocalAddress_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SetLocalAddress_Callback>(slot));
    }
}

// Derived class handler implementation
void QUdpSocket_SetPeerPort(QUdpSocket* self, uint16_t port) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setPeerPort(static_cast<quint16>(port));
    } else {
        ((VirtualQUdpSocket*)self)->setPeerPort(static_cast<quint16>(port));
    }
}

// Base class handler implementation
void QUdpSocket_QBaseSetPeerPort(QUdpSocket* self, uint16_t port) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetPeerPort_IsBase(true);
        vqudpsocket->setPeerPort(static_cast<quint16>(port));
    } else {
        ((VirtualQUdpSocket*)self)->setPeerPort(static_cast<quint16>(port));
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSetPeerPort(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetPeerPort_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SetPeerPort_Callback>(slot));
    }
}

// Derived class handler implementation
void QUdpSocket_SetPeerAddress(QUdpSocket* self, const QHostAddress* address) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setPeerAddress(*address);
    } else {
        ((VirtualQUdpSocket*)self)->setPeerAddress(*address);
    }
}

// Base class handler implementation
void QUdpSocket_QBaseSetPeerAddress(QUdpSocket* self, const QHostAddress* address) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetPeerAddress_IsBase(true);
        vqudpsocket->setPeerAddress(*address);
    } else {
        ((VirtualQUdpSocket*)self)->setPeerAddress(*address);
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSetPeerAddress(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetPeerAddress_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SetPeerAddress_Callback>(slot));
    }
}

// Derived class handler implementation
void QUdpSocket_SetPeerName(QUdpSocket* self, const libqt_string name) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setPeerName(name_QString);
    } else {
        ((VirtualQUdpSocket*)self)->setPeerName(name_QString);
    }
}

// Base class handler implementation
void QUdpSocket_QBaseSetPeerName(QUdpSocket* self, const libqt_string name) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetPeerName_IsBase(true);
        vqudpsocket->setPeerName(name_QString);
    } else {
        ((VirtualQUdpSocket*)self)->setPeerName(name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSetPeerName(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetPeerName_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SetPeerName_Callback>(slot));
    }
}

// Derived class handler implementation
void QUdpSocket_SetOpenMode(QUdpSocket* self, int openMode) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualQUdpSocket*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
void QUdpSocket_QBaseSetOpenMode(QUdpSocket* self, int openMode) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetOpenMode_IsBase(true);
        vqudpsocket->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualQUdpSocket*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSetOpenMode(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetOpenMode_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SetOpenMode_Callback>(slot));
    }
}

// Derived class handler implementation
void QUdpSocket_SetErrorString(QUdpSocket* self, const libqt_string errorString) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setErrorString(errorString_QString);
    } else {
        ((VirtualQUdpSocket*)self)->setErrorString(errorString_QString);
    }
}

// Base class handler implementation
void QUdpSocket_QBaseSetErrorString(QUdpSocket* self, const libqt_string errorString) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetErrorString_IsBase(true);
        vqudpsocket->setErrorString(errorString_QString);
    } else {
        ((VirtualQUdpSocket*)self)->setErrorString(errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSetErrorString(QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SetErrorString_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QUdpSocket_Sender(const QUdpSocket* self) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return vqudpsocket->sender();
    } else {
        return ((VirtualQUdpSocket*)self)->sender();
    }
}

// Base class handler implementation
QObject* QUdpSocket_QBaseSender(const QUdpSocket* self) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Sender_IsBase(true);
        return vqudpsocket->sender();
    } else {
        return ((VirtualQUdpSocket*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSender(const QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Sender_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QUdpSocket_SenderSignalIndex(const QUdpSocket* self) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return vqudpsocket->senderSignalIndex();
    } else {
        return ((VirtualQUdpSocket*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QUdpSocket_QBaseSenderSignalIndex(const QUdpSocket* self) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SenderSignalIndex_IsBase(true);
        return vqudpsocket->senderSignalIndex();
    } else {
        return ((VirtualQUdpSocket*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSenderSignalIndex(const QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_SenderSignalIndex_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QUdpSocket_Receivers(const QUdpSocket* self, const char* signal) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return vqudpsocket->receivers(signal);
    } else {
        return ((VirtualQUdpSocket*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QUdpSocket_QBaseReceivers(const QUdpSocket* self, const char* signal) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Receivers_IsBase(true);
        return vqudpsocket->receivers(signal);
    } else {
        return ((VirtualQUdpSocket*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnReceivers(const QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_Receivers_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUdpSocket_IsSignalConnected(const QUdpSocket* self, const QMetaMethod* signal) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        return vqudpsocket->isSignalConnected(*signal);
    } else {
        return ((VirtualQUdpSocket*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QUdpSocket_QBaseIsSignalConnected(const QUdpSocket* self, const QMetaMethod* signal) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_IsSignalConnected_IsBase(true);
        return vqudpsocket->isSignalConnected(*signal);
    } else {
        return ((VirtualQUdpSocket*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnIsSignalConnected(const QUdpSocket* self, intptr_t slot) {
    auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self));
    if (vqudpsocket && vqudpsocket->isVirtualQUdpSocket) {
        vqudpsocket->setQUdpSocket_IsSignalConnected_Callback(reinterpret_cast<VirtualQUdpSocket::QUdpSocket_IsSignalConnected_Callback>(slot));
    }
}

void QUdpSocket_Delete(QUdpSocket* self) {
    delete self;
}
