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
    return (QMetaObject*)self->metaObject();
}

void* QBluetoothSocket_Metacast(QBluetoothSocket* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBluetoothSocket_Metacall(QBluetoothSocket* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QBluetoothSocket_Tr(const char* s) {
    auto _ret = QBluetoothSocket::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QBluetoothSocket_Abort(QBluetoothSocket* self) {
    self->abort();
}

void QBluetoothSocket_Close(QBluetoothSocket* self) {
    self->close();
}

bool QBluetoothSocket_IsSequential(const QBluetoothSocket* self) {
    return self->isSequential();
}

long long QBluetoothSocket_BytesAvailable(const QBluetoothSocket* self) {
    return static_cast<long long>(self->bytesAvailable());
}

long long QBluetoothSocket_BytesToWrite(const QBluetoothSocket* self) {
    return static_cast<long long>(self->bytesToWrite());
}

bool QBluetoothSocket_CanReadLine(const QBluetoothSocket* self) {
    return self->canReadLine();
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
    auto _ret = self->localName();
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
    auto _ret = self->errorString();
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
    QBluetoothSocket::connect(self,
                              static_cast<void (QBluetoothSocket::*)()>(&QBluetoothSocket::connected),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QBluetoothSocket_Disconnected(QBluetoothSocket* self) {
    self->disconnected();
}

void QBluetoothSocket_Connect_Disconnected(QBluetoothSocket* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothSocket*) = reinterpret_cast<void (*)(QBluetoothSocket*)>(slot);
    QBluetoothSocket::connect(self,
                              static_cast<void (QBluetoothSocket::*)()>(&QBluetoothSocket::disconnected),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QBluetoothSocket_ErrorOccurred(QBluetoothSocket* self, int errorVal) {
    self->errorOccurred(static_cast<QBluetoothSocket::SocketError>(errorVal));
}

void QBluetoothSocket_Connect_ErrorOccurred(QBluetoothSocket* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothSocket*, int) = reinterpret_cast<void (*)(QBluetoothSocket*, int)>(slot);
    QBluetoothSocket::connect(self,
                              static_cast<void (QBluetoothSocket::*)(QBluetoothSocket::SocketError)>(&QBluetoothSocket::errorOccurred),
                              [self, slotFunc](QBluetoothSocket::SocketError errorVal) {
                                  int sigval1 = static_cast<int>(errorVal);
                                  slotFunc(self, sigval1);
                              });
}

void QBluetoothSocket_StateChanged(QBluetoothSocket* self, int state) {
    self->stateChanged(static_cast<QBluetoothSocket::SocketState>(state));
}

void QBluetoothSocket_Connect_StateChanged(QBluetoothSocket* self, intptr_t slot) {
    void (*slotFunc)(QBluetoothSocket*, int) = reinterpret_cast<void (*)(QBluetoothSocket*, int)>(slot);
    QBluetoothSocket::connect(self,
                              static_cast<void (QBluetoothSocket::*)(QBluetoothSocket::SocketState)>(&QBluetoothSocket::stateChanged),
                              [self, slotFunc](QBluetoothSocket::SocketState state) {
                                  int sigval1 = static_cast<int>(state);
                                  slotFunc(self, sigval1);
                              });
}

long long QBluetoothSocket_ReadData(QBluetoothSocket* self, char* data, long long maxSize) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket) {
        return static_cast<long long>(vqbluetoothsocket->readData(data, static_cast<qint64>(maxSize)));
    }
    qFatal("Error: Protected method QBluetoothSocket::readData called without a directly constructed type");
}

long long QBluetoothSocket_WriteData(QBluetoothSocket* self, const char* data, long long maxSize) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket) {
        return static_cast<long long>(vqbluetoothsocket->writeData(data, static_cast<qint64>(maxSize)));
    }
    qFatal("Error: Protected method QBluetoothSocket::writeData called without a directly constructed type");
}

libqt_string QBluetoothSocket_Tr2(const char* s, const char* c) {
    auto _ret = QBluetoothSocket::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBluetoothSocket_Tr3(const char* s, const char* c, int n) {
    auto _ret = QBluetoothSocket::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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
    return (QMetaObject*)self->QBluetoothSocket::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnMetaObject(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self)))
        vqbluetoothsocket->qbluetoothsocket_metaobject_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QBluetoothSocket_SuperMetacast(QBluetoothSocket* self, const char* param1) {
    return self->QBluetoothSocket::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnMetacast(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self))
        vqbluetoothsocket->qbluetoothsocket_metacast_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_Metacast_Callback>(slot);
}

