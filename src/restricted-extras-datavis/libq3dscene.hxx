#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DSCENE_HXX
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DSCENE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Q3DScene
class VirtualQ3DScene final : public Q3DScene {
  public:
    // Virtual class public types (including callbacks and access types)
    using Q3DScene_MetaObject_Callback = QMetaObject* (*)(const Q3DScene*);
    using Q3DScene_Metacast_Callback = void* (*)(Q3DScene*, const char*);
    using Q3DScene_Metacall_Callback = int (*)(Q3DScene*, int, int, void**);
    using Q3DScene_Event_Callback = bool (*)(Q3DScene*, QEvent*);
    using Q3DScene_EventFilter_Callback = bool (*)(Q3DScene*, QObject*, QEvent*);
    using Q3DScene_TimerEvent_Callback = void (*)(Q3DScene*, QTimerEvent*);
    using Q3DScene_ChildEvent_Callback = void (*)(Q3DScene*, QChildEvent*);
    using Q3DScene_CustomEvent_Callback = void (*)(Q3DScene*, QEvent*);
    using Q3DScene_ConnectNotify_Callback = void (*)(Q3DScene*, QMetaMethod*);
    using Q3DScene_DisconnectNotify_Callback = void (*)(Q3DScene*, QMetaMethod*);
    using Q3DScene::isSignalConnected;
    using Q3DScene::receivers;
    using Q3DScene::sender;
    using Q3DScene::senderSignalIndex;

    // Instance callback storage
    Q3DScene_MetaObject_Callback q3dscene_metaobject_callback = nullptr;
    Q3DScene_Metacast_Callback q3dscene_metacast_callback = nullptr;
    Q3DScene_Metacall_Callback q3dscene_metacall_callback = nullptr;
    Q3DScene_Event_Callback q3dscene_event_callback = nullptr;
    Q3DScene_EventFilter_Callback q3dscene_eventfilter_callback = nullptr;
    Q3DScene_TimerEvent_Callback q3dscene_timerevent_callback = nullptr;
    Q3DScene_ChildEvent_Callback q3dscene_childevent_callback = nullptr;
    Q3DScene_CustomEvent_Callback q3dscene_customevent_callback = nullptr;
    Q3DScene_ConnectNotify_Callback q3dscene_connectnotify_callback = nullptr;
    Q3DScene_DisconnectNotify_Callback q3dscene_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Q3DScene {
        using Q3DScene::childEvent;
        using Q3DScene::connectNotify;
        using Q3DScene::customEvent;
        using Q3DScene::disconnectNotify;
        using Q3DScene::timerEvent;
    };

    VirtualQ3DScene() : Q3DScene() {};
    VirtualQ3DScene(QObject* parent) : Q3DScene(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (q3dscene_metaobject_callback) {
            QMetaObject* callback_ret = q3dscene_metaobject_callback(this);
            return callback_ret;
        }
        return Q3DScene::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (q3dscene_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = q3dscene_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Q3DScene::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (q3dscene_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = q3dscene_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Q3DScene::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (q3dscene_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = q3dscene_event_callback(this, cbval1);
            return callback_ret;
        }
        return Q3DScene::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (q3dscene_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = q3dscene_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Q3DScene::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (q3dscene_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            q3dscene_timerevent_callback(this, cbval1);
            return;
        }
        Q3DScene::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (q3dscene_childevent_callback) {
            QChildEvent* cbval1 = event;
            q3dscene_childevent_callback(this, cbval1);
            return;
        }
        Q3DScene::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (q3dscene_customevent_callback) {
            QEvent* cbval1 = event;
            q3dscene_customevent_callback(this, cbval1);
            return;
        }
        Q3DScene::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (q3dscene_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            q3dscene_connectnotify_callback(this, cbval1);
            return;
        }
        Q3DScene::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (q3dscene_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            q3dscene_disconnectnotify_callback(this, cbval1);
            return;
        }
        Q3DScene::disconnectNotify(signal);
    }

    // Friend functions
    friend void Q3DScene_SuperTimerEvent(Q3DScene* self, QTimerEvent* event);
    friend void Q3DScene_SuperChildEvent(Q3DScene* self, QChildEvent* event);
    friend void Q3DScene_SuperCustomEvent(Q3DScene* self, QEvent* event);
    friend void Q3DScene_SuperConnectNotify(Q3DScene* self, const QMetaMethod* signal);
    friend void Q3DScene_SuperDisconnectNotify(Q3DScene* self, const QMetaMethod* signal);
};

#endif
