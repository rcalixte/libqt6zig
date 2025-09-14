#include <KPropertiesDialogPlugin>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <kpropertiesdialogplugin.h>
#include "libkpropertiesdialogplugin.h"
#include "libkpropertiesdialogplugin.hxx"

KPropertiesDialogPlugin* KPropertiesDialogPlugin_new(QObject* parent) {
    return new VirtualKPropertiesDialogPlugin(parent);
}

QMetaObject* KPropertiesDialogPlugin_MetaObject(const KPropertiesDialogPlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPropertiesDialogPlugin_Metacast(KPropertiesDialogPlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPropertiesDialogPlugin_Metacall(KPropertiesDialogPlugin* self, int param1, int param2, void** param3) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPropertiesDialogPlugin*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KPropertiesDialogPlugin_Tr(const char* s) {
    QString _ret = KPropertiesDialogPlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPropertiesDialogPlugin_ApplyChanges(KPropertiesDialogPlugin* self) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        self->applyChanges();
    } else {
        ((VirtualKPropertiesDialogPlugin*)self)->applyChanges();
    }
}

void KPropertiesDialogPlugin_SetDirty(KPropertiesDialogPlugin* self) {
    self->setDirty();
}

bool KPropertiesDialogPlugin_IsDirty(const KPropertiesDialogPlugin* self) {
    return self->isDirty();
}

void KPropertiesDialogPlugin_Changed(KPropertiesDialogPlugin* self) {
    self->changed();
}

void KPropertiesDialogPlugin_Connect_Changed(KPropertiesDialogPlugin* self, intptr_t slot) {
    void (*slotFunc)(KPropertiesDialogPlugin*) = reinterpret_cast<void (*)(KPropertiesDialogPlugin*)>(slot);
    KPropertiesDialogPlugin::connect(self, &KPropertiesDialogPlugin::changed, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KPropertiesDialogPlugin_Tr2(const char* s, const char* c) {
    QString _ret = KPropertiesDialogPlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPropertiesDialogPlugin_Tr3(const char* s, const char* c, int n) {
    QString _ret = KPropertiesDialogPlugin::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPropertiesDialogPlugin_SetDirty1(KPropertiesDialogPlugin* self, bool b) {
    self->setDirty(b);
}

// Base class handler implementation
int KPropertiesDialogPlugin_QBaseMetacall(KPropertiesDialogPlugin* self, int param1, int param2, void** param3) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_Metacall_IsBase(true);
        return vkpropertiesdialogplugin->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KPropertiesDialogPlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnMetacall(KPropertiesDialogPlugin* self, intptr_t slot) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_Metacall_Callback(reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KPropertiesDialogPlugin_QBaseApplyChanges(KPropertiesDialogPlugin* self) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_ApplyChanges_IsBase(true);
        vkpropertiesdialogplugin->applyChanges();
    } else {
        self->KPropertiesDialogPlugin::applyChanges();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnApplyChanges(KPropertiesDialogPlugin* self, intptr_t slot) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_ApplyChanges_Callback(reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_ApplyChanges_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPropertiesDialogPlugin_Event(KPropertiesDialogPlugin* self, QEvent* event) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        return vkpropertiesdialogplugin->event(event);
    } else {
        return self->KPropertiesDialogPlugin::event(event);
    }
}

// Base class handler implementation
bool KPropertiesDialogPlugin_QBaseEvent(KPropertiesDialogPlugin* self, QEvent* event) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_Event_IsBase(true);
        return vkpropertiesdialogplugin->event(event);
    } else {
        return self->KPropertiesDialogPlugin::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnEvent(KPropertiesDialogPlugin* self, intptr_t slot) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_Event_Callback(reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPropertiesDialogPlugin_EventFilter(KPropertiesDialogPlugin* self, QObject* watched, QEvent* event) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        return vkpropertiesdialogplugin->eventFilter(watched, event);
    } else {
        return self->KPropertiesDialogPlugin::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KPropertiesDialogPlugin_QBaseEventFilter(KPropertiesDialogPlugin* self, QObject* watched, QEvent* event) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_EventFilter_IsBase(true);
        return vkpropertiesdialogplugin->eventFilter(watched, event);
    } else {
        return self->KPropertiesDialogPlugin::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnEventFilter(KPropertiesDialogPlugin* self, intptr_t slot) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_EventFilter_Callback(reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialogPlugin_TimerEvent(KPropertiesDialogPlugin* self, QTimerEvent* event) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->timerEvent(event);
    } else {
        ((VirtualKPropertiesDialogPlugin*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialogPlugin_QBaseTimerEvent(KPropertiesDialogPlugin* self, QTimerEvent* event) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_TimerEvent_IsBase(true);
        vkpropertiesdialogplugin->timerEvent(event);
    } else {
        ((VirtualKPropertiesDialogPlugin*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnTimerEvent(KPropertiesDialogPlugin* self, intptr_t slot) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_TimerEvent_Callback(reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialogPlugin_ChildEvent(KPropertiesDialogPlugin* self, QChildEvent* event) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->childEvent(event);
    } else {
        ((VirtualKPropertiesDialogPlugin*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialogPlugin_QBaseChildEvent(KPropertiesDialogPlugin* self, QChildEvent* event) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_ChildEvent_IsBase(true);
        vkpropertiesdialogplugin->childEvent(event);
    } else {
        ((VirtualKPropertiesDialogPlugin*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnChildEvent(KPropertiesDialogPlugin* self, intptr_t slot) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_ChildEvent_Callback(reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialogPlugin_CustomEvent(KPropertiesDialogPlugin* self, QEvent* event) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->customEvent(event);
    } else {
        ((VirtualKPropertiesDialogPlugin*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialogPlugin_QBaseCustomEvent(KPropertiesDialogPlugin* self, QEvent* event) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_CustomEvent_IsBase(true);
        vkpropertiesdialogplugin->customEvent(event);
    } else {
        ((VirtualKPropertiesDialogPlugin*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnCustomEvent(KPropertiesDialogPlugin* self, intptr_t slot) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_CustomEvent_Callback(reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialogPlugin_ConnectNotify(KPropertiesDialogPlugin* self, const QMetaMethod* signal) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->connectNotify(*signal);
    } else {
        ((VirtualKPropertiesDialogPlugin*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KPropertiesDialogPlugin_QBaseConnectNotify(KPropertiesDialogPlugin* self, const QMetaMethod* signal) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_ConnectNotify_IsBase(true);
        vkpropertiesdialogplugin->connectNotify(*signal);
    } else {
        ((VirtualKPropertiesDialogPlugin*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnConnectNotify(KPropertiesDialogPlugin* self, intptr_t slot) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_ConnectNotify_Callback(reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialogPlugin_DisconnectNotify(KPropertiesDialogPlugin* self, const QMetaMethod* signal) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->disconnectNotify(*signal);
    } else {
        ((VirtualKPropertiesDialogPlugin*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KPropertiesDialogPlugin_QBaseDisconnectNotify(KPropertiesDialogPlugin* self, const QMetaMethod* signal) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_DisconnectNotify_IsBase(true);
        vkpropertiesdialogplugin->disconnectNotify(*signal);
    } else {
        ((VirtualKPropertiesDialogPlugin*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnDisconnectNotify(KPropertiesDialogPlugin* self, intptr_t slot) {
    auto* vkpropertiesdialogplugin = dynamic_cast<VirtualKPropertiesDialogPlugin*>(self);
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_DisconnectNotify_Callback(reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int KPropertiesDialogPlugin_FontHeight(const KPropertiesDialogPlugin* self) {
    auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self));
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        return vkpropertiesdialogplugin->fontHeight();
    } else {
        return ((VirtualKPropertiesDialogPlugin*)self)->fontHeight();
    }
}

// Base class handler implementation
int KPropertiesDialogPlugin_QBaseFontHeight(const KPropertiesDialogPlugin* self) {
    auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self));
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_FontHeight_IsBase(true);
        return vkpropertiesdialogplugin->fontHeight();
    } else {
        return ((VirtualKPropertiesDialogPlugin*)self)->fontHeight();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnFontHeight(const KPropertiesDialogPlugin* self, intptr_t slot) {
    auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self));
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_FontHeight_Callback(reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_FontHeight_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KPropertiesDialogPlugin_Sender(const KPropertiesDialogPlugin* self) {
    auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self));
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        return vkpropertiesdialogplugin->sender();
    } else {
        return ((VirtualKPropertiesDialogPlugin*)self)->sender();
    }
}

// Base class handler implementation
QObject* KPropertiesDialogPlugin_QBaseSender(const KPropertiesDialogPlugin* self) {
    auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self));
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_Sender_IsBase(true);
        return vkpropertiesdialogplugin->sender();
    } else {
        return ((VirtualKPropertiesDialogPlugin*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnSender(const KPropertiesDialogPlugin* self, intptr_t slot) {
    auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self));
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_Sender_Callback(reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KPropertiesDialogPlugin_SenderSignalIndex(const KPropertiesDialogPlugin* self) {
    auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self));
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        return vkpropertiesdialogplugin->senderSignalIndex();
    } else {
        return ((VirtualKPropertiesDialogPlugin*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KPropertiesDialogPlugin_QBaseSenderSignalIndex(const KPropertiesDialogPlugin* self) {
    auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self));
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_SenderSignalIndex_IsBase(true);
        return vkpropertiesdialogplugin->senderSignalIndex();
    } else {
        return ((VirtualKPropertiesDialogPlugin*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnSenderSignalIndex(const KPropertiesDialogPlugin* self, intptr_t slot) {
    auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self));
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KPropertiesDialogPlugin_Receivers(const KPropertiesDialogPlugin* self, const char* signal) {
    auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self));
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        return vkpropertiesdialogplugin->receivers(signal);
    } else {
        return ((VirtualKPropertiesDialogPlugin*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KPropertiesDialogPlugin_QBaseReceivers(const KPropertiesDialogPlugin* self, const char* signal) {
    auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self));
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_Receivers_IsBase(true);
        return vkpropertiesdialogplugin->receivers(signal);
    } else {
        return ((VirtualKPropertiesDialogPlugin*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnReceivers(const KPropertiesDialogPlugin* self, intptr_t slot) {
    auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self));
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_Receivers_Callback(reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPropertiesDialogPlugin_IsSignalConnected(const KPropertiesDialogPlugin* self, const QMetaMethod* signal) {
    auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self));
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        return vkpropertiesdialogplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualKPropertiesDialogPlugin*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KPropertiesDialogPlugin_QBaseIsSignalConnected(const KPropertiesDialogPlugin* self, const QMetaMethod* signal) {
    auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self));
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_IsSignalConnected_IsBase(true);
        return vkpropertiesdialogplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualKPropertiesDialogPlugin*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialogPlugin_OnIsSignalConnected(const KPropertiesDialogPlugin* self, intptr_t slot) {
    auto* vkpropertiesdialogplugin = const_cast<VirtualKPropertiesDialogPlugin*>(dynamic_cast<const VirtualKPropertiesDialogPlugin*>(self));
    if (vkpropertiesdialogplugin && vkpropertiesdialogplugin->isVirtualKPropertiesDialogPlugin) {
        vkpropertiesdialogplugin->setKPropertiesDialogPlugin_IsSignalConnected_Callback(reinterpret_cast<VirtualKPropertiesDialogPlugin::KPropertiesDialogPlugin_IsSignalConnected_Callback>(slot));
    }
}

void KPropertiesDialogPlugin_Delete(KPropertiesDialogPlugin* self) {
    delete self;
}
