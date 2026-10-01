#include <QChildEvent>
#include <QEvent>
#include <QFileDevice>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSaveFile>
#include <QString>
#include <QTimerEvent>
#include <qsavefile.h>
#include "libqsavefile.h"
#include "libqsavefile.hxx"

QSaveFile* QSaveFile_new(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQSaveFile(name_QString);
}

QSaveFile* QSaveFile_new2() {
    return new VirtualQSaveFile();
}

QSaveFile* QSaveFile_new3(const libqt_string name, QObject* parent) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQSaveFile(name_QString, parent);
}

QSaveFile* QSaveFile_new4(QObject* parent) {
    return new VirtualQSaveFile(parent);
}

QMetaObject* QSaveFile_MetaObject(const QSaveFile* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSaveFile_Metacast(QSaveFile* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSaveFile_Metacall(QSaveFile* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSaveFile_Tr(const char* s) {
    auto _ret = QSaveFile::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSaveFile_FileName(const QSaveFile* self) {
    auto _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSaveFile_SetFileName(QSaveFile* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setFileName(name_QString);
}

bool QSaveFile_Open(QSaveFile* self, int flags) {
    return self->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags));
}

bool QSaveFile_Commit(QSaveFile* self) {
    return self->commit();
}

void QSaveFile_CancelWriting(QSaveFile* self) {
    self->cancelWriting();
}

void QSaveFile_SetDirectWriteFallback(QSaveFile* self, bool enabled) {
    self->setDirectWriteFallback(enabled);
}

bool QSaveFile_DirectWriteFallback(const QSaveFile* self) {
    return self->directWriteFallback();
}

long long QSaveFile_WriteData(QSaveFile* self, const char* data, long long len) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile) {
        return static_cast<long long>(vqsavefile->writeData(data, static_cast<qint64>(len)));
    }
    qFatal("Error: Protected method QSaveFile::writeData called without a directly constructed type");
}

libqt_string QSaveFile_Tr2(const char* s, const char* c) {
    auto _ret = QSaveFile::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSaveFile_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSaveFile::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSaveFile_SuperMetaObject(const QSaveFile* self) {
    return (QMetaObject*)self->QSaveFile::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnMetaObject(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self)))
        vqsavefile->qsavefile_metaobject_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSaveFile_SuperMetacast(QSaveFile* self, const char* param1) {
    return self->QSaveFile::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnMetacast(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self))
        vqsavefile->qsavefile_metacast_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSaveFile_SuperMetacall(QSaveFile* self, int param1, int param2, void** param3) {
    return self->QSaveFile::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnMetacall(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self))
        vqsavefile->qsavefile_metacall_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_Metacall_Callback>(slot);
}

// Base class handler implementation
libqt_string QSaveFile_SuperFileName(const QSaveFile* self) {
    auto _ret = self->QSaveFile::fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnFileName(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self)))
        vqsavefile->qsavefile_filename_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_FileName_Callback>(slot);
}

// Base class handler implementation
bool QSaveFile_SuperOpen(QSaveFile* self, int flags) {
    return self->QSaveFile::open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags));
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnOpen(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self))
        vqsavefile->qsavefile_open_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_Open_Callback>(slot);
}

// Base class handler implementation
long long QSaveFile_SuperWriteData(QSaveFile* self, const char* data, long long len) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self)) {
        return static_cast<long long>(vqsavefile->QSaveFile::writeData(data, static_cast<qint64>(len)));
    } else
        qFatal("Error: Protected virtual method QSaveFile::writeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnWriteData(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self))
        vqsavefile->qsavefile_writedata_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_WriteData_Callback>(slot);
}

// Derived class handler implementation
bool QSaveFile_IsSequential(const QSaveFile* self) {
    return self->isSequential();
}

// Base class handler implementation
bool QSaveFile_SuperIsSequential(const QSaveFile* self) {
    return self->QSaveFile::isSequential();
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnIsSequential(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self)))
        vqsavefile->qsavefile_issequential_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_IsSequential_Callback>(slot);
}

