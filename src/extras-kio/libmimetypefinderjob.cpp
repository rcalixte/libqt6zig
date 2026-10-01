#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__MimeTypeFinderJob
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
#include <mimetypefinderjob.h>
#include "libmimetypefinderjob.h"
#include "libmimetypefinderjob.hxx"

KIO__MimeTypeFinderJob* KIO__MimeTypeFinderJob_new(const QUrl* url) {
    return new VirtualKIOMimeTypeFinderJob(*url);
}

KIO__MimeTypeFinderJob* KIO__MimeTypeFinderJob_new2(const QUrl* url, QObject* parent) {
    return new VirtualKIOMimeTypeFinderJob(*url, parent);
}

QMetaObject* KIO__MimeTypeFinderJob_MetaObject(const KIO__MimeTypeFinderJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__MimeTypeFinderJob_Metacast(KIO__MimeTypeFinderJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__MimeTypeFinderJob_Metacall(KIO__MimeTypeFinderJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__MimeTypeFinderJob_Tr(const char* s) {
    auto _ret = KIO::MimeTypeFinderJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__MimeTypeFinderJob_SetFollowRedirections(KIO__MimeTypeFinderJob* self, bool b) {
    self->setFollowRedirections(b);
}

void KIO__MimeTypeFinderJob_SetSuggestedFileName(KIO__MimeTypeFinderJob* self, const libqt_string suggestedFileName) {
    QString suggestedFileName_QString = QString::fromUtf8(suggestedFileName.data, suggestedFileName.len);
    self->setSuggestedFileName(suggestedFileName_QString);
}

libqt_string KIO__MimeTypeFinderJob_SuggestedFileName(const KIO__MimeTypeFinderJob* self) {
    auto _ret = self->suggestedFileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__MimeTypeFinderJob_SetAuthenticationPromptEnabled(KIO__MimeTypeFinderJob* self, bool enable) {
    self->setAuthenticationPromptEnabled(enable);
}

bool KIO__MimeTypeFinderJob_IsAuthenticationPromptEnabled(const KIO__MimeTypeFinderJob* self) {
    return self->isAuthenticationPromptEnabled();
}

void KIO__MimeTypeFinderJob_Start(KIO__MimeTypeFinderJob* self) {
    self->start();
}

libqt_string KIO__MimeTypeFinderJob_MimeType(const KIO__MimeTypeFinderJob* self) {
    auto _ret = self->mimeType();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KIO__MimeTypeFinderJob_DoKill(KIO__MimeTypeFinderJob* self) {
    auto* vkio__mimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkio__mimetypefinderjob) {
        return vkio__mimetypefinderjob->doKill();
    }
    qFatal("Error: Protected method KIO::MimeTypeFinderJob::doKill called without a directly constructed type");
}

void KIO__MimeTypeFinderJob_SlotResult(KIO__MimeTypeFinderJob* self, KJob* job) {
    auto* vkio__mimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkio__mimetypefinderjob) {
        vkio__mimetypefinderjob->slotResult(job);
    }
}

libqt_string KIO__MimeTypeFinderJob_Tr2(const char* s, const char* c) {
    auto _ret = KIO::MimeTypeFinderJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__MimeTypeFinderJob_Tr3(const char* s, const char* c, int n) {
    auto _ret = KIO::MimeTypeFinderJob::tr(s, c, static_cast<int>(n));
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
QMetaObject* KIO__MimeTypeFinderJob_SuperMetaObject(const KIO__MimeTypeFinderJob* self) {
    return (QMetaObject*)self->KIO::MimeTypeFinderJob::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnMetaObject(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    if (auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self)))
        vkiomimetypefinderjob->kio__mimetypefinderjob_metaobject_callback = reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KIO__MimeTypeFinderJob_SuperMetacast(KIO__MimeTypeFinderJob* self, const char* param1) {
    return self->KIO::MimeTypeFinderJob::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnMetacast(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self))
        vkiomimetypefinderjob->kio__mimetypefinderjob_metacast_callback = reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_Metacast_Callback>(slot);
}

// Base class handler implementation
int KIO__MimeTypeFinderJob_SuperMetacall(KIO__MimeTypeFinderJob* self, int param1, int param2, void** param3) {
    return self->KIO::MimeTypeFinderJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnMetacall(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self))
        vkiomimetypefinderjob->kio__mimetypefinderjob_metacall_callback = reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_Metacall_Callback>(slot);
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_SuperStart(KIO__MimeTypeFinderJob* self) {
    self->KIO::MimeTypeFinderJob::start();
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnStart(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self))
        vkiomimetypefinderjob->kio__mimetypefinderjob_start_callback = reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_Start_Callback>(slot);
}

// Base class handler implementation
bool KIO__MimeTypeFinderJob_SuperDoKill(KIO__MimeTypeFinderJob* self) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        return vkiomimetypefinderjob->KIO::MimeTypeFinderJob::doKill();
    } else
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::doKill called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnDoKill(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self))
        vkiomimetypefinderjob->kio__mimetypefinderjob_dokill_callback = reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_DoKill_Callback>(slot);
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_SuperSlotResult(KIO__MimeTypeFinderJob* self, KJob* job) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        vkiomimetypefinderjob->KIO::MimeTypeFinderJob::slotResult(job);
    } else
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::slotResult called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnSlotResult(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self))
        vkiomimetypefinderjob->kio__mimetypefinderjob_slotresult_callback = reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_SlotResult_Callback>(slot);
}

