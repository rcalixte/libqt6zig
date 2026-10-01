#include <KJob>
#include <KJobUiDelegate>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KJobUiDelegate_Tr(const char* s) {
    auto _ret = KJobUiDelegate::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KJobUiDelegate_SetJob(KJobUiDelegate* self, KJob* job) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate) {
        return vkjobuidelegate->setJob(job);
    }
    qFatal("Error: Protected method KJobUiDelegate::setJob called without a directly constructed type");
}

void KJobUiDelegate_ShowErrorMessage(KJobUiDelegate* self) {
    self->showErrorMessage();
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

void KJobUiDelegate_SlotWarning(KJobUiDelegate* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate) {
        vkjobuidelegate->slotWarning(job, message_QString);
    }
}

libqt_string KJobUiDelegate_Tr2(const char* s, const char* c) {
    auto _ret = KJobUiDelegate::tr(s, c);
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
    auto _ret = KJobUiDelegate::tr(s, c, static_cast<int>(n));
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
QMetaObject* KJobUiDelegate_SuperMetaObject(const KJobUiDelegate* self) {
    return (QMetaObject*)self->KJobUiDelegate::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnMetaObject(KJobUiDelegate* self, intptr_t slot) {
    if (auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self)))
        vkjobuidelegate->kjobuidelegate_metaobject_callback = reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KJobUiDelegate_SuperMetacast(KJobUiDelegate* self, const char* param1) {
    return self->KJobUiDelegate::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnMetacast(KJobUiDelegate* self, intptr_t slot) {
    if (auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self))
        vkjobuidelegate->kjobuidelegate_metacast_callback = reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_Metacast_Callback>(slot);
}

// Base class handler implementation
int KJobUiDelegate_SuperMetacall(KJobUiDelegate* self, int param1, int param2, void** param3) {
    return self->KJobUiDelegate::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnMetacall(KJobUiDelegate* self, intptr_t slot) {
    if (auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self))
        vkjobuidelegate->kjobuidelegate_metacall_callback = reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KJobUiDelegate_SuperSetJob(KJobUiDelegate* self, KJob* job) {
    if (auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self)) {
        return vkjobuidelegate->KJobUiDelegate::setJob(job);
    } else
        qFatal("Error: Protected virtual method KJobUiDelegate::setJob called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnSetJob(KJobUiDelegate* self, intptr_t slot) {
    if (auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self))
        vkjobuidelegate->kjobuidelegate_setjob_callback = reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_SetJob_Callback>(slot);
}

// Base class handler implementation
void KJobUiDelegate_SuperShowErrorMessage(KJobUiDelegate* self) {
    self->KJobUiDelegate::showErrorMessage();
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnShowErrorMessage(KJobUiDelegate* self, intptr_t slot) {
    if (auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self))
        vkjobuidelegate->kjobuidelegate_showerrormessage_callback = reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_ShowErrorMessage_Callback>(slot);
}

// Base class handler implementation
void KJobUiDelegate_SuperSlotWarning(KJobUiDelegate* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self)) {
        vkjobuidelegate->KJobUiDelegate::slotWarning(job, message_QString);
    } else
        qFatal("Error: Protected virtual method KJobUiDelegate::slotWarning called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnSlotWarning(KJobUiDelegate* self, intptr_t slot) {
    if (auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self))
        vkjobuidelegate->kjobuidelegate_slotwarning_callback = reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_SlotWarning_Callback>(slot);
}

