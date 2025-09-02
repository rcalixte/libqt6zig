#pragma once
#ifndef SRC_EXTRAS_KTEXTWIDGETSC_LIBVIRTUALKFIND_H
#define SRC_EXTRAS_KTEXTWIDGETSC_LIBVIRTUALKFIND_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFind so that we can call protected methods
class VirtualKFind final : public KFind {

  public:
    // Virtual class boolean flag
    bool isVirtualKFind = true;

    // Virtual class public types (including callbacks)
    using KFind_Metacall_Callback = int (*)(KFind*, int, int, void**);
    using KFind_SetOptions_Callback = void (*)(KFind*, long);
    using KFind_ResetCounts_Callback = void (*)();
    using KFind_ValidateMatch_Callback = bool (*)(KFind*, libqt_string, int, int);
    using KFind_ShouldRestart_Callback = bool (*)(const KFind*, bool, bool);
    using KFind_DisplayFinalDialog_Callback = void (*)();
    using KFind_Event_Callback = bool (*)(KFind*, QEvent*);
    using KFind_EventFilter_Callback = bool (*)(KFind*, QObject*, QEvent*);
    using KFind_TimerEvent_Callback = void (*)(KFind*, QTimerEvent*);
    using KFind_ChildEvent_Callback = void (*)(KFind*, QChildEvent*);
    using KFind_CustomEvent_Callback = void (*)(KFind*, QEvent*);
    using KFind_ConnectNotify_Callback = void (*)(KFind*, QMetaMethod*);
    using KFind_DisconnectNotify_Callback = void (*)(KFind*, QMetaMethod*);
    using KFind_ParentWidget_Callback = QWidget* (*)();
    using KFind_DialogsParent_Callback = QWidget* (*)();
    using KFind_Sender_Callback = QObject* (*)();
    using KFind_SenderSignalIndex_Callback = int (*)();
    using KFind_Receivers_Callback = int (*)(const KFind*, const char*);
    using KFind_IsSignalConnected_Callback = bool (*)(const KFind*, QMetaMethod*);

  protected:
    // Instance callback storage
    KFind_Metacall_Callback kfind_metacall_callback = nullptr;
    KFind_SetOptions_Callback kfind_setoptions_callback = nullptr;
    KFind_ResetCounts_Callback kfind_resetcounts_callback = nullptr;
    KFind_ValidateMatch_Callback kfind_validatematch_callback = nullptr;
    KFind_ShouldRestart_Callback kfind_shouldrestart_callback = nullptr;
    KFind_DisplayFinalDialog_Callback kfind_displayfinaldialog_callback = nullptr;
    KFind_Event_Callback kfind_event_callback = nullptr;
    KFind_EventFilter_Callback kfind_eventfilter_callback = nullptr;
    KFind_TimerEvent_Callback kfind_timerevent_callback = nullptr;
    KFind_ChildEvent_Callback kfind_childevent_callback = nullptr;
    KFind_CustomEvent_Callback kfind_customevent_callback = nullptr;
    KFind_ConnectNotify_Callback kfind_connectnotify_callback = nullptr;
    KFind_DisconnectNotify_Callback kfind_disconnectnotify_callback = nullptr;
    KFind_ParentWidget_Callback kfind_parentwidget_callback = nullptr;
    KFind_DialogsParent_Callback kfind_dialogsparent_callback = nullptr;
    KFind_Sender_Callback kfind_sender_callback = nullptr;
    KFind_SenderSignalIndex_Callback kfind_sendersignalindex_callback = nullptr;
    KFind_Receivers_Callback kfind_receivers_callback = nullptr;
    KFind_IsSignalConnected_Callback kfind_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kfind_metacall_isbase = false;
    mutable bool kfind_setoptions_isbase = false;
    mutable bool kfind_resetcounts_isbase = false;
    mutable bool kfind_validatematch_isbase = false;
    mutable bool kfind_shouldrestart_isbase = false;
    mutable bool kfind_displayfinaldialog_isbase = false;
    mutable bool kfind_event_isbase = false;
    mutable bool kfind_eventfilter_isbase = false;
    mutable bool kfind_timerevent_isbase = false;
    mutable bool kfind_childevent_isbase = false;
    mutable bool kfind_customevent_isbase = false;
    mutable bool kfind_connectnotify_isbase = false;
    mutable bool kfind_disconnectnotify_isbase = false;
    mutable bool kfind_parentwidget_isbase = false;
    mutable bool kfind_dialogsparent_isbase = false;
    mutable bool kfind_sender_isbase = false;
    mutable bool kfind_sendersignalindex_isbase = false;
    mutable bool kfind_receivers_isbase = false;
    mutable bool kfind_issignalconnected_isbase = false;

