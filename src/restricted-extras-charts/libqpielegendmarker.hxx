#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQPIELEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQPIELEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPieLegendMarker so that we can call protected methods
class VirtualQPieLegendMarker final : public QPieLegendMarker {

  public:
    // Virtual class boolean flag
    bool isVirtualQPieLegendMarker = true;

    // Virtual class public types (including callbacks)
    using QPieLegendMarker_Metacall_Callback = int (*)(QPieLegendMarker*, int, int, void**);
    using QPieLegendMarker_Type_Callback = int (*)();
    using QPieLegendMarker_Series_Callback = QPieSeries* (*)();
    using QPieLegendMarker_Event_Callback = bool (*)(QPieLegendMarker*, QEvent*);
    using QPieLegendMarker_EventFilter_Callback = bool (*)(QPieLegendMarker*, QObject*, QEvent*);
    using QPieLegendMarker_TimerEvent_Callback = void (*)(QPieLegendMarker*, QTimerEvent*);
    using QPieLegendMarker_ChildEvent_Callback = void (*)(QPieLegendMarker*, QChildEvent*);
    using QPieLegendMarker_CustomEvent_Callback = void (*)(QPieLegendMarker*, QEvent*);
    using QPieLegendMarker_ConnectNotify_Callback = void (*)(QPieLegendMarker*, QMetaMethod*);
    using QPieLegendMarker_DisconnectNotify_Callback = void (*)(QPieLegendMarker*, QMetaMethod*);
    using QPieLegendMarker_Sender_Callback = QObject* (*)();
    using QPieLegendMarker_SenderSignalIndex_Callback = int (*)();
    using QPieLegendMarker_Receivers_Callback = int (*)(const QPieLegendMarker*, const char*);
    using QPieLegendMarker_IsSignalConnected_Callback = bool (*)(const QPieLegendMarker*, QMetaMethod*);

  protected:
    // Instance callback storage
    QPieLegendMarker_Metacall_Callback qpielegendmarker_metacall_callback = nullptr;
    QPieLegendMarker_Type_Callback qpielegendmarker_type_callback = nullptr;
    QPieLegendMarker_Series_Callback qpielegendmarker_series_callback = nullptr;
    QPieLegendMarker_Event_Callback qpielegendmarker_event_callback = nullptr;
    QPieLegendMarker_EventFilter_Callback qpielegendmarker_eventfilter_callback = nullptr;
    QPieLegendMarker_TimerEvent_Callback qpielegendmarker_timerevent_callback = nullptr;
    QPieLegendMarker_ChildEvent_Callback qpielegendmarker_childevent_callback = nullptr;
    QPieLegendMarker_CustomEvent_Callback qpielegendmarker_customevent_callback = nullptr;
    QPieLegendMarker_ConnectNotify_Callback qpielegendmarker_connectnotify_callback = nullptr;
    QPieLegendMarker_DisconnectNotify_Callback qpielegendmarker_disconnectnotify_callback = nullptr;
    QPieLegendMarker_Sender_Callback qpielegendmarker_sender_callback = nullptr;
    QPieLegendMarker_SenderSignalIndex_Callback qpielegendmarker_sendersignalindex_callback = nullptr;
    QPieLegendMarker_Receivers_Callback qpielegendmarker_receivers_callback = nullptr;
    QPieLegendMarker_IsSignalConnected_Callback qpielegendmarker_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpielegendmarker_metacall_isbase = false;
    mutable bool qpielegendmarker_type_isbase = false;
    mutable bool qpielegendmarker_series_isbase = false;
    mutable bool qpielegendmarker_event_isbase = false;
    mutable bool qpielegendmarker_eventfilter_isbase = false;
    mutable bool qpielegendmarker_timerevent_isbase = false;
    mutable bool qpielegendmarker_childevent_isbase = false;
    mutable bool qpielegendmarker_customevent_isbase = false;
    mutable bool qpielegendmarker_connectnotify_isbase = false;
    mutable bool qpielegendmarker_disconnectnotify_isbase = false;
    mutable bool qpielegendmarker_sender_isbase = false;
    mutable bool qpielegendmarker_sendersignalindex_isbase = false;
    mutable bool qpielegendmarker_receivers_isbase = false;
    mutable bool qpielegendmarker_issignalconnected_isbase = false;

