#include <KJob>
#include <KJobUiDelegate>
#include <KNotificationJobUiDelegate>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <knotificationjobuidelegate.h>
#include "libknotificationjobuidelegate.h"
#include "libknotificationjobuidelegate.hxx"

KNotificationJobUiDelegate* KNotificationJobUiDelegate_new() {
    return new VirtualKNotificationJobUiDelegate();
}

KNotificationJobUiDelegate* KNotificationJobUiDelegate_new2(int flags) {
    return new VirtualKNotificationJobUiDelegate(static_cast<KJobUiDelegate::Flags>(flags));
}

QMetaObject* KNotificationJobUiDelegate_MetaObject(const KNotificationJobUiDelegate* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNotificationJobUiDelegate_Metacast(KNotificationJobUiDelegate* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNotificationJobUiDelegate_Metacall(KNotificationJobUiDelegate* self, int param1, int param2, void** param3) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKNotificationJobUiDelegate*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KNotificationJobUiDelegate_Tr(const char* s) {
    QString _ret = KNotificationJobUiDelegate::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNotificationJobUiDelegate_ShowErrorMessage(KNotificationJobUiDelegate* self) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        self->showErrorMessage();
    } else {
        ((VirtualKNotificationJobUiDelegate*)self)->showErrorMessage();
    }
}

bool KNotificationJobUiDelegate_SetJob(KNotificationJobUiDelegate* self, KJob* job) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        return vknotificationjobuidelegate->setJob(job);
    }
    return {};
}

void KNotificationJobUiDelegate_SlotWarning(KNotificationJobUiDelegate* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->slotWarning(job, message_QString);
    }
}

libqt_string KNotificationJobUiDelegate_Tr2(const char* s, const char* c) {
    QString _ret = KNotificationJobUiDelegate::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNotificationJobUiDelegate_Tr3(const char* s, const char* c, int n) {
    QString _ret = KNotificationJobUiDelegate::tr(s, c, static_cast<int>(n));
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
int KNotificationJobUiDelegate_QBaseMetacall(KNotificationJobUiDelegate* self, int param1, int param2, void** param3) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_Metacall_IsBase(true);
        return vknotificationjobuidelegate->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KNotificationJobUiDelegate::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationJobUiDelegate_OnMetacall(KNotificationJobUiDelegate* self, intptr_t slot) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_Metacall_Callback(reinterpret_cast<VirtualKNotificationJobUiDelegate::KNotificationJobUiDelegate_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KNotificationJobUiDelegate_QBaseShowErrorMessage(KNotificationJobUiDelegate* self) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_ShowErrorMessage_IsBase(true);
        vknotificationjobuidelegate->showErrorMessage();
    } else {
        self->KNotificationJobUiDelegate::showErrorMessage();
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationJobUiDelegate_OnShowErrorMessage(KNotificationJobUiDelegate* self, intptr_t slot) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_ShowErrorMessage_Callback(reinterpret_cast<VirtualKNotificationJobUiDelegate::KNotificationJobUiDelegate_ShowErrorMessage_Callback>(slot));
    }
}

// Base class handler implementation
bool KNotificationJobUiDelegate_QBaseSetJob(KNotificationJobUiDelegate* self, KJob* job) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_SetJob_IsBase(true);
        return vknotificationjobuidelegate->setJob(job);
    } else {
        return ((VirtualKNotificationJobUiDelegate*)self)->setJob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationJobUiDelegate_OnSetJob(KNotificationJobUiDelegate* self, intptr_t slot) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_SetJob_Callback(reinterpret_cast<VirtualKNotificationJobUiDelegate::KNotificationJobUiDelegate_SetJob_Callback>(slot));
    }
}

