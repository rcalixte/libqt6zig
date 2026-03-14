#include <QBluetoothAddress>
#include <QBluetoothServiceInfo>
#include <QBluetoothSocket>
#include <QBluetoothUuid>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qbluetoothsocket.h>
#include "libqbluetoothsocket.h"
#include "libqbluetoothsocket.hxx"

QBluetoothSocket* QBluetoothSocket_new(int socketType) {
    return new VirtualQBluetoothSocket(static_cast<QBluetoothServiceInfo::Protocol>(socketType));
}

QBluetoothSocket* QBluetoothSocket_new2() {
    return new VirtualQBluetoothSocket();
}

QBluetoothSocket* QBluetoothSocket_new3(int socketType, QObject* parent) {
    return new VirtualQBluetoothSocket(static_cast<QBluetoothServiceInfo::Protocol>(socketType), parent);
}

QBluetoothSocket* QBluetoothSocket_new4(QObject* parent) {
    return new VirtualQBluetoothSocket(parent);
}

QMetaObject* QBluetoothSocket_MetaObject(const QBluetoothSocket* self) {
    auto* vqbluetoothsocket = dynamic_cast<const VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQBluetoothSocket*)self)->metaObject();
    }
}

void* QBluetoothSocket_Metacast(QBluetoothSocket* self, const char* param1) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQBluetoothSocket*)self)->qt_metacast(param1);
    }
}

int QBluetoothSocket_Metacall(QBluetoothSocket* self, int param1, int param2, void** param3) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQBluetoothSocket*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void QBluetoothSocket_Abort(QBluetoothSocket* self) {
    self->abort();
}

void QBluetoothSocket_Close(QBluetoothSocket* self) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        self->close();
    } else {
        ((VirtualQBluetoothSocket*)self)->close();
    }
}

bool QBluetoothSocket_IsSequential(const QBluetoothSocket* self) {
    auto* vqbluetoothsocket = dynamic_cast<const VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return self->isSequential();
    } else {
        return ((VirtualQBluetoothSocket*)self)->isSequential();
    }
}

long long QBluetoothSocket_BytesAvailable(const QBluetoothSocket* self) {
    auto* vqbluetoothsocket = dynamic_cast<const VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return static_cast<long long>(self->bytesAvailable());
    } else {
        return static_cast<long long>(((VirtualQBluetoothSocket*)self)->bytesAvailable());
    }
}

long long QBluetoothSocket_BytesToWrite(const QBluetoothSocket* self) {
    auto* vqbluetoothsocket = dynamic_cast<const VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return static_cast<long long>(self->bytesToWrite());
    } else {
        return static_cast<long long>(((VirtualQBluetoothSocket*)self)->bytesToWrite());
    }
}

bool QBluetoothSocket_CanReadLine(const QBluetoothSocket* self) {
    auto* vqbluetoothsocket = dynamic_cast<const VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return self->canReadLine();
    } else {
        return ((VirtualQBluetoothSocket*)self)->canReadLine();
    }
}

void QBluetoothSocket_ConnectToService(QBluetoothSocket* self, const QBluetoothServiceInfo* service) {
    self->connectToService(*service);
}

void QBluetoothSocket_ConnectToService2(QBluetoothSocket* self, const QBluetoothAddress* address, const QBluetoothUuid* uuid) {
    self->connectToService(*address, *uuid);
}

void QBluetoothSocket_ConnectToService3(QBluetoothSocket* self, const QBluetoothAddress* address, uint16_t port) {
    self->connectToService(*address, static_cast<quint16>(port));
}

void QBluetoothSocket_ConnectToService4(QBluetoothSocket* self, const QBluetoothAddress* address, int uuid) {
    self->connectToService(*address, static_cast<QBluetoothUuid::ServiceClassUuid>(uuid));
}

void QBluetoothSocket_DisconnectFromService(QBluetoothSocket* self) {
    self->disconnectFromService();
}

