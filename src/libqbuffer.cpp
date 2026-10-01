#include <QBuffer>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qbuffer.h>
#include "libqbuffer.h"
#include "libqbuffer.hxx"

QBuffer* QBuffer_new() {
    return new VirtualQBuffer();
}

QBuffer* QBuffer_new2(QObject* parent) {
    return new VirtualQBuffer(parent);
}

QMetaObject* QBuffer_MetaObject(const QBuffer* self) {
    return (QMetaObject*)self->metaObject();
}

void* QBuffer_Metacast(QBuffer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBuffer_Metacall(QBuffer* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QBuffer_Tr(const char* s) {
    auto _ret = QBuffer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBuffer_Buffer(QBuffer* self) {
    QByteArray _qb = self->buffer();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QBuffer_Buffer2(const QBuffer* self) {
    const QByteArray _qb = self->buffer();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QBuffer_SetData(QBuffer* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->setData(data_QByteArray);
}

void QBuffer_SetData2(QBuffer* self, const char* data, ptrdiff_t len) {
    self->setData(data, (qsizetype)(len));
}

libqt_string QBuffer_Data(const QBuffer* self) {
    const QByteArray _qb = self->data();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

bool QBuffer_Open(QBuffer* self, int openMode) {
    return self->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

void QBuffer_Close(QBuffer* self) {
    self->close();
}

long long QBuffer_Size(const QBuffer* self) {
    return static_cast<long long>(self->size());
}

long long QBuffer_Pos(const QBuffer* self) {
    return static_cast<long long>(self->pos());
}

bool QBuffer_Seek(QBuffer* self, long long off) {
    return self->seek(static_cast<qint64>(off));
}

bool QBuffer_AtEnd(const QBuffer* self) {
    return self->atEnd();
}

bool QBuffer_CanReadLine(const QBuffer* self) {
    return self->canReadLine();
}

void QBuffer_ConnectNotify(QBuffer* self, const QMetaMethod* param1) {
    auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self);
    if (vqbuffer) {
        vqbuffer->connectNotify(*param1);
    }
}

void QBuffer_DisconnectNotify(QBuffer* self, const QMetaMethod* param1) {
    auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self);
    if (vqbuffer) {
        vqbuffer->disconnectNotify(*param1);
    }
}

long long QBuffer_ReadData(QBuffer* self, char* data, long long maxlen) {
    auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self);
    if (vqbuffer) {
        return static_cast<long long>(vqbuffer->readData(data, static_cast<qint64>(maxlen)));
    }
    qFatal("Error: Protected method QBuffer::readData called without a directly constructed type");
}

long long QBuffer_WriteData(QBuffer* self, const char* data, long long len) {
    auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self);
    if (vqbuffer) {
        return static_cast<long long>(vqbuffer->writeData(data, static_cast<qint64>(len)));
    }
    qFatal("Error: Protected method QBuffer::writeData called without a directly constructed type");
}

libqt_string QBuffer_Tr2(const char* s, const char* c) {
    auto _ret = QBuffer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBuffer_Tr3(const char* s, const char* c, int n) {
    auto _ret = QBuffer::tr(s, c, static_cast<int>(n));
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
QMetaObject* QBuffer_SuperMetaObject(const QBuffer* self) {
    return (QMetaObject*)self->QBuffer::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnMetaObject(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self)))
        vqbuffer->qbuffer_metaobject_callback = reinterpret_cast<VirtualQBuffer::QBuffer_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QBuffer_SuperMetacast(QBuffer* self, const char* param1) {
    return self->QBuffer::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnMetacast(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self))
        vqbuffer->qbuffer_metacast_callback = reinterpret_cast<VirtualQBuffer::QBuffer_Metacast_Callback>(slot);
}

// Base class handler implementation
int QBuffer_SuperMetacall(QBuffer* self, int param1, int param2, void** param3) {
    return self->QBuffer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnMetacall(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self))
        vqbuffer->qbuffer_metacall_callback = reinterpret_cast<VirtualQBuffer::QBuffer_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QBuffer_SuperOpen(QBuffer* self, int openMode) {
    return self->QBuffer::open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnOpen(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self))
        vqbuffer->qbuffer_open_callback = reinterpret_cast<VirtualQBuffer::QBuffer_Open_Callback>(slot);
}

// Base class handler implementation
void QBuffer_SuperClose(QBuffer* self) {
    self->QBuffer::close();
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnClose(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self))
        vqbuffer->qbuffer_close_callback = reinterpret_cast<VirtualQBuffer::QBuffer_Close_Callback>(slot);
}

// Base class handler implementation
long long QBuffer_SuperSize(const QBuffer* self) {
    return static_cast<long long>(self->QBuffer::size());
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnSize(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self)))
        vqbuffer->qbuffer_size_callback = reinterpret_cast<VirtualQBuffer::QBuffer_Size_Callback>(slot);
}

