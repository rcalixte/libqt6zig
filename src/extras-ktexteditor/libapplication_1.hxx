#pragma once
#ifndef EXTRAS_KTEXTEDITOR_LIBAPPLICATION_HXX
#define EXTRAS_KTEXTEDITOR_LIBAPPLICATION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::Application
class VirtualKTextEditorApplication final : public KTextEditor::Application {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTextEditor__Application_MetaObject_Callback = QMetaObject* (*)(const KTextEditor__Application*);
    using KTextEditor__Application_Metacast_Callback = void* (*)(KTextEditor__Application*, const char*);
    using KTextEditor__Application_Metacall_Callback = int (*)(KTextEditor__Application*, int, int, void**);
    using KTextEditor__Application_Event_Callback = bool (*)(KTextEditor__Application*, QEvent*);
    using KTextEditor__Application_EventFilter_Callback = bool (*)(KTextEditor__Application*, QObject*, QEvent*);
    using KTextEditor__Application_TimerEvent_Callback = void (*)(KTextEditor__Application*, QTimerEvent*);
    using KTextEditor__Application_ChildEvent_Callback = void (*)(KTextEditor__Application*, QChildEvent*);
    using KTextEditor__Application_CustomEvent_Callback = void (*)(KTextEditor__Application*, QEvent*);
    using KTextEditor__Application_ConnectNotify_Callback = void (*)(KTextEditor__Application*, QMetaMethod*);
    using KTextEditor__Application_DisconnectNotify_Callback = void (*)(KTextEditor__Application*, QMetaMethod*);
    using KTextEditor::Application::isSignalConnected;
    using KTextEditor::Application::receivers;
    using KTextEditor::Application::sender;
    using KTextEditor::Application::senderSignalIndex;

    // Instance callback storage
    KTextEditor__Application_MetaObject_Callback ktexteditor__application_metaobject_callback = nullptr;
    KTextEditor__Application_Metacast_Callback ktexteditor__application_metacast_callback = nullptr;
    KTextEditor__Application_Metacall_Callback ktexteditor__application_metacall_callback = nullptr;
    KTextEditor__Application_Event_Callback ktexteditor__application_event_callback = nullptr;
    KTextEditor__Application_EventFilter_Callback ktexteditor__application_eventfilter_callback = nullptr;
    KTextEditor__Application_TimerEvent_Callback ktexteditor__application_timerevent_callback = nullptr;
    KTextEditor__Application_ChildEvent_Callback ktexteditor__application_childevent_callback = nullptr;
    KTextEditor__Application_CustomEvent_Callback ktexteditor__application_customevent_callback = nullptr;
    KTextEditor__Application_ConnectNotify_Callback ktexteditor__application_connectnotify_callback = nullptr;
    KTextEditor__Application_DisconnectNotify_Callback ktexteditor__application_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KTextEditor::Application {
        using KTextEditor::Application::childEvent;
        using KTextEditor::Application::connectNotify;
        using KTextEditor::Application::customEvent;
        using KTextEditor::Application::disconnectNotify;
        using KTextEditor::Application::timerEvent;
    };

    VirtualKTextEditorApplication(QObject* parent) : KTextEditor::Application(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktexteditor__application_metaobject_callback) {
            QMetaObject* callback_ret = ktexteditor__application_metaobject_callback(this);
            return callback_ret;
        }
        return KTextEditor__Application::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktexteditor__application_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktexteditor__application_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__Application::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktexteditor__application_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktexteditor__application_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__Application::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktexteditor__application_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ktexteditor__application_event_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__Application::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktexteditor__application_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ktexteditor__application_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTextEditor__Application::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktexteditor__application_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktexteditor__application_timerevent_callback(this, cbval1);
            return;
        }
        KTextEditor__Application::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktexteditor__application_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktexteditor__application_childevent_callback(this, cbval1);
            return;
        }
        KTextEditor__Application::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktexteditor__application_customevent_callback) {
            QEvent* cbval1 = event;
            ktexteditor__application_customevent_callback(this, cbval1);
            return;
        }
        KTextEditor__Application::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__application_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktexteditor__application_connectnotify_callback(this, cbval1);
            return;
        }
        KTextEditor__Application::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__application_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktexteditor__application_disconnectnotify_callback(this, cbval1);
            return;
        }
        KTextEditor__Application::disconnectNotify(signal);
    }

    // Friend functions
    friend void KTextEditor__Application_SuperTimerEvent(KTextEditor::Application* self, QTimerEvent* event);
    friend void KTextEditor__Application_SuperChildEvent(KTextEditor::Application* self, QChildEvent* event);
    friend void KTextEditor__Application_SuperCustomEvent(KTextEditor::Application* self, QEvent* event);
    friend void KTextEditor__Application_SuperConnectNotify(KTextEditor::Application* self, const QMetaMethod* signal);
    friend void KTextEditor__Application_SuperDisconnectNotify(KTextEditor::Application* self, const QMetaMethod* signal);
};

#endif
