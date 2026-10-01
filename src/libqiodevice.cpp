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
#include <qiodevice.h>
#include "libqiodevice.h"
#include "libqiodevice.hxx"

QIODevice* QIODevice_new() {
    return new VirtualQIODevice();
}

QIODevice* QIODevice_new2(QObject* parent) {
    return new VirtualQIODevice(parent);
}

QIODeviceBase* QIODevice_AsQIODeviceBase(const QIODevice* self) {
    return const_cast<QIODevice*>(self);
}

QMetaObject* QIODevice_MetaObject(const QIODevice* self) {
    return (QMetaObject*)self->metaObject();
}

void* QIODevice_Metacast(QIODevice* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QIODevice_Metacall(QIODevice* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QIODevice_Tr(const char* s) {
    auto _ret = QIODevice::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QIODevice_OpenMode(const QIODevice* self) {
    return static_cast<int>(self->openMode());
}

void QIODevice_SetTextModeEnabled(QIODevice* self, bool enabled) {
    self->setTextModeEnabled(enabled);
}

bool QIODevice_IsTextModeEnabled(const QIODevice* self) {
    return self->isTextModeEnabled();
}

bool QIODevice_IsOpen(const QIODevice* self) {
    return self->isOpen();
}

bool QIODevice_IsReadable(const QIODevice* self) {
    return self->isReadable();
}

bool QIODevice_IsWritable(const QIODevice* self) {
    return self->isWritable();
}

bool QIODevice_IsSequential(const QIODevice* self) {
    return self->isSequential();
}

int QIODevice_ReadChannelCount(const QIODevice* self) {
    return self->readChannelCount();
}

int QIODevice_WriteChannelCount(const QIODevice* self) {
    return self->writeChannelCount();
}

int QIODevice_CurrentReadChannel(const QIODevice* self) {
    return self->currentReadChannel();
}

void QIODevice_SetCurrentReadChannel(QIODevice* self, int channel) {
    self->setCurrentReadChannel(static_cast<int>(channel));
}

int QIODevice_CurrentWriteChannel(const QIODevice* self) {
    return self->currentWriteChannel();
}

void QIODevice_SetCurrentWriteChannel(QIODevice* self, int channel) {
    self->setCurrentWriteChannel(static_cast<int>(channel));
}

bool QIODevice_Open(QIODevice* self, int mode) {
    return self->open(static_cast<QIODeviceBase::OpenMode>(mode));
}

void QIODevice_Close(QIODevice* self) {
    self->close();
}

long long QIODevice_Pos(const QIODevice* self) {
    return static_cast<long long>(self->pos());
}

long long QIODevice_Size(const QIODevice* self) {
    return static_cast<long long>(self->size());
}

bool QIODevice_Seek(QIODevice* self, long long pos) {
    return self->seek(static_cast<qint64>(pos));
}

bool QIODevice_AtEnd(const QIODevice* self) {
    return self->atEnd();
}

bool QIODevice_Reset(QIODevice* self) {
    return self->reset();
}

long long QIODevice_BytesAvailable(const QIODevice* self) {
    return static_cast<long long>(self->bytesAvailable());
}

long long QIODevice_BytesToWrite(const QIODevice* self) {
    return static_cast<long long>(self->bytesToWrite());
}

long long QIODevice_Read(QIODevice* self, char* data, long long maxlen) {
    return static_cast<long long>(self->read(data, static_cast<qint64>(maxlen)));
}

libqt_string QIODevice_Read2(QIODevice* self, long long maxlen) {
    QByteArray _qb = self->read(static_cast<qint64>(maxlen));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QIODevice_ReadAll(QIODevice* self) {
    QByteArray _qb = self->readAll();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

long long QIODevice_ReadLine(QIODevice* self, char* data, long long maxlen) {
    return static_cast<long long>(self->readLine(data, static_cast<qint64>(maxlen)));
}

libqt_string QIODevice_ReadLine2(QIODevice* self) {
    QByteArray _qb = self->readLine();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

bool QIODevice_CanReadLine(const QIODevice* self) {
    return self->canReadLine();
}

void QIODevice_StartTransaction(QIODevice* self) {
    self->startTransaction();
}

void QIODevice_CommitTransaction(QIODevice* self) {
    self->commitTransaction();
}

void QIODevice_RollbackTransaction(QIODevice* self) {
    self->rollbackTransaction();
}

bool QIODevice_IsTransactionStarted(const QIODevice* self) {
    return self->isTransactionStarted();
}

long long QIODevice_Write(QIODevice* self, const char* data, long long len) {
    return static_cast<long long>(self->write(data, static_cast<qint64>(len)));
}

long long QIODevice_Write2(QIODevice* self, const char* data) {
    return static_cast<long long>(self->write(data));
}

long long QIODevice_Write3(QIODevice* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return static_cast<long long>(self->write(data_QByteArray));
}

long long QIODevice_Peek(QIODevice* self, char* data, long long maxlen) {
    return static_cast<long long>(self->peek(data, static_cast<qint64>(maxlen)));
}

libqt_string QIODevice_Peek2(QIODevice* self, long long maxlen) {
    QByteArray _qb = self->peek(static_cast<qint64>(maxlen));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

long long QIODevice_Skip(QIODevice* self, long long maxSize) {
    return static_cast<long long>(self->skip(static_cast<qint64>(maxSize)));
}

bool QIODevice_WaitForReadyRead(QIODevice* self, int msecs) {
    return self->waitForReadyRead(static_cast<int>(msecs));
}

bool QIODevice_WaitForBytesWritten(QIODevice* self, int msecs) {
    return self->waitForBytesWritten(static_cast<int>(msecs));
}

void QIODevice_UngetChar(QIODevice* self, char c) {
    self->ungetChar(static_cast<char>(c));
}

bool QIODevice_PutChar(QIODevice* self, char c) {
    return self->putChar(static_cast<char>(c));
}

bool QIODevice_GetChar(QIODevice* self, char* c) {
    return self->getChar(c);
}

libqt_string QIODevice_ErrorString(const QIODevice* self) {
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

void QIODevice_ReadyRead(QIODevice* self) {
    self->readyRead();
}

void QIODevice_Connect_ReadyRead(QIODevice* self, intptr_t slot) {
    void (*slotFunc)(QIODevice*) = reinterpret_cast<void (*)(QIODevice*)>(slot);
    QIODevice::connect(self,
                       static_cast<void (QIODevice::*)()>(&QIODevice::readyRead),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

void QIODevice_ChannelReadyRead(QIODevice* self, int channel) {
    self->channelReadyRead(static_cast<int>(channel));
}

void QIODevice_Connect_ChannelReadyRead(QIODevice* self, intptr_t slot) {
    void (*slotFunc)(QIODevice*, int) = reinterpret_cast<void (*)(QIODevice*, int)>(slot);
    QIODevice::connect(self,
                       static_cast<void (QIODevice::*)(int)>(&QIODevice::channelReadyRead),
                       [self, slotFunc](int channel) {
                           int sigval1 = channel;
                           slotFunc(self, sigval1);
                       });
}

void QIODevice_BytesWritten(QIODevice* self, long long bytes) {
    self->bytesWritten(static_cast<qint64>(bytes));
}

void QIODevice_Connect_BytesWritten(QIODevice* self, intptr_t slot) {
    void (*slotFunc)(QIODevice*, long long) = reinterpret_cast<void (*)(QIODevice*, long long)>(slot);
    QIODevice::connect(self,
                       static_cast<void (QIODevice::*)(qint64)>(&QIODevice::bytesWritten),
                       [self, slotFunc](qint64 bytes) {
                           long long sigval1 = static_cast<long long>(bytes);
                           slotFunc(self, sigval1);
                       });
}

void QIODevice_ChannelBytesWritten(QIODevice* self, int channel, long long bytes) {
    self->channelBytesWritten(static_cast<int>(channel), static_cast<qint64>(bytes));
}

void QIODevice_Connect_ChannelBytesWritten(QIODevice* self, intptr_t slot) {
    void (*slotFunc)(QIODevice*, int, long long) = reinterpret_cast<void (*)(QIODevice*, int, long long)>(slot);
    QIODevice::connect(self,
                       static_cast<void (QIODevice::*)(int, qint64)>(&QIODevice::channelBytesWritten),
                       [self, slotFunc](int channel, qint64 bytes) {
                           int sigval1 = channel;
                           long long sigval2 = static_cast<long long>(bytes);
                           slotFunc(self, sigval1, sigval2);
                       });
}

void QIODevice_AboutToClose(QIODevice* self) {
    self->aboutToClose();
}

void QIODevice_Connect_AboutToClose(QIODevice* self, intptr_t slot) {
    void (*slotFunc)(QIODevice*) = reinterpret_cast<void (*)(QIODevice*)>(slot);
    QIODevice::connect(self,
                       static_cast<void (QIODevice::*)()>(&QIODevice::aboutToClose),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

void QIODevice_ReadChannelFinished(QIODevice* self) {
    self->readChannelFinished();
}

void QIODevice_Connect_ReadChannelFinished(QIODevice* self, intptr_t slot) {
    void (*slotFunc)(QIODevice*) = reinterpret_cast<void (*)(QIODevice*)>(slot);
    QIODevice::connect(self,
                       static_cast<void (QIODevice::*)()>(&QIODevice::readChannelFinished),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

long long QIODevice_ReadData(QIODevice* self, char* data, long long maxlen) {
    auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
    if (vqiodevice) {
        return static_cast<long long>(vqiodevice->readData(data, static_cast<qint64>(maxlen)));
    }
    qFatal("Error: Protected method QIODevice::readData called without a directly constructed type");
}

long long QIODevice_ReadLineData(QIODevice* self, char* data, long long maxlen) {
    auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
    if (vqiodevice) {
        return static_cast<long long>(vqiodevice->readLineData(data, static_cast<qint64>(maxlen)));
    }
    qFatal("Error: Protected method QIODevice::readLineData called without a directly constructed type");
}

long long QIODevice_SkipData(QIODevice* self, long long maxSize) {
    auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
    if (vqiodevice) {
        return static_cast<long long>(vqiodevice->skipData(static_cast<qint64>(maxSize)));
    }
    qFatal("Error: Protected method QIODevice::skipData called without a directly constructed type");
}

long long QIODevice_WriteData(QIODevice* self, const char* data, long long len) {
    auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
    if (vqiodevice) {
        return static_cast<long long>(vqiodevice->writeData(data, static_cast<qint64>(len)));
    }
    qFatal("Error: Protected method QIODevice::writeData called without a directly constructed type");
}

libqt_string QIODevice_Tr2(const char* s, const char* c) {
    auto _ret = QIODevice::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QIODevice_Tr3(const char* s, const char* c, int n) {
    auto _ret = QIODevice::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QIODevice_ReadLine1(QIODevice* self, long long maxlen) {
    QByteArray _qb = self->readLine(static_cast<qint64>(maxlen));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

// Base class handler implementation
QMetaObject* QIODevice_SuperMetaObject(const QIODevice* self) {
    return (QMetaObject*)self->QIODevice::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnMetaObject(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self)))
        vqiodevice->qiodevice_metaobject_callback = reinterpret_cast<VirtualQIODevice::QIODevice_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QIODevice_SuperMetacast(QIODevice* self, const char* param1) {
    return self->QIODevice::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnMetacast(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self))
        vqiodevice->qiodevice_metacast_callback = reinterpret_cast<VirtualQIODevice::QIODevice_Metacast_Callback>(slot);
}

// Base class handler implementation
int QIODevice_SuperMetacall(QIODevice* self, int param1, int param2, void** param3) {
    return self->QIODevice::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnMetacall(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self))
        vqiodevice->qiodevice_metacall_callback = reinterpret_cast<VirtualQIODevice::QIODevice_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QIODevice_SuperIsSequential(const QIODevice* self) {
    return self->QIODevice::isSequential();
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnIsSequential(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self)))
        vqiodevice->qiodevice_issequential_callback = reinterpret_cast<VirtualQIODevice::QIODevice_IsSequential_Callback>(slot);
}

// Base class handler implementation
bool QIODevice_SuperOpen(QIODevice* self, int mode) {
    return self->QIODevice::open(static_cast<QIODeviceBase::OpenMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnOpen(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self))
        vqiodevice->qiodevice_open_callback = reinterpret_cast<VirtualQIODevice::QIODevice_Open_Callback>(slot);
}

// Base class handler implementation
void QIODevice_SuperClose(QIODevice* self) {
    self->QIODevice::close();
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnClose(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self))
        vqiodevice->qiodevice_close_callback = reinterpret_cast<VirtualQIODevice::QIODevice_Close_Callback>(slot);
}

// Base class handler implementation
long long QIODevice_SuperPos(const QIODevice* self) {
    return static_cast<long long>(self->QIODevice::pos());
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnPos(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self)))
        vqiodevice->qiodevice_pos_callback = reinterpret_cast<VirtualQIODevice::QIODevice_Pos_Callback>(slot);
}

// Base class handler implementation
long long QIODevice_SuperSize(const QIODevice* self) {
    return static_cast<long long>(self->QIODevice::size());
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnSize(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self)))
        vqiodevice->qiodevice_size_callback = reinterpret_cast<VirtualQIODevice::QIODevice_Size_Callback>(slot);
}

// Base class handler implementation
bool QIODevice_SuperSeek(QIODevice* self, long long pos) {
    return self->QIODevice::seek(static_cast<qint64>(pos));
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnSeek(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self))
        vqiodevice->qiodevice_seek_callback = reinterpret_cast<VirtualQIODevice::QIODevice_Seek_Callback>(slot);
}

// Base class handler implementation
bool QIODevice_SuperAtEnd(const QIODevice* self) {
    return self->QIODevice::atEnd();
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnAtEnd(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self)))
        vqiodevice->qiodevice_atend_callback = reinterpret_cast<VirtualQIODevice::QIODevice_AtEnd_Callback>(slot);
}

// Base class handler implementation
bool QIODevice_SuperReset(QIODevice* self) {
    return self->QIODevice::reset();
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnReset(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self))
        vqiodevice->qiodevice_reset_callback = reinterpret_cast<VirtualQIODevice::QIODevice_Reset_Callback>(slot);
}

// Base class handler implementation
long long QIODevice_SuperBytesAvailable(const QIODevice* self) {
    return static_cast<long long>(self->QIODevice::bytesAvailable());
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnBytesAvailable(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self)))
        vqiodevice->qiodevice_bytesavailable_callback = reinterpret_cast<VirtualQIODevice::QIODevice_BytesAvailable_Callback>(slot);
}

// Base class handler implementation
long long QIODevice_SuperBytesToWrite(const QIODevice* self) {
    return static_cast<long long>(self->QIODevice::bytesToWrite());
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnBytesToWrite(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self)))
        vqiodevice->qiodevice_bytestowrite_callback = reinterpret_cast<VirtualQIODevice::QIODevice_BytesToWrite_Callback>(slot);
}