  public:
    VirtualKFind(const QString& pattern, long options, QWidget* parent) : KFind(pattern, options, parent) {};
    VirtualKFind(const QString& pattern, long options, QWidget* parent, QWidget* findDialog) : KFind(pattern, options, parent, findDialog) {};

    ~VirtualKFind() {
        kfind_metacall_callback = nullptr;
        kfind_setoptions_callback = nullptr;
        kfind_resetcounts_callback = nullptr;
        kfind_validatematch_callback = nullptr;
        kfind_shouldrestart_callback = nullptr;
        kfind_displayfinaldialog_callback = nullptr;
        kfind_event_callback = nullptr;
        kfind_eventfilter_callback = nullptr;
        kfind_timerevent_callback = nullptr;
        kfind_childevent_callback = nullptr;
        kfind_customevent_callback = nullptr;
        kfind_connectnotify_callback = nullptr;
        kfind_disconnectnotify_callback = nullptr;
        kfind_parentwidget_callback = nullptr;
        kfind_dialogsparent_callback = nullptr;
        kfind_sender_callback = nullptr;
        kfind_sendersignalindex_callback = nullptr;
        kfind_receivers_callback = nullptr;
        kfind_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKFind_Metacall_Callback(KFind_Metacall_Callback cb) { kfind_metacall_callback = cb; }
    inline void setKFind_SetOptions_Callback(KFind_SetOptions_Callback cb) { kfind_setoptions_callback = cb; }
    inline void setKFind_ResetCounts_Callback(KFind_ResetCounts_Callback cb) { kfind_resetcounts_callback = cb; }
    inline void setKFind_ValidateMatch_Callback(KFind_ValidateMatch_Callback cb) { kfind_validatematch_callback = cb; }
    inline void setKFind_ShouldRestart_Callback(KFind_ShouldRestart_Callback cb) { kfind_shouldrestart_callback = cb; }
    inline void setKFind_DisplayFinalDialog_Callback(KFind_DisplayFinalDialog_Callback cb) { kfind_displayfinaldialog_callback = cb; }
    inline void setKFind_Event_Callback(KFind_Event_Callback cb) { kfind_event_callback = cb; }
    inline void setKFind_EventFilter_Callback(KFind_EventFilter_Callback cb) { kfind_eventfilter_callback = cb; }
    inline void setKFind_TimerEvent_Callback(KFind_TimerEvent_Callback cb) { kfind_timerevent_callback = cb; }
    inline void setKFind_ChildEvent_Callback(KFind_ChildEvent_Callback cb) { kfind_childevent_callback = cb; }
    inline void setKFind_CustomEvent_Callback(KFind_CustomEvent_Callback cb) { kfind_customevent_callback = cb; }
    inline void setKFind_ConnectNotify_Callback(KFind_ConnectNotify_Callback cb) { kfind_connectnotify_callback = cb; }
    inline void setKFind_DisconnectNotify_Callback(KFind_DisconnectNotify_Callback cb) { kfind_disconnectnotify_callback = cb; }
    inline void setKFind_ParentWidget_Callback(KFind_ParentWidget_Callback cb) { kfind_parentwidget_callback = cb; }
    inline void setKFind_DialogsParent_Callback(KFind_DialogsParent_Callback cb) { kfind_dialogsparent_callback = cb; }
    inline void setKFind_Sender_Callback(KFind_Sender_Callback cb) { kfind_sender_callback = cb; }
    inline void setKFind_SenderSignalIndex_Callback(KFind_SenderSignalIndex_Callback cb) { kfind_sendersignalindex_callback = cb; }
    inline void setKFind_Receivers_Callback(KFind_Receivers_Callback cb) { kfind_receivers_callback = cb; }
    inline void setKFind_IsSignalConnected_Callback(KFind_IsSignalConnected_Callback cb) { kfind_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKFind_Metacall_IsBase(bool value) const { kfind_metacall_isbase = value; }
    inline void setKFind_SetOptions_IsBase(bool value) const { kfind_setoptions_isbase = value; }
    inline void setKFind_ResetCounts_IsBase(bool value) const { kfind_resetcounts_isbase = value; }
    inline void setKFind_ValidateMatch_IsBase(bool value) const { kfind_validatematch_isbase = value; }
    inline void setKFind_ShouldRestart_IsBase(bool value) const { kfind_shouldrestart_isbase = value; }
    inline void setKFind_DisplayFinalDialog_IsBase(bool value) const { kfind_displayfinaldialog_isbase = value; }
    inline void setKFind_Event_IsBase(bool value) const { kfind_event_isbase = value; }
    inline void setKFind_EventFilter_IsBase(bool value) const { kfind_eventfilter_isbase = value; }
    inline void setKFind_TimerEvent_IsBase(bool value) const { kfind_timerevent_isbase = value; }
    inline void setKFind_ChildEvent_IsBase(bool value) const { kfind_childevent_isbase = value; }
    inline void setKFind_CustomEvent_IsBase(bool value) const { kfind_customevent_isbase = value; }
    inline void setKFind_ConnectNotify_IsBase(bool value) const { kfind_connectnotify_isbase = value; }
    inline void setKFind_DisconnectNotify_IsBase(bool value) const { kfind_disconnectnotify_isbase = value; }
    inline void setKFind_ParentWidget_IsBase(bool value) const { kfind_parentwidget_isbase = value; }
    inline void setKFind_DialogsParent_IsBase(bool value) const { kfind_dialogsparent_isbase = value; }
    inline void setKFind_Sender_IsBase(bool value) const { kfind_sender_isbase = value; }
    inline void setKFind_SenderSignalIndex_IsBase(bool value) const { kfind_sendersignalindex_isbase = value; }
    inline void setKFind_Receivers_IsBase(bool value) const { kfind_receivers_isbase = value; }
    inline void setKFind_IsSignalConnected_IsBase(bool value) const { kfind_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfind_metacall_isbase) {
            kfind_metacall_isbase = false;
            return KFind::qt_metacall(param1, param2, param3);
        } else if (kfind_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kfind_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KFind::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOptions(long options) override {
        if (kfind_setoptions_isbase) {
            kfind_setoptions_isbase = false;
            KFind::setOptions(options);
        } else if (kfind_setoptions_callback != nullptr) {
            long cbval1 = options;

            kfind_setoptions_callback(this, cbval1);
        } else {
            KFind::setOptions(options);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetCounts() override {
        if (kfind_resetcounts_isbase) {
            kfind_resetcounts_isbase = false;
            KFind::resetCounts();
        } else if (kfind_resetcounts_callback != nullptr) {
            kfind_resetcounts_callback();
        } else {
            KFind::resetCounts();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool validateMatch(const QString& text, int index, int matchedlength) override {
        if (kfind_validatematch_isbase) {
            kfind_validatematch_isbase = false;
            return KFind::validateMatch(text, index, matchedlength);
        } else if (kfind_validatematch_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;
            int cbval2 = index;
            int cbval3 = matchedlength;

            bool callback_ret = kfind_validatematch_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KFind::validateMatch(text, index, matchedlength);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shouldRestart(bool forceAsking, bool showNumMatches) const override {
        if (kfind_shouldrestart_isbase) {
            kfind_shouldrestart_isbase = false;
            return KFind::shouldRestart(forceAsking, showNumMatches);
        } else if (kfind_shouldrestart_callback != nullptr) {
            bool cbval1 = forceAsking;
            bool cbval2 = showNumMatches;

            bool callback_ret = kfind_shouldrestart_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KFind::shouldRestart(forceAsking, showNumMatches);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void displayFinalDialog() const override {
        if (kfind_displayfinaldialog_isbase) {
            kfind_displayfinaldialog_isbase = false;
            KFind::displayFinalDialog();
        } else if (kfind_displayfinaldialog_callback != nullptr) {
            kfind_displayfinaldialog_callback();
        } else {
            KFind::displayFinalDialog();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfind_event_isbase) {
            kfind_event_isbase = false;
            return KFind::event(event);
        } else if (kfind_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kfind_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFind::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfind_eventfilter_isbase) {
            kfind_eventfilter_isbase = false;
            return KFind::eventFilter(watched, event);
        } else if (kfind_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kfind_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KFind::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfind_timerevent_isbase) {
            kfind_timerevent_isbase = false;
            KFind::timerEvent(event);
        } else if (kfind_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kfind_timerevent_callback(this, cbval1);
        } else {
            KFind::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfind_childevent_isbase) {
            kfind_childevent_isbase = false;
            KFind::childEvent(event);
        } else if (kfind_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kfind_childevent_callback(this, cbval1);
        } else {
            KFind::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfind_customevent_isbase) {
            kfind_customevent_isbase = false;
            KFind::customEvent(event);
        } else if (kfind_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfind_customevent_callback(this, cbval1);
        } else {
            KFind::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfind_connectnotify_isbase) {
            kfind_connectnotify_isbase = false;
            KFind::connectNotify(signal);
        } else if (kfind_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfind_connectnotify_callback(this, cbval1);
        } else {
            KFind::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfind_disconnectnotify_isbase) {
            kfind_disconnectnotify_isbase = false;
            KFind::disconnectNotify(signal);
        } else if (kfind_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfind_disconnectnotify_callback(this, cbval1);
        } else {
            KFind::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QWidget* parentWidget() const {
        if (kfind_parentwidget_isbase) {
            kfind_parentwidget_isbase = false;
            return KFind::parentWidget();
        } else if (kfind_parentwidget_callback != nullptr) {
            QWidget* callback_ret = kfind_parentwidget_callback();
            return callback_ret;
        } else {
            return KFind::parentWidget();
        }
    }

    // Virtual method for C ABI access and custom callback
    QWidget* dialogsParent() const {
        if (kfind_dialogsparent_isbase) {
            kfind_dialogsparent_isbase = false;
            return KFind::dialogsParent();
        } else if (kfind_dialogsparent_callback != nullptr) {
            QWidget* callback_ret = kfind_dialogsparent_callback();
            return callback_ret;
        } else {
            return KFind::dialogsParent();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfind_sender_isbase) {
            kfind_sender_isbase = false;
            return KFind::sender();
        } else if (kfind_sender_callback != nullptr) {
            QObject* callback_ret = kfind_sender_callback();
            return callback_ret;
        } else {
            return KFind::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfind_sendersignalindex_isbase) {
            kfind_sendersignalindex_isbase = false;
            return KFind::senderSignalIndex();
        } else if (kfind_sendersignalindex_callback != nullptr) {
            int callback_ret = kfind_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFind::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfind_receivers_isbase) {
            kfind_receivers_isbase = false;
            return KFind::receivers(signal);
        } else if (kfind_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kfind_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFind::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfind_issignalconnected_isbase) {
            kfind_issignalconnected_isbase = false;
            return KFind::isSignalConnected(signal);
        } else if (kfind_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kfind_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFind::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KFind_TimerEvent(KFind* self, QTimerEvent* event);
    friend void KFind_QBaseTimerEvent(KFind* self, QTimerEvent* event);
    friend void KFind_ChildEvent(KFind* self, QChildEvent* event);
    friend void KFind_QBaseChildEvent(KFind* self, QChildEvent* event);
    friend void KFind_CustomEvent(KFind* self, QEvent* event);
    friend void KFind_QBaseCustomEvent(KFind* self, QEvent* event);
    friend void KFind_ConnectNotify(KFind* self, const QMetaMethod* signal);
    friend void KFind_QBaseConnectNotify(KFind* self, const QMetaMethod* signal);
    friend void KFind_DisconnectNotify(KFind* self, const QMetaMethod* signal);
    friend void KFind_QBaseDisconnectNotify(KFind* self, const QMetaMethod* signal);
    friend QWidget* KFind_ParentWidget(const KFind* self);
    friend QWidget* KFind_QBaseParentWidget(const KFind* self);
    friend QWidget* KFind_DialogsParent(const KFind* self);
    friend QWidget* KFind_QBaseDialogsParent(const KFind* self);
    friend QObject* KFind_Sender(const KFind* self);
    friend QObject* KFind_QBaseSender(const KFind* self);
    friend int KFind_SenderSignalIndex(const KFind* self);
    friend int KFind_QBaseSenderSignalIndex(const KFind* self);
    friend int KFind_Receivers(const KFind* self, const char* signal);
    friend int KFind_QBaseReceivers(const KFind* self, const char* signal);
    friend bool KFind_IsSignalConnected(const KFind* self, const QMetaMethod* signal);
    friend bool KFind_QBaseIsSignalConnected(const KFind* self, const QMetaMethod* signal);
};

#endif
