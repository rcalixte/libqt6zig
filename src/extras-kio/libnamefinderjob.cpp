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
#include <QByteArray>
#include <cstring>
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
    auto* vkio__namefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkio__namefinderjob && vkio__namefinderjob->isVirtualKIONameFinderJob) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKIONameFinderJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KIO__NameFinderJob_Tr(const char* s) {
    QString _ret = KIO::NameFinderJob::tr(s);
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
    auto* vkio__namefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkio__namefinderjob && vkio__namefinderjob->isVirtualKIONameFinderJob) {
        self->start();
    } else {
        ((VirtualKIONameFinderJob*)self)->start();
    }
}

QUrl* KIO__NameFinderJob_FinalUrl(const KIO__NameFinderJob* self) {
    return new QUrl(self->finalUrl());
}

QUrl* KIO__NameFinderJob_BaseUrl(const KIO__NameFinderJob* self) {
    return new QUrl(self->baseUrl());
}

libqt_string KIO__NameFinderJob_FinalName(const KIO__NameFinderJob* self) {
    QString _ret = self->finalName();
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
    QString _ret = KIO::NameFinderJob::tr(s, c);
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
    QString _ret = KIO::NameFinderJob::tr(s, c, static_cast<int>(n));
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
int KIO__NameFinderJob_QBaseMetacall(KIO__NameFinderJob* self, int param1, int param2, void** param3) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_Metacall_IsBase(true);
        return vkionamefinderjob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIO::NameFinderJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnMetacall(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_Metacall_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KIO__NameFinderJob_QBaseStart(KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_Start_IsBase(true);
        vkionamefinderjob->start();
    } else {
        self->KIO::NameFinderJob::start();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnStart(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_Start_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_Start_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__NameFinderJob_AddSubjob(KIO__NameFinderJob* self, KJob* job) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        return vkionamefinderjob->addSubjob(job);
    } else {
        return ((VirtualKIONameFinderJob*)self)->addSubjob(job);
    }
}

// Base class handler implementation
bool KIO__NameFinderJob_QBaseAddSubjob(KIO__NameFinderJob* self, KJob* job) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_AddSubjob_IsBase(true);
        return vkionamefinderjob->addSubjob(job);
    } else {
        return ((VirtualKIONameFinderJob*)self)->addSubjob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnAddSubjob(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_AddSubjob_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_AddSubjob_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__NameFinderJob_RemoveSubjob(KIO__NameFinderJob* self, KJob* job) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        return vkionamefinderjob->removeSubjob(job);
    } else {
        return ((VirtualKIONameFinderJob*)self)->removeSubjob(job);
    }
}

// Base class handler implementation
bool KIO__NameFinderJob_QBaseRemoveSubjob(KIO__NameFinderJob* self, KJob* job) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_RemoveSubjob_IsBase(true);
        return vkionamefinderjob->removeSubjob(job);
    } else {
        return ((VirtualKIONameFinderJob*)self)->removeSubjob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnRemoveSubjob(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_RemoveSubjob_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_RemoveSubjob_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__NameFinderJob_SlotResult(KIO__NameFinderJob* self, KJob* job) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->slotResult(job);
    } else {
        ((VirtualKIONameFinderJob*)self)->slotResult(job);
    }
}

