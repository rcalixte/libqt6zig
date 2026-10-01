#include <QByteArray>
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
#include <QTimerEvent>
#include <qfile.h>
#include "libqfile.h"
#include "libqfile.hxx"

QFile* QFile_new() {
    return new VirtualQFile();
}

QFile* QFile_new2(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQFile(name_QString);
}

QFile* QFile_new3(QObject* parent) {
    return new VirtualQFile(parent);
}

QFile* QFile_new4(const libqt_string name, QObject* parent) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQFile(name_QString, parent);
}

QMetaObject* QFile_MetaObject(const QFile* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFile_Metacast(QFile* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFile_Metacall(QFile* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QFile_Tr(const char* s) {
    auto _ret = QFile::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFile_FileName(const QFile* self) {
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

void QFile_SetFileName(QFile* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setFileName(name_QString);
}

libqt_string QFile_EncodeName(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QByteArray _qb = QFile::encodeName(fileName_QString);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QFile_DecodeName(const libqt_string localFileName) {
    QByteArray localFileName_QByteArray(localFileName.data, localFileName.len);
    auto _ret = QFile::decodeName(localFileName_QByteArray);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFile_DecodeName2(const char* localFileName) {
    auto _ret = QFile::decodeName(localFileName);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QFile_Exists(const QFile* self) {
    return self->exists();
}

bool QFile_Exists2(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return QFile::exists(fileName_QString);
}

libqt_string QFile_SymLinkTarget(const QFile* self) {
    auto _ret = self->symLinkTarget();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFile_SymLinkTarget2(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    auto _ret = QFile::symLinkTarget(fileName_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QFile_Remove(QFile* self) {
    return self->remove();
}

bool QFile_Remove2(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return QFile::remove(fileName_QString);
}

bool QFile_MoveToTrash(QFile* self) {
    return self->moveToTrash();
}

bool QFile_MoveToTrash2(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return QFile::moveToTrash(fileName_QString);
}

bool QFile_Rename(QFile* self, const libqt_string newName) {
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return self->rename(newName_QString);
}

bool QFile_Rename2(const libqt_string oldName, const libqt_string newName) {
    QString oldName_QString = QString::fromUtf8(oldName.data, oldName.len);
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return QFile::rename(oldName_QString, newName_QString);
}

bool QFile_Link(QFile* self, const libqt_string newName) {
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return self->link(newName_QString);
}

bool QFile_Link2(const libqt_string fileName, const libqt_string newName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return QFile::link(fileName_QString, newName_QString);
}

bool QFile_Copy(QFile* self, const libqt_string newName) {
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return self->copy(newName_QString);
}

bool QFile_Copy2(const libqt_string fileName, const libqt_string newName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return QFile::copy(fileName_QString, newName_QString);
}

bool QFile_Open(QFile* self, int flags) {
    return self->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags));
}

bool QFile_Open2(QFile* self, int flags, int permissions) {
    return self->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags), static_cast<QFileDevice::Permissions>(permissions));
}

bool QFile_Open4(QFile* self, int fd, int ioFlags) {
    return self->open(static_cast<int>(fd), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(ioFlags));
}

long long QFile_Size(const QFile* self) {
    return static_cast<long long>(self->size());
}

bool QFile_Resize(QFile* self, long long sz) {
    return self->resize(static_cast<qint64>(sz));
}

bool QFile_Resize2(const libqt_string filename, long long sz) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return QFile::resize(filename_QString, static_cast<qint64>(sz));
}

int QFile_Permissions(const QFile* self) {
    return static_cast<int>(self->permissions());
}

int QFile_Permissions2(const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return static_cast<int>(QFile::permissions(filename_QString));
}

bool QFile_SetPermissions(QFile* self, int permissionSpec) {
    return self->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
}

bool QFile_SetPermissions2(const libqt_string filename, int permissionSpec) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return QFile::setPermissions(filename_QString, static_cast<QFileDevice::Permissions>(permissionSpec));
}

libqt_string QFile_Tr2(const char* s, const char* c) {
    auto _ret = QFile::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFile_Tr3(const char* s, const char* c, int n) {
    auto _ret = QFile::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QFile_Open33(QFile* self, int fd, int ioFlags, int handleFlags) {
    return self->open(static_cast<int>(fd), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(ioFlags), static_cast<QFileDevice::FileHandleFlags>(handleFlags));
}

// Base class handler implementation
QMetaObject* QFile_SuperMetaObject(const QFile* self) {
    return (QMetaObject*)self->QFile::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QFile_OnMetaObject(QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self)))
        vqfile->qfile_metaobject_callback = reinterpret_cast<VirtualQFile::QFile_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QFile_SuperMetacast(QFile* self, const char* param1) {
    return self->QFile::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QFile_OnMetacast(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_metacast_callback = reinterpret_cast<VirtualQFile::QFile_Metacast_Callback>(slot);
}

// Base class handler implementation
int QFile_SuperMetacall(QFile* self, int param1, int param2, void** param3) {
    return self->QFile::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QFile_OnMetacall(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_metacall_callback = reinterpret_cast<VirtualQFile::QFile_Metacall_Callback>(slot);
}

// Base class handler implementation
libqt_string QFile_SuperFileName(const QFile* self) {
    auto _ret = self->QFile::fileName();
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
void QFile_OnFileName(QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self)))
        vqfile->qfile_filename_callback = reinterpret_cast<VirtualQFile::QFile_FileName_Callback>(slot);
}

// Base class handler implementation
bool QFile_SuperOpen(QFile* self, int flags) {
    return self->QFile::open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags));
}

// Auxiliary method to allow providing re-implementation
void QFile_OnOpen(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_open_callback = reinterpret_cast<VirtualQFile::QFile_Open_Callback>(slot);
}

// Base class handler implementation
long long QFile_SuperSize(const QFile* self) {
    return static_cast<long long>(self->QFile::size());
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSize(QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self)))
        vqfile->qfile_size_callback = reinterpret_cast<VirtualQFile::QFile_Size_Callback>(slot);
}

// Base class handler implementation
bool QFile_SuperResize(QFile* self, long long sz) {
    return self->QFile::resize(static_cast<qint64>(sz));
}

// Auxiliary method to allow providing re-implementation
void QFile_OnResize(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_resize_callback = reinterpret_cast<VirtualQFile::QFile_Resize_Callback>(slot);
}

// Base class handler implementation
int QFile_SuperPermissions(const QFile* self) {
    return static_cast<int>(self->QFile::permissions());
}

// Auxiliary method to allow providing re-implementation
void QFile_OnPermissions(QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self)))
        vqfile->qfile_permissions_callback = reinterpret_cast<VirtualQFile::QFile_Permissions_Callback>(slot);
}

