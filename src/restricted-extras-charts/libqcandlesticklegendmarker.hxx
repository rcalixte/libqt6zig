#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQCANDLESTICKLEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQCANDLESTICKLEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QCandlestickLegendMarker so that we can call protected methods
class VirtualQCandlestickLegendMarker final : public QCandlestickLegendMarker {

  public:
    // Virtual class boolean flag
    bool isVirtualQCandlestickLegendMarker = true;

    // Virtual class public types (including callbacks)
    using QCandlestickLegendMarker_MetaObject_Callback = QMetaObject* (*)();
    using QCandlestickLegendMarker_Metacast_Callback = void* (*)(QCandlestickLegendMarker*, const char*);
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
    QCandlestickLegendMarker_MetaObject_Callback qcandlesticklegendmarker_metaobject_callback = nullptr;
    QCandlestickLegendMarker_Metacast_Callback qcandlesticklegendmarker_metacast_callback = nullptr;
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
    mutable bool qcandlesticklegendmarker_metaobject_isbase = false;
    mutable bool qcandlesticklegendmarker_metacast_isbase = false;
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

    // Callback setters
    inline void setQCandlestickLegendMarker_MetaObject_Callback(QCandlestickLegendMarker_MetaObject_Callback cb) { qcandlesticklegendmarker_metaobject_callback = cb; }
    inline void setQCandlestickLegendMarker_Metacast_Callback(QCandlestickLegendMarker_Metacast_Callback cb) { qcandlesticklegendmarker_metacast_callback = cb; }
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
    inline void setQCandlestickLegendMarker_MetaObject_IsBase(bool value) const { qcandlesticklegendmarker_metaobject_isbase = value; }
    inline void setQCandlestickLegendMarker_Metacast_IsBase(bool value) const { qcandlesticklegendmarker_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (qcandlesticklegendmarker_metaobject_isbase) {
            qcandlesticklegendmarker_metaobject_isbase = false;
            return QCandlestickLegendMarker::metaObject();
        }
        auto metaobject_cb = qcandlesticklegendmarker_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QCandlestickLegendMarker::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcandlesticklegendmarker_metacast_isbase) {
            qcandlesticklegendmarker_metacast_isbase = false;
            return QCandlestickLegendMarker::qt_metacast(param1);
        }
        auto metacast_cb = qcandlesticklegendmarker_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QCandlestickLegendMarker::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcandlesticklegendmarker_metacall_isbase) {
            qcandlesticklegendmarker_metacall_isbase = false;
            return QCandlestickLegendMarker::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qcandlesticklegendmarker_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCandlestickLegendMarker::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLegendMarker::LegendMarkerType type() override {
        if (qcandlesticklegendmarker_type_isbase) {
            qcandlesticklegendmarker_type_isbase = false;
            return QCandlestickLegendMarker::type();
        }
        auto type_cb = qcandlesticklegendmarker_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<QLegendMarker::LegendMarkerType>(callback_ret);
        }
        return QCandlestickLegendMarker::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual QCandlestickSeries* series() override {
        if (qcandlesticklegendmarker_series_isbase) {
            qcandlesticklegendmarker_series_isbase = false;
            return QCandlestickLegendMarker::series();
        }
        auto series_cb = qcandlesticklegendmarker_series_callback;
        if (series_cb) {
            QCandlestickSeries* callback_ret = series_cb();
            return callback_ret;
        }
        return QCandlestickLegendMarker::series();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcandlesticklegendmarker_event_isbase) {
            qcandlesticklegendmarker_event_isbase = false;
            return QCandlestickLegendMarker::event(event);
        }
        auto event_cb = qcandlesticklegendmarker_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QCandlestickLegendMarker::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcandlesticklegendmarker_eventfilter_isbase) {
            qcandlesticklegendmarker_eventfilter_isbase = false;
            return QCandlestickLegendMarker::eventFilter(watched, event);
        }
        auto eventfilter_cb = qcandlesticklegendmarker_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCandlestickLegendMarker::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcandlesticklegendmarker_timerevent_isbase) {
            qcandlesticklegendmarker_timerevent_isbase = false;
            QCandlestickLegendMarker::timerEvent(event);
            return;
        }
        auto timerevent_cb = qcandlesticklegendmarker_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QCandlestickLegendMarker::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcandlesticklegendmarker_childevent_isbase) {
            qcandlesticklegendmarker_childevent_isbase = false;
            QCandlestickLegendMarker::childEvent(event);
            return;
        }
        auto childevent_cb = qcandlesticklegendmarker_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QCandlestickLegendMarker::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcandlesticklegendmarker_customevent_isbase) {
            qcandlesticklegendmarker_customevent_isbase = false;
            QCandlestickLegendMarker::customEvent(event);
            return;
        }
        auto customevent_cb = qcandlesticklegendmarker_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QCandlestickLegendMarker::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcandlesticklegendmarker_connectnotify_isbase) {
            qcandlesticklegendmarker_connectnotify_isbase = false;
            QCandlestickLegendMarker::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qcandlesticklegendmarker_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QCandlestickLegendMarker::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcandlesticklegendmarker_disconnectnotify_isbase) {
            qcandlesticklegendmarker_disconnectnotify_isbase = false;
            QCandlestickLegendMarker::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qcandlesticklegendmarker_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QCandlestickLegendMarker::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcandlesticklegendmarker_sender_isbase) {
            qcandlesticklegendmarker_sender_isbase = false;
            return QCandlestickLegendMarker::sender();
        }
        auto sender_cb = qcandlesticklegendmarker_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QCandlestickLegendMarker::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcandlesticklegendmarker_sendersignalindex_isbase) {
            qcandlesticklegendmarker_sendersignalindex_isbase = false;
            return QCandlestickLegendMarker::senderSignalIndex();
        }
        auto sendersignalindex_cb = qcandlesticklegendmarker_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QCandlestickLegendMarker::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcandlesticklegendmarker_receivers_isbase) {
            qcandlesticklegendmarker_receivers_isbase = false;
            return QCandlestickLegendMarker::receivers(signal);
        }
        auto receivers_cb = qcandlesticklegendmarker_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QCandlestickLegendMarker::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcandlesticklegendmarker_issignalconnected_isbase) {
            qcandlesticklegendmarker_issignalconnected_isbase = false;
            return QCandlestickLegendMarker::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qcandlesticklegendmarker_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QCandlestickLegendMarker::isSignalConnected(signal);
    }

    // Friend functions
    friend void QCandlestickLegendMarker_TimerEvent(QCandlestickLegendMarker* self, QTimerEvent* event);
    friend void QCandlestickLegendMarker_SuperTimerEvent(QCandlestickLegendMarker* self, QTimerEvent* event);
    friend void QCandlestickLegendMarker_ChildEvent(QCandlestickLegendMarker* self, QChildEvent* event);
    friend void QCandlestickLegendMarker_SuperChildEvent(QCandlestickLegendMarker* self, QChildEvent* event);
    friend void QCandlestickLegendMarker_CustomEvent(QCandlestickLegendMarker* self, QEvent* event);
    friend void QCandlestickLegendMarker_SuperCustomEvent(QCandlestickLegendMarker* self, QEvent* event);
    friend void QCandlestickLegendMarker_ConnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal);
    friend void QCandlestickLegendMarker_SuperConnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal);
    friend void QCandlestickLegendMarker_DisconnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal);
    friend void QCandlestickLegendMarker_SuperDisconnectNotify(QCandlestickLegendMarker* self, const QMetaMethod* signal);
    friend QObject* QCandlestickLegendMarker_Sender(const QCandlestickLegendMarker* self);
    friend QObject* QCandlestickLegendMarker_SuperSender(const QCandlestickLegendMarker* self);
    friend int QCandlestickLegendMarker_SenderSignalIndex(const QCandlestickLegendMarker* self);
    friend int QCandlestickLegendMarker_SuperSenderSignalIndex(const QCandlestickLegendMarker* self);
    friend int QCandlestickLegendMarker_Receivers(const QCandlestickLegendMarker* self, const char* signal);
    friend int QCandlestickLegendMarker_SuperReceivers(const QCandlestickLegendMarker* self, const char* signal);
    friend bool QCandlestickLegendMarker_IsSignalConnected(const QCandlestickLegendMarker* self, const QMetaMethod* signal);
    friend bool QCandlestickLegendMarker_SuperIsSignalConnected(const QCandlestickLegendMarker* self, const QMetaMethod* signal);
};

#endif
