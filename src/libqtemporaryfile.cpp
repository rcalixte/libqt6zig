#include <QChildEvent>
#include <QEvent>
#include <QFile>
#include <QFileDevice>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTemporaryFile>
#include <QTimerEvent>
#include <qtemporaryfile.h>
#include "libqtemporaryfile.h"
#include "libqtemporaryfile.hxx"

QTemporaryFile* QTemporaryFile_new() {
    return new VirtualQTemporaryFile();
}

QTemporaryFile* QTemporaryFile_new2(const libqt_string templateName) {
    QString templateName_QString = QString::fromUtf8(templateName.data, templateName.len);
    return new VirtualQTemporaryFile(templateName_QString);
}

QTemporaryFile* QTemporaryFile_new3(QObject* parent) {
    return new VirtualQTemporaryFile(parent);
}

QTemporaryFile* QTemporaryFile_new4(const libqt_string templateName, QObject* parent) {
    QString templateName_QString = QString::fromUtf8(templateName.data, templateName.len);
    return new VirtualQTemporaryFile(templateName_QString, parent);
}

QMetaObject* QTemporaryFile_MetaObject(const QTemporaryFile* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTemporaryFile_Metacast(QTemporaryFile* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTemporaryFile_Metacall(QTemporaryFile* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTemporaryFile_Tr(const char* s) {
    auto _ret = QTemporaryFile::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QTemporaryFile_AutoRemove(const QTemporaryFile* self) {
    return self->autoRemove();
}

void QTemporaryFile_SetAutoRemove(QTemporaryFile* self, bool b) {
    self->setAutoRemove(b);
}

bool QTemporaryFile_Open(QTemporaryFile* self) {
    return self->open();
}

libqt_string QTemporaryFile_FileName(const QTemporaryFile* self) {
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

libqt_string QTemporaryFile_FileTemplate(const QTemporaryFile* self) {
    auto _ret = self->fileTemplate();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTemporaryFile_SetFileTemplate(QTemporaryFile* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setFileTemplate(name_QString);
}

bool QTemporaryFile_Rename(QTemporaryFile* self, const libqt_string newName) {
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return self->rename(newName_QString);
}

QTemporaryFile* QTemporaryFile_CreateNativeFile(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return QTemporaryFile::createNativeFile(fileName_QString);
}

QTemporaryFile* QTemporaryFile_CreateNativeFile2(QFile* file) {
    return QTemporaryFile::createNativeFile(*file);
}

bool QTemporaryFile_Open2(QTemporaryFile* self, int flags) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile) {
        return vqtemporaryfile->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags));
    }
    qFatal("Error: Protected method QTemporaryFile::open2 called without a directly constructed type");
}

libqt_string QTemporaryFile_Tr2(const char* s, const char* c) {
    auto _ret = QTemporaryFile::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTemporaryFile_Tr3(const char* s, const char* c, int n) {
    auto _ret = QTemporaryFile::tr(s, c, static_cast<int>(n));
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
QMetaObject* QTemporaryFile_SuperMetaObject(const QTemporaryFile* self) {
    return (QMetaObject*)self->QTemporaryFile::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnMetaObject(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self)))
        vqtemporaryfile->qtemporaryfile_metaobject_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTemporaryFile_SuperMetacast(QTemporaryFile* self, const char* param1) {
    return self->QTemporaryFile::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnMetacast(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_metacast_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTemporaryFile_SuperMetacall(QTemporaryFile* self, int param1, int param2, void** param3) {
    return self->QTemporaryFile::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnMetacall(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_metacall_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Metacall_Callback>(slot);
}

// Base class handler implementation
libqt_string QTemporaryFile_SuperFileName(const QTemporaryFile* self) {
    auto _ret = self->QTemporaryFile::fileName();
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
void QTemporaryFile_OnFileName(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self)))
        vqtemporaryfile->qtemporaryfile_filename_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_FileName_Callback>(slot);
}

// Base class handler implementation
bool QTemporaryFile_SuperOpen2(QTemporaryFile* self, int flags) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        return vqtemporaryfile->QTemporaryFile::open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags));
    } else
        qFatal("Error: Protected virtual method QTemporaryFile::open2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnOpen2(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_open2_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Open2_Callback>(slot);
}

// Derived class handler implementation
long long QTemporaryFile_Size(const QTemporaryFile* self) {
    return static_cast<long long>(self->size());
}

// Base class handler implementation
long long QTemporaryFile_SuperSize(const QTemporaryFile* self) {
    return static_cast<long long>(self->QTemporaryFile::size());
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnSize(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self)))
        vqtemporaryfile->qtemporaryfile_size_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Size_Callback>(slot);
}

