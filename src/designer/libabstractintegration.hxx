#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALABSTRACTINTEGRATION_H
#define SRC_DESIGNERC_LIBVIRTUALABSTRACTINTEGRATION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerIntegrationInterface so that we can call protected methods
class VirtualQDesignerIntegrationInterface : public QDesignerIntegrationInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerIntegrationInterface = true;

    // Virtual class public types (including callbacks)
    using QDesignerIntegrationInterface_MetaObject_Callback = QMetaObject* (*)();
    using QDesignerIntegrationInterface_Metacast_Callback = void* (*)(QDesignerIntegrationInterface*, const char*);
    using QDesignerIntegrationInterface_Metacall_Callback = int (*)(QDesignerIntegrationInterface*, int, int, void**);
    using QDesignerIntegrationInterface_ContainerWindow_Callback = QWidget* (*)(const QDesignerIntegrationInterface*, QWidget*);
    using QDesignerIntegrationInterface_CreateResourceBrowser_Callback = QDesignerResourceBrowserInterface* (*)(QDesignerIntegrationInterface*, QWidget*);
    using QDesignerIntegrationInterface_HeaderSuffix_Callback = const char* (*)();
    using QDesignerIntegrationInterface_SetHeaderSuffix_Callback = void (*)(QDesignerIntegrationInterface*, const char*);
    using QDesignerIntegrationInterface_IsHeaderLowercase_Callback = bool (*)();
    using QDesignerIntegrationInterface_SetHeaderLowercase_Callback = void (*)(QDesignerIntegrationInterface*, bool);
    using QDesignerIntegrationInterface_Features_Callback = int (*)();
    using QDesignerIntegrationInterface_ResourceFileWatcherBehaviour_Callback = int (*)();
    using QDesignerIntegrationInterface_SetResourceFileWatcherBehaviour_Callback = void (*)(QDesignerIntegrationInterface*, int);
    using QDesignerIntegrationInterface_ContextHelpId_Callback = const char* (*)();
    using QDesignerIntegrationInterface_SetFeatures_Callback = void (*)(QDesignerIntegrationInterface*, int);
    using QDesignerIntegrationInterface_UpdateProperty_Callback = void (*)(QDesignerIntegrationInterface*, const char*, QVariant*, bool);
    using QDesignerIntegrationInterface_UpdateProperty2_Callback = void (*)(QDesignerIntegrationInterface*, const char*, QVariant*);
    using QDesignerIntegrationInterface_ResetProperty_Callback = void (*)(QDesignerIntegrationInterface*, const char*);
    using QDesignerIntegrationInterface_AddDynamicProperty_Callback = void (*)(QDesignerIntegrationInterface*, const char*, QVariant*);
    using QDesignerIntegrationInterface_RemoveDynamicProperty_Callback = void (*)(QDesignerIntegrationInterface*, const char*);
    using QDesignerIntegrationInterface_UpdateActiveFormWindow_Callback = void (*)(QDesignerIntegrationInterface*, QDesignerFormWindowInterface*);
    using QDesignerIntegrationInterface_SetupFormWindow_Callback = void (*)(QDesignerIntegrationInterface*, QDesignerFormWindowInterface*);
    using QDesignerIntegrationInterface_UpdateSelection_Callback = void (*)();
    using QDesignerIntegrationInterface_UpdateCustomWidgetPlugins_Callback = void (*)();
    using QDesignerIntegrationInterface_Event_Callback = bool (*)(QDesignerIntegrationInterface*, QEvent*);
    using QDesignerIntegrationInterface_EventFilter_Callback = bool (*)(QDesignerIntegrationInterface*, QObject*, QEvent*);
    using QDesignerIntegrationInterface_TimerEvent_Callback = void (*)(QDesignerIntegrationInterface*, QTimerEvent*);
    using QDesignerIntegrationInterface_ChildEvent_Callback = void (*)(QDesignerIntegrationInterface*, QChildEvent*);
    using QDesignerIntegrationInterface_CustomEvent_Callback = void (*)(QDesignerIntegrationInterface*, QEvent*);
    using QDesignerIntegrationInterface_ConnectNotify_Callback = void (*)(QDesignerIntegrationInterface*, QMetaMethod*);
    using QDesignerIntegrationInterface_DisconnectNotify_Callback = void (*)(QDesignerIntegrationInterface*, QMetaMethod*);
    using QDesignerIntegrationInterface_Sender_Callback = QObject* (*)();
    using QDesignerIntegrationInterface_SenderSignalIndex_Callback = int (*)();
    using QDesignerIntegrationInterface_Receivers_Callback = int (*)(const QDesignerIntegrationInterface*, const char*);
    using QDesignerIntegrationInterface_IsSignalConnected_Callback = bool (*)(const QDesignerIntegrationInterface*, QMetaMethod*);

  protected:
    // Instance callback storage
    QDesignerIntegrationInterface_MetaObject_Callback qdesignerintegrationinterface_metaobject_callback = nullptr;
    QDesignerIntegrationInterface_Metacast_Callback qdesignerintegrationinterface_metacast_callback = nullptr;
    QDesignerIntegrationInterface_Metacall_Callback qdesignerintegrationinterface_metacall_callback = nullptr;
    QDesignerIntegrationInterface_ContainerWindow_Callback qdesignerintegrationinterface_containerwindow_callback = nullptr;
    QDesignerIntegrationInterface_CreateResourceBrowser_Callback qdesignerintegrationinterface_createresourcebrowser_callback = nullptr;
    QDesignerIntegrationInterface_HeaderSuffix_Callback qdesignerintegrationinterface_headersuffix_callback = nullptr;
    QDesignerIntegrationInterface_SetHeaderSuffix_Callback qdesignerintegrationinterface_setheadersuffix_callback = nullptr;
    QDesignerIntegrationInterface_IsHeaderLowercase_Callback qdesignerintegrationinterface_isheaderlowercase_callback = nullptr;
    QDesignerIntegrationInterface_SetHeaderLowercase_Callback qdesignerintegrationinterface_setheaderlowercase_callback = nullptr;
    QDesignerIntegrationInterface_Features_Callback qdesignerintegrationinterface_features_callback = nullptr;
    QDesignerIntegrationInterface_ResourceFileWatcherBehaviour_Callback qdesignerintegrationinterface_resourcefilewatcherbehaviour_callback = nullptr;
    QDesignerIntegrationInterface_SetResourceFileWatcherBehaviour_Callback qdesignerintegrationinterface_setresourcefilewatcherbehaviour_callback = nullptr;
    QDesignerIntegrationInterface_ContextHelpId_Callback qdesignerintegrationinterface_contexthelpid_callback = nullptr;
    QDesignerIntegrationInterface_SetFeatures_Callback qdesignerintegrationinterface_setfeatures_callback = nullptr;
    QDesignerIntegrationInterface_UpdateProperty_Callback qdesignerintegrationinterface_updateproperty_callback = nullptr;
    QDesignerIntegrationInterface_UpdateProperty2_Callback qdesignerintegrationinterface_updateproperty2_callback = nullptr;
    QDesignerIntegrationInterface_ResetProperty_Callback qdesignerintegrationinterface_resetproperty_callback = nullptr;
    QDesignerIntegrationInterface_AddDynamicProperty_Callback qdesignerintegrationinterface_adddynamicproperty_callback = nullptr;
    QDesignerIntegrationInterface_RemoveDynamicProperty_Callback qdesignerintegrationinterface_removedynamicproperty_callback = nullptr;
    QDesignerIntegrationInterface_UpdateActiveFormWindow_Callback qdesignerintegrationinterface_updateactiveformwindow_callback = nullptr;
    QDesignerIntegrationInterface_SetupFormWindow_Callback qdesignerintegrationinterface_setupformwindow_callback = nullptr;
    QDesignerIntegrationInterface_UpdateSelection_Callback qdesignerintegrationinterface_updateselection_callback = nullptr;
    QDesignerIntegrationInterface_UpdateCustomWidgetPlugins_Callback qdesignerintegrationinterface_updatecustomwidgetplugins_callback = nullptr;
    QDesignerIntegrationInterface_Event_Callback qdesignerintegrationinterface_event_callback = nullptr;
    QDesignerIntegrationInterface_EventFilter_Callback qdesignerintegrationinterface_eventfilter_callback = nullptr;
    QDesignerIntegrationInterface_TimerEvent_Callback qdesignerintegrationinterface_timerevent_callback = nullptr;
    QDesignerIntegrationInterface_ChildEvent_Callback qdesignerintegrationinterface_childevent_callback = nullptr;
    QDesignerIntegrationInterface_CustomEvent_Callback qdesignerintegrationinterface_customevent_callback = nullptr;
    QDesignerIntegrationInterface_ConnectNotify_Callback qdesignerintegrationinterface_connectnotify_callback = nullptr;
    QDesignerIntegrationInterface_DisconnectNotify_Callback qdesignerintegrationinterface_disconnectnotify_callback = nullptr;
    QDesignerIntegrationInterface_Sender_Callback qdesignerintegrationinterface_sender_callback = nullptr;
    QDesignerIntegrationInterface_SenderSignalIndex_Callback qdesignerintegrationinterface_sendersignalindex_callback = nullptr;
    QDesignerIntegrationInterface_Receivers_Callback qdesignerintegrationinterface_receivers_callback = nullptr;
    QDesignerIntegrationInterface_IsSignalConnected_Callback qdesignerintegrationinterface_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdesignerintegrationinterface_metaobject_isbase = false;
    mutable bool qdesignerintegrationinterface_metacast_isbase = false;
    mutable bool qdesignerintegrationinterface_metacall_isbase = false;
    mutable bool qdesignerintegrationinterface_containerwindow_isbase = false;
    mutable bool qdesignerintegrationinterface_createresourcebrowser_isbase = false;
    mutable bool qdesignerintegrationinterface_headersuffix_isbase = false;
    mutable bool qdesignerintegrationinterface_setheadersuffix_isbase = false;
    mutable bool qdesignerintegrationinterface_isheaderlowercase_isbase = false;
    mutable bool qdesignerintegrationinterface_setheaderlowercase_isbase = false;
    mutable bool qdesignerintegrationinterface_features_isbase = false;
    mutable bool qdesignerintegrationinterface_resourcefilewatcherbehaviour_isbase = false;
    mutable bool qdesignerintegrationinterface_setresourcefilewatcherbehaviour_isbase = false;
    mutable bool qdesignerintegrationinterface_contexthelpid_isbase = false;
    mutable bool qdesignerintegrationinterface_setfeatures_isbase = false;
    mutable bool qdesignerintegrationinterface_updateproperty_isbase = false;
    mutable bool qdesignerintegrationinterface_updateproperty2_isbase = false;
    mutable bool qdesignerintegrationinterface_resetproperty_isbase = false;
    mutable bool qdesignerintegrationinterface_adddynamicproperty_isbase = false;
    mutable bool qdesignerintegrationinterface_removedynamicproperty_isbase = false;
    mutable bool qdesignerintegrationinterface_updateactiveformwindow_isbase = false;
    mutable bool qdesignerintegrationinterface_setupformwindow_isbase = false;
    mutable bool qdesignerintegrationinterface_updateselection_isbase = false;
    mutable bool qdesignerintegrationinterface_updatecustomwidgetplugins_isbase = false;
    mutable bool qdesignerintegrationinterface_event_isbase = false;
    mutable bool qdesignerintegrationinterface_eventfilter_isbase = false;
    mutable bool qdesignerintegrationinterface_timerevent_isbase = false;
    mutable bool qdesignerintegrationinterface_childevent_isbase = false;
    mutable bool qdesignerintegrationinterface_customevent_isbase = false;
    mutable bool qdesignerintegrationinterface_connectnotify_isbase = false;
    mutable bool qdesignerintegrationinterface_disconnectnotify_isbase = false;
    mutable bool qdesignerintegrationinterface_sender_isbase = false;
    mutable bool qdesignerintegrationinterface_sendersignalindex_isbase = false;
    mutable bool qdesignerintegrationinterface_receivers_isbase = false;
    mutable bool qdesignerintegrationinterface_issignalconnected_isbase = false;

  public:
    VirtualQDesignerIntegrationInterface(QDesignerFormEditorInterface* core) : QDesignerIntegrationInterface(core) {};
    VirtualQDesignerIntegrationInterface(QDesignerFormEditorInterface* core, QObject* parent) : QDesignerIntegrationInterface(core, parent) {};

    ~VirtualQDesignerIntegrationInterface() {
        qdesignerintegrationinterface_metaobject_callback = nullptr;
        qdesignerintegrationinterface_metacast_callback = nullptr;
        qdesignerintegrationinterface_metacall_callback = nullptr;
        qdesignerintegrationinterface_containerwindow_callback = nullptr;
        qdesignerintegrationinterface_createresourcebrowser_callback = nullptr;
        qdesignerintegrationinterface_headersuffix_callback = nullptr;
        qdesignerintegrationinterface_setheadersuffix_callback = nullptr;
        qdesignerintegrationinterface_isheaderlowercase_callback = nullptr;
        qdesignerintegrationinterface_setheaderlowercase_callback = nullptr;
        qdesignerintegrationinterface_features_callback = nullptr;
        qdesignerintegrationinterface_resourcefilewatcherbehaviour_callback = nullptr;
        qdesignerintegrationinterface_setresourcefilewatcherbehaviour_callback = nullptr;
        qdesignerintegrationinterface_contexthelpid_callback = nullptr;
        qdesignerintegrationinterface_setfeatures_callback = nullptr;
        qdesignerintegrationinterface_updateproperty_callback = nullptr;
        qdesignerintegrationinterface_updateproperty2_callback = nullptr;
        qdesignerintegrationinterface_resetproperty_callback = nullptr;
        qdesignerintegrationinterface_adddynamicproperty_callback = nullptr;
        qdesignerintegrationinterface_removedynamicproperty_callback = nullptr;
        qdesignerintegrationinterface_updateactiveformwindow_callback = nullptr;
        qdesignerintegrationinterface_setupformwindow_callback = nullptr;
        qdesignerintegrationinterface_updateselection_callback = nullptr;
        qdesignerintegrationinterface_updatecustomwidgetplugins_callback = nullptr;
        qdesignerintegrationinterface_event_callback = nullptr;
        qdesignerintegrationinterface_eventfilter_callback = nullptr;
        qdesignerintegrationinterface_timerevent_callback = nullptr;
        qdesignerintegrationinterface_childevent_callback = nullptr;
        qdesignerintegrationinterface_customevent_callback = nullptr;
        qdesignerintegrationinterface_connectnotify_callback = nullptr;
        qdesignerintegrationinterface_disconnectnotify_callback = nullptr;
        qdesignerintegrationinterface_sender_callback = nullptr;
        qdesignerintegrationinterface_sendersignalindex_callback = nullptr;
        qdesignerintegrationinterface_receivers_callback = nullptr;
        qdesignerintegrationinterface_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQDesignerIntegrationInterface_MetaObject_Callback(QDesignerIntegrationInterface_MetaObject_Callback cb) { qdesignerintegrationinterface_metaobject_callback = cb; }
    inline void setQDesignerIntegrationInterface_Metacast_Callback(QDesignerIntegrationInterface_Metacast_Callback cb) { qdesignerintegrationinterface_metacast_callback = cb; }
    inline void setQDesignerIntegrationInterface_Metacall_Callback(QDesignerIntegrationInterface_Metacall_Callback cb) { qdesignerintegrationinterface_metacall_callback = cb; }
    inline void setQDesignerIntegrationInterface_ContainerWindow_Callback(QDesignerIntegrationInterface_ContainerWindow_Callback cb) { qdesignerintegrationinterface_containerwindow_callback = cb; }
    inline void setQDesignerIntegrationInterface_CreateResourceBrowser_Callback(QDesignerIntegrationInterface_CreateResourceBrowser_Callback cb) { qdesignerintegrationinterface_createresourcebrowser_callback = cb; }
    inline void setQDesignerIntegrationInterface_HeaderSuffix_Callback(QDesignerIntegrationInterface_HeaderSuffix_Callback cb) { qdesignerintegrationinterface_headersuffix_callback = cb; }
    inline void setQDesignerIntegrationInterface_SetHeaderSuffix_Callback(QDesignerIntegrationInterface_SetHeaderSuffix_Callback cb) { qdesignerintegrationinterface_setheadersuffix_callback = cb; }
    inline void setQDesignerIntegrationInterface_IsHeaderLowercase_Callback(QDesignerIntegrationInterface_IsHeaderLowercase_Callback cb) { qdesignerintegrationinterface_isheaderlowercase_callback = cb; }
    inline void setQDesignerIntegrationInterface_SetHeaderLowercase_Callback(QDesignerIntegrationInterface_SetHeaderLowercase_Callback cb) { qdesignerintegrationinterface_setheaderlowercase_callback = cb; }
    inline void setQDesignerIntegrationInterface_Features_Callback(QDesignerIntegrationInterface_Features_Callback cb) { qdesignerintegrationinterface_features_callback = cb; }
    inline void setQDesignerIntegrationInterface_ResourceFileWatcherBehaviour_Callback(QDesignerIntegrationInterface_ResourceFileWatcherBehaviour_Callback cb) { qdesignerintegrationinterface_resourcefilewatcherbehaviour_callback = cb; }
    inline void setQDesignerIntegrationInterface_SetResourceFileWatcherBehaviour_Callback(QDesignerIntegrationInterface_SetResourceFileWatcherBehaviour_Callback cb) { qdesignerintegrationinterface_setresourcefilewatcherbehaviour_callback = cb; }
    inline void setQDesignerIntegrationInterface_ContextHelpId_Callback(QDesignerIntegrationInterface_ContextHelpId_Callback cb) { qdesignerintegrationinterface_contexthelpid_callback = cb; }
    inline void setQDesignerIntegrationInterface_SetFeatures_Callback(QDesignerIntegrationInterface_SetFeatures_Callback cb) { qdesignerintegrationinterface_setfeatures_callback = cb; }
    inline void setQDesignerIntegrationInterface_UpdateProperty_Callback(QDesignerIntegrationInterface_UpdateProperty_Callback cb) { qdesignerintegrationinterface_updateproperty_callback = cb; }
    inline void setQDesignerIntegrationInterface_UpdateProperty2_Callback(QDesignerIntegrationInterface_UpdateProperty2_Callback cb) { qdesignerintegrationinterface_updateproperty2_callback = cb; }
    inline void setQDesignerIntegrationInterface_ResetProperty_Callback(QDesignerIntegrationInterface_ResetProperty_Callback cb) { qdesignerintegrationinterface_resetproperty_callback = cb; }
    inline void setQDesignerIntegrationInterface_AddDynamicProperty_Callback(QDesignerIntegrationInterface_AddDynamicProperty_Callback cb) { qdesignerintegrationinterface_adddynamicproperty_callback = cb; }
    inline void setQDesignerIntegrationInterface_RemoveDynamicProperty_Callback(QDesignerIntegrationInterface_RemoveDynamicProperty_Callback cb) { qdesignerintegrationinterface_removedynamicproperty_callback = cb; }
    inline void setQDesignerIntegrationInterface_UpdateActiveFormWindow_Callback(QDesignerIntegrationInterface_UpdateActiveFormWindow_Callback cb) { qdesignerintegrationinterface_updateactiveformwindow_callback = cb; }
    inline void setQDesignerIntegrationInterface_SetupFormWindow_Callback(QDesignerIntegrationInterface_SetupFormWindow_Callback cb) { qdesignerintegrationinterface_setupformwindow_callback = cb; }
    inline void setQDesignerIntegrationInterface_UpdateSelection_Callback(QDesignerIntegrationInterface_UpdateSelection_Callback cb) { qdesignerintegrationinterface_updateselection_callback = cb; }
    inline void setQDesignerIntegrationInterface_UpdateCustomWidgetPlugins_Callback(QDesignerIntegrationInterface_UpdateCustomWidgetPlugins_Callback cb) { qdesignerintegrationinterface_updatecustomwidgetplugins_callback = cb; }
    inline void setQDesignerIntegrationInterface_Event_Callback(QDesignerIntegrationInterface_Event_Callback cb) { qdesignerintegrationinterface_event_callback = cb; }
    inline void setQDesignerIntegrationInterface_EventFilter_Callback(QDesignerIntegrationInterface_EventFilter_Callback cb) { qdesignerintegrationinterface_eventfilter_callback = cb; }
    inline void setQDesignerIntegrationInterface_TimerEvent_Callback(QDesignerIntegrationInterface_TimerEvent_Callback cb) { qdesignerintegrationinterface_timerevent_callback = cb; }
    inline void setQDesignerIntegrationInterface_ChildEvent_Callback(QDesignerIntegrationInterface_ChildEvent_Callback cb) { qdesignerintegrationinterface_childevent_callback = cb; }
    inline void setQDesignerIntegrationInterface_CustomEvent_Callback(QDesignerIntegrationInterface_CustomEvent_Callback cb) { qdesignerintegrationinterface_customevent_callback = cb; }
    inline void setQDesignerIntegrationInterface_ConnectNotify_Callback(QDesignerIntegrationInterface_ConnectNotify_Callback cb) { qdesignerintegrationinterface_connectnotify_callback = cb; }
    inline void setQDesignerIntegrationInterface_DisconnectNotify_Callback(QDesignerIntegrationInterface_DisconnectNotify_Callback cb) { qdesignerintegrationinterface_disconnectnotify_callback = cb; }
    inline void setQDesignerIntegrationInterface_Sender_Callback(QDesignerIntegrationInterface_Sender_Callback cb) { qdesignerintegrationinterface_sender_callback = cb; }
    inline void setQDesignerIntegrationInterface_SenderSignalIndex_Callback(QDesignerIntegrationInterface_SenderSignalIndex_Callback cb) { qdesignerintegrationinterface_sendersignalindex_callback = cb; }
    inline void setQDesignerIntegrationInterface_Receivers_Callback(QDesignerIntegrationInterface_Receivers_Callback cb) { qdesignerintegrationinterface_receivers_callback = cb; }
    inline void setQDesignerIntegrationInterface_IsSignalConnected_Callback(QDesignerIntegrationInterface_IsSignalConnected_Callback cb) { qdesignerintegrationinterface_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQDesignerIntegrationInterface_MetaObject_IsBase(bool value) const { qdesignerintegrationinterface_metaobject_isbase = value; }
    inline void setQDesignerIntegrationInterface_Metacast_IsBase(bool value) const { qdesignerintegrationinterface_metacast_isbase = value; }
    inline void setQDesignerIntegrationInterface_Metacall_IsBase(bool value) const { qdesignerintegrationinterface_metacall_isbase = value; }
    inline void setQDesignerIntegrationInterface_ContainerWindow_IsBase(bool value) const { qdesignerintegrationinterface_containerwindow_isbase = value; }
    inline void setQDesignerIntegrationInterface_CreateResourceBrowser_IsBase(bool value) const { qdesignerintegrationinterface_createresourcebrowser_isbase = value; }
    inline void setQDesignerIntegrationInterface_HeaderSuffix_IsBase(bool value) const { qdesignerintegrationinterface_headersuffix_isbase = value; }
    inline void setQDesignerIntegrationInterface_SetHeaderSuffix_IsBase(bool value) const { qdesignerintegrationinterface_setheadersuffix_isbase = value; }
    inline void setQDesignerIntegrationInterface_IsHeaderLowercase_IsBase(bool value) const { qdesignerintegrationinterface_isheaderlowercase_isbase = value; }
    inline void setQDesignerIntegrationInterface_SetHeaderLowercase_IsBase(bool value) const { qdesignerintegrationinterface_setheaderlowercase_isbase = value; }
    inline void setQDesignerIntegrationInterface_Features_IsBase(bool value) const { qdesignerintegrationinterface_features_isbase = value; }
    inline void setQDesignerIntegrationInterface_ResourceFileWatcherBehaviour_IsBase(bool value) const { qdesignerintegrationinterface_resourcefilewatcherbehaviour_isbase = value; }
    inline void setQDesignerIntegrationInterface_SetResourceFileWatcherBehaviour_IsBase(bool value) const { qdesignerintegrationinterface_setresourcefilewatcherbehaviour_isbase = value; }
    inline void setQDesignerIntegrationInterface_ContextHelpId_IsBase(bool value) const { qdesignerintegrationinterface_contexthelpid_isbase = value; }
    inline void setQDesignerIntegrationInterface_SetFeatures_IsBase(bool value) const { qdesignerintegrationinterface_setfeatures_isbase = value; }
    inline void setQDesignerIntegrationInterface_UpdateProperty_IsBase(bool value) const { qdesignerintegrationinterface_updateproperty_isbase = value; }
    inline void setQDesignerIntegrationInterface_UpdateProperty2_IsBase(bool value) const { qdesignerintegrationinterface_updateproperty2_isbase = value; }
    inline void setQDesignerIntegrationInterface_ResetProperty_IsBase(bool value) const { qdesignerintegrationinterface_resetproperty_isbase = value; }
    inline void setQDesignerIntegrationInterface_AddDynamicProperty_IsBase(bool value) const { qdesignerintegrationinterface_adddynamicproperty_isbase = value; }
    inline void setQDesignerIntegrationInterface_RemoveDynamicProperty_IsBase(bool value) const { qdesignerintegrationinterface_removedynamicproperty_isbase = value; }
    inline void setQDesignerIntegrationInterface_UpdateActiveFormWindow_IsBase(bool value) const { qdesignerintegrationinterface_updateactiveformwindow_isbase = value; }
    inline void setQDesignerIntegrationInterface_SetupFormWindow_IsBase(bool value) const { qdesignerintegrationinterface_setupformwindow_isbase = value; }
    inline void setQDesignerIntegrationInterface_UpdateSelection_IsBase(bool value) const { qdesignerintegrationinterface_updateselection_isbase = value; }
    inline void setQDesignerIntegrationInterface_UpdateCustomWidgetPlugins_IsBase(bool value) const { qdesignerintegrationinterface_updatecustomwidgetplugins_isbase = value; }
    inline void setQDesignerIntegrationInterface_Event_IsBase(bool value) const { qdesignerintegrationinterface_event_isbase = value; }
    inline void setQDesignerIntegrationInterface_EventFilter_IsBase(bool value) const { qdesignerintegrationinterface_eventfilter_isbase = value; }
    inline void setQDesignerIntegrationInterface_TimerEvent_IsBase(bool value) const { qdesignerintegrationinterface_timerevent_isbase = value; }
    inline void setQDesignerIntegrationInterface_ChildEvent_IsBase(bool value) const { qdesignerintegrationinterface_childevent_isbase = value; }
    inline void setQDesignerIntegrationInterface_CustomEvent_IsBase(bool value) const { qdesignerintegrationinterface_customevent_isbase = value; }
    inline void setQDesignerIntegrationInterface_ConnectNotify_IsBase(bool value) const { qdesignerintegrationinterface_connectnotify_isbase = value; }
    inline void setQDesignerIntegrationInterface_DisconnectNotify_IsBase(bool value) const { qdesignerintegrationinterface_disconnectnotify_isbase = value; }
    inline void setQDesignerIntegrationInterface_Sender_IsBase(bool value) const { qdesignerintegrationinterface_sender_isbase = value; }
    inline void setQDesignerIntegrationInterface_SenderSignalIndex_IsBase(bool value) const { qdesignerintegrationinterface_sendersignalindex_isbase = value; }
    inline void setQDesignerIntegrationInterface_Receivers_IsBase(bool value) const { qdesignerintegrationinterface_receivers_isbase = value; }
    inline void setQDesignerIntegrationInterface_IsSignalConnected_IsBase(bool value) const { qdesignerintegrationinterface_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerintegrationinterface_metaobject_isbase) {
            qdesignerintegrationinterface_metaobject_isbase = false;
            return QDesignerIntegrationInterface::metaObject();
        } else if (qdesignerintegrationinterface_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qdesignerintegrationinterface_metaobject_callback();
            return callback_ret;
        } else {
            return QDesignerIntegrationInterface::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerintegrationinterface_metacast_isbase) {
            qdesignerintegrationinterface_metacast_isbase = false;
            return QDesignerIntegrationInterface::qt_metacast(param1);
        } else if (qdesignerintegrationinterface_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qdesignerintegrationinterface_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerIntegrationInterface::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerintegrationinterface_metacall_isbase) {
            qdesignerintegrationinterface_metacall_isbase = false;
            return QDesignerIntegrationInterface::qt_metacall(param1, param2, param3);
        } else if (qdesignerintegrationinterface_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qdesignerintegrationinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerIntegrationInterface::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* containerWindow(QWidget* widget) const override {
        if (qdesignerintegrationinterface_containerwindow_callback != nullptr) {
            QWidget* cbval1 = widget;

            QWidget* callback_ret = qdesignerintegrationinterface_containerwindow_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerResourceBrowserInterface* createResourceBrowser(QWidget* parent) override {
        if (qdesignerintegrationinterface_createresourcebrowser_callback != nullptr) {
            QWidget* cbval1 = parent;

            QDesignerResourceBrowserInterface* callback_ret = qdesignerintegrationinterface_createresourcebrowser_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString headerSuffix() const override {
        if (qdesignerintegrationinterface_headersuffix_callback != nullptr) {
            const char* callback_ret = qdesignerintegrationinterface_headersuffix_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHeaderSuffix(const QString& headerSuffix) override {
        if (qdesignerintegrationinterface_setheadersuffix_callback != nullptr) {
            const QString headerSuffix_ret = headerSuffix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray headerSuffix_b = headerSuffix_ret.toUtf8();
            auto headerSuffix_str_len = headerSuffix_b.length();
            const char* headerSuffix_str = static_cast<const char*>(malloc(headerSuffix_str_len + 1));
            memcpy((void*)headerSuffix_str, headerSuffix_b.data(), headerSuffix_str_len);
            ((char*)headerSuffix_str)[headerSuffix_str_len] = '\0';
            const char* cbval1 = headerSuffix_str;

            qdesignerintegrationinterface_setheadersuffix_callback(this, cbval1);
            libqt_free(headerSuffix_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isHeaderLowercase() const override {
        if (qdesignerintegrationinterface_isheaderlowercase_callback != nullptr) {
            bool callback_ret = qdesignerintegrationinterface_isheaderlowercase_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHeaderLowercase(bool headerLowerCase) override {
        if (qdesignerintegrationinterface_setheaderlowercase_callback != nullptr) {
            bool cbval1 = headerLowerCase;

            qdesignerintegrationinterface_setheaderlowercase_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerIntegrationInterface::Feature features() const override {
        if (qdesignerintegrationinterface_features_callback != nullptr) {
            int callback_ret = qdesignerintegrationinterface_features_callback();
            return static_cast<QDesignerIntegrationInterface::Feature>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerIntegrationInterface::ResourceFileWatcherBehaviour resourceFileWatcherBehaviour() const override {
        if (qdesignerintegrationinterface_resourcefilewatcherbehaviour_callback != nullptr) {
            int callback_ret = qdesignerintegrationinterface_resourcefilewatcherbehaviour_callback();
            return static_cast<QDesignerIntegrationInterface::ResourceFileWatcherBehaviour>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setResourceFileWatcherBehaviour(QDesignerIntegrationInterface::ResourceFileWatcherBehaviour behaviour) override {
        if (qdesignerintegrationinterface_setresourcefilewatcherbehaviour_callback != nullptr) {
            int cbval1 = static_cast<int>(behaviour);

            qdesignerintegrationinterface_setresourcefilewatcherbehaviour_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString contextHelpId() const override {
        if (qdesignerintegrationinterface_contexthelpid_callback != nullptr) {
            const char* callback_ret = qdesignerintegrationinterface_contexthelpid_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFeatures(QDesignerIntegrationInterface::Feature f) override {
        if (qdesignerintegrationinterface_setfeatures_callback != nullptr) {
            int cbval1 = static_cast<int>(f);

            qdesignerintegrationinterface_setfeatures_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateProperty(const QString& name, const QVariant& value, bool enableSubPropertyHandling) override {
        if (qdesignerintegrationinterface_updateproperty_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            bool cbval3 = enableSubPropertyHandling;

            qdesignerintegrationinterface_updateproperty_callback(this, cbval1, cbval2, cbval3);
            libqt_free(name_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateProperty(const QString& name, const QVariant& value) override {
        if (qdesignerintegrationinterface_updateproperty2_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            qdesignerintegrationinterface_updateproperty2_callback(this, cbval1, cbval2);
            libqt_free(name_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetProperty(const QString& name) override {
        if (qdesignerintegrationinterface_resetproperty_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;

            qdesignerintegrationinterface_resetproperty_callback(this, cbval1);
            libqt_free(name_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addDynamicProperty(const QString& name, const QVariant& value) override {
        if (qdesignerintegrationinterface_adddynamicproperty_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            qdesignerintegrationinterface_adddynamicproperty_callback(this, cbval1, cbval2);
            libqt_free(name_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeDynamicProperty(const QString& name) override {
        if (qdesignerintegrationinterface_removedynamicproperty_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;

            qdesignerintegrationinterface_removedynamicproperty_callback(this, cbval1);
            libqt_free(name_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateActiveFormWindow(QDesignerFormWindowInterface* formWindow) override {
        if (qdesignerintegrationinterface_updateactiveformwindow_callback != nullptr) {
            QDesignerFormWindowInterface* cbval1 = formWindow;

            qdesignerintegrationinterface_updateactiveformwindow_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupFormWindow(QDesignerFormWindowInterface* formWindow) override {
        if (qdesignerintegrationinterface_setupformwindow_callback != nullptr) {
            QDesignerFormWindowInterface* cbval1 = formWindow;

            qdesignerintegrationinterface_setupformwindow_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateSelection() override {
        if (qdesignerintegrationinterface_updateselection_callback != nullptr) {
            qdesignerintegrationinterface_updateselection_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCustomWidgetPlugins() override {
        if (qdesignerintegrationinterface_updatecustomwidgetplugins_callback != nullptr) {
            qdesignerintegrationinterface_updatecustomwidgetplugins_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerintegrationinterface_event_isbase) {
            qdesignerintegrationinterface_event_isbase = false;
            return QDesignerIntegrationInterface::event(event);
        } else if (qdesignerintegrationinterface_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qdesignerintegrationinterface_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerIntegrationInterface::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerintegrationinterface_eventfilter_isbase) {
            qdesignerintegrationinterface_eventfilter_isbase = false;
            return QDesignerIntegrationInterface::eventFilter(watched, event);
        } else if (qdesignerintegrationinterface_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qdesignerintegrationinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QDesignerIntegrationInterface::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerintegrationinterface_timerevent_isbase) {
            qdesignerintegrationinterface_timerevent_isbase = false;
            QDesignerIntegrationInterface::timerEvent(event);
        } else if (qdesignerintegrationinterface_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qdesignerintegrationinterface_timerevent_callback(this, cbval1);
        } else {
            QDesignerIntegrationInterface::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerintegrationinterface_childevent_isbase) {
            qdesignerintegrationinterface_childevent_isbase = false;
            QDesignerIntegrationInterface::childEvent(event);
        } else if (qdesignerintegrationinterface_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qdesignerintegrationinterface_childevent_callback(this, cbval1);
        } else {
            QDesignerIntegrationInterface::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerintegrationinterface_customevent_isbase) {
            qdesignerintegrationinterface_customevent_isbase = false;
            QDesignerIntegrationInterface::customEvent(event);
        } else if (qdesignerintegrationinterface_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qdesignerintegrationinterface_customevent_callback(this, cbval1);
        } else {
            QDesignerIntegrationInterface::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerintegrationinterface_connectnotify_isbase) {
            qdesignerintegrationinterface_connectnotify_isbase = false;
            QDesignerIntegrationInterface::connectNotify(signal);
        } else if (qdesignerintegrationinterface_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdesignerintegrationinterface_connectnotify_callback(this, cbval1);
        } else {
            QDesignerIntegrationInterface::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerintegrationinterface_disconnectnotify_isbase) {
            qdesignerintegrationinterface_disconnectnotify_isbase = false;
            QDesignerIntegrationInterface::disconnectNotify(signal);
        } else if (qdesignerintegrationinterface_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdesignerintegrationinterface_disconnectnotify_callback(this, cbval1);
        } else {
            QDesignerIntegrationInterface::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdesignerintegrationinterface_sender_isbase) {
            qdesignerintegrationinterface_sender_isbase = false;
            return QDesignerIntegrationInterface::sender();
        } else if (qdesignerintegrationinterface_sender_callback != nullptr) {
            QObject* callback_ret = qdesignerintegrationinterface_sender_callback();
            return callback_ret;
        } else {
            return QDesignerIntegrationInterface::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdesignerintegrationinterface_sendersignalindex_isbase) {
            qdesignerintegrationinterface_sendersignalindex_isbase = false;
            return QDesignerIntegrationInterface::senderSignalIndex();
        } else if (qdesignerintegrationinterface_sendersignalindex_callback != nullptr) {
            int callback_ret = qdesignerintegrationinterface_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerIntegrationInterface::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdesignerintegrationinterface_receivers_isbase) {
            qdesignerintegrationinterface_receivers_isbase = false;
            return QDesignerIntegrationInterface::receivers(signal);
        } else if (qdesignerintegrationinterface_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qdesignerintegrationinterface_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerIntegrationInterface::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdesignerintegrationinterface_issignalconnected_isbase) {
            qdesignerintegrationinterface_issignalconnected_isbase = false;
            return QDesignerIntegrationInterface::isSignalConnected(signal);
        } else if (qdesignerintegrationinterface_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qdesignerintegrationinterface_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerIntegrationInterface::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QDesignerIntegrationInterface_TimerEvent(QDesignerIntegrationInterface* self, QTimerEvent* event);
    friend void QDesignerIntegrationInterface_QBaseTimerEvent(QDesignerIntegrationInterface* self, QTimerEvent* event);
    friend void QDesignerIntegrationInterface_ChildEvent(QDesignerIntegrationInterface* self, QChildEvent* event);
    friend void QDesignerIntegrationInterface_QBaseChildEvent(QDesignerIntegrationInterface* self, QChildEvent* event);
    friend void QDesignerIntegrationInterface_CustomEvent(QDesignerIntegrationInterface* self, QEvent* event);
    friend void QDesignerIntegrationInterface_QBaseCustomEvent(QDesignerIntegrationInterface* self, QEvent* event);
    friend void QDesignerIntegrationInterface_ConnectNotify(QDesignerIntegrationInterface* self, const QMetaMethod* signal);
    friend void QDesignerIntegrationInterface_QBaseConnectNotify(QDesignerIntegrationInterface* self, const QMetaMethod* signal);
    friend void QDesignerIntegrationInterface_DisconnectNotify(QDesignerIntegrationInterface* self, const QMetaMethod* signal);
    friend void QDesignerIntegrationInterface_QBaseDisconnectNotify(QDesignerIntegrationInterface* self, const QMetaMethod* signal);
    friend QObject* QDesignerIntegrationInterface_Sender(const QDesignerIntegrationInterface* self);
    friend QObject* QDesignerIntegrationInterface_QBaseSender(const QDesignerIntegrationInterface* self);
    friend int QDesignerIntegrationInterface_SenderSignalIndex(const QDesignerIntegrationInterface* self);
    friend int QDesignerIntegrationInterface_QBaseSenderSignalIndex(const QDesignerIntegrationInterface* self);
    friend int QDesignerIntegrationInterface_Receivers(const QDesignerIntegrationInterface* self, const char* signal);
    friend int QDesignerIntegrationInterface_QBaseReceivers(const QDesignerIntegrationInterface* self, const char* signal);
    friend bool QDesignerIntegrationInterface_IsSignalConnected(const QDesignerIntegrationInterface* self, const QMetaMethod* signal);
    friend bool QDesignerIntegrationInterface_QBaseIsSignalConnected(const QDesignerIntegrationInterface* self, const QMetaMethod* signal);
};

// This class is a subclass of QDesignerIntegration so that we can call protected methods
class VirtualQDesignerIntegration final : public QDesignerIntegration {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerIntegration = true;

    // Virtual class public types (including callbacks)
    using QDesignerIntegration_MetaObject_Callback = QMetaObject* (*)();
    using QDesignerIntegration_Metacast_Callback = void* (*)(QDesignerIntegration*, const char*);
    using QDesignerIntegration_Metacall_Callback = int (*)(QDesignerIntegration*, int, int, void**);
    using QDesignerIntegration_HeaderSuffix_Callback = const char* (*)();
    using QDesignerIntegration_SetHeaderSuffix_Callback = void (*)(QDesignerIntegration*, const char*);
    using QDesignerIntegration_IsHeaderLowercase_Callback = bool (*)();
    using QDesignerIntegration_SetHeaderLowercase_Callback = void (*)(QDesignerIntegration*, bool);
    using QDesignerIntegration_Features_Callback = int (*)();
    using QDesignerIntegration_SetFeatures_Callback = void (*)(QDesignerIntegration*, int);
    using QDesignerIntegration_ResourceFileWatcherBehaviour_Callback = int (*)();
    using QDesignerIntegration_SetResourceFileWatcherBehaviour_Callback = void (*)(QDesignerIntegration*, int);
    using QDesignerIntegration_ContainerWindow_Callback = QWidget* (*)(const QDesignerIntegration*, QWidget*);
    using QDesignerIntegration_CreateResourceBrowser_Callback = QDesignerResourceBrowserInterface* (*)(QDesignerIntegration*, QWidget*);
    using QDesignerIntegration_ContextHelpId_Callback = const char* (*)();
    using QDesignerIntegration_UpdateProperty_Callback = void (*)(QDesignerIntegration*, const char*, QVariant*, bool);
    using QDesignerIntegration_UpdateProperty2_Callback = void (*)(QDesignerIntegration*, const char*, QVariant*);
    using QDesignerIntegration_ResetProperty_Callback = void (*)(QDesignerIntegration*, const char*);
    using QDesignerIntegration_AddDynamicProperty_Callback = void (*)(QDesignerIntegration*, const char*, QVariant*);
    using QDesignerIntegration_RemoveDynamicProperty_Callback = void (*)(QDesignerIntegration*, const char*);
    using QDesignerIntegration_UpdateActiveFormWindow_Callback = void (*)(QDesignerIntegration*, QDesignerFormWindowInterface*);
    using QDesignerIntegration_SetupFormWindow_Callback = void (*)(QDesignerIntegration*, QDesignerFormWindowInterface*);
    using QDesignerIntegration_UpdateSelection_Callback = void (*)();
    using QDesignerIntegration_UpdateCustomWidgetPlugins_Callback = void (*)();
    using QDesignerIntegration_Event_Callback = bool (*)(QDesignerIntegration*, QEvent*);
    using QDesignerIntegration_EventFilter_Callback = bool (*)(QDesignerIntegration*, QObject*, QEvent*);
    using QDesignerIntegration_TimerEvent_Callback = void (*)(QDesignerIntegration*, QTimerEvent*);
    using QDesignerIntegration_ChildEvent_Callback = void (*)(QDesignerIntegration*, QChildEvent*);
    using QDesignerIntegration_CustomEvent_Callback = void (*)(QDesignerIntegration*, QEvent*);
    using QDesignerIntegration_ConnectNotify_Callback = void (*)(QDesignerIntegration*, QMetaMethod*);
    using QDesignerIntegration_DisconnectNotify_Callback = void (*)(QDesignerIntegration*, QMetaMethod*);
    using QDesignerIntegration_Sender_Callback = QObject* (*)();
    using QDesignerIntegration_SenderSignalIndex_Callback = int (*)();
    using QDesignerIntegration_Receivers_Callback = int (*)(const QDesignerIntegration*, const char*);
    using QDesignerIntegration_IsSignalConnected_Callback = bool (*)(const QDesignerIntegration*, QMetaMethod*);

  protected:
    // Instance callback storage
    QDesignerIntegration_MetaObject_Callback qdesignerintegration_metaobject_callback = nullptr;
    QDesignerIntegration_Metacast_Callback qdesignerintegration_metacast_callback = nullptr;
    QDesignerIntegration_Metacall_Callback qdesignerintegration_metacall_callback = nullptr;
    QDesignerIntegration_HeaderSuffix_Callback qdesignerintegration_headersuffix_callback = nullptr;
    QDesignerIntegration_SetHeaderSuffix_Callback qdesignerintegration_setheadersuffix_callback = nullptr;
    QDesignerIntegration_IsHeaderLowercase_Callback qdesignerintegration_isheaderlowercase_callback = nullptr;
    QDesignerIntegration_SetHeaderLowercase_Callback qdesignerintegration_setheaderlowercase_callback = nullptr;
    QDesignerIntegration_Features_Callback qdesignerintegration_features_callback = nullptr;
    QDesignerIntegration_SetFeatures_Callback qdesignerintegration_setfeatures_callback = nullptr;
    QDesignerIntegration_ResourceFileWatcherBehaviour_Callback qdesignerintegration_resourcefilewatcherbehaviour_callback = nullptr;
    QDesignerIntegration_SetResourceFileWatcherBehaviour_Callback qdesignerintegration_setresourcefilewatcherbehaviour_callback = nullptr;
    QDesignerIntegration_ContainerWindow_Callback qdesignerintegration_containerwindow_callback = nullptr;
    QDesignerIntegration_CreateResourceBrowser_Callback qdesignerintegration_createresourcebrowser_callback = nullptr;
    QDesignerIntegration_ContextHelpId_Callback qdesignerintegration_contexthelpid_callback = nullptr;
    QDesignerIntegration_UpdateProperty_Callback qdesignerintegration_updateproperty_callback = nullptr;
    QDesignerIntegration_UpdateProperty2_Callback qdesignerintegration_updateproperty2_callback = nullptr;
    QDesignerIntegration_ResetProperty_Callback qdesignerintegration_resetproperty_callback = nullptr;
    QDesignerIntegration_AddDynamicProperty_Callback qdesignerintegration_adddynamicproperty_callback = nullptr;
    QDesignerIntegration_RemoveDynamicProperty_Callback qdesignerintegration_removedynamicproperty_callback = nullptr;
    QDesignerIntegration_UpdateActiveFormWindow_Callback qdesignerintegration_updateactiveformwindow_callback = nullptr;
    QDesignerIntegration_SetupFormWindow_Callback qdesignerintegration_setupformwindow_callback = nullptr;
    QDesignerIntegration_UpdateSelection_Callback qdesignerintegration_updateselection_callback = nullptr;
    QDesignerIntegration_UpdateCustomWidgetPlugins_Callback qdesignerintegration_updatecustomwidgetplugins_callback = nullptr;
    QDesignerIntegration_Event_Callback qdesignerintegration_event_callback = nullptr;
    QDesignerIntegration_EventFilter_Callback qdesignerintegration_eventfilter_callback = nullptr;
    QDesignerIntegration_TimerEvent_Callback qdesignerintegration_timerevent_callback = nullptr;
    QDesignerIntegration_ChildEvent_Callback qdesignerintegration_childevent_callback = nullptr;
    QDesignerIntegration_CustomEvent_Callback qdesignerintegration_customevent_callback = nullptr;
    QDesignerIntegration_ConnectNotify_Callback qdesignerintegration_connectnotify_callback = nullptr;
    QDesignerIntegration_DisconnectNotify_Callback qdesignerintegration_disconnectnotify_callback = nullptr;
    QDesignerIntegration_Sender_Callback qdesignerintegration_sender_callback = nullptr;
    QDesignerIntegration_SenderSignalIndex_Callback qdesignerintegration_sendersignalindex_callback = nullptr;
    QDesignerIntegration_Receivers_Callback qdesignerintegration_receivers_callback = nullptr;
    QDesignerIntegration_IsSignalConnected_Callback qdesignerintegration_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdesignerintegration_metaobject_isbase = false;
    mutable bool qdesignerintegration_metacast_isbase = false;
    mutable bool qdesignerintegration_metacall_isbase = false;
    mutable bool qdesignerintegration_headersuffix_isbase = false;
    mutable bool qdesignerintegration_setheadersuffix_isbase = false;
    mutable bool qdesignerintegration_isheaderlowercase_isbase = false;
    mutable bool qdesignerintegration_setheaderlowercase_isbase = false;
    mutable bool qdesignerintegration_features_isbase = false;
    mutable bool qdesignerintegration_setfeatures_isbase = false;
    mutable bool qdesignerintegration_resourcefilewatcherbehaviour_isbase = false;
    mutable bool qdesignerintegration_setresourcefilewatcherbehaviour_isbase = false;
    mutable bool qdesignerintegration_containerwindow_isbase = false;
    mutable bool qdesignerintegration_createresourcebrowser_isbase = false;
    mutable bool qdesignerintegration_contexthelpid_isbase = false;
    mutable bool qdesignerintegration_updateproperty_isbase = false;
    mutable bool qdesignerintegration_updateproperty2_isbase = false;
    mutable bool qdesignerintegration_resetproperty_isbase = false;
    mutable bool qdesignerintegration_adddynamicproperty_isbase = false;
    mutable bool qdesignerintegration_removedynamicproperty_isbase = false;
    mutable bool qdesignerintegration_updateactiveformwindow_isbase = false;
    mutable bool qdesignerintegration_setupformwindow_isbase = false;
    mutable bool qdesignerintegration_updateselection_isbase = false;
    mutable bool qdesignerintegration_updatecustomwidgetplugins_isbase = false;
    mutable bool qdesignerintegration_event_isbase = false;
    mutable bool qdesignerintegration_eventfilter_isbase = false;
    mutable bool qdesignerintegration_timerevent_isbase = false;
    mutable bool qdesignerintegration_childevent_isbase = false;
    mutable bool qdesignerintegration_customevent_isbase = false;
    mutable bool qdesignerintegration_connectnotify_isbase = false;
    mutable bool qdesignerintegration_disconnectnotify_isbase = false;
    mutable bool qdesignerintegration_sender_isbase = false;
    mutable bool qdesignerintegration_sendersignalindex_isbase = false;
    mutable bool qdesignerintegration_receivers_isbase = false;
    mutable bool qdesignerintegration_issignalconnected_isbase = false;

  public:
    VirtualQDesignerIntegration(QDesignerFormEditorInterface* core) : QDesignerIntegration(core) {};
    VirtualQDesignerIntegration(QDesignerFormEditorInterface* core, QObject* parent) : QDesignerIntegration(core, parent) {};

    ~VirtualQDesignerIntegration() {
        qdesignerintegration_metaobject_callback = nullptr;
        qdesignerintegration_metacast_callback = nullptr;
        qdesignerintegration_metacall_callback = nullptr;
        qdesignerintegration_headersuffix_callback = nullptr;
        qdesignerintegration_setheadersuffix_callback = nullptr;
        qdesignerintegration_isheaderlowercase_callback = nullptr;
        qdesignerintegration_setheaderlowercase_callback = nullptr;
        qdesignerintegration_features_callback = nullptr;
        qdesignerintegration_setfeatures_callback = nullptr;
        qdesignerintegration_resourcefilewatcherbehaviour_callback = nullptr;
        qdesignerintegration_setresourcefilewatcherbehaviour_callback = nullptr;
        qdesignerintegration_containerwindow_callback = nullptr;
        qdesignerintegration_createresourcebrowser_callback = nullptr;
        qdesignerintegration_contexthelpid_callback = nullptr;
        qdesignerintegration_updateproperty_callback = nullptr;
        qdesignerintegration_updateproperty2_callback = nullptr;
        qdesignerintegration_resetproperty_callback = nullptr;
        qdesignerintegration_adddynamicproperty_callback = nullptr;
        qdesignerintegration_removedynamicproperty_callback = nullptr;
        qdesignerintegration_updateactiveformwindow_callback = nullptr;
        qdesignerintegration_setupformwindow_callback = nullptr;
        qdesignerintegration_updateselection_callback = nullptr;
        qdesignerintegration_updatecustomwidgetplugins_callback = nullptr;
        qdesignerintegration_event_callback = nullptr;
        qdesignerintegration_eventfilter_callback = nullptr;
        qdesignerintegration_timerevent_callback = nullptr;
        qdesignerintegration_childevent_callback = nullptr;
        qdesignerintegration_customevent_callback = nullptr;
        qdesignerintegration_connectnotify_callback = nullptr;
        qdesignerintegration_disconnectnotify_callback = nullptr;
        qdesignerintegration_sender_callback = nullptr;
        qdesignerintegration_sendersignalindex_callback = nullptr;
        qdesignerintegration_receivers_callback = nullptr;
        qdesignerintegration_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQDesignerIntegration_MetaObject_Callback(QDesignerIntegration_MetaObject_Callback cb) { qdesignerintegration_metaobject_callback = cb; }
    inline void setQDesignerIntegration_Metacast_Callback(QDesignerIntegration_Metacast_Callback cb) { qdesignerintegration_metacast_callback = cb; }
    inline void setQDesignerIntegration_Metacall_Callback(QDesignerIntegration_Metacall_Callback cb) { qdesignerintegration_metacall_callback = cb; }
    inline void setQDesignerIntegration_HeaderSuffix_Callback(QDesignerIntegration_HeaderSuffix_Callback cb) { qdesignerintegration_headersuffix_callback = cb; }
    inline void setQDesignerIntegration_SetHeaderSuffix_Callback(QDesignerIntegration_SetHeaderSuffix_Callback cb) { qdesignerintegration_setheadersuffix_callback = cb; }
    inline void setQDesignerIntegration_IsHeaderLowercase_Callback(QDesignerIntegration_IsHeaderLowercase_Callback cb) { qdesignerintegration_isheaderlowercase_callback = cb; }
    inline void setQDesignerIntegration_SetHeaderLowercase_Callback(QDesignerIntegration_SetHeaderLowercase_Callback cb) { qdesignerintegration_setheaderlowercase_callback = cb; }
    inline void setQDesignerIntegration_Features_Callback(QDesignerIntegration_Features_Callback cb) { qdesignerintegration_features_callback = cb; }
    inline void setQDesignerIntegration_SetFeatures_Callback(QDesignerIntegration_SetFeatures_Callback cb) { qdesignerintegration_setfeatures_callback = cb; }
    inline void setQDesignerIntegration_ResourceFileWatcherBehaviour_Callback(QDesignerIntegration_ResourceFileWatcherBehaviour_Callback cb) { qdesignerintegration_resourcefilewatcherbehaviour_callback = cb; }
    inline void setQDesignerIntegration_SetResourceFileWatcherBehaviour_Callback(QDesignerIntegration_SetResourceFileWatcherBehaviour_Callback cb) { qdesignerintegration_setresourcefilewatcherbehaviour_callback = cb; }
    inline void setQDesignerIntegration_ContainerWindow_Callback(QDesignerIntegration_ContainerWindow_Callback cb) { qdesignerintegration_containerwindow_callback = cb; }
    inline void setQDesignerIntegration_CreateResourceBrowser_Callback(QDesignerIntegration_CreateResourceBrowser_Callback cb) { qdesignerintegration_createresourcebrowser_callback = cb; }
    inline void setQDesignerIntegration_ContextHelpId_Callback(QDesignerIntegration_ContextHelpId_Callback cb) { qdesignerintegration_contexthelpid_callback = cb; }
    inline void setQDesignerIntegration_UpdateProperty_Callback(QDesignerIntegration_UpdateProperty_Callback cb) { qdesignerintegration_updateproperty_callback = cb; }
    inline void setQDesignerIntegration_UpdateProperty2_Callback(QDesignerIntegration_UpdateProperty2_Callback cb) { qdesignerintegration_updateproperty2_callback = cb; }
    inline void setQDesignerIntegration_ResetProperty_Callback(QDesignerIntegration_ResetProperty_Callback cb) { qdesignerintegration_resetproperty_callback = cb; }
    inline void setQDesignerIntegration_AddDynamicProperty_Callback(QDesignerIntegration_AddDynamicProperty_Callback cb) { qdesignerintegration_adddynamicproperty_callback = cb; }
    inline void setQDesignerIntegration_RemoveDynamicProperty_Callback(QDesignerIntegration_RemoveDynamicProperty_Callback cb) { qdesignerintegration_removedynamicproperty_callback = cb; }
    inline void setQDesignerIntegration_UpdateActiveFormWindow_Callback(QDesignerIntegration_UpdateActiveFormWindow_Callback cb) { qdesignerintegration_updateactiveformwindow_callback = cb; }
    inline void setQDesignerIntegration_SetupFormWindow_Callback(QDesignerIntegration_SetupFormWindow_Callback cb) { qdesignerintegration_setupformwindow_callback = cb; }
    inline void setQDesignerIntegration_UpdateSelection_Callback(QDesignerIntegration_UpdateSelection_Callback cb) { qdesignerintegration_updateselection_callback = cb; }
    inline void setQDesignerIntegration_UpdateCustomWidgetPlugins_Callback(QDesignerIntegration_UpdateCustomWidgetPlugins_Callback cb) { qdesignerintegration_updatecustomwidgetplugins_callback = cb; }
    inline void setQDesignerIntegration_Event_Callback(QDesignerIntegration_Event_Callback cb) { qdesignerintegration_event_callback = cb; }
    inline void setQDesignerIntegration_EventFilter_Callback(QDesignerIntegration_EventFilter_Callback cb) { qdesignerintegration_eventfilter_callback = cb; }
    inline void setQDesignerIntegration_TimerEvent_Callback(QDesignerIntegration_TimerEvent_Callback cb) { qdesignerintegration_timerevent_callback = cb; }
    inline void setQDesignerIntegration_ChildEvent_Callback(QDesignerIntegration_ChildEvent_Callback cb) { qdesignerintegration_childevent_callback = cb; }
    inline void setQDesignerIntegration_CustomEvent_Callback(QDesignerIntegration_CustomEvent_Callback cb) { qdesignerintegration_customevent_callback = cb; }
    inline void setQDesignerIntegration_ConnectNotify_Callback(QDesignerIntegration_ConnectNotify_Callback cb) { qdesignerintegration_connectnotify_callback = cb; }
    inline void setQDesignerIntegration_DisconnectNotify_Callback(QDesignerIntegration_DisconnectNotify_Callback cb) { qdesignerintegration_disconnectnotify_callback = cb; }
    inline void setQDesignerIntegration_Sender_Callback(QDesignerIntegration_Sender_Callback cb) { qdesignerintegration_sender_callback = cb; }
    inline void setQDesignerIntegration_SenderSignalIndex_Callback(QDesignerIntegration_SenderSignalIndex_Callback cb) { qdesignerintegration_sendersignalindex_callback = cb; }
    inline void setQDesignerIntegration_Receivers_Callback(QDesignerIntegration_Receivers_Callback cb) { qdesignerintegration_receivers_callback = cb; }
    inline void setQDesignerIntegration_IsSignalConnected_Callback(QDesignerIntegration_IsSignalConnected_Callback cb) { qdesignerintegration_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQDesignerIntegration_MetaObject_IsBase(bool value) const { qdesignerintegration_metaobject_isbase = value; }
    inline void setQDesignerIntegration_Metacast_IsBase(bool value) const { qdesignerintegration_metacast_isbase = value; }
    inline void setQDesignerIntegration_Metacall_IsBase(bool value) const { qdesignerintegration_metacall_isbase = value; }
    inline void setQDesignerIntegration_HeaderSuffix_IsBase(bool value) const { qdesignerintegration_headersuffix_isbase = value; }
    inline void setQDesignerIntegration_SetHeaderSuffix_IsBase(bool value) const { qdesignerintegration_setheadersuffix_isbase = value; }
    inline void setQDesignerIntegration_IsHeaderLowercase_IsBase(bool value) const { qdesignerintegration_isheaderlowercase_isbase = value; }
    inline void setQDesignerIntegration_SetHeaderLowercase_IsBase(bool value) const { qdesignerintegration_setheaderlowercase_isbase = value; }
    inline void setQDesignerIntegration_Features_IsBase(bool value) const { qdesignerintegration_features_isbase = value; }
    inline void setQDesignerIntegration_SetFeatures_IsBase(bool value) const { qdesignerintegration_setfeatures_isbase = value; }
    inline void setQDesignerIntegration_ResourceFileWatcherBehaviour_IsBase(bool value) const { qdesignerintegration_resourcefilewatcherbehaviour_isbase = value; }
    inline void setQDesignerIntegration_SetResourceFileWatcherBehaviour_IsBase(bool value) const { qdesignerintegration_setresourcefilewatcherbehaviour_isbase = value; }
    inline void setQDesignerIntegration_ContainerWindow_IsBase(bool value) const { qdesignerintegration_containerwindow_isbase = value; }
    inline void setQDesignerIntegration_CreateResourceBrowser_IsBase(bool value) const { qdesignerintegration_createresourcebrowser_isbase = value; }
    inline void setQDesignerIntegration_ContextHelpId_IsBase(bool value) const { qdesignerintegration_contexthelpid_isbase = value; }
    inline void setQDesignerIntegration_UpdateProperty_IsBase(bool value) const { qdesignerintegration_updateproperty_isbase = value; }
    inline void setQDesignerIntegration_UpdateProperty2_IsBase(bool value) const { qdesignerintegration_updateproperty2_isbase = value; }
    inline void setQDesignerIntegration_ResetProperty_IsBase(bool value) const { qdesignerintegration_resetproperty_isbase = value; }
    inline void setQDesignerIntegration_AddDynamicProperty_IsBase(bool value) const { qdesignerintegration_adddynamicproperty_isbase = value; }
    inline void setQDesignerIntegration_RemoveDynamicProperty_IsBase(bool value) const { qdesignerintegration_removedynamicproperty_isbase = value; }
    inline void setQDesignerIntegration_UpdateActiveFormWindow_IsBase(bool value) const { qdesignerintegration_updateactiveformwindow_isbase = value; }
    inline void setQDesignerIntegration_SetupFormWindow_IsBase(bool value) const { qdesignerintegration_setupformwindow_isbase = value; }
    inline void setQDesignerIntegration_UpdateSelection_IsBase(bool value) const { qdesignerintegration_updateselection_isbase = value; }
    inline void setQDesignerIntegration_UpdateCustomWidgetPlugins_IsBase(bool value) const { qdesignerintegration_updatecustomwidgetplugins_isbase = value; }
    inline void setQDesignerIntegration_Event_IsBase(bool value) const { qdesignerintegration_event_isbase = value; }
    inline void setQDesignerIntegration_EventFilter_IsBase(bool value) const { qdesignerintegration_eventfilter_isbase = value; }
    inline void setQDesignerIntegration_TimerEvent_IsBase(bool value) const { qdesignerintegration_timerevent_isbase = value; }
    inline void setQDesignerIntegration_ChildEvent_IsBase(bool value) const { qdesignerintegration_childevent_isbase = value; }
    inline void setQDesignerIntegration_CustomEvent_IsBase(bool value) const { qdesignerintegration_customevent_isbase = value; }
    inline void setQDesignerIntegration_ConnectNotify_IsBase(bool value) const { qdesignerintegration_connectnotify_isbase = value; }
    inline void setQDesignerIntegration_DisconnectNotify_IsBase(bool value) const { qdesignerintegration_disconnectnotify_isbase = value; }
    inline void setQDesignerIntegration_Sender_IsBase(bool value) const { qdesignerintegration_sender_isbase = value; }
    inline void setQDesignerIntegration_SenderSignalIndex_IsBase(bool value) const { qdesignerintegration_sendersignalindex_isbase = value; }
    inline void setQDesignerIntegration_Receivers_IsBase(bool value) const { qdesignerintegration_receivers_isbase = value; }
    inline void setQDesignerIntegration_IsSignalConnected_IsBase(bool value) const { qdesignerintegration_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerintegration_metaobject_isbase) {
            qdesignerintegration_metaobject_isbase = false;
            return QDesignerIntegration::metaObject();
        } else if (qdesignerintegration_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qdesignerintegration_metaobject_callback();
            return callback_ret;
        } else {
            return QDesignerIntegration::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerintegration_metacast_isbase) {
            qdesignerintegration_metacast_isbase = false;
            return QDesignerIntegration::qt_metacast(param1);
        } else if (qdesignerintegration_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qdesignerintegration_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerIntegration::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerintegration_metacall_isbase) {
            qdesignerintegration_metacall_isbase = false;
            return QDesignerIntegration::qt_metacall(param1, param2, param3);
        } else if (qdesignerintegration_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qdesignerintegration_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerIntegration::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString headerSuffix() const override {
        if (qdesignerintegration_headersuffix_isbase) {
            qdesignerintegration_headersuffix_isbase = false;
            return QDesignerIntegration::headerSuffix();
        } else if (qdesignerintegration_headersuffix_callback != nullptr) {
            const char* callback_ret = qdesignerintegration_headersuffix_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return QDesignerIntegration::headerSuffix();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHeaderSuffix(const QString& headerSuffix) override {
        if (qdesignerintegration_setheadersuffix_isbase) {
            qdesignerintegration_setheadersuffix_isbase = false;
            QDesignerIntegration::setHeaderSuffix(headerSuffix);
        } else if (qdesignerintegration_setheadersuffix_callback != nullptr) {
            const QString headerSuffix_ret = headerSuffix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray headerSuffix_b = headerSuffix_ret.toUtf8();
            auto headerSuffix_str_len = headerSuffix_b.length();
            const char* headerSuffix_str = static_cast<const char*>(malloc(headerSuffix_str_len + 1));
            memcpy((void*)headerSuffix_str, headerSuffix_b.data(), headerSuffix_str_len);
            ((char*)headerSuffix_str)[headerSuffix_str_len] = '\0';
            const char* cbval1 = headerSuffix_str;

            qdesignerintegration_setheadersuffix_callback(this, cbval1);
            libqt_free(headerSuffix_str);
        } else {
            QDesignerIntegration::setHeaderSuffix(headerSuffix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isHeaderLowercase() const override {
        if (qdesignerintegration_isheaderlowercase_isbase) {
            qdesignerintegration_isheaderlowercase_isbase = false;
            return QDesignerIntegration::isHeaderLowercase();
        } else if (qdesignerintegration_isheaderlowercase_callback != nullptr) {
            bool callback_ret = qdesignerintegration_isheaderlowercase_callback();
            return callback_ret;
        } else {
            return QDesignerIntegration::isHeaderLowercase();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHeaderLowercase(bool headerLowerCase) override {
        if (qdesignerintegration_setheaderlowercase_isbase) {
            qdesignerintegration_setheaderlowercase_isbase = false;
            QDesignerIntegration::setHeaderLowercase(headerLowerCase);
        } else if (qdesignerintegration_setheaderlowercase_callback != nullptr) {
            bool cbval1 = headerLowerCase;

            qdesignerintegration_setheaderlowercase_callback(this, cbval1);
        } else {
            QDesignerIntegration::setHeaderLowercase(headerLowerCase);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerIntegrationInterface::Feature features() const override {
        if (qdesignerintegration_features_isbase) {
            qdesignerintegration_features_isbase = false;
            return QDesignerIntegration::features();
        } else if (qdesignerintegration_features_callback != nullptr) {
            int callback_ret = qdesignerintegration_features_callback();
            return static_cast<QDesignerIntegrationInterface::Feature>(callback_ret);
        } else {
            return QDesignerIntegration::features();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFeatures(QDesignerIntegrationInterface::Feature f) override {
        if (qdesignerintegration_setfeatures_isbase) {
            qdesignerintegration_setfeatures_isbase = false;
            QDesignerIntegration::setFeatures(f);
        } else if (qdesignerintegration_setfeatures_callback != nullptr) {
            int cbval1 = static_cast<int>(f);

            qdesignerintegration_setfeatures_callback(this, cbval1);
        } else {
            QDesignerIntegration::setFeatures(f);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerIntegrationInterface::ResourceFileWatcherBehaviour resourceFileWatcherBehaviour() const override {
        if (qdesignerintegration_resourcefilewatcherbehaviour_isbase) {
            qdesignerintegration_resourcefilewatcherbehaviour_isbase = false;
            return QDesignerIntegration::resourceFileWatcherBehaviour();
        } else if (qdesignerintegration_resourcefilewatcherbehaviour_callback != nullptr) {
            int callback_ret = qdesignerintegration_resourcefilewatcherbehaviour_callback();
            return static_cast<QDesignerIntegrationInterface::ResourceFileWatcherBehaviour>(callback_ret);
        } else {
            return QDesignerIntegration::resourceFileWatcherBehaviour();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setResourceFileWatcherBehaviour(QDesignerIntegrationInterface::ResourceFileWatcherBehaviour behaviour) override {
        if (qdesignerintegration_setresourcefilewatcherbehaviour_isbase) {
            qdesignerintegration_setresourcefilewatcherbehaviour_isbase = false;
            QDesignerIntegration::setResourceFileWatcherBehaviour(behaviour);
        } else if (qdesignerintegration_setresourcefilewatcherbehaviour_callback != nullptr) {
            int cbval1 = static_cast<int>(behaviour);

            qdesignerintegration_setresourcefilewatcherbehaviour_callback(this, cbval1);
        } else {
            QDesignerIntegration::setResourceFileWatcherBehaviour(behaviour);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* containerWindow(QWidget* widget) const override {
        if (qdesignerintegration_containerwindow_isbase) {
            qdesignerintegration_containerwindow_isbase = false;
            return QDesignerIntegration::containerWindow(widget);
        } else if (qdesignerintegration_containerwindow_callback != nullptr) {
            QWidget* cbval1 = widget;

            QWidget* callback_ret = qdesignerintegration_containerwindow_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerIntegration::containerWindow(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerResourceBrowserInterface* createResourceBrowser(QWidget* parent) override {
        if (qdesignerintegration_createresourcebrowser_isbase) {
            qdesignerintegration_createresourcebrowser_isbase = false;
            return QDesignerIntegration::createResourceBrowser(parent);
        } else if (qdesignerintegration_createresourcebrowser_callback != nullptr) {
            QWidget* cbval1 = parent;

            QDesignerResourceBrowserInterface* callback_ret = qdesignerintegration_createresourcebrowser_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerIntegration::createResourceBrowser(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString contextHelpId() const override {
        if (qdesignerintegration_contexthelpid_isbase) {
            qdesignerintegration_contexthelpid_isbase = false;
            return QDesignerIntegration::contextHelpId();
        } else if (qdesignerintegration_contexthelpid_callback != nullptr) {
            const char* callback_ret = qdesignerintegration_contexthelpid_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return QDesignerIntegration::contextHelpId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateProperty(const QString& name, const QVariant& value, bool enableSubPropertyHandling) override {
        if (qdesignerintegration_updateproperty_isbase) {
            qdesignerintegration_updateproperty_isbase = false;
            QDesignerIntegration::updateProperty(name, value, enableSubPropertyHandling);
        } else if (qdesignerintegration_updateproperty_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            bool cbval3 = enableSubPropertyHandling;

            qdesignerintegration_updateproperty_callback(this, cbval1, cbval2, cbval3);
            libqt_free(name_str);
        } else {
            QDesignerIntegration::updateProperty(name, value, enableSubPropertyHandling);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateProperty(const QString& name, const QVariant& value) override {
        if (qdesignerintegration_updateproperty2_isbase) {
            qdesignerintegration_updateproperty2_isbase = false;
            QDesignerIntegration::updateProperty(name, value);
        } else if (qdesignerintegration_updateproperty2_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            qdesignerintegration_updateproperty2_callback(this, cbval1, cbval2);
            libqt_free(name_str);
        } else {
            QDesignerIntegration::updateProperty(name, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetProperty(const QString& name) override {
        if (qdesignerintegration_resetproperty_isbase) {
            qdesignerintegration_resetproperty_isbase = false;
            QDesignerIntegration::resetProperty(name);
        } else if (qdesignerintegration_resetproperty_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;

            qdesignerintegration_resetproperty_callback(this, cbval1);
            libqt_free(name_str);
        } else {
            QDesignerIntegration::resetProperty(name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addDynamicProperty(const QString& name, const QVariant& value) override {
        if (qdesignerintegration_adddynamicproperty_isbase) {
            qdesignerintegration_adddynamicproperty_isbase = false;
            QDesignerIntegration::addDynamicProperty(name, value);
        } else if (qdesignerintegration_adddynamicproperty_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            qdesignerintegration_adddynamicproperty_callback(this, cbval1, cbval2);
            libqt_free(name_str);
        } else {
            QDesignerIntegration::addDynamicProperty(name, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeDynamicProperty(const QString& name) override {
        if (qdesignerintegration_removedynamicproperty_isbase) {
            qdesignerintegration_removedynamicproperty_isbase = false;
            QDesignerIntegration::removeDynamicProperty(name);
        } else if (qdesignerintegration_removedynamicproperty_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;

            qdesignerintegration_removedynamicproperty_callback(this, cbval1);
            libqt_free(name_str);
        } else {
            QDesignerIntegration::removeDynamicProperty(name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateActiveFormWindow(QDesignerFormWindowInterface* formWindow) override {
        if (qdesignerintegration_updateactiveformwindow_isbase) {
            qdesignerintegration_updateactiveformwindow_isbase = false;
            QDesignerIntegration::updateActiveFormWindow(formWindow);
        } else if (qdesignerintegration_updateactiveformwindow_callback != nullptr) {
            QDesignerFormWindowInterface* cbval1 = formWindow;

            qdesignerintegration_updateactiveformwindow_callback(this, cbval1);
        } else {
            QDesignerIntegration::updateActiveFormWindow(formWindow);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupFormWindow(QDesignerFormWindowInterface* formWindow) override {
        if (qdesignerintegration_setupformwindow_isbase) {
            qdesignerintegration_setupformwindow_isbase = false;
            QDesignerIntegration::setupFormWindow(formWindow);
        } else if (qdesignerintegration_setupformwindow_callback != nullptr) {
            QDesignerFormWindowInterface* cbval1 = formWindow;

            qdesignerintegration_setupformwindow_callback(this, cbval1);
        } else {
            QDesignerIntegration::setupFormWindow(formWindow);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateSelection() override {
        if (qdesignerintegration_updateselection_isbase) {
            qdesignerintegration_updateselection_isbase = false;
            QDesignerIntegration::updateSelection();
        } else if (qdesignerintegration_updateselection_callback != nullptr) {
            qdesignerintegration_updateselection_callback();
        } else {
            QDesignerIntegration::updateSelection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCustomWidgetPlugins() override {
        if (qdesignerintegration_updatecustomwidgetplugins_isbase) {
            qdesignerintegration_updatecustomwidgetplugins_isbase = false;
            QDesignerIntegration::updateCustomWidgetPlugins();
        } else if (qdesignerintegration_updatecustomwidgetplugins_callback != nullptr) {
            qdesignerintegration_updatecustomwidgetplugins_callback();
        } else {
            QDesignerIntegration::updateCustomWidgetPlugins();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerintegration_event_isbase) {
            qdesignerintegration_event_isbase = false;
            return QDesignerIntegration::event(event);
        } else if (qdesignerintegration_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qdesignerintegration_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerIntegration::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerintegration_eventfilter_isbase) {
            qdesignerintegration_eventfilter_isbase = false;
            return QDesignerIntegration::eventFilter(watched, event);
        } else if (qdesignerintegration_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qdesignerintegration_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QDesignerIntegration::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerintegration_timerevent_isbase) {
            qdesignerintegration_timerevent_isbase = false;
            QDesignerIntegration::timerEvent(event);
        } else if (qdesignerintegration_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qdesignerintegration_timerevent_callback(this, cbval1);
        } else {
            QDesignerIntegration::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerintegration_childevent_isbase) {
            qdesignerintegration_childevent_isbase = false;
            QDesignerIntegration::childEvent(event);
        } else if (qdesignerintegration_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qdesignerintegration_childevent_callback(this, cbval1);
        } else {
            QDesignerIntegration::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerintegration_customevent_isbase) {
            qdesignerintegration_customevent_isbase = false;
            QDesignerIntegration::customEvent(event);
        } else if (qdesignerintegration_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qdesignerintegration_customevent_callback(this, cbval1);
        } else {
            QDesignerIntegration::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerintegration_connectnotify_isbase) {
            qdesignerintegration_connectnotify_isbase = false;
            QDesignerIntegration::connectNotify(signal);
        } else if (qdesignerintegration_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdesignerintegration_connectnotify_callback(this, cbval1);
        } else {
            QDesignerIntegration::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerintegration_disconnectnotify_isbase) {
            qdesignerintegration_disconnectnotify_isbase = false;
            QDesignerIntegration::disconnectNotify(signal);
        } else if (qdesignerintegration_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdesignerintegration_disconnectnotify_callback(this, cbval1);
        } else {
            QDesignerIntegration::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdesignerintegration_sender_isbase) {
            qdesignerintegration_sender_isbase = false;
            return QDesignerIntegration::sender();
        } else if (qdesignerintegration_sender_callback != nullptr) {
            QObject* callback_ret = qdesignerintegration_sender_callback();
            return callback_ret;
        } else {
            return QDesignerIntegration::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdesignerintegration_sendersignalindex_isbase) {
            qdesignerintegration_sendersignalindex_isbase = false;
            return QDesignerIntegration::senderSignalIndex();
        } else if (qdesignerintegration_sendersignalindex_callback != nullptr) {
            int callback_ret = qdesignerintegration_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerIntegration::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdesignerintegration_receivers_isbase) {
            qdesignerintegration_receivers_isbase = false;
            return QDesignerIntegration::receivers(signal);
        } else if (qdesignerintegration_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qdesignerintegration_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerIntegration::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdesignerintegration_issignalconnected_isbase) {
            qdesignerintegration_issignalconnected_isbase = false;
            return QDesignerIntegration::isSignalConnected(signal);
        } else if (qdesignerintegration_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qdesignerintegration_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerIntegration::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QDesignerIntegration_TimerEvent(QDesignerIntegration* self, QTimerEvent* event);
    friend void QDesignerIntegration_QBaseTimerEvent(QDesignerIntegration* self, QTimerEvent* event);
    friend void QDesignerIntegration_ChildEvent(QDesignerIntegration* self, QChildEvent* event);
    friend void QDesignerIntegration_QBaseChildEvent(QDesignerIntegration* self, QChildEvent* event);
    friend void QDesignerIntegration_CustomEvent(QDesignerIntegration* self, QEvent* event);
    friend void QDesignerIntegration_QBaseCustomEvent(QDesignerIntegration* self, QEvent* event);
    friend void QDesignerIntegration_ConnectNotify(QDesignerIntegration* self, const QMetaMethod* signal);
    friend void QDesignerIntegration_QBaseConnectNotify(QDesignerIntegration* self, const QMetaMethod* signal);
    friend void QDesignerIntegration_DisconnectNotify(QDesignerIntegration* self, const QMetaMethod* signal);
    friend void QDesignerIntegration_QBaseDisconnectNotify(QDesignerIntegration* self, const QMetaMethod* signal);
    friend QObject* QDesignerIntegration_Sender(const QDesignerIntegration* self);
    friend QObject* QDesignerIntegration_QBaseSender(const QDesignerIntegration* self);
    friend int QDesignerIntegration_SenderSignalIndex(const QDesignerIntegration* self);
    friend int QDesignerIntegration_QBaseSenderSignalIndex(const QDesignerIntegration* self);
    friend int QDesignerIntegration_Receivers(const QDesignerIntegration* self, const char* signal);
    friend int QDesignerIntegration_QBaseReceivers(const QDesignerIntegration* self, const char* signal);
    friend bool QDesignerIntegration_IsSignalConnected(const QDesignerIntegration* self, const QMetaMethod* signal);
    friend bool QDesignerIntegration_QBaseIsSignalConnected(const QDesignerIntegration* self, const QMetaMethod* signal);
};

#endif
