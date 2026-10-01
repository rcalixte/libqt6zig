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

libqt_string TextEditTextToSpeech__TextToSpeechActions_Tr(const char* s) {
    auto _ret = TextEditTextToSpeech::TextToSpeechActions::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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
    TextEditTextToSpeech::TextToSpeechActions::connect(self,
                                                       static_cast<void (TextEditTextToSpeech::TextToSpeechActions::*)(TextEditTextToSpeech::TextToSpeechWidget::State)>(&TextEditTextToSpeech::TextToSpeechActions::stateChanged),
                                                       [self, slotFunc](TextEditTextToSpeech::TextToSpeechWidget::State state) {
                                                           int sigval1 = static_cast<int>(state);
                                                           slotFunc(self, sigval1);
                                                       });
}

libqt_string TextEditTextToSpeech__TextToSpeechActions_Tr2(const char* s, const char* c) {
    auto _ret = TextEditTextToSpeech::TextToSpeechActions::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextEditTextToSpeech__TextToSpeechActions_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextEditTextToSpeech::TextToSpeechActions::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextEditTextToSpeech__TextToSpeechActions_SuperMetaObject(const TextEditTextToSpeech__TextToSpeechActions* self) {
    return (QMetaObject*)self->TextEditTextToSpeech::TextToSpeechActions::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnMetaObject(TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechactions = const_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechActions*>(self)))
        vtextedittexttospeechtexttospeechactions->textedittexttospeech__texttospeechactions_metaobject_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextEditTextToSpeech__TextToSpeechActions_SuperMetacast(TextEditTextToSpeech__TextToSpeechActions* self, const char* param1) {
    return self->TextEditTextToSpeech::TextToSpeechActions::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnMetacast(TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self))
        vtextedittexttospeechtexttospeechactions->textedittexttospeech__texttospeechactions_metacast_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechActions_SuperMetacall(TextEditTextToSpeech__TextToSpeechActions* self, int param1, int param2, void** param3) {
    return self->TextEditTextToSpeech::TextToSpeechActions::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnMetacall(TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self))
        vtextedittexttospeechtexttospeechactions->textedittexttospeech__texttospeechactions_metacall_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechActions_Event(TextEditTextToSpeech__TextToSpeechActions* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechActions_SuperEvent(TextEditTextToSpeech__TextToSpeechActions* self, QEvent* event) {
    return self->TextEditTextToSpeech::TextToSpeechActions::event(event);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnEvent(TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self))
        vtextedittexttospeechtexttospeechactions->textedittexttospeech__texttospeechactions_event_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_Event_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechActions_EventFilter(TextEditTextToSpeech__TextToSpeechActions* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechActions_SuperEventFilter(TextEditTextToSpeech__TextToSpeechActions* self, QObject* watched, QEvent* event) {
    return self->TextEditTextToSpeech::TextToSpeechActions::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnEventFilter(TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self))
        vtextedittexttospeechtexttospeechactions->textedittexttospeech__texttospeechactions_eventfilter_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechActions_TimerEvent(TextEditTextToSpeech__TextToSpeechActions* self, QTimerEvent* event) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions) {
        vtextedittexttospeechtexttospeechactions->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechActions::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechActions_SuperTimerEvent(TextEditTextToSpeech__TextToSpeechActions* self, QTimerEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self)) {
        vtextedittexttospeechtexttospeechactions->TextEditTextToSpeech::TextToSpeechActions::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechActions::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnTimerEvent(TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self))
        vtextedittexttospeechtexttospeechactions->textedittexttospeech__texttospeechactions_timerevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechActions_ChildEvent(TextEditTextToSpeech__TextToSpeechActions* self, QChildEvent* event) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions) {
        vtextedittexttospeechtexttospeechactions->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechActions::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechActions_SuperChildEvent(TextEditTextToSpeech__TextToSpeechActions* self, QChildEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self)) {
        vtextedittexttospeechtexttospeechactions->TextEditTextToSpeech::TextToSpeechActions::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechActions::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnChildEvent(TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self))
        vtextedittexttospeechtexttospeechactions->textedittexttospeech__texttospeechactions_childevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechActions_CustomEvent(TextEditTextToSpeech__TextToSpeechActions* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions) {
        vtextedittexttospeechtexttospeechactions->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechActions::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechActions_SuperCustomEvent(TextEditTextToSpeech__TextToSpeechActions* self, QEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self)) {
        vtextedittexttospeechtexttospeechactions->TextEditTextToSpeech::TextToSpeechActions::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechActions::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnCustomEvent(TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self))
        vtextedittexttospeechtexttospeechactions->textedittexttospeech__texttospeechactions_customevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechActions_ConnectNotify(TextEditTextToSpeech__TextToSpeechActions* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions) {
        vtextedittexttospeechtexttospeechactions->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechActions::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechActions_SuperConnectNotify(TextEditTextToSpeech__TextToSpeechActions* self, const QMetaMethod* signal) {
    if (auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self)) {
        vtextedittexttospeechtexttospeechactions->TextEditTextToSpeech::TextToSpeechActions::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechActions::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnConnectNotify(TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self))
        vtextedittexttospeechtexttospeechactions->textedittexttospeech__texttospeechactions_connectnotify_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechActions_DisconnectNotify(TextEditTextToSpeech__TextToSpeechActions* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self);
    if (vtextedittexttospeechtexttospeechactions) {
        vtextedittexttospeechtexttospeechactions->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechActions::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechActions_SuperDisconnectNotify(TextEditTextToSpeech__TextToSpeechActions* self, const QMetaMethod* signal) {
    if (auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self)) {
        vtextedittexttospeechtexttospeechactions->TextEditTextToSpeech::TextToSpeechActions::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechActions::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechActions_OnDisconnectNotify(TextEditTextToSpeech__TextToSpeechActions* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechactions = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(self))
        vtextedittexttospeechtexttospeechactions->textedittexttospeech__texttospeechactions_disconnectnotify_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechActions::TextEditTextToSpeech__TextToSpeechActions_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* TextEditTextToSpeech__TextToSpeechActions_Sender(const TextEditTextToSpeech__TextToSpeechActions* self) {
    if (auto* vtextedittexttospeechtexttospeechactions = const_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechActions*>(self))) {
        return vtextedittexttospeechtexttospeechactions->VirtualTextEditTextToSpeechTextToSpeechActions::sender();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechActions::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEditTextToSpeech__TextToSpeechActions_SenderSignalIndex(const TextEditTextToSpeech__TextToSpeechActions* self) {
    if (auto* vtextedittexttospeechtexttospeechactions = const_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechActions*>(self))) {
        return vtextedittexttospeechtexttospeechactions->VirtualTextEditTextToSpeechTextToSpeechActions::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechActions::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEditTextToSpeech__TextToSpeechActions_Receivers(const TextEditTextToSpeech__TextToSpeechActions* self, const char* signal) {
    if (auto* vtextedittexttospeechtexttospeechactions = const_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechActions*>(self))) {
        return vtextedittexttospeechtexttospeechactions->VirtualTextEditTextToSpeechTextToSpeechActions::receivers(signal);
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechActions::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEditTextToSpeech__TextToSpeechActions_IsSignalConnected(const TextEditTextToSpeech__TextToSpeechActions* self, const QMetaMethod* signal) {
    if (auto* vtextedittexttospeechtexttospeechactions = const_cast<VirtualTextEditTextToSpeechTextToSpeechActions*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechActions*>(self))) {
        return vtextedittexttospeechtexttospeechactions->VirtualTextEditTextToSpeechTextToSpeechActions::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechActions::isSignalConnected called without a directly constructed type");
}

void TextEditTextToSpeech__TextToSpeechActions_Delete(TextEditTextToSpeech__TextToSpeechActions* self) {
    delete self;
}
