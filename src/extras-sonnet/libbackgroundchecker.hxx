#pragma once
#ifndef SRC_EXTRAS_SONNETC_LIBVIRTUALBACKGROUNDCHECKER_H
#define SRC_EXTRAS_SONNETC_LIBVIRTUALBACKGROUNDCHECKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Sonnet::BackgroundChecker so that we can call protected methods
class VirtualSonnetBackgroundChecker final : public Sonnet::BackgroundChecker {

  public:
    // Virtual class boolean flag
    bool isVirtualSonnetBackgroundChecker = true;

    // Virtual class public types (including callbacks)
    using Sonnet__BackgroundChecker_Metacall_Callback = int (*)(Sonnet__BackgroundChecker*, int, int, void**);
    using Sonnet__BackgroundChecker_Start_Callback = void (*)();
    using Sonnet__BackgroundChecker_Stop_Callback = void (*)();
    using Sonnet__BackgroundChecker_ContinueChecking_Callback = void (*)();
    using Sonnet__BackgroundChecker_FetchMoreText_Callback = const char* (*)();
    using Sonnet__BackgroundChecker_FinishedCurrentFeed_Callback = void (*)();
    using Sonnet__BackgroundChecker_Event_Callback = bool (*)(Sonnet__BackgroundChecker*, QEvent*);
    using Sonnet__BackgroundChecker_EventFilter_Callback = bool (*)(Sonnet__BackgroundChecker*, QObject*, QEvent*);
    using Sonnet__BackgroundChecker_TimerEvent_Callback = void (*)(Sonnet__BackgroundChecker*, QTimerEvent*);
    using Sonnet__BackgroundChecker_ChildEvent_Callback = void (*)(Sonnet__BackgroundChecker*, QChildEvent*);
    using Sonnet__BackgroundChecker_CustomEvent_Callback = void (*)(Sonnet__BackgroundChecker*, QEvent*);
    using Sonnet__BackgroundChecker_ConnectNotify_Callback = void (*)(Sonnet__BackgroundChecker*, QMetaMethod*);
    using Sonnet__BackgroundChecker_DisconnectNotify_Callback = void (*)(Sonnet__BackgroundChecker*, QMetaMethod*);
    using Sonnet__BackgroundChecker_SlotEngineDone_Callback = void (*)();
    using Sonnet__BackgroundChecker_Sender_Callback = QObject* (*)();
    using Sonnet__BackgroundChecker_SenderSignalIndex_Callback = int (*)();
    using Sonnet__BackgroundChecker_Receivers_Callback = int (*)(const Sonnet__BackgroundChecker*, const char*);
    using Sonnet__BackgroundChecker_IsSignalConnected_Callback = bool (*)(const Sonnet__BackgroundChecker*, QMetaMethod*);

