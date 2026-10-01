#include <KJob>
#include <KListOpenFilesJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KProcessList__KProcessInfo
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <klistopenfilesjob.h>
#include "libklistopenfilesjob.h"
#include "libklistopenfilesjob.hxx"

KListOpenFilesJob* KListOpenFilesJob_new(const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return new VirtualKListOpenFilesJob(path_QString);
}

QMetaObject* KListOpenFilesJob_MetaObject(const KListOpenFilesJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KListOpenFilesJob_Metacast(KListOpenFilesJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KListOpenFilesJob_Metacall(KListOpenFilesJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KListOpenFilesJob_Tr(const char* s) {
    auto _ret = KListOpenFilesJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KListOpenFilesJob_Start(KListOpenFilesJob* self) {
    self->start();
}

libqt_list /* of KProcessList__KProcessInfo* */ KListOpenFilesJob_ProcessInfoList(const KListOpenFilesJob* self) {
    QList<KProcessList::KProcessInfo> _ret = self->processInfoList();
    // Convert QList<> from C++ memory to manually-managed C memory
    KProcessList__KProcessInfo** _arr = static_cast<KProcessList__KProcessInfo**>(malloc(sizeof(KProcessList__KProcessInfo*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KProcessList::KProcessInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string KListOpenFilesJob_Tr2(const char* s, const char* c) {
    auto _ret = KListOpenFilesJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KListOpenFilesJob_Tr3(const char* s, const char* c, int n) {
    auto _ret = KListOpenFilesJob::tr(s, c, static_cast<int>(n));
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
QMetaObject* KListOpenFilesJob_SuperMetaObject(const KListOpenFilesJob* self) {
    return (QMetaObject*)self->KListOpenFilesJob::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnMetaObject(KListOpenFilesJob* self, intptr_t slot) {
    if (auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self)))
        vklistopenfilesjob->klistopenfilesjob_metaobject_callback = reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KListOpenFilesJob_SuperMetacast(KListOpenFilesJob* self, const char* param1) {
    return self->KListOpenFilesJob::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnMetacast(KListOpenFilesJob* self, intptr_t slot) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self))
        vklistopenfilesjob->klistopenfilesjob_metacast_callback = reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_Metacast_Callback>(slot);
}

// Base class handler implementation
int KListOpenFilesJob_SuperMetacall(KListOpenFilesJob* self, int param1, int param2, void** param3) {
    return self->KListOpenFilesJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnMetacall(KListOpenFilesJob* self, intptr_t slot) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self))
        vklistopenfilesjob->klistopenfilesjob_metacall_callback = reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_Metacall_Callback>(slot);
}

// Base class handler implementation
void KListOpenFilesJob_SuperStart(KListOpenFilesJob* self) {
    self->KListOpenFilesJob::start();
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnStart(KListOpenFilesJob* self, intptr_t slot) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self))
        vklistopenfilesjob->klistopenfilesjob_start_callback = reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_Start_Callback>(slot);
}

// Derived class handler implementation
bool KListOpenFilesJob_DoKill(KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob) {
        return vklistopenfilesjob->doKill();
    } else {
        qFatal("Error: Protected virtual method KListOpenFilesJob::doKill called without a directly constructed type");
    }
}

// Base class handler implementation
bool KListOpenFilesJob_SuperDoKill(KListOpenFilesJob* self) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self)) {
        return vklistopenfilesjob->KListOpenFilesJob::doKill();
    } else
        qFatal("Error: Protected virtual method KListOpenFilesJob::doKill called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnDoKill(KListOpenFilesJob* self, intptr_t slot) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self))
        vklistopenfilesjob->klistopenfilesjob_dokill_callback = reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_DoKill_Callback>(slot);
}

// Derived class handler implementation
bool KListOpenFilesJob_DoSuspend(KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob) {
        return vklistopenfilesjob->doSuspend();
    } else {
        qFatal("Error: Protected virtual method KListOpenFilesJob::doSuspend called without a directly constructed type");
    }
}

// Base class handler implementation
bool KListOpenFilesJob_SuperDoSuspend(KListOpenFilesJob* self) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self)) {
        return vklistopenfilesjob->KListOpenFilesJob::doSuspend();
    } else
        qFatal("Error: Protected virtual method KListOpenFilesJob::doSuspend called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnDoSuspend(KListOpenFilesJob* self, intptr_t slot) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self))
        vklistopenfilesjob->klistopenfilesjob_dosuspend_callback = reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_DoSuspend_Callback>(slot);
}

// Derived class handler implementation
bool KListOpenFilesJob_DoResume(KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob) {
        return vklistopenfilesjob->doResume();
    } else {
        qFatal("Error: Protected virtual method KListOpenFilesJob::doResume called without a directly constructed type");
    }
}

