#pragma once
#ifndef EXTRAS_KTEXTEDITOR_LIBPLUGIN_HXX
#define EXTRAS_KTEXTEDITOR_LIBPLUGIN_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::Plugin
class VirtualKTextEditorPlugin : public KTextEditor::Plugin {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTextEditor__Plugin_MetaObject_Callback = QMetaObject* (*)(const KTextEditor__Plugin*);
    using KTextEditor__Plugin_Metacast_Callback = void* (*)(KTextEditor__Plugin*, const char*);
    using KTextEditor__Plugin_Metacall_Callback = int (*)(KTextEditor__Plugin*, int, int, void**);
    using KTextEditor__Plugin_CreateView_Callback = QObject* (*)(KTextEditor__Plugin*, KTextEditor__MainWindow*);
    using KTextEditor__Plugin_ConfigPages_Callback = int (*)(const KTextEditor__Plugin*);
    using KTextEditor__Plugin_ConfigPage_Callback = KTextEditor__ConfigPage* (*)(KTextEditor__Plugin*, int, QWidget*);
    using KTextEditor__Plugin_Event_Callback = bool (*)(KTextEditor__Plugin*, QEvent*);
    using KTextEditor__Plugin_EventFilter_Callback = bool (*)(KTextEditor__Plugin*, QObject*, QEvent*);
    using KTextEditor__Plugin_TimerEvent_Callback = void (*)(KTextEditor__Plugin*, QTimerEvent*);
    using KTextEditor__Plugin_ChildEvent_Callback = void (*)(KTextEditor__Plugin*, QChildEvent*);
    using KTextEditor__Plugin_CustomEvent_Callback = void (*)(KTextEditor__Plugin*, QEvent*);
    using KTextEditor__Plugin_ConnectNotify_Callback = void (*)(KTextEditor__Plugin*, QMetaMethod*);
    using KTextEditor__Plugin_DisconnectNotify_Callback = void (*)(KTextEditor__Plugin*, QMetaMethod*);
    using KTextEditor::Plugin::isSignalConnected;
    using KTextEditor::Plugin::receivers;
    using KTextEditor::Plugin::sender;
    using KTextEditor::Plugin::senderSignalIndex;

    // Instance callback storage
    KTextEditor__Plugin_MetaObject_Callback ktexteditor__plugin_metaobject_callback = nullptr;
    KTextEditor__Plugin_Metacast_Callback ktexteditor__plugin_metacast_callback = nullptr;
    KTextEditor__Plugin_Metacall_Callback ktexteditor__plugin_metacall_callback = nullptr;
    KTextEditor__Plugin_CreateView_Callback ktexteditor__plugin_createview_callback = nullptr;
    KTextEditor__Plugin_ConfigPages_Callback ktexteditor__plugin_configpages_callback = nullptr;
    KTextEditor__Plugin_ConfigPage_Callback ktexteditor__plugin_configpage_callback = nullptr;
    KTextEditor__Plugin_Event_Callback ktexteditor__plugin_event_callback = nullptr;
    KTextEditor__Plugin_EventFilter_Callback ktexteditor__plugin_eventfilter_callback = nullptr;
    KTextEditor__Plugin_TimerEvent_Callback ktexteditor__plugin_timerevent_callback = nullptr;
    KTextEditor__Plugin_ChildEvent_Callback ktexteditor__plugin_childevent_callback = nullptr;
    KTextEditor__Plugin_CustomEvent_Callback ktexteditor__plugin_customevent_callback = nullptr;
    KTextEditor__Plugin_ConnectNotify_Callback ktexteditor__plugin_connectnotify_callback = nullptr;
    KTextEditor__Plugin_DisconnectNotify_Callback ktexteditor__plugin_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KTextEditor::Plugin {
        using KTextEditor::Plugin::childEvent;
        using KTextEditor::Plugin::connectNotify;
        using KTextEditor::Plugin::customEvent;
        using KTextEditor::Plugin::disconnectNotify;
        using KTextEditor::Plugin::timerEvent;
    };

    VirtualKTextEditorPlugin(QObject* parent) : KTextEditor::Plugin(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktexteditor__plugin_metaobject_callback) {
            QMetaObject* callback_ret = ktexteditor__plugin_metaobject_callback(this);
            return callback_ret;
        }
        return KTextEditor__Plugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktexteditor__plugin_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktexteditor__plugin_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__Plugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktexteditor__plugin_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktexteditor__plugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__Plugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* createView(KTextEditor::MainWindow* mainWindow) override {
        if (ktexteditor__plugin_createview_callback) {
            KTextEditor__MainWindow* cbval1 = mainWindow;
            QObject* callback_ret = ktexteditor__plugin_createview_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KTextEditor::Plugin::createView called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int configPages() const override {
        if (ktexteditor__plugin_configpages_callback) {
            int callback_ret = ktexteditor__plugin_configpages_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__Plugin::configPages();
    }

    // Virtual method for C ABI access and custom callback
    virtual KTextEditor::ConfigPage* configPage(int number, QWidget* parent) override {
        if (ktexteditor__plugin_configpage_callback) {
            int cbval1 = number;
            QWidget* cbval2 = parent;
            KTextEditor__ConfigPage* callback_ret = ktexteditor__plugin_configpage_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTextEditor__Plugin::configPage(number, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktexteditor__plugin_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ktexteditor__plugin_event_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__Plugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktexteditor__plugin_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ktexteditor__plugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTextEditor__Plugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktexteditor__plugin_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktexteditor__plugin_timerevent_callback(this, cbval1);
            return;
        }
        KTextEditor__Plugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktexteditor__plugin_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktexteditor__plugin_childevent_callback(this, cbval1);
            return;
        }
        KTextEditor__Plugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktexteditor__plugin_customevent_callback) {
            QEvent* cbval1 = event;
            ktexteditor__plugin_customevent_callback(this, cbval1);
            return;
        }
        KTextEditor__Plugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__plugin_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktexteditor__plugin_connectnotify_callback(this, cbval1);
            return;
        }
        KTextEditor__Plugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__plugin_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktexteditor__plugin_disconnectnotify_callback(this, cbval1);
            return;
        }
        KTextEditor__Plugin::disconnectNotify(signal);
    }

    // Friend functions
    friend void KTextEditor__Plugin_SuperTimerEvent(KTextEditor::Plugin* self, QTimerEvent* event);
    friend void KTextEditor__Plugin_SuperChildEvent(KTextEditor::Plugin* self, QChildEvent* event);
    friend void KTextEditor__Plugin_SuperCustomEvent(KTextEditor::Plugin* self, QEvent* event);
    friend void KTextEditor__Plugin_SuperConnectNotify(KTextEditor::Plugin* self, const QMetaMethod* signal);
    friend void KTextEditor__Plugin_SuperDisconnectNotify(KTextEditor::Plugin* self, const QMetaMethod* signal);
};

#endif