  public:
    VirtualQPieLegendMarker(QPieSeries* series, QPieSlice* slice, QLegend* legend) : QPieLegendMarker(series, slice, legend){};
    VirtualQPieLegendMarker(QPieSeries* series, QPieSlice* slice, QLegend* legend, QObject* parent) : QPieLegendMarker(series, slice, legend, parent){};

    ~VirtualQPieLegendMarker() {
        qpielegendmarker_metacall_callback = nullptr;
        qpielegendmarker_type_callback = nullptr;
        qpielegendmarker_series_callback = nullptr;
        qpielegendmarker_event_callback = nullptr;
        qpielegendmarker_eventfilter_callback = nullptr;
        qpielegendmarker_timerevent_callback = nullptr;
        qpielegendmarker_childevent_callback = nullptr;
        qpielegendmarker_customevent_callback = nullptr;
        qpielegendmarker_connectnotify_callback = nullptr;
        qpielegendmarker_disconnectnotify_callback = nullptr;
        qpielegendmarker_sender_callback = nullptr;
        qpielegendmarker_sendersignalindex_callback = nullptr;
        qpielegendmarker_receivers_callback = nullptr;
        qpielegendmarker_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQPieLegendMarker_Metacall_Callback(QPieLegendMarker_Metacall_Callback cb) { qpielegendmarker_metacall_callback = cb; }
    inline void setQPieLegendMarker_Type_Callback(QPieLegendMarker_Type_Callback cb) { qpielegendmarker_type_callback = cb; }
    inline void setQPieLegendMarker_Series_Callback(QPieLegendMarker_Series_Callback cb) { qpielegendmarker_series_callback = cb; }
    inline void setQPieLegendMarker_Event_Callback(QPieLegendMarker_Event_Callback cb) { qpielegendmarker_event_callback = cb; }
    inline void setQPieLegendMarker_EventFilter_Callback(QPieLegendMarker_EventFilter_Callback cb) { qpielegendmarker_eventfilter_callback = cb; }
    inline void setQPieLegendMarker_TimerEvent_Callback(QPieLegendMarker_TimerEvent_Callback cb) { qpielegendmarker_timerevent_callback = cb; }
    inline void setQPieLegendMarker_ChildEvent_Callback(QPieLegendMarker_ChildEvent_Callback cb) { qpielegendmarker_childevent_callback = cb; }
    inline void setQPieLegendMarker_CustomEvent_Callback(QPieLegendMarker_CustomEvent_Callback cb) { qpielegendmarker_customevent_callback = cb; }
    inline void setQPieLegendMarker_ConnectNotify_Callback(QPieLegendMarker_ConnectNotify_Callback cb) { qpielegendmarker_connectnotify_callback = cb; }
    inline void setQPieLegendMarker_DisconnectNotify_Callback(QPieLegendMarker_DisconnectNotify_Callback cb) { qpielegendmarker_disconnectnotify_callback = cb; }
    inline void setQPieLegendMarker_Sender_Callback(QPieLegendMarker_Sender_Callback cb) { qpielegendmarker_sender_callback = cb; }
    inline void setQPieLegendMarker_SenderSignalIndex_Callback(QPieLegendMarker_SenderSignalIndex_Callback cb) { qpielegendmarker_sendersignalindex_callback = cb; }
    inline void setQPieLegendMarker_Receivers_Callback(QPieLegendMarker_Receivers_Callback cb) { qpielegendmarker_receivers_callback = cb; }
    inline void setQPieLegendMarker_IsSignalConnected_Callback(QPieLegendMarker_IsSignalConnected_Callback cb) { qpielegendmarker_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQPieLegendMarker_Metacall_IsBase(bool value) const { qpielegendmarker_metacall_isbase = value; }
    inline void setQPieLegendMarker_Type_IsBase(bool value) const { qpielegendmarker_type_isbase = value; }
    inline void setQPieLegendMarker_Series_IsBase(bool value) const { qpielegendmarker_series_isbase = value; }
    inline void setQPieLegendMarker_Event_IsBase(bool value) const { qpielegendmarker_event_isbase = value; }
    inline void setQPieLegendMarker_EventFilter_IsBase(bool value) const { qpielegendmarker_eventfilter_isbase = value; }
    inline void setQPieLegendMarker_TimerEvent_IsBase(bool value) const { qpielegendmarker_timerevent_isbase = value; }
    inline void setQPieLegendMarker_ChildEvent_IsBase(bool value) const { qpielegendmarker_childevent_isbase = value; }
    inline void setQPieLegendMarker_CustomEvent_IsBase(bool value) const { qpielegendmarker_customevent_isbase = value; }
    inline void setQPieLegendMarker_ConnectNotify_IsBase(bool value) const { qpielegendmarker_connectnotify_isbase = value; }
    inline void setQPieLegendMarker_DisconnectNotify_IsBase(bool value) const { qpielegendmarker_disconnectnotify_isbase = value; }
    inline void setQPieLegendMarker_Sender_IsBase(bool value) const { qpielegendmarker_sender_isbase = value; }
    inline void setQPieLegendMarker_SenderSignalIndex_IsBase(bool value) const { qpielegendmarker_sendersignalindex_isbase = value; }
    inline void setQPieLegendMarker_Receivers_IsBase(bool value) const { qpielegendmarker_receivers_isbase = value; }
    inline void setQPieLegendMarker_IsSignalConnected_IsBase(bool value) const { qpielegendmarker_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpielegendmarker_metacall_isbase) {
            qpielegendmarker_metacall_isbase = false;
            return QPieLegendMarker::qt_metacall(param1, param2, param3);
        } else if (qpielegendmarker_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qpielegendmarker_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPieLegendMarker::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLegendMarker::LegendMarkerType type() override {
        if (qpielegendmarker_type_isbase) {
            qpielegendmarker_type_isbase = false;
            return QPieLegendMarker::type();
        } else if (qpielegendmarker_type_callback != nullptr) {
            int callback_ret = qpielegendmarker_type_callback();
            return static_cast<QLegendMarker::LegendMarkerType>(callback_ret);
        } else {
            return QPieLegendMarker::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPieSeries* series() override {
        if (qpielegendmarker_series_isbase) {
            qpielegendmarker_series_isbase = false;
            return QPieLegendMarker::series();
        } else if (qpielegendmarker_series_callback != nullptr) {
            QPieSeries* callback_ret = qpielegendmarker_series_callback();
            return callback_ret;
        } else {
            return QPieLegendMarker::series();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpielegendmarker_event_isbase) {
            qpielegendmarker_event_isbase = false;
            return QPieLegendMarker::event(event);
        } else if (qpielegendmarker_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qpielegendmarker_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPieLegendMarker::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpielegendmarker_eventfilter_isbase) {
            qpielegendmarker_eventfilter_isbase = false;
            return QPieLegendMarker::eventFilter(watched, event);
        } else if (qpielegendmarker_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qpielegendmarker_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPieLegendMarker::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpielegendmarker_timerevent_isbase) {
            qpielegendmarker_timerevent_isbase = false;
            QPieLegendMarker::timerEvent(event);
        } else if (qpielegendmarker_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qpielegendmarker_timerevent_callback(this, cbval1);
        } else {
            QPieLegendMarker::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpielegendmarker_childevent_isbase) {
            qpielegendmarker_childevent_isbase = false;
            QPieLegendMarker::childEvent(event);
        } else if (qpielegendmarker_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qpielegendmarker_childevent_callback(this, cbval1);
        } else {
            QPieLegendMarker::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpielegendmarker_customevent_isbase) {
            qpielegendmarker_customevent_isbase = false;
            QPieLegendMarker::customEvent(event);
        } else if (qpielegendmarker_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qpielegendmarker_customevent_callback(this, cbval1);
        } else {
            QPieLegendMarker::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpielegendmarker_connectnotify_isbase) {
            qpielegendmarker_connectnotify_isbase = false;
            QPieLegendMarker::connectNotify(signal);
        } else if (qpielegendmarker_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpielegendmarker_connectnotify_callback(this, cbval1);
        } else {
            QPieLegendMarker::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpielegendmarker_disconnectnotify_isbase) {
            qpielegendmarker_disconnectnotify_isbase = false;
            QPieLegendMarker::disconnectNotify(signal);
        } else if (qpielegendmarker_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpielegendmarker_disconnectnotify_callback(this, cbval1);
        } else {
            QPieLegendMarker::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpielegendmarker_sender_isbase) {
            qpielegendmarker_sender_isbase = false;
            return QPieLegendMarker::sender();
        } else if (qpielegendmarker_sender_callback != nullptr) {
            QObject* callback_ret = qpielegendmarker_sender_callback();
            return callback_ret;
        } else {
            return QPieLegendMarker::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpielegendmarker_sendersignalindex_isbase) {
            qpielegendmarker_sendersignalindex_isbase = false;
            return QPieLegendMarker::senderSignalIndex();
        } else if (qpielegendmarker_sendersignalindex_callback != nullptr) {
            int callback_ret = qpielegendmarker_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPieLegendMarker::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpielegendmarker_receivers_isbase) {
            qpielegendmarker_receivers_isbase = false;
            return QPieLegendMarker::receivers(signal);
        } else if (qpielegendmarker_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qpielegendmarker_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPieLegendMarker::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpielegendmarker_issignalconnected_isbase) {
            qpielegendmarker_issignalconnected_isbase = false;
            return QPieLegendMarker::isSignalConnected(signal);
        } else if (qpielegendmarker_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qpielegendmarker_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPieLegendMarker::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QPieLegendMarker_TimerEvent(QPieLegendMarker* self, QTimerEvent* event);
    friend void QPieLegendMarker_QBaseTimerEvent(QPieLegendMarker* self, QTimerEvent* event);
    friend void QPieLegendMarker_ChildEvent(QPieLegendMarker* self, QChildEvent* event);
    friend void QPieLegendMarker_QBaseChildEvent(QPieLegendMarker* self, QChildEvent* event);
    friend void QPieLegendMarker_CustomEvent(QPieLegendMarker* self, QEvent* event);
    friend void QPieLegendMarker_QBaseCustomEvent(QPieLegendMarker* self, QEvent* event);
    friend void QPieLegendMarker_ConnectNotify(QPieLegendMarker* self, const QMetaMethod* signal);
    friend void QPieLegendMarker_QBaseConnectNotify(QPieLegendMarker* self, const QMetaMethod* signal);
    friend void QPieLegendMarker_DisconnectNotify(QPieLegendMarker* self, const QMetaMethod* signal);
    friend void QPieLegendMarker_QBaseDisconnectNotify(QPieLegendMarker* self, const QMetaMethod* signal);
    friend QObject* QPieLegendMarker_Sender(const QPieLegendMarker* self);
    friend QObject* QPieLegendMarker_QBaseSender(const QPieLegendMarker* self);
    friend int QPieLegendMarker_SenderSignalIndex(const QPieLegendMarker* self);
    friend int QPieLegendMarker_QBaseSenderSignalIndex(const QPieLegendMarker* self);
    friend int QPieLegendMarker_Receivers(const QPieLegendMarker* self, const char* signal);
    friend int QPieLegendMarker_QBaseReceivers(const QPieLegendMarker* self, const char* signal);
    friend bool QPieLegendMarker_IsSignalConnected(const QPieLegendMarker* self, const QMetaMethod* signal);
    friend bool QPieLegendMarker_QBaseIsSignalConnected(const QPieLegendMarker* self, const QMetaMethod* signal);
};

#endif
