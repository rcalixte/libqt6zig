#pragma once
#ifndef PDF_LIBQPDFPAGERENDERER_HXX
#define PDF_LIBQPDFPAGERENDERER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPdfPageRenderer
class VirtualQPdfPageRenderer final : public QPdfPageRenderer {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPdfPageRenderer_MetaObject_Callback = QMetaObject* (*)(const QPdfPageRenderer*);
    using QPdfPageRenderer_Metacast_Callback = void* (*)(QPdfPageRenderer*, const char*);
    using QPdfPageRenderer_Metacall_Callback = int (*)(QPdfPageRenderer*, int, int, void**);
    using QPdfPageRenderer_Event_Callback = bool (*)(QPdfPageRenderer*, QEvent*);
    using QPdfPageRenderer_EventFilter_Callback = bool (*)(QPdfPageRenderer*, QObject*, QEvent*);
    using QPdfPageRenderer_TimerEvent_Callback = void (*)(QPdfPageRenderer*, QTimerEvent*);
    using QPdfPageRenderer_ChildEvent_Callback = void (*)(QPdfPageRenderer*, QChildEvent*);
    using QPdfPageRenderer_CustomEvent_Callback = void (*)(QPdfPageRenderer*, QEvent*);
    using QPdfPageRenderer_ConnectNotify_Callback = void (*)(QPdfPageRenderer*, QMetaMethod*);
    using QPdfPageRenderer_DisconnectNotify_Callback = void (*)(QPdfPageRenderer*, QMetaMethod*);
    using QPdfPageRenderer::isSignalConnected;
    using QPdfPageRenderer::receivers;
    using QPdfPageRenderer::sender;
    using QPdfPageRenderer::senderSignalIndex;

    // Instance callback storage
    QPdfPageRenderer_MetaObject_Callback qpdfpagerenderer_metaobject_callback = nullptr;
    QPdfPageRenderer_Metacast_Callback qpdfpagerenderer_metacast_callback = nullptr;
    QPdfPageRenderer_Metacall_Callback qpdfpagerenderer_metacall_callback = nullptr;
    QPdfPageRenderer_Event_Callback qpdfpagerenderer_event_callback = nullptr;
    QPdfPageRenderer_EventFilter_Callback qpdfpagerenderer_eventfilter_callback = nullptr;
    QPdfPageRenderer_TimerEvent_Callback qpdfpagerenderer_timerevent_callback = nullptr;
    QPdfPageRenderer_ChildEvent_Callback qpdfpagerenderer_childevent_callback = nullptr;
    QPdfPageRenderer_CustomEvent_Callback qpdfpagerenderer_customevent_callback = nullptr;
    QPdfPageRenderer_ConnectNotify_Callback qpdfpagerenderer_connectnotify_callback = nullptr;
    QPdfPageRenderer_DisconnectNotify_Callback qpdfpagerenderer_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPdfPageRenderer {
        using QPdfPageRenderer::childEvent;
        using QPdfPageRenderer::connectNotify;
        using QPdfPageRenderer::customEvent;
        using QPdfPageRenderer::disconnectNotify;
        using QPdfPageRenderer::timerEvent;
    };

    VirtualQPdfPageRenderer() : QPdfPageRenderer() {};
    VirtualQPdfPageRenderer(QObject* parent) : QPdfPageRenderer(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpdfpagerenderer_metaobject_callback) {
            QMetaObject* callback_ret = qpdfpagerenderer_metaobject_callback(this);
            return callback_ret;
        }
        return QPdfPageRenderer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpdfpagerenderer_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpdfpagerenderer_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfPageRenderer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpdfpagerenderer_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpdfpagerenderer_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPdfPageRenderer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpdfpagerenderer_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qpdfpagerenderer_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfPageRenderer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpdfpagerenderer_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpdfpagerenderer_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPdfPageRenderer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpdfpagerenderer_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpdfpagerenderer_timerevent_callback(this, cbval1);
            return;
        }
        QPdfPageRenderer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpdfpagerenderer_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpdfpagerenderer_childevent_callback(this, cbval1);
            return;
        }
        QPdfPageRenderer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpdfpagerenderer_customevent_callback) {
            QEvent* cbval1 = event;
            qpdfpagerenderer_customevent_callback(this, cbval1);
            return;
        }
        QPdfPageRenderer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpdfpagerenderer_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpdfpagerenderer_connectnotify_callback(this, cbval1);
            return;
        }
        QPdfPageRenderer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpdfpagerenderer_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpdfpagerenderer_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPdfPageRenderer::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPdfPageRenderer_SuperTimerEvent(QPdfPageRenderer* self, QTimerEvent* event);
    friend void QPdfPageRenderer_SuperChildEvent(QPdfPageRenderer* self, QChildEvent* event);
    friend void QPdfPageRenderer_SuperCustomEvent(QPdfPageRenderer* self, QEvent* event);
    friend void QPdfPageRenderer_SuperConnectNotify(QPdfPageRenderer* self, const QMetaMethod* signal);
    friend void QPdfPageRenderer_SuperDisconnectNotify(QPdfPageRenderer* self, const QMetaMethod* signal);
};

#endif
