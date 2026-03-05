#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBVIRTUALPART_H
#define SRC_EXTRAS_KPARTSC_LIBVIRTUALPART_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::Part so that we can call protected methods
class VirtualKPartsPart final : public KParts::Part {

  public:
    // Virtual class boolean flag
    bool isVirtualKPartsPart = true;

    // Virtual class public types (including callbacks)
    using KParts__Part_MetaObject_Callback = QMetaObject* (*)();
    using KParts__Part_Metacast_Callback = void* (*)(KParts__Part*, const char*);
    using KParts__Part_Metacall_Callback = int (*)(KParts__Part*, int, int, void**);
    using KParts__Part_Widget_Callback = QWidget* (*)();
    using KParts__Part_SetManager_Callback = void (*)(KParts__Part*, KParts__PartManager*);
    using KParts__Part_HitTest_Callback = KParts__Part* (*)(KParts__Part*, QWidget*, QPoint*);
    using KParts__Part_SetWidget_Callback = void (*)(KParts__Part*, QWidget*);
    using KParts__Part_CustomEvent_Callback = void (*)(KParts__Part*, QEvent*);
    using KParts__Part_PartActivateEvent_Callback = void (*)(KParts__Part*, KParts__PartActivateEvent*);
    using KParts__Part_GuiActivateEvent_Callback = void (*)(KParts__Part*, KParts__GUIActivateEvent*);
    using KParts__Part_Event_Callback = bool (*)(KParts__Part*, QEvent*);
    using KParts__Part_EventFilter_Callback = bool (*)(KParts__Part*, QObject*, QEvent*);
    using KParts__Part_TimerEvent_Callback = void (*)(KParts__Part*, QTimerEvent*);
    using KParts__Part_ChildEvent_Callback = void (*)(KParts__Part*, QChildEvent*);
    using KParts__Part_ConnectNotify_Callback = void (*)(KParts__Part*, QMetaMethod*);
    using KParts__Part_DisconnectNotify_Callback = void (*)(KParts__Part*, QMetaMethod*);
    using KParts__Part_Action2_Callback = QAction* (*)(const KParts__Part*, QDomElement*);
    using KParts__Part_ActionCollection_Callback = KActionCollection* (*)();
    using KParts__Part_ComponentName_Callback = const char* (*)();
    using KParts__Part_DomDocument_Callback = QDomDocument* (*)();
    using KParts__Part_XmlFile_Callback = const char* (*)();
    using KParts__Part_LocalXMLFile_Callback = const char* (*)();
    using KParts__Part_SetComponentName_Callback = void (*)(KParts__Part*, const char*, const char*);
    using KParts__Part_SetXMLFile_Callback = void (*)(KParts__Part*, const char*, bool, bool);
    using KParts__Part_SetLocalXMLFile_Callback = void (*)(KParts__Part*, const char*);
    using KParts__Part_SetXML_Callback = void (*)(KParts__Part*, const char*, bool);
    using KParts__Part_SetDOMDocument_Callback = void (*)(KParts__Part*, QDomDocument*, bool);
    using KParts__Part_StateChanged_Callback = void (*)(KParts__Part*, const char*, int);
    using KParts__Part_HostContainer_Callback = QWidget* (*)(KParts__Part*, const char*);
    using KParts__Part_SlotWidgetDestroyed_Callback = void (*)();
    using KParts__Part_Sender_Callback = QObject* (*)();
    using KParts__Part_SenderSignalIndex_Callback = int (*)();
    using KParts__Part_Receivers_Callback = int (*)(const KParts__Part*, const char*);
    using KParts__Part_IsSignalConnected_Callback = bool (*)(const KParts__Part*, QMetaMethod*);
    using KParts__Part_StandardsXmlFileLocation_Callback = const char* (*)();
    using KParts__Part_LoadStandardsXmlFile_Callback = void (*)();

