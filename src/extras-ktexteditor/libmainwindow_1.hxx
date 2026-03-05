#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALMAINWINDOW_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALMAINWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::MainWindow so that we can call protected methods
class VirtualKTextEditorMainWindow final : public KTextEditor::MainWindow {

  public:
    // Virtual class boolean flag
    bool isVirtualKTextEditorMainWindow = true;

    // Virtual class public types (including callbacks)
    using KTextEditor__MainWindow_MetaObject_Callback = QMetaObject* (*)();
    using KTextEditor__MainWindow_Metacast_Callback = void* (*)(KTextEditor__MainWindow*, const char*);
    using KTextEditor__MainWindow_Metacall_Callback = int (*)(KTextEditor__MainWindow*, int, int, void**);
    using KTextEditor__MainWindow_Event_Callback = bool (*)(KTextEditor__MainWindow*, QEvent*);
    using KTextEditor__MainWindow_EventFilter_Callback = bool (*)(KTextEditor__MainWindow*, QObject*, QEvent*);
    using KTextEditor__MainWindow_TimerEvent_Callback = void (*)(KTextEditor__MainWindow*, QTimerEvent*);
    using KTextEditor__MainWindow_ChildEvent_Callback = void (*)(KTextEditor__MainWindow*, QChildEvent*);
    using KTextEditor__MainWindow_CustomEvent_Callback = void (*)(KTextEditor__MainWindow*, QEvent*);
    using KTextEditor__MainWindow_ConnectNotify_Callback = void (*)(KTextEditor__MainWindow*, QMetaMethod*);
    using KTextEditor__MainWindow_DisconnectNotify_Callback = void (*)(KTextEditor__MainWindow*, QMetaMethod*);
    using KTextEditor__MainWindow_Sender_Callback = QObject* (*)();
    using KTextEditor__MainWindow_SenderSignalIndex_Callback = int (*)();
    using KTextEditor__MainWindow_Receivers_Callback = int (*)(const KTextEditor__MainWindow*, const char*);
    using KTextEditor__MainWindow_IsSignalConnected_Callback = bool (*)(const KTextEditor__MainWindow*, QMetaMethod*);

  protected:
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
    KTextEditor__MainWindow_Sender_Callback ktexteditor__mainwindow_sender_callback = nullptr;
    KTextEditor__MainWindow_SenderSignalIndex_Callback ktexteditor__mainwindow_sendersignalindex_callback = nullptr;
    KTextEditor__MainWindow_Receivers_Callback ktexteditor__mainwindow_receivers_callback = nullptr;
    KTextEditor__MainWindow_IsSignalConnected_Callback ktexteditor__mainwindow_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ktexteditor__mainwindow_metaobject_isbase = false;
    mutable bool ktexteditor__mainwindow_metacast_isbase = false;
    mutable bool ktexteditor__mainwindow_metacall_isbase = false;
    mutable bool ktexteditor__mainwindow_event_isbase = false;
    mutable bool ktexteditor__mainwindow_eventfilter_isbase = false;
    mutable bool ktexteditor__mainwindow_timerevent_isbase = false;
    mutable bool ktexteditor__mainwindow_childevent_isbase = false;
    mutable bool ktexteditor__mainwindow_customevent_isbase = false;
    mutable bool ktexteditor__mainwindow_connectnotify_isbase = false;
    mutable bool ktexteditor__mainwindow_disconnectnotify_isbase = false;
    mutable bool ktexteditor__mainwindow_sender_isbase = false;
    mutable bool ktexteditor__mainwindow_sendersignalindex_isbase = false;
    mutable bool ktexteditor__mainwindow_receivers_isbase = false;
    mutable bool ktexteditor__mainwindow_issignalconnected_isbase = false;

  public:
    VirtualKTextEditorMainWindow(QObject* parent) : KTextEditor::MainWindow(parent) {};