  protected:
    // Instance callback storage
    Sonnet__BackgroundChecker_Metacall_Callback sonnet__backgroundchecker_metacall_callback = nullptr;
    Sonnet__BackgroundChecker_Start_Callback sonnet__backgroundchecker_start_callback = nullptr;
    Sonnet__BackgroundChecker_Stop_Callback sonnet__backgroundchecker_stop_callback = nullptr;
    Sonnet__BackgroundChecker_ContinueChecking_Callback sonnet__backgroundchecker_continuechecking_callback = nullptr;
    Sonnet__BackgroundChecker_FetchMoreText_Callback sonnet__backgroundchecker_fetchmoretext_callback = nullptr;
    Sonnet__BackgroundChecker_FinishedCurrentFeed_Callback sonnet__backgroundchecker_finishedcurrentfeed_callback = nullptr;
    Sonnet__BackgroundChecker_Event_Callback sonnet__backgroundchecker_event_callback = nullptr;
    Sonnet__BackgroundChecker_EventFilter_Callback sonnet__backgroundchecker_eventfilter_callback = nullptr;
    Sonnet__BackgroundChecker_TimerEvent_Callback sonnet__backgroundchecker_timerevent_callback = nullptr;
    Sonnet__BackgroundChecker_ChildEvent_Callback sonnet__backgroundchecker_childevent_callback = nullptr;
    Sonnet__BackgroundChecker_CustomEvent_Callback sonnet__backgroundchecker_customevent_callback = nullptr;
    Sonnet__BackgroundChecker_ConnectNotify_Callback sonnet__backgroundchecker_connectnotify_callback = nullptr;
    Sonnet__BackgroundChecker_DisconnectNotify_Callback sonnet__backgroundchecker_disconnectnotify_callback = nullptr;
    Sonnet__BackgroundChecker_SlotEngineDone_Callback sonnet__backgroundchecker_slotenginedone_callback = nullptr;
    Sonnet__BackgroundChecker_Sender_Callback sonnet__backgroundchecker_sender_callback = nullptr;
    Sonnet__BackgroundChecker_SenderSignalIndex_Callback sonnet__backgroundchecker_sendersignalindex_callback = nullptr;
    Sonnet__BackgroundChecker_Receivers_Callback sonnet__backgroundchecker_receivers_callback = nullptr;
    Sonnet__BackgroundChecker_IsSignalConnected_Callback sonnet__backgroundchecker_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool sonnet__backgroundchecker_metacall_isbase = false;
    mutable bool sonnet__backgroundchecker_start_isbase = false;
    mutable bool sonnet__backgroundchecker_stop_isbase = false;
    mutable bool sonnet__backgroundchecker_continuechecking_isbase = false;
    mutable bool sonnet__backgroundchecker_fetchmoretext_isbase = false;
    mutable bool sonnet__backgroundchecker_finishedcurrentfeed_isbase = false;
    mutable bool sonnet__backgroundchecker_event_isbase = false;
    mutable bool sonnet__backgroundchecker_eventfilter_isbase = false;
    mutable bool sonnet__backgroundchecker_timerevent_isbase = false;
    mutable bool sonnet__backgroundchecker_childevent_isbase = false;
    mutable bool sonnet__backgroundchecker_customevent_isbase = false;
    mutable bool sonnet__backgroundchecker_connectnotify_isbase = false;
    mutable bool sonnet__backgroundchecker_disconnectnotify_isbase = false;
    mutable bool sonnet__backgroundchecker_slotenginedone_isbase = false;
    mutable bool sonnet__backgroundchecker_sender_isbase = false;
    mutable bool sonnet__backgroundchecker_sendersignalindex_isbase = false;
    mutable bool sonnet__backgroundchecker_receivers_isbase = false;
    mutable bool sonnet__backgroundchecker_issignalconnected_isbase = false;

  public:
    VirtualSonnetBackgroundChecker() : Sonnet::BackgroundChecker() {};
    VirtualSonnetBackgroundChecker(const Sonnet::Speller& speller) : Sonnet::BackgroundChecker(speller) {};
    VirtualSonnetBackgroundChecker(QObject* parent) : Sonnet::BackgroundChecker(parent) {};
    VirtualSonnetBackgroundChecker(const Sonnet::Speller& speller, QObject* parent) : Sonnet::BackgroundChecker(speller, parent) {};

