#include <QAudioFormat>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWaveDecoder>
#include <qwavedecoder.h>
#include "libqwavedecoder.h"
#include "libqwavedecoder.hxx"

QWaveDecoder* QWaveDecoder_new(QIODevice* device) {
    return new VirtualQWaveDecoder(device);
}

QWaveDecoder* QWaveDecoder_new2(QIODevice* device, const QAudioFormat* format) {
    return new VirtualQWaveDecoder(device, *format);
}

QWaveDecoder* QWaveDecoder_new3(QIODevice* device, QObject* parent) {
    return new VirtualQWaveDecoder(device, parent);
}

QWaveDecoder* QWaveDecoder_new4(QIODevice* device, const QAudioFormat* format, QObject* parent) {
    return new VirtualQWaveDecoder(device, *format, parent);
}

QMetaObject* QWaveDecoder_MetaObject(const QWaveDecoder* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWaveDecoder_Metacast(QWaveDecoder* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWaveDecoder_Metacall(QWaveDecoder* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QWaveDecoder_Tr(const char* s) {
    auto _ret = QWaveDecoder::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAudioFormat* QWaveDecoder_AudioFormat(const QWaveDecoder* self) {
    return new QAudioFormat(self->audioFormat());
}

QIODevice* QWaveDecoder_GetDevice(QWaveDecoder* self) {
    return self->getDevice();
}

int QWaveDecoder_Duration(const QWaveDecoder* self) {
    return self->duration();
}

long long QWaveDecoder_HeaderLength() {
    return static_cast<long long>(QWaveDecoder::headerLength());
}

bool QWaveDecoder_Open(QWaveDecoder* self, int mode) {
    return self->open(static_cast<QIODevice::OpenMode>(mode));
}

void QWaveDecoder_Close(QWaveDecoder* self) {
    self->close();
}

bool QWaveDecoder_Seek(QWaveDecoder* self, long long pos) {
    return self->seek(static_cast<qint64>(pos));
}

long long QWaveDecoder_Pos(const QWaveDecoder* self) {
    return static_cast<long long>(self->pos());
}

void QWaveDecoder_SetIODevice(QWaveDecoder* self, QIODevice* device) {
    self->setIODevice(device);
}

long long QWaveDecoder_Size(const QWaveDecoder* self) {
    return static_cast<long long>(self->size());
}

bool QWaveDecoder_IsSequential(const QWaveDecoder* self) {
    return self->isSequential();
}

long long QWaveDecoder_BytesAvailable(const QWaveDecoder* self) {
    return static_cast<long long>(self->bytesAvailable());
}

void QWaveDecoder_FormatKnown(QWaveDecoder* self) {
    self->formatKnown();
}

void QWaveDecoder_Connect_FormatKnown(QWaveDecoder* self, intptr_t slot) {
    void (*slotFunc)(QWaveDecoder*) = reinterpret_cast<void (*)(QWaveDecoder*)>(slot);
    QWaveDecoder::connect(self,
                          static_cast<void (QWaveDecoder::*)()>(&QWaveDecoder::formatKnown),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void QWaveDecoder_ParsingError(QWaveDecoder* self) {
    self->parsingError();
}

void QWaveDecoder_Connect_ParsingError(QWaveDecoder* self, intptr_t slot) {
    void (*slotFunc)(QWaveDecoder*) = reinterpret_cast<void (*)(QWaveDecoder*)>(slot);
    QWaveDecoder::connect(self,
                          static_cast<void (QWaveDecoder::*)()>(&QWaveDecoder::parsingError),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

libqt_string QWaveDecoder_Tr2(const char* s, const char* c) {
    auto _ret = QWaveDecoder::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWaveDecoder_Tr3(const char* s, const char* c, int n) {
    auto _ret = QWaveDecoder::tr(s, c, static_cast<int>(n));
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
QMetaObject* QWaveDecoder_SuperMetaObject(const QWaveDecoder* self) {
    return (QMetaObject*)self->QWaveDecoder::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnMetaObject(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self)))
        vqwavedecoder->qwavedecoder_metaobject_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QWaveDecoder_SuperMetacast(QWaveDecoder* self, const char* param1) {
    return self->QWaveDecoder::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnMetacast(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self))
        vqwavedecoder->qwavedecoder_metacast_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Metacast_Callback>(slot);
}

// Base class handler implementation
int QWaveDecoder_SuperMetacall(QWaveDecoder* self, int param1, int param2, void** param3) {
    return self->QWaveDecoder::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnMetacall(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self))
        vqwavedecoder->qwavedecoder_metacall_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QWaveDecoder_SuperOpen(QWaveDecoder* self, int mode) {
    return self->QWaveDecoder::open(static_cast<QIODevice::OpenMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnOpen(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self))
        vqwavedecoder->qwavedecoder_open_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Open_Callback>(slot);
}

// Base class handler implementation
void QWaveDecoder_SuperClose(QWaveDecoder* self) {
    self->QWaveDecoder::close();
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnClose(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self))
        vqwavedecoder->qwavedecoder_close_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Close_Callback>(slot);
}

// Base class handler implementation
bool QWaveDecoder_SuperSeek(QWaveDecoder* self, long long pos) {
    return self->QWaveDecoder::seek(static_cast<qint64>(pos));
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnSeek(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self))
        vqwavedecoder->qwavedecoder_seek_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Seek_Callback>(slot);
}

// Base class handler implementation
long long QWaveDecoder_SuperPos(const QWaveDecoder* self) {
    return static_cast<long long>(self->QWaveDecoder::pos());
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnPos(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self)))
        vqwavedecoder->qwavedecoder_pos_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Pos_Callback>(slot);
}

// Base class handler implementation
long long QWaveDecoder_SuperSize(const QWaveDecoder* self) {
    return static_cast<long long>(self->QWaveDecoder::size());
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnSize(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self)))
        vqwavedecoder->qwavedecoder_size_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Size_Callback>(slot);
}

// Base class handler implementation
bool QWaveDecoder_SuperIsSequential(const QWaveDecoder* self) {
    return self->QWaveDecoder::isSequential();
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnIsSequential(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self)))
        vqwavedecoder->qwavedecoder_issequential_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_IsSequential_Callback>(slot);
}

