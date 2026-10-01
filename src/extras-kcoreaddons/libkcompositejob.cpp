#include <KCompositeJob>
#include <KJob>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kcompositejob.h>
#include "libkcompositejob.h"
#include "libkcompositejob.hxx"

KCompositeJob* KCompositeJob_new() {
    return new VirtualKCompositeJob();
}

KCompositeJob* KCompositeJob_new2(QObject* parent) {
    return new VirtualKCompositeJob(parent);
}

QMetaObject* KCompositeJob_MetaObject(const KCompositeJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KCompositeJob_Metacast(KCompositeJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KCompositeJob_Metacall(KCompositeJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KCompositeJob_Tr(const char* s) {
    auto _ret = KCompositeJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KCompositeJob_AddSubjob(KCompositeJob* self, KJob* job) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob) {
        return vkcompositejob->addSubjob(job);
    }
    qFatal("Error: Protected method KCompositeJob::addSubjob called without a directly constructed type");
}

bool KCompositeJob_RemoveSubjob(KCompositeJob* self, KJob* job) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob) {
        return vkcompositejob->removeSubjob(job);
    }
    qFatal("Error: Protected method KCompositeJob::removeSubjob called without a directly constructed type");
}

void KCompositeJob_SlotResult(KCompositeJob* self, KJob* job) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob) {
        vkcompositejob->slotResult(job);
    }
}

void KCompositeJob_SlotInfoMessage(KCompositeJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob) {
        vkcompositejob->slotInfoMessage(job, message_QString);
    }
}

libqt_string KCompositeJob_Tr2(const char* s, const char* c) {
    auto _ret = KCompositeJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCompositeJob_Tr3(const char* s, const char* c, int n) {
    auto _ret = KCompositeJob::tr(s, c, static_cast<int>(n));
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
QMetaObject* KCompositeJob_SuperMetaObject(const KCompositeJob* self) {
    return (QMetaObject*)self->KCompositeJob::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnMetaObject(KCompositeJob* self, intptr_t slot) {
    if (auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self)))
        vkcompositejob->kcompositejob_metaobject_callback = reinterpret_cast<VirtualKCompositeJob::KCompositeJob_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KCompositeJob_SuperMetacast(KCompositeJob* self, const char* param1) {
    return self->KCompositeJob::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnMetacast(KCompositeJob* self, intptr_t slot) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self))
        vkcompositejob->kcompositejob_metacast_callback = reinterpret_cast<VirtualKCompositeJob::KCompositeJob_Metacast_Callback>(slot);
}

// Base class handler implementation
int KCompositeJob_SuperMetacall(KCompositeJob* self, int param1, int param2, void** param3) {
    return self->KCompositeJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnMetacall(KCompositeJob* self, intptr_t slot) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self))
        vkcompositejob->kcompositejob_metacall_callback = reinterpret_cast<VirtualKCompositeJob::KCompositeJob_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KCompositeJob_SuperAddSubjob(KCompositeJob* self, KJob* job) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        return vkcompositejob->KCompositeJob::addSubjob(job);
    } else
        qFatal("Error: Protected virtual method KCompositeJob::addSubjob called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnAddSubjob(KCompositeJob* self, intptr_t slot) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self))
        vkcompositejob->kcompositejob_addsubjob_callback = reinterpret_cast<VirtualKCompositeJob::KCompositeJob_AddSubjob_Callback>(slot);
}

// Base class handler implementation
bool KCompositeJob_SuperRemoveSubjob(KCompositeJob* self, KJob* job) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        return vkcompositejob->KCompositeJob::removeSubjob(job);
    } else
        qFatal("Error: Protected virtual method KCompositeJob::removeSubjob called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnRemoveSubjob(KCompositeJob* self, intptr_t slot) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self))
        vkcompositejob->kcompositejob_removesubjob_callback = reinterpret_cast<VirtualKCompositeJob::KCompositeJob_RemoveSubjob_Callback>(slot);
}

