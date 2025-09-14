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
#include <QByteArray>
#include <cstring>
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
    auto* vkio__deleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkio__deleteortrashjob && vkio__deleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KIO__DeleteOrTrashJob_Tr(const char* s) {
    QString _ret = KIO::DeleteOrTrashJob::tr(s);
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
    auto* vkio__deleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkio__deleteortrashjob && vkio__deleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        self->start();
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->start();
    }
}

void KIO__DeleteOrTrashJob_Started(KIO__DeleteOrTrashJob* self) {
    self->started();
}

void KIO__DeleteOrTrashJob_Connect_Started(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__DeleteOrTrashJob*) = reinterpret_cast<void (*)(KIO__DeleteOrTrashJob*)>(slot);
    KIO::DeleteOrTrashJob::connect(self, &KIO::DeleteOrTrashJob::started, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KIO__DeleteOrTrashJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::DeleteOrTrashJob::tr(s, c);
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
    QString _ret = KIO::DeleteOrTrashJob::tr(s, c, static_cast<int>(n));
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
int KIO__DeleteOrTrashJob_QBaseMetacall(KIO__DeleteOrTrashJob* self, int param1, int param2, void** param3) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_Metacall_IsBase(true);
        return vkiodeleteortrashjob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIO::DeleteOrTrashJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnMetacall(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_Metacall_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_QBaseStart(KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_Start_IsBase(true);
        vkiodeleteortrashjob->start();
    } else {
        self->KIO::DeleteOrTrashJob::start();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnStart(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_Start_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_Start_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__DeleteOrTrashJob_AddSubjob(KIO__DeleteOrTrashJob* self, KJob* job) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        return vkiodeleteortrashjob->addSubjob(job);
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->addSubjob(job);
    }
}

// Base class handler implementation
bool KIO__DeleteOrTrashJob_QBaseAddSubjob(KIO__DeleteOrTrashJob* self, KJob* job) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_AddSubjob_IsBase(true);
        return vkiodeleteortrashjob->addSubjob(job);
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->addSubjob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnAddSubjob(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_AddSubjob_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_AddSubjob_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__DeleteOrTrashJob_RemoveSubjob(KIO__DeleteOrTrashJob* self, KJob* job) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        return vkiodeleteortrashjob->removeSubjob(job);
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->removeSubjob(job);
    }
}

// Base class handler implementation
bool KIO__DeleteOrTrashJob_QBaseRemoveSubjob(KIO__DeleteOrTrashJob* self, KJob* job) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_RemoveSubjob_IsBase(true);
        return vkiodeleteortrashjob->removeSubjob(job);
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->removeSubjob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnRemoveSubjob(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_RemoveSubjob_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_RemoveSubjob_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_SlotInfoMessage(KIO__DeleteOrTrashJob* self, KJob* job, const libqt_string message) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->slotInfoMessage(job, message_QString);
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->slotInfoMessage(job, message_QString);
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_QBaseSlotInfoMessage(KIO__DeleteOrTrashJob* self, KJob* job, const libqt_string message) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_SlotInfoMessage_IsBase(true);
        vkiodeleteortrashjob->slotInfoMessage(job, message_QString);
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->slotInfoMessage(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnSlotInfoMessage(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_SlotInfoMessage_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_SlotInfoMessage_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__DeleteOrTrashJob_DoKill(KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        return vkiodeleteortrashjob->doKill();
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->doKill();
    }
}

// Base class handler implementation
bool KIO__DeleteOrTrashJob_QBaseDoKill(KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_DoKill_IsBase(true);
        return vkiodeleteortrashjob->doKill();
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->doKill();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnDoKill(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_DoKill_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_DoKill_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__DeleteOrTrashJob_DoSuspend(KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        return vkiodeleteortrashjob->doSuspend();
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->doSuspend();
    }
}

// Base class handler implementation
bool KIO__DeleteOrTrashJob_QBaseDoSuspend(KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_DoSuspend_IsBase(true);
        return vkiodeleteortrashjob->doSuspend();
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->doSuspend();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnDoSuspend(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_DoSuspend_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_DoSuspend_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__DeleteOrTrashJob_DoResume(KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        return vkiodeleteortrashjob->doResume();
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->doResume();
    }
}

// Base class handler implementation
bool KIO__DeleteOrTrashJob_QBaseDoResume(KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_DoResume_IsBase(true);
        return vkiodeleteortrashjob->doResume();
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->doResume();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnDoResume(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_DoResume_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_DoResume_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KIO__DeleteOrTrashJob_ErrorString(const KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        QString _ret = vkiodeleteortrashjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIO::DeleteOrTrashJob::errorString();
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
libqt_string KIO__DeleteOrTrashJob_QBaseErrorString(const KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_ErrorString_IsBase(true);
        QString _ret = vkiodeleteortrashjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIO::DeleteOrTrashJob::errorString();
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
void KIO__DeleteOrTrashJob_OnErrorString(const KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_ErrorString_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_ErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__DeleteOrTrashJob_Event(KIO__DeleteOrTrashJob* self, QEvent* event) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        return vkiodeleteortrashjob->event(event);
    } else {
        return self->KIO::DeleteOrTrashJob::event(event);
    }
}

// Base class handler implementation
bool KIO__DeleteOrTrashJob_QBaseEvent(KIO__DeleteOrTrashJob* self, QEvent* event) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_Event_IsBase(true);
        return vkiodeleteortrashjob->event(event);
    } else {
        return self->KIO::DeleteOrTrashJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnEvent(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_Event_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__DeleteOrTrashJob_EventFilter(KIO__DeleteOrTrashJob* self, QObject* watched, QEvent* event) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        return vkiodeleteortrashjob->eventFilter(watched, event);
    } else {
        return self->KIO::DeleteOrTrashJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KIO__DeleteOrTrashJob_QBaseEventFilter(KIO__DeleteOrTrashJob* self, QObject* watched, QEvent* event) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_EventFilter_IsBase(true);
        return vkiodeleteortrashjob->eventFilter(watched, event);
    } else {
        return self->KIO::DeleteOrTrashJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnEventFilter(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_EventFilter_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_TimerEvent(KIO__DeleteOrTrashJob* self, QTimerEvent* event) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->timerEvent(event);
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_QBaseTimerEvent(KIO__DeleteOrTrashJob* self, QTimerEvent* event) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_TimerEvent_IsBase(true);
        vkiodeleteortrashjob->timerEvent(event);
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnTimerEvent(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_TimerEvent_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_ChildEvent(KIO__DeleteOrTrashJob* self, QChildEvent* event) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->childEvent(event);
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_QBaseChildEvent(KIO__DeleteOrTrashJob* self, QChildEvent* event) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_ChildEvent_IsBase(true);
        vkiodeleteortrashjob->childEvent(event);
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnChildEvent(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_ChildEvent_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_CustomEvent(KIO__DeleteOrTrashJob* self, QEvent* event) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->customEvent(event);
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_QBaseCustomEvent(KIO__DeleteOrTrashJob* self, QEvent* event) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_CustomEvent_IsBase(true);
        vkiodeleteortrashjob->customEvent(event);
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnCustomEvent(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_CustomEvent_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_ConnectNotify(KIO__DeleteOrTrashJob* self, const QMetaMethod* signal) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->connectNotify(*signal);
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_QBaseConnectNotify(KIO__DeleteOrTrashJob* self, const QMetaMethod* signal) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_ConnectNotify_IsBase(true);
        vkiodeleteortrashjob->connectNotify(*signal);
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnConnectNotify(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_ConnectNotify_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_DisconnectNotify(KIO__DeleteOrTrashJob* self, const QMetaMethod* signal) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->disconnectNotify(*signal);
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_QBaseDisconnectNotify(KIO__DeleteOrTrashJob* self, const QMetaMethod* signal) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_DisconnectNotify_IsBase(true);
        vkiodeleteortrashjob->disconnectNotify(*signal);
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnDisconnectNotify(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_DisconnectNotify_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__DeleteOrTrashJob_HasSubjobs(const KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        return vkiodeleteortrashjob->hasSubjobs();
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->hasSubjobs();
    }
}

// Base class handler implementation
bool KIO__DeleteOrTrashJob_QBaseHasSubjobs(const KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_HasSubjobs_IsBase(true);
        return vkiodeleteortrashjob->hasSubjobs();
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->hasSubjobs();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnHasSubjobs(const KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_HasSubjobs_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_HasSubjobs_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of KJob* */ KIO__DeleteOrTrashJob_Subjobs(const KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        const QList<KJob*>& _ret = vkiodeleteortrashjob->subjobs();
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
        const QList<KJob*>& _ret = ((VirtualKIODeleteOrTrashJob*)self)->subjobs();
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
libqt_list /* of KJob* */ KIO__DeleteOrTrashJob_QBaseSubjobs(const KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_Subjobs_IsBase(true);
        const QList<KJob*>& _ret = vkiodeleteortrashjob->subjobs();
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
        const QList<KJob*>& _ret = ((VirtualKIODeleteOrTrashJob*)self)->subjobs();
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
void KIO__DeleteOrTrashJob_OnSubjobs(const KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_Subjobs_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_Subjobs_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_ClearSubjobs(KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->clearSubjobs();
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->clearSubjobs();
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_QBaseClearSubjobs(KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_ClearSubjobs_IsBase(true);
        vkiodeleteortrashjob->clearSubjobs();
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->clearSubjobs();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnClearSubjobs(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_ClearSubjobs_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_ClearSubjobs_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_SetCapabilities(KIO__DeleteOrTrashJob* self, int capabilities) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_QBaseSetCapabilities(KIO__DeleteOrTrashJob* self, int capabilities) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_SetCapabilities_IsBase(true);
        vkiodeleteortrashjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnSetCapabilities(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_SetCapabilities_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_SetCapabilities_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__DeleteOrTrashJob_IsFinished(const KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        return vkiodeleteortrashjob->isFinished();
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->isFinished();
    }
}

// Base class handler implementation
bool KIO__DeleteOrTrashJob_QBaseIsFinished(const KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_IsFinished_IsBase(true);
        return vkiodeleteortrashjob->isFinished();
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->isFinished();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnIsFinished(const KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_IsFinished_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_IsFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_SetError(KIO__DeleteOrTrashJob* self, int errorCode) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_QBaseSetError(KIO__DeleteOrTrashJob* self, int errorCode) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_SetError_IsBase(true);
        vkiodeleteortrashjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnSetError(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_SetError_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_SetErrorText(KIO__DeleteOrTrashJob* self, const libqt_string errorText) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->setErrorText(errorText_QString);
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_QBaseSetErrorText(KIO__DeleteOrTrashJob* self, const libqt_string errorText) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_SetErrorText_IsBase(true);
        vkiodeleteortrashjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->setErrorText(errorText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnSetErrorText(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_SetErrorText_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_SetErrorText_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_SetProcessedAmount(KIO__DeleteOrTrashJob* self, int unit, unsigned long long amount) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_QBaseSetProcessedAmount(KIO__DeleteOrTrashJob* self, int unit, unsigned long long amount) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_SetProcessedAmount_IsBase(true);
        vkiodeleteortrashjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnSetProcessedAmount(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_SetProcessedAmount_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_SetProcessedAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_SetTotalAmount(KIO__DeleteOrTrashJob* self, int unit, unsigned long long amount) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_QBaseSetTotalAmount(KIO__DeleteOrTrashJob* self, int unit, unsigned long long amount) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_SetTotalAmount_IsBase(true);
        vkiodeleteortrashjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnSetTotalAmount(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_SetTotalAmount_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_SetTotalAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_SetProgressUnit(KIO__DeleteOrTrashJob* self, int unit) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_QBaseSetProgressUnit(KIO__DeleteOrTrashJob* self, int unit) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_SetProgressUnit_IsBase(true);
        vkiodeleteortrashjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnSetProgressUnit(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_SetProgressUnit_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_SetProgressUnit_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_SetPercent(KIO__DeleteOrTrashJob* self, unsigned long percentage) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_QBaseSetPercent(KIO__DeleteOrTrashJob* self, unsigned long percentage) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_SetPercent_IsBase(true);
        vkiodeleteortrashjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnSetPercent(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_SetPercent_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_SetPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_EmitResult(KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->emitResult();
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->emitResult();
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_QBaseEmitResult(KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_EmitResult_IsBase(true);
        vkiodeleteortrashjob->emitResult();
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->emitResult();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnEmitResult(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_EmitResult_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_EmitResult_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_EmitPercent(KIO__DeleteOrTrashJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_QBaseEmitPercent(KIO__DeleteOrTrashJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_EmitPercent_IsBase(true);
        vkiodeleteortrashjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnEmitPercent(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_EmitPercent_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_EmitPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_EmitSpeed(KIO__DeleteOrTrashJob* self, unsigned long speed) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_QBaseEmitSpeed(KIO__DeleteOrTrashJob* self, unsigned long speed) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_EmitSpeed_IsBase(true);
        vkiodeleteortrashjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnEmitSpeed(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_EmitSpeed_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_EmitSpeed_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DeleteOrTrashJob_StartElapsedTimer(KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->startElapsedTimer();
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->startElapsedTimer();
    }
}

// Base class handler implementation
void KIO__DeleteOrTrashJob_QBaseStartElapsedTimer(KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_StartElapsedTimer_IsBase(true);
        vkiodeleteortrashjob->startElapsedTimer();
    } else {
        ((VirtualKIODeleteOrTrashJob*)self)->startElapsedTimer();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnStartElapsedTimer(KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = dynamic_cast<VirtualKIODeleteOrTrashJob*>(self);
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_StartElapsedTimer_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_StartElapsedTimer_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIO__DeleteOrTrashJob_Sender(const KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        return vkiodeleteortrashjob->sender();
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIO__DeleteOrTrashJob_QBaseSender(const KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_Sender_IsBase(true);
        return vkiodeleteortrashjob->sender();
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnSender(const KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_Sender_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__DeleteOrTrashJob_SenderSignalIndex(const KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        return vkiodeleteortrashjob->senderSignalIndex();
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIO__DeleteOrTrashJob_QBaseSenderSignalIndex(const KIO__DeleteOrTrashJob* self) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_SenderSignalIndex_IsBase(true);
        return vkiodeleteortrashjob->senderSignalIndex();
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnSenderSignalIndex(const KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__DeleteOrTrashJob_Receivers(const KIO__DeleteOrTrashJob* self, const char* signal) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        return vkiodeleteortrashjob->receivers(signal);
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIO__DeleteOrTrashJob_QBaseReceivers(const KIO__DeleteOrTrashJob* self, const char* signal) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_Receivers_IsBase(true);
        return vkiodeleteortrashjob->receivers(signal);
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnReceivers(const KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_Receivers_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__DeleteOrTrashJob_IsSignalConnected(const KIO__DeleteOrTrashJob* self, const QMetaMethod* signal) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        return vkiodeleteortrashjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIO__DeleteOrTrashJob_QBaseIsSignalConnected(const KIO__DeleteOrTrashJob* self, const QMetaMethod* signal) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_IsSignalConnected_IsBase(true);
        return vkiodeleteortrashjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKIODeleteOrTrashJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DeleteOrTrashJob_OnIsSignalConnected(const KIO__DeleteOrTrashJob* self, intptr_t slot) {
    auto* vkiodeleteortrashjob = const_cast<VirtualKIODeleteOrTrashJob*>(dynamic_cast<const VirtualKIODeleteOrTrashJob*>(self));
    if (vkiodeleteortrashjob && vkiodeleteortrashjob->isVirtualKIODeleteOrTrashJob) {
        vkiodeleteortrashjob->setKIO__DeleteOrTrashJob_IsSignalConnected_Callback(reinterpret_cast<VirtualKIODeleteOrTrashJob::KIO__DeleteOrTrashJob_IsSignalConnected_Callback>(slot));
    }
}

void KIO__DeleteOrTrashJob_Delete(KIO__DeleteOrTrashJob* self) {
    delete self;
}