// Base class handler implementation
long long QWaveDecoder_SuperBytesAvailable(const QWaveDecoder* self) {
    return static_cast<long long>(self->QWaveDecoder::bytesAvailable());
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnBytesAvailable(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self)))
        vqwavedecoder->qwavedecoder_bytesavailable_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_BytesAvailable_Callback>(slot);
}

// Derived class handler implementation
bool QWaveDecoder_AtEnd(const QWaveDecoder* self) {
    return self->atEnd();
}

// Base class handler implementation
bool QWaveDecoder_SuperAtEnd(const QWaveDecoder* self) {
    return self->QWaveDecoder::atEnd();
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnAtEnd(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self)))
        vqwavedecoder->qwavedecoder_atend_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_AtEnd_Callback>(slot);
}

// Derived class handler implementation
bool QWaveDecoder_Reset(QWaveDecoder* self) {
    return self->reset();
}

// Base class handler implementation
bool QWaveDecoder_SuperReset(QWaveDecoder* self) {
    return self->QWaveDecoder::reset();
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnReset(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self))
        vqwavedecoder->qwavedecoder_reset_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Reset_Callback>(slot);
}

// Derived class handler implementation
long long QWaveDecoder_BytesToWrite(const QWaveDecoder* self) {
    return static_cast<long long>(self->bytesToWrite());
}

// Base class handler implementation
long long QWaveDecoder_SuperBytesToWrite(const QWaveDecoder* self) {
    return static_cast<long long>(self->QWaveDecoder::bytesToWrite());
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnBytesToWrite(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self)))
        vqwavedecoder->qwavedecoder_bytestowrite_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_BytesToWrite_Callback>(slot);
}