// Derived class handler implementation
long long QSaveFile_Pos(const QSaveFile* self) {
    return static_cast<long long>(self->pos());
}

// Base class handler implementation
long long QSaveFile_SuperPos(const QSaveFile* self) {
    return static_cast<long long>(self->QSaveFile::pos());
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnPos(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self)))
        vqsavefile->qsavefile_pos_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_Pos_Callback>(slot);
}

// Derived class handler implementation
bool QSaveFile_Seek(QSaveFile* self, long long offset) {
    return self->seek(static_cast<qint64>(offset));
}

// Base class handler implementation
bool QSaveFile_SuperSeek(QSaveFile* self, long long offset) {
    return self->QSaveFile::seek(static_cast<qint64>(offset));
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnSeek(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self))
        vqsavefile->qsavefile_seek_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_Seek_Callback>(slot);
}

// Derived class handler implementation
bool QSaveFile_AtEnd(const QSaveFile* self) {
    return self->atEnd();
}

// Base class handler implementation
bool QSaveFile_SuperAtEnd(const QSaveFile* self) {
    return self->QSaveFile::atEnd();
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnAtEnd(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self)))
        vqsavefile->qsavefile_atend_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_AtEnd_Callback>(slot);
}

// Derived class handler implementation
long long QSaveFile_Size(const QSaveFile* self) {
    return static_cast<long long>(self->size());
}

// Base class handler implementation
long long QSaveFile_SuperSize(const QSaveFile* self) {
    return static_cast<long long>(self->QSaveFile::size());
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnSize(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self)))
        vqsavefile->qsavefile_size_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_Size_Callback>(slot);
}

// Derived class handler implementation
bool QSaveFile_Resize(QSaveFile* self, long long sz) {
    return self->resize(static_cast<qint64>(sz));
}

// Base class handler implementation
bool QSaveFile_SuperResize(QSaveFile* self, long long sz) {
    return self->QSaveFile::resize(static_cast<qint64>(sz));
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnResize(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self))
        vqsavefile->qsavefile_resize_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_Resize_Callback>(slot);
}

// Derived class handler implementation
int QSaveFile_Permissions(const QSaveFile* self) {
    return static_cast<int>(self->permissions());
}

// Base class handler implementation
int QSaveFile_SuperPermissions(const QSaveFile* self) {
    return static_cast<int>(self->QSaveFile::permissions());
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnPermissions(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self)))
        vqsavefile->qsavefile_permissions_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_Permissions_Callback>(slot);
}

// Derived class handler implementation
bool QSaveFile_SetPermissions(QSaveFile* self, int permissionSpec) {
    return self->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
}

// Base class handler implementation
bool QSaveFile_SuperSetPermissions(QSaveFile* self, int permissionSpec) {
    return self->QSaveFile::setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnSetPermissions(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self))
        vqsavefile->qsavefile_setpermissions_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_SetPermissions_Callback>(slot);
}

