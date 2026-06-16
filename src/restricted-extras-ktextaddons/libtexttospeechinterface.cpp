#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEditTextToSpeech__TextToSpeechInterface
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEditTextToSpeech__TextToSpeechWidget
#include <texttospeechinterface.h>
#include "libtexttospeechinterface.h"
#include "libtexttospeechinterface.hxx"

TextEditTextToSpeech__TextToSpeechInterface* TextEditTextToSpeech__TextToSpeechInterface_new(TextEditTextToSpeech__TextToSpeechWidget* textToSpeechWidget) {
    return new VirtualTextEditTextToSpeechTextToSpeechInterface(textToSpeechWidget);
}

TextEditTextToSpeech__TextToSpeechInterface* TextEditTextToSpeech__TextToSpeechInterface_new2(TextEditTextToSpeech__TextToSpeechWidget* textToSpeechWidget, QObject* parent) {
    return new VirtualTextEditTextToSpeechTextToSpeechInterface(textToSpeechWidget, parent);
}

QMetaObject* TextEditTextToSpeech__TextToSpeechInterface_MetaObject(const TextEditTextToSpeech__TextToSpeechInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextEditTextToSpeech__TextToSpeechInterface_Metacast(TextEditTextToSpeech__TextToSpeechInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextEditTextToSpeech__TextToSpeechInterface_Metacall(TextEditTextToSpeech__TextToSpeechInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

bool TextEditTextToSpeech__TextToSpeechInterface_IsReady(const TextEditTextToSpeech__TextToSpeechInterface* self) {
    return self->isReady();
}

void TextEditTextToSpeech__TextToSpeechInterface_Say(TextEditTextToSpeech__TextToSpeechInterface* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->say(text_QString);
}

double TextEditTextToSpeech__TextToSpeechInterface_Volume(const TextEditTextToSpeech__TextToSpeechInterface* self) {
    return self->volume();
}

void TextEditTextToSpeech__TextToSpeechInterface_SetVolume(TextEditTextToSpeech__TextToSpeechInterface* self, double value) {
    self->setVolume(static_cast<double>(value));
}

void TextEditTextToSpeech__TextToSpeechInterface_ReloadSettings(TextEditTextToSpeech__TextToSpeechInterface* self) {
    self->reloadSettings();
}

// Base class handler implementation
QMetaObject* TextEditTextToSpeech__TextToSpeechInterface_SuperMetaObject(const TextEditTextToSpeech__TextToSpeechInterface* self) {
    auto* vtextedittexttospeechtexttospeechinterface = const_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechInterface*>(self));
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_MetaObject_IsBase(true);
        return (QMetaObject*)vtextedittexttospeechtexttospeechinterface->metaObject();
    } else {
        return (QMetaObject*)self->TextEditTextToSpeech::TextToSpeechInterface::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnMetaObject(const TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechinterface = const_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechInterface*>(self));
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_MetaObject_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextEditTextToSpeech__TextToSpeechInterface_SuperMetacast(TextEditTextToSpeech__TextToSpeechInterface* self, const char* param1) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_Metacast_IsBase(true);
        return vtextedittexttospeechtexttospeechinterface->qt_metacast(param1);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechInterface::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnMetacast(TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_Metacast_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechInterface_SuperMetacall(TextEditTextToSpeech__TextToSpeechInterface* self, int param1, int param2, void** param3) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_Metacall_IsBase(true);
        return vtextedittexttospeechtexttospeechinterface->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnMetacall(TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_Metacall_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechInterface_Event(TextEditTextToSpeech__TextToSpeechInterface* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        return vtextedittexttospeechtexttospeechinterface->event(event);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechInterface::event(event);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechInterface_SuperEvent(TextEditTextToSpeech__TextToSpeechInterface* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_Event_IsBase(true);
        return vtextedittexttospeechtexttospeechinterface->event(event);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechInterface::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnEvent(TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_Event_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechInterface_EventFilter(TextEditTextToSpeech__TextToSpeechInterface* self, QObject* watched, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        return vtextedittexttospeechtexttospeechinterface->eventFilter(watched, event);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechInterface::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechInterface_SuperEventFilter(TextEditTextToSpeech__TextToSpeechInterface* self, QObject* watched, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_EventFilter_IsBase(true);
        return vtextedittexttospeechtexttospeechinterface->eventFilter(watched, event);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechInterface::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnEventFilter(TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_EventFilter_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechInterface_TimerEvent(TextEditTextToSpeech__TextToSpeechInterface* self, QTimerEvent* event) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->timerEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechInterface*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechInterface_SuperTimerEvent(TextEditTextToSpeech__TextToSpeechInterface* self, QTimerEvent* event) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_TimerEvent_IsBase(true);
        vtextedittexttospeechtexttospeechinterface->timerEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechInterface*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnTimerEvent(TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_TimerEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechInterface_ChildEvent(TextEditTextToSpeech__TextToSpeechInterface* self, QChildEvent* event) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->childEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechInterface*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechInterface_SuperChildEvent(TextEditTextToSpeech__TextToSpeechInterface* self, QChildEvent* event) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_ChildEvent_IsBase(true);
        vtextedittexttospeechtexttospeechinterface->childEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechInterface*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnChildEvent(TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_ChildEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechInterface_CustomEvent(TextEditTextToSpeech__TextToSpeechInterface* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->customEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechInterface*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechInterface_SuperCustomEvent(TextEditTextToSpeech__TextToSpeechInterface* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_CustomEvent_IsBase(true);
        vtextedittexttospeechtexttospeechinterface->customEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechInterface*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnCustomEvent(TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_CustomEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechInterface_ConnectNotify(TextEditTextToSpeech__TextToSpeechInterface* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->connectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechInterface*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechInterface_SuperConnectNotify(TextEditTextToSpeech__TextToSpeechInterface* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_ConnectNotify_IsBase(true);
        vtextedittexttospeechtexttospeechinterface->connectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechInterface*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnConnectNotify(TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_ConnectNotify_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechInterface_DisconnectNotify(TextEditTextToSpeech__TextToSpeechInterface* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->disconnectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechInterface*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechInterface_SuperDisconnectNotify(TextEditTextToSpeech__TextToSpeechInterface* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_DisconnectNotify_IsBase(true);
        vtextedittexttospeechtexttospeechinterface->disconnectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechInterface*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnDisconnectNotify(TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_DisconnectNotify_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextEditTextToSpeech__TextToSpeechInterface_Sender(const TextEditTextToSpeech__TextToSpeechInterface* self) {
    auto* vtextedittexttospeechtexttospeechinterface = const_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechInterface*>(self));
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        return vtextedittexttospeechtexttospeechinterface->sender();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechInterface*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextEditTextToSpeech__TextToSpeechInterface_SuperSender(const TextEditTextToSpeech__TextToSpeechInterface* self) {
    auto* vtextedittexttospeechtexttospeechinterface = const_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechInterface*>(self));
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_Sender_IsBase(true);
        return vtextedittexttospeechtexttospeechinterface->sender();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechInterface*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnSender(const TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechinterface = const_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechInterface*>(self));
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_Sender_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechInterface_SenderSignalIndex(const TextEditTextToSpeech__TextToSpeechInterface* self) {
    auto* vtextedittexttospeechtexttospeechinterface = const_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechInterface*>(self));
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        return vtextedittexttospeechtexttospeechinterface->senderSignalIndex();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechInterface*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechInterface_SuperSenderSignalIndex(const TextEditTextToSpeech__TextToSpeechInterface* self) {
    auto* vtextedittexttospeechtexttospeechinterface = const_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechInterface*>(self));
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_SenderSignalIndex_IsBase(true);
        return vtextedittexttospeechtexttospeechinterface->senderSignalIndex();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechInterface*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnSenderSignalIndex(const TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechinterface = const_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechInterface*>(self));
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechInterface_Receivers(const TextEditTextToSpeech__TextToSpeechInterface* self, const char* signal) {
    auto* vtextedittexttospeechtexttospeechinterface = const_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechInterface*>(self));
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        return vtextedittexttospeechtexttospeechinterface->receivers(signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechInterface*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechInterface_SuperReceivers(const TextEditTextToSpeech__TextToSpeechInterface* self, const char* signal) {
    auto* vtextedittexttospeechtexttospeechinterface = const_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechInterface*>(self));
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_Receivers_IsBase(true);
        return vtextedittexttospeechtexttospeechinterface->receivers(signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechInterface*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnReceivers(const TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechinterface = const_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechInterface*>(self));
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_Receivers_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechInterface_IsSignalConnected(const TextEditTextToSpeech__TextToSpeechInterface* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechinterface = const_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechInterface*>(self));
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        return vtextedittexttospeechtexttospeechinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechInterface*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechInterface_SuperIsSignalConnected(const TextEditTextToSpeech__TextToSpeechInterface* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechinterface = const_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechInterface*>(self));
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_IsSignalConnected_IsBase(true);
        return vtextedittexttospeechtexttospeechinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechInterface*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnIsSignalConnected(const TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechinterface = const_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechInterface*>(self));
    if (vtextedittexttospeechtexttospeechinterface && vtextedittexttospeechtexttospeechinterface->isVirtualTextEditTextToSpeechTextToSpeechInterface) {
        vtextedittexttospeechtexttospeechinterface->setTextEditTextToSpeech__TextToSpeechInterface_IsSignalConnected_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_IsSignalConnected_Callback>(slot));
    }
}

void TextEditTextToSpeech__TextToSpeechInterface_Delete(TextEditTextToSpeech__TextToSpeechInterface* self) {
    delete self;
}
