#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__CommandLauncherJob
#include <KJob>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QObject>
#include <QProcessEnvironment>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <commandlauncherjob.h>
#include "libcommandlauncherjob.h"
#include "libcommandlauncherjob.hxx"

KIO__CommandLauncherJob* KIO__CommandLauncherJob_new(const libqt_string command) {
    QString command_QString = QString::fromUtf8(command.data, command.len);
    return new VirtualKIOCommandLauncherJob(command_QString);
}

KIO__CommandLauncherJob* KIO__CommandLauncherJob_new2(const libqt_string executable, const libqt_list /* of libqt_string */ args) {
    QString executable_QString = QString::fromUtf8(executable.data, executable.len);
    QList<QString> args_QList;
    args_QList.reserve(args.len);
    libqt_string* args_arr = static_cast<libqt_string*>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        QString args_arr_i_QString = QString::fromUtf8(args_arr[i].data, args_arr[i].len);
        args_QList.push_back(args_arr_i_QString);
    }
    return new VirtualKIOCommandLauncherJob(executable_QString, args_QList);
}

KIO__CommandLauncherJob* KIO__CommandLauncherJob_new3(const libqt_string command, QObject* parent) {
    QString command_QString = QString::fromUtf8(command.data, command.len);
    return new VirtualKIOCommandLauncherJob(command_QString, parent);
}

KIO__CommandLauncherJob* KIO__CommandLauncherJob_new4(const libqt_string executable, const libqt_list /* of libqt_string */ args, QObject* parent) {
    QString executable_QString = QString::fromUtf8(executable.data, executable.len);
    QList<QString> args_QList;
    args_QList.reserve(args.len);
    libqt_string* args_arr = static_cast<libqt_string*>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        QString args_arr_i_QString = QString::fromUtf8(args_arr[i].data, args_arr[i].len);
        args_QList.push_back(args_arr_i_QString);
    }
    return new VirtualKIOCommandLauncherJob(executable_QString, args_QList, parent);
}

void KIO__CommandLauncherJob_SetCommand(KIO__CommandLauncherJob* self, const libqt_string command) {
    QString command_QString = QString::fromUtf8(command.data, command.len);
    self->setCommand(command_QString);
}

