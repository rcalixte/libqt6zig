#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QIODeviceBase>
#include <QLocalSocket>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QLocalSocket_Tr(const char* s) {
    auto _ret = QLocalSocket::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QLocalSocket_ConnectToServer(QLocalSocket* self) {
    self->connectToServer();
}

void QLocalSocket_ConnectToServer2(QLocalSocket* self, const libqt_string name) {
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
    auto _ret = self->serverName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QLocalSocket_FullServerName(const QLocalSocket* self) {
    auto _ret = self->fullServerName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QLocalSocket_Abort(QLocalSocket* self) {
    self->abort();
}

bool QLocalSocket_IsSequential(const QLocalSocket* self) {
    return self->isSequential();
}

long long QLocalSocket_BytesAvailable(const QLocalSocket* self) {
    return static_cast<long long>(self->bytesAvailable());
}

long long QLocalSocket_BytesToWrite(const QLocalSocket* self) {
    return static_cast<long long>(self->bytesToWrite());
}

bool QLocalSocket_CanReadLine(const QLocalSocket* self) {
    return self->canReadLine();
}

bool QLocalSocket_Open(QLocalSocket* self, int openMode) {
    return self->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

void QLocalSocket_Close(QLocalSocket* self) {
    self->close();
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

bool QLocalSocket_WaitForBytesWritten(QLocalSocket* self, int msecs) {
    return self->waitForBytesWritten(static_cast<int>(msecs));
}

bool QLocalSocket_WaitForConnected(QLocalSocket* self) {
    return self->waitForConnected();
}

bool QLocalSocket_WaitForDisconnected(QLocalSocket* self) {
    return self->waitForDisconnected();
}

bool QLocalSocket_WaitForReadyRead(QLocalSocket* self, int msecs) {
    return self->waitForReadyRead(static_cast<int>(msecs));
}

void QLocalSocket_Connected(QLocalSocket* self) {
    self->connected();
}

void QLocalSocket_Connect_Connected(QLocalSocket* self, intptr_t slot) {
    void (*slotFunc)(QLocalSocket*) = reinterpret_cast<void (*)(QLocalSocket*)>(slot);
    QLocalSocket::connect(self,
                          static_cast<void (QLocalSocket::*)()>(&QLocalSocket::connected),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QLocalSocket_Disconnected(QLocalSocket* self) {
    self->disconnected();
}

void QLocalSocket_Connect_Disconnected(QLocalSocket* self, intptr_t slot) {
    void (*slotFunc)(QLocalSocket*) = reinterpret_cast<void (*)(QLocalSocket*)>(slot);
    QLocalSocket::connect(self,
                          static_cast<void (QLocalSocket::*)()>(&QLocalSocket::disconnected),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QLocalSocket_ErrorOccurred(QLocalSocket* self, int socketError) {
    self->errorOccurred(static_cast<QLocalSocket::LocalSocketError>(socketError));
}

void QLocalSocket_Connect_ErrorOccurred(QLocalSocket* self, intptr_t slot) {
    void (*slotFunc)(QLocalSocket*, int) = reinterpret_cast<void (*)(QLocalSocket*, int)>(slot);
    QLocalSocket::connect(self,
                          static_cast<void (QLocalSocket::*)(QLocalSocket::LocalSocketError)>(&QLocalSocket::errorOccurred),
                          [self, slotFunc](QLocalSocket::LocalSocketError socketError) {
                              int sigval1 = static_cast<int>(socketError);
                              slotFunc(self, sigval1);
                          });
}

void QLocalSocket_StateChanged(QLocalSocket* self, int socketState) {
    self->stateChanged(static_cast<QLocalSocket::LocalSocketState>(socketState));
}

void QLocalSocket_Connect_StateChanged(QLocalSocket* self, intptr_t slot) {
    void (*slotFunc)(QLocalSocket*, int) = reinterpret_cast<void (*)(QLocalSocket*, int)>(slot);
    QLocalSocket::connect(self,
                          static_cast<void (QLocalSocket::*)(QLocalSocket::LocalSocketState)>(&QLocalSocket::stateChanged),
                          [self, slotFunc](QLocalSocket::LocalSocketState socketState) {
                              int sigval1 = static_cast<int>(socketState);
                              slotFunc(self, sigval1);
                          });
}

long long QLocalSocket_ReadData(QLocalSocket* self, char* param1, long long param2) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket) {
        return static_cast<long long>(vqlocalsocket->readData(param1, static_cast<qint64>(param2)));
    }
    qFatal("Error: Protected method QLocalSocket::readData called without a directly constructed type");
}

long long QLocalSocket_ReadLineData(QLocalSocket* self, char* data, long long maxSize) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket) {
        return static_cast<long long>(vqlocalsocket->readLineData(data, static_cast<qint64>(maxSize)));
    }
    qFatal("Error: Protected method QLocalSocket::readLineData called without a directly constructed type");
}

long long QLocalSocket_SkipData(QLocalSocket* self, long long maxSize) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket) {
        return static_cast<long long>(vqlocalsocket->skipData(static_cast<qint64>(maxSize)));
    }
    qFatal("Error: Protected method QLocalSocket::skipData called without a directly constructed type");
}

long long QLocalSocket_WriteData(QLocalSocket* self, const char* param1, long long param2) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket) {
        return static_cast<long long>(vqlocalsocket->writeData(param1, static_cast<qint64>(param2)));
    }
    qFatal("Error: Protected method QLocalSocket::writeData called without a directly constructed type");
}

