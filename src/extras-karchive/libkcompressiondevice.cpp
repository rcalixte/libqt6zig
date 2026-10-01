#include <KCompressionDevice>
#include <KFilterBase>
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
#include <kcompressiondevice.h>
#include "libkcompressiondevice.h"
#include "libkcompressiondevice.hxx"

KCompressionDevice* KCompressionDevice_new(QIODevice* inputDevice, bool autoDeleteInputDevice, int typeVal) {
    return new VirtualKCompressionDevice(inputDevice, autoDeleteInputDevice, static_cast<KCompressionDevice::CompressionType>(typeVal));
}

KCompressionDevice* KCompressionDevice_new2(const libqt_string fileName, int typeVal) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualKCompressionDevice(fileName_QString, static_cast<KCompressionDevice::CompressionType>(typeVal));
}

KCompressionDevice* KCompressionDevice_new3(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualKCompressionDevice(fileName_QString);
}

QMetaObject* KCompressionDevice_MetaObject(const KCompressionDevice* self) {
    return (QMetaObject*)self->metaObject();
}

void* KCompressionDevice_Metacast(KCompressionDevice* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KCompressionDevice_Metacall(KCompressionDevice* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KCompressionDevice_Tr(const char* s) {
    auto _ret = KCompressionDevice::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KCompressionDevice_CompressionType(const KCompressionDevice* self) {
    return static_cast<int>(self->compressionType());
}

bool KCompressionDevice_Open(KCompressionDevice* self, int mode) {
    return self->open(static_cast<QIODevice::OpenMode>(mode));
}

void KCompressionDevice_Close(KCompressionDevice* self) {
    self->close();
}

void KCompressionDevice_SetOrigFileName(KCompressionDevice* self, const libqt_string fileName) {
    QByteArray fileName_QByteArray(fileName.data, fileName.len);
    self->setOrigFileName(fileName_QByteArray);
}

void KCompressionDevice_SetSkipHeaders(KCompressionDevice* self) {
    self->setSkipHeaders();
}

bool KCompressionDevice_Seek(KCompressionDevice* self, long long param1) {
    return self->seek(static_cast<qint64>(param1));
}

bool KCompressionDevice_AtEnd(const KCompressionDevice* self) {
    return self->atEnd();
}

KFilterBase* KCompressionDevice_FilterForCompressionType(int typeVal) {
    return KCompressionDevice::filterForCompressionType(static_cast<KCompressionDevice::CompressionType>(typeVal));
}

int KCompressionDevice_CompressionTypeForMimeType(const libqt_string mimetype) {
    QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
    return static_cast<int>(KCompressionDevice::compressionTypeForMimeType(mimetype_QString));
}

int KCompressionDevice_Error(const KCompressionDevice* self) {
    return static_cast<int>(self->error());
}

long long KCompressionDevice_ReadData(KCompressionDevice* self, char* data, long long maxlen) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice) {
        return static_cast<long long>(vkcompressiondevice->readData(data, static_cast<qint64>(maxlen)));
    }
    qFatal("Error: Protected method KCompressionDevice::readData called without a directly constructed type");
}

long long KCompressionDevice_WriteData(KCompressionDevice* self, const char* data, long long len) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice) {
        return static_cast<long long>(vkcompressiondevice->writeData(data, static_cast<qint64>(len)));
    }
    qFatal("Error: Protected method KCompressionDevice::writeData called without a directly constructed type");
}

libqt_string KCompressionDevice_Tr2(const char* s, const char* c) {
    auto _ret = KCompressionDevice::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCompressionDevice_Tr3(const char* s, const char* c, int n) {
    auto _ret = KCompressionDevice::tr(s, c, static_cast<int>(n));
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
QMetaObject* KCompressionDevice_SuperMetaObject(const KCompressionDevice* self) {
    return (QMetaObject*)self->KCompressionDevice::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnMetaObject(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self)))
        vkcompressiondevice->kcompressiondevice_metaobject_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KCompressionDevice_SuperMetacast(KCompressionDevice* self, const char* param1) {
    return self->KCompressionDevice::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnMetacast(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self))
        vkcompressiondevice->kcompressiondevice_metacast_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_Metacast_Callback>(slot);
}

