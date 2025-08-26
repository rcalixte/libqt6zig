#include <KJob>
#include <KJobUiDelegate>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <kjobuidelegate.h>
#include "libkjobuidelegate.h"
#include "libkjobuidelegate.hxx"

KJobUiDelegate* KJobUiDelegate_new() {
    return new VirtualKJobUiDelegate();
}

KJobUiDelegate* KJobUiDelegate_new2(int flags) {
    return new VirtualKJobUiDelegate(static_cast<KJobUiDelegate::Flags>(flags));
}

QMetaObject* KJobUiDelegate_MetaObject(const KJobUiDelegate* self) {
    return (QMetaObject*)self->metaObject();
}

void* KJobUiDelegate_Metacast(KJobUiDelegate* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KJobUiDelegate_Metacall(KJobUiDelegate* self, int param1, int param2, void** param3) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKJobUiDelegate*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KJobUiDelegate_OnMetacall(KJobUiDelegate* self, intptr_t slot) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_Metacall_Callback(reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KJobUiDelegate_QBaseMetacall(KJobUiDelegate* self, int param1, int param2, void** param3) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_Metacall_IsBase(true);
        return vkjobuidelegate->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKJobUiDelegate*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KJobUiDelegate_Tr(const char* s) {
    QString _ret = KJobUiDelegate::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KJobUiDelegate_SetAutoErrorHandlingEnabled(KJobUiDelegate* self, bool enable) {
    self->setAutoErrorHandlingEnabled(enable);
}

bool KJobUiDelegate_IsAutoErrorHandlingEnabled(const KJobUiDelegate* self) {
    return self->isAutoErrorHandlingEnabled();
}

void KJobUiDelegate_SetAutoWarningHandlingEnabled(KJobUiDelegate* self, bool enable) {
    self->setAutoWarningHandlingEnabled(enable);
}

bool KJobUiDelegate_IsAutoWarningHandlingEnabled(const KJobUiDelegate* self) {
    return self->isAutoWarningHandlingEnabled();
}

libqt_string KJobUiDelegate_Tr2(const char* s, const char* c) {
    QString _ret = KJobUiDelegate::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KJobUiDelegate_Tr3(const char* s, const char* c, int n) {
    QString _ret = KJobUiDelegate::tr(s, c, static_cast<int>(n));
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
bool KJobUiDelegate_SetJob(KJobUiDelegate* self, KJob* job) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        return vkjobuidelegate->setJob(job);
    } else {
        return ((VirtualKJobUiDelegate*)self)->setJob(job);
    }
}

// Base class handler implementation
bool KJobUiDelegate_QBaseSetJob(KJobUiDelegate* self, KJob* job) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_SetJob_IsBase(true);
        return vkjobuidelegate->setJob(job);
    } else {
        return ((VirtualKJobUiDelegate*)self)->setJob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnSetJob(KJobUiDelegate* self, intptr_t slot) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_SetJob_Callback(reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_SetJob_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobUiDelegate_ShowErrorMessage(KJobUiDelegate* self) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->showErrorMessage();
    } else {
        self->KJobUiDelegate::showErrorMessage();
    }
}

// Base class handler implementation
void KJobUiDelegate_QBaseShowErrorMessage(KJobUiDelegate* self) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_ShowErrorMessage_IsBase(true);
        vkjobuidelegate->showErrorMessage();
    } else {
        self->KJobUiDelegate::showErrorMessage();
    }
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnShowErrorMessage(KJobUiDelegate* self, intptr_t slot) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_ShowErrorMessage_Callback(reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_ShowErrorMessage_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobUiDelegate_SlotWarning(KJobUiDelegate* self, KJob* job, const libqt_string message) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->slotWarning(job, message_QString);
    } else {
        ((VirtualKJobUiDelegate*)self)->slotWarning(job, message_QString);
    }
}

