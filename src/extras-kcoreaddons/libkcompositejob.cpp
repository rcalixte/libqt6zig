#include <KCompositeJob>
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
#include <kcompositejob.h>
#include "libkcompositejob.h"
#include "libkcompositejob.hxx"

KCompositeJob* KCompositeJob_new() {
    return new VirtualKCompositeJob();
}

KCompositeJob* KCompositeJob_new2(QObject* parent) {
    return new VirtualKCompositeJob(parent);
}

QMetaObject* KCompositeJob_MetaObject(const KCompositeJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KCompositeJob_Metacast(KCompositeJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KCompositeJob_Metacall(KCompositeJob* self, int param1, int param2, void** param3) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKCompositeJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KCompositeJob_OnMetacall(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_Metacall_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KCompositeJob_QBaseMetacall(KCompositeJob* self, int param1, int param2, void** param3) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_Metacall_IsBase(true);
        return vkcompositejob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKCompositeJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KCompositeJob_Tr(const char* s) {
    QString _ret = KCompositeJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KCompositeJob_AddSubjob(KCompositeJob* self, KJob* job) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        return vkcompositejob->addSubjob(job);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void KCompositeJob_OnAddSubjob(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_AddSubjob_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_AddSubjob_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool KCompositeJob_QBaseAddSubjob(KCompositeJob* self, KJob* job) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_AddSubjob_IsBase(true);
        return vkcompositejob->addSubjob(job);
    }
    return {};
}

bool KCompositeJob_RemoveSubjob(KCompositeJob* self, KJob* job) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        return vkcompositejob->removeSubjob(job);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void KCompositeJob_OnRemoveSubjob(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_RemoveSubjob_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_RemoveSubjob_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool KCompositeJob_QBaseRemoveSubjob(KCompositeJob* self, KJob* job) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_RemoveSubjob_IsBase(true);
        return vkcompositejob->removeSubjob(job);
    }
    return {};
}

void KCompositeJob_SlotResult(KCompositeJob* self, KJob* job) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->slotResult(job);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KCompositeJob_OnSlotResult(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_SlotResult_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_SlotResult_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KCompositeJob_QBaseSlotResult(KCompositeJob* self, KJob* job) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_SlotResult_IsBase(true);
        vkcompositejob->slotResult(job);
    }
}

void KCompositeJob_SlotInfoMessage(KCompositeJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->slotInfoMessage(job, message_QString);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KCompositeJob_OnSlotInfoMessage(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_SlotInfoMessage_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_SlotInfoMessage_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KCompositeJob_QBaseSlotInfoMessage(KCompositeJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_SlotInfoMessage_IsBase(true);
        vkcompositejob->slotInfoMessage(job, message_QString);
    }
}

libqt_string KCompositeJob_Tr2(const char* s, const char* c) {
    QString _ret = KCompositeJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCompositeJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KCompositeJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void KCompositeJob_Start(KCompositeJob* self) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->start();
    } else {
        ((VirtualKCompositeJob*)self)->start();
    }
}

// Base class handler implementation
void KCompositeJob_QBaseStart(KCompositeJob* self) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_Start_IsBase(true);
        vkcompositejob->start();
    } else {
        ((VirtualKCompositeJob*)self)->start();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnStart(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_Start_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_Start_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompositeJob_DoKill(KCompositeJob* self) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        return vkcompositejob->doKill();
    } else {
        return ((VirtualKCompositeJob*)self)->doKill();
    }
}

// Base class handler implementation
bool KCompositeJob_QBaseDoKill(KCompositeJob* self) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_DoKill_IsBase(true);
        return vkcompositejob->doKill();
    } else {
        return ((VirtualKCompositeJob*)self)->doKill();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnDoKill(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_DoKill_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_DoKill_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompositeJob_DoSuspend(KCompositeJob* self) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        return vkcompositejob->doSuspend();
    } else {
        return ((VirtualKCompositeJob*)self)->doSuspend();
    }
}

// Base class handler implementation
bool KCompositeJob_QBaseDoSuspend(KCompositeJob* self) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_DoSuspend_IsBase(true);
        return vkcompositejob->doSuspend();
    } else {
        return ((VirtualKCompositeJob*)self)->doSuspend();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnDoSuspend(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_DoSuspend_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_DoSuspend_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompositeJob_DoResume(KCompositeJob* self) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        return vkcompositejob->doResume();
    } else {
        return ((VirtualKCompositeJob*)self)->doResume();
    }
}

