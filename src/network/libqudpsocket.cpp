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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QUdpSocket_Tr(const char* s) {
    auto _ret = QUdpSocket::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QUdpSocket_Bind(QUdpSocket* self, int addr) {
    return self->bind(static_cast<QHostAddress::SpecialAddress>(addr));
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

long long QUdpSocket_WriteDatagram2(QUdpSocket* self, const char* data, long long len, const QHostAddress* host, uint16_t port) {
    return static_cast<long long>(self->writeDatagram(data, static_cast<qint64>(len), *host, static_cast<quint16>(port)));
}

long long QUdpSocket_WriteDatagram3(QUdpSocket* self, const libqt_string datagram, const QHostAddress* host, uint16_t port) {
    QByteArray datagram_QByteArray(datagram.data, datagram.len);
    return static_cast<long long>(self->writeDatagram(datagram_QByteArray, *host, static_cast<quint16>(port)));
}

libqt_string QUdpSocket_Tr2(const char* s, const char* c) {
    auto _ret = QUdpSocket::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QUdpSocket_Tr3(const char* s, const char* c, int n) {
    auto _ret = QUdpSocket::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

// Base class handler implementation
QMetaObject* QUdpSocket_SuperMetaObject(const QUdpSocket* self) {
    return (QMetaObject*)self->QUdpSocket::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnMetaObject(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self)))
        vqudpsocket->qudpsocket_metaobject_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QUdpSocket_SuperMetacast(QUdpSocket* self, const char* param1) {
    return self->QUdpSocket::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnMetacast(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_metacast_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Metacast_Callback>(slot);
}

// Base class handler implementation
int QUdpSocket_SuperMetacall(QUdpSocket* self, int param1, int param2, void** param3) {
    return self->QUdpSocket::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnMetacall(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_metacall_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Metacall_Callback>(slot);
}

// Derived class handler implementation
void QUdpSocket_Resume(QUdpSocket* self) {
    self->resume();
}

// Base class handler implementation
void QUdpSocket_SuperResume(QUdpSocket* self) {
    self->QUdpSocket::resume();
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnResume(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_resume_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Resume_Callback>(slot);
}

// Derived class handler implementation
void QUdpSocket_ConnectToHost(QUdpSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    self->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

// Base class handler implementation
void QUdpSocket_SuperConnectToHost(QUdpSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    self->QUdpSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnConnectToHost(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_connecttohost_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_ConnectToHost_Callback>(slot);
}

// Derived class handler implementation
void QUdpSocket_DisconnectFromHost(QUdpSocket* self) {
    self->disconnectFromHost();
}

// Base class handler implementation
void QUdpSocket_SuperDisconnectFromHost(QUdpSocket* self) {
    self->QUdpSocket::disconnectFromHost();
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnDisconnectFromHost(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_disconnectfromhost_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_DisconnectFromHost_Callback>(slot);
}

// Derived class handler implementation
long long QUdpSocket_BytesAvailable(const QUdpSocket* self) {
    return static_cast<long long>(self->bytesAvailable());
}

// Base class handler implementation
long long QUdpSocket_SuperBytesAvailable(const QUdpSocket* self) {
    return static_cast<long long>(self->QUdpSocket::bytesAvailable());
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnBytesAvailable(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self)))
        vqudpsocket->qudpsocket_bytesavailable_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_BytesAvailable_Callback>(slot);
}

// Derived class handler implementation
long long QUdpSocket_BytesToWrite(const QUdpSocket* self) {
    return static_cast<long long>(self->bytesToWrite());
}

// Base class handler implementation
long long QUdpSocket_SuperBytesToWrite(const QUdpSocket* self) {
    return static_cast<long long>(self->QUdpSocket::bytesToWrite());
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnBytesToWrite(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self)))
        vqudpsocket->qudpsocket_bytestowrite_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_BytesToWrite_Callback>(slot);
}

// Derived class handler implementation
void QUdpSocket_SetReadBufferSize(QUdpSocket* self, long long size) {
    self->setReadBufferSize(static_cast<qint64>(size));
}

// Base class handler implementation
void QUdpSocket_SuperSetReadBufferSize(QUdpSocket* self, long long size) {
    self->QUdpSocket::setReadBufferSize(static_cast<qint64>(size));
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSetReadBufferSize(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_setreadbuffersize_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SetReadBufferSize_Callback>(slot);
}

// Derived class handler implementation
intptr_t QUdpSocket_SocketDescriptor(const QUdpSocket* self) {
    qintptr _ret = self->socketDescriptor();
    return (intptr_t)(_ret);
}

// Base class handler implementation
intptr_t QUdpSocket_SuperSocketDescriptor(const QUdpSocket* self) {
    qintptr _ret = self->QUdpSocket::socketDescriptor();
    return (intptr_t)(_ret);
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSocketDescriptor(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self)))
        vqudpsocket->qudpsocket_socketdescriptor_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SocketDescriptor_Callback>(slot);
}

// Derived class handler implementation
bool QUdpSocket_SetSocketDescriptor(QUdpSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

// Base class handler implementation
bool QUdpSocket_SuperSetSocketDescriptor(QUdpSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    return self->QUdpSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSetSocketDescriptor(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_setsocketdescriptor_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SetSocketDescriptor_Callback>(slot);
}

// Derived class handler implementation
void QUdpSocket_SetSocketOption(QUdpSocket* self, int option, const QVariant* value) {
    self->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}

// Base class handler implementation
void QUdpSocket_SuperSetSocketOption(QUdpSocket* self, int option, const QVariant* value) {
    self->QUdpSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSetSocketOption(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_setsocketoption_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SetSocketOption_Callback>(slot);
}

// Derived class handler implementation
QVariant* QUdpSocket_SocketOption(QUdpSocket* self, int option) {
    return new QVariant(self->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}

// Base class handler implementation
QVariant* QUdpSocket_SuperSocketOption(QUdpSocket* self, int option) {
    return new QVariant(self->QUdpSocket::socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSocketOption(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_socketoption_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SocketOption_Callback>(slot);
}

// Derived class handler implementation
void QUdpSocket_Close(QUdpSocket* self) {
    self->close();
}

// Base class handler implementation
void QUdpSocket_SuperClose(QUdpSocket* self) {
    self->QUdpSocket::close();
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnClose(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_close_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Close_Callback>(slot);
}

// Derived class handler implementation
bool QUdpSocket_IsSequential(const QUdpSocket* self) {
    return self->isSequential();
}

// Base class handler implementation
bool QUdpSocket_SuperIsSequential(const QUdpSocket* self) {
    return self->QUdpSocket::isSequential();
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnIsSequential(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self)))
        vqudpsocket->qudpsocket_issequential_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_IsSequential_Callback>(slot);
}

// Derived class handler implementation
bool QUdpSocket_WaitForConnected(QUdpSocket* self, int msecs) {
    return self->waitForConnected(static_cast<int>(msecs));
}

// Base class handler implementation
bool QUdpSocket_SuperWaitForConnected(QUdpSocket* self, int msecs) {
    return self->QUdpSocket::waitForConnected(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnWaitForConnected(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_waitforconnected_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_WaitForConnected_Callback>(slot);
}

// Derived class handler implementation
bool QUdpSocket_WaitForReadyRead(QUdpSocket* self, int msecs) {
    return self->waitForReadyRead(static_cast<int>(msecs));
}

// Base class handler implementation
bool QUdpSocket_SuperWaitForReadyRead(QUdpSocket* self, int msecs) {
    return self->QUdpSocket::waitForReadyRead(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnWaitForReadyRead(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_waitforreadyread_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_WaitForReadyRead_Callback>(slot);
}

// Derived class handler implementation
bool QUdpSocket_WaitForBytesWritten(QUdpSocket* self, int msecs) {
    return self->waitForBytesWritten(static_cast<int>(msecs));
}

// Base class handler implementation
bool QUdpSocket_SuperWaitForBytesWritten(QUdpSocket* self, int msecs) {
    return self->QUdpSocket::waitForBytesWritten(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnWaitForBytesWritten(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_waitforbyteswritten_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_WaitForBytesWritten_Callback>(slot);
}

// Derived class handler implementation
bool QUdpSocket_WaitForDisconnected(QUdpSocket* self, int msecs) {
    return self->waitForDisconnected(static_cast<int>(msecs));
}

// Base class handler implementation
bool QUdpSocket_SuperWaitForDisconnected(QUdpSocket* self, int msecs) {
    return self->QUdpSocket::waitForDisconnected(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnWaitForDisconnected(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_waitfordisconnected_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_WaitForDisconnected_Callback>(slot);
}

// Derived class handler implementation
long long QUdpSocket_ReadData(QUdpSocket* self, char* data, long long maxlen) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket) {
        return static_cast<long long>(vqudpsocket->readData(data, static_cast<qint64>(maxlen)));
    } else {
        qFatal("Error: Protected virtual method QUdpSocket::readData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QUdpSocket_SuperReadData(QUdpSocket* self, char* data, long long maxlen) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self)) {
        return static_cast<long long>(vqudpsocket->QUdpSocket::readData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QUdpSocket::readData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnReadData(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_readdata_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_ReadData_Callback>(slot);
}

// Derived class handler implementation
long long QUdpSocket_ReadLineData(QUdpSocket* self, char* data, long long maxlen) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket) {
        return static_cast<long long>(vqudpsocket->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        qFatal("Error: Protected virtual method QUdpSocket::readLineData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QUdpSocket_SuperReadLineData(QUdpSocket* self, char* data, long long maxlen) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self)) {
        return static_cast<long long>(vqudpsocket->QUdpSocket::readLineData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QUdpSocket::readLineData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnReadLineData(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_readlinedata_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_ReadLineData_Callback>(slot);
}

// Derived class handler implementation
long long QUdpSocket_SkipData(QUdpSocket* self, long long maxSize) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket) {
        return static_cast<long long>(vqudpsocket->skipData(static_cast<qint64>(maxSize)));
    } else {
        qFatal("Error: Protected virtual method QUdpSocket::skipData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QUdpSocket_SuperSkipData(QUdpSocket* self, long long maxSize) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self)) {
        return static_cast<long long>(vqudpsocket->QUdpSocket::skipData(static_cast<qint64>(maxSize)));
    } else
        qFatal("Error: Protected virtual method QUdpSocket::skipData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSkipData(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_skipdata_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_SkipData_Callback>(slot);
}

// Derived class handler implementation
long long QUdpSocket_WriteData(QUdpSocket* self, const char* data, long long len) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket) {
        return static_cast<long long>(vqudpsocket->writeData(data, static_cast<qint64>(len)));
    } else {
        qFatal("Error: Protected virtual method QUdpSocket::writeData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QUdpSocket_SuperWriteData(QUdpSocket* self, const char* data, long long len) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self)) {
        return static_cast<long long>(vqudpsocket->QUdpSocket::writeData(data, static_cast<qint64>(len)));
    } else
        qFatal("Error: Protected virtual method QUdpSocket::writeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnWriteData(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_writedata_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_WriteData_Callback>(slot);
}

// Derived class handler implementation
bool QUdpSocket_Open(QUdpSocket* self, int mode) {
    return self->open(static_cast<QIODeviceBase::OpenMode>(mode));
}

// Base class handler implementation
bool QUdpSocket_SuperOpen(QUdpSocket* self, int mode) {
    return self->QUdpSocket::open(static_cast<QIODeviceBase::OpenMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnOpen(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_open_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Open_Callback>(slot);
}

// Derived class handler implementation
long long QUdpSocket_Pos(const QUdpSocket* self) {
    return static_cast<long long>(self->pos());
}

// Base class handler implementation
long long QUdpSocket_SuperPos(const QUdpSocket* self) {
    return static_cast<long long>(self->QUdpSocket::pos());
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnPos(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self)))
        vqudpsocket->qudpsocket_pos_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Pos_Callback>(slot);
}

// Derived class handler implementation
long long QUdpSocket_Size(const QUdpSocket* self) {
    return static_cast<long long>(self->size());
}

// Base class handler implementation
long long QUdpSocket_SuperSize(const QUdpSocket* self) {
    return static_cast<long long>(self->QUdpSocket::size());
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSize(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self)))
        vqudpsocket->qudpsocket_size_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Size_Callback>(slot);
}

// Derived class handler implementation
bool QUdpSocket_Seek(QUdpSocket* self, long long pos) {
    return self->seek(static_cast<qint64>(pos));
}

// Base class handler implementation
bool QUdpSocket_SuperSeek(QUdpSocket* self, long long pos) {
    return self->QUdpSocket::seek(static_cast<qint64>(pos));
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnSeek(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_seek_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Seek_Callback>(slot);
}

// Derived class handler implementation
bool QUdpSocket_AtEnd(const QUdpSocket* self) {
    return self->atEnd();
}

// Base class handler implementation
bool QUdpSocket_SuperAtEnd(const QUdpSocket* self) {
    return self->QUdpSocket::atEnd();
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnAtEnd(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self)))
        vqudpsocket->qudpsocket_atend_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_AtEnd_Callback>(slot);
}

// Derived class handler implementation
bool QUdpSocket_Reset(QUdpSocket* self) {
    return self->reset();
}

// Base class handler implementation
bool QUdpSocket_SuperReset(QUdpSocket* self) {
    return self->QUdpSocket::reset();
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnReset(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_reset_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Reset_Callback>(slot);
}

// Derived class handler implementation
bool QUdpSocket_CanReadLine(const QUdpSocket* self) {
    return self->canReadLine();
}

// Base class handler implementation
bool QUdpSocket_SuperCanReadLine(const QUdpSocket* self) {
    return self->QUdpSocket::canReadLine();
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnCanReadLine(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self)))
        vqudpsocket->qudpsocket_canreadline_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_CanReadLine_Callback>(slot);
}

// Derived class handler implementation
bool QUdpSocket_Event(QUdpSocket* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QUdpSocket_SuperEvent(QUdpSocket* self, QEvent* event) {
    return self->QUdpSocket::event(event);
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnEvent(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_event_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_Event_Callback>(slot);
}

// Derived class handler implementation
bool QUdpSocket_EventFilter(QUdpSocket* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QUdpSocket_SuperEventFilter(QUdpSocket* self, QObject* watched, QEvent* event) {
    return self->QUdpSocket::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnEventFilter(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_eventfilter_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QUdpSocket_TimerEvent(QUdpSocket* self, QTimerEvent* event) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket) {
        vqudpsocket->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUdpSocket::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUdpSocket_SuperTimerEvent(QUdpSocket* self, QTimerEvent* event) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self)) {
        vqudpsocket->QUdpSocket::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QUdpSocket::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnTimerEvent(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_timerevent_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QUdpSocket_ChildEvent(QUdpSocket* self, QChildEvent* event) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket) {
        vqudpsocket->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUdpSocket::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUdpSocket_SuperChildEvent(QUdpSocket* self, QChildEvent* event) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self)) {
        vqudpsocket->QUdpSocket::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QUdpSocket::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnChildEvent(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_childevent_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QUdpSocket_CustomEvent(QUdpSocket* self, QEvent* event) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket) {
        vqudpsocket->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUdpSocket::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUdpSocket_SuperCustomEvent(QUdpSocket* self, QEvent* event) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self)) {
        vqudpsocket->QUdpSocket::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QUdpSocket::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnCustomEvent(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_customevent_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QUdpSocket_ConnectNotify(QUdpSocket* self, const QMetaMethod* signal) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket) {
        vqudpsocket->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QUdpSocket::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QUdpSocket_SuperConnectNotify(QUdpSocket* self, const QMetaMethod* signal) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self)) {
        vqudpsocket->QUdpSocket::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QUdpSocket::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnConnectNotify(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_connectnotify_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QUdpSocket_DisconnectNotify(QUdpSocket* self, const QMetaMethod* signal) {
    auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self);
    if (vqudpsocket) {
        vqudpsocket->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QUdpSocket::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QUdpSocket_SuperDisconnectNotify(QUdpSocket* self, const QMetaMethod* signal) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self)) {
        vqudpsocket->QUdpSocket::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QUdpSocket::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUdpSocket_OnDisconnectNotify(QUdpSocket* self, intptr_t slot) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self))
        vqudpsocket->qudpsocket_disconnectnotify_callback = reinterpret_cast<VirtualQUdpSocket::QUdpSocket_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QUdpSocket_SetSocketState(QUdpSocket* self, int state) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self)) {
        vqudpsocket->VirtualQUdpSocket::setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    } else
        qFatal("Error: Protected method QUdpSocket::setSocketState called without a directly constructed type");
}

// Derived class protected handler implementation
void QUdpSocket_SetSocketError(QUdpSocket* self, int socketError) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self)) {
        vqudpsocket->VirtualQUdpSocket::setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    } else
        qFatal("Error: Protected method QUdpSocket::setSocketError called without a directly constructed type");
}

// Derived class protected handler implementation
void QUdpSocket_SetLocalPort(QUdpSocket* self, uint16_t port) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self)) {
        vqudpsocket->VirtualQUdpSocket::setLocalPort(static_cast<quint16>(port));
    } else
        qFatal("Error: Protected method QUdpSocket::setLocalPort called without a directly constructed type");
}

// Derived class protected handler implementation
void QUdpSocket_SetLocalAddress(QUdpSocket* self, const QHostAddress* address) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self)) {
        vqudpsocket->VirtualQUdpSocket::setLocalAddress(*address);
    } else
        qFatal("Error: Protected method QUdpSocket::setLocalAddress called without a directly constructed type");
}

// Derived class protected handler implementation
void QUdpSocket_SetPeerPort(QUdpSocket* self, uint16_t port) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self)) {
        vqudpsocket->VirtualQUdpSocket::setPeerPort(static_cast<quint16>(port));
    } else
        qFatal("Error: Protected method QUdpSocket::setPeerPort called without a directly constructed type");
}

// Derived class protected handler implementation
void QUdpSocket_SetPeerAddress(QUdpSocket* self, const QHostAddress* address) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self)) {
        vqudpsocket->VirtualQUdpSocket::setPeerAddress(*address);
    } else
        qFatal("Error: Protected method QUdpSocket::setPeerAddress called without a directly constructed type");
}

// Derived class protected handler implementation
void QUdpSocket_SetPeerName(QUdpSocket* self, const libqt_string name) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self)) {
        QString name_QString = QString::fromUtf8(name.data, name.len);
        vqudpsocket->VirtualQUdpSocket::setPeerName(name_QString);
    } else
        qFatal("Error: Protected method QUdpSocket::setPeerName called without a directly constructed type");
}

