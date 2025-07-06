#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQSCATTERSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQSCATTERSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QScatterSeries so that we can call protected methods
class VirtualQScatterSeries final : public QScatterSeries {

  public:
    // Virtual class boolean flag
    bool isVirtualQScatterSeries = true;

    // Virtual class public types (including callbacks)
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

    ~VirtualQScatterSeries() {
        qscatterseries_metacall_callback = nullptr;
        qscatterseries_type_callback = nullptr;
        qscatterseries_setpen_callback = nullptr;
        qscatterseries_setbrush_callback = nullptr;
        qscatterseries_setcolor_callback = nullptr;
        qscatterseries_color_callback = nullptr;
        qscatterseries_event_callback = nullptr;
        qscatterseries_eventfilter_callback = nullptr;
        qscatterseries_timerevent_callback = nullptr;
        qscatterseries_childevent_callback = nullptr;
        qscatterseries_customevent_callback = nullptr;
        qscatterseries_connectnotify_callback = nullptr;
        qscatterseries_disconnectnotify_callback = nullptr;
        qscatterseries_sender_callback = nullptr;
        qscatterseries_sendersignalindex_callback = nullptr;
        qscatterseries_receivers_callback = nullptr;
        qscatterseries_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscatterseries_metacall_isbase) {
            qscatterseries_metacall_isbase = false;
            return QScatterSeries::qt_metacall(param1, param2, param3);
        } else if (qscatterseries_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscatterseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QScatterSeries::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qscatterseries_type_isbase) {
            qscatterseries_type_isbase = false;
            return QScatterSeries::type();
        } else if (qscatterseries_type_callback != nullptr) {
            int callback_ret = qscatterseries_type_callback();
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        } else {
            return QScatterSeries::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPen(const QPen& pen) override {
        if (qscatterseries_setpen_isbase) {
            qscatterseries_setpen_isbase = false;
            QScatterSeries::setPen(pen);
        } else if (qscatterseries_setpen_callback != nullptr) {
            const QPen& pen_ret = pen;
            // Cast returned reference into pointer
            QPen* cbval1 = const_cast<QPen*>(&pen_ret);

            qscatterseries_setpen_callback(this, cbval1);
        } else {
            QScatterSeries::setPen(pen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBrush(const QBrush& brush) override {
        if (qscatterseries_setbrush_isbase) {
            qscatterseries_setbrush_isbase = false;
            QScatterSeries::setBrush(brush);
        } else if (qscatterseries_setbrush_callback != nullptr) {
            const QBrush& brush_ret = brush;
            // Cast returned reference into pointer
            QBrush* cbval1 = const_cast<QBrush*>(&brush_ret);

            qscatterseries_setbrush_callback(this, cbval1);
        } else {
            QScatterSeries::setBrush(brush);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& color) override {
        if (qscatterseries_setcolor_isbase) {
            qscatterseries_setcolor_isbase = false;
            QScatterSeries::setColor(color);
        } else if (qscatterseries_setcolor_callback != nullptr) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);

            qscatterseries_setcolor_callback(this, cbval1);
        } else {
            QScatterSeries::setColor(color);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color() const override {
        if (qscatterseries_color_isbase) {
            qscatterseries_color_isbase = false;
            return QScatterSeries::color();
        } else if (qscatterseries_color_callback != nullptr) {
            QColor* callback_ret = qscatterseries_color_callback();
            return *callback_ret;
        } else {
            return QScatterSeries::color();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscatterseries_event_isbase) {
            qscatterseries_event_isbase = false;
            return QScatterSeries::event(event);
        } else if (qscatterseries_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscatterseries_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QScatterSeries::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscatterseries_eventfilter_isbase) {
            qscatterseries_eventfilter_isbase = false;
            return QScatterSeries::eventFilter(watched, event);
        } else if (qscatterseries_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscatterseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QScatterSeries::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscatterseries_timerevent_isbase) {
            qscatterseries_timerevent_isbase = false;
            QScatterSeries::timerEvent(event);
        } else if (qscatterseries_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscatterseries_timerevent_callback(this, cbval1);
        } else {
            QScatterSeries::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscatterseries_childevent_isbase) {
            qscatterseries_childevent_isbase = false;
            QScatterSeries::childEvent(event);
        } else if (qscatterseries_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscatterseries_childevent_callback(this, cbval1);
        } else {
            QScatterSeries::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscatterseries_customevent_isbase) {
            qscatterseries_customevent_isbase = false;
            QScatterSeries::customEvent(event);
        } else if (qscatterseries_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscatterseries_customevent_callback(this, cbval1);
        } else {
            QScatterSeries::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscatterseries_connectnotify_isbase) {
            qscatterseries_connectnotify_isbase = false;
            QScatterSeries::connectNotify(signal);
        } else if (qscatterseries_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscatterseries_connectnotify_callback(this, cbval1);
        } else {
            QScatterSeries::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscatterseries_disconnectnotify_isbase) {
            qscatterseries_disconnectnotify_isbase = false;
            QScatterSeries::disconnectNotify(signal);
        } else if (qscatterseries_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscatterseries_disconnectnotify_callback(this, cbval1);
        } else {
            QScatterSeries::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscatterseries_sender_isbase) {
            qscatterseries_sender_isbase = false;
            return QScatterSeries::sender();
        } else if (qscatterseries_sender_callback != nullptr) {
            QObject* callback_ret = qscatterseries_sender_callback();
            return callback_ret;
        } else {
            return QScatterSeries::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscatterseries_sendersignalindex_isbase) {
            qscatterseries_sendersignalindex_isbase = false;
            return QScatterSeries::senderSignalIndex();
        } else if (qscatterseries_sendersignalindex_callback != nullptr) {
            int callback_ret = qscatterseries_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QScatterSeries::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscatterseries_receivers_isbase) {
            qscatterseries_receivers_isbase = false;
            return QScatterSeries::receivers(signal);
        } else if (qscatterseries_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscatterseries_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QScatterSeries::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscatterseries_issignalconnected_isbase) {
            qscatterseries_issignalconnected_isbase = false;
            return QScatterSeries::isSignalConnected(signal);
        } else if (qscatterseries_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscatterseries_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QScatterSeries::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QScatterSeries_TimerEvent(QScatterSeries* self, QTimerEvent* event);
    friend void QScatterSeries_QBaseTimerEvent(QScatterSeries* self, QTimerEvent* event);
    friend void QScatterSeries_ChildEvent(QScatterSeries* self, QChildEvent* event);
    friend void QScatterSeries_QBaseChildEvent(QScatterSeries* self, QChildEvent* event);
    friend void QScatterSeries_CustomEvent(QScatterSeries* self, QEvent* event);
    friend void QScatterSeries_QBaseCustomEvent(QScatterSeries* self, QEvent* event);
    friend void QScatterSeries_ConnectNotify(QScatterSeries* self, const QMetaMethod* signal);
    friend void QScatterSeries_QBaseConnectNotify(QScatterSeries* self, const QMetaMethod* signal);
    friend void QScatterSeries_DisconnectNotify(QScatterSeries* self, const QMetaMethod* signal);
    friend void QScatterSeries_QBaseDisconnectNotify(QScatterSeries* self, const QMetaMethod* signal);
    friend QObject* QScatterSeries_Sender(const QScatterSeries* self);
    friend QObject* QScatterSeries_QBaseSender(const QScatterSeries* self);
    friend int QScatterSeries_SenderSignalIndex(const QScatterSeries* self);
    friend int QScatterSeries_QBaseSenderSignalIndex(const QScatterSeries* self);
    friend int QScatterSeries_Receivers(const QScatterSeries* self, const char* signal);
    friend int QScatterSeries_QBaseReceivers(const QScatterSeries* self, const char* signal);
    friend bool QScatterSeries_IsSignalConnected(const QScatterSeries* self, const QMetaMethod* signal);
    friend bool QScatterSeries_QBaseIsSignalConnected(const QScatterSeries* self, const QMetaMethod* signal);
};

#endif
