#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQLINESERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQLINESERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QLineSeries so that we can call protected methods
class VirtualQLineSeries final : public QLineSeries {

  public:
    // Virtual class boolean flag
    bool isVirtualQLineSeries = true;

    // Virtual class public types (including callbacks)
    using QLineSeries_Metacall_Callback = int (*)(QLineSeries*, int, int, void**);
    using QLineSeries_Type_Callback = int (*)();
    using QLineSeries_SetPen_Callback = void (*)(QLineSeries*, QPen*);
    using QLineSeries_SetBrush_Callback = void (*)(QLineSeries*, QBrush*);
    using QLineSeries_SetColor_Callback = void (*)(QLineSeries*, QColor*);
    using QLineSeries_Color_Callback = QColor* (*)();
    using QLineSeries_Event_Callback = bool (*)(QLineSeries*, QEvent*);
    using QLineSeries_EventFilter_Callback = bool (*)(QLineSeries*, QObject*, QEvent*);
    using QLineSeries_TimerEvent_Callback = void (*)(QLineSeries*, QTimerEvent*);
    using QLineSeries_ChildEvent_Callback = void (*)(QLineSeries*, QChildEvent*);
    using QLineSeries_CustomEvent_Callback = void (*)(QLineSeries*, QEvent*);
    using QLineSeries_ConnectNotify_Callback = void (*)(QLineSeries*, QMetaMethod*);
    using QLineSeries_DisconnectNotify_Callback = void (*)(QLineSeries*, QMetaMethod*);
    using QLineSeries_Sender_Callback = QObject* (*)();
    using QLineSeries_SenderSignalIndex_Callback = int (*)();
    using QLineSeries_Receivers_Callback = int (*)(const QLineSeries*, const char*);
    using QLineSeries_IsSignalConnected_Callback = bool (*)(const QLineSeries*, QMetaMethod*);

  protected:
    // Instance callback storage
    QLineSeries_Metacall_Callback qlineseries_metacall_callback = nullptr;
    QLineSeries_Type_Callback qlineseries_type_callback = nullptr;
    QLineSeries_SetPen_Callback qlineseries_setpen_callback = nullptr;
    QLineSeries_SetBrush_Callback qlineseries_setbrush_callback = nullptr;
    QLineSeries_SetColor_Callback qlineseries_setcolor_callback = nullptr;
    QLineSeries_Color_Callback qlineseries_color_callback = nullptr;
    QLineSeries_Event_Callback qlineseries_event_callback = nullptr;
    QLineSeries_EventFilter_Callback qlineseries_eventfilter_callback = nullptr;
    QLineSeries_TimerEvent_Callback qlineseries_timerevent_callback = nullptr;
    QLineSeries_ChildEvent_Callback qlineseries_childevent_callback = nullptr;
    QLineSeries_CustomEvent_Callback qlineseries_customevent_callback = nullptr;
    QLineSeries_ConnectNotify_Callback qlineseries_connectnotify_callback = nullptr;
    QLineSeries_DisconnectNotify_Callback qlineseries_disconnectnotify_callback = nullptr;
    QLineSeries_Sender_Callback qlineseries_sender_callback = nullptr;
    QLineSeries_SenderSignalIndex_Callback qlineseries_sendersignalindex_callback = nullptr;
    QLineSeries_Receivers_Callback qlineseries_receivers_callback = nullptr;
    QLineSeries_IsSignalConnected_Callback qlineseries_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qlineseries_metacall_isbase = false;
    mutable bool qlineseries_type_isbase = false;
    mutable bool qlineseries_setpen_isbase = false;
    mutable bool qlineseries_setbrush_isbase = false;
    mutable bool qlineseries_setcolor_isbase = false;
    mutable bool qlineseries_color_isbase = false;
    mutable bool qlineseries_event_isbase = false;
    mutable bool qlineseries_eventfilter_isbase = false;
    mutable bool qlineseries_timerevent_isbase = false;
    mutable bool qlineseries_childevent_isbase = false;
    mutable bool qlineseries_customevent_isbase = false;
    mutable bool qlineseries_connectnotify_isbase = false;
    mutable bool qlineseries_disconnectnotify_isbase = false;
    mutable bool qlineseries_sender_isbase = false;
    mutable bool qlineseries_sendersignalindex_isbase = false;
    mutable bool qlineseries_receivers_isbase = false;
    mutable bool qlineseries_issignalconnected_isbase = false;

