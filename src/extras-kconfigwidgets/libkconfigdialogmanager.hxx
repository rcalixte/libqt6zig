#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKCONFIGDIALOGMANAGER_H
#define SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKCONFIGDIALOGMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KConfigDialogManager so that we can call protected methods
class VirtualKConfigDialogManager final : public KConfigDialogManager {

  public:
    // Virtual class boolean flag
    bool isVirtualKConfigDialogManager = true;

    // Virtual class public types (including callbacks)
    using KConfigDialogManager_MetaObject_Callback = QMetaObject* (*)();
    using KConfigDialogManager_Metacast_Callback = void* (*)(KConfigDialogManager*, const char*);
    using KConfigDialogManager_Metacall_Callback = int (*)(KConfigDialogManager*, int, int, void**);
    using KConfigDialogManager_Event_Callback = bool (*)(KConfigDialogManager*, QEvent*);
    using KConfigDialogManager_EventFilter_Callback = bool (*)(KConfigDialogManager*, QObject*, QEvent*);
    using KConfigDialogManager_TimerEvent_Callback = void (*)(KConfigDialogManager*, QTimerEvent*);
    using KConfigDialogManager_ChildEvent_Callback = void (*)(KConfigDialogManager*, QChildEvent*);
    using KConfigDialogManager_CustomEvent_Callback = void (*)(KConfigDialogManager*, QEvent*);
    using KConfigDialogManager_ConnectNotify_Callback = void (*)(KConfigDialogManager*, QMetaMethod*);
    using KConfigDialogManager_DisconnectNotify_Callback = void (*)(KConfigDialogManager*, QMetaMethod*);
    using KConfigDialogManager_Init_Callback = void (*)(KConfigDialogManager*, bool);
    using KConfigDialogManager_ParseChildren_Callback = bool (*)(KConfigDialogManager*, QWidget*, bool);
    using KConfigDialogManager_GetUserProperty_Callback = libqt_string (*)(const KConfigDialogManager*, QWidget*);
    using KConfigDialogManager_GetCustomProperty_Callback = libqt_string (*)(const KConfigDialogManager*, QWidget*);
    using KConfigDialogManager_GetUserPropertyChangedSignal_Callback = libqt_string (*)(const KConfigDialogManager*, QWidget*);
    using KConfigDialogManager_GetCustomPropertyChangedSignal_Callback = libqt_string (*)(const KConfigDialogManager*, QWidget*);
    using KConfigDialogManager_SetProperty_Callback = void (*)(KConfigDialogManager*, QWidget*, QVariant*);
    using KConfigDialogManager_Property_Callback = QVariant* (*)(const KConfigDialogManager*, QWidget*);
    using KConfigDialogManager_SetupWidget_Callback = void (*)(KConfigDialogManager*, QWidget*, KConfigSkeletonItem*);
    using KConfigDialogManager_InitMaps_Callback = void (*)();
    using KConfigDialogManager_Sender_Callback = QObject* (*)();
    using KConfigDialogManager_SenderSignalIndex_Callback = int (*)();
    using KConfigDialogManager_Receivers_Callback = int (*)(const KConfigDialogManager*, const char*);
    using KConfigDialogManager_IsSignalConnected_Callback = bool (*)(const KConfigDialogManager*, QMetaMethod*);