// Base class handler implementation
void KCompositeJob_SuperSlotResult(KCompositeJob* self, KJob* job) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        vkcompositejob->KCompositeJob::slotResult(job);
    } else
        qFatal("Error: Protected virtual method KCompositeJob::slotResult called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnSlotResult(KCompositeJob* self, intptr_t slot) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self))
        vkcompositejob->kcompositejob_slotresult_callback = reinterpret_cast<VirtualKCompositeJob::KCompositeJob_SlotResult_Callback>(slot);
}

// Base class handler implementation
void KCompositeJob_SuperSlotInfoMessage(KCompositeJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        vkcompositejob->KCompositeJob::slotInfoMessage(job, message_QString);
    } else
        qFatal("Error: Protected virtual method KCompositeJob::slotInfoMessage called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnSlotInfoMessage(KCompositeJob* self, intptr_t slot) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self))
        vkcompositejob->kcompositejob_slotinfomessage_callback = reinterpret_cast<VirtualKCompositeJob::KCompositeJob_SlotInfoMessage_Callback>(slot);
}

// Derived class handler implementation
void KCompositeJob_Start(KCompositeJob* self) {
    self->start();
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnStart(KCompositeJob* self, intptr_t slot) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self))
        vkcompositejob->kcompositejob_start_callback = reinterpret_cast<VirtualKCompositeJob::KCompositeJob_Start_Callback>(slot);
}

// Derived class handler implementation
bool KCompositeJob_DoKill(KCompositeJob* self) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob) {
        return vkcompositejob->doKill();
    } else {
        qFatal("Error: Protected virtual method KCompositeJob::doKill called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCompositeJob_SuperDoKill(KCompositeJob* self) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        return vkcompositejob->KCompositeJob::doKill();
    } else
        qFatal("Error: Protected virtual method KCompositeJob::doKill called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnDoKill(KCompositeJob* self, intptr_t slot) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self))
        vkcompositejob->kcompositejob_dokill_callback = reinterpret_cast<VirtualKCompositeJob::KCompositeJob_DoKill_Callback>(slot);
}

// Derived class handler implementation
bool KCompositeJob_DoSuspend(KCompositeJob* self) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob) {
        return vkcompositejob->doSuspend();
    } else {
        qFatal("Error: Protected virtual method KCompositeJob::doSuspend called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCompositeJob_SuperDoSuspend(KCompositeJob* self) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        return vkcompositejob->KCompositeJob::doSuspend();
    } else
        qFatal("Error: Protected virtual method KCompositeJob::doSuspend called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnDoSuspend(KCompositeJob* self, intptr_t slot) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self))
        vkcompositejob->kcompositejob_dosuspend_callback = reinterpret_cast<VirtualKCompositeJob::KCompositeJob_DoSuspend_Callback>(slot);
}

// Derived class handler implementation
bool KCompositeJob_DoResume(KCompositeJob* self) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob) {
        return vkcompositejob->doResume();
    } else {
        qFatal("Error: Protected virtual method KCompositeJob::doResume called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCompositeJob_SuperDoResume(KCompositeJob* self) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        return vkcompositejob->KCompositeJob::doResume();
    } else
        qFatal("Error: Protected virtual method KCompositeJob::doResume called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnDoResume(KCompositeJob* self, intptr_t slot) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self))
        vkcompositejob->kcompositejob_doresume_callback = reinterpret_cast<VirtualKCompositeJob::KCompositeJob_DoResume_Callback>(slot);
}

// Derived class handler implementation
libqt_string KCompositeJob_ErrorString(const KCompositeJob* self) {
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
libqt_string KCompositeJob_SuperErrorString(const KCompositeJob* self) {
    auto _ret = self->KCompositeJob::errorString();
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
void KCompositeJob_OnErrorString(KCompositeJob* self, intptr_t slot) {
    if (auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self)))
        vkcompositejob->kcompositejob_errorstring_callback = reinterpret_cast<VirtualKCompositeJob::KCompositeJob_ErrorString_Callback>(slot);
}

// Derived class handler implementation
bool KCompositeJob_Event(KCompositeJob* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KCompositeJob_SuperEvent(KCompositeJob* self, QEvent* event) {
    return self->KCompositeJob::event(event);
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnEvent(KCompositeJob* self, intptr_t slot) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self))
        vkcompositejob->kcompositejob_event_callback = reinterpret_cast<VirtualKCompositeJob::KCompositeJob_Event_Callback>(slot);
}

