#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QIODeviceBase>
#include <QLocalSocket>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qlocalsocket.h>
#include "libqlocalsocket.h"
#include "libqlocalsocket.hxx"

QLocalSocket* QLocalSocket_new() {
    return new VirtualQLocalSocket();
}

QLocalSocket* QLocalSocket_new2(QObject* parent) {
    return new VirtualQLocalSocket(parent);
}

QMetaObject* QLocalSocket_MetaObject(const QLocalSocket* self) {
    return (QMetaObject*)self->metaObject();
}

void* QLocalSocket_Metacast(QLocalSocket* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QLocalSocket_Metacall(QLocalSocket* self, int param1, int param2, void** param3) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQLocalSocket*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QLocalSocket_OnMetacall(QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_Metacall_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QLocalSocket_QBaseMetacall(QLocalSocket* self, int param1, int param2, void** param3) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_Metacall_IsBase(true);
        return vqlocalsocket->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQLocalSocket*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QLocalSocket_Tr(const char* s) {
    QString _ret = QLocalSocket::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QLocalSocket_ConnectToServer(QLocalSocket* self) {
    self->connectToServer();
}

void QLocalSocket_ConnectToServerWithName(QLocalSocket* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->connectToServer(name_QString);
}

void QLocalSocket_DisconnectFromServer(QLocalSocket* self) {
    self->disconnectFromServer();
}

void QLocalSocket_SetServerName(QLocalSocket* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setServerName(name_QString);
}

libqt_string QLocalSocket_ServerName(const QLocalSocket* self) {
    QString _ret = self->serverName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QLocalSocket_FullServerName(const QLocalSocket* self) {
    QString _ret = self->fullServerName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QLocalSocket_Abort(QLocalSocket* self) {
    self->abort();
}

int QLocalSocket_Error(const QLocalSocket* self) {
    return static_cast<int>(self->error());
}

bool QLocalSocket_Flush(QLocalSocket* self) {
    return self->flush();
}

bool QLocalSocket_IsValid(const QLocalSocket* self) {
    return self->isValid();
}

long long QLocalSocket_ReadBufferSize(const QLocalSocket* self) {
    return static_cast<long long>(self->readBufferSize());
}

void QLocalSocket_SetReadBufferSize(QLocalSocket* self, long long size) {
    self->setReadBufferSize(static_cast<qint64>(size));
}

bool QLocalSocket_SetSocketDescriptor(QLocalSocket* self, intptr_t socketDescriptor) {
    return self->setSocketDescriptor((qintptr)(socketDescriptor));
}

intptr_t QLocalSocket_SocketDescriptor(const QLocalSocket* self) {
    qintptr _ret = self->socketDescriptor();
    return (intptr_t)(_ret);
}

void QLocalSocket_SetSocketOptions(QLocalSocket* self, int option) {
    self->setSocketOptions(static_cast<QLocalSocket::SocketOptions>(option));
}

int QLocalSocket_SocketOptions(const QLocalSocket* self) {
    return static_cast<int>(self->socketOptions());
}

int QLocalSocket_State(const QLocalSocket* self) {
    return static_cast<int>(self->state());
}

bool QLocalSocket_WaitForConnected(QLocalSocket* self) {
    return self->waitForConnected();
}

bool QLocalSocket_WaitForDisconnected(QLocalSocket* self) {
    return self->waitForDisconnected();
}

void QLocalSocket_Connected(QLocalSocket* self) {
    self->connected();
}

void QLocalSocket_Connect_Connected(QLocalSocket* self, intptr_t slot) {
    void (*slotFunc)(QLocalSocket*) = reinterpret_cast<void (*)(QLocalSocket*)>(slot);
    QLocalSocket::connect(self, &QLocalSocket::connected, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QLocalSocket_Disconnected(QLocalSocket* self) {
    self->disconnected();
}

void QLocalSocket_Connect_Disconnected(QLocalSocket* self, intptr_t slot) {
    void (*slotFunc)(QLocalSocket*) = reinterpret_cast<void (*)(QLocalSocket*)>(slot);
    QLocalSocket::connect(self, &QLocalSocket::disconnected, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QLocalSocket_ErrorOccurred(QLocalSocket* self, int socketError) {
    self->errorOccurred(static_cast<QLocalSocket::LocalSocketError>(socketError));
}

void QLocalSocket_Connect_ErrorOccurred(QLocalSocket* self, intptr_t slot) {
    void (*slotFunc)(QLocalSocket*, int) = reinterpret_cast<void (*)(QLocalSocket*, int)>(slot);
    QLocalSocket::connect(self, &QLocalSocket::errorOccurred, [self, slotFunc](QLocalSocket::LocalSocketError socketError) {
        int sigval1 = static_cast<int>(socketError);
        slotFunc(self, sigval1);
    });
}

void QLocalSocket_StateChanged(QLocalSocket* self, int socketState) {
    self->stateChanged(static_cast<QLocalSocket::LocalSocketState>(socketState));
}

void QLocalSocket_Connect_StateChanged(QLocalSocket* self, intptr_t slot) {
    void (*slotFunc)(QLocalSocket*, int) = reinterpret_cast<void (*)(QLocalSocket*, int)>(slot);
    QLocalSocket::connect(self, &QLocalSocket::stateChanged, [self, slotFunc](QLocalSocket::LocalSocketState socketState) {
        int sigval1 = static_cast<int>(socketState);
        slotFunc(self, sigval1);
    });
}

libqt_string QLocalSocket_Tr2(const char* s, const char* c) {
    QString _ret = QLocalSocket::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QLocalSocket_Tr3(const char* s, const char* c, int n) {
    QString _ret = QLocalSocket::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QLocalSocket_ConnectToServer1(QLocalSocket* self, int openMode) {
    self->connectToServer(static_cast<QIODeviceBase::OpenMode>(openMode));
}

void QLocalSocket_ConnectToServer2(QLocalSocket* self, const libqt_string name, int openMode) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->connectToServer(name_QString, static_cast<QIODeviceBase::OpenMode>(openMode));
}

bool QLocalSocket_SetSocketDescriptor2(QLocalSocket* self, intptr_t socketDescriptor, int socketState) {
    return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QLocalSocket::LocalSocketState>(socketState));
}

bool QLocalSocket_SetSocketDescriptor3(QLocalSocket* self, intptr_t socketDescriptor, int socketState, int openMode) {
    return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QLocalSocket::LocalSocketState>(socketState), static_cast<QIODeviceBase::OpenMode>(openMode));
}

bool QLocalSocket_WaitForConnected1(QLocalSocket* self, int msecs) {
    return self->waitForConnected(static_cast<int>(msecs));
}

bool QLocalSocket_WaitForDisconnected1(QLocalSocket* self, int msecs) {
    return self->waitForDisconnected(static_cast<int>(msecs));
}

// Derived class handler implementation
bool QLocalSocket_IsSequential(const QLocalSocket* self) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return vqlocalsocket->isSequential();
    } else {
        return self->QLocalSocket::isSequential();
    }
}

// Base class handler implementation
bool QLocalSocket_QBaseIsSequential(const QLocalSocket* self) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_IsSequential_IsBase(true);
        return vqlocalsocket->isSequential();
    } else {
        return self->QLocalSocket::isSequential();
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnIsSequential(const QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_IsSequential_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_IsSequential_Callback>(slot));
    }
}

// Derived class handler implementation
long long QLocalSocket_BytesAvailable(const QLocalSocket* self) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return static_cast<long long>(vqlocalsocket->bytesAvailable());
    } else {
        return static_cast<long long>(self->QLocalSocket::bytesAvailable());
    }
}

// Base class handler implementation
long long QLocalSocket_QBaseBytesAvailable(const QLocalSocket* self) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_BytesAvailable_IsBase(true);
        return static_cast<long long>(vqlocalsocket->bytesAvailable());
    } else {
        return static_cast<long long>(self->QLocalSocket::bytesAvailable());
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnBytesAvailable(const QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_BytesAvailable_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_BytesAvailable_Callback>(slot));
    }
}