libqt_string QLocalSocket_Tr2(const char* s, const char* c) {
    auto _ret = QLocalSocket::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QLocalSocket_Tr3(const char* s, const char* c, int n) {
    auto _ret = QLocalSocket::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QLocalSocket_ConnectToServer1(QLocalSocket* self, int openMode) {
    self->connectToServer(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

void QLocalSocket_ConnectToServer22(QLocalSocket* self, const libqt_string name, int openMode) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->connectToServer(name_QString, static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

bool QLocalSocket_SetSocketDescriptor2(QLocalSocket* self, intptr_t socketDescriptor, int socketState) {
    return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QLocalSocket::LocalSocketState>(socketState));
}

bool QLocalSocket_SetSocketDescriptor3(QLocalSocket* self, intptr_t socketDescriptor, int socketState, int openMode) {
    return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QLocalSocket::LocalSocketState>(socketState), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

bool QLocalSocket_WaitForConnected1(QLocalSocket* self, int msecs) {
    return self->waitForConnected(static_cast<int>(msecs));
}

bool QLocalSocket_WaitForDisconnected1(QLocalSocket* self, int msecs) {
    return self->waitForDisconnected(static_cast<int>(msecs));
}

// Base class handler implementation
QMetaObject* QLocalSocket_SuperMetaObject(const QLocalSocket* self) {
    return (QMetaObject*)self->QLocalSocket::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnMetaObject(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self)))
        vqlocalsocket->qlocalsocket_metaobject_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QLocalSocket_SuperMetacast(QLocalSocket* self, const char* param1) {
    return self->QLocalSocket::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnMetacast(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self))
        vqlocalsocket->qlocalsocket_metacast_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Metacast_Callback>(slot);
}

// Base class handler implementation
int QLocalSocket_SuperMetacall(QLocalSocket* self, int param1, int param2, void** param3) {
    return self->QLocalSocket::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnMetacall(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self))
        vqlocalsocket->qlocalsocket_metacall_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QLocalSocket_SuperIsSequential(const QLocalSocket* self) {
    return self->QLocalSocket::isSequential();
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnIsSequential(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self)))
        vqlocalsocket->qlocalsocket_issequential_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_IsSequential_Callback>(slot);
}

// Base class handler implementation
long long QLocalSocket_SuperBytesAvailable(const QLocalSocket* self) {
    return static_cast<long long>(self->QLocalSocket::bytesAvailable());
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnBytesAvailable(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self)))
        vqlocalsocket->qlocalsocket_bytesavailable_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_BytesAvailable_Callback>(slot);
}

// Base class handler implementation
long long QLocalSocket_SuperBytesToWrite(const QLocalSocket* self) {
    return static_cast<long long>(self->QLocalSocket::bytesToWrite());
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnBytesToWrite(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self)))
        vqlocalsocket->qlocalsocket_bytestowrite_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_BytesToWrite_Callback>(slot);
}

// Base class handler implementation
bool QLocalSocket_SuperCanReadLine(const QLocalSocket* self) {
    return self->QLocalSocket::canReadLine();
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnCanReadLine(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self)))
        vqlocalsocket->qlocalsocket_canreadline_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_CanReadLine_Callback>(slot);
}

// Base class handler implementation
bool QLocalSocket_SuperOpen(QLocalSocket* self, int openMode) {
    return self->QLocalSocket::open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnOpen(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self))
        vqlocalsocket->qlocalsocket_open_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Open_Callback>(slot);
}

// Base class handler implementation
void QLocalSocket_SuperClose(QLocalSocket* self) {
    self->QLocalSocket::close();
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnClose(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self))
        vqlocalsocket->qlocalsocket_close_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Close_Callback>(slot);
}