// Base class handler implementation
void KNotificationJobUiDelegate_QBaseSlotWarning(KNotificationJobUiDelegate* self, KJob* job, const libqt_string message) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_SlotWarning_IsBase(true);
        vknotificationjobuidelegate->slotWarning(job, message_QString);
    } else {
        ((VirtualKNotificationJobUiDelegate*)self)->slotWarning(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationJobUiDelegate_OnSlotWarning(KNotificationJobUiDelegate* self, intptr_t slot) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_SlotWarning_Callback(reinterpret_cast<VirtualKNotificationJobUiDelegate::KNotificationJobUiDelegate_SlotWarning_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNotificationJobUiDelegate_Event(KNotificationJobUiDelegate* self, QEvent* event) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        return vknotificationjobuidelegate->event(event);
    } else {
        return self->KNotificationJobUiDelegate::event(event);
    }
}

// Base class handler implementation
bool KNotificationJobUiDelegate_QBaseEvent(KNotificationJobUiDelegate* self, QEvent* event) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_Event_IsBase(true);
        return vknotificationjobuidelegate->event(event);
    } else {
        return self->KNotificationJobUiDelegate::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationJobUiDelegate_OnEvent(KNotificationJobUiDelegate* self, intptr_t slot) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_Event_Callback(reinterpret_cast<VirtualKNotificationJobUiDelegate::KNotificationJobUiDelegate_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNotificationJobUiDelegate_EventFilter(KNotificationJobUiDelegate* self, QObject* watched, QEvent* event) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        return vknotificationjobuidelegate->eventFilter(watched, event);
    } else {
        return self->KNotificationJobUiDelegate::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KNotificationJobUiDelegate_QBaseEventFilter(KNotificationJobUiDelegate* self, QObject* watched, QEvent* event) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_EventFilter_IsBase(true);
        return vknotificationjobuidelegate->eventFilter(watched, event);
    } else {
        return self->KNotificationJobUiDelegate::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationJobUiDelegate_OnEventFilter(KNotificationJobUiDelegate* self, intptr_t slot) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_EventFilter_Callback(reinterpret_cast<VirtualKNotificationJobUiDelegate::KNotificationJobUiDelegate_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KNotificationJobUiDelegate_TimerEvent(KNotificationJobUiDelegate* self, QTimerEvent* event) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->timerEvent(event);
    } else {
        ((VirtualKNotificationJobUiDelegate*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KNotificationJobUiDelegate_QBaseTimerEvent(KNotificationJobUiDelegate* self, QTimerEvent* event) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_TimerEvent_IsBase(true);
        vknotificationjobuidelegate->timerEvent(event);
    } else {
        ((VirtualKNotificationJobUiDelegate*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationJobUiDelegate_OnTimerEvent(KNotificationJobUiDelegate* self, intptr_t slot) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_TimerEvent_Callback(reinterpret_cast<VirtualKNotificationJobUiDelegate::KNotificationJobUiDelegate_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNotificationJobUiDelegate_ChildEvent(KNotificationJobUiDelegate* self, QChildEvent* event) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->childEvent(event);
    } else {
        ((VirtualKNotificationJobUiDelegate*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KNotificationJobUiDelegate_QBaseChildEvent(KNotificationJobUiDelegate* self, QChildEvent* event) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_ChildEvent_IsBase(true);
        vknotificationjobuidelegate->childEvent(event);
    } else {
        ((VirtualKNotificationJobUiDelegate*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationJobUiDelegate_OnChildEvent(KNotificationJobUiDelegate* self, intptr_t slot) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_ChildEvent_Callback(reinterpret_cast<VirtualKNotificationJobUiDelegate::KNotificationJobUiDelegate_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNotificationJobUiDelegate_CustomEvent(KNotificationJobUiDelegate* self, QEvent* event) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->customEvent(event);
    } else {
        ((VirtualKNotificationJobUiDelegate*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KNotificationJobUiDelegate_QBaseCustomEvent(KNotificationJobUiDelegate* self, QEvent* event) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_CustomEvent_IsBase(true);
        vknotificationjobuidelegate->customEvent(event);
    } else {
        ((VirtualKNotificationJobUiDelegate*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationJobUiDelegate_OnCustomEvent(KNotificationJobUiDelegate* self, intptr_t slot) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_CustomEvent_Callback(reinterpret_cast<VirtualKNotificationJobUiDelegate::KNotificationJobUiDelegate_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNotificationJobUiDelegate_ConnectNotify(KNotificationJobUiDelegate* self, const QMetaMethod* signal) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->connectNotify(*signal);
    } else {
        ((VirtualKNotificationJobUiDelegate*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KNotificationJobUiDelegate_QBaseConnectNotify(KNotificationJobUiDelegate* self, const QMetaMethod* signal) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_ConnectNotify_IsBase(true);
        vknotificationjobuidelegate->connectNotify(*signal);
    } else {
        ((VirtualKNotificationJobUiDelegate*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationJobUiDelegate_OnConnectNotify(KNotificationJobUiDelegate* self, intptr_t slot) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_ConnectNotify_Callback(reinterpret_cast<VirtualKNotificationJobUiDelegate::KNotificationJobUiDelegate_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNotificationJobUiDelegate_DisconnectNotify(KNotificationJobUiDelegate* self, const QMetaMethod* signal) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->disconnectNotify(*signal);
    } else {
        ((VirtualKNotificationJobUiDelegate*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KNotificationJobUiDelegate_QBaseDisconnectNotify(KNotificationJobUiDelegate* self, const QMetaMethod* signal) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_DisconnectNotify_IsBase(true);
        vknotificationjobuidelegate->disconnectNotify(*signal);
    } else {
        ((VirtualKNotificationJobUiDelegate*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationJobUiDelegate_OnDisconnectNotify(KNotificationJobUiDelegate* self, intptr_t slot) {
    auto* vknotificationjobuidelegate = dynamic_cast<VirtualKNotificationJobUiDelegate*>(self);
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_DisconnectNotify_Callback(reinterpret_cast<VirtualKNotificationJobUiDelegate::KNotificationJobUiDelegate_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
KJob* KNotificationJobUiDelegate_Job(const KNotificationJobUiDelegate* self) {
    auto* vknotificationjobuidelegate = const_cast<VirtualKNotificationJobUiDelegate*>(dynamic_cast<const VirtualKNotificationJobUiDelegate*>(self));
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        return vknotificationjobuidelegate->job();
    } else {
        return ((VirtualKNotificationJobUiDelegate*)self)->job();
    }
}

// Base class handler implementation
KJob* KNotificationJobUiDelegate_QBaseJob(const KNotificationJobUiDelegate* self) {
    auto* vknotificationjobuidelegate = const_cast<VirtualKNotificationJobUiDelegate*>(dynamic_cast<const VirtualKNotificationJobUiDelegate*>(self));
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_Job_IsBase(true);
        return vknotificationjobuidelegate->job();
    } else {
        return ((VirtualKNotificationJobUiDelegate*)self)->job();
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationJobUiDelegate_OnJob(const KNotificationJobUiDelegate* self, intptr_t slot) {
    auto* vknotificationjobuidelegate = const_cast<VirtualKNotificationJobUiDelegate*>(dynamic_cast<const VirtualKNotificationJobUiDelegate*>(self));
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_Job_Callback(reinterpret_cast<VirtualKNotificationJobUiDelegate::KNotificationJobUiDelegate_Job_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KNotificationJobUiDelegate_Sender(const KNotificationJobUiDelegate* self) {
    auto* vknotificationjobuidelegate = const_cast<VirtualKNotificationJobUiDelegate*>(dynamic_cast<const VirtualKNotificationJobUiDelegate*>(self));
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        return vknotificationjobuidelegate->sender();
    } else {
        return ((VirtualKNotificationJobUiDelegate*)self)->sender();
    }
}

// Base class handler implementation
QObject* KNotificationJobUiDelegate_QBaseSender(const KNotificationJobUiDelegate* self) {
    auto* vknotificationjobuidelegate = const_cast<VirtualKNotificationJobUiDelegate*>(dynamic_cast<const VirtualKNotificationJobUiDelegate*>(self));
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_Sender_IsBase(true);
        return vknotificationjobuidelegate->sender();
    } else {
        return ((VirtualKNotificationJobUiDelegate*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationJobUiDelegate_OnSender(const KNotificationJobUiDelegate* self, intptr_t slot) {
    auto* vknotificationjobuidelegate = const_cast<VirtualKNotificationJobUiDelegate*>(dynamic_cast<const VirtualKNotificationJobUiDelegate*>(self));
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_Sender_Callback(reinterpret_cast<VirtualKNotificationJobUiDelegate::KNotificationJobUiDelegate_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KNotificationJobUiDelegate_SenderSignalIndex(const KNotificationJobUiDelegate* self) {
    auto* vknotificationjobuidelegate = const_cast<VirtualKNotificationJobUiDelegate*>(dynamic_cast<const VirtualKNotificationJobUiDelegate*>(self));
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        return vknotificationjobuidelegate->senderSignalIndex();
    } else {
        return ((VirtualKNotificationJobUiDelegate*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KNotificationJobUiDelegate_QBaseSenderSignalIndex(const KNotificationJobUiDelegate* self) {
    auto* vknotificationjobuidelegate = const_cast<VirtualKNotificationJobUiDelegate*>(dynamic_cast<const VirtualKNotificationJobUiDelegate*>(self));
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_SenderSignalIndex_IsBase(true);
        return vknotificationjobuidelegate->senderSignalIndex();
    } else {
        return ((VirtualKNotificationJobUiDelegate*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationJobUiDelegate_OnSenderSignalIndex(const KNotificationJobUiDelegate* self, intptr_t slot) {
    auto* vknotificationjobuidelegate = const_cast<VirtualKNotificationJobUiDelegate*>(dynamic_cast<const VirtualKNotificationJobUiDelegate*>(self));
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_SenderSignalIndex_Callback(reinterpret_cast<VirtualKNotificationJobUiDelegate::KNotificationJobUiDelegate_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KNotificationJobUiDelegate_Receivers(const KNotificationJobUiDelegate* self, const char* signal) {
    auto* vknotificationjobuidelegate = const_cast<VirtualKNotificationJobUiDelegate*>(dynamic_cast<const VirtualKNotificationJobUiDelegate*>(self));
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        return vknotificationjobuidelegate->receivers(signal);
    } else {
        return ((VirtualKNotificationJobUiDelegate*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KNotificationJobUiDelegate_QBaseReceivers(const KNotificationJobUiDelegate* self, const char* signal) {
    auto* vknotificationjobuidelegate = const_cast<VirtualKNotificationJobUiDelegate*>(dynamic_cast<const VirtualKNotificationJobUiDelegate*>(self));
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_Receivers_IsBase(true);
        return vknotificationjobuidelegate->receivers(signal);
    } else {
        return ((VirtualKNotificationJobUiDelegate*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationJobUiDelegate_OnReceivers(const KNotificationJobUiDelegate* self, intptr_t slot) {
    auto* vknotificationjobuidelegate = const_cast<VirtualKNotificationJobUiDelegate*>(dynamic_cast<const VirtualKNotificationJobUiDelegate*>(self));
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_Receivers_Callback(reinterpret_cast<VirtualKNotificationJobUiDelegate::KNotificationJobUiDelegate_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNotificationJobUiDelegate_IsSignalConnected(const KNotificationJobUiDelegate* self, const QMetaMethod* signal) {
    auto* vknotificationjobuidelegate = const_cast<VirtualKNotificationJobUiDelegate*>(dynamic_cast<const VirtualKNotificationJobUiDelegate*>(self));
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        return vknotificationjobuidelegate->isSignalConnected(*signal);
    } else {
        return ((VirtualKNotificationJobUiDelegate*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KNotificationJobUiDelegate_QBaseIsSignalConnected(const KNotificationJobUiDelegate* self, const QMetaMethod* signal) {
    auto* vknotificationjobuidelegate = const_cast<VirtualKNotificationJobUiDelegate*>(dynamic_cast<const VirtualKNotificationJobUiDelegate*>(self));
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_IsSignalConnected_IsBase(true);
        return vknotificationjobuidelegate->isSignalConnected(*signal);
    } else {
        return ((VirtualKNotificationJobUiDelegate*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationJobUiDelegate_OnIsSignalConnected(const KNotificationJobUiDelegate* self, intptr_t slot) {
    auto* vknotificationjobuidelegate = const_cast<VirtualKNotificationJobUiDelegate*>(dynamic_cast<const VirtualKNotificationJobUiDelegate*>(self));
    if (vknotificationjobuidelegate && vknotificationjobuidelegate->isVirtualKNotificationJobUiDelegate) {
        vknotificationjobuidelegate->setKNotificationJobUiDelegate_IsSignalConnected_Callback(reinterpret_cast<VirtualKNotificationJobUiDelegate::KNotificationJobUiDelegate_IsSignalConnected_Callback>(slot));
    }
}

void KNotificationJobUiDelegate_Delete(KNotificationJobUiDelegate* self) {
    delete self;
}
