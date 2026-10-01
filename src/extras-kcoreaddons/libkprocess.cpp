#include <KProcess>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QIODeviceBase>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QProcess>
#include <QString>
#include <QTimerEvent>
#include <kprocess.h>
#include "libkprocess.h"
#include "libkprocess.hxx"

KProcess* KProcess_new() {
    return new VirtualKProcess();
}

KProcess* KProcess_new2(QObject* parent) {
    return new VirtualKProcess(parent);
}

QMetaObject* KProcess_MetaObject(const KProcess* self) {
    return (QMetaObject*)self->metaObject();
}

void* KProcess_Metacast(KProcess* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KProcess_Metacall(KProcess* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KProcess_Tr(const char* s) {
    auto _ret = KProcess::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KProcess_SetOutputChannelMode(KProcess* self, int mode) {
    self->setOutputChannelMode(static_cast<KProcess::OutputChannelMode>(mode));
}

int KProcess_OutputChannelMode(const KProcess* self) {
    return static_cast<int>(self->outputChannelMode());
}

void KProcess_SetNextOpenMode(KProcess* self, int mode) {
    self->setNextOpenMode(static_cast<QIODevice::OpenMode>(mode));
}

void KProcess_SetEnv(KProcess* self, const libqt_string name, const libqt_string value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setEnv(name_QString, value_QString);
}

void KProcess_UnsetEnv(KProcess* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->unsetEnv(name_QString);
}

void KProcess_ClearEnvironment(KProcess* self) {
    self->clearEnvironment();
}

void KProcess_SetProgram(KProcess* self, const libqt_string exe) {
    QString exe_QString = QString::fromUtf8(exe.data, exe.len);
    self->setProgram(exe_QString);
}

void KProcess_SetProgram2(KProcess* self, const libqt_list /* of libqt_string */ argv) {
    QList<QString> argv_QList;
    argv_QList.reserve(argv.len);
    libqt_string* argv_arr = static_cast<libqt_string*>(argv.data);
    for (size_t i = 0; i < argv.len; ++i) {
        QString argv_arr_i_QString = QString::fromUtf8(argv_arr[i].data, argv_arr[i].len);
        argv_QList.push_back(argv_arr_i_QString);
    }
    self->setProgram(argv_QList);
}

KProcess* KProcess_OperatorShiftLeft(KProcess* self, const libqt_string arg) {
    QString arg_QString = QString::fromUtf8(arg.data, arg.len);
    KProcess& _ret = self->operator<<(arg_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KProcess* KProcess_OperatorShiftLeft2(KProcess* self, const libqt_list /* of libqt_string */ args) {
    QList<QString> args_QList;
    args_QList.reserve(args.len);
    libqt_string* args_arr = static_cast<libqt_string*>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        QString args_arr_i_QString = QString::fromUtf8(args_arr[i].data, args_arr[i].len);
        args_QList.push_back(args_arr_i_QString);
    }
    KProcess& _ret = self->operator<<(args_QList);
    // Cast returned reference into pointer
    return &_ret;
}

void KProcess_ClearProgram(KProcess* self) {
    self->clearProgram();
}

void KProcess_SetShellCommand(KProcess* self, const libqt_string cmd) {
    QString cmd_QString = QString::fromUtf8(cmd.data, cmd.len);
    self->setShellCommand(cmd_QString);
}

libqt_list /* of libqt_string */ KProcess_Program(const KProcess* self) {
    QList<QString> _ret = self->program();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KProcess_Start(KProcess* self) {
    self->start();
}

int KProcess_Execute(KProcess* self) {
    return self->execute();
}

int KProcess_Execute2(const libqt_string exe) {
    QString exe_QString = QString::fromUtf8(exe.data, exe.len);
    return KProcess::execute(exe_QString);
}

int KProcess_Execute3(const libqt_list /* of libqt_string */ argv) {
    QList<QString> argv_QList;
    argv_QList.reserve(argv.len);
    libqt_string* argv_arr = static_cast<libqt_string*>(argv.data);
    for (size_t i = 0; i < argv.len; ++i) {
        QString argv_arr_i_QString = QString::fromUtf8(argv_arr[i].data, argv_arr[i].len);
        argv_QList.push_back(argv_arr_i_QString);
    }
    return KProcess::execute(argv_QList);
}

int KProcess_StartDetached(KProcess* self) {
    return self->startDetached();
}

int KProcess_StartDetached2(const libqt_string exe) {
    QString exe_QString = QString::fromUtf8(exe.data, exe.len);
    return KProcess::startDetached(exe_QString);
}

int KProcess_StartDetached3(const libqt_list /* of libqt_string */ argv) {
    QList<QString> argv_QList;
    argv_QList.reserve(argv.len);
    libqt_string* argv_arr = static_cast<libqt_string*>(argv.data);
    for (size_t i = 0; i < argv.len; ++i) {
        QString argv_arr_i_QString = QString::fromUtf8(argv_arr[i].data, argv_arr[i].len);
        argv_QList.push_back(argv_arr_i_QString);
    }
    return KProcess::startDetached(argv_QList);
}

libqt_string KProcess_Tr2(const char* s, const char* c) {
    auto _ret = KProcess::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KProcess_Tr3(const char* s, const char* c, int n) {
    auto _ret = KProcess::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KProcess_SetEnv3(KProcess* self, const libqt_string name, const libqt_string value, bool overwrite) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setEnv(name_QString, value_QString, overwrite);
}

void KProcess_SetProgram22(KProcess* self, const libqt_string exe, const libqt_list /* of libqt_string */ args) {
    QString exe_QString = QString::fromUtf8(exe.data, exe.len);
    QList<QString> args_QList;
    args_QList.reserve(args.len);
    libqt_string* args_arr = static_cast<libqt_string*>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        QString args_arr_i_QString = QString::fromUtf8(args_arr[i].data, args_arr[i].len);
        args_QList.push_back(args_arr_i_QString);
    }
    self->setProgram(exe_QString, args_QList);
}

int KProcess_Execute1(KProcess* self, int msecs) {
    return self->execute(static_cast<int>(msecs));
}

int KProcess_Execute22(const libqt_string exe, const libqt_list /* of libqt_string */ args) {
    QString exe_QString = QString::fromUtf8(exe.data, exe.len);
    QList<QString> args_QList;
    args_QList.reserve(args.len);
    libqt_string* args_arr = static_cast<libqt_string*>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        QString args_arr_i_QString = QString::fromUtf8(args_arr[i].data, args_arr[i].len);
        args_QList.push_back(args_arr_i_QString);
    }
    return KProcess::execute(exe_QString, args_QList);
}

int KProcess_Execute32(const libqt_string exe, const libqt_list /* of libqt_string */ args, int msecs) {
    QString exe_QString = QString::fromUtf8(exe.data, exe.len);
    QList<QString> args_QList;
    args_QList.reserve(args.len);
    libqt_string* args_arr = static_cast<libqt_string*>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        QString args_arr_i_QString = QString::fromUtf8(args_arr[i].data, args_arr[i].len);
        args_QList.push_back(args_arr_i_QString);
    }
    return KProcess::execute(exe_QString, args_QList, static_cast<int>(msecs));
}

int KProcess_Execute23(const libqt_list /* of libqt_string */ argv, int msecs) {
    QList<QString> argv_QList;
    argv_QList.reserve(argv.len);
    libqt_string* argv_arr = static_cast<libqt_string*>(argv.data);
    for (size_t i = 0; i < argv.len; ++i) {
        QString argv_arr_i_QString = QString::fromUtf8(argv_arr[i].data, argv_arr[i].len);
        argv_QList.push_back(argv_arr_i_QString);
    }
    return KProcess::execute(argv_QList, static_cast<int>(msecs));
}

int KProcess_StartDetached22(const libqt_string exe, const libqt_list /* of libqt_string */ args) {
    QString exe_QString = QString::fromUtf8(exe.data, exe.len);
    QList<QString> args_QList;
    args_QList.reserve(args.len);
    libqt_string* args_arr = static_cast<libqt_string*>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        QString args_arr_i_QString = QString::fromUtf8(args_arr[i].data, args_arr[i].len);
        args_QList.push_back(args_arr_i_QString);
    }
    return KProcess::startDetached(exe_QString, args_QList);
}

// Base class handler implementation
QMetaObject* KProcess_SuperMetaObject(const KProcess* self) {
    return (QMetaObject*)self->KProcess::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnMetaObject(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self)))
        vkprocess->kprocess_metaobject_callback = reinterpret_cast<VirtualKProcess::KProcess_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KProcess_SuperMetacast(KProcess* self, const char* param1) {
    return self->KProcess::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnMetacast(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self))
        vkprocess->kprocess_metacast_callback = reinterpret_cast<VirtualKProcess::KProcess_Metacast_Callback>(slot);
}

