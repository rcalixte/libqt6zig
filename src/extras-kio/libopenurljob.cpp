#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__OpenUrlJob
#include <KJob>
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
#include <openurljob.h>
#include "libopenurljob.h"
#include "libopenurljob.hxx"

KIO__OpenUrlJob* KIO__OpenUrlJob_new(const QUrl* url) {
    return new VirtualKIOOpenUrlJob(*url);
}

KIO__OpenUrlJob* KIO__OpenUrlJob_new2(const QUrl* url, const libqt_string mimeType) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    return new VirtualKIOOpenUrlJob(*url, mimeType_QString);
}

KIO__OpenUrlJob* KIO__OpenUrlJob_new3(const QUrl* url, QObject* parent) {
    return new VirtualKIOOpenUrlJob(*url, parent);
}

KIO__OpenUrlJob* KIO__OpenUrlJob_new4(const QUrl* url, const libqt_string mimeType, QObject* parent) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    return new VirtualKIOOpenUrlJob(*url, mimeType_QString, parent);
}

QMetaObject* KIO__OpenUrlJob_MetaObject(const KIO__OpenUrlJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__OpenUrlJob_Metacast(KIO__OpenUrlJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__OpenUrlJob_Metacall(KIO__OpenUrlJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__OpenUrlJob_Tr(const char* s) {
    auto _ret = KIO::OpenUrlJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__OpenUrlJob_SetDeleteTemporaryFile(KIO__OpenUrlJob* self, bool b) {
    self->setDeleteTemporaryFile(b);
}

void KIO__OpenUrlJob_SetSuggestedFileName(KIO__OpenUrlJob* self, const libqt_string suggestedFileName) {
    QString suggestedFileName_QString = QString::fromUtf8(suggestedFileName.data, suggestedFileName.len);
    self->setSuggestedFileName(suggestedFileName_QString);
}

void KIO__OpenUrlJob_SetStartupId(KIO__OpenUrlJob* self, const libqt_string startupId) {
    QByteArray startupId_QByteArray(startupId.data, startupId.len);
    self->setStartupId(startupId_QByteArray);
}

void KIO__OpenUrlJob_SetRunExecutables(KIO__OpenUrlJob* self, bool allow) {
    self->setRunExecutables(allow);
}

void KIO__OpenUrlJob_SetShowOpenOrExecuteDialog(KIO__OpenUrlJob* self, bool b) {
    self->setShowOpenOrExecuteDialog(b);
}

void KIO__OpenUrlJob_SetEnableExternalBrowser(KIO__OpenUrlJob* self, bool b) {
    self->setEnableExternalBrowser(b);
}

void KIO__OpenUrlJob_SetFollowRedirections(KIO__OpenUrlJob* self, bool b) {
    self->setFollowRedirections(b);
}

void KIO__OpenUrlJob_Start(KIO__OpenUrlJob* self) {
    self->start();
}

bool KIO__OpenUrlJob_IsExecutableFile(const QUrl* url, const libqt_string mimetypeName) {
    QString mimetypeName_QString = QString::fromUtf8(mimetypeName.data, mimetypeName.len);
    return KIO::OpenUrlJob::isExecutableFile(*url, mimetypeName_QString);
}

void KIO__OpenUrlJob_MimeTypeFound(KIO__OpenUrlJob* self, const libqt_string mimeType) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    self->mimeTypeFound(mimeType_QString);
}

void KIO__OpenUrlJob_Connect_MimeTypeFound(KIO__OpenUrlJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__OpenUrlJob*, const char*) = reinterpret_cast<void (*)(KIO__OpenUrlJob*, const char*)>(slot);
    KIO::OpenUrlJob::connect(self,
                             static_cast<void (KIO::OpenUrlJob::*)(const QString&)>(&KIO::OpenUrlJob::mimeTypeFound),
                             [self, slotFunc](const QString& mimeType) {
                                 const auto mimeType_ret = mimeType;
                                 // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                 QByteArray mimeType_b = mimeType_ret.toUtf8();
                                 auto mimeType_str_len = mimeType_b.length();
                                 const char* mimeType_str = static_cast<const char*>(malloc(mimeType_str_len + 1));
                                 memcpy((void*)mimeType_str, mimeType_b.data(), mimeType_str_len);
                                 ((char*)mimeType_str)[mimeType_str_len] = '\0';
                                 const char* sigval1 = mimeType_str;
                                 slotFunc(self, sigval1);
                                 libqt_free(mimeType_str);
                             });
}

bool KIO__OpenUrlJob_DoKill(KIO__OpenUrlJob* self) {
    auto* vkio__openurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkio__openurljob) {
        return vkio__openurljob->doKill();
    }
    qFatal("Error: Protected method KIO::OpenUrlJob::doKill called without a directly constructed type");
}

libqt_string KIO__OpenUrlJob_Tr2(const char* s, const char* c) {
    auto _ret = KIO::OpenUrlJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__OpenUrlJob_Tr3(const char* s, const char* c, int n) {
    auto _ret = KIO::OpenUrlJob::tr(s, c, static_cast<int>(n));
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
QMetaObject* KIO__OpenUrlJob_SuperMetaObject(const KIO__OpenUrlJob* self) {
    return (QMetaObject*)self->KIO::OpenUrlJob::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnMetaObject(KIO__OpenUrlJob* self, intptr_t slot) {
    if (auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self)))
        vkioopenurljob->kio__openurljob_metaobject_callback = reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KIO__OpenUrlJob_SuperMetacast(KIO__OpenUrlJob* self, const char* param1) {
    return self->KIO::OpenUrlJob::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnMetacast(KIO__OpenUrlJob* self, intptr_t slot) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self))
        vkioopenurljob->kio__openurljob_metacast_callback = reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_Metacast_Callback>(slot);
}

// Base class handler implementation
int KIO__OpenUrlJob_SuperMetacall(KIO__OpenUrlJob* self, int param1, int param2, void** param3) {
    return self->KIO::OpenUrlJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnMetacall(KIO__OpenUrlJob* self, intptr_t slot) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self))
        vkioopenurljob->kio__openurljob_metacall_callback = reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_Metacall_Callback>(slot);
}