// Base class handler implementation
int KCompressionDevice_SuperMetacall(KCompressionDevice* self, int param1, int param2, void** param3) {
    return self->KCompressionDevice::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnMetacall(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self))
        vkcompressiondevice->kcompressiondevice_metacall_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KCompressionDevice_SuperOpen(KCompressionDevice* self, int mode) {
    return self->KCompressionDevice::open(static_cast<QIODevice::OpenMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnOpen(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self))
        vkcompressiondevice->kcompressiondevice_open_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_Open_Callback>(slot);
}

// Base class handler implementation
void KCompressionDevice_SuperClose(KCompressionDevice* self) {
    self->KCompressionDevice::close();
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnClose(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self))
        vkcompressiondevice->kcompressiondevice_close_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_Close_Callback>(slot);
}

// Base class handler implementation
bool KCompressionDevice_SuperSeek(KCompressionDevice* self, long long param1) {
    return self->KCompressionDevice::seek(static_cast<qint64>(param1));
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnSeek(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self))
        vkcompressiondevice->kcompressiondevice_seek_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_Seek_Callback>(slot);
}

// Base class handler implementation
bool KCompressionDevice_SuperAtEnd(const KCompressionDevice* self) {
    return self->KCompressionDevice::atEnd();
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnAtEnd(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self)))
        vkcompressiondevice->kcompressiondevice_atend_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_AtEnd_Callback>(slot);
}

// Base class handler implementation
long long KCompressionDevice_SuperReadData(KCompressionDevice* self, char* data, long long maxlen) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self)) {
        return static_cast<long long>(vkcompressiondevice->KCompressionDevice::readData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method KCompressionDevice::readData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnReadData(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self))
        vkcompressiondevice->kcompressiondevice_readdata_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_ReadData_Callback>(slot);
}

// Base class handler implementation
long long KCompressionDevice_SuperWriteData(KCompressionDevice* self, const char* data, long long len) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self)) {
        return static_cast<long long>(vkcompressiondevice->KCompressionDevice::writeData(data, static_cast<qint64>(len)));
    } else
        qFatal("Error: Protected virtual method KCompressionDevice::writeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnWriteData(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self))
        vkcompressiondevice->kcompressiondevice_writedata_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_WriteData_Callback>(slot);
}

// Derived class handler implementation
bool KCompressionDevice_IsSequential(const KCompressionDevice* self) {
    return self->isSequential();
}

// Base class handler implementation
bool KCompressionDevice_SuperIsSequential(const KCompressionDevice* self) {
    return self->KCompressionDevice::isSequential();
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnIsSequential(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self)))
        vkcompressiondevice->kcompressiondevice_issequential_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_IsSequential_Callback>(slot);
}

// Derived class handler implementation
long long KCompressionDevice_Pos(const KCompressionDevice* self) {
    return static_cast<long long>(self->pos());
}

// Base class handler implementation
long long KCompressionDevice_SuperPos(const KCompressionDevice* self) {
    return static_cast<long long>(self->KCompressionDevice::pos());
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnPos(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self)))
        vkcompressiondevice->kcompressiondevice_pos_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_Pos_Callback>(slot);
}

// Derived class handler implementation
long long KCompressionDevice_Size(const KCompressionDevice* self) {
    return static_cast<long long>(self->size());
}

// Base class handler implementation
long long KCompressionDevice_SuperSize(const KCompressionDevice* self) {
    return static_cast<long long>(self->KCompressionDevice::size());
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnSize(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self)))
        vkcompressiondevice->kcompressiondevice_size_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_Size_Callback>(slot);
}

// Derived class handler implementation
bool KCompressionDevice_Reset(KCompressionDevice* self) {
    return self->reset();
}

// Base class handler implementation
bool KCompressionDevice_SuperReset(KCompressionDevice* self) {
    return self->KCompressionDevice::reset();
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnReset(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self))
        vkcompressiondevice->kcompressiondevice_reset_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_Reset_Callback>(slot);
}

// Derived class handler implementation
long long KCompressionDevice_BytesAvailable(const KCompressionDevice* self) {
    return static_cast<long long>(self->bytesAvailable());
}

// Base class handler implementation
long long KCompressionDevice_SuperBytesAvailable(const KCompressionDevice* self) {
    return static_cast<long long>(self->KCompressionDevice::bytesAvailable());
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnBytesAvailable(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self)))
        vkcompressiondevice->kcompressiondevice_bytesavailable_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_BytesAvailable_Callback>(slot);
}

// Derived class handler implementation
long long KCompressionDevice_BytesToWrite(const KCompressionDevice* self) {
    return static_cast<long long>(self->bytesToWrite());
}