// Base class handler implementation
int KProcess_SuperMetacall(KProcess* self, int param1, int param2, void** param3) {
    return self->KProcess::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnMetacall(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self))
        vkprocess->kprocess_metacall_callback = reinterpret_cast<VirtualKProcess::KProcess_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KProcess_Open(KProcess* self, int mode) {
    return self->open(static_cast<QProcess::OpenMode>(mode));
}

// Base class handler implementation
bool KProcess_SuperOpen(KProcess* self, int mode) {
    return self->KProcess::open(static_cast<QProcess::OpenMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnOpen(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self))
        vkprocess->kprocess_open_callback = reinterpret_cast<VirtualKProcess::KProcess_Open_Callback>(slot);
}

// Derived class handler implementation
bool KProcess_WaitForReadyRead(KProcess* self, int msecs) {
    return self->waitForReadyRead(static_cast<int>(msecs));
}

// Base class handler implementation
bool KProcess_SuperWaitForReadyRead(KProcess* self, int msecs) {
    return self->KProcess::waitForReadyRead(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnWaitForReadyRead(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self))
        vkprocess->kprocess_waitforreadyread_callback = reinterpret_cast<VirtualKProcess::KProcess_WaitForReadyRead_Callback>(slot);
}

// Derived class handler implementation
bool KProcess_WaitForBytesWritten(KProcess* self, int msecs) {
    return self->waitForBytesWritten(static_cast<int>(msecs));
}