// Derived class handler implementation
long long QLocalSocket_BytesToWrite(const QLocalSocket* self) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return static_cast<long long>(vqlocalsocket->bytesToWrite());
    } else {
        return static_cast<long long>(self->QLocalSocket::bytesToWrite());
    }
}

// Base class handler implementation
long long QLocalSocket_QBaseBytesToWrite(const QLocalSocket* self) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_BytesToWrite_IsBase(true);
        return static_cast<long long>(vqlocalsocket->bytesToWrite());
    } else {
        return static_cast<long long>(self->QLocalSocket::bytesToWrite());
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnBytesToWrite(const QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_BytesToWrite_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_BytesToWrite_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLocalSocket_CanReadLine(const QLocalSocket* self) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return vqlocalsocket->canReadLine();
    } else {
        return self->QLocalSocket::canReadLine();
    }
}

// Base class handler implementation
bool QLocalSocket_QBaseCanReadLine(const QLocalSocket* self) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_CanReadLine_IsBase(true);
        return vqlocalsocket->canReadLine();
    } else {
        return self->QLocalSocket::canReadLine();
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnCanReadLine(const QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_CanReadLine_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_CanReadLine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLocalSocket_Open(QLocalSocket* self, int openMode) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return vqlocalsocket->open(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        return self->QLocalSocket::open(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
bool QLocalSocket_QBaseOpen(QLocalSocket* self, int openMode) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_Open_IsBase(true);
        return vqlocalsocket->open(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        return self->QLocalSocket::open(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnOpen(QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_Open_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Open_Callback>(slot));
    }
}

// Derived class handler implementation
void QLocalSocket_Close(QLocalSocket* self) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->close();
    } else {
        self->QLocalSocket::close();
    }
}

// Base class handler implementation
void QLocalSocket_QBaseClose(QLocalSocket* self) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_Close_IsBase(true);
        vqlocalsocket->close();
    } else {
        self->QLocalSocket::close();
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnClose(QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_Close_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Close_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLocalSocket_WaitForBytesWritten(QLocalSocket* self, int msecs) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return vqlocalsocket->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->QLocalSocket::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QLocalSocket_QBaseWaitForBytesWritten(QLocalSocket* self, int msecs) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_WaitForBytesWritten_IsBase(true);
        return vqlocalsocket->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->QLocalSocket::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnWaitForBytesWritten(QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_WaitForBytesWritten_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLocalSocket_WaitForReadyRead(QLocalSocket* self, int msecs) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return vqlocalsocket->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->QLocalSocket::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QLocalSocket_QBaseWaitForReadyRead(QLocalSocket* self, int msecs) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_WaitForReadyRead_IsBase(true);
        return vqlocalsocket->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->QLocalSocket::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnWaitForReadyRead(QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_WaitForReadyRead_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_WaitForReadyRead_Callback>(slot));
    }
}

// Derived class handler implementation
long long QLocalSocket_ReadData(QLocalSocket* self, char* param1, long long param2) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return static_cast<long long>(vqlocalsocket->readData(param1, static_cast<long long>(param2)));
    } else {
        return static_cast<long long>(((VirtualQLocalSocket*)self)->readData(param1, static_cast<long long>(param2)));
    }
}