libqt_string KIO__CommandLauncherJob_Command(const KIO__CommandLauncherJob* self) {
    QString _ret = self->command();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__CommandLauncherJob_SetExecutable(KIO__CommandLauncherJob* self, const libqt_string executable) {
    QString executable_QString = QString::fromUtf8(executable.data, executable.len);
    self->setExecutable(executable_QString);
}

void KIO__CommandLauncherJob_SetDesktopName(KIO__CommandLauncherJob* self, const libqt_string desktopName) {
    QString desktopName_QString = QString::fromUtf8(desktopName.data, desktopName.len);
    self->setDesktopName(desktopName_QString);
}

void KIO__CommandLauncherJob_SetStartupId(KIO__CommandLauncherJob* self, const libqt_string startupId) {
    QByteArray startupId_QByteArray(startupId.data, startupId.len);
    self->setStartupId(startupId_QByteArray);
}

void KIO__CommandLauncherJob_SetWorkingDirectory(KIO__CommandLauncherJob* self, const libqt_string workingDirectory) {
    QString workingDirectory_QString = QString::fromUtf8(workingDirectory.data, workingDirectory.len);
    self->setWorkingDirectory(workingDirectory_QString);
}

libqt_string KIO__CommandLauncherJob_WorkingDirectory(const KIO__CommandLauncherJob* self) {
    QString _ret = self->workingDirectory();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__CommandLauncherJob_SetProcessEnvironment(KIO__CommandLauncherJob* self, const QProcessEnvironment* environment) {
    self->setProcessEnvironment(*environment);
}

void KIO__CommandLauncherJob_Start(KIO__CommandLauncherJob* self) {
    auto* vkio__commandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkio__commandlauncherjob && vkio__commandlauncherjob->isVirtualKIOCommandLauncherJob) {
        self->start();
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->start();
    }
}

long long KIO__CommandLauncherJob_Pid(const KIO__CommandLauncherJob* self) {
    return static_cast<long long>(self->pid());
}

// Base class handler implementation
void KIO__CommandLauncherJob_QBaseStart(KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_Start_IsBase(true);
        vkiocommandlauncherjob->start();
    } else {
        self->KIO::CommandLauncherJob::start();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnStart(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_Start_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_Start_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__CommandLauncherJob_Metacall(KIO__CommandLauncherJob* self, int param1, int param2, void** param3) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        return vkiocommandlauncherjob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIO::CommandLauncherJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Base class handler implementation
int KIO__CommandLauncherJob_QBaseMetacall(KIO__CommandLauncherJob* self, int param1, int param2, void** param3) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_Metacall_IsBase(true);
        return vkiocommandlauncherjob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIO::CommandLauncherJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnMetacall(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_Metacall_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__CommandLauncherJob_DoKill(KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        return vkiocommandlauncherjob->doKill();
    } else {
        return ((VirtualKIOCommandLauncherJob*)self)->doKill();
    }
}

// Base class handler implementation
bool KIO__CommandLauncherJob_QBaseDoKill(KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_DoKill_IsBase(true);
        return vkiocommandlauncherjob->doKill();
    } else {
        return ((VirtualKIOCommandLauncherJob*)self)->doKill();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnDoKill(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_DoKill_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_DoKill_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__CommandLauncherJob_DoSuspend(KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        return vkiocommandlauncherjob->doSuspend();
    } else {
        return ((VirtualKIOCommandLauncherJob*)self)->doSuspend();
    }
}

// Base class handler implementation
bool KIO__CommandLauncherJob_QBaseDoSuspend(KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_DoSuspend_IsBase(true);
        return vkiocommandlauncherjob->doSuspend();
    } else {
        return ((VirtualKIOCommandLauncherJob*)self)->doSuspend();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnDoSuspend(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_DoSuspend_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_DoSuspend_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__CommandLauncherJob_DoResume(KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        return vkiocommandlauncherjob->doResume();
    } else {
        return ((VirtualKIOCommandLauncherJob*)self)->doResume();
    }
}

// Base class handler implementation
bool KIO__CommandLauncherJob_QBaseDoResume(KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_DoResume_IsBase(true);
        return vkiocommandlauncherjob->doResume();
    } else {
        return ((VirtualKIOCommandLauncherJob*)self)->doResume();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnDoResume(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_DoResume_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_DoResume_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KIO__CommandLauncherJob_ErrorString(const KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self));
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        QString _ret = vkiocommandlauncherjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIO::CommandLauncherJob::errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KIO__CommandLauncherJob_QBaseErrorString(const KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self));
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_ErrorString_IsBase(true);
        QString _ret = vkiocommandlauncherjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIO::CommandLauncherJob::errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnErrorString(const KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self));
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_ErrorString_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_ErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__CommandLauncherJob_Event(KIO__CommandLauncherJob* self, QEvent* event) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        return vkiocommandlauncherjob->event(event);
    } else {
        return self->KIO::CommandLauncherJob::event(event);
    }
}

// Base class handler implementation
bool KIO__CommandLauncherJob_QBaseEvent(KIO__CommandLauncherJob* self, QEvent* event) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_Event_IsBase(true);
        return vkiocommandlauncherjob->event(event);
    } else {
        return self->KIO::CommandLauncherJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnEvent(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_Event_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__CommandLauncherJob_EventFilter(KIO__CommandLauncherJob* self, QObject* watched, QEvent* event) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        return vkiocommandlauncherjob->eventFilter(watched, event);
    } else {
        return self->KIO::CommandLauncherJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KIO__CommandLauncherJob_QBaseEventFilter(KIO__CommandLauncherJob* self, QObject* watched, QEvent* event) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_EventFilter_IsBase(true);
        return vkiocommandlauncherjob->eventFilter(watched, event);
    } else {
        return self->KIO::CommandLauncherJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnEventFilter(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_EventFilter_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__CommandLauncherJob_TimerEvent(KIO__CommandLauncherJob* self, QTimerEvent* event) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->timerEvent(event);
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_QBaseTimerEvent(KIO__CommandLauncherJob* self, QTimerEvent* event) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_TimerEvent_IsBase(true);
        vkiocommandlauncherjob->timerEvent(event);
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnTimerEvent(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_TimerEvent_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__CommandLauncherJob_ChildEvent(KIO__CommandLauncherJob* self, QChildEvent* event) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->childEvent(event);
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_QBaseChildEvent(KIO__CommandLauncherJob* self, QChildEvent* event) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_ChildEvent_IsBase(true);
        vkiocommandlauncherjob->childEvent(event);
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnChildEvent(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_ChildEvent_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__CommandLauncherJob_CustomEvent(KIO__CommandLauncherJob* self, QEvent* event) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->customEvent(event);
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_QBaseCustomEvent(KIO__CommandLauncherJob* self, QEvent* event) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_CustomEvent_IsBase(true);
        vkiocommandlauncherjob->customEvent(event);
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnCustomEvent(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_CustomEvent_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__CommandLauncherJob_ConnectNotify(KIO__CommandLauncherJob* self, const QMetaMethod* signal) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->connectNotify(*signal);
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_QBaseConnectNotify(KIO__CommandLauncherJob* self, const QMetaMethod* signal) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_ConnectNotify_IsBase(true);
        vkiocommandlauncherjob->connectNotify(*signal);
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnConnectNotify(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_ConnectNotify_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__CommandLauncherJob_DisconnectNotify(KIO__CommandLauncherJob* self, const QMetaMethod* signal) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->disconnectNotify(*signal);
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_QBaseDisconnectNotify(KIO__CommandLauncherJob* self, const QMetaMethod* signal) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_DisconnectNotify_IsBase(true);
        vkiocommandlauncherjob->disconnectNotify(*signal);
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnDisconnectNotify(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_DisconnectNotify_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__CommandLauncherJob_SetCapabilities(KIO__CommandLauncherJob* self, int capabilities) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_QBaseSetCapabilities(KIO__CommandLauncherJob* self, int capabilities) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_SetCapabilities_IsBase(true);
        vkiocommandlauncherjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnSetCapabilities(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_SetCapabilities_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_SetCapabilities_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__CommandLauncherJob_IsFinished(const KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self));
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        return vkiocommandlauncherjob->isFinished();
    } else {
        return ((VirtualKIOCommandLauncherJob*)self)->isFinished();
    }
}

// Base class handler implementation
bool KIO__CommandLauncherJob_QBaseIsFinished(const KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self));
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_IsFinished_IsBase(true);
        return vkiocommandlauncherjob->isFinished();
    } else {
        return ((VirtualKIOCommandLauncherJob*)self)->isFinished();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnIsFinished(const KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self));
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_IsFinished_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_IsFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__CommandLauncherJob_SetError(KIO__CommandLauncherJob* self, int errorCode) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_QBaseSetError(KIO__CommandLauncherJob* self, int errorCode) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_SetError_IsBase(true);
        vkiocommandlauncherjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnSetError(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_SetError_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__CommandLauncherJob_SetErrorText(KIO__CommandLauncherJob* self, const libqt_string errorText) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->setErrorText(errorText_QString);
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_QBaseSetErrorText(KIO__CommandLauncherJob* self, const libqt_string errorText) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_SetErrorText_IsBase(true);
        vkiocommandlauncherjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->setErrorText(errorText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnSetErrorText(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_SetErrorText_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_SetErrorText_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__CommandLauncherJob_SetProcessedAmount(KIO__CommandLauncherJob* self, int unit, unsigned long long amount) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_QBaseSetProcessedAmount(KIO__CommandLauncherJob* self, int unit, unsigned long long amount) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_SetProcessedAmount_IsBase(true);
        vkiocommandlauncherjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnSetProcessedAmount(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_SetProcessedAmount_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_SetProcessedAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__CommandLauncherJob_SetTotalAmount(KIO__CommandLauncherJob* self, int unit, unsigned long long amount) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_QBaseSetTotalAmount(KIO__CommandLauncherJob* self, int unit, unsigned long long amount) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_SetTotalAmount_IsBase(true);
        vkiocommandlauncherjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnSetTotalAmount(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_SetTotalAmount_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_SetTotalAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__CommandLauncherJob_SetProgressUnit(KIO__CommandLauncherJob* self, int unit) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_QBaseSetProgressUnit(KIO__CommandLauncherJob* self, int unit) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_SetProgressUnit_IsBase(true);
        vkiocommandlauncherjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnSetProgressUnit(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_SetProgressUnit_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_SetProgressUnit_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__CommandLauncherJob_SetPercent(KIO__CommandLauncherJob* self, unsigned long percentage) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_QBaseSetPercent(KIO__CommandLauncherJob* self, unsigned long percentage) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_SetPercent_IsBase(true);
        vkiocommandlauncherjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnSetPercent(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_SetPercent_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_SetPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__CommandLauncherJob_EmitResult(KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->emitResult();
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->emitResult();
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_QBaseEmitResult(KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_EmitResult_IsBase(true);
        vkiocommandlauncherjob->emitResult();
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->emitResult();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnEmitResult(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_EmitResult_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_EmitResult_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__CommandLauncherJob_EmitPercent(KIO__CommandLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_QBaseEmitPercent(KIO__CommandLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_EmitPercent_IsBase(true);
        vkiocommandlauncherjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnEmitPercent(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_EmitPercent_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_EmitPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__CommandLauncherJob_EmitSpeed(KIO__CommandLauncherJob* self, unsigned long speed) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_QBaseEmitSpeed(KIO__CommandLauncherJob* self, unsigned long speed) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_EmitSpeed_IsBase(true);
        vkiocommandlauncherjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnEmitSpeed(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_EmitSpeed_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_EmitSpeed_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__CommandLauncherJob_StartElapsedTimer(KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->startElapsedTimer();
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->startElapsedTimer();
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_QBaseStartElapsedTimer(KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_StartElapsedTimer_IsBase(true);
        vkiocommandlauncherjob->startElapsedTimer();
    } else {
        ((VirtualKIOCommandLauncherJob*)self)->startElapsedTimer();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnStartElapsedTimer(KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_StartElapsedTimer_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_StartElapsedTimer_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIO__CommandLauncherJob_Sender(const KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self));
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        return vkiocommandlauncherjob->sender();
    } else {
        return ((VirtualKIOCommandLauncherJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIO__CommandLauncherJob_QBaseSender(const KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self));
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_Sender_IsBase(true);
        return vkiocommandlauncherjob->sender();
    } else {
        return ((VirtualKIOCommandLauncherJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnSender(const KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self));
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_Sender_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__CommandLauncherJob_SenderSignalIndex(const KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self));
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        return vkiocommandlauncherjob->senderSignalIndex();
    } else {
        return ((VirtualKIOCommandLauncherJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIO__CommandLauncherJob_QBaseSenderSignalIndex(const KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self));
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_SenderSignalIndex_IsBase(true);
        return vkiocommandlauncherjob->senderSignalIndex();
    } else {
        return ((VirtualKIOCommandLauncherJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnSenderSignalIndex(const KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self));
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__CommandLauncherJob_Receivers(const KIO__CommandLauncherJob* self, const char* signal) {
    auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self));
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        return vkiocommandlauncherjob->receivers(signal);
    } else {
        return ((VirtualKIOCommandLauncherJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIO__CommandLauncherJob_QBaseReceivers(const KIO__CommandLauncherJob* self, const char* signal) {
    auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self));
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_Receivers_IsBase(true);
        return vkiocommandlauncherjob->receivers(signal);
    } else {
        return ((VirtualKIOCommandLauncherJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnReceivers(const KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self));
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_Receivers_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__CommandLauncherJob_IsSignalConnected(const KIO__CommandLauncherJob* self, const QMetaMethod* signal) {
    auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self));
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        return vkiocommandlauncherjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOCommandLauncherJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIO__CommandLauncherJob_QBaseIsSignalConnected(const KIO__CommandLauncherJob* self, const QMetaMethod* signal) {
    auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self));
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_IsSignalConnected_IsBase(true);
        return vkiocommandlauncherjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOCommandLauncherJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnIsSignalConnected(const KIO__CommandLauncherJob* self, intptr_t slot) {
    auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self));
    if (vkiocommandlauncherjob && vkiocommandlauncherjob->isVirtualKIOCommandLauncherJob) {
        vkiocommandlauncherjob->setKIO__CommandLauncherJob_IsSignalConnected_Callback(reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_IsSignalConnected_Callback>(slot));
    }
}

void KIO__CommandLauncherJob_Delete(KIO__CommandLauncherJob* self) {
    delete self;
}
