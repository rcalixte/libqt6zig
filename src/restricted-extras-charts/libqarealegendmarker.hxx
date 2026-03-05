#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQAREALEGENDMARKER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQAREALEGENDMARKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAreaLegendMarker so that we can call protected methods
class VirtualQAreaLegendMarker final : public QAreaLegendMarker {

  public:
    // Virtual class boolean flag
    bool isVirtualQAreaLegendMarker = true;

    // Virtual class public types (including callbacks)
    using QAreaLegendMarker_MetaObject_Callback = QMetaObject* (*)();
    using QAreaLegendMarker_Metacast_Callback = void* (*)(QAreaLegendMarker*, const char*);
    using QAreaLegendMarker_Metacall_Callback = int (*)(QAreaLegendMarker*, int, int, void**);
    using QAreaLegendMarker_Type_Callback = int (*)();
    using QAreaLegendMarker_Series_Callback = QAreaSeries* (*)();
    using QAreaLegendMarker_Event_Callback = bool (*)(QAreaLegendMarker*, QEvent*);
    using QAreaLegendMarker_EventFilter_Callback = bool (*)(QAreaLegendMarker*, QObject*, QEvent*);
    using QAreaLegendMarker_TimerEvent_Callback = void (*)(QAreaLegendMarker*, QTimerEvent*);
    using QAreaLegendMarker_ChildEvent_Callback = void (*)(QAreaLegendMarker*, QChildEvent*);
    using QAreaLegendMarker_CustomEvent_Callback = void (*)(QAreaLegendMarker*, QEvent*);
    using QAreaLegendMarker_ConnectNotify_Callback = void (*)(QAreaLegendMarker*, QMetaMethod*);
    using QAreaLegendMarker_DisconnectNotify_Callback = void (*)(QAreaLegendMarker*, QMetaMethod*);
    using QAreaLegendMarker_Sender_Callback = QObject* (*)();
    using QAreaLegendMarker_SenderSignalIndex_Callback = int (*)();
    using QAreaLegendMarker_Receivers_Callback = int (*)(const QAreaLegendMarker*, const char*);
    using QAreaLegendMarker_IsSignalConnected_Callback = bool (*)(const QAreaLegendMarker*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAreaLegendMarker_MetaObject_Callback qarealegendmarker_metaobject_callback = nullptr;
    QAreaLegendMarker_Metacast_Callback qarealegendmarker_metacast_callback = nullptr;
    QAreaLegendMarker_Metacall_Callback qarealegendmarker_metacall_callback = nullptr;
    QAreaLegendMarker_Type_Callback qarealegendmarker_type_callback = nullptr;
    QAreaLegendMarker_Series_Callback qarealegendmarker_series_callback = nullptr;
    QAreaLegendMarker_Event_Callback qarealegendmarker_event_callback = nullptr;
    QAreaLegendMarker_EventFilter_Callback qarealegendmarker_eventfilter_callback = nullptr;
    QAreaLegendMarker_TimerEvent_Callback qarealegendmarker_timerevent_callback = nullptr;
    QAreaLegendMarker_ChildEvent_Callback qarealegendmarker_childevent_callback = nullptr;
    QAreaLegendMarker_CustomEvent_Callback qarealegendmarker_customevent_callback = nullptr;
    QAreaLegendMarker_ConnectNotify_Callback qarealegendmarker_connectnotify_callback = nullptr;
    QAreaLegendMarker_DisconnectNotify_Callback qarealegendmarker_disconnectnotify_callback = nullptr;
    QAreaLegendMarker_Sender_Callback qarealegendmarker_sender_callback = nullptr;
    QAreaLegendMarker_SenderSignalIndex_Callback qarealegendmarker_sendersignalindex_callback = nullptr;
    QAreaLegendMarker_Receivers_Callback qarealegendmarker_receivers_callback = nullptr;
    QAreaLegendMarker_IsSignalConnected_Callback qarealegendmarker_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qarealegendmarker_metaobject_isbase = false;
    mutable bool qarealegendmarker_metacast_isbase = false;
    mutable bool qarealegendmarker_metacall_isbase = false;
    mutable bool qarealegendmarker_type_isbase = false;
    mutable bool qarealegendmarker_series_isbase = false;
    mutable bool qarealegendmarker_event_isbase = false;
    mutable bool qarealegendmarker_eventfilter_isbase = false;
    mutable bool qarealegendmarker_timerevent_isbase = false;
    mutable bool qarealegendmarker_childevent_isbase = false;
    mutable bool qarealegendmarker_customevent_isbase = false;
    mutable bool qarealegendmarker_connectnotify_isbase = false;
    mutable bool qarealegendmarker_disconnectnotify_isbase = false;
    mutable bool qarealegendmarker_sender_isbase = false;
    mutable bool qarealegendmarker_sendersignalindex_isbase = false;
    mutable bool qarealegendmarker_receivers_isbase = false;
    mutable bool qarealegendmarker_issignalconnected_isbase = false;

  public:
    VirtualQAreaLegendMarker(QAreaSeries* series, QLegend* legend) : QAreaLegendMarker(series, legend) {};
    VirtualQAreaLegendMarker(QAreaSeries* series, QLegend* legend, QObject* parent) : QAreaLegendMarker(series, legend, parent) {};

    // Callback setters
    inline void setQAreaLegendMarker_MetaObject_Callback(QAreaLegendMarker_MetaObject_Callback cb) { qarealegendmarker_metaobject_callback = cb; }
    inline void setQAreaLegendMarker_Metacast_Callback(QAreaLegendMarker_Metacast_Callback cb) { qarealegendmarker_metacast_callback = cb; }
    inline void setQAreaLegendMarker_Metacall_Callback(QAreaLegendMarker_Metacall_Callback cb) { qarealegendmarker_metacall_callback = cb; }
    inline void setQAreaLegendMarker_Type_Callback(QAreaLegendMarker_Type_Callback cb) { qarealegendmarker_type_callback = cb; }
    inline void setQAreaLegendMarker_Series_Callback(QAreaLegendMarker_Series_Callback cb) { qarealegendmarker_series_callback = cb; }
    inline void setQAreaLegendMarker_Event_Callback(QAreaLegendMarker_Event_Callback cb) { qarealegendmarker_event_callback = cb; }
    inline void setQAreaLegendMarker_EventFilter_Callback(QAreaLegendMarker_EventFilter_Callback cb) { qarealegendmarker_eventfilter_callback = cb; }
    inline void setQAreaLegendMarker_TimerEvent_Callback(QAreaLegendMarker_TimerEvent_Callback cb) { qarealegendmarker_timerevent_callback = cb; }
    inline void setQAreaLegendMarker_ChildEvent_Callback(QAreaLegendMarker_ChildEvent_Callback cb) { qarealegendmarker_childevent_callback = cb; }
    inline void setQAreaLegendMarker_CustomEvent_Callback(QAreaLegendMarker_CustomEvent_Callback cb) { qarealegendmarker_customevent_callback = cb; }
    inline void setQAreaLegendMarker_ConnectNotify_Callback(QAreaLegendMarker_ConnectNotify_Callback cb) { qarealegendmarker_connectnotify_callback = cb; }
    inline void setQAreaLegendMarker_DisconnectNotify_Callback(QAreaLegendMarker_DisconnectNotify_Callback cb) { qarealegendmarker_disconnectnotify_callback = cb; }
    inline void setQAreaLegendMarker_Sender_Callback(QAreaLegendMarker_Sender_Callback cb) { qarealegendmarker_sender_callback = cb; }
    inline void setQAreaLegendMarker_SenderSignalIndex_Callback(QAreaLegendMarker_SenderSignalIndex_Callback cb) { qarealegendmarker_sendersignalindex_callback = cb; }
    inline void setQAreaLegendMarker_Receivers_Callback(QAreaLegendMarker_Receivers_Callback cb) { qarealegendmarker_receivers_callback = cb; }
    inline void setQAreaLegendMarker_IsSignalConnected_Callback(QAreaLegendMarker_IsSignalConnected_Callback cb) { qarealegendmarker_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAreaLegendMarker_MetaObject_IsBase(bool value) const { qarealegendmarker_metaobject_isbase = value; }
    inline void setQAreaLegendMarker_Metacast_IsBase(bool value) const { qarealegendmarker_metacast_isbase = value; }
    inline void setQAreaLegendMarker_Metacall_IsBase(bool value) const { qarealegendmarker_metacall_isbase = value; }
    inline void setQAreaLegendMarker_Type_IsBase(bool value) const { qarealegendmarker_type_isbase = value; }
    inline void setQAreaLegendMarker_Series_IsBase(bool value) const { qarealegendmarker_series_isbase = value; }
    inline void setQAreaLegendMarker_Event_IsBase(bool value) const { qarealegendmarker_event_isbase = value; }
    inline void setQAreaLegendMarker_EventFilter_IsBase(bool value) const { qarealegendmarker_eventfilter_isbase = value; }
    inline void setQAreaLegendMarker_TimerEvent_IsBase(bool value) const { qarealegendmarker_timerevent_isbase = value; }
    inline void setQAreaLegendMarker_ChildEvent_IsBase(bool value) const { qarealegendmarker_childevent_isbase = value; }
    inline void setQAreaLegendMarker_CustomEvent_IsBase(bool value) const { qarealegendmarker_customevent_isbase = value; }
    inline void setQAreaLegendMarker_ConnectNotify_IsBase(bool value) const { qarealegendmarker_connectnotify_isbase = value; }
    inline void setQAreaLegendMarker_DisconnectNotify_IsBase(bool value) const { qarealegendmarker_disconnectnotify_isbase = value; }
    inline void setQAreaLegendMarker_Sender_IsBase(bool value) const { qarealegendmarker_sender_isbase = value; }
    inline void setQAreaLegendMarker_SenderSignalIndex_IsBase(bool value) const { qarealegendmarker_sendersignalindex_isbase = value; }
    inline void setQAreaLegendMarker_Receivers_IsBase(bool value) const { qarealegendmarker_receivers_isbase = value; }
    inline void setQAreaLegendMarker_IsSignalConnected_IsBase(bool value) const { qarealegendmarker_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qarealegendmarker_metaobject_isbase) {
            qarealegendmarker_metaobject_isbase = false;
            return QAreaLegendMarker::metaObject();
        }
        auto metaobject_cb = qarealegendmarker_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QAreaLegendMarker::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qarealegendmarker_metacast_isbase) {
            qarealegendmarker_metacast_isbase = false;
            return QAreaLegendMarker::qt_metacast(param1);
        }
        auto metacast_cb = qarealegendmarker_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QAreaLegendMarker::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qarealegendmarker_metacall_isbase) {
            qarealegendmarker_metacall_isbase = false;
            return QAreaLegendMarker::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qarealegendmarker_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAreaLegendMarker::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLegendMarker::LegendMarkerType type() override {
        if (qarealegendmarker_type_isbase) {
            qarealegendmarker_type_isbase = false;
            return QAreaLegendMarker::type();
        }
        auto type_cb = qarealegendmarker_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<QLegendMarker::LegendMarkerType>(callback_ret);
        }
        return QAreaLegendMarker::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAreaSeries* series() override {
        if (qarealegendmarker_series_isbase) {
            qarealegendmarker_series_isbase = false;
            return QAreaLegendMarker::series();
        }
        auto series_cb = qarealegendmarker_series_callback;
        if (series_cb) {
            QAreaSeries* callback_ret = series_cb();
            return callback_ret;
        }
        return QAreaLegendMarker::series();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qarealegendmarker_event_isbase) {
            qarealegendmarker_event_isbase = false;
            return QAreaLegendMarker::event(event);
        }
        auto event_cb = qarealegendmarker_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QAreaLegendMarker::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qarealegendmarker_eventfilter_isbase) {
            qarealegendmarker_eventfilter_isbase = false;
            return QAreaLegendMarker::eventFilter(watched, event);
        }
        auto eventfilter_cb = qarealegendmarker_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAreaLegendMarker::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qarealegendmarker_timerevent_isbase) {
            qarealegendmarker_timerevent_isbase = false;
            QAreaLegendMarker::timerEvent(event);
            return;
        }
        auto timerevent_cb = qarealegendmarker_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QAreaLegendMarker::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qarealegendmarker_childevent_isbase) {
            qarealegendmarker_childevent_isbase = false;
            QAreaLegendMarker::childEvent(event);
            return;
        }
        auto childevent_cb = qarealegendmarker_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QAreaLegendMarker::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qarealegendmarker_customevent_isbase) {
            qarealegendmarker_customevent_isbase = false;
            QAreaLegendMarker::customEvent(event);
            return;
        }
        auto customevent_cb = qarealegendmarker_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QAreaLegendMarker::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qarealegendmarker_connectnotify_isbase) {
            qarealegendmarker_connectnotify_isbase = false;
            QAreaLegendMarker::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qarealegendmarker_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QAreaLegendMarker::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qarealegendmarker_disconnectnotify_isbase) {
            qarealegendmarker_disconnectnotify_isbase = false;
            QAreaLegendMarker::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qarealegendmarker_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QAreaLegendMarker::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qarealegendmarker_sender_isbase) {
            qarealegendmarker_sender_isbase = false;
            return QAreaLegendMarker::sender();
        }
        auto sender_cb = qarealegendmarker_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QAreaLegendMarker::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qarealegendmarker_sendersignalindex_isbase) {
            qarealegendmarker_sendersignalindex_isbase = false;
            return QAreaLegendMarker::senderSignalIndex();
        }
        auto sendersignalindex_cb = qarealegendmarker_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QAreaLegendMarker::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qarealegendmarker_receivers_isbase) {
            qarealegendmarker_receivers_isbase = false;
            return QAreaLegendMarker::receivers(signal);
        }
        auto receivers_cb = qarealegendmarker_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAreaLegendMarker::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qarealegendmarker_issignalconnected_isbase) {
            qarealegendmarker_issignalconnected_isbase = false;
            return QAreaLegendMarker::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qarealegendmarker_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QAreaLegendMarker::isSignalConnected(signal);
    }

    // Friend functions
    friend void QAreaLegendMarker_TimerEvent(QAreaLegendMarker* self, QTimerEvent* event);
    friend void QAreaLegendMarker_SuperTimerEvent(QAreaLegendMarker* self, QTimerEvent* event);
    friend void QAreaLegendMarker_ChildEvent(QAreaLegendMarker* self, QChildEvent* event);
    friend void QAreaLegendMarker_SuperChildEvent(QAreaLegendMarker* self, QChildEvent* event);
    friend void QAreaLegendMarker_CustomEvent(QAreaLegendMarker* self, QEvent* event);
    friend void QAreaLegendMarker_SuperCustomEvent(QAreaLegendMarker* self, QEvent* event);
    friend void QAreaLegendMarker_ConnectNotify(QAreaLegendMarker* self, const QMetaMethod* signal);
    friend void QAreaLegendMarker_SuperConnectNotify(QAreaLegendMarker* self, const QMetaMethod* signal);
    friend void QAreaLegendMarker_DisconnectNotify(QAreaLegendMarker* self, const QMetaMethod* signal);
    friend void QAreaLegendMarker_SuperDisconnectNotify(QAreaLegendMarker* self, const QMetaMethod* signal);
    friend QObject* QAreaLegendMarker_Sender(const QAreaLegendMarker* self);
    friend QObject* QAreaLegendMarker_SuperSender(const QAreaLegendMarker* self);
    friend int QAreaLegendMarker_SenderSignalIndex(const QAreaLegendMarker* self);
    friend int QAreaLegendMarker_SuperSenderSignalIndex(const QAreaLegendMarker* self);
    friend int QAreaLegendMarker_Receivers(const QAreaLegendMarker* self, const char* signal);
    friend int QAreaLegendMarker_SuperReceivers(const QAreaLegendMarker* self, const char* signal);
    friend bool QAreaLegendMarker_IsSignalConnected(const QAreaLegendMarker* self, const QMetaMethod* signal);
    friend bool QAreaLegendMarker_SuperIsSignalConnected(const QAreaLegendMarker* self, const QMetaMethod* signal);
};

#endif