// Base class handler implementation
bool KCompositeJob_QBaseDoResume(KCompositeJob* self) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_DoResume_IsBase(true);
        return vkcompositejob->doResume();
    } else {
        return ((VirtualKCompositeJob*)self)->doResume();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnDoResume(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_DoResume_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_DoResume_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KCompositeJob_ErrorString(const KCompositeJob* self) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        QString _ret = vkcompositejob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KCompositeJob::errorString();
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
libqt_string KCompositeJob_QBaseErrorString(const KCompositeJob* self) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_ErrorString_IsBase(true);
        QString _ret = vkcompositejob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KCompositeJob::errorString();
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
void KCompositeJob_OnErrorString(const KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_ErrorString_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_ErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompositeJob_Event(KCompositeJob* self, QEvent* event) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        return vkcompositejob->event(event);
    } else {
        return self->KCompositeJob::event(event);
    }
}

// Base class handler implementation
bool KCompositeJob_QBaseEvent(KCompositeJob* self, QEvent* event) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_Event_IsBase(true);
        return vkcompositejob->event(event);
    } else {
        return self->KCompositeJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnEvent(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_Event_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompositeJob_EventFilter(KCompositeJob* self, QObject* watched, QEvent* event) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        return vkcompositejob->eventFilter(watched, event);
    } else {
        return self->KCompositeJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KCompositeJob_QBaseEventFilter(KCompositeJob* self, QObject* watched, QEvent* event) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_EventFilter_IsBase(true);
        return vkcompositejob->eventFilter(watched, event);
    } else {
        return self->KCompositeJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnEventFilter(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_EventFilter_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompositeJob_TimerEvent(KCompositeJob* self, QTimerEvent* event) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->timerEvent(event);
    } else {
        ((VirtualKCompositeJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KCompositeJob_QBaseTimerEvent(KCompositeJob* self, QTimerEvent* event) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_TimerEvent_IsBase(true);
        vkcompositejob->timerEvent(event);
    } else {
        ((VirtualKCompositeJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnTimerEvent(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_TimerEvent_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompositeJob_ChildEvent(KCompositeJob* self, QChildEvent* event) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->childEvent(event);
    } else {
        ((VirtualKCompositeJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KCompositeJob_QBaseChildEvent(KCompositeJob* self, QChildEvent* event) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_ChildEvent_IsBase(true);
        vkcompositejob->childEvent(event);
    } else {
        ((VirtualKCompositeJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnChildEvent(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_ChildEvent_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompositeJob_CustomEvent(KCompositeJob* self, QEvent* event) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->customEvent(event);
    } else {
        ((VirtualKCompositeJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KCompositeJob_QBaseCustomEvent(KCompositeJob* self, QEvent* event) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_CustomEvent_IsBase(true);
        vkcompositejob->customEvent(event);
    } else {
        ((VirtualKCompositeJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnCustomEvent(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_CustomEvent_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompositeJob_ConnectNotify(KCompositeJob* self, const QMetaMethod* signal) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->connectNotify(*signal);
    } else {
        ((VirtualKCompositeJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KCompositeJob_QBaseConnectNotify(KCompositeJob* self, const QMetaMethod* signal) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_ConnectNotify_IsBase(true);
        vkcompositejob->connectNotify(*signal);
    } else {
        ((VirtualKCompositeJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnConnectNotify(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_ConnectNotify_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompositeJob_DisconnectNotify(KCompositeJob* self, const QMetaMethod* signal) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->disconnectNotify(*signal);
    } else {
        ((VirtualKCompositeJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KCompositeJob_QBaseDisconnectNotify(KCompositeJob* self, const QMetaMethod* signal) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_DisconnectNotify_IsBase(true);
        vkcompositejob->disconnectNotify(*signal);
    } else {
        ((VirtualKCompositeJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnDisconnectNotify(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_DisconnectNotify_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompositeJob_HasSubjobs(const KCompositeJob* self) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        return vkcompositejob->hasSubjobs();
    } else {
        return ((VirtualKCompositeJob*)self)->hasSubjobs();
    }
}

// Base class handler implementation
bool KCompositeJob_QBaseHasSubjobs(const KCompositeJob* self) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_HasSubjobs_IsBase(true);
        return vkcompositejob->hasSubjobs();
    } else {
        return ((VirtualKCompositeJob*)self)->hasSubjobs();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnHasSubjobs(const KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_HasSubjobs_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_HasSubjobs_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of KJob* */ KCompositeJob_Subjobs(const KCompositeJob* self) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        const QList<KJob*>& _ret = vkcompositejob->subjobs();
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
        const QList<KJob*>& _ret = ((VirtualKCompositeJob*)self)->subjobs();
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
libqt_list /* of KJob* */ KCompositeJob_QBaseSubjobs(const KCompositeJob* self) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_Subjobs_IsBase(true);
        const QList<KJob*>& _ret = vkcompositejob->subjobs();
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
        const QList<KJob*>& _ret = ((VirtualKCompositeJob*)self)->subjobs();
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
void KCompositeJob_OnSubjobs(const KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_Subjobs_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_Subjobs_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompositeJob_ClearSubjobs(KCompositeJob* self) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->clearSubjobs();
    } else {
        ((VirtualKCompositeJob*)self)->clearSubjobs();
    }
}

// Base class handler implementation
void KCompositeJob_QBaseClearSubjobs(KCompositeJob* self) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_ClearSubjobs_IsBase(true);
        vkcompositejob->clearSubjobs();
    } else {
        ((VirtualKCompositeJob*)self)->clearSubjobs();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnClearSubjobs(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_ClearSubjobs_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_ClearSubjobs_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompositeJob_SetCapabilities(KCompositeJob* self, int capabilities) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKCompositeJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Base class handler implementation
void KCompositeJob_QBaseSetCapabilities(KCompositeJob* self, int capabilities) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_SetCapabilities_IsBase(true);
        vkcompositejob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKCompositeJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnSetCapabilities(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_SetCapabilities_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_SetCapabilities_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompositeJob_IsFinished(const KCompositeJob* self) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        return vkcompositejob->isFinished();
    } else {
        return ((VirtualKCompositeJob*)self)->isFinished();
    }
}

// Base class handler implementation
bool KCompositeJob_QBaseIsFinished(const KCompositeJob* self) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_IsFinished_IsBase(true);
        return vkcompositejob->isFinished();
    } else {
        return ((VirtualKCompositeJob*)self)->isFinished();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnIsFinished(const KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_IsFinished_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_IsFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompositeJob_SetError(KCompositeJob* self, int errorCode) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKCompositeJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Base class handler implementation
void KCompositeJob_QBaseSetError(KCompositeJob* self, int errorCode) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_SetError_IsBase(true);
        vkcompositejob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKCompositeJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnSetError(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_SetError_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompositeJob_SetErrorText(KCompositeJob* self, const libqt_string errorText) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setErrorText(errorText_QString);
    } else {
        ((VirtualKCompositeJob*)self)->setErrorText(errorText_QString);
    }
}

// Base class handler implementation
void KCompositeJob_QBaseSetErrorText(KCompositeJob* self, const libqt_string errorText) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_SetErrorText_IsBase(true);
        vkcompositejob->setErrorText(errorText_QString);
    } else {
        ((VirtualKCompositeJob*)self)->setErrorText(errorText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnSetErrorText(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_SetErrorText_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_SetErrorText_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompositeJob_SetProcessedAmount(KCompositeJob* self, int unit, unsigned long long amount) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKCompositeJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KCompositeJob_QBaseSetProcessedAmount(KCompositeJob* self, int unit, unsigned long long amount) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_SetProcessedAmount_IsBase(true);
        vkcompositejob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKCompositeJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnSetProcessedAmount(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_SetProcessedAmount_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_SetProcessedAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompositeJob_SetTotalAmount(KCompositeJob* self, int unit, unsigned long long amount) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKCompositeJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KCompositeJob_QBaseSetTotalAmount(KCompositeJob* self, int unit, unsigned long long amount) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_SetTotalAmount_IsBase(true);
        vkcompositejob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKCompositeJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnSetTotalAmount(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_SetTotalAmount_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_SetTotalAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompositeJob_SetProgressUnit(KCompositeJob* self, int unit) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKCompositeJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Base class handler implementation
void KCompositeJob_QBaseSetProgressUnit(KCompositeJob* self, int unit) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_SetProgressUnit_IsBase(true);
        vkcompositejob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKCompositeJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnSetProgressUnit(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_SetProgressUnit_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_SetProgressUnit_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompositeJob_SetPercent(KCompositeJob* self, unsigned long percentage) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKCompositeJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Base class handler implementation
void KCompositeJob_QBaseSetPercent(KCompositeJob* self, unsigned long percentage) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_SetPercent_IsBase(true);
        vkcompositejob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKCompositeJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnSetPercent(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_SetPercent_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_SetPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompositeJob_EmitResult(KCompositeJob* self) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->emitResult();
    } else {
        ((VirtualKCompositeJob*)self)->emitResult();
    }
}

// Base class handler implementation
void KCompositeJob_QBaseEmitResult(KCompositeJob* self) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_EmitResult_IsBase(true);
        vkcompositejob->emitResult();
    } else {
        ((VirtualKCompositeJob*)self)->emitResult();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnEmitResult(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_EmitResult_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_EmitResult_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompositeJob_EmitPercent(KCompositeJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKCompositeJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Base class handler implementation
void KCompositeJob_QBaseEmitPercent(KCompositeJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_EmitPercent_IsBase(true);
        vkcompositejob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKCompositeJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnEmitPercent(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_EmitPercent_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_EmitPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompositeJob_EmitSpeed(KCompositeJob* self, unsigned long speed) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKCompositeJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Base class handler implementation
void KCompositeJob_QBaseEmitSpeed(KCompositeJob* self, unsigned long speed) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_EmitSpeed_IsBase(true);
        vkcompositejob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKCompositeJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnEmitSpeed(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_EmitSpeed_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_EmitSpeed_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompositeJob_StartElapsedTimer(KCompositeJob* self) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->startElapsedTimer();
    } else {
        ((VirtualKCompositeJob*)self)->startElapsedTimer();
    }
}

// Base class handler implementation
void KCompositeJob_QBaseStartElapsedTimer(KCompositeJob* self) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_StartElapsedTimer_IsBase(true);
        vkcompositejob->startElapsedTimer();
    } else {
        ((VirtualKCompositeJob*)self)->startElapsedTimer();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnStartElapsedTimer(KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = dynamic_cast<VirtualKCompositeJob*>(self);
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_StartElapsedTimer_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_StartElapsedTimer_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KCompositeJob_Sender(const KCompositeJob* self) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        return vkcompositejob->sender();
    } else {
        return ((VirtualKCompositeJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* KCompositeJob_QBaseSender(const KCompositeJob* self) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_Sender_IsBase(true);
        return vkcompositejob->sender();
    } else {
        return ((VirtualKCompositeJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnSender(const KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_Sender_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KCompositeJob_SenderSignalIndex(const KCompositeJob* self) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        return vkcompositejob->senderSignalIndex();
    } else {
        return ((VirtualKCompositeJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KCompositeJob_QBaseSenderSignalIndex(const KCompositeJob* self) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_SenderSignalIndex_IsBase(true);
        return vkcompositejob->senderSignalIndex();
    } else {
        return ((VirtualKCompositeJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnSenderSignalIndex(const KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KCompositeJob_Receivers(const KCompositeJob* self, const char* signal) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        return vkcompositejob->receivers(signal);
    } else {
        return ((VirtualKCompositeJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KCompositeJob_QBaseReceivers(const KCompositeJob* self, const char* signal) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_Receivers_IsBase(true);
        return vkcompositejob->receivers(signal);
    } else {
        return ((VirtualKCompositeJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnReceivers(const KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_Receivers_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompositeJob_IsSignalConnected(const KCompositeJob* self, const QMetaMethod* signal) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        return vkcompositejob->isSignalConnected(*signal);
    } else {
        return ((VirtualKCompositeJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KCompositeJob_QBaseIsSignalConnected(const KCompositeJob* self, const QMetaMethod* signal) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_IsSignalConnected_IsBase(true);
        return vkcompositejob->isSignalConnected(*signal);
    } else {
        return ((VirtualKCompositeJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompositeJob_OnIsSignalConnected(const KCompositeJob* self, intptr_t slot) {
    auto* vkcompositejob = const_cast<VirtualKCompositeJob*>(dynamic_cast<const VirtualKCompositeJob*>(self));
    if (vkcompositejob && vkcompositejob->isVirtualKCompositeJob) {
        vkcompositejob->setKCompositeJob_IsSignalConnected_Callback(reinterpret_cast<VirtualKCompositeJob::KCompositeJob_IsSignalConnected_Callback>(slot));
    }
}

void KCompositeJob_Delete(KCompositeJob* self) {
    delete self;
}