// Derived class handler implementation
bool QWaveDecoder_CanReadLine(const QWaveDecoder* self) {
    return self->canReadLine();
}

// Base class handler implementation
bool QWaveDecoder_SuperCanReadLine(const QWaveDecoder* self) {
    return self->QWaveDecoder::canReadLine();
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnCanReadLine(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self)))
        vqwavedecoder->qwavedecoder_canreadline_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_CanReadLine_Callback>(slot);
}

// Derived class handler implementation
bool QWaveDecoder_WaitForReadyRead(QWaveDecoder* self, int msecs) {
    return self->waitForReadyRead(static_cast<int>(msecs));
}

// Base class handler implementation
bool QWaveDecoder_SuperWaitForReadyRead(QWaveDecoder* self, int msecs) {
    return self->QWaveDecoder::waitForReadyRead(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnWaitForReadyRead(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self))
        vqwavedecoder->qwavedecoder_waitforreadyread_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_WaitForReadyRead_Callback>(slot);
}

// Derived class handler implementation
bool QWaveDecoder_WaitForBytesWritten(QWaveDecoder* self, int msecs) {
    return self->waitForBytesWritten(static_cast<int>(msecs));
}

// Base class handler implementation
bool QWaveDecoder_SuperWaitForBytesWritten(QWaveDecoder* self, int msecs) {
    return self->QWaveDecoder::waitForBytesWritten(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnWaitForBytesWritten(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self))
        vqwavedecoder->qwavedecoder_waitforbyteswritten_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_WaitForBytesWritten_Callback>(slot);
}

// Derived class handler implementation
long long QWaveDecoder_ReadLineData(QWaveDecoder* self, char* data, long long maxlen) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder) {
        return static_cast<long long>(vqwavedecoder->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        qFatal("Error: Protected virtual method QWaveDecoder::readLineData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QWaveDecoder_SuperReadLineData(QWaveDecoder* self, char* data, long long maxlen) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self)) {
        return static_cast<long long>(vqwavedecoder->QWaveDecoder::readLineData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QWaveDecoder::readLineData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnReadLineData(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self))
        vqwavedecoder->qwavedecoder_readlinedata_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_ReadLineData_Callback>(slot);
}

// Derived class handler implementation
long long QWaveDecoder_SkipData(QWaveDecoder* self, long long maxSize) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder) {
        return static_cast<long long>(vqwavedecoder->skipData(static_cast<qint64>(maxSize)));
    } else {
        qFatal("Error: Protected virtual method QWaveDecoder::skipData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QWaveDecoder_SuperSkipData(QWaveDecoder* self, long long maxSize) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self)) {
        return static_cast<long long>(vqwavedecoder->QWaveDecoder::skipData(static_cast<qint64>(maxSize)));
    } else
        qFatal("Error: Protected virtual method QWaveDecoder::skipData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnSkipData(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self))
        vqwavedecoder->qwavedecoder_skipdata_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_SkipData_Callback>(slot);
}

// Derived class handler implementation
bool QWaveDecoder_Event(QWaveDecoder* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QWaveDecoder_SuperEvent(QWaveDecoder* self, QEvent* event) {
    return self->QWaveDecoder::event(event);
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnEvent(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self))
        vqwavedecoder->qwavedecoder_event_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_Event_Callback>(slot);
}

// Derived class handler implementation
bool QWaveDecoder_EventFilter(QWaveDecoder* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QWaveDecoder_SuperEventFilter(QWaveDecoder* self, QObject* watched, QEvent* event) {
    return self->QWaveDecoder::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnEventFilter(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self))
        vqwavedecoder->qwavedecoder_eventfilter_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QWaveDecoder_TimerEvent(QWaveDecoder* self, QTimerEvent* event) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder) {
        vqwavedecoder->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWaveDecoder::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWaveDecoder_SuperTimerEvent(QWaveDecoder* self, QTimerEvent* event) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self)) {
        vqwavedecoder->QWaveDecoder::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QWaveDecoder::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnTimerEvent(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self))
        vqwavedecoder->qwavedecoder_timerevent_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QWaveDecoder_ChildEvent(QWaveDecoder* self, QChildEvent* event) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder) {
        vqwavedecoder->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWaveDecoder::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWaveDecoder_SuperChildEvent(QWaveDecoder* self, QChildEvent* event) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self)) {
        vqwavedecoder->QWaveDecoder::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QWaveDecoder::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnChildEvent(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self))
        vqwavedecoder->qwavedecoder_childevent_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QWaveDecoder_CustomEvent(QWaveDecoder* self, QEvent* event) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder) {
        vqwavedecoder->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWaveDecoder::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWaveDecoder_SuperCustomEvent(QWaveDecoder* self, QEvent* event) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self)) {
        vqwavedecoder->QWaveDecoder::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QWaveDecoder::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnCustomEvent(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self))
        vqwavedecoder->qwavedecoder_customevent_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QWaveDecoder_ConnectNotify(QWaveDecoder* self, const QMetaMethod* signal) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder) {
        vqwavedecoder->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWaveDecoder::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWaveDecoder_SuperConnectNotify(QWaveDecoder* self, const QMetaMethod* signal) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self)) {
        vqwavedecoder->QWaveDecoder::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWaveDecoder::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnConnectNotify(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self))
        vqwavedecoder->qwavedecoder_connectnotify_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QWaveDecoder_DisconnectNotify(QWaveDecoder* self, const QMetaMethod* signal) {
    auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self);
    if (vqwavedecoder) {
        vqwavedecoder->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWaveDecoder::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWaveDecoder_SuperDisconnectNotify(QWaveDecoder* self, const QMetaMethod* signal) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self)) {
        vqwavedecoder->QWaveDecoder::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWaveDecoder::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWaveDecoder_OnDisconnectNotify(QWaveDecoder* self, intptr_t slot) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self))
        vqwavedecoder->qwavedecoder_disconnectnotify_callback = reinterpret_cast<VirtualQWaveDecoder::QWaveDecoder_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QWaveDecoder_SetOpenMode(QWaveDecoder* self, int openMode) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self)) {
        vqwavedecoder->VirtualQWaveDecoder::setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else
        qFatal("Error: Protected method QWaveDecoder::setOpenMode called without a directly constructed type");
}