// Base class handler implementation
bool KProcess_SuperWaitForBytesWritten(KProcess* self, int msecs) {
    return self->KProcess::waitForBytesWritten(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnWaitForBytesWritten(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self))
        vkprocess->kprocess_waitforbyteswritten_callback = reinterpret_cast<VirtualKProcess::KProcess_WaitForBytesWritten_Callback>(slot);
}

// Derived class handler implementation
long long KProcess_BytesToWrite(const KProcess* self) {
    return static_cast<long long>(self->bytesToWrite());
}

// Base class handler implementation
long long KProcess_SuperBytesToWrite(const KProcess* self) {
    return static_cast<long long>(self->KProcess::bytesToWrite());
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnBytesToWrite(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self)))
        vkprocess->kprocess_bytestowrite_callback = reinterpret_cast<VirtualKProcess::KProcess_BytesToWrite_Callback>(slot);
}

// Derived class handler implementation
bool KProcess_IsSequential(const KProcess* self) {
    return self->isSequential();
}

// Base class handler implementation
bool KProcess_SuperIsSequential(const KProcess* self) {
    return self->KProcess::isSequential();
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnIsSequential(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self)))
        vkprocess->kprocess_issequential_callback = reinterpret_cast<VirtualKProcess::KProcess_IsSequential_Callback>(slot);
}

// Derived class handler implementation
void KProcess_Close(KProcess* self) {
    self->close();
}

// Base class handler implementation
void KProcess_SuperClose(KProcess* self) {
    self->KProcess::close();
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnClose(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self))
        vkprocess->kprocess_close_callback = reinterpret_cast<VirtualKProcess::KProcess_Close_Callback>(slot);
}

// Derived class handler implementation
long long KProcess_ReadData(KProcess* self, char* data, long long maxlen) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess) {
        return static_cast<long long>(vkprocess->readData(data, static_cast<qint64>(maxlen)));
    } else {
        qFatal("Error: Protected virtual method KProcess::readData called without a directly constructed type");
    }
}

// Base class handler implementation
long long KProcess_SuperReadData(KProcess* self, char* data, long long maxlen) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self)) {
        return static_cast<long long>(vkprocess->KProcess::readData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method KProcess::readData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnReadData(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self))
        vkprocess->kprocess_readdata_callback = reinterpret_cast<VirtualKProcess::KProcess_ReadData_Callback>(slot);
}

// Derived class handler implementation
long long KProcess_WriteData(KProcess* self, const char* data, long long len) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess) {
        return static_cast<long long>(vkprocess->writeData(data, static_cast<qint64>(len)));
    } else {
        qFatal("Error: Protected virtual method KProcess::writeData called without a directly constructed type");
    }
}

// Base class handler implementation
long long KProcess_SuperWriteData(KProcess* self, const char* data, long long len) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self)) {
        return static_cast<long long>(vkprocess->KProcess::writeData(data, static_cast<qint64>(len)));
    } else
        qFatal("Error: Protected virtual method KProcess::writeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnWriteData(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self))
        vkprocess->kprocess_writedata_callback = reinterpret_cast<VirtualKProcess::KProcess_WriteData_Callback>(slot);
}