libqt_string QBluetoothSocket_LocalName(const QBluetoothSocket* self) {
    QString _ret = self->localName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QBluetoothAddress* QBluetoothSocket_LocalAddress(const QBluetoothSocket* self) {
    return new QBluetoothAddress(self->localAddress());
}

uint16_t QBluetoothSocket_LocalPort(const QBluetoothSocket* self) {
    return static_cast<uint16_t>(self->localPort());
}

libqt_string QBluetoothSocket_PeerName(const QBluetoothSocket* self) {
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

QBluetoothAddress* QBluetoothSocket_PeerAddress(const QBluetoothSocket* self) {
    return new QBluetoothAddress(self->peerAddress());
}

uint16_t QBluetoothSocket_PeerPort(const QBluetoothSocket* self) {
    return static_cast<uint16_t>(self->peerPort());
}

bool QBluetoothSocket_SetSocketDescriptor(QBluetoothSocket* self, int socketDescriptor, int socketType) {
    return self->setSocketDescriptor(static_cast<int>(socketDescriptor), static_cast<QBluetoothServiceInfo::Protocol>(socketType));
}

int QBluetoothSocket_SocketDescriptor(const QBluetoothSocket* self) {
    return self->socketDescriptor();
}

int QBluetoothSocket_SocketType(const QBluetoothSocket* self) {
    return static_cast<int>(self->socketType());
}

int QBluetoothSocket_State(const QBluetoothSocket* self) {
    return static_cast<int>(self->state());
}

int QBluetoothSocket_Error(const QBluetoothSocket* self) {
    return static_cast<int>(self->error());
}

libqt_string QBluetoothSocket_ErrorString(const QBluetoothSocket* self) {
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

void QBluetoothSocket_SetPreferredSecurityFlags(QBluetoothSocket* self, int flags) {
    self->setPreferredSecurityFlags(static_cast<QBluetooth::SecurityFlags>(flags));
}

int QBluetoothSocket_PreferredSecurityFlags(const QBluetoothSocket* self) {
    return static_cast<int>(self->preferredSecurityFlags());
}

void QBluetoothSocket_Connected(QBluetoothSocket* self) {
    self->connected();
}

void QBluetoothSocket_Connect_Connected(QBluetoothSocket* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothSocket*) = reinterpret_cast<void (*)(QBluetoothSocket*)>(slot);
    QBluetoothSocket::connect(self, &QBluetoothSocket::connected, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBluetoothSocket_Disconnected(QBluetoothSocket* self) {
    self->disconnected();
}

void QBluetoothSocket_Connect_Disconnected(QBluetoothSocket* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothSocket*) = reinterpret_cast<void (*)(QBluetoothSocket*)>(slot);
    QBluetoothSocket::connect(self, &QBluetoothSocket::disconnected, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBluetoothSocket_ErrorOccurred(QBluetoothSocket* self, int errorVal) {
    self->errorOccurred(static_cast<QBluetoothSocket::SocketError>(errorVal));
}

void QBluetoothSocket_Connect_ErrorOccurred(QBluetoothSocket* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothSocket*, int) = reinterpret_cast<void (*)(QBluetoothSocket*, int)>(slot);
    QBluetoothSocket::connect(self, &QBluetoothSocket::errorOccurred, [self, slotFunc](QBluetoothSocket::SocketError errorVal) {
        int sigval1 = static_cast<int>(errorVal);
        slotFunc(self, sigval1);
    });
}

void QBluetoothSocket_StateChanged(QBluetoothSocket* self, int state) {
    self->stateChanged(static_cast<QBluetoothSocket::SocketState>(state));
}

void QBluetoothSocket_Connect_StateChanged(QBluetoothSocket* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothSocket*, int) = reinterpret_cast<void (*)(QBluetoothSocket*, int)>(slot);
    QBluetoothSocket::connect(self, &QBluetoothSocket::stateChanged, [self, slotFunc](QBluetoothSocket::SocketState state) {
        int sigval1 = static_cast<int>(state);
        slotFunc(self, sigval1);
    });
}

long long QBluetoothSocket_ReadData(QBluetoothSocket* self, char* data, long long maxSize) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return static_cast<long long>(vqbluetoothsocket->readData(data, static_cast<qint64>(maxSize)));
    }
    return {};
}

long long QBluetoothSocket_WriteData(QBluetoothSocket* self, const char* data, long long maxSize) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return static_cast<long long>(vqbluetoothsocket->writeData(data, static_cast<qint64>(maxSize)));
    }
    return {};
}