// Base class handler implementation
long long QBuffer_SuperPos(const QBuffer* self) {
    return static_cast<long long>(self->QBuffer::pos());
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnPos(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self)))
        vqbuffer->qbuffer_pos_callback = reinterpret_cast<VirtualQBuffer::QBuffer_Pos_Callback>(slot);
}

// Base class handler implementation
bool QBuffer_SuperSeek(QBuffer* self, long long off) {
    return self->QBuffer::seek(static_cast<qint64>(off));
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnSeek(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self))
        vqbuffer->qbuffer_seek_callback = reinterpret_cast<VirtualQBuffer::QBuffer_Seek_Callback>(slot);
}

// Base class handler implementation
bool QBuffer_SuperAtEnd(const QBuffer* self) {
    return self->QBuffer::atEnd();
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnAtEnd(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self)))
        vqbuffer->qbuffer_atend_callback = reinterpret_cast<VirtualQBuffer::QBuffer_AtEnd_Callback>(slot);
}

// Base class handler implementation
bool QBuffer_SuperCanReadLine(const QBuffer* self) {
    return self->QBuffer::canReadLine();
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnCanReadLine(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self)))
        vqbuffer->qbuffer_canreadline_callback = reinterpret_cast<VirtualQBuffer::QBuffer_CanReadLine_Callback>(slot);
}

// Base class handler implementation
void QBuffer_SuperConnectNotify(QBuffer* self, const QMetaMethod* param1) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->QBuffer::connectNotify(*param1);
    } else
        qFatal("Error: Protected virtual method QBuffer::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnConnectNotify(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self))
        vqbuffer->qbuffer_connectnotify_callback = reinterpret_cast<VirtualQBuffer::QBuffer_ConnectNotify_Callback>(slot);
}

// Base class handler implementation
void QBuffer_SuperDisconnectNotify(QBuffer* self, const QMetaMethod* param1) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->QBuffer::disconnectNotify(*param1);
    } else
        qFatal("Error: Protected virtual method QBuffer::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnDisconnectNotify(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self))
        vqbuffer->qbuffer_disconnectnotify_callback = reinterpret_cast<VirtualQBuffer::QBuffer_DisconnectNotify_Callback>(slot);
}

// Base class handler implementation
long long QBuffer_SuperReadData(QBuffer* self, char* data, long long maxlen) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        return static_cast<long long>(vqbuffer->QBuffer::readData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QBuffer::readData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnReadData(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self))
        vqbuffer->qbuffer_readdata_callback = reinterpret_cast<VirtualQBuffer::QBuffer_ReadData_Callback>(slot);
}

// Base class handler implementation
long long QBuffer_SuperWriteData(QBuffer* self, const char* data, long long len) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        return static_cast<long long>(vqbuffer->QBuffer::writeData(data, static_cast<qint64>(len)));
    } else
        qFatal("Error: Protected virtual method QBuffer::writeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnWriteData(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self))
        vqbuffer->qbuffer_writedata_callback = reinterpret_cast<VirtualQBuffer::QBuffer_WriteData_Callback>(slot);
}

// Derived class handler implementation
bool QBuffer_IsSequential(const QBuffer* self) {
    return self->isSequential();
}

