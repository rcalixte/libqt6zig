#pragma once
#ifndef EXTRAS_KIO_LIBDNDPOPUPMENUPLUGIN_HXX
#define EXTRAS_KIO_LIBDNDPOPUPMENUPLUGIN_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::DndPopupMenuPlugin
class VirtualKIODndPopupMenuPlugin : public KIO::DndPopupMenuPlugin {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIO__DndPopupMenuPlugin_MetaObject_Callback = QMetaObject* (*)(const KIO__DndPopupMenuPlugin*);
    using KIO__DndPopupMenuPlugin_Metacast_Callback = void* (*)(KIO__DndPopupMenuPlugin*, const char*);
    using KIO__DndPopupMenuPlugin_Metacall_Callback = int (*)(KIO__DndPopupMenuPlugin*, int, int, void**);
    using KIO__DndPopupMenuPlugin_Setup_Callback = libqt_list /* of QAction* */ (*)(KIO__DndPopupMenuPlugin*, KFileItemListProperties*, QUrl*);
    using KIO__DndPopupMenuPlugin_Event_Callback = bool (*)(KIO__DndPopupMenuPlugin*, QEvent*);
    using KIO__DndPopupMenuPlugin_EventFilter_Callback = bool (*)(KIO__DndPopupMenuPlugin*, QObject*, QEvent*);
    using KIO__DndPopupMenuPlugin_TimerEvent_Callback = void (*)(KIO__DndPopupMenuPlugin*, QTimerEvent*);
    using KIO__DndPopupMenuPlugin_ChildEvent_Callback = void (*)(KIO__DndPopupMenuPlugin*, QChildEvent*);
    using KIO__DndPopupMenuPlugin_CustomEvent_Callback = void (*)(KIO__DndPopupMenuPlugin*, QEvent*);
    using KIO__DndPopupMenuPlugin_ConnectNotify_Callback = void (*)(KIO__DndPopupMenuPlugin*, QMetaMethod*);
    using KIO__DndPopupMenuPlugin_DisconnectNotify_Callback = void (*)(KIO__DndPopupMenuPlugin*, QMetaMethod*);
    using KIO::DndPopupMenuPlugin::isSignalConnected;
    using KIO::DndPopupMenuPlugin::receivers;
    using KIO::DndPopupMenuPlugin::sender;
    using KIO::DndPopupMenuPlugin::senderSignalIndex;

    // Instance callback storage
    KIO__DndPopupMenuPlugin_MetaObject_Callback kio__dndpopupmenuplugin_metaobject_callback = nullptr;
    KIO__DndPopupMenuPlugin_Metacast_Callback kio__dndpopupmenuplugin_metacast_callback = nullptr;
    KIO__DndPopupMenuPlugin_Metacall_Callback kio__dndpopupmenuplugin_metacall_callback = nullptr;
    KIO__DndPopupMenuPlugin_Setup_Callback kio__dndpopupmenuplugin_setup_callback = nullptr;
    KIO__DndPopupMenuPlugin_Event_Callback kio__dndpopupmenuplugin_event_callback = nullptr;
    KIO__DndPopupMenuPlugin_EventFilter_Callback kio__dndpopupmenuplugin_eventfilter_callback = nullptr;
    KIO__DndPopupMenuPlugin_TimerEvent_Callback kio__dndpopupmenuplugin_timerevent_callback = nullptr;
    KIO__DndPopupMenuPlugin_ChildEvent_Callback kio__dndpopupmenuplugin_childevent_callback = nullptr;
    KIO__DndPopupMenuPlugin_CustomEvent_Callback kio__dndpopupmenuplugin_customevent_callback = nullptr;
    KIO__DndPopupMenuPlugin_ConnectNotify_Callback kio__dndpopupmenuplugin_connectnotify_callback = nullptr;
    KIO__DndPopupMenuPlugin_DisconnectNotify_Callback kio__dndpopupmenuplugin_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KIO::DndPopupMenuPlugin {
        using KIO::DndPopupMenuPlugin::childEvent;
        using KIO::DndPopupMenuPlugin::connectNotify;
        using KIO::DndPopupMenuPlugin::customEvent;
        using KIO::DndPopupMenuPlugin::disconnectNotify;
        using KIO::DndPopupMenuPlugin::timerEvent;
    };

    VirtualKIODndPopupMenuPlugin(QObject* parent) : KIO::DndPopupMenuPlugin(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__dndpopupmenuplugin_metaobject_callback) {
            QMetaObject* callback_ret = kio__dndpopupmenuplugin_metaobject_callback(this);
            return callback_ret;
        }
        return KIO__DndPopupMenuPlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__dndpopupmenuplugin_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kio__dndpopupmenuplugin_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__DndPopupMenuPlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__dndpopupmenuplugin_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kio__dndpopupmenuplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__DndPopupMenuPlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QAction*> setup(const KFileItemListProperties& popupMenuInfo, const QUrl& destination) override {
        if (kio__dndpopupmenuplugin_setup_callback) {
            const KFileItemListProperties& popupMenuInfo_ret = popupMenuInfo;
            // Cast returned reference into pointer
            KFileItemListProperties* cbval1 = const_cast<KFileItemListProperties*>(&popupMenuInfo_ret);
            const QUrl& destination_ret = destination;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&destination_ret);
            libqt_list /* of QAction* */ callback_ret = kio__dndpopupmenuplugin_setup_callback(this, cbval1, cbval2);
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
        qFatal("Error: Pure virtual method KIO::DndPopupMenuPlugin::setup called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__dndpopupmenuplugin_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kio__dndpopupmenuplugin_event_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__DndPopupMenuPlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__dndpopupmenuplugin_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kio__dndpopupmenuplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__DndPopupMenuPlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__dndpopupmenuplugin_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kio__dndpopupmenuplugin_timerevent_callback(this, cbval1);
            return;
        }
        KIO__DndPopupMenuPlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__dndpopupmenuplugin_childevent_callback) {
            QChildEvent* cbval1 = event;
            kio__dndpopupmenuplugin_childevent_callback(this, cbval1);
            return;
        }
        KIO__DndPopupMenuPlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__dndpopupmenuplugin_customevent_callback) {
            QEvent* cbval1 = event;
            kio__dndpopupmenuplugin_customevent_callback(this, cbval1);
            return;
        }
        KIO__DndPopupMenuPlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__dndpopupmenuplugin_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__dndpopupmenuplugin_connectnotify_callback(this, cbval1);
            return;
        }
        KIO__DndPopupMenuPlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__dndpopupmenuplugin_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__dndpopupmenuplugin_disconnectnotify_callback(this, cbval1);
            return;
        }
        KIO__DndPopupMenuPlugin::disconnectNotify(signal);
    }

    // Friend functions
    friend void KIO__DndPopupMenuPlugin_SuperTimerEvent(KIO::DndPopupMenuPlugin* self, QTimerEvent* event);
    friend void KIO__DndPopupMenuPlugin_SuperChildEvent(KIO::DndPopupMenuPlugin* self, QChildEvent* event);
    friend void KIO__DndPopupMenuPlugin_SuperCustomEvent(KIO::DndPopupMenuPlugin* self, QEvent* event);
    friend void KIO__DndPopupMenuPlugin_SuperConnectNotify(KIO::DndPopupMenuPlugin* self, const QMetaMethod* signal);
    friend void KIO__DndPopupMenuPlugin_SuperDisconnectNotify(KIO::DndPopupMenuPlugin* self, const QMetaMethod* signal);
};

#endif
