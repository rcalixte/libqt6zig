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
#include <QByteArray>
#include <cstring>
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
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKProcess*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KProcess_Tr(const char* s) {
    QString _ret = KProcess::tr(s);
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
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
    QString _ret = KProcess::tr(s, c);
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
    QString _ret = KProcess::tr(s, c, static_cast<int>(n));
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
int KProcess_QBaseMetacall(KProcess* self, int param1, int param2, void** param3) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_Metacall_IsBase(true);
        return vkprocess->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KProcess::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnMetacall(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_Metacall_Callback(reinterpret_cast<VirtualKProcess::KProcess_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KProcess_Open(KProcess* self, int mode) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return vkprocess->open(static_cast<QProcess::OpenMode>(mode));
    } else {
        return self->KProcess::open(static_cast<QProcess::OpenMode>(mode));
    }
}

// Base class handler implementation
bool KProcess_QBaseOpen(KProcess* self, int mode) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_Open_IsBase(true);
        return vkprocess->open(static_cast<QProcess::OpenMode>(mode));
    } else {
        return self->KProcess::open(static_cast<QProcess::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnOpen(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_Open_Callback(reinterpret_cast<VirtualKProcess::KProcess_Open_Callback>(slot));
    }
}

// Derived class handler implementation
bool KProcess_WaitForReadyRead(KProcess* self, int msecs) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return vkprocess->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->KProcess::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool KProcess_QBaseWaitForReadyRead(KProcess* self, int msecs) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_WaitForReadyRead_IsBase(true);
        return vkprocess->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->KProcess::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnWaitForReadyRead(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_WaitForReadyRead_Callback(reinterpret_cast<VirtualKProcess::KProcess_WaitForReadyRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool KProcess_WaitForBytesWritten(KProcess* self, int msecs) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return vkprocess->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->KProcess::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool KProcess_QBaseWaitForBytesWritten(KProcess* self, int msecs) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_WaitForBytesWritten_IsBase(true);
        return vkprocess->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->KProcess::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnWaitForBytesWritten(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_WaitForBytesWritten_Callback(reinterpret_cast<VirtualKProcess::KProcess_WaitForBytesWritten_Callback>(slot));
    }
}

// Derived class handler implementation
long long KProcess_BytesToWrite(const KProcess* self) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return static_cast<long long>(vkprocess->bytesToWrite());
    } else {
        return static_cast<long long>(self->KProcess::bytesToWrite());
    }
}

// Base class handler implementation
long long KProcess_QBaseBytesToWrite(const KProcess* self) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_BytesToWrite_IsBase(true);
        return static_cast<long long>(vkprocess->bytesToWrite());
    } else {
        return static_cast<long long>(self->KProcess::bytesToWrite());
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnBytesToWrite(const KProcess* self, intptr_t slot) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_BytesToWrite_Callback(reinterpret_cast<VirtualKProcess::KProcess_BytesToWrite_Callback>(slot));
    }
}

// Derived class handler implementation
bool KProcess_IsSequential(const KProcess* self) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return vkprocess->isSequential();
    } else {
        return self->KProcess::isSequential();
    }
}

// Base class handler implementation
bool KProcess_QBaseIsSequential(const KProcess* self) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_IsSequential_IsBase(true);
        return vkprocess->isSequential();
    } else {
        return self->KProcess::isSequential();
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnIsSequential(const KProcess* self, intptr_t slot) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_IsSequential_Callback(reinterpret_cast<VirtualKProcess::KProcess_IsSequential_Callback>(slot));
    }
}

// Derived class handler implementation
void KProcess_Close(KProcess* self) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->close();
    } else {
        self->KProcess::close();
    }
}

// Base class handler implementation
void KProcess_QBaseClose(KProcess* self) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_Close_IsBase(true);
        vkprocess->close();
    } else {
        self->KProcess::close();
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnClose(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_Close_Callback(reinterpret_cast<VirtualKProcess::KProcess_Close_Callback>(slot));
    }
}

// Derived class handler implementation
long long KProcess_ReadData(KProcess* self, char* data, long long maxlen) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return static_cast<long long>(vkprocess->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualKProcess*)self)->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long KProcess_QBaseReadData(KProcess* self, char* data, long long maxlen) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_ReadData_IsBase(true);
        return static_cast<long long>(vkprocess->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualKProcess*)self)->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnReadData(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_ReadData_Callback(reinterpret_cast<VirtualKProcess::KProcess_ReadData_Callback>(slot));
    }
}