// Base class handler implementation
long long QLocalSocket_QBaseReadData(QLocalSocket* self, char* param1, long long param2) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_ReadData_IsBase(true);
        return static_cast<long long>(vqlocalsocket->readData(param1, static_cast<long long>(param2)));
    } else {
        return static_cast<long long>(((VirtualQLocalSocket*)self)->readData(param1, static_cast<long long>(param2)));
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnReadData(QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_ReadData_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_ReadData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QLocalSocket_ReadLineData(QLocalSocket* self, char* data, long long maxSize) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return static_cast<long long>(vqlocalsocket->readLineData(data, static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQLocalSocket*)self)->readLineData(data, static_cast<qint64>(maxSize)));
    }
}

// Base class handler implementation
long long QLocalSocket_QBaseReadLineData(QLocalSocket* self, char* data, long long maxSize) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_ReadLineData_IsBase(true);
        return static_cast<long long>(vqlocalsocket->readLineData(data, static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQLocalSocket*)self)->readLineData(data, static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnReadLineData(QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_ReadLineData_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_ReadLineData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QLocalSocket_SkipData(QLocalSocket* self, long long maxSize) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return static_cast<long long>(vqlocalsocket->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQLocalSocket*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Base class handler implementation
long long QLocalSocket_QBaseSkipData(QLocalSocket* self, long long maxSize) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_SkipData_IsBase(true);
        return static_cast<long long>(vqlocalsocket->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQLocalSocket*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnSkipData(QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_SkipData_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_SkipData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QLocalSocket_WriteData(QLocalSocket* self, const char* param1, long long param2) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return static_cast<long long>(vqlocalsocket->writeData(param1, static_cast<long long>(param2)));
    } else {
        return static_cast<long long>(((VirtualQLocalSocket*)self)->writeData(param1, static_cast<long long>(param2)));
    }
}

// Base class handler implementation
long long QLocalSocket_QBaseWriteData(QLocalSocket* self, const char* param1, long long param2) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_WriteData_IsBase(true);
        return static_cast<long long>(vqlocalsocket->writeData(param1, static_cast<long long>(param2)));
    } else {
        return static_cast<long long>(((VirtualQLocalSocket*)self)->writeData(param1, static_cast<long long>(param2)));
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnWriteData(QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_WriteData_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_WriteData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QLocalSocket_Pos(const QLocalSocket* self) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return static_cast<long long>(vqlocalsocket->pos());
    } else {
        return static_cast<long long>(self->QLocalSocket::pos());
    }
}

// Base class handler implementation
long long QLocalSocket_QBasePos(const QLocalSocket* self) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_Pos_IsBase(true);
        return static_cast<long long>(vqlocalsocket->pos());
    } else {
        return static_cast<long long>(self->QLocalSocket::pos());
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnPos(const QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_Pos_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Pos_Callback>(slot));
    }
}