// Base class handler implementation
int QBluetoothSocket_SuperMetacall(QBluetoothSocket* self, int param1, int param2, void** param3) {
    return self->QBluetoothSocket::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnMetacall(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self))
        vqbluetoothsocket->qbluetoothsocket_metacall_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_Metacall_Callback>(slot);
}

// Base class handler implementation
void QBluetoothSocket_SuperClose(QBluetoothSocket* self) {
    self->QBluetoothSocket::close();
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnClose(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self))
        vqbluetoothsocket->qbluetoothsocket_close_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_Close_Callback>(slot);
}

// Base class handler implementation
bool QBluetoothSocket_SuperIsSequential(const QBluetoothSocket* self) {
    return self->QBluetoothSocket::isSequential();
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnIsSequential(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self)))
        vqbluetoothsocket->qbluetoothsocket_issequential_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_IsSequential_Callback>(slot);
}

// Base class handler implementation
long long QBluetoothSocket_SuperBytesAvailable(const QBluetoothSocket* self) {
    return static_cast<long long>(self->QBluetoothSocket::bytesAvailable());
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnBytesAvailable(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self)))
        vqbluetoothsocket->qbluetoothsocket_bytesavailable_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_BytesAvailable_Callback>(slot);
}

// Base class handler implementation
long long QBluetoothSocket_SuperBytesToWrite(const QBluetoothSocket* self) {
    return static_cast<long long>(self->QBluetoothSocket::bytesToWrite());
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnBytesToWrite(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self)))
        vqbluetoothsocket->qbluetoothsocket_bytestowrite_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_BytesToWrite_Callback>(slot);
}

// Base class handler implementation
bool QBluetoothSocket_SuperCanReadLine(const QBluetoothSocket* self) {
    return self->QBluetoothSocket::canReadLine();
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnCanReadLine(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self)))
        vqbluetoothsocket->qbluetoothsocket_canreadline_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_CanReadLine_Callback>(slot);
}

// Base class handler implementation
long long QBluetoothSocket_SuperReadData(QBluetoothSocket* self, char* data, long long maxSize) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self)) {
        return static_cast<long long>(vqbluetoothsocket->QBluetoothSocket::readData(data, static_cast<qint64>(maxSize)));
    } else
        qFatal("Error: Protected virtual method QBluetoothSocket::readData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnReadData(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self))
        vqbluetoothsocket->qbluetoothsocket_readdata_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_ReadData_Callback>(slot);
}

// Base class handler implementation
long long QBluetoothSocket_SuperWriteData(QBluetoothSocket* self, const char* data, long long maxSize) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self)) {
        return static_cast<long long>(vqbluetoothsocket->QBluetoothSocket::writeData(data, static_cast<qint64>(maxSize)));
    } else
        qFatal("Error: Protected virtual method QBluetoothSocket::writeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnWriteData(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self))
        vqbluetoothsocket->qbluetoothsocket_writedata_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_WriteData_Callback>(slot);
}

// Derived class handler implementation
bool QBluetoothSocket_Open(QBluetoothSocket* self, int mode) {
    return self->open(static_cast<QIODeviceBase::OpenMode>(mode));
}

