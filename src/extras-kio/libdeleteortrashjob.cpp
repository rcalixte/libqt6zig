#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__DeleteOrTrashJob
#include <KJob>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <deleteortrashjob.h>
#include "libdeleteortrashjob.h"
#include "libdeleteortrashjob.hxx"

KIO__DeleteOrTrashJob* KIO__DeleteOrTrashJob_new(const libqt_list /* of QUrl* */ urls, int deletionType, int confirm, QObject* parent) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    return new VirtualKIODeleteOrTrashJob(urls_QList, static_cast<KIO::AskUserActionInterface::DeletionType>(deletionType), static_cast<KIO::AskUserActionInterface::ConfirmationType>(confirm), parent);
}

QMetaObject* KIO__DeleteOrTrashJob_MetaObject(const KIO__DeleteOrTrashJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__DeleteOrTrashJob_Metacast(KIO__DeleteOrTrashJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__DeleteOrTrashJob_Metacall(KIO__DeleteOrTrashJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__DeleteOrTrashJob_Tr(const char* s) {
    auto _ret = KIO::DeleteOrTrashJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__DeleteOrTrashJob_Start(KIO__DeleteOrTrashJob* self) {
    self->start();
}

void KIO__DeleteOrTrashJob_Started(KIO__DeleteOrTrashJob* self) {
    self->started();
}

void KIO__DeleteOrTrashJob_Connect_Started(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__DeleteOrTrashJob*) = reinterpret_cast<void (*)(KIO__DeleteOrTrashJob*)>(slot);
    KIO::DeleteOrTrashJob::connect(self,
                                   static_cast<void (KIO::DeleteOrTrashJob::*)()>(&KIO::DeleteOrTrashJob::started),
                                   [self, slotFunc]() {
                                       slotFunc(self);
                                   });
}

libqt_string KIO__DeleteOrTrashJob_Tr2(const char* s, const char* c) {
    auto _ret = KIO::DeleteOrTrashJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__DeleteOrTrashJob_Tr3(const char* s, const char* c, int n) {
    auto _ret = KIO::DeleteOrTrashJob::tr(s, c, static_cast<int>(n));
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
QMetaObject* KIO__DeleteOrTrashJob_SuperMetaObject(const KIO__DeleteOrTrashJob* self) {
    return (QMetaObject*)self->KIO::DeleteOrTrashJob::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnMetaObject(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    if (auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self)))
        vkiodeleteortrashjob->kio__deleteortrashjob_metaobject_callback = reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KIO__DeleteOrTrashJob_SuperMetacast(KIO__DeleteOrTrashJob* self, const char* param1) {
    return self->KIO::DeleteOrTrashJob::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnMetacast(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self))
        vkiodeleteortrashjob->kio__deleteortrashjob_metacast_callback = reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_Metacast_Callback>(slot);
}

// Base class handler implementation
int KIO__DeleteOrTrashJob_SuperMetacall(KIO__DeleteOrTrashJob* self, int param1, int param2, void** param3) {
    return self->KIO::DeleteOrTrashJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnMetacall(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self))
        vkiodeleteortrashjob->kio__deleteortrashjob_metacall_callback = reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_Metacall_Callback>(slot);
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_SuperStart(KIO__DeleteOrTrashJob* self) {
    self->KIO::DeleteOrTrashJob::start();
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnStart(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self))
        vkiodeleteortrashjob->kio__deleteortrashjob_start_callback = reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_Start_Callback>(slot);
}

// Derived class handler implementation
bool KIO__DeleteOrTrashJob_AddSubjob(KIO__DeleteOrTrashJob* self, KJob* job) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob) {
        return vkiodeleteortrashjob->addSubjob(job);
    } else {
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::addSubjob called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__DeleteOrTrashJob_SuperAddSubjob(KIO__DeleteOrTrashJob* self, KJob* job) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        return vkiodeleteortrashjob->KIO::DeleteOrTrashJob::addSubjob(job);
    } else
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::addSubjob called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnAddSubjob(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self))
        vkiodeleteortrashjob->kio__deleteortrashjob_addsubjob_callback = reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_AddSubjob_Callback>(slot);
}