// Derived class handler implementation
long long QLocalSocket_Size(const QLocalSocket* self) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return static_cast<long long>(vqlocalsocket->size());
    } else {
        return static_cast<long long>(self->QLocalSocket::size());
    }
}

// Base class handler implementation
long long QLocalSocket_QBaseSize(const QLocalSocket* self) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_Size_IsBase(true);
        return static_cast<long long>(vqlocalsocket->size());
    } else {
        return static_cast<long long>(self->QLocalSocket::size());
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnSize(const QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_Size_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLocalSocket_Seek(QLocalSocket* self, long long pos) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return vqlocalsocket->seek(static_cast<qint64>(pos));
    } else {
        return self->QLocalSocket::seek(static_cast<qint64>(pos));
    }
}

// Base class handler implementation
bool QLocalSocket_QBaseSeek(QLocalSocket* self, long long pos) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_Seek_IsBase(true);
        return vqlocalsocket->seek(static_cast<qint64>(pos));
    } else {
        return self->QLocalSocket::seek(static_cast<qint64>(pos));
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnSeek(QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_Seek_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Seek_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLocalSocket_AtEnd(const QLocalSocket* self) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return vqlocalsocket->atEnd();
    } else {
        return self->QLocalSocket::atEnd();
    }
}

// Base class handler implementation
bool QLocalSocket_QBaseAtEnd(const QLocalSocket* self) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_AtEnd_IsBase(true);
        return vqlocalsocket->atEnd();
    } else {
        return self->QLocalSocket::atEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnAtEnd(const QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_AtEnd_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_AtEnd_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLocalSocket_Reset(QLocalSocket* self) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return vqlocalsocket->reset();
    } else {
        return self->QLocalSocket::reset();
    }
}

// Base class handler implementation
bool QLocalSocket_QBaseReset(QLocalSocket* self) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_Reset_IsBase(true);
        return vqlocalsocket->reset();
    } else {
        return self->QLocalSocket::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnReset(QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_Reset_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLocalSocket_Event(QLocalSocket* self, QEvent* event) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return vqlocalsocket->event(event);
    } else {
        return self->QLocalSocket::event(event);
    }
}