// Base class handler implementation
void KJobUiDelegate_QBaseSlotWarning(KJobUiDelegate* self, KJob* job, const libqt_string message) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_SlotWarning_IsBase(true);
        vkjobuidelegate->slotWarning(job, message_QString);
    } else {
        ((VirtualKJobUiDelegate*)self)->slotWarning(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnSlotWarning(KJobUiDelegate* self, intptr_t slot) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_SlotWarning_Callback(reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_SlotWarning_Callback>(slot));
    }
}

// Derived class handler implementation
bool KJobUiDelegate_Event(KJobUiDelegate* self, QEvent* event) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        return vkjobuidelegate->event(event);
    } else {
        return self->KJobUiDelegate::event(event);
    }
}

// Base class handler implementation
bool KJobUiDelegate_QBaseEvent(KJobUiDelegate* self, QEvent* event) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_Event_IsBase(true);
        return vkjobuidelegate->event(event);
    } else {
        return self->KJobUiDelegate::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnEvent(KJobUiDelegate* self, intptr_t slot) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_Event_Callback(reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KJobUiDelegate_EventFilter(KJobUiDelegate* self, QObject* watched, QEvent* event) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        return vkjobuidelegate->eventFilter(watched, event);
    } else {
        return self->KJobUiDelegate::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KJobUiDelegate_QBaseEventFilter(KJobUiDelegate* self, QObject* watched, QEvent* event) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_EventFilter_IsBase(true);
        return vkjobuidelegate->eventFilter(watched, event);
    } else {
        return self->KJobUiDelegate::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnEventFilter(KJobUiDelegate* self, intptr_t slot) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_EventFilter_Callback(reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobUiDelegate_TimerEvent(KJobUiDelegate* self, QTimerEvent* event) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->timerEvent(event);
    } else {
        ((VirtualKJobUiDelegate*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KJobUiDelegate_QBaseTimerEvent(KJobUiDelegate* self, QTimerEvent* event) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_TimerEvent_IsBase(true);
        vkjobuidelegate->timerEvent(event);
    } else {
        ((VirtualKJobUiDelegate*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnTimerEvent(KJobUiDelegate* self, intptr_t slot) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_TimerEvent_Callback(reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobUiDelegate_ChildEvent(KJobUiDelegate* self, QChildEvent* event) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->childEvent(event);
    } else {
        ((VirtualKJobUiDelegate*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KJobUiDelegate_QBaseChildEvent(KJobUiDelegate* self, QChildEvent* event) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_ChildEvent_IsBase(true);
        vkjobuidelegate->childEvent(event);
    } else {
        ((VirtualKJobUiDelegate*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnChildEvent(KJobUiDelegate* self, intptr_t slot) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_ChildEvent_Callback(reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobUiDelegate_CustomEvent(KJobUiDelegate* self, QEvent* event) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->customEvent(event);
    } else {
        ((VirtualKJobUiDelegate*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KJobUiDelegate_QBaseCustomEvent(KJobUiDelegate* self, QEvent* event) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_CustomEvent_IsBase(true);
        vkjobuidelegate->customEvent(event);
    } else {
        ((VirtualKJobUiDelegate*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnCustomEvent(KJobUiDelegate* self, intptr_t slot) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_CustomEvent_Callback(reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobUiDelegate_ConnectNotify(KJobUiDelegate* self, const QMetaMethod* signal) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->connectNotify(*signal);
    } else {
        ((VirtualKJobUiDelegate*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KJobUiDelegate_QBaseConnectNotify(KJobUiDelegate* self, const QMetaMethod* signal) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_ConnectNotify_IsBase(true);
        vkjobuidelegate->connectNotify(*signal);
    } else {
        ((VirtualKJobUiDelegate*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnConnectNotify(KJobUiDelegate* self, intptr_t slot) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_ConnectNotify_Callback(reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KJobUiDelegate_DisconnectNotify(KJobUiDelegate* self, const QMetaMethod* signal) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->disconnectNotify(*signal);
    } else {
        ((VirtualKJobUiDelegate*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KJobUiDelegate_QBaseDisconnectNotify(KJobUiDelegate* self, const QMetaMethod* signal) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_DisconnectNotify_IsBase(true);
        vkjobuidelegate->disconnectNotify(*signal);
    } else {
        ((VirtualKJobUiDelegate*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnDisconnectNotify(KJobUiDelegate* self, intptr_t slot) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_DisconnectNotify_Callback(reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
KJob* KJobUiDelegate_Job(const KJobUiDelegate* self) {
    auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self));
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        return vkjobuidelegate->job();
    } else {
        return ((VirtualKJobUiDelegate*)self)->job();
    }
}

// Base class handler implementation
KJob* KJobUiDelegate_QBaseJob(const KJobUiDelegate* self) {
    auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self));
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_Job_IsBase(true);
        return vkjobuidelegate->job();
    } else {
        return ((VirtualKJobUiDelegate*)self)->job();
    }
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnJob(const KJobUiDelegate* self, intptr_t slot) {
    auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self));
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_Job_Callback(reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_Job_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KJobUiDelegate_Sender(const KJobUiDelegate* self) {
    auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self));
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        return vkjobuidelegate->sender();
    } else {
        return ((VirtualKJobUiDelegate*)self)->sender();
    }
}

// Base class handler implementation
QObject* KJobUiDelegate_QBaseSender(const KJobUiDelegate* self) {
    auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self));
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_Sender_IsBase(true);
        return vkjobuidelegate->sender();
    } else {
        return ((VirtualKJobUiDelegate*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnSender(const KJobUiDelegate* self, intptr_t slot) {
    auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self));
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_Sender_Callback(reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KJobUiDelegate_SenderSignalIndex(const KJobUiDelegate* self) {
    auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self));
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        return vkjobuidelegate->senderSignalIndex();
    } else {
        return ((VirtualKJobUiDelegate*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KJobUiDelegate_QBaseSenderSignalIndex(const KJobUiDelegate* self) {
    auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self));
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_SenderSignalIndex_IsBase(true);
        return vkjobuidelegate->senderSignalIndex();
    } else {
        return ((VirtualKJobUiDelegate*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnSenderSignalIndex(const KJobUiDelegate* self, intptr_t slot) {
    auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self));
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_SenderSignalIndex_Callback(reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KJobUiDelegate_Receivers(const KJobUiDelegate* self, const char* signal) {
    auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self));
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        return vkjobuidelegate->receivers(signal);
    } else {
        return ((VirtualKJobUiDelegate*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KJobUiDelegate_QBaseReceivers(const KJobUiDelegate* self, const char* signal) {
    auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self));
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_Receivers_IsBase(true);
        return vkjobuidelegate->receivers(signal);
    } else {
        return ((VirtualKJobUiDelegate*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnReceivers(const KJobUiDelegate* self, intptr_t slot) {
    auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self));
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_Receivers_Callback(reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KJobUiDelegate_IsSignalConnected(const KJobUiDelegate* self, const QMetaMethod* signal) {
    auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self));
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        return vkjobuidelegate->isSignalConnected(*signal);
    } else {
        return ((VirtualKJobUiDelegate*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KJobUiDelegate_QBaseIsSignalConnected(const KJobUiDelegate* self, const QMetaMethod* signal) {
    auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self));
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_IsSignalConnected_IsBase(true);
        return vkjobuidelegate->isSignalConnected(*signal);
    } else {
        return ((VirtualKJobUiDelegate*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnIsSignalConnected(const KJobUiDelegate* self, intptr_t slot) {
    auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self));
    if (vkjobuidelegate && vkjobuidelegate->isVirtualKJobUiDelegate) {
        vkjobuidelegate->setKJobUiDelegate_IsSignalConnected_Callback(reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_IsSignalConnected_Callback>(slot));
    }
}

void KJobUiDelegate_Delete(KJobUiDelegate* self) {
    delete self;
}