// Derived class handler implementation
long long KProcess_Pos(const KProcess* self) {
    return static_cast<long long>(self->pos());
}

// Base class handler implementation
long long KProcess_SuperPos(const KProcess* self) {
    return static_cast<long long>(self->KProcess::pos());
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnPos(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self)))
        vkprocess->kprocess_pos_callback = reinterpret_cast<VirtualKProcess::KProcess_Pos_Callback>(slot);
}

// Derived class handler implementation
long long KProcess_Size(const KProcess* self) {
    return static_cast<long long>(self->size());
}

// Base class handler implementation
long long KProcess_SuperSize(const KProcess* self) {
    return static_cast<long long>(self->KProcess::size());
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnSize(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self)))
        vkprocess->kprocess_size_callback = reinterpret_cast<VirtualKProcess::KProcess_Size_Callback>(slot);
}

// Derived class handler implementation
bool KProcess_Seek(KProcess* self, long long pos) {
    return self->seek(static_cast<qint64>(pos));
}

// Base class handler implementation
bool KProcess_SuperSeek(KProcess* self, long long pos) {
    return self->KProcess::seek(static_cast<qint64>(pos));
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnSeek(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self))
        vkprocess->kprocess_seek_callback = reinterpret_cast<VirtualKProcess::KProcess_Seek_Callback>(slot);
}

// Derived class handler implementation
bool KProcess_AtEnd(const KProcess* self) {
    return self->atEnd();
}

// Base class handler implementation
bool KProcess_SuperAtEnd(const KProcess* self) {
    return self->KProcess::atEnd();
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnAtEnd(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self)))
        vkprocess->kprocess_atend_callback = reinterpret_cast<VirtualKProcess::KProcess_AtEnd_Callback>(slot);
}

// Derived class handler implementation
bool KProcess_Reset(KProcess* self) {
    return self->reset();
}

// Base class handler implementation
bool KProcess_SuperReset(KProcess* self) {
    return self->KProcess::reset();
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnReset(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self))
        vkprocess->kprocess_reset_callback = reinterpret_cast<VirtualKProcess::KProcess_Reset_Callback>(slot);
}

// Derived class handler implementation
long long KProcess_BytesAvailable(const KProcess* self) {
    return static_cast<long long>(self->bytesAvailable());
}

// Base class handler implementation
long long KProcess_SuperBytesAvailable(const KProcess* self) {
    return static_cast<long long>(self->KProcess::bytesAvailable());
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnBytesAvailable(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self)))
        vkprocess->kprocess_bytesavailable_callback = reinterpret_cast<VirtualKProcess::KProcess_BytesAvailable_Callback>(slot);
}

// Derived class handler implementation
bool KProcess_CanReadLine(const KProcess* self) {
    return self->canReadLine();
}

// Base class handler implementation
bool KProcess_SuperCanReadLine(const KProcess* self) {
    return self->KProcess::canReadLine();
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnCanReadLine(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self)))
        vkprocess->kprocess_canreadline_callback = reinterpret_cast<VirtualKProcess::KProcess_CanReadLine_Callback>(slot);
}

// Derived class handler implementation
long long KProcess_ReadLineData(KProcess* self, char* data, long long maxlen) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess) {
        return static_cast<long long>(vkprocess->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        qFatal("Error: Protected virtual method KProcess::readLineData called without a directly constructed type");
    }
}

// Base class handler implementation
long long KProcess_SuperReadLineData(KProcess* self, char* data, long long maxlen) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self)) {
        return static_cast<long long>(vkprocess->KProcess::readLineData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method KProcess::readLineData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnReadLineData(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self))
        vkprocess->kprocess_readlinedata_callback = reinterpret_cast<VirtualKProcess::KProcess_ReadLineData_Callback>(slot);
}

// Derived class handler implementation
long long KProcess_SkipData(KProcess* self, long long maxSize) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess) {
        return static_cast<long long>(vkprocess->skipData(static_cast<qint64>(maxSize)));
    } else {
        qFatal("Error: Protected virtual method KProcess::skipData called without a directly constructed type");
    }
}

// Base class handler implementation
long long KProcess_SuperSkipData(KProcess* self, long long maxSize) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self)) {
        return static_cast<long long>(vkprocess->KProcess::skipData(static_cast<qint64>(maxSize)));
    } else
        qFatal("Error: Protected virtual method KProcess::skipData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnSkipData(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self))
        vkprocess->kprocess_skipdata_callback = reinterpret_cast<VirtualKProcess::KProcess_SkipData_Callback>(slot);
}