// Base class handler implementation
bool QFile_SuperSetPermissions(QFile* self, int permissionSpec) {
    return self->QFile::setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSetPermissions(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_setpermissions_callback = reinterpret_cast<VirtualQFile::QFile_SetPermissions_Callback>(slot);
}

// Derived class handler implementation
void QFile_Close(QFile* self) {
    self->close();
}

// Base class handler implementation
void QFile_SuperClose(QFile* self) {
    self->QFile::close();
}

// Auxiliary method to allow providing re-implementation
void QFile_OnClose(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_close_callback = reinterpret_cast<VirtualQFile::QFile_Close_Callback>(slot);
}

// Derived class handler implementation
bool QFile_IsSequential(const QFile* self) {
    return self->isSequential();
}

// Base class handler implementation
bool QFile_SuperIsSequential(const QFile* self) {
    return self->QFile::isSequential();
}

// Auxiliary method to allow providing re-implementation
void QFile_OnIsSequential(QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self)))
        vqfile->qfile_issequential_callback = reinterpret_cast<VirtualQFile::QFile_IsSequential_Callback>(slot);
}

// Derived class handler implementation
long long QFile_Pos(const QFile* self) {
    return static_cast<long long>(self->pos());
}

// Base class handler implementation
long long QFile_SuperPos(const QFile* self) {
    return static_cast<long long>(self->QFile::pos());
}

// Auxiliary method to allow providing re-implementation
void QFile_OnPos(QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self)))
        vqfile->qfile_pos_callback = reinterpret_cast<VirtualQFile::QFile_Pos_Callback>(slot);
}

// Derived class handler implementation
bool QFile_Seek(QFile* self, long long offset) {
    return self->seek(static_cast<qint64>(offset));
}

// Base class handler implementation
bool QFile_SuperSeek(QFile* self, long long offset) {
    return self->QFile::seek(static_cast<qint64>(offset));
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSeek(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_seek_callback = reinterpret_cast<VirtualQFile::QFile_Seek_Callback>(slot);
}

// Derived class handler implementation
bool QFile_AtEnd(const QFile* self) {
    return self->atEnd();
}

// Base class handler implementation
bool QFile_SuperAtEnd(const QFile* self) {
    return self->QFile::atEnd();
}

// Auxiliary method to allow providing re-implementation
void QFile_OnAtEnd(QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self)))
        vqfile->qfile_atend_callback = reinterpret_cast<VirtualQFile::QFile_AtEnd_Callback>(slot);
}

