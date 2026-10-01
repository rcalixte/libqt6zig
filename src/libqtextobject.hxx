#pragma once
#ifndef LIBQTEXTOBJECT_HXX
#define LIBQTEXTOBJECT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTextFrame
class VirtualQTextFrame final : public QTextFrame {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTextFrame_MetaObject_Callback = QMetaObject* (*)(const QTextFrame*);
    using QTextFrame_Metacast_Callback = void* (*)(QTextFrame*, const char*);
    using QTextFrame_Metacall_Callback = int (*)(QTextFrame*, int, int, void**);
    using QTextFrame_Event_Callback = bool (*)(QTextFrame*, QEvent*);
    using QTextFrame_EventFilter_Callback = bool (*)(QTextFrame*, QObject*, QEvent*);
    using QTextFrame_TimerEvent_Callback = void (*)(QTextFrame*, QTimerEvent*);
    using QTextFrame_ChildEvent_Callback = void (*)(QTextFrame*, QChildEvent*);
    using QTextFrame_CustomEvent_Callback = void (*)(QTextFrame*, QEvent*);
    using QTextFrame_ConnectNotify_Callback = void (*)(QTextFrame*, QMetaMethod*);
    using QTextFrame_DisconnectNotify_Callback = void (*)(QTextFrame*, QMetaMethod*);
    using QTextFrame::isSignalConnected;
    using QTextFrame::receivers;
    using QTextFrame::sender;
    using QTextFrame::senderSignalIndex;
    using QTextFrame::setFormat;

    // Instance callback storage
    QTextFrame_MetaObject_Callback qtextframe_metaobject_callback = nullptr;
    QTextFrame_Metacast_Callback qtextframe_metacast_callback = nullptr;
    QTextFrame_Metacall_Callback qtextframe_metacall_callback = nullptr;
    QTextFrame_Event_Callback qtextframe_event_callback = nullptr;
    QTextFrame_EventFilter_Callback qtextframe_eventfilter_callback = nullptr;
    QTextFrame_TimerEvent_Callback qtextframe_timerevent_callback = nullptr;
    QTextFrame_ChildEvent_Callback qtextframe_childevent_callback = nullptr;
    QTextFrame_CustomEvent_Callback qtextframe_customevent_callback = nullptr;
    QTextFrame_ConnectNotify_Callback qtextframe_connectnotify_callback = nullptr;
    QTextFrame_DisconnectNotify_Callback qtextframe_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTextFrame {
        using QTextFrame::childEvent;
        using QTextFrame::connectNotify;
        using QTextFrame::customEvent;
        using QTextFrame::disconnectNotify;
        using QTextFrame::timerEvent;
    };

    VirtualQTextFrame(QTextDocument* doc) : QTextFrame(doc) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtextframe_metaobject_callback) {
            QMetaObject* callback_ret = qtextframe_metaobject_callback(this);
            return callback_ret;
        }
        return QTextFrame::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtextframe_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtextframe_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTextFrame::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtextframe_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtextframe_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTextFrame::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtextframe_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtextframe_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTextFrame::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtextframe_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtextframe_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTextFrame::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtextframe_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtextframe_timerevent_callback(this, cbval1);
            return;
        }
        QTextFrame::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtextframe_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtextframe_childevent_callback(this, cbval1);
            return;
        }
        QTextFrame::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtextframe_customevent_callback) {
            QEvent* cbval1 = event;
            qtextframe_customevent_callback(this, cbval1);
            return;
        }
        QTextFrame::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtextframe_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtextframe_connectnotify_callback(this, cbval1);
            return;
        }
        QTextFrame::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtextframe_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtextframe_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTextFrame::disconnectNotify(signal);
    }

    // Friend functions
    friend void QTextFrame_SuperTimerEvent(QTextFrame* self, QTimerEvent* event);
    friend void QTextFrame_SuperChildEvent(QTextFrame* self, QChildEvent* event);
    friend void QTextFrame_SuperCustomEvent(QTextFrame* self, QEvent* event);
    friend void QTextFrame_SuperConnectNotify(QTextFrame* self, const QMetaMethod* signal);
    friend void QTextFrame_SuperDisconnectNotify(QTextFrame* self, const QMetaMethod* signal);
};

#endif