// Derived class handler implementation
bool KIO__DeleteOrTrashJob_RemoveSubjob(KIO__DeleteOrTrashJob* self, KJob* job) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob) {
        return vkiodeleteortrashjob->removeSubjob(job);
    } else {
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::removeSubjob called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__DeleteOrTrashJob_SuperRemoveSubjob(KIO__DeleteOrTrashJob* self, KJob* job) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        return vkiodeleteortrashjob->KIO::DeleteOrTrashJob::removeSubjob(job);
    } else
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::removeSubjob called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnRemoveSubjob(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self))
        vkiodeleteortrashjob->kio__deleteortrashjob_removesubjob_callback = reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_RemoveSubjob_Callback>(slot);
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_SlotInfoMessage(KIO__DeleteOrTrashJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob) {
        vkiodeleteortrashjob->slotInfoMessage(job, message_QString);
    } else {
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::slotInfoMessage called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_SuperSlotInfoMessage(KIO__DeleteOrTrashJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        vkiodeleteortrashjob->KIO::DeleteOrTrashJob::slotInfoMessage(job, message_QString);
    } else
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::slotInfoMessage called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnSlotInfoMessage(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self))
        vkiodeleteortrashjob->kio__deleteortrashjob_slotinfomessage_callback = reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_SlotInfoMessage_Callback>(slot);
}

// Derived class handler implementation
bool KIO__DeleteOrTrashJob_DoKill(KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob) {
        return vkiodeleteortrashjob->doKill();
    } else {
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::doKill called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__DeleteOrTrashJob_SuperDoKill(KIO__DeleteOrTrashJob* self) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        return vkiodeleteortrashjob->KIO::DeleteOrTrashJob::doKill();
    } else
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::doKill called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnDoKill(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self))
        vkiodeleteortrashjob->kio__deleteortrashjob_dokill_callback = reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_DoKill_Callback>(slot);
}

// Derived class handler implementation
bool KIO__DeleteOrTrashJob_DoSuspend(KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob) {
        return vkiodeleteortrashjob->doSuspend();
    } else {
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::doSuspend called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__DeleteOrTrashJob_SuperDoSuspend(KIO__DeleteOrTrashJob* self) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        return vkiodeleteortrashjob->KIO::DeleteOrTrashJob::doSuspend();
    } else
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::doSuspend called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnDoSuspend(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self))
        vkiodeleteortrashjob->kio__deleteortrashjob_dosuspend_callback = reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_DoSuspend_Callback>(slot);
}

// Derived class handler implementation
bool KIO__DeleteOrTrashJob_DoResume(KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob) {
        return vkiodeleteortrashjob->doResume();
    } else {
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::doResume called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__DeleteOrTrashJob_SuperDoResume(KIO__DeleteOrTrashJob* self) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        return vkiodeleteortrashjob->KIO::DeleteOrTrashJob::doResume();
    } else
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::doResume called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnDoResume(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self))
        vkiodeleteortrashjob->kio__deleteortrashjob_doresume_callback = reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_DoResume_Callback>(slot);
}

// Derived class handler implementation
libqt_string KIO__DeleteOrTrashJob_ErrorString(const KIO__DeleteOrTrashJob* self) {
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
libqt_string KIO__DeleteOrTrashJob_SuperErrorString(const KIO__DeleteOrTrashJob* self) {
    auto _ret = self->KIO::DeleteOrTrashJob::errorString();
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
void KIO__DeleteOrTrashJob_OnErrorString(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    if (auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self)))
        vkiodeleteortrashjob->kio__deleteortrashjob_errorstring_callback = reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_ErrorString_Callback>(slot);
}

// Derived class handler implementation
bool KIO__DeleteOrTrashJob_Event(KIO__DeleteOrTrashJob* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KIO__DeleteOrTrashJob_SuperEvent(KIO__DeleteOrTrashJob* self, QEvent* event) {
    return self->KIO::DeleteOrTrashJob::event(event);
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnEvent(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self))
        vkiodeleteortrashjob->kio__deleteortrashjob_event_callback = reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_Event_Callback>(slot);
}

