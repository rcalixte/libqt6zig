#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQXYLEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQXYLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QXYLegendMarker so that we can call protected methods
class VirtualQXYLegendMarker final : public QXYLegendMarker {

  public:
    // Virtual class boolean flag
    bool isVirtualQXYLegendMarker = true;

    // Virtual class public types (including callbacks)
    using QXYLegendMarker_Metacall_Callback = int (*)(QXYLegendMarker*, int, int, void**);
    using QXYLegendMarker_Type_Callback = int (*)();
    using QXYLegendMarker_Series_Callback = QXYSeries* (*)();
    using QXYLegendMarker_Event_Callback = bool (*)(QXYLegendMarker*, QEvent*);
    using QXYLegendMarker_EventFilter_Callback = bool (*)(QXYLegendMarker*, QObject*, QEvent*);
    using QXYLegendMarker_TimerEvent_Callback = void (*)(QXYLegendMarker*, QTimerEvent*);
    using QXYLegendMarker_ChildEvent_Callback = void (*)(QXYLegendMarker*, QChildEvent*);
    using QXYLegendMarker_CustomEvent_Callback = void (*)(QXYLegendMarker*, QEvent*);
    using QXYLegendMarker_ConnectNotify_Callback = void (*)(QXYLegendMarker*, QMetaMethod*);
    using QXYLegendMarker_DisconnectNotify_Callback = void (*)(QXYLegendMarker*, QMetaMethod*);
    using QXYLegendMarker_Sender_Callback = QObject* (*)();
    using QXYLegendMarker_SenderSignalIndex_Callback = int (*)();
    using QXYLegendMarker_Receivers_Callback = int (*)(const QXYLegendMarker*, const char*);
    using QXYLegendMarker_IsSignalConnected_Callback = bool (*)(const QXYLegendMarker*, QMetaMethod*);

  protected:
    // Instance callback storage
    QXYLegendMarker_Metacall_Callback qxylegendmarker_metacall_callback = nullptr;
    QXYLegendMarker_Type_Callback qxylegendmarker_type_callback = nullptr;
    QXYLegendMarker_Series_Callback qxylegendmarker_series_callback = nullptr;
    QXYLegendMarker_Event_Callback qxylegendmarker_event_callback = nullptr;
    QXYLegendMarker_EventFilter_Callback qxylegendmarker_eventfilter_callback = nullptr;
    QXYLegendMarker_TimerEvent_Callback qxylegendmarker_timerevent_callback = nullptr;
    QXYLegendMarker_ChildEvent_Callback qxylegendmarker_childevent_callback = nullptr;
    QXYLegendMarker_CustomEvent_Callback qxylegendmarker_customevent_callback = nullptr;
    QXYLegendMarker_ConnectNotify_Callback qxylegendmarker_connectnotify_callback = nullptr;
    QXYLegendMarker_DisconnectNotify_Callback qxylegendmarker_disconnectnotify_callback = nullptr;
    QXYLegendMarker_Sender_Callback qxylegendmarker_sender_callback = nullptr;
    QXYLegendMarker_SenderSignalIndex_Callback qxylegendmarker_sendersignalindex_callback = nullptr;
    QXYLegendMarker_Receivers_Callback qxylegendmarker_receivers_callback = nullptr;
    QXYLegendMarker_IsSignalConnected_Callback qxylegendmarker_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qxylegendmarker_metacall_isbase = false;
    mutable bool qxylegendmarker_type_isbase = false;
    mutable bool qxylegendmarker_series_isbase = false;
    mutable bool qxylegendmarker_event_isbase = false;
    mutable bool qxylegendmarker_eventfilter_isbase = false;
    mutable bool qxylegendmarker_timerevent_isbase = false;
    mutable bool qxylegendmarker_childevent_isbase = false;
    mutable bool qxylegendmarker_customevent_isbase = false;
    mutable bool qxylegendmarker_connectnotify_isbase = false;
    mutable bool qxylegendmarker_disconnectnotify_isbase = false;
    mutable bool qxylegendmarker_sender_isbase = false;
    mutable bool qxylegendmarker_sendersignalindex_isbase = false;
    mutable bool qxylegendmarker_receivers_isbase = false;
    mutable bool qxylegendmarker_issignalconnected_isbase = false;