// Base class handler implementation
bool QIODevice_SuperCanReadLine(const QIODevice* self) {
    return self->QIODevice::canReadLine();
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnCanReadLine(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self)))
        vqiodevice->qiodevice_canreadline_callback = reinterpret_cast<VirtualQIODevice::QIODevice_CanReadLine_Callback>(slot);
}

// Base class handler implementation
bool QIODevice_SuperWaitForReadyRead(QIODevice* self, int msecs) {
    return self->QIODevice::waitForReadyRead(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnWaitForReadyRead(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self))
        vqiodevice->qiodevice_waitforreadyread_callback = reinterpret_cast<VirtualQIODevice::QIODevice_WaitForReadyRead_Callback>(slot);
}

// Base class handler implementation
bool QIODevice_SuperWaitForBytesWritten(QIODevice* self, int msecs) {
    return self->QIODevice::waitForBytesWritten(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnWaitForBytesWritten(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self))
        vqiodevice->qiodevice_waitforbyteswritten_callback = reinterpret_cast<VirtualQIODevice::QIODevice_WaitForBytesWritten_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnReadData(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self))
        vqiodevice->qiodevice_readdata_callback = reinterpret_cast<VirtualQIODevice::QIODevice_ReadData_Callback>(slot);
}

// Base class handler implementation
long long QIODevice_SuperReadLineData(QIODevice* self, char* data, long long maxlen) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        return static_cast<long long>(vqiodevice->QIODevice::readLineData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QIODevice::readLineData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnReadLineData(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self))
        vqiodevice->qiodevice_readlinedata_callback = reinterpret_cast<VirtualQIODevice::QIODevice_ReadLineData_Callback>(slot);
}

