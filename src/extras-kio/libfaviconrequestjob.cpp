#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__FavIconRequestJob
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
#include <faviconrequestjob.h>
#include "libfaviconrequestjob.h"
#include "libfaviconrequestjob.hxx"

KIO__FavIconRequestJob* KIO__FavIconRequestJob_new(const QUrl* hostUrl) {
    return new VirtualKIOFavIconRequestJob(*hostUrl);
}

KIO__FavIconRequestJob* KIO__FavIconRequestJob_new2(const QUrl* hostUrl, int reload) {
    return new VirtualKIOFavIconRequestJob(*hostUrl, static_cast<KIO::LoadType>(reload));
}

KIO__FavIconRequestJob* KIO__FavIconRequestJob_new3(const QUrl* hostUrl, int reload, QObject* parent) {
    return new VirtualKIOFavIconRequestJob(*hostUrl, static_cast<KIO::LoadType>(reload), parent);
}

QMetaObject* KIO__FavIconRequestJob_MetaObject(const KIO__FavIconRequestJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__FavIconRequestJob_Metacast(KIO__FavIconRequestJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__FavIconRequestJob_Metacall(KIO__FavIconRequestJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__FavIconRequestJob_Tr(const char* s) {
    auto _ret = KIO::FavIconRequestJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__FavIconRequestJob_SetIconUrl(KIO__FavIconRequestJob* self, const QUrl* iconUrl) {
    self->setIconUrl(*iconUrl);
}

libqt_string KIO__FavIconRequestJob_IconFile(const KIO__FavIconRequestJob* self) {
    auto _ret = self->iconFile();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KIO__FavIconRequestJob_HostUrl(const KIO__FavIconRequestJob* self) {
    return new QUrl(self->hostUrl());
}

void KIO__FavIconRequestJob_Start(KIO__FavIconRequestJob* self) {
    self->start();
}

libqt_string KIO__FavIconRequestJob_Tr2(const char* s, const char* c) {
    auto _ret = KIO::FavIconRequestJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__FavIconRequestJob_Tr3(const char* s, const char* c, int n) {
    auto _ret = KIO::FavIconRequestJob::tr(s, c, static_cast<int>(n));
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
QMetaObject* KIO__FavIconRequestJob_SuperMetaObject(const KIO__FavIconRequestJob* self) {
    return (QMetaObject*)self->KIO::FavIconRequestJob::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnMetaObject(KIO__FavIconRequestJob* self, intptr_t slot) {
    if (auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self)))
        vkiofaviconrequestjob->kio__faviconrequestjob_metaobject_callback = reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KIO__FavIconRequestJob_SuperMetacast(KIO__FavIconRequestJob* self, const char* param1) {
    return self->KIO::FavIconRequestJob::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnMetacast(KIO__FavIconRequestJob* self, intptr_t slot) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self))
        vkiofaviconrequestjob->kio__faviconrequestjob_metacast_callback = reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_Metacast_Callback>(slot);
}

// Base class handler implementation
int KIO__FavIconRequestJob_SuperMetacall(KIO__FavIconRequestJob* self, int param1, int param2, void** param3) {
    return self->KIO::FavIconRequestJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnMetacall(KIO__FavIconRequestJob* self, intptr_t slot) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self))
        vkiofaviconrequestjob->kio__faviconrequestjob_metacall_callback = reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_Metacall_Callback>(slot);
}

// Base class handler implementation
void KIO__FavIconRequestJob_SuperStart(KIO__FavIconRequestJob* self) {
    self->KIO::FavIconRequestJob::start();
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnStart(KIO__FavIconRequestJob* self, intptr_t slot) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self))
        vkiofaviconrequestjob->kio__faviconrequestjob_start_callback = reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_Start_Callback>(slot);
}

// Derived class handler implementation
bool KIO__FavIconRequestJob_AddSubjob(KIO__FavIconRequestJob* self, KJob* job) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob) {
        return vkiofaviconrequestjob->addSubjob(job);
    } else {
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::addSubjob called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__FavIconRequestJob_SuperAddSubjob(KIO__FavIconRequestJob* self, KJob* job) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        return vkiofaviconrequestjob->KIO::FavIconRequestJob::addSubjob(job);
    } else
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::addSubjob called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnAddSubjob(KIO__FavIconRequestJob* self, intptr_t slot) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self))
        vkiofaviconrequestjob->kio__faviconrequestjob_addsubjob_callback = reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_AddSubjob_Callback>(slot);
}