// Base class handler implementation
void KIO__NameFinderJob_QBaseSlotResult(KIO__NameFinderJob* self, KJob* job) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_SlotResult_IsBase(true);
        vkionamefinderjob->slotResult(job);
    } else {
        ((VirtualKIONameFinderJob*)self)->slotResult(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnSlotResult(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_SlotResult_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_SlotResult_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__NameFinderJob_SlotInfoMessage(KIO__NameFinderJob* self, KJob* job, const libqt_string message) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->slotInfoMessage(job, message_QString);
    } else {
        ((VirtualKIONameFinderJob*)self)->slotInfoMessage(job, message_QString);
    }
}

// Base class handler implementation
void KIO__NameFinderJob_QBaseSlotInfoMessage(KIO__NameFinderJob* self, KJob* job, const libqt_string message) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_SlotInfoMessage_IsBase(true);
        vkionamefinderjob->slotInfoMessage(job, message_QString);
    } else {
        ((VirtualKIONameFinderJob*)self)->slotInfoMessage(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnSlotInfoMessage(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_SlotInfoMessage_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_SlotInfoMessage_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__NameFinderJob_DoKill(KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        return vkionamefinderjob->doKill();
    } else {
        return ((VirtualKIONameFinderJob*)self)->doKill();
    }
}

// Base class handler implementation
bool KIO__NameFinderJob_QBaseDoKill(KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_DoKill_IsBase(true);
        return vkionamefinderjob->doKill();
    } else {
        return ((VirtualKIONameFinderJob*)self)->doKill();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnDoKill(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_DoKill_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_DoKill_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__NameFinderJob_DoSuspend(KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        return vkionamefinderjob->doSuspend();
    } else {
        return ((VirtualKIONameFinderJob*)self)->doSuspend();
    }
}

// Base class handler implementation
bool KIO__NameFinderJob_QBaseDoSuspend(KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_DoSuspend_IsBase(true);
        return vkionamefinderjob->doSuspend();
    } else {
        return ((VirtualKIONameFinderJob*)self)->doSuspend();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnDoSuspend(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_DoSuspend_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_DoSuspend_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__NameFinderJob_DoResume(KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        return vkionamefinderjob->doResume();
    } else {
        return ((VirtualKIONameFinderJob*)self)->doResume();
    }
}

// Base class handler implementation
bool KIO__NameFinderJob_QBaseDoResume(KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_DoResume_IsBase(true);
        return vkionamefinderjob->doResume();
    } else {
        return ((VirtualKIONameFinderJob*)self)->doResume();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnDoResume(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_DoResume_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_DoResume_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KIO__NameFinderJob_ErrorString(const KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        QString _ret = vkionamefinderjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIO::NameFinderJob::errorString();
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
libqt_string KIO__NameFinderJob_QBaseErrorString(const KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_ErrorString_IsBase(true);
        QString _ret = vkionamefinderjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIO::NameFinderJob::errorString();
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
void KIO__NameFinderJob_OnErrorString(const KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_ErrorString_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_ErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__NameFinderJob_Event(KIO__NameFinderJob* self, QEvent* event) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        return vkionamefinderjob->event(event);
    } else {
        return self->KIO::NameFinderJob::event(event);
    }
}

// Base class handler implementation
bool KIO__NameFinderJob_QBaseEvent(KIO__NameFinderJob* self, QEvent* event) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_Event_IsBase(true);
        return vkionamefinderjob->event(event);
    } else {
        return self->KIO::NameFinderJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnEvent(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_Event_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__NameFinderJob_EventFilter(KIO__NameFinderJob* self, QObject* watched, QEvent* event) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        return vkionamefinderjob->eventFilter(watched, event);
    } else {
        return self->KIO::NameFinderJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KIO__NameFinderJob_QBaseEventFilter(KIO__NameFinderJob* self, QObject* watched, QEvent* event) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_EventFilter_IsBase(true);
        return vkionamefinderjob->eventFilter(watched, event);
    } else {
        return self->KIO::NameFinderJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnEventFilter(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_EventFilter_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__NameFinderJob_TimerEvent(KIO__NameFinderJob* self, QTimerEvent* event) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->timerEvent(event);
    } else {
        ((VirtualKIONameFinderJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KIO__NameFinderJob_QBaseTimerEvent(KIO__NameFinderJob* self, QTimerEvent* event) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_TimerEvent_IsBase(true);
        vkionamefinderjob->timerEvent(event);
    } else {
        ((VirtualKIONameFinderJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnTimerEvent(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_TimerEvent_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__NameFinderJob_ChildEvent(KIO__NameFinderJob* self, QChildEvent* event) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->childEvent(event);
    } else {
        ((VirtualKIONameFinderJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIO__NameFinderJob_QBaseChildEvent(KIO__NameFinderJob* self, QChildEvent* event) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_ChildEvent_IsBase(true);
        vkionamefinderjob->childEvent(event);
    } else {
        ((VirtualKIONameFinderJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnChildEvent(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_ChildEvent_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__NameFinderJob_CustomEvent(KIO__NameFinderJob* self, QEvent* event) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->customEvent(event);
    } else {
        ((VirtualKIONameFinderJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIO__NameFinderJob_QBaseCustomEvent(KIO__NameFinderJob* self, QEvent* event) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_CustomEvent_IsBase(true);
        vkionamefinderjob->customEvent(event);
    } else {
        ((VirtualKIONameFinderJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnCustomEvent(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_CustomEvent_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__NameFinderJob_ConnectNotify(KIO__NameFinderJob* self, const QMetaMethod* signal) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->connectNotify(*signal);
    } else {
        ((VirtualKIONameFinderJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__NameFinderJob_QBaseConnectNotify(KIO__NameFinderJob* self, const QMetaMethod* signal) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_ConnectNotify_IsBase(true);
        vkionamefinderjob->connectNotify(*signal);
    } else {
        ((VirtualKIONameFinderJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnConnectNotify(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_ConnectNotify_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__NameFinderJob_DisconnectNotify(KIO__NameFinderJob* self, const QMetaMethod* signal) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->disconnectNotify(*signal);
    } else {
        ((VirtualKIONameFinderJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__NameFinderJob_QBaseDisconnectNotify(KIO__NameFinderJob* self, const QMetaMethod* signal) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_DisconnectNotify_IsBase(true);
        vkionamefinderjob->disconnectNotify(*signal);
    } else {
        ((VirtualKIONameFinderJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnDisconnectNotify(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_DisconnectNotify_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__NameFinderJob_HasSubjobs(const KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        return vkionamefinderjob->hasSubjobs();
    } else {
        return ((VirtualKIONameFinderJob*)self)->hasSubjobs();
    }
}

// Base class handler implementation
bool KIO__NameFinderJob_QBaseHasSubjobs(const KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_HasSubjobs_IsBase(true);
        return vkionamefinderjob->hasSubjobs();
    } else {
        return ((VirtualKIONameFinderJob*)self)->hasSubjobs();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnHasSubjobs(const KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_HasSubjobs_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_HasSubjobs_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of KJob* */ KIO__NameFinderJob_Subjobs(const KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        const QList<KJob*>& _ret = vkionamefinderjob->subjobs();
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
        const QList<KJob*>& _ret = ((VirtualKIONameFinderJob*)self)->subjobs();
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
libqt_list /* of KJob* */ KIO__NameFinderJob_QBaseSubjobs(const KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_Subjobs_IsBase(true);
        const QList<KJob*>& _ret = vkionamefinderjob->subjobs();
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
        const QList<KJob*>& _ret = ((VirtualKIONameFinderJob*)self)->subjobs();
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
void KIO__NameFinderJob_OnSubjobs(const KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_Subjobs_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_Subjobs_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__NameFinderJob_ClearSubjobs(KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->clearSubjobs();
    } else {
        ((VirtualKIONameFinderJob*)self)->clearSubjobs();
    }
}

// Base class handler implementation
void KIO__NameFinderJob_QBaseClearSubjobs(KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_ClearSubjobs_IsBase(true);
        vkionamefinderjob->clearSubjobs();
    } else {
        ((VirtualKIONameFinderJob*)self)->clearSubjobs();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnClearSubjobs(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_ClearSubjobs_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_ClearSubjobs_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__NameFinderJob_SetCapabilities(KIO__NameFinderJob* self, int capabilities) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKIONameFinderJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Base class handler implementation
void KIO__NameFinderJob_QBaseSetCapabilities(KIO__NameFinderJob* self, int capabilities) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_SetCapabilities_IsBase(true);
        vkionamefinderjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKIONameFinderJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnSetCapabilities(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_SetCapabilities_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_SetCapabilities_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__NameFinderJob_IsFinished(const KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        return vkionamefinderjob->isFinished();
    } else {
        return ((VirtualKIONameFinderJob*)self)->isFinished();
    }
}

// Base class handler implementation
bool KIO__NameFinderJob_QBaseIsFinished(const KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_IsFinished_IsBase(true);
        return vkionamefinderjob->isFinished();
    } else {
        return ((VirtualKIONameFinderJob*)self)->isFinished();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnIsFinished(const KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_IsFinished_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_IsFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__NameFinderJob_SetError(KIO__NameFinderJob* self, int errorCode) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKIONameFinderJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Base class handler implementation
void KIO__NameFinderJob_QBaseSetError(KIO__NameFinderJob* self, int errorCode) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_SetError_IsBase(true);
        vkionamefinderjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKIONameFinderJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnSetError(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_SetError_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__NameFinderJob_SetErrorText(KIO__NameFinderJob* self, const libqt_string errorText) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKIONameFinderJob*)self)->setErrorText(errorText_QString);
    }
}

// Base class handler implementation
void KIO__NameFinderJob_QBaseSetErrorText(KIO__NameFinderJob* self, const libqt_string errorText) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_SetErrorText_IsBase(true);
        vkionamefinderjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKIONameFinderJob*)self)->setErrorText(errorText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnSetErrorText(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_SetErrorText_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_SetErrorText_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__NameFinderJob_SetProcessedAmount(KIO__NameFinderJob* self, int unit, unsigned long long amount) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIONameFinderJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KIO__NameFinderJob_QBaseSetProcessedAmount(KIO__NameFinderJob* self, int unit, unsigned long long amount) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_SetProcessedAmount_IsBase(true);
        vkionamefinderjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIONameFinderJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnSetProcessedAmount(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_SetProcessedAmount_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_SetProcessedAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__NameFinderJob_SetTotalAmount(KIO__NameFinderJob* self, int unit, unsigned long long amount) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIONameFinderJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KIO__NameFinderJob_QBaseSetTotalAmount(KIO__NameFinderJob* self, int unit, unsigned long long amount) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_SetTotalAmount_IsBase(true);
        vkionamefinderjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIONameFinderJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnSetTotalAmount(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_SetTotalAmount_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_SetTotalAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__NameFinderJob_SetProgressUnit(KIO__NameFinderJob* self, int unit) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKIONameFinderJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Base class handler implementation
void KIO__NameFinderJob_QBaseSetProgressUnit(KIO__NameFinderJob* self, int unit) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_SetProgressUnit_IsBase(true);
        vkionamefinderjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKIONameFinderJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnSetProgressUnit(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_SetProgressUnit_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_SetProgressUnit_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__NameFinderJob_SetPercent(KIO__NameFinderJob* self, unsigned long percentage) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKIONameFinderJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Base class handler implementation
void KIO__NameFinderJob_QBaseSetPercent(KIO__NameFinderJob* self, unsigned long percentage) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_SetPercent_IsBase(true);
        vkionamefinderjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKIONameFinderJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnSetPercent(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_SetPercent_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_SetPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__NameFinderJob_EmitResult(KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->emitResult();
    } else {
        ((VirtualKIONameFinderJob*)self)->emitResult();
    }
}

// Base class handler implementation
void KIO__NameFinderJob_QBaseEmitResult(KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_EmitResult_IsBase(true);
        vkionamefinderjob->emitResult();
    } else {
        ((VirtualKIONameFinderJob*)self)->emitResult();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnEmitResult(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_EmitResult_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_EmitResult_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__NameFinderJob_EmitPercent(KIO__NameFinderJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKIONameFinderJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Base class handler implementation
void KIO__NameFinderJob_QBaseEmitPercent(KIO__NameFinderJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_EmitPercent_IsBase(true);
        vkionamefinderjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKIONameFinderJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnEmitPercent(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_EmitPercent_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_EmitPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__NameFinderJob_EmitSpeed(KIO__NameFinderJob* self, unsigned long speed) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKIONameFinderJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Base class handler implementation
void KIO__NameFinderJob_QBaseEmitSpeed(KIO__NameFinderJob* self, unsigned long speed) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_EmitSpeed_IsBase(true);
        vkionamefinderjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKIONameFinderJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnEmitSpeed(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_EmitSpeed_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_EmitSpeed_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__NameFinderJob_StartElapsedTimer(KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->startElapsedTimer();
    } else {
        ((VirtualKIONameFinderJob*)self)->startElapsedTimer();
    }
}

// Base class handler implementation
void KIO__NameFinderJob_QBaseStartElapsedTimer(KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_StartElapsedTimer_IsBase(true);
        vkionamefinderjob->startElapsedTimer();
    } else {
        ((VirtualKIONameFinderJob*)self)->startElapsedTimer();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnStartElapsedTimer(KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = dynamic_cast<VirtualKIONameFinderJob*>(self);
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_StartElapsedTimer_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_StartElapsedTimer_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIO__NameFinderJob_Sender(const KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        return vkionamefinderjob->sender();
    } else {
        return ((VirtualKIONameFinderJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIO__NameFinderJob_QBaseSender(const KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_Sender_IsBase(true);
        return vkionamefinderjob->sender();
    } else {
        return ((VirtualKIONameFinderJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnSender(const KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_Sender_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__NameFinderJob_SenderSignalIndex(const KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        return vkionamefinderjob->senderSignalIndex();
    } else {
        return ((VirtualKIONameFinderJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIO__NameFinderJob_QBaseSenderSignalIndex(const KIO__NameFinderJob* self) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_SenderSignalIndex_IsBase(true);
        return vkionamefinderjob->senderSignalIndex();
    } else {
        return ((VirtualKIONameFinderJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnSenderSignalIndex(const KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__NameFinderJob_Receivers(const KIO__NameFinderJob* self, const char* signal) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        return vkionamefinderjob->receivers(signal);
    } else {
        return ((VirtualKIONameFinderJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIO__NameFinderJob_QBaseReceivers(const KIO__NameFinderJob* self, const char* signal) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_Receivers_IsBase(true);
        return vkionamefinderjob->receivers(signal);
    } else {
        return ((VirtualKIONameFinderJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnReceivers(const KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_Receivers_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__NameFinderJob_IsSignalConnected(const KIO__NameFinderJob* self, const QMetaMethod* signal) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        return vkionamefinderjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKIONameFinderJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIO__NameFinderJob_QBaseIsSignalConnected(const KIO__NameFinderJob* self, const QMetaMethod* signal) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_IsSignalConnected_IsBase(true);
        return vkionamefinderjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKIONameFinderJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__NameFinderJob_OnIsSignalConnected(const KIO__NameFinderJob* self, intptr_t slot) {
    auto* vkionamefinderjob = const_cast<VirtualKIONameFinderJob*>(dynamic_cast<const VirtualKIONameFinderJob*>(self));
    if (vkionamefinderjob && vkionamefinderjob->isVirtualKIONameFinderJob) {
        vkionamefinderjob->setKIO__NameFinderJob_IsSignalConnected_Callback(reinterpret_cast<VirtualKIONameFinderJob::KIO__NameFinderJob_IsSignalConnected_Callback>(slot));
    }
}

void KIO__NameFinderJob_Delete(KIO__NameFinderJob* self) {
    delete self;
}