// Base class handler implementation
bool QLocalSocket_SuperWaitForBytesWritten(QLocalSocket* self, int msecs) {
    return self->QLocalSocket::waitForBytesWritten(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnWaitForBytesWritten(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self))
        vqlocalsocket->qlocalsocket_waitforbyteswritten_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_WaitForBytesWritten_Callback>(slot);
}

// Base class handler implementation
bool QLocalSocket_SuperWaitForReadyRead(QLocalSocket* self, int msecs) {
    return self->QLocalSocket::waitForReadyRead(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnWaitForReadyRead(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self))
        vqlocalsocket->qlocalsocket_waitforreadyread_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_WaitForReadyRead_Callback>(slot);
}

// Base class handler implementation
long long QLocalSocket_SuperReadData(QLocalSocket* self, char* param1, long long param2) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self)) {
        return static_cast<long long>(vqlocalsocket->QLocalSocket::readData(param1, static_cast<qint64>(param2)));
    } else
        qFatal("Error: Protected virtual method QLocalSocket::readData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnReadData(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self))
        vqlocalsocket->qlocalsocket_readdata_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_ReadData_Callback>(slot);
}

// Base class handler implementation
long long QLocalSocket_SuperReadLineData(QLocalSocket* self, char* data, long long maxSize) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self)) {
        return static_cast<long long>(vqlocalsocket->QLocalSocket::readLineData(data, static_cast<qint64>(maxSize)));
    } else
        qFatal("Error: Protected virtual method QLocalSocket::readLineData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnReadLineData(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self))
        vqlocalsocket->qlocalsocket_readlinedata_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_ReadLineData_Callback>(slot);
}

// Base class handler implementation
long long QLocalSocket_SuperSkipData(QLocalSocket* self, long long maxSize) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self)) {
        return static_cast<long long>(vqlocalsocket->QLocalSocket::skipData(static_cast<qint64>(maxSize)));
    } else
        qFatal("Error: Protected virtual method QLocalSocket::skipData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnSkipData(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self))
        vqlocalsocket->qlocalsocket_skipdata_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_SkipData_Callback>(slot);
}

// Base class handler implementation
long long QLocalSocket_SuperWriteData(QLocalSocket* self, const char* param1, long long param2) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self)) {
        return static_cast<long long>(vqlocalsocket->QLocalSocket::writeData(param1, static_cast<qint64>(param2)));
    } else
        qFatal("Error: Protected virtual method QLocalSocket::writeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnWriteData(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self))
        vqlocalsocket->qlocalsocket_writedata_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_WriteData_Callback>(slot);
}

// Derived class handler implementation
long long QLocalSocket_Pos(const QLocalSocket* self) {
    return static_cast<long long>(self->pos());
}

// Base class handler implementation
long long QLocalSocket_SuperPos(const QLocalSocket* self) {
    return static_cast<long long>(self->QLocalSocket::pos());
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnPos(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self)))
        vqlocalsocket->qlocalsocket_pos_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Pos_Callback>(slot);
}

// Derived class handler implementation
long long QLocalSocket_Size(const QLocalSocket* self) {
    return static_cast<long long>(self->size());
}

// Base class handler implementation
long long QLocalSocket_SuperSize(const QLocalSocket* self) {
    return static_cast<long long>(self->QLocalSocket::size());
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnSize(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self)))
        vqlocalsocket->qlocalsocket_size_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Size_Callback>(slot);
}

// Derived class handler implementation
bool QLocalSocket_Seek(QLocalSocket* self, long long pos) {
    return self->seek(static_cast<qint64>(pos));
}

// Base class handler implementation
bool QLocalSocket_SuperSeek(QLocalSocket* self, long long pos) {
    return self->QLocalSocket::seek(static_cast<qint64>(pos));
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnSeek(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self))
        vqlocalsocket->qlocalsocket_seek_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Seek_Callback>(slot);
}

// Derived class handler implementation
bool QLocalSocket_AtEnd(const QLocalSocket* self) {
    return self->atEnd();
}

// Base class handler implementation
bool QLocalSocket_SuperAtEnd(const QLocalSocket* self) {
    return self->QLocalSocket::atEnd();
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnAtEnd(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self)))
        vqlocalsocket->qlocalsocket_atend_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_AtEnd_Callback>(slot);
}

// Derived class handler implementation
bool QLocalSocket_Reset(QLocalSocket* self) {
    return self->reset();
}

// Base class handler implementation
bool QLocalSocket_SuperReset(QLocalSocket* self) {
    return self->QLocalSocket::reset();
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnReset(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self))
        vqlocalsocket->qlocalsocket_reset_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Reset_Callback>(slot);
}