// Derived class handler implementation
bool KIO__MimeTypeFinderJob_AddSubjob(KIO__MimeTypeFinderJob* self, KJob* job) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob) {
        return vkiomimetypefinderjob->addSubjob(job);
    } else {
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::addSubjob called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__MimeTypeFinderJob_SuperAddSubjob(KIO__MimeTypeFinderJob* self, KJob* job) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        return vkiomimetypefinderjob->KIO::MimeTypeFinderJob::addSubjob(job);
    } else
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::addSubjob called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnAddSubjob(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self))
        vkiomimetypefinderjob->kio__mimetypefinderjob_addsubjob_callback = reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_AddSubjob_Callback>(slot);
}

// Derived class handler implementation
bool KIO__MimeTypeFinderJob_RemoveSubjob(KIO__MimeTypeFinderJob* self, KJob* job) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob) {
        return vkiomimetypefinderjob->removeSubjob(job);
    } else {
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::removeSubjob called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__MimeTypeFinderJob_SuperRemoveSubjob(KIO__MimeTypeFinderJob* self, KJob* job) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        return vkiomimetypefinderjob->KIO::MimeTypeFinderJob::removeSubjob(job);
    } else
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::removeSubjob called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnRemoveSubjob(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self))
        vkiomimetypefinderjob->kio__mimetypefinderjob_removesubjob_callback = reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_RemoveSubjob_Callback>(slot);
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_SlotInfoMessage(KIO__MimeTypeFinderJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob) {
        vkiomimetypefinderjob->slotInfoMessage(job, message_QString);
    } else {
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::slotInfoMessage called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_SuperSlotInfoMessage(KIO__MimeTypeFinderJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        vkiomimetypefinderjob->KIO::MimeTypeFinderJob::slotInfoMessage(job, message_QString);
    } else
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::slotInfoMessage called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnSlotInfoMessage(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self))
        vkiomimetypefinderjob->kio__mimetypefinderjob_slotinfomessage_callback = reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_SlotInfoMessage_Callback>(slot);
}

// Derived class handler implementation
bool KIO__MimeTypeFinderJob_DoSuspend(KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob) {
        return vkiomimetypefinderjob->doSuspend();
    } else {
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::doSuspend called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__MimeTypeFinderJob_SuperDoSuspend(KIO__MimeTypeFinderJob* self) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        return vkiomimetypefinderjob->KIO::MimeTypeFinderJob::doSuspend();
    } else
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::doSuspend called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnDoSuspend(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self))
        vkiomimetypefinderjob->kio__mimetypefinderjob_dosuspend_callback = reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_DoSuspend_Callback>(slot);
}

// Derived class handler implementation
bool KIO__MimeTypeFinderJob_DoResume(KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob) {
        return vkiomimetypefinderjob->doResume();
    } else {
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::doResume called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__MimeTypeFinderJob_SuperDoResume(KIO__MimeTypeFinderJob* self) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        return vkiomimetypefinderjob->KIO::MimeTypeFinderJob::doResume();
    } else
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::doResume called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnDoResume(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self))
        vkiomimetypefinderjob->kio__mimetypefinderjob_doresume_callback = reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_DoResume_Callback>(slot);
}

// Derived class handler implementation
libqt_string KIO__MimeTypeFinderJob_ErrorString(const KIO__MimeTypeFinderJob* self) {
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
libqt_string KIO__MimeTypeFinderJob_SuperErrorString(const KIO__MimeTypeFinderJob* self) {
    auto _ret = self->KIO::MimeTypeFinderJob::errorString();
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
void KIO__MimeTypeFinderJob_OnErrorString(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    if (auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self)))
        vkiomimetypefinderjob->kio__mimetypefinderjob_errorstring_callback = reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_ErrorString_Callback>(slot);
}

