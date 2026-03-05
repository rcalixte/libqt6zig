#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQSCATTERSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQSCATTERSERIES_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QScatterSeries so that we can call protected methods
class VirtualQScatterSeries final : public QScatterSeries {

  public:
    // Virtual class boolean flag
    bool isVirtualQScatterSeries = true;

    // Virtual class public types (including callbacks)
    using QScatterSeries_MetaObject_Callback = QMetaObject* (*)();
    using QScatterSeries_Metacast_Callback = void* (*)(QScatterSeries*, const char*);
    using QScatterSeries_Metacall_Callback = int (*)(QScatterSeries*, int, int, void**);
    using QScatterSeries_Type_Callback = int (*)();
    using QScatterSeries_SetPen_Callback = void (*)(QScatterSeries*, QPen*);
    using QScatterSeries_SetBrush_Callback = void (*)(QScatterSeries*, QBrush*);
    using QScatterSeries_SetColor_Callback = void (*)(QScatterSeries*, QColor*);
    using QScatterSeries_Color_Callback = QColor* (*)();
    using QScatterSeries_Event_Callback = bool (*)(QScatterSeries*, QEvent*);
    using QScatterSeries_EventFilter_Callback = bool (*)(QScatterSeries*, QObject*, QEvent*);
    using QScatterSeries_TimerEvent_Callback = void (*)(QScatterSeries*, QTimerEvent*);
    using QScatterSeries_ChildEvent_Callback = void (*)(QScatterSeries*, QChildEvent*);
    using QScatterSeries_CustomEvent_Callback = void (*)(QScatterSeries*, QEvent*);
    using QScatterSeries_ConnectNotify_Callback = void (*)(QScatterSeries*, QMetaMethod*);
    using QScatterSeries_DisconnectNotify_Callback = void (*)(QScatterSeries*, QMetaMethod*);
    using QScatterSeries_Sender_Callback = QObject* (*)();
    using QScatterSeries_SenderSignalIndex_Callback = int (*)();
    using QScatterSeries_Receivers_Callback = int (*)(const QScatterSeries*, const char*);
    using QScatterSeries_IsSignalConnected_Callback = bool (*)(const QScatterSeries*, QMetaMethod*);

  protected:
    // Instance callback storage
    QScatterSeries_MetaObject_Callback qscatterseries_metaobject_callback = nullptr;
    QScatterSeries_Metacast_Callback qscatterseries_metacast_callback = nullptr;
    QScatterSeries_Metacall_Callback qscatterseries_metacall_callback = nullptr;
    QScatterSeries_Type_Callback qscatterseries_type_callback = nullptr;
    QScatterSeries_SetPen_Callback qscatterseries_setpen_callback = nullptr;
    QScatterSeries_SetBrush_Callback qscatterseries_setbrush_callback = nullptr;
    QScatterSeries_SetColor_Callback qscatterseries_setcolor_callback = nullptr;
    QScatterSeries_Color_Callback qscatterseries_color_callback = nullptr;
    QScatterSeries_Event_Callback qscatterseries_event_callback = nullptr;
    QScatterSeries_EventFilter_Callback qscatterseries_eventfilter_callback = nullptr;
    QScatterSeries_TimerEvent_Callback qscatterseries_timerevent_callback = nullptr;
    QScatterSeries_ChildEvent_Callback qscatterseries_childevent_callback = nullptr;
    QScatterSeries_CustomEvent_Callback qscatterseries_customevent_callback = nullptr;
    QScatterSeries_ConnectNotify_Callback qscatterseries_connectnotify_callback = nullptr;
    QScatterSeries_DisconnectNotify_Callback qscatterseries_disconnectnotify_callback = nullptr;
    QScatterSeries_Sender_Callback qscatterseries_sender_callback = nullptr;
    QScatterSeries_SenderSignalIndex_Callback qscatterseries_sendersignalindex_callback = nullptr;
    QScatterSeries_Receivers_Callback qscatterseries_receivers_callback = nullptr;
    QScatterSeries_IsSignalConnected_Callback qscatterseries_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscatterseries_metaobject_isbase = false;
    mutable bool qscatterseries_metacast_isbase = false;
    mutable bool qscatterseries_metacall_isbase = false;
    mutable bool qscatterseries_type_isbase = false;
    mutable bool qscatterseries_setpen_isbase = false;
    mutable bool qscatterseries_setbrush_isbase = false;
    mutable bool qscatterseries_setcolor_isbase = false;
    mutable bool qscatterseries_color_isbase = false;
    mutable bool qscatterseries_event_isbase = false;
    mutable bool qscatterseries_eventfilter_isbase = false;
    mutable bool qscatterseries_timerevent_isbase = false;
    mutable bool qscatterseries_childevent_isbase = false;
    mutable bool qscatterseries_customevent_isbase = false;
    mutable bool qscatterseries_connectnotify_isbase = false;
    mutable bool qscatterseries_disconnectnotify_isbase = false;
    mutable bool qscatterseries_sender_isbase = false;
    mutable bool qscatterseries_sendersignalindex_isbase = false;
    mutable bool qscatterseries_receivers_isbase = false;
    mutable bool qscatterseries_issignalconnected_isbase = false;