// Derived class handler implementation
long long KProcess_WriteData(KProcess* self, const char* data, long long lenVal) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return static_cast<long long>(vkprocess->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(((VirtualKProcess*)self)->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Base class handler implementation
long long KProcess_QBaseWriteData(KProcess* self, const char* data, long long lenVal) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_WriteData_IsBase(true);
        return static_cast<long long>(vkprocess->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(((VirtualKProcess*)self)->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnWriteData(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_WriteData_Callback(reinterpret_cast<VirtualKProcess::KProcess_WriteData_Callback>(slot));
    }
}

// Derived class handler implementation
long long KProcess_Pos(const KProcess* self) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return static_cast<long long>(vkprocess->pos());
    } else {
        return static_cast<long long>(self->KProcess::pos());
    }
}

// Base class handler implementation
long long KProcess_QBasePos(const KProcess* self) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_Pos_IsBase(true);
        return static_cast<long long>(vkprocess->pos());
    } else {
        return static_cast<long long>(self->KProcess::pos());
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnPos(const KProcess* self, intptr_t slot) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_Pos_Callback(reinterpret_cast<VirtualKProcess::KProcess_Pos_Callback>(slot));
    }
}

// Derived class handler implementation
long long KProcess_Size(const KProcess* self) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return static_cast<long long>(vkprocess->size());
    } else {
        return static_cast<long long>(self->KProcess::size());
    }
}

// Base class handler implementation
long long KProcess_QBaseSize(const KProcess* self) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_Size_IsBase(true);
        return static_cast<long long>(vkprocess->size());
    } else {
        return static_cast<long long>(self->KProcess::size());
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnSize(const KProcess* self, intptr_t slot) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_Size_Callback(reinterpret_cast<VirtualKProcess::KProcess_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool KProcess_Seek(KProcess* self, long long pos) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return vkprocess->seek(static_cast<qint64>(pos));
    } else {
        return self->KProcess::seek(static_cast<qint64>(pos));
    }
}

// Base class handler implementation
bool KProcess_QBaseSeek(KProcess* self, long long pos) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_Seek_IsBase(true);
        return vkprocess->seek(static_cast<qint64>(pos));
    } else {
        return self->KProcess::seek(static_cast<qint64>(pos));
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnSeek(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_Seek_Callback(reinterpret_cast<VirtualKProcess::KProcess_Seek_Callback>(slot));
    }
}

// Derived class handler implementation
bool KProcess_AtEnd(const KProcess* self) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return vkprocess->atEnd();
    } else {
        return self->KProcess::atEnd();
    }
}

// Base class handler implementation
bool KProcess_QBaseAtEnd(const KProcess* self) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_AtEnd_IsBase(true);
        return vkprocess->atEnd();
    } else {
        return self->KProcess::atEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnAtEnd(const KProcess* self, intptr_t slot) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_AtEnd_Callback(reinterpret_cast<VirtualKProcess::KProcess_AtEnd_Callback>(slot));
    }
}

// Derived class handler implementation
bool KProcess_Reset(KProcess* self) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return vkprocess->reset();
    } else {
        return self->KProcess::reset();
    }
}

// Base class handler implementation
bool KProcess_QBaseReset(KProcess* self) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_Reset_IsBase(true);
        return vkprocess->reset();
    } else {
        return self->KProcess::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnReset(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_Reset_Callback(reinterpret_cast<VirtualKProcess::KProcess_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
long long KProcess_BytesAvailable(const KProcess* self) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return static_cast<long long>(vkprocess->bytesAvailable());
    } else {
        return static_cast<long long>(self->KProcess::bytesAvailable());
    }
}

// Base class handler implementation
long long KProcess_QBaseBytesAvailable(const KProcess* self) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_BytesAvailable_IsBase(true);
        return static_cast<long long>(vkprocess->bytesAvailable());
    } else {
        return static_cast<long long>(self->KProcess::bytesAvailable());
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnBytesAvailable(const KProcess* self, intptr_t slot) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_BytesAvailable_Callback(reinterpret_cast<VirtualKProcess::KProcess_BytesAvailable_Callback>(slot));
    }
}

// Derived class handler implementation
bool KProcess_CanReadLine(const KProcess* self) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return vkprocess->canReadLine();
    } else {
        return self->KProcess::canReadLine();
    }
}

