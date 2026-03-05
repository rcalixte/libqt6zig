#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQSPLINESERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQSPLINESERIES_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSplineSeries so that we can call protected methods
class VirtualQSplineSeries final : public QSplineSeries {

  public:
    // Virtual class boolean flag
    bool isVirtualQSplineSeries = true;

    // Virtual class public types (including callbacks)
    using QSplineSeries_MetaObject_Callback = QMetaObject* (*)();
    using QSplineSeries_Metacast_Callback = void* (*)(QSplineSeries*, const char*);
    using QSplineSeries_Metacall_Callback = int (*)(QSplineSeries*, int, int, void**);
    using QSplineSeries_Type_Callback = int (*)();
    using QSplineSeries_SetPen_Callback = void (*)(QSplineSeries*, QPen*);
    using QSplineSeries_SetBrush_Callback = void (*)(QSplineSeries*, QBrush*);
    using QSplineSeries_SetColor_Callback = void (*)(QSplineSeries*, QColor*);
    using QSplineSeries_Color_Callback = QColor* (*)();
    using QSplineSeries_Event_Callback = bool (*)(QSplineSeries*, QEvent*);
    using QSplineSeries_EventFilter_Callback = bool (*)(QSplineSeries*, QObject*, QEvent*);
    using QSplineSeries_TimerEvent_Callback = void (*)(QSplineSeries*, QTimerEvent*);
    using QSplineSeries_ChildEvent_Callback = void (*)(QSplineSeries*, QChildEvent*);
    using QSplineSeries_CustomEvent_Callback = void (*)(QSplineSeries*, QEvent*);
    using QSplineSeries_ConnectNotify_Callback = void (*)(QSplineSeries*, QMetaMethod*);
    using QSplineSeries_DisconnectNotify_Callback = void (*)(QSplineSeries*, QMetaMethod*);
    using QSplineSeries_Sender_Callback = QObject* (*)();
    using QSplineSeries_SenderSignalIndex_Callback = int (*)();
    using QSplineSeries_Receivers_Callback = int (*)(const QSplineSeries*, const char*);
    using QSplineSeries_IsSignalConnected_Callback = bool (*)(const QSplineSeries*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSplineSeries_MetaObject_Callback qsplineseries_metaobject_callback = nullptr;
    QSplineSeries_Metacast_Callback qsplineseries_metacast_callback = nullptr;
    QSplineSeries_Metacall_Callback qsplineseries_metacall_callback = nullptr;
    QSplineSeries_Type_Callback qsplineseries_type_callback = nullptr;
    QSplineSeries_SetPen_Callback qsplineseries_setpen_callback = nullptr;
    QSplineSeries_SetBrush_Callback qsplineseries_setbrush_callback = nullptr;
    QSplineSeries_SetColor_Callback qsplineseries_setcolor_callback = nullptr;
    QSplineSeries_Color_Callback qsplineseries_color_callback = nullptr;
    QSplineSeries_Event_Callback qsplineseries_event_callback = nullptr;
    QSplineSeries_EventFilter_Callback qsplineseries_eventfilter_callback = nullptr;
    QSplineSeries_TimerEvent_Callback qsplineseries_timerevent_callback = nullptr;
    QSplineSeries_ChildEvent_Callback qsplineseries_childevent_callback = nullptr;
    QSplineSeries_CustomEvent_Callback qsplineseries_customevent_callback = nullptr;
    QSplineSeries_ConnectNotify_Callback qsplineseries_connectnotify_callback = nullptr;
    QSplineSeries_DisconnectNotify_Callback qsplineseries_disconnectnotify_callback = nullptr;
    QSplineSeries_Sender_Callback qsplineseries_sender_callback = nullptr;
    QSplineSeries_SenderSignalIndex_Callback qsplineseries_sendersignalindex_callback = nullptr;
    QSplineSeries_Receivers_Callback qsplineseries_receivers_callback = nullptr;
    QSplineSeries_IsSignalConnected_Callback qsplineseries_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsplineseries_metaobject_isbase = false;
    mutable bool qsplineseries_metacast_isbase = false;
    mutable bool qsplineseries_metacall_isbase = false;
    mutable bool qsplineseries_type_isbase = false;
    mutable bool qsplineseries_setpen_isbase = false;
    mutable bool qsplineseries_setbrush_isbase = false;
    mutable bool qsplineseries_setcolor_isbase = false;
    mutable bool qsplineseries_color_isbase = false;
    mutable bool qsplineseries_event_isbase = false;
    mutable bool qsplineseries_eventfilter_isbase = false;
    mutable bool qsplineseries_timerevent_isbase = false;
    mutable bool qsplineseries_childevent_isbase = false;
    mutable bool qsplineseries_customevent_isbase = false;
    mutable bool qsplineseries_connectnotify_isbase = false;
    mutable bool qsplineseries_disconnectnotify_isbase = false;
    mutable bool qsplineseries_sender_isbase = false;
    mutable bool qsplineseries_sendersignalindex_isbase = false;
    mutable bool qsplineseries_receivers_isbase = false;
    mutable bool qsplineseries_issignalconnected_isbase = false;

  public:
    VirtualQSplineSeries() : QSplineSeries() {};
    VirtualQSplineSeries(QObject* parent) : QSplineSeries(parent) {};

    // Callback setters
    inline void setQSplineSeries_MetaObject_Callback(QSplineSeries_MetaObject_Callback cb) { qsplineseries_metaobject_callback = cb; }
    inline void setQSplineSeries_Metacast_Callback(QSplineSeries_Metacast_Callback cb) { qsplineseries_metacast_callback = cb; }
    inline void setQSplineSeries_Metacall_Callback(QSplineSeries_Metacall_Callback cb) { qsplineseries_metacall_callback = cb; }
    inline void setQSplineSeries_Type_Callback(QSplineSeries_Type_Callback cb) { qsplineseries_type_callback = cb; }
    inline void setQSplineSeries_SetPen_Callback(QSplineSeries_SetPen_Callback cb) { qsplineseries_setpen_callback = cb; }
    inline void setQSplineSeries_SetBrush_Callback(QSplineSeries_SetBrush_Callback cb) { qsplineseries_setbrush_callback = cb; }
    inline void setQSplineSeries_SetColor_Callback(QSplineSeries_SetColor_Callback cb) { qsplineseries_setcolor_callback = cb; }
    inline void setQSplineSeries_Color_Callback(QSplineSeries_Color_Callback cb) { qsplineseries_color_callback = cb; }
    inline void setQSplineSeries_Event_Callback(QSplineSeries_Event_Callback cb) { qsplineseries_event_callback = cb; }
    inline void setQSplineSeries_EventFilter_Callback(QSplineSeries_EventFilter_Callback cb) { qsplineseries_eventfilter_callback = cb; }
    inline void setQSplineSeries_TimerEvent_Callback(QSplineSeries_TimerEvent_Callback cb) { qsplineseries_timerevent_callback = cb; }
    inline void setQSplineSeries_ChildEvent_Callback(QSplineSeries_ChildEvent_Callback cb) { qsplineseries_childevent_callback = cb; }
    inline void setQSplineSeries_CustomEvent_Callback(QSplineSeries_CustomEvent_Callback cb) { qsplineseries_customevent_callback = cb; }
    inline void setQSplineSeries_ConnectNotify_Callback(QSplineSeries_ConnectNotify_Callback cb) { qsplineseries_connectnotify_callback = cb; }
    inline void setQSplineSeries_DisconnectNotify_Callback(QSplineSeries_DisconnectNotify_Callback cb) { qsplineseries_disconnectnotify_callback = cb; }
    inline void setQSplineSeries_Sender_Callback(QSplineSeries_Sender_Callback cb) { qsplineseries_sender_callback = cb; }
    inline void setQSplineSeries_SenderSignalIndex_Callback(QSplineSeries_SenderSignalIndex_Callback cb) { qsplineseries_sendersignalindex_callback = cb; }
    inline void setQSplineSeries_Receivers_Callback(QSplineSeries_Receivers_Callback cb) { qsplineseries_receivers_callback = cb; }
    inline void setQSplineSeries_IsSignalConnected_Callback(QSplineSeries_IsSignalConnected_Callback cb) { qsplineseries_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSplineSeries_MetaObject_IsBase(bool value) const { qsplineseries_metaobject_isbase = value; }
    inline void setQSplineSeries_Metacast_IsBase(bool value) const { qsplineseries_metacast_isbase = value; }
    inline void setQSplineSeries_Metacall_IsBase(bool value) const { qsplineseries_metacall_isbase = value; }
    inline void setQSplineSeries_Type_IsBase(bool value) const { qsplineseries_type_isbase = value; }
    inline void setQSplineSeries_SetPen_IsBase(bool value) const { qsplineseries_setpen_isbase = value; }
    inline void setQSplineSeries_SetBrush_IsBase(bool value) const { qsplineseries_setbrush_isbase = value; }
    inline void setQSplineSeries_SetColor_IsBase(bool value) const { qsplineseries_setcolor_isbase = value; }
    inline void setQSplineSeries_Color_IsBase(bool value) const { qsplineseries_color_isbase = value; }
    inline void setQSplineSeries_Event_IsBase(bool value) const { qsplineseries_event_isbase = value; }
    inline void setQSplineSeries_EventFilter_IsBase(bool value) const { qsplineseries_eventfilter_isbase = value; }
    inline void setQSplineSeries_TimerEvent_IsBase(bool value) const { qsplineseries_timerevent_isbase = value; }
    inline void setQSplineSeries_ChildEvent_IsBase(bool value) const { qsplineseries_childevent_isbase = value; }
    inline void setQSplineSeries_CustomEvent_IsBase(bool value) const { qsplineseries_customevent_isbase = value; }
    inline void setQSplineSeries_ConnectNotify_IsBase(bool value) const { qsplineseries_connectnotify_isbase = value; }
    inline void setQSplineSeries_DisconnectNotify_IsBase(bool value) const { qsplineseries_disconnectnotify_isbase = value; }
    inline void setQSplineSeries_Sender_IsBase(bool value) const { qsplineseries_sender_isbase = value; }
    inline void setQSplineSeries_SenderSignalIndex_IsBase(bool value) const { qsplineseries_sendersignalindex_isbase = value; }
    inline void setQSplineSeries_Receivers_IsBase(bool value) const { qsplineseries_receivers_isbase = value; }
    inline void setQSplineSeries_IsSignalConnected_IsBase(bool value) const { qsplineseries_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsplineseries_metaobject_isbase) {
            qsplineseries_metaobject_isbase = false;
            return QSplineSeries::metaObject();
        }
        auto metaobject_cb = qsplineseries_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QSplineSeries::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsplineseries_metacast_isbase) {
            qsplineseries_metacast_isbase = false;
            return QSplineSeries::qt_metacast(param1);
        }
        auto metacast_cb = qsplineseries_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QSplineSeries::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsplineseries_metacall_isbase) {
            qsplineseries_metacall_isbase = false;
            return QSplineSeries::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qsplineseries_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSplineSeries::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qsplineseries_type_isbase) {
            qsplineseries_type_isbase = false;
            return QSplineSeries::type();
        }
        auto type_cb = qsplineseries_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        }
        return QSplineSeries::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPen(const QPen& pen) override {
        if (qsplineseries_setpen_isbase) {
            qsplineseries_setpen_isbase = false;
            QSplineSeries::setPen(pen);
            return;
        }
        auto setpen_cb = qsplineseries_setpen_callback;
        if (setpen_cb) {
            const QPen& pen_ret = pen;
            // Cast returned reference into pointer
            QPen* cbval1 = const_cast<QPen*>(&pen_ret);

            setpen_cb(this, cbval1);
            return;
        }
        QSplineSeries::setPen(pen);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBrush(const QBrush& brush) override {
        if (qsplineseries_setbrush_isbase) {
            qsplineseries_setbrush_isbase = false;
            QSplineSeries::setBrush(brush);
            return;
        }
        auto setbrush_cb = qsplineseries_setbrush_callback;
        if (setbrush_cb) {
            const QBrush& brush_ret = brush;
            // Cast returned reference into pointer
            QBrush* cbval1 = const_cast<QBrush*>(&brush_ret);

            setbrush_cb(this, cbval1);
            return;
        }
        QSplineSeries::setBrush(brush);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& color) override {
        if (qsplineseries_setcolor_isbase) {
            qsplineseries_setcolor_isbase = false;
            QSplineSeries::setColor(color);
            return;
        }
        auto setcolor_cb = qsplineseries_setcolor_callback;
        if (setcolor_cb) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);

            setcolor_cb(this, cbval1);
            return;
        }
        QSplineSeries::setColor(color);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color() const override {
        if (qsplineseries_color_isbase) {
            qsplineseries_color_isbase = false;
            return QSplineSeries::color();
        }
        auto color_cb = qsplineseries_color_callback;
        if (color_cb) {
            QColor* callback_ret = color_cb();
            return *callback_ret;
        }
        return QSplineSeries::color();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsplineseries_event_isbase) {
            qsplineseries_event_isbase = false;
            return QSplineSeries::event(event);
        }
        auto event_cb = qsplineseries_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QSplineSeries::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsplineseries_eventfilter_isbase) {
            qsplineseries_eventfilter_isbase = false;
            return QSplineSeries::eventFilter(watched, event);
        }
        auto eventfilter_cb = qsplineseries_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSplineSeries::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsplineseries_timerevent_isbase) {
            qsplineseries_timerevent_isbase = false;
            QSplineSeries::timerEvent(event);
            return;
        }
        auto timerevent_cb = qsplineseries_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QSplineSeries::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsplineseries_childevent_isbase) {
            qsplineseries_childevent_isbase = false;
            QSplineSeries::childEvent(event);
            return;
        }
        auto childevent_cb = qsplineseries_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QSplineSeries::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsplineseries_customevent_isbase) {
            qsplineseries_customevent_isbase = false;
            QSplineSeries::customEvent(event);
            return;
        }
        auto customevent_cb = qsplineseries_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QSplineSeries::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsplineseries_connectnotify_isbase) {
            qsplineseries_connectnotify_isbase = false;
            QSplineSeries::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qsplineseries_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QSplineSeries::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsplineseries_disconnectnotify_isbase) {
            qsplineseries_disconnectnotify_isbase = false;
            QSplineSeries::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qsplineseries_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QSplineSeries::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsplineseries_sender_isbase) {
            qsplineseries_sender_isbase = false;
            return QSplineSeries::sender();
        }
        auto sender_cb = qsplineseries_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QSplineSeries::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsplineseries_sendersignalindex_isbase) {
            qsplineseries_sendersignalindex_isbase = false;
            return QSplineSeries::senderSignalIndex();
        }
        auto sendersignalindex_cb = qsplineseries_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QSplineSeries::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsplineseries_receivers_isbase) {
            qsplineseries_receivers_isbase = false;
            return QSplineSeries::receivers(signal);
        }
        auto receivers_cb = qsplineseries_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSplineSeries::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsplineseries_issignalconnected_isbase) {
            qsplineseries_issignalconnected_isbase = false;
            return QSplineSeries::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qsplineseries_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QSplineSeries::isSignalConnected(signal);
    }

    // Friend functions
    friend void QSplineSeries_TimerEvent(QSplineSeries* self, QTimerEvent* event);
    friend void QSplineSeries_SuperTimerEvent(QSplineSeries* self, QTimerEvent* event);
    friend void QSplineSeries_ChildEvent(QSplineSeries* self, QChildEvent* event);
    friend void QSplineSeries_SuperChildEvent(QSplineSeries* self, QChildEvent* event);
    friend void QSplineSeries_CustomEvent(QSplineSeries* self, QEvent* event);
    friend void QSplineSeries_SuperCustomEvent(QSplineSeries* self, QEvent* event);
    friend void QSplineSeries_ConnectNotify(QSplineSeries* self, const QMetaMethod* signal);
    friend void QSplineSeries_SuperConnectNotify(QSplineSeries* self, const QMetaMethod* signal);
    friend void QSplineSeries_DisconnectNotify(QSplineSeries* self, const QMetaMethod* signal);
    friend void QSplineSeries_SuperDisconnectNotify(QSplineSeries* self, const QMetaMethod* signal);
    friend QObject* QSplineSeries_Sender(const QSplineSeries* self);
    friend QObject* QSplineSeries_SuperSender(const QSplineSeries* self);
    friend int QSplineSeries_SenderSignalIndex(const QSplineSeries* self);
    friend int QSplineSeries_SuperSenderSignalIndex(const QSplineSeries* self);
    friend int QSplineSeries_Receivers(const QSplineSeries* self, const char* signal);
    friend int QSplineSeries_SuperReceivers(const QSplineSeries* self, const char* signal);
    friend bool QSplineSeries_IsSignalConnected(const QSplineSeries* self, const QMetaMethod* signal);
    friend bool QSplineSeries_SuperIsSignalConnected(const QSplineSeries* self, const QMetaMethod* signal);
};

#endif