// Derived class handler implementation
bool QLocalSocket_Event(QLocalSocket* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QLocalSocket_SuperEvent(QLocalSocket* self, QEvent* event) {
    return self->QLocalSocket::event(event);
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnEvent(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self))
        vqlocalsocket->qlocalsocket_event_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_Event_Callback>(slot);
}

// Derived class handler implementation
bool QLocalSocket_EventFilter(QLocalSocket* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QLocalSocket_SuperEventFilter(QLocalSocket* self, QObject* watched, QEvent* event) {
    return self->QLocalSocket::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnEventFilter(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self))
        vqlocalsocket->qlocalsocket_eventfilter_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QLocalSocket_TimerEvent(QLocalSocket* self, QTimerEvent* event) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket) {
        vqlocalsocket->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLocalSocket::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLocalSocket_SuperTimerEvent(QLocalSocket* self, QTimerEvent* event) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self)) {
        vqlocalsocket->QLocalSocket::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QLocalSocket::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnTimerEvent(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self))
        vqlocalsocket->qlocalsocket_timerevent_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QLocalSocket_ChildEvent(QLocalSocket* self, QChildEvent* event) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket) {
        vqlocalsocket->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLocalSocket::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLocalSocket_SuperChildEvent(QLocalSocket* self, QChildEvent* event) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self)) {
        vqlocalsocket->QLocalSocket::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QLocalSocket::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnChildEvent(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self))
        vqlocalsocket->qlocalsocket_childevent_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QLocalSocket_CustomEvent(QLocalSocket* self, QEvent* event) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket) {
        vqlocalsocket->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLocalSocket::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLocalSocket_SuperCustomEvent(QLocalSocket* self, QEvent* event) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self)) {
        vqlocalsocket->QLocalSocket::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QLocalSocket::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnCustomEvent(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self))
        vqlocalsocket->qlocalsocket_customevent_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QLocalSocket_ConnectNotify(QLocalSocket* self, const QMetaMethod* signal) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket) {
        vqlocalsocket->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QLocalSocket::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QLocalSocket_SuperConnectNotify(QLocalSocket* self, const QMetaMethod* signal) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self)) {
        vqlocalsocket->QLocalSocket::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QLocalSocket::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnConnectNotify(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self))
        vqlocalsocket->qlocalsocket_connectnotify_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QLocalSocket_DisconnectNotify(QLocalSocket* self, const QMetaMethod* signal) {
    auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self);
    if (vqlocalsocket) {
        vqlocalsocket->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QLocalSocket::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QLocalSocket_SuperDisconnectNotify(QLocalSocket* self, const QMetaMethod* signal) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self)) {
        vqlocalsocket->QLocalSocket::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QLocalSocket::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLocalSocket_OnDisconnectNotify(QLocalSocket* self, intptr_t slot) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self))
        vqlocalsocket->qlocalsocket_disconnectnotify_callback = reinterpret_cast<VirtualQLocalSocket::QLocalSocket_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QLocalSocket_SetOpenMode(QLocalSocket* self, int openMode) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self)) {
        vqlocalsocket->VirtualQLocalSocket::setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else
        qFatal("Error: Protected method QLocalSocket::setOpenMode called without a directly constructed type");
}

// Derived class protected handler implementation
void QLocalSocket_SetErrorString(QLocalSocket* self, const libqt_string errorString) {
    if (auto* vqlocalsocket = dynamic_cast<VirtualQLocalSocket*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqlocalsocket->VirtualQLocalSocket::setErrorString(errorString_QString);
    } else
        qFatal("Error: Protected method QLocalSocket::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QLocalSocket_Sender(const QLocalSocket* self) {
    if (auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self))) {
        return vqlocalsocket->VirtualQLocalSocket::sender();
    } else
        qFatal("Error: Protected method QLocalSocket::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QLocalSocket_SenderSignalIndex(const QLocalSocket* self) {
    if (auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self))) {
        return vqlocalsocket->VirtualQLocalSocket::senderSignalIndex();
    } else
        qFatal("Error: Protected method QLocalSocket::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QLocalSocket_Receivers(const QLocalSocket* self, const char* signal) {
    if (auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self))) {
        return vqlocalsocket->VirtualQLocalSocket::receivers(signal);
    } else
        qFatal("Error: Protected method QLocalSocket::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QLocalSocket_IsSignalConnected(const QLocalSocket* self, const QMetaMethod* signal) {
    if (auto* vqlocalsocket = const_cast<VirtualQLocalSocket*>(dynamic_cast<const VirtualQLocalSocket*>(self))) {
        return vqlocalsocket->VirtualQLocalSocket::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QLocalSocket::isSignalConnected called without a directly constructed type");
}

void QLocalSocket_Delete(QLocalSocket* self) {
    delete self;
}