// Derived class handler implementation
bool KJobUiDelegate_Event(KJobUiDelegate* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KJobUiDelegate_SuperEvent(KJobUiDelegate* self, QEvent* event) {
    return self->KJobUiDelegate::event(event);
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnEvent(KJobUiDelegate* self, intptr_t slot) {
    if (auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self))
        vkjobuidelegate->kjobuidelegate_event_callback = reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_Event_Callback>(slot);
}

// Derived class handler implementation
bool KJobUiDelegate_EventFilter(KJobUiDelegate* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KJobUiDelegate_SuperEventFilter(KJobUiDelegate* self, QObject* watched, QEvent* event) {
    return self->KJobUiDelegate::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnEventFilter(KJobUiDelegate* self, intptr_t slot) {
    if (auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self))
        vkjobuidelegate->kjobuidelegate_eventfilter_callback = reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KJobUiDelegate_TimerEvent(KJobUiDelegate* self, QTimerEvent* event) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate) {
        vkjobuidelegate->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KJobUiDelegate::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KJobUiDelegate_SuperTimerEvent(KJobUiDelegate* self, QTimerEvent* event) {
    if (auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self)) {
        vkjobuidelegate->KJobUiDelegate::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KJobUiDelegate::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnTimerEvent(KJobUiDelegate* self, intptr_t slot) {
    if (auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self))
        vkjobuidelegate->kjobuidelegate_timerevent_callback = reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KJobUiDelegate_ChildEvent(KJobUiDelegate* self, QChildEvent* event) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate) {
        vkjobuidelegate->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KJobUiDelegate::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KJobUiDelegate_SuperChildEvent(KJobUiDelegate* self, QChildEvent* event) {
    if (auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self)) {
        vkjobuidelegate->KJobUiDelegate::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KJobUiDelegate::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnChildEvent(KJobUiDelegate* self, intptr_t slot) {
    if (auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self))
        vkjobuidelegate->kjobuidelegate_childevent_callback = reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KJobUiDelegate_CustomEvent(KJobUiDelegate* self, QEvent* event) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate) {
        vkjobuidelegate->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KJobUiDelegate::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KJobUiDelegate_SuperCustomEvent(KJobUiDelegate* self, QEvent* event) {
    if (auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self)) {
        vkjobuidelegate->KJobUiDelegate::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KJobUiDelegate::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnCustomEvent(KJobUiDelegate* self, intptr_t slot) {
    if (auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self))
        vkjobuidelegate->kjobuidelegate_customevent_callback = reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KJobUiDelegate_ConnectNotify(KJobUiDelegate* self, const QMetaMethod* signal) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate) {
        vkjobuidelegate->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KJobUiDelegate::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KJobUiDelegate_SuperConnectNotify(KJobUiDelegate* self, const QMetaMethod* signal) {
    if (auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self)) {
        vkjobuidelegate->KJobUiDelegate::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KJobUiDelegate::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnConnectNotify(KJobUiDelegate* self, intptr_t slot) {
    if (auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self))
        vkjobuidelegate->kjobuidelegate_connectnotify_callback = reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KJobUiDelegate_DisconnectNotify(KJobUiDelegate* self, const QMetaMethod* signal) {
    auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self);
    if (vkjobuidelegate) {
        vkjobuidelegate->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KJobUiDelegate::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KJobUiDelegate_SuperDisconnectNotify(KJobUiDelegate* self, const QMetaMethod* signal) {
    if (auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self)) {
        vkjobuidelegate->KJobUiDelegate::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KJobUiDelegate::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KJobUiDelegate_OnDisconnectNotify(KJobUiDelegate* self, intptr_t slot) {
    if (auto* vkjobuidelegate = dynamic_cast<VirtualKJobUiDelegate*>(self))
        vkjobuidelegate->kjobuidelegate_disconnectnotify_callback = reinterpret_cast<VirtualKJobUiDelegate::KJobUiDelegate_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
KJob* KJobUiDelegate_Job(const KJobUiDelegate* self) {
    if (auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self))) {
        return vkjobuidelegate->VirtualKJobUiDelegate::job();
    } else
        qFatal("Error: Protected method KJobUiDelegate::job called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KJobUiDelegate_Sender(const KJobUiDelegate* self) {
    if (auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self))) {
        return vkjobuidelegate->VirtualKJobUiDelegate::sender();
    } else
        qFatal("Error: Protected method KJobUiDelegate::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KJobUiDelegate_SenderSignalIndex(const KJobUiDelegate* self) {
    if (auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self))) {
        return vkjobuidelegate->VirtualKJobUiDelegate::senderSignalIndex();
    } else
        qFatal("Error: Protected method KJobUiDelegate::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KJobUiDelegate_Receivers(const KJobUiDelegate* self, const char* signal) {
    if (auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self))) {
        return vkjobuidelegate->VirtualKJobUiDelegate::receivers(signal);
    } else
        qFatal("Error: Protected method KJobUiDelegate::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KJobUiDelegate_IsSignalConnected(const KJobUiDelegate* self, const QMetaMethod* signal) {
    if (auto* vkjobuidelegate = const_cast<VirtualKJobUiDelegate*>(dynamic_cast<const VirtualKJobUiDelegate*>(self))) {
        return vkjobuidelegate->VirtualKJobUiDelegate::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KJobUiDelegate::isSignalConnected called without a directly constructed type");
}

void KJobUiDelegate_Delete(KJobUiDelegate* self) {
    delete self;
}