// Derived class handler implementation
long long QFile_ReadData(QFile* self, char* data, long long maxlen) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile) {
        return static_cast<long long>(vqfile->readData(data, static_cast<qint64>(maxlen)));
    } else {
        qFatal("Error: Protected virtual method QFile::readData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QFile_SuperReadData(QFile* self, char* data, long long maxlen) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        return static_cast<long long>(vqfile->QFile::readData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QFile::readData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFile_OnReadData(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_readdata_callback = reinterpret_cast<VirtualQFile::QFile_ReadData_Callback>(slot);
}

// Derived class handler implementation
long long QFile_WriteData(QFile* self, const char* data, long long len) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile) {
        return static_cast<long long>(vqfile->writeData(data, static_cast<qint64>(len)));
    } else {
        qFatal("Error: Protected virtual method QFile::writeData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QFile_SuperWriteData(QFile* self, const char* data, long long len) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        return static_cast<long long>(vqfile->QFile::writeData(data, static_cast<qint64>(len)));
    } else
        qFatal("Error: Protected virtual method QFile::writeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFile_OnWriteData(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_writedata_callback = reinterpret_cast<VirtualQFile::QFile_WriteData_Callback>(slot);
}

// Derived class handler implementation
long long QFile_ReadLineData(QFile* self, char* data, long long maxlen) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile) {
        return static_cast<long long>(vqfile->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        qFatal("Error: Protected virtual method QFile::readLineData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QFile_SuperReadLineData(QFile* self, char* data, long long maxlen) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        return static_cast<long long>(vqfile->QFile::readLineData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QFile::readLineData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFile_OnReadLineData(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_readlinedata_callback = reinterpret_cast<VirtualQFile::QFile_ReadLineData_Callback>(slot);
}

// Derived class handler implementation
bool QFile_Reset(QFile* self) {
    return self->reset();
}

// Base class handler implementation
bool QFile_SuperReset(QFile* self) {
    return self->QFile::reset();
}

// Auxiliary method to allow providing re-implementation
void QFile_OnReset(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_reset_callback = reinterpret_cast<VirtualQFile::QFile_Reset_Callback>(slot);
}

// Derived class handler implementation
long long QFile_BytesAvailable(const QFile* self) {
    return static_cast<long long>(self->bytesAvailable());
}

// Base class handler implementation
long long QFile_SuperBytesAvailable(const QFile* self) {
    return static_cast<long long>(self->QFile::bytesAvailable());
}

// Auxiliary method to allow providing re-implementation
void QFile_OnBytesAvailable(QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self)))
        vqfile->qfile_bytesavailable_callback = reinterpret_cast<VirtualQFile::QFile_BytesAvailable_Callback>(slot);
}

// Derived class handler implementation
long long QFile_BytesToWrite(const QFile* self) {
    return static_cast<long long>(self->bytesToWrite());
}

// Base class handler implementation
long long QFile_SuperBytesToWrite(const QFile* self) {
    return static_cast<long long>(self->QFile::bytesToWrite());
}

// Auxiliary method to allow providing re-implementation
void QFile_OnBytesToWrite(QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self)))
        vqfile->qfile_bytestowrite_callback = reinterpret_cast<VirtualQFile::QFile_BytesToWrite_Callback>(slot);
}

// Derived class handler implementation
bool QFile_CanReadLine(const QFile* self) {
    return self->canReadLine();
}

// Base class handler implementation
bool QFile_SuperCanReadLine(const QFile* self) {
    return self->QFile::canReadLine();
}

// Auxiliary method to allow providing re-implementation
void QFile_OnCanReadLine(QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self)))
        vqfile->qfile_canreadline_callback = reinterpret_cast<VirtualQFile::QFile_CanReadLine_Callback>(slot);
}

// Derived class handler implementation
bool QFile_WaitForReadyRead(QFile* self, int msecs) {
    return self->waitForReadyRead(static_cast<int>(msecs));
}