// Base class handler implementation
void KIO__OpenUrlJob_SuperStart(KIO__OpenUrlJob* self) {
    self->KIO::OpenUrlJob::start();
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnStart(KIO__OpenUrlJob* self, intptr_t slot) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self))
        vkioopenurljob->kio__openurljob_start_callback = reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_Start_Callback>(slot);
}

// Base class handler implementation
bool KIO__OpenUrlJob_SuperDoKill(KIO__OpenUrlJob* self) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        return vkioopenurljob->KIO::OpenUrlJob::doKill();
    } else
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::doKill called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnDoKill(KIO__OpenUrlJob* self, intptr_t slot) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self))
        vkioopenurljob->kio__openurljob_dokill_callback = reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_DoKill_Callback>(slot);
}

// Derived class handler implementation
bool KIO__OpenUrlJob_AddSubjob(KIO__OpenUrlJob* self, KJob* job) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob) {
        return vkioopenurljob->addSubjob(job);
    } else {
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::addSubjob called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__OpenUrlJob_SuperAddSubjob(KIO__OpenUrlJob* self, KJob* job) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        return vkioopenurljob->KIO::OpenUrlJob::addSubjob(job);
    } else
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::addSubjob called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnAddSubjob(KIO__OpenUrlJob* self, intptr_t slot) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self))
        vkioopenurljob->kio__openurljob_addsubjob_callback = reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_AddSubjob_Callback>(slot);
}

