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
#include <QByteArray>
#include <cstring>
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
    auto* vkio__openurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkio__openurljob && vkio__openurljob->isVirtualKIOOpenUrlJob) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KIO__OpenUrlJob_Tr(const char* s) {
    QString _ret = KIO::OpenUrlJob::tr(s);
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
    auto* vkio__openurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkio__openurljob && vkio__openurljob->isVirtualKIOOpenUrlJob) {
        self->start();
    } else {
        ((VirtualKIOOpenUrlJob*)self)->start();
    }
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
    KIO::OpenUrlJob::connect(self, &KIO::OpenUrlJob::mimeTypeFound, [self, slotFunc](const QString& mimeType) {
        const QString mimeType_ret = mimeType;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray mimeType_b = mimeType_ret.toUtf8();
        const char* mimeType_str = static_cast<const char*>(malloc(mimeType_b.length() + 1));
        memcpy((void*)mimeType_str, mimeType_b.data(), mimeType_b.length());
        ((char*)mimeType_str)[mimeType_b.length()] = '\0';
        const char* sigval1 = mimeType_str;
        slotFunc(self, sigval1);
        libqt_free(mimeType_str);
    });
}

bool KIO__OpenUrlJob_DoKill(KIO__OpenUrlJob* self) {
    auto* vkio__openurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkio__openurljob && vkio__openurljob->isVirtualKIOOpenUrlJob) {
        return vkio__openurljob->doKill();
    }
    return {};
}

libqt_string KIO__OpenUrlJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::OpenUrlJob::tr(s, c);
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
    QString _ret = KIO::OpenUrlJob::tr(s, c, static_cast<int>(n));
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
int KIO__OpenUrlJob_QBaseMetacall(KIO__OpenUrlJob* self, int param1, int param2, void** param3) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_Metacall_IsBase(true);
        return vkioopenurljob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIO::OpenUrlJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnMetacall(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_Metacall_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_QBaseStart(KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_Start_IsBase(true);
        vkioopenurljob->start();
    } else {
        self->KIO::OpenUrlJob::start();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnStart(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_Start_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_Start_Callback>(slot));
    }
}

// Base class handler implementation
bool KIO__OpenUrlJob_QBaseDoKill(KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_DoKill_IsBase(true);
        return vkioopenurljob->doKill();
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->doKill();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnDoKill(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_DoKill_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_DoKill_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__OpenUrlJob_AddSubjob(KIO__OpenUrlJob* self, KJob* job) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        return vkioopenurljob->addSubjob(job);
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->addSubjob(job);
    }
}

// Base class handler implementation
bool KIO__OpenUrlJob_QBaseAddSubjob(KIO__OpenUrlJob* self, KJob* job) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_AddSubjob_IsBase(true);
        return vkioopenurljob->addSubjob(job);
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->addSubjob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnAddSubjob(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_AddSubjob_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_AddSubjob_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__OpenUrlJob_RemoveSubjob(KIO__OpenUrlJob* self, KJob* job) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        return vkioopenurljob->removeSubjob(job);
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->removeSubjob(job);
    }
}