// Base class handler implementation
bool QBluetoothSocket_SuperOpen(QBluetoothSocket* self, int mode) {
    return self->QBluetoothSocket::open(static_cast<QIODeviceBase::OpenMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnOpen(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self))
        vqbluetoothsocket->qbluetoothsocket_open_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_Open_Callback>(slot);
}

// Derived class handler implementation
long long QBluetoothSocket_Pos(const QBluetoothSocket* self) {
    return static_cast<long long>(self->pos());
}

// Base class handler implementation
long long QBluetoothSocket_SuperPos(const QBluetoothSocket* self) {
    return static_cast<long long>(self->QBluetoothSocket::pos());
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnPos(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self)))
        vqbluetoothsocket->qbluetoothsocket_pos_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_Pos_Callback>(slot);
}

// Derived class handler implementation
long long QBluetoothSocket_Size(const QBluetoothSocket* self) {
    return static_cast<long long>(self->size());
}

// Base class handler implementation
long long QBluetoothSocket_SuperSize(const QBluetoothSocket* self) {
    return static_cast<long long>(self->QBluetoothSocket::size());
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnSize(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self)))
        vqbluetoothsocket->qbluetoothsocket_size_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_Size_Callback>(slot);
}

// Derived class handler implementation
bool QBluetoothSocket_Seek(QBluetoothSocket* self, long long pos) {
    return self->seek(static_cast<qint64>(pos));
}

// Base class handler implementation
bool QBluetoothSocket_SuperSeek(QBluetoothSocket* self, long long pos) {
    return self->QBluetoothSocket::seek(static_cast<qint64>(pos));
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnSeek(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self))
        vqbluetoothsocket->qbluetoothsocket_seek_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_Seek_Callback>(slot);
}

// Derived class handler implementation
bool QBluetoothSocket_AtEnd(const QBluetoothSocket* self) {
    return self->atEnd();
}

// Base class handler implementation
bool QBluetoothSocket_SuperAtEnd(const QBluetoothSocket* self) {
    return self->QBluetoothSocket::atEnd();
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnAtEnd(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self)))
        vqbluetoothsocket->qbluetoothsocket_atend_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_AtEnd_Callback>(slot);
}

// Derived class handler implementation
bool QBluetoothSocket_Reset(QBluetoothSocket* self) {
    return self->reset();
}

// Base class handler implementation
bool QBluetoothSocket_SuperReset(QBluetoothSocket* self) {
    return self->QBluetoothSocket::reset();
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnReset(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self))
        vqbluetoothsocket->qbluetoothsocket_reset_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_Reset_Callback>(slot);
}

// Derived class handler implementation
bool QBluetoothSocket_WaitForReadyRead(QBluetoothSocket* self, int msecs) {
    return self->waitForReadyRead(static_cast<int>(msecs));
}

// Base class handler implementation
bool QBluetoothSocket_SuperWaitForReadyRead(QBluetoothSocket* self, int msecs) {
    return self->QBluetoothSocket::waitForReadyRead(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnWaitForReadyRead(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self))
        vqbluetoothsocket->qbluetoothsocket_waitforreadyread_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_WaitForReadyRead_Callback>(slot);
}

// Derived class handler implementation
bool QBluetoothSocket_WaitForBytesWritten(QBluetoothSocket* self, int msecs) {
    return self->waitForBytesWritten(static_cast<int>(msecs));
}

// Base class handler implementation
bool QBluetoothSocket_SuperWaitForBytesWritten(QBluetoothSocket* self, int msecs) {
    return self->QBluetoothSocket::waitForBytesWritten(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnWaitForBytesWritten(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self))
        vqbluetoothsocket->qbluetoothsocket_waitforbyteswritten_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_WaitForBytesWritten_Callback>(slot);
}

