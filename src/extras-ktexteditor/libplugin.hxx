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
    using KTextEditor__Plugin_MetaObject_Callback = QMetaObject* (*)();
    using KTextEditor__Plugin_Metacast_Callback = void* (*)(KTextEditor__Plugin*, const char*);
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
    KTextEditor__Plugin_Sender_Callback ktexteditor__plugin_sender_callback = nullptr;
    KTextEditor__Plugin_SenderSignalIndex_Callback ktexteditor__plugin_sendersignalindex_callback = nullptr;
    KTextEditor__Plugin_Receivers_Callback ktexteditor__plugin_receivers_callback = nullptr;
    KTextEditor__Plugin_IsSignalConnected_Callback ktexteditor__plugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ktexteditor__plugin_metaobject_isbase = false;
    mutable bool ktexteditor__plugin_metacast_isbase = false;
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

    // Callback setters
    inline void setKTextEditor__Plugin_MetaObject_Callback(KTextEditor__Plugin_MetaObject_Callback cb) { ktexteditor__plugin_metaobject_callback = cb; }
    inline void setKTextEditor__Plugin_Metacast_Callback(KTextEditor__Plugin_Metacast_Callback cb) { ktexteditor__plugin_metacast_callback = cb; }
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
    inline void setKTextEditor__Plugin_MetaObject_IsBase(bool value) const { ktexteditor__plugin_metaobject_isbase = value; }
    inline void setKTextEditor__Plugin_Metacast_IsBase(bool value) const { ktexteditor__plugin_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (ktexteditor__plugin_metaobject_isbase) {
            ktexteditor__plugin_metaobject_isbase = false;
            return KTextEditor__Plugin::metaObject();
        }
        auto metaobject_cb = ktexteditor__plugin_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KTextEditor__Plugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktexteditor__plugin_metacast_isbase) {
            ktexteditor__plugin_metacast_isbase = false;
            return KTextEditor__Plugin::qt_metacast(param1);
        }
        auto metacast_cb = ktexteditor__plugin_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__Plugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktexteditor__plugin_metacall_isbase) {
            ktexteditor__plugin_metacall_isbase = false;
            return KTextEditor__Plugin::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = ktexteditor__plugin_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__Plugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* createView(KTextEditor::MainWindow* mainWindow) override {
        auto createview_cb = ktexteditor__plugin_createview_callback;
        if (createview_cb) {
            KTextEditor__MainWindow* cbval1 = mainWindow;

            QObject* callback_ret = createview_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual int configPages() const override {
        if (ktexteditor__plugin_configpages_isbase) {
            ktexteditor__plugin_configpages_isbase = false;
            return KTextEditor__Plugin::configPages();
        }
        auto configpages_cb = ktexteditor__plugin_configpages_callback;
        if (configpages_cb) {
            int callback_ret = configpages_cb();
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__Plugin::configPages();
    }

    // Virtual method for C ABI access and custom callback
    virtual KTextEditor::ConfigPage* configPage(int number, QWidget* parent) override {
        if (ktexteditor__plugin_configpage_isbase) {
            ktexteditor__plugin_configpage_isbase = false;
            return KTextEditor__Plugin::configPage(number, parent);
        }
        auto configpage_cb = ktexteditor__plugin_configpage_callback;
        if (configpage_cb) {
            int cbval1 = number;
            QWidget* cbval2 = parent;

            KTextEditor__ConfigPage* callback_ret = configpage_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTextEditor__Plugin::configPage(number, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktexteditor__plugin_event_isbase) {
            ktexteditor__plugin_event_isbase = false;
            return KTextEditor__Plugin::event(event);
        }
        auto event_cb = ktexteditor__plugin_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__Plugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktexteditor__plugin_eventfilter_isbase) {
            ktexteditor__plugin_eventfilter_isbase = false;
            return KTextEditor__Plugin::eventFilter(watched, event);
        }
        auto eventfilter_cb = ktexteditor__plugin_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTextEditor__Plugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktexteditor__plugin_timerevent_isbase) {
            ktexteditor__plugin_timerevent_isbase = false;
            KTextEditor__Plugin::timerEvent(event);
            return;
        }
        auto timerevent_cb = ktexteditor__plugin_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KTextEditor__Plugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktexteditor__plugin_childevent_isbase) {
            ktexteditor__plugin_childevent_isbase = false;
            KTextEditor__Plugin::childEvent(event);
            return;
        }
        auto childevent_cb = ktexteditor__plugin_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KTextEditor__Plugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktexteditor__plugin_customevent_isbase) {
            ktexteditor__plugin_customevent_isbase = false;
            KTextEditor__Plugin::customEvent(event);
            return;
        }
        auto customevent_cb = ktexteditor__plugin_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KTextEditor__Plugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__plugin_connectnotify_isbase) {
            ktexteditor__plugin_connectnotify_isbase = false;
            KTextEditor__Plugin::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = ktexteditor__plugin_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KTextEditor__Plugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__plugin_disconnectnotify_isbase) {
            ktexteditor__plugin_disconnectnotify_isbase = false;
            KTextEditor__Plugin::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = ktexteditor__plugin_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KTextEditor__Plugin::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktexteditor__plugin_sender_isbase) {
            ktexteditor__plugin_sender_isbase = false;
            return KTextEditor__Plugin::sender();
        }
        auto sender_cb = ktexteditor__plugin_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KTextEditor__Plugin::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktexteditor__plugin_sendersignalindex_isbase) {
            ktexteditor__plugin_sendersignalindex_isbase = false;
            return KTextEditor__Plugin::senderSignalIndex();
        }
        auto sendersignalindex_cb = ktexteditor__plugin_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__Plugin::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktexteditor__plugin_receivers_isbase) {
            ktexteditor__plugin_receivers_isbase = false;
            return KTextEditor__Plugin::receivers(signal);
        }
        auto receivers_cb = ktexteditor__plugin_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__Plugin::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktexteditor__plugin_issignalconnected_isbase) {
            ktexteditor__plugin_issignalconnected_isbase = false;
            return KTextEditor__Plugin::isSignalConnected(signal);
        }
        auto issignalconnected_cb = ktexteditor__plugin_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__Plugin::isSignalConnected(signal);
    }

    // Friend functions
    friend void KTextEditor__Plugin_TimerEvent(KTextEditor::Plugin* self, QTimerEvent* event);
    friend void KTextEditor__Plugin_SuperTimerEvent(KTextEditor::Plugin* self, QTimerEvent* event);
    friend void KTextEditor__Plugin_ChildEvent(KTextEditor::Plugin* self, QChildEvent* event);
    friend void KTextEditor__Plugin_SuperChildEvent(KTextEditor::Plugin* self, QChildEvent* event);
    friend void KTextEditor__Plugin_CustomEvent(KTextEditor::Plugin* self, QEvent* event);
    friend void KTextEditor__Plugin_SuperCustomEvent(KTextEditor::Plugin* self, QEvent* event);
    friend void KTextEditor__Plugin_ConnectNotify(KTextEditor::Plugin* self, const QMetaMethod* signal);
    friend void KTextEditor__Plugin_SuperConnectNotify(KTextEditor::Plugin* self, const QMetaMethod* signal);
    friend void KTextEditor__Plugin_DisconnectNotify(KTextEditor::Plugin* self, const QMetaMethod* signal);
    friend void KTextEditor__Plugin_SuperDisconnectNotify(KTextEditor::Plugin* self, const QMetaMethod* signal);
    friend QObject* KTextEditor__Plugin_Sender(const KTextEditor::Plugin* self);
    friend QObject* KTextEditor__Plugin_SuperSender(const KTextEditor::Plugin* self);
    friend int KTextEditor__Plugin_SenderSignalIndex(const KTextEditor::Plugin* self);
    friend int KTextEditor__Plugin_SuperSenderSignalIndex(const KTextEditor::Plugin* self);
    friend int KTextEditor__Plugin_Receivers(const KTextEditor::Plugin* self, const char* signal);
    friend int KTextEditor__Plugin_SuperReceivers(const KTextEditor::Plugin* self, const char* signal);
    friend bool KTextEditor__Plugin_IsSignalConnected(const KTextEditor::Plugin* self, const QMetaMethod* signal);
    friend bool KTextEditor__Plugin_SuperIsSignalConnected(const KTextEditor::Plugin* self, const QMetaMethod* signal);
};

#endif