// Base class handler implementation
bool KIO__OpenUrlJob_QBaseRemoveSubjob(KIO__OpenUrlJob* self, KJob* job) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_RemoveSubjob_IsBase(true);
        return vkioopenurljob->removeSubjob(job);
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->removeSubjob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnRemoveSubjob(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_RemoveSubjob_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_RemoveSubjob_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenUrlJob_SlotInfoMessage(KIO__OpenUrlJob* self, KJob* job, const libqt_string message) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->slotInfoMessage(job, message_QString);
    } else {
        ((VirtualKIOOpenUrlJob*)self)->slotInfoMessage(job, message_QString);
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_QBaseSlotInfoMessage(KIO__OpenUrlJob* self, KJob* job, const libqt_string message) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_SlotInfoMessage_IsBase(true);
        vkioopenurljob->slotInfoMessage(job, message_QString);
    } else {
        ((VirtualKIOOpenUrlJob*)self)->slotInfoMessage(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnSlotInfoMessage(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_SlotInfoMessage_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_SlotInfoMessage_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__OpenUrlJob_DoSuspend(KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        return vkioopenurljob->doSuspend();
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->doSuspend();
    }
}

// Base class handler implementation
bool KIO__OpenUrlJob_QBaseDoSuspend(KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_DoSuspend_IsBase(true);
        return vkioopenurljob->doSuspend();
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->doSuspend();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnDoSuspend(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_DoSuspend_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_DoSuspend_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__OpenUrlJob_DoResume(KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        return vkioopenurljob->doResume();
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->doResume();
    }
}

// Base class handler implementation
bool KIO__OpenUrlJob_QBaseDoResume(KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_DoResume_IsBase(true);
        return vkioopenurljob->doResume();
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->doResume();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnDoResume(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_DoResume_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_DoResume_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KIO__OpenUrlJob_ErrorString(const KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        QString _ret = vkioopenurljob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIO::OpenUrlJob::errorString();
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
libqt_string KIO__OpenUrlJob_QBaseErrorString(const KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_ErrorString_IsBase(true);
        QString _ret = vkioopenurljob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIO::OpenUrlJob::errorString();
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
void KIO__OpenUrlJob_OnErrorString(const KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_ErrorString_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_ErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__OpenUrlJob_Event(KIO__OpenUrlJob* self, QEvent* event) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        return vkioopenurljob->event(event);
    } else {
        return self->KIO::OpenUrlJob::event(event);
    }
}

// Base class handler implementation
bool KIO__OpenUrlJob_QBaseEvent(KIO__OpenUrlJob* self, QEvent* event) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_Event_IsBase(true);
        return vkioopenurljob->event(event);
    } else {
        return self->KIO::OpenUrlJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnEvent(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_Event_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__OpenUrlJob_EventFilter(KIO__OpenUrlJob* self, QObject* watched, QEvent* event) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        return vkioopenurljob->eventFilter(watched, event);
    } else {
        return self->KIO::OpenUrlJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KIO__OpenUrlJob_QBaseEventFilter(KIO__OpenUrlJob* self, QObject* watched, QEvent* event) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_EventFilter_IsBase(true);
        return vkioopenurljob->eventFilter(watched, event);
    } else {
        return self->KIO::OpenUrlJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnEventFilter(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_EventFilter_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenUrlJob_TimerEvent(KIO__OpenUrlJob* self, QTimerEvent* event) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->timerEvent(event);
    } else {
        ((VirtualKIOOpenUrlJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_QBaseTimerEvent(KIO__OpenUrlJob* self, QTimerEvent* event) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_TimerEvent_IsBase(true);
        vkioopenurljob->timerEvent(event);
    } else {
        ((VirtualKIOOpenUrlJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnTimerEvent(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_TimerEvent_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenUrlJob_ChildEvent(KIO__OpenUrlJob* self, QChildEvent* event) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->childEvent(event);
    } else {
        ((VirtualKIOOpenUrlJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_QBaseChildEvent(KIO__OpenUrlJob* self, QChildEvent* event) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_ChildEvent_IsBase(true);
        vkioopenurljob->childEvent(event);
    } else {
        ((VirtualKIOOpenUrlJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnChildEvent(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_ChildEvent_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenUrlJob_CustomEvent(KIO__OpenUrlJob* self, QEvent* event) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->customEvent(event);
    } else {
        ((VirtualKIOOpenUrlJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_QBaseCustomEvent(KIO__OpenUrlJob* self, QEvent* event) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_CustomEvent_IsBase(true);
        vkioopenurljob->customEvent(event);
    } else {
        ((VirtualKIOOpenUrlJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnCustomEvent(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_CustomEvent_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenUrlJob_ConnectNotify(KIO__OpenUrlJob* self, const QMetaMethod* signal) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->connectNotify(*signal);
    } else {
        ((VirtualKIOOpenUrlJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_QBaseConnectNotify(KIO__OpenUrlJob* self, const QMetaMethod* signal) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_ConnectNotify_IsBase(true);
        vkioopenurljob->connectNotify(*signal);
    } else {
        ((VirtualKIOOpenUrlJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnConnectNotify(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_ConnectNotify_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenUrlJob_DisconnectNotify(KIO__OpenUrlJob* self, const QMetaMethod* signal) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->disconnectNotify(*signal);
    } else {
        ((VirtualKIOOpenUrlJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_QBaseDisconnectNotify(KIO__OpenUrlJob* self, const QMetaMethod* signal) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_DisconnectNotify_IsBase(true);
        vkioopenurljob->disconnectNotify(*signal);
    } else {
        ((VirtualKIOOpenUrlJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnDisconnectNotify(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_DisconnectNotify_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__OpenUrlJob_HasSubjobs(const KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        return vkioopenurljob->hasSubjobs();
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->hasSubjobs();
    }
}

// Base class handler implementation
bool KIO__OpenUrlJob_QBaseHasSubjobs(const KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_HasSubjobs_IsBase(true);
        return vkioopenurljob->hasSubjobs();
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->hasSubjobs();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnHasSubjobs(const KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_HasSubjobs_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_HasSubjobs_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of KJob* */ KIO__OpenUrlJob_Subjobs(const KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        const QList<KJob*>& _ret = vkioopenurljob->subjobs();
        // Convert QList<> from C++ memory to manually-managed C memory
        KJob** _arr = static_cast<KJob**>(malloc(sizeof(KJob*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        const QList<KJob*>& _ret = ((VirtualKIOOpenUrlJob*)self)->subjobs();
        // Convert QList<> from C++ memory to manually-managed C memory
        KJob** _arr = static_cast<KJob**>(malloc(sizeof(KJob*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of KJob* */ KIO__OpenUrlJob_QBaseSubjobs(const KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_Subjobs_IsBase(true);
        const QList<KJob*>& _ret = vkioopenurljob->subjobs();
        // Convert QList<> from C++ memory to manually-managed C memory
        KJob** _arr = static_cast<KJob**>(malloc(sizeof(KJob*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        const QList<KJob*>& _ret = ((VirtualKIOOpenUrlJob*)self)->subjobs();
        // Convert QList<> from C++ memory to manually-managed C memory
        KJob** _arr = static_cast<KJob**>(malloc(sizeof(KJob*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnSubjobs(const KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_Subjobs_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_Subjobs_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenUrlJob_ClearSubjobs(KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->clearSubjobs();
    } else {
        ((VirtualKIOOpenUrlJob*)self)->clearSubjobs();
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_QBaseClearSubjobs(KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_ClearSubjobs_IsBase(true);
        vkioopenurljob->clearSubjobs();
    } else {
        ((VirtualKIOOpenUrlJob*)self)->clearSubjobs();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnClearSubjobs(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_ClearSubjobs_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_ClearSubjobs_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenUrlJob_SetCapabilities(KIO__OpenUrlJob* self, int capabilities) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKIOOpenUrlJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_QBaseSetCapabilities(KIO__OpenUrlJob* self, int capabilities) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_SetCapabilities_IsBase(true);
        vkioopenurljob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKIOOpenUrlJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnSetCapabilities(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_SetCapabilities_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_SetCapabilities_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__OpenUrlJob_IsFinished(const KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        return vkioopenurljob->isFinished();
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->isFinished();
    }
}

// Base class handler implementation
bool KIO__OpenUrlJob_QBaseIsFinished(const KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_IsFinished_IsBase(true);
        return vkioopenurljob->isFinished();
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->isFinished();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnIsFinished(const KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_IsFinished_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_IsFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenUrlJob_SetError(KIO__OpenUrlJob* self, int errorCode) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKIOOpenUrlJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_QBaseSetError(KIO__OpenUrlJob* self, int errorCode) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_SetError_IsBase(true);
        vkioopenurljob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKIOOpenUrlJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnSetError(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_SetError_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenUrlJob_SetErrorText(KIO__OpenUrlJob* self, const libqt_string errorText) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setErrorText(errorText_QString);
    } else {
        ((VirtualKIOOpenUrlJob*)self)->setErrorText(errorText_QString);
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_QBaseSetErrorText(KIO__OpenUrlJob* self, const libqt_string errorText) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_SetErrorText_IsBase(true);
        vkioopenurljob->setErrorText(errorText_QString);
    } else {
        ((VirtualKIOOpenUrlJob*)self)->setErrorText(errorText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnSetErrorText(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_SetErrorText_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_SetErrorText_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenUrlJob_SetProcessedAmount(KIO__OpenUrlJob* self, int unit, unsigned long long amount) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOOpenUrlJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_QBaseSetProcessedAmount(KIO__OpenUrlJob* self, int unit, unsigned long long amount) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_SetProcessedAmount_IsBase(true);
        vkioopenurljob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOOpenUrlJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnSetProcessedAmount(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_SetProcessedAmount_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_SetProcessedAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenUrlJob_SetTotalAmount(KIO__OpenUrlJob* self, int unit, unsigned long long amount) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOOpenUrlJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_QBaseSetTotalAmount(KIO__OpenUrlJob* self, int unit, unsigned long long amount) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_SetTotalAmount_IsBase(true);
        vkioopenurljob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOOpenUrlJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnSetTotalAmount(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_SetTotalAmount_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_SetTotalAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenUrlJob_SetProgressUnit(KIO__OpenUrlJob* self, int unit) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKIOOpenUrlJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_QBaseSetProgressUnit(KIO__OpenUrlJob* self, int unit) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_SetProgressUnit_IsBase(true);
        vkioopenurljob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKIOOpenUrlJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnSetProgressUnit(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_SetProgressUnit_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_SetProgressUnit_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenUrlJob_SetPercent(KIO__OpenUrlJob* self, unsigned long percentage) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKIOOpenUrlJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_QBaseSetPercent(KIO__OpenUrlJob* self, unsigned long percentage) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_SetPercent_IsBase(true);
        vkioopenurljob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKIOOpenUrlJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnSetPercent(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_SetPercent_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_SetPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenUrlJob_EmitResult(KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->emitResult();
    } else {
        ((VirtualKIOOpenUrlJob*)self)->emitResult();
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_QBaseEmitResult(KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_EmitResult_IsBase(true);
        vkioopenurljob->emitResult();
    } else {
        ((VirtualKIOOpenUrlJob*)self)->emitResult();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnEmitResult(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_EmitResult_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_EmitResult_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenUrlJob_EmitPercent(KIO__OpenUrlJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKIOOpenUrlJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_QBaseEmitPercent(KIO__OpenUrlJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_EmitPercent_IsBase(true);
        vkioopenurljob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKIOOpenUrlJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnEmitPercent(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_EmitPercent_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_EmitPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenUrlJob_EmitSpeed(KIO__OpenUrlJob* self, unsigned long speed) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKIOOpenUrlJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_QBaseEmitSpeed(KIO__OpenUrlJob* self, unsigned long speed) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_EmitSpeed_IsBase(true);
        vkioopenurljob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKIOOpenUrlJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnEmitSpeed(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_EmitSpeed_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_EmitSpeed_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenUrlJob_StartElapsedTimer(KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->startElapsedTimer();
    } else {
        ((VirtualKIOOpenUrlJob*)self)->startElapsedTimer();
    }
}

// Base class handler implementation
void KIO__OpenUrlJob_QBaseStartElapsedTimer(KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_StartElapsedTimer_IsBase(true);
        vkioopenurljob->startElapsedTimer();
    } else {
        ((VirtualKIOOpenUrlJob*)self)->startElapsedTimer();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnStartElapsedTimer(KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = dynamic_cast<VirtualKIOOpenUrlJob*>(self);
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_StartElapsedTimer_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_StartElapsedTimer_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIO__OpenUrlJob_Sender(const KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        return vkioopenurljob->sender();
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIO__OpenUrlJob_QBaseSender(const KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_Sender_IsBase(true);
        return vkioopenurljob->sender();
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnSender(const KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_Sender_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__OpenUrlJob_SenderSignalIndex(const KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        return vkioopenurljob->senderSignalIndex();
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIO__OpenUrlJob_QBaseSenderSignalIndex(const KIO__OpenUrlJob* self) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_SenderSignalIndex_IsBase(true);
        return vkioopenurljob->senderSignalIndex();
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnSenderSignalIndex(const KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__OpenUrlJob_Receivers(const KIO__OpenUrlJob* self, const char* signal) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        return vkioopenurljob->receivers(signal);
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIO__OpenUrlJob_QBaseReceivers(const KIO__OpenUrlJob* self, const char* signal) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_Receivers_IsBase(true);
        return vkioopenurljob->receivers(signal);
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnReceivers(const KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_Receivers_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__OpenUrlJob_IsSignalConnected(const KIO__OpenUrlJob* self, const QMetaMethod* signal) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        return vkioopenurljob->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIO__OpenUrlJob_QBaseIsSignalConnected(const KIO__OpenUrlJob* self, const QMetaMethod* signal) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_IsSignalConnected_IsBase(true);
        return vkioopenurljob->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOOpenUrlJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenUrlJob_OnIsSignalConnected(const KIO__OpenUrlJob* self, intptr_t slot) {
    auto* vkioopenurljob = const_cast<VirtualKIOOpenUrlJob*>(dynamic_cast<const VirtualKIOOpenUrlJob*>(self));
    if (vkioopenurljob && vkioopenurljob->isVirtualKIOOpenUrlJob) {
        vkioopenurljob->setKIO__OpenUrlJob_IsSignalConnected_Callback(reinterpret_cast<VirtualKIOOpenUrlJob::KIO__OpenUrlJob_IsSignalConnected_Callback>(slot));
    }
}

void KIO__OpenUrlJob_Delete(KIO__OpenUrlJob* self) {
    delete self;
}
