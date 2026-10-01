#include <KAutoSaveFile>
#include <QChildEvent>
#include <QEvent>
#include <QFile>
#include <QFileDevice>
#include <QIODevice>
#include <QIODeviceBase>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <kautosavefile.h>
#include "libkautosavefile.h"
#include "libkautosavefile.hxx"

KAutoSaveFile* KAutoSaveFile_new(const QUrl* filename) {
    return new VirtualKAutoSaveFile(*filename);
}

KAutoSaveFile* KAutoSaveFile_new2() {
    return new VirtualKAutoSaveFile();
}

KAutoSaveFile* KAutoSaveFile_new3(const QUrl* filename, QObject* parent) {
    return new VirtualKAutoSaveFile(*filename, parent);
}

KAutoSaveFile* KAutoSaveFile_new4(QObject* parent) {
    return new VirtualKAutoSaveFile(parent);
}

QMetaObject* KAutoSaveFile_MetaObject(const KAutoSaveFile* self) {
    return (QMetaObject*)self->metaObject();
}

void* KAutoSaveFile_Metacast(KAutoSaveFile* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KAutoSaveFile_Metacall(KAutoSaveFile* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KAutoSaveFile_Tr(const char* s) {
    auto _ret = KAutoSaveFile::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KAutoSaveFile_ManagedFile(const KAutoSaveFile* self) {
    return new QUrl(self->managedFile());
}

void KAutoSaveFile_SetManagedFile(KAutoSaveFile* self, const QUrl* filename) {
    self->setManagedFile(*filename);
}

void KAutoSaveFile_ReleaseLock(KAutoSaveFile* self) {
    self->releaseLock();
}

bool KAutoSaveFile_Open(KAutoSaveFile* self, int openmode) {
    return self->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openmode));
}

libqt_list /* of KAutoSaveFile* */ KAutoSaveFile_StaleFiles(const QUrl* url) {
    QList<KAutoSaveFile*> _ret = KAutoSaveFile::staleFiles(*url);
    // Convert QList<> from C++ memory to manually-managed C memory
    KAutoSaveFile** _arr = static_cast<KAutoSaveFile**>(malloc(sizeof(KAutoSaveFile*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of KAutoSaveFile* */ KAutoSaveFile_AllStaleFiles() {
    QList<KAutoSaveFile*> _ret = KAutoSaveFile::allStaleFiles();
    // Convert QList<> from C++ memory to manually-managed C memory
    KAutoSaveFile** _arr = static_cast<KAutoSaveFile**>(malloc(sizeof(KAutoSaveFile*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string KAutoSaveFile_Tr2(const char* s, const char* c) {
    auto _ret = KAutoSaveFile::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAutoSaveFile_Tr3(const char* s, const char* c, int n) {
    auto _ret = KAutoSaveFile::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of KAutoSaveFile* */ KAutoSaveFile_StaleFiles2(const QUrl* url, const libqt_string applicationName) {
    QString applicationName_QString = QString::fromUtf8(applicationName.data, applicationName.len);
    QList<KAutoSaveFile*> _ret = KAutoSaveFile::staleFiles(*url, applicationName_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    KAutoSaveFile** _arr = static_cast<KAutoSaveFile**>(malloc(sizeof(KAutoSaveFile*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of KAutoSaveFile* */ KAutoSaveFile_AllStaleFiles1(const libqt_string applicationName) {
    QString applicationName_QString = QString::fromUtf8(applicationName.data, applicationName.len);
    QList<KAutoSaveFile*> _ret = KAutoSaveFile::allStaleFiles(applicationName_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    KAutoSaveFile** _arr = static_cast<KAutoSaveFile**>(malloc(sizeof(KAutoSaveFile*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
QMetaObject* KAutoSaveFile_SuperMetaObject(const KAutoSaveFile* self) {
    return (QMetaObject*)self->KAutoSaveFile::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnMetaObject(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self)))
        vkautosavefile->kautosavefile_metaobject_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KAutoSaveFile_SuperMetacast(KAutoSaveFile* self, const char* param1) {
    return self->KAutoSaveFile::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnMetacast(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_metacast_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Metacast_Callback>(slot);
}

// Base class handler implementation
int KAutoSaveFile_SuperMetacall(KAutoSaveFile* self, int param1, int param2, void** param3) {
    return self->KAutoSaveFile::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnMetacall(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_metacall_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Metacall_Callback>(slot);
}

// Base class handler implementation
void KAutoSaveFile_SuperReleaseLock(KAutoSaveFile* self) {
    self->KAutoSaveFile::releaseLock();
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnReleaseLock(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_releaselock_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_ReleaseLock_Callback>(slot);
}

// Base class handler implementation
bool KAutoSaveFile_SuperOpen(KAutoSaveFile* self, int openmode) {
    return self->KAutoSaveFile::open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openmode));
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnOpen(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_open_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Open_Callback>(slot);
}

// Derived class handler implementation
libqt_string KAutoSaveFile_FileName(const KAutoSaveFile* self) {
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

// Base class handler implementation
libqt_string KAutoSaveFile_SuperFileName(const KAutoSaveFile* self) {
    auto _ret = self->KAutoSaveFile::fileName();
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
void KAutoSaveFile_OnFileName(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self)))
        vkautosavefile->kautosavefile_filename_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_FileName_Callback>(slot);
}

// Derived class handler implementation
long long KAutoSaveFile_Size(const KAutoSaveFile* self) {
    return static_cast<long long>(self->size());
}

// Base class handler implementation
long long KAutoSaveFile_SuperSize(const KAutoSaveFile* self) {
    return static_cast<long long>(self->KAutoSaveFile::size());
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnSize(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self)))
        vkautosavefile->kautosavefile_size_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Size_Callback>(slot);
}

// Derived class handler implementation
bool KAutoSaveFile_Resize(KAutoSaveFile* self, long long sz) {
    return self->resize(static_cast<qint64>(sz));
}

// Base class handler implementation
bool KAutoSaveFile_SuperResize(KAutoSaveFile* self, long long sz) {
    return self->KAutoSaveFile::resize(static_cast<qint64>(sz));
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnResize(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_resize_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Resize_Callback>(slot);
}

// Derived class handler implementation
int KAutoSaveFile_Permissions(const KAutoSaveFile* self) {
    return static_cast<int>(self->permissions());
}

// Base class handler implementation
int KAutoSaveFile_SuperPermissions(const KAutoSaveFile* self) {
    return static_cast<int>(self->KAutoSaveFile::permissions());
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnPermissions(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self)))
        vkautosavefile->kautosavefile_permissions_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Permissions_Callback>(slot);
}

// Derived class handler implementation
bool KAutoSaveFile_SetPermissions(KAutoSaveFile* self, int permissionSpec) {
    return self->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
}

// Base class handler implementation
bool KAutoSaveFile_SuperSetPermissions(KAutoSaveFile* self, int permissionSpec) {
    return self->KAutoSaveFile::setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnSetPermissions(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_setpermissions_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_SetPermissions_Callback>(slot);
}

// Derived class handler implementation
void KAutoSaveFile_Close(KAutoSaveFile* self) {
    self->close();
}

// Base class handler implementation
void KAutoSaveFile_SuperClose(KAutoSaveFile* self) {
    self->KAutoSaveFile::close();
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnClose(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_close_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Close_Callback>(slot);
}

// Derived class handler implementation
bool KAutoSaveFile_IsSequential(const KAutoSaveFile* self) {
    return self->isSequential();
}

// Base class handler implementation
bool KAutoSaveFile_SuperIsSequential(const KAutoSaveFile* self) {
    return self->KAutoSaveFile::isSequential();
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnIsSequential(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self)))
        vkautosavefile->kautosavefile_issequential_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_IsSequential_Callback>(slot);
}

// Derived class handler implementation
long long KAutoSaveFile_Pos(const KAutoSaveFile* self) {
    return static_cast<long long>(self->pos());
}

// Base class handler implementation
long long KAutoSaveFile_SuperPos(const KAutoSaveFile* self) {
    return static_cast<long long>(self->KAutoSaveFile::pos());
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnPos(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self)))
        vkautosavefile->kautosavefile_pos_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Pos_Callback>(slot);
}

// Derived class handler implementation
bool KAutoSaveFile_Seek(KAutoSaveFile* self, long long offset) {
    return self->seek(static_cast<qint64>(offset));
}

// Base class handler implementation
bool KAutoSaveFile_SuperSeek(KAutoSaveFile* self, long long offset) {
    return self->KAutoSaveFile::seek(static_cast<qint64>(offset));
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnSeek(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_seek_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Seek_Callback>(slot);
}

// Derived class handler implementation
bool KAutoSaveFile_AtEnd(const KAutoSaveFile* self) {
    return self->atEnd();
}

// Base class handler implementation
bool KAutoSaveFile_SuperAtEnd(const KAutoSaveFile* self) {
    return self->KAutoSaveFile::atEnd();
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnAtEnd(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self)))
        vkautosavefile->kautosavefile_atend_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_AtEnd_Callback>(slot);
}

// Derived class handler implementation
long long KAutoSaveFile_ReadData(KAutoSaveFile* self, char* data, long long maxlen) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile) {
        return static_cast<long long>(vkautosavefile->readData(data, static_cast<qint64>(maxlen)));
    } else {
        qFatal("Error: Protected virtual method KAutoSaveFile::readData called without a directly constructed type");
    }
}

// Base class handler implementation
long long KAutoSaveFile_SuperReadData(KAutoSaveFile* self, char* data, long long maxlen) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self)) {
        return static_cast<long long>(vkautosavefile->KAutoSaveFile::readData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method KAutoSaveFile::readData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnReadData(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_readdata_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_ReadData_Callback>(slot);
}

// Derived class handler implementation
long long KAutoSaveFile_WriteData(KAutoSaveFile* self, const char* data, long long len) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile) {
        return static_cast<long long>(vkautosavefile->writeData(data, static_cast<qint64>(len)));
    } else {
        qFatal("Error: Protected virtual method KAutoSaveFile::writeData called without a directly constructed type");
    }
}

// Base class handler implementation
long long KAutoSaveFile_SuperWriteData(KAutoSaveFile* self, const char* data, long long len) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self)) {
        return static_cast<long long>(vkautosavefile->KAutoSaveFile::writeData(data, static_cast<qint64>(len)));
    } else
        qFatal("Error: Protected virtual method KAutoSaveFile::writeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnWriteData(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_writedata_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_WriteData_Callback>(slot);
}

// Derived class handler implementation
long long KAutoSaveFile_ReadLineData(KAutoSaveFile* self, char* data, long long maxlen) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile) {
        return static_cast<long long>(vkautosavefile->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        qFatal("Error: Protected virtual method KAutoSaveFile::readLineData called without a directly constructed type");
    }
}

// Base class handler implementation
long long KAutoSaveFile_SuperReadLineData(KAutoSaveFile* self, char* data, long long maxlen) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self)) {
        return static_cast<long long>(vkautosavefile->KAutoSaveFile::readLineData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method KAutoSaveFile::readLineData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnReadLineData(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_readlinedata_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_ReadLineData_Callback>(slot);
}

// Derived class handler implementation
bool KAutoSaveFile_Reset(KAutoSaveFile* self) {
    return self->reset();
}

// Base class handler implementation
bool KAutoSaveFile_SuperReset(KAutoSaveFile* self) {
    return self->KAutoSaveFile::reset();
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnReset(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_reset_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Reset_Callback>(slot);
}

// Derived class handler implementation
long long KAutoSaveFile_BytesAvailable(const KAutoSaveFile* self) {
    return static_cast<long long>(self->bytesAvailable());
}

// Base class handler implementation
long long KAutoSaveFile_SuperBytesAvailable(const KAutoSaveFile* self) {
    return static_cast<long long>(self->KAutoSaveFile::bytesAvailable());
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnBytesAvailable(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self)))
        vkautosavefile->kautosavefile_bytesavailable_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_BytesAvailable_Callback>(slot);
}

// Derived class handler implementation
long long KAutoSaveFile_BytesToWrite(const KAutoSaveFile* self) {
    return static_cast<long long>(self->bytesToWrite());
}

// Base class handler implementation
long long KAutoSaveFile_SuperBytesToWrite(const KAutoSaveFile* self) {
    return static_cast<long long>(self->KAutoSaveFile::bytesToWrite());
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnBytesToWrite(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self)))
        vkautosavefile->kautosavefile_bytestowrite_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_BytesToWrite_Callback>(slot);
}

// Derived class handler implementation
bool KAutoSaveFile_CanReadLine(const KAutoSaveFile* self) {
    return self->canReadLine();
}

// Base class handler implementation
bool KAutoSaveFile_SuperCanReadLine(const KAutoSaveFile* self) {
    return self->KAutoSaveFile::canReadLine();
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnCanReadLine(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self)))
        vkautosavefile->kautosavefile_canreadline_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_CanReadLine_Callback>(slot);
}

// Derived class handler implementation
bool KAutoSaveFile_WaitForReadyRead(KAutoSaveFile* self, int msecs) {
    return self->waitForReadyRead(static_cast<int>(msecs));
}

// Base class handler implementation
bool KAutoSaveFile_SuperWaitForReadyRead(KAutoSaveFile* self, int msecs) {
    return self->KAutoSaveFile::waitForReadyRead(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnWaitForReadyRead(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_waitforreadyread_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_WaitForReadyRead_Callback>(slot);
}

// Derived class handler implementation
bool KAutoSaveFile_WaitForBytesWritten(KAutoSaveFile* self, int msecs) {
    return self->waitForBytesWritten(static_cast<int>(msecs));
}

// Base class handler implementation
bool KAutoSaveFile_SuperWaitForBytesWritten(KAutoSaveFile* self, int msecs) {
    return self->KAutoSaveFile::waitForBytesWritten(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnWaitForBytesWritten(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_waitforbyteswritten_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_WaitForBytesWritten_Callback>(slot);
}

// Derived class handler implementation
long long KAutoSaveFile_SkipData(KAutoSaveFile* self, long long maxSize) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile) {
        return static_cast<long long>(vkautosavefile->skipData(static_cast<qint64>(maxSize)));
    } else {
        qFatal("Error: Protected virtual method KAutoSaveFile::skipData called without a directly constructed type");
    }
}

// Base class handler implementation
long long KAutoSaveFile_SuperSkipData(KAutoSaveFile* self, long long maxSize) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self)) {
        return static_cast<long long>(vkautosavefile->KAutoSaveFile::skipData(static_cast<qint64>(maxSize)));
    } else
        qFatal("Error: Protected virtual method KAutoSaveFile::skipData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnSkipData(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_skipdata_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_SkipData_Callback>(slot);
}

// Derived class handler implementation
bool KAutoSaveFile_Event(KAutoSaveFile* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KAutoSaveFile_SuperEvent(KAutoSaveFile* self, QEvent* event) {
    return self->KAutoSaveFile::event(event);
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnEvent(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_event_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_Event_Callback>(slot);
}

// Derived class handler implementation
bool KAutoSaveFile_EventFilter(KAutoSaveFile* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KAutoSaveFile_SuperEventFilter(KAutoSaveFile* self, QObject* watched, QEvent* event) {
    return self->KAutoSaveFile::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnEventFilter(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_eventfilter_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KAutoSaveFile_TimerEvent(KAutoSaveFile* self, QTimerEvent* event) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile) {
        vkautosavefile->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAutoSaveFile::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAutoSaveFile_SuperTimerEvent(KAutoSaveFile* self, QTimerEvent* event) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self)) {
        vkautosavefile->KAutoSaveFile::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KAutoSaveFile::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnTimerEvent(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_timerevent_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KAutoSaveFile_ChildEvent(KAutoSaveFile* self, QChildEvent* event) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile) {
        vkautosavefile->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAutoSaveFile::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAutoSaveFile_SuperChildEvent(KAutoSaveFile* self, QChildEvent* event) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self)) {
        vkautosavefile->KAutoSaveFile::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KAutoSaveFile::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnChildEvent(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_childevent_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KAutoSaveFile_CustomEvent(KAutoSaveFile* self, QEvent* event) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile) {
        vkautosavefile->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAutoSaveFile::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAutoSaveFile_SuperCustomEvent(KAutoSaveFile* self, QEvent* event) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self)) {
        vkautosavefile->KAutoSaveFile::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KAutoSaveFile::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnCustomEvent(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_customevent_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KAutoSaveFile_ConnectNotify(KAutoSaveFile* self, const QMetaMethod* signal) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile) {
        vkautosavefile->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KAutoSaveFile::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KAutoSaveFile_SuperConnectNotify(KAutoSaveFile* self, const QMetaMethod* signal) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self)) {
        vkautosavefile->KAutoSaveFile::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KAutoSaveFile::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnConnectNotify(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_connectnotify_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KAutoSaveFile_DisconnectNotify(KAutoSaveFile* self, const QMetaMethod* signal) {
    auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self);
    if (vkautosavefile) {
        vkautosavefile->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KAutoSaveFile::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KAutoSaveFile_SuperDisconnectNotify(KAutoSaveFile* self, const QMetaMethod* signal) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self)) {
        vkautosavefile->KAutoSaveFile::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KAutoSaveFile::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAutoSaveFile_OnDisconnectNotify(KAutoSaveFile* self, intptr_t slot) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self))
        vkautosavefile->kautosavefile_disconnectnotify_callback = reinterpret_cast<VirtualKAutoSaveFile::KAutoSaveFile_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KAutoSaveFile_SetOpenMode(KAutoSaveFile* self, int openMode) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self)) {
        vkautosavefile->VirtualKAutoSaveFile::setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else
        qFatal("Error: Protected method KAutoSaveFile::setOpenMode called without a directly constructed type");
}

// Derived class protected handler implementation
void KAutoSaveFile_SetErrorString(KAutoSaveFile* self, const libqt_string errorString) {
    if (auto* vkautosavefile = dynamic_cast<VirtualKAutoSaveFile*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vkautosavefile->VirtualKAutoSaveFile::setErrorString(errorString_QString);
    } else
        qFatal("Error: Protected method KAutoSaveFile::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KAutoSaveFile_Sender(const KAutoSaveFile* self) {
    if (auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self))) {
        return vkautosavefile->VirtualKAutoSaveFile::sender();
    } else
        qFatal("Error: Protected method KAutoSaveFile::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KAutoSaveFile_SenderSignalIndex(const KAutoSaveFile* self) {
    if (auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self))) {
        return vkautosavefile->VirtualKAutoSaveFile::senderSignalIndex();
    } else
        qFatal("Error: Protected method KAutoSaveFile::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KAutoSaveFile_Receivers(const KAutoSaveFile* self, const char* signal) {
    if (auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self))) {
        return vkautosavefile->VirtualKAutoSaveFile::receivers(signal);
    } else
        qFatal("Error: Protected method KAutoSaveFile::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KAutoSaveFile_IsSignalConnected(const KAutoSaveFile* self, const QMetaMethod* signal) {
    if (auto* vkautosavefile = const_cast<VirtualKAutoSaveFile*>(dynamic_cast<const VirtualKAutoSaveFile*>(self))) {
        return vkautosavefile->VirtualKAutoSaveFile::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KAutoSaveFile::isSignalConnected called without a directly constructed type");
}

void KAutoSaveFile_Delete(KAutoSaveFile* self) {
    delete self;
}
