#pragma once
#ifndef EXTRAS_KIO_LIBKABSTRACTVIEWADAPTER_HXX
#define EXTRAS_KIO_LIBKABSTRACTVIEWADAPTER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KAbstractViewAdapter
class VirtualKAbstractViewAdapter : public KAbstractViewAdapter {
  public:
    // Virtual class public types (including callbacks and access types)
    using KAbstractViewAdapter_Model_Callback = QAbstractItemModel* (*)(const KAbstractViewAdapter*);
    using KAbstractViewAdapter_IconSize_Callback = QSize* (*)(const KAbstractViewAdapter*);
    using KAbstractViewAdapter_Palette_Callback = QPalette* (*)(const KAbstractViewAdapter*);
    using KAbstractViewAdapter_VisibleArea_Callback = QRect* (*)(const KAbstractViewAdapter*);
    using KAbstractViewAdapter_VisualRect_Callback = QRect* (*)(const KAbstractViewAdapter*, QModelIndex*);
    using KAbstractViewAdapter_Connect_Callback = void (*)(KAbstractViewAdapter*, int, QObject*, const char*);
    using KAbstractViewAdapter_MetaObject_Callback = QMetaObject* (*)(const KAbstractViewAdapter*);
    using KAbstractViewAdapter_Metacast_Callback = void* (*)(KAbstractViewAdapter*, const char*);
    using KAbstractViewAdapter_Metacall_Callback = int (*)(KAbstractViewAdapter*, int, int, void**);
    using KAbstractViewAdapter_Event_Callback = bool (*)(KAbstractViewAdapter*, QEvent*);
    using KAbstractViewAdapter_EventFilter_Callback = bool (*)(KAbstractViewAdapter*, QObject*, QEvent*);
    using KAbstractViewAdapter_TimerEvent_Callback = void (*)(KAbstractViewAdapter*, QTimerEvent*);
    using KAbstractViewAdapter_ChildEvent_Callback = void (*)(KAbstractViewAdapter*, QChildEvent*);
    using KAbstractViewAdapter_CustomEvent_Callback = void (*)(KAbstractViewAdapter*, QEvent*);
    using KAbstractViewAdapter_ConnectNotify_Callback = void (*)(KAbstractViewAdapter*, QMetaMethod*);
    using KAbstractViewAdapter_DisconnectNotify_Callback = void (*)(KAbstractViewAdapter*, QMetaMethod*);
    using KAbstractViewAdapter::isSignalConnected;
    using KAbstractViewAdapter::receivers;
    using KAbstractViewAdapter::sender;
    using KAbstractViewAdapter::senderSignalIndex;

    // Instance callback storage
    KAbstractViewAdapter_Model_Callback kabstractviewadapter_model_callback = nullptr;
    KAbstractViewAdapter_IconSize_Callback kabstractviewadapter_iconsize_callback = nullptr;
    KAbstractViewAdapter_Palette_Callback kabstractviewadapter_palette_callback = nullptr;
    KAbstractViewAdapter_VisibleArea_Callback kabstractviewadapter_visiblearea_callback = nullptr;
    KAbstractViewAdapter_VisualRect_Callback kabstractviewadapter_visualrect_callback = nullptr;
    KAbstractViewAdapter_Connect_Callback kabstractviewadapter_connect_callback = nullptr;
    KAbstractViewAdapter_MetaObject_Callback kabstractviewadapter_metaobject_callback = nullptr;
    KAbstractViewAdapter_Metacast_Callback kabstractviewadapter_metacast_callback = nullptr;
    KAbstractViewAdapter_Metacall_Callback kabstractviewadapter_metacall_callback = nullptr;
    KAbstractViewAdapter_Event_Callback kabstractviewadapter_event_callback = nullptr;
    KAbstractViewAdapter_EventFilter_Callback kabstractviewadapter_eventfilter_callback = nullptr;
    KAbstractViewAdapter_TimerEvent_Callback kabstractviewadapter_timerevent_callback = nullptr;
    KAbstractViewAdapter_ChildEvent_Callback kabstractviewadapter_childevent_callback = nullptr;
    KAbstractViewAdapter_CustomEvent_Callback kabstractviewadapter_customevent_callback = nullptr;
    KAbstractViewAdapter_ConnectNotify_Callback kabstractviewadapter_connectnotify_callback = nullptr;
    KAbstractViewAdapter_DisconnectNotify_Callback kabstractviewadapter_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KAbstractViewAdapter {
        using KAbstractViewAdapter::childEvent;
        using KAbstractViewAdapter::connectNotify;
        using KAbstractViewAdapter::customEvent;
        using KAbstractViewAdapter::disconnectNotify;
        using KAbstractViewAdapter::timerEvent;
    };

