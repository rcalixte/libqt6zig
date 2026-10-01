#include <QAbstractSocket>
#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkDatagram>
#include <QObject>
#include <QSctpSocket>
#include <QString>
#include <QTcpSocket>
#include <QTimerEvent>
#include <QVariant>
#include <qsctpsocket.h>
#include "libqsctpsocket.h"
#include "libqsctpsocket.hxx"

QSctpSocket* QSctpSocket_new() {
    return new VirtualQSctpSocket();
}

QSctpSocket* QSctpSocket_new2(QObject* parent) {
    return new VirtualQSctpSocket(parent);
}

QMetaObject* QSctpSocket_MetaObject(const QSctpSocket* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSctpSocket_Metacast(QSctpSocket* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSctpSocket_Metacall(QSctpSocket* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSctpSocket_Tr(const char* s) {
    auto _ret = QSctpSocket::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSctpSocket_Close(QSctpSocket* self) {
    self->close();
}

void QSctpSocket_DisconnectFromHost(QSctpSocket* self) {
    self->disconnectFromHost();
}

void QSctpSocket_SetMaximumChannelCount(QSctpSocket* self, int count) {
    self->setMaximumChannelCount(static_cast<int>(count));
}

int QSctpSocket_MaximumChannelCount(const QSctpSocket* self) {
    return self->maximumChannelCount();
}

bool QSctpSocket_IsInDatagramMode(const QSctpSocket* self) {
    return self->isInDatagramMode();
}

QNetworkDatagram* QSctpSocket_ReadDatagram(QSctpSocket* self) {
    return new QNetworkDatagram(self->readDatagram());
}

bool QSctpSocket_WriteDatagram(QSctpSocket* self, const QNetworkDatagram* datagram) {
    return self->writeDatagram(*datagram);
}

long long QSctpSocket_ReadData(QSctpSocket* self, char* data, long long maxlen) {
    auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self);
    if (vqsctpsocket) {
        return static_cast<long long>(vqsctpsocket->readData(data, static_cast<qint64>(maxlen)));
    }
    qFatal("Error: Protected method QSctpSocket::readData called without a directly constructed type");
}

long long QSctpSocket_ReadLineData(QSctpSocket* self, char* data, long long maxlen) {
    auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self);
    if (vqsctpsocket) {
        return static_cast<long long>(vqsctpsocket->readLineData(data, static_cast<qint64>(maxlen)));
    }
    qFatal("Error: Protected method QSctpSocket::readLineData called without a directly constructed type");
}

libqt_string QSctpSocket_Tr2(const char* s, const char* c) {
    auto _ret = QSctpSocket::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSctpSocket_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSctpSocket::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSctpSocket_SuperMetaObject(const QSctpSocket* self) {
    return (QMetaObject*)self->QSctpSocket::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnMetaObject(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self)))
        vqsctpsocket->qsctpsocket_metaobject_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSctpSocket_SuperMetacast(QSctpSocket* self, const char* param1) {
    return self->QSctpSocket::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnMetacast(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_metacast_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSctpSocket_SuperMetacall(QSctpSocket* self, int param1, int param2, void** param3) {
    return self->QSctpSocket::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnMetacall(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_metacall_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Metacall_Callback>(slot);
}

// Base class handler implementation
void QSctpSocket_SuperClose(QSctpSocket* self) {
    self->QSctpSocket::close();
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnClose(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_close_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Close_Callback>(slot);
}

// Base class handler implementation
void QSctpSocket_SuperDisconnectFromHost(QSctpSocket* self) {
    self->QSctpSocket::disconnectFromHost();
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnDisconnectFromHost(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_disconnectfromhost_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_DisconnectFromHost_Callback>(slot);
}

// Base class handler implementation
long long QSctpSocket_SuperReadData(QSctpSocket* self, char* data, long long maxlen) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return static_cast<long long>(vqsctpsocket->QSctpSocket::readData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QSctpSocket::readData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnReadData(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_readdata_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_ReadData_Callback>(slot);
}

// Base class handler implementation
long long QSctpSocket_SuperReadLineData(QSctpSocket* self, char* data, long long maxlen) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return static_cast<long long>(vqsctpsocket->QSctpSocket::readLineData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QSctpSocket::readLineData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnReadLineData(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_readlinedata_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_ReadLineData_Callback>(slot);
}

// Derived class handler implementation
void QSctpSocket_Resume(QSctpSocket* self) {
    self->resume();
}

// Base class handler implementation
void QSctpSocket_SuperResume(QSctpSocket* self) {
    self->QSctpSocket::resume();
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnResume(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_resume_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Resume_Callback>(slot);
}

// Derived class handler implementation
bool QSctpSocket_Bind(QSctpSocket* self, const QHostAddress* address, uint16_t port, int mode) {
    return self->bind(*address, static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
}

// Base class handler implementation
bool QSctpSocket_SuperBind(QSctpSocket* self, const QHostAddress* address, uint16_t port, int mode) {
    return self->QSctpSocket::bind(*address, static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnBind(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_bind_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Bind_Callback>(slot);
}

// Derived class handler implementation
void QSctpSocket_ConnectToHost(QSctpSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    self->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

// Base class handler implementation
void QSctpSocket_SuperConnectToHost(QSctpSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    self->QSctpSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnConnectToHost(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_connecttohost_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_ConnectToHost_Callback>(slot);
}

// Derived class handler implementation
long long QSctpSocket_BytesAvailable(const QSctpSocket* self) {
    return static_cast<long long>(self->bytesAvailable());
}

// Base class handler implementation
long long QSctpSocket_SuperBytesAvailable(const QSctpSocket* self) {
    return static_cast<long long>(self->QSctpSocket::bytesAvailable());
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnBytesAvailable(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self)))
        vqsctpsocket->qsctpsocket_bytesavailable_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_BytesAvailable_Callback>(slot);
}

// Derived class handler implementation
long long QSctpSocket_BytesToWrite(const QSctpSocket* self) {
    return static_cast<long long>(self->bytesToWrite());
}

// Base class handler implementation
long long QSctpSocket_SuperBytesToWrite(const QSctpSocket* self) {
    return static_cast<long long>(self->QSctpSocket::bytesToWrite());
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnBytesToWrite(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self)))
        vqsctpsocket->qsctpsocket_bytestowrite_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_BytesToWrite_Callback>(slot);
}

// Derived class handler implementation
void QSctpSocket_SetReadBufferSize(QSctpSocket* self, long long size) {
    self->setReadBufferSize(static_cast<qint64>(size));
}

// Base class handler implementation
void QSctpSocket_SuperSetReadBufferSize(QSctpSocket* self, long long size) {
    self->QSctpSocket::setReadBufferSize(static_cast<qint64>(size));
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSetReadBufferSize(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_setreadbuffersize_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SetReadBufferSize_Callback>(slot);
}

// Derived class handler implementation
intptr_t QSctpSocket_SocketDescriptor(const QSctpSocket* self) {
    qintptr _ret = self->socketDescriptor();
    return (intptr_t)(_ret);
}

// Base class handler implementation
intptr_t QSctpSocket_SuperSocketDescriptor(const QSctpSocket* self) {
    qintptr _ret = self->QSctpSocket::socketDescriptor();
    return (intptr_t)(_ret);
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSocketDescriptor(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self)))
        vqsctpsocket->qsctpsocket_socketdescriptor_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SocketDescriptor_Callback>(slot);
}

// Derived class handler implementation
bool QSctpSocket_SetSocketDescriptor(QSctpSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

// Base class handler implementation
bool QSctpSocket_SuperSetSocketDescriptor(QSctpSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    return self->QSctpSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSetSocketDescriptor(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_setsocketdescriptor_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SetSocketDescriptor_Callback>(slot);
}

// Derived class handler implementation
void QSctpSocket_SetSocketOption(QSctpSocket* self, int option, const QVariant* value) {
    self->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}

// Base class handler implementation
void QSctpSocket_SuperSetSocketOption(QSctpSocket* self, int option, const QVariant* value) {
    self->QSctpSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSetSocketOption(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_setsocketoption_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SetSocketOption_Callback>(slot);
}

// Derived class handler implementation
QVariant* QSctpSocket_SocketOption(QSctpSocket* self, int option) {
    return new QVariant(self->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}

// Base class handler implementation
QVariant* QSctpSocket_SuperSocketOption(QSctpSocket* self, int option) {
    return new QVariant(self->QSctpSocket::socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSocketOption(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_socketoption_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SocketOption_Callback>(slot);
}

// Derived class handler implementation
bool QSctpSocket_IsSequential(const QSctpSocket* self) {
    return self->isSequential();
}

// Base class handler implementation
bool QSctpSocket_SuperIsSequential(const QSctpSocket* self) {
    return self->QSctpSocket::isSequential();
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnIsSequential(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self)))
        vqsctpsocket->qsctpsocket_issequential_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_IsSequential_Callback>(slot);
}

// Derived class handler implementation
bool QSctpSocket_WaitForConnected(QSctpSocket* self, int msecs) {
    return self->waitForConnected(static_cast<int>(msecs));
}

// Base class handler implementation
bool QSctpSocket_SuperWaitForConnected(QSctpSocket* self, int msecs) {
    return self->QSctpSocket::waitForConnected(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnWaitForConnected(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_waitforconnected_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_WaitForConnected_Callback>(slot);
}

// Derived class handler implementation
bool QSctpSocket_WaitForReadyRead(QSctpSocket* self, int msecs) {
    return self->waitForReadyRead(static_cast<int>(msecs));
}

// Base class handler implementation
bool QSctpSocket_SuperWaitForReadyRead(QSctpSocket* self, int msecs) {
    return self->QSctpSocket::waitForReadyRead(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnWaitForReadyRead(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_waitforreadyread_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_WaitForReadyRead_Callback>(slot);
}

// Derived class handler implementation
bool QSctpSocket_WaitForBytesWritten(QSctpSocket* self, int msecs) {
    return self->waitForBytesWritten(static_cast<int>(msecs));
}

// Base class handler implementation
bool QSctpSocket_SuperWaitForBytesWritten(QSctpSocket* self, int msecs) {
    return self->QSctpSocket::waitForBytesWritten(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnWaitForBytesWritten(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_waitforbyteswritten_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_WaitForBytesWritten_Callback>(slot);
}

// Derived class handler implementation
bool QSctpSocket_WaitForDisconnected(QSctpSocket* self, int msecs) {
    return self->waitForDisconnected(static_cast<int>(msecs));
}

// Base class handler implementation
bool QSctpSocket_SuperWaitForDisconnected(QSctpSocket* self, int msecs) {
    return self->QSctpSocket::waitForDisconnected(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnWaitForDisconnected(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_waitfordisconnected_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_WaitForDisconnected_Callback>(slot);
}

// Derived class handler implementation
long long QSctpSocket_SkipData(QSctpSocket* self, long long maxSize) {
    auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self);
    if (vqsctpsocket) {
        return static_cast<long long>(vqsctpsocket->skipData(static_cast<qint64>(maxSize)));
    } else {
        qFatal("Error: Protected virtual method QSctpSocket::skipData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QSctpSocket_SuperSkipData(QSctpSocket* self, long long maxSize) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return static_cast<long long>(vqsctpsocket->QSctpSocket::skipData(static_cast<qint64>(maxSize)));
    } else
        qFatal("Error: Protected virtual method QSctpSocket::skipData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSkipData(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_skipdata_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SkipData_Callback>(slot);
}

// Derived class handler implementation
long long QSctpSocket_WriteData(QSctpSocket* self, const char* data, long long len) {
    auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self);
    if (vqsctpsocket) {
        return static_cast<long long>(vqsctpsocket->writeData(data, static_cast<qint64>(len)));
    } else {
        qFatal("Error: Protected virtual method QSctpSocket::writeData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QSctpSocket_SuperWriteData(QSctpSocket* self, const char* data, long long len) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return static_cast<long long>(vqsctpsocket->QSctpSocket::writeData(data, static_cast<qint64>(len)));
    } else
        qFatal("Error: Protected virtual method QSctpSocket::writeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnWriteData(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_writedata_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_WriteData_Callback>(slot);
}

// Derived class handler implementation
bool QSctpSocket_Open(QSctpSocket* self, int mode) {
    return self->open(static_cast<QIODeviceBase::OpenMode>(mode));
}

// Base class handler implementation
bool QSctpSocket_SuperOpen(QSctpSocket* self, int mode) {
    return self->QSctpSocket::open(static_cast<QIODeviceBase::OpenMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnOpen(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_open_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Open_Callback>(slot);
}

// Derived class handler implementation
long long QSctpSocket_Pos(const QSctpSocket* self) {
    return static_cast<long long>(self->pos());
}

// Base class handler implementation
long long QSctpSocket_SuperPos(const QSctpSocket* self) {
    return static_cast<long long>(self->QSctpSocket::pos());
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnPos(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self)))
        vqsctpsocket->qsctpsocket_pos_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Pos_Callback>(slot);
}

// Derived class handler implementation
long long QSctpSocket_Size(const QSctpSocket* self) {
    return static_cast<long long>(self->size());
}

// Base class handler implementation
long long QSctpSocket_SuperSize(const QSctpSocket* self) {
    return static_cast<long long>(self->QSctpSocket::size());
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSize(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self)))
        vqsctpsocket->qsctpsocket_size_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Size_Callback>(slot);
}

// Derived class handler implementation
bool QSctpSocket_Seek(QSctpSocket* self, long long pos) {
    return self->seek(static_cast<qint64>(pos));
}

// Base class handler implementation
bool QSctpSocket_SuperSeek(QSctpSocket* self, long long pos) {
    return self->QSctpSocket::seek(static_cast<qint64>(pos));
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSeek(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_seek_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Seek_Callback>(slot);
}

// Derived class handler implementation
bool QSctpSocket_AtEnd(const QSctpSocket* self) {
    return self->atEnd();
}

// Base class handler implementation
bool QSctpSocket_SuperAtEnd(const QSctpSocket* self) {
    return self->QSctpSocket::atEnd();
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnAtEnd(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self)))
        vqsctpsocket->qsctpsocket_atend_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_AtEnd_Callback>(slot);
}

// Derived class handler implementation
bool QSctpSocket_Reset(QSctpSocket* self) {
    return self->reset();
}

// Base class handler implementation
bool QSctpSocket_SuperReset(QSctpSocket* self) {
    return self->QSctpSocket::reset();
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnReset(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_reset_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Reset_Callback>(slot);
}

// Derived class handler implementation
bool QSctpSocket_CanReadLine(const QSctpSocket* self) {
    return self->canReadLine();
}

// Base class handler implementation
bool QSctpSocket_SuperCanReadLine(const QSctpSocket* self) {
    return self->QSctpSocket::canReadLine();
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnCanReadLine(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self)))
        vqsctpsocket->qsctpsocket_canreadline_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_CanReadLine_Callback>(slot);
}

// Derived class handler implementation
bool QSctpSocket_Event(QSctpSocket* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QSctpSocket_SuperEvent(QSctpSocket* self, QEvent* event) {
    return self->QSctpSocket::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnEvent(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_event_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSctpSocket_EventFilter(QSctpSocket* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSctpSocket_SuperEventFilter(QSctpSocket* self, QObject* watched, QEvent* event) {
    return self->QSctpSocket::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnEventFilter(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_eventfilter_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSctpSocket_TimerEvent(QSctpSocket* self, QTimerEvent* event) {
    auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self);
    if (vqsctpsocket) {
        vqsctpsocket->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSctpSocket::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSctpSocket_SuperTimerEvent(QSctpSocket* self, QTimerEvent* event) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->QSctpSocket::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSctpSocket::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnTimerEvent(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_timerevent_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSctpSocket_ChildEvent(QSctpSocket* self, QChildEvent* event) {
    auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self);
    if (vqsctpsocket) {
        vqsctpsocket->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSctpSocket::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSctpSocket_SuperChildEvent(QSctpSocket* self, QChildEvent* event) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->QSctpSocket::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSctpSocket::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnChildEvent(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_childevent_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSctpSocket_CustomEvent(QSctpSocket* self, QEvent* event) {
    auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self);
    if (vqsctpsocket) {
        vqsctpsocket->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSctpSocket::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSctpSocket_SuperCustomEvent(QSctpSocket* self, QEvent* event) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->QSctpSocket::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSctpSocket::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnCustomEvent(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_customevent_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSctpSocket_ConnectNotify(QSctpSocket* self, const QMetaMethod* signal) {
    auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self);
    if (vqsctpsocket) {
        vqsctpsocket->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSctpSocket::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSctpSocket_SuperConnectNotify(QSctpSocket* self, const QMetaMethod* signal) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->QSctpSocket::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSctpSocket::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnConnectNotify(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_connectnotify_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSctpSocket_DisconnectNotify(QSctpSocket* self, const QMetaMethod* signal) {
    auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self);
    if (vqsctpsocket) {
        vqsctpsocket->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSctpSocket::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSctpSocket_SuperDisconnectNotify(QSctpSocket* self, const QMetaMethod* signal) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->QSctpSocket::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSctpSocket::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnDisconnectNotify(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self))
        vqsctpsocket->qsctpsocket_disconnectnotify_callback = reinterpret_cast<VirtualQSctpSocket::QSctpSocket_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QSctpSocket_SetSocketState(QSctpSocket* self, int state) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->VirtualQSctpSocket::setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    } else
        qFatal("Error: Protected method QSctpSocket::setSocketState called without a directly constructed type");
}

// Derived class protected handler implementation
void QSctpSocket_SetSocketError(QSctpSocket* self, int socketError) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->VirtualQSctpSocket::setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    } else
        qFatal("Error: Protected method QSctpSocket::setSocketError called without a directly constructed type");
}

// Derived class protected handler implementation
void QSctpSocket_SetLocalPort(QSctpSocket* self, uint16_t port) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->VirtualQSctpSocket::setLocalPort(static_cast<quint16>(port));
    } else
        qFatal("Error: Protected method QSctpSocket::setLocalPort called without a directly constructed type");
}

// Derived class protected handler implementation
void QSctpSocket_SetLocalAddress(QSctpSocket* self, const QHostAddress* address) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->VirtualQSctpSocket::setLocalAddress(*address);
    } else
        qFatal("Error: Protected method QSctpSocket::setLocalAddress called without a directly constructed type");
}

// Derived class protected handler implementation
void QSctpSocket_SetPeerPort(QSctpSocket* self, uint16_t port) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->VirtualQSctpSocket::setPeerPort(static_cast<quint16>(port));
    } else
        qFatal("Error: Protected method QSctpSocket::setPeerPort called without a directly constructed type");
}

// Derived class protected handler implementation
void QSctpSocket_SetPeerAddress(QSctpSocket* self, const QHostAddress* address) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->VirtualQSctpSocket::setPeerAddress(*address);
    } else
        qFatal("Error: Protected method QSctpSocket::setPeerAddress called without a directly constructed type");
}

// Derived class protected handler implementation
void QSctpSocket_SetPeerName(QSctpSocket* self, const libqt_string name) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        QString name_QString = QString::fromUtf8(name.data, name.len);
        vqsctpsocket->VirtualQSctpSocket::setPeerName(name_QString);
    } else
        qFatal("Error: Protected method QSctpSocket::setPeerName called without a directly constructed type");
}

// Derived class protected handler implementation
void QSctpSocket_SetOpenMode(QSctpSocket* self, int openMode) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->VirtualQSctpSocket::setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else
        qFatal("Error: Protected method QSctpSocket::setOpenMode called without a directly constructed type");
}

// Derived class protected handler implementation
void QSctpSocket_SetErrorString(QSctpSocket* self, const libqt_string errorString) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqsctpsocket->VirtualQSctpSocket::setErrorString(errorString_QString);
    } else
        qFatal("Error: Protected method QSctpSocket::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QSctpSocket_Sender(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        return vqsctpsocket->VirtualQSctpSocket::sender();
    } else
        qFatal("Error: Protected method QSctpSocket::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSctpSocket_SenderSignalIndex(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        return vqsctpsocket->VirtualQSctpSocket::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSctpSocket::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSctpSocket_Receivers(const QSctpSocket* self, const char* signal) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        return vqsctpsocket->VirtualQSctpSocket::receivers(signal);
    } else
        qFatal("Error: Protected method QSctpSocket::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSctpSocket_IsSignalConnected(const QSctpSocket* self, const QMetaMethod* signal) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        return vqsctpsocket->VirtualQSctpSocket::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSctpSocket::isSignalConnected called without a directly constructed type");
}

void QSctpSocket_Delete(QSctpSocket* self) {
    delete self;
}
