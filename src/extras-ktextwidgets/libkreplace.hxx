#pragma once
#ifndef SRC_EXTRAS_KTEXTWIDGETSC_LIBVIRTUALKREPLACE_H
#define SRC_EXTRAS_KTEXTWIDGETSC_LIBVIRTUALKREPLACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KReplace so that we can call protected methods
class VirtualKReplace final : public KReplace {

  public:
    // Virtual class boolean flag
    bool isVirtualKReplace = true;

    // Virtual class public types (including callbacks)
    using KReplace_MetaObject_Callback = QMetaObject* (*)();
    using KReplace_Metacast_Callback = void* (*)(KReplace*, const char*);
    using KReplace_Metacall_Callback = int (*)(KReplace*, int, int, void**);
    using KReplace_ResetCounts_Callback = void (*)();
    using KReplace_ShouldRestart_Callback = bool (*)(const KReplace*, bool, bool);
    using KReplace_DisplayFinalDialog_Callback = void (*)();
    using KReplace_SetOptions_Callback = void (*)(KReplace*, long);
    using KReplace_ValidateMatch_Callback = bool (*)(KReplace*, const char*, int, int);
    using KReplace_Event_Callback = bool (*)(KReplace*, QEvent*);
    using KReplace_EventFilter_Callback = bool (*)(KReplace*, QObject*, QEvent*);
    using KReplace_TimerEvent_Callback = void (*)(KReplace*, QTimerEvent*);
    using KReplace_ChildEvent_Callback = void (*)(KReplace*, QChildEvent*);
    using KReplace_CustomEvent_Callback = void (*)(KReplace*, QEvent*);
    using KReplace_ConnectNotify_Callback = void (*)(KReplace*, QMetaMethod*);
    using KReplace_DisconnectNotify_Callback = void (*)(KReplace*, QMetaMethod*);
    using KReplace_ParentWidget_Callback = QWidget* (*)();
    using KReplace_DialogsParent_Callback = QWidget* (*)();
    using KReplace_Sender_Callback = QObject* (*)();
    using KReplace_SenderSignalIndex_Callback = int (*)();
    using KReplace_Receivers_Callback = int (*)(const KReplace*, const char*);
    using KReplace_IsSignalConnected_Callback = bool (*)(const KReplace*, QMetaMethod*);

  protected:
    // Instance callback storage
    KReplace_MetaObject_Callback kreplace_metaobject_callback = nullptr;
    KReplace_Metacast_Callback kreplace_metacast_callback = nullptr;
    KReplace_Metacall_Callback kreplace_metacall_callback = nullptr;
    KReplace_ResetCounts_Callback kreplace_resetcounts_callback = nullptr;
    KReplace_ShouldRestart_Callback kreplace_shouldrestart_callback = nullptr;
    KReplace_DisplayFinalDialog_Callback kreplace_displayfinaldialog_callback = nullptr;
    KReplace_SetOptions_Callback kreplace_setoptions_callback = nullptr;
    KReplace_ValidateMatch_Callback kreplace_validatematch_callback = nullptr;
    KReplace_Event_Callback kreplace_event_callback = nullptr;
    KReplace_EventFilter_Callback kreplace_eventfilter_callback = nullptr;
    KReplace_TimerEvent_Callback kreplace_timerevent_callback = nullptr;
    KReplace_ChildEvent_Callback kreplace_childevent_callback = nullptr;
    KReplace_CustomEvent_Callback kreplace_customevent_callback = nullptr;
    KReplace_ConnectNotify_Callback kreplace_connectnotify_callback = nullptr;
    KReplace_DisconnectNotify_Callback kreplace_disconnectnotify_callback = nullptr;
    KReplace_ParentWidget_Callback kreplace_parentwidget_callback = nullptr;
    KReplace_DialogsParent_Callback kreplace_dialogsparent_callback = nullptr;
    KReplace_Sender_Callback kreplace_sender_callback = nullptr;
    KReplace_SenderSignalIndex_Callback kreplace_sendersignalindex_callback = nullptr;
    KReplace_Receivers_Callback kreplace_receivers_callback = nullptr;
    KReplace_IsSignalConnected_Callback kreplace_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kreplace_metaobject_isbase = false;
    mutable bool kreplace_metacast_isbase = false;
    mutable bool kreplace_metacall_isbase = false;
    mutable bool kreplace_resetcounts_isbase = false;
    mutable bool kreplace_shouldrestart_isbase = false;
    mutable bool kreplace_displayfinaldialog_isbase = false;
    mutable bool kreplace_setoptions_isbase = false;
    mutable bool kreplace_validatematch_isbase = false;
    mutable bool kreplace_event_isbase = false;
    mutable bool kreplace_eventfilter_isbase = false;
    mutable bool kreplace_timerevent_isbase = false;
    mutable bool kreplace_childevent_isbase = false;
    mutable bool kreplace_customevent_isbase = false;
    mutable bool kreplace_connectnotify_isbase = false;
    mutable bool kreplace_disconnectnotify_isbase = false;
    mutable bool kreplace_parentwidget_isbase = false;
    mutable bool kreplace_dialogsparent_isbase = false;
    mutable bool kreplace_sender_isbase = false;
    mutable bool kreplace_sendersignalindex_isbase = false;
    mutable bool kreplace_receivers_isbase = false;
    mutable bool kreplace_issignalconnected_isbase = false;

