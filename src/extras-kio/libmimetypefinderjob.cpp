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
#include <QByteArray>
#include <cstring>
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
    auto* vkio__mimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkio__mimetypefinderjob && vkio__mimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KIO__MimeTypeFinderJob_Tr(const char* s) {
    QString _ret = KIO::MimeTypeFinderJob::tr(s);
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
    QString _ret = self->suggestedFileName();
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
    auto* vkio__mimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkio__mimetypefinderjob && vkio__mimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        self->start();
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->start();
    }
}

libqt_string KIO__MimeTypeFinderJob_MimeType(const KIO__MimeTypeFinderJob* self) {
    QString _ret = self->mimeType();
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
    if (vkio__mimetypefinderjob && vkio__mimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        return vkio__mimetypefinderjob->doKill();
    }
    return {};
}

void KIO__MimeTypeFinderJob_SlotResult(KIO__MimeTypeFinderJob* self, KJob* job) {
    auto* vkio__mimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkio__mimetypefinderjob && vkio__mimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkio__mimetypefinderjob->slotResult(job);
    }
}

libqt_string KIO__MimeTypeFinderJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::MimeTypeFinderJob::tr(s, c);
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
    QString _ret = KIO::MimeTypeFinderJob::tr(s, c, static_cast<int>(n));
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
int KIO__MimeTypeFinderJob_QBaseMetacall(KIO__MimeTypeFinderJob* self, int param1, int param2, void** param3) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_Metacall_IsBase(true);
        return vkiomimetypefinderjob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIO::MimeTypeFinderJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnMetacall(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_Metacall_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_QBaseStart(KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_Start_IsBase(true);
        vkiomimetypefinderjob->start();
    } else {
        self->KIO::MimeTypeFinderJob::start();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnStart(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_Start_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_Start_Callback>(slot));
    }
}

// Base class handler implementation
bool KIO__MimeTypeFinderJob_QBaseDoKill(KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_DoKill_IsBase(true);
        return vkiomimetypefinderjob->doKill();
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->doKill();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnDoKill(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_DoKill_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_DoKill_Callback>(slot));
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_QBaseSlotResult(KIO__MimeTypeFinderJob* self, KJob* job) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_SlotResult_IsBase(true);
        vkiomimetypefinderjob->slotResult(job);
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->slotResult(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnSlotResult(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_SlotResult_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_SlotResult_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__MimeTypeFinderJob_AddSubjob(KIO__MimeTypeFinderJob* self, KJob* job) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        return vkiomimetypefinderjob->addSubjob(job);
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->addSubjob(job);
    }
}

// Base class handler implementation
bool KIO__MimeTypeFinderJob_QBaseAddSubjob(KIO__MimeTypeFinderJob* self, KJob* job) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_AddSubjob_IsBase(true);
        return vkiomimetypefinderjob->addSubjob(job);
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->addSubjob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnAddSubjob(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_AddSubjob_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_AddSubjob_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__MimeTypeFinderJob_RemoveSubjob(KIO__MimeTypeFinderJob* self, KJob* job) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        return vkiomimetypefinderjob->removeSubjob(job);
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->removeSubjob(job);
    }
}