// Derived class handler implementation
bool KCompositeJob_EventFilter(KCompositeJob* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KCompositeJob_SuperEventFilter(KCompositeJob* self, QObject* watched, QEvent* event) {
    return self->KCompositeJob::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnEventFilter(KCompositeJob* self, intptr_t slot) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self))
        vkcompositejob->kcompositejob_eventfilter_callback = reinterpret_cast<VirtualKCompositeJob::KCompositeJob_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KCompositeJob_TimerEvent(KCompositeJob* self, QTimerEvent* event) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob) {
        vkcompositejob->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompositeJob::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompositeJob_SuperTimerEvent(KCompositeJob* self, QTimerEvent* event) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        vkcompositejob->KCompositeJob::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompositeJob::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnTimerEvent(KCompositeJob* self, intptr_t slot) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self))
        vkcompositejob->kcompositejob_timerevent_callback = reinterpret_cast<VirtualKCompositeJob::KCompositeJob_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompositeJob_ChildEvent(KCompositeJob* self, QChildEvent* event) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob) {
        vkcompositejob->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompositeJob::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompositeJob_SuperChildEvent(KCompositeJob* self, QChildEvent* event) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        vkcompositejob->KCompositeJob::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompositeJob::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnChildEvent(KCompositeJob* self, intptr_t slot) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self))
        vkcompositejob->kcompositejob_childevent_callback = reinterpret_cast<VirtualKCompositeJob::KCompositeJob_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompositeJob_CustomEvent(KCompositeJob* self, QEvent* event) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob) {
        vkcompositejob->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompositeJob::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompositeJob_SuperCustomEvent(KCompositeJob* self, QEvent* event) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        vkcompositejob->KCompositeJob::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompositeJob::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnCustomEvent(KCompositeJob* self, intptr_t slot) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self))
        vkcompositejob->kcompositejob_customevent_callback = reinterpret_cast<VirtualKCompositeJob::KCompositeJob_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompositeJob_ConnectNotify(KCompositeJob* self, const QMetaMethod* signal) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob) {
        vkcompositejob->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCompositeJob::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompositeJob_SuperConnectNotify(KCompositeJob* self, const QMetaMethod* signal) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        vkcompositejob->KCompositeJob::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCompositeJob::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnConnectNotify(KCompositeJob* self, intptr_t slot) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self))
        vkcompositejob->kcompositejob_connectnotify_callback = reinterpret_cast<VirtualKCompositeJob::KCompositeJob_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KCompositeJob_DisconnectNotify(KCompositeJob* self, const QMetaMethod* signal) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob) {
        vkcompositejob->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCompositeJob::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompositeJob_SuperDisconnectNotify(KCompositeJob* self, const QMetaMethod* signal) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        vkcompositejob->KCompositeJob::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCompositeJob::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnDisconnectNotify(KCompositeJob* self, intptr_t slot) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self))
        vkcompositejob->kcompositejob_disconnectnotify_callback = reinterpret_cast<VirtualKCompositeJob::KCompositeJob_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