// Derived class handler implementation
bool KIO__FavIconRequestJob_RemoveSubjob(KIO__FavIconRequestJob* self, KJob* job) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob) {
        return vkiofaviconrequestjob->removeSubjob(job);
    } else {
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::removeSubjob called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__FavIconRequestJob_SuperRemoveSubjob(KIO__FavIconRequestJob* self, KJob* job) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        return vkiofaviconrequestjob->KIO::FavIconRequestJob::removeSubjob(job);
    } else
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::removeSubjob called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnRemoveSubjob(KIO__FavIconRequestJob* self, intptr_t slot) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self))
        vkiofaviconrequestjob->kio__faviconrequestjob_removesubjob_callback = reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_RemoveSubjob_Callback>(slot);
}

// Derived class handler implementation
void KIO__FavIconRequestJob_SlotInfoMessage(KIO__FavIconRequestJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob) {
        vkiofaviconrequestjob->slotInfoMessage(job, message_QString);
    } else {
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::slotInfoMessage called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_SuperSlotInfoMessage(KIO__FavIconRequestJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        vkiofaviconrequestjob->KIO::FavIconRequestJob::slotInfoMessage(job, message_QString);
    } else
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::slotInfoMessage called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnSlotInfoMessage(KIO__FavIconRequestJob* self, intptr_t slot) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self))
        vkiofaviconrequestjob->kio__faviconrequestjob_slotinfomessage_callback = reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_SlotInfoMessage_Callback>(slot);
}

// Derived class handler implementation
bool KIO__FavIconRequestJob_DoKill(KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob) {
        return vkiofaviconrequestjob->doKill();
    } else {
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::doKill called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__FavIconRequestJob_SuperDoKill(KIO__FavIconRequestJob* self) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        return vkiofaviconrequestjob->KIO::FavIconRequestJob::doKill();
    } else
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::doKill called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnDoKill(KIO__FavIconRequestJob* self, intptr_t slot) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self))
        vkiofaviconrequestjob->kio__faviconrequestjob_dokill_callback = reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_DoKill_Callback>(slot);
}

// Derived class handler implementation
bool KIO__FavIconRequestJob_DoSuspend(KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob) {
        return vkiofaviconrequestjob->doSuspend();
    } else {
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::doSuspend called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__FavIconRequestJob_SuperDoSuspend(KIO__FavIconRequestJob* self) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        return vkiofaviconrequestjob->KIO::FavIconRequestJob::doSuspend();
    } else
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::doSuspend called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnDoSuspend(KIO__FavIconRequestJob* self, intptr_t slot) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self))
        vkiofaviconrequestjob->kio__faviconrequestjob_dosuspend_callback = reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_DoSuspend_Callback>(slot);
}

// Derived class handler implementation
bool KIO__FavIconRequestJob_DoResume(KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob) {
        return vkiofaviconrequestjob->doResume();
    } else {
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::doResume called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__FavIconRequestJob_SuperDoResume(KIO__FavIconRequestJob* self) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        return vkiofaviconrequestjob->KIO::FavIconRequestJob::doResume();
    } else
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::doResume called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnDoResume(KIO__FavIconRequestJob* self, intptr_t slot) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self))
        vkiofaviconrequestjob->kio__faviconrequestjob_doresume_callback = reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_DoResume_Callback>(slot);
}

// Derived class handler implementation
libqt_string KIO__FavIconRequestJob_ErrorString(const KIO__FavIconRequestJob* self) {
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
libqt_string KIO__FavIconRequestJob_SuperErrorString(const KIO__FavIconRequestJob* self) {
    auto _ret = self->KIO::FavIconRequestJob::errorString();
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
void KIO__FavIconRequestJob_OnErrorString(KIO__FavIconRequestJob* self, intptr_t slot) {
    if (auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self)))
        vkiofaviconrequestjob->kio__faviconrequestjob_errorstring_callback = reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_ErrorString_Callback>(slot);
}

// Derived class handler implementation
bool KIO__FavIconRequestJob_Event(KIO__FavIconRequestJob* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KIO__FavIconRequestJob_SuperEvent(KIO__FavIconRequestJob* self, QEvent* event) {
    return self->KIO::FavIconRequestJob::event(event);
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnEvent(KIO__FavIconRequestJob* self, intptr_t slot) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self))
        vkiofaviconrequestjob->kio__faviconrequestjob_event_callback = reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_Event_Callback>(slot);
}

