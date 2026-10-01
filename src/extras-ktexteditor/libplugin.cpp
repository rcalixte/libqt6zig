#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__ConfigPage
#include <KTextEditor/MainWindow>
#include <KTextEditor/Plugin>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KTextEditor__Plugin_Tr(const char* s) {
    auto _ret = KTextEditor::Plugin::tr(s);
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
    return self->createView(mainWindow);
}

int KTextEditor__Plugin_ConfigPages(const KTextEditor__Plugin* self) {
    return self->configPages();
}

KTextEditor__ConfigPage* KTextEditor__Plugin_ConfigPage(KTextEditor__Plugin* self, int number, QWidget* parent) {
    return self->configPage(static_cast<int>(number), parent);
}

libqt_string KTextEditor__Plugin_Tr2(const char* s, const char* c) {
    auto _ret = KTextEditor::Plugin::tr(s, c);
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
    auto _ret = KTextEditor::Plugin::tr(s, c, static_cast<int>(n));
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
QMetaObject* KTextEditor__Plugin_SuperMetaObject(const KTextEditor__Plugin* self) {
    return (QMetaObject*)self->KTextEditor::Plugin::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnMetaObject(KTextEditor__Plugin* self, intptr_t slot) {
    if (auto* vktexteditorplugin = const_cast<VirtualKTextEditorPlugin*>(dynamic_cast<const VirtualKTextEditorPlugin*>(self)))
        vktexteditorplugin->ktexteditor__plugin_metaobject_callback = reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KTextEditor__Plugin_SuperMetacast(KTextEditor__Plugin* self, const char* param1) {
    return self->KTextEditor::Plugin::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnMetacast(KTextEditor__Plugin* self, intptr_t slot) {
    if (auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self))
        vktexteditorplugin->ktexteditor__plugin_metacast_callback = reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_Metacast_Callback>(slot);
}

// Base class handler implementation
int KTextEditor__Plugin_SuperMetacall(KTextEditor__Plugin* self, int param1, int param2, void** param3) {
    return self->KTextEditor::Plugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnMetacall(KTextEditor__Plugin* self, intptr_t slot) {
    if (auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self))
        vktexteditorplugin->ktexteditor__plugin_metacall_callback = reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnCreateView(KTextEditor__Plugin* self, intptr_t slot) {
    if (auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self))
        vktexteditorplugin->ktexteditor__plugin_createview_callback = reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_CreateView_Callback>(slot);
}

// Base class handler implementation
int KTextEditor__Plugin_SuperConfigPages(const KTextEditor__Plugin* self) {
    return self->KTextEditor::Plugin::configPages();
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnConfigPages(KTextEditor__Plugin* self, intptr_t slot) {
    if (auto* vktexteditorplugin = const_cast<VirtualKTextEditorPlugin*>(dynamic_cast<const VirtualKTextEditorPlugin*>(self)))
        vktexteditorplugin->ktexteditor__plugin_configpages_callback = reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_ConfigPages_Callback>(slot);
}

// Base class handler implementation
KTextEditor__ConfigPage* KTextEditor__Plugin_SuperConfigPage(KTextEditor__Plugin* self, int number, QWidget* parent) {
    return self->KTextEditor::Plugin::configPage(static_cast<int>(number), parent);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnConfigPage(KTextEditor__Plugin* self, intptr_t slot) {
    if (auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self))
        vktexteditorplugin->ktexteditor__plugin_configpage_callback = reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_ConfigPage_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__Plugin_Event(KTextEditor__Plugin* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KTextEditor__Plugin_SuperEvent(KTextEditor__Plugin* self, QEvent* event) {
    return self->KTextEditor::Plugin::event(event);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnEvent(KTextEditor__Plugin* self, intptr_t slot) {
    if (auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self))
        vktexteditorplugin->ktexteditor__plugin_event_callback = reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_Event_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__Plugin_EventFilter(KTextEditor__Plugin* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KTextEditor__Plugin_SuperEventFilter(KTextEditor__Plugin* self, QObject* watched, QEvent* event) {
    return self->KTextEditor::Plugin::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnEventFilter(KTextEditor__Plugin* self, intptr_t slot) {
    if (auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self))
        vktexteditorplugin->ktexteditor__plugin_eventfilter_callback = reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__Plugin_TimerEvent(KTextEditor__Plugin* self, QTimerEvent* event) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin) {
        vktexteditorplugin->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::Plugin::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__Plugin_SuperTimerEvent(KTextEditor__Plugin* self, QTimerEvent* event) {
    if (auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self)) {
        vktexteditorplugin->KTextEditor::Plugin::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::Plugin::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnTimerEvent(KTextEditor__Plugin* self, intptr_t slot) {
    if (auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self))
        vktexteditorplugin->ktexteditor__plugin_timerevent_callback = reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__Plugin_ChildEvent(KTextEditor__Plugin* self, QChildEvent* event) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin) {
        vktexteditorplugin->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::Plugin::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__Plugin_SuperChildEvent(KTextEditor__Plugin* self, QChildEvent* event) {
    if (auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self)) {
        vktexteditorplugin->KTextEditor::Plugin::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::Plugin::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnChildEvent(KTextEditor__Plugin* self, intptr_t slot) {
    if (auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self))
        vktexteditorplugin->ktexteditor__plugin_childevent_callback = reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__Plugin_CustomEvent(KTextEditor__Plugin* self, QEvent* event) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin) {
        vktexteditorplugin->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::Plugin::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__Plugin_SuperCustomEvent(KTextEditor__Plugin* self, QEvent* event) {
    if (auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self)) {
        vktexteditorplugin->KTextEditor::Plugin::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::Plugin::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnCustomEvent(KTextEditor__Plugin* self, intptr_t slot) {
    if (auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self))
        vktexteditorplugin->ktexteditor__plugin_customevent_callback = reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__Plugin_ConnectNotify(KTextEditor__Plugin* self, const QMetaMethod* signal) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin) {
        vktexteditorplugin->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::Plugin::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__Plugin_SuperConnectNotify(KTextEditor__Plugin* self, const QMetaMethod* signal) {
    if (auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self)) {
        vktexteditorplugin->KTextEditor::Plugin::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTextEditor::Plugin::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnConnectNotify(KTextEditor__Plugin* self, intptr_t slot) {
    if (auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self))
        vktexteditorplugin->ktexteditor__plugin_connectnotify_callback = reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__Plugin_DisconnectNotify(KTextEditor__Plugin* self, const QMetaMethod* signal) {
    auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self);
    if (vktexteditorplugin) {
        vktexteditorplugin->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::Plugin::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__Plugin_SuperDisconnectNotify(KTextEditor__Plugin* self, const QMetaMethod* signal) {
    if (auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self)) {
        vktexteditorplugin->KTextEditor::Plugin::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTextEditor::Plugin::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Plugin_OnDisconnectNotify(KTextEditor__Plugin* self, intptr_t slot) {
    if (auto* vktexteditorplugin = dynamic_cast<VirtualKTextEditorPlugin*>(self))
        vktexteditorplugin->ktexteditor__plugin_disconnectnotify_callback = reinterpret_cast<VirtualKTextEditorPlugin::KTextEditor__Plugin_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KTextEditor__Plugin_Sender(const KTextEditor__Plugin* self) {
    if (auto* vktexteditorplugin = const_cast<VirtualKTextEditorPlugin*>(dynamic_cast<const VirtualKTextEditorPlugin*>(self))) {
        return vktexteditorplugin->VirtualKTextEditorPlugin::sender();
    } else
        qFatal("Error: Protected method KTextEditor::Plugin::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KTextEditor__Plugin_SenderSignalIndex(const KTextEditor__Plugin* self) {
    if (auto* vktexteditorplugin = const_cast<VirtualKTextEditorPlugin*>(dynamic_cast<const VirtualKTextEditorPlugin*>(self))) {
        return vktexteditorplugin->VirtualKTextEditorPlugin::senderSignalIndex();
    } else
        qFatal("Error: Protected method KTextEditor::Plugin::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KTextEditor__Plugin_Receivers(const KTextEditor__Plugin* self, const char* signal) {
    if (auto* vktexteditorplugin = const_cast<VirtualKTextEditorPlugin*>(dynamic_cast<const VirtualKTextEditorPlugin*>(self))) {
        return vktexteditorplugin->VirtualKTextEditorPlugin::receivers(signal);
    } else
        qFatal("Error: Protected method KTextEditor::Plugin::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTextEditor__Plugin_IsSignalConnected(const KTextEditor__Plugin* self, const QMetaMethod* signal) {
    if (auto* vktexteditorplugin = const_cast<VirtualKTextEditorPlugin*>(dynamic_cast<const VirtualKTextEditorPlugin*>(self))) {
        return vktexteditorplugin->VirtualKTextEditorPlugin::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KTextEditor::Plugin::isSignalConnected called without a directly constructed type");
}

void KTextEditor__Plugin_Delete(KTextEditor__Plugin* self) {
    delete self;
}
