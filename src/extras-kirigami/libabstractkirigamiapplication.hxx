#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBABSTRACTKIRIGAMIAPPLICATION_HXX
#define EXTRAS_KIRIGAMI_LIBABSTRACTKIRIGAMIAPPLICATION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of AbstractKirigamiApplication
class VirtualAbstractKirigamiApplication final : public AbstractKirigamiApplication {
  public:
    // Virtual class public types (including callbacks and access types)
    using AbstractKirigamiApplication_MetaObject_Callback = QMetaObject* (*)(const AbstractKirigamiApplication*);
    using AbstractKirigamiApplication_Metacast_Callback = void* (*)(AbstractKirigamiApplication*, const char*);
    using AbstractKirigamiApplication_Metacall_Callback = int (*)(AbstractKirigamiApplication*, int, int, void**);
    using AbstractKirigamiApplication_ActionCollections_Callback = libqt_list /* of KirigamiActionCollection* */ (*)(const AbstractKirigamiApplication*);
    using AbstractKirigamiApplication_SetupActions_Callback = void (*)(AbstractKirigamiApplication*);
    using AbstractKirigamiApplication_Event_Callback = bool (*)(AbstractKirigamiApplication*, QEvent*);
    using AbstractKirigamiApplication_EventFilter_Callback = bool (*)(AbstractKirigamiApplication*, QObject*, QEvent*);
    using AbstractKirigamiApplication_TimerEvent_Callback = void (*)(AbstractKirigamiApplication*, QTimerEvent*);
    using AbstractKirigamiApplication_ChildEvent_Callback = void (*)(AbstractKirigamiApplication*, QChildEvent*);
    using AbstractKirigamiApplication_CustomEvent_Callback = void (*)(AbstractKirigamiApplication*, QEvent*);
    using AbstractKirigamiApplication_ConnectNotify_Callback = void (*)(AbstractKirigamiApplication*, QMetaMethod*);
    using AbstractKirigamiApplication_DisconnectNotify_Callback = void (*)(AbstractKirigamiApplication*, QMetaMethod*);
    using AbstractKirigamiApplication::isSignalConnected;
    using AbstractKirigamiApplication::readSettings;
    using AbstractKirigamiApplication::receivers;
    using AbstractKirigamiApplication::sender;
    using AbstractKirigamiApplication::senderSignalIndex;

    // Instance callback storage
    AbstractKirigamiApplication_MetaObject_Callback abstractkirigamiapplication_metaobject_callback = nullptr;
    AbstractKirigamiApplication_Metacast_Callback abstractkirigamiapplication_metacast_callback = nullptr;
    AbstractKirigamiApplication_Metacall_Callback abstractkirigamiapplication_metacall_callback = nullptr;
    AbstractKirigamiApplication_ActionCollections_Callback abstractkirigamiapplication_actioncollections_callback = nullptr;
    AbstractKirigamiApplication_SetupActions_Callback abstractkirigamiapplication_setupactions_callback = nullptr;
    AbstractKirigamiApplication_Event_Callback abstractkirigamiapplication_event_callback = nullptr;
    AbstractKirigamiApplication_EventFilter_Callback abstractkirigamiapplication_eventfilter_callback = nullptr;
    AbstractKirigamiApplication_TimerEvent_Callback abstractkirigamiapplication_timerevent_callback = nullptr;
    AbstractKirigamiApplication_ChildEvent_Callback abstractkirigamiapplication_childevent_callback = nullptr;
    AbstractKirigamiApplication_CustomEvent_Callback abstractkirigamiapplication_customevent_callback = nullptr;
    AbstractKirigamiApplication_ConnectNotify_Callback abstractkirigamiapplication_connectnotify_callback = nullptr;
    AbstractKirigamiApplication_DisconnectNotify_Callback abstractkirigamiapplication_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : AbstractKirigamiApplication {
        using AbstractKirigamiApplication::childEvent;
        using AbstractKirigamiApplication::connectNotify;
        using AbstractKirigamiApplication::customEvent;
        using AbstractKirigamiApplication::disconnectNotify;
        using AbstractKirigamiApplication::setupActions;
        using AbstractKirigamiApplication::timerEvent;
    };

    VirtualAbstractKirigamiApplication() : AbstractKirigamiApplication() {};
    VirtualAbstractKirigamiApplication(QObject* parent) : AbstractKirigamiApplication(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (abstractkirigamiapplication_metaobject_callback) {
            QMetaObject* callback_ret = abstractkirigamiapplication_metaobject_callback(this);
            return callback_ret;
        }
        return AbstractKirigamiApplication::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (abstractkirigamiapplication_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = abstractkirigamiapplication_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return AbstractKirigamiApplication::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (abstractkirigamiapplication_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = abstractkirigamiapplication_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return AbstractKirigamiApplication::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<KirigamiActionCollection*> actionCollections() const override {
        if (abstractkirigamiapplication_actioncollections_callback) {
            libqt_list /* of KirigamiActionCollection* */ callback_ret = abstractkirigamiapplication_actioncollections_callback(this);
            QList<KirigamiActionCollection*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            KirigamiActionCollection** callback_ret_arr = static_cast<KirigamiActionCollection**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return AbstractKirigamiApplication::actionCollections();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupActions() override {
        if (abstractkirigamiapplication_setupactions_callback) {
            abstractkirigamiapplication_setupactions_callback(this);
            return;
        }
        AbstractKirigamiApplication::setupActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (abstractkirigamiapplication_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = abstractkirigamiapplication_event_callback(this, cbval1);
            return callback_ret;
        }
        return AbstractKirigamiApplication::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (abstractkirigamiapplication_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = abstractkirigamiapplication_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return AbstractKirigamiApplication::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (abstractkirigamiapplication_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            abstractkirigamiapplication_timerevent_callback(this, cbval1);
            return;
        }
        AbstractKirigamiApplication::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (abstractkirigamiapplication_childevent_callback) {
            QChildEvent* cbval1 = event;
            abstractkirigamiapplication_childevent_callback(this, cbval1);
            return;
        }
        AbstractKirigamiApplication::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (abstractkirigamiapplication_customevent_callback) {
            QEvent* cbval1 = event;
            abstractkirigamiapplication_customevent_callback(this, cbval1);
            return;
        }
        AbstractKirigamiApplication::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (abstractkirigamiapplication_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            abstractkirigamiapplication_connectnotify_callback(this, cbval1);
            return;
        }
        AbstractKirigamiApplication::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (abstractkirigamiapplication_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            abstractkirigamiapplication_disconnectnotify_callback(this, cbval1);
            return;
        }
        AbstractKirigamiApplication::disconnectNotify(signal);
    }

    // Friend functions
    friend void AbstractKirigamiApplication_SuperSetupActions(AbstractKirigamiApplication* self);
    friend void AbstractKirigamiApplication_SuperTimerEvent(AbstractKirigamiApplication* self, QTimerEvent* event);
    friend void AbstractKirigamiApplication_SuperChildEvent(AbstractKirigamiApplication* self, QChildEvent* event);
    friend void AbstractKirigamiApplication_SuperCustomEvent(AbstractKirigamiApplication* self, QEvent* event);
    friend void AbstractKirigamiApplication_SuperConnectNotify(AbstractKirigamiApplication* self, const QMetaMethod* signal);
    friend void AbstractKirigamiApplication_SuperDisconnectNotify(AbstractKirigamiApplication* self, const QMetaMethod* signal);
};

#endif