// Derived class handler implementation
bool KIO__MimeTypeFinderJob_Event(KIO__MimeTypeFinderJob* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KIO__MimeTypeFinderJob_SuperEvent(KIO__MimeTypeFinderJob* self, QEvent* event) {
    return self->KIO::MimeTypeFinderJob::event(event);
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnEvent(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self))
        vkiomimetypefinderjob->kio__mimetypefinderjob_event_callback = reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_Event_Callback>(slot);
}

// Derived class handler implementation
bool KIO__MimeTypeFinderJob_EventFilter(KIO__MimeTypeFinderJob* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KIO__MimeTypeFinderJob_SuperEventFilter(KIO__MimeTypeFinderJob* self, QObject* watched, QEvent* event) {
    return self->KIO::MimeTypeFinderJob::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnEventFilter(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self))
        vkiomimetypefinderjob->kio__mimetypefinderjob_eventfilter_callback = reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_TimerEvent(KIO__MimeTypeFinderJob* self, QTimerEvent* event) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob) {
        vkiomimetypefinderjob->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_SuperTimerEvent(KIO__MimeTypeFinderJob* self, QTimerEvent* event) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        vkiomimetypefinderjob->KIO::MimeTypeFinderJob::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnTimerEvent(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self))
        vkiomimetypefinderjob->kio__mimetypefinderjob_timerevent_callback = reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_ChildEvent(KIO__MimeTypeFinderJob* self, QChildEvent* event) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob) {
        vkiomimetypefinderjob->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_SuperChildEvent(KIO__MimeTypeFinderJob* self, QChildEvent* event) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        vkiomimetypefinderjob->KIO::MimeTypeFinderJob::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnChildEvent(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self))
        vkiomimetypefinderjob->kio__mimetypefinderjob_childevent_callback = reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_CustomEvent(KIO__MimeTypeFinderJob* self, QEvent* event) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob) {
        vkiomimetypefinderjob->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_SuperCustomEvent(KIO__MimeTypeFinderJob* self, QEvent* event) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        vkiomimetypefinderjob->KIO::MimeTypeFinderJob::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnCustomEvent(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self))
        vkiomimetypefinderjob->kio__mimetypefinderjob_customevent_callback = reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_ConnectNotify(KIO__MimeTypeFinderJob* self, const QMetaMethod* signal) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob) {
        vkiomimetypefinderjob->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_SuperConnectNotify(KIO__MimeTypeFinderJob* self, const QMetaMethod* signal) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        vkiomimetypefinderjob->KIO::MimeTypeFinderJob::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnConnectNotify(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self))
        vkiomimetypefinderjob->kio__mimetypefinderjob_connectnotify_callback = reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_DisconnectNotify(KIO__MimeTypeFinderJob* self, const QMetaMethod* signal) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob) {
        vkiomimetypefinderjob->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_SuperDisconnectNotify(KIO__MimeTypeFinderJob* self, const QMetaMethod* signal) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        vkiomimetypefinderjob->KIO::MimeTypeFinderJob::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::MimeTypeFinderJob::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnDisconnectNotify(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self))
        vkiomimetypefinderjob->kio__mimetypefinderjob_disconnectnotify_callback = reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
