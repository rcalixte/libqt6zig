#include <KDesktopFileAction>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__ApplicationLauncherJob
#include <KJob>
#include <KServiceAction>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <applicationlauncherjob.h>
#include "libapplicationlauncherjob.h"
#include "libapplicationlauncherjob.hxx"

KIO__ApplicationLauncherJob* KIO__ApplicationLauncherJob_new(const KServiceAction* serviceAction) {
    return new VirtualKIOApplicationLauncherJob(*serviceAction);
}

KIO__ApplicationLauncherJob* KIO__ApplicationLauncherJob_new2(const KDesktopFileAction* desktopFileAction) {
    return new VirtualKIOApplicationLauncherJob(*desktopFileAction);
}

KIO__ApplicationLauncherJob* KIO__ApplicationLauncherJob_new3() {
    return new VirtualKIOApplicationLauncherJob();
}

KIO__ApplicationLauncherJob* KIO__ApplicationLauncherJob_new4(const KServiceAction* serviceAction, QObject* parent) {
    return new VirtualKIOApplicationLauncherJob(*serviceAction, parent);
}

KIO__ApplicationLauncherJob* KIO__ApplicationLauncherJob_new5(const KDesktopFileAction* desktopFileAction, QObject* parent) {
    return new VirtualKIOApplicationLauncherJob(*desktopFileAction, parent);
}

KIO__ApplicationLauncherJob* KIO__ApplicationLauncherJob_new6(QObject* parent) {
    return new VirtualKIOApplicationLauncherJob(parent);
}

void KIO__ApplicationLauncherJob_SetUrls(KIO__ApplicationLauncherJob* self, const libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    self->setUrls(urls_QList);
}

void KIO__ApplicationLauncherJob_SetRunFlags(KIO__ApplicationLauncherJob* self, int runFlags) {
    self->setRunFlags(static_cast<KIO::ApplicationLauncherJob::RunFlags>(runFlags));
}

void KIO__ApplicationLauncherJob_SetSuggestedFileName(KIO__ApplicationLauncherJob* self, const libqt_string suggestedFileName) {
    QString suggestedFileName_QString = QString::fromUtf8(suggestedFileName.data, suggestedFileName.len);
    self->setSuggestedFileName(suggestedFileName_QString);
}

void KIO__ApplicationLauncherJob_SetStartupId(KIO__ApplicationLauncherJob* self, const libqt_string startupId) {
    QByteArray startupId_QByteArray(startupId.data, startupId.len);
    self->setStartupId(startupId_QByteArray);
}

void KIO__ApplicationLauncherJob_Start(KIO__ApplicationLauncherJob* self) {
    auto* vkio__applicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkio__applicationlauncherjob && vkio__applicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        self->start();
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->start();
    }
}

long long KIO__ApplicationLauncherJob_Pid(const KIO__ApplicationLauncherJob* self) {
    return static_cast<long long>(self->pid());
}

