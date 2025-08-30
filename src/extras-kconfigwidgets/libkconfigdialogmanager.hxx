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
    using KConfigDialogManager_GetUserProperty_Callback = const char* (*)(const KConfigDialogManager*, QWidget*);
    using KConfigDialogManager_GetCustomProperty_Callback = const char* (*)(const KConfigDialogManager*, QWidget*);
    using KConfigDialogManager_GetUserPropertyChangedSignal_Callback = const char* (*)(const KConfigDialogManager*, QWidget*);
    using KConfigDialogManager_GetCustomPropertyChangedSignal_Callback = const char* (*)(const KConfigDialogManager*, QWidget*);
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

    ~VirtualKConfigDialogManager() {
        kconfigdialogmanager_metacall_callback = nullptr;
        kconfigdialogmanager_event_callback = nullptr;
        kconfigdialogmanager_eventfilter_callback = nullptr;
        kconfigdialogmanager_timerevent_callback = nullptr;
        kconfigdialogmanager_childevent_callback = nullptr;
        kconfigdialogmanager_customevent_callback = nullptr;
        kconfigdialogmanager_connectnotify_callback = nullptr;
        kconfigdialogmanager_disconnectnotify_callback = nullptr;
        kconfigdialogmanager_init_callback = nullptr;
        kconfigdialogmanager_parsechildren_callback = nullptr;
        kconfigdialogmanager_getuserproperty_callback = nullptr;
        kconfigdialogmanager_getcustomproperty_callback = nullptr;
        kconfigdialogmanager_getuserpropertychangedsignal_callback = nullptr;
        kconfigdialogmanager_getcustompropertychangedsignal_callback = nullptr;
        kconfigdialogmanager_setproperty_callback = nullptr;
        kconfigdialogmanager_property_callback = nullptr;
        kconfigdialogmanager_setupwidget_callback = nullptr;
        kconfigdialogmanager_initmaps_callback = nullptr;
        kconfigdialogmanager_sender_callback = nullptr;
        kconfigdialogmanager_sendersignalindex_callback = nullptr;
        kconfigdialogmanager_receivers_callback = nullptr;
        kconfigdialogmanager_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kconfigdialogmanager_metacall_isbase) {
            kconfigdialogmanager_metacall_isbase = false;
            return KConfigDialogManager::qt_metacall(param1, param2, param3);
        } else if (kconfigdialogmanager_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kconfigdialogmanager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KConfigDialogManager::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kconfigdialogmanager_event_isbase) {
            kconfigdialogmanager_event_isbase = false;
            return KConfigDialogManager::event(event);
        } else if (kconfigdialogmanager_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kconfigdialogmanager_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KConfigDialogManager::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kconfigdialogmanager_eventfilter_isbase) {
            kconfigdialogmanager_eventfilter_isbase = false;
            return KConfigDialogManager::eventFilter(watched, event);
        } else if (kconfigdialogmanager_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kconfigdialogmanager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KConfigDialogManager::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kconfigdialogmanager_timerevent_isbase) {
            kconfigdialogmanager_timerevent_isbase = false;
            KConfigDialogManager::timerEvent(event);
        } else if (kconfigdialogmanager_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kconfigdialogmanager_timerevent_callback(this, cbval1);
        } else {
            KConfigDialogManager::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kconfigdialogmanager_childevent_isbase) {
            kconfigdialogmanager_childevent_isbase = false;
            KConfigDialogManager::childEvent(event);
        } else if (kconfigdialogmanager_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kconfigdialogmanager_childevent_callback(this, cbval1);
        } else {
            KConfigDialogManager::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kconfigdialogmanager_customevent_isbase) {
            kconfigdialogmanager_customevent_isbase = false;
            KConfigDialogManager::customEvent(event);
        } else if (kconfigdialogmanager_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kconfigdialogmanager_customevent_callback(this, cbval1);
        } else {
            KConfigDialogManager::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kconfigdialogmanager_connectnotify_isbase) {
            kconfigdialogmanager_connectnotify_isbase = false;
            KConfigDialogManager::connectNotify(signal);
        } else if (kconfigdialogmanager_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kconfigdialogmanager_connectnotify_callback(this, cbval1);
        } else {
            KConfigDialogManager::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kconfigdialogmanager_disconnectnotify_isbase) {
            kconfigdialogmanager_disconnectnotify_isbase = false;
            KConfigDialogManager::disconnectNotify(signal);
        } else if (kconfigdialogmanager_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kconfigdialogmanager_disconnectnotify_callback(this, cbval1);
        } else {
            KConfigDialogManager::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void init(bool trackChanges) {
        if (kconfigdialogmanager_init_isbase) {
            kconfigdialogmanager_init_isbase = false;
            KConfigDialogManager::init(trackChanges);
        } else if (kconfigdialogmanager_init_callback != nullptr) {
            bool cbval1 = trackChanges;

            kconfigdialogmanager_init_callback(this, cbval1);
        } else {
            KConfigDialogManager::init(trackChanges);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool parseChildren(const QWidget* widget, bool trackChanges) {
        if (kconfigdialogmanager_parsechildren_isbase) {
            kconfigdialogmanager_parsechildren_isbase = false;
            return KConfigDialogManager::parseChildren(widget, trackChanges);
        } else if (kconfigdialogmanager_parsechildren_callback != nullptr) {
            QWidget* cbval1 = (QWidget*)widget;
            bool cbval2 = trackChanges;

            bool callback_ret = kconfigdialogmanager_parsechildren_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KConfigDialogManager::parseChildren(widget, trackChanges);
        }
    }

    // Virtual method for C ABI access and custom callback
    QByteArray getUserProperty(const QWidget* widget) const {
        if (kconfigdialogmanager_getuserproperty_isbase) {
            kconfigdialogmanager_getuserproperty_isbase = false;
            return KConfigDialogManager::getUserProperty(widget);
        } else if (kconfigdialogmanager_getuserproperty_callback != nullptr) {
            QWidget* cbval1 = (QWidget*)widget;

            const char* callback_ret = kconfigdialogmanager_getuserproperty_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret);
            return callback_ret_QByteArray;
        } else {
            return KConfigDialogManager::getUserProperty(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    QByteArray getCustomProperty(const QWidget* widget) const {
        if (kconfigdialogmanager_getcustomproperty_isbase) {
            kconfigdialogmanager_getcustomproperty_isbase = false;
            return KConfigDialogManager::getCustomProperty(widget);
        } else if (kconfigdialogmanager_getcustomproperty_callback != nullptr) {
            QWidget* cbval1 = (QWidget*)widget;

            const char* callback_ret = kconfigdialogmanager_getcustomproperty_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret);
            return callback_ret_QByteArray;
        } else {
            return KConfigDialogManager::getCustomProperty(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    QByteArray getUserPropertyChangedSignal(const QWidget* widget) const {
        if (kconfigdialogmanager_getuserpropertychangedsignal_isbase) {
            kconfigdialogmanager_getuserpropertychangedsignal_isbase = false;
            return KConfigDialogManager::getUserPropertyChangedSignal(widget);
        } else if (kconfigdialogmanager_getuserpropertychangedsignal_callback != nullptr) {
            QWidget* cbval1 = (QWidget*)widget;

            const char* callback_ret = kconfigdialogmanager_getuserpropertychangedsignal_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret);
            return callback_ret_QByteArray;
        } else {
            return KConfigDialogManager::getUserPropertyChangedSignal(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    QByteArray getCustomPropertyChangedSignal(const QWidget* widget) const {
        if (kconfigdialogmanager_getcustompropertychangedsignal_isbase) {
            kconfigdialogmanager_getcustompropertychangedsignal_isbase = false;
            return KConfigDialogManager::getCustomPropertyChangedSignal(widget);
        } else if (kconfigdialogmanager_getcustompropertychangedsignal_callback != nullptr) {
            QWidget* cbval1 = (QWidget*)widget;

            const char* callback_ret = kconfigdialogmanager_getcustompropertychangedsignal_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret);
            return callback_ret_QByteArray;
        } else {
            return KConfigDialogManager::getCustomPropertyChangedSignal(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProperty(QWidget* w, const QVariant& v) {
        if (kconfigdialogmanager_setproperty_isbase) {
            kconfigdialogmanager_setproperty_isbase = false;
            KConfigDialogManager::setProperty(w, v);
        } else if (kconfigdialogmanager_setproperty_callback != nullptr) {
            QWidget* cbval1 = w;
            const QVariant& v_ret = v;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&v_ret);

            kconfigdialogmanager_setproperty_callback(this, cbval1, cbval2);
        } else {
            KConfigDialogManager::setProperty(w, v);
        }
    }

    // Virtual method for C ABI access and custom callback
    QVariant property(QWidget* w) const {
        if (kconfigdialogmanager_property_isbase) {
            kconfigdialogmanager_property_isbase = false;
            return KConfigDialogManager::property(w);
        } else if (kconfigdialogmanager_property_callback != nullptr) {
            QWidget* cbval1 = w;

            QVariant* callback_ret = kconfigdialogmanager_property_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KConfigDialogManager::property(w);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setupWidget(QWidget* widget, KConfigSkeletonItem* item) {
        if (kconfigdialogmanager_setupwidget_isbase) {
            kconfigdialogmanager_setupwidget_isbase = false;
            KConfigDialogManager::setupWidget(widget, item);
        } else if (kconfigdialogmanager_setupwidget_callback != nullptr) {
            QWidget* cbval1 = widget;
            KConfigSkeletonItem* cbval2 = item;

            kconfigdialogmanager_setupwidget_callback(this, cbval1, cbval2);
        } else {
            KConfigDialogManager::setupWidget(widget, item);
        }
    }

    // Virtual method for C ABI access and custom callback
    void initMaps() {
        if (kconfigdialogmanager_initmaps_isbase) {
            kconfigdialogmanager_initmaps_isbase = false;
            KConfigDialogManager::initMaps();
        } else if (kconfigdialogmanager_initmaps_callback != nullptr) {
            kconfigdialogmanager_initmaps_callback();
        } else {
            KConfigDialogManager::initMaps();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kconfigdialogmanager_sender_isbase) {
            kconfigdialogmanager_sender_isbase = false;
            return KConfigDialogManager::sender();
        } else if (kconfigdialogmanager_sender_callback != nullptr) {
            QObject* callback_ret = kconfigdialogmanager_sender_callback();
            return callback_ret;
        } else {
            return KConfigDialogManager::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kconfigdialogmanager_sendersignalindex_isbase) {
            kconfigdialogmanager_sendersignalindex_isbase = false;
            return KConfigDialogManager::senderSignalIndex();
        } else if (kconfigdialogmanager_sendersignalindex_callback != nullptr) {
            int callback_ret = kconfigdialogmanager_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KConfigDialogManager::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kconfigdialogmanager_receivers_isbase) {
            kconfigdialogmanager_receivers_isbase = false;
            return KConfigDialogManager::receivers(signal);
        } else if (kconfigdialogmanager_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kconfigdialogmanager_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KConfigDialogManager::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kconfigdialogmanager_issignalconnected_isbase) {
            kconfigdialogmanager_issignalconnected_isbase = false;
            return KConfigDialogManager::isSignalConnected(signal);
        } else if (kconfigdialogmanager_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kconfigdialogmanager_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KConfigDialogManager::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KConfigDialogManager_TimerEvent(KConfigDialogManager* self, QTimerEvent* event);
    friend void KConfigDialogManager_QBaseTimerEvent(KConfigDialogManager* self, QTimerEvent* event);
    friend void KConfigDialogManager_ChildEvent(KConfigDialogManager* self, QChildEvent* event);
    friend void KConfigDialogManager_QBaseChildEvent(KConfigDialogManager* self, QChildEvent* event);
    friend void KConfigDialogManager_CustomEvent(KConfigDialogManager* self, QEvent* event);
    friend void KConfigDialogManager_QBaseCustomEvent(KConfigDialogManager* self, QEvent* event);
    friend void KConfigDialogManager_ConnectNotify(KConfigDialogManager* self, const QMetaMethod* signal);
    friend void KConfigDialogManager_QBaseConnectNotify(KConfigDialogManager* self, const QMetaMethod* signal);
    friend void KConfigDialogManager_DisconnectNotify(KConfigDialogManager* self, const QMetaMethod* signal);
    friend void KConfigDialogManager_QBaseDisconnectNotify(KConfigDialogManager* self, const QMetaMethod* signal);
    friend void KConfigDialogManager_Init(KConfigDialogManager* self, bool trackChanges);
    friend void KConfigDialogManager_QBaseInit(KConfigDialogManager* self, bool trackChanges);
    friend bool KConfigDialogManager_ParseChildren(KConfigDialogManager* self, const QWidget* widget, bool trackChanges);
    friend bool KConfigDialogManager_QBaseParseChildren(KConfigDialogManager* self, const QWidget* widget, bool trackChanges);
    friend libqt_string KConfigDialogManager_GetUserProperty(const KConfigDialogManager* self, const QWidget* widget);
    friend libqt_string KConfigDialogManager_QBaseGetUserProperty(const KConfigDialogManager* self, const QWidget* widget);
    friend libqt_string KConfigDialogManager_GetCustomProperty(const KConfigDialogManager* self, const QWidget* widget);
    friend libqt_string KConfigDialogManager_QBaseGetCustomProperty(const KConfigDialogManager* self, const QWidget* widget);
    friend libqt_string KConfigDialogManager_GetUserPropertyChangedSignal(const KConfigDialogManager* self, const QWidget* widget);
    friend libqt_string KConfigDialogManager_QBaseGetUserPropertyChangedSignal(const KConfigDialogManager* self, const QWidget* widget);
    friend libqt_string KConfigDialogManager_GetCustomPropertyChangedSignal(const KConfigDialogManager* self, const QWidget* widget);
    friend libqt_string KConfigDialogManager_QBaseGetCustomPropertyChangedSignal(const KConfigDialogManager* self, const QWidget* widget);
    friend void KConfigDialogManager_SetProperty(KConfigDialogManager* self, QWidget* w, const QVariant* v);
    friend void KConfigDialogManager_QBaseSetProperty(KConfigDialogManager* self, QWidget* w, const QVariant* v);
    friend QVariant* KConfigDialogManager_Property(const KConfigDialogManager* self, QWidget* w);
    friend QVariant* KConfigDialogManager_QBaseProperty(const KConfigDialogManager* self, QWidget* w);
    friend void KConfigDialogManager_SetupWidget(KConfigDialogManager* self, QWidget* widget, KConfigSkeletonItem* item);
    friend void KConfigDialogManager_QBaseSetupWidget(KConfigDialogManager* self, QWidget* widget, KConfigSkeletonItem* item);
    friend void KConfigDialogManager_InitMaps(KConfigDialogManager* self);
    friend void KConfigDialogManager_QBaseInitMaps(KConfigDialogManager* self);
    friend QObject* KConfigDialogManager_Sender(const KConfigDialogManager* self);
    friend QObject* KConfigDialogManager_QBaseSender(const KConfigDialogManager* self);
    friend int KConfigDialogManager_SenderSignalIndex(const KConfigDialogManager* self);
    friend int KConfigDialogManager_QBaseSenderSignalIndex(const KConfigDialogManager* self);
    friend int KConfigDialogManager_Receivers(const KConfigDialogManager* self, const char* signal);
    friend int KConfigDialogManager_QBaseReceivers(const KConfigDialogManager* self, const char* signal);
    friend bool KConfigDialogManager_IsSignalConnected(const KConfigDialogManager* self, const QMetaMethod* signal);
    friend bool KConfigDialogManager_QBaseIsSignalConnected(const KConfigDialogManager* self, const QMetaMethod* signal);
};

#endif
