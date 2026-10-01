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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTcpSocket_Tr(const char* s) {
    auto _ret = QTcpSocket::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QTcpSocket_Bind(QTcpSocket* self, int addr) {
    return self->bind(static_cast<QHostAddress::SpecialAddress>(addr));
}

libqt_string QTcpSocket_Tr2(const char* s, const char* c) {
    auto _ret = QTcpSocket::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTcpSocket_Tr3(const char* s, const char* c, int n) {
    auto _ret = QTcpSocket::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

// Base class handler implementation
QMetaObject* QTcpSocket_SuperMetaObject(const QTcpSocket* self) {
    return (QMetaObject*)self->QTcpSocket::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnMetaObject(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self)))
        vqtcpsocket->qtcpsocket_metaobject_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTcpSocket_SuperMetacast(QTcpSocket* self, const char* param1) {
    return self->QTcpSocket::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnMetacast(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_metacast_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTcpSocket_SuperMetacall(QTcpSocket* self, int param1, int param2, void** param3) {
    return self->QTcpSocket::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnMetacall(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_metacall_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Metacall_Callback>(slot);
}

// Derived class handler implementation
void QTcpSocket_Resume(QTcpSocket* self) {
    self->resume();
}

// Base class handler implementation
void QTcpSocket_SuperResume(QTcpSocket* self) {
    self->QTcpSocket::resume();
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnResume(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_resume_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Resume_Callback>(slot);
}

// Derived class handler implementation
void QTcpSocket_ConnectToHost(QTcpSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    self->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

// Base class handler implementation
void QTcpSocket_SuperConnectToHost(QTcpSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    self->QTcpSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnConnectToHost(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_connecttohost_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_ConnectToHost_Callback>(slot);
}

// Derived class handler implementation
void QTcpSocket_DisconnectFromHost(QTcpSocket* self) {
    self->disconnectFromHost();
}

// Base class handler implementation
void QTcpSocket_SuperDisconnectFromHost(QTcpSocket* self) {
    self->QTcpSocket::disconnectFromHost();
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnDisconnectFromHost(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_disconnectfromhost_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_DisconnectFromHost_Callback>(slot);
}

// Derived class handler implementation
long long QTcpSocket_BytesAvailable(const QTcpSocket* self) {
    return static_cast<long long>(self->bytesAvailable());
}

// Base class handler implementation
long long QTcpSocket_SuperBytesAvailable(const QTcpSocket* self) {
    return static_cast<long long>(self->QTcpSocket::bytesAvailable());
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnBytesAvailable(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self)))
        vqtcpsocket->qtcpsocket_bytesavailable_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_BytesAvailable_Callback>(slot);
}

// Derived class handler implementation
long long QTcpSocket_BytesToWrite(const QTcpSocket* self) {
    return static_cast<long long>(self->bytesToWrite());
}

// Base class handler implementation
long long QTcpSocket_SuperBytesToWrite(const QTcpSocket* self) {
    return static_cast<long long>(self->QTcpSocket::bytesToWrite());
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnBytesToWrite(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self)))
        vqtcpsocket->qtcpsocket_bytestowrite_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_BytesToWrite_Callback>(slot);
}

// Derived class handler implementation
void QTcpSocket_SetReadBufferSize(QTcpSocket* self, long long size) {
    self->setReadBufferSize(static_cast<qint64>(size));
}

// Base class handler implementation
void QTcpSocket_SuperSetReadBufferSize(QTcpSocket* self, long long size) {
    self->QTcpSocket::setReadBufferSize(static_cast<qint64>(size));
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSetReadBufferSize(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_setreadbuffersize_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SetReadBufferSize_Callback>(slot);
}

// Derived class handler implementation
intptr_t QTcpSocket_SocketDescriptor(const QTcpSocket* self) {
    qintptr _ret = self->socketDescriptor();
    return (intptr_t)(_ret);
}

// Base class handler implementation
intptr_t QTcpSocket_SuperSocketDescriptor(const QTcpSocket* self) {
    qintptr _ret = self->QTcpSocket::socketDescriptor();
    return (intptr_t)(_ret);
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSocketDescriptor(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self)))
        vqtcpsocket->qtcpsocket_socketdescriptor_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SocketDescriptor_Callback>(slot);
}

// Derived class handler implementation
bool QTcpSocket_SetSocketDescriptor(QTcpSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

// Base class handler implementation
bool QTcpSocket_SuperSetSocketDescriptor(QTcpSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    return self->QTcpSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSetSocketDescriptor(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_setsocketdescriptor_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SetSocketDescriptor_Callback>(slot);
}

// Derived class handler implementation
void QTcpSocket_SetSocketOption(QTcpSocket* self, int option, const QVariant* value) {
    self->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}

// Base class handler implementation
void QTcpSocket_SuperSetSocketOption(QTcpSocket* self, int option, const QVariant* value) {
    self->QTcpSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSetSocketOption(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_setsocketoption_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SetSocketOption_Callback>(slot);
}

// Derived class handler implementation
QVariant* QTcpSocket_SocketOption(QTcpSocket* self, int option) {
    return new QVariant(self->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}

// Base class handler implementation
QVariant* QTcpSocket_SuperSocketOption(QTcpSocket* self, int option) {
    return new QVariant(self->QTcpSocket::socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSocketOption(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_socketoption_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SocketOption_Callback>(slot);
}

// Derived class handler implementation
void QTcpSocket_Close(QTcpSocket* self) {
    self->close();
}

// Base class handler implementation
void QTcpSocket_SuperClose(QTcpSocket* self) {
    self->QTcpSocket::close();
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnClose(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_close_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Close_Callback>(slot);
}

// Derived class handler implementation
bool QTcpSocket_IsSequential(const QTcpSocket* self) {
    return self->isSequential();
}

// Base class handler implementation
bool QTcpSocket_SuperIsSequential(const QTcpSocket* self) {
    return self->QTcpSocket::isSequential();
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnIsSequential(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self)))
        vqtcpsocket->qtcpsocket_issequential_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_IsSequential_Callback>(slot);
}

// Derived class handler implementation
bool QTcpSocket_WaitForConnected(QTcpSocket* self, int msecs) {
    return self->waitForConnected(static_cast<int>(msecs));
}

// Base class handler implementation
bool QTcpSocket_SuperWaitForConnected(QTcpSocket* self, int msecs) {
    return self->QTcpSocket::waitForConnected(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnWaitForConnected(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_waitforconnected_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_WaitForConnected_Callback>(slot);
}

// Derived class handler implementation
bool QTcpSocket_WaitForReadyRead(QTcpSocket* self, int msecs) {
    return self->waitForReadyRead(static_cast<int>(msecs));
}

// Base class handler implementation
bool QTcpSocket_SuperWaitForReadyRead(QTcpSocket* self, int msecs) {
    return self->QTcpSocket::waitForReadyRead(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnWaitForReadyRead(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_waitforreadyread_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_WaitForReadyRead_Callback>(slot);
}

// Derived class handler implementation
bool QTcpSocket_WaitForBytesWritten(QTcpSocket* self, int msecs) {
    return self->waitForBytesWritten(static_cast<int>(msecs));
}

// Base class handler implementation
bool QTcpSocket_SuperWaitForBytesWritten(QTcpSocket* self, int msecs) {
    return self->QTcpSocket::waitForBytesWritten(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnWaitForBytesWritten(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_waitforbyteswritten_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_WaitForBytesWritten_Callback>(slot);
}

// Derived class handler implementation
bool QTcpSocket_WaitForDisconnected(QTcpSocket* self, int msecs) {
    return self->waitForDisconnected(static_cast<int>(msecs));
}

// Base class handler implementation
bool QTcpSocket_SuperWaitForDisconnected(QTcpSocket* self, int msecs) {
    return self->QTcpSocket::waitForDisconnected(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnWaitForDisconnected(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_waitfordisconnected_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_WaitForDisconnected_Callback>(slot);
}

// Derived class handler implementation
long long QTcpSocket_ReadData(QTcpSocket* self, char* data, long long maxlen) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket) {
        return static_cast<long long>(vqtcpsocket->readData(data, static_cast<qint64>(maxlen)));
    } else {
        qFatal("Error: Protected virtual method QTcpSocket::readData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QTcpSocket_SuperReadData(QTcpSocket* self, char* data, long long maxlen) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self)) {
        return static_cast<long long>(vqtcpsocket->QTcpSocket::readData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QTcpSocket::readData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnReadData(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_readdata_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_ReadData_Callback>(slot);
}

// Derived class handler implementation
long long QTcpSocket_ReadLineData(QTcpSocket* self, char* data, long long maxlen) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket) {
        return static_cast<long long>(vqtcpsocket->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        qFatal("Error: Protected virtual method QTcpSocket::readLineData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QTcpSocket_SuperReadLineData(QTcpSocket* self, char* data, long long maxlen) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self)) {
        return static_cast<long long>(vqtcpsocket->QTcpSocket::readLineData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QTcpSocket::readLineData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnReadLineData(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_readlinedata_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_ReadLineData_Callback>(slot);
}

// Derived class handler implementation
long long QTcpSocket_SkipData(QTcpSocket* self, long long maxSize) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket) {
        return static_cast<long long>(vqtcpsocket->skipData(static_cast<qint64>(maxSize)));
    } else {
        qFatal("Error: Protected virtual method QTcpSocket::skipData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QTcpSocket_SuperSkipData(QTcpSocket* self, long long maxSize) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self)) {
        return static_cast<long long>(vqtcpsocket->QTcpSocket::skipData(static_cast<qint64>(maxSize)));
    } else
        qFatal("Error: Protected virtual method QTcpSocket::skipData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSkipData(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_skipdata_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_SkipData_Callback>(slot);
}

// Derived class handler implementation
long long QTcpSocket_WriteData(QTcpSocket* self, const char* data, long long len) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket) {
        return static_cast<long long>(vqtcpsocket->writeData(data, static_cast<qint64>(len)));
    } else {
        qFatal("Error: Protected virtual method QTcpSocket::writeData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QTcpSocket_SuperWriteData(QTcpSocket* self, const char* data, long long len) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self)) {
        return static_cast<long long>(vqtcpsocket->QTcpSocket::writeData(data, static_cast<qint64>(len)));
    } else
        qFatal("Error: Protected virtual method QTcpSocket::writeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnWriteData(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_writedata_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_WriteData_Callback>(slot);
}

// Derived class handler implementation
bool QTcpSocket_Open(QTcpSocket* self, int mode) {
    return self->open(static_cast<QIODeviceBase::OpenMode>(mode));
}

// Base class handler implementation
bool QTcpSocket_SuperOpen(QTcpSocket* self, int mode) {
    return self->QTcpSocket::open(static_cast<QIODeviceBase::OpenMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnOpen(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_open_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Open_Callback>(slot);
}

// Derived class handler implementation
long long QTcpSocket_Pos(const QTcpSocket* self) {
    return static_cast<long long>(self->pos());
}

// Base class handler implementation
long long QTcpSocket_SuperPos(const QTcpSocket* self) {
    return static_cast<long long>(self->QTcpSocket::pos());
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnPos(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self)))
        vqtcpsocket->qtcpsocket_pos_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Pos_Callback>(slot);
}

// Derived class handler implementation
long long QTcpSocket_Size(const QTcpSocket* self) {
    return static_cast<long long>(self->size());
}

// Base class handler implementation
long long QTcpSocket_SuperSize(const QTcpSocket* self) {
    return static_cast<long long>(self->QTcpSocket::size());
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSize(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self)))
        vqtcpsocket->qtcpsocket_size_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Size_Callback>(slot);
}

// Derived class handler implementation
bool QTcpSocket_Seek(QTcpSocket* self, long long pos) {
    return self->seek(static_cast<qint64>(pos));
}

// Base class handler implementation
bool QTcpSocket_SuperSeek(QTcpSocket* self, long long pos) {
    return self->QTcpSocket::seek(static_cast<qint64>(pos));
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnSeek(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_seek_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Seek_Callback>(slot);
}

// Derived class handler implementation
bool QTcpSocket_AtEnd(const QTcpSocket* self) {
    return self->atEnd();
}

// Base class handler implementation
bool QTcpSocket_SuperAtEnd(const QTcpSocket* self) {
    return self->QTcpSocket::atEnd();
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnAtEnd(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self)))
        vqtcpsocket->qtcpsocket_atend_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_AtEnd_Callback>(slot);
}

// Derived class handler implementation
bool QTcpSocket_Reset(QTcpSocket* self) {
    return self->reset();
}

// Base class handler implementation
bool QTcpSocket_SuperReset(QTcpSocket* self) {
    return self->QTcpSocket::reset();
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnReset(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_reset_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Reset_Callback>(slot);
}

// Derived class handler implementation
bool QTcpSocket_CanReadLine(const QTcpSocket* self) {
    return self->canReadLine();
}

// Base class handler implementation
bool QTcpSocket_SuperCanReadLine(const QTcpSocket* self) {
    return self->QTcpSocket::canReadLine();
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnCanReadLine(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self)))
        vqtcpsocket->qtcpsocket_canreadline_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_CanReadLine_Callback>(slot);
}

// Derived class handler implementation
bool QTcpSocket_Event(QTcpSocket* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QTcpSocket_SuperEvent(QTcpSocket* self, QEvent* event) {
    return self->QTcpSocket::event(event);
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnEvent(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_event_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_Event_Callback>(slot);
}

// Derived class handler implementation
bool QTcpSocket_EventFilter(QTcpSocket* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QTcpSocket_SuperEventFilter(QTcpSocket* self, QObject* watched, QEvent* event) {
    return self->QTcpSocket::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnEventFilter(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_eventfilter_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QTcpSocket_TimerEvent(QTcpSocket* self, QTimerEvent* event) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket) {
        vqtcpsocket->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTcpSocket::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTcpSocket_SuperTimerEvent(QTcpSocket* self, QTimerEvent* event) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self)) {
        vqtcpsocket->QTcpSocket::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QTcpSocket::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnTimerEvent(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_timerevent_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QTcpSocket_ChildEvent(QTcpSocket* self, QChildEvent* event) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket) {
        vqtcpsocket->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTcpSocket::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTcpSocket_SuperChildEvent(QTcpSocket* self, QChildEvent* event) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self)) {
        vqtcpsocket->QTcpSocket::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTcpSocket::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnChildEvent(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_childevent_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTcpSocket_CustomEvent(QTcpSocket* self, QEvent* event) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket) {
        vqtcpsocket->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTcpSocket::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTcpSocket_SuperCustomEvent(QTcpSocket* self, QEvent* event) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self)) {
        vqtcpsocket->QTcpSocket::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTcpSocket::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnCustomEvent(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_customevent_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTcpSocket_ConnectNotify(QTcpSocket* self, const QMetaMethod* signal) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket) {
        vqtcpsocket->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTcpSocket::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTcpSocket_SuperConnectNotify(QTcpSocket* self, const QMetaMethod* signal) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self)) {
        vqtcpsocket->QTcpSocket::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTcpSocket::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnConnectNotify(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_connectnotify_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTcpSocket_DisconnectNotify(QTcpSocket* self, const QMetaMethod* signal) {
    auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self);
    if (vqtcpsocket) {
        vqtcpsocket->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTcpSocket::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTcpSocket_SuperDisconnectNotify(QTcpSocket* self, const QMetaMethod* signal) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self)) {
        vqtcpsocket->QTcpSocket::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTcpSocket::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTcpSocket_OnDisconnectNotify(QTcpSocket* self, intptr_t slot) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self))
        vqtcpsocket->qtcpsocket_disconnectnotify_callback = reinterpret_cast<VirtualQTcpSocket::QTcpSocket_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QTcpSocket_SetSocketState(QTcpSocket* self, int state) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self)) {
        vqtcpsocket->VirtualQTcpSocket::setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    } else
        qFatal("Error: Protected method QTcpSocket::setSocketState called without a directly constructed type");
}

// Derived class protected handler implementation
void QTcpSocket_SetSocketError(QTcpSocket* self, int socketError) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self)) {
        vqtcpsocket->VirtualQTcpSocket::setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    } else
        qFatal("Error: Protected method QTcpSocket::setSocketError called without a directly constructed type");
}

// Derived class protected handler implementation
void QTcpSocket_SetLocalPort(QTcpSocket* self, uint16_t port) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self)) {
        vqtcpsocket->VirtualQTcpSocket::setLocalPort(static_cast<quint16>(port));
    } else
        qFatal("Error: Protected method QTcpSocket::setLocalPort called without a directly constructed type");
}

// Derived class protected handler implementation
void QTcpSocket_SetLocalAddress(QTcpSocket* self, const QHostAddress* address) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self)) {
        vqtcpsocket->VirtualQTcpSocket::setLocalAddress(*address);
    } else
        qFatal("Error: Protected method QTcpSocket::setLocalAddress called without a directly constructed type");
}

// Derived class protected handler implementation
void QTcpSocket_SetPeerPort(QTcpSocket* self, uint16_t port) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self)) {
        vqtcpsocket->VirtualQTcpSocket::setPeerPort(static_cast<quint16>(port));
    } else
        qFatal("Error: Protected method QTcpSocket::setPeerPort called without a directly constructed type");
}

// Derived class protected handler implementation
void QTcpSocket_SetPeerAddress(QTcpSocket* self, const QHostAddress* address) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self)) {
        vqtcpsocket->VirtualQTcpSocket::setPeerAddress(*address);
    } else
        qFatal("Error: Protected method QTcpSocket::setPeerAddress called without a directly constructed type");
}

// Derived class protected handler implementation
void QTcpSocket_SetPeerName(QTcpSocket* self, const libqt_string name) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self)) {
        QString name_QString = QString::fromUtf8(name.data, name.len);
        vqtcpsocket->VirtualQTcpSocket::setPeerName(name_QString);
    } else
        qFatal("Error: Protected method QTcpSocket::setPeerName called without a directly constructed type");
}