// Base class handler implementation
long long QIODevice_SuperSkipData(QIODevice* self, long long maxSize) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        return static_cast<long long>(vqiodevice->QIODevice::skipData(static_cast<qint64>(maxSize)));
    } else
        qFatal("Error: Protected virtual method QIODevice::skipData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnSkipData(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self))
        vqiodevice->qiodevice_skipdata_callback = reinterpret_cast<VirtualQIODevice::QIODevice_SkipData_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnWriteData(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self))
        vqiodevice->qiodevice_writedata_callback = reinterpret_cast<VirtualQIODevice::QIODevice_WriteData_Callback>(slot);
}

// Derived class handler implementation
bool QIODevice_Event(QIODevice* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QIODevice_SuperEvent(QIODevice* self, QEvent* event) {
    return self->QIODevice::event(event);
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnEvent(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self))
        vqiodevice->qiodevice_event_callback = reinterpret_cast<VirtualQIODevice::QIODevice_Event_Callback>(slot);
}

// Derived class handler implementation
bool QIODevice_EventFilter(QIODevice* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QIODevice_SuperEventFilter(QIODevice* self, QObject* watched, QEvent* event) {
    return self->QIODevice::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnEventFilter(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self))
        vqiodevice->qiodevice_eventfilter_callback = reinterpret_cast<VirtualQIODevice::QIODevice_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QIODevice_TimerEvent(QIODevice* self, QTimerEvent* event) {
    auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
    if (vqiodevice) {
        vqiodevice->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QIODevice::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QIODevice_SuperTimerEvent(QIODevice* self, QTimerEvent* event) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->QIODevice::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QIODevice::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnTimerEvent(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self))
        vqiodevice->qiodevice_timerevent_callback = reinterpret_cast<VirtualQIODevice::QIODevice_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QIODevice_ChildEvent(QIODevice* self, QChildEvent* event) {
    auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
    if (vqiodevice) {
        vqiodevice->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QIODevice::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QIODevice_SuperChildEvent(QIODevice* self, QChildEvent* event) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->QIODevice::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QIODevice::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnChildEvent(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self))
        vqiodevice->qiodevice_childevent_callback = reinterpret_cast<VirtualQIODevice::QIODevice_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QIODevice_CustomEvent(QIODevice* self, QEvent* event) {
    auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
    if (vqiodevice) {
        vqiodevice->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QIODevice::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QIODevice_SuperCustomEvent(QIODevice* self, QEvent* event) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->QIODevice::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QIODevice::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnCustomEvent(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self))
        vqiodevice->qiodevice_customevent_callback = reinterpret_cast<VirtualQIODevice::QIODevice_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QIODevice_ConnectNotify(QIODevice* self, const QMetaMethod* signal) {
    auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
    if (vqiodevice) {
        vqiodevice->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QIODevice::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QIODevice_SuperConnectNotify(QIODevice* self, const QMetaMethod* signal) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->QIODevice::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QIODevice::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnConnectNotify(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self))
        vqiodevice->qiodevice_connectnotify_callback = reinterpret_cast<VirtualQIODevice::QIODevice_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QIODevice_DisconnectNotify(QIODevice* self, const QMetaMethod* signal) {
    auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self);
    if (vqiodevice) {
        vqiodevice->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QIODevice::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QIODevice_SuperDisconnectNotify(QIODevice* self, const QMetaMethod* signal) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->QIODevice::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QIODevice::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnDisconnectNotify(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self))
        vqiodevice->qiodevice_disconnectnotify_callback = reinterpret_cast<VirtualQIODevice::QIODevice_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QIODevice_SetOpenMode(QIODevice* self, int openMode) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->VirtualQIODevice::setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else
        qFatal("Error: Protected method QIODevice::setOpenMode called without a directly constructed type");
}

// Derived class protected handler implementation
void QIODevice_SetErrorString(QIODevice* self, const libqt_string errorString) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqiodevice->VirtualQIODevice::setErrorString(errorString_QString);
    } else
        qFatal("Error: Protected method QIODevice::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QIODevice_Sender(const QIODevice* self) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        return vqiodevice->VirtualQIODevice::sender();
    } else
        qFatal("Error: Protected method QIODevice::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QIODevice_SenderSignalIndex(const QIODevice* self) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        return vqiodevice->VirtualQIODevice::senderSignalIndex();
    } else
        qFatal("Error: Protected method QIODevice::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QIODevice_Receivers(const QIODevice* self, const char* signal) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        return vqiodevice->VirtualQIODevice::receivers(signal);
    } else
        qFatal("Error: Protected method QIODevice::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QIODevice_IsSignalConnected(const QIODevice* self, const QMetaMethod* signal) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        return vqiodevice->VirtualQIODevice::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QIODevice::isSignalConnected called without a directly constructed type");
}

void QIODevice_Delete(QIODevice* self) {
    delete self;
}
