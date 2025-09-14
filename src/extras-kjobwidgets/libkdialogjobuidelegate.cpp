#include <KDialogJobUiDelegate>
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
#include <QWidget>
#include <kdialogjobuidelegate.h>
#include "libkdialogjobuidelegate.h"
#include "libkdialogjobuidelegate.hxx"

KDialogJobUiDelegate* KDialogJobUiDelegate_new() {
    return new VirtualKDialogJobUiDelegate();
}

KDialogJobUiDelegate* KDialogJobUiDelegate_new2(int flags, QWidget* window) {
    return new VirtualKDialogJobUiDelegate(static_cast<KJobUiDelegate::Flags>(flags), window);
}

QMetaObject* KDialogJobUiDelegate_MetaObject(const KDialogJobUiDelegate* self) {
    return (QMetaObject*)self->metaObject();
}

void* KDialogJobUiDelegate_Metacast(KDialogJobUiDelegate* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KDialogJobUiDelegate_Metacall(KDialogJobUiDelegate* self, int param1, int param2, void** param3) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKDialogJobUiDelegate*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KDialogJobUiDelegate_Tr(const char* s) {
    QString _ret = KDialogJobUiDelegate::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KDialogJobUiDelegate_SetJob(KDialogJobUiDelegate* self, KJob* job) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        return self->setJob(job);
    } else {
        return ((VirtualKDialogJobUiDelegate*)self)->setJob(job);
    }
}

void KDialogJobUiDelegate_SetWindow(KDialogJobUiDelegate* self, QWidget* window) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        self->setWindow(window);
    } else {
        ((VirtualKDialogJobUiDelegate*)self)->setWindow(window);
    }
}

QWidget* KDialogJobUiDelegate_Window(const KDialogJobUiDelegate* self) {
    return self->window();
}

void KDialogJobUiDelegate_UpdateUserTimestamp(KDialogJobUiDelegate* self, unsigned long time) {
    self->updateUserTimestamp(static_cast<unsigned long>(time));
}

unsigned long KDialogJobUiDelegate_UserTimestamp(const KDialogJobUiDelegate* self) {
    return self->userTimestamp();
}

void KDialogJobUiDelegate_ShowErrorMessage(KDialogJobUiDelegate* self) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        self->showErrorMessage();
    } else {
        ((VirtualKDialogJobUiDelegate*)self)->showErrorMessage();
    }
}

void KDialogJobUiDelegate_SlotWarning(KDialogJobUiDelegate* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->slotWarning(job, message_QString);
    }
}

libqt_string KDialogJobUiDelegate_Tr2(const char* s, const char* c) {
    QString _ret = KDialogJobUiDelegate::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDialogJobUiDelegate_Tr3(const char* s, const char* c, int n) {
    QString _ret = KDialogJobUiDelegate::tr(s, c, static_cast<int>(n));
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
int KDialogJobUiDelegate_QBaseMetacall(KDialogJobUiDelegate* self, int param1, int param2, void** param3) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_Metacall_IsBase(true);
        return vkdialogjobuidelegate->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KDialogJobUiDelegate::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KDialogJobUiDelegate_OnMetacall(KDialogJobUiDelegate* self, intptr_t slot) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_Metacall_Callback(reinterpret_cast<VirtualKDialogJobUiDelegate::KDialogJobUiDelegate_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool KDialogJobUiDelegate_QBaseSetJob(KDialogJobUiDelegate* self, KJob* job) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_SetJob_IsBase(true);
        return vkdialogjobuidelegate->setJob(job);
    } else {
        return self->KDialogJobUiDelegate::setJob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KDialogJobUiDelegate_OnSetJob(KDialogJobUiDelegate* self, intptr_t slot) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_SetJob_Callback(reinterpret_cast<VirtualKDialogJobUiDelegate::KDialogJobUiDelegate_SetJob_Callback>(slot));
    }
}

// Base class handler implementation
void KDialogJobUiDelegate_QBaseSetWindow(KDialogJobUiDelegate* self, QWidget* window) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_SetWindow_IsBase(true);
        vkdialogjobuidelegate->setWindow(window);
    } else {
        self->KDialogJobUiDelegate::setWindow(window);
    }
}

// Auxiliary method to allow providing re-implementation
void KDialogJobUiDelegate_OnSetWindow(KDialogJobUiDelegate* self, intptr_t slot) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_SetWindow_Callback(reinterpret_cast<VirtualKDialogJobUiDelegate::KDialogJobUiDelegate_SetWindow_Callback>(slot));
    }
}