// Derived class handler implementation
bool KIO__OpenUrlJob_RemoveSubjob(KIO__OpenUrlJob* self, KJob* job) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob) {
        return vkioopenurljob->removeSubjob(job);
    } else {
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::removeSubjob called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__OpenUrlJob_SuperRemoveSubjob(KIO__OpenUrlJob* self, KJob* job) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        return vkioopenurljob->KIO::OpenUrlJob::removeSubjob(job);
    } else
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::removeSubjob called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnRemoveSubjob(KIO__OpenUrlJob* self, intptr_t slot) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self))
        vkioopenurljob->kio__openurljob_removesubjob_callback = reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_RemoveSubjob_Callback>(slot);
}

// Derived class handler implementation
void KIO__OpenUrlJob_SlotInfoMessage(KIO__OpenUrlJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob) {
        vkioopenurljob->slotInfoMessage(job, message_QString);
    } else {
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::slotInfoMessage called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_SuperSlotInfoMessage(KIO__OpenUrlJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        vkioopenurljob->KIO::OpenUrlJob::slotInfoMessage(job, message_QString);
    } else
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::slotInfoMessage called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnSlotInfoMessage(KIO__OpenUrlJob* self, intptr_t slot) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self))
        vkioopenurljob->kio__openurljob_slotinfomessage_callback = reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_SlotInfoMessage_Callback>(slot);
}

// Derived class handler implementation
bool KIO__OpenUrlJob_DoSuspend(KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob) {
        return vkioopenurljob->doSuspend();
    } else {
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::doSuspend called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__OpenUrlJob_SuperDoSuspend(KIO__OpenUrlJob* self) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        return vkioopenurljob->KIO::OpenUrlJob::doSuspend();
    } else
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::doSuspend called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnDoSuspend(KIO__OpenUrlJob* self, intptr_t slot) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self))
        vkioopenurljob->kio__openurljob_dosuspend_callback = reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_DoSuspend_Callback>(slot);
}

// Derived class handler implementation
bool KIO__OpenUrlJob_DoResume(KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob) {
        return vkioopenurljob->doResume();
    } else {
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::doResume called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__OpenUrlJob_SuperDoResume(KIO__OpenUrlJob* self) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        return vkioopenurljob->KIO::OpenUrlJob::doResume();
    } else
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::doResume called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnDoResume(KIO__OpenUrlJob* self, intptr_t slot) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self))
        vkioopenurljob->kio__openurljob_doresume_callback = reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_DoResume_Callback>(slot);
}

// Derived class handler implementation
libqt_string KIO__OpenUrlJob_ErrorString(const KIO__OpenUrlJob* self) {
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
libqt_string KIO__OpenUrlJob_SuperErrorString(const KIO__OpenUrlJob* self) {
    auto _ret = self->KIO::OpenUrlJob::errorString();
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
void KIO__OpenUrlJob_OnErrorString(KIO__OpenUrlJob* self, intptr_t slot) {
    if (auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self)))
        vkioopenurljob->kio__openurljob_errorstring_callback = reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_ErrorString_Callback>(slot);
}

// Derived class handler implementation
bool KIO__OpenUrlJob_Event(KIO__OpenUrlJob* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KIO__OpenUrlJob_SuperEvent(KIO__OpenUrlJob* self, QEvent* event) {
    return self->KIO::OpenUrlJob::event(event);
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnEvent(KIO__OpenUrlJob* self, intptr_t slot) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self))
        vkioopenurljob->kio__openurljob_event_callback = reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_Event_Callback>(slot);
}