// Derived class protected handler implementation
void QTcpSocket_SetOpenMode(QTcpSocket* self, int openMode) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self)) {
        vqtcpsocket->VirtualQTcpSocket::setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else
        qFatal("Error: Protected method QTcpSocket::setOpenMode called without a directly constructed type");
}

// Derived class protected handler implementation
void QTcpSocket_SetErrorString(QTcpSocket* self, const libqt_string errorString) {
    if (auto* vqtcpsocket = dynamic_cast<VirtualQTcpSocket*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqtcpsocket->VirtualQTcpSocket::setErrorString(errorString_QString);
    } else
        qFatal("Error: Protected method QTcpSocket::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QTcpSocket_Sender(const QTcpSocket* self) {
    if (auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self))) {
        return vqtcpsocket->VirtualQTcpSocket::sender();
    } else
        qFatal("Error: Protected method QTcpSocket::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTcpSocket_SenderSignalIndex(const QTcpSocket* self) {
    if (auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self))) {
        return vqtcpsocket->VirtualQTcpSocket::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTcpSocket::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTcpSocket_Receivers(const QTcpSocket* self, const char* signal) {
    if (auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self))) {
        return vqtcpsocket->VirtualQTcpSocket::receivers(signal);
    } else
        qFatal("Error: Protected method QTcpSocket::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTcpSocket_IsSignalConnected(const QTcpSocket* self, const QMetaMethod* signal) {
    if (auto* vqtcpsocket = const_cast<VirtualQTcpSocket*>(dynamic_cast<const VirtualQTcpSocket*>(self))) {
        return vqtcpsocket->VirtualQTcpSocket::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTcpSocket::isSignalConnected called without a directly constructed type");
}

void QTcpSocket_Delete(QTcpSocket* self) {
    delete self;
}
