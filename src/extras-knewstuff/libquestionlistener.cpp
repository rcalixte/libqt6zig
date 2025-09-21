#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Question
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__QuestionListener
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vknscore__questionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscore__questionlistener && vknscore__questionlistener->isVirtualKNSCoreQuestionListener) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKNSCoreQuestionListener*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KNSCore__QuestionListener_Tr(const char* s) {
    QString _ret = KNSCore::QuestionListener::tr(s);
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
    auto* vknscore__questionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscore__questionlistener && vknscore__questionlistener->isVirtualKNSCoreQuestionListener) {
        vknscore__questionlistener->askQuestion(question);
    } else {
        ((VirtualKNSCoreQuestionListener*)self)->askQuestion(question);
    }
}

libqt_string KNSCore__QuestionListener_Tr2(const char* s, const char* c) {
    QString _ret = KNSCore::QuestionListener::tr(s, c);
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
    QString _ret = KNSCore::QuestionListener::tr(s, c, static_cast<int>(n));
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
int KNSCore__QuestionListener_QBaseMetacall(KNSCore__QuestionListener* self, int param1, int param2, void** param3) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_Metacall_IsBase(true);
        return vknscorequestionlistener->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KNSCore::QuestionListener::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnMetacall(KNSCore__QuestionListener* self, intptr_t slot) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_Metacall_Callback(reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KNSCore__QuestionListener_QBaseAskQuestion(KNSCore__QuestionListener* self, KNSCore__Question* question) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_AskQuestion_IsBase(true);
        vknscorequestionlistener->askQuestion(question);
    } else {
        ((VirtualKNSCoreQuestionListener*)self)->askQuestion(question);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnAskQuestion(KNSCore__QuestionListener* self, intptr_t slot) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_AskQuestion_Callback(reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_AskQuestion_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__QuestionListener_Event(KNSCore__QuestionListener* self, QEvent* event) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        return vknscorequestionlistener->event(event);
    } else {
        return self->KNSCore::QuestionListener::event(event);
    }
}

// Base class handler implementation
bool KNSCore__QuestionListener_QBaseEvent(KNSCore__QuestionListener* self, QEvent* event) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_Event_IsBase(true);
        return vknscorequestionlistener->event(event);
    } else {
        return self->KNSCore::QuestionListener::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnEvent(KNSCore__QuestionListener* self, intptr_t slot) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_Event_Callback(reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__QuestionListener_EventFilter(KNSCore__QuestionListener* self, QObject* watched, QEvent* event) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        return vknscorequestionlistener->eventFilter(watched, event);
    } else {
        return self->KNSCore::QuestionListener::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KNSCore__QuestionListener_QBaseEventFilter(KNSCore__QuestionListener* self, QObject* watched, QEvent* event) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_EventFilter_IsBase(true);
        return vknscorequestionlistener->eventFilter(watched, event);
    } else {
        return self->KNSCore::QuestionListener::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnEventFilter(KNSCore__QuestionListener* self, intptr_t slot) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_EventFilter_Callback(reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__QuestionListener_TimerEvent(KNSCore__QuestionListener* self, QTimerEvent* event) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->timerEvent(event);
    } else {
        ((VirtualKNSCoreQuestionListener*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KNSCore__QuestionListener_QBaseTimerEvent(KNSCore__QuestionListener* self, QTimerEvent* event) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_TimerEvent_IsBase(true);
        vknscorequestionlistener->timerEvent(event);
    } else {
        ((VirtualKNSCoreQuestionListener*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnTimerEvent(KNSCore__QuestionListener* self, intptr_t slot) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_TimerEvent_Callback(reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__QuestionListener_ChildEvent(KNSCore__QuestionListener* self, QChildEvent* event) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->childEvent(event);
    } else {
        ((VirtualKNSCoreQuestionListener*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KNSCore__QuestionListener_QBaseChildEvent(KNSCore__QuestionListener* self, QChildEvent* event) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_ChildEvent_IsBase(true);
        vknscorequestionlistener->childEvent(event);
    } else {
        ((VirtualKNSCoreQuestionListener*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnChildEvent(KNSCore__QuestionListener* self, intptr_t slot) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_ChildEvent_Callback(reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__QuestionListener_CustomEvent(KNSCore__QuestionListener* self, QEvent* event) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->customEvent(event);
    } else {
        ((VirtualKNSCoreQuestionListener*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KNSCore__QuestionListener_QBaseCustomEvent(KNSCore__QuestionListener* self, QEvent* event) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_CustomEvent_IsBase(true);
        vknscorequestionlistener->customEvent(event);
    } else {
        ((VirtualKNSCoreQuestionListener*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnCustomEvent(KNSCore__QuestionListener* self, intptr_t slot) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_CustomEvent_Callback(reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__QuestionListener_ConnectNotify(KNSCore__QuestionListener* self, const QMetaMethod* signal) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->connectNotify(*signal);
    } else {
        ((VirtualKNSCoreQuestionListener*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KNSCore__QuestionListener_QBaseConnectNotify(KNSCore__QuestionListener* self, const QMetaMethod* signal) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_ConnectNotify_IsBase(true);
        vknscorequestionlistener->connectNotify(*signal);
    } else {
        ((VirtualKNSCoreQuestionListener*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnConnectNotify(KNSCore__QuestionListener* self, intptr_t slot) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_ConnectNotify_Callback(reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__QuestionListener_DisconnectNotify(KNSCore__QuestionListener* self, const QMetaMethod* signal) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->disconnectNotify(*signal);
    } else {
        ((VirtualKNSCoreQuestionListener*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KNSCore__QuestionListener_QBaseDisconnectNotify(KNSCore__QuestionListener* self, const QMetaMethod* signal) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_DisconnectNotify_IsBase(true);
        vknscorequestionlistener->disconnectNotify(*signal);
    } else {
        ((VirtualKNSCoreQuestionListener*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnDisconnectNotify(KNSCore__QuestionListener* self, intptr_t slot) {
    auto* vknscorequestionlistener = dynamic_cast<VirtualKNSCoreQuestionListener*>(self);
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_DisconnectNotify_Callback(reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KNSCore__QuestionListener_Sender(const KNSCore__QuestionListener* self) {
    auto* vknscorequestionlistener = const_cast<VirtualKNSCoreQuestionListener*>(dynamic_cast<const VirtualKNSCoreQuestionListener*>(self));
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        return vknscorequestionlistener->sender();
    } else {
        return ((VirtualKNSCoreQuestionListener*)self)->sender();
    }
}

// Base class handler implementation
QObject* KNSCore__QuestionListener_QBaseSender(const KNSCore__QuestionListener* self) {
    auto* vknscorequestionlistener = const_cast<VirtualKNSCoreQuestionListener*>(dynamic_cast<const VirtualKNSCoreQuestionListener*>(self));
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_Sender_IsBase(true);
        return vknscorequestionlistener->sender();
    } else {
        return ((VirtualKNSCoreQuestionListener*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnSender(const KNSCore__QuestionListener* self, intptr_t slot) {
    auto* vknscorequestionlistener = const_cast<VirtualKNSCoreQuestionListener*>(dynamic_cast<const VirtualKNSCoreQuestionListener*>(self));
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_Sender_Callback(reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSCore__QuestionListener_SenderSignalIndex(const KNSCore__QuestionListener* self) {
    auto* vknscorequestionlistener = const_cast<VirtualKNSCoreQuestionListener*>(dynamic_cast<const VirtualKNSCoreQuestionListener*>(self));
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        return vknscorequestionlistener->senderSignalIndex();
    } else {
        return ((VirtualKNSCoreQuestionListener*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KNSCore__QuestionListener_QBaseSenderSignalIndex(const KNSCore__QuestionListener* self) {
    auto* vknscorequestionlistener = const_cast<VirtualKNSCoreQuestionListener*>(dynamic_cast<const VirtualKNSCoreQuestionListener*>(self));
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_SenderSignalIndex_IsBase(true);
        return vknscorequestionlistener->senderSignalIndex();
    } else {
        return ((VirtualKNSCoreQuestionListener*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnSenderSignalIndex(const KNSCore__QuestionListener* self, intptr_t slot) {
    auto* vknscorequestionlistener = const_cast<VirtualKNSCoreQuestionListener*>(dynamic_cast<const VirtualKNSCoreQuestionListener*>(self));
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_SenderSignalIndex_Callback(reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSCore__QuestionListener_Receivers(const KNSCore__QuestionListener* self, const char* signal) {
    auto* vknscorequestionlistener = const_cast<VirtualKNSCoreQuestionListener*>(dynamic_cast<const VirtualKNSCoreQuestionListener*>(self));
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        return vknscorequestionlistener->receivers(signal);
    } else {
        return ((VirtualKNSCoreQuestionListener*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KNSCore__QuestionListener_QBaseReceivers(const KNSCore__QuestionListener* self, const char* signal) {
    auto* vknscorequestionlistener = const_cast<VirtualKNSCoreQuestionListener*>(dynamic_cast<const VirtualKNSCoreQuestionListener*>(self));
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_Receivers_IsBase(true);
        return vknscorequestionlistener->receivers(signal);
    } else {
        return ((VirtualKNSCoreQuestionListener*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnReceivers(const KNSCore__QuestionListener* self, intptr_t slot) {
    auto* vknscorequestionlistener = const_cast<VirtualKNSCoreQuestionListener*>(dynamic_cast<const VirtualKNSCoreQuestionListener*>(self));
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_Receivers_Callback(reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__QuestionListener_IsSignalConnected(const KNSCore__QuestionListener* self, const QMetaMethod* signal) {
    auto* vknscorequestionlistener = const_cast<VirtualKNSCoreQuestionListener*>(dynamic_cast<const VirtualKNSCoreQuestionListener*>(self));
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        return vknscorequestionlistener->isSignalConnected(*signal);
    } else {
        return ((VirtualKNSCoreQuestionListener*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KNSCore__QuestionListener_QBaseIsSignalConnected(const KNSCore__QuestionListener* self, const QMetaMethod* signal) {
    auto* vknscorequestionlistener = const_cast<VirtualKNSCoreQuestionListener*>(dynamic_cast<const VirtualKNSCoreQuestionListener*>(self));
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_IsSignalConnected_IsBase(true);
        return vknscorequestionlistener->isSignalConnected(*signal);
    } else {
        return ((VirtualKNSCoreQuestionListener*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__QuestionListener_OnIsSignalConnected(const KNSCore__QuestionListener* self, intptr_t slot) {
    auto* vknscorequestionlistener = const_cast<VirtualKNSCoreQuestionListener*>(dynamic_cast<const VirtualKNSCoreQuestionListener*>(self));
    if (vknscorequestionlistener && vknscorequestionlistener->isVirtualKNSCoreQuestionListener) {
        vknscorequestionlistener->setKNSCore__QuestionListener_IsSignalConnected_Callback(reinterpret_cast<VirtualKNSCoreQuestionListener::KNSCore__QuestionListener_IsSignalConnected_Callback>(slot));
    }
}

void KNSCore__QuestionListener_Delete(KNSCore__QuestionListener* self) {
    delete self;
}