  protected:
    // Instance callback storage
    KConfigDialogManager_MetaObject_Callback kconfigdialogmanager_metaobject_callback = nullptr;
    KConfigDialogManager_Metacast_Callback kconfigdialogmanager_metacast_callback = nullptr;
    KConfigDialogManager_Metacall_Callback kconfigdialogmanager_metacall_callback = nullptr;
    KConfigDialogManager_Event_Callback kconfigdialogmanager_event_callback = nullptr;
    KConfigDialogManager_EventFilter_Callback kconfigdialogmanager_eventfilter_callback = nullptr;
    KConfigDialogManager_TimerEvent_Callback kconfigdialogmanager_timerevent_callback = nullptr;
    KConfigDialogManager_ChildEvent_Callback kconfigdialogmanager_childevent_callback = nullptr;
    KConfigDialogManager_CustomEvent_Callback kconfigdialogmanager_customevent_callback = nullptr;
    KConfigDialogManager_ConnectNotify_Callback kconfigdialogmanager_connectnotify_callback = nullptr;
    KConfigDialogManager_DisconnectNotify_Callback kconfigdialogmanager_disconnectnotify_callback = nullptr;
    KConfigDialogManager_Init_Callback kconfigdialogmanager_init_callback = nullptr;
    KConfigDialogManager_ParseChildren_Callback kconfigdialogmanager_parsechildren_callback = nullptr;
    KConfigDialogManager_GetUserProperty_Callback kconfigdialogmanager_getuserproperty_callback = nullptr;
    KConfigDialogManager_GetCustomProperty_Callback kconfigdialogmanager_getcustomproperty_callback = nullptr;
    KConfigDialogManager_GetUserPropertyChangedSignal_Callback kconfigdialogmanager_getuserpropertychangedsignal_callback = nullptr;
    KConfigDialogManager_GetCustomPropertyChangedSignal_Callback kconfigdialogmanager_getcustompropertychangedsignal_callback = nullptr;
    KConfigDialogManager_SetProperty_Callback kconfigdialogmanager_setproperty_callback = nullptr;
    KConfigDialogManager_Property_Callback kconfigdialogmanager_property_callback = nullptr;
    KConfigDialogManager_SetupWidget_Callback kconfigdialogmanager_setupwidget_callback = nullptr;
    KConfigDialogManager_InitMaps_Callback kconfigdialogmanager_initmaps_callback = nullptr;
    KConfigDialogManager_Sender_Callback kconfigdialogmanager_sender_callback = nullptr;
    KConfigDialogManager_SenderSignalIndex_Callback kconfigdialogmanager_sendersignalindex_callback = nullptr;
    KConfigDialogManager_Receivers_Callback kconfigdialogmanager_receivers_callback = nullptr;
    KConfigDialogManager_IsSignalConnected_Callback kconfigdialogmanager_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kconfigdialogmanager_metaobject_isbase = false;
    mutable bool kconfigdialogmanager_metacast_isbase = false;
    mutable bool kconfigdialogmanager_metacall_isbase = false;
    mutable bool kconfigdialogmanager_event_isbase = false;
    mutable bool kconfigdialogmanager_eventfilter_isbase = false;
    mutable bool kconfigdialogmanager_timerevent_isbase = false;
    mutable bool kconfigdialogmanager_childevent_isbase = false;
    mutable bool kconfigdialogmanager_customevent_isbase = false;
    mutable bool kconfigdialogmanager_connectnotify_isbase = false;
    mutable bool kconfigdialogmanager_disconnectnotify_isbase = false;
    mutable bool kconfigdialogmanager_init_isbase = false;
    mutable bool kconfigdialogmanager_parsechildren_isbase = false;
    mutable bool kconfigdialogmanager_getuserproperty_isbase = false;
    mutable bool kconfigdialogmanager_getcustomproperty_isbase = false;
    mutable bool kconfigdialogmanager_getuserpropertychangedsignal_isbase = false;
    mutable bool kconfigdialogmanager_getcustompropertychangedsignal_isbase = false;
    mutable bool kconfigdialogmanager_setproperty_isbase = false;
    mutable bool kconfigdialogmanager_property_isbase = false;
    mutable bool kconfigdialogmanager_setupwidget_isbase = false;
    mutable bool kconfigdialogmanager_initmaps_isbase = false;
    mutable bool kconfigdialogmanager_sender_isbase = false;
    mutable bool kconfigdialogmanager_sendersignalindex_isbase = false;
    mutable bool kconfigdialogmanager_receivers_isbase = false;
    mutable bool kconfigdialogmanager_issignalconnected_isbase = false;

  public:
    VirtualKConfigDialogManager(QWidget* parent, KCoreConfigSkeleton* conf) : KConfigDialogManager(parent, conf) {};