void QBluetoothSocket_ConnectToService22(QBluetoothSocket* self, const QBluetoothServiceInfo* service, int openMode) {
    self->connectToService(*service, static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

void QBluetoothSocket_ConnectToService32(QBluetoothSocket* self, const QBluetoothAddress* address, const QBluetoothUuid* uuid, int openMode) {
    self->connectToService(*address, *uuid, static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

void QBluetoothSocket_ConnectToService33(QBluetoothSocket* self, const QBluetoothAddress* address, uint16_t port, int openMode) {
    self->connectToService(*address, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

void QBluetoothSocket_ConnectToService34(QBluetoothSocket* self, const QBluetoothAddress* address, int uuid, int mode) {
    self->connectToService(*address, static_cast<QBluetoothUuid::ServiceClassUuid>(uuid), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode));
}

bool QBluetoothSocket_SetSocketDescriptor3(QBluetoothSocket* self, int socketDescriptor, int socketType, int socketState) {
    return self->setSocketDescriptor(static_cast<int>(socketDescriptor), static_cast<QBluetoothServiceInfo::Protocol>(socketType), static_cast<QBluetoothSocket::SocketState>(socketState));
}

bool QBluetoothSocket_SetSocketDescriptor4(QBluetoothSocket* self, int socketDescriptor, int socketType, int socketState, int openMode) {
    return self->setSocketDescriptor(static_cast<int>(socketDescriptor), static_cast<QBluetoothServiceInfo::Protocol>(socketType), static_cast<QBluetoothSocket::SocketState>(socketState), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

// Base class handler implementation
QMetaObject* QBluetoothSocket_SuperMetaObject(const QBluetoothSocket* self) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_MetaObject_IsBase(true);
        return (QMetaObject*)vqbluetoothsocket->metaObject();
    } else {
        return (QMetaObject*)self->QBluetoothSocket::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnMetaObject(const QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_MetaObject_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QBluetoothSocket_SuperMetacast(QBluetoothSocket* self, const char* param1) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Metacast_IsBase(true);
        return vqbluetoothsocket->qt_metacast(param1);
    } else {
        return self->QBluetoothSocket::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnMetacast(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Metacast_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QBluetoothSocket_SuperMetacall(QBluetoothSocket* self, int param1, int param2, void** param3) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Metacall_IsBase(true);
        return vqbluetoothsocket->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QBluetoothSocket::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnMetacall(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Metacall_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QBluetoothSocket_SuperClose(QBluetoothSocket* self) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Close_IsBase(true);
        vqbluetoothsocket->close();
    } else {
        self->QBluetoothSocket::close();
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnClose(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Close_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_Close_Callback>(slot));
    }
}

// Base class handler implementation
bool QBluetoothSocket_SuperIsSequential(const QBluetoothSocket* self) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_IsSequential_IsBase(true);
        return vqbluetoothsocket->isSequential();
    } else {
        return self->QBluetoothSocket::isSequential();
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnIsSequential(const QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_IsSequential_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_IsSequential_Callback>(slot));
    }
}

// Base class handler implementation
long long QBluetoothSocket_SuperBytesAvailable(const QBluetoothSocket* self) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_BytesAvailable_IsBase(true);
        return static_cast<long long>(vqbluetoothsocket->bytesAvailable());
    } else {
        return static_cast<long long>(self->QBluetoothSocket::bytesAvailable());
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnBytesAvailable(const QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_BytesAvailable_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_BytesAvailable_Callback>(slot));
    }
}

// Base class handler implementation
long long QBluetoothSocket_SuperBytesToWrite(const QBluetoothSocket* self) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_BytesToWrite_IsBase(true);
        return static_cast<long long>(vqbluetoothsocket->bytesToWrite());
    } else {
        return static_cast<long long>(self->QBluetoothSocket::bytesToWrite());
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnBytesToWrite(const QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_BytesToWrite_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_BytesToWrite_Callback>(slot));
    }
}

// Base class handler implementation
bool QBluetoothSocket_SuperCanReadLine(const QBluetoothSocket* self) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_CanReadLine_IsBase(true);
        return vqbluetoothsocket->canReadLine();
    } else {
        return self->QBluetoothSocket::canReadLine();
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnCanReadLine(const QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_CanReadLine_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_CanReadLine_Callback>(slot));
    }
}

