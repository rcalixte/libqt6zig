#include <KKeySequenceRecorder>
#include <QChildEvent>
#include <QEvent>
#include <QKeySequence>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWindow>
#include <kkeysequencerecorder.h>
#include "libkkeysequencerecorder.h"
#include "libkkeysequencerecorder.hxx"

KKeySequenceRecorder* KKeySequenceRecorder_new(QWindow* window) {
    return new VirtualKKeySequenceRecorder(window);
}

KKeySequenceRecorder* KKeySequenceRecorder_new2(QWindow* window, QObject* parent) {
    return new VirtualKKeySequenceRecorder(window, parent);
}

QMetaObject* KKeySequenceRecorder_MetaObject(const KKeySequenceRecorder* self) {
    return (QMetaObject*)self->metaObject();
}

void* KKeySequenceRecorder_Metacast(KKeySequenceRecorder* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KKeySequenceRecorder_Metacall(KKeySequenceRecorder* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KKeySequenceRecorder_Tr(const char* s) {
    auto _ret = KKeySequenceRecorder::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KKeySequenceRecorder_StartRecording(KKeySequenceRecorder* self) {
    self->startRecording();
}

bool KKeySequenceRecorder_IsRecording(const KKeySequenceRecorder* self) {
    return self->isRecording();
}

QKeySequence* KKeySequenceRecorder_CurrentKeySequence(const KKeySequenceRecorder* self) {
    return new QKeySequence(self->currentKeySequence());
}

void KKeySequenceRecorder_SetCurrentKeySequence(KKeySequenceRecorder* self, const QKeySequence* sequence) {
    self->setCurrentKeySequence(*sequence);
}

QWindow* KKeySequenceRecorder_Window(const KKeySequenceRecorder* self) {
    return self->window();
}

void KKeySequenceRecorder_SetWindow(KKeySequenceRecorder* self, QWindow* window) {
    self->setWindow(window);
}

bool KKeySequenceRecorder_MultiKeyShortcutsAllowed(const KKeySequenceRecorder* self) {
    return self->multiKeyShortcutsAllowed();
}

void KKeySequenceRecorder_SetMultiKeyShortcutsAllowed(KKeySequenceRecorder* self, bool allowed) {
    self->setMultiKeyShortcutsAllowed(allowed);
}

void KKeySequenceRecorder_SetModifierlessAllowed(KKeySequenceRecorder* self, bool allowed) {
    self->setModifierlessAllowed(allowed);
}

bool KKeySequenceRecorder_ModifierlessAllowed(const KKeySequenceRecorder* self) {
    return self->modifierlessAllowed();
}

void KKeySequenceRecorder_SetModifierOnlyAllowed(KKeySequenceRecorder* self, bool allowed) {
    self->setModifierOnlyAllowed(allowed);
}

bool KKeySequenceRecorder_ModifierOnlyAllowed(const KKeySequenceRecorder* self) {
    return self->modifierOnlyAllowed();
}

void KKeySequenceRecorder_SetPatterns(KKeySequenceRecorder* self, int patterns) {
    self->setPatterns(static_cast<KKeySequenceRecorder::Patterns>(patterns));
}

int KKeySequenceRecorder_Patterns(const KKeySequenceRecorder* self) {
    return static_cast<int>(self->patterns());
}

void KKeySequenceRecorder_CancelRecording(KKeySequenceRecorder* self) {
    self->cancelRecording();
}

void KKeySequenceRecorder_GotKeySequence(KKeySequenceRecorder* self, const QKeySequence* keySequence) {
    self->gotKeySequence(*keySequence);
}

void KKeySequenceRecorder_Connect_GotKeySequence(KKeySequenceRecorder* self, intptr_t slot) {
    void (*slotFunc)(KKeySequenceRecorder*, QKeySequence*) = reinterpret_cast<void (*)(KKeySequenceRecorder*, QKeySequence*)>(slot);
    KKeySequenceRecorder::connect(self,
                                  static_cast<void (KKeySequenceRecorder::*)(const QKeySequence&)>(&KKeySequenceRecorder::gotKeySequence),
                                  [self, slotFunc](const QKeySequence& keySequence) {
                                      const QKeySequence& keySequence_ret = keySequence;
                                      // Cast returned reference into pointer
                                      QKeySequence* sigval1 = const_cast<QKeySequence*>(&keySequence_ret);
                                      slotFunc(self, sigval1);
                                  });
}

void KKeySequenceRecorder_RecordingChanged(KKeySequenceRecorder* self) {
    self->recordingChanged();
}

void KKeySequenceRecorder_Connect_RecordingChanged(KKeySequenceRecorder* self, intptr_t slot) {
    void (*slotFunc)(KKeySequenceRecorder*) = reinterpret_cast<void (*)(KKeySequenceRecorder*)>(slot);
    KKeySequenceRecorder::connect(self,
                                  static_cast<void (KKeySequenceRecorder::*)()>(&KKeySequenceRecorder::recordingChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void KKeySequenceRecorder_WindowChanged(KKeySequenceRecorder* self) {
    self->windowChanged();
}

void KKeySequenceRecorder_Connect_WindowChanged(KKeySequenceRecorder* self, intptr_t slot) {
    void (*slotFunc)(KKeySequenceRecorder*) = reinterpret_cast<void (*)(KKeySequenceRecorder*)>(slot);
    KKeySequenceRecorder::connect(self,
                                  static_cast<void (KKeySequenceRecorder::*)()>(&KKeySequenceRecorder::windowChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void KKeySequenceRecorder_CurrentKeySequenceChanged(KKeySequenceRecorder* self) {
    self->currentKeySequenceChanged();
}

void KKeySequenceRecorder_Connect_CurrentKeySequenceChanged(KKeySequenceRecorder* self, intptr_t slot) {
    void (*slotFunc)(KKeySequenceRecorder*) = reinterpret_cast<void (*)(KKeySequenceRecorder*)>(slot);
    KKeySequenceRecorder::connect(self,
                                  static_cast<void (KKeySequenceRecorder::*)()>(&KKeySequenceRecorder::currentKeySequenceChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void KKeySequenceRecorder_MultiKeyShortcutsAllowedChanged(KKeySequenceRecorder* self) {
    self->multiKeyShortcutsAllowedChanged();
}

void KKeySequenceRecorder_Connect_MultiKeyShortcutsAllowedChanged(KKeySequenceRecorder* self, intptr_t slot) {
    void (*slotFunc)(KKeySequenceRecorder*) = reinterpret_cast<void (*)(KKeySequenceRecorder*)>(slot);
    KKeySequenceRecorder::connect(self,
                                  static_cast<void (KKeySequenceRecorder::*)()>(&KKeySequenceRecorder::multiKeyShortcutsAllowedChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void KKeySequenceRecorder_ModifierlessAllowedChanged(KKeySequenceRecorder* self) {
    self->modifierlessAllowedChanged();
}

void KKeySequenceRecorder_Connect_ModifierlessAllowedChanged(KKeySequenceRecorder* self, intptr_t slot) {
    void (*slotFunc)(KKeySequenceRecorder*) = reinterpret_cast<void (*)(KKeySequenceRecorder*)>(slot);
    KKeySequenceRecorder::connect(self,
                                  static_cast<void (KKeySequenceRecorder::*)()>(&KKeySequenceRecorder::modifierlessAllowedChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void KKeySequenceRecorder_ModifierOnlyAllowedChanged(KKeySequenceRecorder* self) {
    self->modifierOnlyAllowedChanged();
}

void KKeySequenceRecorder_Connect_ModifierOnlyAllowedChanged(KKeySequenceRecorder* self, intptr_t slot) {
    void (*slotFunc)(KKeySequenceRecorder*) = reinterpret_cast<void (*)(KKeySequenceRecorder*)>(slot);
    KKeySequenceRecorder::connect(self,
                                  static_cast<void (KKeySequenceRecorder::*)()>(&KKeySequenceRecorder::modifierOnlyAllowedChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void KKeySequenceRecorder_PatternsChanged(KKeySequenceRecorder* self) {
    self->patternsChanged();
}

void KKeySequenceRecorder_Connect_PatternsChanged(KKeySequenceRecorder* self, intptr_t slot) {
    void (*slotFunc)(KKeySequenceRecorder*) = reinterpret_cast<void (*)(KKeySequenceRecorder*)>(slot);
    KKeySequenceRecorder::connect(self,
                                  static_cast<void (KKeySequenceRecorder::*)()>(&KKeySequenceRecorder::patternsChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

libqt_string KKeySequenceRecorder_Tr2(const char* s, const char* c) {
    auto _ret = KKeySequenceRecorder::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KKeySequenceRecorder_Tr3(const char* s, const char* c, int n) {
    auto _ret = KKeySequenceRecorder::tr(s, c, static_cast<int>(n));
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
QMetaObject* KKeySequenceRecorder_SuperMetaObject(const KKeySequenceRecorder* self) {
    return (QMetaObject*)self->KKeySequenceRecorder::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnMetaObject(KKeySequenceRecorder* self, intptr_t slot) {
    if (auto* vkkeysequencerecorder = const_cast<VirtualKKeySequenceRecorder*>(dynamic_cast<const VirtualKKeySequenceRecorder*>(self)))
        vkkeysequencerecorder->kkeysequencerecorder_metaobject_callback = reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KKeySequenceRecorder_SuperMetacast(KKeySequenceRecorder* self, const char* param1) {
    return self->KKeySequenceRecorder::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnMetacast(KKeySequenceRecorder* self, intptr_t slot) {
    if (auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self))
        vkkeysequencerecorder->kkeysequencerecorder_metacast_callback = reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_Metacast_Callback>(slot);
}

// Base class handler implementation
int KKeySequenceRecorder_SuperMetacall(KKeySequenceRecorder* self, int param1, int param2, void** param3) {
    return self->KKeySequenceRecorder::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnMetacall(KKeySequenceRecorder* self, intptr_t slot) {
    if (auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self))
        vkkeysequencerecorder->kkeysequencerecorder_metacall_callback = reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KKeySequenceRecorder_Event(KKeySequenceRecorder* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KKeySequenceRecorder_SuperEvent(KKeySequenceRecorder* self, QEvent* event) {
    return self->KKeySequenceRecorder::event(event);
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnEvent(KKeySequenceRecorder* self, intptr_t slot) {
    if (auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self))
        vkkeysequencerecorder->kkeysequencerecorder_event_callback = reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_Event_Callback>(slot);
}

// Derived class handler implementation
bool KKeySequenceRecorder_EventFilter(KKeySequenceRecorder* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KKeySequenceRecorder_SuperEventFilter(KKeySequenceRecorder* self, QObject* watched, QEvent* event) {
    return self->KKeySequenceRecorder::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnEventFilter(KKeySequenceRecorder* self, intptr_t slot) {
    if (auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self))
        vkkeysequencerecorder->kkeysequencerecorder_eventfilter_callback = reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceRecorder_TimerEvent(KKeySequenceRecorder* self, QTimerEvent* event) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder) {
        vkkeysequencerecorder->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceRecorder::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceRecorder_SuperTimerEvent(KKeySequenceRecorder* self, QTimerEvent* event) {
    if (auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self)) {
        vkkeysequencerecorder->KKeySequenceRecorder::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceRecorder::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnTimerEvent(KKeySequenceRecorder* self, intptr_t slot) {
    if (auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self))
        vkkeysequencerecorder->kkeysequencerecorder_timerevent_callback = reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceRecorder_ChildEvent(KKeySequenceRecorder* self, QChildEvent* event) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder) {
        vkkeysequencerecorder->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceRecorder::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceRecorder_SuperChildEvent(KKeySequenceRecorder* self, QChildEvent* event) {
    if (auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self)) {
        vkkeysequencerecorder->KKeySequenceRecorder::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceRecorder::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnChildEvent(KKeySequenceRecorder* self, intptr_t slot) {
    if (auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self))
        vkkeysequencerecorder->kkeysequencerecorder_childevent_callback = reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceRecorder_CustomEvent(KKeySequenceRecorder* self, QEvent* event) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder) {
        vkkeysequencerecorder->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceRecorder::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceRecorder_SuperCustomEvent(KKeySequenceRecorder* self, QEvent* event) {
    if (auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self)) {
        vkkeysequencerecorder->KKeySequenceRecorder::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceRecorder::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnCustomEvent(KKeySequenceRecorder* self, intptr_t slot) {
    if (auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self))
        vkkeysequencerecorder->kkeysequencerecorder_customevent_callback = reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceRecorder_ConnectNotify(KKeySequenceRecorder* self, const QMetaMethod* signal) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder) {
        vkkeysequencerecorder->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceRecorder::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceRecorder_SuperConnectNotify(KKeySequenceRecorder* self, const QMetaMethod* signal) {
    if (auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self)) {
        vkkeysequencerecorder->KKeySequenceRecorder::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KKeySequenceRecorder::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnConnectNotify(KKeySequenceRecorder* self, intptr_t slot) {
    if (auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self))
        vkkeysequencerecorder->kkeysequencerecorder_connectnotify_callback = reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceRecorder_DisconnectNotify(KKeySequenceRecorder* self, const QMetaMethod* signal) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder) {
        vkkeysequencerecorder->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceRecorder::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceRecorder_SuperDisconnectNotify(KKeySequenceRecorder* self, const QMetaMethod* signal) {
    if (auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self)) {
        vkkeysequencerecorder->KKeySequenceRecorder::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KKeySequenceRecorder::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnDisconnectNotify(KKeySequenceRecorder* self, intptr_t slot) {
    if (auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self))
        vkkeysequencerecorder->kkeysequencerecorder_disconnectnotify_callback = reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KKeySequenceRecorder_Sender(const KKeySequenceRecorder* self) {
    if (auto* vkkeysequencerecorder = const_cast<VirtualKKeySequenceRecorder*>(dynamic_cast<const VirtualKKeySequenceRecorder*>(self))) {
        return vkkeysequencerecorder->VirtualKKeySequenceRecorder::sender();
    } else
        qFatal("Error: Protected method KKeySequenceRecorder::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KKeySequenceRecorder_SenderSignalIndex(const KKeySequenceRecorder* self) {
    if (auto* vkkeysequencerecorder = const_cast<VirtualKKeySequenceRecorder*>(dynamic_cast<const VirtualKKeySequenceRecorder*>(self))) {
        return vkkeysequencerecorder->VirtualKKeySequenceRecorder::senderSignalIndex();
    } else
        qFatal("Error: Protected method KKeySequenceRecorder::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KKeySequenceRecorder_Receivers(const KKeySequenceRecorder* self, const char* signal) {
    if (auto* vkkeysequencerecorder = const_cast<VirtualKKeySequenceRecorder*>(dynamic_cast<const VirtualKKeySequenceRecorder*>(self))) {
        return vkkeysequencerecorder->VirtualKKeySequenceRecorder::receivers(signal);
    } else
        qFatal("Error: Protected method KKeySequenceRecorder::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KKeySequenceRecorder_IsSignalConnected(const KKeySequenceRecorder* self, const QMetaMethod* signal) {
    if (auto* vkkeysequencerecorder = const_cast<VirtualKKeySequenceRecorder*>(dynamic_cast<const VirtualKKeySequenceRecorder*>(self))) {
        return vkkeysequencerecorder->VirtualKKeySequenceRecorder::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KKeySequenceRecorder::isSignalConnected called without a directly constructed type");
}

void KKeySequenceRecorder_Delete(KKeySequenceRecorder* self) {
    delete self;
}