// Base class handler implementation
bool QBuffer_SuperIsSequential(const QBuffer* self) {
    return self->QBuffer::isSequential();
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnIsSequential(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self)))
        vqbuffer->qbuffer_issequential_callback = reinterpret_cast<VirtualQBuffer::QBuffer_IsSequential_Callback>(slot);
}

// Derived class handler implementation
bool QBuffer_Reset(QBuffer* self) {
    return self->reset();
}

// Base class handler implementation
bool QBuffer_SuperReset(QBuffer* self) {
    return self->QBuffer::reset();
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnReset(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self))
        vqbuffer->qbuffer_reset_callback = reinterpret_cast<VirtualQBuffer::QBuffer_Reset_Callback>(slot);
}

// Derived class handler implementation
long long QBuffer_BytesAvailable(const QBuffer* self) {
    return static_cast<long long>(self->bytesAvailable());
}

// Base class handler implementation
long long QBuffer_SuperBytesAvailable(const QBuffer* self) {
    return static_cast<long long>(self->QBuffer::bytesAvailable());
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnBytesAvailable(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self)))
        vqbuffer->qbuffer_bytesavailable_callback = reinterpret_cast<VirtualQBuffer::QBuffer_BytesAvailable_Callback>(slot);
}

// Derived class handler implementation
long long QBuffer_BytesToWrite(const QBuffer* self) {
    return static_cast<long long>(self->bytesToWrite());
}

// Base class handler implementation
long long QBuffer_SuperBytesToWrite(const QBuffer* self) {
    return static_cast<long long>(self->QBuffer::bytesToWrite());
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnBytesToWrite(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self)))
        vqbuffer->qbuffer_bytestowrite_callback = reinterpret_cast<VirtualQBuffer::QBuffer_BytesToWrite_Callback>(slot);
}

// Derived class handler implementation
bool QBuffer_WaitForReadyRead(QBuffer* self, int msecs) {
    return self->waitForReadyRead(static_cast<int>(msecs));
}

// Base class handler implementation
bool QBuffer_SuperWaitForReadyRead(QBuffer* self, int msecs) {
    return self->QBuffer::waitForReadyRead(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnWaitForReadyRead(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self))
        vqbuffer->qbuffer_waitforreadyread_callback = reinterpret_cast<VirtualQBuffer::QBuffer_WaitForReadyRead_Callback>(slot);
}

// Derived class handler implementation
bool QBuffer_WaitForBytesWritten(QBuffer* self, int msecs) {
    return self->waitForBytesWritten(static_cast<int>(msecs));
}

// Base class handler implementation
bool QBuffer_SuperWaitForBytesWritten(QBuffer* self, int msecs) {
    return self->QBuffer::waitForBytesWritten(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnWaitForBytesWritten(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self))
        vqbuffer->qbuffer_waitforbyteswritten_callback = reinterpret_cast<VirtualQBuffer::QBuffer_WaitForBytesWritten_Callback>(slot);
}