// Derived class handler implementation
long long QSaveFile_ReadData(QSaveFile* self, char* data, long long maxlen) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile) {
        return static_cast<long long>(vqsavefile->readData(data, static_cast<qint64>(maxlen)));
    } else {
        qFatal("Error: Protected virtual method QSaveFile::readData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QSaveFile_SuperReadData(QSaveFile* self, char* data, long long maxlen) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self)) {
        return static_cast<long long>(vqsavefile->QSaveFile::readData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QSaveFile::readData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnReadData(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self))
        vqsavefile->qsavefile_readdata_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_ReadData_Callback>(slot);
}

// Derived class handler implementation
long long QSaveFile_ReadLineData(QSaveFile* self, char* data, long long maxlen) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile) {
        return static_cast<long long>(vqsavefile->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        qFatal("Error: Protected virtual method QSaveFile::readLineData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QSaveFile_SuperReadLineData(QSaveFile* self, char* data, long long maxlen) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self)) {
        return static_cast<long long>(vqsavefile->QSaveFile::readLineData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QSaveFile::readLineData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnReadLineData(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self))
        vqsavefile->qsavefile_readlinedata_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_ReadLineData_Callback>(slot);
}

// Derived class handler implementation
bool QSaveFile_Reset(QSaveFile* self) {
    return self->reset();
}

// Base class handler implementation
bool QSaveFile_SuperReset(QSaveFile* self) {
    return self->QSaveFile::reset();
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnReset(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self))
        vqsavefile->qsavefile_reset_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_Reset_Callback>(slot);
}

// Derived class handler implementation
long long QSaveFile_BytesAvailable(const QSaveFile* self) {
    return static_cast<long long>(self->bytesAvailable());
}

// Base class handler implementation
long long QSaveFile_SuperBytesAvailable(const QSaveFile* self) {
    return static_cast<long long>(self->QSaveFile::bytesAvailable());
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnBytesAvailable(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self)))
        vqsavefile->qsavefile_bytesavailable_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_BytesAvailable_Callback>(slot);
}

// Derived class handler implementation
long long QSaveFile_BytesToWrite(const QSaveFile* self) {
    return static_cast<long long>(self->bytesToWrite());
}

// Base class handler implementation
long long QSaveFile_SuperBytesToWrite(const QSaveFile* self) {
    return static_cast<long long>(self->QSaveFile::bytesToWrite());
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnBytesToWrite(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self)))
        vqsavefile->qsavefile_bytestowrite_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_BytesToWrite_Callback>(slot);
}

// Derived class handler implementation
bool QSaveFile_CanReadLine(const QSaveFile* self) {
    return self->canReadLine();
}

// Base class handler implementation
bool QSaveFile_SuperCanReadLine(const QSaveFile* self) {
    return self->QSaveFile::canReadLine();
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnCanReadLine(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self)))
        vqsavefile->qsavefile_canreadline_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_CanReadLine_Callback>(slot);
}

// Derived class handler implementation
bool QSaveFile_WaitForReadyRead(QSaveFile* self, int msecs) {
    return self->waitForReadyRead(static_cast<int>(msecs));
}

// Base class handler implementation
bool QSaveFile_SuperWaitForReadyRead(QSaveFile* self, int msecs) {
    return self->QSaveFile::waitForReadyRead(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnWaitForReadyRead(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self))
        vqsavefile->qsavefile_waitforreadyread_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_WaitForReadyRead_Callback>(slot);
}

// Derived class handler implementation
bool QSaveFile_WaitForBytesWritten(QSaveFile* self, int msecs) {
    return self->waitForBytesWritten(static_cast<int>(msecs));
}

// Base class handler implementation
bool QSaveFile_SuperWaitForBytesWritten(QSaveFile* self, int msecs) {
    return self->QSaveFile::waitForBytesWritten(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnWaitForBytesWritten(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self))
        vqsavefile->qsavefile_waitforbyteswritten_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_WaitForBytesWritten_Callback>(slot);
}

