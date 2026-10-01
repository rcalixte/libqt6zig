#include <KJob>
#include <KTerminalLauncherJob>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QProcessEnvironment>
#include <QString>
#include <QTimerEvent>
#include <kterminallauncherjob.h>
#include "libkterminallauncherjob.h"
#include "libkterminallauncherjob.hxx"

KTerminalLauncherJob* KTerminalLauncherJob_new(const libqt_string command) {
    QString command_QString = QString::fromUtf8(command.data, command.len);
    return new VirtualKTerminalLauncherJob(command_QString);
}

KTerminalLauncherJob* KTerminalLauncherJob_new2(const libqt_string command, QObject* parent) {
    QString command_QString = QString::fromUtf8(command.data, command.len);
    return new VirtualKTerminalLauncherJob(command_QString, parent);
}

QMetaObject* KTerminalLauncherJob_MetaObject(const KTerminalLauncherJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTerminalLauncherJob_Metacast(KTerminalLauncherJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTerminalLauncherJob_Metacall(KTerminalLauncherJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KTerminalLauncherJob_Tr(const char* s) {
    auto _ret = KTerminalLauncherJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KTerminalLauncherJob_SetWorkingDirectory(KTerminalLauncherJob* self, const libqt_string workingDirectory) {
    QString workingDirectory_QString = QString::fromUtf8(workingDirectory.data, workingDirectory.len);
    self->setWorkingDirectory(workingDirectory_QString);
}

void KTerminalLauncherJob_SetStartupId(KTerminalLauncherJob* self, const libqt_string startupId) {
    QByteArray startupId_QByteArray(startupId.data, startupId.len);
    self->setStartupId(startupId_QByteArray);
}

void KTerminalLauncherJob_SetProcessEnvironment(KTerminalLauncherJob* self, const QProcessEnvironment* environment) {
    self->setProcessEnvironment(*environment);
}

void KTerminalLauncherJob_Start(KTerminalLauncherJob* self) {
    self->start();
}

libqt_string KTerminalLauncherJob_Tr2(const char* s, const char* c) {
    auto _ret = KTerminalLauncherJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTerminalLauncherJob_Tr3(const char* s, const char* c, int n) {
    auto _ret = KTerminalLauncherJob::tr(s, c, static_cast<int>(n));
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
QMetaObject* KTerminalLauncherJob_SuperMetaObject(const KTerminalLauncherJob* self) {
    return (QMetaObject*)self->KTerminalLauncherJob::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnMetaObject(KTerminalLauncherJob* self, intptr_t slot) {
    if (auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self)))
        vkterminallauncherjob->kterminallauncherjob_metaobject_callback = reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KTerminalLauncherJob_SuperMetacast(KTerminalLauncherJob* self, const char* param1) {
    return self->KTerminalLauncherJob::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnMetacast(KTerminalLauncherJob* self, intptr_t slot) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self))
        vkterminallauncherjob->kterminallauncherjob_metacast_callback = reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_Metacast_Callback>(slot);
}

// Base class handler implementation
int KTerminalLauncherJob_SuperMetacall(KTerminalLauncherJob* self, int param1, int param2, void** param3) {
    return self->KTerminalLauncherJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnMetacall(KTerminalLauncherJob* self, intptr_t slot) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self))
        vkterminallauncherjob->kterminallauncherjob_metacall_callback = reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_Metacall_Callback>(slot);
}

// Base class handler implementation
void KTerminalLauncherJob_SuperStart(KTerminalLauncherJob* self) {
    self->KTerminalLauncherJob::start();
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnStart(KTerminalLauncherJob* self, intptr_t slot) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self))
        vkterminallauncherjob->kterminallauncherjob_start_callback = reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_Start_Callback>(slot);
}