// Derived class protected handler implementation
void QUdpSocket_SetOpenMode(QUdpSocket* self, int openMode) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self)) {
        vqudpsocket->VirtualQUdpSocket::setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else
        qFatal("Error: Protected method QUdpSocket::setOpenMode called without a directly constructed type");
}

// Derived class protected handler implementation
void QUdpSocket_SetErrorString(QUdpSocket* self, const libqt_string errorString) {
    if (auto* vqudpsocket = dynamic_cast<VirtualQUdpSocket*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqudpsocket->VirtualQUdpSocket::setErrorString(errorString_QString);
    } else
        qFatal("Error: Protected method QUdpSocket::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QUdpSocket_Sender(const QUdpSocket* self) {
    if (auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self))) {
        return vqudpsocket->VirtualQUdpSocket::sender();
    } else
        qFatal("Error: Protected method QUdpSocket::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QUdpSocket_SenderSignalIndex(const QUdpSocket* self) {
    if (auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self))) {
        return vqudpsocket->VirtualQUdpSocket::senderSignalIndex();
    } else
        qFatal("Error: Protected method QUdpSocket::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QUdpSocket_Receivers(const QUdpSocket* self, const char* signal) {
    if (auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self))) {
        return vqudpsocket->VirtualQUdpSocket::receivers(signal);
    } else
        qFatal("Error: Protected method QUdpSocket::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QUdpSocket_IsSignalConnected(const QUdpSocket* self, const QMetaMethod* signal) {
    if (auto* vqudpsocket = const_cast<VirtualQUdpSocket*>(dynamic_cast<const VirtualQUdpSocket*>(self))) {
        return vqudpsocket->VirtualQUdpSocket::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QUdpSocket::isSignalConnected called without a directly constructed type");
}

void QUdpSocket_Delete(QUdpSocket* self) {
    delete self;
}