// Base class handler implementation
void KDialogJobUiDelegate_QBaseShowErrorMessage(KDialogJobUiDelegate* self) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_ShowErrorMessage_IsBase(true);
        vkdialogjobuidelegate->showErrorMessage();
    } else {
        self->KDialogJobUiDelegate::showErrorMessage();
    }
}

// Auxiliary method to allow providing re-implementation
void KDialogJobUiDelegate_OnShowErrorMessage(KDialogJobUiDelegate* self, intptr_t slot) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_ShowErrorMessage_Callback(reinterpret_cast<VirtualKDialogJobUiDelegate::KDialogJobUiDelegate_ShowErrorMessage_Callback>(slot));
    }
}

// Base class handler implementation
void KDialogJobUiDelegate_QBaseSlotWarning(KDialogJobUiDelegate* self, KJob* job, const libqt_string message) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_SlotWarning_IsBase(true);
        vkdialogjobuidelegate->slotWarning(job, message_QString);
    } else {
        ((VirtualKDialogJobUiDelegate*)self)->slotWarning(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KDialogJobUiDelegate_OnSlotWarning(KDialogJobUiDelegate* self, intptr_t slot) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_SlotWarning_Callback(reinterpret_cast<VirtualKDialogJobUiDelegate::KDialogJobUiDelegate_SlotWarning_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDialogJobUiDelegate_Event(KDialogJobUiDelegate* self, QEvent* event) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        return vkdialogjobuidelegate->event(event);
    } else {
        return self->KDialogJobUiDelegate::event(event);
    }
}

// Base class handler implementation
bool KDialogJobUiDelegate_QBaseEvent(KDialogJobUiDelegate* self, QEvent* event) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_Event_IsBase(true);
        return vkdialogjobuidelegate->event(event);
    } else {
        return self->KDialogJobUiDelegate::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDialogJobUiDelegate_OnEvent(KDialogJobUiDelegate* self, intptr_t slot) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_Event_Callback(reinterpret_cast<VirtualKDialogJobUiDelegate::KDialogJobUiDelegate_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDialogJobUiDelegate_EventFilter(KDialogJobUiDelegate* self, QObject* watched, QEvent* event) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        return vkdialogjobuidelegate->eventFilter(watched, event);
    } else {
        return self->KDialogJobUiDelegate::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KDialogJobUiDelegate_QBaseEventFilter(KDialogJobUiDelegate* self, QObject* watched, QEvent* event) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_EventFilter_IsBase(true);
        return vkdialogjobuidelegate->eventFilter(watched, event);
    } else {
        return self->KDialogJobUiDelegate::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDialogJobUiDelegate_OnEventFilter(KDialogJobUiDelegate* self, intptr_t slot) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_EventFilter_Callback(reinterpret_cast<VirtualKDialogJobUiDelegate::KDialogJobUiDelegate_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KDialogJobUiDelegate_TimerEvent(KDialogJobUiDelegate* self, QTimerEvent* event) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->timerEvent(event);
    } else {
        ((VirtualKDialogJobUiDelegate*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KDialogJobUiDelegate_QBaseTimerEvent(KDialogJobUiDelegate* self, QTimerEvent* event) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_TimerEvent_IsBase(true);
        vkdialogjobuidelegate->timerEvent(event);
    } else {
        ((VirtualKDialogJobUiDelegate*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDialogJobUiDelegate_OnTimerEvent(KDialogJobUiDelegate* self, intptr_t slot) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_TimerEvent_Callback(reinterpret_cast<VirtualKDialogJobUiDelegate::KDialogJobUiDelegate_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDialogJobUiDelegate_ChildEvent(KDialogJobUiDelegate* self, QChildEvent* event) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->childEvent(event);
    } else {
        ((VirtualKDialogJobUiDelegate*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KDialogJobUiDelegate_QBaseChildEvent(KDialogJobUiDelegate* self, QChildEvent* event) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_ChildEvent_IsBase(true);
        vkdialogjobuidelegate->childEvent(event);
    } else {
        ((VirtualKDialogJobUiDelegate*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDialogJobUiDelegate_OnChildEvent(KDialogJobUiDelegate* self, intptr_t slot) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_ChildEvent_Callback(reinterpret_cast<VirtualKDialogJobUiDelegate::KDialogJobUiDelegate_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDialogJobUiDelegate_CustomEvent(KDialogJobUiDelegate* self, QEvent* event) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->customEvent(event);
    } else {
        ((VirtualKDialogJobUiDelegate*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KDialogJobUiDelegate_QBaseCustomEvent(KDialogJobUiDelegate* self, QEvent* event) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_CustomEvent_IsBase(true);
        vkdialogjobuidelegate->customEvent(event);
    } else {
        ((VirtualKDialogJobUiDelegate*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDialogJobUiDelegate_OnCustomEvent(KDialogJobUiDelegate* self, intptr_t slot) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_CustomEvent_Callback(reinterpret_cast<VirtualKDialogJobUiDelegate::KDialogJobUiDelegate_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDialogJobUiDelegate_ConnectNotify(KDialogJobUiDelegate* self, const QMetaMethod* signal) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->connectNotify(*signal);
    } else {
        ((VirtualKDialogJobUiDelegate*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KDialogJobUiDelegate_QBaseConnectNotify(KDialogJobUiDelegate* self, const QMetaMethod* signal) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_ConnectNotify_IsBase(true);
        vkdialogjobuidelegate->connectNotify(*signal);
    } else {
        ((VirtualKDialogJobUiDelegate*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDialogJobUiDelegate_OnConnectNotify(KDialogJobUiDelegate* self, intptr_t slot) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_ConnectNotify_Callback(reinterpret_cast<VirtualKDialogJobUiDelegate::KDialogJobUiDelegate_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KDialogJobUiDelegate_DisconnectNotify(KDialogJobUiDelegate* self, const QMetaMethod* signal) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->disconnectNotify(*signal);
    } else {
        ((VirtualKDialogJobUiDelegate*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KDialogJobUiDelegate_QBaseDisconnectNotify(KDialogJobUiDelegate* self, const QMetaMethod* signal) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_DisconnectNotify_IsBase(true);
        vkdialogjobuidelegate->disconnectNotify(*signal);
    } else {
        ((VirtualKDialogJobUiDelegate*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDialogJobUiDelegate_OnDisconnectNotify(KDialogJobUiDelegate* self, intptr_t slot) {
    auto* vkdialogjobuidelegate = dynamic_cast<VirtualKDialogJobUiDelegate*>(self);
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_DisconnectNotify_Callback(reinterpret_cast<VirtualKDialogJobUiDelegate::KDialogJobUiDelegate_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
KJob* KDialogJobUiDelegate_Job(const KDialogJobUiDelegate* self) {
    auto* vkdialogjobuidelegate = const_cast<VirtualKDialogJobUiDelegate*>(dynamic_cast<const VirtualKDialogJobUiDelegate*>(self));
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        return vkdialogjobuidelegate->job();
    } else {
        return ((VirtualKDialogJobUiDelegate*)self)->job();
    }
}

// Base class handler implementation
KJob* KDialogJobUiDelegate_QBaseJob(const KDialogJobUiDelegate* self) {
    auto* vkdialogjobuidelegate = const_cast<VirtualKDialogJobUiDelegate*>(dynamic_cast<const VirtualKDialogJobUiDelegate*>(self));
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_Job_IsBase(true);
        return vkdialogjobuidelegate->job();
    } else {
        return ((VirtualKDialogJobUiDelegate*)self)->job();
    }
}

// Auxiliary method to allow providing re-implementation
void KDialogJobUiDelegate_OnJob(const KDialogJobUiDelegate* self, intptr_t slot) {
    auto* vkdialogjobuidelegate = const_cast<VirtualKDialogJobUiDelegate*>(dynamic_cast<const VirtualKDialogJobUiDelegate*>(self));
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_Job_Callback(reinterpret_cast<VirtualKDialogJobUiDelegate::KDialogJobUiDelegate_Job_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KDialogJobUiDelegate_Sender(const KDialogJobUiDelegate* self) {
    auto* vkdialogjobuidelegate = const_cast<VirtualKDialogJobUiDelegate*>(dynamic_cast<const VirtualKDialogJobUiDelegate*>(self));
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        return vkdialogjobuidelegate->sender();
    } else {
        return ((VirtualKDialogJobUiDelegate*)self)->sender();
    }
}

// Base class handler implementation
QObject* KDialogJobUiDelegate_QBaseSender(const KDialogJobUiDelegate* self) {
    auto* vkdialogjobuidelegate = const_cast<VirtualKDialogJobUiDelegate*>(dynamic_cast<const VirtualKDialogJobUiDelegate*>(self));
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_Sender_IsBase(true);
        return vkdialogjobuidelegate->sender();
    } else {
        return ((VirtualKDialogJobUiDelegate*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KDialogJobUiDelegate_OnSender(const KDialogJobUiDelegate* self, intptr_t slot) {
    auto* vkdialogjobuidelegate = const_cast<VirtualKDialogJobUiDelegate*>(dynamic_cast<const VirtualKDialogJobUiDelegate*>(self));
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_Sender_Callback(reinterpret_cast<VirtualKDialogJobUiDelegate::KDialogJobUiDelegate_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KDialogJobUiDelegate_SenderSignalIndex(const KDialogJobUiDelegate* self) {
    auto* vkdialogjobuidelegate = const_cast<VirtualKDialogJobUiDelegate*>(dynamic_cast<const VirtualKDialogJobUiDelegate*>(self));
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        return vkdialogjobuidelegate->senderSignalIndex();
    } else {
        return ((VirtualKDialogJobUiDelegate*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KDialogJobUiDelegate_QBaseSenderSignalIndex(const KDialogJobUiDelegate* self) {
    auto* vkdialogjobuidelegate = const_cast<VirtualKDialogJobUiDelegate*>(dynamic_cast<const VirtualKDialogJobUiDelegate*>(self));
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_SenderSignalIndex_IsBase(true);
        return vkdialogjobuidelegate->senderSignalIndex();
    } else {
        return ((VirtualKDialogJobUiDelegate*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KDialogJobUiDelegate_OnSenderSignalIndex(const KDialogJobUiDelegate* self, intptr_t slot) {
    auto* vkdialogjobuidelegate = const_cast<VirtualKDialogJobUiDelegate*>(dynamic_cast<const VirtualKDialogJobUiDelegate*>(self));
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_SenderSignalIndex_Callback(reinterpret_cast<VirtualKDialogJobUiDelegate::KDialogJobUiDelegate_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KDialogJobUiDelegate_Receivers(const KDialogJobUiDelegate* self, const char* signal) {
    auto* vkdialogjobuidelegate = const_cast<VirtualKDialogJobUiDelegate*>(dynamic_cast<const VirtualKDialogJobUiDelegate*>(self));
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        return vkdialogjobuidelegate->receivers(signal);
    } else {
        return ((VirtualKDialogJobUiDelegate*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KDialogJobUiDelegate_QBaseReceivers(const KDialogJobUiDelegate* self, const char* signal) {
    auto* vkdialogjobuidelegate = const_cast<VirtualKDialogJobUiDelegate*>(dynamic_cast<const VirtualKDialogJobUiDelegate*>(self));
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_Receivers_IsBase(true);
        return vkdialogjobuidelegate->receivers(signal);
    } else {
        return ((VirtualKDialogJobUiDelegate*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDialogJobUiDelegate_OnReceivers(const KDialogJobUiDelegate* self, intptr_t slot) {
    auto* vkdialogjobuidelegate = const_cast<VirtualKDialogJobUiDelegate*>(dynamic_cast<const VirtualKDialogJobUiDelegate*>(self));
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_Receivers_Callback(reinterpret_cast<VirtualKDialogJobUiDelegate::KDialogJobUiDelegate_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDialogJobUiDelegate_IsSignalConnected(const KDialogJobUiDelegate* self, const QMetaMethod* signal) {
    auto* vkdialogjobuidelegate = const_cast<VirtualKDialogJobUiDelegate*>(dynamic_cast<const VirtualKDialogJobUiDelegate*>(self));
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        return vkdialogjobuidelegate->isSignalConnected(*signal);
    } else {
        return ((VirtualKDialogJobUiDelegate*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KDialogJobUiDelegate_QBaseIsSignalConnected(const KDialogJobUiDelegate* self, const QMetaMethod* signal) {
    auto* vkdialogjobuidelegate = const_cast<VirtualKDialogJobUiDelegate*>(dynamic_cast<const VirtualKDialogJobUiDelegate*>(self));
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_IsSignalConnected_IsBase(true);
        return vkdialogjobuidelegate->isSignalConnected(*signal);
    } else {
        return ((VirtualKDialogJobUiDelegate*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDialogJobUiDelegate_OnIsSignalConnected(const KDialogJobUiDelegate* self, intptr_t slot) {
    auto* vkdialogjobuidelegate = const_cast<VirtualKDialogJobUiDelegate*>(dynamic_cast<const VirtualKDialogJobUiDelegate*>(self));
    if (vkdialogjobuidelegate && vkdialogjobuidelegate->isVirtualKDialogJobUiDelegate) {
        vkdialogjobuidelegate->setKDialogJobUiDelegate_IsSignalConnected_Callback(reinterpret_cast<VirtualKDialogJobUiDelegate::KDialogJobUiDelegate_IsSignalConnected_Callback>(slot));
    }
}

void KDialogJobUiDelegate_Delete(KDialogJobUiDelegate* self) {
    delete self;
}
