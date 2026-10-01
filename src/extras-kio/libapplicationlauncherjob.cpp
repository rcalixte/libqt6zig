#include <KDesktopFileAction>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__ApplicationLauncherJob
#include <KJob>
#include <KServiceAction>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    self->start();
}

long long KIO__ApplicationLauncherJob_Pid(const KIO__ApplicationLauncherJob* self) {
    return static_cast<long long>(self->pid());
}

libqt_list /* of long long */ KIO__ApplicationLauncherJob_Pids(const KIO__ApplicationLauncherJob* self) {
    QList<long long> _ret = self->pids();
    // Convert QList<> from C++ memory to manually-managed C memory
    long long* _arr = static_cast<long long*>(malloc(sizeof(long long) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_SuperStart(KIO__ApplicationLauncherJob* self) {
    self->KIO::ApplicationLauncherJob::start();
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnStart(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self))
        vkioapplicationlauncherjob->kio__applicationlauncherjob_start_callback = reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_Start_Callback>(slot);
}

// Derived class handler implementation
QMetaObject* KIO__ApplicationLauncherJob_MetaObject(const KIO__ApplicationLauncherJob* self) {
    return (QMetaObject*)self->metaObject();
}

// Base class handler implementation
QMetaObject* KIO__ApplicationLauncherJob_SuperMetaObject(const KIO__ApplicationLauncherJob* self) {
    return (QMetaObject*)self->KIO::ApplicationLauncherJob::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnMetaObject(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    if (auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self)))
        vkioapplicationlauncherjob->kio__applicationlauncherjob_metaobject_callback = reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_MetaObject_Callback>(slot);
}

// Derived class handler implementation
void* KIO__ApplicationLauncherJob_Metacast(KIO__ApplicationLauncherJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

// Base class handler implementation
void* KIO__ApplicationLauncherJob_SuperMetacast(KIO__ApplicationLauncherJob* self, const char* param1) {
    return self->KIO::ApplicationLauncherJob::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnMetacast(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self))
        vkioapplicationlauncherjob->kio__applicationlauncherjob_metacast_callback = reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_Metacast_Callback>(slot);
}

// Derived class handler implementation
int KIO__ApplicationLauncherJob_Metacall(KIO__ApplicationLauncherJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Base class handler implementation
int KIO__ApplicationLauncherJob_SuperMetacall(KIO__ApplicationLauncherJob* self, int param1, int param2, void** param3) {
    return self->KIO::ApplicationLauncherJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnMetacall(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self))
        vkioapplicationlauncherjob->kio__applicationlauncherjob_metacall_callback = reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KIO__ApplicationLauncherJob_DoKill(KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob) {
        return vkioapplicationlauncherjob->doKill();
    } else {
        qFatal("Error: Protected virtual method KIO::ApplicationLauncherJob::doKill called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__ApplicationLauncherJob_SuperDoKill(KIO__ApplicationLauncherJob* self) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self)) {
        return vkioapplicationlauncherjob->KIO::ApplicationLauncherJob::doKill();
    } else
        qFatal("Error: Protected virtual method KIO::ApplicationLauncherJob::doKill called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnDoKill(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self))
        vkioapplicationlauncherjob->kio__applicationlauncherjob_dokill_callback = reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_DoKill_Callback>(slot);
}

// Derived class handler implementation
bool KIO__ApplicationLauncherJob_DoSuspend(KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob) {
        return vkioapplicationlauncherjob->doSuspend();
    } else {
        qFatal("Error: Protected virtual method KIO::ApplicationLauncherJob::doSuspend called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__ApplicationLauncherJob_SuperDoSuspend(KIO__ApplicationLauncherJob* self) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self)) {
        return vkioapplicationlauncherjob->KIO::ApplicationLauncherJob::doSuspend();
    } else
        qFatal("Error: Protected virtual method KIO::ApplicationLauncherJob::doSuspend called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnDoSuspend(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self))
        vkioapplicationlauncherjob->kio__applicationlauncherjob_dosuspend_callback = reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_DoSuspend_Callback>(slot);
}

// Derived class handler implementation
bool KIO__ApplicationLauncherJob_DoResume(KIO__ApplicationLauncherJob* self) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob) {
        return vkioapplicationlauncherjob->doResume();
    } else {
        qFatal("Error: Protected virtual method KIO::ApplicationLauncherJob::doResume called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__ApplicationLauncherJob_SuperDoResume(KIO__ApplicationLauncherJob* self) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self)) {
        return vkioapplicationlauncherjob->KIO::ApplicationLauncherJob::doResume();
    } else
        qFatal("Error: Protected virtual method KIO::ApplicationLauncherJob::doResume called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnDoResume(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self))
        vkioapplicationlauncherjob->kio__applicationlauncherjob_doresume_callback = reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_DoResume_Callback>(slot);
}

// Derived class handler implementation
libqt_string KIO__ApplicationLauncherJob_ErrorString(const KIO__ApplicationLauncherJob* self) {
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
libqt_string KIO__ApplicationLauncherJob_SuperErrorString(const KIO__ApplicationLauncherJob* self) {
    auto _ret = self->KIO::ApplicationLauncherJob::errorString();
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
void KIO__ApplicationLauncherJob_OnErrorString(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    if (auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self)))
        vkioapplicationlauncherjob->kio__applicationlauncherjob_errorstring_callback = reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_ErrorString_Callback>(slot);
}

// Derived class handler implementation
bool KIO__ApplicationLauncherJob_Event(KIO__ApplicationLauncherJob* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KIO__ApplicationLauncherJob_SuperEvent(KIO__ApplicationLauncherJob* self, QEvent* event) {
    return self->KIO::ApplicationLauncherJob::event(event);
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnEvent(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self))
        vkioapplicationlauncherjob->kio__applicationlauncherjob_event_callback = reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_Event_Callback>(slot);
}

// Derived class handler implementation
bool KIO__ApplicationLauncherJob_EventFilter(KIO__ApplicationLauncherJob* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KIO__ApplicationLauncherJob_SuperEventFilter(KIO__ApplicationLauncherJob* self, QObject* watched, QEvent* event) {
    return self->KIO::ApplicationLauncherJob::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnEventFilter(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self))
        vkioapplicationlauncherjob->kio__applicationlauncherjob_eventfilter_callback = reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_TimerEvent(KIO__ApplicationLauncherJob* self, QTimerEvent* event) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob) {
        vkioapplicationlauncherjob->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::ApplicationLauncherJob::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_SuperTimerEvent(KIO__ApplicationLauncherJob* self, QTimerEvent* event) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self)) {
        vkioapplicationlauncherjob->KIO::ApplicationLauncherJob::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::ApplicationLauncherJob::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnTimerEvent(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self))
        vkioapplicationlauncherjob->kio__applicationlauncherjob_timerevent_callback = reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_ChildEvent(KIO__ApplicationLauncherJob* self, QChildEvent* event) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob) {
        vkioapplicationlauncherjob->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::ApplicationLauncherJob::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_SuperChildEvent(KIO__ApplicationLauncherJob* self, QChildEvent* event) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self)) {
        vkioapplicationlauncherjob->KIO::ApplicationLauncherJob::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::ApplicationLauncherJob::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnChildEvent(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self))
        vkioapplicationlauncherjob->kio__applicationlauncherjob_childevent_callback = reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_CustomEvent(KIO__ApplicationLauncherJob* self, QEvent* event) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob) {
        vkioapplicationlauncherjob->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::ApplicationLauncherJob::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_SuperCustomEvent(KIO__ApplicationLauncherJob* self, QEvent* event) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self)) {
        vkioapplicationlauncherjob->KIO::ApplicationLauncherJob::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::ApplicationLauncherJob::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnCustomEvent(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self))
        vkioapplicationlauncherjob->kio__applicationlauncherjob_customevent_callback = reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_ConnectNotify(KIO__ApplicationLauncherJob* self, const QMetaMethod* signal) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob) {
        vkioapplicationlauncherjob->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::ApplicationLauncherJob::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_SuperConnectNotify(KIO__ApplicationLauncherJob* self, const QMetaMethod* signal) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self)) {
        vkioapplicationlauncherjob->KIO::ApplicationLauncherJob::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::ApplicationLauncherJob::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnConnectNotify(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self))
        vkioapplicationlauncherjob->kio__applicationlauncherjob_connectnotify_callback = reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KIO__ApplicationLauncherJob_DisconnectNotify(KIO__ApplicationLauncherJob* self, const QMetaMethod* signal) {
    auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self);
    if (vkioapplicationlauncherjob) {
        vkioapplicationlauncherjob->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::ApplicationLauncherJob::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__ApplicationLauncherJob_SuperDisconnectNotify(KIO__ApplicationLauncherJob* self, const QMetaMethod* signal) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self)) {
        vkioapplicationlauncherjob->KIO::ApplicationLauncherJob::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::ApplicationLauncherJob::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__ApplicationLauncherJob_OnDisconnectNotify(KIO__ApplicationLauncherJob* self, intptr_t slot) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self))
        vkioapplicationlauncherjob->kio__applicationlauncherjob_disconnectnotify_callback = reinterpret_cast<VirtualKIOApplicationLauncherJob::KIO__ApplicationLauncherJob_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KIO__ApplicationLauncherJob_SetCapabilities(KIO__ApplicationLauncherJob* self, int capabilities) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self)) {
        vkioapplicationlauncherjob->VirtualKIOApplicationLauncherJob::setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else
        qFatal("Error: Protected method KIO::ApplicationLauncherJob::setCapabilities called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__ApplicationLauncherJob_IsFinished(const KIO__ApplicationLauncherJob* self) {
    if (auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self))) {
        return vkioapplicationlauncherjob->VirtualKIOApplicationLauncherJob::isFinished();
    } else
        qFatal("Error: Protected method KIO::ApplicationLauncherJob::isFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__ApplicationLauncherJob_SetError(KIO__ApplicationLauncherJob* self, int errorCode) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self)) {
        vkioapplicationlauncherjob->VirtualKIOApplicationLauncherJob::setError(static_cast<int>(errorCode));
    } else
        qFatal("Error: Protected method KIO::ApplicationLauncherJob::setError called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__ApplicationLauncherJob_SetErrorText(KIO__ApplicationLauncherJob* self, const libqt_string errorText) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self)) {
        QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
        vkioapplicationlauncherjob->VirtualKIOApplicationLauncherJob::setErrorText(errorText_QString);
    } else
        qFatal("Error: Protected method KIO::ApplicationLauncherJob::setErrorText called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__ApplicationLauncherJob_SetProcessedAmount(KIO__ApplicationLauncherJob* self, int unit, unsigned long long amount) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self)) {
        vkioapplicationlauncherjob->VirtualKIOApplicationLauncherJob::setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KIO::ApplicationLauncherJob::setProcessedAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__ApplicationLauncherJob_SetTotalAmount(KIO__ApplicationLauncherJob* self, int unit, unsigned long long amount) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self)) {
        vkioapplicationlauncherjob->VirtualKIOApplicationLauncherJob::setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KIO::ApplicationLauncherJob::setTotalAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__ApplicationLauncherJob_SetProgressUnit(KIO__ApplicationLauncherJob* self, int unit) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self)) {
        vkioapplicationlauncherjob->VirtualKIOApplicationLauncherJob::setProgressUnit(static_cast<KJob::Unit>(unit));
    } else
        qFatal("Error: Protected method KIO::ApplicationLauncherJob::setProgressUnit called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__ApplicationLauncherJob_SetPercent(KIO__ApplicationLauncherJob* self, unsigned long percentage) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self)) {
        vkioapplicationlauncherjob->VirtualKIOApplicationLauncherJob::setPercent(static_cast<unsigned long>(percentage));
    } else
        qFatal("Error: Protected method KIO::ApplicationLauncherJob::setPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__ApplicationLauncherJob_EmitResult(KIO__ApplicationLauncherJob* self) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self)) {
        vkioapplicationlauncherjob->VirtualKIOApplicationLauncherJob::emitResult();
    } else
        qFatal("Error: Protected method KIO::ApplicationLauncherJob::emitResult called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__ApplicationLauncherJob_EmitPercent(KIO__ApplicationLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self)) {
        vkioapplicationlauncherjob->VirtualKIOApplicationLauncherJob::emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else
        qFatal("Error: Protected method KIO::ApplicationLauncherJob::emitPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__ApplicationLauncherJob_EmitSpeed(KIO__ApplicationLauncherJob* self, unsigned long speed) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self)) {
        vkioapplicationlauncherjob->VirtualKIOApplicationLauncherJob::emitSpeed(static_cast<unsigned long>(speed));
    } else
        qFatal("Error: Protected method KIO::ApplicationLauncherJob::emitSpeed called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__ApplicationLauncherJob_StartElapsedTimer(KIO__ApplicationLauncherJob* self) {
    if (auto* vkioapplicationlauncherjob = dynamic_cast<VirtualKIOApplicationLauncherJob*>(self)) {
        vkioapplicationlauncherjob->VirtualKIOApplicationLauncherJob::startElapsedTimer();
    } else
        qFatal("Error: Protected method KIO::ApplicationLauncherJob::startElapsedTimer called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KIO__ApplicationLauncherJob_Sender(const KIO__ApplicationLauncherJob* self) {
    if (auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self))) {
        return vkioapplicationlauncherjob->VirtualKIOApplicationLauncherJob::sender();
    } else
        qFatal("Error: Protected method KIO::ApplicationLauncherJob::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__ApplicationLauncherJob_SenderSignalIndex(const KIO__ApplicationLauncherJob* self) {
    if (auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self))) {
        return vkioapplicationlauncherjob->VirtualKIOApplicationLauncherJob::senderSignalIndex();
    } else
        qFatal("Error: Protected method KIO::ApplicationLauncherJob::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__ApplicationLauncherJob_Receivers(const KIO__ApplicationLauncherJob* self, const char* signal) {
    if (auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self))) {
        return vkioapplicationlauncherjob->VirtualKIOApplicationLauncherJob::receivers(signal);
    } else
        qFatal("Error: Protected method KIO::ApplicationLauncherJob::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__ApplicationLauncherJob_IsSignalConnected(const KIO__ApplicationLauncherJob* self, const QMetaMethod* signal) {
    if (auto* vkioapplicationlauncherjob = const_cast<VirtualKIOApplicationLauncherJob*>(dynamic_cast<const VirtualKIOApplicationLauncherJob*>(self))) {
        return vkioapplicationlauncherjob->VirtualKIOApplicationLauncherJob::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KIO::ApplicationLauncherJob::isSignalConnected called without a directly constructed type");
}

void KIO__ApplicationLauncherJob_Delete(KIO__ApplicationLauncherJob* self) {
    delete self;
}