// Derived class handler implementation
bool KTerminalLauncherJob_DoKill(KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob) {
        return vkterminallauncherjob->doKill();
    } else {
        qFatal("Error: Protected virtual method KTerminalLauncherJob::doKill called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTerminalLauncherJob_SuperDoKill(KTerminalLauncherJob* self) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self)) {
        return vkterminallauncherjob->KTerminalLauncherJob::doKill();
    } else
        qFatal("Error: Protected virtual method KTerminalLauncherJob::doKill called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnDoKill(KTerminalLauncherJob* self, intptr_t slot) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self))
        vkterminallauncherjob->kterminallauncherjob_dokill_callback = reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_DoKill_Callback>(slot);
}

// Derived class handler implementation
bool KTerminalLauncherJob_DoSuspend(KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob) {
        return vkterminallauncherjob->doSuspend();
    } else {
        qFatal("Error: Protected virtual method KTerminalLauncherJob::doSuspend called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTerminalLauncherJob_SuperDoSuspend(KTerminalLauncherJob* self) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self)) {
        return vkterminallauncherjob->KTerminalLauncherJob::doSuspend();
    } else
        qFatal("Error: Protected virtual method KTerminalLauncherJob::doSuspend called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnDoSuspend(KTerminalLauncherJob* self, intptr_t slot) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self))
        vkterminallauncherjob->kterminallauncherjob_dosuspend_callback = reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_DoSuspend_Callback>(slot);
}

// Derived class handler implementation
bool KTerminalLauncherJob_DoResume(KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob) {
        return vkterminallauncherjob->doResume();
    } else {
        qFatal("Error: Protected virtual method KTerminalLauncherJob::doResume called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTerminalLauncherJob_SuperDoResume(KTerminalLauncherJob* self) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self)) {
        return vkterminallauncherjob->KTerminalLauncherJob::doResume();
    } else
        qFatal("Error: Protected virtual method KTerminalLauncherJob::doResume called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnDoResume(KTerminalLauncherJob* self, intptr_t slot) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self))
        vkterminallauncherjob->kterminallauncherjob_doresume_callback = reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_DoResume_Callback>(slot);
}

// Derived class handler implementation
libqt_string KTerminalLauncherJob_ErrorString(const KTerminalLauncherJob* self) {
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
libqt_string KTerminalLauncherJob_SuperErrorString(const KTerminalLauncherJob* self) {
    auto _ret = self->KTerminalLauncherJob::errorString();
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
void KTerminalLauncherJob_OnErrorString(KTerminalLauncherJob* self, intptr_t slot) {
    if (auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self)))
        vkterminallauncherjob->kterminallauncherjob_errorstring_callback = reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_ErrorString_Callback>(slot);
}

// Derived class handler implementation
bool KTerminalLauncherJob_Event(KTerminalLauncherJob* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KTerminalLauncherJob_SuperEvent(KTerminalLauncherJob* self, QEvent* event) {
    return self->KTerminalLauncherJob::event(event);
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnEvent(KTerminalLauncherJob* self, intptr_t slot) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self))
        vkterminallauncherjob->kterminallauncherjob_event_callback = reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_Event_Callback>(slot);
}

// Derived class handler implementation
bool KTerminalLauncherJob_EventFilter(KTerminalLauncherJob* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KTerminalLauncherJob_SuperEventFilter(KTerminalLauncherJob* self, QObject* watched, QEvent* event) {
    return self->KTerminalLauncherJob::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnEventFilter(KTerminalLauncherJob* self, intptr_t slot) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self))
        vkterminallauncherjob->kterminallauncherjob_eventfilter_callback = reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KTerminalLauncherJob_TimerEvent(KTerminalLauncherJob* self, QTimerEvent* event) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob) {
        vkterminallauncherjob->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTerminalLauncherJob::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTerminalLauncherJob_SuperTimerEvent(KTerminalLauncherJob* self, QTimerEvent* event) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self)) {
        vkterminallauncherjob->KTerminalLauncherJob::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KTerminalLauncherJob::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnTimerEvent(KTerminalLauncherJob* self, intptr_t slot) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self))
        vkterminallauncherjob->kterminallauncherjob_timerevent_callback = reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KTerminalLauncherJob_ChildEvent(KTerminalLauncherJob* self, QChildEvent* event) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob) {
        vkterminallauncherjob->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTerminalLauncherJob::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTerminalLauncherJob_SuperChildEvent(KTerminalLauncherJob* self, QChildEvent* event) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self)) {
        vkterminallauncherjob->KTerminalLauncherJob::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KTerminalLauncherJob::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnChildEvent(KTerminalLauncherJob* self, intptr_t slot) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self))
        vkterminallauncherjob->kterminallauncherjob_childevent_callback = reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KTerminalLauncherJob_CustomEvent(KTerminalLauncherJob* self, QEvent* event) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob) {
        vkterminallauncherjob->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTerminalLauncherJob::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTerminalLauncherJob_SuperCustomEvent(KTerminalLauncherJob* self, QEvent* event) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self)) {
        vkterminallauncherjob->KTerminalLauncherJob::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KTerminalLauncherJob::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnCustomEvent(KTerminalLauncherJob* self, intptr_t slot) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self))
        vkterminallauncherjob->kterminallauncherjob_customevent_callback = reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KTerminalLauncherJob_ConnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob) {
        vkterminallauncherjob->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTerminalLauncherJob::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTerminalLauncherJob_SuperConnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self)) {
        vkterminallauncherjob->KTerminalLauncherJob::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTerminalLauncherJob::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnConnectNotify(KTerminalLauncherJob* self, intptr_t slot) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self))
        vkterminallauncherjob->kterminallauncherjob_connectnotify_callback = reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KTerminalLauncherJob_DisconnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob) {
        vkterminallauncherjob->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTerminalLauncherJob::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTerminalLauncherJob_SuperDisconnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self)) {
        vkterminallauncherjob->KTerminalLauncherJob::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTerminalLauncherJob::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnDisconnectNotify(KTerminalLauncherJob* self, intptr_t slot) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self))
        vkterminallauncherjob->kterminallauncherjob_disconnectnotify_callback = reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KTerminalLauncherJob_SetCapabilities(KTerminalLauncherJob* self, int capabilities) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self)) {
        vkterminallauncherjob->VirtualKTerminalLauncherJob::setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else
        qFatal("Error: Protected method KTerminalLauncherJob::setCapabilities called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTerminalLauncherJob_IsFinished(const KTerminalLauncherJob* self) {
    if (auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self))) {
        return vkterminallauncherjob->VirtualKTerminalLauncherJob::isFinished();
    } else
        qFatal("Error: Protected method KTerminalLauncherJob::isFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void KTerminalLauncherJob_SetError(KTerminalLauncherJob* self, int errorCode) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self)) {
        vkterminallauncherjob->VirtualKTerminalLauncherJob::setError(static_cast<int>(errorCode));
    } else
        qFatal("Error: Protected method KTerminalLauncherJob::setError called without a directly constructed type");
}