// Derived class handler implementation
bool QTemporaryFile_Resize(QTemporaryFile* self, long long sz) {
    return self->resize(static_cast<qint64>(sz));
}

// Base class handler implementation
bool QTemporaryFile_SuperResize(QTemporaryFile* self, long long sz) {
    return self->QTemporaryFile::resize(static_cast<qint64>(sz));
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnResize(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_resize_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Resize_Callback>(slot);
}

// Derived class handler implementation
int QTemporaryFile_Permissions(const QTemporaryFile* self) {
    return static_cast<int>(self->permissions());
}

// Base class handler implementation
int QTemporaryFile_SuperPermissions(const QTemporaryFile* self) {
    return static_cast<int>(self->QTemporaryFile::permissions());
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnPermissions(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self)))
        vqtemporaryfile->qtemporaryfile_permissions_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Permissions_Callback>(slot);
}

// Derived class handler implementation
bool QTemporaryFile_SetPermissions(QTemporaryFile* self, int permissionSpec) {
    return self->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
}

// Base class handler implementation
bool QTemporaryFile_SuperSetPermissions(QTemporaryFile* self, int permissionSpec) {
    return self->QTemporaryFile::setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnSetPermissions(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_setpermissions_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_SetPermissions_Callback>(slot);
}

// Derived class handler implementation
void QTemporaryFile_Close(QTemporaryFile* self) {
    self->close();
}

// Base class handler implementation
void QTemporaryFile_SuperClose(QTemporaryFile* self) {
    self->QTemporaryFile::close();
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnClose(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_close_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Close_Callback>(slot);
}

// Derived class handler implementation
bool QTemporaryFile_IsSequential(const QTemporaryFile* self) {
    return self->isSequential();
}

// Base class handler implementation
bool QTemporaryFile_SuperIsSequential(const QTemporaryFile* self) {
    return self->QTemporaryFile::isSequential();
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnIsSequential(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self)))
        vqtemporaryfile->qtemporaryfile_issequential_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_IsSequential_Callback>(slot);
}

// Derived class handler implementation
long long QTemporaryFile_Pos(const QTemporaryFile* self) {
    return static_cast<long long>(self->pos());
}

// Base class handler implementation
long long QTemporaryFile_SuperPos(const QTemporaryFile* self) {
    return static_cast<long long>(self->QTemporaryFile::pos());
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnPos(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self)))
        vqtemporaryfile->qtemporaryfile_pos_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Pos_Callback>(slot);
}

// Derived class handler implementation
bool QTemporaryFile_Seek(QTemporaryFile* self, long long offset) {
    return self->seek(static_cast<qint64>(offset));
}

// Base class handler implementation
bool QTemporaryFile_SuperSeek(QTemporaryFile* self, long long offset) {
    return self->QTemporaryFile::seek(static_cast<qint64>(offset));
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnSeek(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_seek_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Seek_Callback>(slot);
}

// Derived class handler implementation
bool QTemporaryFile_AtEnd(const QTemporaryFile* self) {
    return self->atEnd();
}

// Base class handler implementation
bool QTemporaryFile_SuperAtEnd(const QTemporaryFile* self) {
    return self->QTemporaryFile::atEnd();
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnAtEnd(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self)))
        vqtemporaryfile->qtemporaryfile_atend_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_AtEnd_Callback>(slot);
}