// Base class handler implementation
bool KListOpenFilesJob_SuperDoResume(KListOpenFilesJob* self) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self)) {
        return vklistopenfilesjob->KListOpenFilesJob::doResume();
    } else
        qFatal("Error: Protected virtual method KListOpenFilesJob::doResume called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnDoResume(KListOpenFilesJob* self, intptr_t slot) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self))
        vklistopenfilesjob->klistopenfilesjob_doresume_callback = reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_DoResume_Callback>(slot);
}

// Derived class handler implementation
libqt_string KListOpenFilesJob_ErrorString(const KListOpenFilesJob* self) {
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
libqt_string KListOpenFilesJob_SuperErrorString(const KListOpenFilesJob* self) {
    auto _ret = self->KListOpenFilesJob::errorString();
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
void KListOpenFilesJob_OnErrorString(KListOpenFilesJob* self, intptr_t slot) {
    if (auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self)))
        vklistopenfilesjob->klistopenfilesjob_errorstring_callback = reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_ErrorString_Callback>(slot);
}

// Derived class handler implementation
bool KListOpenFilesJob_Event(KListOpenFilesJob* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KListOpenFilesJob_SuperEvent(KListOpenFilesJob* self, QEvent* event) {
    return self->KListOpenFilesJob::event(event);
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnEvent(KListOpenFilesJob* self, intptr_t slot) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self))
        vklistopenfilesjob->klistopenfilesjob_event_callback = reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_Event_Callback>(slot);
}

// Derived class handler implementation
bool KListOpenFilesJob_EventFilter(KListOpenFilesJob* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KListOpenFilesJob_SuperEventFilter(KListOpenFilesJob* self, QObject* watched, QEvent* event) {
    return self->KListOpenFilesJob::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnEventFilter(KListOpenFilesJob* self, intptr_t slot) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self))
        vklistopenfilesjob->klistopenfilesjob_eventfilter_callback = reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KListOpenFilesJob_TimerEvent(KListOpenFilesJob* self, QTimerEvent* event) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob) {
        vklistopenfilesjob->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KListOpenFilesJob::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListOpenFilesJob_SuperTimerEvent(KListOpenFilesJob* self, QTimerEvent* event) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self)) {
        vklistopenfilesjob->KListOpenFilesJob::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KListOpenFilesJob::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnTimerEvent(KListOpenFilesJob* self, intptr_t slot) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self))
        vklistopenfilesjob->klistopenfilesjob_timerevent_callback = reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KListOpenFilesJob_ChildEvent(KListOpenFilesJob* self, QChildEvent* event) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob) {
        vklistopenfilesjob->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KListOpenFilesJob::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListOpenFilesJob_SuperChildEvent(KListOpenFilesJob* self, QChildEvent* event) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self)) {
        vklistopenfilesjob->KListOpenFilesJob::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KListOpenFilesJob::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnChildEvent(KListOpenFilesJob* self, intptr_t slot) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self))
        vklistopenfilesjob->klistopenfilesjob_childevent_callback = reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KListOpenFilesJob_CustomEvent(KListOpenFilesJob* self, QEvent* event) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob) {
        vklistopenfilesjob->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KListOpenFilesJob::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KListOpenFilesJob_SuperCustomEvent(KListOpenFilesJob* self, QEvent* event) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self)) {
        vklistopenfilesjob->KListOpenFilesJob::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KListOpenFilesJob::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnCustomEvent(KListOpenFilesJob* self, intptr_t slot) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self))
        vklistopenfilesjob->klistopenfilesjob_customevent_callback = reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KListOpenFilesJob_ConnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob) {
        vklistopenfilesjob->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KListOpenFilesJob::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KListOpenFilesJob_SuperConnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self)) {
        vklistopenfilesjob->KListOpenFilesJob::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KListOpenFilesJob::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnConnectNotify(KListOpenFilesJob* self, intptr_t slot) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self))
        vklistopenfilesjob->klistopenfilesjob_connectnotify_callback = reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KListOpenFilesJob_DisconnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob) {
        vklistopenfilesjob->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KListOpenFilesJob::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KListOpenFilesJob_SuperDisconnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self)) {
        vklistopenfilesjob->KListOpenFilesJob::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KListOpenFilesJob::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnDisconnectNotify(KListOpenFilesJob* self, intptr_t slot) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self))
        vklistopenfilesjob->klistopenfilesjob_disconnectnotify_callback = reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KListOpenFilesJob_SetCapabilities(KListOpenFilesJob* self, int capabilities) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self)) {
        vklistopenfilesjob->VirtualKListOpenFilesJob::setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else
        qFatal("Error: Protected method KListOpenFilesJob::setCapabilities called without a directly constructed type");
}

