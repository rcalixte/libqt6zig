#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALPLUGIN_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::Plugin so that we can call protected methods
class VirtualKTextEditorPlugin : public KTextEditor::Plugin {

  public:
    // Virtual class boolean flag
    bool isVirtualKTextEditorPlugin = true;

    // Virtual class public types (including callbacks)
    using KTextEditor__Plugin_Metacall_Callback = int (*)(KTextEditor__Plugin*, int, int, void**);
    using KTextEditor__Plugin_CreateView_Callback = QObject* (*)(KTextEditor__Plugin*, KTextEditor__MainWindow*);
    using KTextEditor__Plugin_ConfigPages_Callback = int (*)();
    using KTextEditor__Plugin_ConfigPage_Callback = KTextEditor__ConfigPage* (*)(KTextEditor__Plugin*, int, QWidget*);
    using KTextEditor__Plugin_Event_Callback = bool (*)(KTextEditor__Plugin*, QEvent*);
    using KTextEditor__Plugin_EventFilter_Callback = bool (*)(KTextEditor__Plugin*, QObject*, QEvent*);
    using KTextEditor__Plugin_TimerEvent_Callback = void (*)(KTextEditor__Plugin*, QTimerEvent*);
    using KTextEditor__Plugin_ChildEvent_Callback = void (*)(KTextEditor__Plugin*, QChildEvent*);
    using KTextEditor__Plugin_CustomEvent_Callback = void (*)(KTextEditor__Plugin*, QEvent*);
    using KTextEditor__Plugin_ConnectNotify_Callback = void (*)(KTextEditor__Plugin*, QMetaMethod*);
    using KTextEditor__Plugin_DisconnectNotify_Callback = void (*)(KTextEditor__Plugin*, QMetaMethod*);
    using KTextEditor__Plugin_Sender_Callback = QObject* (*)();
    using KTextEditor__Plugin_SenderSignalIndex_Callback = int (*)();
    using KTextEditor__Plugin_Receivers_Callback = int (*)(const KTextEditor__Plugin*, const char*);
    using KTextEditor__Plugin_IsSignalConnected_Callback = bool (*)(const KTextEditor__Plugin*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    KTextEditor__Plugin_Sender_Callback ktexteditor__plugin_sender_callback = nullptr;
    KTextEditor__Plugin_SenderSignalIndex_Callback ktexteditor__plugin_sendersignalindex_callback = nullptr;
    KTextEditor__Plugin_Receivers_Callback ktexteditor__plugin_receivers_callback = nullptr;
    KTextEditor__Plugin_IsSignalConnected_Callback ktexteditor__plugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ktexteditor__plugin_metacall_isbase = false;
    mutable bool ktexteditor__plugin_createview_isbase = false;
    mutable bool ktexteditor__plugin_configpages_isbase = false;
    mutable bool ktexteditor__plugin_configpage_isbase = false;
    mutable bool ktexteditor__plugin_event_isbase = false;
    mutable bool ktexteditor__plugin_eventfilter_isbase = false;
    mutable bool ktexteditor__plugin_timerevent_isbase = false;
    mutable bool ktexteditor__plugin_childevent_isbase = false;
    mutable bool ktexteditor__plugin_customevent_isbase = false;
    mutable bool ktexteditor__plugin_connectnotify_isbase = false;
    mutable bool ktexteditor__plugin_disconnectnotify_isbase = false;
    mutable bool ktexteditor__plugin_sender_isbase = false;
    mutable bool ktexteditor__plugin_sendersignalindex_isbase = false;
    mutable bool ktexteditor__plugin_receivers_isbase = false;
    mutable bool ktexteditor__plugin_issignalconnected_isbase = false;

  public:
    VirtualKTextEditorPlugin(QObject* parent) : KTextEditor::Plugin(parent) {};

    ~VirtualKTextEditorPlugin() {
        ktexteditor__plugin_metacall_callback = nullptr;
        ktexteditor__plugin_createview_callback = nullptr;
        ktexteditor__plugin_configpages_callback = nullptr;
        ktexteditor__plugin_configpage_callback = nullptr;
        ktexteditor__plugin_event_callback = nullptr;
        ktexteditor__plugin_eventfilter_callback = nullptr;
        ktexteditor__plugin_timerevent_callback = nullptr;
        ktexteditor__plugin_childevent_callback = nullptr;
        ktexteditor__plugin_customevent_callback = nullptr;
        ktexteditor__plugin_connectnotify_callback = nullptr;
        ktexteditor__plugin_disconnectnotify_callback = nullptr;
        ktexteditor__plugin_sender_callback = nullptr;
        ktexteditor__plugin_sendersignalindex_callback = nullptr;
        ktexteditor__plugin_receivers_callback = nullptr;
        ktexteditor__plugin_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKTextEditor__Plugin_Metacall_Callback(KTextEditor__Plugin_Metacall_Callback cb) { ktexteditor__plugin_metacall_callback = cb; }
    inline void setKTextEditor__Plugin_CreateView_Callback(KTextEditor__Plugin_CreateView_Callback cb) { ktexteditor__plugin_createview_callback = cb; }
    inline void setKTextEditor__Plugin_ConfigPages_Callback(KTextEditor__Plugin_ConfigPages_Callback cb) { ktexteditor__plugin_configpages_callback = cb; }
    inline void setKTextEditor__Plugin_ConfigPage_Callback(KTextEditor__Plugin_ConfigPage_Callback cb) { ktexteditor__plugin_configpage_callback = cb; }
    inline void setKTextEditor__Plugin_Event_Callback(KTextEditor__Plugin_Event_Callback cb) { ktexteditor__plugin_event_callback = cb; }
    inline void setKTextEditor__Plugin_EventFilter_Callback(KTextEditor__Plugin_EventFilter_Callback cb) { ktexteditor__plugin_eventfilter_callback = cb; }
    inline void setKTextEditor__Plugin_TimerEvent_Callback(KTextEditor__Plugin_TimerEvent_Callback cb) { ktexteditor__plugin_timerevent_callback = cb; }
    inline void setKTextEditor__Plugin_ChildEvent_Callback(KTextEditor__Plugin_ChildEvent_Callback cb) { ktexteditor__plugin_childevent_callback = cb; }
    inline void setKTextEditor__Plugin_CustomEvent_Callback(KTextEditor__Plugin_CustomEvent_Callback cb) { ktexteditor__plugin_customevent_callback = cb; }
    inline void setKTextEditor__Plugin_ConnectNotify_Callback(KTextEditor__Plugin_ConnectNotify_Callback cb) { ktexteditor__plugin_connectnotify_callback = cb; }
    inline void setKTextEditor__Plugin_DisconnectNotify_Callback(KTextEditor__Plugin_DisconnectNotify_Callback cb) { ktexteditor__plugin_disconnectnotify_callback = cb; }
    inline void setKTextEditor__Plugin_Sender_Callback(KTextEditor__Plugin_Sender_Callback cb) { ktexteditor__plugin_sender_callback = cb; }
    inline void setKTextEditor__Plugin_SenderSignalIndex_Callback(KTextEditor__Plugin_SenderSignalIndex_Callback cb) { ktexteditor__plugin_sendersignalindex_callback = cb; }
    inline void setKTextEditor__Plugin_Receivers_Callback(KTextEditor__Plugin_Receivers_Callback cb) { ktexteditor__plugin_receivers_callback = cb; }
    inline void setKTextEditor__Plugin_IsSignalConnected_Callback(KTextEditor__Plugin_IsSignalConnected_Callback cb) { ktexteditor__plugin_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKTextEditor__Plugin_Metacall_IsBase(bool value) const { ktexteditor__plugin_metacall_isbase = value; }
    inline void setKTextEditor__Plugin_CreateView_IsBase(bool value) const { ktexteditor__plugin_createview_isbase = value; }
    inline void setKTextEditor__Plugin_ConfigPages_IsBase(bool value) const { ktexteditor__plugin_configpages_isbase = value; }
    inline void setKTextEditor__Plugin_ConfigPage_IsBase(bool value) const { ktexteditor__plugin_configpage_isbase = value; }
    inline void setKTextEditor__Plugin_Event_IsBase(bool value) const { ktexteditor__plugin_event_isbase = value; }
    inline void setKTextEditor__Plugin_EventFilter_IsBase(bool value) const { ktexteditor__plugin_eventfilter_isbase = value; }
    inline void setKTextEditor__Plugin_TimerEvent_IsBase(bool value) const { ktexteditor__plugin_timerevent_isbase = value; }
    inline void setKTextEditor__Plugin_ChildEvent_IsBase(bool value) const { ktexteditor__plugin_childevent_isbase = value; }
    inline void setKTextEditor__Plugin_CustomEvent_IsBase(bool value) const { ktexteditor__plugin_customevent_isbase = value; }
    inline void setKTextEditor__Plugin_ConnectNotify_IsBase(bool value) const { ktexteditor__plugin_connectnotify_isbase = value; }
    inline void setKTextEditor__Plugin_DisconnectNotify_IsBase(bool value) const { ktexteditor__plugin_disconnectnotify_isbase = value; }
    inline void setKTextEditor__Plugin_Sender_IsBase(bool value) const { ktexteditor__plugin_sender_isbase = value; }
    inline void setKTextEditor__Plugin_SenderSignalIndex_IsBase(bool value) const { ktexteditor__plugin_sendersignalindex_isbase = value; }
    inline void setKTextEditor__Plugin_Receivers_IsBase(bool value) const { ktexteditor__plugin_receivers_isbase = value; }
    inline void setKTextEditor__Plugin_IsSignalConnected_IsBase(bool value) const { ktexteditor__plugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktexteditor__plugin_metacall_isbase) {
            ktexteditor__plugin_metacall_isbase = false;
            return KTextEditor__Plugin::qt_metacall(param1, param2, param3);
        } else if (ktexteditor__plugin_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktexteditor__plugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__Plugin::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* createView(KTextEditor::MainWindow* mainWindow) override {
        if (ktexteditor__plugin_createview_callback != nullptr) {
            KTextEditor__MainWindow* cbval1 = mainWindow;

            QObject* callback_ret = ktexteditor__plugin_createview_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int configPages() const override {
        if (ktexteditor__plugin_configpages_isbase) {
            ktexteditor__plugin_configpages_isbase = false;
            return KTextEditor__Plugin::configPages();
        } else if (ktexteditor__plugin_configpages_callback != nullptr) {
            int callback_ret = ktexteditor__plugin_configpages_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__Plugin::configPages();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KTextEditor::ConfigPage* configPage(int number, QWidget* parent) override {
        if (ktexteditor__plugin_configpage_isbase) {
            ktexteditor__plugin_configpage_isbase = false;
            return KTextEditor__Plugin::configPage(number, parent);
        } else if (ktexteditor__plugin_configpage_callback != nullptr) {
            int cbval1 = number;
            QWidget* cbval2 = parent;

            KTextEditor__ConfigPage* callback_ret = ktexteditor__plugin_configpage_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KTextEditor__Plugin::configPage(number, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktexteditor__plugin_event_isbase) {
            ktexteditor__plugin_event_isbase = false;
            return KTextEditor__Plugin::event(event);
        } else if (ktexteditor__plugin_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ktexteditor__plugin_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__Plugin::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktexteditor__plugin_eventfilter_isbase) {
            ktexteditor__plugin_eventfilter_isbase = false;
            return KTextEditor__Plugin::eventFilter(watched, event);
        } else if (ktexteditor__plugin_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ktexteditor__plugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KTextEditor__Plugin::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktexteditor__plugin_timerevent_isbase) {
            ktexteditor__plugin_timerevent_isbase = false;
            KTextEditor__Plugin::timerEvent(event);
        } else if (ktexteditor__plugin_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ktexteditor__plugin_timerevent_callback(this, cbval1);
        } else {
            KTextEditor__Plugin::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktexteditor__plugin_childevent_isbase) {
            ktexteditor__plugin_childevent_isbase = false;
            KTextEditor__Plugin::childEvent(event);
        } else if (ktexteditor__plugin_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktexteditor__plugin_childevent_callback(this, cbval1);
        } else {
            KTextEditor__Plugin::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktexteditor__plugin_customevent_isbase) {
            ktexteditor__plugin_customevent_isbase = false;
            KTextEditor__Plugin::customEvent(event);
        } else if (ktexteditor__plugin_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktexteditor__plugin_customevent_callback(this, cbval1);
        } else {
            KTextEditor__Plugin::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__plugin_connectnotify_isbase) {
            ktexteditor__plugin_connectnotify_isbase = false;
            KTextEditor__Plugin::connectNotify(signal);
        } else if (ktexteditor__plugin_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktexteditor__plugin_connectnotify_callback(this, cbval1);
        } else {
            KTextEditor__Plugin::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__plugin_disconnectnotify_isbase) {
            ktexteditor__plugin_disconnectnotify_isbase = false;
            KTextEditor__Plugin::disconnectNotify(signal);
        } else if (ktexteditor__plugin_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktexteditor__plugin_disconnectnotify_callback(this, cbval1);
        } else {
            KTextEditor__Plugin::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktexteditor__plugin_sender_isbase) {
            ktexteditor__plugin_sender_isbase = false;
            return KTextEditor__Plugin::sender();
        } else if (ktexteditor__plugin_sender_callback != nullptr) {
            QObject* callback_ret = ktexteditor__plugin_sender_callback();
            return callback_ret;
        } else {
            return KTextEditor__Plugin::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktexteditor__plugin_sendersignalindex_isbase) {
            ktexteditor__plugin_sendersignalindex_isbase = false;
            return KTextEditor__Plugin::senderSignalIndex();
        } else if (ktexteditor__plugin_sendersignalindex_callback != nullptr) {
            int callback_ret = ktexteditor__plugin_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__Plugin::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktexteditor__plugin_receivers_isbase) {
            ktexteditor__plugin_receivers_isbase = false;
            return KTextEditor__Plugin::receivers(signal);
        } else if (ktexteditor__plugin_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktexteditor__plugin_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__Plugin::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktexteditor__plugin_issignalconnected_isbase) {
            ktexteditor__plugin_issignalconnected_isbase = false;
            return KTextEditor__Plugin::isSignalConnected(signal);
        } else if (ktexteditor__plugin_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktexteditor__plugin_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__Plugin::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KTextEditor__Plugin_TimerEvent(KTextEditor::Plugin* self, QTimerEvent* event);
    friend void KTextEditor__Plugin_QBaseTimerEvent(KTextEditor::Plugin* self, QTimerEvent* event);
    friend void KTextEditor__Plugin_ChildEvent(KTextEditor::Plugin* self, QChildEvent* event);
    friend void KTextEditor__Plugin_QBaseChildEvent(KTextEditor::Plugin* self, QChildEvent* event);
    friend void KTextEditor__Plugin_CustomEvent(KTextEditor::Plugin* self, QEvent* event);
    friend void KTextEditor__Plugin_QBaseCustomEvent(KTextEditor::Plugin* self, QEvent* event);
    friend void KTextEditor__Plugin_ConnectNotify(KTextEditor::Plugin* self, const QMetaMethod* signal);
    friend void KTextEditor__Plugin_QBaseConnectNotify(KTextEditor::Plugin* self, const QMetaMethod* signal);
    friend void KTextEditor__Plugin_DisconnectNotify(KTextEditor::Plugin* self, const QMetaMethod* signal);
    friend void KTextEditor__Plugin_QBaseDisconnectNotify(KTextEditor::Plugin* self, const QMetaMethod* signal);
    friend QObject* KTextEditor__Plugin_Sender(const KTextEditor::Plugin* self);
    friend QObject* KTextEditor__Plugin_QBaseSender(const KTextEditor::Plugin* self);
    friend int KTextEditor__Plugin_SenderSignalIndex(const KTextEditor::Plugin* self);
    friend int KTextEditor__Plugin_QBaseSenderSignalIndex(const KTextEditor::Plugin* self);
    friend int KTextEditor__Plugin_Receivers(const KTextEditor::Plugin* self, const char* signal);
    friend int KTextEditor__Plugin_QBaseReceivers(const KTextEditor::Plugin* self, const char* signal);
    friend bool KTextEditor__Plugin_IsSignalConnected(const KTextEditor::Plugin* self, const QMetaMethod* signal);
    friend bool KTextEditor__Plugin_QBaseIsSignalConnected(const KTextEditor::Plugin* self, const QMetaMethod* signal);
};

#endif