// Derived class handler implementation
bool KIO__DeleteOrTrashJob_EventFilter(KIO__DeleteOrTrashJob* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KIO__DeleteOrTrashJob_SuperEventFilter(KIO__DeleteOrTrashJob* self, QObject* watched, QEvent* event) {
    return self->KIO::DeleteOrTrashJob::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnEventFilter(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self))
        vkiodeleteortrashjob->kio__deleteortrashjob_eventfilter_callback = reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_TimerEvent(KIO__DeleteOrTrashJob* self, QTimerEvent* event) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob) {
        vkiodeleteortrashjob->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_SuperTimerEvent(KIO__DeleteOrTrashJob* self, QTimerEvent* event) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        vkiodeleteortrashjob->KIO::DeleteOrTrashJob::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnTimerEvent(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self))
        vkiodeleteortrashjob->kio__deleteortrashjob_timerevent_callback = reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_ChildEvent(KIO__DeleteOrTrashJob* self, QChildEvent* event) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob) {
        vkiodeleteortrashjob->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_SuperChildEvent(KIO__DeleteOrTrashJob* self, QChildEvent* event) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        vkiodeleteortrashjob->KIO::DeleteOrTrashJob::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnChildEvent(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self))
        vkiodeleteortrashjob->kio__deleteortrashjob_childevent_callback = reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_CustomEvent(KIO__DeleteOrTrashJob* self, QEvent* event) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob) {
        vkiodeleteortrashjob->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_SuperCustomEvent(KIO__DeleteOrTrashJob* self, QEvent* event) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        vkiodeleteortrashjob->KIO::DeleteOrTrashJob::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnCustomEvent(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self))
        vkiodeleteortrashjob->kio__deleteortrashjob_customevent_callback = reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_ConnectNotify(KIO__DeleteOrTrashJob* self, const QMetaMethod* signal) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob) {
        vkiodeleteortrashjob->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_SuperConnectNotify(KIO__DeleteOrTrashJob* self, const QMetaMethod* signal) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        vkiodeleteortrashjob->KIO::DeleteOrTrashJob::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnConnectNotify(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self))
        vkiodeleteortrashjob->kio__deleteortrashjob_connectnotify_callback = reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_DisconnectNotify(KIO__DeleteOrTrashJob* self, const QMetaMethod* signal) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob) {
        vkiodeleteortrashjob->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_SuperDisconnectNotify(KIO__DeleteOrTrashJob* self, const QMetaMethod* signal) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        vkiodeleteortrashjob->KIO::DeleteOrTrashJob::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::DeleteOrTrashJob::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnDisconnectNotify(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self))
        vkiodeleteortrashjob->kio__deleteortrashjob_disconnectnotify_callback = reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