    ~VirtualSonnetBackgroundChecker() {
        sonnet__backgroundchecker_metacall_callback = nullptr;
        sonnet__backgroundchecker_start_callback = nullptr;
        sonnet__backgroundchecker_stop_callback = nullptr;
        sonnet__backgroundchecker_continuechecking_callback = nullptr;
        sonnet__backgroundchecker_fetchmoretext_callback = nullptr;
        sonnet__backgroundchecker_finishedcurrentfeed_callback = nullptr;
        sonnet__backgroundchecker_event_callback = nullptr;
        sonnet__backgroundchecker_eventfilter_callback = nullptr;
        sonnet__backgroundchecker_timerevent_callback = nullptr;
        sonnet__backgroundchecker_childevent_callback = nullptr;
        sonnet__backgroundchecker_customevent_callback = nullptr;
        sonnet__backgroundchecker_connectnotify_callback = nullptr;
        sonnet__backgroundchecker_disconnectnotify_callback = nullptr;
        sonnet__backgroundchecker_slotenginedone_callback = nullptr;
        sonnet__backgroundchecker_sender_callback = nullptr;
        sonnet__backgroundchecker_sendersignalindex_callback = nullptr;
        sonnet__backgroundchecker_receivers_callback = nullptr;
        sonnet__backgroundchecker_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setSonnet__BackgroundChecker_Metacall_Callback(Sonnet__BackgroundChecker_Metacall_Callback cb) { sonnet__backgroundchecker_metacall_callback = cb; }
    inline void setSonnet__BackgroundChecker_Start_Callback(Sonnet__BackgroundChecker_Start_Callback cb) { sonnet__backgroundchecker_start_callback = cb; }
    inline void setSonnet__BackgroundChecker_Stop_Callback(Sonnet__BackgroundChecker_Stop_Callback cb) { sonnet__backgroundchecker_stop_callback = cb; }
    inline void setSonnet__BackgroundChecker_ContinueChecking_Callback(Sonnet__BackgroundChecker_ContinueChecking_Callback cb) { sonnet__backgroundchecker_continuechecking_callback = cb; }
    inline void setSonnet__BackgroundChecker_FetchMoreText_Callback(Sonnet__BackgroundChecker_FetchMoreText_Callback cb) { sonnet__backgroundchecker_fetchmoretext_callback = cb; }
    inline void setSonnet__BackgroundChecker_FinishedCurrentFeed_Callback(Sonnet__BackgroundChecker_FinishedCurrentFeed_Callback cb) { sonnet__backgroundchecker_finishedcurrentfeed_callback = cb; }
    inline void setSonnet__BackgroundChecker_Event_Callback(Sonnet__BackgroundChecker_Event_Callback cb) { sonnet__backgroundchecker_event_callback = cb; }
    inline void setSonnet__BackgroundChecker_EventFilter_Callback(Sonnet__BackgroundChecker_EventFilter_Callback cb) { sonnet__backgroundchecker_eventfilter_callback = cb; }
    inline void setSonnet__BackgroundChecker_TimerEvent_Callback(Sonnet__BackgroundChecker_TimerEvent_Callback cb) { sonnet__backgroundchecker_timerevent_callback = cb; }
    inline void setSonnet__BackgroundChecker_ChildEvent_Callback(Sonnet__BackgroundChecker_ChildEvent_Callback cb) { sonnet__backgroundchecker_childevent_callback = cb; }
    inline void setSonnet__BackgroundChecker_CustomEvent_Callback(Sonnet__BackgroundChecker_CustomEvent_Callback cb) { sonnet__backgroundchecker_customevent_callback = cb; }
    inline void setSonnet__BackgroundChecker_ConnectNotify_Callback(Sonnet__BackgroundChecker_ConnectNotify_Callback cb) { sonnet__backgroundchecker_connectnotify_callback = cb; }
    inline void setSonnet__BackgroundChecker_DisconnectNotify_Callback(Sonnet__BackgroundChecker_DisconnectNotify_Callback cb) { sonnet__backgroundchecker_disconnectnotify_callback = cb; }
    inline void setSonnet__BackgroundChecker_SlotEngineDone_Callback(Sonnet__BackgroundChecker_SlotEngineDone_Callback cb) { sonnet__backgroundchecker_slotenginedone_callback = cb; }
    inline void setSonnet__BackgroundChecker_Sender_Callback(Sonnet__BackgroundChecker_Sender_Callback cb) { sonnet__backgroundchecker_sender_callback = cb; }
    inline void setSonnet__BackgroundChecker_SenderSignalIndex_Callback(Sonnet__BackgroundChecker_SenderSignalIndex_Callback cb) { sonnet__backgroundchecker_sendersignalindex_callback = cb; }
    inline void setSonnet__BackgroundChecker_Receivers_Callback(Sonnet__BackgroundChecker_Receivers_Callback cb) { sonnet__backgroundchecker_receivers_callback = cb; }
    inline void setSonnet__BackgroundChecker_IsSignalConnected_Callback(Sonnet__BackgroundChecker_IsSignalConnected_Callback cb) { sonnet__backgroundchecker_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setSonnet__BackgroundChecker_Metacall_IsBase(bool value) const { sonnet__backgroundchecker_metacall_isbase = value; }
    inline void setSonnet__BackgroundChecker_Start_IsBase(bool value) const { sonnet__backgroundchecker_start_isbase = value; }
    inline void setSonnet__BackgroundChecker_Stop_IsBase(bool value) const { sonnet__backgroundchecker_stop_isbase = value; }
    inline void setSonnet__BackgroundChecker_ContinueChecking_IsBase(bool value) const { sonnet__backgroundchecker_continuechecking_isbase = value; }
    inline void setSonnet__BackgroundChecker_FetchMoreText_IsBase(bool value) const { sonnet__backgroundchecker_fetchmoretext_isbase = value; }
    inline void setSonnet__BackgroundChecker_FinishedCurrentFeed_IsBase(bool value) const { sonnet__backgroundchecker_finishedcurrentfeed_isbase = value; }
    inline void setSonnet__BackgroundChecker_Event_IsBase(bool value) const { sonnet__backgroundchecker_event_isbase = value; }
    inline void setSonnet__BackgroundChecker_EventFilter_IsBase(bool value) const { sonnet__backgroundchecker_eventfilter_isbase = value; }
    inline void setSonnet__BackgroundChecker_TimerEvent_IsBase(bool value) const { sonnet__backgroundchecker_timerevent_isbase = value; }
    inline void setSonnet__BackgroundChecker_ChildEvent_IsBase(bool value) const { sonnet__backgroundchecker_childevent_isbase = value; }
    inline void setSonnet__BackgroundChecker_CustomEvent_IsBase(bool value) const { sonnet__backgroundchecker_customevent_isbase = value; }
    inline void setSonnet__BackgroundChecker_ConnectNotify_IsBase(bool value) const { sonnet__backgroundchecker_connectnotify_isbase = value; }
    inline void setSonnet__BackgroundChecker_DisconnectNotify_IsBase(bool value) const { sonnet__backgroundchecker_disconnectnotify_isbase = value; }
    inline void setSonnet__BackgroundChecker_SlotEngineDone_IsBase(bool value) const { sonnet__backgroundchecker_slotenginedone_isbase = value; }
    inline void setSonnet__BackgroundChecker_Sender_IsBase(bool value) const { sonnet__backgroundchecker_sender_isbase = value; }
    inline void setSonnet__BackgroundChecker_SenderSignalIndex_IsBase(bool value) const { sonnet__backgroundchecker_sendersignalindex_isbase = value; }
    inline void setSonnet__BackgroundChecker_Receivers_IsBase(bool value) const { sonnet__backgroundchecker_receivers_isbase = value; }
    inline void setSonnet__BackgroundChecker_IsSignalConnected_IsBase(bool value) const { sonnet__backgroundchecker_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (sonnet__backgroundchecker_metacall_isbase) {
            sonnet__backgroundchecker_metacall_isbase = false;
            return Sonnet__BackgroundChecker::qt_metacall(param1, param2, param3);
        } else if (sonnet__backgroundchecker_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = sonnet__backgroundchecker_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__BackgroundChecker::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (sonnet__backgroundchecker_start_isbase) {
            sonnet__backgroundchecker_start_isbase = false;
            Sonnet__BackgroundChecker::start();
        } else if (sonnet__backgroundchecker_start_callback != nullptr) {
            sonnet__backgroundchecker_start_callback();
        } else {
            Sonnet__BackgroundChecker::start();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stop() override {
        if (sonnet__backgroundchecker_stop_isbase) {
            sonnet__backgroundchecker_stop_isbase = false;
            Sonnet__BackgroundChecker::stop();
        } else if (sonnet__backgroundchecker_stop_callback != nullptr) {
            sonnet__backgroundchecker_stop_callback();
        } else {
            Sonnet__BackgroundChecker::stop();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void continueChecking() override {
        if (sonnet__backgroundchecker_continuechecking_isbase) {
            sonnet__backgroundchecker_continuechecking_isbase = false;
            Sonnet__BackgroundChecker::continueChecking();
        } else if (sonnet__backgroundchecker_continuechecking_callback != nullptr) {
            sonnet__backgroundchecker_continuechecking_callback();
        } else {
            Sonnet__BackgroundChecker::continueChecking();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString fetchMoreText() override {
        if (sonnet__backgroundchecker_fetchmoretext_isbase) {
            sonnet__backgroundchecker_fetchmoretext_isbase = false;
            return Sonnet__BackgroundChecker::fetchMoreText();
        } else if (sonnet__backgroundchecker_fetchmoretext_callback != nullptr) {
            const char* callback_ret = sonnet__backgroundchecker_fetchmoretext_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return Sonnet__BackgroundChecker::fetchMoreText();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void finishedCurrentFeed() override {
        if (sonnet__backgroundchecker_finishedcurrentfeed_isbase) {
            sonnet__backgroundchecker_finishedcurrentfeed_isbase = false;
            Sonnet__BackgroundChecker::finishedCurrentFeed();
        } else if (sonnet__backgroundchecker_finishedcurrentfeed_callback != nullptr) {
            sonnet__backgroundchecker_finishedcurrentfeed_callback();
        } else {
            Sonnet__BackgroundChecker::finishedCurrentFeed();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (sonnet__backgroundchecker_event_isbase) {
            sonnet__backgroundchecker_event_isbase = false;
            return Sonnet__BackgroundChecker::event(event);
        } else if (sonnet__backgroundchecker_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = sonnet__backgroundchecker_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__BackgroundChecker::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (sonnet__backgroundchecker_eventfilter_isbase) {
            sonnet__backgroundchecker_eventfilter_isbase = false;
            return Sonnet__BackgroundChecker::eventFilter(watched, event);
        } else if (sonnet__backgroundchecker_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = sonnet__backgroundchecker_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return Sonnet__BackgroundChecker::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (sonnet__backgroundchecker_timerevent_isbase) {
            sonnet__backgroundchecker_timerevent_isbase = false;
            Sonnet__BackgroundChecker::timerEvent(event);
        } else if (sonnet__backgroundchecker_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            sonnet__backgroundchecker_timerevent_callback(this, cbval1);
        } else {
            Sonnet__BackgroundChecker::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (sonnet__backgroundchecker_childevent_isbase) {
            sonnet__backgroundchecker_childevent_isbase = false;
            Sonnet__BackgroundChecker::childEvent(event);
        } else if (sonnet__backgroundchecker_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            sonnet__backgroundchecker_childevent_callback(this, cbval1);
        } else {
            Sonnet__BackgroundChecker::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (sonnet__backgroundchecker_customevent_isbase) {
            sonnet__backgroundchecker_customevent_isbase = false;
            Sonnet__BackgroundChecker::customEvent(event);
        } else if (sonnet__backgroundchecker_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            sonnet__backgroundchecker_customevent_callback(this, cbval1);
        } else {
            Sonnet__BackgroundChecker::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (sonnet__backgroundchecker_connectnotify_isbase) {
            sonnet__backgroundchecker_connectnotify_isbase = false;
            Sonnet__BackgroundChecker::connectNotify(signal);
        } else if (sonnet__backgroundchecker_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            sonnet__backgroundchecker_connectnotify_callback(this, cbval1);
        } else {
            Sonnet__BackgroundChecker::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (sonnet__backgroundchecker_disconnectnotify_isbase) {
            sonnet__backgroundchecker_disconnectnotify_isbase = false;
            Sonnet__BackgroundChecker::disconnectNotify(signal);
        } else if (sonnet__backgroundchecker_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            sonnet__backgroundchecker_disconnectnotify_callback(this, cbval1);
        } else {
            Sonnet__BackgroundChecker::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotEngineDone() {
        if (sonnet__backgroundchecker_slotenginedone_isbase) {
            sonnet__backgroundchecker_slotenginedone_isbase = false;
            Sonnet__BackgroundChecker::slotEngineDone();
        } else if (sonnet__backgroundchecker_slotenginedone_callback != nullptr) {
            sonnet__backgroundchecker_slotenginedone_callback();
        } else {
            Sonnet__BackgroundChecker::slotEngineDone();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (sonnet__backgroundchecker_sender_isbase) {
            sonnet__backgroundchecker_sender_isbase = false;
            return Sonnet__BackgroundChecker::sender();
        } else if (sonnet__backgroundchecker_sender_callback != nullptr) {
            QObject* callback_ret = sonnet__backgroundchecker_sender_callback();
            return callback_ret;
        } else {
            return Sonnet__BackgroundChecker::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (sonnet__backgroundchecker_sendersignalindex_isbase) {
            sonnet__backgroundchecker_sendersignalindex_isbase = false;
            return Sonnet__BackgroundChecker::senderSignalIndex();
        } else if (sonnet__backgroundchecker_sendersignalindex_callback != nullptr) {
            int callback_ret = sonnet__backgroundchecker_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__BackgroundChecker::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (sonnet__backgroundchecker_receivers_isbase) {
            sonnet__backgroundchecker_receivers_isbase = false;
            return Sonnet__BackgroundChecker::receivers(signal);
        } else if (sonnet__backgroundchecker_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = sonnet__backgroundchecker_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__BackgroundChecker::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (sonnet__backgroundchecker_issignalconnected_isbase) {
            sonnet__backgroundchecker_issignalconnected_isbase = false;
            return Sonnet__BackgroundChecker::isSignalConnected(signal);
        } else if (sonnet__backgroundchecker_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = sonnet__backgroundchecker_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__BackgroundChecker::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend libqt_string Sonnet__BackgroundChecker_FetchMoreText(Sonnet::BackgroundChecker* self);
    friend libqt_string Sonnet__BackgroundChecker_QBaseFetchMoreText(Sonnet::BackgroundChecker* self);
    friend void Sonnet__BackgroundChecker_FinishedCurrentFeed(Sonnet::BackgroundChecker* self);
    friend void Sonnet__BackgroundChecker_QBaseFinishedCurrentFeed(Sonnet::BackgroundChecker* self);
    friend void Sonnet__BackgroundChecker_TimerEvent(Sonnet::BackgroundChecker* self, QTimerEvent* event);
    friend void Sonnet__BackgroundChecker_QBaseTimerEvent(Sonnet::BackgroundChecker* self, QTimerEvent* event);
    friend void Sonnet__BackgroundChecker_ChildEvent(Sonnet::BackgroundChecker* self, QChildEvent* event);
    friend void Sonnet__BackgroundChecker_QBaseChildEvent(Sonnet::BackgroundChecker* self, QChildEvent* event);
    friend void Sonnet__BackgroundChecker_CustomEvent(Sonnet::BackgroundChecker* self, QEvent* event);
    friend void Sonnet__BackgroundChecker_QBaseCustomEvent(Sonnet::BackgroundChecker* self, QEvent* event);
    friend void Sonnet__BackgroundChecker_ConnectNotify(Sonnet::BackgroundChecker* self, const QMetaMethod* signal);
    friend void Sonnet__BackgroundChecker_QBaseConnectNotify(Sonnet::BackgroundChecker* self, const QMetaMethod* signal);
    friend void Sonnet__BackgroundChecker_DisconnectNotify(Sonnet::BackgroundChecker* self, const QMetaMethod* signal);
    friend void Sonnet__BackgroundChecker_QBaseDisconnectNotify(Sonnet::BackgroundChecker* self, const QMetaMethod* signal);
    friend void Sonnet__BackgroundChecker_SlotEngineDone(Sonnet::BackgroundChecker* self);
    friend void Sonnet__BackgroundChecker_QBaseSlotEngineDone(Sonnet::BackgroundChecker* self);
    friend QObject* Sonnet__BackgroundChecker_Sender(const Sonnet::BackgroundChecker* self);
    friend QObject* Sonnet__BackgroundChecker_QBaseSender(const Sonnet::BackgroundChecker* self);
    friend int Sonnet__BackgroundChecker_SenderSignalIndex(const Sonnet::BackgroundChecker* self);
    friend int Sonnet__BackgroundChecker_QBaseSenderSignalIndex(const Sonnet::BackgroundChecker* self);
    friend int Sonnet__BackgroundChecker_Receivers(const Sonnet::BackgroundChecker* self, const char* signal);
    friend int Sonnet__BackgroundChecker_QBaseReceivers(const Sonnet::BackgroundChecker* self, const char* signal);
    friend bool Sonnet__BackgroundChecker_IsSignalConnected(const Sonnet::BackgroundChecker* self, const QMetaMethod* signal);
    friend bool Sonnet__BackgroundChecker_QBaseIsSignalConnected(const Sonnet::BackgroundChecker* self, const QMetaMethod* signal);
};

#endif