// Derived class handler implementation
bool KProcess_Event(KProcess* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KProcess_SuperEvent(KProcess* self, QEvent* event) {
    return self->KProcess::event(event);
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnEvent(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self))
        vkprocess->kprocess_event_callback = reinterpret_cast<VirtualKProcess::KProcess_Event_Callback>(slot);
}

// Derived class handler implementation
bool KProcess_EventFilter(KProcess* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KProcess_SuperEventFilter(KProcess* self, QObject* watched, QEvent* event) {
    return self->KProcess::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnEventFilter(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self))
        vkprocess->kprocess_eventfilter_callback = reinterpret_cast<VirtualKProcess::KProcess_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KProcess_TimerEvent(KProcess* self, QTimerEvent* event) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess) {
        vkprocess->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KProcess::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KProcess_SuperTimerEvent(KProcess* self, QTimerEvent* event) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self)) {
        vkprocess->KProcess::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KProcess::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnTimerEvent(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self))
        vkprocess->kprocess_timerevent_callback = reinterpret_cast<VirtualKProcess::KProcess_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KProcess_ChildEvent(KProcess* self, QChildEvent* event) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess) {
        vkprocess->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KProcess::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KProcess_SuperChildEvent(KProcess* self, QChildEvent* event) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self)) {
        vkprocess->KProcess::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KProcess::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnChildEvent(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self))
        vkprocess->kprocess_childevent_callback = reinterpret_cast<VirtualKProcess::KProcess_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KProcess_CustomEvent(KProcess* self, QEvent* event) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess) {
        vkprocess->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KProcess::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KProcess_SuperCustomEvent(KProcess* self, QEvent* event) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self)) {
        vkprocess->KProcess::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KProcess::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnCustomEvent(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self))
        vkprocess->kprocess_customevent_callback = reinterpret_cast<VirtualKProcess::KProcess_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KProcess_ConnectNotify(KProcess* self, const QMetaMethod* signal) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess) {
        vkprocess->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KProcess::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KProcess_SuperConnectNotify(KProcess* self, const QMetaMethod* signal) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self)) {
        vkprocess->KProcess::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KProcess::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnConnectNotify(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self))
        vkprocess->kprocess_connectnotify_callback = reinterpret_cast<VirtualKProcess::KProcess_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KProcess_DisconnectNotify(KProcess* self, const QMetaMethod* signal) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess) {
        vkprocess->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KProcess::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KProcess_SuperDisconnectNotify(KProcess* self, const QMetaMethod* signal) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self)) {
        vkprocess->KProcess::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KProcess::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnDisconnectNotify(KProcess* self, intptr_t slot) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self))
        vkprocess->kprocess_disconnectnotify_callback = reinterpret_cast<VirtualKProcess::KProcess_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KProcess_SetProcessState(KProcess* self, int state) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self)) {
        vkprocess->VirtualKProcess::setProcessState(static_cast<QProcess::ProcessState>(state));
    } else
        qFatal("Error: Protected method KProcess::setProcessState called without a directly constructed type");
}

// Derived class protected handler implementation
void KProcess_SetOpenMode(KProcess* self, int openMode) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self)) {
        vkprocess->VirtualKProcess::setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else
        qFatal("Error: Protected method KProcess::setOpenMode called without a directly constructed type");
}

// Derived class protected handler implementation
void KProcess_SetErrorString(KProcess* self, const libqt_string errorString) {
    if (auto* vkprocess = dynamic_cast<VirtualKProcess*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vkprocess->VirtualKProcess::setErrorString(errorString_QString);
    } else
        qFatal("Error: Protected method KProcess::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KProcess_Sender(const KProcess* self) {
    if (auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self))) {
        return vkprocess->VirtualKProcess::sender();
    } else
        qFatal("Error: Protected method KProcess::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KProcess_SenderSignalIndex(const KProcess* self) {
    if (auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self))) {
        return vkprocess->VirtualKProcess::senderSignalIndex();
    } else
        qFatal("Error: Protected method KProcess::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KProcess_Receivers(const KProcess* self, const char* signal) {
    if (auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self))) {
        return vkprocess->VirtualKProcess::receivers(signal);
    } else
        qFatal("Error: Protected method KProcess::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KProcess_IsSignalConnected(const KProcess* self, const QMetaMethod* signal) {
    if (auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self))) {
        return vkprocess->VirtualKProcess::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KProcess::isSignalConnected called without a directly constructed type");
}

void KProcess_Delete(KProcess* self) {
    delete self;
}
