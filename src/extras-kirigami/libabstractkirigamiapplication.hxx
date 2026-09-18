#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBABSTRACTKIRIGAMIAPPLICATION_HXX
#define EXTRAS_KIRIGAMI_LIBABSTRACTKIRIGAMIAPPLICATION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of AbstractKirigamiApplication so that we can call protected methods
class VirtualAbstractKirigamiApplication final : public AbstractKirigamiApplication {

  public:
    // Virtual class boolean flag
    bool isVirtualAbstractKirigamiApplication = true;

    // Virtual class public types (including callbacks)
    using AbstractKirigamiApplication_MetaObject_Callback = QMetaObject* (*)();
    using AbstractKirigamiApplication_Metacast_Callback = void* (*)(AbstractKirigamiApplication*, const char*);
    using AbstractKirigamiApplication_Metacall_Callback = int (*)(AbstractKirigamiApplication*, int, int, void**);
    using AbstractKirigamiApplication_ActionCollections_Callback = libqt_list /* of KirigamiActionCollection* */ (*)();
    using AbstractKirigamiApplication_SetupActions_Callback = void (*)();
    using AbstractKirigamiApplication_Event_Callback = bool (*)(AbstractKirigamiApplication*, QEvent*);
    using AbstractKirigamiApplication_EventFilter_Callback = bool (*)(AbstractKirigamiApplication*, QObject*, QEvent*);
    using AbstractKirigamiApplication_TimerEvent_Callback = void (*)(AbstractKirigamiApplication*, QTimerEvent*);
    using AbstractKirigamiApplication_ChildEvent_Callback = void (*)(AbstractKirigamiApplication*, QChildEvent*);
    using AbstractKirigamiApplication_CustomEvent_Callback = void (*)(AbstractKirigamiApplication*, QEvent*);
    using AbstractKirigamiApplication_ConnectNotify_Callback = void (*)(AbstractKirigamiApplication*, QMetaMethod*);
    using AbstractKirigamiApplication_DisconnectNotify_Callback = void (*)(AbstractKirigamiApplication*, QMetaMethod*);
    using AbstractKirigamiApplication_ReadSettings_Callback = void (*)();
    using AbstractKirigamiApplication_Sender_Callback = QObject* (*)();
    using AbstractKirigamiApplication_SenderSignalIndex_Callback = int (*)();
    using AbstractKirigamiApplication_Receivers_Callback = int (*)(const AbstractKirigamiApplication*, const char*);
    using AbstractKirigamiApplication_IsSignalConnected_Callback = bool (*)(const AbstractKirigamiApplication*, QMetaMethod*);

  protected:
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
    AbstractKirigamiApplication_ReadSettings_Callback abstractkirigamiapplication_readsettings_callback = nullptr;
    AbstractKirigamiApplication_Sender_Callback abstractkirigamiapplication_sender_callback = nullptr;
    AbstractKirigamiApplication_SenderSignalIndex_Callback abstractkirigamiapplication_sendersignalindex_callback = nullptr;
    AbstractKirigamiApplication_Receivers_Callback abstractkirigamiapplication_receivers_callback = nullptr;
    AbstractKirigamiApplication_IsSignalConnected_Callback abstractkirigamiapplication_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool abstractkirigamiapplication_metaobject_isbase = false;
    mutable bool abstractkirigamiapplication_metacast_isbase = false;
    mutable bool abstractkirigamiapplication_metacall_isbase = false;
    mutable bool abstractkirigamiapplication_actioncollections_isbase = false;
    mutable bool abstractkirigamiapplication_setupactions_isbase = false;
    mutable bool abstractkirigamiapplication_event_isbase = false;
    mutable bool abstractkirigamiapplication_eventfilter_isbase = false;
    mutable bool abstractkirigamiapplication_timerevent_isbase = false;
    mutable bool abstractkirigamiapplication_childevent_isbase = false;
    mutable bool abstractkirigamiapplication_customevent_isbase = false;
    mutable bool abstractkirigamiapplication_connectnotify_isbase = false;
    mutable bool abstractkirigamiapplication_disconnectnotify_isbase = false;
    mutable bool abstractkirigamiapplication_readsettings_isbase = false;
    mutable bool abstractkirigamiapplication_sender_isbase = false;
    mutable bool abstractkirigamiapplication_sendersignalindex_isbase = false;
    mutable bool abstractkirigamiapplication_receivers_isbase = false;
    mutable bool abstractkirigamiapplication_issignalconnected_isbase = false;

  public:
    VirtualAbstractKirigamiApplication() : AbstractKirigamiApplication() {};
    VirtualAbstractKirigamiApplication(QObject* parent) : AbstractKirigamiApplication(parent) {};

