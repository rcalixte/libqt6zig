#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALAPPLICATION_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::Application so that we can call protected methods
class VirtualKTextEditorApplication final : public KTextEditor::Application {

  public:
    // Virtual class boolean flag
    bool isVirtualKTextEditorApplication = true;

    // Virtual class public types (including callbacks)
    using KTextEditor__Application_MetaObject_Callback = QMetaObject* (*)();
    using KTextEditor__Application_Metacast_Callback = void* (*)(KTextEditor__Application*, const char*);
    using KTextEditor__Application_Metacall_Callback = int (*)(KTextEditor__Application*, int, int, void**);
    using KTextEditor__Application_Event_Callback = bool (*)(KTextEditor__Application*, QEvent*);
    using KTextEditor__Application_EventFilter_Callback = bool (*)(KTextEditor__Application*, QObject*, QEvent*);
    using KTextEditor__Application_TimerEvent_Callback = void (*)(KTextEditor__Application*, QTimerEvent*);
    using KTextEditor__Application_ChildEvent_Callback = void (*)(KTextEditor__Application*, QChildEvent*);
    using KTextEditor__Application_CustomEvent_Callback = void (*)(KTextEditor__Application*, QEvent*);
    using KTextEditor__Application_ConnectNotify_Callback = void (*)(KTextEditor__Application*, QMetaMethod*);
    using KTextEditor__Application_DisconnectNotify_Callback = void (*)(KTextEditor__Application*, QMetaMethod*);
    using KTextEditor__Application_Sender_Callback = QObject* (*)();
    using KTextEditor__Application_SenderSignalIndex_Callback = int (*)();
    using KTextEditor__Application_Receivers_Callback = int (*)(const KTextEditor__Application*, const char*);
    using KTextEditor__Application_IsSignalConnected_Callback = bool (*)(const KTextEditor__Application*, QMetaMethod*);

  protected:
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
    KTextEditor__Application_Sender_Callback ktexteditor__application_sender_callback = nullptr;
    KTextEditor__Application_SenderSignalIndex_Callback ktexteditor__application_sendersignalindex_callback = nullptr;
    KTextEditor__Application_Receivers_Callback ktexteditor__application_receivers_callback = nullptr;
    KTextEditor__Application_IsSignalConnected_Callback ktexteditor__application_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ktexteditor__application_metaobject_isbase = false;
    mutable bool ktexteditor__application_metacast_isbase = false;
    mutable bool ktexteditor__application_metacall_isbase = false;
    mutable bool ktexteditor__application_event_isbase = false;
    mutable bool ktexteditor__application_eventfilter_isbase = false;
    mutable bool ktexteditor__application_timerevent_isbase = false;
    mutable bool ktexteditor__application_childevent_isbase = false;
    mutable bool ktexteditor__application_customevent_isbase = false;
    mutable bool ktexteditor__application_connectnotify_isbase = false;
    mutable bool ktexteditor__application_disconnectnotify_isbase = false;
    mutable bool ktexteditor__application_sender_isbase = false;
    mutable bool ktexteditor__application_sendersignalindex_isbase = false;
    mutable bool ktexteditor__application_receivers_isbase = false;
    mutable bool ktexteditor__application_issignalconnected_isbase = false;

  public:
    VirtualKTextEditorApplication(QObject* parent) : KTextEditor::Application(parent) {};

