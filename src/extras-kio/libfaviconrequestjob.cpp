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
#include <QByteArray>
#include <cstring>
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
    auto* vkio__faviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkio__faviconrequestjob && vkio__faviconrequestjob->isVirtualKIOFavIconRequestJob) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KIO__FavIconRequestJob_Tr(const char* s) {
    QString _ret = KIO::FavIconRequestJob::tr(s);
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
    QString _ret = self->iconFile();
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
    auto* vkio__faviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkio__faviconrequestjob && vkio__faviconrequestjob->isVirtualKIOFavIconRequestJob) {
        self->start();
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->start();
    }
}

libqt_string KIO__FavIconRequestJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::FavIconRequestJob::tr(s, c);
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
    QString _ret = KIO::FavIconRequestJob::tr(s, c, static_cast<int>(n));
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
int KIO__FavIconRequestJob_QBaseMetacall(KIO__FavIconRequestJob* self, int param1, int param2, void** param3) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_Metacall_IsBase(true);
        return vkiofaviconrequestjob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIO::FavIconRequestJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnMetacall(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_Metacall_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_QBaseStart(KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_Start_IsBase(true);
        vkiofaviconrequestjob->start();
    } else {
        self->KIO::FavIconRequestJob::start();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnStart(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_Start_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_Start_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__FavIconRequestJob_AddSubjob(KIO__FavIconRequestJob* self, KJob* job) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        return vkiofaviconrequestjob->addSubjob(job);
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->addSubjob(job);
    }
}

// Base class handler implementation
bool KIO__FavIconRequestJob_QBaseAddSubjob(KIO__FavIconRequestJob* self, KJob* job) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_AddSubjob_IsBase(true);
        return vkiofaviconrequestjob->addSubjob(job);
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->addSubjob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnAddSubjob(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_AddSubjob_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_AddSubjob_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__FavIconRequestJob_RemoveSubjob(KIO__FavIconRequestJob* self, KJob* job) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        return vkiofaviconrequestjob->removeSubjob(job);
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->removeSubjob(job);
    }
}