  public:
    VirtualQXYLegendMarker(QXYSeries* series, QLegend* legend) : QXYLegendMarker(series, legend) {};
    VirtualQXYLegendMarker(QXYSeries* series, QLegend* legend, QObject* parent) : QXYLegendMarker(series, legend, parent) {};

    ~VirtualQXYLegendMarker() {
        qxylegendmarker_metacall_callback = nullptr;
        qxylegendmarker_type_callback = nullptr;
        qxylegendmarker_series_callback = nullptr;
        qxylegendmarker_event_callback = nullptr;
        qxylegendmarker_eventfilter_callback = nullptr;
        qxylegendmarker_timerevent_callback = nullptr;
        qxylegendmarker_childevent_callback = nullptr;
        qxylegendmarker_customevent_callback = nullptr;
        qxylegendmarker_connectnotify_callback = nullptr;
        qxylegendmarker_disconnectnotify_callback = nullptr;
        qxylegendmarker_sender_callback = nullptr;
        qxylegendmarker_sendersignalindex_callback = nullptr;
        qxylegendmarker_receivers_callback = nullptr;
        qxylegendmarker_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQXYLegendMarker_Metacall_Callback(QXYLegendMarker_Metacall_Callback cb) { qxylegendmarker_metacall_callback = cb; }
    inline void setQXYLegendMarker_Type_Callback(QXYLegendMarker_Type_Callback cb) { qxylegendmarker_type_callback = cb; }
    inline void setQXYLegendMarker_Series_Callback(QXYLegendMarker_Series_Callback cb) { qxylegendmarker_series_callback = cb; }
    inline void setQXYLegendMarker_Event_Callback(QXYLegendMarker_Event_Callback cb) { qxylegendmarker_event_callback = cb; }
    inline void setQXYLegendMarker_EventFilter_Callback(QXYLegendMarker_EventFilter_Callback cb) { qxylegendmarker_eventfilter_callback = cb; }
    inline void setQXYLegendMarker_TimerEvent_Callback(QXYLegendMarker_TimerEvent_Callback cb) { qxylegendmarker_timerevent_callback = cb; }
    inline void setQXYLegendMarker_ChildEvent_Callback(QXYLegendMarker_ChildEvent_Callback cb) { qxylegendmarker_childevent_callback = cb; }
    inline void setQXYLegendMarker_CustomEvent_Callback(QXYLegendMarker_CustomEvent_Callback cb) { qxylegendmarker_customevent_callback = cb; }
    inline void setQXYLegendMarker_ConnectNotify_Callback(QXYLegendMarker_ConnectNotify_Callback cb) { qxylegendmarker_connectnotify_callback = cb; }
    inline void setQXYLegendMarker_DisconnectNotify_Callback(QXYLegendMarker_DisconnectNotify_Callback cb) { qxylegendmarker_disconnectnotify_callback = cb; }
    inline void setQXYLegendMarker_Sender_Callback(QXYLegendMarker_Sender_Callback cb) { qxylegendmarker_sender_callback = cb; }
    inline void setQXYLegendMarker_SenderSignalIndex_Callback(QXYLegendMarker_SenderSignalIndex_Callback cb) { qxylegendmarker_sendersignalindex_callback = cb; }
    inline void setQXYLegendMarker_Receivers_Callback(QXYLegendMarker_Receivers_Callback cb) { qxylegendmarker_receivers_callback = cb; }
    inline void setQXYLegendMarker_IsSignalConnected_Callback(QXYLegendMarker_IsSignalConnected_Callback cb) { qxylegendmarker_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQXYLegendMarker_Metacall_IsBase(bool value) const { qxylegendmarker_metacall_isbase = value; }
    inline void setQXYLegendMarker_Type_IsBase(bool value) const { qxylegendmarker_type_isbase = value; }
    inline void setQXYLegendMarker_Series_IsBase(bool value) const { qxylegendmarker_series_isbase = value; }
    inline void setQXYLegendMarker_Event_IsBase(bool value) const { qxylegendmarker_event_isbase = value; }
    inline void setQXYLegendMarker_EventFilter_IsBase(bool value) const { qxylegendmarker_eventfilter_isbase = value; }
    inline void setQXYLegendMarker_TimerEvent_IsBase(bool value) const { qxylegendmarker_timerevent_isbase = value; }
    inline void setQXYLegendMarker_ChildEvent_IsBase(bool value) const { qxylegendmarker_childevent_isbase = value; }
    inline void setQXYLegendMarker_CustomEvent_IsBase(bool value) const { qxylegendmarker_customevent_isbase = value; }
    inline void setQXYLegendMarker_ConnectNotify_IsBase(bool value) const { qxylegendmarker_connectnotify_isbase = value; }
    inline void setQXYLegendMarker_DisconnectNotify_IsBase(bool value) const { qxylegendmarker_disconnectnotify_isbase = value; }
    inline void setQXYLegendMarker_Sender_IsBase(bool value) const { qxylegendmarker_sender_isbase = value; }
    inline void setQXYLegendMarker_SenderSignalIndex_IsBase(bool value) const { qxylegendmarker_sendersignalindex_isbase = value; }
    inline void setQXYLegendMarker_Receivers_IsBase(bool value) const { qxylegendmarker_receivers_isbase = value; }
    inline void setQXYLegendMarker_IsSignalConnected_IsBase(bool value) const { qxylegendmarker_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qxylegendmarker_metacall_isbase) {
            qxylegendmarker_metacall_isbase = false;
            return QXYLegendMarker::qt_metacall(param1, param2, param3);
        } else if (qxylegendmarker_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qxylegendmarker_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QXYLegendMarker::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLegendMarker::LegendMarkerType type() override {
        if (qxylegendmarker_type_isbase) {
            qxylegendmarker_type_isbase = false;
            return QXYLegendMarker::type();
        } else if (qxylegendmarker_type_callback != nullptr) {
            int callback_ret = qxylegendmarker_type_callback();
            return static_cast<QLegendMarker::LegendMarkerType>(callback_ret);
        } else {
            return QXYLegendMarker::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QXYSeries* series() override {
        if (qxylegendmarker_series_isbase) {
            qxylegendmarker_series_isbase = false;
            return QXYLegendMarker::series();
        } else if (qxylegendmarker_series_callback != nullptr) {
            QXYSeries* callback_ret = qxylegendmarker_series_callback();
            return callback_ret;
        } else {
            return QXYLegendMarker::series();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qxylegendmarker_event_isbase) {
            qxylegendmarker_event_isbase = false;
            return QXYLegendMarker::event(event);
        } else if (qxylegendmarker_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qxylegendmarker_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QXYLegendMarker::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qxylegendmarker_eventfilter_isbase) {
            qxylegendmarker_eventfilter_isbase = false;
            return QXYLegendMarker::eventFilter(watched, event);
        } else if (qxylegendmarker_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qxylegendmarker_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QXYLegendMarker::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qxylegendmarker_timerevent_isbase) {
            qxylegendmarker_timerevent_isbase = false;
            QXYLegendMarker::timerEvent(event);
        } else if (qxylegendmarker_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qxylegendmarker_timerevent_callback(this, cbval1);
        } else {
            QXYLegendMarker::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qxylegendmarker_childevent_isbase) {
            qxylegendmarker_childevent_isbase = false;
            QXYLegendMarker::childEvent(event);
        } else if (qxylegendmarker_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qxylegendmarker_childevent_callback(this, cbval1);
        } else {
            QXYLegendMarker::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qxylegendmarker_customevent_isbase) {
            qxylegendmarker_customevent_isbase = false;
            QXYLegendMarker::customEvent(event);
        } else if (qxylegendmarker_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qxylegendmarker_customevent_callback(this, cbval1);
        } else {
            QXYLegendMarker::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qxylegendmarker_connectnotify_isbase) {
            qxylegendmarker_connectnotify_isbase = false;
            QXYLegendMarker::connectNotify(signal);
        } else if (qxylegendmarker_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qxylegendmarker_connectnotify_callback(this, cbval1);
        } else {
            QXYLegendMarker::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qxylegendmarker_disconnectnotify_isbase) {
            qxylegendmarker_disconnectnotify_isbase = false;
            QXYLegendMarker::disconnectNotify(signal);
        } else if (qxylegendmarker_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qxylegendmarker_disconnectnotify_callback(this, cbval1);
        } else {
            QXYLegendMarker::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qxylegendmarker_sender_isbase) {
            qxylegendmarker_sender_isbase = false;
            return QXYLegendMarker::sender();
        } else if (qxylegendmarker_sender_callback != nullptr) {
            QObject* callback_ret = qxylegendmarker_sender_callback();
            return callback_ret;
        } else {
            return QXYLegendMarker::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qxylegendmarker_sendersignalindex_isbase) {
            qxylegendmarker_sendersignalindex_isbase = false;
            return QXYLegendMarker::senderSignalIndex();
        } else if (qxylegendmarker_sendersignalindex_callback != nullptr) {
            int callback_ret = qxylegendmarker_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QXYLegendMarker::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qxylegendmarker_receivers_isbase) {
            qxylegendmarker_receivers_isbase = false;
            return QXYLegendMarker::receivers(signal);
        } else if (qxylegendmarker_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qxylegendmarker_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QXYLegendMarker::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qxylegendmarker_issignalconnected_isbase) {
            qxylegendmarker_issignalconnected_isbase = false;
            return QXYLegendMarker::isSignalConnected(signal);
        } else if (qxylegendmarker_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qxylegendmarker_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QXYLegendMarker::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QXYLegendMarker_TimerEvent(QXYLegendMarker* self, QTimerEvent* event);
    friend void QXYLegendMarker_QBaseTimerEvent(QXYLegendMarker* self, QTimerEvent* event);
    friend void QXYLegendMarker_ChildEvent(QXYLegendMarker* self, QChildEvent* event);
    friend void QXYLegendMarker_QBaseChildEvent(QXYLegendMarker* self, QChildEvent* event);
    friend void QXYLegendMarker_CustomEvent(QXYLegendMarker* self, QEvent* event);
    friend void QXYLegendMarker_QBaseCustomEvent(QXYLegendMarker* self, QEvent* event);
    friend void QXYLegendMarker_ConnectNotify(QXYLegendMarker* self, const QMetaMethod* signal);
    friend void QXYLegendMarker_QBaseConnectNotify(QXYLegendMarker* self, const QMetaMethod* signal);
    friend void QXYLegendMarker_DisconnectNotify(QXYLegendMarker* self, const QMetaMethod* signal);
    friend void QXYLegendMarker_QBaseDisconnectNotify(QXYLegendMarker* self, const QMetaMethod* signal);
    friend QObject* QXYLegendMarker_Sender(const QXYLegendMarker* self);
    friend QObject* QXYLegendMarker_QBaseSender(const QXYLegendMarker* self);
    friend int QXYLegendMarker_SenderSignalIndex(const QXYLegendMarker* self);
    friend int QXYLegendMarker_QBaseSenderSignalIndex(const QXYLegendMarker* self);
    friend int QXYLegendMarker_Receivers(const QXYLegendMarker* self, const char* signal);
    friend int QXYLegendMarker_QBaseReceivers(const QXYLegendMarker* self, const char* signal);
    friend bool QXYLegendMarker_IsSignalConnected(const QXYLegendMarker* self, const QMetaMethod* signal);
    friend bool QXYLegendMarker_QBaseIsSignalConnected(const QXYLegendMarker* self, const QMetaMethod* signal);
};

#endif
