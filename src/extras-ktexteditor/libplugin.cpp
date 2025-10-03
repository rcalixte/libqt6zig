#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__ConfigPage
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__MainWindow
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Plugin
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <plugin.h>
#include "libplugin.h"
#include "libplugin.hxx"

KTextEditor__Plugin* KTextEditor__Plugin_new(QObject* parent) {
    return new VirtualKTextEditorPlugin(parent);
}

QMetaObject* KTextEditor__Plugin_MetaObject(const KTextEditor__Plugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTextEditor__Plugin_Metacast(KTextEditor__Plugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTextEditor__Plugin_Metacall(KTextEditor__Plugin* self, int param1, int param2, void** param3) {
    auto* vktexteditor__plugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditor__plugin && vktexteditor__plugin->isVirtualKTextEditorPlugin) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTextEditorPlugin*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KTextEditor__Plugin_Tr(const char* s) {
    QString _ret = KTextEditor::Plugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QObject* KTextEditor__Plugin_CreateView(KTextEditor__Plugin* self, KTextEditor__MainWindow* mainWindow) {
    auto* vktexteditor__plugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditor__plugin && vktexteditor__plugin->isVirtualKTextEditorPlugin) {
        return vktexteditor__plugin->createView(mainWindow);
    } else {
        return ((VirtualKTextEditorPlugin*)self)->createView(mainWindow);
    }
}

int KTextEditor__Plugin_ConfigPages(const KTextEditor__Plugin* self) {
    auto* vktexteditor__plugin = dynamic_cast<const VirtualKTextEditorPlugin*>(self);
    if (vktexteditor__plugin && vktexteditor__plugin->isVirtualKTextEditorPlugin) {
        return self->configPages();
    } else {
        return ((VirtualKTextEditorPlugin*)self)->configPages();
    }
}

KTextEditor__ConfigPage* KTextEditor__Plugin_ConfigPage(KTextEditor__Plugin* self, int number, QWidget* parent) {
    auto* vktexteditor__plugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditor__plugin && vktexteditor__plugin->isVirtualKTextEditorPlugin) {
        return self->configPage(static_cast<int>(number), parent);
    } else {
        return ((VirtualKTextEditorPlugin*)self)->configPage(static_cast<int>(number), parent);
    }
}

libqt_string KTextEditor__Plugin_Tr2(const char* s, const char* c) {
    QString _ret = KTextEditor::Plugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__Plugin_Tr3(const char* s, const char* c, int n) {
    QString _ret = KTextEditor::Plugin::tr(s, c, static_cast<int>(n));
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
int KTextEditor__Plugin_QBaseMetacall(KTextEditor__Plugin* self, int param1, int param2, void** param3) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_Metacall_IsBase(true);
        return vktexteditorplugin->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KTextEditor::Plugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnMetacall(KTextEditor__Plugin* self, intptr_t slot) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_Metacall_Callback(reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QObject* KTextEditor__Plugin_QBaseCreateView(KTextEditor__Plugin* self, KTextEditor__MainWindow* mainWindow) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_CreateView_IsBase(true);
        return vktexteditorplugin->createView(mainWindow);
    } else {
        return ((VirtualKTextEditorPlugin*)self)->createView(mainWindow);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnCreateView(KTextEditor__Plugin* self, intptr_t slot) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_CreateView_Callback(reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_CreateView_Callback>(slot));
    }
}

// Base class handler implementation
int KTextEditor__Plugin_QBaseConfigPages(const KTextEditor__Plugin* self) {
    auto* vktexteditorplugin = const_cast<VirtualKTextEditorPlugin*>(dynamic_cast<const VirtualKTextEditorPlugin*>(self));
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_ConfigPages_IsBase(true);
        return vktexteditorplugin->configPages();
    } else {
        return self->KTextEditor::Plugin::configPages();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnConfigPages(const KTextEditor__Plugin* self, intptr_t slot) {
    auto* vktexteditorplugin = const_cast<VirtualKTextEditorPlugin*>(dynamic_cast<const VirtualKTextEditorPlugin*>(self));
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_ConfigPages_Callback(reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_ConfigPages_Callback>(slot));
    }
}

// Base class handler implementation
KTextEditor__ConfigPage* KTextEditor__Plugin_QBaseConfigPage(KTextEditor__Plugin* self, int number, QWidget* parent) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_ConfigPage_IsBase(true);
        return vktexteditorplugin->configPage(static_cast<int>(number), parent);
    } else {
        return self->KTextEditor::Plugin::configPage(static_cast<int>(number), parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnConfigPage(KTextEditor__Plugin* self, intptr_t slot) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_ConfigPage_Callback(reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_ConfigPage_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__Plugin_Event(KTextEditor__Plugin* self, QEvent* event) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        return vktexteditorplugin->event(event);
    } else {
        return self->KTextEditor::Plugin::event(event);
    }
}

// Base class handler implementation
bool KTextEditor__Plugin_QBaseEvent(KTextEditor__Plugin* self, QEvent* event) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_Event_IsBase(true);
        return vktexteditorplugin->event(event);
    } else {
        return self->KTextEditor::Plugin::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnEvent(KTextEditor__Plugin* self, intptr_t slot) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_Event_Callback(reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__Plugin_EventFilter(KTextEditor__Plugin* self, QObject* watched, QEvent* event) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        return vktexteditorplugin->eventFilter(watched, event);
    } else {
        return self->KTextEditor::Plugin::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KTextEditor__Plugin_QBaseEventFilter(KTextEditor__Plugin* self, QObject* watched, QEvent* event) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_EventFilter_IsBase(true);
        return vktexteditorplugin->eventFilter(watched, event);
    } else {
        return self->KTextEditor::Plugin::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnEventFilter(KTextEditor__Plugin* self, intptr_t slot) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_EventFilter_Callback(reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__Plugin_TimerEvent(KTextEditor__Plugin* self, QTimerEvent* event) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->timerEvent(event);
    } else {
        ((VirtualKTextEditorPlugin*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__Plugin_QBaseTimerEvent(KTextEditor__Plugin* self, QTimerEvent* event) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_TimerEvent_IsBase(true);
        vktexteditorplugin->timerEvent(event);
    } else {
        ((VirtualKTextEditorPlugin*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnTimerEvent(KTextEditor__Plugin* self, intptr_t slot) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_TimerEvent_Callback(reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__Plugin_ChildEvent(KTextEditor__Plugin* self, QChildEvent* event) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->childEvent(event);
    } else {
        ((VirtualKTextEditorPlugin*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__Plugin_QBaseChildEvent(KTextEditor__Plugin* self, QChildEvent* event) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_ChildEvent_IsBase(true);
        vktexteditorplugin->childEvent(event);
    } else {
        ((VirtualKTextEditorPlugin*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnChildEvent(KTextEditor__Plugin* self, intptr_t slot) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_ChildEvent_Callback(reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__Plugin_CustomEvent(KTextEditor__Plugin* self, QEvent* event) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->customEvent(event);
    } else {
        ((VirtualKTextEditorPlugin*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__Plugin_QBaseCustomEvent(KTextEditor__Plugin* self, QEvent* event) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_CustomEvent_IsBase(true);
        vktexteditorplugin->customEvent(event);
    } else {
        ((VirtualKTextEditorPlugin*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnCustomEvent(KTextEditor__Plugin* self, intptr_t slot) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_CustomEvent_Callback(reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__Plugin_ConnectNotify(KTextEditor__Plugin* self, const QMetaMethod* signal) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->connectNotify(*signal);
    } else {
        ((VirtualKTextEditorPlugin*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KTextEditor__Plugin_QBaseConnectNotify(KTextEditor__Plugin* self, const QMetaMethod* signal) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_ConnectNotify_IsBase(true);
        vktexteditorplugin->connectNotify(*signal);
    } else {
        ((VirtualKTextEditorPlugin*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnConnectNotify(KTextEditor__Plugin* self, intptr_t slot) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_ConnectNotify_Callback(reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__Plugin_DisconnectNotify(KTextEditor__Plugin* self, const QMetaMethod* signal) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->disconnectNotify(*signal);
    } else {
        ((VirtualKTextEditorPlugin*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KTextEditor__Plugin_QBaseDisconnectNotify(KTextEditor__Plugin* self, const QMetaMethod* signal) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_DisconnectNotify_IsBase(true);
        vktexteditorplugin->disconnectNotify(*signal);
    } else {
        ((VirtualKTextEditorPlugin*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnDisconnectNotify(KTextEditor__Plugin* self, intptr_t slot) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_DisconnectNotify_Callback(reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KTextEditor__Plugin_Sender(const KTextEditor__Plugin* self) {
    auto* vktexteditorplugin = const_cast<VirtualKTextEditorPlugin*>(dynamic_cast<const VirtualKTextEditorPlugin*>(self));
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        return vktexteditorplugin->sender();
    } else {
        return ((VirtualKTextEditorPlugin*)self)->sender();
    }
}

// Base class handler implementation
QObject* KTextEditor__Plugin_QBaseSender(const KTextEditor__Plugin* self) {
    auto* vktexteditorplugin = const_cast<VirtualKTextEditorPlugin*>(dynamic_cast<const VirtualKTextEditorPlugin*>(self));
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_Sender_IsBase(true);
        return vktexteditorplugin->sender();
    } else {
        return ((VirtualKTextEditorPlugin*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnSender(const KTextEditor__Plugin* self, intptr_t slot) {
    auto* vktexteditorplugin = const_cast<VirtualKTextEditorPlugin*>(dynamic_cast<const VirtualKTextEditorPlugin*>(self));
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_Sender_Callback(reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__Plugin_SenderSignalIndex(const KTextEditor__Plugin* self) {
    auto* vktexteditorplugin = const_cast<VirtualKTextEditorPlugin*>(dynamic_cast<const VirtualKTextEditorPlugin*>(self));
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        return vktexteditorplugin->senderSignalIndex();
    } else {
        return ((VirtualKTextEditorPlugin*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KTextEditor__Plugin_QBaseSenderSignalIndex(const KTextEditor__Plugin* self) {
    auto* vktexteditorplugin = const_cast<VirtualKTextEditorPlugin*>(dynamic_cast<const VirtualKTextEditorPlugin*>(self));
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_SenderSignalIndex_IsBase(true);
        return vktexteditorplugin->senderSignalIndex();
    } else {
        return ((VirtualKTextEditorPlugin*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnSenderSignalIndex(const KTextEditor__Plugin* self, intptr_t slot) {
    auto* vktexteditorplugin = const_cast<VirtualKTextEditorPlugin*>(dynamic_cast<const VirtualKTextEditorPlugin*>(self));
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_SenderSignalIndex_Callback(reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__Plugin_Receivers(const KTextEditor__Plugin* self, const char* signal) {
    auto* vktexteditorplugin = const_cast<VirtualKTextEditorPlugin*>(dynamic_cast<const VirtualKTextEditorPlugin*>(self));
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        return vktexteditorplugin->receivers(signal);
    } else {
        return ((VirtualKTextEditorPlugin*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KTextEditor__Plugin_QBaseReceivers(const KTextEditor__Plugin* self, const char* signal) {
    auto* vktexteditorplugin = const_cast<VirtualKTextEditorPlugin*>(dynamic_cast<const VirtualKTextEditorPlugin*>(self));
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_Receivers_IsBase(true);
        return vktexteditorplugin->receivers(signal);
    } else {
        return ((VirtualKTextEditorPlugin*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnReceivers(const KTextEditor__Plugin* self, intptr_t slot) {
    auto* vktexteditorplugin = const_cast<VirtualKTextEditorPlugin*>(dynamic_cast<const VirtualKTextEditorPlugin*>(self));
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_Receivers_Callback(reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__Plugin_IsSignalConnected(const KTextEditor__Plugin* self, const QMetaMethod* signal) {
    auto* vktexteditorplugin = const_cast<VirtualKTextEditorPlugin*>(dynamic_cast<const VirtualKTextEditorPlugin*>(self));
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        return vktexteditorplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualKTextEditorPlugin*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KTextEditor__Plugin_QBaseIsSignalConnected(const KTextEditor__Plugin* self, const QMetaMethod* signal) {
    auto* vktexteditorplugin = const_cast<VirtualKTextEditorPlugin*>(dynamic_cast<const VirtualKTextEditorPlugin*>(self));
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_IsSignalConnected_IsBase(true);
        return vktexteditorplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualKTextEditorPlugin*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnIsSignalConnected(const KTextEditor__Plugin* self, intptr_t slot) {
    auto* vktexteditorplugin = const_cast<VirtualKTextEditorPlugin*>(dynamic_cast<const VirtualKTextEditorPlugin*>(self));
    if (vktexteditorplugin && vktexteditorplugin->isVirtualKTextEditorPlugin) {
        vktexteditorplugin->setKTextEditor__Plugin_IsSignalConnected_Callback(reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_IsSignalConnected_Callback>(slot));
    }
}

void KTextEditor__Plugin_Delete(KTextEditor__Plugin* self) {
    delete self;
}
