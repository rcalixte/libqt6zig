#include <KNotificationReplyAction>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNotificationReplyAction_Tr(const char* s) {
    auto _ret = KNotificationReplyAction::tr(s);
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
    auto _ret = self->label();
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
    auto _ret = self->placeholderText();
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
    auto _ret = self->submitButtonText();
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
    auto _ret = self->submitButtonIconName();
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
    KNotificationReplyAction::connect(self,
                                      static_cast<void (KNotificationReplyAction::*)(const QString&)>(&KNotificationReplyAction::replied),
                                      [self, slotFunc](const QString& text) {
                                          const auto text_ret = text;
                                          // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                          QByteArray text_b = text_ret.toUtf8();
                                          auto text_str_len = text_b.length();
                                          const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
                                          memcpy((void*)text_str, text_b.data(), text_str_len);
                                          ((char*)text_str)[text_str_len] = '\0';
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
    KNotificationReplyAction::connect(self,
                                      static_cast<void (KNotificationReplyAction::*)()>(&KNotificationReplyAction::activated),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

void KNotificationReplyAction_LabelChanged(KNotificationReplyAction* self) {
    self->labelChanged();
}

void KNotificationReplyAction_Connect_LabelChanged(KNotificationReplyAction* self, intptr_t slot) {
    void (*slotFunc)(KNotificationReplyAction*) = reinterpret_cast<void (*)(KNotificationReplyAction*)>(slot);
    KNotificationReplyAction::connect(self,
                                      static_cast<void (KNotificationReplyAction::*)()>(&KNotificationReplyAction::labelChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

void KNotificationReplyAction_PlaceholderTextChanged(KNotificationReplyAction* self) {
    self->placeholderTextChanged();
}

void KNotificationReplyAction_Connect_PlaceholderTextChanged(KNotificationReplyAction* self, intptr_t slot) {
    void (*slotFunc)(KNotificationReplyAction*) = reinterpret_cast<void (*)(KNotificationReplyAction*)>(slot);
    KNotificationReplyAction::connect(self,
                                      static_cast<void (KNotificationReplyAction::*)()>(&KNotificationReplyAction::placeholderTextChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

void KNotificationReplyAction_SubmitButtonTextChanged(KNotificationReplyAction* self) {
    self->submitButtonTextChanged();
}

void KNotificationReplyAction_Connect_SubmitButtonTextChanged(KNotificationReplyAction* self, intptr_t slot) {
    void (*slotFunc)(KNotificationReplyAction*) = reinterpret_cast<void (*)(KNotificationReplyAction*)>(slot);
    KNotificationReplyAction::connect(self,
                                      static_cast<void (KNotificationReplyAction::*)()>(&KNotificationReplyAction::submitButtonTextChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

void KNotificationReplyAction_SubmitButtonIconNameChanged(KNotificationReplyAction* self) {
    self->submitButtonIconNameChanged();
}

void KNotificationReplyAction_Connect_SubmitButtonIconNameChanged(KNotificationReplyAction* self, intptr_t slot) {
    void (*slotFunc)(KNotificationReplyAction*) = reinterpret_cast<void (*)(KNotificationReplyAction*)>(slot);
    KNotificationReplyAction::connect(self,
                                      static_cast<void (KNotificationReplyAction::*)()>(&KNotificationReplyAction::submitButtonIconNameChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

void KNotificationReplyAction_FallbackBehaviorChanged(KNotificationReplyAction* self) {
    self->fallbackBehaviorChanged();
}

void KNotificationReplyAction_Connect_FallbackBehaviorChanged(KNotificationReplyAction* self, intptr_t slot) {
    void (*slotFunc)(KNotificationReplyAction*) = reinterpret_cast<void (*)(KNotificationReplyAction*)>(slot);
    KNotificationReplyAction::connect(self,
                                      static_cast<void (KNotificationReplyAction::*)()>(&KNotificationReplyAction::fallbackBehaviorChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

libqt_string KNotificationReplyAction_Tr2(const char* s, const char* c) {
    auto _ret = KNotificationReplyAction::tr(s, c);
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
    auto _ret = KNotificationReplyAction::tr(s, c, static_cast<int>(n));
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
QMetaObject* KNotificationReplyAction_SuperMetaObject(const KNotificationReplyAction* self) {
    return (QMetaObject*)self->KNotificationReplyAction::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnMetaObject(KNotificationReplyAction* self, intptr_t slot) {
    if (auto* vknotificationreplyaction = const_cast<VirtualKNotificationReplyAction*>(dynamic_cast<const VirtualKNotificationReplyAction*>(self)))
        vknotificationreplyaction->knotificationreplyaction_metaobject_callback = reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KNotificationReplyAction_SuperMetacast(KNotificationReplyAction* self, const char* param1) {
    return self->KNotificationReplyAction::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnMetacast(KNotificationReplyAction* self, intptr_t slot) {
    if (auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self))
        vknotificationreplyaction->knotificationreplyaction_metacast_callback = reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_Metacast_Callback>(slot);
}

// Base class handler implementation
int KNotificationReplyAction_SuperMetacall(KNotificationReplyAction* self, int param1, int param2, void** param3) {
    return self->KNotificationReplyAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnMetacall(KNotificationReplyAction* self, intptr_t slot) {
    if (auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self))
        vknotificationreplyaction->knotificationreplyaction_metacall_callback = reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KNotificationReplyAction_Event(KNotificationReplyAction* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KNotificationReplyAction_SuperEvent(KNotificationReplyAction* self, QEvent* event) {
    return self->KNotificationReplyAction::event(event);
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnEvent(KNotificationReplyAction* self, intptr_t slot) {
    if (auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self))
        vknotificationreplyaction->knotificationreplyaction_event_callback = reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_Event_Callback>(slot);
}

// Derived class handler implementation
bool KNotificationReplyAction_EventFilter(KNotificationReplyAction* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KNotificationReplyAction_SuperEventFilter(KNotificationReplyAction* self, QObject* watched, QEvent* event) {
    return self->KNotificationReplyAction::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnEventFilter(KNotificationReplyAction* self, intptr_t slot) {
    if (auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self))
        vknotificationreplyaction->knotificationreplyaction_eventfilter_callback = reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KNotificationReplyAction_TimerEvent(KNotificationReplyAction* self, QTimerEvent* event) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction) {
        vknotificationreplyaction->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNotificationReplyAction::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNotificationReplyAction_SuperTimerEvent(KNotificationReplyAction* self, QTimerEvent* event) {
    if (auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self)) {
        vknotificationreplyaction->KNotificationReplyAction::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KNotificationReplyAction::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnTimerEvent(KNotificationReplyAction* self, intptr_t slot) {
    if (auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self))
        vknotificationreplyaction->knotificationreplyaction_timerevent_callback = reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KNotificationReplyAction_ChildEvent(KNotificationReplyAction* self, QChildEvent* event) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction) {
        vknotificationreplyaction->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNotificationReplyAction::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNotificationReplyAction_SuperChildEvent(KNotificationReplyAction* self, QChildEvent* event) {
    if (auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self)) {
        vknotificationreplyaction->KNotificationReplyAction::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KNotificationReplyAction::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnChildEvent(KNotificationReplyAction* self, intptr_t slot) {
    if (auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self))
        vknotificationreplyaction->knotificationreplyaction_childevent_callback = reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KNotificationReplyAction_CustomEvent(KNotificationReplyAction* self, QEvent* event) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction) {
        vknotificationreplyaction->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNotificationReplyAction::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNotificationReplyAction_SuperCustomEvent(KNotificationReplyAction* self, QEvent* event) {
    if (auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self)) {
        vknotificationreplyaction->KNotificationReplyAction::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KNotificationReplyAction::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnCustomEvent(KNotificationReplyAction* self, intptr_t slot) {
    if (auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self))
        vknotificationreplyaction->knotificationreplyaction_customevent_callback = reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KNotificationReplyAction_ConnectNotify(KNotificationReplyAction* self, const QMetaMethod* signal) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction) {
        vknotificationreplyaction->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNotificationReplyAction::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNotificationReplyAction_SuperConnectNotify(KNotificationReplyAction* self, const QMetaMethod* signal) {
    if (auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self)) {
        vknotificationreplyaction->KNotificationReplyAction::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNotificationReplyAction::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnConnectNotify(KNotificationReplyAction* self, intptr_t slot) {
    if (auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self))
        vknotificationreplyaction->knotificationreplyaction_connectnotify_callback = reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KNotificationReplyAction_DisconnectNotify(KNotificationReplyAction* self, const QMetaMethod* signal) {
    auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self);
    if (vknotificationreplyaction) {
        vknotificationreplyaction->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNotificationReplyAction::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNotificationReplyAction_SuperDisconnectNotify(KNotificationReplyAction* self, const QMetaMethod* signal) {
    if (auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self)) {
        vknotificationreplyaction->KNotificationReplyAction::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNotificationReplyAction::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNotificationReplyAction_OnDisconnectNotify(KNotificationReplyAction* self, intptr_t slot) {
    if (auto* vknotificationreplyaction = dynamic_cast<VirtualKNotificationReplyAction*>(self))
        vknotificationreplyaction->knotificationreplyaction_disconnectnotify_callback = reinterpret_cast<VirtualKNotificationReplyAction::KNotificationReplyAction_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KNotificationReplyAction_Sender(const KNotificationReplyAction* self) {
    if (auto* vknotificationreplyaction = const_cast<VirtualKNotificationReplyAction*>(dynamic_cast<const VirtualKNotificationReplyAction*>(self))) {
        return vknotificationreplyaction->VirtualKNotificationReplyAction::sender();
    } else
        qFatal("Error: Protected method KNotificationReplyAction::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KNotificationReplyAction_SenderSignalIndex(const KNotificationReplyAction* self) {
    if (auto* vknotificationreplyaction = const_cast<VirtualKNotificationReplyAction*>(dynamic_cast<const VirtualKNotificationReplyAction*>(self))) {
        return vknotificationreplyaction->VirtualKNotificationReplyAction::senderSignalIndex();
    } else
        qFatal("Error: Protected method KNotificationReplyAction::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KNotificationReplyAction_Receivers(const KNotificationReplyAction* self, const char* signal) {
    if (auto* vknotificationreplyaction = const_cast<VirtualKNotificationReplyAction*>(dynamic_cast<const VirtualKNotificationReplyAction*>(self))) {
        return vknotificationreplyaction->VirtualKNotificationReplyAction::receivers(signal);
    } else
        qFatal("Error: Protected method KNotificationReplyAction::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNotificationReplyAction_IsSignalConnected(const KNotificationReplyAction* self, const QMetaMethod* signal) {
    if (auto* vknotificationreplyaction = const_cast<VirtualKNotificationReplyAction*>(dynamic_cast<const VirtualKNotificationReplyAction*>(self))) {
        return vknotificationreplyaction->VirtualKNotificationReplyAction::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KNotificationReplyAction::isSignalConnected called without a directly constructed type");
}

void KNotificationReplyAction_Delete(KNotificationReplyAction* self) {
    delete self;
}