bool KIO__DeleteOrTrashJob_HasSubjobs(const KIO__DeleteOrTrashJob* self) {
    if (auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self))) {
        return vkiodeleteortrashjob->VirtualKIODeleteOrTrashJob::hasSubjobs();
    } else
        qFatal("Error: Protected method KIO::DeleteOrTrashJob::hasSubjobs called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of KJob* */ KIO__DeleteOrTrashJob_Subjobs(const KIO__DeleteOrTrashJob* self) {
    if (auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self))) {
        const QList<KJob*>& _ret = vkiodeleteortrashjob->VirtualKIODeleteOrTrashJob::subjobs();
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
        qFatal("Error: Protected method KIO::DeleteOrTrashJob::subjobs called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__DeleteOrTrashJob_ClearSubjobs(KIO__DeleteOrTrashJob* self) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        vkiodeleteortrashjob->VirtualKIODeleteOrTrashJob::clearSubjobs();
    } else
        qFatal("Error: Protected method KIO::DeleteOrTrashJob::clearSubjobs called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__DeleteOrTrashJob_SetCapabilities(KIO__DeleteOrTrashJob* self, int capabilities) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        vkiodeleteortrashjob->VirtualKIODeleteOrTrashJob::setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else
        qFatal("Error: Protected method KIO::DeleteOrTrashJob::setCapabilities called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__DeleteOrTrashJob_IsFinished(const KIO__DeleteOrTrashJob* self) {
    if (auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self))) {
        return vkiodeleteortrashjob->VirtualKIODeleteOrTrashJob::isFinished();
    } else
        qFatal("Error: Protected method KIO::DeleteOrTrashJob::isFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__DeleteOrTrashJob_SetError(KIO__DeleteOrTrashJob* self, int errorCode) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        vkiodeleteortrashjob->VirtualKIODeleteOrTrashJob::setError(static_cast<int>(errorCode));
    } else
        qFatal("Error: Protected method KIO::DeleteOrTrashJob::setError called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__DeleteOrTrashJob_SetErrorText(KIO__DeleteOrTrashJob* self, const libqt_string errorText) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
        vkiodeleteortrashjob->VirtualKIODeleteOrTrashJob::setErrorText(errorText_QString);
    } else
        qFatal("Error: Protected method KIO::DeleteOrTrashJob::setErrorText called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__DeleteOrTrashJob_SetProcessedAmount(KIO__DeleteOrTrashJob* self, int unit, unsigned long long amount) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        vkiodeleteortrashjob->VirtualKIODeleteOrTrashJob::setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KIO::DeleteOrTrashJob::setProcessedAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__DeleteOrTrashJob_SetTotalAmount(KIO__DeleteOrTrashJob* self, int unit, unsigned long long amount) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        vkiodeleteortrashjob->VirtualKIODeleteOrTrashJob::setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KIO::DeleteOrTrashJob::setTotalAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__DeleteOrTrashJob_SetProgressUnit(KIO__DeleteOrTrashJob* self, int unit) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        vkiodeleteortrashjob->VirtualKIODeleteOrTrashJob::setProgressUnit(static_cast<KJob::Unit>(unit));
    } else
        qFatal("Error: Protected method KIO::DeleteOrTrashJob::setProgressUnit called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__DeleteOrTrashJob_SetPercent(KIO__DeleteOrTrashJob* self, unsigned long percentage) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        vkiodeleteortrashjob->VirtualKIODeleteOrTrashJob::setPercent(static_cast<unsigned long>(percentage));
    } else
        qFatal("Error: Protected method KIO::DeleteOrTrashJob::setPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__DeleteOrTrashJob_EmitResult(KIO__DeleteOrTrashJob* self) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        vkiodeleteortrashjob->VirtualKIODeleteOrTrashJob::emitResult();
    } else
        qFatal("Error: Protected method KIO::DeleteOrTrashJob::emitResult called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__DeleteOrTrashJob_EmitPercent(KIO__DeleteOrTrashJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        vkiodeleteortrashjob->VirtualKIODeleteOrTrashJob::emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else
        qFatal("Error: Protected method KIO::DeleteOrTrashJob::emitPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__DeleteOrTrashJob_EmitSpeed(KIO__DeleteOrTrashJob* self, unsigned long speed) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        vkiodeleteortrashjob->VirtualKIODeleteOrTrashJob::emitSpeed(static_cast<unsigned long>(speed));
    } else
        qFatal("Error: Protected method KIO::DeleteOrTrashJob::emitSpeed called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__DeleteOrTrashJob_StartElapsedTimer(KIO__DeleteOrTrashJob* self) {
    if (auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self)) {
        vkiodeleteortrashjob->VirtualKIODeleteOrTrashJob::startElapsedTimer();
    } else
        qFatal("Error: Protected method KIO::DeleteOrTrashJob::startElapsedTimer called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KIO__DeleteOrTrashJob_Sender(const KIO__DeleteOrTrashJob* self) {
    if (auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self))) {
        return vkiodeleteortrashjob->VirtualKIODeleteOrTrashJob::sender();
    } else
        qFatal("Error: Protected method KIO::DeleteOrTrashJob::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__DeleteOrTrashJob_SenderSignalIndex(const KIO__DeleteOrTrashJob* self) {
    if (auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self))) {
        return vkiodeleteortrashjob->VirtualKIODeleteOrTrashJob::senderSignalIndex();
    } else
        qFatal("Error: Protected method KIO::DeleteOrTrashJob::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__DeleteOrTrashJob_Receivers(const KIO__DeleteOrTrashJob* self, const char* signal) {
    if (auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self))) {
        return vkiodeleteortrashjob->VirtualKIODeleteOrTrashJob::receivers(signal);
    } else
        qFatal("Error: Protected method KIO::DeleteOrTrashJob::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__DeleteOrTrashJob_IsSignalConnected(const KIO__DeleteOrTrashJob* self, const QMetaMethod* signal) {
    if (auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self))) {
        return vkiodeleteortrashjob->VirtualKIODeleteOrTrashJob::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KIO::DeleteOrTrashJob::isSignalConnected called without a directly constructed type");
}

void KIO__DeleteOrTrashJob_Delete(KIO__DeleteOrTrashJob* self) {
    delete self;
}