  public:
    VirtualKReplace(const QString& pattern, const QString& replacement, long options) : KReplace(pattern, replacement, options) {};
    VirtualKReplace(const QString& pattern, const QString& replacement, long options, QWidget* parent, QWidget* replaceDialog) : KReplace(pattern, replacement, options, parent, replaceDialog) {};
    VirtualKReplace(const QString& pattern, const QString& replacement, long options, QWidget* parent) : KReplace(pattern, replacement, options, parent) {};

    // Callback setters
    inline void setKReplace_MetaObject_Callback(KReplace_MetaObject_Callback cb) { kreplace_metaobject_callback = cb; }
    inline void setKReplace_Metacast_Callback(KReplace_Metacast_Callback cb) { kreplace_metacast_callback = cb; }
    inline void setKReplace_Metacall_Callback(KReplace_Metacall_Callback cb) { kreplace_metacall_callback = cb; }
    inline void setKReplace_ResetCounts_Callback(KReplace_ResetCounts_Callback cb) { kreplace_resetcounts_callback = cb; }
    inline void setKReplace_ShouldRestart_Callback(KReplace_ShouldRestart_Callback cb) { kreplace_shouldrestart_callback = cb; }
    inline void setKReplace_DisplayFinalDialog_Callback(KReplace_DisplayFinalDialog_Callback cb) { kreplace_displayfinaldialog_callback = cb; }
    inline void setKReplace_SetOptions_Callback(KReplace_SetOptions_Callback cb) { kreplace_setoptions_callback = cb; }
    inline void setKReplace_ValidateMatch_Callback(KReplace_ValidateMatch_Callback cb) { kreplace_validatematch_callback = cb; }
    inline void setKReplace_Event_Callback(KReplace_Event_Callback cb) { kreplace_event_callback = cb; }
    inline void setKReplace_EventFilter_Callback(KReplace_EventFilter_Callback cb) { kreplace_eventfilter_callback = cb; }
    inline void setKReplace_TimerEvent_Callback(KReplace_TimerEvent_Callback cb) { kreplace_timerevent_callback = cb; }
    inline void setKReplace_ChildEvent_Callback(KReplace_ChildEvent_Callback cb) { kreplace_childevent_callback = cb; }
    inline void setKReplace_CustomEvent_Callback(KReplace_CustomEvent_Callback cb) { kreplace_customevent_callback = cb; }
    inline void setKReplace_ConnectNotify_Callback(KReplace_ConnectNotify_Callback cb) { kreplace_connectnotify_callback = cb; }
    inline void setKReplace_DisconnectNotify_Callback(KReplace_DisconnectNotify_Callback cb) { kreplace_disconnectnotify_callback = cb; }
    inline void setKReplace_ParentWidget_Callback(KReplace_ParentWidget_Callback cb) { kreplace_parentwidget_callback = cb; }
    inline void setKReplace_DialogsParent_Callback(KReplace_DialogsParent_Callback cb) { kreplace_dialogsparent_callback = cb; }
    inline void setKReplace_Sender_Callback(KReplace_Sender_Callback cb) { kreplace_sender_callback = cb; }
    inline void setKReplace_SenderSignalIndex_Callback(KReplace_SenderSignalIndex_Callback cb) { kreplace_sendersignalindex_callback = cb; }
    inline void setKReplace_Receivers_Callback(KReplace_Receivers_Callback cb) { kreplace_receivers_callback = cb; }
    inline void setKReplace_IsSignalConnected_Callback(KReplace_IsSignalConnected_Callback cb) { kreplace_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKReplace_MetaObject_IsBase(bool value) const { kreplace_metaobject_isbase = value; }
    inline void setKReplace_Metacast_IsBase(bool value) const { kreplace_metacast_isbase = value; }
    inline void setKReplace_Metacall_IsBase(bool value) const { kreplace_metacall_isbase = value; }
    inline void setKReplace_ResetCounts_IsBase(bool value) const { kreplace_resetcounts_isbase = value; }
    inline void setKReplace_ShouldRestart_IsBase(bool value) const { kreplace_shouldrestart_isbase = value; }
    inline void setKReplace_DisplayFinalDialog_IsBase(bool value) const { kreplace_displayfinaldialog_isbase = value; }
    inline void setKReplace_SetOptions_IsBase(bool value) const { kreplace_setoptions_isbase = value; }
    inline void setKReplace_ValidateMatch_IsBase(bool value) const { kreplace_validatematch_isbase = value; }
    inline void setKReplace_Event_IsBase(bool value) const { kreplace_event_isbase = value; }
    inline void setKReplace_EventFilter_IsBase(bool value) const { kreplace_eventfilter_isbase = value; }
    inline void setKReplace_TimerEvent_IsBase(bool value) const { kreplace_timerevent_isbase = value; }
    inline void setKReplace_ChildEvent_IsBase(bool value) const { kreplace_childevent_isbase = value; }
    inline void setKReplace_CustomEvent_IsBase(bool value) const { kreplace_customevent_isbase = value; }
    inline void setKReplace_ConnectNotify_IsBase(bool value) const { kreplace_connectnotify_isbase = value; }
    inline void setKReplace_DisconnectNotify_IsBase(bool value) const { kreplace_disconnectnotify_isbase = value; }
    inline void setKReplace_ParentWidget_IsBase(bool value) const { kreplace_parentwidget_isbase = value; }
    inline void setKReplace_DialogsParent_IsBase(bool value) const { kreplace_dialogsparent_isbase = value; }
    inline void setKReplace_Sender_IsBase(bool value) const { kreplace_sender_isbase = value; }
    inline void setKReplace_SenderSignalIndex_IsBase(bool value) const { kreplace_sendersignalindex_isbase = value; }
    inline void setKReplace_Receivers_IsBase(bool value) const { kreplace_receivers_isbase = value; }
    inline void setKReplace_IsSignalConnected_IsBase(bool value) const { kreplace_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kreplace_metaobject_isbase) {
            kreplace_metaobject_isbase = false;
            return KReplace::metaObject();
        }
        auto metaobject_cb = kreplace_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KReplace::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kreplace_metacast_isbase) {
            kreplace_metacast_isbase = false;
            return KReplace::qt_metacast(param1);
        }
        auto metacast_cb = kreplace_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KReplace::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kreplace_metacall_isbase) {
            kreplace_metacall_isbase = false;
            return KReplace::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kreplace_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KReplace::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetCounts() override {
        if (kreplace_resetcounts_isbase) {
            kreplace_resetcounts_isbase = false;
            KReplace::resetCounts();
            return;
        }
        auto resetcounts_cb = kreplace_resetcounts_callback;
        if (resetcounts_cb) {
            resetcounts_cb();
            return;
        }
        KReplace::resetCounts();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shouldRestart(bool forceAsking, bool showNumMatches) const override {
        if (kreplace_shouldrestart_isbase) {
            kreplace_shouldrestart_isbase = false;
            return KReplace::shouldRestart(forceAsking, showNumMatches);
        }
        auto shouldrestart_cb = kreplace_shouldrestart_callback;
        if (shouldrestart_cb) {
            bool cbval1 = forceAsking;
            bool cbval2 = showNumMatches;

            bool callback_ret = shouldrestart_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KReplace::shouldRestart(forceAsking, showNumMatches);
    }

    // Virtual method for C ABI access and custom callback
    virtual void displayFinalDialog() const override {
        if (kreplace_displayfinaldialog_isbase) {
            kreplace_displayfinaldialog_isbase = false;
            KReplace::displayFinalDialog();
            return;
        }
        auto displayfinaldialog_cb = kreplace_displayfinaldialog_callback;
        if (displayfinaldialog_cb) {
            displayfinaldialog_cb();
            return;
        }
        KReplace::displayFinalDialog();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOptions(long options) override {
        if (kreplace_setoptions_isbase) {
            kreplace_setoptions_isbase = false;
            KReplace::setOptions(options);
            return;
        }
        auto setoptions_cb = kreplace_setoptions_callback;
        if (setoptions_cb) {
            long cbval1 = options;

            setoptions_cb(this, cbval1);
            return;
        }
        KReplace::setOptions(options);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool validateMatch(const QString& text, int index, int matchedlength) override {
        if (kreplace_validatematch_isbase) {
            kreplace_validatematch_isbase = false;
            return KReplace::validateMatch(text, index, matchedlength);
        }
        auto validatematch_cb = kreplace_validatematch_callback;
        if (validatematch_cb) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            int cbval2 = index;
            int cbval3 = matchedlength;

            bool callback_ret = validatematch_cb(this, cbval1, cbval2, cbval3);
            libqt_free(text_str);
            return callback_ret;
        }
        return KReplace::validateMatch(text, index, matchedlength);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kreplace_event_isbase) {
            kreplace_event_isbase = false;
            return KReplace::event(event);
        }
        auto event_cb = kreplace_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KReplace::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kreplace_eventfilter_isbase) {
            kreplace_eventfilter_isbase = false;
            return KReplace::eventFilter(watched, event);
        }
        auto eventfilter_cb = kreplace_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KReplace::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kreplace_timerevent_isbase) {
            kreplace_timerevent_isbase = false;
            KReplace::timerEvent(event);
            return;
        }
        auto timerevent_cb = kreplace_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KReplace::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kreplace_childevent_isbase) {
            kreplace_childevent_isbase = false;
            KReplace::childEvent(event);
            return;
        }
        auto childevent_cb = kreplace_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KReplace::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kreplace_customevent_isbase) {
            kreplace_customevent_isbase = false;
            KReplace::customEvent(event);
            return;
        }
        auto customevent_cb = kreplace_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KReplace::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kreplace_connectnotify_isbase) {
            kreplace_connectnotify_isbase = false;
            KReplace::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kreplace_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KReplace::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kreplace_disconnectnotify_isbase) {
            kreplace_disconnectnotify_isbase = false;
            KReplace::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kreplace_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KReplace::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QWidget* parentWidget() const {
        if (kreplace_parentwidget_isbase) {
            kreplace_parentwidget_isbase = false;
            return KReplace::parentWidget();
        }
        auto parentwidget_cb = kreplace_parentwidget_callback;
        if (parentwidget_cb) {
            QWidget* callback_ret = parentwidget_cb();
            return callback_ret;
        }
        return KReplace::parentWidget();
    }

    // Virtual method for C ABI access and custom callback
    QWidget* dialogsParent() const {
        if (kreplace_dialogsparent_isbase) {
            kreplace_dialogsparent_isbase = false;
            return KReplace::dialogsParent();
        }
        auto dialogsparent_cb = kreplace_dialogsparent_callback;
        if (dialogsparent_cb) {
            QWidget* callback_ret = dialogsparent_cb();
            return callback_ret;
        }
        return KReplace::dialogsParent();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kreplace_sender_isbase) {
            kreplace_sender_isbase = false;
            return KReplace::sender();
        }
        auto sender_cb = kreplace_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KReplace::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kreplace_sendersignalindex_isbase) {
            kreplace_sendersignalindex_isbase = false;
            return KReplace::senderSignalIndex();
        }
        auto sendersignalindex_cb = kreplace_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KReplace::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kreplace_receivers_isbase) {
            kreplace_receivers_isbase = false;
            return KReplace::receivers(signal);
        }
        auto receivers_cb = kreplace_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KReplace::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kreplace_issignalconnected_isbase) {
            kreplace_issignalconnected_isbase = false;
            return KReplace::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kreplace_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KReplace::isSignalConnected(signal);
    }

    // Friend functions
    friend void KReplace_TimerEvent(KReplace* self, QTimerEvent* event);
    friend void KReplace_SuperTimerEvent(KReplace* self, QTimerEvent* event);
    friend void KReplace_ChildEvent(KReplace* self, QChildEvent* event);
    friend void KReplace_SuperChildEvent(KReplace* self, QChildEvent* event);
    friend void KReplace_CustomEvent(KReplace* self, QEvent* event);
    friend void KReplace_SuperCustomEvent(KReplace* self, QEvent* event);
    friend void KReplace_ConnectNotify(KReplace* self, const QMetaMethod* signal);
    friend void KReplace_SuperConnectNotify(KReplace* self, const QMetaMethod* signal);
    friend void KReplace_DisconnectNotify(KReplace* self, const QMetaMethod* signal);
    friend void KReplace_SuperDisconnectNotify(KReplace* self, const QMetaMethod* signal);
    friend QWidget* KReplace_ParentWidget(const KReplace* self);
    friend QWidget* KReplace_SuperParentWidget(const KReplace* self);
    friend QWidget* KReplace_DialogsParent(const KReplace* self);
    friend QWidget* KReplace_SuperDialogsParent(const KReplace* self);
    friend QObject* KReplace_Sender(const KReplace* self);
    friend QObject* KReplace_SuperSender(const KReplace* self);
    friend int KReplace_SenderSignalIndex(const KReplace* self);
    friend int KReplace_SuperSenderSignalIndex(const KReplace* self);
    friend int KReplace_Receivers(const KReplace* self, const char* signal);
    friend int KReplace_SuperReceivers(const KReplace* self, const char* signal);
    friend bool KReplace_IsSignalConnected(const KReplace* self, const QMetaMethod* signal);
    friend bool KReplace_SuperIsSignalConnected(const KReplace* self, const QMetaMethod* signal);
};

#endif