// Base class handler implementation
long long KCompressionDevice_SuperBytesToWrite(const KCompressionDevice* self) {
    return static_cast<long long>(self->KCompressionDevice::bytesToWrite());
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnBytesToWrite(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self)))
        vkcompressiondevice->kcompressiondevice_bytestowrite_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_BytesToWrite_Callback>(slot);
}

// Derived class handler implementation
bool KCompressionDevice_CanReadLine(const KCompressionDevice* self) {
    return self->canReadLine();
}

// Base class handler implementation
bool KCompressionDevice_SuperCanReadLine(const KCompressionDevice* self) {
    return self->KCompressionDevice::canReadLine();
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnCanReadLine(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self)))
        vkcompressiondevice->kcompressiondevice_canreadline_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_CanReadLine_Callback>(slot);
}

// Derived class handler implementation
bool KCompressionDevice_WaitForReadyRead(KCompressionDevice* self, int msecs) {
    return self->waitForReadyRead(static_cast<int>(msecs));
}

// Base class handler implementation
bool KCompressionDevice_SuperWaitForReadyRead(KCompressionDevice* self, int msecs) {
    return self->KCompressionDevice::waitForReadyRead(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnWaitForReadyRead(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self))
        vkcompressiondevice->kcompressiondevice_waitforreadyread_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_WaitForReadyRead_Callback>(slot);
}

// Derived class handler implementation
bool KCompressionDevice_WaitForBytesWritten(KCompressionDevice* self, int msecs) {
    return self->waitForBytesWritten(static_cast<int>(msecs));
}

// Base class handler implementation
bool KCompressionDevice_SuperWaitForBytesWritten(KCompressionDevice* self, int msecs) {
    return self->KCompressionDevice::waitForBytesWritten(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnWaitForBytesWritten(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self))
        vkcompressiondevice->kcompressiondevice_waitforbyteswritten_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_WaitForBytesWritten_Callback>(slot);
}

// Derived class handler implementation
long long KCompressionDevice_ReadLineData(KCompressionDevice* self, char* data, long long maxlen) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice) {
        return static_cast<long long>(vkcompressiondevice->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        qFatal("Error: Protected virtual method KCompressionDevice::readLineData called without a directly constructed type");
    }
}

// Base class handler implementation
long long KCompressionDevice_SuperReadLineData(KCompressionDevice* self, char* data, long long maxlen) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self)) {
        return static_cast<long long>(vkcompressiondevice->KCompressionDevice::readLineData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method KCompressionDevice::readLineData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnReadLineData(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self))
        vkcompressiondevice->kcompressiondevice_readlinedata_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_ReadLineData_Callback>(slot);
}

// Derived class handler implementation
long long KCompressionDevice_SkipData(KCompressionDevice* self, long long maxSize) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice) {
        return static_cast<long long>(vkcompressiondevice->skipData(static_cast<qint64>(maxSize)));
    } else {
        qFatal("Error: Protected virtual method KCompressionDevice::skipData called without a directly constructed type");
    }
}

// Base class handler implementation
long long KCompressionDevice_SuperSkipData(KCompressionDevice* self, long long maxSize) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self)) {
        return static_cast<long long>(vkcompressiondevice->KCompressionDevice::skipData(static_cast<qint64>(maxSize)));
    } else
        qFatal("Error: Protected virtual method KCompressionDevice::skipData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnSkipData(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self))
        vkcompressiondevice->kcompressiondevice_skipdata_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_SkipData_Callback>(slot);
}

// Derived class handler implementation
bool KCompressionDevice_Event(KCompressionDevice* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KCompressionDevice_SuperEvent(KCompressionDevice* self, QEvent* event) {
    return self->KCompressionDevice::event(event);
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnEvent(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self))
        vkcompressiondevice->kcompressiondevice_event_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_Event_Callback>(slot);
}

