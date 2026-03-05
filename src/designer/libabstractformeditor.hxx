#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALABSTRACTFORMEDITOR_H
#define SRC_DESIGNERC_LIBVIRTUALABSTRACTFORMEDITOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerFormEditorInterface so that we can call protected methods
class VirtualQDesignerFormEditorInterface final : public QDesignerFormEditorInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerFormEditorInterface = true;

    // Virtual class public types (including callbacks)
    using QDesignerFormEditorInterface_MetaObject_Callback = QMetaObject* (*)();
    using QDesignerFormEditorInterface_Metacast_Callback = void* (*)(QDesignerFormEditorInterface*, const char*);
    using QDesignerFormEditorInterface_Metacall_Callback = int (*)(QDesignerFormEditorInterface*, int, int, void**);
    using QDesignerFormEditorInterface_Event_Callback = bool (*)(QDesignerFormEditorInterface*, QEvent*);
    using QDesignerFormEditorInterface_EventFilter_Callback = bool (*)(QDesignerFormEditorInterface*, QObject*, QEvent*);
    using QDesignerFormEditorInterface_TimerEvent_Callback = void (*)(QDesignerFormEditorInterface*, QTimerEvent*);
    using QDesignerFormEditorInterface_ChildEvent_Callback = void (*)(QDesignerFormEditorInterface*, QChildEvent*);
    using QDesignerFormEditorInterface_CustomEvent_Callback = void (*)(QDesignerFormEditorInterface*, QEvent*);
    using QDesignerFormEditorInterface_ConnectNotify_Callback = void (*)(QDesignerFormEditorInterface*, QMetaMethod*);
    using QDesignerFormEditorInterface_DisconnectNotify_Callback = void (*)(QDesignerFormEditorInterface*, QMetaMethod*);
    using QDesignerFormEditorInterface_SetFormManager_Callback = void (*)(QDesignerFormEditorInterface*, QDesignerFormWindowManagerInterface*);
    using QDesignerFormEditorInterface_SetMetaDataBase_Callback = void (*)(QDesignerFormEditorInterface*, QDesignerMetaDataBaseInterface*);
    using QDesignerFormEditorInterface_SetWidgetDataBase_Callback = void (*)(QDesignerFormEditorInterface*, QDesignerWidgetDataBaseInterface*);
    using QDesignerFormEditorInterface_SetPromotion_Callback = void (*)(QDesignerFormEditorInterface*, QDesignerPromotionInterface*);
    using QDesignerFormEditorInterface_SetWidgetFactory_Callback = void (*)(QDesignerFormEditorInterface*, QDesignerWidgetFactoryInterface*);
    using QDesignerFormEditorInterface_SetExtensionManager_Callback = void (*)(QDesignerFormEditorInterface*, QExtensionManager*);
    using QDesignerFormEditorInterface_Sender_Callback = QObject* (*)();
    using QDesignerFormEditorInterface_SenderSignalIndex_Callback = int (*)();
    using QDesignerFormEditorInterface_Receivers_Callback = int (*)(const QDesignerFormEditorInterface*, const char*);
    using QDesignerFormEditorInterface_IsSignalConnected_Callback = bool (*)(const QDesignerFormEditorInterface*, QMetaMethod*);

  protected:
    // Instance callback storage
    QDesignerFormEditorInterface_MetaObject_Callback qdesignerformeditorinterface_metaobject_callback = nullptr;
    QDesignerFormEditorInterface_Metacast_Callback qdesignerformeditorinterface_metacast_callback = nullptr;
    QDesignerFormEditorInterface_Metacall_Callback qdesignerformeditorinterface_metacall_callback = nullptr;
    QDesignerFormEditorInterface_Event_Callback qdesignerformeditorinterface_event_callback = nullptr;
    QDesignerFormEditorInterface_EventFilter_Callback qdesignerformeditorinterface_eventfilter_callback = nullptr;
    QDesignerFormEditorInterface_TimerEvent_Callback qdesignerformeditorinterface_timerevent_callback = nullptr;
    QDesignerFormEditorInterface_ChildEvent_Callback qdesignerformeditorinterface_childevent_callback = nullptr;
    QDesignerFormEditorInterface_CustomEvent_Callback qdesignerformeditorinterface_customevent_callback = nullptr;
    QDesignerFormEditorInterface_ConnectNotify_Callback qdesignerformeditorinterface_connectnotify_callback = nullptr;
    QDesignerFormEditorInterface_DisconnectNotify_Callback qdesignerformeditorinterface_disconnectnotify_callback = nullptr;
    QDesignerFormEditorInterface_SetFormManager_Callback qdesignerformeditorinterface_setformmanager_callback = nullptr;
    QDesignerFormEditorInterface_SetMetaDataBase_Callback qdesignerformeditorinterface_setmetadatabase_callback = nullptr;
    QDesignerFormEditorInterface_SetWidgetDataBase_Callback qdesignerformeditorinterface_setwidgetdatabase_callback = nullptr;
    QDesignerFormEditorInterface_SetPromotion_Callback qdesignerformeditorinterface_setpromotion_callback = nullptr;
    QDesignerFormEditorInterface_SetWidgetFactory_Callback qdesignerformeditorinterface_setwidgetfactory_callback = nullptr;
    QDesignerFormEditorInterface_SetExtensionManager_Callback qdesignerformeditorinterface_setextensionmanager_callback = nullptr;
    QDesignerFormEditorInterface_Sender_Callback qdesignerformeditorinterface_sender_callback = nullptr;
    QDesignerFormEditorInterface_SenderSignalIndex_Callback qdesignerformeditorinterface_sendersignalindex_callback = nullptr;
    QDesignerFormEditorInterface_Receivers_Callback qdesignerformeditorinterface_receivers_callback = nullptr;
    QDesignerFormEditorInterface_IsSignalConnected_Callback qdesignerformeditorinterface_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdesignerformeditorinterface_metaobject_isbase = false;
    mutable bool qdesignerformeditorinterface_metacast_isbase = false;
    mutable bool qdesignerformeditorinterface_metacall_isbase = false;
    mutable bool qdesignerformeditorinterface_event_isbase = false;
    mutable bool qdesignerformeditorinterface_eventfilter_isbase = false;
    mutable bool qdesignerformeditorinterface_timerevent_isbase = false;
    mutable bool qdesignerformeditorinterface_childevent_isbase = false;
    mutable bool qdesignerformeditorinterface_customevent_isbase = false;
    mutable bool qdesignerformeditorinterface_connectnotify_isbase = false;
    mutable bool qdesignerformeditorinterface_disconnectnotify_isbase = false;
    mutable bool qdesignerformeditorinterface_setformmanager_isbase = false;
    mutable bool qdesignerformeditorinterface_setmetadatabase_isbase = false;
    mutable bool qdesignerformeditorinterface_setwidgetdatabase_isbase = false;
    mutable bool qdesignerformeditorinterface_setpromotion_isbase = false;
    mutable bool qdesignerformeditorinterface_setwidgetfactory_isbase = false;
    mutable bool qdesignerformeditorinterface_setextensionmanager_isbase = false;
    mutable bool qdesignerformeditorinterface_sender_isbase = false;
    mutable bool qdesignerformeditorinterface_sendersignalindex_isbase = false;
    mutable bool qdesignerformeditorinterface_receivers_isbase = false;
    mutable bool qdesignerformeditorinterface_issignalconnected_isbase = false;

  public:
    VirtualQDesignerFormEditorInterface() : QDesignerFormEditorInterface() {};
    VirtualQDesignerFormEditorInterface(QObject* parent) : QDesignerFormEditorInterface(parent) {};

    // Callback setters
    inline void setQDesignerFormEditorInterface_MetaObject_Callback(QDesignerFormEditorInterface_MetaObject_Callback cb) { qdesignerformeditorinterface_metaobject_callback = cb; }
    inline void setQDesignerFormEditorInterface_Metacast_Callback(QDesignerFormEditorInterface_Metacast_Callback cb) { qdesignerformeditorinterface_metacast_callback = cb; }
    inline void setQDesignerFormEditorInterface_Metacall_Callback(QDesignerFormEditorInterface_Metacall_Callback cb) { qdesignerformeditorinterface_metacall_callback = cb; }
    inline void setQDesignerFormEditorInterface_Event_Callback(QDesignerFormEditorInterface_Event_Callback cb) { qdesignerformeditorinterface_event_callback = cb; }
    inline void setQDesignerFormEditorInterface_EventFilter_Callback(QDesignerFormEditorInterface_EventFilter_Callback cb) { qdesignerformeditorinterface_eventfilter_callback = cb; }
    inline void setQDesignerFormEditorInterface_TimerEvent_Callback(QDesignerFormEditorInterface_TimerEvent_Callback cb) { qdesignerformeditorinterface_timerevent_callback = cb; }
    inline void setQDesignerFormEditorInterface_ChildEvent_Callback(QDesignerFormEditorInterface_ChildEvent_Callback cb) { qdesignerformeditorinterface_childevent_callback = cb; }
    inline void setQDesignerFormEditorInterface_CustomEvent_Callback(QDesignerFormEditorInterface_CustomEvent_Callback cb) { qdesignerformeditorinterface_customevent_callback = cb; }
    inline void setQDesignerFormEditorInterface_ConnectNotify_Callback(QDesignerFormEditorInterface_ConnectNotify_Callback cb) { qdesignerformeditorinterface_connectnotify_callback = cb; }
    inline void setQDesignerFormEditorInterface_DisconnectNotify_Callback(QDesignerFormEditorInterface_DisconnectNotify_Callback cb) { qdesignerformeditorinterface_disconnectnotify_callback = cb; }
    inline void setQDesignerFormEditorInterface_SetFormManager_Callback(QDesignerFormEditorInterface_SetFormManager_Callback cb) { qdesignerformeditorinterface_setformmanager_callback = cb; }
    inline void setQDesignerFormEditorInterface_SetMetaDataBase_Callback(QDesignerFormEditorInterface_SetMetaDataBase_Callback cb) { qdesignerformeditorinterface_setmetadatabase_callback = cb; }
    inline void setQDesignerFormEditorInterface_SetWidgetDataBase_Callback(QDesignerFormEditorInterface_SetWidgetDataBase_Callback cb) { qdesignerformeditorinterface_setwidgetdatabase_callback = cb; }
    inline void setQDesignerFormEditorInterface_SetPromotion_Callback(QDesignerFormEditorInterface_SetPromotion_Callback cb) { qdesignerformeditorinterface_setpromotion_callback = cb; }
    inline void setQDesignerFormEditorInterface_SetWidgetFactory_Callback(QDesignerFormEditorInterface_SetWidgetFactory_Callback cb) { qdesignerformeditorinterface_setwidgetfactory_callback = cb; }
    inline void setQDesignerFormEditorInterface_SetExtensionManager_Callback(QDesignerFormEditorInterface_SetExtensionManager_Callback cb) { qdesignerformeditorinterface_setextensionmanager_callback = cb; }
    inline void setQDesignerFormEditorInterface_Sender_Callback(QDesignerFormEditorInterface_Sender_Callback cb) { qdesignerformeditorinterface_sender_callback = cb; }
    inline void setQDesignerFormEditorInterface_SenderSignalIndex_Callback(QDesignerFormEditorInterface_SenderSignalIndex_Callback cb) { qdesignerformeditorinterface_sendersignalindex_callback = cb; }
    inline void setQDesignerFormEditorInterface_Receivers_Callback(QDesignerFormEditorInterface_Receivers_Callback cb) { qdesignerformeditorinterface_receivers_callback = cb; }
    inline void setQDesignerFormEditorInterface_IsSignalConnected_Callback(QDesignerFormEditorInterface_IsSignalConnected_Callback cb) { qdesignerformeditorinterface_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQDesignerFormEditorInterface_MetaObject_IsBase(bool value) const { qdesignerformeditorinterface_metaobject_isbase = value; }
    inline void setQDesignerFormEditorInterface_Metacast_IsBase(bool value) const { qdesignerformeditorinterface_metacast_isbase = value; }
    inline void setQDesignerFormEditorInterface_Metacall_IsBase(bool value) const { qdesignerformeditorinterface_metacall_isbase = value; }
    inline void setQDesignerFormEditorInterface_Event_IsBase(bool value) const { qdesignerformeditorinterface_event_isbase = value; }
    inline void setQDesignerFormEditorInterface_EventFilter_IsBase(bool value) const { qdesignerformeditorinterface_eventfilter_isbase = value; }
    inline void setQDesignerFormEditorInterface_TimerEvent_IsBase(bool value) const { qdesignerformeditorinterface_timerevent_isbase = value; }
    inline void setQDesignerFormEditorInterface_ChildEvent_IsBase(bool value) const { qdesignerformeditorinterface_childevent_isbase = value; }
    inline void setQDesignerFormEditorInterface_CustomEvent_IsBase(bool value) const { qdesignerformeditorinterface_customevent_isbase = value; }
    inline void setQDesignerFormEditorInterface_ConnectNotify_IsBase(bool value) const { qdesignerformeditorinterface_connectnotify_isbase = value; }
    inline void setQDesignerFormEditorInterface_DisconnectNotify_IsBase(bool value) const { qdesignerformeditorinterface_disconnectnotify_isbase = value; }
    inline void setQDesignerFormEditorInterface_SetFormManager_IsBase(bool value) const { qdesignerformeditorinterface_setformmanager_isbase = value; }
    inline void setQDesignerFormEditorInterface_SetMetaDataBase_IsBase(bool value) const { qdesignerformeditorinterface_setmetadatabase_isbase = value; }
    inline void setQDesignerFormEditorInterface_SetWidgetDataBase_IsBase(bool value) const { qdesignerformeditorinterface_setwidgetdatabase_isbase = value; }
    inline void setQDesignerFormEditorInterface_SetPromotion_IsBase(bool value) const { qdesignerformeditorinterface_setpromotion_isbase = value; }
    inline void setQDesignerFormEditorInterface_SetWidgetFactory_IsBase(bool value) const { qdesignerformeditorinterface_setwidgetfactory_isbase = value; }
    inline void setQDesignerFormEditorInterface_SetExtensionManager_IsBase(bool value) const { qdesignerformeditorinterface_setextensionmanager_isbase = value; }
    inline void setQDesignerFormEditorInterface_Sender_IsBase(bool value) const { qdesignerformeditorinterface_sender_isbase = value; }
    inline void setQDesignerFormEditorInterface_SenderSignalIndex_IsBase(bool value) const { qdesignerformeditorinterface_sendersignalindex_isbase = value; }
    inline void setQDesignerFormEditorInterface_Receivers_IsBase(bool value) const { qdesignerformeditorinterface_receivers_isbase = value; }
    inline void setQDesignerFormEditorInterface_IsSignalConnected_IsBase(bool value) const { qdesignerformeditorinterface_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerformeditorinterface_metaobject_isbase) {
            qdesignerformeditorinterface_metaobject_isbase = false;
            return QDesignerFormEditorInterface::metaObject();
        }
        auto metaobject_cb = qdesignerformeditorinterface_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QDesignerFormEditorInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerformeditorinterface_metacast_isbase) {
            qdesignerformeditorinterface_metacast_isbase = false;
            return QDesignerFormEditorInterface::qt_metacast(param1);
        }
        auto metacast_cb = qdesignerformeditorinterface_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerFormEditorInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerformeditorinterface_metacall_isbase) {
            qdesignerformeditorinterface_metacall_isbase = false;
            return QDesignerFormEditorInterface::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qdesignerformeditorinterface_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDesignerFormEditorInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerformeditorinterface_event_isbase) {
            qdesignerformeditorinterface_event_isbase = false;
            return QDesignerFormEditorInterface::event(event);
        }
        auto event_cb = qdesignerformeditorinterface_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerFormEditorInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerformeditorinterface_eventfilter_isbase) {
            qdesignerformeditorinterface_eventfilter_isbase = false;
            return QDesignerFormEditorInterface::eventFilter(watched, event);
        }
        auto eventfilter_cb = qdesignerformeditorinterface_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDesignerFormEditorInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerformeditorinterface_timerevent_isbase) {
            qdesignerformeditorinterface_timerevent_isbase = false;
            QDesignerFormEditorInterface::timerEvent(event);
            return;
        }
        auto timerevent_cb = qdesignerformeditorinterface_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QDesignerFormEditorInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerformeditorinterface_childevent_isbase) {
            qdesignerformeditorinterface_childevent_isbase = false;
            QDesignerFormEditorInterface::childEvent(event);
            return;
        }
        auto childevent_cb = qdesignerformeditorinterface_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QDesignerFormEditorInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerformeditorinterface_customevent_isbase) {
            qdesignerformeditorinterface_customevent_isbase = false;
            QDesignerFormEditorInterface::customEvent(event);
            return;
        }
        auto customevent_cb = qdesignerformeditorinterface_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QDesignerFormEditorInterface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerformeditorinterface_connectnotify_isbase) {
            qdesignerformeditorinterface_connectnotify_isbase = false;
            QDesignerFormEditorInterface::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qdesignerformeditorinterface_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QDesignerFormEditorInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerformeditorinterface_disconnectnotify_isbase) {
            qdesignerformeditorinterface_disconnectnotify_isbase = false;
            QDesignerFormEditorInterface::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qdesignerformeditorinterface_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QDesignerFormEditorInterface::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setFormManager(QDesignerFormWindowManagerInterface* formWindowManager) {
        if (qdesignerformeditorinterface_setformmanager_isbase) {
            qdesignerformeditorinterface_setformmanager_isbase = false;
            QDesignerFormEditorInterface::setFormManager(formWindowManager);
            return;
        }
        auto setformmanager_cb = qdesignerformeditorinterface_setformmanager_callback;
        if (setformmanager_cb) {
            QDesignerFormWindowManagerInterface* cbval1 = formWindowManager;

            setformmanager_cb(this, cbval1);
            return;
        }
        QDesignerFormEditorInterface::setFormManager(formWindowManager);
    }

    // Virtual method for C ABI access and custom callback
    void setMetaDataBase(QDesignerMetaDataBaseInterface* metaDataBase) {
        if (qdesignerformeditorinterface_setmetadatabase_isbase) {
            qdesignerformeditorinterface_setmetadatabase_isbase = false;
            QDesignerFormEditorInterface::setMetaDataBase(metaDataBase);
            return;
        }
        auto setmetadatabase_cb = qdesignerformeditorinterface_setmetadatabase_callback;
        if (setmetadatabase_cb) {
            QDesignerMetaDataBaseInterface* cbval1 = metaDataBase;

            setmetadatabase_cb(this, cbval1);
            return;
        }
        QDesignerFormEditorInterface::setMetaDataBase(metaDataBase);
    }

    // Virtual method for C ABI access and custom callback
    void setWidgetDataBase(QDesignerWidgetDataBaseInterface* widgetDataBase) {
        if (qdesignerformeditorinterface_setwidgetdatabase_isbase) {
            qdesignerformeditorinterface_setwidgetdatabase_isbase = false;
            QDesignerFormEditorInterface::setWidgetDataBase(widgetDataBase);
            return;
        }
        auto setwidgetdatabase_cb = qdesignerformeditorinterface_setwidgetdatabase_callback;
        if (setwidgetdatabase_cb) {
            QDesignerWidgetDataBaseInterface* cbval1 = widgetDataBase;

            setwidgetdatabase_cb(this, cbval1);
            return;
        }
        QDesignerFormEditorInterface::setWidgetDataBase(widgetDataBase);
    }

    // Virtual method for C ABI access and custom callback
    void setPromotion(QDesignerPromotionInterface* promotion) {
        if (qdesignerformeditorinterface_setpromotion_isbase) {
            qdesignerformeditorinterface_setpromotion_isbase = false;
            QDesignerFormEditorInterface::setPromotion(promotion);
            return;
        }
        auto setpromotion_cb = qdesignerformeditorinterface_setpromotion_callback;
        if (setpromotion_cb) {
            QDesignerPromotionInterface* cbval1 = promotion;

            setpromotion_cb(this, cbval1);
            return;
        }
        QDesignerFormEditorInterface::setPromotion(promotion);
    }

    // Virtual method for C ABI access and custom callback
    void setWidgetFactory(QDesignerWidgetFactoryInterface* widgetFactory) {
        if (qdesignerformeditorinterface_setwidgetfactory_isbase) {
            qdesignerformeditorinterface_setwidgetfactory_isbase = false;
            QDesignerFormEditorInterface::setWidgetFactory(widgetFactory);
            return;
        }
        auto setwidgetfactory_cb = qdesignerformeditorinterface_setwidgetfactory_callback;
        if (setwidgetfactory_cb) {
            QDesignerWidgetFactoryInterface* cbval1 = widgetFactory;

            setwidgetfactory_cb(this, cbval1);
            return;
        }
        QDesignerFormEditorInterface::setWidgetFactory(widgetFactory);
    }

    // Virtual method for C ABI access and custom callback
    void setExtensionManager(QExtensionManager* extensionManager) {
        if (qdesignerformeditorinterface_setextensionmanager_isbase) {
            qdesignerformeditorinterface_setextensionmanager_isbase = false;
            QDesignerFormEditorInterface::setExtensionManager(extensionManager);
            return;
        }
        auto setextensionmanager_cb = qdesignerformeditorinterface_setextensionmanager_callback;
        if (setextensionmanager_cb) {
            QExtensionManager* cbval1 = extensionManager;

            setextensionmanager_cb(this, cbval1);
            return;
        }
        QDesignerFormEditorInterface::setExtensionManager(extensionManager);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdesignerformeditorinterface_sender_isbase) {
            qdesignerformeditorinterface_sender_isbase = false;
            return QDesignerFormEditorInterface::sender();
        }
        auto sender_cb = qdesignerformeditorinterface_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QDesignerFormEditorInterface::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdesignerformeditorinterface_sendersignalindex_isbase) {
            qdesignerformeditorinterface_sendersignalindex_isbase = false;
            return QDesignerFormEditorInterface::senderSignalIndex();
        }
        auto sendersignalindex_cb = qdesignerformeditorinterface_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QDesignerFormEditorInterface::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdesignerformeditorinterface_receivers_isbase) {
            qdesignerformeditorinterface_receivers_isbase = false;
            return QDesignerFormEditorInterface::receivers(signal);
        }
        auto receivers_cb = qdesignerformeditorinterface_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerFormEditorInterface::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdesignerformeditorinterface_issignalconnected_isbase) {
            qdesignerformeditorinterface_issignalconnected_isbase = false;
            return QDesignerFormEditorInterface::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qdesignerformeditorinterface_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerFormEditorInterface::isSignalConnected(signal);
    }

    // Friend functions
    friend void QDesignerFormEditorInterface_TimerEvent(QDesignerFormEditorInterface* self, QTimerEvent* event);
    friend void QDesignerFormEditorInterface_SuperTimerEvent(QDesignerFormEditorInterface* self, QTimerEvent* event);
    friend void QDesignerFormEditorInterface_ChildEvent(QDesignerFormEditorInterface* self, QChildEvent* event);
    friend void QDesignerFormEditorInterface_SuperChildEvent(QDesignerFormEditorInterface* self, QChildEvent* event);
    friend void QDesignerFormEditorInterface_CustomEvent(QDesignerFormEditorInterface* self, QEvent* event);
    friend void QDesignerFormEditorInterface_SuperCustomEvent(QDesignerFormEditorInterface* self, QEvent* event);
    friend void QDesignerFormEditorInterface_ConnectNotify(QDesignerFormEditorInterface* self, const QMetaMethod* signal);
    friend void QDesignerFormEditorInterface_SuperConnectNotify(QDesignerFormEditorInterface* self, const QMetaMethod* signal);
    friend void QDesignerFormEditorInterface_DisconnectNotify(QDesignerFormEditorInterface* self, const QMetaMethod* signal);
    friend void QDesignerFormEditorInterface_SuperDisconnectNotify(QDesignerFormEditorInterface* self, const QMetaMethod* signal);
    friend void QDesignerFormEditorInterface_SetFormManager(QDesignerFormEditorInterface* self, QDesignerFormWindowManagerInterface* formWindowManager);
    friend void QDesignerFormEditorInterface_SuperSetFormManager(QDesignerFormEditorInterface* self, QDesignerFormWindowManagerInterface* formWindowManager);
    friend void QDesignerFormEditorInterface_SetMetaDataBase(QDesignerFormEditorInterface* self, QDesignerMetaDataBaseInterface* metaDataBase);
    friend void QDesignerFormEditorInterface_SuperSetMetaDataBase(QDesignerFormEditorInterface* self, QDesignerMetaDataBaseInterface* metaDataBase);
    friend void QDesignerFormEditorInterface_SetWidgetDataBase(QDesignerFormEditorInterface* self, QDesignerWidgetDataBaseInterface* widgetDataBase);
    friend void QDesignerFormEditorInterface_SuperSetWidgetDataBase(QDesignerFormEditorInterface* self, QDesignerWidgetDataBaseInterface* widgetDataBase);
    friend void QDesignerFormEditorInterface_SetPromotion(QDesignerFormEditorInterface* self, QDesignerPromotionInterface* promotion);
    friend void QDesignerFormEditorInterface_SuperSetPromotion(QDesignerFormEditorInterface* self, QDesignerPromotionInterface* promotion);
    friend void QDesignerFormEditorInterface_SetWidgetFactory(QDesignerFormEditorInterface* self, QDesignerWidgetFactoryInterface* widgetFactory);
    friend void QDesignerFormEditorInterface_SuperSetWidgetFactory(QDesignerFormEditorInterface* self, QDesignerWidgetFactoryInterface* widgetFactory);
    friend void QDesignerFormEditorInterface_SetExtensionManager(QDesignerFormEditorInterface* self, QExtensionManager* extensionManager);
    friend void QDesignerFormEditorInterface_SuperSetExtensionManager(QDesignerFormEditorInterface* self, QExtensionManager* extensionManager);
    friend QObject* QDesignerFormEditorInterface_Sender(const QDesignerFormEditorInterface* self);
    friend QObject* QDesignerFormEditorInterface_SuperSender(const QDesignerFormEditorInterface* self);
    friend int QDesignerFormEditorInterface_SenderSignalIndex(const QDesignerFormEditorInterface* self);
    friend int QDesignerFormEditorInterface_SuperSenderSignalIndex(const QDesignerFormEditorInterface* self);
    friend int QDesignerFormEditorInterface_Receivers(const QDesignerFormEditorInterface* self, const char* signal);
    friend int QDesignerFormEditorInterface_SuperReceivers(const QDesignerFormEditorInterface* self, const char* signal);
    friend bool QDesignerFormEditorInterface_IsSignalConnected(const QDesignerFormEditorInterface* self, const QMetaMethod* signal);
    friend bool QDesignerFormEditorInterface_SuperIsSignalConnected(const QDesignerFormEditorInterface* self, const QMetaMethod* signal);
};

#endif