libqt_list /* of long long */ KIO__ApplicationLauncherJob_Pids(const KIO__ApplicationLauncherJob* self) {
    QList<long long> _ret = self->pids();
    // Convert QList<> from C++ memory to manually-managed C memory
    long long* _arr = static_cast<long long*>(malloc(sizeof(long long) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_QBaseStart(KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_Start_IsBase(true);
        vkioapplicationlauncherjob->start();
    } else {
        self->KIO::ApplicationLauncherJob::start();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnStart(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_Start_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_Start_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__ApplicationLauncherJob_Metacall(KIO__ApplicationLauncherJob* self, int param1, int param2, void** param3) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        return vkioapplicationlauncherjob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIO::ApplicationLauncherJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Base class handler implementation
int KIO__ApplicationLauncherJob_QBaseMetacall(KIO__ApplicationLauncherJob* self, int param1, int param2, void** param3) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_Metacall_IsBase(true);
        return vkioapplicationlauncherjob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIO::ApplicationLauncherJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnMetacall(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_Metacall_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__ApplicationLauncherJob_DoKill(KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        return vkioapplicationlauncherjob->doKill();
    } else {
        return ((VirtualKIOApplicationLauncherJob*)self)->doKill();
    }
}

// Base class handler implementation
bool KIO__ApplicationLauncherJob_QBaseDoKill(KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_DoKill_IsBase(true);
        return vkioapplicationlauncherjob->doKill();
    } else {
        return ((VirtualKIOApplicationLauncherJob*)self)->doKill();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnDoKill(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_DoKill_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_DoKill_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__ApplicationLauncherJob_DoSuspend(KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        return vkioapplicationlauncherjob->doSuspend();
    } else {
        return ((VirtualKIOApplicationLauncherJob*)self)->doSuspend();
    }
}

// Base class handler implementation
bool KIO__ApplicationLauncherJob_QBaseDoSuspend(KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_DoSuspend_IsBase(true);
        return vkioapplicationlauncherjob->doSuspend();
    } else {
        return ((VirtualKIOApplicationLauncherJob*)self)->doSuspend();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnDoSuspend(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_DoSuspend_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_DoSuspend_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__ApplicationLauncherJob_DoResume(KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        return vkioapplicationlauncherjob->doResume();
    } else {
        return ((VirtualKIOApplicationLauncherJob*)self)->doResume();
    }
}

// Base class handler implementation
bool KIO__ApplicationLauncherJob_QBaseDoResume(KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_DoResume_IsBase(true);
        return vkioapplicationlauncherjob->doResume();
    } else {
        return ((VirtualKIOApplicationLauncherJob*)self)->doResume();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnDoResume(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_DoResume_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_DoResume_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KIO__ApplicationLauncherJob_ErrorString(const KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self));
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        QString _ret = vkioapplicationlauncherjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIO::ApplicationLauncherJob::errorString();
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
libqt_string KIO__ApplicationLauncherJob_QBaseErrorString(const KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self));
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_ErrorString_IsBase(true);
        QString _ret = vkioapplicationlauncherjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIO::ApplicationLauncherJob::errorString();
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
void KIO__ApplicationLauncherJob_OnErrorString(const KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self));
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_ErrorString_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_ErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__ApplicationLauncherJob_Event(KIO__ApplicationLauncherJob* self, QEvent* event) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        return vkioapplicationlauncherjob->event(event);
    } else {
        return self->KIO::ApplicationLauncherJob::event(event);
    }
}

// Base class handler implementation
bool KIO__ApplicationLauncherJob_QBaseEvent(KIO__ApplicationLauncherJob* self, QEvent* event) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_Event_IsBase(true);
        return vkioapplicationlauncherjob->event(event);
    } else {
        return self->KIO::ApplicationLauncherJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnEvent(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_Event_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__ApplicationLauncherJob_EventFilter(KIO__ApplicationLauncherJob* self, QObject* watched, QEvent* event) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        return vkioapplicationlauncherjob->eventFilter(watched, event);
    } else {
        return self->KIO::ApplicationLauncherJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KIO__ApplicationLauncherJob_QBaseEventFilter(KIO__ApplicationLauncherJob* self, QObject* watched, QEvent* event) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_EventFilter_IsBase(true);
        return vkioapplicationlauncherjob->eventFilter(watched, event);
    } else {
        return self->KIO::ApplicationLauncherJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnEventFilter(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_EventFilter_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_TimerEvent(KIO__ApplicationLauncherJob* self, QTimerEvent* event) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->timerEvent(event);
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_QBaseTimerEvent(KIO__ApplicationLauncherJob* self, QTimerEvent* event) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_TimerEvent_IsBase(true);
        vkioapplicationlauncherjob->timerEvent(event);
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnTimerEvent(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_TimerEvent_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_ChildEvent(KIO__ApplicationLauncherJob* self, QChildEvent* event) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->childEvent(event);
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_QBaseChildEvent(KIO__ApplicationLauncherJob* self, QChildEvent* event) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_ChildEvent_IsBase(true);
        vkioapplicationlauncherjob->childEvent(event);
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnChildEvent(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_ChildEvent_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_CustomEvent(KIO__ApplicationLauncherJob* self, QEvent* event) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->customEvent(event);
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_QBaseCustomEvent(KIO__ApplicationLauncherJob* self, QEvent* event) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_CustomEvent_IsBase(true);
        vkioapplicationlauncherjob->customEvent(event);
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnCustomEvent(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_CustomEvent_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_ConnectNotify(KIO__ApplicationLauncherJob* self, const QMetaMethod* signal) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->connectNotify(*signal);
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_QBaseConnectNotify(KIO__ApplicationLauncherJob* self, const QMetaMethod* signal) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_ConnectNotify_IsBase(true);
        vkioapplicationlauncherjob->connectNotify(*signal);
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnConnectNotify(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_ConnectNotify_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_DisconnectNotify(KIO__ApplicationLauncherJob* self, const QMetaMethod* signal) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->disconnectNotify(*signal);
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_QBaseDisconnectNotify(KIO__ApplicationLauncherJob* self, const QMetaMethod* signal) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_DisconnectNotify_IsBase(true);
        vkioapplicationlauncherjob->disconnectNotify(*signal);
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnDisconnectNotify(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_DisconnectNotify_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_SetCapabilities(KIO__ApplicationLauncherJob* self, int capabilities) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_QBaseSetCapabilities(KIO__ApplicationLauncherJob* self, int capabilities) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_SetCapabilities_IsBase(true);
        vkioapplicationlauncherjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnSetCapabilities(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_SetCapabilities_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_SetCapabilities_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__ApplicationLauncherJob_IsFinished(const KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self));
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        return vkioapplicationlauncherjob->isFinished();
    } else {
        return ((VirtualKIOApplicationLauncherJob*)self)->isFinished();
    }
}

// Base class handler implementation
bool KIO__ApplicationLauncherJob_QBaseIsFinished(const KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self));
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_IsFinished_IsBase(true);
        return vkioapplicationlauncherjob->isFinished();
    } else {
        return ((VirtualKIOApplicationLauncherJob*)self)->isFinished();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnIsFinished(const KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self));
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_IsFinished_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_IsFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_SetError(KIO__ApplicationLauncherJob* self, int errorCode) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_QBaseSetError(KIO__ApplicationLauncherJob* self, int errorCode) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_SetError_IsBase(true);
        vkioapplicationlauncherjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnSetError(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_SetError_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_SetErrorText(KIO__ApplicationLauncherJob* self, const libqt_string errorText) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->setErrorText(errorText_QString);
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_QBaseSetErrorText(KIO__ApplicationLauncherJob* self, const libqt_string errorText) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_SetErrorText_IsBase(true);
        vkioapplicationlauncherjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->setErrorText(errorText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnSetErrorText(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_SetErrorText_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_SetErrorText_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_SetProcessedAmount(KIO__ApplicationLauncherJob* self, int unit, unsigned long long amount) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_QBaseSetProcessedAmount(KIO__ApplicationLauncherJob* self, int unit, unsigned long long amount) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_SetProcessedAmount_IsBase(true);
        vkioapplicationlauncherjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnSetProcessedAmount(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_SetProcessedAmount_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_SetProcessedAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_SetTotalAmount(KIO__ApplicationLauncherJob* self, int unit, unsigned long long amount) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_QBaseSetTotalAmount(KIO__ApplicationLauncherJob* self, int unit, unsigned long long amount) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_SetTotalAmount_IsBase(true);
        vkioapplicationlauncherjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnSetTotalAmount(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_SetTotalAmount_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_SetTotalAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_SetProgressUnit(KIO__ApplicationLauncherJob* self, int unit) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_QBaseSetProgressUnit(KIO__ApplicationLauncherJob* self, int unit) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_SetProgressUnit_IsBase(true);
        vkioapplicationlauncherjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnSetProgressUnit(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_SetProgressUnit_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_SetProgressUnit_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_SetPercent(KIO__ApplicationLauncherJob* self, unsigned long percentage) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_QBaseSetPercent(KIO__ApplicationLauncherJob* self, unsigned long percentage) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_SetPercent_IsBase(true);
        vkioapplicationlauncherjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnSetPercent(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_SetPercent_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_SetPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_EmitResult(KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->emitResult();
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->emitResult();
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_QBaseEmitResult(KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_EmitResult_IsBase(true);
        vkioapplicationlauncherjob->emitResult();
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->emitResult();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnEmitResult(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_EmitResult_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_EmitResult_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_EmitPercent(KIO__ApplicationLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_QBaseEmitPercent(KIO__ApplicationLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_EmitPercent_IsBase(true);
        vkioapplicationlauncherjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnEmitPercent(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_EmitPercent_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_EmitPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_EmitSpeed(KIO__ApplicationLauncherJob* self, unsigned long speed) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_QBaseEmitSpeed(KIO__ApplicationLauncherJob* self, unsigned long speed) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_EmitSpeed_IsBase(true);
        vkioapplicationlauncherjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnEmitSpeed(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_EmitSpeed_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_EmitSpeed_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_StartElapsedTimer(KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->startElapsedTimer();
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->startElapsedTimer();
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_QBaseStartElapsedTimer(KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_StartElapsedTimer_IsBase(true);
        vkioapplicationlauncherjob->startElapsedTimer();
    } else {
        ((VirtualKIOApplicationLauncherJob*)self)->startElapsedTimer();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnStartElapsedTimer(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_StartElapsedTimer_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_StartElapsedTimer_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIO__ApplicationLauncherJob_Sender(const KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self));
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        return vkioapplicationlauncherjob->sender();
    } else {
        return ((VirtualKIOApplicationLauncherJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIO__ApplicationLauncherJob_QBaseSender(const KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self));
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_Sender_IsBase(true);
        return vkioapplicationlauncherjob->sender();
    } else {
        return ((VirtualKIOApplicationLauncherJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnSender(const KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self));
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_Sender_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__ApplicationLauncherJob_SenderSignalIndex(const KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self));
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        return vkioapplicationlauncherjob->senderSignalIndex();
    } else {
        return ((VirtualKIOApplicationLauncherJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIO__ApplicationLauncherJob_QBaseSenderSignalIndex(const KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self));
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_SenderSignalIndex_IsBase(true);
        return vkioapplicationlauncherjob->senderSignalIndex();
    } else {
        return ((VirtualKIOApplicationLauncherJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnSenderSignalIndex(const KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self));
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__ApplicationLauncherJob_Receivers(const KIO__ApplicationLauncherJob* self, const char* signal) {
    auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self));
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        return vkioapplicationlauncherjob->receivers(signal);
    } else {
        return ((VirtualKIOApplicationLauncherJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIO__ApplicationLauncherJob_QBaseReceivers(const KIO__ApplicationLauncherJob* self, const char* signal) {
    auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self));
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_Receivers_IsBase(true);
        return vkioapplicationlauncherjob->receivers(signal);
    } else {
        return ((VirtualKIOApplicationLauncherJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnReceivers(const KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self));
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_Receivers_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__ApplicationLauncherJob_IsSignalConnected(const KIO__ApplicationLauncherJob* self, const QMetaMethod* signal) {
    auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self));
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        return vkioapplicationlauncherjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOApplicationLauncherJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIO__ApplicationLauncherJob_QBaseIsSignalConnected(const KIO__ApplicationLauncherJob* self, const QMetaMethod* signal) {
    auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self));
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_IsSignalConnected_IsBase(true);
        return vkioapplicationlauncherjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOApplicationLauncherJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnIsSignalConnected(const KIO__ApplicationLauncherJob* self, intptr_t slot) {
    auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self));
    if (vkioapplicationlauncherjob && vkioapplicationlauncherjob->isVirtualKIOApplicationLauncherJob) {
        vkioapplicationlauncherjob->setKIO__ApplicationLauncherJob_IsSignalConnected_Callback(reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_IsSignalConnected_Callback>(slot));
    }
}

void KIO__ApplicationLauncherJob_Delete(KIO__ApplicationLauncherJob* self) {
    delete self;
}