// Base class handler implementation
long long QBluetoothSocket_SuperReadData(QBluetoothSocket* self, char* data, long long maxSize) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_ReadData_IsBase(true);
        return static_cast<long long>(vqbluetoothsocket->readData(data, static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQBluetoothSocket*)self)->readData(data, static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnReadData(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_ReadData_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_ReadData_Callback>(slot));
    }
}

// Base class handler implementation
long long QBluetoothSocket_SuperWriteData(QBluetoothSocket* self, const char* data, long long maxSize) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_WriteData_IsBase(true);
        return static_cast<long long>(vqbluetoothsocket->writeData(data, static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQBluetoothSocket*)self)->writeData(data, static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnWriteData(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_WriteData_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_WriteData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothSocket_Open(QBluetoothSocket* self, int mode) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return vqbluetoothsocket->open(static_cast<QIODeviceBase::OpenMode>(mode));
    } else {
        return self->QBluetoothSocket::open(static_cast<QIODeviceBase::OpenMode>(mode));
    }
}

// Base class handler implementation
bool QBluetoothSocket_SuperOpen(QBluetoothSocket* self, int mode) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Open_IsBase(true);
        return vqbluetoothsocket->open(static_cast<QIODeviceBase::OpenMode>(mode));
    } else {
        return self->QBluetoothSocket::open(static_cast<QIODeviceBase::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnOpen(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Open_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_Open_Callback>(slot));
    }
}

// Derived class handler implementation
long long QBluetoothSocket_Pos(const QBluetoothSocket* self) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return static_cast<long long>(vqbluetoothsocket->pos());
    } else {
        return static_cast<long long>(self->QBluetoothSocket::pos());
    }
}

// Base class handler implementation
long long QBluetoothSocket_SuperPos(const QBluetoothSocket* self) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Pos_IsBase(true);
        return static_cast<long long>(vqbluetoothsocket->pos());
    } else {
        return static_cast<long long>(self->QBluetoothSocket::pos());
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnPos(const QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Pos_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_Pos_Callback>(slot));
    }
}

// Derived class handler implementation
long long QBluetoothSocket_Size(const QBluetoothSocket* self) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return static_cast<long long>(vqbluetoothsocket->size());
    } else {
        return static_cast<long long>(self->QBluetoothSocket::size());
    }
}

// Base class handler implementation
long long QBluetoothSocket_SuperSize(const QBluetoothSocket* self) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Size_IsBase(true);
        return static_cast<long long>(vqbluetoothsocket->size());
    } else {
        return static_cast<long long>(self->QBluetoothSocket::size());
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnSize(const QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Size_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothSocket_Seek(QBluetoothSocket* self, long long pos) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return vqbluetoothsocket->seek(static_cast<qint64>(pos));
    } else {
        return self->QBluetoothSocket::seek(static_cast<qint64>(pos));
    }
}

// Base class handler implementation
bool QBluetoothSocket_SuperSeek(QBluetoothSocket* self, long long pos) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Seek_IsBase(true);
        return vqbluetoothsocket->seek(static_cast<qint64>(pos));
    } else {
        return self->QBluetoothSocket::seek(static_cast<qint64>(pos));
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnSeek(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Seek_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_Seek_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothSocket_AtEnd(const QBluetoothSocket* self) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return vqbluetoothsocket->atEnd();
    } else {
        return self->QBluetoothSocket::atEnd();
    }
}