// Derived class handler implementation
long long QBuffer_ReadLineData(QBuffer* self, char* data, long long maxlen) {
    auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self);
    if (vqbuffer) {
        return static_cast<long long>(vqbuffer->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        qFatal("Error: Protected virtual method QBuffer::readLineData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QBuffer_SuperReadLineData(QBuffer* self, char* data, long long maxlen) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        return static_cast<long long>(vqbuffer->QBuffer::readLineData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QBuffer::readLineData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnReadLineData(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self))
        vqbuffer->qbuffer_readlinedata_callback = reinterpret_cast<VirtualQBuffer::QBuffer_ReadLineData_Callback>(slot);
}

// Derived class handler implementation
long long QBuffer_SkipData(QBuffer* self, long long maxSize) {
    auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self);
    if (vqbuffer) {
        return static_cast<long long>(vqbuffer->skipData(static_cast<qint64>(maxSize)));
    } else {
        qFatal("Error: Protected virtual method QBuffer::skipData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QBuffer_SuperSkipData(QBuffer* self, long long maxSize) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        return static_cast<long long>(vqbuffer->QBuffer::skipData(static_cast<qint64>(maxSize)));
    } else
        qFatal("Error: Protected virtual method QBuffer::skipData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnSkipData(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self))
        vqbuffer->qbuffer_skipdata_callback = reinterpret_cast<VirtualQBuffer::QBuffer_SkipData_Callback>(slot);
}

// Derived class handler implementation
bool QBuffer_Event(QBuffer* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QBuffer_SuperEvent(QBuffer* self, QEvent* event) {
    return self->QBuffer::event(event);
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnEvent(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self))
        vqbuffer->qbuffer_event_callback = reinterpret_cast<VirtualQBuffer::QBuffer_Event_Callback>(slot);
}

// Derived class handler implementation
bool QBuffer_EventFilter(QBuffer* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QBuffer_SuperEventFilter(QBuffer* self, QObject* watched, QEvent* event) {
    return self->QBuffer::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnEventFilter(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self))
        vqbuffer->qbuffer_eventfilter_callback = reinterpret_cast<VirtualQBuffer::QBuffer_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QBuffer_TimerEvent(QBuffer* self, QTimerEvent* event) {
    auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self);
    if (vqbuffer) {
        vqbuffer->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBuffer::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBuffer_SuperTimerEvent(QBuffer* self, QTimerEvent* event) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->QBuffer::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QBuffer::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnTimerEvent(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self))
        vqbuffer->qbuffer_timerevent_callback = reinterpret_cast<VirtualQBuffer::QBuffer_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QBuffer_ChildEvent(QBuffer* self, QChildEvent* event) {
    auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self);
    if (vqbuffer) {
        vqbuffer->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBuffer::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBuffer_SuperChildEvent(QBuffer* self, QChildEvent* event) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->QBuffer::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QBuffer::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnChildEvent(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self))
        vqbuffer->qbuffer_childevent_callback = reinterpret_cast<VirtualQBuffer::QBuffer_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QBuffer_CustomEvent(QBuffer* self, QEvent* event) {
    auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self);
    if (vqbuffer) {
        vqbuffer->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBuffer::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBuffer_SuperCustomEvent(QBuffer* self, QEvent* event) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->QBuffer::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QBuffer::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBuffer_OnCustomEvent(QBuffer* self, intptr_t slot) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self))
        vqbuffer->qbuffer_customevent_callback = reinterpret_cast<VirtualQBuffer::QBuffer_CustomEvent_Callback>(slot);
}

// Derived class protected handler implementation
void QBuffer_SetOpenMode(QBuffer* self, int openMode) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        vqbuffer->VirtualQBuffer::setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else
        qFatal("Error: Protected method QBuffer::setOpenMode called without a directly constructed type");
}

// Derived class protected handler implementation
void QBuffer_SetErrorString(QBuffer* self, const libqt_string errorString) {
    if (auto* vqbuffer = dynamic_cast<VirtualQBuffer*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqbuffer->VirtualQBuffer::setErrorString(errorString_QString);
    } else
        qFatal("Error: Protected method QBuffer::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QBuffer_Sender(const QBuffer* self) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        return vqbuffer->VirtualQBuffer::sender();
    } else
        qFatal("Error: Protected method QBuffer::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QBuffer_SenderSignalIndex(const QBuffer* self) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        return vqbuffer->VirtualQBuffer::senderSignalIndex();
    } else
        qFatal("Error: Protected method QBuffer::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QBuffer_Receivers(const QBuffer* self, const char* signal) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        return vqbuffer->VirtualQBuffer::receivers(signal);
    } else
        qFatal("Error: Protected method QBuffer::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QBuffer_IsSignalConnected(const QBuffer* self, const QMetaMethod* signal) {
    if (auto* vqbuffer = const_cast<VirtualQBuffer*>(dynamic_cast<const VirtualQBuffer*>(self))) {
        return vqbuffer->VirtualQBuffer::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QBuffer::isSignalConnected called without a directly constructed type");
}

void QBuffer_Delete(QBuffer* self) {
    delete self;
}