// Derived class handler implementation
bool KIO__FavIconRequestJob_EventFilter(KIO__FavIconRequestJob* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KIO__FavIconRequestJob_SuperEventFilter(KIO__FavIconRequestJob* self, QObject* watched, QEvent* event) {
    return self->KIO::FavIconRequestJob::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnEventFilter(KIO__FavIconRequestJob* self, intptr_t slot) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self))
        vkiofaviconrequestjob->kio__faviconrequestjob_eventfilter_callback = reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KIO__FavIconRequestJob_TimerEvent(KIO__FavIconRequestJob* self, QTimerEvent* event) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob) {
        vkiofaviconrequestjob->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_SuperTimerEvent(KIO__FavIconRequestJob* self, QTimerEvent* event) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        vkiofaviconrequestjob->KIO::FavIconRequestJob::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnTimerEvent(KIO__FavIconRequestJob* self, intptr_t slot) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self))
        vkiofaviconrequestjob->kio__faviconrequestjob_timerevent_callback = reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__FavIconRequestJob_ChildEvent(KIO__FavIconRequestJob* self, QChildEvent* event) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob) {
        vkiofaviconrequestjob->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_SuperChildEvent(KIO__FavIconRequestJob* self, QChildEvent* event) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        vkiofaviconrequestjob->KIO::FavIconRequestJob::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnChildEvent(KIO__FavIconRequestJob* self, intptr_t slot) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self))
        vkiofaviconrequestjob->kio__faviconrequestjob_childevent_callback = reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__FavIconRequestJob_CustomEvent(KIO__FavIconRequestJob* self, QEvent* event) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob) {
        vkiofaviconrequestjob->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_SuperCustomEvent(KIO__FavIconRequestJob* self, QEvent* event) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        vkiofaviconrequestjob->KIO::FavIconRequestJob::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnCustomEvent(KIO__FavIconRequestJob* self, intptr_t slot) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self))
        vkiofaviconrequestjob->kio__faviconrequestjob_customevent_callback = reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__FavIconRequestJob_ConnectNotify(KIO__FavIconRequestJob* self, const QMetaMethod* signal) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob) {
        vkiofaviconrequestjob->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_SuperConnectNotify(KIO__FavIconRequestJob* self, const QMetaMethod* signal) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        vkiofaviconrequestjob->KIO::FavIconRequestJob::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnConnectNotify(KIO__FavIconRequestJob* self, intptr_t slot) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self))
        vkiofaviconrequestjob->kio__faviconrequestjob_connectnotify_callback = reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KIO__FavIconRequestJob_DisconnectNotify(KIO__FavIconRequestJob* self, const QMetaMethod* signal) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob) {
        vkiofaviconrequestjob->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_SuperDisconnectNotify(KIO__FavIconRequestJob* self, const QMetaMethod* signal) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        vkiofaviconrequestjob->KIO::FavIconRequestJob::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::FavIconRequestJob::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnDisconnectNotify(KIO__FavIconRequestJob* self, intptr_t slot) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self))
        vkiofaviconrequestjob->kio__faviconrequestjob_disconnectnotify_callback = reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
