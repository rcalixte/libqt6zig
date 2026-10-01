#pragma once
#ifndef EXTRAS_KIO_LIBKABSTRACTFILEITEMACTIONPLUGIN_HXX
#define EXTRAS_KIO_LIBKABSTRACTFILEITEMACTIONPLUGIN_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KAbstractFileItemActionPlugin
class VirtualKAbstractFileItemActionPlugin : public KAbstractFileItemActionPlugin {
  public:
    // Virtual class public types (including callbacks and access types)
    using KAbstractFileItemActionPlugin_MetaObject_Callback = QMetaObject* (*)(const KAbstractFileItemActionPlugin*);
    using KAbstractFileItemActionPlugin_Metacast_Callback = void* (*)(KAbstractFileItemActionPlugin*, const char*);
    using KAbstractFileItemActionPlugin_Metacall_Callback = int (*)(KAbstractFileItemActionPlugin*, int, int, void**);
    using KAbstractFileItemActionPlugin_Actions_Callback = libqt_list /* of QAction* */ (*)(KAbstractFileItemActionPlugin*, KFileItemListProperties*, QWidget*);
    using KAbstractFileItemActionPlugin_Event_Callback = bool (*)(KAbstractFileItemActionPlugin*, QEvent*);
    using KAbstractFileItemActionPlugin_EventFilter_Callback = bool (*)(KAbstractFileItemActionPlugin*, QObject*, QEvent*);
    using KAbstractFileItemActionPlugin_TimerEvent_Callback = void (*)(KAbstractFileItemActionPlugin*, QTimerEvent*);
    using KAbstractFileItemActionPlugin_ChildEvent_Callback = void (*)(KAbstractFileItemActionPlugin*, QChildEvent*);
    using KAbstractFileItemActionPlugin_CustomEvent_Callback = void (*)(KAbstractFileItemActionPlugin*, QEvent*);
    using KAbstractFileItemActionPlugin_ConnectNotify_Callback = void (*)(KAbstractFileItemActionPlugin*, QMetaMethod*);
    using KAbstractFileItemActionPlugin_DisconnectNotify_Callback = void (*)(KAbstractFileItemActionPlugin*, QMetaMethod*);
    using KAbstractFileItemActionPlugin::isSignalConnected;
    using KAbstractFileItemActionPlugin::receivers;
    using KAbstractFileItemActionPlugin::sender;
    using KAbstractFileItemActionPlugin::senderSignalIndex;

    // Instance callback storage
    KAbstractFileItemActionPlugin_MetaObject_Callback kabstractfileitemactionplugin_metaobject_callback = nullptr;
    KAbstractFileItemActionPlugin_Metacast_Callback kabstractfileitemactionplugin_metacast_callback = nullptr;
    KAbstractFileItemActionPlugin_Metacall_Callback kabstractfileitemactionplugin_metacall_callback = nullptr;
    KAbstractFileItemActionPlugin_Actions_Callback kabstractfileitemactionplugin_actions_callback = nullptr;
    KAbstractFileItemActionPlugin_Event_Callback kabstractfileitemactionplugin_event_callback = nullptr;
    KAbstractFileItemActionPlugin_EventFilter_Callback kabstractfileitemactionplugin_eventfilter_callback = nullptr;
    KAbstractFileItemActionPlugin_TimerEvent_Callback kabstractfileitemactionplugin_timerevent_callback = nullptr;
    KAbstractFileItemActionPlugin_ChildEvent_Callback kabstractfileitemactionplugin_childevent_callback = nullptr;
    KAbstractFileItemActionPlugin_CustomEvent_Callback kabstractfileitemactionplugin_customevent_callback = nullptr;
    KAbstractFileItemActionPlugin_ConnectNotify_Callback kabstractfileitemactionplugin_connectnotify_callback = nullptr;
    KAbstractFileItemActionPlugin_DisconnectNotify_Callback kabstractfileitemactionplugin_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KAbstractFileItemActionPlugin {
        using KAbstractFileItemActionPlugin::childEvent;
        using KAbstractFileItemActionPlugin::connectNotify;
        using KAbstractFileItemActionPlugin::customEvent;
        using KAbstractFileItemActionPlugin::disconnectNotify;
        using KAbstractFileItemActionPlugin::timerEvent;
    };

    VirtualKAbstractFileItemActionPlugin(QObject* parent) : KAbstractFileItemActionPlugin(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kabstractfileitemactionplugin_metaobject_callback) {
            QMetaObject* callback_ret = kabstractfileitemactionplugin_metaobject_callback(this);
            return callback_ret;
        }
        return KAbstractFileItemActionPlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kabstractfileitemactionplugin_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kabstractfileitemactionplugin_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KAbstractFileItemActionPlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kabstractfileitemactionplugin_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kabstractfileitemactionplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KAbstractFileItemActionPlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QAction*> actions(const KFileItemListProperties& fileItemInfos, QWidget* parentWidget) override {
        if (kabstractfileitemactionplugin_actions_callback) {
            const KFileItemListProperties& fileItemInfos_ret = fileItemInfos;
            // Cast returned reference into pointer
            KFileItemListProperties* cbval1 = const_cast<KFileItemListProperties*>(&fileItemInfos_ret);
            QWidget* cbval2 = parentWidget;
            libqt_list /* of QAction* */ callback_ret = kabstractfileitemactionplugin_actions_callback(this, cbval1, cbval2);
            QList<QAction*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QAction** callback_ret_arr = static_cast<QAction**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KAbstractFileItemActionPlugin::actions called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kabstractfileitemactionplugin_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kabstractfileitemactionplugin_event_callback(this, cbval1);
            return callback_ret;
        }
        return KAbstractFileItemActionPlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kabstractfileitemactionplugin_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kabstractfileitemactionplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KAbstractFileItemActionPlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kabstractfileitemactionplugin_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kabstractfileitemactionplugin_timerevent_callback(this, cbval1);
            return;
        }
        KAbstractFileItemActionPlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kabstractfileitemactionplugin_childevent_callback) {
            QChildEvent* cbval1 = event;
            kabstractfileitemactionplugin_childevent_callback(this, cbval1);
            return;
        }
        KAbstractFileItemActionPlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kabstractfileitemactionplugin_customevent_callback) {
            QEvent* cbval1 = event;
            kabstractfileitemactionplugin_customevent_callback(this, cbval1);
            return;
        }
        KAbstractFileItemActionPlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kabstractfileitemactionplugin_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kabstractfileitemactionplugin_connectnotify_callback(this, cbval1);
            return;
        }
        KAbstractFileItemActionPlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kabstractfileitemactionplugin_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kabstractfileitemactionplugin_disconnectnotify_callback(this, cbval1);
            return;
        }
        KAbstractFileItemActionPlugin::disconnectNotify(signal);
    }

    // Friend functions
    friend void KAbstractFileItemActionPlugin_SuperTimerEvent(KAbstractFileItemActionPlugin* self, QTimerEvent* event);
    friend void KAbstractFileItemActionPlugin_SuperChildEvent(KAbstractFileItemActionPlugin* self, QChildEvent* event);
    friend void KAbstractFileItemActionPlugin_SuperCustomEvent(KAbstractFileItemActionPlugin* self, QEvent* event);
    friend void KAbstractFileItemActionPlugin_SuperConnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal);
    friend void KAbstractFileItemActionPlugin_SuperDisconnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal);
};

#endif
