#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Question
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__QuestionListener
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <questionlistener.h>
#include "libquestionlistener.h"
#include "libquestionlistener.hxx"

KNSCore__QuestionListener* KNSCore__QuestionListener_new() {
    return new VirtualKNSCoreQuestionListener();
}

KNSCore__QuestionListener* KNSCore__QuestionListener_new2(QObject* parent) {
    return new VirtualKNSCoreQuestionListener(parent);
}

QMetaObject* KNSCore__QuestionListener_MetaObject(const KNSCore__QuestionListener* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNSCore__QuestionListener_Metacast(KNSCore__QuestionListener* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNSCore__QuestionListener_Metacall(KNSCore__QuestionListener* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNSCore__QuestionListener_Tr(const char* s) {
    auto _ret = KNSCore::QuestionListener::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__QuestionListener_AskQuestion(KNSCore__QuestionListener* self, KNSCore__Question* question) {
    self->askQuestion(question);
}

libqt_string KNSCore__QuestionListener_Tr2(const char* s, const char* c) {
    auto _ret = KNSCore::QuestionListener::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSCore__QuestionListener_Tr3(const char* s, const char* c, int n) {
    auto _ret = KNSCore::QuestionListener::tr(s, c, static_cast<int>(n));
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
QMetaObject* KNSCore__QuestionListener_SuperMetaObject(const KNSCore__QuestionListener* self) {
    return (QMetaObject*)self->KNSCore::QuestionListener::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnMetaObject(KNSCore__QuestionListener* self, intptr_t slot) {
    if (auto* vknscorequestionlistener = const_cast<VirtualKNSCoreQuestionListener*>(dynamic_cast<const VirtualKNSCoreQuestionListener*>(self)))
        vknscorequestionlistener->knscore__questionlistener_metaobject_callback = reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KNSCore__QuestionListener_SuperMetacast(KNSCore__QuestionListener* self, const char* param1) {
    return self->KNSCore::QuestionListener::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnMetacast(KNSCore__QuestionListener* self, intptr_t slot) {
    if (auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self))
        vknscorequestionlistener->knscore__questionlistener_metacast_callback = reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_Metacast_Callback>(slot);
}

// Base class handler implementation
int KNSCore__QuestionListener_SuperMetacall(KNSCore__QuestionListener* self, int param1, int param2, void** param3) {
    return self->KNSCore::QuestionListener::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnMetacall(KNSCore__QuestionListener* self, intptr_t slot) {
    if (auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self))
        vknscorequestionlistener->knscore__questionlistener_metacall_callback = reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnAskQuestion(KNSCore__QuestionListener* self, intptr_t slot) {
    if (auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self))
        vknscorequestionlistener->knscore__questionlistener_askquestion_callback = reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_AskQuestion_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__QuestionListener_Event(KNSCore__QuestionListener* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KNSCore__QuestionListener_SuperEvent(KNSCore__QuestionListener* self, QEvent* event) {
    return self->KNSCore::QuestionListener::event(event);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnEvent(KNSCore__QuestionListener* self, intptr_t slot) {
    if (auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self))
        vknscorequestionlistener->knscore__questionlistener_event_callback = reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_Event_Callback>(slot);
}

// Derived class handler implementation
bool KNSCore__QuestionListener_EventFilter(KNSCore__QuestionListener* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KNSCore__QuestionListener_SuperEventFilter(KNSCore__QuestionListener* self, QObject* watched, QEvent* event) {
    return self->KNSCore::QuestionListener::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnEventFilter(KNSCore__QuestionListener* self, intptr_t slot) {
    if (auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self))
        vknscorequestionlistener->knscore__questionlistener_eventfilter_callback = reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__QuestionListener_TimerEvent(KNSCore__QuestionListener* self, QTimerEvent* event) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener) {
        vknscorequestionlistener->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSCore::QuestionListener::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSCore__QuestionListener_SuperTimerEvent(KNSCore__QuestionListener* self, QTimerEvent* event) {
    if (auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self)) {
        vknscorequestionlistener->KNSCore::QuestionListener::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSCore::QuestionListener::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnTimerEvent(KNSCore__QuestionListener* self, intptr_t slot) {
    if (auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self))
        vknscorequestionlistener->knscore__questionlistener_timerevent_callback = reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__QuestionListener_ChildEvent(KNSCore__QuestionListener* self, QChildEvent* event) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener) {
        vknscorequestionlistener->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSCore::QuestionListener::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSCore__QuestionListener_SuperChildEvent(KNSCore__QuestionListener* self, QChildEvent* event) {
    if (auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self)) {
        vknscorequestionlistener->KNSCore::QuestionListener::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSCore::QuestionListener::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnChildEvent(KNSCore__QuestionListener* self, intptr_t slot) {
    if (auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self))
        vknscorequestionlistener->knscore__questionlistener_childevent_callback = reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__QuestionListener_CustomEvent(KNSCore__QuestionListener* self, QEvent* event) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener) {
        vknscorequestionlistener->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSCore::QuestionListener::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSCore__QuestionListener_SuperCustomEvent(KNSCore__QuestionListener* self, QEvent* event) {
    if (auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self)) {
        vknscorequestionlistener->KNSCore::QuestionListener::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSCore::QuestionListener::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnCustomEvent(KNSCore__QuestionListener* self, intptr_t slot) {
    if (auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self))
        vknscorequestionlistener->knscore__questionlistener_customevent_callback = reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__QuestionListener_ConnectNotify(KNSCore__QuestionListener* self, const QMetaMethod* signal) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener) {
        vknscorequestionlistener->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNSCore::QuestionListener::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSCore__QuestionListener_SuperConnectNotify(KNSCore__QuestionListener* self, const QMetaMethod* signal) {
    if (auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self)) {
        vknscorequestionlistener->KNSCore::QuestionListener::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNSCore::QuestionListener::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnConnectNotify(KNSCore__QuestionListener* self, intptr_t slot) {
    if (auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self))
        vknscorequestionlistener->knscore__questionlistener_connectnotify_callback = reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KNSCore__QuestionListener_DisconnectNotify(KNSCore__QuestionListener* self, const QMetaMethod* signal) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener) {
        vknscorequestionlistener->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNSCore::QuestionListener::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSCore__QuestionListener_SuperDisconnectNotify(KNSCore__QuestionListener* self, const QMetaMethod* signal) {
    if (auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self)) {
        vknscorequestionlistener->KNSCore::QuestionListener::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNSCore::QuestionListener::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnDisconnectNotify(KNSCore__QuestionListener* self, intptr_t slot) {
    if (auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self))
        vknscorequestionlistener->knscore__questionlistener_disconnectnotify_callback = reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KNSCore__QuestionListener_Sender(const KNSCore__QuestionListener* self) {
    if (auto* vknscorequestionlistener = const_cast<VirtualKNSCoreQuestionListener*>(dynamic_cast<const VirtualKNSCoreQuestionListener*>(self))) {
        return vknscorequestionlistener->VirtualKNSCoreQuestionListener::sender();
    } else
        qFatal("Error: Protected method KNSCore::QuestionListener::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KNSCore__QuestionListener_SenderSignalIndex(const KNSCore__QuestionListener* self) {
    if (auto* vknscorequestionlistener = const_cast<VirtualKNSCoreQuestionListener*>(dynamic_cast<const VirtualKNSCoreQuestionListener*>(self))) {
        return vknscorequestionlistener->VirtualKNSCoreQuestionListener::senderSignalIndex();
    } else
        qFatal("Error: Protected method KNSCore::QuestionListener::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KNSCore__QuestionListener_Receivers(const KNSCore__QuestionListener* self, const char* signal) {
    if (auto* vknscorequestionlistener = const_cast<VirtualKNSCoreQuestionListener*>(dynamic_cast<const VirtualKNSCoreQuestionListener*>(self))) {
        return vknscorequestionlistener->VirtualKNSCoreQuestionListener::receivers(signal);
    } else
        qFatal("Error: Protected method KNSCore::QuestionListener::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNSCore__QuestionListener_IsSignalConnected(const KNSCore__QuestionListener* self, const QMetaMethod* signal) {
    if (auto* vknscorequestionlistener = const_cast<VirtualKNSCoreQuestionListener*>(dynamic_cast<const VirtualKNSCoreQuestionListener*>(self))) {
        return vknscorequestionlistener->VirtualKNSCoreQuestionListener::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KNSCore::QuestionListener::isSignalConnected called without a directly constructed type");
}

void KNSCore__QuestionListener_Delete(KNSCore__QuestionListener* self) {
    delete self;
}
