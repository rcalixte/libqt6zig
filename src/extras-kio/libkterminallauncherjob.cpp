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
#include <QByteArray>
#include <cstring>
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
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTerminalLauncherJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KTerminalLauncherJob_Tr(const char* s) {
    QString _ret = KTerminalLauncherJob::tr(s);
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
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        self->start();
    } else {
        ((VirtualKTerminalLauncherJob*)self)->start();
    }
}

libqt_string KTerminalLauncherJob_Tr2(const char* s, const char* c) {
    QString _ret = KTerminalLauncherJob::tr(s, c);
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
    QString _ret = KTerminalLauncherJob::tr(s, c, static_cast<int>(n));
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
int KTerminalLauncherJob_QBaseMetacall(KTerminalLauncherJob* self, int param1, int param2, void** param3) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_Metacall_IsBase(true);
        return vkterminallauncherjob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KTerminalLauncherJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnMetacall(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_Metacall_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KTerminalLauncherJob_QBaseStart(KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_Start_IsBase(true);
        vkterminallauncherjob->start();
    } else {
        self->KTerminalLauncherJob::start();
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnStart(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_Start_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_Start_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTerminalLauncherJob_DoKill(KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        return vkterminallauncherjob->doKill();
    } else {
        return ((VirtualKTerminalLauncherJob*)self)->doKill();
    }
}

// Base class handler implementation
bool KTerminalLauncherJob_QBaseDoKill(KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_DoKill_IsBase(true);
        return vkterminallauncherjob->doKill();
    } else {
        return ((VirtualKTerminalLauncherJob*)self)->doKill();
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnDoKill(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_DoKill_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_DoKill_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTerminalLauncherJob_DoSuspend(KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        return vkterminallauncherjob->doSuspend();
    } else {
        return ((VirtualKTerminalLauncherJob*)self)->doSuspend();
    }
}

// Base class handler implementation
bool KTerminalLauncherJob_QBaseDoSuspend(KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_DoSuspend_IsBase(true);
        return vkterminallauncherjob->doSuspend();
    } else {
        return ((VirtualKTerminalLauncherJob*)self)->doSuspend();
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnDoSuspend(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_DoSuspend_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_DoSuspend_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTerminalLauncherJob_DoResume(KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        return vkterminallauncherjob->doResume();
    } else {
        return ((VirtualKTerminalLauncherJob*)self)->doResume();
    }
}

// Base class handler implementation
bool KTerminalLauncherJob_QBaseDoResume(KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_DoResume_IsBase(true);
        return vkterminallauncherjob->doResume();
    } else {
        return ((VirtualKTerminalLauncherJob*)self)->doResume();
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnDoResume(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_DoResume_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_DoResume_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KTerminalLauncherJob_ErrorString(const KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self));
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        QString _ret = vkterminallauncherjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KTerminalLauncherJob::errorString();
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
libqt_string KTerminalLauncherJob_QBaseErrorString(const KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self));
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_ErrorString_IsBase(true);
        QString _ret = vkterminallauncherjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KTerminalLauncherJob::errorString();
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
void KTerminalLauncherJob_OnErrorString(const KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self));
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_ErrorString_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_ErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTerminalLauncherJob_Event(KTerminalLauncherJob* self, QEvent* event) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        return vkterminallauncherjob->event(event);
    } else {
        return self->KTerminalLauncherJob::event(event);
    }
}

// Base class handler implementation
bool KTerminalLauncherJob_QBaseEvent(KTerminalLauncherJob* self, QEvent* event) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_Event_IsBase(true);
        return vkterminallauncherjob->event(event);
    } else {
        return self->KTerminalLauncherJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnEvent(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_Event_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTerminalLauncherJob_EventFilter(KTerminalLauncherJob* self, QObject* watched, QEvent* event) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        return vkterminallauncherjob->eventFilter(watched, event);
    } else {
        return self->KTerminalLauncherJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KTerminalLauncherJob_QBaseEventFilter(KTerminalLauncherJob* self, QObject* watched, QEvent* event) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_EventFilter_IsBase(true);
        return vkterminallauncherjob->eventFilter(watched, event);
    } else {
        return self->KTerminalLauncherJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnEventFilter(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_EventFilter_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KTerminalLauncherJob_TimerEvent(KTerminalLauncherJob* self, QTimerEvent* event) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->timerEvent(event);
    } else {
        ((VirtualKTerminalLauncherJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KTerminalLauncherJob_QBaseTimerEvent(KTerminalLauncherJob* self, QTimerEvent* event) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_TimerEvent_IsBase(true);
        vkterminallauncherjob->timerEvent(event);
    } else {
        ((VirtualKTerminalLauncherJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnTimerEvent(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_TimerEvent_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTerminalLauncherJob_ChildEvent(KTerminalLauncherJob* self, QChildEvent* event) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->childEvent(event);
    } else {
        ((VirtualKTerminalLauncherJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KTerminalLauncherJob_QBaseChildEvent(KTerminalLauncherJob* self, QChildEvent* event) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_ChildEvent_IsBase(true);
        vkterminallauncherjob->childEvent(event);
    } else {
        ((VirtualKTerminalLauncherJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnChildEvent(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_ChildEvent_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTerminalLauncherJob_CustomEvent(KTerminalLauncherJob* self, QEvent* event) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->customEvent(event);
    } else {
        ((VirtualKTerminalLauncherJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KTerminalLauncherJob_QBaseCustomEvent(KTerminalLauncherJob* self, QEvent* event) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_CustomEvent_IsBase(true);
        vkterminallauncherjob->customEvent(event);
    } else {
        ((VirtualKTerminalLauncherJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnCustomEvent(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_CustomEvent_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTerminalLauncherJob_ConnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->connectNotify(*signal);
    } else {
        ((VirtualKTerminalLauncherJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KTerminalLauncherJob_QBaseConnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_ConnectNotify_IsBase(true);
        vkterminallauncherjob->connectNotify(*signal);
    } else {
        ((VirtualKTerminalLauncherJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnConnectNotify(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_ConnectNotify_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTerminalLauncherJob_DisconnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->disconnectNotify(*signal);
    } else {
        ((VirtualKTerminalLauncherJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KTerminalLauncherJob_QBaseDisconnectNotify(KTerminalLauncherJob* self, const QMetaMethod* signal) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_DisconnectNotify_IsBase(true);
        vkterminallauncherjob->disconnectNotify(*signal);
    } else {
        ((VirtualKTerminalLauncherJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnDisconnectNotify(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_DisconnectNotify_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTerminalLauncherJob_SetCapabilities(KTerminalLauncherJob* self, int capabilities) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKTerminalLauncherJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Base class handler implementation
void KTerminalLauncherJob_QBaseSetCapabilities(KTerminalLauncherJob* self, int capabilities) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_SetCapabilities_IsBase(true);
        vkterminallauncherjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKTerminalLauncherJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnSetCapabilities(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_SetCapabilities_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_SetCapabilities_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTerminalLauncherJob_IsFinished(const KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self));
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        return vkterminallauncherjob->isFinished();
    } else {
        return ((VirtualKTerminalLauncherJob*)self)->isFinished();
    }
}

// Base class handler implementation
bool KTerminalLauncherJob_QBaseIsFinished(const KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self));
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_IsFinished_IsBase(true);
        return vkterminallauncherjob->isFinished();
    } else {
        return ((VirtualKTerminalLauncherJob*)self)->isFinished();
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnIsFinished(const KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self));
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_IsFinished_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_IsFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void KTerminalLauncherJob_SetError(KTerminalLauncherJob* self, int errorCode) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKTerminalLauncherJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Base class handler implementation
void KTerminalLauncherJob_QBaseSetError(KTerminalLauncherJob* self, int errorCode) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_SetError_IsBase(true);
        vkterminallauncherjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKTerminalLauncherJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnSetError(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_SetError_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
void KTerminalLauncherJob_SetErrorText(KTerminalLauncherJob* self, const libqt_string errorText) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKTerminalLauncherJob*)self)->setErrorText(errorText_QString);
    }
}

// Base class handler implementation
void KTerminalLauncherJob_QBaseSetErrorText(KTerminalLauncherJob* self, const libqt_string errorText) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_SetErrorText_IsBase(true);
        vkterminallauncherjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKTerminalLauncherJob*)self)->setErrorText(errorText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnSetErrorText(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_SetErrorText_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_SetErrorText_Callback>(slot));
    }
}

// Derived class handler implementation
void KTerminalLauncherJob_SetProcessedAmount(KTerminalLauncherJob* self, int unit, unsigned long long amount) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKTerminalLauncherJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KTerminalLauncherJob_QBaseSetProcessedAmount(KTerminalLauncherJob* self, int unit, unsigned long long amount) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_SetProcessedAmount_IsBase(true);
        vkterminallauncherjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKTerminalLauncherJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnSetProcessedAmount(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_SetProcessedAmount_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_SetProcessedAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KTerminalLauncherJob_SetTotalAmount(KTerminalLauncherJob* self, int unit, unsigned long long amount) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKTerminalLauncherJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KTerminalLauncherJob_QBaseSetTotalAmount(KTerminalLauncherJob* self, int unit, unsigned long long amount) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_SetTotalAmount_IsBase(true);
        vkterminallauncherjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKTerminalLauncherJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnSetTotalAmount(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_SetTotalAmount_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_SetTotalAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KTerminalLauncherJob_SetProgressUnit(KTerminalLauncherJob* self, int unit) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKTerminalLauncherJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Base class handler implementation
void KTerminalLauncherJob_QBaseSetProgressUnit(KTerminalLauncherJob* self, int unit) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_SetProgressUnit_IsBase(true);
        vkterminallauncherjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKTerminalLauncherJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnSetProgressUnit(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_SetProgressUnit_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_SetProgressUnit_Callback>(slot));
    }
}

// Derived class handler implementation
void KTerminalLauncherJob_SetPercent(KTerminalLauncherJob* self, unsigned long percentage) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKTerminalLauncherJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Base class handler implementation
void KTerminalLauncherJob_QBaseSetPercent(KTerminalLauncherJob* self, unsigned long percentage) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_SetPercent_IsBase(true);
        vkterminallauncherjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKTerminalLauncherJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnSetPercent(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_SetPercent_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_SetPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTerminalLauncherJob_EmitResult(KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->emitResult();
    } else {
        ((VirtualKTerminalLauncherJob*)self)->emitResult();
    }
}

// Base class handler implementation
void KTerminalLauncherJob_QBaseEmitResult(KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_EmitResult_IsBase(true);
        vkterminallauncherjob->emitResult();
    } else {
        ((VirtualKTerminalLauncherJob*)self)->emitResult();
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnEmitResult(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_EmitResult_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_EmitResult_Callback>(slot));
    }
}

// Derived class handler implementation
void KTerminalLauncherJob_EmitPercent(KTerminalLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKTerminalLauncherJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Base class handler implementation
void KTerminalLauncherJob_QBaseEmitPercent(KTerminalLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_EmitPercent_IsBase(true);
        vkterminallauncherjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKTerminalLauncherJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnEmitPercent(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_EmitPercent_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_EmitPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTerminalLauncherJob_EmitSpeed(KTerminalLauncherJob* self, unsigned long speed) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKTerminalLauncherJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Base class handler implementation
void KTerminalLauncherJob_QBaseEmitSpeed(KTerminalLauncherJob* self, unsigned long speed) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_EmitSpeed_IsBase(true);
        vkterminallauncherjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKTerminalLauncherJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnEmitSpeed(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_EmitSpeed_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_EmitSpeed_Callback>(slot));
    }
}

// Derived class handler implementation
void KTerminalLauncherJob_StartElapsedTimer(KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->startElapsedTimer();
    } else {
        ((VirtualKTerminalLauncherJob*)self)->startElapsedTimer();
    }
}

// Base class handler implementation
void KTerminalLauncherJob_QBaseStartElapsedTimer(KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_StartElapsedTimer_IsBase(true);
        vkterminallauncherjob->startElapsedTimer();
    } else {
        ((VirtualKTerminalLauncherJob*)self)->startElapsedTimer();
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnStartElapsedTimer(KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = dynamic_cast<VirtualKTerminalLauncherJob*>(self);
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_StartElapsedTimer_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_StartElapsedTimer_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KTerminalLauncherJob_Sender(const KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self));
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        return vkterminallauncherjob->sender();
    } else {
        return ((VirtualKTerminalLauncherJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* KTerminalLauncherJob_QBaseSender(const KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self));
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_Sender_IsBase(true);
        return vkterminallauncherjob->sender();
    } else {
        return ((VirtualKTerminalLauncherJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnSender(const KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self));
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_Sender_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KTerminalLauncherJob_SenderSignalIndex(const KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self));
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        return vkterminallauncherjob->senderSignalIndex();
    } else {
        return ((VirtualKTerminalLauncherJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KTerminalLauncherJob_QBaseSenderSignalIndex(const KTerminalLauncherJob* self) {
    auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self));
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_SenderSignalIndex_IsBase(true);
        return vkterminallauncherjob->senderSignalIndex();
    } else {
        return ((VirtualKTerminalLauncherJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnSenderSignalIndex(const KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self));
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KTerminalLauncherJob_Receivers(const KTerminalLauncherJob* self, const char* signal) {
    auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self));
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        return vkterminallauncherjob->receivers(signal);
    } else {
        return ((VirtualKTerminalLauncherJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KTerminalLauncherJob_QBaseReceivers(const KTerminalLauncherJob* self, const char* signal) {
    auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self));
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_Receivers_IsBase(true);
        return vkterminallauncherjob->receivers(signal);
    } else {
        return ((VirtualKTerminalLauncherJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnReceivers(const KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self));
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_Receivers_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTerminalLauncherJob_IsSignalConnected(const KTerminalLauncherJob* self, const QMetaMethod* signal) {
    auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self));
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        return vkterminallauncherjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKTerminalLauncherJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KTerminalLauncherJob_QBaseIsSignalConnected(const KTerminalLauncherJob* self, const QMetaMethod* signal) {
    auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self));
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_IsSignalConnected_IsBase(true);
        return vkterminallauncherjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKTerminalLauncherJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTerminalLauncherJob_OnIsSignalConnected(const KTerminalLauncherJob* self, intptr_t slot) {
    auto* vkterminallauncherjob = const_cast<VirtualKTerminalLauncherJob*>(dynamic_cast<const VirtualKTerminalLauncherJob*>(self));
    if (vkterminallauncherjob && vkterminallauncherjob->isVirtualKTerminalLauncherJob) {
        vkterminallauncherjob->setKTerminalLauncherJob_IsSignalConnected_Callback(reinterpret_cast<VirtualKTerminalLauncherJob::KTerminalLauncherJob_IsSignalConnected_Callback>(slot));
    }
}

void KTerminalLauncherJob_Delete(KTerminalLauncherJob* self) {
    delete self;
}
