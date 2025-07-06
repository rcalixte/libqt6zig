#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQCANDLESTICKLEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQCANDLESTICKLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QCandlestickLegendMarker so that we can call protected methods
class VirtualQCandlestickLegendMarker final : public QCandlestickLegendMarker {

  public:
    // Virtual class boolean flag
    bool isVirtualQCandlestickLegendMarker = true;

    // Virtual class public types (including callbacks)
    using QCandlestickLegendMarker_Metacall_Callback = int (*)(QCandlestickLegendMarker*, int, int, void**);
    using QCandlestickLegendMarker_Type_Callback = int (*)();
    using QCandlestickLegendMarker_Series_Callback = QCandlestickSeries* (*)();
    using QCandlestickLegendMarker_Event_Callback = bool (*)(QCandlestickLegendMarker*, QEvent*);
    using QCandlestickLegendMarker_EventFilter_Callback = bool (*)(QCandlestickLegendMarker*, QObject*, QEvent*);
    using QCandlestickLegendMarker_TimerEvent_Callback = void (*)(QCandlestickLegendMarker*, QTimerEvent*);
    using QCandlestickLegendMarker_ChildEvent_Callback = void (*)(QCandlestickLegendMarker*, QChildEvent*);
    using QCandlestickLegendMarker_CustomEvent_Callback = void (*)(QCandlestickLegendMarker*, QEvent*);
    using QCandlestickLegendMarker_ConnectNotify_Callback = void (*)(QCandlestickLegendMarker*, QMetaMethod*);
    using QCandlestickLegendMarker_DisconnectNotify_Callback = void (*)(QCandlestickLegendMarker*, QMetaMethod*);
    using QCandlestickLegendMarker_Sender_Callback = QObject* (*)();
    using QCandlestickLegendMarker_SenderSignalIndex_Callback = int (*)();
    using QCandlestickLegendMarker_Receivers_Callback = int (*)(const QCandlestickLegendMarker*, const char*);
    using QCandlestickLegendMarker_IsSignalConnected_Callback = bool (*)(const QCandlestickLegendMarker*, QMetaMethod*);

  protected:
    // Instance callback storage
    QCandlestickLegendMarker_Metacall_Callback qcandlesticklegendmarker_metacall_callback = nullptr;
    QCandlestickLegendMarker_Type_Callback qcandlesticklegendmarker_type_callback = nullptr;
    QCandlestickLegendMarker_Series_Callback qcandlesticklegendmarker_series_callback = nullptr;
    QCandlestickLegendMarker_Event_Callback qcandlesticklegendmarker_event_callback = nullptr;
    QCandlestickLegendMarker_EventFilter_Callback qcandlesticklegendmarker_eventfilter_callback = nullptr;
    QCandlestickLegendMarker_TimerEvent_Callback qcandlesticklegendmarker_timerevent_callback = nullptr;
    QCandlestickLegendMarker_ChildEvent_Callback qcandlesticklegendmarker_childevent_callback = nullptr;
    QCandlestickLegendMarker_CustomEvent_Callback qcandlesticklegendmarker_customevent_callback = nullptr;
    QCandlestickLegendMarker_ConnectNotify_Callback qcandlesticklegendmarker_connectnotify_callback = nullptr;
    QCandlestickLegendMarker_DisconnectNotify_Callback qcandlesticklegendmarker_disconnectnotify_callback = nullptr;
    QCandlestickLegendMarker_Sender_Callback qcandlesticklegendmarker_sender_callback = nullptr;
    QCandlestickLegendMarker_SenderSignalIndex_Callback qcandlesticklegendmarker_sendersignalindex_callback = nullptr;
    QCandlestickLegendMarker_Receivers_Callback qcandlesticklegendmarker_receivers_callback = nullptr;
    QCandlestickLegendMarker_IsSignalConnected_Callback qcandlesticklegendmarker_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qcandlesticklegendmarker_metacall_isbase = false;
    mutable bool qcandlesticklegendmarker_type_isbase = false;
    mutable bool qcandlesticklegendmarker_series_isbase = false;
    mutable bool qcandlesticklegendmarker_event_isbase = false;
    mutable bool qcandlesticklegendmarker_eventfilter_isbase = false;
    mutable bool qcandlesticklegendmarker_timerevent_isbase = false;
    mutable bool qcandlesticklegendmarker_childevent_isbase = false;
    mutable bool qcandlesticklegendmarker_customevent_isbase = false;
    mutable bool qcandlesticklegendmarker_connectnotify_isbase = false;
    mutable bool qcandlesticklegendmarker_disconnectnotify_isbase = false;
    mutable bool qcandlesticklegendmarker_sender_isbase = false;
    mutable bool qcandlesticklegendmarker_sendersignalindex_isbase = false;
    mutable bool qcandlesticklegendmarker_receivers_isbase = false;
    mutable bool qcandlesticklegendmarker_issignalconnected_isbase = false;