// Derived class handler implementation
long long QSaveFile_SkipData(QSaveFile* self, long long maxSize) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile) {
        return static_cast<long long>(vqsavefile->skipData(static_cast<qint64>(maxSize)));
    } else {
        qFatal("Error: Protected virtual method QSaveFile::skipData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QSaveFile_SuperSkipData(QSaveFile* self, long long maxSize) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self)) {
        return static_cast<long long>(vqsavefile->QSaveFile::skipData(static_cast<qint64>(maxSize)));
    } else
        qFatal("Error: Protected virtual method QSaveFile::skipData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnSkipData(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self))
        vqsavefile->qsavefile_skipdata_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_SkipData_Callback>(slot);
}

// Derived class handler implementation
bool QSaveFile_Event(QSaveFile* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QSaveFile_SuperEvent(QSaveFile* self, QEvent* event) {
    return self->QSaveFile::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnEvent(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self))
        vqsavefile->qsavefile_event_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSaveFile_EventFilter(QSaveFile* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSaveFile_SuperEventFilter(QSaveFile* self, QObject* watched, QEvent* event) {
    return self->QSaveFile::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnEventFilter(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self))
        vqsavefile->qsavefile_eventfilter_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSaveFile_TimerEvent(QSaveFile* self, QTimerEvent* event) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile) {
        vqsavefile->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSaveFile::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSaveFile_SuperTimerEvent(QSaveFile* self, QTimerEvent* event) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self)) {
        vqsavefile->QSaveFile::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSaveFile::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnTimerEvent(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self))
        vqsavefile->qsavefile_timerevent_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSaveFile_ChildEvent(QSaveFile* self, QChildEvent* event) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile) {
        vqsavefile->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSaveFile::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSaveFile_SuperChildEvent(QSaveFile* self, QChildEvent* event) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self)) {
        vqsavefile->QSaveFile::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSaveFile::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnChildEvent(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self))
        vqsavefile->qsavefile_childevent_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSaveFile_CustomEvent(QSaveFile* self, QEvent* event) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile) {
        vqsavefile->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSaveFile::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSaveFile_SuperCustomEvent(QSaveFile* self, QEvent* event) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self)) {
        vqsavefile->QSaveFile::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSaveFile::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnCustomEvent(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self))
        vqsavefile->qsavefile_customevent_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSaveFile_ConnectNotify(QSaveFile* self, const QMetaMethod* signal) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile) {
        vqsavefile->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSaveFile::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSaveFile_SuperConnectNotify(QSaveFile* self, const QMetaMethod* signal) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self)) {
        vqsavefile->QSaveFile::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSaveFile::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnConnectNotify(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self))
        vqsavefile->qsavefile_connectnotify_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSaveFile_DisconnectNotify(QSaveFile* self, const QMetaMethod* signal) {
    auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self);
    if (vqsavefile) {
        vqsavefile->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSaveFile::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSaveFile_SuperDisconnectNotify(QSaveFile* self, const QMetaMethod* signal) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self)) {
        vqsavefile->QSaveFile::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSaveFile::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSaveFile_OnDisconnectNotify(QSaveFile* self, intptr_t slot) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self))
        vqsavefile->qsavefile_disconnectnotify_callback = reinterpret_cast<VirtualQSaveFile::QSaveFile_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QSaveFile_SetOpenMode(QSaveFile* self, int openMode) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self)) {
        vqsavefile->VirtualQSaveFile::setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else
        qFatal("Error: Protected method QSaveFile::setOpenMode called without a directly constructed type");
}

// Derived class protected handler implementation
void QSaveFile_SetErrorString(QSaveFile* self, const libqt_string errorString) {
    if (auto* vqsavefile = dynamic_cast<VirtualQSaveFile*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqsavefile->VirtualQSaveFile::setErrorString(errorString_QString);
    } else
        qFatal("Error: Protected method QSaveFile::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QSaveFile_Sender(const QSaveFile* self) {
    if (auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self))) {
        return vqsavefile->VirtualQSaveFile::sender();
    } else
        qFatal("Error: Protected method QSaveFile::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSaveFile_SenderSignalIndex(const QSaveFile* self) {
    if (auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self))) {
        return vqsavefile->VirtualQSaveFile::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSaveFile::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSaveFile_Receivers(const QSaveFile* self, const char* signal) {
    if (auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self))) {
        return vqsavefile->VirtualQSaveFile::receivers(signal);
    } else
        qFatal("Error: Protected method QSaveFile::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSaveFile_IsSignalConnected(const QSaveFile* self, const QMetaMethod* signal) {
    if (auto* vqsavefile = const_cast<VirtualQSaveFile*>(dynamic_cast<const VirtualQSaveFile*>(self))) {
        return vqsavefile->VirtualQSaveFile::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSaveFile::isSignalConnected called without a directly constructed type");
}

void QSaveFile_Delete(QSaveFile* self) {
    delete self;
}