// Derived class handler implementation
bool KIO__OpenUrlJob_EventFilter(KIO__OpenUrlJob* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KIO__OpenUrlJob_SuperEventFilter(KIO__OpenUrlJob* self, QObject* watched, QEvent* event) {
    return self->KIO::OpenUrlJob::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnEventFilter(KIO__OpenUrlJob* self, intptr_t slot) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self))
        vkioopenurljob->kio__openurljob_eventfilter_callback = reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KIO__OpenUrlJob_TimerEvent(KIO__OpenUrlJob* self, QTimerEvent* event) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob) {
        vkioopenurljob->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_SuperTimerEvent(KIO__OpenUrlJob* self, QTimerEvent* event) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        vkioopenurljob->KIO::OpenUrlJob::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnTimerEvent(KIO__OpenUrlJob* self, intptr_t slot) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self))
        vkioopenurljob->kio__openurljob_timerevent_callback = reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__OpenUrlJob_ChildEvent(KIO__OpenUrlJob* self, QChildEvent* event) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob) {
        vkioopenurljob->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_SuperChildEvent(KIO__OpenUrlJob* self, QChildEvent* event) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        vkioopenurljob->KIO::OpenUrlJob::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnChildEvent(KIO__OpenUrlJob* self, intptr_t slot) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self))
        vkioopenurljob->kio__openurljob_childevent_callback = reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__OpenUrlJob_CustomEvent(KIO__OpenUrlJob* self, QEvent* event) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob) {
        vkioopenurljob->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_SuperCustomEvent(KIO__OpenUrlJob* self, QEvent* event) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        vkioopenurljob->KIO::OpenUrlJob::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnCustomEvent(KIO__OpenUrlJob* self, intptr_t slot) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self))
        vkioopenurljob->kio__openurljob_customevent_callback = reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__OpenUrlJob_ConnectNotify(KIO__OpenUrlJob* self, const QMetaMethod* signal) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob) {
        vkioopenurljob->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_SuperConnectNotify(KIO__OpenUrlJob* self, const QMetaMethod* signal) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        vkioopenurljob->KIO::OpenUrlJob::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnConnectNotify(KIO__OpenUrlJob* self, intptr_t slot) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self))
        vkioopenurljob->kio__openurljob_connectnotify_callback = reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KIO__OpenUrlJob_DisconnectNotify(KIO__OpenUrlJob* self, const QMetaMethod* signal) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob) {
        vkioopenurljob->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_SuperDisconnectNotify(KIO__OpenUrlJob* self, const QMetaMethod* signal) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        vkioopenurljob->KIO::OpenUrlJob::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::OpenUrlJob::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnDisconnectNotify(KIO__OpenUrlJob* self, intptr_t slot) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self))
        vkioopenurljob->kio__openurljob_disconnectnotify_callback = reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