    // Callback setters
    inline void setAbstractKirigamiApplication_MetaObject_Callback(AbstractKirigamiApplication_MetaObject_Callback cb) { abstractkirigamiapplication_metaobject_callback = cb; }
    inline void setAbstractKirigamiApplication_Metacast_Callback(AbstractKirigamiApplication_Metacast_Callback cb) { abstractkirigamiapplication_metacast_callback = cb; }
    inline void setAbstractKirigamiApplication_Metacall_Callback(AbstractKirigamiApplication_Metacall_Callback cb) { abstractkirigamiapplication_metacall_callback = cb; }
    inline void setAbstractKirigamiApplication_ActionCollections_Callback(AbstractKirigamiApplication_ActionCollections_Callback cb) { abstractkirigamiapplication_actioncollections_callback = cb; }
    inline void setAbstractKirigamiApplication_SetupActions_Callback(AbstractKirigamiApplication_SetupActions_Callback cb) { abstractkirigamiapplication_setupactions_callback = cb; }
    inline void setAbstractKirigamiApplication_Event_Callback(AbstractKirigamiApplication_Event_Callback cb) { abstractkirigamiapplication_event_callback = cb; }
    inline void setAbstractKirigamiApplication_EventFilter_Callback(AbstractKirigamiApplication_EventFilter_Callback cb) { abstractkirigamiapplication_eventfilter_callback = cb; }
    inline void setAbstractKirigamiApplication_TimerEvent_Callback(AbstractKirigamiApplication_TimerEvent_Callback cb) { abstractkirigamiapplication_timerevent_callback = cb; }
    inline void setAbstractKirigamiApplication_ChildEvent_Callback(AbstractKirigamiApplication_ChildEvent_Callback cb) { abstractkirigamiapplication_childevent_callback = cb; }
    inline void setAbstractKirigamiApplication_CustomEvent_Callback(AbstractKirigamiApplication_CustomEvent_Callback cb) { abstractkirigamiapplication_customevent_callback = cb; }
    inline void setAbstractKirigamiApplication_ConnectNotify_Callback(AbstractKirigamiApplication_ConnectNotify_Callback cb) { abstractkirigamiapplication_connectnotify_callback = cb; }
    inline void setAbstractKirigamiApplication_DisconnectNotify_Callback(AbstractKirigamiApplication_DisconnectNotify_Callback cb) { abstractkirigamiapplication_disconnectnotify_callback = cb; }
    inline void setAbstractKirigamiApplication_ReadSettings_Callback(AbstractKirigamiApplication_ReadSettings_Callback cb) { abstractkirigamiapplication_readsettings_callback = cb; }
    inline void setAbstractKirigamiApplication_Sender_Callback(AbstractKirigamiApplication_Sender_Callback cb) { abstractkirigamiapplication_sender_callback = cb; }
    inline void setAbstractKirigamiApplication_SenderSignalIndex_Callback(AbstractKirigamiApplication_SenderSignalIndex_Callback cb) { abstractkirigamiapplication_sendersignalindex_callback = cb; }
    inline void setAbstractKirigamiApplication_Receivers_Callback(AbstractKirigamiApplication_Receivers_Callback cb) { abstractkirigamiapplication_receivers_callback = cb; }
    inline void setAbstractKirigamiApplication_IsSignalConnected_Callback(AbstractKirigamiApplication_IsSignalConnected_Callback cb) { abstractkirigamiapplication_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setAbstractKirigamiApplication_MetaObject_IsBase(bool value) const { abstractkirigamiapplication_metaobject_isbase = value; }
    inline void setAbstractKirigamiApplication_Metacast_IsBase(bool value) const { abstractkirigamiapplication_metacast_isbase = value; }
    inline void setAbstractKirigamiApplication_Metacall_IsBase(bool value) const { abstractkirigamiapplication_metacall_isbase = value; }
    inline void setAbstractKirigamiApplication_ActionCollections_IsBase(bool value) const { abstractkirigamiapplication_actioncollections_isbase = value; }
    inline void setAbstractKirigamiApplication_SetupActions_IsBase(bool value) const { abstractkirigamiapplication_setupactions_isbase = value; }
    inline void setAbstractKirigamiApplication_Event_IsBase(bool value) const { abstractkirigamiapplication_event_isbase = value; }
    inline void setAbstractKirigamiApplication_EventFilter_IsBase(bool value) const { abstractkirigamiapplication_eventfilter_isbase = value; }
    inline void setAbstractKirigamiApplication_TimerEvent_IsBase(bool value) const { abstractkirigamiapplication_timerevent_isbase = value; }
    inline void setAbstractKirigamiApplication_ChildEvent_IsBase(bool value) const { abstractkirigamiapplication_childevent_isbase = value; }
    inline void setAbstractKirigamiApplication_CustomEvent_IsBase(bool value) const { abstractkirigamiapplication_customevent_isbase = value; }
    inline void setAbstractKirigamiApplication_ConnectNotify_IsBase(bool value) const { abstractkirigamiapplication_connectnotify_isbase = value; }
    inline void setAbstractKirigamiApplication_DisconnectNotify_IsBase(bool value) const { abstractkirigamiapplication_disconnectnotify_isbase = value; }
    inline void setAbstractKirigamiApplication_ReadSettings_IsBase(bool value) const { abstractkirigamiapplication_readsettings_isbase = value; }
    inline void setAbstractKirigamiApplication_Sender_IsBase(bool value) const { abstractkirigamiapplication_sender_isbase = value; }
    inline void setAbstractKirigamiApplication_SenderSignalIndex_IsBase(bool value) const { abstractkirigamiapplication_sendersignalindex_isbase = value; }
    inline void setAbstractKirigamiApplication_Receivers_IsBase(bool value) const { abstractkirigamiapplication_receivers_isbase = value; }
    inline void setAbstractKirigamiApplication_IsSignalConnected_IsBase(bool value) const { abstractkirigamiapplication_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (abstractkirigamiapplication_metaobject_isbase) {
            abstractkirigamiapplication_metaobject_isbase = false;
            return AbstractKirigamiApplication::metaObject();
        }
        auto metaobject_cb = abstractkirigamiapplication_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return AbstractKirigamiApplication::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (abstractkirigamiapplication_metacast_isbase) {
            abstractkirigamiapplication_metacast_isbase = false;
            return AbstractKirigamiApplication::qt_metacast(param1);
        }
        auto metacast_cb = abstractkirigamiapplication_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return AbstractKirigamiApplication::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (abstractkirigamiapplication_metacall_isbase) {
            abstractkirigamiapplication_metacall_isbase = false;
            return AbstractKirigamiApplication::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = abstractkirigamiapplication_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return AbstractKirigamiApplication::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<KirigamiActionCollection*> actionCollections() const override {
        if (abstractkirigamiapplication_actioncollections_isbase) {
            abstractkirigamiapplication_actioncollections_isbase = false;
            return AbstractKirigamiApplication::actionCollections();
        }
        auto actioncollections_cb = abstractkirigamiapplication_actioncollections_callback;
        if (actioncollections_cb) {
            libqt_list /* of KirigamiActionCollection* */ callback_ret = actioncollections_cb();
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
        if (abstractkirigamiapplication_setupactions_isbase) {
            abstractkirigamiapplication_setupactions_isbase = false;
            AbstractKirigamiApplication::setupActions();
            return;
        }
        auto setupactions_cb = abstractkirigamiapplication_setupactions_callback;
        if (setupactions_cb) {
            setupactions_cb();
            return;
        }
        AbstractKirigamiApplication::setupActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (abstractkirigamiapplication_event_isbase) {
            abstractkirigamiapplication_event_isbase = false;
            return AbstractKirigamiApplication::event(event);
        }
        auto event_cb = abstractkirigamiapplication_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return AbstractKirigamiApplication::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (abstractkirigamiapplication_eventfilter_isbase) {
            abstractkirigamiapplication_eventfilter_isbase = false;
            return AbstractKirigamiApplication::eventFilter(watched, event);
        }
        auto eventfilter_cb = abstractkirigamiapplication_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return AbstractKirigamiApplication::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (abstractkirigamiapplication_timerevent_isbase) {
            abstractkirigamiapplication_timerevent_isbase = false;
            AbstractKirigamiApplication::timerEvent(event);
            return;
        }
        auto timerevent_cb = abstractkirigamiapplication_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        AbstractKirigamiApplication::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (abstractkirigamiapplication_childevent_isbase) {
            abstractkirigamiapplication_childevent_isbase = false;
            AbstractKirigamiApplication::childEvent(event);
            return;
        }
        auto childevent_cb = abstractkirigamiapplication_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        AbstractKirigamiApplication::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (abstractkirigamiapplication_customevent_isbase) {
            abstractkirigamiapplication_customevent_isbase = false;
            AbstractKirigamiApplication::customEvent(event);
            return;
        }
        auto customevent_cb = abstractkirigamiapplication_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        AbstractKirigamiApplication::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (abstractkirigamiapplication_connectnotify_isbase) {
            abstractkirigamiapplication_connectnotify_isbase = false;
            AbstractKirigamiApplication::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = abstractkirigamiapplication_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        AbstractKirigamiApplication::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (abstractkirigamiapplication_disconnectnotify_isbase) {
            abstractkirigamiapplication_disconnectnotify_isbase = false;
            AbstractKirigamiApplication::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = abstractkirigamiapplication_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        AbstractKirigamiApplication::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void readSettings() {
        if (abstractkirigamiapplication_readsettings_isbase) {
            abstractkirigamiapplication_readsettings_isbase = false;
            AbstractKirigamiApplication::readSettings();
            return;
        }
        auto readsettings_cb = abstractkirigamiapplication_readsettings_callback;
        if (readsettings_cb) {
            readsettings_cb();
            return;
        }
        AbstractKirigamiApplication::readSettings();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (abstractkirigamiapplication_sender_isbase) {
            abstractkirigamiapplication_sender_isbase = false;
            return AbstractKirigamiApplication::sender();
        }
        auto sender_cb = abstractkirigamiapplication_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return AbstractKirigamiApplication::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (abstractkirigamiapplication_sendersignalindex_isbase) {
            abstractkirigamiapplication_sendersignalindex_isbase = false;
            return AbstractKirigamiApplication::senderSignalIndex();
        }
        auto sendersignalindex_cb = abstractkirigamiapplication_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return AbstractKirigamiApplication::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (abstractkirigamiapplication_receivers_isbase) {
            abstractkirigamiapplication_receivers_isbase = false;
            return AbstractKirigamiApplication::receivers(signal);
        }
        auto receivers_cb = abstractkirigamiapplication_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return AbstractKirigamiApplication::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (abstractkirigamiapplication_issignalconnected_isbase) {
            abstractkirigamiapplication_issignalconnected_isbase = false;
            return AbstractKirigamiApplication::isSignalConnected(signal);
        }
        auto issignalconnected_cb = abstractkirigamiapplication_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return AbstractKirigamiApplication::isSignalConnected(signal);
    }

    // Friend functions
    friend void AbstractKirigamiApplication_SetupActions(AbstractKirigamiApplication* self);
    friend void AbstractKirigamiApplication_SuperSetupActions(AbstractKirigamiApplication* self);
    friend void AbstractKirigamiApplication_TimerEvent(AbstractKirigamiApplication* self, QTimerEvent* event);
    friend void AbstractKirigamiApplication_SuperTimerEvent(AbstractKirigamiApplication* self, QTimerEvent* event);
    friend void AbstractKirigamiApplication_ChildEvent(AbstractKirigamiApplication* self, QChildEvent* event);
    friend void AbstractKirigamiApplication_SuperChildEvent(AbstractKirigamiApplication* self, QChildEvent* event);
    friend void AbstractKirigamiApplication_CustomEvent(AbstractKirigamiApplication* self, QEvent* event);
    friend void AbstractKirigamiApplication_SuperCustomEvent(AbstractKirigamiApplication* self, QEvent* event);
    friend void AbstractKirigamiApplication_ConnectNotify(AbstractKirigamiApplication* self, const QMetaMethod* signal);
    friend void AbstractKirigamiApplication_SuperConnectNotify(AbstractKirigamiApplication* self, const QMetaMethod* signal);
    friend void AbstractKirigamiApplication_DisconnectNotify(AbstractKirigamiApplication* self, const QMetaMethod* signal);
    friend void AbstractKirigamiApplication_SuperDisconnectNotify(AbstractKirigamiApplication* self, const QMetaMethod* signal);
    friend void AbstractKirigamiApplication_ReadSettings(AbstractKirigamiApplication* self);
    friend void AbstractKirigamiApplication_SuperReadSettings(AbstractKirigamiApplication* self);
    friend QObject* AbstractKirigamiApplication_Sender(const AbstractKirigamiApplication* self);
    friend QObject* AbstractKirigamiApplication_SuperSender(const AbstractKirigamiApplication* self);
    friend int AbstractKirigamiApplication_SenderSignalIndex(const AbstractKirigamiApplication* self);
    friend int AbstractKirigamiApplication_SuperSenderSignalIndex(const AbstractKirigamiApplication* self);
    friend int AbstractKirigamiApplication_Receivers(const AbstractKirigamiApplication* self, const char* signal);
    friend int AbstractKirigamiApplication_SuperReceivers(const AbstractKirigamiApplication* self, const char* signal);
    friend bool AbstractKirigamiApplication_IsSignalConnected(const AbstractKirigamiApplication* self, const QMetaMethod* signal);
    friend bool AbstractKirigamiApplication_SuperIsSignalConnected(const AbstractKirigamiApplication* self, const QMetaMethod* signal);
};

#endif