    // Callback setters
    inline void setKTextEditor__Application_MetaObject_Callback(KTextEditor__Application_MetaObject_Callback cb) { ktexteditor__application_metaobject_callback = cb; }
    inline void setKTextEditor__Application_Metacast_Callback(KTextEditor__Application_Metacast_Callback cb) { ktexteditor__application_metacast_callback = cb; }
    inline void setKTextEditor__Application_Metacall_Callback(KTextEditor__Application_Metacall_Callback cb) { ktexteditor__application_metacall_callback = cb; }
    inline void setKTextEditor__Application_Event_Callback(KTextEditor__Application_Event_Callback cb) { ktexteditor__application_event_callback = cb; }
    inline void setKTextEditor__Application_EventFilter_Callback(KTextEditor__Application_EventFilter_Callback cb) { ktexteditor__application_eventfilter_callback = cb; }
    inline void setKTextEditor__Application_TimerEvent_Callback(KTextEditor__Application_TimerEvent_Callback cb) { ktexteditor__application_timerevent_callback = cb; }
    inline void setKTextEditor__Application_ChildEvent_Callback(KTextEditor__Application_ChildEvent_Callback cb) { ktexteditor__application_childevent_callback = cb; }
    inline void setKTextEditor__Application_CustomEvent_Callback(KTextEditor__Application_CustomEvent_Callback cb) { ktexteditor__application_customevent_callback = cb; }
    inline void setKTextEditor__Application_ConnectNotify_Callback(KTextEditor__Application_ConnectNotify_Callback cb) { ktexteditor__application_connectnotify_callback = cb; }
    inline void setKTextEditor__Application_DisconnectNotify_Callback(KTextEditor__Application_DisconnectNotify_Callback cb) { ktexteditor__application_disconnectnotify_callback = cb; }
    inline void setKTextEditor__Application_Sender_Callback(KTextEditor__Application_Sender_Callback cb) { ktexteditor__application_sender_callback = cb; }
    inline void setKTextEditor__Application_SenderSignalIndex_Callback(KTextEditor__Application_SenderSignalIndex_Callback cb) { ktexteditor__application_sendersignalindex_callback = cb; }
    inline void setKTextEditor__Application_Receivers_Callback(KTextEditor__Application_Receivers_Callback cb) { ktexteditor__application_receivers_callback = cb; }
    inline void setKTextEditor__Application_IsSignalConnected_Callback(KTextEditor__Application_IsSignalConnected_Callback cb) { ktexteditor__application_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKTextEditor__Application_MetaObject_IsBase(bool value) const { ktexteditor__application_metaobject_isbase = value; }
    inline void setKTextEditor__Application_Metacast_IsBase(bool value) const { ktexteditor__application_metacast_isbase = value; }
    inline void setKTextEditor__Application_Metacall_IsBase(bool value) const { ktexteditor__application_metacall_isbase = value; }
    inline void setKTextEditor__Application_Event_IsBase(bool value) const { ktexteditor__application_event_isbase = value; }
    inline void setKTextEditor__Application_EventFilter_IsBase(bool value) const { ktexteditor__application_eventfilter_isbase = value; }
    inline void setKTextEditor__Application_TimerEvent_IsBase(bool value) const { ktexteditor__application_timerevent_isbase = value; }
    inline void setKTextEditor__Application_ChildEvent_IsBase(bool value) const { ktexteditor__application_childevent_isbase = value; }
    inline void setKTextEditor__Application_CustomEvent_IsBase(bool value) const { ktexteditor__application_customevent_isbase = value; }
    inline void setKTextEditor__Application_ConnectNotify_IsBase(bool value) const { ktexteditor__application_connectnotify_isbase = value; }
    inline void setKTextEditor__Application_DisconnectNotify_IsBase(bool value) const { ktexteditor__application_disconnectnotify_isbase = value; }
    inline void setKTextEditor__Application_Sender_IsBase(bool value) const { ktexteditor__application_sender_isbase = value; }
    inline void setKTextEditor__Application_SenderSignalIndex_IsBase(bool value) const { ktexteditor__application_sendersignalindex_isbase = value; }
    inline void setKTextEditor__Application_Receivers_IsBase(bool value) const { ktexteditor__application_receivers_isbase = value; }
    inline void setKTextEditor__Application_IsSignalConnected_IsBase(bool value) const { ktexteditor__application_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktexteditor__application_metaobject_isbase) {
            ktexteditor__application_metaobject_isbase = false;
            return KTextEditor__Application::metaObject();
        }
        auto metaobject_cb = ktexteditor__application_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KTextEditor__Application::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktexteditor__application_metacast_isbase) {
            ktexteditor__application_metacast_isbase = false;
            return KTextEditor__Application::qt_metacast(param1);
        }
        auto metacast_cb = ktexteditor__application_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__Application::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktexteditor__application_metacall_isbase) {
            ktexteditor__application_metacall_isbase = false;
            return KTextEditor__Application::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = ktexteditor__application_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__Application::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktexteditor__application_event_isbase) {
            ktexteditor__application_event_isbase = false;
            return KTextEditor__Application::event(event);
        }
        auto event_cb = ktexteditor__application_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__Application::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktexteditor__application_eventfilter_isbase) {
            ktexteditor__application_eventfilter_isbase = false;
            return KTextEditor__Application::eventFilter(watched, event);
        }
        auto eventfilter_cb = ktexteditor__application_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTextEditor__Application::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktexteditor__application_timerevent_isbase) {
            ktexteditor__application_timerevent_isbase = false;
            KTextEditor__Application::timerEvent(event);
            return;
        }
        auto timerevent_cb = ktexteditor__application_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KTextEditor__Application::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktexteditor__application_childevent_isbase) {
            ktexteditor__application_childevent_isbase = false;
            KTextEditor__Application::childEvent(event);
            return;
        }
        auto childevent_cb = ktexteditor__application_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KTextEditor__Application::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktexteditor__application_customevent_isbase) {
            ktexteditor__application_customevent_isbase = false;
            KTextEditor__Application::customEvent(event);
            return;
        }
        auto customevent_cb = ktexteditor__application_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KTextEditor__Application::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__application_connectnotify_isbase) {
            ktexteditor__application_connectnotify_isbase = false;
            KTextEditor__Application::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = ktexteditor__application_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KTextEditor__Application::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__application_disconnectnotify_isbase) {
            ktexteditor__application_disconnectnotify_isbase = false;
            KTextEditor__Application::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = ktexteditor__application_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KTextEditor__Application::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktexteditor__application_sender_isbase) {
            ktexteditor__application_sender_isbase = false;
            return KTextEditor__Application::sender();
        }
        auto sender_cb = ktexteditor__application_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KTextEditor__Application::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktexteditor__application_sendersignalindex_isbase) {
            ktexteditor__application_sendersignalindex_isbase = false;
            return KTextEditor__Application::senderSignalIndex();
        }
        auto sendersignalindex_cb = ktexteditor__application_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__Application::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktexteditor__application_receivers_isbase) {
            ktexteditor__application_receivers_isbase = false;
            return KTextEditor__Application::receivers(signal);
        }
        auto receivers_cb = ktexteditor__application_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__Application::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktexteditor__application_issignalconnected_isbase) {
            ktexteditor__application_issignalconnected_isbase = false;
            return KTextEditor__Application::isSignalConnected(signal);
        }
        auto issignalconnected_cb = ktexteditor__application_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__Application::isSignalConnected(signal);
    }

    // Friend functions
    friend void KTextEditor__Application_TimerEvent(KTextEditor::Application* self, QTimerEvent* event);
    friend void KTextEditor__Application_SuperTimerEvent(KTextEditor::Application* self, QTimerEvent* event);
    friend void KTextEditor__Application_ChildEvent(KTextEditor::Application* self, QChildEvent* event);
    friend void KTextEditor__Application_SuperChildEvent(KTextEditor::Application* self, QChildEvent* event);
    friend void KTextEditor__Application_CustomEvent(KTextEditor::Application* self, QEvent* event);
    friend void KTextEditor__Application_SuperCustomEvent(KTextEditor::Application* self, QEvent* event);
    friend void KTextEditor__Application_ConnectNotify(KTextEditor::Application* self, const QMetaMethod* signal);
    friend void KTextEditor__Application_SuperConnectNotify(KTextEditor::Application* self, const QMetaMethod* signal);
    friend void KTextEditor__Application_DisconnectNotify(KTextEditor::Application* self, const QMetaMethod* signal);
    friend void KTextEditor__Application_SuperDisconnectNotify(KTextEditor::Application* self, const QMetaMethod* signal);
    friend QObject* KTextEditor__Application_Sender(const KTextEditor::Application* self);
    friend QObject* KTextEditor__Application_SuperSender(const KTextEditor::Application* self);
    friend int KTextEditor__Application_SenderSignalIndex(const KTextEditor::Application* self);
    friend int KTextEditor__Application_SuperSenderSignalIndex(const KTextEditor::Application* self);
    friend int KTextEditor__Application_Receivers(const KTextEditor::Application* self, const char* signal);
    friend int KTextEditor__Application_SuperReceivers(const KTextEditor::Application* self, const char* signal);
    friend bool KTextEditor__Application_IsSignalConnected(const KTextEditor::Application* self, const QMetaMethod* signal);
    friend bool KTextEditor__Application_SuperIsSignalConnected(const KTextEditor::Application* self, const QMetaMethod* signal);
};

#endif
