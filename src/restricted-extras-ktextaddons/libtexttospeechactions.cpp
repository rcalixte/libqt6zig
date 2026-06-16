#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEditTextToSpeech__TextToSpeechActions
#include <texttospeechactions.h>
#include "libtexttospeechactions.h"
#include "libtexttospeechactions.hxx"

TextEditTextToSpeech__TextToSpeechActions* TextEditTextToSpeech__TextToSpeechActions_new() {
    return new VirtualTextEditTextToSpeechTextToSpeechActions();
}

TextEditTextToSpeech__TextToSpeechActions* TextEditTextToSpeech__TextToSpeechActions_new2(QObject* parent) {
    return new VirtualTextEditTextToSpeechTextToSpeechActions(parent);
}

QMetaObject* TextEditTextToSpeech__TextToSpeechActions_MetaObject(const TextEditTextToSpeech__TextToSpeechActions* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextEditTextToSpeech__TextToSpeechActions_Metacast(TextEditTextToSpeech__TextToSpeechActions* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextEditTextToSpeech__TextToSpeechActions_Metacall(TextEditTextToSpeech__TextToSpeechActions* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

QAction* TextEditTextToSpeech__TextToSpeechActions_StopAction(const TextEditTextToSpeech__TextToSpeechActions* self) {
    return self->stopAction();
}

QAction* TextEditTextToSpeech__TextToSpeechActions_PlayPauseAction(const TextEditTextToSpeech__TextToSpeechActions* self) {
    return self->playPauseAction();
}

int TextEditTextToSpeech__TextToSpeechActions_State(const TextEditTextToSpeech__TextToSpeechActions* self) {
    return static_cast<int>(self->state());
}

void TextEditTextToSpeech__TextToSpeechActions_SetState(TextEditTextToSpeech__TextToSpeechActions* self, int state) {
    self->setState(static_cast<TextEditTextToSpeech::TextToSpeechWidget::State>(state));
}

void TextEditTextToSpeech__TextToSpeechActions_SlotStop(TextEditTextToSpeech__TextToSpeechActions* self) {
    self->slotStop();
}

void TextEditTextToSpeech__TextToSpeechActions_StateChanged(TextEditTextToSpeech__TextToSpeechActions* self, int state) {
    self->stateChanged(static_cast<TextEditTextToSpeech::TextToSpeechWidget::State>(state));
}

void TextEditTextToSpeech__TextToSpeechActions_Connect_StateChanged(TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    void (*slotFunc)(TextEditTextToSpeech__TextToSpeechActions*, int) = reinterpret_cast<void (*)(TextEditTextToSpeech__TextToSpeechActions*, int)>(slot);
    TextEditTextToSpeech::TextToSpeechActions::connect(self, &TextEditTextToSpeech::TextToSpeechActions::stateChanged, [self, slotFunc](TextEditTextToSpeech::TextToSpeechWidget::State state) {
        int sigval1 = static_cast<int>(state);
        slotFunc(self, sigval1);
    });
}

// Base class handler implementation
QMetaObject* TextEditTextToSpeech__TextToSpeechActions_SuperMetaObject(const TextEditTextToSpeech__TextToSpeechActions* self) {
    auto* vtextedittexttospeechtexttospeechactions = const_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechActions*>(self));
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_MetaObject_IsBase(true);
        return (QMetaObject*)vtextedittexttospeechtexttospeechactions->metaObject();
    } else {
        return (QMetaObject*)self->TextEditTextToSpeech::TextToSpeechActions::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnMetaObject(const TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechactions = const_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechActions*>(self));
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_MetaObject_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextEditTextToSpeech__TextToSpeechActions_SuperMetacast(TextEditTextToSpeech__TextToSpeechActions* self, const char* param1) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_Metacast_IsBase(true);
        return vtextedittexttospeechtexttospeechactions->qt_metacast(param1);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechActions::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnMetacast(TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_Metacast_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechActions_SuperMetacall(TextEditTextToSpeech__TextToSpeechActions* self, int param1, int param2, void** param3) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_Metacall_IsBase(true);
        return vtextedittexttospeechtexttospeechactions->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechActions::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnMetacall(TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_Metacall_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechActions_Event(TextEditTextToSpeech__TextToSpeechActions* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        return vtextedittexttospeechtexttospeechactions->event(event);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechActions::event(event);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechActions_SuperEvent(TextEditTextToSpeech__TextToSpeechActions* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_Event_IsBase(true);
        return vtextedittexttospeechtexttospeechactions->event(event);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechActions::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnEvent(TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_Event_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechActions_EventFilter(TextEditTextToSpeech__TextToSpeechActions* self, QObject* watched, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        return vtextedittexttospeechtexttospeechactions->eventFilter(watched, event);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechActions::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechActions_SuperEventFilter(TextEditTextToSpeech__TextToSpeechActions* self, QObject* watched, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_EventFilter_IsBase(true);
        return vtextedittexttospeechtexttospeechactions->eventFilter(watched, event);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechActions::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnEventFilter(TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_EventFilter_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechActions_TimerEvent(TextEditTextToSpeech__TextToSpeechActions* self, QTimerEvent* event) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->timerEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechActions*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechActions_SuperTimerEvent(TextEditTextToSpeech__TextToSpeechActions* self, QTimerEvent* event) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_TimerEvent_IsBase(true);
        vtextedittexttospeechtexttospeechactions->timerEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechActions*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnTimerEvent(TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_TimerEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechActions_ChildEvent(TextEditTextToSpeech__TextToSpeechActions* self, QChildEvent* event) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->childEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechActions*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechActions_SuperChildEvent(TextEditTextToSpeech__TextToSpeechActions* self, QChildEvent* event) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_ChildEvent_IsBase(true);
        vtextedittexttospeechtexttospeechactions->childEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechActions*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnChildEvent(TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_ChildEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechActions_CustomEvent(TextEditTextToSpeech__TextToSpeechActions* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->customEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechActions*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechActions_SuperCustomEvent(TextEditTextToSpeech__TextToSpeechActions* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_CustomEvent_IsBase(true);
        vtextedittexttospeechtexttospeechactions->customEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechActions*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnCustomEvent(TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_CustomEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechActions_ConnectNotify(TextEditTextToSpeech__TextToSpeechActions* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->connectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechActions*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechActions_SuperConnectNotify(TextEditTextToSpeech__TextToSpeechActions* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_ConnectNotify_IsBase(true);
        vtextedittexttospeechtexttospeechactions->connectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechActions*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnConnectNotify(TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_ConnectNotify_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechActions_DisconnectNotify(TextEditTextToSpeech__TextToSpeechActions* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->disconnectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechActions*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechActions_SuperDisconnectNotify(TextEditTextToSpeech__TextToSpeechActions* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_DisconnectNotify_IsBase(true);
        vtextedittexttospeechtexttospeechactions->disconnectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechActions*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnDisconnectNotify(TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_DisconnectNotify_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextEditTextToSpeech__TextToSpeechActions_Sender(const TextEditTextToSpeech__TextToSpeechActions* self) {
    auto* vtextedittexttospeechtexttospeechactions = const_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechActions*>(self));
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        return vtextedittexttospeechtexttospeechactions->sender();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechActions*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextEditTextToSpeech__TextToSpeechActions_SuperSender(const TextEditTextToSpeech__TextToSpeechActions* self) {
    auto* vtextedittexttospeechtexttospeechactions = const_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechActions*>(self));
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_Sender_IsBase(true);
        return vtextedittexttospeechtexttospeechactions->sender();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechActions*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnSender(const TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechactions = const_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechActions*>(self));
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_Sender_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechActions_SenderSignalIndex(const TextEditTextToSpeech__TextToSpeechActions* self) {
    auto* vtextedittexttospeechtexttospeechactions = const_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechActions*>(self));
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        return vtextedittexttospeechtexttospeechactions->senderSignalIndex();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechActions*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechActions_SuperSenderSignalIndex(const TextEditTextToSpeech__TextToSpeechActions* self) {
    auto* vtextedittexttospeechtexttospeechactions = const_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechActions*>(self));
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_SenderSignalIndex_IsBase(true);
        return vtextedittexttospeechtexttospeechactions->senderSignalIndex();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechActions*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnSenderSignalIndex(const TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechactions = const_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechActions*>(self));
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechActions_Receivers(const TextEditTextToSpeech__TextToSpeechActions* self, const char* signal) {
    auto* vtextedittexttospeechtexttospeechactions = const_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechActions*>(self));
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        return vtextedittexttospeechtexttospeechactions->receivers(signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechActions*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechActions_SuperReceivers(const TextEditTextToSpeech__TextToSpeechActions* self, const char* signal) {
    auto* vtextedittexttospeechtexttospeechactions = const_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechActions*>(self));
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_Receivers_IsBase(true);
        return vtextedittexttospeechtexttospeechactions->receivers(signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechActions*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnReceivers(const TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechactions = const_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechActions*>(self));
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_Receivers_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechActions_IsSignalConnected(const TextEditTextToSpeech__TextToSpeechActions* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechactions = const_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechActions*>(self));
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        return vtextedittexttospeechtexttospeechactions->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechActions*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechActions_SuperIsSignalConnected(const TextEditTextToSpeech__TextToSpeechActions* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechactions = const_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechActions*>(self));
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_IsSignalConnected_IsBase(true);
        return vtextedittexttospeechtexttospeechactions->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechActions*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnIsSignalConnected(const TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechactions = const_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechActions*>(self));
    if (vtextedittexttospeechtexttospeechactions && vtextedittexttospeechtexttospeechactions->isVirtualTextEditTextToSpeechTextToSpeechActions) {
        vtextedittexttospeechtexttospeechactions->setTextEditTextToSpeech__TextToSpeechActions_IsSignalConnected_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_IsSignalConnected_Callback>(slot));
    }
}

void TextEditTextToSpeech__TextToSpeechActions_Delete(TextEditTextToSpeech__TextToSpeechActions* self) {
    delete self;
}
