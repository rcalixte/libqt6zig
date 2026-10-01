#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__CommandLauncherJob
#include <KJob>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QProcessEnvironment>
#include <QString>
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
    auto _ret = self->command();
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
    auto _ret = self->workingDirectory();
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
    self->start();
}

long long KIO__CommandLauncherJob_Pid(const KIO__CommandLauncherJob* self) {
    return static_cast<long long>(self->pid());
}

// Base class handler implementation
void KIO__CommandLauncherJob_SuperStart(KIO__CommandLauncherJob* self) {
    self->KIO::CommandLauncherJob::start();
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnStart(KIO__CommandLauncherJob* self, intptr_t slot) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self))
        vkiocommandlauncherjob->kio__commandlauncherjob_start_callback = reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_Start_Callback>(slot);
}

// Derived class handler implementation
QMetaObject* KIO__CommandLauncherJob_MetaObject(const KIO__CommandLauncherJob* self) {
    return (QMetaObject*)self->metaObject();
}

// Base class handler implementation
QMetaObject* KIO__CommandLauncherJob_SuperMetaObject(const KIO__CommandLauncherJob* self) {
    return (QMetaObject*)self->KIO::CommandLauncherJob::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnMetaObject(KIO__CommandLauncherJob* self, intptr_t slot) {
    if (auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self)))
        vkiocommandlauncherjob->kio__commandlauncherjob_metaobject_callback = reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_MetaObject_Callback>(slot);
}

// Derived class handler implementation
void* KIO__CommandLauncherJob_Metacast(KIO__CommandLauncherJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

// Base class handler implementation
void* KIO__CommandLauncherJob_SuperMetacast(KIO__CommandLauncherJob* self, const char* param1) {
    return self->KIO::CommandLauncherJob::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnMetacast(KIO__CommandLauncherJob* self, intptr_t slot) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self))
        vkiocommandlauncherjob->kio__commandlauncherjob_metacast_callback = reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_Metacast_Callback>(slot);
}

