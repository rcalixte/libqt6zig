#include <KKeySequenceRecorder>
#include <QChildEvent>
#include <QEvent>
#include <QKeySequence>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKKeySequenceRecorder*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KKeySequenceRecorder_Tr(const char* s) {
    QString _ret = KKeySequenceRecorder::tr(s);
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
    KKeySequenceRecorder::connect(self, &KKeySequenceRecorder::gotKeySequence, [self, slotFunc](const QKeySequence& keySequence) {
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
    KKeySequenceRecorder::connect(self, &KKeySequenceRecorder::recordingChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KKeySequenceRecorder_WindowChanged(KKeySequenceRecorder* self) {
    self->windowChanged();
}

void KKeySequenceRecorder_Connect_WindowChanged(KKeySequenceRecorder* self, intptr_t slot) {
    void (*slotFunc)(KKeySequenceRecorder*) = reinterpret_cast<void (*)(KKeySequenceRecorder*)>(slot);
    KKeySequenceRecorder::connect(self, &KKeySequenceRecorder::windowChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KKeySequenceRecorder_CurrentKeySequenceChanged(KKeySequenceRecorder* self) {
    self->currentKeySequenceChanged();
}

void KKeySequenceRecorder_Connect_CurrentKeySequenceChanged(KKeySequenceRecorder* self, intptr_t slot) {
    void (*slotFunc)(KKeySequenceRecorder*) = reinterpret_cast<void (*)(KKeySequenceRecorder*)>(slot);
    KKeySequenceRecorder::connect(self, &KKeySequenceRecorder::currentKeySequenceChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KKeySequenceRecorder_MultiKeyShortcutsAllowedChanged(KKeySequenceRecorder* self) {
    self->multiKeyShortcutsAllowedChanged();
}

void KKeySequenceRecorder_Connect_MultiKeyShortcutsAllowedChanged(KKeySequenceRecorder* self, intptr_t slot) {
    void (*slotFunc)(KKeySequenceRecorder*) = reinterpret_cast<void (*)(KKeySequenceRecorder*)>(slot);
    KKeySequenceRecorder::connect(self, &KKeySequenceRecorder::multiKeyShortcutsAllowedChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KKeySequenceRecorder_ModifierlessAllowedChanged(KKeySequenceRecorder* self) {
    self->modifierlessAllowedChanged();
}

void KKeySequenceRecorder_Connect_ModifierlessAllowedChanged(KKeySequenceRecorder* self, intptr_t slot) {
    void (*slotFunc)(KKeySequenceRecorder*) = reinterpret_cast<void (*)(KKeySequenceRecorder*)>(slot);
    KKeySequenceRecorder::connect(self, &KKeySequenceRecorder::modifierlessAllowedChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KKeySequenceRecorder_ModifierOnlyAllowedChanged(KKeySequenceRecorder* self) {
    self->modifierOnlyAllowedChanged();
}

void KKeySequenceRecorder_Connect_ModifierOnlyAllowedChanged(KKeySequenceRecorder* self, intptr_t slot) {
    void (*slotFunc)(KKeySequenceRecorder*) = reinterpret_cast<void (*)(KKeySequenceRecorder*)>(slot);
    KKeySequenceRecorder::connect(self, &KKeySequenceRecorder::modifierOnlyAllowedChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KKeySequenceRecorder_PatternsChanged(KKeySequenceRecorder* self) {
    self->patternsChanged();
}

void KKeySequenceRecorder_Connect_PatternsChanged(KKeySequenceRecorder* self, intptr_t slot) {
    void (*slotFunc)(KKeySequenceRecorder*) = reinterpret_cast<void (*)(KKeySequenceRecorder*)>(slot);
    KKeySequenceRecorder::connect(self, &KKeySequenceRecorder::patternsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KKeySequenceRecorder_Tr2(const char* s, const char* c) {
    QString _ret = KKeySequenceRecorder::tr(s, c);
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
    QString _ret = KKeySequenceRecorder::tr(s, c, static_cast<int>(n));
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
int KKeySequenceRecorder_QBaseMetacall(KKeySequenceRecorder* self, int param1, int param2, void** param3) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_Metacall_IsBase(true);
        return vkkeysequencerecorder->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KKeySequenceRecorder::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnMetacall(KKeySequenceRecorder* self, intptr_t slot) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_Metacall_Callback(reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KKeySequenceRecorder_Event(KKeySequenceRecorder* self, QEvent* event) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        return vkkeysequencerecorder->event(event);
    } else {
        return self->KKeySequenceRecorder::event(event);
    }
}

// Base class handler implementation
bool KKeySequenceRecorder_QBaseEvent(KKeySequenceRecorder* self, QEvent* event) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_Event_IsBase(true);
        return vkkeysequencerecorder->event(event);
    } else {
        return self->KKeySequenceRecorder::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnEvent(KKeySequenceRecorder* self, intptr_t slot) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_Event_Callback(reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KKeySequenceRecorder_EventFilter(KKeySequenceRecorder* self, QObject* watched, QEvent* event) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        return vkkeysequencerecorder->eventFilter(watched, event);
    } else {
        return self->KKeySequenceRecorder::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KKeySequenceRecorder_QBaseEventFilter(KKeySequenceRecorder* self, QObject* watched, QEvent* event) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_EventFilter_IsBase(true);
        return vkkeysequencerecorder->eventFilter(watched, event);
    } else {
        return self->KKeySequenceRecorder::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnEventFilter(KKeySequenceRecorder* self, intptr_t slot) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_EventFilter_Callback(reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceRecorder_TimerEvent(KKeySequenceRecorder* self, QTimerEvent* event) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->timerEvent(event);
    } else {
        ((VirtualKKeySequenceRecorder*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceRecorder_QBaseTimerEvent(KKeySequenceRecorder* self, QTimerEvent* event) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_TimerEvent_IsBase(true);
        vkkeysequencerecorder->timerEvent(event);
    } else {
        ((VirtualKKeySequenceRecorder*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnTimerEvent(KKeySequenceRecorder* self, intptr_t slot) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_TimerEvent_Callback(reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceRecorder_ChildEvent(KKeySequenceRecorder* self, QChildEvent* event) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->childEvent(event);
    } else {
        ((VirtualKKeySequenceRecorder*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceRecorder_QBaseChildEvent(KKeySequenceRecorder* self, QChildEvent* event) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_ChildEvent_IsBase(true);
        vkkeysequencerecorder->childEvent(event);
    } else {
        ((VirtualKKeySequenceRecorder*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnChildEvent(KKeySequenceRecorder* self, intptr_t slot) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_ChildEvent_Callback(reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceRecorder_CustomEvent(KKeySequenceRecorder* self, QEvent* event) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->customEvent(event);
    } else {
        ((VirtualKKeySequenceRecorder*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceRecorder_QBaseCustomEvent(KKeySequenceRecorder* self, QEvent* event) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_CustomEvent_IsBase(true);
        vkkeysequencerecorder->customEvent(event);
    } else {
        ((VirtualKKeySequenceRecorder*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnCustomEvent(KKeySequenceRecorder* self, intptr_t slot) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_CustomEvent_Callback(reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceRecorder_ConnectNotify(KKeySequenceRecorder* self, const QMetaMethod* signal) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->connectNotify(*signal);
    } else {
        ((VirtualKKeySequenceRecorder*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KKeySequenceRecorder_QBaseConnectNotify(KKeySequenceRecorder* self, const QMetaMethod* signal) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_ConnectNotify_IsBase(true);
        vkkeysequencerecorder->connectNotify(*signal);
    } else {
        ((VirtualKKeySequenceRecorder*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnConnectNotify(KKeySequenceRecorder* self, intptr_t slot) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_ConnectNotify_Callback(reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceRecorder_DisconnectNotify(KKeySequenceRecorder* self, const QMetaMethod* signal) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->disconnectNotify(*signal);
    } else {
        ((VirtualKKeySequenceRecorder*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KKeySequenceRecorder_QBaseDisconnectNotify(KKeySequenceRecorder* self, const QMetaMethod* signal) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_DisconnectNotify_IsBase(true);
        vkkeysequencerecorder->disconnectNotify(*signal);
    } else {
        ((VirtualKKeySequenceRecorder*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnDisconnectNotify(KKeySequenceRecorder* self, intptr_t slot) {
    auto* vkkeysequencerecorder = dynamic_cast<VirtualKKeySequenceRecorder*>(self);
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_DisconnectNotify_Callback(reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KKeySequenceRecorder_Sender(const KKeySequenceRecorder* self) {
    auto* vkkeysequencerecorder = const_cast<VirtualKKeySequenceRecorder*>(dynamic_cast<const VirtualKKeySequenceRecorder*>(self));
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        return vkkeysequencerecorder->sender();
    } else {
        return ((VirtualKKeySequenceRecorder*)self)->sender();
    }
}

// Base class handler implementation
QObject* KKeySequenceRecorder_QBaseSender(const KKeySequenceRecorder* self) {
    auto* vkkeysequencerecorder = const_cast<VirtualKKeySequenceRecorder*>(dynamic_cast<const VirtualKKeySequenceRecorder*>(self));
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_Sender_IsBase(true);
        return vkkeysequencerecorder->sender();
    } else {
        return ((VirtualKKeySequenceRecorder*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnSender(const KKeySequenceRecorder* self, intptr_t slot) {
    auto* vkkeysequencerecorder = const_cast<VirtualKKeySequenceRecorder*>(dynamic_cast<const VirtualKKeySequenceRecorder*>(self));
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_Sender_Callback(reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KKeySequenceRecorder_SenderSignalIndex(const KKeySequenceRecorder* self) {
    auto* vkkeysequencerecorder = const_cast<VirtualKKeySequenceRecorder*>(dynamic_cast<const VirtualKKeySequenceRecorder*>(self));
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        return vkkeysequencerecorder->senderSignalIndex();
    } else {
        return ((VirtualKKeySequenceRecorder*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KKeySequenceRecorder_QBaseSenderSignalIndex(const KKeySequenceRecorder* self) {
    auto* vkkeysequencerecorder = const_cast<VirtualKKeySequenceRecorder*>(dynamic_cast<const VirtualKKeySequenceRecorder*>(self));
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_SenderSignalIndex_IsBase(true);
        return vkkeysequencerecorder->senderSignalIndex();
    } else {
        return ((VirtualKKeySequenceRecorder*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnSenderSignalIndex(const KKeySequenceRecorder* self, intptr_t slot) {
    auto* vkkeysequencerecorder = const_cast<VirtualKKeySequenceRecorder*>(dynamic_cast<const VirtualKKeySequenceRecorder*>(self));
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_SenderSignalIndex_Callback(reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KKeySequenceRecorder_Receivers(const KKeySequenceRecorder* self, const char* signal) {
    auto* vkkeysequencerecorder = const_cast<VirtualKKeySequenceRecorder*>(dynamic_cast<const VirtualKKeySequenceRecorder*>(self));
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        return vkkeysequencerecorder->receivers(signal);
    } else {
        return ((VirtualKKeySequenceRecorder*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KKeySequenceRecorder_QBaseReceivers(const KKeySequenceRecorder* self, const char* signal) {
    auto* vkkeysequencerecorder = const_cast<VirtualKKeySequenceRecorder*>(dynamic_cast<const VirtualKKeySequenceRecorder*>(self));
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_Receivers_IsBase(true);
        return vkkeysequencerecorder->receivers(signal);
    } else {
        return ((VirtualKKeySequenceRecorder*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnReceivers(const KKeySequenceRecorder* self, intptr_t slot) {
    auto* vkkeysequencerecorder = const_cast<VirtualKKeySequenceRecorder*>(dynamic_cast<const VirtualKKeySequenceRecorder*>(self));
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_Receivers_Callback(reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KKeySequenceRecorder_IsSignalConnected(const KKeySequenceRecorder* self, const QMetaMethod* signal) {
    auto* vkkeysequencerecorder = const_cast<VirtualKKeySequenceRecorder*>(dynamic_cast<const VirtualKKeySequenceRecorder*>(self));
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        return vkkeysequencerecorder->isSignalConnected(*signal);
    } else {
        return ((VirtualKKeySequenceRecorder*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KKeySequenceRecorder_QBaseIsSignalConnected(const KKeySequenceRecorder* self, const QMetaMethod* signal) {
    auto* vkkeysequencerecorder = const_cast<VirtualKKeySequenceRecorder*>(dynamic_cast<const VirtualKKeySequenceRecorder*>(self));
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_IsSignalConnected_IsBase(true);
        return vkkeysequencerecorder->isSignalConnected(*signal);
    } else {
        return ((VirtualKKeySequenceRecorder*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceRecorder_OnIsSignalConnected(const KKeySequenceRecorder* self, intptr_t slot) {
    auto* vkkeysequencerecorder = const_cast<VirtualKKeySequenceRecorder*>(dynamic_cast<const VirtualKKeySequenceRecorder*>(self));
    if (vkkeysequencerecorder && vkkeysequencerecorder->isVirtualKKeySequenceRecorder) {
        vkkeysequencerecorder->setKKeySequenceRecorder_IsSignalConnected_Callback(reinterpret_cast<VirtualKKeySequenceRecorder::KKeySequenceRecorder_IsSignalConnected_Callback>(slot));
    }
}

void KKeySequenceRecorder_Delete(KKeySequenceRecorder* self) {
    delete self;
}