  protected:
    // Instance callback storage
    KParts__Part_MetaObject_Callback kparts__part_metaobject_callback = nullptr;
    KParts__Part_Metacast_Callback kparts__part_metacast_callback = nullptr;
    KParts__Part_Metacall_Callback kparts__part_metacall_callback = nullptr;
    KParts__Part_Widget_Callback kparts__part_widget_callback = nullptr;
    KParts__Part_SetManager_Callback kparts__part_setmanager_callback = nullptr;
    KParts__Part_HitTest_Callback kparts__part_hittest_callback = nullptr;
    KParts__Part_SetWidget_Callback kparts__part_setwidget_callback = nullptr;
    KParts__Part_CustomEvent_Callback kparts__part_customevent_callback = nullptr;
    KParts__Part_PartActivateEvent_Callback kparts__part_partactivateevent_callback = nullptr;
    KParts__Part_GuiActivateEvent_Callback kparts__part_guiactivateevent_callback = nullptr;
    KParts__Part_Event_Callback kparts__part_event_callback = nullptr;
    KParts__Part_EventFilter_Callback kparts__part_eventfilter_callback = nullptr;
    KParts__Part_TimerEvent_Callback kparts__part_timerevent_callback = nullptr;
    KParts__Part_ChildEvent_Callback kparts__part_childevent_callback = nullptr;
    KParts__Part_ConnectNotify_Callback kparts__part_connectnotify_callback = nullptr;
    KParts__Part_DisconnectNotify_Callback kparts__part_disconnectnotify_callback = nullptr;
    KParts__Part_Action2_Callback kparts__part_action2_callback = nullptr;
    KParts__Part_ActionCollection_Callback kparts__part_actioncollection_callback = nullptr;
    KParts__Part_ComponentName_Callback kparts__part_componentname_callback = nullptr;
    KParts__Part_DomDocument_Callback kparts__part_domdocument_callback = nullptr;
    KParts__Part_XmlFile_Callback kparts__part_xmlfile_callback = nullptr;
    KParts__Part_LocalXMLFile_Callback kparts__part_localxmlfile_callback = nullptr;
    KParts__Part_SetComponentName_Callback kparts__part_setcomponentname_callback = nullptr;
    KParts__Part_SetXMLFile_Callback kparts__part_setxmlfile_callback = nullptr;
    KParts__Part_SetLocalXMLFile_Callback kparts__part_setlocalxmlfile_callback = nullptr;
    KParts__Part_SetXML_Callback kparts__part_setxml_callback = nullptr;
    KParts__Part_SetDOMDocument_Callback kparts__part_setdomdocument_callback = nullptr;
    KParts__Part_StateChanged_Callback kparts__part_statechanged_callback = nullptr;
    KParts__Part_HostContainer_Callback kparts__part_hostcontainer_callback = nullptr;
    KParts__Part_SlotWidgetDestroyed_Callback kparts__part_slotwidgetdestroyed_callback = nullptr;
    KParts__Part_Sender_Callback kparts__part_sender_callback = nullptr;
    KParts__Part_SenderSignalIndex_Callback kparts__part_sendersignalindex_callback = nullptr;
    KParts__Part_Receivers_Callback kparts__part_receivers_callback = nullptr;
    KParts__Part_IsSignalConnected_Callback kparts__part_issignalconnected_callback = nullptr;
    KParts__Part_StandardsXmlFileLocation_Callback kparts__part_standardsxmlfilelocation_callback = nullptr;
    KParts__Part_LoadStandardsXmlFile_Callback kparts__part_loadstandardsxmlfile_callback = nullptr;

    // Instance base flags
    mutable bool kparts__part_metaobject_isbase = false;
    mutable bool kparts__part_metacast_isbase = false;
    mutable bool kparts__part_metacall_isbase = false;
    mutable bool kparts__part_widget_isbase = false;
    mutable bool kparts__part_setmanager_isbase = false;
    mutable bool kparts__part_hittest_isbase = false;
    mutable bool kparts__part_setwidget_isbase = false;
    mutable bool kparts__part_customevent_isbase = false;
    mutable bool kparts__part_partactivateevent_isbase = false;
    mutable bool kparts__part_guiactivateevent_isbase = false;
    mutable bool kparts__part_event_isbase = false;
    mutable bool kparts__part_eventfilter_isbase = false;
    mutable bool kparts__part_timerevent_isbase = false;
    mutable bool kparts__part_childevent_isbase = false;
    mutable bool kparts__part_connectnotify_isbase = false;
    mutable bool kparts__part_disconnectnotify_isbase = false;
    mutable bool kparts__part_action2_isbase = false;
    mutable bool kparts__part_actioncollection_isbase = false;
    mutable bool kparts__part_componentname_isbase = false;
    mutable bool kparts__part_domdocument_isbase = false;
    mutable bool kparts__part_xmlfile_isbase = false;
    mutable bool kparts__part_localxmlfile_isbase = false;
    mutable bool kparts__part_setcomponentname_isbase = false;
    mutable bool kparts__part_setxmlfile_isbase = false;
    mutable bool kparts__part_setlocalxmlfile_isbase = false;
    mutable bool kparts__part_setxml_isbase = false;
    mutable bool kparts__part_setdomdocument_isbase = false;
    mutable bool kparts__part_statechanged_isbase = false;
    mutable bool kparts__part_hostcontainer_isbase = false;
    mutable bool kparts__part_slotwidgetdestroyed_isbase = false;
    mutable bool kparts__part_sender_isbase = false;
    mutable bool kparts__part_sendersignalindex_isbase = false;
    mutable bool kparts__part_receivers_isbase = false;
    mutable bool kparts__part_issignalconnected_isbase = false;
    mutable bool kparts__part_standardsxmlfilelocation_isbase = false;
    mutable bool kparts__part_loadstandardsxmlfile_isbase = false;

  public:
    VirtualKPartsPart() : KParts::Part() {};
    VirtualKPartsPart(QObject* parent) : KParts::Part(parent) {};
    VirtualKPartsPart(QObject* parent, const KPluginMetaData& data) : KParts::Part(parent, data) {};