// Derived class protected handler implementation
void QWaveDecoder_SetErrorString(QWaveDecoder* self, const libqt_string errorString) {
    if (auto* vqwavedecoder = dynamic_cast<VirtualQWaveDecoder*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqwavedecoder->VirtualQWaveDecoder::setErrorString(errorString_QString);
    } else
        qFatal("Error: Protected method QWaveDecoder::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QWaveDecoder_Sender(const QWaveDecoder* self) {
    if (auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self))) {
        return vqwavedecoder->VirtualQWaveDecoder::sender();
    } else
        qFatal("Error: Protected method QWaveDecoder::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QWaveDecoder_SenderSignalIndex(const QWaveDecoder* self) {
    if (auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self))) {
        return vqwavedecoder->VirtualQWaveDecoder::senderSignalIndex();
    } else
        qFatal("Error: Protected method QWaveDecoder::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QWaveDecoder_Receivers(const QWaveDecoder* self, const char* signal) {
    if (auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self))) {
        return vqwavedecoder->VirtualQWaveDecoder::receivers(signal);
    } else
        qFatal("Error: Protected method QWaveDecoder::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QWaveDecoder_IsSignalConnected(const QWaveDecoder* self, const QMetaMethod* signal) {
    if (auto* vqwavedecoder = const_cast<VirtualQWaveDecoder*>(dynamic_cast<const VirtualQWaveDecoder*>(self))) {
        return vqwavedecoder->VirtualQWaveDecoder::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QWaveDecoder::isSignalConnected called without a directly constructed type");
}

void QWaveDecoder_Delete(QWaveDecoder* self) {
    delete self;
}