bool KIO__MimeTypeFinderJob_HasSubjobs(const KIO__MimeTypeFinderJob* self) {
    if (auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self))) {
        return vkiomimetypefinderjob->VirtualKIOMimeTypeFinderJob::hasSubjobs();
    } else
        qFatal("Error: Protected method KIO::MimeTypeFinderJob::hasSubjobs called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of KJob* */ KIO__MimeTypeFinderJob_Subjobs(const KIO__MimeTypeFinderJob* self) {
    if (auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self))) {
        const QList<KJob*>& _ret = vkiomimetypefinderjob->VirtualKIOMimeTypeFinderJob::subjobs();
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
        qFatal("Error: Protected method KIO::MimeTypeFinderJob::subjobs called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__MimeTypeFinderJob_ClearSubjobs(KIO__MimeTypeFinderJob* self) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        vkiomimetypefinderjob->VirtualKIOMimeTypeFinderJob::clearSubjobs();
    } else
        qFatal("Error: Protected method KIO::MimeTypeFinderJob::clearSubjobs called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__MimeTypeFinderJob_SetCapabilities(KIO__MimeTypeFinderJob* self, int capabilities) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        vkiomimetypefinderjob->VirtualKIOMimeTypeFinderJob::setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else
        qFatal("Error: Protected method KIO::MimeTypeFinderJob::setCapabilities called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__MimeTypeFinderJob_IsFinished(const KIO__MimeTypeFinderJob* self) {
    if (auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self))) {
        return vkiomimetypefinderjob->VirtualKIOMimeTypeFinderJob::isFinished();
    } else
        qFatal("Error: Protected method KIO::MimeTypeFinderJob::isFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__MimeTypeFinderJob_SetError(KIO__MimeTypeFinderJob* self, int errorCode) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        vkiomimetypefinderjob->VirtualKIOMimeTypeFinderJob::setError(static_cast<int>(errorCode));
    } else
        qFatal("Error: Protected method KIO::MimeTypeFinderJob::setError called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__MimeTypeFinderJob_SetErrorText(KIO__MimeTypeFinderJob* self, const libqt_string errorText) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
        vkiomimetypefinderjob->VirtualKIOMimeTypeFinderJob::setErrorText(errorText_QString);
    } else
        qFatal("Error: Protected method KIO::MimeTypeFinderJob::setErrorText called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__MimeTypeFinderJob_SetProcessedAmount(KIO__MimeTypeFinderJob* self, int unit, unsigned long long amount) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        vkiomimetypefinderjob->VirtualKIOMimeTypeFinderJob::setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KIO::MimeTypeFinderJob::setProcessedAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__MimeTypeFinderJob_SetTotalAmount(KIO__MimeTypeFinderJob* self, int unit, unsigned long long amount) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        vkiomimetypefinderjob->VirtualKIOMimeTypeFinderJob::setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KIO::MimeTypeFinderJob::setTotalAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__MimeTypeFinderJob_SetProgressUnit(KIO__MimeTypeFinderJob* self, int unit) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        vkiomimetypefinderjob->VirtualKIOMimeTypeFinderJob::setProgressUnit(static_cast<KJob::Unit>(unit));
    } else
        qFatal("Error: Protected method KIO::MimeTypeFinderJob::setProgressUnit called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__MimeTypeFinderJob_SetPercent(KIO__MimeTypeFinderJob* self, unsigned long percentage) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        vkiomimetypefinderjob->VirtualKIOMimeTypeFinderJob::setPercent(static_cast<unsigned long>(percentage));
    } else
        qFatal("Error: Protected method KIO::MimeTypeFinderJob::setPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__MimeTypeFinderJob_EmitResult(KIO__MimeTypeFinderJob* self) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        vkiomimetypefinderjob->VirtualKIOMimeTypeFinderJob::emitResult();
    } else
        qFatal("Error: Protected method KIO::MimeTypeFinderJob::emitResult called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__MimeTypeFinderJob_EmitPercent(KIO__MimeTypeFinderJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        vkiomimetypefinderjob->VirtualKIOMimeTypeFinderJob::emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else
        qFatal("Error: Protected method KIO::MimeTypeFinderJob::emitPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__MimeTypeFinderJob_EmitSpeed(KIO__MimeTypeFinderJob* self, unsigned long speed) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        vkiomimetypefinderjob->VirtualKIOMimeTypeFinderJob::emitSpeed(static_cast<unsigned long>(speed));
    } else
        qFatal("Error: Protected method KIO::MimeTypeFinderJob::emitSpeed called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__MimeTypeFinderJob_StartElapsedTimer(KIO__MimeTypeFinderJob* self) {
    if (auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self)) {
        vkiomimetypefinderjob->VirtualKIOMimeTypeFinderJob::startElapsedTimer();
    } else
        qFatal("Error: Protected method KIO::MimeTypeFinderJob::startElapsedTimer called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KIO__MimeTypeFinderJob_Sender(const KIO__MimeTypeFinderJob* self) {
    if (auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self))) {
        return vkiomimetypefinderjob->VirtualKIOMimeTypeFinderJob::sender();
    } else
        qFatal("Error: Protected method KIO::MimeTypeFinderJob::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__MimeTypeFinderJob_SenderSignalIndex(const KIO__MimeTypeFinderJob* self) {
    if (auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self))) {
        return vkiomimetypefinderjob->VirtualKIOMimeTypeFinderJob::senderSignalIndex();
    } else
        qFatal("Error: Protected method KIO::MimeTypeFinderJob::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__MimeTypeFinderJob_Receivers(const KIO__MimeTypeFinderJob* self, const char* signal) {
    if (auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self))) {
        return vkiomimetypefinderjob->VirtualKIOMimeTypeFinderJob::receivers(signal);
    } else
        qFatal("Error: Protected method KIO::MimeTypeFinderJob::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__MimeTypeFinderJob_IsSignalConnected(const KIO__MimeTypeFinderJob* self, const QMetaMethod* signal) {
    if (auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self))) {
        return vkiomimetypefinderjob->VirtualKIOMimeTypeFinderJob::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KIO::MimeTypeFinderJob::isSignalConnected called without a directly constructed type");
}

void KIO__MimeTypeFinderJob_Delete(KIO__MimeTypeFinderJob* self) {
    delete self;
}