// Derived class handler implementation
long long QTemporaryFile_ReadData(QTemporaryFile* self, char* data, long long maxlen) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile) {
        return static_cast<long long>(vqtemporaryfile->readData(data, static_cast<qint64>(maxlen)));
    } else {
        qFatal("Error: Protected virtual method QTemporaryFile::readData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QTemporaryFile_SuperReadData(QTemporaryFile* self, char* data, long long maxlen) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        return static_cast<long long>(vqtemporaryfile->QTemporaryFile::readData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QTemporaryFile::readData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnReadData(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_readdata_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_ReadData_Callback>(slot);
}

// Derived class handler implementation
long long QTemporaryFile_WriteData(QTemporaryFile* self, const char* data, long long len) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile) {
        return static_cast<long long>(vqtemporaryfile->writeData(data, static_cast<qint64>(len)));
    } else {
        qFatal("Error: Protected virtual method QTemporaryFile::writeData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QTemporaryFile_SuperWriteData(QTemporaryFile* self, const char* data, long long len) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        return static_cast<long long>(vqtemporaryfile->QTemporaryFile::writeData(data, static_cast<qint64>(len)));
    } else
        qFatal("Error: Protected virtual method QTemporaryFile::writeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnWriteData(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_writedata_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_WriteData_Callback>(slot);
}

// Derived class handler implementation
long long QTemporaryFile_ReadLineData(QTemporaryFile* self, char* data, long long maxlen) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile) {
        return static_cast<long long>(vqtemporaryfile->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        qFatal("Error: Protected virtual method QTemporaryFile::readLineData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QTemporaryFile_SuperReadLineData(QTemporaryFile* self, char* data, long long maxlen) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        return static_cast<long long>(vqtemporaryfile->QTemporaryFile::readLineData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QTemporaryFile::readLineData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnReadLineData(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_readlinedata_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_ReadLineData_Callback>(slot);
}

// Derived class handler implementation
bool QTemporaryFile_Reset(QTemporaryFile* self) {
    return self->reset();
}

// Base class handler implementation
bool QTemporaryFile_SuperReset(QTemporaryFile* self) {
    return self->QTemporaryFile::reset();
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnReset(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_reset_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Reset_Callback>(slot);
}

// Derived class handler implementation
long long QTemporaryFile_BytesAvailable(const QTemporaryFile* self) {
    return static_cast<long long>(self->bytesAvailable());
}

// Base class handler implementation
long long QTemporaryFile_SuperBytesAvailable(const QTemporaryFile* self) {
    return static_cast<long long>(self->QTemporaryFile::bytesAvailable());
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnBytesAvailable(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self)))
        vqtemporaryfile->qtemporaryfile_bytesavailable_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_BytesAvailable_Callback>(slot);
}

// Derived class handler implementation
long long QTemporaryFile_BytesToWrite(const QTemporaryFile* self) {
    return static_cast<long long>(self->bytesToWrite());
}

// Base class handler implementation
long long QTemporaryFile_SuperBytesToWrite(const QTemporaryFile* self) {
    return static_cast<long long>(self->QTemporaryFile::bytesToWrite());
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnBytesToWrite(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self)))
        vqtemporaryfile->qtemporaryfile_bytestowrite_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_BytesToWrite_Callback>(slot);
}

// Derived class handler implementation
bool QTemporaryFile_CanReadLine(const QTemporaryFile* self) {
    return self->canReadLine();
}

// Base class handler implementation
bool QTemporaryFile_SuperCanReadLine(const QTemporaryFile* self) {
    return self->QTemporaryFile::canReadLine();
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnCanReadLine(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self)))
        vqtemporaryfile->qtemporaryfile_canreadline_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_CanReadLine_Callback>(slot);
}

// Derived class handler implementation
bool QTemporaryFile_WaitForReadyRead(QTemporaryFile* self, int msecs) {
    return self->waitForReadyRead(static_cast<int>(msecs));
}