    VirtualKAbstractViewAdapter(QObject* parent) : KAbstractViewAdapter(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemModel* model() const override {
        if (kabstractviewadapter_model_callback) {
            QAbstractItemModel* callback_ret = kabstractviewadapter_model_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KAbstractViewAdapter::model called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize iconSize() const override {
        if (kabstractviewadapter_iconsize_callback) {
            QSize* callback_ret = kabstractviewadapter_iconsize_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KAbstractViewAdapter::iconSize called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QPalette palette() const override {
        if (kabstractviewadapter_palette_callback) {
            QPalette* callback_ret = kabstractviewadapter_palette_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KAbstractViewAdapter::palette called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visibleArea() const override {
        if (kabstractviewadapter_visiblearea_callback) {
            QRect* callback_ret = kabstractviewadapter_visiblearea_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KAbstractViewAdapter::visibleArea called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (kabstractviewadapter_visualrect_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QRect* callback_ret = kabstractviewadapter_visualrect_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KAbstractViewAdapter::visualRect called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void connect(KAbstractViewAdapter::Signal signal, QObject* receiver, const char* slot) override {
        if (kabstractviewadapter_connect_callback) {
            int cbval1 = static_cast<int>(signal);
            QObject* cbval2 = receiver;
            const char* cbval3 = (const char*)slot;
            kabstractviewadapter_connect_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KAbstractViewAdapter::connect called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kabstractviewadapter_metaobject_callback) {
            QMetaObject* callback_ret = kabstractviewadapter_metaobject_callback(this);
            return callback_ret;
        }
        return KAbstractViewAdapter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kabstractviewadapter_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kabstractviewadapter_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KAbstractViewAdapter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kabstractviewadapter_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kabstractviewadapter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KAbstractViewAdapter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kabstractviewadapter_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kabstractviewadapter_event_callback(this, cbval1);
            return callback_ret;
        }
        return KAbstractViewAdapter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kabstractviewadapter_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kabstractviewadapter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KAbstractViewAdapter::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kabstractviewadapter_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kabstractviewadapter_timerevent_callback(this, cbval1);
            return;
        }
        KAbstractViewAdapter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kabstractviewadapter_childevent_callback) {
            QChildEvent* cbval1 = event;
            kabstractviewadapter_childevent_callback(this, cbval1);
            return;
        }
        KAbstractViewAdapter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kabstractviewadapter_customevent_callback) {
            QEvent* cbval1 = event;
            kabstractviewadapter_customevent_callback(this, cbval1);
            return;
        }
        KAbstractViewAdapter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kabstractviewadapter_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kabstractviewadapter_connectnotify_callback(this, cbval1);
            return;
        }
        KAbstractViewAdapter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kabstractviewadapter_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kabstractviewadapter_disconnectnotify_callback(this, cbval1);
            return;
        }
        KAbstractViewAdapter::disconnectNotify(signal);
    }

    // Friend functions
    friend void KAbstractViewAdapter_SuperTimerEvent(KAbstractViewAdapter* self, QTimerEvent* event);
    friend void KAbstractViewAdapter_SuperChildEvent(KAbstractViewAdapter* self, QChildEvent* event);
    friend void KAbstractViewAdapter_SuperCustomEvent(KAbstractViewAdapter* self, QEvent* event);
    friend void KAbstractViewAdapter_SuperConnectNotify(KAbstractViewAdapter* self, const QMetaMethod* signal);
    friend void KAbstractViewAdapter_SuperDisconnectNotify(KAbstractViewAdapter* self, const QMetaMethod* signal);
};

#endif