// Base class handler implementation
bool QBluetoothSocket_SuperAtEnd(const QBluetoothSocket* self) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_AtEnd_IsBase(true);
        return vqbluetoothsocket->atEnd();
    } else {
        return self->QBluetoothSocket::atEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnAtEnd(const QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_AtEnd_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_AtEnd_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothSocket_Reset(QBluetoothSocket* self) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return vqbluetoothsocket->reset();
    } else {
        return self->QBluetoothSocket::reset();
    }
}

// Base class handler implementation
bool QBluetoothSocket_SuperReset(QBluetoothSocket* self) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Reset_IsBase(true);
        return vqbluetoothsocket->reset();
    } else {
        return self->QBluetoothSocket::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnReset(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Reset_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothSocket_WaitForReadyRead(QBluetoothSocket* self, int msecs) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return vqbluetoothsocket->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->QBluetoothSocket::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QBluetoothSocket_SuperWaitForReadyRead(QBluetoothSocket* self, int msecs) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_WaitForReadyRead_IsBase(true);
        return vqbluetoothsocket->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->QBluetoothSocket::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnWaitForReadyRead(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_WaitForReadyRead_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_WaitForReadyRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothSocket_WaitForBytesWritten(QBluetoothSocket* self, int msecs) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return vqbluetoothsocket->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->QBluetoothSocket::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QBluetoothSocket_SuperWaitForBytesWritten(QBluetoothSocket* self, int msecs) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_WaitForBytesWritten_IsBase(true);
        return vqbluetoothsocket->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->QBluetoothSocket::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnWaitForBytesWritten(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_WaitForBytesWritten_Callback>(slot));
    }
}

// Derived class handler implementation
long long QBluetoothSocket_ReadLineData(QBluetoothSocket* self, char* data, long long maxlen) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return static_cast<long long>(vqbluetoothsocket->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQBluetoothSocket*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QBluetoothSocket_SuperReadLineData(QBluetoothSocket* self, char* data, long long maxlen) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_ReadLineData_IsBase(true);
        return static_cast<long long>(vqbluetoothsocket->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQBluetoothSocket*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnReadLineData(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_ReadLineData_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_ReadLineData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QBluetoothSocket_SkipData(QBluetoothSocket* self, long long maxSize) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return static_cast<long long>(vqbluetoothsocket->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQBluetoothSocket*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Base class handler implementation
long long QBluetoothSocket_SuperSkipData(QBluetoothSocket* self, long long maxSize) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_SkipData_IsBase(true);
        return static_cast<long long>(vqbluetoothsocket->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQBluetoothSocket*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnSkipData(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_SkipData_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_SkipData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothSocket_Event(QBluetoothSocket* self, QEvent* event) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return vqbluetoothsocket->event(event);
    } else {
        return self->QBluetoothSocket::event(event);
    }
}

// Base class handler implementation
bool QBluetoothSocket_SuperEvent(QBluetoothSocket* self, QEvent* event) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Event_IsBase(true);
        return vqbluetoothsocket->event(event);
    } else {
        return self->QBluetoothSocket::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnEvent(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Event_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothSocket_EventFilter(QBluetoothSocket* self, QObject* watched, QEvent* event) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return vqbluetoothsocket->eventFilter(watched, event);
    } else {
        return self->QBluetoothSocket::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QBluetoothSocket_SuperEventFilter(QBluetoothSocket* self, QObject* watched, QEvent* event) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_EventFilter_IsBase(true);
        return vqbluetoothsocket->eventFilter(watched, event);
    } else {
        return self->QBluetoothSocket::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnEventFilter(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_EventFilter_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothSocket_TimerEvent(QBluetoothSocket* self, QTimerEvent* event) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->timerEvent(event);
    } else {
        ((VirtualQBluetoothSocket*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QBluetoothSocket_SuperTimerEvent(QBluetoothSocket* self, QTimerEvent* event) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_TimerEvent_IsBase(true);
        vqbluetoothsocket->timerEvent(event);
    } else {
        ((VirtualQBluetoothSocket*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnTimerEvent(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_TimerEvent_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothSocket_ChildEvent(QBluetoothSocket* self, QChildEvent* event) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->childEvent(event);
    } else {
        ((VirtualQBluetoothSocket*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QBluetoothSocket_SuperChildEvent(QBluetoothSocket* self, QChildEvent* event) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_ChildEvent_IsBase(true);
        vqbluetoothsocket->childEvent(event);
    } else {
        ((VirtualQBluetoothSocket*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnChildEvent(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_ChildEvent_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothSocket_CustomEvent(QBluetoothSocket* self, QEvent* event) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->customEvent(event);
    } else {
        ((VirtualQBluetoothSocket*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QBluetoothSocket_SuperCustomEvent(QBluetoothSocket* self, QEvent* event) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_CustomEvent_IsBase(true);
        vqbluetoothsocket->customEvent(event);
    } else {
        ((VirtualQBluetoothSocket*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnCustomEvent(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_CustomEvent_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothSocket_ConnectNotify(QBluetoothSocket* self, const QMetaMethod* signal) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->connectNotify(*signal);
    } else {
        ((VirtualQBluetoothSocket*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QBluetoothSocket_SuperConnectNotify(QBluetoothSocket* self, const QMetaMethod* signal) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_ConnectNotify_IsBase(true);
        vqbluetoothsocket->connectNotify(*signal);
    } else {
        ((VirtualQBluetoothSocket*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnConnectNotify(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_ConnectNotify_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothSocket_DisconnectNotify(QBluetoothSocket* self, const QMetaMethod* signal) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->disconnectNotify(*signal);
    } else {
        ((VirtualQBluetoothSocket*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QBluetoothSocket_SuperDisconnectNotify(QBluetoothSocket* self, const QMetaMethod* signal) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_DisconnectNotify_IsBase(true);
        vqbluetoothsocket->disconnectNotify(*signal);
    } else {
        ((VirtualQBluetoothSocket*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnDisconnectNotify(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_DisconnectNotify_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothSocket_SetSocketState(QBluetoothSocket* self, int state) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setSocketState(static_cast<QBluetoothSocket::SocketState>(state));
    } else {
        ((VirtualQBluetoothSocket*)self)->setSocketState(static_cast<QBluetoothSocket::SocketState>(state));
    }
}

// Base class handler implementation
void QBluetoothSocket_SuperSetSocketState(QBluetoothSocket* self, int state) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_SetSocketState_IsBase(true);
        vqbluetoothsocket->setSocketState(static_cast<QBluetoothSocket::SocketState>(state));
    } else {
        ((VirtualQBluetoothSocket*)self)->setSocketState(static_cast<QBluetoothSocket::SocketState>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnSetSocketState(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_SetSocketState_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_SetSocketState_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothSocket_SetSocketError(QBluetoothSocket* self, int errorVal) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setSocketError(static_cast<QBluetoothSocket::SocketError>(errorVal));
    } else {
        ((VirtualQBluetoothSocket*)self)->setSocketError(static_cast<QBluetoothSocket::SocketError>(errorVal));
    }
}

// Base class handler implementation
void QBluetoothSocket_SuperSetSocketError(QBluetoothSocket* self, int errorVal) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_SetSocketError_IsBase(true);
        vqbluetoothsocket->setSocketError(static_cast<QBluetoothSocket::SocketError>(errorVal));
    } else {
        ((VirtualQBluetoothSocket*)self)->setSocketError(static_cast<QBluetoothSocket::SocketError>(errorVal));
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnSetSocketError(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_SetSocketError_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_SetSocketError_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothSocket_DoDeviceDiscovery(QBluetoothSocket* self, const QBluetoothServiceInfo* service, int openMode) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->doDeviceDiscovery(*service, static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
    } else {
        ((VirtualQBluetoothSocket*)self)->doDeviceDiscovery(*service, static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
    }
}

// Base class handler implementation
void QBluetoothSocket_SuperDoDeviceDiscovery(QBluetoothSocket* self, const QBluetoothServiceInfo* service, int openMode) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_DoDeviceDiscovery_IsBase(true);
        vqbluetoothsocket->doDeviceDiscovery(*service, static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
    } else {
        ((VirtualQBluetoothSocket*)self)->doDeviceDiscovery(*service, static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnDoDeviceDiscovery(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_DoDeviceDiscovery_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_DoDeviceDiscovery_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothSocket_SetOpenMode(QBluetoothSocket* self, int openMode) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualQBluetoothSocket*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
void QBluetoothSocket_SuperSetOpenMode(QBluetoothSocket* self, int openMode) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_SetOpenMode_IsBase(true);
        vqbluetoothsocket->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualQBluetoothSocket*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnSetOpenMode(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_SetOpenMode_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_SetOpenMode_Callback>(slot));
    }
}

// Derived class handler implementation
void QBluetoothSocket_SetErrorString(QBluetoothSocket* self, const libqt_string errorString) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setErrorString(errorString_QString);
    } else {
        ((VirtualQBluetoothSocket*)self)->setErrorString(errorString_QString);
    }
}

// Base class handler implementation
void QBluetoothSocket_SuperSetErrorString(QBluetoothSocket* self, const libqt_string errorString) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_SetErrorString_IsBase(true);
        vqbluetoothsocket->setErrorString(errorString_QString);
    } else {
        ((VirtualQBluetoothSocket*)self)->setErrorString(errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnSetErrorString(QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_SetErrorString_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QBluetoothSocket_Sender(const QBluetoothSocket* self) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return vqbluetoothsocket->sender();
    } else {
        return ((VirtualQBluetoothSocket*)self)->sender();
    }
}

// Base class handler implementation
QObject* QBluetoothSocket_SuperSender(const QBluetoothSocket* self) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Sender_IsBase(true);
        return vqbluetoothsocket->sender();
    } else {
        return ((VirtualQBluetoothSocket*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnSender(const QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Sender_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QBluetoothSocket_SenderSignalIndex(const QBluetoothSocket* self) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return vqbluetoothsocket->senderSignalIndex();
    } else {
        return ((VirtualQBluetoothSocket*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QBluetoothSocket_SuperSenderSignalIndex(const QBluetoothSocket* self) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_SenderSignalIndex_IsBase(true);
        return vqbluetoothsocket->senderSignalIndex();
    } else {
        return ((VirtualQBluetoothSocket*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnSenderSignalIndex(const QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_SenderSignalIndex_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QBluetoothSocket_Receivers(const QBluetoothSocket* self, const char* signal) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return vqbluetoothsocket->receivers(signal);
    } else {
        return ((VirtualQBluetoothSocket*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QBluetoothSocket_SuperReceivers(const QBluetoothSocket* self, const char* signal) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Receivers_IsBase(true);
        return vqbluetoothsocket->receivers(signal);
    } else {
        return ((VirtualQBluetoothSocket*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnReceivers(const QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_Receivers_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBluetoothSocket_IsSignalConnected(const QBluetoothSocket* self, const QMetaMethod* signal) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        return vqbluetoothsocket->isSignalConnected(*signal);
    } else {
        return ((VirtualQBluetoothSocket*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QBluetoothSocket_SuperIsSignalConnected(const QBluetoothSocket* self, const QMetaMethod* signal) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_IsSignalConnected_IsBase(true);
        return vqbluetoothsocket->isSignalConnected(*signal);
    } else {
        return ((VirtualQBluetoothSocket*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnIsSignalConnected(const QBluetoothSocket* self, intptr_t slot) {
    auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self));
    if (vqbluetoothsocket && vqbluetoothsocket->isVirtualQBluetoothSocket) {
        vqbluetoothsocket->setQBluetoothSocket_IsSignalConnected_Callback(reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_IsSignalConnected_Callback>(slot));
    }
}

void QBluetoothSocket_Delete(QBluetoothSocket* self) {
    delete self;
}
