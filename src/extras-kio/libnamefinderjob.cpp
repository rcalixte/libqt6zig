#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__NameFinderJob
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
#include <namefinderjob.h>
#include "libnamefinderjob.h"
#include "libnamefinderjob.hxx"

KIO__NameFinderJob* KIO__NameFinderJob_new(const QUrl* baseUrl, const libqt_string name, QObject* parent) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualKIONameFinderJob(*baseUrl, name_QString, parent);
}

QMetaObject* KIO__NameFinderJob_MetaObject(const KIO__NameFinderJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__NameFinderJob_Metacast(KIO__NameFinderJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__NameFinderJob_Metacall(KIO__NameFinderJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__NameFinderJob_Tr(const char* s) {
    auto _ret = KIO::NameFinderJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__NameFinderJob_Start(KIO__NameFinderJob* self) {
    self->start();
}

QUrl* KIO__NameFinderJob_FinalUrl(const KIO__NameFinderJob* self) {
    return new QUrl(self->finalUrl());
}

QUrl* KIO__NameFinderJob_BaseUrl(const KIO__NameFinderJob* self) {
    return new QUrl(self->baseUrl());
}

libqt_string KIO__NameFinderJob_FinalName(const KIO__NameFinderJob* self) {
    auto _ret = self->finalName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__NameFinderJob_Tr2(const char* s, const char* c) {
    auto _ret = KIO::NameFinderJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__NameFinderJob_Tr3(const char* s, const char* c, int n) {
    auto _ret = KIO::NameFinderJob::tr(s, c, static_cast<int>(n));
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
QMetaObject* KIO__NameFinderJob_SuperMetaObject(const KIO__NameFinderJob* self) {
    return (QMetaObject*)self->KIO::NameFinderJob::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnMetaObject(KIO__NameFinderJob* self, intptr_t slot) {
    if (auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self)))
        vkionamefinderjob->kio__namefinderjob_metaobject_callback = reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KIO__NameFinderJob_SuperMetacast(KIO__NameFinderJob* self, const char* param1) {
    return self->KIO::NameFinderJob::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnMetacast(KIO__NameFinderJob* self, intptr_t slot) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self))
        vkionamefinderjob->kio__namefinderjob_metacast_callback = reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_Metacast_Callback>(slot);
}

// Base class handler implementation
int KIO__NameFinderJob_SuperMetacall(KIO__NameFinderJob* self, int param1, int param2, void** param3) {
    return self->KIO::NameFinderJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnMetacall(KIO__NameFinderJob* self, intptr_t slot) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self))
        vkionamefinderjob->kio__namefinderjob_metacall_callback = reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_Metacall_Callback>(slot);
}

// Base class handler implementation
void KIO__NameFinderJob_SuperStart(KIO__NameFinderJob* self) {
    self->KIO::NameFinderJob::start();
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnStart(KIO__NameFinderJob* self, intptr_t slot) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self))
        vkionamefinderjob->kio__namefinderjob_start_callback = reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_Start_Callback>(slot);
}

// Derived class handler implementation
bool KIO__NameFinderJob_AddSubjob(KIO__NameFinderJob* self, KJob* job) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob) {
        return vkionamefinderjob->addSubjob(job);
    } else {
        qFatal("Error: Protected virtual method KIO::NameFinderJob::addSubjob called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__NameFinderJob_SuperAddSubjob(KIO__NameFinderJob* self, KJob* job) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        return vkionamefinderjob->KIO::NameFinderJob::addSubjob(job);
    } else
        qFatal("Error: Protected virtual method KIO::NameFinderJob::addSubjob called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnAddSubjob(KIO__NameFinderJob* self, intptr_t slot) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self))
        vkionamefinderjob->kio__namefinderjob_addsubjob_callback = reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_AddSubjob_Callback>(slot);
}

// Derived class handler implementation
bool KIO__NameFinderJob_RemoveSubjob(KIO__NameFinderJob* self, KJob* job) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob) {
        return vkionamefinderjob->removeSubjob(job);
    } else {
        qFatal("Error: Protected virtual method KIO::NameFinderJob::removeSubjob called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__NameFinderJob_SuperRemoveSubjob(KIO__NameFinderJob* self, KJob* job) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        return vkionamefinderjob->KIO::NameFinderJob::removeSubjob(job);
    } else
        qFatal("Error: Protected virtual method KIO::NameFinderJob::removeSubjob called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnRemoveSubjob(KIO__NameFinderJob* self, intptr_t slot) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self))
        vkionamefinderjob->kio__namefinderjob_removesubjob_callback = reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_RemoveSubjob_Callback>(slot);
}

// Derived class handler implementation
void KIO__NameFinderJob_SlotResult(KIO__NameFinderJob* self, KJob* job) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob) {
        vkionamefinderjob->slotResult(job);
    } else {
        qFatal("Error: Protected virtual method KIO::NameFinderJob::slotResult called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__NameFinderJob_SuperSlotResult(KIO__NameFinderJob* self, KJob* job) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        vkionamefinderjob->KIO::NameFinderJob::slotResult(job);
    } else
        qFatal("Error: Protected virtual method KIO::NameFinderJob::slotResult called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnSlotResult(KIO__NameFinderJob* self, intptr_t slot) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self))
        vkionamefinderjob->kio__namefinderjob_slotresult_callback = reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_SlotResult_Callback>(slot);
}

// Derived class handler implementation
void KIO__NameFinderJob_SlotInfoMessage(KIO__NameFinderJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob) {
        vkionamefinderjob->slotInfoMessage(job, message_QString);
    } else {
        qFatal("Error: Protected virtual method KIO::NameFinderJob::slotInfoMessage called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__NameFinderJob_SuperSlotInfoMessage(KIO__NameFinderJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        vkionamefinderjob->KIO::NameFinderJob::slotInfoMessage(job, message_QString);
    } else
        qFatal("Error: Protected virtual method KIO::NameFinderJob::slotInfoMessage called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnSlotInfoMessage(KIO__NameFinderJob* self, intptr_t slot) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self))
        vkionamefinderjob->kio__namefinderjob_slotinfomessage_callback = reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_SlotInfoMessage_Callback>(slot);
}

// Derived class handler implementation
bool KIO__NameFinderJob_DoKill(KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob) {
        return vkionamefinderjob->doKill();
    } else {
        qFatal("Error: Protected virtual method KIO::NameFinderJob::doKill called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__NameFinderJob_SuperDoKill(KIO__NameFinderJob* self) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        return vkionamefinderjob->KIO::NameFinderJob::doKill();
    } else
        qFatal("Error: Protected virtual method KIO::NameFinderJob::doKill called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnDoKill(KIO__NameFinderJob* self, intptr_t slot) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self))
        vkionamefinderjob->kio__namefinderjob_dokill_callback = reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_DoKill_Callback>(slot);
}

// Derived class handler implementation
bool KIO__NameFinderJob_DoSuspend(KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob) {
        return vkionamefinderjob->doSuspend();
    } else {
        qFatal("Error: Protected virtual method KIO::NameFinderJob::doSuspend called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__NameFinderJob_SuperDoSuspend(KIO__NameFinderJob* self) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        return vkionamefinderjob->KIO::NameFinderJob::doSuspend();
    } else
        qFatal("Error: Protected virtual method KIO::NameFinderJob::doSuspend called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnDoSuspend(KIO__NameFinderJob* self, intptr_t slot) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self))
        vkionamefinderjob->kio__namefinderjob_dosuspend_callback = reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_DoSuspend_Callback>(slot);
}

// Derived class handler implementation
bool KIO__NameFinderJob_DoResume(KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob) {
        return vkionamefinderjob->doResume();
    } else {
        qFatal("Error: Protected virtual method KIO::NameFinderJob::doResume called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__NameFinderJob_SuperDoResume(KIO__NameFinderJob* self) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        return vkionamefinderjob->KIO::NameFinderJob::doResume();
    } else
        qFatal("Error: Protected virtual method KIO::NameFinderJob::doResume called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnDoResume(KIO__NameFinderJob* self, intptr_t slot) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self))
        vkionamefinderjob->kio__namefinderjob_doresume_callback = reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_DoResume_Callback>(slot);
}

// Derived class handler implementation
libqt_string KIO__NameFinderJob_ErrorString(const KIO__NameFinderJob* self) {
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
libqt_string KIO__NameFinderJob_SuperErrorString(const KIO__NameFinderJob* self) {
    auto _ret = self->KIO::NameFinderJob::errorString();
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
void KIO__NameFinderJob_OnErrorString(KIO__NameFinderJob* self, intptr_t slot) {
    if (auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self)))
        vkionamefinderjob->kio__namefinderjob_errorstring_callback = reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_ErrorString_Callback>(slot);
}

// Derived class handler implementation
bool KIO__NameFinderJob_Event(KIO__NameFinderJob* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KIO__NameFinderJob_SuperEvent(KIO__NameFinderJob* self, QEvent* event) {
    return self->KIO::NameFinderJob::event(event);
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnEvent(KIO__NameFinderJob* self, intptr_t slot) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self))
        vkionamefinderjob->kio__namefinderjob_event_callback = reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_Event_Callback>(slot);
}

// Derived class handler implementation
bool KIO__NameFinderJob_EventFilter(KIO__NameFinderJob* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KIO__NameFinderJob_SuperEventFilter(KIO__NameFinderJob* self, QObject* watched, QEvent* event) {
    return self->KIO::NameFinderJob::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnEventFilter(KIO__NameFinderJob* self, intptr_t slot) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self))
        vkionamefinderjob->kio__namefinderjob_eventfilter_callback = reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KIO__NameFinderJob_TimerEvent(KIO__NameFinderJob* self, QTimerEvent* event) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob) {
        vkionamefinderjob->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::NameFinderJob::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__NameFinderJob_SuperTimerEvent(KIO__NameFinderJob* self, QTimerEvent* event) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        vkionamefinderjob->KIO::NameFinderJob::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::NameFinderJob::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnTimerEvent(KIO__NameFinderJob* self, intptr_t slot) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self))
        vkionamefinderjob->kio__namefinderjob_timerevent_callback = reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__NameFinderJob_ChildEvent(KIO__NameFinderJob* self, QChildEvent* event) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob) {
        vkionamefinderjob->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::NameFinderJob::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__NameFinderJob_SuperChildEvent(KIO__NameFinderJob* self, QChildEvent* event) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        vkionamefinderjob->KIO::NameFinderJob::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::NameFinderJob::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnChildEvent(KIO__NameFinderJob* self, intptr_t slot) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self))
        vkionamefinderjob->kio__namefinderjob_childevent_callback = reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__NameFinderJob_CustomEvent(KIO__NameFinderJob* self, QEvent* event) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob) {
        vkionamefinderjob->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::NameFinderJob::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__NameFinderJob_SuperCustomEvent(KIO__NameFinderJob* self, QEvent* event) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        vkionamefinderjob->KIO::NameFinderJob::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::NameFinderJob::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnCustomEvent(KIO__NameFinderJob* self, intptr_t slot) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self))
        vkionamefinderjob->kio__namefinderjob_customevent_callback = reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__NameFinderJob_ConnectNotify(KIO__NameFinderJob* self, const QMetaMethod* signal) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob) {
        vkionamefinderjob->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::NameFinderJob::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__NameFinderJob_SuperConnectNotify(KIO__NameFinderJob* self, const QMetaMethod* signal) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        vkionamefinderjob->KIO::NameFinderJob::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::NameFinderJob::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnConnectNotify(KIO__NameFinderJob* self, intptr_t slot) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self))
        vkionamefinderjob->kio__namefinderjob_connectnotify_callback = reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KIO__NameFinderJob_DisconnectNotify(KIO__NameFinderJob* self, const QMetaMethod* signal) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob) {
        vkionamefinderjob->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::NameFinderJob::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__NameFinderJob_SuperDisconnectNotify(KIO__NameFinderJob* self, const QMetaMethod* signal) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        vkionamefinderjob->KIO::NameFinderJob::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::NameFinderJob::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnDisconnectNotify(KIO__NameFinderJob* self, intptr_t slot) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self))
        vkionamefinderjob->kio__namefinderjob_disconnectnotify_callback = reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