// Derived class handler implementation
int KIO__CommandLauncherJob_Metacall(KIO__CommandLauncherJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Base class handler implementation
int KIO__CommandLauncherJob_SuperMetacall(KIO__CommandLauncherJob* self, int param1, int param2, void** param3) {
    return self->KIO::CommandLauncherJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnMetacall(KIO__CommandLauncherJob* self, intptr_t slot) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self))
        vkiocommandlauncherjob->kio__commandlauncherjob_metacall_callback = reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KIO__CommandLauncherJob_DoKill(KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob) {
        return vkiocommandlauncherjob->doKill();
    } else {
        qFatal("Error: Protected virtual method KIO::CommandLauncherJob::doKill called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__CommandLauncherJob_SuperDoKill(KIO__CommandLauncherJob* self) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self)) {
        return vkiocommandlauncherjob->KIO::CommandLauncherJob::doKill();
    } else
        qFatal("Error: Protected virtual method KIO::CommandLauncherJob::doKill called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnDoKill(KIO__CommandLauncherJob* self, intptr_t slot) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self))
        vkiocommandlauncherjob->kio__commandlauncherjob_dokill_callback = reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_DoKill_Callback>(slot);
}

// Derived class handler implementation
bool KIO__CommandLauncherJob_DoSuspend(KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob) {
        return vkiocommandlauncherjob->doSuspend();
    } else {
        qFatal("Error: Protected virtual method KIO::CommandLauncherJob::doSuspend called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__CommandLauncherJob_SuperDoSuspend(KIO__CommandLauncherJob* self) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self)) {
        return vkiocommandlauncherjob->KIO::CommandLauncherJob::doSuspend();
    } else
        qFatal("Error: Protected virtual method KIO::CommandLauncherJob::doSuspend called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnDoSuspend(KIO__CommandLauncherJob* self, intptr_t slot) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self))
        vkiocommandlauncherjob->kio__commandlauncherjob_dosuspend_callback = reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_DoSuspend_Callback>(slot);
}

// Derived class handler implementation
bool KIO__CommandLauncherJob_DoResume(KIO__CommandLauncherJob* self) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob) {
        return vkiocommandlauncherjob->doResume();
    } else {
        qFatal("Error: Protected virtual method KIO::CommandLauncherJob::doResume called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__CommandLauncherJob_SuperDoResume(KIO__CommandLauncherJob* self) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self)) {
        return vkiocommandlauncherjob->KIO::CommandLauncherJob::doResume();
    } else
        qFatal("Error: Protected virtual method KIO::CommandLauncherJob::doResume called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnDoResume(KIO__CommandLauncherJob* self, intptr_t slot) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self))
        vkiocommandlauncherjob->kio__commandlauncherjob_doresume_callback = reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_DoResume_Callback>(slot);
}

// Derived class handler implementation
libqt_string KIO__CommandLauncherJob_ErrorString(const KIO__CommandLauncherJob* self) {
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

// Base class handler implementation
libqt_string KIO__CommandLauncherJob_SuperErrorString(const KIO__CommandLauncherJob* self) {
    auto _ret = self->KIO::CommandLauncherJob::errorString();
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
void KIO__CommandLauncherJob_OnErrorString(KIO__CommandLauncherJob* self, intptr_t slot) {
    if (auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self)))
        vkiocommandlauncherjob->kio__commandlauncherjob_errorstring_callback = reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_ErrorString_Callback>(slot);
}

// Derived class handler implementation
bool KIO__CommandLauncherJob_Event(KIO__CommandLauncherJob* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KIO__CommandLauncherJob_SuperEvent(KIO__CommandLauncherJob* self, QEvent* event) {
    return self->KIO::CommandLauncherJob::event(event);
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnEvent(KIO__CommandLauncherJob* self, intptr_t slot) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self))
        vkiocommandlauncherjob->kio__commandlauncherjob_event_callback = reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_Event_Callback>(slot);
}

// Derived class handler implementation
bool KIO__CommandLauncherJob_EventFilter(KIO__CommandLauncherJob* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KIO__CommandLauncherJob_SuperEventFilter(KIO__CommandLauncherJob* self, QObject* watched, QEvent* event) {
    return self->KIO::CommandLauncherJob::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnEventFilter(KIO__CommandLauncherJob* self, intptr_t slot) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self))
        vkiocommandlauncherjob->kio__commandlauncherjob_eventfilter_callback = reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KIO__CommandLauncherJob_TimerEvent(KIO__CommandLauncherJob* self, QTimerEvent* event) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob) {
        vkiocommandlauncherjob->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::CommandLauncherJob::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_SuperTimerEvent(KIO__CommandLauncherJob* self, QTimerEvent* event) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self)) {
        vkiocommandlauncherjob->KIO::CommandLauncherJob::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::CommandLauncherJob::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnTimerEvent(KIO__CommandLauncherJob* self, intptr_t slot) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self))
        vkiocommandlauncherjob->kio__commandlauncherjob_timerevent_callback = reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__CommandLauncherJob_ChildEvent(KIO__CommandLauncherJob* self, QChildEvent* event) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob) {
        vkiocommandlauncherjob->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::CommandLauncherJob::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_SuperChildEvent(KIO__CommandLauncherJob* self, QChildEvent* event) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self)) {
        vkiocommandlauncherjob->KIO::CommandLauncherJob::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::CommandLauncherJob::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnChildEvent(KIO__CommandLauncherJob* self, intptr_t slot) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self))
        vkiocommandlauncherjob->kio__commandlauncherjob_childevent_callback = reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__CommandLauncherJob_CustomEvent(KIO__CommandLauncherJob* self, QEvent* event) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob) {
        vkiocommandlauncherjob->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::CommandLauncherJob::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_SuperCustomEvent(KIO__CommandLauncherJob* self, QEvent* event) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self)) {
        vkiocommandlauncherjob->KIO::CommandLauncherJob::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::CommandLauncherJob::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnCustomEvent(KIO__CommandLauncherJob* self, intptr_t slot) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self))
        vkiocommandlauncherjob->kio__commandlauncherjob_customevent_callback = reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__CommandLauncherJob_ConnectNotify(KIO__CommandLauncherJob* self, const QMetaMethod* signal) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob) {
        vkiocommandlauncherjob->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::CommandLauncherJob::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_SuperConnectNotify(KIO__CommandLauncherJob* self, const QMetaMethod* signal) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self)) {
        vkiocommandlauncherjob->KIO::CommandLauncherJob::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::CommandLauncherJob::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnConnectNotify(KIO__CommandLauncherJob* self, intptr_t slot) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self))
        vkiocommandlauncherjob->kio__commandlauncherjob_connectnotify_callback = reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KIO__CommandLauncherJob_DisconnectNotify(KIO__CommandLauncherJob* self, const QMetaMethod* signal) {
    auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self);
    if (vkiocommandlauncherjob) {
        vkiocommandlauncherjob->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::CommandLauncherJob::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__CommandLauncherJob_SuperDisconnectNotify(KIO__CommandLauncherJob* self, const QMetaMethod* signal) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self)) {
        vkiocommandlauncherjob->KIO::CommandLauncherJob::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::CommandLauncherJob::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__CommandLauncherJob_OnDisconnectNotify(KIO__CommandLauncherJob* self, intptr_t slot) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self))
        vkiocommandlauncherjob->kio__commandlauncherjob_disconnectnotify_callback = reinterpret_cast<VirtualKIOCommandLauncherJob::KIO__CommandLauncherJob_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KIO__CommandLauncherJob_SetCapabilities(KIO__CommandLauncherJob* self, int capabilities) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self)) {
        vkiocommandlauncherjob->VirtualKIOCommandLauncherJob::setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else
        qFatal("Error: Protected method KIO::CommandLauncherJob::setCapabilities called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__CommandLauncherJob_IsFinished(const KIO__CommandLauncherJob* self) {
    if (auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self))) {
        return vkiocommandlauncherjob->VirtualKIOCommandLauncherJob::isFinished();
    } else
        qFatal("Error: Protected method KIO::CommandLauncherJob::isFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__CommandLauncherJob_SetError(KIO__CommandLauncherJob* self, int errorCode) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self)) {
        vkiocommandlauncherjob->VirtualKIOCommandLauncherJob::setError(static_cast<int>(errorCode));
    } else
        qFatal("Error: Protected method KIO::CommandLauncherJob::setError called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__CommandLauncherJob_SetErrorText(KIO__CommandLauncherJob* self, const libqt_string errorText) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self)) {
        QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
        vkiocommandlauncherjob->VirtualKIOCommandLauncherJob::setErrorText(errorText_QString);
    } else
        qFatal("Error: Protected method KIO::CommandLauncherJob::setErrorText called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__CommandLauncherJob_SetProcessedAmount(KIO__CommandLauncherJob* self, int unit, unsigned long long amount) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self)) {
        vkiocommandlauncherjob->VirtualKIOCommandLauncherJob::setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KIO::CommandLauncherJob::setProcessedAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__CommandLauncherJob_SetTotalAmount(KIO__CommandLauncherJob* self, int unit, unsigned long long amount) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self)) {
        vkiocommandlauncherjob->VirtualKIOCommandLauncherJob::setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KIO::CommandLauncherJob::setTotalAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__CommandLauncherJob_SetProgressUnit(KIO__CommandLauncherJob* self, int unit) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self)) {
        vkiocommandlauncherjob->VirtualKIOCommandLauncherJob::setProgressUnit(static_cast<KJob::Unit>(unit));
    } else
        qFatal("Error: Protected method KIO::CommandLauncherJob::setProgressUnit called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__CommandLauncherJob_SetPercent(KIO__CommandLauncherJob* self, unsigned long percentage) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self)) {
        vkiocommandlauncherjob->VirtualKIOCommandLauncherJob::setPercent(static_cast<unsigned long>(percentage));
    } else
        qFatal("Error: Protected method KIO::CommandLauncherJob::setPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__CommandLauncherJob_EmitResult(KIO__CommandLauncherJob* self) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self)) {
        vkiocommandlauncherjob->VirtualKIOCommandLauncherJob::emitResult();
    } else
        qFatal("Error: Protected method KIO::CommandLauncherJob::emitResult called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__CommandLauncherJob_EmitPercent(KIO__CommandLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self)) {
        vkiocommandlauncherjob->VirtualKIOCommandLauncherJob::emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else
        qFatal("Error: Protected method KIO::CommandLauncherJob::emitPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__CommandLauncherJob_EmitSpeed(KIO__CommandLauncherJob* self, unsigned long speed) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self)) {
        vkiocommandlauncherjob->VirtualKIOCommandLauncherJob::emitSpeed(static_cast<unsigned long>(speed));
    } else
        qFatal("Error: Protected method KIO::CommandLauncherJob::emitSpeed called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__CommandLauncherJob_StartElapsedTimer(KIO__CommandLauncherJob* self) {
    if (auto* vkiocommandlauncherjob = dynamic_cast<VirtualKIOCommandLauncherJob*>(self)) {
        vkiocommandlauncherjob->VirtualKIOCommandLauncherJob::startElapsedTimer();
    } else
        qFatal("Error: Protected method KIO::CommandLauncherJob::startElapsedTimer called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KIO__CommandLauncherJob_Sender(const KIO__CommandLauncherJob* self) {
    if (auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self))) {
        return vkiocommandlauncherjob->VirtualKIOCommandLauncherJob::sender();
    } else
        qFatal("Error: Protected method KIO::CommandLauncherJob::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__CommandLauncherJob_SenderSignalIndex(const KIO__CommandLauncherJob* self) {
    if (auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self))) {
        return vkiocommandlauncherjob->VirtualKIOCommandLauncherJob::senderSignalIndex();
    } else
        qFatal("Error: Protected method KIO::CommandLauncherJob::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__CommandLauncherJob_Receivers(const KIO__CommandLauncherJob* self, const char* signal) {
    if (auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self))) {
        return vkiocommandlauncherjob->VirtualKIOCommandLauncherJob::receivers(signal);
    } else
        qFatal("Error: Protected method KIO::CommandLauncherJob::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__CommandLauncherJob_IsSignalConnected(const KIO__CommandLauncherJob* self, const QMetaMethod* signal) {
    if (auto* vkiocommandlauncherjob = const_cast<VirtualKIOCommandLauncherJob*>(dynamic_cast<const VirtualKIOCommandLauncherJob*>(self))) {
        return vkiocommandlauncherjob->VirtualKIOCommandLauncherJob::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KIO::CommandLauncherJob::isSignalConnected called without a directly constructed type");
}

void KIO__CommandLauncherJob_Delete(KIO__CommandLauncherJob* self) {
    delete self;
}