    // Callback setters
    inline void setKParts__Part_MetaObject_Callback(KParts__Part_MetaObject_Callback cb) { kparts__part_metaobject_callback = cb; }
    inline void setKParts__Part_Metacast_Callback(KParts__Part_Metacast_Callback cb) { kparts__part_metacast_callback = cb; }
    inline void setKParts__Part_Metacall_Callback(KParts__Part_Metacall_Callback cb) { kparts__part_metacall_callback = cb; }
    inline void setKParts__Part_Widget_Callback(KParts__Part_Widget_Callback cb) { kparts__part_widget_callback = cb; }
    inline void setKParts__Part_SetManager_Callback(KParts__Part_SetManager_Callback cb) { kparts__part_setmanager_callback = cb; }
    inline void setKParts__Part_HitTest_Callback(KParts__Part_HitTest_Callback cb) { kparts__part_hittest_callback = cb; }
    inline void setKParts__Part_SetWidget_Callback(KParts__Part_SetWidget_Callback cb) { kparts__part_setwidget_callback = cb; }
    inline void setKParts__Part_CustomEvent_Callback(KParts__Part_CustomEvent_Callback cb) { kparts__part_customevent_callback = cb; }
    inline void setKParts__Part_PartActivateEvent_Callback(KParts__Part_PartActivateEvent_Callback cb) { kparts__part_partactivateevent_callback = cb; }
    inline void setKParts__Part_GuiActivateEvent_Callback(KParts__Part_GuiActivateEvent_Callback cb) { kparts__part_guiactivateevent_callback = cb; }
    inline void setKParts__Part_Event_Callback(KParts__Part_Event_Callback cb) { kparts__part_event_callback = cb; }
    inline void setKParts__Part_EventFilter_Callback(KParts__Part_EventFilter_Callback cb) { kparts__part_eventfilter_callback = cb; }
    inline void setKParts__Part_TimerEvent_Callback(KParts__Part_TimerEvent_Callback cb) { kparts__part_timerevent_callback = cb; }
    inline void setKParts__Part_ChildEvent_Callback(KParts__Part_ChildEvent_Callback cb) { kparts__part_childevent_callback = cb; }
    inline void setKParts__Part_ConnectNotify_Callback(KParts__Part_ConnectNotify_Callback cb) { kparts__part_connectnotify_callback = cb; }
    inline void setKParts__Part_DisconnectNotify_Callback(KParts__Part_DisconnectNotify_Callback cb) { kparts__part_disconnectnotify_callback = cb; }
    inline void setKParts__Part_Action2_Callback(KParts__Part_Action2_Callback cb) { kparts__part_action2_callback = cb; }
    inline void setKParts__Part_ActionCollection_Callback(KParts__Part_ActionCollection_Callback cb) { kparts__part_actioncollection_callback = cb; }
    inline void setKParts__Part_ComponentName_Callback(KParts__Part_ComponentName_Callback cb) { kparts__part_componentname_callback = cb; }
    inline void setKParts__Part_DomDocument_Callback(KParts__Part_DomDocument_Callback cb) { kparts__part_domdocument_callback = cb; }
    inline void setKParts__Part_XmlFile_Callback(KParts__Part_XmlFile_Callback cb) { kparts__part_xmlfile_callback = cb; }
    inline void setKParts__Part_LocalXMLFile_Callback(KParts__Part_LocalXMLFile_Callback cb) { kparts__part_localxmlfile_callback = cb; }
    inline void setKParts__Part_SetComponentName_Callback(KParts__Part_SetComponentName_Callback cb) { kparts__part_setcomponentname_callback = cb; }
    inline void setKParts__Part_SetXMLFile_Callback(KParts__Part_SetXMLFile_Callback cb) { kparts__part_setxmlfile_callback = cb; }
    inline void setKParts__Part_SetLocalXMLFile_Callback(KParts__Part_SetLocalXMLFile_Callback cb) { kparts__part_setlocalxmlfile_callback = cb; }
    inline void setKParts__Part_SetXML_Callback(KParts__Part_SetXML_Callback cb) { kparts__part_setxml_callback = cb; }
    inline void setKParts__Part_SetDOMDocument_Callback(KParts__Part_SetDOMDocument_Callback cb) { kparts__part_setdomdocument_callback = cb; }
    inline void setKParts__Part_StateChanged_Callback(KParts__Part_StateChanged_Callback cb) { kparts__part_statechanged_callback = cb; }
    inline void setKParts__Part_HostContainer_Callback(KParts__Part_HostContainer_Callback cb) { kparts__part_hostcontainer_callback = cb; }
    inline void setKParts__Part_SlotWidgetDestroyed_Callback(KParts__Part_SlotWidgetDestroyed_Callback cb) { kparts__part_slotwidgetdestroyed_callback = cb; }
    inline void setKParts__Part_Sender_Callback(KParts__Part_Sender_Callback cb) { kparts__part_sender_callback = cb; }
    inline void setKParts__Part_SenderSignalIndex_Callback(KParts__Part_SenderSignalIndex_Callback cb) { kparts__part_sendersignalindex_callback = cb; }
    inline void setKParts__Part_Receivers_Callback(KParts__Part_Receivers_Callback cb) { kparts__part_receivers_callback = cb; }
    inline void setKParts__Part_IsSignalConnected_Callback(KParts__Part_IsSignalConnected_Callback cb) { kparts__part_issignalconnected_callback = cb; }
    inline void setKParts__Part_StandardsXmlFileLocation_Callback(KParts__Part_StandardsXmlFileLocation_Callback cb) { kparts__part_standardsxmlfilelocation_callback = cb; }
    inline void setKParts__Part_LoadStandardsXmlFile_Callback(KParts__Part_LoadStandardsXmlFile_Callback cb) { kparts__part_loadstandardsxmlfile_callback = cb; }

