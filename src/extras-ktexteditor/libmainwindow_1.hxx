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

    ~VirtualKTextEditorMainWindow() {
        ktexteditor__mainwindow_metacall_callback = nullptr;
        ktexteditor__mainwindow_event_callback = nullptr;
        ktexteditor__mainwindow_eventfilter_callback = nullptr;
        ktexteditor__mainwindow_timerevent_callback = nullptr;
        ktexteditor__mainwindow_childevent_callback = nullptr;
        ktexteditor__mainwindow_customevent_callback = nullptr;
        ktexteditor__mainwindow_connectnotify_callback = nullptr;
        ktexteditor__mainwindow_disconnectnotify_callback = nullptr;
        ktexteditor__mainwindow_sender_callback = nullptr;
        ktexteditor__mainwindow_sendersignalindex_callback = nullptr;
        ktexteditor__mainwindow_receivers_callback = nullptr;
        ktexteditor__mainwindow_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktexteditor__mainwindow_metacall_isbase) {
            ktexteditor__mainwindow_metacall_isbase = false;
            return KTextEditor__MainWindow::qt_metacall(param1, param2, param3);
        } else if (ktexteditor__mainwindow_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktexteditor__mainwindow_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__MainWindow::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktexteditor__mainwindow_event_isbase) {
            ktexteditor__mainwindow_event_isbase = false;
            return KTextEditor__MainWindow::event(event);
        } else if (ktexteditor__mainwindow_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ktexteditor__mainwindow_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__MainWindow::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktexteditor__mainwindow_eventfilter_isbase) {
            ktexteditor__mainwindow_eventfilter_isbase = false;
            return KTextEditor__MainWindow::eventFilter(watched, event);
        } else if (ktexteditor__mainwindow_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ktexteditor__mainwindow_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KTextEditor__MainWindow::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktexteditor__mainwindow_timerevent_isbase) {
            ktexteditor__mainwindow_timerevent_isbase = false;
            KTextEditor__MainWindow::timerEvent(event);
        } else if (ktexteditor__mainwindow_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ktexteditor__mainwindow_timerevent_callback(this, cbval1);
        } else {
            KTextEditor__MainWindow::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktexteditor__mainwindow_childevent_isbase) {
            ktexteditor__mainwindow_childevent_isbase = false;
            KTextEditor__MainWindow::childEvent(event);
        } else if (ktexteditor__mainwindow_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktexteditor__mainwindow_childevent_callback(this, cbval1);
        } else {
            KTextEditor__MainWindow::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktexteditor__mainwindow_customevent_isbase) {
            ktexteditor__mainwindow_customevent_isbase = false;
            KTextEditor__MainWindow::customEvent(event);
        } else if (ktexteditor__mainwindow_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktexteditor__mainwindow_customevent_callback(this, cbval1);
        } else {
            KTextEditor__MainWindow::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__mainwindow_connectnotify_isbase) {
            ktexteditor__mainwindow_connectnotify_isbase = false;
            KTextEditor__MainWindow::connectNotify(signal);
        } else if (ktexteditor__mainwindow_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktexteditor__mainwindow_connectnotify_callback(this, cbval1);
        } else {
            KTextEditor__MainWindow::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__mainwindow_disconnectnotify_isbase) {
            ktexteditor__mainwindow_disconnectnotify_isbase = false;
            KTextEditor__MainWindow::disconnectNotify(signal);
        } else if (ktexteditor__mainwindow_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktexteditor__mainwindow_disconnectnotify_callback(this, cbval1);
        } else {
            KTextEditor__MainWindow::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktexteditor__mainwindow_sender_isbase) {
            ktexteditor__mainwindow_sender_isbase = false;
            return KTextEditor__MainWindow::sender();
        } else if (ktexteditor__mainwindow_sender_callback != nullptr) {
            QObject* callback_ret = ktexteditor__mainwindow_sender_callback();
            return callback_ret;
        } else {
            return KTextEditor__MainWindow::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktexteditor__mainwindow_sendersignalindex_isbase) {
            ktexteditor__mainwindow_sendersignalindex_isbase = false;
            return KTextEditor__MainWindow::senderSignalIndex();
        } else if (ktexteditor__mainwindow_sendersignalindex_callback != nullptr) {
            int callback_ret = ktexteditor__mainwindow_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__MainWindow::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktexteditor__mainwindow_receivers_isbase) {
            ktexteditor__mainwindow_receivers_isbase = false;
            return KTextEditor__MainWindow::receivers(signal);
        } else if (ktexteditor__mainwindow_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktexteditor__mainwindow_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__MainWindow::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktexteditor__mainwindow_issignalconnected_isbase) {
            ktexteditor__mainwindow_issignalconnected_isbase = false;
            return KTextEditor__MainWindow::isSignalConnected(signal);
        } else if (ktexteditor__mainwindow_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktexteditor__mainwindow_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__MainWindow::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KTextEditor__MainWindow_TimerEvent(KTextEditor::MainWindow* self, QTimerEvent* event);
    friend void KTextEditor__MainWindow_QBaseTimerEvent(KTextEditor::MainWindow* self, QTimerEvent* event);
    friend void KTextEditor__MainWindow_ChildEvent(KTextEditor::MainWindow* self, QChildEvent* event);
    friend void KTextEditor__MainWindow_QBaseChildEvent(KTextEditor::MainWindow* self, QChildEvent* event);
    friend void KTextEditor__MainWindow_CustomEvent(KTextEditor::MainWindow* self, QEvent* event);
    friend void KTextEditor__MainWindow_QBaseCustomEvent(KTextEditor::MainWindow* self, QEvent* event);
    friend void KTextEditor__MainWindow_ConnectNotify(KTextEditor::MainWindow* self, const QMetaMethod* signal);
    friend void KTextEditor__MainWindow_QBaseConnectNotify(KTextEditor::MainWindow* self, const QMetaMethod* signal);
    friend void KTextEditor__MainWindow_DisconnectNotify(KTextEditor::MainWindow* self, const QMetaMethod* signal);
    friend void KTextEditor__MainWindow_QBaseDisconnectNotify(KTextEditor::MainWindow* self, const QMetaMethod* signal);
    friend QObject* KTextEditor__MainWindow_Sender(const KTextEditor::MainWindow* self);
    friend QObject* KTextEditor__MainWindow_QBaseSender(const KTextEditor::MainWindow* self);
    friend int KTextEditor__MainWindow_SenderSignalIndex(const KTextEditor::MainWindow* self);
    friend int KTextEditor__MainWindow_QBaseSenderSignalIndex(const KTextEditor::MainWindow* self);
    friend int KTextEditor__MainWindow_Receivers(const KTextEditor::MainWindow* self, const char* signal);
    friend int KTextEditor__MainWindow_QBaseReceivers(const KTextEditor::MainWindow* self, const char* signal);
    friend bool KTextEditor__MainWindow_IsSignalConnected(const KTextEditor::MainWindow* self, const QMetaMethod* signal);
    friend bool KTextEditor__MainWindow_QBaseIsSignalConnected(const KTextEditor::MainWindow* self, const QMetaMethod* signal);
};

#endif