bool KCompositeJob_HasSubjobs(const KCompositeJob* self) {
    if (auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self))) {
        return vkcompositejob->VirtualKCompositeJob::hasSubjobs();
    } else
        qFatal("Error: Protected method KCompositeJob::hasSubjobs called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of KJob* */ KCompositeJob_Subjobs(const KCompositeJob* self) {
    if (auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self))) {
        const QList<KJob*>& _ret = vkcompositejob->VirtualKCompositeJob::subjobs();
        // Convert QList<> from C++ memory to manually-managed C memory
        KJob** _arr = static_cast<KJob**>(malloc(sizeof(KJob*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method KCompositeJob::subjobs called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompositeJob_ClearSubjobs(KCompositeJob* self) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        vkcompositejob->VirtualKCompositeJob::clearSubjobs();
    } else
        qFatal("Error: Protected method KCompositeJob::clearSubjobs called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompositeJob_SetCapabilities(KCompositeJob* self, int capabilities) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        vkcompositejob->VirtualKCompositeJob::setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else
        qFatal("Error: Protected method KCompositeJob::setCapabilities called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCompositeJob_IsFinished(const KCompositeJob* self) {
    if (auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self))) {
        return vkcompositejob->VirtualKCompositeJob::isFinished();
    } else
        qFatal("Error: Protected method KCompositeJob::isFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompositeJob_SetError(KCompositeJob* self, int errorCode) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        vkcompositejob->VirtualKCompositeJob::setError(static_cast<int>(errorCode));
    } else
        qFatal("Error: Protected method KCompositeJob::setError called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompositeJob_SetErrorText(KCompositeJob* self, const libqt_string errorText) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
        vkcompositejob->VirtualKCompositeJob::setErrorText(errorText_QString);
    } else
        qFatal("Error: Protected method KCompositeJob::setErrorText called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompositeJob_SetProcessedAmount(KCompositeJob* self, int unit, unsigned long long amount) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        vkcompositejob->VirtualKCompositeJob::setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KCompositeJob::setProcessedAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompositeJob_SetTotalAmount(KCompositeJob* self, int unit, unsigned long long amount) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        vkcompositejob->VirtualKCompositeJob::setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KCompositeJob::setTotalAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompositeJob_SetProgressUnit(KCompositeJob* self, int unit) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        vkcompositejob->VirtualKCompositeJob::setProgressUnit(static_cast<KJob::Unit>(unit));
    } else
        qFatal("Error: Protected method KCompositeJob::setProgressUnit called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompositeJob_SetPercent(KCompositeJob* self, unsigned long percentage) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        vkcompositejob->VirtualKCompositeJob::setPercent(static_cast<unsigned long>(percentage));
    } else
        qFatal("Error: Protected method KCompositeJob::setPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompositeJob_EmitResult(KCompositeJob* self) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        vkcompositejob->VirtualKCompositeJob::emitResult();
    } else
        qFatal("Error: Protected method KCompositeJob::emitResult called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompositeJob_EmitPercent(KCompositeJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        vkcompositejob->VirtualKCompositeJob::emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else
        qFatal("Error: Protected method KCompositeJob::emitPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompositeJob_EmitSpeed(KCompositeJob* self, unsigned long speed) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        vkcompositejob->VirtualKCompositeJob::emitSpeed(static_cast<unsigned long>(speed));
    } else
        qFatal("Error: Protected method KCompositeJob::emitSpeed called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompositeJob_StartElapsedTimer(KCompositeJob* self) {
    if (auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self)) {
        vkcompositejob->VirtualKCompositeJob::startElapsedTimer();
    } else
        qFatal("Error: Protected method KCompositeJob::startElapsedTimer called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KCompositeJob_Sender(const KCompositeJob* self) {
    if (auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self))) {
        return vkcompositejob->VirtualKCompositeJob::sender();
    } else
        qFatal("Error: Protected method KCompositeJob::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KCompositeJob_SenderSignalIndex(const KCompositeJob* self) {
    if (auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self))) {
        return vkcompositejob->VirtualKCompositeJob::senderSignalIndex();
    } else
        qFatal("Error: Protected method KCompositeJob::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KCompositeJob_Receivers(const KCompositeJob* self, const char* signal) {
    if (auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self))) {
        return vkcompositejob->VirtualKCompositeJob::receivers(signal);
    } else
        qFatal("Error: Protected method KCompositeJob::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCompositeJob_IsSignalConnected(const KCompositeJob* self, const QMetaMethod* signal) {
    if (auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self))) {
        return vkcompositejob->VirtualKCompositeJob::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KCompositeJob::isSignalConnected called without a directly constructed type");
}

void KCompositeJob_Delete(KCompositeJob* self) {
    delete self;
}