bool KIO__FavIconRequestJob_HasSubjobs(const KIO__FavIconRequestJob* self) {
    if (auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self))) {
        return vkiofaviconrequestjob->VirtualKIOFavIconRequestJob::hasSubjobs();
    } else
        qFatal("Error: Protected method KIO::FavIconRequestJob::hasSubjobs called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of KJob* */ KIO__FavIconRequestJob_Subjobs(const KIO__FavIconRequestJob* self) {
    if (auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self))) {
        const QList<KJob*>& _ret = vkiofaviconrequestjob->VirtualKIOFavIconRequestJob::subjobs();
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
        qFatal("Error: Protected method KIO::FavIconRequestJob::subjobs called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__FavIconRequestJob_ClearSubjobs(KIO__FavIconRequestJob* self) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        vkiofaviconrequestjob->VirtualKIOFavIconRequestJob::clearSubjobs();
    } else
        qFatal("Error: Protected method KIO::FavIconRequestJob::clearSubjobs called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__FavIconRequestJob_SetCapabilities(KIO__FavIconRequestJob* self, int capabilities) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        vkiofaviconrequestjob->VirtualKIOFavIconRequestJob::setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else
        qFatal("Error: Protected method KIO::FavIconRequestJob::setCapabilities called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__FavIconRequestJob_IsFinished(const KIO__FavIconRequestJob* self) {
    if (auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self))) {
        return vkiofaviconrequestjob->VirtualKIOFavIconRequestJob::isFinished();
    } else
        qFatal("Error: Protected method KIO::FavIconRequestJob::isFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__FavIconRequestJob_SetError(KIO__FavIconRequestJob* self, int errorCode) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        vkiofaviconrequestjob->VirtualKIOFavIconRequestJob::setError(static_cast<int>(errorCode));
    } else
        qFatal("Error: Protected method KIO::FavIconRequestJob::setError called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__FavIconRequestJob_SetErrorText(KIO__FavIconRequestJob* self, const libqt_string errorText) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
        vkiofaviconrequestjob->VirtualKIOFavIconRequestJob::setErrorText(errorText_QString);
    } else
        qFatal("Error: Protected method KIO::FavIconRequestJob::setErrorText called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__FavIconRequestJob_SetProcessedAmount(KIO__FavIconRequestJob* self, int unit, unsigned long long amount) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        vkiofaviconrequestjob->VirtualKIOFavIconRequestJob::setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KIO::FavIconRequestJob::setProcessedAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__FavIconRequestJob_SetTotalAmount(KIO__FavIconRequestJob* self, int unit, unsigned long long amount) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        vkiofaviconrequestjob->VirtualKIOFavIconRequestJob::setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KIO::FavIconRequestJob::setTotalAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__FavIconRequestJob_SetProgressUnit(KIO__FavIconRequestJob* self, int unit) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        vkiofaviconrequestjob->VirtualKIOFavIconRequestJob::setProgressUnit(static_cast<KJob::Unit>(unit));
    } else
        qFatal("Error: Protected method KIO::FavIconRequestJob::setProgressUnit called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__FavIconRequestJob_SetPercent(KIO__FavIconRequestJob* self, unsigned long percentage) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        vkiofaviconrequestjob->VirtualKIOFavIconRequestJob::setPercent(static_cast<unsigned long>(percentage));
    } else
        qFatal("Error: Protected method KIO::FavIconRequestJob::setPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__FavIconRequestJob_EmitResult(KIO__FavIconRequestJob* self) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        vkiofaviconrequestjob->VirtualKIOFavIconRequestJob::emitResult();
    } else
        qFatal("Error: Protected method KIO::FavIconRequestJob::emitResult called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__FavIconRequestJob_EmitPercent(KIO__FavIconRequestJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        vkiofaviconrequestjob->VirtualKIOFavIconRequestJob::emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else
        qFatal("Error: Protected method KIO::FavIconRequestJob::emitPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__FavIconRequestJob_EmitSpeed(KIO__FavIconRequestJob* self, unsigned long speed) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        vkiofaviconrequestjob->VirtualKIOFavIconRequestJob::emitSpeed(static_cast<unsigned long>(speed));
    } else
        qFatal("Error: Protected method KIO::FavIconRequestJob::emitSpeed called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__FavIconRequestJob_StartElapsedTimer(KIO__FavIconRequestJob* self) {
    if (auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self)) {
        vkiofaviconrequestjob->VirtualKIOFavIconRequestJob::startElapsedTimer();
    } else
        qFatal("Error: Protected method KIO::FavIconRequestJob::startElapsedTimer called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KIO__FavIconRequestJob_Sender(const KIO__FavIconRequestJob* self) {
    if (auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self))) {
        return vkiofaviconrequestjob->VirtualKIOFavIconRequestJob::sender();
    } else
        qFatal("Error: Protected method KIO::FavIconRequestJob::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__FavIconRequestJob_SenderSignalIndex(const KIO__FavIconRequestJob* self) {
    if (auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self))) {
        return vkiofaviconrequestjob->VirtualKIOFavIconRequestJob::senderSignalIndex();
    } else
        qFatal("Error: Protected method KIO::FavIconRequestJob::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__FavIconRequestJob_Receivers(const KIO__FavIconRequestJob* self, const char* signal) {
    if (auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self))) {
        return vkiofaviconrequestjob->VirtualKIOFavIconRequestJob::receivers(signal);
    } else
        qFatal("Error: Protected method KIO::FavIconRequestJob::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__FavIconRequestJob_IsSignalConnected(const KIO__FavIconRequestJob* self, const QMetaMethod* signal) {
    if (auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self))) {
        return vkiofaviconrequestjob->VirtualKIOFavIconRequestJob::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KIO::FavIconRequestJob::isSignalConnected called without a directly constructed type");
}

void KIO__FavIconRequestJob_Delete(KIO__FavIconRequestJob* self) {
    delete self;
}