bool KIO__OpenUrlJob_HasSubjobs(const KIO__OpenUrlJob* self) {
    if (auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self))) {
        return vkioopenurljob->VirtualKIOOpenUrlJob::hasSubjobs();
    } else
        qFatal("Error: Protected method KIO::OpenUrlJob::hasSubjobs called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of KJob* */ KIO__OpenUrlJob_Subjobs(const KIO__OpenUrlJob* self) {
    if (auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self))) {
        const QList<KJob*>& _ret = vkioopenurljob->VirtualKIOOpenUrlJob::subjobs();
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
        qFatal("Error: Protected method KIO::OpenUrlJob::subjobs called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenUrlJob_ClearSubjobs(KIO__OpenUrlJob* self) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        vkioopenurljob->VirtualKIOOpenUrlJob::clearSubjobs();
    } else
        qFatal("Error: Protected method KIO::OpenUrlJob::clearSubjobs called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenUrlJob_SetCapabilities(KIO__OpenUrlJob* self, int capabilities) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        vkioopenurljob->VirtualKIOOpenUrlJob::setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else
        qFatal("Error: Protected method KIO::OpenUrlJob::setCapabilities called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__OpenUrlJob_IsFinished(const KIO__OpenUrlJob* self) {
    if (auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self))) {
        return vkioopenurljob->VirtualKIOOpenUrlJob::isFinished();
    } else
        qFatal("Error: Protected method KIO::OpenUrlJob::isFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenUrlJob_SetError(KIO__OpenUrlJob* self, int errorCode) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        vkioopenurljob->VirtualKIOOpenUrlJob::setError(static_cast<int>(errorCode));
    } else
        qFatal("Error: Protected method KIO::OpenUrlJob::setError called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenUrlJob_SetErrorText(KIO__OpenUrlJob* self, const libqt_string errorText) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
        vkioopenurljob->VirtualKIOOpenUrlJob::setErrorText(errorText_QString);
    } else
        qFatal("Error: Protected method KIO::OpenUrlJob::setErrorText called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenUrlJob_SetProcessedAmount(KIO__OpenUrlJob* self, int unit, unsigned long long amount) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        vkioopenurljob->VirtualKIOOpenUrlJob::setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KIO::OpenUrlJob::setProcessedAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenUrlJob_SetTotalAmount(KIO__OpenUrlJob* self, int unit, unsigned long long amount) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        vkioopenurljob->VirtualKIOOpenUrlJob::setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KIO::OpenUrlJob::setTotalAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenUrlJob_SetProgressUnit(KIO__OpenUrlJob* self, int unit) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        vkioopenurljob->VirtualKIOOpenUrlJob::setProgressUnit(static_cast<KJob::Unit>(unit));
    } else
        qFatal("Error: Protected method KIO::OpenUrlJob::setProgressUnit called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenUrlJob_SetPercent(KIO__OpenUrlJob* self, unsigned long percentage) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        vkioopenurljob->VirtualKIOOpenUrlJob::setPercent(static_cast<unsigned long>(percentage));
    } else
        qFatal("Error: Protected method KIO::OpenUrlJob::setPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenUrlJob_EmitResult(KIO__OpenUrlJob* self) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        vkioopenurljob->VirtualKIOOpenUrlJob::emitResult();
    } else
        qFatal("Error: Protected method KIO::OpenUrlJob::emitResult called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenUrlJob_EmitPercent(KIO__OpenUrlJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        vkioopenurljob->VirtualKIOOpenUrlJob::emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else
        qFatal("Error: Protected method KIO::OpenUrlJob::emitPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenUrlJob_EmitSpeed(KIO__OpenUrlJob* self, unsigned long speed) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        vkioopenurljob->VirtualKIOOpenUrlJob::emitSpeed(static_cast<unsigned long>(speed));
    } else
        qFatal("Error: Protected method KIO::OpenUrlJob::emitSpeed called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenUrlJob_StartElapsedTimer(KIO__OpenUrlJob* self) {
    if (auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self)) {
        vkioopenurljob->VirtualKIOOpenUrlJob::startElapsedTimer();
    } else
        qFatal("Error: Protected method KIO::OpenUrlJob::startElapsedTimer called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KIO__OpenUrlJob_Sender(const KIO__OpenUrlJob* self) {
    if (auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self))) {
        return vkioopenurljob->VirtualKIOOpenUrlJob::sender();
    } else
        qFatal("Error: Protected method KIO::OpenUrlJob::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__OpenUrlJob_SenderSignalIndex(const KIO__OpenUrlJob* self) {
    if (auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self))) {
        return vkioopenurljob->VirtualKIOOpenUrlJob::senderSignalIndex();
    } else
        qFatal("Error: Protected method KIO::OpenUrlJob::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__OpenUrlJob_Receivers(const KIO__OpenUrlJob* self, const char* signal) {
    if (auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self))) {
        return vkioopenurljob->VirtualKIOOpenUrlJob::receivers(signal);
    } else
        qFatal("Error: Protected method KIO::OpenUrlJob::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__OpenUrlJob_IsSignalConnected(const KIO__OpenUrlJob* self, const QMetaMethod* signal) {
    if (auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self))) {
        return vkioopenurljob->VirtualKIOOpenUrlJob::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KIO::OpenUrlJob::isSignalConnected called without a directly constructed type");
}

void KIO__OpenUrlJob_Delete(KIO__OpenUrlJob* self) {
    delete self;
}
