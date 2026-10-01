#pragma once
#ifndef SVG_LIBQSVGRENDERER_HXX
#define SVG_LIBQSVGRENDERER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSvgRenderer
class VirtualQSvgRenderer final : public QSvgRenderer {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSvgRenderer_MetaObject_Callback = QMetaObject* (*)(const QSvgRenderer*);
    using QSvgRenderer_Metacast_Callback = void* (*)(QSvgRenderer*, const char*);
    using QSvgRenderer_Metacall_Callback = int (*)(QSvgRenderer*, int, int, void**);
    using QSvgRenderer_Event_Callback = bool (*)(QSvgRenderer*, QEvent*);
    using QSvgRenderer_EventFilter_Callback = bool (*)(QSvgRenderer*, QObject*, QEvent*);
    using QSvgRenderer_TimerEvent_Callback = void (*)(QSvgRenderer*, QTimerEvent*);
    using QSvgRenderer_ChildEvent_Callback = void (*)(QSvgRenderer*, QChildEvent*);
    using QSvgRenderer_CustomEvent_Callback = void (*)(QSvgRenderer*, QEvent*);
    using QSvgRenderer_ConnectNotify_Callback = void (*)(QSvgRenderer*, QMetaMethod*);
    using QSvgRenderer_DisconnectNotify_Callback = void (*)(QSvgRenderer*, QMetaMethod*);
    using QSvgRenderer::isSignalConnected;
    using QSvgRenderer::receivers;
    using QSvgRenderer::sender;
    using QSvgRenderer::senderSignalIndex;

    // Instance callback storage
    QSvgRenderer_MetaObject_Callback qsvgrenderer_metaobject_callback = nullptr;
    QSvgRenderer_Metacast_Callback qsvgrenderer_metacast_callback = nullptr;
    QSvgRenderer_Metacall_Callback qsvgrenderer_metacall_callback = nullptr;
    QSvgRenderer_Event_Callback qsvgrenderer_event_callback = nullptr;
    QSvgRenderer_EventFilter_Callback qsvgrenderer_eventfilter_callback = nullptr;
    QSvgRenderer_TimerEvent_Callback qsvgrenderer_timerevent_callback = nullptr;
    QSvgRenderer_ChildEvent_Callback qsvgrenderer_childevent_callback = nullptr;
    QSvgRenderer_CustomEvent_Callback qsvgrenderer_customevent_callback = nullptr;
    QSvgRenderer_ConnectNotify_Callback qsvgrenderer_connectnotify_callback = nullptr;
    QSvgRenderer_DisconnectNotify_Callback qsvgrenderer_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSvgRenderer {
        using QSvgRenderer::childEvent;
        using QSvgRenderer::connectNotify;
        using QSvgRenderer::customEvent;
        using QSvgRenderer::disconnectNotify;
        using QSvgRenderer::timerEvent;
    };

    VirtualQSvgRenderer() : QSvgRenderer() {};
    VirtualQSvgRenderer(const QString& filename) : QSvgRenderer(filename) {};
    VirtualQSvgRenderer(const QByteArray& contents) : QSvgRenderer(contents) {};
    VirtualQSvgRenderer(QXmlStreamReader* contents) : QSvgRenderer(contents) {};
    VirtualQSvgRenderer(QObject* parent) : QSvgRenderer(parent) {};
    VirtualQSvgRenderer(const QString& filename, QObject* parent) : QSvgRenderer(filename, parent) {};
    VirtualQSvgRenderer(const QByteArray& contents, QObject* parent) : QSvgRenderer(contents, parent) {};
    VirtualQSvgRenderer(QXmlStreamReader* contents, QObject* parent) : QSvgRenderer(contents, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsvgrenderer_metaobject_callback) {
            QMetaObject* callback_ret = qsvgrenderer_metaobject_callback(this);
            return callback_ret;
        }
        return QSvgRenderer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsvgrenderer_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsvgrenderer_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSvgRenderer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsvgrenderer_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsvgrenderer_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSvgRenderer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsvgrenderer_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsvgrenderer_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSvgRenderer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsvgrenderer_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsvgrenderer_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSvgRenderer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsvgrenderer_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsvgrenderer_timerevent_callback(this, cbval1);
            return;
        }
        QSvgRenderer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsvgrenderer_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsvgrenderer_childevent_callback(this, cbval1);
            return;
        }
        QSvgRenderer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsvgrenderer_customevent_callback) {
            QEvent* cbval1 = event;
            qsvgrenderer_customevent_callback(this, cbval1);
            return;
        }
        QSvgRenderer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsvgrenderer_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsvgrenderer_connectnotify_callback(this, cbval1);
            return;
        }
        QSvgRenderer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsvgrenderer_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsvgrenderer_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSvgRenderer::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSvgRenderer_SuperTimerEvent(QSvgRenderer* self, QTimerEvent* event);
    friend void QSvgRenderer_SuperChildEvent(QSvgRenderer* self, QChildEvent* event);
    friend void QSvgRenderer_SuperCustomEvent(QSvgRenderer* self, QEvent* event);
    friend void QSvgRenderer_SuperConnectNotify(QSvgRenderer* self, const QMetaMethod* signal);
    friend void QSvgRenderer_SuperDisconnectNotify(QSvgRenderer* self, const QMetaMethod* signal);
};

#endif