// Derived class protected handler implementation
void KTerminalLauncherJob_SetErrorText(KTerminalLauncherJob* self, const libqt_string errorText) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self)) {
        QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
        vkterminallauncherjob->VirtualKTerminalLauncherJob::setErrorText(errorText_QString);
    } else
        qFatal("Error: Protected method KTerminalLauncherJob::setErrorText called without a directly constructed type");
}

// Derived class protected handler implementation
void KTerminalLauncherJob_SetProcessedAmount(KTerminalLauncherJob* self, int unit, unsigned long long amount) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self)) {
        vkterminallauncherjob->VirtualKTerminalLauncherJob::setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KTerminalLauncherJob::setProcessedAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KTerminalLauncherJob_SetTotalAmount(KTerminalLauncherJob* self, int unit, unsigned long long amount) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self)) {
        vkterminallauncherjob->VirtualKTerminalLauncherJob::setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KTerminalLauncherJob::setTotalAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KTerminalLauncherJob_SetProgressUnit(KTerminalLauncherJob* self, int unit) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self)) {
        vkterminallauncherjob->VirtualKTerminalLauncherJob::setProgressUnit(static_cast<KJob::Unit>(unit));
    } else
        qFatal("Error: Protected method KTerminalLauncherJob::setProgressUnit called without a directly constructed type");
}

// Derived class protected handler implementation
void KTerminalLauncherJob_SetPercent(KTerminalLauncherJob* self, unsigned long percentage) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self)) {
        vkterminallauncherjob->VirtualKTerminalLauncherJob::setPercent(static_cast<unsigned long>(percentage));
    } else
        qFatal("Error: Protected method KTerminalLauncherJob::setPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KTerminalLauncherJob_EmitResult(KTerminalLauncherJob* self) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self)) {
        vkterminallauncherjob->VirtualKTerminalLauncherJob::emitResult();
    } else
        qFatal("Error: Protected method KTerminalLauncherJob::emitResult called without a directly constructed type");
}

// Derived class protected handler implementation
void KTerminalLauncherJob_EmitPercent(KTerminalLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self)) {
        vkterminallauncherjob->VirtualKTerminalLauncherJob::emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else
        qFatal("Error: Protected method KTerminalLauncherJob::emitPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KTerminalLauncherJob_EmitSpeed(KTerminalLauncherJob* self, unsigned long speed) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self)) {
        vkterminallauncherjob->VirtualKTerminalLauncherJob::emitSpeed(static_cast<unsigned long>(speed));
    } else
        qFatal("Error: Protected method KTerminalLauncherJob::emitSpeed called without a directly constructed type");
}

// Derived class protected handler implementation
void KTerminalLauncherJob_StartElapsedTimer(KTerminalLauncherJob* self) {
    if (auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self)) {
        vkterminallauncherjob->VirtualKTerminalLauncherJob::startElapsedTimer();
    } else
        qFatal("Error: Protected method KTerminalLauncherJob::startElapsedTimer called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KTerminalLauncherJob_Sender(const KTerminalLauncherJob* self) {
    if (auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self))) {
        return vkterminallauncherjob->VirtualKTerminalLauncherJob::sender();
    } else
        qFatal("Error: Protected method KTerminalLauncherJob::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KTerminalLauncherJob_SenderSignalIndex(const KTerminalLauncherJob* self) {
    if (auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self))) {
        return vkterminallauncherjob->VirtualKTerminalLauncherJob::senderSignalIndex();
    } else
        qFatal("Error: Protected method KTerminalLauncherJob::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KTerminalLauncherJob_Receivers(const KTerminalLauncherJob* self, const char* signal) {
    if (auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self))) {
        return vkterminallauncherjob->VirtualKTerminalLauncherJob::receivers(signal);
    } else
        qFatal("Error: Protected method KTerminalLauncherJob::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTerminalLauncherJob_IsSignalConnected(const KTerminalLauncherJob* self, const QMetaMethod* signal) {
    if (auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self))) {
        return vkterminallauncherjob->VirtualKTerminalLauncherJob::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KTerminalLauncherJob::isSignalConnected called without a directly constructed type");
}

void KTerminalLauncherJob_Delete(KTerminalLauncherJob* self) {
    delete self;
}