// Base class handler implementation
bool QFile_SuperWaitForReadyRead(QFile* self, int msecs) {
    return self->QFile::waitForReadyRead(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QFile_OnWaitForReadyRead(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_waitforreadyread_callback = reinterpret_cast<VirtualQFile::QFile_WaitForReadyRead_Callback>(slot);
}

// Derived class handler implementation
bool QFile_WaitForBytesWritten(QFile* self, int msecs) {
    return self->waitForBytesWritten(static_cast<int>(msecs));
}

// Base class handler implementation
bool QFile_SuperWaitForBytesWritten(QFile* self, int msecs) {
    return self->QFile::waitForBytesWritten(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QFile_OnWaitForBytesWritten(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_waitforbyteswritten_callback = reinterpret_cast<VirtualQFile::QFile_WaitForBytesWritten_Callback>(slot);
}

// Derived class handler implementation
long long QFile_SkipData(QFile* self, long long maxSize) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile) {
        return static_cast<long long>(vqfile->skipData(static_cast<qint64>(maxSize)));
    } else {
        qFatal("Error: Protected virtual method QFile::skipData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QFile_SuperSkipData(QFile* self, long long maxSize) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        return static_cast<long long>(vqfile->QFile::skipData(static_cast<qint64>(maxSize)));
    } else
        qFatal("Error: Protected virtual method QFile::skipData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSkipData(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_skipdata_callback = reinterpret_cast<VirtualQFile::QFile_SkipData_Callback>(slot);
}

// Derived class handler implementation
bool QFile_Event(QFile* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QFile_SuperEvent(QFile* self, QEvent* event) {
    return self->QFile::event(event);
}

// Auxiliary method to allow providing re-implementation
void QFile_OnEvent(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_event_callback = reinterpret_cast<VirtualQFile::QFile_Event_Callback>(slot);
}

// Derived class handler implementation
bool QFile_EventFilter(QFile* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QFile_SuperEventFilter(QFile* self, QObject* watched, QEvent* event) {
    return self->QFile::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QFile_OnEventFilter(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_eventfilter_callback = reinterpret_cast<VirtualQFile::QFile_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QFile_TimerEvent(QFile* self, QTimerEvent* event) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile) {
        vqfile->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFile::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFile_SuperTimerEvent(QFile* self, QTimerEvent* event) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->QFile::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QFile::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFile_OnTimerEvent(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_timerevent_callback = reinterpret_cast<VirtualQFile::QFile_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QFile_ChildEvent(QFile* self, QChildEvent* event) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile) {
        vqfile->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFile::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFile_SuperChildEvent(QFile* self, QChildEvent* event) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->QFile::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QFile::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFile_OnChildEvent(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_childevent_callback = reinterpret_cast<VirtualQFile::QFile_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QFile_CustomEvent(QFile* self, QEvent* event) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile) {
        vqfile->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFile::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFile_SuperCustomEvent(QFile* self, QEvent* event) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->QFile::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QFile::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFile_OnCustomEvent(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_customevent_callback = reinterpret_cast<VirtualQFile::QFile_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QFile_ConnectNotify(QFile* self, const QMetaMethod* signal) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile) {
        vqfile->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFile::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFile_SuperConnectNotify(QFile* self, const QMetaMethod* signal) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->QFile::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFile::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFile_OnConnectNotify(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_connectnotify_callback = reinterpret_cast<VirtualQFile::QFile_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QFile_DisconnectNotify(QFile* self, const QMetaMethod* signal) {
    auto* vqfile = dynamic_cast<VirtualQFile*>(self);
    if (vqfile) {
        vqfile->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFile::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFile_SuperDisconnectNotify(QFile* self, const QMetaMethod* signal) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->QFile::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFile::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFile_OnDisconnectNotify(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self))
        vqfile->qfile_disconnectnotify_callback = reinterpret_cast<VirtualQFile::QFile_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QFile_SetOpenMode(QFile* self, int openMode) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->VirtualQFile::setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else
        qFatal("Error: Protected method QFile::setOpenMode called without a directly constructed type");
}

// Derived class protected handler implementation
void QFile_SetErrorString(QFile* self, const libqt_string errorString) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqfile->VirtualQFile::setErrorString(errorString_QString);
    } else
        qFatal("Error: Protected method QFile::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QFile_Sender(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        return vqfile->VirtualQFile::sender();
    } else
        qFatal("Error: Protected method QFile::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QFile_SenderSignalIndex(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        return vqfile->VirtualQFile::senderSignalIndex();
    } else
        qFatal("Error: Protected method QFile::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QFile_Receivers(const QFile* self, const char* signal) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        return vqfile->VirtualQFile::receivers(signal);
    } else
        qFatal("Error: Protected method QFile::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFile_IsSignalConnected(const QFile* self, const QMetaMethod* signal) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        return vqfile->VirtualQFile::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QFile::isSignalConnected called without a directly constructed type");
}

void QFile_Delete(QFile* self) {
    delete self;
}