    // Callback setters
    inline void setKTextEditor__MainWindow_MetaObject_Callback(KTextEditor__MainWindow_MetaObject_Callback cb) { ktexteditor__mainwindow_metaobject_callback = cb; }
    inline void setKTextEditor__MainWindow_Metacast_Callback(KTextEditor__MainWindow_Metacast_Callback cb) { ktexteditor__mainwindow_metacast_callback = cb; }
    inline void setKTextEditor__MainWindow_Metacall_Callback(KTextEditor__MainWindow_Metacall_Callback cb) { ktexteditor__mainwindow_metacall_callback = cb; }
    inline void setKTextEditor__MainWindow_Event_Callback(KTextEditor__MainWindow_Event_Callback cb) { ktexteditor__mainwindow_event_callback = cb; }
    inline void setKTextEditor__MainWindow_EventFilter_Callback(KTextEditor__MainWindow_EventFilter_Callback cb) { ktexteditor__mainwindow_eventfilter_callback = cb; }
    inline void setKTextEditor__MainWindow_TimerEvent_Callback(KTextEditor__MainWindow_TimerEvent_Callback cb) { ktexteditor__mainwindow_timerevent_callback = cb; }
    inline void setKTextEditor__MainWindow_ChildEvent_Callback(KTextEditor__MainWindow_ChildEvent_Callback cb) { ktexteditor__mainwindow_childevent_callback = cb; }
    inline void setKTextEditor__MainWindow_CustomEvent_Callback(KTextEditor__MainWindow_CustomEvent_Callback cb) { ktexteditor__mainwindow_customevent_callback = cb; }
    inline void setKTextEditor__MainWindow_ConnectNotify_Callback(KTextEditor__MainWindow_ConnectNotify_Callback cb) { ktexteditor__mainwindow_connectnotify_callback = cb; }
    inline void setKTextEditor__MainWindow_DisconnectNotify_Callback(KTextEditor__MainWindow_DisconnectNotify_Callback cb) { ktexteditor__mainwindow_disconnectnotify_callback = cb; }
    inline void setKTextEditor__MainWindow_Sender_Callback(KTextEditor__MainWindow_Sender_Callback cb) { ktexteditor__mainwindow_sender_callback = cb; }
    inline void setKTextEditor__MainWindow_SenderSignalIndex_Callback(KTextEditor__MainWindow_SenderSignalIndex_Callback cb) { ktexteditor__mainwindow_sendersignalindex_callback = cb; }
    inline void setKTextEditor__MainWindow_Receivers_Callback(KTextEditor__MainWindow_Receivers_Callback cb) { ktexteditor__mainwindow_receivers_callback = cb; }
    inline void setKTextEditor__MainWindow_IsSignalConnected_Callback(KTextEditor__MainWindow_IsSignalConnected_Callback cb) { ktexteditor__mainwindow_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKTextEditor__MainWindow_MetaObject_IsBase(bool value) const { ktexteditor__mainwindow_metaobject_isbase = value; }
    inline void setKTextEditor__MainWindow_Metacast_IsBase(bool value) const { ktexteditor__mainwindow_metacast_isbase = value; }
    inline void setKTextEditor__MainWindow_Metacall_IsBase(bool value) const { ktexteditor__mainwindow_metacall_isbase = value; }
    inline void setKTextEditor__MainWindow_Event_IsBase(bool value) const { ktexteditor__mainwindow_event_isbase = value; }
    inline void setKTextEditor__MainWindow_EventFilter_IsBase(bool value) const { ktexteditor__mainwindow_eventfilter_isbase = value; }
    inline void setKTextEditor__MainWindow_TimerEvent_IsBase(bool value) const { ktexteditor__mainwindow_timerevent_isbase = value; }
    inline void setKTextEditor__MainWindow_ChildEvent_IsBase(bool value) const { ktexteditor__mainwindow_childevent_isbase = value; }
    inline void setKTextEditor__MainWindow_CustomEvent_IsBase(bool value) const { ktexteditor__mainwindow_customevent_isbase = value; }
    inline void setKTextEditor__MainWindow_ConnectNotify_IsBase(bool value) const { ktexteditor__mainwindow_connectnotify_isbase = value; }
    inline void setKTextEditor__MainWindow_DisconnectNotify_IsBase(bool value) const { ktexteditor__mainwindow_disconnectnotify_isbase = value; }
    inline void setKTextEditor__MainWindow_Sender_IsBase(bool value) const { ktexteditor__mainwindow_sender_isbase = value; }
    inline void setKTextEditor__MainWindow_SenderSignalIndex_IsBase(bool value) const { ktexteditor__mainwindow_sendersignalindex_isbase = value; }
    inline void setKTextEditor__MainWindow_Receivers_IsBase(bool value) const { ktexteditor__mainwindow_receivers_isbase = value; }
    inline void setKTextEditor__MainWindow_IsSignalConnected_IsBase(bool value) const { ktexteditor__mainwindow_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktexteditor__mainwindow_metaobject_isbase) {
            ktexteditor__mainwindow_metaobject_isbase = false;
            return KTextEditor__MainWindow::metaObject();
        }
        auto metaobject_cb = ktexteditor__mainwindow_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KTextEditor__MainWindow::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktexteditor__mainwindow_metacast_isbase) {
            ktexteditor__mainwindow_metacast_isbase = false;
            return KTextEditor__MainWindow::qt_metacast(param1);
        }
        auto metacast_cb = ktexteditor__mainwindow_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__MainWindow::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktexteditor__mainwindow_metacall_isbase) {
            ktexteditor__mainwindow_metacall_isbase = false;
            return KTextEditor__MainWindow::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = ktexteditor__mainwindow_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__MainWindow::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktexteditor__mainwindow_event_isbase) {
            ktexteditor__mainwindow_event_isbase = false;
            return KTextEditor__MainWindow::event(event);
        }
        auto event_cb = ktexteditor__mainwindow_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__MainWindow::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktexteditor__mainwindow_eventfilter_isbase) {
            ktexteditor__mainwindow_eventfilter_isbase = false;
            return KTextEditor__MainWindow::eventFilter(watched, event);
        }
        auto eventfilter_cb = ktexteditor__mainwindow_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTextEditor__MainWindow::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktexteditor__mainwindow_timerevent_isbase) {
            ktexteditor__mainwindow_timerevent_isbase = false;
            KTextEditor__MainWindow::timerEvent(event);
            return;
        }
        auto timerevent_cb = ktexteditor__mainwindow_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KTextEditor__MainWindow::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktexteditor__mainwindow_childevent_isbase) {
            ktexteditor__mainwindow_childevent_isbase = false;
            KTextEditor__MainWindow::childEvent(event);
            return;
        }
        auto childevent_cb = ktexteditor__mainwindow_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KTextEditor__MainWindow::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktexteditor__mainwindow_customevent_isbase) {
            ktexteditor__mainwindow_customevent_isbase = false;
            KTextEditor__MainWindow::customEvent(event);
            return;
        }
        auto customevent_cb = ktexteditor__mainwindow_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KTextEditor__MainWindow::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__mainwindow_connectnotify_isbase) {
            ktexteditor__mainwindow_connectnotify_isbase = false;
            KTextEditor__MainWindow::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = ktexteditor__mainwindow_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KTextEditor__MainWindow::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__mainwindow_disconnectnotify_isbase) {
            ktexteditor__mainwindow_disconnectnotify_isbase = false;
            KTextEditor__MainWindow::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = ktexteditor__mainwindow_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KTextEditor__MainWindow::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktexteditor__mainwindow_sender_isbase) {
            ktexteditor__mainwindow_sender_isbase = false;
            return KTextEditor__MainWindow::sender();
        }
        auto sender_cb = ktexteditor__mainwindow_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KTextEditor__MainWindow::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktexteditor__mainwindow_sendersignalindex_isbase) {
            ktexteditor__mainwindow_sendersignalindex_isbase = false;
            return KTextEditor__MainWindow::senderSignalIndex();
        }
        auto sendersignalindex_cb = ktexteditor__mainwindow_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__MainWindow::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktexteditor__mainwindow_receivers_isbase) {
            ktexteditor__mainwindow_receivers_isbase = false;
            return KTextEditor__MainWindow::receivers(signal);
        }
        auto receivers_cb = ktexteditor__mainwindow_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__MainWindow::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktexteditor__mainwindow_issignalconnected_isbase) {
            ktexteditor__mainwindow_issignalconnected_isbase = false;
            return KTextEditor__MainWindow::isSignalConnected(signal);
        }
        auto issignalconnected_cb = ktexteditor__mainwindow_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__MainWindow::isSignalConnected(signal);
    }

    // Friend functions
    friend void KTextEditor__MainWindow_TimerEvent(KTextEditor::MainWindow* self, QTimerEvent* event);
    friend void KTextEditor__MainWindow_SuperTimerEvent(KTextEditor::MainWindow* self, QTimerEvent* event);
    friend void KTextEditor__MainWindow_ChildEvent(KTextEditor::MainWindow* self, QChildEvent* event);
    friend void KTextEditor__MainWindow_SuperChildEvent(KTextEditor::MainWindow* self, QChildEvent* event);
    friend void KTextEditor__MainWindow_CustomEvent(KTextEditor::MainWindow* self, QEvent* event);
    friend void KTextEditor__MainWindow_SuperCustomEvent(KTextEditor::MainWindow* self, QEvent* event);
    friend void KTextEditor__MainWindow_ConnectNotify(KTextEditor::MainWindow* self, const QMetaMethod* signal);
    friend void KTextEditor__MainWindow_SuperConnectNotify(KTextEditor::MainWindow* self, const QMetaMethod* signal);
    friend void KTextEditor__MainWindow_DisconnectNotify(KTextEditor::MainWindow* self, const QMetaMethod* signal);
    friend void KTextEditor__MainWindow_SuperDisconnectNotify(KTextEditor::MainWindow* self, const QMetaMethod* signal);
    friend QObject* KTextEditor__MainWindow_Sender(const KTextEditor::MainWindow* self);
    friend QObject* KTextEditor__MainWindow_SuperSender(const KTextEditor::MainWindow* self);
    friend int KTextEditor__MainWindow_SenderSignalIndex(const KTextEditor::MainWindow* self);
    friend int KTextEditor__MainWindow_SuperSenderSignalIndex(const KTextEditor::MainWindow* self);
    friend int KTextEditor__MainWindow_Receivers(const KTextEditor::MainWindow* self, const char* signal);
    friend int KTextEditor__MainWindow_SuperReceivers(const KTextEditor::MainWindow* self, const char* signal);
    friend bool KTextEditor__MainWindow_IsSignalConnected(const KTextEditor::MainWindow* self, const QMetaMethod* signal);
    friend bool KTextEditor__MainWindow_SuperIsSignalConnected(const KTextEditor::MainWindow* self, const QMetaMethod* signal);
};

#endif