bool KIO__NameFinderJob_HasSubjobs(const KIO__NameFinderJob* self) {
    if (auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self))) {
        return vkionamefinderjob->VirtualKIONameFinderJob::hasSubjobs();
    } else
        qFatal("Error: Protected method KIO::NameFinderJob::hasSubjobs called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of KJob* */ KIO__NameFinderJob_Subjobs(const KIO__NameFinderJob* self) {
    if (auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self))) {
        const QList<KJob*>& _ret = vkionamefinderjob->VirtualKIONameFinderJob::subjobs();
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
        qFatal("Error: Protected method KIO::NameFinderJob::subjobs called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__NameFinderJob_ClearSubjobs(KIO__NameFinderJob* self) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        vkionamefinderjob->VirtualKIONameFinderJob::clearSubjobs();
    } else
        qFatal("Error: Protected method KIO::NameFinderJob::clearSubjobs called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__NameFinderJob_SetCapabilities(KIO__NameFinderJob* self, int capabilities) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        vkionamefinderjob->VirtualKIONameFinderJob::setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else
        qFatal("Error: Protected method KIO::NameFinderJob::setCapabilities called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__NameFinderJob_IsFinished(const KIO__NameFinderJob* self) {
    if (auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self))) {
        return vkionamefinderjob->VirtualKIONameFinderJob::isFinished();
    } else
        qFatal("Error: Protected method KIO::NameFinderJob::isFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__NameFinderJob_SetError(KIO__NameFinderJob* self, int errorCode) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        vkionamefinderjob->VirtualKIONameFinderJob::setError(static_cast<int>(errorCode));
    } else
        qFatal("Error: Protected method KIO::NameFinderJob::setError called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__NameFinderJob_SetErrorText(KIO__NameFinderJob* self, const libqt_string errorText) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
        vkionamefinderjob->VirtualKIONameFinderJob::setErrorText(errorText_QString);
    } else
        qFatal("Error: Protected method KIO::NameFinderJob::setErrorText called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__NameFinderJob_SetProcessedAmount(KIO__NameFinderJob* self, int unit, unsigned long long amount) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        vkionamefinderjob->VirtualKIONameFinderJob::setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KIO::NameFinderJob::setProcessedAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__NameFinderJob_SetTotalAmount(KIO__NameFinderJob* self, int unit, unsigned long long amount) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        vkionamefinderjob->VirtualKIONameFinderJob::setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KIO::NameFinderJob::setTotalAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__NameFinderJob_SetProgressUnit(KIO__NameFinderJob* self, int unit) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        vkionamefinderjob->VirtualKIONameFinderJob::setProgressUnit(static_cast<KJob::Unit>(unit));
    } else
        qFatal("Error: Protected method KIO::NameFinderJob::setProgressUnit called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__NameFinderJob_SetPercent(KIO__NameFinderJob* self, unsigned long percentage) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        vkionamefinderjob->VirtualKIONameFinderJob::setPercent(static_cast<unsigned long>(percentage));
    } else
        qFatal("Error: Protected method KIO::NameFinderJob::setPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__NameFinderJob_EmitResult(KIO__NameFinderJob* self) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        vkionamefinderjob->VirtualKIONameFinderJob::emitResult();
    } else
        qFatal("Error: Protected method KIO::NameFinderJob::emitResult called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__NameFinderJob_EmitPercent(KIO__NameFinderJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        vkionamefinderjob->VirtualKIONameFinderJob::emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else
        qFatal("Error: Protected method KIO::NameFinderJob::emitPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__NameFinderJob_EmitSpeed(KIO__NameFinderJob* self, unsigned long speed) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        vkionamefinderjob->VirtualKIONameFinderJob::emitSpeed(static_cast<unsigned long>(speed));
    } else
        qFatal("Error: Protected method KIO::NameFinderJob::emitSpeed called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__NameFinderJob_StartElapsedTimer(KIO__NameFinderJob* self) {
    if (auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self)) {
        vkionamefinderjob->VirtualKIONameFinderJob::startElapsedTimer();
    } else
        qFatal("Error: Protected method KIO::NameFinderJob::startElapsedTimer called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KIO__NameFinderJob_Sender(const KIO__NameFinderJob* self) {
    if (auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self))) {
        return vkionamefinderjob->VirtualKIONameFinderJob::sender();
    } else
        qFatal("Error: Protected method KIO::NameFinderJob::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__NameFinderJob_SenderSignalIndex(const KIO__NameFinderJob* self) {
    if (auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self))) {
        return vkionamefinderjob->VirtualKIONameFinderJob::senderSignalIndex();
    } else
        qFatal("Error: Protected method KIO::NameFinderJob::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__NameFinderJob_Receivers(const KIO__NameFinderJob* self, const char* signal) {
    if (auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self))) {
        return vkionamefinderjob->VirtualKIONameFinderJob::receivers(signal);
    } else
        qFatal("Error: Protected method KIO::NameFinderJob::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__NameFinderJob_IsSignalConnected(const KIO__NameFinderJob* self, const QMetaMethod* signal) {
    if (auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self))) {
        return vkionamefinderjob->VirtualKIONameFinderJob::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KIO::NameFinderJob::isSignalConnected called without a directly constructed type");
}

void KIO__NameFinderJob_Delete(KIO__NameFinderJob* self) {
    delete self;
}