// Base class handler implementation
bool QLocalSocket_QBaseEvent(QLocalSocket* self, QEvent* event) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_Event_IsBase(true);
        return vqlocalsocket->event(event);
    } else {
        return self->QLocalSocket::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnEvent(QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_Event_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLocalSocket_EventFilter(QLocalSocket* self, QObject* watched, QEvent* event) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return vqlocalsocket->eventFilter(watched, event);
    } else {
        return self->QLocalSocket::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QLocalSocket_QBaseEventFilter(QLocalSocket* self, QObject* watched, QEvent* event) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_EventFilter_IsBase(true);
        return vqlocalsocket->eventFilter(watched, event);
    } else {
        return self->QLocalSocket::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnEventFilter(QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_EventFilter_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QLocalSocket_TimerEvent(QLocalSocket* self, QTimerEvent* event) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->timerEvent(event);
    } else {
        ((VirtualQLocalSocket*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QLocalSocket_QBaseTimerEvent(QLocalSocket* self, QTimerEvent* event) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_TimerEvent_IsBase(true);
        vqlocalsocket->timerEvent(event);
    } else {
        ((VirtualQLocalSocket*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnTimerEvent(QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_TimerEvent_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLocalSocket_ChildEvent(QLocalSocket* self, QChildEvent* event) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->childEvent(event);
    } else {
        ((VirtualQLocalSocket*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QLocalSocket_QBaseChildEvent(QLocalSocket* self, QChildEvent* event) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_ChildEvent_IsBase(true);
        vqlocalsocket->childEvent(event);
    } else {
        ((VirtualQLocalSocket*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnChildEvent(QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_ChildEvent_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLocalSocket_CustomEvent(QLocalSocket* self, QEvent* event) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->customEvent(event);
    } else {
        ((VirtualQLocalSocket*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QLocalSocket_QBaseCustomEvent(QLocalSocket* self, QEvent* event) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_CustomEvent_IsBase(true);
        vqlocalsocket->customEvent(event);
    } else {
        ((VirtualQLocalSocket*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnCustomEvent(QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_CustomEvent_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLocalSocket_ConnectNotify(QLocalSocket* self, const QMetaMethod* signal) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->connectNotify(*signal);
    } else {
        ((VirtualQLocalSocket*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QLocalSocket_QBaseConnectNotify(QLocalSocket* self, const QMetaMethod* signal) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_ConnectNotify_IsBase(true);
        vqlocalsocket->connectNotify(*signal);
    } else {
        ((VirtualQLocalSocket*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnConnectNotify(QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_ConnectNotify_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QLocalSocket_DisconnectNotify(QLocalSocket* self, const QMetaMethod* signal) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->disconnectNotify(*signal);
    } else {
        ((VirtualQLocalSocket*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QLocalSocket_QBaseDisconnectNotify(QLocalSocket* self, const QMetaMethod* signal) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_DisconnectNotify_IsBase(true);
        vqlocalsocket->disconnectNotify(*signal);
    } else {
        ((VirtualQLocalSocket*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnDisconnectNotify(QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_DisconnectNotify_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QLocalSocket_SetOpenMode(QLocalSocket* self, int openMode) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualQLocalSocket*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
void QLocalSocket_QBaseSetOpenMode(QLocalSocket* self, int openMode) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_SetOpenMode_IsBase(true);
        vqlocalsocket->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualQLocalSocket*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnSetOpenMode(QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_SetOpenMode_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_SetOpenMode_Callback>(slot));
    }
}

// Derived class handler implementation
void QLocalSocket_SetErrorString(QLocalSocket* self, const libqt_string errorString) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setErrorString(errorString_QString);
    } else {
        ((VirtualQLocalSocket*)self)->setErrorString(errorString_QString);
    }
}

// Base class handler implementation
void QLocalSocket_QBaseSetErrorString(QLocalSocket* self, const libqt_string errorString) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_SetErrorString_IsBase(true);
        vqlocalsocket->setErrorString(errorString_QString);
    } else {
        ((VirtualQLocalSocket*)self)->setErrorString(errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnSetErrorString(QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_SetErrorString_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QLocalSocket_Sender(const QLocalSocket* self) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return vqlocalsocket->sender();
    } else {
        return ((VirtualQLocalSocket*)self)->sender();
    }
}

// Base class handler implementation
QObject* QLocalSocket_QBaseSender(const QLocalSocket* self) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_Sender_IsBase(true);
        return vqlocalsocket->sender();
    } else {
        return ((VirtualQLocalSocket*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnSender(const QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_Sender_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QLocalSocket_SenderSignalIndex(const QLocalSocket* self) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return vqlocalsocket->senderSignalIndex();
    } else {
        return ((VirtualQLocalSocket*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QLocalSocket_QBaseSenderSignalIndex(const QLocalSocket* self) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_SenderSignalIndex_IsBase(true);
        return vqlocalsocket->senderSignalIndex();
    } else {
        return ((VirtualQLocalSocket*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnSenderSignalIndex(const QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_SenderSignalIndex_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QLocalSocket_Receivers(const QLocalSocket* self, const char* signal) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return vqlocalsocket->receivers(signal);
    } else {
        return ((VirtualQLocalSocket*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QLocalSocket_QBaseReceivers(const QLocalSocket* self, const char* signal) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_Receivers_IsBase(true);
        return vqlocalsocket->receivers(signal);
    } else {
        return ((VirtualQLocalSocket*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnReceivers(const QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_Receivers_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLocalSocket_IsSignalConnected(const QLocalSocket* self, const QMetaMethod* signal) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        return vqlocalsocket->isSignalConnected(*signal);
    } else {
        return ((VirtualQLocalSocket*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QLocalSocket_QBaseIsSignalConnected(const QLocalSocket* self, const QMetaMethod* signal) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_IsSignalConnected_IsBase(true);
        return vqlocalsocket->isSignalConnected(*signal);
    } else {
        return ((VirtualQLocalSocket*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnIsSignalConnected(const QLocalSocket* self, intptr_t slot) {
    auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self));
    if (vqlocalsocket && vqlocalsocket->isVirtualQLocalSocket) {
        vqlocalsocket->setQLocalSocket_IsSignalConnected_Callback(reinterpret_cast<VirtualQLocalSocket::QLocalSocket_IsSignalConnected_Callback>(slot));
    }
}

void QLocalSocket_Delete(QLocalSocket* self) {
    delete self;
}