// Derived class protected handler implementation
bool KListOpenFilesJob_IsFinished(const KListOpenFilesJob* self) {
    if (auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self))) {
        return vklistopenfilesjob->VirtualKListOpenFilesJob::isFinished();
    } else
        qFatal("Error: Protected method KListOpenFilesJob::isFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void KListOpenFilesJob_SetError(KListOpenFilesJob* self, int errorCode) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self)) {
        vklistopenfilesjob->VirtualKListOpenFilesJob::setError(static_cast<int>(errorCode));
    } else
        qFatal("Error: Protected method KListOpenFilesJob::setError called without a directly constructed type");
}

// Derived class protected handler implementation
void KListOpenFilesJob_SetErrorText(KListOpenFilesJob* self, const libqt_string errorText) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self)) {
        QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
        vklistopenfilesjob->VirtualKListOpenFilesJob::setErrorText(errorText_QString);
    } else
        qFatal("Error: Protected method KListOpenFilesJob::setErrorText called without a directly constructed type");
}

// Derived class protected handler implementation
void KListOpenFilesJob_SetProcessedAmount(KListOpenFilesJob* self, int unit, unsigned long long amount) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self)) {
        vklistopenfilesjob->VirtualKListOpenFilesJob::setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KListOpenFilesJob::setProcessedAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KListOpenFilesJob_SetTotalAmount(KListOpenFilesJob* self, int unit, unsigned long long amount) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self)) {
        vklistopenfilesjob->VirtualKListOpenFilesJob::setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KListOpenFilesJob::setTotalAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KListOpenFilesJob_SetProgressUnit(KListOpenFilesJob* self, int unit) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self)) {
        vklistopenfilesjob->VirtualKListOpenFilesJob::setProgressUnit(static_cast<KJob::Unit>(unit));
    } else
        qFatal("Error: Protected method KListOpenFilesJob::setProgressUnit called without a directly constructed type");
}

// Derived class protected handler implementation
void KListOpenFilesJob_SetPercent(KListOpenFilesJob* self, unsigned long percentage) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self)) {
        vklistopenfilesjob->VirtualKListOpenFilesJob::setPercent(static_cast<unsigned long>(percentage));
    } else
        qFatal("Error: Protected method KListOpenFilesJob::setPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KListOpenFilesJob_EmitResult(KListOpenFilesJob* self) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self)) {
        vklistopenfilesjob->VirtualKListOpenFilesJob::emitResult();
    } else
        qFatal("Error: Protected method KListOpenFilesJob::emitResult called without a directly constructed type");
}

// Derived class protected handler implementation
void KListOpenFilesJob_EmitPercent(KListOpenFilesJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self)) {
        vklistopenfilesjob->VirtualKListOpenFilesJob::emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else
        qFatal("Error: Protected method KListOpenFilesJob::emitPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KListOpenFilesJob_EmitSpeed(KListOpenFilesJob* self, unsigned long speed) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self)) {
        vklistopenfilesjob->VirtualKListOpenFilesJob::emitSpeed(static_cast<unsigned long>(speed));
    } else
        qFatal("Error: Protected method KListOpenFilesJob::emitSpeed called without a directly constructed type");
}

// Derived class protected handler implementation
void KListOpenFilesJob_StartElapsedTimer(KListOpenFilesJob* self) {
    if (auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self)) {
        vklistopenfilesjob->VirtualKListOpenFilesJob::startElapsedTimer();
    } else
        qFatal("Error: Protected method KListOpenFilesJob::startElapsedTimer called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KListOpenFilesJob_Sender(const KListOpenFilesJob* self) {
    if (auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self))) {
        return vklistopenfilesjob->VirtualKListOpenFilesJob::sender();
    } else
        qFatal("Error: Protected method KListOpenFilesJob::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KListOpenFilesJob_SenderSignalIndex(const KListOpenFilesJob* self) {
    if (auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self))) {
        return vklistopenfilesjob->VirtualKListOpenFilesJob::senderSignalIndex();
    } else
        qFatal("Error: Protected method KListOpenFilesJob::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KListOpenFilesJob_Receivers(const KListOpenFilesJob* self, const char* signal) {
    if (auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self))) {
        return vklistopenfilesjob->VirtualKListOpenFilesJob::receivers(signal);
    } else
        qFatal("Error: Protected method KListOpenFilesJob::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KListOpenFilesJob_IsSignalConnected(const KListOpenFilesJob* self, const QMetaMethod* signal) {
    if (auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self))) {
        return vklistopenfilesjob->VirtualKListOpenFilesJob::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KListOpenFilesJob::isSignalConnected called without a directly constructed type");
}

void KListOpenFilesJob_Delete(KListOpenFilesJob* self) {
    delete self;
}
