#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__KUriFilterSearchProviderActions
#include <QChildEvent>
#include <QEvent>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <kurifiltersearchprovideractions.h>
#include "libkurifiltersearchprovideractions.h"
#include "libkurifiltersearchprovideractions.hxx"

KIO__KUriFilterSearchProviderActions* KIO__KUriFilterSearchProviderActions_new() {
    return new VirtualKIOKUriFilterSearchProviderActions();
}

KIO__KUriFilterSearchProviderActions* KIO__KUriFilterSearchProviderActions_new2(QObject* parent) {
    return new VirtualKIOKUriFilterSearchProviderActions(parent);
}

QMetaObject* KIO__KUriFilterSearchProviderActions_MetaObject(const KIO__KUriFilterSearchProviderActions* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__KUriFilterSearchProviderActions_Metacast(KIO__KUriFilterSearchProviderActions* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__KUriFilterSearchProviderActions_Metacall(KIO__KUriFilterSearchProviderActions* self, int param1, int param2, void** param3) {
    auto* vkio__kurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkio__kurifiltersearchprovideractions && vkio__kurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKIOKUriFilterSearchProviderActions*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KIO__KUriFilterSearchProviderActions_Tr(const char* s) {
    QString _ret = KIO::KUriFilterSearchProviderActions::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__KUriFilterSearchProviderActions_SelectedText(const KIO__KUriFilterSearchProviderActions* self) {
    QString _ret = self->selectedText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__KUriFilterSearchProviderActions_SetSelectedText(KIO__KUriFilterSearchProviderActions* self, const libqt_string selectedText) {
    QString selectedText_QString = QString::fromUtf8(selectedText.data, selectedText.len);
    self->setSelectedText(selectedText_QString);
}

void KIO__KUriFilterSearchProviderActions_AddWebShortcutsToMenu(KIO__KUriFilterSearchProviderActions* self, QMenu* menu) {
    self->addWebShortcutsToMenu(menu);
}

libqt_string KIO__KUriFilterSearchProviderActions_Tr2(const char* s, const char* c) {
    QString _ret = KIO::KUriFilterSearchProviderActions::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__KUriFilterSearchProviderActions_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::KUriFilterSearchProviderActions::tr(s, c, static_cast<int>(n));
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
int KIO__KUriFilterSearchProviderActions_QBaseMetacall(KIO__KUriFilterSearchProviderActions* self, int param1, int param2, void** param3) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_Metacall_IsBase(true);
        return vkiokurifiltersearchprovideractions->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIO::KUriFilterSearchProviderActions::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnMetacall(KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_Metacall_Callback(reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__KUriFilterSearchProviderActions_Event(KIO__KUriFilterSearchProviderActions* self, QEvent* event) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        return vkiokurifiltersearchprovideractions->event(event);
    } else {
        return self->KIO::KUriFilterSearchProviderActions::event(event);
    }
}

// Base class handler implementation
bool KIO__KUriFilterSearchProviderActions_QBaseEvent(KIO__KUriFilterSearchProviderActions* self, QEvent* event) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_Event_IsBase(true);
        return vkiokurifiltersearchprovideractions->event(event);
    } else {
        return self->KIO::KUriFilterSearchProviderActions::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnEvent(KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_Event_Callback(reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__KUriFilterSearchProviderActions_EventFilter(KIO__KUriFilterSearchProviderActions* self, QObject* watched, QEvent* event) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        return vkiokurifiltersearchprovideractions->eventFilter(watched, event);
    } else {
        return self->KIO::KUriFilterSearchProviderActions::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KIO__KUriFilterSearchProviderActions_QBaseEventFilter(KIO__KUriFilterSearchProviderActions* self, QObject* watched, QEvent* event) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_EventFilter_IsBase(true);
        return vkiokurifiltersearchprovideractions->eventFilter(watched, event);
    } else {
        return self->KIO::KUriFilterSearchProviderActions::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnEventFilter(KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_EventFilter_Callback(reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__KUriFilterSearchProviderActions_TimerEvent(KIO__KUriFilterSearchProviderActions* self, QTimerEvent* event) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->timerEvent(event);
    } else {
        ((VirtualKIOKUriFilterSearchProviderActions*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KIO__KUriFilterSearchProviderActions_QBaseTimerEvent(KIO__KUriFilterSearchProviderActions* self, QTimerEvent* event) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_TimerEvent_IsBase(true);
        vkiokurifiltersearchprovideractions->timerEvent(event);
    } else {
        ((VirtualKIOKUriFilterSearchProviderActions*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnTimerEvent(KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_TimerEvent_Callback(reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__KUriFilterSearchProviderActions_ChildEvent(KIO__KUriFilterSearchProviderActions* self, QChildEvent* event) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->childEvent(event);
    } else {
        ((VirtualKIOKUriFilterSearchProviderActions*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIO__KUriFilterSearchProviderActions_QBaseChildEvent(KIO__KUriFilterSearchProviderActions* self, QChildEvent* event) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_ChildEvent_IsBase(true);
        vkiokurifiltersearchprovideractions->childEvent(event);
    } else {
        ((VirtualKIOKUriFilterSearchProviderActions*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnChildEvent(KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_ChildEvent_Callback(reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__KUriFilterSearchProviderActions_CustomEvent(KIO__KUriFilterSearchProviderActions* self, QEvent* event) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->customEvent(event);
    } else {
        ((VirtualKIOKUriFilterSearchProviderActions*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIO__KUriFilterSearchProviderActions_QBaseCustomEvent(KIO__KUriFilterSearchProviderActions* self, QEvent* event) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_CustomEvent_IsBase(true);
        vkiokurifiltersearchprovideractions->customEvent(event);
    } else {
        ((VirtualKIOKUriFilterSearchProviderActions*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnCustomEvent(KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_CustomEvent_Callback(reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__KUriFilterSearchProviderActions_ConnectNotify(KIO__KUriFilterSearchProviderActions* self, const QMetaMethod* signal) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->connectNotify(*signal);
    } else {
        ((VirtualKIOKUriFilterSearchProviderActions*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__KUriFilterSearchProviderActions_QBaseConnectNotify(KIO__KUriFilterSearchProviderActions* self, const QMetaMethod* signal) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_ConnectNotify_IsBase(true);
        vkiokurifiltersearchprovideractions->connectNotify(*signal);
    } else {
        ((VirtualKIOKUriFilterSearchProviderActions*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnConnectNotify(KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_ConnectNotify_Callback(reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__KUriFilterSearchProviderActions_DisconnectNotify(KIO__KUriFilterSearchProviderActions* self, const QMetaMethod* signal) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->disconnectNotify(*signal);
    } else {
        ((VirtualKIOKUriFilterSearchProviderActions*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__KUriFilterSearchProviderActions_QBaseDisconnectNotify(KIO__KUriFilterSearchProviderActions* self, const QMetaMethod* signal) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_DisconnectNotify_IsBase(true);
        vkiokurifiltersearchprovideractions->disconnectNotify(*signal);
    } else {
        ((VirtualKIOKUriFilterSearchProviderActions*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnDisconnectNotify(KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    auto* vkiokurifiltersearchprovideractions = dynamic_cast<VirtualKIOKUriFilterSearchProviderActions*>(self);
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_DisconnectNotify_Callback(reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIO__KUriFilterSearchProviderActions_Sender(const KIO__KUriFilterSearchProviderActions* self) {
    auto* vkiokurifiltersearchprovideractions = const_cast<VirtualKIOKUriFilterSearchProviderActions*>(dynamic_cast<const VirtualKIOKUriFilterSearchProviderActions*>(self));
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        return vkiokurifiltersearchprovideractions->sender();
    } else {
        return ((VirtualKIOKUriFilterSearchProviderActions*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIO__KUriFilterSearchProviderActions_QBaseSender(const KIO__KUriFilterSearchProviderActions* self) {
    auto* vkiokurifiltersearchprovideractions = const_cast<VirtualKIOKUriFilterSearchProviderActions*>(dynamic_cast<const VirtualKIOKUriFilterSearchProviderActions*>(self));
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_Sender_IsBase(true);
        return vkiokurifiltersearchprovideractions->sender();
    } else {
        return ((VirtualKIOKUriFilterSearchProviderActions*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnSender(const KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    auto* vkiokurifiltersearchprovideractions = const_cast<VirtualKIOKUriFilterSearchProviderActions*>(dynamic_cast<const VirtualKIOKUriFilterSearchProviderActions*>(self));
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_Sender_Callback(reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__KUriFilterSearchProviderActions_SenderSignalIndex(const KIO__KUriFilterSearchProviderActions* self) {
    auto* vkiokurifiltersearchprovideractions = const_cast<VirtualKIOKUriFilterSearchProviderActions*>(dynamic_cast<const VirtualKIOKUriFilterSearchProviderActions*>(self));
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        return vkiokurifiltersearchprovideractions->senderSignalIndex();
    } else {
        return ((VirtualKIOKUriFilterSearchProviderActions*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIO__KUriFilterSearchProviderActions_QBaseSenderSignalIndex(const KIO__KUriFilterSearchProviderActions* self) {
    auto* vkiokurifiltersearchprovideractions = const_cast<VirtualKIOKUriFilterSearchProviderActions*>(dynamic_cast<const VirtualKIOKUriFilterSearchProviderActions*>(self));
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_SenderSignalIndex_IsBase(true);
        return vkiokurifiltersearchprovideractions->senderSignalIndex();
    } else {
        return ((VirtualKIOKUriFilterSearchProviderActions*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnSenderSignalIndex(const KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    auto* vkiokurifiltersearchprovideractions = const_cast<VirtualKIOKUriFilterSearchProviderActions*>(dynamic_cast<const VirtualKIOKUriFilterSearchProviderActions*>(self));
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__KUriFilterSearchProviderActions_Receivers(const KIO__KUriFilterSearchProviderActions* self, const char* signal) {
    auto* vkiokurifiltersearchprovideractions = const_cast<VirtualKIOKUriFilterSearchProviderActions*>(dynamic_cast<const VirtualKIOKUriFilterSearchProviderActions*>(self));
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        return vkiokurifiltersearchprovideractions->receivers(signal);
    } else {
        return ((VirtualKIOKUriFilterSearchProviderActions*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIO__KUriFilterSearchProviderActions_QBaseReceivers(const KIO__KUriFilterSearchProviderActions* self, const char* signal) {
    auto* vkiokurifiltersearchprovideractions = const_cast<VirtualKIOKUriFilterSearchProviderActions*>(dynamic_cast<const VirtualKIOKUriFilterSearchProviderActions*>(self));
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_Receivers_IsBase(true);
        return vkiokurifiltersearchprovideractions->receivers(signal);
    } else {
        return ((VirtualKIOKUriFilterSearchProviderActions*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnReceivers(const KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    auto* vkiokurifiltersearchprovideractions = const_cast<VirtualKIOKUriFilterSearchProviderActions*>(dynamic_cast<const VirtualKIOKUriFilterSearchProviderActions*>(self));
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_Receivers_Callback(reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__KUriFilterSearchProviderActions_IsSignalConnected(const KIO__KUriFilterSearchProviderActions* self, const QMetaMethod* signal) {
    auto* vkiokurifiltersearchprovideractions = const_cast<VirtualKIOKUriFilterSearchProviderActions*>(dynamic_cast<const VirtualKIOKUriFilterSearchProviderActions*>(self));
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        return vkiokurifiltersearchprovideractions->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOKUriFilterSearchProviderActions*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIO__KUriFilterSearchProviderActions_QBaseIsSignalConnected(const KIO__KUriFilterSearchProviderActions* self, const QMetaMethod* signal) {
    auto* vkiokurifiltersearchprovideractions = const_cast<VirtualKIOKUriFilterSearchProviderActions*>(dynamic_cast<const VirtualKIOKUriFilterSearchProviderActions*>(self));
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_IsSignalConnected_IsBase(true);
        return vkiokurifiltersearchprovideractions->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOKUriFilterSearchProviderActions*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__KUriFilterSearchProviderActions_OnIsSignalConnected(const KIO__KUriFilterSearchProviderActions* self, intptr_t slot) {
    auto* vkiokurifiltersearchprovideractions = const_cast<VirtualKIOKUriFilterSearchProviderActions*>(dynamic_cast<const VirtualKIOKUriFilterSearchProviderActions*>(self));
    if (vkiokurifiltersearchprovideractions && vkiokurifiltersearchprovideractions->isVirtualKIOKUriFilterSearchProviderActions) {
        vkiokurifiltersearchprovideractions->setKIO__KUriFilterSearchProviderActions_IsSignalConnected_Callback(reinterpret_cast<VirtualKIOKUriFilterSearchProviderActions::KIO__KUriFilterSearchProviderActions_IsSignalConnected_Callback>(slot));
    }
}

void KIO__KUriFilterSearchProviderActions_Delete(KIO__KUriFilterSearchProviderActions* self) {
    delete self;
}
