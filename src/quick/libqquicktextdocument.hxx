#pragma once
#ifndef QUICK_LIBQQUICKTEXTDOCUMENT_HXX
#define QUICK_LIBQQUICKTEXTDOCUMENT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickTextDocument
class VirtualQQuickTextDocument final : public QQuickTextDocument {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuickTextDocument_MetaObject_Callback = QMetaObject* (*)(const QQuickTextDocument*);
    using QQuickTextDocument_Metacast_Callback = void* (*)(QQuickTextDocument*, const char*);
    using QQuickTextDocument_Metacall_Callback = int (*)(QQuickTextDocument*, int, int, void**);
    using QQuickTextDocument_Event_Callback = bool (*)(QQuickTextDocument*, QEvent*);
    using QQuickTextDocument_EventFilter_Callback = bool (*)(QQuickTextDocument*, QObject*, QEvent*);
    using QQuickTextDocument_TimerEvent_Callback = void (*)(QQuickTextDocument*, QTimerEvent*);
    using QQuickTextDocument_ChildEvent_Callback = void (*)(QQuickTextDocument*, QChildEvent*);
    using QQuickTextDocument_CustomEvent_Callback = void (*)(QQuickTextDocument*, QEvent*);
    using QQuickTextDocument_ConnectNotify_Callback = void (*)(QQuickTextDocument*, QMetaMethod*);
    using QQuickTextDocument_DisconnectNotify_Callback = void (*)(QQuickTextDocument*, QMetaMethod*);
    using QQuickTextDocument::isSignalConnected;
    using QQuickTextDocument::receivers;
    using QQuickTextDocument::sender;
    using QQuickTextDocument::senderSignalIndex;

    // Instance callback storage
    QQuickTextDocument_MetaObject_Callback qquicktextdocument_metaobject_callback = nullptr;
    QQuickTextDocument_Metacast_Callback qquicktextdocument_metacast_callback = nullptr;
    QQuickTextDocument_Metacall_Callback qquicktextdocument_metacall_callback = nullptr;
    QQuickTextDocument_Event_Callback qquicktextdocument_event_callback = nullptr;
    QQuickTextDocument_EventFilter_Callback qquicktextdocument_eventfilter_callback = nullptr;
    QQuickTextDocument_TimerEvent_Callback qquicktextdocument_timerevent_callback = nullptr;
    QQuickTextDocument_ChildEvent_Callback qquicktextdocument_childevent_callback = nullptr;
    QQuickTextDocument_CustomEvent_Callback qquicktextdocument_customevent_callback = nullptr;
    QQuickTextDocument_ConnectNotify_Callback qquicktextdocument_connectnotify_callback = nullptr;
    QQuickTextDocument_DisconnectNotify_Callback qquicktextdocument_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQuickTextDocument {
        using QQuickTextDocument::childEvent;
        using QQuickTextDocument::connectNotify;
        using QQuickTextDocument::customEvent;
        using QQuickTextDocument::disconnectNotify;
        using QQuickTextDocument::timerEvent;
    };

    VirtualQQuickTextDocument(QQuickItem* parent) : QQuickTextDocument(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquicktextdocument_metaobject_callback) {
            QMetaObject* callback_ret = qquicktextdocument_metaobject_callback(this);
            return callback_ret;
        }
        return QQuickTextDocument::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquicktextdocument_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquicktextdocument_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickTextDocument::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquicktextdocument_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquicktextdocument_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickTextDocument::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquicktextdocument_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qquicktextdocument_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickTextDocument::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquicktextdocument_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquicktextdocument_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickTextDocument::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquicktextdocument_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qquicktextdocument_timerevent_callback(this, cbval1);
            return;
        }
        QQuickTextDocument::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquicktextdocument_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquicktextdocument_childevent_callback(this, cbval1);
            return;
        }
        QQuickTextDocument::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquicktextdocument_customevent_callback) {
            QEvent* cbval1 = event;
            qquicktextdocument_customevent_callback(this, cbval1);
            return;
        }
        QQuickTextDocument::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquicktextdocument_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquicktextdocument_connectnotify_callback(this, cbval1);
            return;
        }
        QQuickTextDocument::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquicktextdocument_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquicktextdocument_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuickTextDocument::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQuickTextDocument_SuperTimerEvent(QQuickTextDocument* self, QTimerEvent* event);
    friend void QQuickTextDocument_SuperChildEvent(QQuickTextDocument* self, QChildEvent* event);
    friend void QQuickTextDocument_SuperCustomEvent(QQuickTextDocument* self, QEvent* event);
    friend void QQuickTextDocument_SuperConnectNotify(QQuickTextDocument* self, const QMetaMethod* signal);
    friend void QQuickTextDocument_SuperDisconnectNotify(QQuickTextDocument* self, const QMetaMethod* signal);
};

#endif