// Base class handler implementation
bool KIO__FavIconRequestJob_QBaseRemoveSubjob(KIO__FavIconRequestJob* self, KJob* job) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_RemoveSubjob_IsBase(true);
        return vkiofaviconrequestjob->removeSubjob(job);
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->removeSubjob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnRemoveSubjob(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_RemoveSubjob_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_RemoveSubjob_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__FavIconRequestJob_SlotInfoMessage(KIO__FavIconRequestJob* self, KJob* job, const libqt_string message) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->slotInfoMessage(job, message_QString);
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->slotInfoMessage(job, message_QString);
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_QBaseSlotInfoMessage(KIO__FavIconRequestJob* self, KJob* job, const libqt_string message) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_SlotInfoMessage_IsBase(true);
        vkiofaviconrequestjob->slotInfoMessage(job, message_QString);
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->slotInfoMessage(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnSlotInfoMessage(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_SlotInfoMessage_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_SlotInfoMessage_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__FavIconRequestJob_DoKill(KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        return vkiofaviconrequestjob->doKill();
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->doKill();
    }
}

// Base class handler implementation
bool KIO__FavIconRequestJob_QBaseDoKill(KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_DoKill_IsBase(true);
        return vkiofaviconrequestjob->doKill();
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->doKill();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnDoKill(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_DoKill_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_DoKill_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__FavIconRequestJob_DoSuspend(KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        return vkiofaviconrequestjob->doSuspend();
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->doSuspend();
    }
}

// Base class handler implementation
bool KIO__FavIconRequestJob_QBaseDoSuspend(KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_DoSuspend_IsBase(true);
        return vkiofaviconrequestjob->doSuspend();
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->doSuspend();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnDoSuspend(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_DoSuspend_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_DoSuspend_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__FavIconRequestJob_DoResume(KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        return vkiofaviconrequestjob->doResume();
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->doResume();
    }
}

// Base class handler implementation
bool KIO__FavIconRequestJob_QBaseDoResume(KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_DoResume_IsBase(true);
        return vkiofaviconrequestjob->doResume();
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->doResume();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnDoResume(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_DoResume_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_DoResume_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KIO__FavIconRequestJob_ErrorString(const KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        QString _ret = vkiofaviconrequestjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIO::FavIconRequestJob::errorString();
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
libqt_string KIO__FavIconRequestJob_QBaseErrorString(const KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_ErrorString_IsBase(true);
        QString _ret = vkiofaviconrequestjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIO::FavIconRequestJob::errorString();
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
void KIO__FavIconRequestJob_OnErrorString(const KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_ErrorString_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_ErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__FavIconRequestJob_Event(KIO__FavIconRequestJob* self, QEvent* event) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        return vkiofaviconrequestjob->event(event);
    } else {
        return self->KIO::FavIconRequestJob::event(event);
    }
}

// Base class handler implementation
bool KIO__FavIconRequestJob_QBaseEvent(KIO__FavIconRequestJob* self, QEvent* event) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_Event_IsBase(true);
        return vkiofaviconrequestjob->event(event);
    } else {
        return self->KIO::FavIconRequestJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnEvent(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_Event_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__FavIconRequestJob_EventFilter(KIO__FavIconRequestJob* self, QObject* watched, QEvent* event) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        return vkiofaviconrequestjob->eventFilter(watched, event);
    } else {
        return self->KIO::FavIconRequestJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KIO__FavIconRequestJob_QBaseEventFilter(KIO__FavIconRequestJob* self, QObject* watched, QEvent* event) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_EventFilter_IsBase(true);
        return vkiofaviconrequestjob->eventFilter(watched, event);
    } else {
        return self->KIO::FavIconRequestJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnEventFilter(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_EventFilter_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__FavIconRequestJob_TimerEvent(KIO__FavIconRequestJob* self, QTimerEvent* event) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->timerEvent(event);
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_QBaseTimerEvent(KIO__FavIconRequestJob* self, QTimerEvent* event) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_TimerEvent_IsBase(true);
        vkiofaviconrequestjob->timerEvent(event);
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnTimerEvent(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_TimerEvent_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__FavIconRequestJob_ChildEvent(KIO__FavIconRequestJob* self, QChildEvent* event) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->childEvent(event);
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_QBaseChildEvent(KIO__FavIconRequestJob* self, QChildEvent* event) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_ChildEvent_IsBase(true);
        vkiofaviconrequestjob->childEvent(event);
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnChildEvent(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_ChildEvent_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__FavIconRequestJob_CustomEvent(KIO__FavIconRequestJob* self, QEvent* event) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->customEvent(event);
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_QBaseCustomEvent(KIO__FavIconRequestJob* self, QEvent* event) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_CustomEvent_IsBase(true);
        vkiofaviconrequestjob->customEvent(event);
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnCustomEvent(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_CustomEvent_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__FavIconRequestJob_ConnectNotify(KIO__FavIconRequestJob* self, const QMetaMethod* signal) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->connectNotify(*signal);
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_QBaseConnectNotify(KIO__FavIconRequestJob* self, const QMetaMethod* signal) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_ConnectNotify_IsBase(true);
        vkiofaviconrequestjob->connectNotify(*signal);
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnConnectNotify(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_ConnectNotify_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__FavIconRequestJob_DisconnectNotify(KIO__FavIconRequestJob* self, const QMetaMethod* signal) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->disconnectNotify(*signal);
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_QBaseDisconnectNotify(KIO__FavIconRequestJob* self, const QMetaMethod* signal) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_DisconnectNotify_IsBase(true);
        vkiofaviconrequestjob->disconnectNotify(*signal);
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnDisconnectNotify(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_DisconnectNotify_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__FavIconRequestJob_HasSubjobs(const KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        return vkiofaviconrequestjob->hasSubjobs();
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->hasSubjobs();
    }
}

// Base class handler implementation
bool KIO__FavIconRequestJob_QBaseHasSubjobs(const KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_HasSubjobs_IsBase(true);
        return vkiofaviconrequestjob->hasSubjobs();
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->hasSubjobs();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnHasSubjobs(const KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_HasSubjobs_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_HasSubjobs_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of KJob* */ KIO__FavIconRequestJob_Subjobs(const KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        const QList<KJob*>& _ret = vkiofaviconrequestjob->subjobs();
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
        const QList<KJob*>& _ret = ((VirtualKIOFavIconRequestJob*)self)->subjobs();
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
libqt_list /* of KJob* */ KIO__FavIconRequestJob_QBaseSubjobs(const KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_Subjobs_IsBase(true);
        const QList<KJob*>& _ret = vkiofaviconrequestjob->subjobs();
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
        const QList<KJob*>& _ret = ((VirtualKIOFavIconRequestJob*)self)->subjobs();
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
void KIO__FavIconRequestJob_OnSubjobs(const KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_Subjobs_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_Subjobs_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__FavIconRequestJob_ClearSubjobs(KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->clearSubjobs();
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->clearSubjobs();
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_QBaseClearSubjobs(KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_ClearSubjobs_IsBase(true);
        vkiofaviconrequestjob->clearSubjobs();
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->clearSubjobs();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnClearSubjobs(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_ClearSubjobs_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_ClearSubjobs_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__FavIconRequestJob_SetCapabilities(KIO__FavIconRequestJob* self, int capabilities) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_QBaseSetCapabilities(KIO__FavIconRequestJob* self, int capabilities) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_SetCapabilities_IsBase(true);
        vkiofaviconrequestjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnSetCapabilities(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_SetCapabilities_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_SetCapabilities_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__FavIconRequestJob_IsFinished(const KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        return vkiofaviconrequestjob->isFinished();
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->isFinished();
    }
}

// Base class handler implementation
bool KIO__FavIconRequestJob_QBaseIsFinished(const KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_IsFinished_IsBase(true);
        return vkiofaviconrequestjob->isFinished();
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->isFinished();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnIsFinished(const KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_IsFinished_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_IsFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__FavIconRequestJob_SetError(KIO__FavIconRequestJob* self, int errorCode) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_QBaseSetError(KIO__FavIconRequestJob* self, int errorCode) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_SetError_IsBase(true);
        vkiofaviconrequestjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnSetError(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_SetError_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__FavIconRequestJob_SetErrorText(KIO__FavIconRequestJob* self, const libqt_string errorText) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->setErrorText(errorText_QString);
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_QBaseSetErrorText(KIO__FavIconRequestJob* self, const libqt_string errorText) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_SetErrorText_IsBase(true);
        vkiofaviconrequestjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->setErrorText(errorText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnSetErrorText(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_SetErrorText_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_SetErrorText_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__FavIconRequestJob_SetProcessedAmount(KIO__FavIconRequestJob* self, int unit, unsigned long long amount) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_QBaseSetProcessedAmount(KIO__FavIconRequestJob* self, int unit, unsigned long long amount) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_SetProcessedAmount_IsBase(true);
        vkiofaviconrequestjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnSetProcessedAmount(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_SetProcessedAmount_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_SetProcessedAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__FavIconRequestJob_SetTotalAmount(KIO__FavIconRequestJob* self, int unit, unsigned long long amount) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_QBaseSetTotalAmount(KIO__FavIconRequestJob* self, int unit, unsigned long long amount) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_SetTotalAmount_IsBase(true);
        vkiofaviconrequestjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnSetTotalAmount(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_SetTotalAmount_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_SetTotalAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__FavIconRequestJob_SetProgressUnit(KIO__FavIconRequestJob* self, int unit) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_QBaseSetProgressUnit(KIO__FavIconRequestJob* self, int unit) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_SetProgressUnit_IsBase(true);
        vkiofaviconrequestjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnSetProgressUnit(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_SetProgressUnit_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_SetProgressUnit_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__FavIconRequestJob_SetPercent(KIO__FavIconRequestJob* self, unsigned long percentage) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_QBaseSetPercent(KIO__FavIconRequestJob* self, unsigned long percentage) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_SetPercent_IsBase(true);
        vkiofaviconrequestjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnSetPercent(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_SetPercent_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_SetPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__FavIconRequestJob_EmitResult(KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->emitResult();
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->emitResult();
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_QBaseEmitResult(KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_EmitResult_IsBase(true);
        vkiofaviconrequestjob->emitResult();
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->emitResult();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnEmitResult(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_EmitResult_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_EmitResult_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__FavIconRequestJob_EmitPercent(KIO__FavIconRequestJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_QBaseEmitPercent(KIO__FavIconRequestJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_EmitPercent_IsBase(true);
        vkiofaviconrequestjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnEmitPercent(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_EmitPercent_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_EmitPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__FavIconRequestJob_EmitSpeed(KIO__FavIconRequestJob* self, unsigned long speed) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_QBaseEmitSpeed(KIO__FavIconRequestJob* self, unsigned long speed) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_EmitSpeed_IsBase(true);
        vkiofaviconrequestjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnEmitSpeed(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_EmitSpeed_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_EmitSpeed_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__FavIconRequestJob_StartElapsedTimer(KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->startElapsedTimer();
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->startElapsedTimer();
    }
}

// Base class handler implementation
void KIO__FavIconRequestJob_QBaseStartElapsedTimer(KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_StartElapsedTimer_IsBase(true);
        vkiofaviconrequestjob->startElapsedTimer();
    } else {
        ((VirtualKIOFavIconRequestJob*)self)->startElapsedTimer();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnStartElapsedTimer(KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = dynamic_cast<VirtualKIOFavIconRequestJob*>(self);
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_StartElapsedTimer_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_StartElapsedTimer_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIO__FavIconRequestJob_Sender(const KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        return vkiofaviconrequestjob->sender();
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIO__FavIconRequestJob_QBaseSender(const KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_Sender_IsBase(true);
        return vkiofaviconrequestjob->sender();
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnSender(const KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_Sender_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__FavIconRequestJob_SenderSignalIndex(const KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        return vkiofaviconrequestjob->senderSignalIndex();
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIO__FavIconRequestJob_QBaseSenderSignalIndex(const KIO__FavIconRequestJob* self) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_SenderSignalIndex_IsBase(true);
        return vkiofaviconrequestjob->senderSignalIndex();
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnSenderSignalIndex(const KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__FavIconRequestJob_Receivers(const KIO__FavIconRequestJob* self, const char* signal) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        return vkiofaviconrequestjob->receivers(signal);
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIO__FavIconRequestJob_QBaseReceivers(const KIO__FavIconRequestJob* self, const char* signal) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_Receivers_IsBase(true);
        return vkiofaviconrequestjob->receivers(signal);
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnReceivers(const KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_Receivers_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__FavIconRequestJob_IsSignalConnected(const KIO__FavIconRequestJob* self, const QMetaMethod* signal) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        return vkiofaviconrequestjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIO__FavIconRequestJob_QBaseIsSignalConnected(const KIO__FavIconRequestJob* self, const QMetaMethod* signal) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_IsSignalConnected_IsBase(true);
        return vkiofaviconrequestjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOFavIconRequestJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FavIconRequestJob_OnIsSignalConnected(const KIO__FavIconRequestJob* self, intptr_t slot) {
    auto* vkiofaviconrequestjob = const_cast<VirtualKIOFavIconRequestJob*>(dynamic_cast<const VirtualKIOFavIconRequestJob*>(self));
    if (vkiofaviconrequestjob && vkiofaviconrequestjob->isVirtualKIOFavIconRequestJob) {
        vkiofaviconrequestjob->setKIO__FavIconRequestJob_IsSignalConnected_Callback(reinterpret_cast<VirtualKIOFavIconRequestJob::KIO__FavIconRequestJob_IsSignalConnected_Callback>(slot));
    }
}

void KIO__FavIconRequestJob_Delete(KIO__FavIconRequestJob* self) {
    delete self;
}