// Derived class handler implementation
bool KCompressionDevice_EventFilter(KCompressionDevice* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KCompressionDevice_SuperEventFilter(KCompressionDevice* self, QObject* watched, QEvent* event) {
    return self->KCompressionDevice::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnEventFilter(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self))
        vkcompressiondevice->kcompressiondevice_eventfilter_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KCompressionDevice_TimerEvent(KCompressionDevice* self, QTimerEvent* event) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice) {
        vkcompressiondevice->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompressionDevice::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompressionDevice_SuperTimerEvent(KCompressionDevice* self, QTimerEvent* event) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self)) {
        vkcompressiondevice->KCompressionDevice::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompressionDevice::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnTimerEvent(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self))
        vkcompressiondevice->kcompressiondevice_timerevent_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompressionDevice_ChildEvent(KCompressionDevice* self, QChildEvent* event) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice) {
        vkcompressiondevice->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompressionDevice::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompressionDevice_SuperChildEvent(KCompressionDevice* self, QChildEvent* event) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self)) {
        vkcompressiondevice->KCompressionDevice::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompressionDevice::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnChildEvent(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self))
        vkcompressiondevice->kcompressiondevice_childevent_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompressionDevice_CustomEvent(KCompressionDevice* self, QEvent* event) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice) {
        vkcompressiondevice->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompressionDevice::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompressionDevice_SuperCustomEvent(KCompressionDevice* self, QEvent* event) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self)) {
        vkcompressiondevice->KCompressionDevice::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompressionDevice::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnCustomEvent(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self))
        vkcompressiondevice->kcompressiondevice_customevent_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompressionDevice_ConnectNotify(KCompressionDevice* self, const QMetaMethod* signal) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice) {
        vkcompressiondevice->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCompressionDevice::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompressionDevice_SuperConnectNotify(KCompressionDevice* self, const QMetaMethod* signal) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self)) {
        vkcompressiondevice->KCompressionDevice::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCompressionDevice::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnConnectNotify(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self))
        vkcompressiondevice->kcompressiondevice_connectnotify_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KCompressionDevice_DisconnectNotify(KCompressionDevice* self, const QMetaMethod* signal) {
    auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self);
    if (vkcompressiondevice) {
        vkcompressiondevice->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCompressionDevice::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompressionDevice_SuperDisconnectNotify(KCompressionDevice* self, const QMetaMethod* signal) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self)) {
        vkcompressiondevice->KCompressionDevice::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCompressionDevice::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompressionDevice_OnDisconnectNotify(KCompressionDevice* self, intptr_t slot) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self))
        vkcompressiondevice->kcompressiondevice_disconnectnotify_callback = reinterpret_cast<VirtualKCompressionDevice::KCompressionDevice_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
KFilterBase* KCompressionDevice_FilterBase(KCompressionDevice* self) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self)) {
        return vkcompressiondevice->VirtualKCompressionDevice::filterBase();
    } else
        qFatal("Error: Protected method KCompressionDevice::filterBase called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompressionDevice_SetOpenMode(KCompressionDevice* self, int openMode) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self)) {
        vkcompressiondevice->VirtualKCompressionDevice::setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else
        qFatal("Error: Protected method KCompressionDevice::setOpenMode called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompressionDevice_SetErrorString(KCompressionDevice* self, const libqt_string errorString) {
    if (auto* vkcompressiondevice = dynamic_cast<VirtualKCompressionDevice*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vkcompressiondevice->VirtualKCompressionDevice::setErrorString(errorString_QString);
    } else
        qFatal("Error: Protected method KCompressionDevice::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KCompressionDevice_Sender(const KCompressionDevice* self) {
    if (auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self))) {
        return vkcompressiondevice->VirtualKCompressionDevice::sender();
    } else
        qFatal("Error: Protected method KCompressionDevice::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KCompressionDevice_SenderSignalIndex(const KCompressionDevice* self) {
    if (auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self))) {
        return vkcompressiondevice->VirtualKCompressionDevice::senderSignalIndex();
    } else
        qFatal("Error: Protected method KCompressionDevice::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KCompressionDevice_Receivers(const KCompressionDevice* self, const char* signal) {
    if (auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self))) {
        return vkcompressiondevice->VirtualKCompressionDevice::receivers(signal);
    } else
        qFatal("Error: Protected method KCompressionDevice::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCompressionDevice_IsSignalConnected(const KCompressionDevice* self, const QMetaMethod* signal) {
    if (auto* vkcompressiondevice = const_cast<VirtualKCompressionDevice*>(dynamic_cast<const VirtualKCompressionDevice*>(self))) {
        return vkcompressiondevice->VirtualKCompressionDevice::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KCompressionDevice::isSignalConnected called without a directly constructed type");
}

void KCompressionDevice_Delete(KCompressionDevice* self) {
    delete self;
}