  public:
    VirtualQCandlestickLegendMarker(QCandlestickSeries* series, QLegend* legend) : QCandlestickLegendMarker(series, legend) {};
    VirtualQCandlestickLegendMarker(QCandlestickSeries* series, QLegend* legend, QObject* parent) : QCandlestickLegendMarker(series, legend, parent) {};

    ~VirtualQCandlestickLegendMarker() {
        qcandlesticklegendmarker_metacall_callback = nullptr;
        qcandlesticklegendmarker_type_callback = nullptr;
        qcandlesticklegendmarker_series_callback = nullptr;
        qcandlesticklegendmarker_event_callback = nullptr;
        qcandlesticklegendmarker_eventfilter_callback = nullptr;
        qcandlesticklegendmarker_timerevent_callback = nullptr;
        qcandlesticklegendmarker_childevent_callback = nullptr;
        qcandlesticklegendmarker_customevent_callback = nullptr;
        qcandlesticklegendmarker_connectnotify_callback = nullptr;
        qcandlesticklegendmarker_disconnectnotify_callback = nullptr;
        qcandlesticklegendmarker_sender_callback = nullptr;
        qcandlesticklegendmarker_sendersignalindex_callback = nullptr;
        qcandlesticklegendmarker_receivers_callback = nullptr;
        qcandlesticklegendmarker_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQCandlestickLegendMarker_Metacall_Callback(QCandlestickLegendMarker_Metacall_Callback cb) { qcandlesticklegendmarker_metacall_callback = cb; }
    inline void setQCandlestickLegendMarker_Type_Callback(QCandlestickLegendMarker_Type_Callback cb) { qcandlesticklegendmarker_type_callback = cb; }
    inline void setQCandlestickLegendMarker_Series_Callback(QCandlestickLegendMarker_Series_Callback cb) { qcandlesticklegendmarker_series_callback = cb; }
    inline void setQCandlestickLegendMarker_Event_Callback(QCandlestickLegendMarker_Event_Callback cb) { qcandlesticklegendmarker_event_callback = cb; }
    inline void setQCandlestickLegendMarker_EventFilter_Callback(QCandlestickLegendMarker_EventFilter_Callback cb) { qcandlesticklegendmarker_eventfilter_callback = cb; }
    inline void setQCandlestickLegendMarker_TimerEvent_Callback(QCandlestickLegendMarker_TimerEvent_Callback cb) { qcandlesticklegendmarker_timerevent_callback = cb; }
    inline void setQCandlestickLegendMarker_ChildEvent_Callback(QCandlestickLegendMarker_ChildEvent_Callback cb) { qcandlesticklegendmarker_childevent_callback = cb; }
    inline void setQCandlestickLegendMarker_CustomEvent_Callback(QCandlestickLegendMarker_CustomEvent_Callback cb) { qcandlesticklegendmarker_customevent_callback = cb; }
    inline void setQCandlestickLegendMarker_ConnectNotify_Callback(QCandlestickLegendMarker_ConnectNotify_Callback cb) { qcandlesticklegendmarker_connectnotify_callback = cb; }
    inline void setQCandlestickLegendMarker_DisconnectNotify_Callback(QCandlestickLegendMarker_DisconnectNotify_Callback cb) { qcandlesticklegendmarker_disconnectnotify_callback = cb; }
    inline void setQCandlestickLegendMarker_Sender_Callback(QCandlestickLegendMarker_Sender_Callback cb) { qcandlesticklegendmarker_sender_callback = cb; }
    inline void setQCandlestickLegendMarker_SenderSignalIndex_Callback(QCandlestickLegendMarker_SenderSignalIndex_Callback cb) { qcandlesticklegendmarker_sendersignalindex_callback = cb; }
    inline void setQCandlestickLegendMarker_Receivers_Callback(QCandlestickLegendMarker_Receivers_Callback cb) { qcandlesticklegendmarker_receivers_callback = cb; }
    inline void setQCandlestickLegendMarker_IsSignalConnected_Callback(QCandlestickLegendMarker_IsSignalConnected_Callback cb) { qcandlesticklegendmarker_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQCandlestickLegendMarker_Metacall_IsBase(bool value) const { qcandlesticklegendmarker_metacall_isbase = value; }
    inline void setQCandlestickLegendMarker_Type_IsBase(bool value) const { qcandlesticklegendmarker_type_isbase = value; }
    inline void setQCandlestickLegendMarker_Series_IsBase(bool value) const { qcandlesticklegendmarker_series_isbase = value; }
    inline void setQCandlestickLegendMarker_Event_IsBase(bool value) const { qcandlesticklegendmarker_event_isbase = value; }
    inline void setQCandlestickLegendMarker_EventFilter_IsBase(bool value) const { qcandlesticklegendmarker_eventfilter_isbase = value; }
    inline void setQCandlestickLegendMarker_TimerEvent_IsBase(bool value) const { qcandlesticklegendmarker_timerevent_isbase = value; }
    inline void setQCandlestickLegendMarker_ChildEvent_IsBase(bool value) const { qcandlesticklegendmarker_childevent_isbase = value; }
    inline void setQCandlestickLegendMarker_CustomEvent_IsBase(bool value) const { qcandlesticklegendmarker_customevent_isbase = value; }
    inline void setQCandlestickLegendMarker_ConnectNotify_IsBase(bool value) const { qcandlesticklegendmarker_connectnotify_isbase = value; }
    inline void setQCandlestickLegendMarker_DisconnectNotify_IsBase(bool value) const { qcandlesticklegendmarker_disconnectnotify_isbase = value; }
    inline void setQCandlestickLegendMarker_Sender_IsBase(bool value) const { qcandlesticklegendmarker_sender_isbase = value; }
    inline void setQCandlestickLegendMarker_SenderSignalIndex_IsBase(bool value) const { qcandlesticklegendmarker_sendersignalindex_isbase = value; }
    inline void setQCandlestickLegendMarker_Receivers_IsBase(bool value) const { qcandlesticklegendmarker_receivers_isbase = value; }
    inline void setQCandlestickLegendMarker_IsSignalConnected_IsBase(bool value) const { qcandlesticklegendmarker_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcandlesticklegendmarker_metacall_isbase) {
            qcandlesticklegendmarker_metacall_isbase = false;
            return QCandlestickLegendMarker::qt_metacall(param1, param2, param3);
        } else if (qcandlesticklegendmarker_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qcandlesticklegendmarker_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QCandlestickLegendMarker::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLegendMarker::LegendMarkerType type() override {
        if (qcandlesticklegendmarker_type_isbase) {
            qcandlesticklegendmarker_type_isbase = false;
            return QCandlestickLegendMarker::type();
        } else if (qcandlesticklegendmarker_type_callback != nullptr) {
            int callback_ret = qcandlesticklegendmarker_type_callback();
            return static_cast<QLegendMarker::LegendMarkerType>(callback_ret);
        } else {
            return QCandlestickLegendMarker::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QCandlestickSeries* series() override {
        if (qcandlesticklegendmarker_series_isbase) {
            qcandlesticklegendmarker_series_isbase = false;
            return QCandlestickLegendMarker::series();
        } else if (qcandlesticklegendmarker_series_callback != nullptr) {
            QCandlestickSeries* callback_ret = qcandlesticklegendmarker_series_callback();
            return callback_ret;
        } else {
            return QCandlestickLegendMarker::series();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcandlesticklegendmarker_event_isbase) {
            qcandlesticklegendmarker_event_isbase = false;
            return QCandlestickLegendMarker::event(event);
        } else if (qcandlesticklegendmarker_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qcandlesticklegendmarker_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCandlestickLegendMarker::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcandlesticklegendmarker_eventfilter_isbase) {
            qcandlesticklegendmarker_eventfilter_isbase = false;
            return QCandlestickLegendMarker::eventFilter(watched, event);
        } else if (qcandlesticklegendmarker_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qcandlesticklegendmarker_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QCandlestickLegendMarker::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcandlesticklegendmarker_timerevent_isbase) {
            qcandlesticklegendmarker_timerevent_isbase = false;
            QCandlestickLegendMarker::timerEvent(event);
        } else if (qcandlesticklegendmarker_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qcandlesticklegendmarker_timerevent_callback(this, cbval1);
        } else {
            QCandlestickLegendMarker::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcandlesticklegendmarker_childevent_isbase) {
            qcandlesticklegendmarker_childevent_isbase = false;
            QCandlestickLegendMarker::childEvent(event);
        } else if (qcandlesticklegendmarker_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qcandlesticklegendmarker_childevent_callback(this, cbval1);
        } else {
            QCandlestickLegendMarker::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcandlesticklegendmarker_customevent_isbase) {
            qcandlesticklegendmarker_customevent_isbase = false;
            QCandlestickLegendMarker::customEvent(event);
        } else if (qcandlesticklegendmarker_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qcandlesticklegendmarker_customevent_callback(this, cbval1);
        } else {
            QCandlestickLegendMarker::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcandlesticklegendmarker_connectnotify_isbase) {
            qcandlesticklegendmarker_connectnotify_isbase = false;
            QCandlestickLegendMarker::connectNotify(signal);
        } else if (qcandlesticklegendmarker_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcandlesticklegendmarker_connectnotify_callback(this, cbval1);
        } else {
            QCandlestickLegendMarker::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcandlesticklegendmarker_disconnectnotify_isbase) {
            qcandlesticklegendmarker_disconnectnotify_isbase = false;
            QCandlestickLegendMarker::disconnectNotify(signal);
        } else if (qcandlesticklegendmarker_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcandlesticklegendmarker_disconnectnotify_callback(this, cbval1);
        } else {
            QCandlestickLegendMarker::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcandlesticklegendmarker_sender_isbase) {
            qcandlesticklegendmarker_sender_isbase = false;
            return QCandlestickLegendMarker::sender();
        } else if (qcandlesticklegendmarker_sender_callback != nullptr) {
            QObject* callback_ret = qcandlesticklegendmarker_sender_callback();
            return callback_ret;
        } else {
            return QCandlestickLegendMarker::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcandlesticklegendmarker_sendersignalindex_isbase) {
            qcandlesticklegendmarker_sendersignalindex_isbase = false;
            return QCandlestickLegendMarker::senderSignalIndex();
        } else if (qcandlesticklegendmarker_sendersignalindex_callback != nullptr) {
            int callback_ret = qcandlesticklegendmarker_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QCandlestickLegendMarker::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcandlesticklegendmarker_receivers_isbase) {
            qcandlesticklegendmarker_receivers_isbase = false;
            return QCandlestickLegendMarker::receivers(signal);
        } else if (qcandlesticklegendmarker_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qcandlesticklegendmarker_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QCandlestickLegendMarker::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcandlesticklegendmarker_issignalconnected_isbase) {
            qcandlesticklegendmarker_issignalconnected_isbase = false;
            return QCandlestickLegendMarker::isSignalConnected(signal);
        } else if (qcandlesticklegendmarker_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qcandlesticklegendmarker_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCandlestickLegendMarker::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QCandlestickLegendMarker_TimerEvent(QCandlestickLegendMarker* self, QTimerEvent* event);
    friend void QCandlestickLegendMarker_QBaseTimerEvent(QCandlestickLegendMarker* self, QTimerEvent* event);
    friend void QCandlestickLegendMarker_ChildEvent(QCandlestickLegendMarker* self, QChildEvent* event);
    friend void QCandlestickLegendMarker_QBaseChildEvent(QCandlestickLegendMarker* self, QChildEvent* event);
    friend void QCandlestickLegendMarker_CustomEvent(QCandlestickLegendMarker* self, QEvent* event);
    friend void QCandlestickLegendMarker_QBaseCustomEvent(QCandlestickLegendMarker* self, QEvent* event);
    friend void QCandlestickLegendMarker_ConnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal);
    friend void QCandlestickLegendMarker_QBaseConnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal);
    friend void QCandlestickLegendMarker_DisconnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal);
    friend void QCandlestickLegendMarker_QBaseDisconnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal);
    friend QObject* QCandlestickLegendMarker_Sender(const QCandlestickLegendMarker* self);
    friend QObject* QCandlestickLegendMarker_QBaseSender(const QCandlestickLegendMarker* self);
    friend int QCandlestickLegendMarker_SenderSignalIndex(const QCandlestickLegendMarker* self);
    friend int QCandlestickLegendMarker_QBaseSenderSignalIndex(const QCandlestickLegendMarker* self);
    friend int QCandlestickLegendMarker_Receivers(const QCandlestickLegendMarker* self, const char* signal);
    friend int QCandlestickLegendMarker_QBaseReceivers(const QCandlestickLegendMarker* self, const char* signal);
    friend bool QCandlestickLegendMarker_IsSignalConnected(const QCandlestickLegendMarker* self, const QMetaMethod* signal);
    friend bool QCandlestickLegendMarker_QBaseIsSignalConnected(const QCandlestickLegendMarker* self, const QMetaMethod* signal);
};

#endif
