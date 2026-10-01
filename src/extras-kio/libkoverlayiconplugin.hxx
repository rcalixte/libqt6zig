#pragma once
#ifndef EXTRAS_KIO_LIBKOVERLAYICONPLUGIN_HXX
#define EXTRAS_KIO_LIBKOVERLAYICONPLUGIN_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KOverlayIconPlugin
class VirtualKOverlayIconPlugin : public KOverlayIconPlugin {
  public:
    // Virtual class public types (including callbacks and access types)
    using KOverlayIconPlugin_MetaObject_Callback = QMetaObject* (*)(const KOverlayIconPlugin*);
    using KOverlayIconPlugin_Metacast_Callback = void* (*)(KOverlayIconPlugin*, const char*);
    using KOverlayIconPlugin_Metacall_Callback = int (*)(KOverlayIconPlugin*, int, int, void**);
    using KOverlayIconPlugin_GetOverlays_Callback = const char** (*)(KOverlayIconPlugin*, QUrl*);
    using KOverlayIconPlugin_Event_Callback = bool (*)(KOverlayIconPlugin*, QEvent*);
    using KOverlayIconPlugin_EventFilter_Callback = bool (*)(KOverlayIconPlugin*, QObject*, QEvent*);
    using KOverlayIconPlugin_TimerEvent_Callback = void (*)(KOverlayIconPlugin*, QTimerEvent*);
    using KOverlayIconPlugin_ChildEvent_Callback = void (*)(KOverlayIconPlugin*, QChildEvent*);
    using KOverlayIconPlugin_CustomEvent_Callback = void (*)(KOverlayIconPlugin*, QEvent*);
    using KOverlayIconPlugin_ConnectNotify_Callback = void (*)(KOverlayIconPlugin*, QMetaMethod*);
    using KOverlayIconPlugin_DisconnectNotify_Callback = void (*)(KOverlayIconPlugin*, QMetaMethod*);
    using KOverlayIconPlugin::isSignalConnected;
    using KOverlayIconPlugin::receivers;
    using KOverlayIconPlugin::sender;
    using KOverlayIconPlugin::senderSignalIndex;

    // Instance callback storage
    KOverlayIconPlugin_MetaObject_Callback koverlayiconplugin_metaobject_callback = nullptr;
    KOverlayIconPlugin_Metacast_Callback koverlayiconplugin_metacast_callback = nullptr;
    KOverlayIconPlugin_Metacall_Callback koverlayiconplugin_metacall_callback = nullptr;
    KOverlayIconPlugin_GetOverlays_Callback koverlayiconplugin_getoverlays_callback = nullptr;
    KOverlayIconPlugin_Event_Callback koverlayiconplugin_event_callback = nullptr;
    KOverlayIconPlugin_EventFilter_Callback koverlayiconplugin_eventfilter_callback = nullptr;
    KOverlayIconPlugin_TimerEvent_Callback koverlayiconplugin_timerevent_callback = nullptr;
    KOverlayIconPlugin_ChildEvent_Callback koverlayiconplugin_childevent_callback = nullptr;
    KOverlayIconPlugin_CustomEvent_Callback koverlayiconplugin_customevent_callback = nullptr;
    KOverlayIconPlugin_ConnectNotify_Callback koverlayiconplugin_connectnotify_callback = nullptr;
    KOverlayIconPlugin_DisconnectNotify_Callback koverlayiconplugin_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KOverlayIconPlugin {
        using KOverlayIconPlugin::childEvent;
        using KOverlayIconPlugin::connectNotify;
        using KOverlayIconPlugin::customEvent;
        using KOverlayIconPlugin::disconnectNotify;
        using KOverlayIconPlugin::timerEvent;
    };

    VirtualKOverlayIconPlugin() : KOverlayIconPlugin() {};
    VirtualKOverlayIconPlugin(QObject* parent) : KOverlayIconPlugin(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (koverlayiconplugin_metaobject_callback) {
            QMetaObject* callback_ret = koverlayiconplugin_metaobject_callback(this);
            return callback_ret;
        }
        return KOverlayIconPlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (koverlayiconplugin_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = koverlayiconplugin_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KOverlayIconPlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (koverlayiconplugin_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = koverlayiconplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KOverlayIconPlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> getOverlays(const QUrl& item) override {
        if (koverlayiconplugin_getoverlays_callback) {
            const QUrl& item_ret = item;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&item_ret);
            const char** callback_ret = koverlayiconplugin_getoverlays_callback(this, cbval1);
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            return callback_ret_QList;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KOverlayIconPlugin::getOverlays called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (koverlayiconplugin_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = koverlayiconplugin_event_callback(this, cbval1);
            return callback_ret;
        }
        return KOverlayIconPlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (koverlayiconplugin_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = koverlayiconplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KOverlayIconPlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (koverlayiconplugin_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            koverlayiconplugin_timerevent_callback(this, cbval1);
            return;
        }
        KOverlayIconPlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (koverlayiconplugin_childevent_callback) {
            QChildEvent* cbval1 = event;
            koverlayiconplugin_childevent_callback(this, cbval1);
            return;
        }
        KOverlayIconPlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (koverlayiconplugin_customevent_callback) {
            QEvent* cbval1 = event;
            koverlayiconplugin_customevent_callback(this, cbval1);
            return;
        }
        KOverlayIconPlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (koverlayiconplugin_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            koverlayiconplugin_connectnotify_callback(this, cbval1);
            return;
        }
        KOverlayIconPlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (koverlayiconplugin_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            koverlayiconplugin_disconnectnotify_callback(this, cbval1);
            return;
        }
        KOverlayIconPlugin::disconnectNotify(signal);
    }

    // Friend functions
    friend void KOverlayIconPlugin_SuperTimerEvent(KOverlayIconPlugin* self, QTimerEvent* event);
    friend void KOverlayIconPlugin_SuperChildEvent(KOverlayIconPlugin* self, QChildEvent* event);
    friend void KOverlayIconPlugin_SuperCustomEvent(KOverlayIconPlugin* self, QEvent* event);
    friend void KOverlayIconPlugin_SuperConnectNotify(KOverlayIconPlugin* self, const QMetaMethod* signal);
    friend void KOverlayIconPlugin_SuperDisconnectNotify(KOverlayIconPlugin* self, const QMetaMethod* signal);
};

#endif