// Base class handler implementation
bool KIO__MimeTypeFinderJob_QBaseRemoveSubjob(KIO__MimeTypeFinderJob* self, KJob* job) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_RemoveSubjob_IsBase(true);
        return vkiomimetypefinderjob->removeSubjob(job);
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->removeSubjob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnRemoveSubjob(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_RemoveSubjob_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_RemoveSubjob_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_SlotInfoMessage(KIO__MimeTypeFinderJob* self, KJob* job, const libqt_string message) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->slotInfoMessage(job, message_QString);
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->slotInfoMessage(job, message_QString);
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_QBaseSlotInfoMessage(KIO__MimeTypeFinderJob* self, KJob* job, const libqt_string message) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_SlotInfoMessage_IsBase(true);
        vkiomimetypefinderjob->slotInfoMessage(job, message_QString);
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->slotInfoMessage(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnSlotInfoMessage(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_SlotInfoMessage_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_SlotInfoMessage_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__MimeTypeFinderJob_DoSuspend(KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        return vkiomimetypefinderjob->doSuspend();
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->doSuspend();
    }
}

// Base class handler implementation
bool KIO__MimeTypeFinderJob_QBaseDoSuspend(KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_DoSuspend_IsBase(true);
        return vkiomimetypefinderjob->doSuspend();
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->doSuspend();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnDoSuspend(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_DoSuspend_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_DoSuspend_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__MimeTypeFinderJob_DoResume(KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        return vkiomimetypefinderjob->doResume();
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->doResume();
    }
}

// Base class handler implementation
bool KIO__MimeTypeFinderJob_QBaseDoResume(KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_DoResume_IsBase(true);
        return vkiomimetypefinderjob->doResume();
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->doResume();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnDoResume(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_DoResume_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_DoResume_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KIO__MimeTypeFinderJob_ErrorString(const KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        QString _ret = vkiomimetypefinderjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIO::MimeTypeFinderJob::errorString();
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
libqt_string KIO__MimeTypeFinderJob_QBaseErrorString(const KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_ErrorString_IsBase(true);
        QString _ret = vkiomimetypefinderjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIO::MimeTypeFinderJob::errorString();
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
void KIO__MimeTypeFinderJob_OnErrorString(const KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_ErrorString_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_ErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__MimeTypeFinderJob_Event(KIO__MimeTypeFinderJob* self, QEvent* event) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        return vkiomimetypefinderjob->event(event);
    } else {
        return self->KIO::MimeTypeFinderJob::event(event);
    }
}

// Base class handler implementation
bool KIO__MimeTypeFinderJob_QBaseEvent(KIO__MimeTypeFinderJob* self, QEvent* event) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_Event_IsBase(true);
        return vkiomimetypefinderjob->event(event);
    } else {
        return self->KIO::MimeTypeFinderJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnEvent(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_Event_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__MimeTypeFinderJob_EventFilter(KIO__MimeTypeFinderJob* self, QObject* watched, QEvent* event) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        return vkiomimetypefinderjob->eventFilter(watched, event);
    } else {
        return self->KIO::MimeTypeFinderJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KIO__MimeTypeFinderJob_QBaseEventFilter(KIO__MimeTypeFinderJob* self, QObject* watched, QEvent* event) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_EventFilter_IsBase(true);
        return vkiomimetypefinderjob->eventFilter(watched, event);
    } else {
        return self->KIO::MimeTypeFinderJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnEventFilter(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_EventFilter_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_TimerEvent(KIO__MimeTypeFinderJob* self, QTimerEvent* event) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->timerEvent(event);
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_QBaseTimerEvent(KIO__MimeTypeFinderJob* self, QTimerEvent* event) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_TimerEvent_IsBase(true);
        vkiomimetypefinderjob->timerEvent(event);
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnTimerEvent(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_TimerEvent_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_ChildEvent(KIO__MimeTypeFinderJob* self, QChildEvent* event) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->childEvent(event);
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_QBaseChildEvent(KIO__MimeTypeFinderJob* self, QChildEvent* event) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_ChildEvent_IsBase(true);
        vkiomimetypefinderjob->childEvent(event);
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnChildEvent(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_ChildEvent_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_CustomEvent(KIO__MimeTypeFinderJob* self, QEvent* event) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->customEvent(event);
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_QBaseCustomEvent(KIO__MimeTypeFinderJob* self, QEvent* event) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_CustomEvent_IsBase(true);
        vkiomimetypefinderjob->customEvent(event);
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnCustomEvent(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_CustomEvent_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_ConnectNotify(KIO__MimeTypeFinderJob* self, const QMetaMethod* signal) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->connectNotify(*signal);
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_QBaseConnectNotify(KIO__MimeTypeFinderJob* self, const QMetaMethod* signal) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_ConnectNotify_IsBase(true);
        vkiomimetypefinderjob->connectNotify(*signal);
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnConnectNotify(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_ConnectNotify_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_DisconnectNotify(KIO__MimeTypeFinderJob* self, const QMetaMethod* signal) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->disconnectNotify(*signal);
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_QBaseDisconnectNotify(KIO__MimeTypeFinderJob* self, const QMetaMethod* signal) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_DisconnectNotify_IsBase(true);
        vkiomimetypefinderjob->disconnectNotify(*signal);
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnDisconnectNotify(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_DisconnectNotify_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__MimeTypeFinderJob_HasSubjobs(const KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        return vkiomimetypefinderjob->hasSubjobs();
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->hasSubjobs();
    }
}

// Base class handler implementation
bool KIO__MimeTypeFinderJob_QBaseHasSubjobs(const KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_HasSubjobs_IsBase(true);
        return vkiomimetypefinderjob->hasSubjobs();
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->hasSubjobs();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnHasSubjobs(const KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_HasSubjobs_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_HasSubjobs_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of KJob* */ KIO__MimeTypeFinderJob_Subjobs(const KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        const QList<KJob*>& _ret = vkiomimetypefinderjob->subjobs();
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
        const QList<KJob*>& _ret = ((VirtualKIOMimeTypeFinderJob*)self)->subjobs();
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
libqt_list /* of KJob* */ KIO__MimeTypeFinderJob_QBaseSubjobs(const KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_Subjobs_IsBase(true);
        const QList<KJob*>& _ret = vkiomimetypefinderjob->subjobs();
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
        const QList<KJob*>& _ret = ((VirtualKIOMimeTypeFinderJob*)self)->subjobs();
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
void KIO__MimeTypeFinderJob_OnSubjobs(const KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_Subjobs_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_Subjobs_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_ClearSubjobs(KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->clearSubjobs();
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->clearSubjobs();
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_QBaseClearSubjobs(KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_ClearSubjobs_IsBase(true);
        vkiomimetypefinderjob->clearSubjobs();
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->clearSubjobs();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnClearSubjobs(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_ClearSubjobs_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_ClearSubjobs_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_SetCapabilities(KIO__MimeTypeFinderJob* self, int capabilities) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_QBaseSetCapabilities(KIO__MimeTypeFinderJob* self, int capabilities) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_SetCapabilities_IsBase(true);
        vkiomimetypefinderjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnSetCapabilities(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_SetCapabilities_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_SetCapabilities_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__MimeTypeFinderJob_IsFinished(const KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        return vkiomimetypefinderjob->isFinished();
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->isFinished();
    }
}

// Base class handler implementation
bool KIO__MimeTypeFinderJob_QBaseIsFinished(const KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_IsFinished_IsBase(true);
        return vkiomimetypefinderjob->isFinished();
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->isFinished();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnIsFinished(const KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_IsFinished_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_IsFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_SetError(KIO__MimeTypeFinderJob* self, int errorCode) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_QBaseSetError(KIO__MimeTypeFinderJob* self, int errorCode) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_SetError_IsBase(true);
        vkiomimetypefinderjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnSetError(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_SetError_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_SetErrorText(KIO__MimeTypeFinderJob* self, const libqt_string errorText) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->setErrorText(errorText_QString);
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_QBaseSetErrorText(KIO__MimeTypeFinderJob* self, const libqt_string errorText) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_SetErrorText_IsBase(true);
        vkiomimetypefinderjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->setErrorText(errorText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnSetErrorText(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_SetErrorText_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_SetErrorText_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_SetProcessedAmount(KIO__MimeTypeFinderJob* self, int unit, unsigned long long amount) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_QBaseSetProcessedAmount(KIO__MimeTypeFinderJob* self, int unit, unsigned long long amount) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_SetProcessedAmount_IsBase(true);
        vkiomimetypefinderjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnSetProcessedAmount(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_SetProcessedAmount_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_SetProcessedAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_SetTotalAmount(KIO__MimeTypeFinderJob* self, int unit, unsigned long long amount) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_QBaseSetTotalAmount(KIO__MimeTypeFinderJob* self, int unit, unsigned long long amount) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_SetTotalAmount_IsBase(true);
        vkiomimetypefinderjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnSetTotalAmount(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_SetTotalAmount_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_SetTotalAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_SetProgressUnit(KIO__MimeTypeFinderJob* self, int unit) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_QBaseSetProgressUnit(KIO__MimeTypeFinderJob* self, int unit) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_SetProgressUnit_IsBase(true);
        vkiomimetypefinderjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnSetProgressUnit(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_SetProgressUnit_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_SetProgressUnit_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_SetPercent(KIO__MimeTypeFinderJob* self, unsigned long percentage) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_QBaseSetPercent(KIO__MimeTypeFinderJob* self, unsigned long percentage) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_SetPercent_IsBase(true);
        vkiomimetypefinderjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnSetPercent(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_SetPercent_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_SetPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_EmitResult(KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->emitResult();
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->emitResult();
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_QBaseEmitResult(KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_EmitResult_IsBase(true);
        vkiomimetypefinderjob->emitResult();
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->emitResult();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnEmitResult(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_EmitResult_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_EmitResult_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_EmitPercent(KIO__MimeTypeFinderJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_QBaseEmitPercent(KIO__MimeTypeFinderJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_EmitPercent_IsBase(true);
        vkiomimetypefinderjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnEmitPercent(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_EmitPercent_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_EmitPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_EmitSpeed(KIO__MimeTypeFinderJob* self, unsigned long speed) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_QBaseEmitSpeed(KIO__MimeTypeFinderJob* self, unsigned long speed) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_EmitSpeed_IsBase(true);
        vkiomimetypefinderjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnEmitSpeed(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_EmitSpeed_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_EmitSpeed_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__MimeTypeFinderJob_StartElapsedTimer(KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->startElapsedTimer();
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->startElapsedTimer();
    }
}

// Base class handler implementation
void KIO__MimeTypeFinderJob_QBaseStartElapsedTimer(KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_StartElapsedTimer_IsBase(true);
        vkiomimetypefinderjob->startElapsedTimer();
    } else {
        ((VirtualKIOMimeTypeFinderJob*)self)->startElapsedTimer();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnStartElapsedTimer(KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = dynamic_cast<VirtualKIOMimeTypeFinderJob*>(self);
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_StartElapsedTimer_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_StartElapsedTimer_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIO__MimeTypeFinderJob_Sender(const KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        return vkiomimetypefinderjob->sender();
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIO__MimeTypeFinderJob_QBaseSender(const KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_Sender_IsBase(true);
        return vkiomimetypefinderjob->sender();
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnSender(const KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_Sender_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__MimeTypeFinderJob_SenderSignalIndex(const KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        return vkiomimetypefinderjob->senderSignalIndex();
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIO__MimeTypeFinderJob_QBaseSenderSignalIndex(const KIO__MimeTypeFinderJob* self) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_SenderSignalIndex_IsBase(true);
        return vkiomimetypefinderjob->senderSignalIndex();
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnSenderSignalIndex(const KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__MimeTypeFinderJob_Receivers(const KIO__MimeTypeFinderJob* self, const char* signal) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        return vkiomimetypefinderjob->receivers(signal);
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIO__MimeTypeFinderJob_QBaseReceivers(const KIO__MimeTypeFinderJob* self, const char* signal) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_Receivers_IsBase(true);
        return vkiomimetypefinderjob->receivers(signal);
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnReceivers(const KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_Receivers_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__MimeTypeFinderJob_IsSignalConnected(const KIO__MimeTypeFinderJob* self, const QMetaMethod* signal) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        return vkiomimetypefinderjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIO__MimeTypeFinderJob_QBaseIsSignalConnected(const KIO__MimeTypeFinderJob* self, const QMetaMethod* signal) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_IsSignalConnected_IsBase(true);
        return vkiomimetypefinderjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOMimeTypeFinderJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__MimeTypeFinderJob_OnIsSignalConnected(const KIO__MimeTypeFinderJob* self, intptr_t slot) {
    auto* vkiomimetypefinderjob = const_cast<VirtualKIOMimeTypeFinderJob*>(dynamic_cast<const VirtualKIOMimeTypeFinderJob*>(self));
    if (vkiomimetypefinderjob && vkiomimetypefinderjob->isVirtualKIOMimeTypeFinderJob) {
        vkiomimetypefinderjob->setKIO__MimeTypeFinderJob_IsSignalConnected_Callback(reinterpret_cast<VirtualKIOMimeTypeFinderJob::KIO__MimeTypeFinderJob_IsSignalConnected_Callback>(slot));
    }
}

void KIO__MimeTypeFinderJob_Delete(KIO__MimeTypeFinderJob* self) {
    delete self;
}