  public:
    VirtualQLineSeries() : QLineSeries() {};
    VirtualQLineSeries(QObject* parent) : QLineSeries(parent) {};

    ~VirtualQLineSeries() {
        qlineseries_metacall_callback = nullptr;
        qlineseries_type_callback = nullptr;
        qlineseries_setpen_callback = nullptr;
        qlineseries_setbrush_callback = nullptr;
        qlineseries_setcolor_callback = nullptr;
        qlineseries_color_callback = nullptr;
        qlineseries_event_callback = nullptr;
        qlineseries_eventfilter_callback = nullptr;
        qlineseries_timerevent_callback = nullptr;
        qlineseries_childevent_callback = nullptr;
        qlineseries_customevent_callback = nullptr;
        qlineseries_connectnotify_callback = nullptr;
        qlineseries_disconnectnotify_callback = nullptr;
        qlineseries_sender_callback = nullptr;
        qlineseries_sendersignalindex_callback = nullptr;
        qlineseries_receivers_callback = nullptr;
        qlineseries_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQLineSeries_Metacall_Callback(QLineSeries_Metacall_Callback cb) { qlineseries_metacall_callback = cb; }
    inline void setQLineSeries_Type_Callback(QLineSeries_Type_Callback cb) { qlineseries_type_callback = cb; }
    inline void setQLineSeries_SetPen_Callback(QLineSeries_SetPen_Callback cb) { qlineseries_setpen_callback = cb; }
    inline void setQLineSeries_SetBrush_Callback(QLineSeries_SetBrush_Callback cb) { qlineseries_setbrush_callback = cb; }
    inline void setQLineSeries_SetColor_Callback(QLineSeries_SetColor_Callback cb) { qlineseries_setcolor_callback = cb; }
    inline void setQLineSeries_Color_Callback(QLineSeries_Color_Callback cb) { qlineseries_color_callback = cb; }
    inline void setQLineSeries_Event_Callback(QLineSeries_Event_Callback cb) { qlineseries_event_callback = cb; }
    inline void setQLineSeries_EventFilter_Callback(QLineSeries_EventFilter_Callback cb) { qlineseries_eventfilter_callback = cb; }
    inline void setQLineSeries_TimerEvent_Callback(QLineSeries_TimerEvent_Callback cb) { qlineseries_timerevent_callback = cb; }
    inline void setQLineSeries_ChildEvent_Callback(QLineSeries_ChildEvent_Callback cb) { qlineseries_childevent_callback = cb; }
    inline void setQLineSeries_CustomEvent_Callback(QLineSeries_CustomEvent_Callback cb) { qlineseries_customevent_callback = cb; }
    inline void setQLineSeries_ConnectNotify_Callback(QLineSeries_ConnectNotify_Callback cb) { qlineseries_connectnotify_callback = cb; }
    inline void setQLineSeries_DisconnectNotify_Callback(QLineSeries_DisconnectNotify_Callback cb) { qlineseries_disconnectnotify_callback = cb; }
    inline void setQLineSeries_Sender_Callback(QLineSeries_Sender_Callback cb) { qlineseries_sender_callback = cb; }
    inline void setQLineSeries_SenderSignalIndex_Callback(QLineSeries_SenderSignalIndex_Callback cb) { qlineseries_sendersignalindex_callback = cb; }
    inline void setQLineSeries_Receivers_Callback(QLineSeries_Receivers_Callback cb) { qlineseries_receivers_callback = cb; }
    inline void setQLineSeries_IsSignalConnected_Callback(QLineSeries_IsSignalConnected_Callback cb) { qlineseries_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQLineSeries_Metacall_IsBase(bool value) const { qlineseries_metacall_isbase = value; }
    inline void setQLineSeries_Type_IsBase(bool value) const { qlineseries_type_isbase = value; }
    inline void setQLineSeries_SetPen_IsBase(bool value) const { qlineseries_setpen_isbase = value; }
    inline void setQLineSeries_SetBrush_IsBase(bool value) const { qlineseries_setbrush_isbase = value; }
    inline void setQLineSeries_SetColor_IsBase(bool value) const { qlineseries_setcolor_isbase = value; }
    inline void setQLineSeries_Color_IsBase(bool value) const { qlineseries_color_isbase = value; }
    inline void setQLineSeries_Event_IsBase(bool value) const { qlineseries_event_isbase = value; }
    inline void setQLineSeries_EventFilter_IsBase(bool value) const { qlineseries_eventfilter_isbase = value; }
    inline void setQLineSeries_TimerEvent_IsBase(bool value) const { qlineseries_timerevent_isbase = value; }
    inline void setQLineSeries_ChildEvent_IsBase(bool value) const { qlineseries_childevent_isbase = value; }
    inline void setQLineSeries_CustomEvent_IsBase(bool value) const { qlineseries_customevent_isbase = value; }
    inline void setQLineSeries_ConnectNotify_IsBase(bool value) const { qlineseries_connectnotify_isbase = value; }
    inline void setQLineSeries_DisconnectNotify_IsBase(bool value) const { qlineseries_disconnectnotify_isbase = value; }
    inline void setQLineSeries_Sender_IsBase(bool value) const { qlineseries_sender_isbase = value; }
    inline void setQLineSeries_SenderSignalIndex_IsBase(bool value) const { qlineseries_sendersignalindex_isbase = value; }
    inline void setQLineSeries_Receivers_IsBase(bool value) const { qlineseries_receivers_isbase = value; }
    inline void setQLineSeries_IsSignalConnected_IsBase(bool value) const { qlineseries_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlineseries_metacall_isbase) {
            qlineseries_metacall_isbase = false;
            return QLineSeries::qt_metacall(param1, param2, param3);
        } else if (qlineseries_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qlineseries_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QLineSeries::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qlineseries_type_isbase) {
            qlineseries_type_isbase = false;
            return QLineSeries::type();
        } else if (qlineseries_type_callback != nullptr) {
            int callback_ret = qlineseries_type_callback();
            return static_cast<QAbstractSeries::SeriesType>(callback_ret);
        } else {
            return QLineSeries::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPen(const QPen& pen) override {
        if (qlineseries_setpen_isbase) {
            qlineseries_setpen_isbase = false;
            QLineSeries::setPen(pen);
        } else if (qlineseries_setpen_callback != nullptr) {
            const QPen& pen_ret = pen;
            // Cast returned reference into pointer
            QPen* cbval1 = const_cast<QPen*>(&pen_ret);

            qlineseries_setpen_callback(this, cbval1);
        } else {
            QLineSeries::setPen(pen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBrush(const QBrush& brush) override {
        if (qlineseries_setbrush_isbase) {
            qlineseries_setbrush_isbase = false;
            QLineSeries::setBrush(brush);
        } else if (qlineseries_setbrush_callback != nullptr) {
            const QBrush& brush_ret = brush;
            // Cast returned reference into pointer
            QBrush* cbval1 = const_cast<QBrush*>(&brush_ret);

            qlineseries_setbrush_callback(this, cbval1);
        } else {
            QLineSeries::setBrush(brush);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& color) override {
        if (qlineseries_setcolor_isbase) {
            qlineseries_setcolor_isbase = false;
            QLineSeries::setColor(color);
        } else if (qlineseries_setcolor_callback != nullptr) {
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&color_ret);

            qlineseries_setcolor_callback(this, cbval1);
        } else {
            QLineSeries::setColor(color);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color() const override {
        if (qlineseries_color_isbase) {
            qlineseries_color_isbase = false;
            return QLineSeries::color();
        } else if (qlineseries_color_callback != nullptr) {
            QColor* callback_ret = qlineseries_color_callback();
            return *callback_ret;
        } else {
            return QLineSeries::color();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qlineseries_event_isbase) {
            qlineseries_event_isbase = false;
            return QLineSeries::event(event);
        } else if (qlineseries_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qlineseries_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QLineSeries::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlineseries_eventfilter_isbase) {
            qlineseries_eventfilter_isbase = false;
            return QLineSeries::eventFilter(watched, event);
        } else if (qlineseries_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qlineseries_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QLineSeries::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlineseries_timerevent_isbase) {
            qlineseries_timerevent_isbase = false;
            QLineSeries::timerEvent(event);
        } else if (qlineseries_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qlineseries_timerevent_callback(this, cbval1);
        } else {
            QLineSeries::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlineseries_childevent_isbase) {
            qlineseries_childevent_isbase = false;
            QLineSeries::childEvent(event);
        } else if (qlineseries_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qlineseries_childevent_callback(this, cbval1);
        } else {
            QLineSeries::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlineseries_customevent_isbase) {
            qlineseries_customevent_isbase = false;
            QLineSeries::customEvent(event);
        } else if (qlineseries_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qlineseries_customevent_callback(this, cbval1);
        } else {
            QLineSeries::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlineseries_connectnotify_isbase) {
            qlineseries_connectnotify_isbase = false;
            QLineSeries::connectNotify(signal);
        } else if (qlineseries_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qlineseries_connectnotify_callback(this, cbval1);
        } else {
            QLineSeries::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlineseries_disconnectnotify_isbase) {
            qlineseries_disconnectnotify_isbase = false;
            QLineSeries::disconnectNotify(signal);
        } else if (qlineseries_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qlineseries_disconnectnotify_callback(this, cbval1);
        } else {
            QLineSeries::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qlineseries_sender_isbase) {
            qlineseries_sender_isbase = false;
            return QLineSeries::sender();
        } else if (qlineseries_sender_callback != nullptr) {
            QObject* callback_ret = qlineseries_sender_callback();
            return callback_ret;
        } else {
            return QLineSeries::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qlineseries_sendersignalindex_isbase) {
            qlineseries_sendersignalindex_isbase = false;
            return QLineSeries::senderSignalIndex();
        } else if (qlineseries_sendersignalindex_callback != nullptr) {
            int callback_ret = qlineseries_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QLineSeries::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qlineseries_receivers_isbase) {
            qlineseries_receivers_isbase = false;
            return QLineSeries::receivers(signal);
        } else if (qlineseries_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qlineseries_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QLineSeries::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qlineseries_issignalconnected_isbase) {
            qlineseries_issignalconnected_isbase = false;
            return QLineSeries::isSignalConnected(signal);
        } else if (qlineseries_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qlineseries_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QLineSeries::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QLineSeries_TimerEvent(QLineSeries* self, QTimerEvent* event);
    friend void QLineSeries_QBaseTimerEvent(QLineSeries* self, QTimerEvent* event);
    friend void QLineSeries_ChildEvent(QLineSeries* self, QChildEvent* event);
    friend void QLineSeries_QBaseChildEvent(QLineSeries* self, QChildEvent* event);
    friend void QLineSeries_CustomEvent(QLineSeries* self, QEvent* event);
    friend void QLineSeries_QBaseCustomEvent(QLineSeries* self, QEvent* event);
    friend void QLineSeries_ConnectNotify(QLineSeries* self, const QMetaMethod* signal);
    friend void QLineSeries_QBaseConnectNotify(QLineSeries* self, const QMetaMethod* signal);
    friend void QLineSeries_DisconnectNotify(QLineSeries* self, const QMetaMethod* signal);
    friend void QLineSeries_QBaseDisconnectNotify(QLineSeries* self, const QMetaMethod* signal);
    friend QObject* QLineSeries_Sender(const QLineSeries* self);
    friend QObject* QLineSeries_QBaseSender(const QLineSeries* self);
    friend int QLineSeries_SenderSignalIndex(const QLineSeries* self);
    friend int QLineSeries_QBaseSenderSignalIndex(const QLineSeries* self);
    friend int QLineSeries_Receivers(const QLineSeries* self, const char* signal);
    friend int QLineSeries_QBaseReceivers(const QLineSeries* self, const char* signal);
    friend bool QLineSeries_IsSignalConnected(const QLineSeries* self, const QMetaMethod* signal);
    friend bool QLineSeries_QBaseIsSignalConnected(const QLineSeries* self, const QMetaMethod* signal);
};

#endif