    // Callback setters
    inline void setKConfigDialogManager_MetaObject_Callback(KConfigDialogManager_MetaObject_Callback cb) { kconfigdialogmanager_metaobject_callback = cb; }
    inline void setKConfigDialogManager_Metacast_Callback(KConfigDialogManager_Metacast_Callback cb) { kconfigdialogmanager_metacast_callback = cb; }
    inline void setKConfigDialogManager_Metacall_Callback(KConfigDialogManager_Metacall_Callback cb) { kconfigdialogmanager_metacall_callback = cb; }
    inline void setKConfigDialogManager_Event_Callback(KConfigDialogManager_Event_Callback cb) { kconfigdialogmanager_event_callback = cb; }
    inline void setKConfigDialogManager_EventFilter_Callback(KConfigDialogManager_EventFilter_Callback cb) { kconfigdialogmanager_eventfilter_callback = cb; }
    inline void setKConfigDialogManager_TimerEvent_Callback(KConfigDialogManager_TimerEvent_Callback cb) { kconfigdialogmanager_timerevent_callback = cb; }
    inline void setKConfigDialogManager_ChildEvent_Callback(KConfigDialogManager_ChildEvent_Callback cb) { kconfigdialogmanager_childevent_callback = cb; }
    inline void setKConfigDialogManager_CustomEvent_Callback(KConfigDialogManager_CustomEvent_Callback cb) { kconfigdialogmanager_customevent_callback = cb; }
    inline void setKConfigDialogManager_ConnectNotify_Callback(KConfigDialogManager_ConnectNotify_Callback cb) { kconfigdialogmanager_connectnotify_callback = cb; }
    inline void setKConfigDialogManager_DisconnectNotify_Callback(KConfigDialogManager_DisconnectNotify_Callback cb) { kconfigdialogmanager_disconnectnotify_callback = cb; }
    inline void setKConfigDialogManager_Init_Callback(KConfigDialogManager_Init_Callback cb) { kconfigdialogmanager_init_callback = cb; }
    inline void setKConfigDialogManager_ParseChildren_Callback(KConfigDialogManager_ParseChildren_Callback cb) { kconfigdialogmanager_parsechildren_callback = cb; }
    inline void setKConfigDialogManager_GetUserProperty_Callback(KConfigDialogManager_GetUserProperty_Callback cb) { kconfigdialogmanager_getuserproperty_callback = cb; }
    inline void setKConfigDialogManager_GetCustomProperty_Callback(KConfigDialogManager_GetCustomProperty_Callback cb) { kconfigdialogmanager_getcustomproperty_callback = cb; }
    inline void setKConfigDialogManager_GetUserPropertyChangedSignal_Callback(KConfigDialogManager_GetUserPropertyChangedSignal_Callback cb) { kconfigdialogmanager_getuserpropertychangedsignal_callback = cb; }
    inline void setKConfigDialogManager_GetCustomPropertyChangedSignal_Callback(KConfigDialogManager_GetCustomPropertyChangedSignal_Callback cb) { kconfigdialogmanager_getcustompropertychangedsignal_callback = cb; }
    inline void setKConfigDialogManager_SetProperty_Callback(KConfigDialogManager_SetProperty_Callback cb) { kconfigdialogmanager_setproperty_callback = cb; }
    inline void setKConfigDialogManager_Property_Callback(KConfigDialogManager_Property_Callback cb) { kconfigdialogmanager_property_callback = cb; }
    inline void setKConfigDialogManager_SetupWidget_Callback(KConfigDialogManager_SetupWidget_Callback cb) { kconfigdialogmanager_setupwidget_callback = cb; }
    inline void setKConfigDialogManager_InitMaps_Callback(KConfigDialogManager_InitMaps_Callback cb) { kconfigdialogmanager_initmaps_callback = cb; }
    inline void setKConfigDialogManager_Sender_Callback(KConfigDialogManager_Sender_Callback cb) { kconfigdialogmanager_sender_callback = cb; }
    inline void setKConfigDialogManager_SenderSignalIndex_Callback(KConfigDialogManager_SenderSignalIndex_Callback cb) { kconfigdialogmanager_sendersignalindex_callback = cb; }
    inline void setKConfigDialogManager_Receivers_Callback(KConfigDialogManager_Receivers_Callback cb) { kconfigdialogmanager_receivers_callback = cb; }
    inline void setKConfigDialogManager_IsSignalConnected_Callback(KConfigDialogManager_IsSignalConnected_Callback cb) { kconfigdialogmanager_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKConfigDialogManager_MetaObject_IsBase(bool value) const { kconfigdialogmanager_metaobject_isbase = value; }
    inline void setKConfigDialogManager_Metacast_IsBase(bool value) const { kconfigdialogmanager_metacast_isbase = value; }
    inline void setKConfigDialogManager_Metacall_IsBase(bool value) const { kconfigdialogmanager_metacall_isbase = value; }
    inline void setKConfigDialogManager_Event_IsBase(bool value) const { kconfigdialogmanager_event_isbase = value; }
    inline void setKConfigDialogManager_EventFilter_IsBase(bool value) const { kconfigdialogmanager_eventfilter_isbase = value; }
    inline void setKConfigDialogManager_TimerEvent_IsBase(bool value) const { kconfigdialogmanager_timerevent_isbase = value; }
    inline void setKConfigDialogManager_ChildEvent_IsBase(bool value) const { kconfigdialogmanager_childevent_isbase = value; }
    inline void setKConfigDialogManager_CustomEvent_IsBase(bool value) const { kconfigdialogmanager_customevent_isbase = value; }
    inline void setKConfigDialogManager_ConnectNotify_IsBase(bool value) const { kconfigdialogmanager_connectnotify_isbase = value; }
    inline void setKConfigDialogManager_DisconnectNotify_IsBase(bool value) const { kconfigdialogmanager_disconnectnotify_isbase = value; }
    inline void setKConfigDialogManager_Init_IsBase(bool value) const { kconfigdialogmanager_init_isbase = value; }
    inline void setKConfigDialogManager_ParseChildren_IsBase(bool value) const { kconfigdialogmanager_parsechildren_isbase = value; }
    inline void setKConfigDialogManager_GetUserProperty_IsBase(bool value) const { kconfigdialogmanager_getuserproperty_isbase = value; }
    inline void setKConfigDialogManager_GetCustomProperty_IsBase(bool value) const { kconfigdialogmanager_getcustomproperty_isbase = value; }
    inline void setKConfigDialogManager_GetUserPropertyChangedSignal_IsBase(bool value) const { kconfigdialogmanager_getuserpropertychangedsignal_isbase = value; }
    inline void setKConfigDialogManager_GetCustomPropertyChangedSignal_IsBase(bool value) const { kconfigdialogmanager_getcustompropertychangedsignal_isbase = value; }
    inline void setKConfigDialogManager_SetProperty_IsBase(bool value) const { kconfigdialogmanager_setproperty_isbase = value; }
    inline void setKConfigDialogManager_Property_IsBase(bool value) const { kconfigdialogmanager_property_isbase = value; }
    inline void setKConfigDialogManager_SetupWidget_IsBase(bool value) const { kconfigdialogmanager_setupwidget_isbase = value; }
    inline void setKConfigDialogManager_InitMaps_IsBase(bool value) const { kconfigdialogmanager_initmaps_isbase = value; }
    inline void setKConfigDialogManager_Sender_IsBase(bool value) const { kconfigdialogmanager_sender_isbase = value; }
    inline void setKConfigDialogManager_SenderSignalIndex_IsBase(bool value) const { kconfigdialogmanager_sendersignalindex_isbase = value; }
    inline void setKConfigDialogManager_Receivers_IsBase(bool value) const { kconfigdialogmanager_receivers_isbase = value; }
    inline void setKConfigDialogManager_IsSignalConnected_IsBase(bool value) const { kconfigdialogmanager_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kconfigdialogmanager_metaobject_isbase) {
            kconfigdialogmanager_metaobject_isbase = false;
            return KConfigDialogManager::metaObject();
        }
        auto metaobject_cb = kconfigdialogmanager_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KConfigDialogManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kconfigdialogmanager_metacast_isbase) {
            kconfigdialogmanager_metacast_isbase = false;
            return KConfigDialogManager::qt_metacast(param1);
        }
        auto metacast_cb = kconfigdialogmanager_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KConfigDialogManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kconfigdialogmanager_metacall_isbase) {
            kconfigdialogmanager_metacall_isbase = false;
            return KConfigDialogManager::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kconfigdialogmanager_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KConfigDialogManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kconfigdialogmanager_event_isbase) {
            kconfigdialogmanager_event_isbase = false;
            return KConfigDialogManager::event(event);
        }
        auto event_cb = kconfigdialogmanager_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KConfigDialogManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kconfigdialogmanager_eventfilter_isbase) {
            kconfigdialogmanager_eventfilter_isbase = false;
            return KConfigDialogManager::eventFilter(watched, event);
        }
        auto eventfilter_cb = kconfigdialogmanager_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KConfigDialogManager::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kconfigdialogmanager_timerevent_isbase) {
            kconfigdialogmanager_timerevent_isbase = false;
            KConfigDialogManager::timerEvent(event);
            return;
        }
        auto timerevent_cb = kconfigdialogmanager_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KConfigDialogManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kconfigdialogmanager_childevent_isbase) {
            kconfigdialogmanager_childevent_isbase = false;
            KConfigDialogManager::childEvent(event);
            return;
        }
        auto childevent_cb = kconfigdialogmanager_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KConfigDialogManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kconfigdialogmanager_customevent_isbase) {
            kconfigdialogmanager_customevent_isbase = false;
            KConfigDialogManager::customEvent(event);
            return;
        }
        auto customevent_cb = kconfigdialogmanager_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KConfigDialogManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kconfigdialogmanager_connectnotify_isbase) {
            kconfigdialogmanager_connectnotify_isbase = false;
            KConfigDialogManager::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kconfigdialogmanager_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KConfigDialogManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kconfigdialogmanager_disconnectnotify_isbase) {
            kconfigdialogmanager_disconnectnotify_isbase = false;
            KConfigDialogManager::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kconfigdialogmanager_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KConfigDialogManager::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void init(bool trackChanges) {
        if (kconfigdialogmanager_init_isbase) {
            kconfigdialogmanager_init_isbase = false;
            KConfigDialogManager::init(trackChanges);
            return;
        }
        auto init_cb = kconfigdialogmanager_init_callback;
        if (init_cb) {
            bool cbval1 = trackChanges;

            init_cb(this, cbval1);
            return;
        }
        KConfigDialogManager::init(trackChanges);
    }

    // Virtual method for C ABI access and custom callback
    bool parseChildren(const QWidget* widget, bool trackChanges) {
        if (kconfigdialogmanager_parsechildren_isbase) {
            kconfigdialogmanager_parsechildren_isbase = false;
            return KConfigDialogManager::parseChildren(widget, trackChanges);
        }
        auto parsechildren_cb = kconfigdialogmanager_parsechildren_callback;
        if (parsechildren_cb) {
            QWidget* cbval1 = (QWidget*)widget;
            bool cbval2 = trackChanges;

            bool callback_ret = parsechildren_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KConfigDialogManager::parseChildren(widget, trackChanges);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray getUserProperty(const QWidget* widget) const {
        if (kconfigdialogmanager_getuserproperty_isbase) {
            kconfigdialogmanager_getuserproperty_isbase = false;
            return KConfigDialogManager::getUserProperty(widget);
        }
        auto getuserproperty_cb = kconfigdialogmanager_getuserproperty_callback;
        if (getuserproperty_cb) {
            QWidget* cbval1 = (QWidget*)widget;

            libqt_string callback_ret = getuserproperty_cb(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        }
        return KConfigDialogManager::getUserProperty(widget);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray getCustomProperty(const QWidget* widget) const {
        if (kconfigdialogmanager_getcustomproperty_isbase) {
            kconfigdialogmanager_getcustomproperty_isbase = false;
            return KConfigDialogManager::getCustomProperty(widget);
        }
        auto getcustomproperty_cb = kconfigdialogmanager_getcustomproperty_callback;
        if (getcustomproperty_cb) {
            QWidget* cbval1 = (QWidget*)widget;

            libqt_string callback_ret = getcustomproperty_cb(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        }
        return KConfigDialogManager::getCustomProperty(widget);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray getUserPropertyChangedSignal(const QWidget* widget) const {
        if (kconfigdialogmanager_getuserpropertychangedsignal_isbase) {
            kconfigdialogmanager_getuserpropertychangedsignal_isbase = false;
            return KConfigDialogManager::getUserPropertyChangedSignal(widget);
        }
        auto getuserpropertychangedsignal_cb = kconfigdialogmanager_getuserpropertychangedsignal_callback;
        if (getuserpropertychangedsignal_cb) {
            QWidget* cbval1 = (QWidget*)widget;

            libqt_string callback_ret = getuserpropertychangedsignal_cb(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        }
        return KConfigDialogManager::getUserPropertyChangedSignal(widget);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray getCustomPropertyChangedSignal(const QWidget* widget) const {
        if (kconfigdialogmanager_getcustompropertychangedsignal_isbase) {
            kconfigdialogmanager_getcustompropertychangedsignal_isbase = false;
            return KConfigDialogManager::getCustomPropertyChangedSignal(widget);
        }
        auto getcustompropertychangedsignal_cb = kconfigdialogmanager_getcustompropertychangedsignal_callback;
        if (getcustompropertychangedsignal_cb) {
            QWidget* cbval1 = (QWidget*)widget;

            libqt_string callback_ret = getcustompropertychangedsignal_cb(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        }
        return KConfigDialogManager::getCustomPropertyChangedSignal(widget);
    }

    // Virtual method for C ABI access and custom callback
    void setProperty(QWidget* w, const QVariant& v) {
        if (kconfigdialogmanager_setproperty_isbase) {
            kconfigdialogmanager_setproperty_isbase = false;
            KConfigDialogManager::setProperty(w, v);
            return;
        }
        auto setproperty_cb = kconfigdialogmanager_setproperty_callback;
        if (setproperty_cb) {
            QWidget* cbval1 = w;
            const QVariant& v_ret = v;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&v_ret);

            setproperty_cb(this, cbval1, cbval2);
            return;
        }
        KConfigDialogManager::setProperty(w, v);
    }

    // Virtual method for C ABI access and custom callback
    QVariant property(QWidget* w) const {
        if (kconfigdialogmanager_property_isbase) {
            kconfigdialogmanager_property_isbase = false;
            return KConfigDialogManager::property(w);
        }
        auto property_cb = kconfigdialogmanager_property_callback;
        if (property_cb) {
            QWidget* cbval1 = w;

            QVariant* callback_ret = property_cb(this, cbval1);
            return *callback_ret;
        }
        return KConfigDialogManager::property(w);
    }

    // Virtual method for C ABI access and custom callback
    void setupWidget(QWidget* widget, KConfigSkeletonItem* item) {
        if (kconfigdialogmanager_setupwidget_isbase) {
            kconfigdialogmanager_setupwidget_isbase = false;
            KConfigDialogManager::setupWidget(widget, item);
            return;
        }
        auto setupwidget_cb = kconfigdialogmanager_setupwidget_callback;
        if (setupwidget_cb) {
            QWidget* cbval1 = widget;
            KConfigSkeletonItem* cbval2 = item;

            setupwidget_cb(this, cbval1, cbval2);
            return;
        }
        KConfigDialogManager::setupWidget(widget, item);
    }

    // Virtual method for C ABI access and custom callback
    void initMaps() {
        if (kconfigdialogmanager_initmaps_isbase) {
            kconfigdialogmanager_initmaps_isbase = false;
            KConfigDialogManager::initMaps();
            return;
        }
        auto initmaps_cb = kconfigdialogmanager_initmaps_callback;
        if (initmaps_cb) {
            initmaps_cb();
            return;
        }
        KConfigDialogManager::initMaps();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kconfigdialogmanager_sender_isbase) {
            kconfigdialogmanager_sender_isbase = false;
            return KConfigDialogManager::sender();
        }
        auto sender_cb = kconfigdialogmanager_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KConfigDialogManager::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kconfigdialogmanager_sendersignalindex_isbase) {
            kconfigdialogmanager_sendersignalindex_isbase = false;
            return KConfigDialogManager::senderSignalIndex();
        }
        auto sendersignalindex_cb = kconfigdialogmanager_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KConfigDialogManager::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kconfigdialogmanager_receivers_isbase) {
            kconfigdialogmanager_receivers_isbase = false;
            return KConfigDialogManager::receivers(signal);
        }
        auto receivers_cb = kconfigdialogmanager_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KConfigDialogManager::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kconfigdialogmanager_issignalconnected_isbase) {
            kconfigdialogmanager_issignalconnected_isbase = false;
            return KConfigDialogManager::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kconfigdialogmanager_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KConfigDialogManager::isSignalConnected(signal);
    }

    // Friend functions
    friend void KConfigDialogManager_TimerEvent(KConfigDialogManager* self, QTimerEvent* event);
    friend void KConfigDialogManager_SuperTimerEvent(KConfigDialogManager* self, QTimerEvent* event);
    friend void KConfigDialogManager_ChildEvent(KConfigDialogManager* self, QChildEvent* event);
    friend void KConfigDialogManager_SuperChildEvent(KConfigDialogManager* self, QChildEvent* event);
    friend void KConfigDialogManager_CustomEvent(KConfigDialogManager* self, QEvent* event);
    friend void KConfigDialogManager_SuperCustomEvent(KConfigDialogManager* self, QEvent* event);
    friend void KConfigDialogManager_ConnectNotify(KConfigDialogManager* self, const QMetaMethod* signal);
    friend void KConfigDialogManager_SuperConnectNotify(KConfigDialogManager* self, const QMetaMethod* signal);
    friend void KConfigDialogManager_DisconnectNotify(KConfigDialogManager* self, const QMetaMethod* signal);
    friend void KConfigDialogManager_SuperDisconnectNotify(KConfigDialogManager* self, const QMetaMethod* signal);
    friend void KConfigDialogManager_Init(KConfigDialogManager* self, bool trackChanges);
    friend void KConfigDialogManager_SuperInit(KConfigDialogManager* self, bool trackChanges);
    friend bool KConfigDialogManager_ParseChildren(KConfigDialogManager* self, const QWidget* widget, bool trackChanges);
    friend bool KConfigDialogManager_SuperParseChildren(KConfigDialogManager* self, const QWidget* widget, bool trackChanges);
    friend libqt_string KConfigDialogManager_GetUserProperty(const KConfigDialogManager* self, const QWidget* widget);
    friend libqt_string KConfigDialogManager_SuperGetUserProperty(const KConfigDialogManager* self, const QWidget* widget);
    friend libqt_string KConfigDialogManager_GetCustomProperty(const KConfigDialogManager* self, const QWidget* widget);
    friend libqt_string KConfigDialogManager_SuperGetCustomProperty(const KConfigDialogManager* self, const QWidget* widget);
    friend libqt_string KConfigDialogManager_GetUserPropertyChangedSignal(const KConfigDialogManager* self, const QWidget* widget);
    friend libqt_string KConfigDialogManager_SuperGetUserPropertyChangedSignal(const KConfigDialogManager* self, const QWidget* widget);
    friend libqt_string KConfigDialogManager_GetCustomPropertyChangedSignal(const KConfigDialogManager* self, const QWidget* widget);
    friend libqt_string KConfigDialogManager_SuperGetCustomPropertyChangedSignal(const KConfigDialogManager* self, const QWidget* widget);
    friend void KConfigDialogManager_SetProperty(KConfigDialogManager* self, QWidget* w, const QVariant* v);
    friend void KConfigDialogManager_SuperSetProperty(KConfigDialogManager* self, QWidget* w, const QVariant* v);
    friend QVariant* KConfigDialogManager_Property(const KConfigDialogManager* self, QWidget* w);
    friend QVariant* KConfigDialogManager_SuperProperty(const KConfigDialogManager* self, QWidget* w);
    friend void KConfigDialogManager_SetupWidget(KConfigDialogManager* self, QWidget* widget, KConfigSkeletonItem* item);
    friend void KConfigDialogManager_SuperSetupWidget(KConfigDialogManager* self, QWidget* widget, KConfigSkeletonItem* item);
    friend void KConfigDialogManager_InitMaps(KConfigDialogManager* self);
    friend void KConfigDialogManager_SuperInitMaps(KConfigDialogManager* self);
    friend QObject* KConfigDialogManager_Sender(const KConfigDialogManager* self);
    friend QObject* KConfigDialogManager_SuperSender(const KConfigDialogManager* self);
    friend int KConfigDialogManager_SenderSignalIndex(const KConfigDialogManager* self);
    friend int KConfigDialogManager_SuperSenderSignalIndex(const KConfigDialogManager* self);
    friend int KConfigDialogManager_Receivers(const KConfigDialogManager* self, const char* signal);
    friend int KConfigDialogManager_SuperReceivers(const KConfigDialogManager* self, const char* signal);
    friend bool KConfigDialogManager_IsSignalConnected(const KConfigDialogManager* self, const QMetaMethod* signal);
    friend bool KConfigDialogManager_SuperIsSignalConnected(const KConfigDialogManager* self, const QMetaMethod* signal);
};

#endif