  public:
    VirtualQScatterSeries() : QScatterSeries() {};
    VirtualQScatterSeries(QObject* parent) : QScatterSeries(parent) {};

    // Callback setters
    inline void setQScatterSeries_MetaObject_Callback(QScatterSeries_MetaObject_Callback cb) { qscatterseries_metaobject_callback = cb; }
    inline void setQScatterSeries_Metacast_Callback(QScatterSeries_Metacast_Callback cb) { qscatterseries_metacast_callback = cb; }
    inline void setQScatterSeries_Metacall_Callback(QScatterSeries_Metacall_Callback cb) { qscatterseries_metacall_callback = cb; }
    inline void setQScatterSeries_Type_Callback(QScatterSeries_Type_Callback cb) { qscatterseries_type_callback = cb; }
    inline void setQScatterSeries_SetPen_Callback(QScatterSeries_SetPen_Callback cb) { qscatterseries_setpen_callback = cb; }
    inline void setQScatterSeries_SetBrush_Callback(QScatterSeries_SetBrush_Callback cb) { qscatterseries_setbrush_callback = cb; }
    inline void setQScatterSeries_SetColor_Callback(QScatterSeries_SetColor_Callback cb) { qscatterseries_setcolor_callback = cb; }
    inline void setQScatterSeries_Color_Callback(QScatterSeries_Color_Callback cb) { qscatterseries_color_callback = cb; }
    inline void setQScatterSeries_Event_Callback(QScatterSeries_Event_Callback cb) { qscatterseries_event_callback = cb; }
    inline void setQScatterSeries_EventFilter_Callback(QScatterSeries_EventFilter_Callback cb) { qscatterseries_eventfilter_callback = cb; }
    inline void setQScatterSeries_TimerEvent_Callback(QScatterSeries_TimerEvent_Callback cb) { qscatterseries_timerevent_callback = cb; }
    inline void setQScatterSeries_ChildEvent_Callback(QScatterSeries_ChildEvent_Callback cb) { qscatterseries_childevent_callback = cb; }
    inline void setQScatterSeries_CustomEvent_Callback(QScatterSeries_CustomEvent_Callback cb) { qscatterseries_customevent_callback = cb; }
    inline void setQScatterSeries_ConnectNotify_Callback(QScatterSeries_ConnectNotify_Callback cb) { qscatterseries_connectnotify_callback = cb; }
    inline void setQScatterSeries_DisconnectNotify_Callback(QScatterSeries_DisconnectNotify_Callback cb) { qscatterseries_disconnectnotify_callback = cb; }
    inline void setQScatterSeries_Sender_Callback(QScatterSeries_Sender_Callback cb) { qscatterseries_sender_callback = cb; }
    inline void setQScatterSeries_SenderSignalIndex_Callback(QScatterSeries_SenderSignalIndex_Callback cb) { qscatterseries_sendersignalindex_callback = cb; }
    inline void setQScatterSeries_Receivers_Callback(QScatterSeries_Receivers_Callback cb) { qscatterseries_receivers_callback = cb; }
    inline void setQScatterSeries_IsSignalConnected_Callback(QScatterSeries_IsSignalConnected_Callback cb) { qscatterseries_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQScatterSeries_MetaObject_IsBase(bool value) const { qscatterseries_metaobject_isbase = value; }
    inline void setQScatterSeries_Metacast_IsBase(bool value) const { qscatterseries_metacast_isbase = value; }
    inline void setQScatterSeries_Metacall_IsBase(bool value) const { qscatterseries_metacall_isbase = value; }
    inline void setQScatterSeries_Type_IsBase(bool value) const { qscatterseries_type_isbase = value; }
    inline void setQScatterSeries_SetPen_IsBase(bool value) const { qscatterseries_setpen_isbase = value; }
    inline void setQScatterSeries_SetBrush_IsBase(bool value) const { qscatterseries_setbrush_isbase = value; }
    inline void setQScatterSeries_SetColor_IsBase(bool value) const { qscatterseries_setcolor_isbase = value; }
    inline void setQScatterSeries_Color_IsBase(bool value) const { qscatterseries_color_isbase = value; }
    inline void setQScatterSeries_Event_IsBase(bool value) const { qscatterseries_event_isbase = value; }
    inline void setQScatterSeries_EventFilter_IsBase(bool value) const { qscatterseries_eventfilter_isbase = value; }
    inline void setQScatterSeries_TimerEvent_IsBase(bool value) const { qscatterseries_timerevent_isbase = value; }
    inline void setQScatterSeries_ChildEvent_IsBase(bool value) const { qscatterseries_childevent_isbase = value; }
    inline void setQScatterSeries_CustomEvent_IsBase(bool value) const { qscatterseries_customevent_isbase = value; }
    inline void setQScatterSeries_ConnectNotify_IsBase(bool value) const { qscatterseries_connectnotify_isbase = value; }
    inline void setQScatterSeries_DisconnectNotify_IsBase(bool value) const { qscatterseries_disconnectnotify_isbase = value; }
    inline void setQScatterSeries_Sender_IsBase(bool value) const { qscatterseries_sender_isbase = value; }
    inline void setQScatterSeries_SenderSignalIndex_IsBase(bool value) const { qscatterseries_sendersignalindex_isbase = value; }
    inline void setQScatterSeries_Receivers_IsBase(bool value) const { qscatterseries_receivers_isbase = value; }
    inline void setQScatterSeries_IsSignalConnected_IsBase(bool value) const { qscatterseries_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscatterseries_metaobject_isbase) {
            qscatterseries_metaobject_isbase = false;
            return QScatterSeries::metaObject();
        }
        auto metaobject_cb = qscatterseries_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QScatterSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscatterseries_metacast_isbase) {
            qscatterseries_metacast_isbase = false;
            return QScatterSeries::qt_metacast(param1);
        }
        auto metacast_cb = qscatterseries_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QScatterSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscatterseries_metacall_isbase) {
            qscatterseries_metacall_isbase = false;
            return QScatterSeries::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscatterseries_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QScatterSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qscatterseries_type_isbase) {
            qscatterseries_type_isbase = false;
            return QScatterSeries::type();
        }
        auto type_cb = qscatterseries_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        }
        return QScatterSeries::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPen(const QPen& pen) override {
        if (qscatterseries_setpen_isbase) {
            qscatterseries_setpen_isbase = false;
            QScatterSeries::setPen(pen);
            return;
        }
        auto setpen_cb = qscatterseries_setpen_callback;
        if (setpen_cb) {
            const QPen& pen_ret = pen;
            // Cast returned reference into pointer
            QPen* cbval1 = const_cast<QPen*>(&pen_ret);

            setpen_cb(this, cbval1);
            return;
        }
        QScatterSeries::setPen(pen);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBrush(const QBrush& brush) override {
        if (qscatterseries_setbrush_isbase) {
            qscatterseries_setbrush_isbase = false;
            QScatterSeries::setBrush(brush);
            return;
        }
        auto setbrush_cb = qscatterseries_setbrush_callback;
        if (setbrush_cb) {
            const QBrush& brush_ret = brush;
            // Cast returned reference into pointer
            QBrush* cbval1 = const_cast<QBrush*>(&brush_ret);

            setbrush_cb(this, cbval1);
            return;
        }
        QScatterSeries::setBrush(brush);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& color) override {
        if (qscatterseries_setcolor_isbase) {
            qscatterseries_setcolor_isbase = false;
            QScatterSeries::setColor(color);
            return;
        }
        auto setcolor_cb = qscatterseries_setcolor_callback;
        if (setcolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);

            setcolor_cb(this, cbval1);
            return;
        }
        QScatterSeries::setColor(color);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color() const override {
        if (qscatterseries_color_isbase) {
            qscatterseries_color_isbase = false;
            return QScatterSeries::color();
        }
        auto color_cb = qscatterseries_color_callback;
        if (color_cb) {
            QColor* callback_ret = color_cb();
            return *callback_ret;
        }
        return QScatterSeries::color();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscatterseries_event_isbase) {
            qscatterseries_event_isbase = false;
            return QScatterSeries::event(event);
        }
        auto event_cb = qscatterseries_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QScatterSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscatterseries_eventfilter_isbase) {
            qscatterseries_eventfilter_isbase = false;
            return QScatterSeries::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscatterseries_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QScatterSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscatterseries_timerevent_isbase) {
            qscatterseries_timerevent_isbase = false;
            QScatterSeries::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscatterseries_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QScatterSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscatterseries_childevent_isbase) {
            qscatterseries_childevent_isbase = false;
            QScatterSeries::childEvent(event);
            return;
        }
        auto childevent_cb = qscatterseries_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QScatterSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscatterseries_customevent_isbase) {
            qscatterseries_customevent_isbase = false;
            QScatterSeries::customEvent(event);
            return;
        }
        auto customevent_cb = qscatterseries_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QScatterSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscatterseries_connectnotify_isbase) {
            qscatterseries_connectnotify_isbase = false;
            QScatterSeries::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscatterseries_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QScatterSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscatterseries_disconnectnotify_isbase) {
            qscatterseries_disconnectnotify_isbase = false;
            QScatterSeries::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscatterseries_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QScatterSeries::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscatterseries_sender_isbase) {
            qscatterseries_sender_isbase = false;
            return QScatterSeries::sender();
        }
        auto sender_cb = qscatterseries_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QScatterSeries::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscatterseries_sendersignalindex_isbase) {
            qscatterseries_sendersignalindex_isbase = false;
            return QScatterSeries::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscatterseries_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QScatterSeries::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscatterseries_receivers_isbase) {
            qscatterseries_receivers_isbase = false;
            return QScatterSeries::receivers(signal);
        }
        auto receivers_cb = qscatterseries_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QScatterSeries::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscatterseries_issignalconnected_isbase) {
            qscatterseries_issignalconnected_isbase = false;
            return QScatterSeries::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscatterseries_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QScatterSeries::isSignalConnected(signal);
    }

    // Friend functions
    friend void QScatterSeries_TimerEvent(QScatterSeries* self, QTimerEvent* event);
    friend void QScatterSeries_SuperTimerEvent(QScatterSeries* self, QTimerEvent* event);
    friend void QScatterSeries_ChildEvent(QScatterSeries* self, QChildEvent* event);
    friend void QScatterSeries_SuperChildEvent(QScatterSeries* self, QChildEvent* event);
    friend void QScatterSeries_CustomEvent(QScatterSeries* self, QEvent* event);
    friend void QScatterSeries_SuperCustomEvent(QScatterSeries* self, QEvent* event);
    friend void QScatterSeries_ConnectNotify(QScatterSeries* self, const QMetaMethod* signal);
    friend void QScatterSeries_SuperConnectNotify(QScatterSeries* self, const QMetaMethod* signal);
    friend void QScatterSeries_DisconnectNotify(QScatterSeries* self, const QMetaMethod* signal);
    friend void QScatterSeries_SuperDisconnectNotify(QScatterSeries* self, const QMetaMethod* signal);
    friend QObject* QScatterSeries_Sender(const QScatterSeries* self);
    friend QObject* QScatterSeries_SuperSender(const QScatterSeries* self);
    friend int QScatterSeries_SenderSignalIndex(const QScatterSeries* self);
    friend int QScatterSeries_SuperSenderSignalIndex(const QScatterSeries* self);
    friend int QScatterSeries_Receivers(const QScatterSeries* self, const char* signal);
    friend int QScatterSeries_SuperReceivers(const QScatterSeries* self, const char* signal);
    friend bool QScatterSeries_IsSignalConnected(const QScatterSeries* self, const QMetaMethod* signal);
    friend bool QScatterSeries_SuperIsSignalConnected(const QScatterSeries* self, const QMetaMethod* signal);
};

#endif