// Derived class handler implementation
long long QBluetoothSocket_ReadLineData(QBluetoothSocket* self, char* data, long long maxlen) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket) {
        return static_cast<long long>(vqbluetoothsocket->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        qFatal("Error: Protected virtual method QBluetoothSocket::readLineData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QBluetoothSocket_SuperReadLineData(QBluetoothSocket* self, char* data, long long maxlen) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self)) {
        return static_cast<long long>(vqbluetoothsocket->QBluetoothSocket::readLineData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QBluetoothSocket::readLineData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnReadLineData(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self))
        vqbluetoothsocket->qbluetoothsocket_readlinedata_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_ReadLineData_Callback>(slot);
}

// Derived class handler implementation
long long QBluetoothSocket_SkipData(QBluetoothSocket* self, long long maxSize) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket) {
        return static_cast<long long>(vqbluetoothsocket->skipData(static_cast<qint64>(maxSize)));
    } else {
        qFatal("Error: Protected virtual method QBluetoothSocket::skipData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QBluetoothSocket_SuperSkipData(QBluetoothSocket* self, long long maxSize) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self)) {
        return static_cast<long long>(vqbluetoothsocket->QBluetoothSocket::skipData(static_cast<qint64>(maxSize)));
    } else
        qFatal("Error: Protected virtual method QBluetoothSocket::skipData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnSkipData(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self))
        vqbluetoothsocket->qbluetoothsocket_skipdata_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_SkipData_Callback>(slot);
}

// Derived class handler implementation
bool QBluetoothSocket_Event(QBluetoothSocket* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QBluetoothSocket_SuperEvent(QBluetoothSocket* self, QEvent* event) {
    return self->QBluetoothSocket::event(event);
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnEvent(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self))
        vqbluetoothsocket->qbluetoothsocket_event_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_Event_Callback>(slot);
}

// Derived class handler implementation
bool QBluetoothSocket_EventFilter(QBluetoothSocket* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QBluetoothSocket_SuperEventFilter(QBluetoothSocket* self, QObject* watched, QEvent* event) {
    return self->QBluetoothSocket::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnEventFilter(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self))
        vqbluetoothsocket->qbluetoothsocket_eventfilter_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothSocket_TimerEvent(QBluetoothSocket* self, QTimerEvent* event) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket) {
        vqbluetoothsocket->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBluetoothSocket::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothSocket_SuperTimerEvent(QBluetoothSocket* self, QTimerEvent* event) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self)) {
        vqbluetoothsocket->QBluetoothSocket::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QBluetoothSocket::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnTimerEvent(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self))
        vqbluetoothsocket->qbluetoothsocket_timerevent_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothSocket_ChildEvent(QBluetoothSocket* self, QChildEvent* event) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket) {
        vqbluetoothsocket->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBluetoothSocket::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothSocket_SuperChildEvent(QBluetoothSocket* self, QChildEvent* event) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self)) {
        vqbluetoothsocket->QBluetoothSocket::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QBluetoothSocket::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnChildEvent(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self))
        vqbluetoothsocket->qbluetoothsocket_childevent_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothSocket_CustomEvent(QBluetoothSocket* self, QEvent* event) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket) {
        vqbluetoothsocket->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBluetoothSocket::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothSocket_SuperCustomEvent(QBluetoothSocket* self, QEvent* event) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self)) {
        vqbluetoothsocket->QBluetoothSocket::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QBluetoothSocket::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnCustomEvent(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self))
        vqbluetoothsocket->qbluetoothsocket_customevent_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothSocket_ConnectNotify(QBluetoothSocket* self, const QMetaMethod* signal) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket) {
        vqbluetoothsocket->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBluetoothSocket::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothSocket_SuperConnectNotify(QBluetoothSocket* self, const QMetaMethod* signal) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self)) {
        vqbluetoothsocket->QBluetoothSocket::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBluetoothSocket::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnConnectNotify(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self))
        vqbluetoothsocket->qbluetoothsocket_connectnotify_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QBluetoothSocket_DisconnectNotify(QBluetoothSocket* self, const QMetaMethod* signal) {
    auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self);
    if (vqbluetoothsocket) {
        vqbluetoothsocket->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBluetoothSocket::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBluetoothSocket_SuperDisconnectNotify(QBluetoothSocket* self, const QMetaMethod* signal) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self)) {
        vqbluetoothsocket->QBluetoothSocket::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBluetoothSocket::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBluetoothSocket_OnDisconnectNotify(QBluetoothSocket* self, intptr_t slot) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self))
        vqbluetoothsocket->qbluetoothsocket_disconnectnotify_callback = reinterpret_cast<VirtualQBluetoothSocket::QBluetoothSocket_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QBluetoothSocket_SetSocketState(QBluetoothSocket* self, int state) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self)) {
        vqbluetoothsocket->VirtualQBluetoothSocket::setSocketState(static_cast<QBluetoothSocket::SocketState>(state));
    } else
        qFatal("Error: Protected method QBluetoothSocket::setSocketState called without a directly constructed type");
}