// Base class handler implementation
bool KProcess_QBaseCanReadLine(const KProcess* self) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_CanReadLine_IsBase(true);
        return vkprocess->canReadLine();
    } else {
        return self->KProcess::canReadLine();
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnCanReadLine(const KProcess* self, intptr_t slot) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_CanReadLine_Callback(reinterpret_cast<VirtualKProcess::KProcess_CanReadLine_Callback>(slot));
    }
}

// Derived class handler implementation
long long KProcess_ReadLineData(KProcess* self, char* data, long long maxlen) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return static_cast<long long>(vkprocess->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualKProcess*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long KProcess_QBaseReadLineData(KProcess* self, char* data, long long maxlen) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_ReadLineData_IsBase(true);
        return static_cast<long long>(vkprocess->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualKProcess*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnReadLineData(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_ReadLineData_Callback(reinterpret_cast<VirtualKProcess::KProcess_ReadLineData_Callback>(slot));
    }
}

// Derived class handler implementation
long long KProcess_SkipData(KProcess* self, long long maxSize) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return static_cast<long long>(vkprocess->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualKProcess*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Base class handler implementation
long long KProcess_QBaseSkipData(KProcess* self, long long maxSize) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_SkipData_IsBase(true);
        return static_cast<long long>(vkprocess->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualKProcess*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnSkipData(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_SkipData_Callback(reinterpret_cast<VirtualKProcess::KProcess_SkipData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KProcess_Event(KProcess* self, QEvent* event) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return vkprocess->event(event);
    } else {
        return self->KProcess::event(event);
    }
}

// Base class handler implementation
bool KProcess_QBaseEvent(KProcess* self, QEvent* event) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_Event_IsBase(true);
        return vkprocess->event(event);
    } else {
        return self->KProcess::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnEvent(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_Event_Callback(reinterpret_cast<VirtualKProcess::KProcess_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KProcess_EventFilter(KProcess* self, QObject* watched, QEvent* event) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return vkprocess->eventFilter(watched, event);
    } else {
        return self->KProcess::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KProcess_QBaseEventFilter(KProcess* self, QObject* watched, QEvent* event) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_EventFilter_IsBase(true);
        return vkprocess->eventFilter(watched, event);
    } else {
        return self->KProcess::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnEventFilter(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_EventFilter_Callback(reinterpret_cast<VirtualKProcess::KProcess_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KProcess_TimerEvent(KProcess* self, QTimerEvent* event) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->timerEvent(event);
    } else {
        ((VirtualKProcess*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KProcess_QBaseTimerEvent(KProcess* self, QTimerEvent* event) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_TimerEvent_IsBase(true);
        vkprocess->timerEvent(event);
    } else {
        ((VirtualKProcess*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnTimerEvent(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_TimerEvent_Callback(reinterpret_cast<VirtualKProcess::KProcess_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KProcess_ChildEvent(KProcess* self, QChildEvent* event) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->childEvent(event);
    } else {
        ((VirtualKProcess*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KProcess_QBaseChildEvent(KProcess* self, QChildEvent* event) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_ChildEvent_IsBase(true);
        vkprocess->childEvent(event);
    } else {
        ((VirtualKProcess*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnChildEvent(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_ChildEvent_Callback(reinterpret_cast<VirtualKProcess::KProcess_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KProcess_CustomEvent(KProcess* self, QEvent* event) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->customEvent(event);
    } else {
        ((VirtualKProcess*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KProcess_QBaseCustomEvent(KProcess* self, QEvent* event) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_CustomEvent_IsBase(true);
        vkprocess->customEvent(event);
    } else {
        ((VirtualKProcess*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnCustomEvent(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_CustomEvent_Callback(reinterpret_cast<VirtualKProcess::KProcess_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KProcess_ConnectNotify(KProcess* self, const QMetaMethod* signal) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->connectNotify(*signal);
    } else {
        ((VirtualKProcess*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KProcess_QBaseConnectNotify(KProcess* self, const QMetaMethod* signal) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_ConnectNotify_IsBase(true);
        vkprocess->connectNotify(*signal);
    } else {
        ((VirtualKProcess*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnConnectNotify(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_ConnectNotify_Callback(reinterpret_cast<VirtualKProcess::KProcess_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KProcess_DisconnectNotify(KProcess* self, const QMetaMethod* signal) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->disconnectNotify(*signal);
    } else {
        ((VirtualKProcess*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KProcess_QBaseDisconnectNotify(KProcess* self, const QMetaMethod* signal) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_DisconnectNotify_IsBase(true);
        vkprocess->disconnectNotify(*signal);
    } else {
        ((VirtualKProcess*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnDisconnectNotify(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_DisconnectNotify_Callback(reinterpret_cast<VirtualKProcess::KProcess_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KProcess_SetProcessState(KProcess* self, int state) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setProcessState(static_cast<QProcess::ProcessState>(state));
    } else {
        ((VirtualKProcess*)self)->setProcessState(static_cast<QProcess::ProcessState>(state));
    }
}

// Base class handler implementation
void KProcess_QBaseSetProcessState(KProcess* self, int state) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_SetProcessState_IsBase(true);
        vkprocess->setProcessState(static_cast<QProcess::ProcessState>(state));
    } else {
        ((VirtualKProcess*)self)->setProcessState(static_cast<QProcess::ProcessState>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnSetProcessState(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_SetProcessState_Callback(reinterpret_cast<VirtualKProcess::KProcess_SetProcessState_Callback>(slot));
    }
}

// Derived class handler implementation
void KProcess_SetOpenMode(KProcess* self, int openMode) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualKProcess*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
void KProcess_QBaseSetOpenMode(KProcess* self, int openMode) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_SetOpenMode_IsBase(true);
        vkprocess->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualKProcess*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnSetOpenMode(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_SetOpenMode_Callback(reinterpret_cast<VirtualKProcess::KProcess_SetOpenMode_Callback>(slot));
    }
}

// Derived class handler implementation
void KProcess_SetErrorString(KProcess* self, const libqt_string errorString) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setErrorString(errorString_QString);
    } else {
        ((VirtualKProcess*)self)->setErrorString(errorString_QString);
    }
}

// Base class handler implementation
void KProcess_QBaseSetErrorString(KProcess* self, const libqt_string errorString) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_SetErrorString_IsBase(true);
        vkprocess->setErrorString(errorString_QString);
    } else {
        ((VirtualKProcess*)self)->setErrorString(errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnSetErrorString(KProcess* self, intptr_t slot) {
    auto* vkprocess = dynamic_cast<VirtualKProcess*>(self);
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_SetErrorString_Callback(reinterpret_cast<VirtualKProcess::KProcess_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KProcess_Sender(const KProcess* self) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return vkprocess->sender();
    } else {
        return ((VirtualKProcess*)self)->sender();
    }
}

// Base class handler implementation
QObject* KProcess_QBaseSender(const KProcess* self) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_Sender_IsBase(true);
        return vkprocess->sender();
    } else {
        return ((VirtualKProcess*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnSender(const KProcess* self, intptr_t slot) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_Sender_Callback(reinterpret_cast<VirtualKProcess::KProcess_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KProcess_SenderSignalIndex(const KProcess* self) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return vkprocess->senderSignalIndex();
    } else {
        return ((VirtualKProcess*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KProcess_QBaseSenderSignalIndex(const KProcess* self) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_SenderSignalIndex_IsBase(true);
        return vkprocess->senderSignalIndex();
    } else {
        return ((VirtualKProcess*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnSenderSignalIndex(const KProcess* self, intptr_t slot) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_SenderSignalIndex_Callback(reinterpret_cast<VirtualKProcess::KProcess_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KProcess_Receivers(const KProcess* self, const char* signal) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return vkprocess->receivers(signal);
    } else {
        return ((VirtualKProcess*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KProcess_QBaseReceivers(const KProcess* self, const char* signal) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_Receivers_IsBase(true);
        return vkprocess->receivers(signal);
    } else {
        return ((VirtualKProcess*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnReceivers(const KProcess* self, intptr_t slot) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_Receivers_Callback(reinterpret_cast<VirtualKProcess::KProcess_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KProcess_IsSignalConnected(const KProcess* self, const QMetaMethod* signal) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        return vkprocess->isSignalConnected(*signal);
    } else {
        return ((VirtualKProcess*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KProcess_QBaseIsSignalConnected(const KProcess* self, const QMetaMethod* signal) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_IsSignalConnected_IsBase(true);
        return vkprocess->isSignalConnected(*signal);
    } else {
        return ((VirtualKProcess*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KProcess_OnIsSignalConnected(const KProcess* self, intptr_t slot) {
    auto* vkprocess = const_cast<VirtualKProcess*>(dynamic_cast<const VirtualKProcess*>(self));
    if (vkprocess && vkprocess->isVirtualKProcess) {
        vkprocess->setKProcess_IsSignalConnected_Callback(reinterpret_cast<VirtualKProcess::KProcess_IsSignalConnected_Callback>(slot));
    }
}

void KProcess_Delete(KProcess* self) {
    delete self;
}
