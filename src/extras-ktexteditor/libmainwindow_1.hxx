#pragma once
#ifndef EXTRAS_KTEXTEDITOR_LIBMAINWINDOW_HXX
#define EXTRAS_KTEXTEDITOR_LIBMAINWINDOW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::MainWindow
class VirtualKTextEditorMainWindow final : public KTextEditor::MainWindow {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTextEditor__MainWindow_MetaObject_Callback = QMetaObject* (*)(const KTextEditor__MainWindow*);
    using KTextEditor__MainWindow_Metacast_Callback = void* (*)(KTextEditor__MainWindow*, const char*);
    using KTextEditor__MainWindow_Metacall_Callback = int (*)(KTextEditor__MainWindow*, int, int, void**);
    using KTextEditor__MainWindow_Event_Callback = bool (*)(KTextEditor__MainWindow*, QEvent*);
    using KTextEditor__MainWindow_EventFilter_Callback = bool (*)(KTextEditor__MainWindow*, QObject*, QEvent*);
    using KTextEditor__MainWindow_TimerEvent_Callback = void (*)(KTextEditor__MainWindow*, QTimerEvent*);
    using KTextEditor__MainWindow_ChildEvent_Callback = void (*)(KTextEditor__MainWindow*, QChildEvent*);
    using KTextEditor__MainWindow_CustomEvent_Callback = void (*)(KTextEditor__MainWindow*, QEvent*);
    using KTextEditor__MainWindow_ConnectNotify_Callback = void (*)(KTextEditor__MainWindow*, QMetaMethod*);
    using KTextEditor__MainWindow_DisconnectNotify_Callback = void (*)(KTextEditor__MainWindow*, QMetaMethod*);
    using KTextEditor::MainWindow::isSignalConnected;
    using KTextEditor::MainWindow::receivers;
    using KTextEditor::MainWindow::sender;
    using KTextEditor::MainWindow::senderSignalIndex;

    // Instance callback storage
    KTextEditor__MainWindow_MetaObject_Callback ktexteditor__mainwindow_metaobject_callback = nullptr;
    KTextEditor__MainWindow_Metacast_Callback ktexteditor__mainwindow_metacast_callback = nullptr;
    KTextEditor__MainWindow_Metacall_Callback ktexteditor__mainwindow_metacall_callback = nullptr;
    KTextEditor__MainWindow_Event_Callback ktexteditor__mainwindow_event_callback = nullptr;
    KTextEditor__MainWindow_EventFilter_Callback ktexteditor__mainwindow_eventfilter_callback = nullptr;
    KTextEditor__MainWindow_TimerEvent_Callback ktexteditor__mainwindow_timerevent_callback = nullptr;
    KTextEditor__MainWindow_ChildEvent_Callback ktexteditor__mainwindow_childevent_callback = nullptr;
    KTextEditor__MainWindow_CustomEvent_Callback ktexteditor__mainwindow_customevent_callback = nullptr;
    KTextEditor__MainWindow_ConnectNotify_Callback ktexteditor__mainwindow_connectnotify_callback = nullptr;
    KTextEditor__MainWindow_DisconnectNotify_Callback ktexteditor__mainwindow_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KTextEditor::MainWindow {
        using KTextEditor::MainWindow::childEvent;
        using KTextEditor::MainWindow::connectNotify;
        using KTextEditor::MainWindow::customEvent;
        using KTextEditor::MainWindow::disconnectNotify;
        using KTextEditor::MainWindow::timerEvent;
    };

    VirtualKTextEditorMainWindow(QObject* parent) : KTextEditor::MainWindow(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktexteditor__mainwindow_metaobject_callback) {
            QMetaObject* callback_ret = ktexteditor__mainwindow_metaobject_callback(this);
            return callback_ret;
        }
        return KTextEditor__MainWindow::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktexteditor__mainwindow_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktexteditor__mainwindow_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__MainWindow::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktexteditor__mainwindow_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktexteditor__mainwindow_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__MainWindow::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktexteditor__mainwindow_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ktexteditor__mainwindow_event_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__MainWindow::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktexteditor__mainwindow_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ktexteditor__mainwindow_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTextEditor__MainWindow::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktexteditor__mainwindow_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktexteditor__mainwindow_timerevent_callback(this, cbval1);
            return;
        }
        KTextEditor__MainWindow::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktexteditor__mainwindow_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktexteditor__mainwindow_childevent_callback(this, cbval1);
            return;
        }
        KTextEditor__MainWindow::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktexteditor__mainwindow_customevent_callback) {
            QEvent* cbval1 = event;
            ktexteditor__mainwindow_customevent_callback(this, cbval1);
            return;
        }
        KTextEditor__MainWindow::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__mainwindow_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktexteditor__mainwindow_connectnotify_callback(this, cbval1);
            return;
        }
        KTextEditor__MainWindow::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__mainwindow_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktexteditor__mainwindow_disconnectnotify_callback(this, cbval1);
            return;
        }
        KTextEditor__MainWindow::disconnectNotify(signal);
    }

    // Friend functions
    friend void KTextEditor__MainWindow_SuperTimerEvent(KTextEditor::MainWindow* self, QTimerEvent* event);
    friend void KTextEditor__MainWindow_SuperChildEvent(KTextEditor::MainWindow* self, QChildEvent* event);
    friend void KTextEditor__MainWindow_SuperCustomEvent(KTextEditor::MainWindow* self, QEvent* event);
    friend void KTextEditor__MainWindow_SuperConnectNotify(KTextEditor::MainWindow* self, const QMetaMethod* signal);
    friend void KTextEditor__MainWindow_SuperDisconnectNotify(KTextEditor::MainWindow* self, const QMetaMethod* signal);
};

#endif