// Base class handler implementation
bool QTemporaryFile_SuperWaitForReadyRead(QTemporaryFile* self, int msecs) {
    return self->QTemporaryFile::waitForReadyRead(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnWaitForReadyRead(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_waitforreadyread_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_WaitForReadyRead_Callback>(slot);
}

// Derived class handler implementation
bool QTemporaryFile_WaitForBytesWritten(QTemporaryFile* self, int msecs) {
    return self->waitForBytesWritten(static_cast<int>(msecs));
}

// Base class handler implementation
bool QTemporaryFile_SuperWaitForBytesWritten(QTemporaryFile* self, int msecs) {
    return self->QTemporaryFile::waitForBytesWritten(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnWaitForBytesWritten(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_waitforbyteswritten_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_WaitForBytesWritten_Callback>(slot);
}

// Derived class handler implementation
long long QTemporaryFile_SkipData(QTemporaryFile* self, long long maxSize) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile) {
        return static_cast<long long>(vqtemporaryfile->skipData(static_cast<qint64>(maxSize)));
    } else {
        qFatal("Error: Protected virtual method QTemporaryFile::skipData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QTemporaryFile_SuperSkipData(QTemporaryFile* self, long long maxSize) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        return static_cast<long long>(vqtemporaryfile->QTemporaryFile::skipData(static_cast<qint64>(maxSize)));
    } else
        qFatal("Error: Protected virtual method QTemporaryFile::skipData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnSkipData(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_skipdata_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_SkipData_Callback>(slot);
}

// Derived class handler implementation
bool QTemporaryFile_Event(QTemporaryFile* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QTemporaryFile_SuperEvent(QTemporaryFile* self, QEvent* event) {
    return self->QTemporaryFile::event(event);
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnEvent(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_event_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Event_Callback>(slot);
}

// Derived class handler implementation
bool QTemporaryFile_EventFilter(QTemporaryFile* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QTemporaryFile_SuperEventFilter(QTemporaryFile* self, QObject* watched, QEvent* event) {
    return self->QTemporaryFile::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnEventFilter(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_eventfilter_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QTemporaryFile_TimerEvent(QTemporaryFile* self, QTimerEvent* event) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile) {
        vqtemporaryfile->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTemporaryFile::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTemporaryFile_SuperTimerEvent(QTemporaryFile* self, QTimerEvent* event) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->QTemporaryFile::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QTemporaryFile::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnTimerEvent(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_timerevent_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QTemporaryFile_ChildEvent(QTemporaryFile* self, QChildEvent* event) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile) {
        vqtemporaryfile->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTemporaryFile::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTemporaryFile_SuperChildEvent(QTemporaryFile* self, QChildEvent* event) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->QTemporaryFile::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTemporaryFile::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnChildEvent(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_childevent_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTemporaryFile_CustomEvent(QTemporaryFile* self, QEvent* event) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile) {
        vqtemporaryfile->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTemporaryFile::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTemporaryFile_SuperCustomEvent(QTemporaryFile* self, QEvent* event) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->QTemporaryFile::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTemporaryFile::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnCustomEvent(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_customevent_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTemporaryFile_ConnectNotify(QTemporaryFile* self, const QMetaMethod* signal) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile) {
        vqtemporaryfile->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTemporaryFile::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTemporaryFile_SuperConnectNotify(QTemporaryFile* self, const QMetaMethod* signal) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->QTemporaryFile::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTemporaryFile::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnConnectNotify(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_connectnotify_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTemporaryFile_DisconnectNotify(QTemporaryFile* self, const QMetaMethod* signal) {
    auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self);
    if (vqtemporaryfile) {
        vqtemporaryfile->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTemporaryFile::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTemporaryFile_SuperDisconnectNotify(QTemporaryFile* self, const QMetaMethod* signal) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->QTemporaryFile::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTemporaryFile::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnDisconnectNotify(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self))
        vqtemporaryfile->qtemporaryfile_disconnectnotify_callback = reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QTemporaryFile_SetOpenMode(QTemporaryFile* self, int openMode) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->VirtualQTemporaryFile::setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else
        qFatal("Error: Protected method QTemporaryFile::setOpenMode called without a directly constructed type");
}

// Derived class protected handler implementation
void QTemporaryFile_SetErrorString(QTemporaryFile* self, const libqt_string errorString) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqtemporaryfile->VirtualQTemporaryFile::setErrorString(errorString_QString);
    } else
        qFatal("Error: Protected method QTemporaryFile::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QTemporaryFile_Sender(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        return vqtemporaryfile->VirtualQTemporaryFile::sender();
    } else
        qFatal("Error: Protected method QTemporaryFile::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTemporaryFile_SenderSignalIndex(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        return vqtemporaryfile->VirtualQTemporaryFile::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTemporaryFile::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTemporaryFile_Receivers(const QTemporaryFile* self, const char* signal) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        return vqtemporaryfile->VirtualQTemporaryFile::receivers(signal);
    } else
        qFatal("Error: Protected method QTemporaryFile::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTemporaryFile_IsSignalConnected(const QTemporaryFile* self, const QMetaMethod* signal) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        return vqtemporaryfile->VirtualQTemporaryFile::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTemporaryFile::isSignalConnected called without a directly constructed type");
}

void QTemporaryFile_Delete(QTemporaryFile* self) {
    delete self;
}
