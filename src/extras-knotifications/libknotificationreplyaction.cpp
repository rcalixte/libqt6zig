#include <KNotificationReplyAction>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <knotificationreplyaction.h>
#include "libknotificationreplyaction.h"
#include "libknotificationreplyaction.hxx"

KNotificationReplyAction* KNotificationReplyAction_new(const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return new VirtualKNotificationReplyAction(label_QString);
}

QMetaObject* KNotificationReplyAction_MetaObject(const KNotificationReplyAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNotificationReplyAction_Metacast(KNotificationReplyAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNotificationReplyAction_Metacall(KNotificationReplyAction* self, int param1, int param2, void** param3) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKNotificationReplyAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KNotificationReplyAction_Tr(const char* s) {
    QString _ret = KNotificationReplyAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNotificationReplyAction_Label(const KNotificationReplyAction* self) {
    QString _ret = self->label();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNotificationReplyAction_SetLabel(KNotificationReplyAction* self, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->setLabel(label_QString);
}

libqt_string KNotificationReplyAction_PlaceholderText(const KNotificationReplyAction* self) {
    QString _ret = self->placeholderText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNotificationReplyAction_SetPlaceholderText(KNotificationReplyAction* self, const libqt_string placeholderText) {
    QString placeholderText_QString = QString::fromUtf8(placeholderText.data, placeholderText.len);
    self->setPlaceholderText(placeholderText_QString);
}

libqt_string KNotificationReplyAction_SubmitButtonText(const KNotificationReplyAction* self) {
    QString _ret = self->submitButtonText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNotificationReplyAction_SetSubmitButtonText(KNotificationReplyAction* self, const libqt_string submitButtonText) {
    QString submitButtonText_QString = QString::fromUtf8(submitButtonText.data, submitButtonText.len);
    self->setSubmitButtonText(submitButtonText_QString);
}

libqt_string KNotificationReplyAction_SubmitButtonIconName(const KNotificationReplyAction* self) {
    QString _ret = self->submitButtonIconName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNotificationReplyAction_SetSubmitButtonIconName(KNotificationReplyAction* self, const libqt_string submitButtonIconName) {
    QString submitButtonIconName_QString = QString::fromUtf8(submitButtonIconName.data, submitButtonIconName.len);
    self->setSubmitButtonIconName(submitButtonIconName_QString);
}

int KNotificationReplyAction_FallbackBehavior(const KNotificationReplyAction* self) {
    return static_cast<int>(self->fallbackBehavior());
}

void KNotificationReplyAction_SetFallbackBehavior(KNotificationReplyAction* self, int fallbackBehavior) {
    self->setFallbackBehavior(static_cast<KNotificationReplyAction::FallbackBehavior>(fallbackBehavior));
}

void KNotificationReplyAction_Replied(KNotificationReplyAction* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->replied(text_QString);
}

void KNotificationReplyAction_Connect_Replied(KNotificationReplyAction* self, intptr_t slot) {
    void (*slotFunc)(KNotificationReplyAction*, const char*) = reinterpret_cast<void (*)(KNotificationReplyAction*, const char*)>(slot);
    KNotificationReplyAction::connect(self, &KNotificationReplyAction::replied, [self, slotFunc](const QString& text) {
        const QString text_ret = text;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray text_b = text_ret.toUtf8();
        const char* text_str = static_cast<const char*>(malloc(text_b.length() + 1));
        memcpy((void*)text_str, text_b.data(), text_b.length());
        ((char*)text_str)[text_b.length()] = '\0';
        const char* sigval1 = text_str;
        slotFunc(self, sigval1);
        libqt_free(text_str);
    });
}

void KNotificationReplyAction_Activated(KNotificationReplyAction* self) {
    self->activated();
}

void KNotificationReplyAction_Connect_Activated(KNotificationReplyAction* self, intptr_t slot) {
    void (*slotFunc)(KNotificationReplyAction*) = reinterpret_cast<void (*)(KNotificationReplyAction*)>(slot);
    KNotificationReplyAction::connect(self, &KNotificationReplyAction::activated, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KNotificationReplyAction_LabelChanged(KNotificationReplyAction* self) {
    self->labelChanged();
}

void KNotificationReplyAction_Connect_LabelChanged(KNotificationReplyAction* self, intptr_t slot) {
    void (*slotFunc)(KNotificationReplyAction*) = reinterpret_cast<void (*)(KNotificationReplyAction*)>(slot);
    KNotificationReplyAction::connect(self, &KNotificationReplyAction::labelChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KNotificationReplyAction_PlaceholderTextChanged(KNotificationReplyAction* self) {
    self->placeholderTextChanged();
}

void KNotificationReplyAction_Connect_PlaceholderTextChanged(KNotificationReplyAction* self, intptr_t slot) {
    void (*slotFunc)(KNotificationReplyAction*) = reinterpret_cast<void (*)(KNotificationReplyAction*)>(slot);
    KNotificationReplyAction::connect(self, &KNotificationReplyAction::placeholderTextChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KNotificationReplyAction_SubmitButtonTextChanged(KNotificationReplyAction* self) {
    self->submitButtonTextChanged();
}

void KNotificationReplyAction_Connect_SubmitButtonTextChanged(KNotificationReplyAction* self, intptr_t slot) {
    void (*slotFunc)(KNotificationReplyAction*) = reinterpret_cast<void (*)(KNotificationReplyAction*)>(slot);
    KNotificationReplyAction::connect(self, &KNotificationReplyAction::submitButtonTextChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KNotificationReplyAction_SubmitButtonIconNameChanged(KNotificationReplyAction* self) {
    self->submitButtonIconNameChanged();
}

void KNotificationReplyAction_Connect_SubmitButtonIconNameChanged(KNotificationReplyAction* self, intptr_t slot) {
    void (*slotFunc)(KNotificationReplyAction*) = reinterpret_cast<void (*)(KNotificationReplyAction*)>(slot);
    KNotificationReplyAction::connect(self, &KNotificationReplyAction::submitButtonIconNameChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KNotificationReplyAction_FallbackBehaviorChanged(KNotificationReplyAction* self) {
    self->fallbackBehaviorChanged();
}

void KNotificationReplyAction_Connect_FallbackBehaviorChanged(KNotificationReplyAction* self, intptr_t slot) {
    void (*slotFunc)(KNotificationReplyAction*) = reinterpret_cast<void (*)(KNotificationReplyAction*)>(slot);
    KNotificationReplyAction::connect(self, &KNotificationReplyAction::fallbackBehaviorChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KNotificationReplyAction_Tr2(const char* s, const char* c) {
    QString _ret = KNotificationReplyAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNotificationReplyAction_Tr3(const char* s, const char* c, int n) {
    QString _ret = KNotificationReplyAction::tr(s, c, static_cast<int>(n));
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
int KNotificationReplyAction_QBaseMetacall(KNotificationReplyAction* self, int param1, int param2, void** param3) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_Metacall_IsBase(true);
        return vknotificationreplyaction->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KNotificationReplyAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnMetacall(KNotificationReplyAction* self, intptr_t slot) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_Metacall_Callback(reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNotificationReplyAction_Event(KNotificationReplyAction* self, QEvent* event) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        return vknotificationreplyaction->event(event);
    } else {
        return self->KNotificationReplyAction::event(event);
    }
}

// Base class handler implementation
bool KNotificationReplyAction_QBaseEvent(KNotificationReplyAction* self, QEvent* event) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_Event_IsBase(true);
        return vknotificationreplyaction->event(event);
    } else {
        return self->KNotificationReplyAction::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnEvent(KNotificationReplyAction* self, intptr_t slot) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_Event_Callback(reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNotificationReplyAction_EventFilter(KNotificationReplyAction* self, QObject* watched, QEvent* event) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        return vknotificationreplyaction->eventFilter(watched, event);
    } else {
        return self->KNotificationReplyAction::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KNotificationReplyAction_QBaseEventFilter(KNotificationReplyAction* self, QObject* watched, QEvent* event) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_EventFilter_IsBase(true);
        return vknotificationreplyaction->eventFilter(watched, event);
    } else {
        return self->KNotificationReplyAction::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnEventFilter(KNotificationReplyAction* self, intptr_t slot) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_EventFilter_Callback(reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KNotificationReplyAction_TimerEvent(KNotificationReplyAction* self, QTimerEvent* event) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->timerEvent(event);
    } else {
        ((VirtualKNotificationReplyAction*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KNotificationReplyAction_QBaseTimerEvent(KNotificationReplyAction* self, QTimerEvent* event) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_TimerEvent_IsBase(true);
        vknotificationreplyaction->timerEvent(event);
    } else {
        ((VirtualKNotificationReplyAction*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnTimerEvent(KNotificationReplyAction* self, intptr_t slot) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_TimerEvent_Callback(reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNotificationReplyAction_ChildEvent(KNotificationReplyAction* self, QChildEvent* event) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->childEvent(event);
    } else {
        ((VirtualKNotificationReplyAction*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KNotificationReplyAction_QBaseChildEvent(KNotificationReplyAction* self, QChildEvent* event) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_ChildEvent_IsBase(true);
        vknotificationreplyaction->childEvent(event);
    } else {
        ((VirtualKNotificationReplyAction*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnChildEvent(KNotificationReplyAction* self, intptr_t slot) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_ChildEvent_Callback(reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNotificationReplyAction_CustomEvent(KNotificationReplyAction* self, QEvent* event) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->customEvent(event);
    } else {
        ((VirtualKNotificationReplyAction*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KNotificationReplyAction_QBaseCustomEvent(KNotificationReplyAction* self, QEvent* event) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_CustomEvent_IsBase(true);
        vknotificationreplyaction->customEvent(event);
    } else {
        ((VirtualKNotificationReplyAction*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnCustomEvent(KNotificationReplyAction* self, intptr_t slot) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_CustomEvent_Callback(reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNotificationReplyAction_ConnectNotify(KNotificationReplyAction* self, const QMetaMethod* signal) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->connectNotify(*signal);
    } else {
        ((VirtualKNotificationReplyAction*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KNotificationReplyAction_QBaseConnectNotify(KNotificationReplyAction* self, const QMetaMethod* signal) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_ConnectNotify_IsBase(true);
        vknotificationreplyaction->connectNotify(*signal);
    } else {
        ((VirtualKNotificationReplyAction*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnConnectNotify(KNotificationReplyAction* self, intptr_t slot) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_ConnectNotify_Callback(reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNotificationReplyAction_DisconnectNotify(KNotificationReplyAction* self, const QMetaMethod* signal) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->disconnectNotify(*signal);
    } else {
        ((VirtualKNotificationReplyAction*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KNotificationReplyAction_QBaseDisconnectNotify(KNotificationReplyAction* self, const QMetaMethod* signal) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_DisconnectNotify_IsBase(true);
        vknotificationreplyaction->disconnectNotify(*signal);
    } else {
        ((VirtualKNotificationReplyAction*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnDisconnectNotify(KNotificationReplyAction* self, intptr_t slot) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_DisconnectNotify_Callback(reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KNotificationReplyAction_Sender(const KNotificationReplyAction* self) {
    auto* vknotificationreplyaction = const_cast<VirtualKNotificationReplyAction*>(dynamic_cast<const VirtualKNotificationReplyAction*>(self));
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        return vknotificationreplyaction->sender();
    } else {
        return ((VirtualKNotificationReplyAction*)self)->sender();
    }
}

// Base class handler implementation
QObject* KNotificationReplyAction_QBaseSender(const KNotificationReplyAction* self) {
    auto* vknotificationreplyaction = const_cast<VirtualKNotificationReplyAction*>(dynamic_cast<const VirtualKNotificationReplyAction*>(self));
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_Sender_IsBase(true);
        return vknotificationreplyaction->sender();
    } else {
        return ((VirtualKNotificationReplyAction*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnSender(const KNotificationReplyAction* self, intptr_t slot) {
    auto* vknotificationreplyaction = const_cast<VirtualKNotificationReplyAction*>(dynamic_cast<const VirtualKNotificationReplyAction*>(self));
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_Sender_Callback(reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KNotificationReplyAction_SenderSignalIndex(const KNotificationReplyAction* self) {
    auto* vknotificationreplyaction = const_cast<VirtualKNotificationReplyAction*>(dynamic_cast<const VirtualKNotificationReplyAction*>(self));
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        return vknotificationreplyaction->senderSignalIndex();
    } else {
        return ((VirtualKNotificationReplyAction*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KNotificationReplyAction_QBaseSenderSignalIndex(const KNotificationReplyAction* self) {
    auto* vknotificationreplyaction = const_cast<VirtualKNotificationReplyAction*>(dynamic_cast<const VirtualKNotificationReplyAction*>(self));
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_SenderSignalIndex_IsBase(true);
        return vknotificationreplyaction->senderSignalIndex();
    } else {
        return ((VirtualKNotificationReplyAction*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnSenderSignalIndex(const KNotificationReplyAction* self, intptr_t slot) {
    auto* vknotificationreplyaction = const_cast<VirtualKNotificationReplyAction*>(dynamic_cast<const VirtualKNotificationReplyAction*>(self));
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_SenderSignalIndex_Callback(reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KNotificationReplyAction_Receivers(const KNotificationReplyAction* self, const char* signal) {
    auto* vknotificationreplyaction = const_cast<VirtualKNotificationReplyAction*>(dynamic_cast<const VirtualKNotificationReplyAction*>(self));
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        return vknotificationreplyaction->receivers(signal);
    } else {
        return ((VirtualKNotificationReplyAction*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KNotificationReplyAction_QBaseReceivers(const KNotificationReplyAction* self, const char* signal) {
    auto* vknotificationreplyaction = const_cast<VirtualKNotificationReplyAction*>(dynamic_cast<const VirtualKNotificationReplyAction*>(self));
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_Receivers_IsBase(true);
        return vknotificationreplyaction->receivers(signal);
    } else {
        return ((VirtualKNotificationReplyAction*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnReceivers(const KNotificationReplyAction* self, intptr_t slot) {
    auto* vknotificationreplyaction = const_cast<VirtualKNotificationReplyAction*>(dynamic_cast<const VirtualKNotificationReplyAction*>(self));
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_Receivers_Callback(reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNotificationReplyAction_IsSignalConnected(const KNotificationReplyAction* self, const QMetaMethod* signal) {
    auto* vknotificationreplyaction = const_cast<VirtualKNotificationReplyAction*>(dynamic_cast<const VirtualKNotificationReplyAction*>(self));
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        return vknotificationreplyaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKNotificationReplyAction*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KNotificationReplyAction_QBaseIsSignalConnected(const KNotificationReplyAction* self, const QMetaMethod* signal) {
    auto* vknotificationreplyaction = const_cast<VirtualKNotificationReplyAction*>(dynamic_cast<const VirtualKNotificationReplyAction*>(self));
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_IsSignalConnected_IsBase(true);
        return vknotificationreplyaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKNotificationReplyAction*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnIsSignalConnected(const KNotificationReplyAction* self, intptr_t slot) {
    auto* vknotificationreplyaction = const_cast<VirtualKNotificationReplyAction*>(dynamic_cast<const VirtualKNotificationReplyAction*>(self));
    if (vknotificationreplyaction && vknotificationreplyaction->isVirtualKNotificationReplyAction) {
        vknotificationreplyaction->setKNotificationReplyAction_IsSignalConnected_Callback(reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_IsSignalConnected_Callback>(slot));
    }
}

void KNotificationReplyAction_Delete(KNotificationReplyAction* self) {
    delete self;
}