    // Base flag setters
    inline void setKParts__Part_MetaObject_IsBase(bool value) const { kparts__part_metaobject_isbase = value; }
    inline void setKParts__Part_Metacast_IsBase(bool value) const { kparts__part_metacast_isbase = value; }
    inline void setKParts__Part_Metacall_IsBase(bool value) const { kparts__part_metacall_isbase = value; }
    inline void setKParts__Part_Widget_IsBase(bool value) const { kparts__part_widget_isbase = value; }
    inline void setKParts__Part_SetManager_IsBase(bool value) const { kparts__part_setmanager_isbase = value; }
    inline void setKParts__Part_HitTest_IsBase(bool value) const { kparts__part_hittest_isbase = value; }
    inline void setKParts__Part_SetWidget_IsBase(bool value) const { kparts__part_setwidget_isbase = value; }
    inline void setKParts__Part_CustomEvent_IsBase(bool value) const { kparts__part_customevent_isbase = value; }
    inline void setKParts__Part_PartActivateEvent_IsBase(bool value) const { kparts__part_partactivateevent_isbase = value; }
    inline void setKParts__Part_GuiActivateEvent_IsBase(bool value) const { kparts__part_guiactivateevent_isbase = value; }
    inline void setKParts__Part_Event_IsBase(bool value) const { kparts__part_event_isbase = value; }
    inline void setKParts__Part_EventFilter_IsBase(bool value) const { kparts__part_eventfilter_isbase = value; }
    inline void setKParts__Part_TimerEvent_IsBase(bool value) const { kparts__part_timerevent_isbase = value; }
    inline void setKParts__Part_ChildEvent_IsBase(bool value) const { kparts__part_childevent_isbase = value; }
    inline void setKParts__Part_ConnectNotify_IsBase(bool value) const { kparts__part_connectnotify_isbase = value; }
    inline void setKParts__Part_DisconnectNotify_IsBase(bool value) const { kparts__part_disconnectnotify_isbase = value; }
    inline void setKParts__Part_Action2_IsBase(bool value) const { kparts__part_action2_isbase = value; }
    inline void setKParts__Part_ActionCollection_IsBase(bool value) const { kparts__part_actioncollection_isbase = value; }
    inline void setKParts__Part_ComponentName_IsBase(bool value) const { kparts__part_componentname_isbase = value; }
    inline void setKParts__Part_DomDocument_IsBase(bool value) const { kparts__part_domdocument_isbase = value; }
    inline void setKParts__Part_XmlFile_IsBase(bool value) const { kparts__part_xmlfile_isbase = value; }
    inline void setKParts__Part_LocalXMLFile_IsBase(bool value) const { kparts__part_localxmlfile_isbase = value; }
    inline void setKParts__Part_SetComponentName_IsBase(bool value) const { kparts__part_setcomponentname_isbase = value; }
    inline void setKParts__Part_SetXMLFile_IsBase(bool value) const { kparts__part_setxmlfile_isbase = value; }
    inline void setKParts__Part_SetLocalXMLFile_IsBase(bool value) const { kparts__part_setlocalxmlfile_isbase = value; }
    inline void setKParts__Part_SetXML_IsBase(bool value) const { kparts__part_setxml_isbase = value; }
    inline void setKParts__Part_SetDOMDocument_IsBase(bool value) const { kparts__part_setdomdocument_isbase = value; }
    inline void setKParts__Part_StateChanged_IsBase(bool value) const { kparts__part_statechanged_isbase = value; }
    inline void setKParts__Part_HostContainer_IsBase(bool value) const { kparts__part_hostcontainer_isbase = value; }
    inline void setKParts__Part_SlotWidgetDestroyed_IsBase(bool value) const { kparts__part_slotwidgetdestroyed_isbase = value; }
    inline void setKParts__Part_Sender_IsBase(bool value) const { kparts__part_sender_isbase = value; }
    inline void setKParts__Part_SenderSignalIndex_IsBase(bool value) const { kparts__part_sendersignalindex_isbase = value; }
    inline void setKParts__Part_Receivers_IsBase(bool value) const { kparts__part_receivers_isbase = value; }
    inline void setKParts__Part_IsSignalConnected_IsBase(bool value) const { kparts__part_issignalconnected_isbase = value; }
    inline void setKParts__Part_StandardsXmlFileLocation_IsBase(bool value) const { kparts__part_standardsxmlfilelocation_isbase = value; }
    inline void setKParts__Part_LoadStandardsXmlFile_IsBase(bool value) const { kparts__part_loadstandardsxmlfile_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kparts__part_metaobject_isbase) {
            kparts__part_metaobject_isbase = false;
            return KParts__Part::metaObject();
        }
        auto metaobject_cb = kparts__part_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KParts__Part::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kparts__part_metacast_isbase) {
            kparts__part_metacast_isbase = false;
            return KParts__Part::qt_metacast(param1);
        }
        auto metacast_cb = kparts__part_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KParts__Part::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__part_metacall_isbase) {
            kparts__part_metacall_isbase = false;
            return KParts__Part::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kparts__part_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KParts__Part::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() override {
        if (kparts__part_widget_isbase) {
            kparts__part_widget_isbase = false;
            return KParts__Part::widget();
        }
        auto widget_cb = kparts__part_widget_callback;
        if (widget_cb) {
            QWidget* callback_ret = widget_cb();
            return callback_ret;
        }
        return KParts__Part::widget();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setManager(KParts::PartManager* manager) override {
        if (kparts__part_setmanager_isbase) {
            kparts__part_setmanager_isbase = false;
            KParts__Part::setManager(manager);
            return;
        }
        auto setmanager_cb = kparts__part_setmanager_callback;
        if (setmanager_cb) {
            KParts__PartManager* cbval1 = manager;

            setmanager_cb(this, cbval1);
            return;
        }
        KParts__Part::setManager(manager);
    }

    // Virtual method for C ABI access and custom callback
    virtual KParts::Part* hitTest(QWidget* widget, const QPoint& globalPos) override {
        if (kparts__part_hittest_isbase) {
            kparts__part_hittest_isbase = false;
            return KParts__Part::hitTest(widget, globalPos);
        }
        auto hittest_cb = kparts__part_hittest_callback;
        if (hittest_cb) {
            QWidget* cbval1 = widget;
            const QPoint& globalPos_ret = globalPos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&globalPos_ret);

            KParts__Part* callback_ret = hittest_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KParts__Part::hitTest(widget, globalPos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWidget(QWidget* widget) override {
        if (kparts__part_setwidget_isbase) {
            kparts__part_setwidget_isbase = false;
            KParts__Part::setWidget(widget);
            return;
        }
        auto setwidget_cb = kparts__part_setwidget_callback;
        if (setwidget_cb) {
            QWidget* cbval1 = widget;

            setwidget_cb(this, cbval1);
            return;
        }
        KParts__Part::setWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__part_customevent_isbase) {
            kparts__part_customevent_isbase = false;
            KParts__Part::customEvent(event);
            return;
        }
        auto customevent_cb = kparts__part_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KParts__Part::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void partActivateEvent(KParts::PartActivateEvent* event) override {
        if (kparts__part_partactivateevent_isbase) {
            kparts__part_partactivateevent_isbase = false;
            KParts__Part::partActivateEvent(event);
            return;
        }
        auto partactivateevent_cb = kparts__part_partactivateevent_callback;
        if (partactivateevent_cb) {
            KParts__PartActivateEvent* cbval1 = event;

            partactivateevent_cb(this, cbval1);
            return;
        }
        KParts__Part::partActivateEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void guiActivateEvent(KParts::GUIActivateEvent* event) override {
        if (kparts__part_guiactivateevent_isbase) {
            kparts__part_guiactivateevent_isbase = false;
            KParts__Part::guiActivateEvent(event);
            return;
        }
        auto guiactivateevent_cb = kparts__part_guiactivateevent_callback;
        if (guiactivateevent_cb) {
            KParts__GUIActivateEvent* cbval1 = event;

            guiactivateevent_cb(this, cbval1);
            return;
        }
        KParts__Part::guiActivateEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__part_event_isbase) {
            kparts__part_event_isbase = false;
            return KParts__Part::event(event);
        }
        auto event_cb = kparts__part_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KParts__Part::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kparts__part_eventfilter_isbase) {
            kparts__part_eventfilter_isbase = false;
            return KParts__Part::eventFilter(watched, event);
        }
        auto eventfilter_cb = kparts__part_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KParts__Part::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__part_timerevent_isbase) {
            kparts__part_timerevent_isbase = false;
            KParts__Part::timerEvent(event);
            return;
        }
        auto timerevent_cb = kparts__part_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KParts__Part::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__part_childevent_isbase) {
            kparts__part_childevent_isbase = false;
            KParts__Part::childEvent(event);
            return;
        }
        auto childevent_cb = kparts__part_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KParts__Part::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__part_connectnotify_isbase) {
            kparts__part_connectnotify_isbase = false;
            KParts__Part::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kparts__part_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KParts__Part::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__part_disconnectnotify_isbase) {
            kparts__part_disconnectnotify_isbase = false;
            KParts__Part::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kparts__part_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KParts__Part::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* action(const QDomElement& element) const override {
        if (kparts__part_action2_isbase) {
            kparts__part_action2_isbase = false;
            return KParts__Part::action(element);
        }
        auto action2_cb = kparts__part_action2_callback;
        if (action2_cb) {
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval1 = const_cast<QDomElement*>(&element_ret);

            QAction* callback_ret = action2_cb(this, cbval1);
            return callback_ret;
        }
        return KParts__Part::action(element);
    }

    // Virtual method for C ABI access and custom callback
    virtual KActionCollection* actionCollection() const override {
        if (kparts__part_actioncollection_isbase) {
            kparts__part_actioncollection_isbase = false;
            return KParts__Part::actionCollection();
        }
        auto actioncollection_cb = kparts__part_actioncollection_callback;
        if (actioncollection_cb) {
            KActionCollection* callback_ret = actioncollection_cb();
            return callback_ret;
        }
        return KParts__Part::actionCollection();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString componentName() const override {
        if (kparts__part_componentname_isbase) {
            kparts__part_componentname_isbase = false;
            return KParts__Part::componentName();
        }
        auto componentname_cb = kparts__part_componentname_callback;
        if (componentname_cb) {
            const char* callback_ret = componentname_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KParts__Part::componentName();
    }

    // Virtual method for C ABI access and custom callback
    virtual QDomDocument domDocument() const override {
        if (kparts__part_domdocument_isbase) {
            kparts__part_domdocument_isbase = false;
            return KParts__Part::domDocument();
        }
        auto domdocument_cb = kparts__part_domdocument_callback;
        if (domdocument_cb) {
            QDomDocument* callback_ret = domdocument_cb();
            return *callback_ret;
        }
        return KParts__Part::domDocument();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString xmlFile() const override {
        if (kparts__part_xmlfile_isbase) {
            kparts__part_xmlfile_isbase = false;
            return KParts__Part::xmlFile();
        }
        auto xmlfile_cb = kparts__part_xmlfile_callback;
        if (xmlfile_cb) {
            const char* callback_ret = xmlfile_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KParts__Part::xmlFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString localXMLFile() const override {
        if (kparts__part_localxmlfile_isbase) {
            kparts__part_localxmlfile_isbase = false;
            return KParts__Part::localXMLFile();
        }
        auto localxmlfile_cb = kparts__part_localxmlfile_callback;
        if (localxmlfile_cb) {
            const char* callback_ret = localxmlfile_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KParts__Part::localXMLFile();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setComponentName(const QString& componentName, const QString& componentDisplayName) override {
        if (kparts__part_setcomponentname_isbase) {
            kparts__part_setcomponentname_isbase = false;
            KParts__Part::setComponentName(componentName, componentDisplayName);
            return;
        }
        auto setcomponentname_cb = kparts__part_setcomponentname_callback;
        if (setcomponentname_cb) {
            const QString componentName_ret = componentName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray componentName_b = componentName_ret.toUtf8();
            auto componentName_str_len = componentName_b.length();
            const char* componentName_str = static_cast<const char*>(malloc(componentName_str_len + 1));
            memcpy((void*)componentName_str, componentName_b.data(), componentName_str_len);
            ((char*)componentName_str)[componentName_str_len] = '\0';
            const char* cbval1 = componentName_str;
            const QString componentDisplayName_ret = componentDisplayName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray componentDisplayName_b = componentDisplayName_ret.toUtf8();
            auto componentDisplayName_str_len = componentDisplayName_b.length();
            const char* componentDisplayName_str = static_cast<const char*>(malloc(componentDisplayName_str_len + 1));
            memcpy((void*)componentDisplayName_str, componentDisplayName_b.data(), componentDisplayName_str_len);
            ((char*)componentDisplayName_str)[componentDisplayName_str_len] = '\0';
            const char* cbval2 = componentDisplayName_str;

            setcomponentname_cb(this, cbval1, cbval2);
            libqt_free(componentName_str);
            libqt_free(componentDisplayName_str);
            return;
        }
        KParts__Part::setComponentName(componentName, componentDisplayName);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXMLFile(const QString& file, bool merge, bool setXMLDoc) override {
        if (kparts__part_setxmlfile_isbase) {
            kparts__part_setxmlfile_isbase = false;
            KParts__Part::setXMLFile(file, merge, setXMLDoc);
            return;
        }
        auto setxmlfile_cb = kparts__part_setxmlfile_callback;
        if (setxmlfile_cb) {
            const QString file_ret = file;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray file_b = file_ret.toUtf8();
            auto file_str_len = file_b.length();
            const char* file_str = static_cast<const char*>(malloc(file_str_len + 1));
            memcpy((void*)file_str, file_b.data(), file_str_len);
            ((char*)file_str)[file_str_len] = '\0';
            const char* cbval1 = file_str;
            bool cbval2 = merge;
            bool cbval3 = setXMLDoc;

            setxmlfile_cb(this, cbval1, cbval2, cbval3);
            libqt_free(file_str);
            return;
        }
        KParts__Part::setXMLFile(file, merge, setXMLDoc);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLocalXMLFile(const QString& file) override {
        if (kparts__part_setlocalxmlfile_isbase) {
            kparts__part_setlocalxmlfile_isbase = false;
            KParts__Part::setLocalXMLFile(file);
            return;
        }
        auto setlocalxmlfile_cb = kparts__part_setlocalxmlfile_callback;
        if (setlocalxmlfile_cb) {
            const QString file_ret = file;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray file_b = file_ret.toUtf8();
            auto file_str_len = file_b.length();
            const char* file_str = static_cast<const char*>(malloc(file_str_len + 1));
            memcpy((void*)file_str, file_b.data(), file_str_len);
            ((char*)file_str)[file_str_len] = '\0';
            const char* cbval1 = file_str;

            setlocalxmlfile_cb(this, cbval1);
            libqt_free(file_str);
            return;
        }
        KParts__Part::setLocalXMLFile(file);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXML(const QString& document, bool merge) override {
        if (kparts__part_setxml_isbase) {
            kparts__part_setxml_isbase = false;
            KParts__Part::setXML(document, merge);
            return;
        }
        auto setxml_cb = kparts__part_setxml_callback;
        if (setxml_cb) {
            const QString document_ret = document;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray document_b = document_ret.toUtf8();
            auto document_str_len = document_b.length();
            const char* document_str = static_cast<const char*>(malloc(document_str_len + 1));
            memcpy((void*)document_str, document_b.data(), document_str_len);
            ((char*)document_str)[document_str_len] = '\0';
            const char* cbval1 = document_str;
            bool cbval2 = merge;

            setxml_cb(this, cbval1, cbval2);
            libqt_free(document_str);
            return;
        }
        KParts__Part::setXML(document, merge);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDOMDocument(const QDomDocument& document, bool merge) override {
        if (kparts__part_setdomdocument_isbase) {
            kparts__part_setdomdocument_isbase = false;
            KParts__Part::setDOMDocument(document, merge);
            return;
        }
        auto setdomdocument_cb = kparts__part_setdomdocument_callback;
        if (setdomdocument_cb) {
            const QDomDocument& document_ret = document;
            // Cast returned reference into pointer
            QDomDocument* cbval1 = const_cast<QDomDocument*>(&document_ret);
            bool cbval2 = merge;

            setdomdocument_cb(this, cbval1, cbval2);
            return;
        }
        KParts__Part::setDOMDocument(document, merge);
    }

    // Virtual method for C ABI access and custom callback
    virtual void stateChanged(const QString& newstate, KXMLGUIClient::ReverseStateChange reverse) override {
        if (kparts__part_statechanged_isbase) {
            kparts__part_statechanged_isbase = false;
            KParts__Part::stateChanged(newstate, reverse);
            return;
        }
        auto statechanged_cb = kparts__part_statechanged_callback;
        if (statechanged_cb) {
            const QString newstate_ret = newstate;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray newstate_b = newstate_ret.toUtf8();
            auto newstate_str_len = newstate_b.length();
            const char* newstate_str = static_cast<const char*>(malloc(newstate_str_len + 1));
            memcpy((void*)newstate_str, newstate_b.data(), newstate_str_len);
            ((char*)newstate_str)[newstate_str_len] = '\0';
            const char* cbval1 = newstate_str;
            int cbval2 = static_cast<int>(reverse);

            statechanged_cb(this, cbval1, cbval2);
            libqt_free(newstate_str);
            return;
        }
        KParts__Part::stateChanged(newstate, reverse);
    }

    // Virtual method for C ABI access and custom callback
    QWidget* hostContainer(const QString& containerName) {
        if (kparts__part_hostcontainer_isbase) {
            kparts__part_hostcontainer_isbase = false;
            return KParts__Part::hostContainer(containerName);
        }
        auto hostcontainer_cb = kparts__part_hostcontainer_callback;
        if (hostcontainer_cb) {
            const QString containerName_ret = containerName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray containerName_b = containerName_ret.toUtf8();
            auto containerName_str_len = containerName_b.length();
            const char* containerName_str = static_cast<const char*>(malloc(containerName_str_len + 1));
            memcpy((void*)containerName_str, containerName_b.data(), containerName_str_len);
            ((char*)containerName_str)[containerName_str_len] = '\0';
            const char* cbval1 = containerName_str;

            QWidget* callback_ret = hostcontainer_cb(this, cbval1);
            libqt_free(containerName_str);
            return callback_ret;
        }
        return KParts__Part::hostContainer(containerName);
    }

    // Virtual method for C ABI access and custom callback
    void slotWidgetDestroyed() {
        if (kparts__part_slotwidgetdestroyed_isbase) {
            kparts__part_slotwidgetdestroyed_isbase = false;
            KParts__Part::slotWidgetDestroyed();
            return;
        }
        auto slotwidgetdestroyed_cb = kparts__part_slotwidgetdestroyed_callback;
        if (slotwidgetdestroyed_cb) {
            slotwidgetdestroyed_cb();
            return;
        }
        KParts__Part::slotWidgetDestroyed();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kparts__part_sender_isbase) {
            kparts__part_sender_isbase = false;
            return KParts__Part::sender();
        }
        auto sender_cb = kparts__part_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KParts__Part::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kparts__part_sendersignalindex_isbase) {
            kparts__part_sendersignalindex_isbase = false;
            return KParts__Part::senderSignalIndex();
        }
        auto sendersignalindex_cb = kparts__part_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KParts__Part::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kparts__part_receivers_isbase) {
            kparts__part_receivers_isbase = false;
            return KParts__Part::receivers(signal);
        }
        auto receivers_cb = kparts__part_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KParts__Part::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kparts__part_issignalconnected_isbase) {
            kparts__part_issignalconnected_isbase = false;
            return KParts__Part::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kparts__part_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KParts__Part::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    QString standardsXmlFileLocation() {
        if (kparts__part_standardsxmlfilelocation_isbase) {
            kparts__part_standardsxmlfilelocation_isbase = false;
            return KParts__Part::standardsXmlFileLocation();
        }
        auto standardsxmlfilelocation_cb = kparts__part_standardsxmlfilelocation_callback;
        if (standardsxmlfilelocation_cb) {
            const char* callback_ret = standardsxmlfilelocation_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KParts__Part::standardsXmlFileLocation();
    }

    // Virtual method for C ABI access and custom callback
    void loadStandardsXmlFile() {
        if (kparts__part_loadstandardsxmlfile_isbase) {
            kparts__part_loadstandardsxmlfile_isbase = false;
            KParts__Part::loadStandardsXmlFile();
            return;
        }
        auto loadstandardsxmlfile_cb = kparts__part_loadstandardsxmlfile_callback;
        if (loadstandardsxmlfile_cb) {
            loadstandardsxmlfile_cb();
            return;
        }
        KParts__Part::loadStandardsXmlFile();
    }

    // Friend functions
    friend void KParts__Part_SetWidget(KParts::Part* self, QWidget* widget);
    friend void KParts__Part_SuperSetWidget(KParts::Part* self, QWidget* widget);
    friend void KParts__Part_CustomEvent(KParts::Part* self, QEvent* event);
    friend void KParts__Part_SuperCustomEvent(KParts::Part* self, QEvent* event);
    friend void KParts__Part_PartActivateEvent(KParts::Part* self, KParts__PartActivateEvent* event);
    friend void KParts__Part_SuperPartActivateEvent(KParts::Part* self, KParts__PartActivateEvent* event);
    friend void KParts__Part_GuiActivateEvent(KParts::Part* self, KParts__GUIActivateEvent* event);
    friend void KParts__Part_SuperGuiActivateEvent(KParts::Part* self, KParts__GUIActivateEvent* event);
    friend void KParts__Part_TimerEvent(KParts::Part* self, QTimerEvent* event);
    friend void KParts__Part_SuperTimerEvent(KParts::Part* self, QTimerEvent* event);
    friend void KParts__Part_ChildEvent(KParts::Part* self, QChildEvent* event);
    friend void KParts__Part_SuperChildEvent(KParts::Part* self, QChildEvent* event);
    friend void KParts__Part_ConnectNotify(KParts::Part* self, const QMetaMethod* signal);
    friend void KParts__Part_SuperConnectNotify(KParts::Part* self, const QMetaMethod* signal);
    friend void KParts__Part_DisconnectNotify(KParts::Part* self, const QMetaMethod* signal);
    friend void KParts__Part_SuperDisconnectNotify(KParts::Part* self, const QMetaMethod* signal);
    friend void KParts__Part_SetComponentName(KParts::Part* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KParts__Part_SuperSetComponentName(KParts::Part* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KParts__Part_SetXMLFile(KParts::Part* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KParts__Part_SuperSetXMLFile(KParts::Part* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KParts__Part_SetLocalXMLFile(KParts::Part* self, const libqt_string file);
    friend void KParts__Part_SuperSetLocalXMLFile(KParts::Part* self, const libqt_string file);
    friend void KParts__Part_SetXML(KParts::Part* self, const libqt_string document, bool merge);
    friend void KParts__Part_SuperSetXML(KParts::Part* self, const libqt_string document, bool merge);
    friend void KParts__Part_SetDOMDocument(KParts::Part* self, const QDomDocument* document, bool merge);
    friend void KParts__Part_SuperSetDOMDocument(KParts::Part* self, const QDomDocument* document, bool merge);
    friend void KParts__Part_StateChanged(KParts::Part* self, const libqt_string newstate, int reverse);
    friend void KParts__Part_SuperStateChanged(KParts::Part* self, const libqt_string newstate, int reverse);
    friend QWidget* KParts__Part_HostContainer(KParts::Part* self, const libqt_string containerName);
    friend QWidget* KParts__Part_SuperHostContainer(KParts::Part* self, const libqt_string containerName);
    friend void KParts__Part_SlotWidgetDestroyed(KParts::Part* self);
    friend void KParts__Part_SuperSlotWidgetDestroyed(KParts::Part* self);
    friend QObject* KParts__Part_Sender(const KParts::Part* self);
    friend QObject* KParts__Part_SuperSender(const KParts::Part* self);
    friend int KParts__Part_SenderSignalIndex(const KParts::Part* self);
    friend int KParts__Part_SuperSenderSignalIndex(const KParts::Part* self);
    friend int KParts__Part_Receivers(const KParts::Part* self, const char* signal);
    friend int KParts__Part_SuperReceivers(const KParts::Part* self, const char* signal);
    friend bool KParts__Part_IsSignalConnected(const KParts::Part* self, const QMetaMethod* signal);
    friend bool KParts__Part_SuperIsSignalConnected(const KParts::Part* self, const QMetaMethod* signal);
    friend libqt_string KParts__Part_StandardsXmlFileLocation(KParts::Part* self);
    friend libqt_string KParts__Part_SuperStandardsXmlFileLocation(KParts::Part* self);
    friend void KParts__Part_LoadStandardsXmlFile(KParts::Part* self);
    friend void KParts__Part_SuperLoadStandardsXmlFile(KParts::Part* self);
};

#endif