// Derived class protected handler implementation
void QBluetoothSocket_SetSocketError(QBluetoothSocket* self, int errorVal) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self)) {
        vqbluetoothsocket->VirtualQBluetoothSocket::setSocketError(static_cast<QBluetoothSocket::SocketError>(errorVal));
    } else
        qFatal("Error: Protected method QBluetoothSocket::setSocketError called without a directly constructed type");
}

// Derived class protected handler implementation
void QBluetoothSocket_DoDeviceDiscovery(QBluetoothSocket* self, const QBluetoothServiceInfo* service, int openMode) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self)) {
        vqbluetoothsocket->VirtualQBluetoothSocket::doDeviceDiscovery(*service, static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
    } else
        qFatal("Error: Protected method QBluetoothSocket::doDeviceDiscovery called without a directly constructed type");
}

// Derived class protected handler implementation
void QBluetoothSocket_SetOpenMode(QBluetoothSocket* self, int openMode) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self)) {
        vqbluetoothsocket->VirtualQBluetoothSocket::setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else
        qFatal("Error: Protected method QBluetoothSocket::setOpenMode called without a directly constructed type");
}

// Derived class protected handler implementation
void QBluetoothSocket_SetErrorString(QBluetoothSocket* self, const libqt_string errorString) {
    if (auto* vqbluetoothsocket = dynamic_cast<VirtualQBluetoothSocket*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqbluetoothsocket->VirtualQBluetoothSocket::setErrorString(errorString_QString);
    } else
        qFatal("Error: Protected method QBluetoothSocket::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QBluetoothSocket_Sender(const QBluetoothSocket* self) {
    if (auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self))) {
        return vqbluetoothsocket->VirtualQBluetoothSocket::sender();
    } else
        qFatal("Error: Protected method QBluetoothSocket::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QBluetoothSocket_SenderSignalIndex(const QBluetoothSocket* self) {
    if (auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self))) {
        return vqbluetoothsocket->VirtualQBluetoothSocket::senderSignalIndex();
    } else
        qFatal("Error: Protected method QBluetoothSocket::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QBluetoothSocket_Receivers(const QBluetoothSocket* self, const char* signal) {
    if (auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self))) {
        return vqbluetoothsocket->VirtualQBluetoothSocket::receivers(signal);
    } else
        qFatal("Error: Protected method QBluetoothSocket::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QBluetoothSocket_IsSignalConnected(const QBluetoothSocket* self, const QMetaMethod* signal) {
    if (auto* vqbluetoothsocket = const_cast<VirtualQBluetoothSocket*>(dynamic_cast<const VirtualQBluetoothSocket*>(self))) {
        return vqbluetoothsocket->VirtualQBluetoothSocket::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QBluetoothSocket::isSignalConnected called without a directly constructed type");
}

void QBluetoothSocket_Delete(QBluetoothSocket* self) {
    delete self;
}
