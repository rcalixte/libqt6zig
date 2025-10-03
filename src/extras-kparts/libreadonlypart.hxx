#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBVIRTUALREADONLYPART_H
#define SRC_EXTRAS_KPARTSC_LIBVIRTUALREADONLYPART_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::ReadOnlyPart so that we can call protected methods
class VirtualKPartsReadOnlyPart final : public KParts::ReadOnlyPart {

  public:
    // Virtual class boolean flag
    bool isVirtualKPartsReadOnlyPart = true;

    // Virtual class public types (including callbacks)
    using KParts__ReadOnlyPart_Metacall_Callback = int (*)(KParts__ReadOnlyPart*, int, int, void**);
    using KParts__ReadOnlyPart_OpenUrl_Callback = bool (*)(KParts__ReadOnlyPart*, QUrl*);
    using KParts__ReadOnlyPart_CloseUrl_Callback = bool (*)();
    using KParts__ReadOnlyPart_OpenFile_Callback = bool (*)();
    using KParts__ReadOnlyPart_GuiActivateEvent_Callback = void (*)(KParts__ReadOnlyPart*, KParts__GUIActivateEvent*);
    using KParts__ReadOnlyPart_Widget_Callback = QWidget* (*)();
    using KParts__ReadOnlyPart_SetManager_Callback = void (*)(KParts__ReadOnlyPart*, KParts__PartManager*);
    using KParts__ReadOnlyPart_HitTest_Callback = KParts__Part* (*)(KParts__ReadOnlyPart*, QWidget*, QPoint*);
    using KParts__ReadOnlyPart_SetWidget_Callback = void (*)(KParts__ReadOnlyPart*, QWidget*);
    using KParts__ReadOnlyPart_CustomEvent_Callback = void (*)(KParts__ReadOnlyPart*, QEvent*);
    using KParts__ReadOnlyPart_PartActivateEvent_Callback = void (*)(KParts__ReadOnlyPart*, KParts__PartActivateEvent*);
    using KParts__ReadOnlyPart_Event_Callback = bool (*)(KParts__ReadOnlyPart*, QEvent*);
    using KParts__ReadOnlyPart_EventFilter_Callback = bool (*)(KParts__ReadOnlyPart*, QObject*, QEvent*);
    using KParts__ReadOnlyPart_TimerEvent_Callback = void (*)(KParts__ReadOnlyPart*, QTimerEvent*);
    using KParts__ReadOnlyPart_ChildEvent_Callback = void (*)(KParts__ReadOnlyPart*, QChildEvent*);
    using KParts__ReadOnlyPart_ConnectNotify_Callback = void (*)(KParts__ReadOnlyPart*, QMetaMethod*);
    using KParts__ReadOnlyPart_DisconnectNotify_Callback = void (*)(KParts__ReadOnlyPart*, QMetaMethod*);
    using KParts__ReadOnlyPart_Action2_Callback = QAction* (*)(const KParts__ReadOnlyPart*, QDomElement*);
    using KParts__ReadOnlyPart_ActionCollection_Callback = KActionCollection* (*)();
    using KParts__ReadOnlyPart_ComponentName_Callback = const char* (*)();
    using KParts__ReadOnlyPart_DomDocument_Callback = QDomDocument* (*)();
    using KParts__ReadOnlyPart_XmlFile_Callback = const char* (*)();
    using KParts__ReadOnlyPart_LocalXMLFile_Callback = const char* (*)();
    using KParts__ReadOnlyPart_SetComponentName_Callback = void (*)(KParts__ReadOnlyPart*, libqt_string, libqt_string);
    using KParts__ReadOnlyPart_SetXMLFile_Callback = void (*)(KParts__ReadOnlyPart*, libqt_string, bool, bool);
    using KParts__ReadOnlyPart_SetLocalXMLFile_Callback = void (*)(KParts__ReadOnlyPart*, libqt_string);
    using KParts__ReadOnlyPart_SetXML_Callback = void (*)(KParts__ReadOnlyPart*, libqt_string, bool);
    using KParts__ReadOnlyPart_SetDOMDocument_Callback = void (*)(KParts__ReadOnlyPart*, QDomDocument*, bool);
    using KParts__ReadOnlyPart_StateChanged_Callback = void (*)(KParts__ReadOnlyPart*, libqt_string, int);
    using KParts__ReadOnlyPart_AbortLoad_Callback = void (*)();
    using KParts__ReadOnlyPart_SetUrl_Callback = void (*)(KParts__ReadOnlyPart*, QUrl*);
    using KParts__ReadOnlyPart_LocalFilePath_Callback = const char* (*)();
    using KParts__ReadOnlyPart_SetLocalFilePath_Callback = void (*)(KParts__ReadOnlyPart*, libqt_string);
    using KParts__ReadOnlyPart_HostContainer_Callback = QWidget* (*)(KParts__ReadOnlyPart*, libqt_string);
    using KParts__ReadOnlyPart_SlotWidgetDestroyed_Callback = void (*)();
    using KParts__ReadOnlyPart_Sender_Callback = QObject* (*)();
    using KParts__ReadOnlyPart_SenderSignalIndex_Callback = int (*)();
    using KParts__ReadOnlyPart_Receivers_Callback = int (*)(const KParts__ReadOnlyPart*, const char*);
    using KParts__ReadOnlyPart_IsSignalConnected_Callback = bool (*)(const KParts__ReadOnlyPart*, QMetaMethod*);
    using KParts__ReadOnlyPart_StandardsXmlFileLocation_Callback = const char* (*)();
    using KParts__ReadOnlyPart_LoadStandardsXmlFile_Callback = void (*)();

  protected:
    // Instance callback storage
    KParts__ReadOnlyPart_Metacall_Callback kparts__readonlypart_metacall_callback = nullptr;
    KParts__ReadOnlyPart_OpenUrl_Callback kparts__readonlypart_openurl_callback = nullptr;
    KParts__ReadOnlyPart_CloseUrl_Callback kparts__readonlypart_closeurl_callback = nullptr;
    KParts__ReadOnlyPart_OpenFile_Callback kparts__readonlypart_openfile_callback = nullptr;
    KParts__ReadOnlyPart_GuiActivateEvent_Callback kparts__readonlypart_guiactivateevent_callback = nullptr;
    KParts__ReadOnlyPart_Widget_Callback kparts__readonlypart_widget_callback = nullptr;
    KParts__ReadOnlyPart_SetManager_Callback kparts__readonlypart_setmanager_callback = nullptr;
    KParts__ReadOnlyPart_HitTest_Callback kparts__readonlypart_hittest_callback = nullptr;
    KParts__ReadOnlyPart_SetWidget_Callback kparts__readonlypart_setwidget_callback = nullptr;
    KParts__ReadOnlyPart_CustomEvent_Callback kparts__readonlypart_customevent_callback = nullptr;
    KParts__ReadOnlyPart_PartActivateEvent_Callback kparts__readonlypart_partactivateevent_callback = nullptr;
    KParts__ReadOnlyPart_Event_Callback kparts__readonlypart_event_callback = nullptr;
    KParts__ReadOnlyPart_EventFilter_Callback kparts__readonlypart_eventfilter_callback = nullptr;
    KParts__ReadOnlyPart_TimerEvent_Callback kparts__readonlypart_timerevent_callback = nullptr;
    KParts__ReadOnlyPart_ChildEvent_Callback kparts__readonlypart_childevent_callback = nullptr;
    KParts__ReadOnlyPart_ConnectNotify_Callback kparts__readonlypart_connectnotify_callback = nullptr;
    KParts__ReadOnlyPart_DisconnectNotify_Callback kparts__readonlypart_disconnectnotify_callback = nullptr;
    KParts__ReadOnlyPart_Action2_Callback kparts__readonlypart_action2_callback = nullptr;
    KParts__ReadOnlyPart_ActionCollection_Callback kparts__readonlypart_actioncollection_callback = nullptr;
    KParts__ReadOnlyPart_ComponentName_Callback kparts__readonlypart_componentname_callback = nullptr;
    KParts__ReadOnlyPart_DomDocument_Callback kparts__readonlypart_domdocument_callback = nullptr;
    KParts__ReadOnlyPart_XmlFile_Callback kparts__readonlypart_xmlfile_callback = nullptr;
    KParts__ReadOnlyPart_LocalXMLFile_Callback kparts__readonlypart_localxmlfile_callback = nullptr;
    KParts__ReadOnlyPart_SetComponentName_Callback kparts__readonlypart_setcomponentname_callback = nullptr;
    KParts__ReadOnlyPart_SetXMLFile_Callback kparts__readonlypart_setxmlfile_callback = nullptr;
    KParts__ReadOnlyPart_SetLocalXMLFile_Callback kparts__readonlypart_setlocalxmlfile_callback = nullptr;
    KParts__ReadOnlyPart_SetXML_Callback kparts__readonlypart_setxml_callback = nullptr;
    KParts__ReadOnlyPart_SetDOMDocument_Callback kparts__readonlypart_setdomdocument_callback = nullptr;
    KParts__ReadOnlyPart_StateChanged_Callback kparts__readonlypart_statechanged_callback = nullptr;
    KParts__ReadOnlyPart_AbortLoad_Callback kparts__readonlypart_abortload_callback = nullptr;
    KParts__ReadOnlyPart_SetUrl_Callback kparts__readonlypart_seturl_callback = nullptr;
    KParts__ReadOnlyPart_LocalFilePath_Callback kparts__readonlypart_localfilepath_callback = nullptr;
    KParts__ReadOnlyPart_SetLocalFilePath_Callback kparts__readonlypart_setlocalfilepath_callback = nullptr;
    KParts__ReadOnlyPart_HostContainer_Callback kparts__readonlypart_hostcontainer_callback = nullptr;
    KParts__ReadOnlyPart_SlotWidgetDestroyed_Callback kparts__readonlypart_slotwidgetdestroyed_callback = nullptr;
    KParts__ReadOnlyPart_Sender_Callback kparts__readonlypart_sender_callback = nullptr;
    KParts__ReadOnlyPart_SenderSignalIndex_Callback kparts__readonlypart_sendersignalindex_callback = nullptr;
    KParts__ReadOnlyPart_Receivers_Callback kparts__readonlypart_receivers_callback = nullptr;
    KParts__ReadOnlyPart_IsSignalConnected_Callback kparts__readonlypart_issignalconnected_callback = nullptr;
    KParts__ReadOnlyPart_StandardsXmlFileLocation_Callback kparts__readonlypart_standardsxmlfilelocation_callback = nullptr;
    KParts__ReadOnlyPart_LoadStandardsXmlFile_Callback kparts__readonlypart_loadstandardsxmlfile_callback = nullptr;

    // Instance base flags
    mutable bool kparts__readonlypart_metacall_isbase = false;
    mutable bool kparts__readonlypart_openurl_isbase = false;
    mutable bool kparts__readonlypart_closeurl_isbase = false;
    mutable bool kparts__readonlypart_openfile_isbase = false;
    mutable bool kparts__readonlypart_guiactivateevent_isbase = false;
    mutable bool kparts__readonlypart_widget_isbase = false;
    mutable bool kparts__readonlypart_setmanager_isbase = false;
    mutable bool kparts__readonlypart_hittest_isbase = false;
    mutable bool kparts__readonlypart_setwidget_isbase = false;
    mutable bool kparts__readonlypart_customevent_isbase = false;
    mutable bool kparts__readonlypart_partactivateevent_isbase = false;
    mutable bool kparts__readonlypart_event_isbase = false;
    mutable bool kparts__readonlypart_eventfilter_isbase = false;
    mutable bool kparts__readonlypart_timerevent_isbase = false;
    mutable bool kparts__readonlypart_childevent_isbase = false;
    mutable bool kparts__readonlypart_connectnotify_isbase = false;
    mutable bool kparts__readonlypart_disconnectnotify_isbase = false;
    mutable bool kparts__readonlypart_action2_isbase = false;
    mutable bool kparts__readonlypart_actioncollection_isbase = false;
    mutable bool kparts__readonlypart_componentname_isbase = false;
    mutable bool kparts__readonlypart_domdocument_isbase = false;
    mutable bool kparts__readonlypart_xmlfile_isbase = false;
    mutable bool kparts__readonlypart_localxmlfile_isbase = false;
    mutable bool kparts__readonlypart_setcomponentname_isbase = false;
    mutable bool kparts__readonlypart_setxmlfile_isbase = false;
    mutable bool kparts__readonlypart_setlocalxmlfile_isbase = false;
    mutable bool kparts__readonlypart_setxml_isbase = false;
    mutable bool kparts__readonlypart_setdomdocument_isbase = false;
    mutable bool kparts__readonlypart_statechanged_isbase = false;
    mutable bool kparts__readonlypart_abortload_isbase = false;
    mutable bool kparts__readonlypart_seturl_isbase = false;
    mutable bool kparts__readonlypart_localfilepath_isbase = false;
    mutable bool kparts__readonlypart_setlocalfilepath_isbase = false;
    mutable bool kparts__readonlypart_hostcontainer_isbase = false;
    mutable bool kparts__readonlypart_slotwidgetdestroyed_isbase = false;
    mutable bool kparts__readonlypart_sender_isbase = false;
    mutable bool kparts__readonlypart_sendersignalindex_isbase = false;
    mutable bool kparts__readonlypart_receivers_isbase = false;
    mutable bool kparts__readonlypart_issignalconnected_isbase = false;
    mutable bool kparts__readonlypart_standardsxmlfilelocation_isbase = false;
    mutable bool kparts__readonlypart_loadstandardsxmlfile_isbase = false;

  public:
    VirtualKPartsReadOnlyPart() : KParts::ReadOnlyPart() {};
    VirtualKPartsReadOnlyPart(QObject* parent) : KParts::ReadOnlyPart(parent) {};
    VirtualKPartsReadOnlyPart(QObject* parent, const KPluginMetaData& data) : KParts::ReadOnlyPart(parent, data) {};

    ~VirtualKPartsReadOnlyPart() {
        kparts__readonlypart_metacall_callback = nullptr;
        kparts__readonlypart_openurl_callback = nullptr;
        kparts__readonlypart_closeurl_callback = nullptr;
        kparts__readonlypart_openfile_callback = nullptr;
        kparts__readonlypart_guiactivateevent_callback = nullptr;
        kparts__readonlypart_widget_callback = nullptr;
        kparts__readonlypart_setmanager_callback = nullptr;
        kparts__readonlypart_hittest_callback = nullptr;
        kparts__readonlypart_setwidget_callback = nullptr;
        kparts__readonlypart_customevent_callback = nullptr;
        kparts__readonlypart_partactivateevent_callback = nullptr;
        kparts__readonlypart_event_callback = nullptr;
        kparts__readonlypart_eventfilter_callback = nullptr;
        kparts__readonlypart_timerevent_callback = nullptr;
        kparts__readonlypart_childevent_callback = nullptr;
        kparts__readonlypart_connectnotify_callback = nullptr;
        kparts__readonlypart_disconnectnotify_callback = nullptr;
        kparts__readonlypart_action2_callback = nullptr;
        kparts__readonlypart_actioncollection_callback = nullptr;
        kparts__readonlypart_componentname_callback = nullptr;
        kparts__readonlypart_domdocument_callback = nullptr;
        kparts__readonlypart_xmlfile_callback = nullptr;
        kparts__readonlypart_localxmlfile_callback = nullptr;
        kparts__readonlypart_setcomponentname_callback = nullptr;
        kparts__readonlypart_setxmlfile_callback = nullptr;
        kparts__readonlypart_setlocalxmlfile_callback = nullptr;
        kparts__readonlypart_setxml_callback = nullptr;
        kparts__readonlypart_setdomdocument_callback = nullptr;
        kparts__readonlypart_statechanged_callback = nullptr;
        kparts__readonlypart_abortload_callback = nullptr;
        kparts__readonlypart_seturl_callback = nullptr;
        kparts__readonlypart_localfilepath_callback = nullptr;
        kparts__readonlypart_setlocalfilepath_callback = nullptr;
        kparts__readonlypart_hostcontainer_callback = nullptr;
        kparts__readonlypart_slotwidgetdestroyed_callback = nullptr;
        kparts__readonlypart_sender_callback = nullptr;
        kparts__readonlypart_sendersignalindex_callback = nullptr;
        kparts__readonlypart_receivers_callback = nullptr;
        kparts__readonlypart_issignalconnected_callback = nullptr;
        kparts__readonlypart_standardsxmlfilelocation_callback = nullptr;
        kparts__readonlypart_loadstandardsxmlfile_callback = nullptr;
    }

    // Callback setters
    inline void setKParts__ReadOnlyPart_Metacall_Callback(KParts__ReadOnlyPart_Metacall_Callback cb) { kparts__readonlypart_metacall_callback = cb; }
    inline void setKParts__ReadOnlyPart_OpenUrl_Callback(KParts__ReadOnlyPart_OpenUrl_Callback cb) { kparts__readonlypart_openurl_callback = cb; }
    inline void setKParts__ReadOnlyPart_CloseUrl_Callback(KParts__ReadOnlyPart_CloseUrl_Callback cb) { kparts__readonlypart_closeurl_callback = cb; }
    inline void setKParts__ReadOnlyPart_OpenFile_Callback(KParts__ReadOnlyPart_OpenFile_Callback cb) { kparts__readonlypart_openfile_callback = cb; }
    inline void setKParts__ReadOnlyPart_GuiActivateEvent_Callback(KParts__ReadOnlyPart_GuiActivateEvent_Callback cb) { kparts__readonlypart_guiactivateevent_callback = cb; }
    inline void setKParts__ReadOnlyPart_Widget_Callback(KParts__ReadOnlyPart_Widget_Callback cb) { kparts__readonlypart_widget_callback = cb; }
    inline void setKParts__ReadOnlyPart_SetManager_Callback(KParts__ReadOnlyPart_SetManager_Callback cb) { kparts__readonlypart_setmanager_callback = cb; }
    inline void setKParts__ReadOnlyPart_HitTest_Callback(KParts__ReadOnlyPart_HitTest_Callback cb) { kparts__readonlypart_hittest_callback = cb; }
    inline void setKParts__ReadOnlyPart_SetWidget_Callback(KParts__ReadOnlyPart_SetWidget_Callback cb) { kparts__readonlypart_setwidget_callback = cb; }
    inline void setKParts__ReadOnlyPart_CustomEvent_Callback(KParts__ReadOnlyPart_CustomEvent_Callback cb) { kparts__readonlypart_customevent_callback = cb; }
    inline void setKParts__ReadOnlyPart_PartActivateEvent_Callback(KParts__ReadOnlyPart_PartActivateEvent_Callback cb) { kparts__readonlypart_partactivateevent_callback = cb; }
    inline void setKParts__ReadOnlyPart_Event_Callback(KParts__ReadOnlyPart_Event_Callback cb) { kparts__readonlypart_event_callback = cb; }
    inline void setKParts__ReadOnlyPart_EventFilter_Callback(KParts__ReadOnlyPart_EventFilter_Callback cb) { kparts__readonlypart_eventfilter_callback = cb; }
    inline void setKParts__ReadOnlyPart_TimerEvent_Callback(KParts__ReadOnlyPart_TimerEvent_Callback cb) { kparts__readonlypart_timerevent_callback = cb; }
    inline void setKParts__ReadOnlyPart_ChildEvent_Callback(KParts__ReadOnlyPart_ChildEvent_Callback cb) { kparts__readonlypart_childevent_callback = cb; }
    inline void setKParts__ReadOnlyPart_ConnectNotify_Callback(KParts__ReadOnlyPart_ConnectNotify_Callback cb) { kparts__readonlypart_connectnotify_callback = cb; }
    inline void setKParts__ReadOnlyPart_DisconnectNotify_Callback(KParts__ReadOnlyPart_DisconnectNotify_Callback cb) { kparts__readonlypart_disconnectnotify_callback = cb; }
    inline void setKParts__ReadOnlyPart_Action2_Callback(KParts__ReadOnlyPart_Action2_Callback cb) { kparts__readonlypart_action2_callback = cb; }
    inline void setKParts__ReadOnlyPart_ActionCollection_Callback(KParts__ReadOnlyPart_ActionCollection_Callback cb) { kparts__readonlypart_actioncollection_callback = cb; }
    inline void setKParts__ReadOnlyPart_ComponentName_Callback(KParts__ReadOnlyPart_ComponentName_Callback cb) { kparts__readonlypart_componentname_callback = cb; }
    inline void setKParts__ReadOnlyPart_DomDocument_Callback(KParts__ReadOnlyPart_DomDocument_Callback cb) { kparts__readonlypart_domdocument_callback = cb; }
    inline void setKParts__ReadOnlyPart_XmlFile_Callback(KParts__ReadOnlyPart_XmlFile_Callback cb) { kparts__readonlypart_xmlfile_callback = cb; }
    inline void setKParts__ReadOnlyPart_LocalXMLFile_Callback(KParts__ReadOnlyPart_LocalXMLFile_Callback cb) { kparts__readonlypart_localxmlfile_callback = cb; }
    inline void setKParts__ReadOnlyPart_SetComponentName_Callback(KParts__ReadOnlyPart_SetComponentName_Callback cb) { kparts__readonlypart_setcomponentname_callback = cb; }
    inline void setKParts__ReadOnlyPart_SetXMLFile_Callback(KParts__ReadOnlyPart_SetXMLFile_Callback cb) { kparts__readonlypart_setxmlfile_callback = cb; }
    inline void setKParts__ReadOnlyPart_SetLocalXMLFile_Callback(KParts__ReadOnlyPart_SetLocalXMLFile_Callback cb) { kparts__readonlypart_setlocalxmlfile_callback = cb; }
    inline void setKParts__ReadOnlyPart_SetXML_Callback(KParts__ReadOnlyPart_SetXML_Callback cb) { kparts__readonlypart_setxml_callback = cb; }
    inline void setKParts__ReadOnlyPart_SetDOMDocument_Callback(KParts__ReadOnlyPart_SetDOMDocument_Callback cb) { kparts__readonlypart_setdomdocument_callback = cb; }
    inline void setKParts__ReadOnlyPart_StateChanged_Callback(KParts__ReadOnlyPart_StateChanged_Callback cb) { kparts__readonlypart_statechanged_callback = cb; }
    inline void setKParts__ReadOnlyPart_AbortLoad_Callback(KParts__ReadOnlyPart_AbortLoad_Callback cb) { kparts__readonlypart_abortload_callback = cb; }
    inline void setKParts__ReadOnlyPart_SetUrl_Callback(KParts__ReadOnlyPart_SetUrl_Callback cb) { kparts__readonlypart_seturl_callback = cb; }
    inline void setKParts__ReadOnlyPart_LocalFilePath_Callback(KParts__ReadOnlyPart_LocalFilePath_Callback cb) { kparts__readonlypart_localfilepath_callback = cb; }
    inline void setKParts__ReadOnlyPart_SetLocalFilePath_Callback(KParts__ReadOnlyPart_SetLocalFilePath_Callback cb) { kparts__readonlypart_setlocalfilepath_callback = cb; }
    inline void setKParts__ReadOnlyPart_HostContainer_Callback(KParts__ReadOnlyPart_HostContainer_Callback cb) { kparts__readonlypart_hostcontainer_callback = cb; }
    inline void setKParts__ReadOnlyPart_SlotWidgetDestroyed_Callback(KParts__ReadOnlyPart_SlotWidgetDestroyed_Callback cb) { kparts__readonlypart_slotwidgetdestroyed_callback = cb; }
    inline void setKParts__ReadOnlyPart_Sender_Callback(KParts__ReadOnlyPart_Sender_Callback cb) { kparts__readonlypart_sender_callback = cb; }
    inline void setKParts__ReadOnlyPart_SenderSignalIndex_Callback(KParts__ReadOnlyPart_SenderSignalIndex_Callback cb) { kparts__readonlypart_sendersignalindex_callback = cb; }
    inline void setKParts__ReadOnlyPart_Receivers_Callback(KParts__ReadOnlyPart_Receivers_Callback cb) { kparts__readonlypart_receivers_callback = cb; }
    inline void setKParts__ReadOnlyPart_IsSignalConnected_Callback(KParts__ReadOnlyPart_IsSignalConnected_Callback cb) { kparts__readonlypart_issignalconnected_callback = cb; }
    inline void setKParts__ReadOnlyPart_StandardsXmlFileLocation_Callback(KParts__ReadOnlyPart_StandardsXmlFileLocation_Callback cb) { kparts__readonlypart_standardsxmlfilelocation_callback = cb; }
    inline void setKParts__ReadOnlyPart_LoadStandardsXmlFile_Callback(KParts__ReadOnlyPart_LoadStandardsXmlFile_Callback cb) { kparts__readonlypart_loadstandardsxmlfile_callback = cb; }

    // Base flag setters
    inline void setKParts__ReadOnlyPart_Metacall_IsBase(bool value) const { kparts__readonlypart_metacall_isbase = value; }
    inline void setKParts__ReadOnlyPart_OpenUrl_IsBase(bool value) const { kparts__readonlypart_openurl_isbase = value; }
    inline void setKParts__ReadOnlyPart_CloseUrl_IsBase(bool value) const { kparts__readonlypart_closeurl_isbase = value; }
    inline void setKParts__ReadOnlyPart_OpenFile_IsBase(bool value) const { kparts__readonlypart_openfile_isbase = value; }
    inline void setKParts__ReadOnlyPart_GuiActivateEvent_IsBase(bool value) const { kparts__readonlypart_guiactivateevent_isbase = value; }
    inline void setKParts__ReadOnlyPart_Widget_IsBase(bool value) const { kparts__readonlypart_widget_isbase = value; }
    inline void setKParts__ReadOnlyPart_SetManager_IsBase(bool value) const { kparts__readonlypart_setmanager_isbase = value; }
    inline void setKParts__ReadOnlyPart_HitTest_IsBase(bool value) const { kparts__readonlypart_hittest_isbase = value; }
    inline void setKParts__ReadOnlyPart_SetWidget_IsBase(bool value) const { kparts__readonlypart_setwidget_isbase = value; }
    inline void setKParts__ReadOnlyPart_CustomEvent_IsBase(bool value) const { kparts__readonlypart_customevent_isbase = value; }
    inline void setKParts__ReadOnlyPart_PartActivateEvent_IsBase(bool value) const { kparts__readonlypart_partactivateevent_isbase = value; }
    inline void setKParts__ReadOnlyPart_Event_IsBase(bool value) const { kparts__readonlypart_event_isbase = value; }
    inline void setKParts__ReadOnlyPart_EventFilter_IsBase(bool value) const { kparts__readonlypart_eventfilter_isbase = value; }
    inline void setKParts__ReadOnlyPart_TimerEvent_IsBase(bool value) const { kparts__readonlypart_timerevent_isbase = value; }
    inline void setKParts__ReadOnlyPart_ChildEvent_IsBase(bool value) const { kparts__readonlypart_childevent_isbase = value; }
    inline void setKParts__ReadOnlyPart_ConnectNotify_IsBase(bool value) const { kparts__readonlypart_connectnotify_isbase = value; }
    inline void setKParts__ReadOnlyPart_DisconnectNotify_IsBase(bool value) const { kparts__readonlypart_disconnectnotify_isbase = value; }
    inline void setKParts__ReadOnlyPart_Action2_IsBase(bool value) const { kparts__readonlypart_action2_isbase = value; }
    inline void setKParts__ReadOnlyPart_ActionCollection_IsBase(bool value) const { kparts__readonlypart_actioncollection_isbase = value; }
    inline void setKParts__ReadOnlyPart_ComponentName_IsBase(bool value) const { kparts__readonlypart_componentname_isbase = value; }
    inline void setKParts__ReadOnlyPart_DomDocument_IsBase(bool value) const { kparts__readonlypart_domdocument_isbase = value; }
    inline void setKParts__ReadOnlyPart_XmlFile_IsBase(bool value) const { kparts__readonlypart_xmlfile_isbase = value; }
    inline void setKParts__ReadOnlyPart_LocalXMLFile_IsBase(bool value) const { kparts__readonlypart_localxmlfile_isbase = value; }
    inline void setKParts__ReadOnlyPart_SetComponentName_IsBase(bool value) const { kparts__readonlypart_setcomponentname_isbase = value; }
    inline void setKParts__ReadOnlyPart_SetXMLFile_IsBase(bool value) const { kparts__readonlypart_setxmlfile_isbase = value; }
    inline void setKParts__ReadOnlyPart_SetLocalXMLFile_IsBase(bool value) const { kparts__readonlypart_setlocalxmlfile_isbase = value; }
    inline void setKParts__ReadOnlyPart_SetXML_IsBase(bool value) const { kparts__readonlypart_setxml_isbase = value; }
    inline void setKParts__ReadOnlyPart_SetDOMDocument_IsBase(bool value) const { kparts__readonlypart_setdomdocument_isbase = value; }
    inline void setKParts__ReadOnlyPart_StateChanged_IsBase(bool value) const { kparts__readonlypart_statechanged_isbase = value; }
    inline void setKParts__ReadOnlyPart_AbortLoad_IsBase(bool value) const { kparts__readonlypart_abortload_isbase = value; }
    inline void setKParts__ReadOnlyPart_SetUrl_IsBase(bool value) const { kparts__readonlypart_seturl_isbase = value; }
    inline void setKParts__ReadOnlyPart_LocalFilePath_IsBase(bool value) const { kparts__readonlypart_localfilepath_isbase = value; }
    inline void setKParts__ReadOnlyPart_SetLocalFilePath_IsBase(bool value) const { kparts__readonlypart_setlocalfilepath_isbase = value; }
    inline void setKParts__ReadOnlyPart_HostContainer_IsBase(bool value) const { kparts__readonlypart_hostcontainer_isbase = value; }
    inline void setKParts__ReadOnlyPart_SlotWidgetDestroyed_IsBase(bool value) const { kparts__readonlypart_slotwidgetdestroyed_isbase = value; }
    inline void setKParts__ReadOnlyPart_Sender_IsBase(bool value) const { kparts__readonlypart_sender_isbase = value; }
    inline void setKParts__ReadOnlyPart_SenderSignalIndex_IsBase(bool value) const { kparts__readonlypart_sendersignalindex_isbase = value; }
    inline void setKParts__ReadOnlyPart_Receivers_IsBase(bool value) const { kparts__readonlypart_receivers_isbase = value; }
    inline void setKParts__ReadOnlyPart_IsSignalConnected_IsBase(bool value) const { kparts__readonlypart_issignalconnected_isbase = value; }
    inline void setKParts__ReadOnlyPart_StandardsXmlFileLocation_IsBase(bool value) const { kparts__readonlypart_standardsxmlfilelocation_isbase = value; }
    inline void setKParts__ReadOnlyPart_LoadStandardsXmlFile_IsBase(bool value) const { kparts__readonlypart_loadstandardsxmlfile_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__readonlypart_metacall_isbase) {
            kparts__readonlypart_metacall_isbase = false;
            return KParts__ReadOnlyPart::qt_metacall(param1, param2, param3);
        } else if (kparts__readonlypart_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kparts__readonlypart_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KParts__ReadOnlyPart::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool openUrl(const QUrl& url) override {
        if (kparts__readonlypart_openurl_isbase) {
            kparts__readonlypart_openurl_isbase = false;
            return KParts__ReadOnlyPart::openUrl(url);
        } else if (kparts__readonlypart_openurl_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            bool callback_ret = kparts__readonlypart_openurl_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__ReadOnlyPart::openUrl(url);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool closeUrl() override {
        if (kparts__readonlypart_closeurl_isbase) {
            kparts__readonlypart_closeurl_isbase = false;
            return KParts__ReadOnlyPart::closeUrl();
        } else if (kparts__readonlypart_closeurl_callback != nullptr) {
            bool callback_ret = kparts__readonlypart_closeurl_callback();
            return callback_ret;
        } else {
            return KParts__ReadOnlyPart::closeUrl();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool openFile() override {
        if (kparts__readonlypart_openfile_isbase) {
            kparts__readonlypart_openfile_isbase = false;
            return KParts__ReadOnlyPart::openFile();
        } else if (kparts__readonlypart_openfile_callback != nullptr) {
            bool callback_ret = kparts__readonlypart_openfile_callback();
            return callback_ret;
        } else {
            return KParts__ReadOnlyPart::openFile();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void guiActivateEvent(KParts::GUIActivateEvent* event) override {
        if (kparts__readonlypart_guiactivateevent_isbase) {
            kparts__readonlypart_guiactivateevent_isbase = false;
            KParts__ReadOnlyPart::guiActivateEvent(event);
        } else if (kparts__readonlypart_guiactivateevent_callback != nullptr) {
            KParts__GUIActivateEvent* cbval1 = event;

            kparts__readonlypart_guiactivateevent_callback(this, cbval1);
        } else {
            KParts__ReadOnlyPart::guiActivateEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() override {
        if (kparts__readonlypart_widget_isbase) {
            kparts__readonlypart_widget_isbase = false;
            return KParts__ReadOnlyPart::widget();
        } else if (kparts__readonlypart_widget_callback != nullptr) {
            QWidget* callback_ret = kparts__readonlypart_widget_callback();
            return callback_ret;
        } else {
            return KParts__ReadOnlyPart::widget();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setManager(KParts::PartManager* manager) override {
        if (kparts__readonlypart_setmanager_isbase) {
            kparts__readonlypart_setmanager_isbase = false;
            KParts__ReadOnlyPart::setManager(manager);
        } else if (kparts__readonlypart_setmanager_callback != nullptr) {
            KParts__PartManager* cbval1 = manager;

            kparts__readonlypart_setmanager_callback(this, cbval1);
        } else {
            KParts__ReadOnlyPart::setManager(manager);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KParts::Part* hitTest(QWidget* widget, const QPoint& globalPos) override {
        if (kparts__readonlypart_hittest_isbase) {
            kparts__readonlypart_hittest_isbase = false;
            return KParts__ReadOnlyPart::hitTest(widget, globalPos);
        } else if (kparts__readonlypart_hittest_callback != nullptr) {
            QWidget* cbval1 = widget;
            const QPoint& globalPos_ret = globalPos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&globalPos_ret);

            KParts__Part* callback_ret = kparts__readonlypart_hittest_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KParts__ReadOnlyPart::hitTest(widget, globalPos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWidget(QWidget* widget) override {
        if (kparts__readonlypart_setwidget_isbase) {
            kparts__readonlypart_setwidget_isbase = false;
            KParts__ReadOnlyPart::setWidget(widget);
        } else if (kparts__readonlypart_setwidget_callback != nullptr) {
            QWidget* cbval1 = widget;

            kparts__readonlypart_setwidget_callback(this, cbval1);
        } else {
            KParts__ReadOnlyPart::setWidget(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__readonlypart_customevent_isbase) {
            kparts__readonlypart_customevent_isbase = false;
            KParts__ReadOnlyPart::customEvent(event);
        } else if (kparts__readonlypart_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kparts__readonlypart_customevent_callback(this, cbval1);
        } else {
            KParts__ReadOnlyPart::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void partActivateEvent(KParts::PartActivateEvent* event) override {
        if (kparts__readonlypart_partactivateevent_isbase) {
            kparts__readonlypart_partactivateevent_isbase = false;
            KParts__ReadOnlyPart::partActivateEvent(event);
        } else if (kparts__readonlypart_partactivateevent_callback != nullptr) {
            KParts__PartActivateEvent* cbval1 = event;

            kparts__readonlypart_partactivateevent_callback(this, cbval1);
        } else {
            KParts__ReadOnlyPart::partActivateEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__readonlypart_event_isbase) {
            kparts__readonlypart_event_isbase = false;
            return KParts__ReadOnlyPart::event(event);
        } else if (kparts__readonlypart_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kparts__readonlypart_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__ReadOnlyPart::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kparts__readonlypart_eventfilter_isbase) {
            kparts__readonlypart_eventfilter_isbase = false;
            return KParts__ReadOnlyPart::eventFilter(watched, event);
        } else if (kparts__readonlypart_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kparts__readonlypart_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KParts__ReadOnlyPart::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__readonlypart_timerevent_isbase) {
            kparts__readonlypart_timerevent_isbase = false;
            KParts__ReadOnlyPart::timerEvent(event);
        } else if (kparts__readonlypart_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kparts__readonlypart_timerevent_callback(this, cbval1);
        } else {
            KParts__ReadOnlyPart::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__readonlypart_childevent_isbase) {
            kparts__readonlypart_childevent_isbase = false;
            KParts__ReadOnlyPart::childEvent(event);
        } else if (kparts__readonlypart_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kparts__readonlypart_childevent_callback(this, cbval1);
        } else {
            KParts__ReadOnlyPart::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__readonlypart_connectnotify_isbase) {
            kparts__readonlypart_connectnotify_isbase = false;
            KParts__ReadOnlyPart::connectNotify(signal);
        } else if (kparts__readonlypart_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kparts__readonlypart_connectnotify_callback(this, cbval1);
        } else {
            KParts__ReadOnlyPart::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__readonlypart_disconnectnotify_isbase) {
            kparts__readonlypart_disconnectnotify_isbase = false;
            KParts__ReadOnlyPart::disconnectNotify(signal);
        } else if (kparts__readonlypart_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kparts__readonlypart_disconnectnotify_callback(this, cbval1);
        } else {
            KParts__ReadOnlyPart::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* action(const QDomElement& element) const override {
        if (kparts__readonlypart_action2_isbase) {
            kparts__readonlypart_action2_isbase = false;
            return KParts__ReadOnlyPart::action(element);
        } else if (kparts__readonlypart_action2_callback != nullptr) {
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval1 = const_cast<QDomElement*>(&element_ret);

            QAction* callback_ret = kparts__readonlypart_action2_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__ReadOnlyPart::action(element);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KActionCollection* actionCollection() const override {
        if (kparts__readonlypart_actioncollection_isbase) {
            kparts__readonlypart_actioncollection_isbase = false;
            return KParts__ReadOnlyPart::actionCollection();
        } else if (kparts__readonlypart_actioncollection_callback != nullptr) {
            KActionCollection* callback_ret = kparts__readonlypart_actioncollection_callback();
            return callback_ret;
        } else {
            return KParts__ReadOnlyPart::actionCollection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString componentName() const override {
        if (kparts__readonlypart_componentname_isbase) {
            kparts__readonlypart_componentname_isbase = false;
            return KParts__ReadOnlyPart::componentName();
        } else if (kparts__readonlypart_componentname_callback != nullptr) {
            const char* callback_ret = kparts__readonlypart_componentname_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KParts__ReadOnlyPart::componentName();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDomDocument domDocument() const override {
        if (kparts__readonlypart_domdocument_isbase) {
            kparts__readonlypart_domdocument_isbase = false;
            return KParts__ReadOnlyPart::domDocument();
        } else if (kparts__readonlypart_domdocument_callback != nullptr) {
            QDomDocument* callback_ret = kparts__readonlypart_domdocument_callback();
            return *callback_ret;
        } else {
            return KParts__ReadOnlyPart::domDocument();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString xmlFile() const override {
        if (kparts__readonlypart_xmlfile_isbase) {
            kparts__readonlypart_xmlfile_isbase = false;
            return KParts__ReadOnlyPart::xmlFile();
        } else if (kparts__readonlypart_xmlfile_callback != nullptr) {
            const char* callback_ret = kparts__readonlypart_xmlfile_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KParts__ReadOnlyPart::xmlFile();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString localXMLFile() const override {
        if (kparts__readonlypart_localxmlfile_isbase) {
            kparts__readonlypart_localxmlfile_isbase = false;
            return KParts__ReadOnlyPart::localXMLFile();
        } else if (kparts__readonlypart_localxmlfile_callback != nullptr) {
            const char* callback_ret = kparts__readonlypart_localxmlfile_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KParts__ReadOnlyPart::localXMLFile();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setComponentName(const QString& componentName, const QString& componentDisplayName) override {
        if (kparts__readonlypart_setcomponentname_isbase) {
            kparts__readonlypart_setcomponentname_isbase = false;
            KParts__ReadOnlyPart::setComponentName(componentName, componentDisplayName);
        } else if (kparts__readonlypart_setcomponentname_callback != nullptr) {
            const QString componentName_ret = componentName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray componentName_b = componentName_ret.toUtf8();
            libqt_string componentName_str;
            componentName_str.len = componentName_b.length();
            componentName_str.data = static_cast<const char*>(malloc(componentName_str.len + 1));
            memcpy((void*)componentName_str.data, componentName_b.data(), componentName_str.len);
            ((char*)componentName_str.data)[componentName_str.len] = '\0';
            libqt_string cbval1 = componentName_str;
            const QString componentDisplayName_ret = componentDisplayName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray componentDisplayName_b = componentDisplayName_ret.toUtf8();
            libqt_string componentDisplayName_str;
            componentDisplayName_str.len = componentDisplayName_b.length();
            componentDisplayName_str.data = static_cast<const char*>(malloc(componentDisplayName_str.len + 1));
            memcpy((void*)componentDisplayName_str.data, componentDisplayName_b.data(), componentDisplayName_str.len);
            ((char*)componentDisplayName_str.data)[componentDisplayName_str.len] = '\0';
            libqt_string cbval2 = componentDisplayName_str;

            kparts__readonlypart_setcomponentname_callback(this, cbval1, cbval2);
        } else {
            KParts__ReadOnlyPart::setComponentName(componentName, componentDisplayName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXMLFile(const QString& file, bool merge, bool setXMLDoc) override {
        if (kparts__readonlypart_setxmlfile_isbase) {
            kparts__readonlypart_setxmlfile_isbase = false;
            KParts__ReadOnlyPart::setXMLFile(file, merge, setXMLDoc);
        } else if (kparts__readonlypart_setxmlfile_callback != nullptr) {
            const QString file_ret = file;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray file_b = file_ret.toUtf8();
            libqt_string file_str;
            file_str.len = file_b.length();
            file_str.data = static_cast<const char*>(malloc(file_str.len + 1));
            memcpy((void*)file_str.data, file_b.data(), file_str.len);
            ((char*)file_str.data)[file_str.len] = '\0';
            libqt_string cbval1 = file_str;
            bool cbval2 = merge;
            bool cbval3 = setXMLDoc;

            kparts__readonlypart_setxmlfile_callback(this, cbval1, cbval2, cbval3);
        } else {
            KParts__ReadOnlyPart::setXMLFile(file, merge, setXMLDoc);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLocalXMLFile(const QString& file) override {
        if (kparts__readonlypart_setlocalxmlfile_isbase) {
            kparts__readonlypart_setlocalxmlfile_isbase = false;
            KParts__ReadOnlyPart::setLocalXMLFile(file);
        } else if (kparts__readonlypart_setlocalxmlfile_callback != nullptr) {
            const QString file_ret = file;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray file_b = file_ret.toUtf8();
            libqt_string file_str;
            file_str.len = file_b.length();
            file_str.data = static_cast<const char*>(malloc(file_str.len + 1));
            memcpy((void*)file_str.data, file_b.data(), file_str.len);
            ((char*)file_str.data)[file_str.len] = '\0';
            libqt_string cbval1 = file_str;

            kparts__readonlypart_setlocalxmlfile_callback(this, cbval1);
        } else {
            KParts__ReadOnlyPart::setLocalXMLFile(file);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXML(const QString& document, bool merge) override {
        if (kparts__readonlypart_setxml_isbase) {
            kparts__readonlypart_setxml_isbase = false;
            KParts__ReadOnlyPart::setXML(document, merge);
        } else if (kparts__readonlypart_setxml_callback != nullptr) {
            const QString document_ret = document;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray document_b = document_ret.toUtf8();
            libqt_string document_str;
            document_str.len = document_b.length();
            document_str.data = static_cast<const char*>(malloc(document_str.len + 1));
            memcpy((void*)document_str.data, document_b.data(), document_str.len);
            ((char*)document_str.data)[document_str.len] = '\0';
            libqt_string cbval1 = document_str;
            bool cbval2 = merge;

            kparts__readonlypart_setxml_callback(this, cbval1, cbval2);
        } else {
            KParts__ReadOnlyPart::setXML(document, merge);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDOMDocument(const QDomDocument& document, bool merge) override {
        if (kparts__readonlypart_setdomdocument_isbase) {
            kparts__readonlypart_setdomdocument_isbase = false;
            KParts__ReadOnlyPart::setDOMDocument(document, merge);
        } else if (kparts__readonlypart_setdomdocument_callback != nullptr) {
            const QDomDocument& document_ret = document;
            // Cast returned reference into pointer
            QDomDocument* cbval1 = const_cast<QDomDocument*>(&document_ret);
            bool cbval2 = merge;

            kparts__readonlypart_setdomdocument_callback(this, cbval1, cbval2);
        } else {
            KParts__ReadOnlyPart::setDOMDocument(document, merge);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stateChanged(const QString& newstate, KXMLGUIClient::ReverseStateChange reverse) override {
        if (kparts__readonlypart_statechanged_isbase) {
            kparts__readonlypart_statechanged_isbase = false;
            KParts__ReadOnlyPart::stateChanged(newstate, reverse);
        } else if (kparts__readonlypart_statechanged_callback != nullptr) {
            const QString newstate_ret = newstate;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray newstate_b = newstate_ret.toUtf8();
            libqt_string newstate_str;
            newstate_str.len = newstate_b.length();
            newstate_str.data = static_cast<const char*>(malloc(newstate_str.len + 1));
            memcpy((void*)newstate_str.data, newstate_b.data(), newstate_str.len);
            ((char*)newstate_str.data)[newstate_str.len] = '\0';
            libqt_string cbval1 = newstate_str;
            int cbval2 = static_cast<int>(reverse);

            kparts__readonlypart_statechanged_callback(this, cbval1, cbval2);
        } else {
            KParts__ReadOnlyPart::stateChanged(newstate, reverse);
        }
    }

    // Virtual method for C ABI access and custom callback
    void abortLoad() {
        if (kparts__readonlypart_abortload_isbase) {
            kparts__readonlypart_abortload_isbase = false;
            KParts__ReadOnlyPart::abortLoad();
        } else if (kparts__readonlypart_abortload_callback != nullptr) {
            kparts__readonlypart_abortload_callback();
        } else {
            KParts__ReadOnlyPart::abortLoad();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setUrl(const QUrl& url) {
        if (kparts__readonlypart_seturl_isbase) {
            kparts__readonlypart_seturl_isbase = false;
            KParts__ReadOnlyPart::setUrl(url);
        } else if (kparts__readonlypart_seturl_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            kparts__readonlypart_seturl_callback(this, cbval1);
        } else {
            KParts__ReadOnlyPart::setUrl(url);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString localFilePath() const {
        if (kparts__readonlypart_localfilepath_isbase) {
            kparts__readonlypart_localfilepath_isbase = false;
            return KParts__ReadOnlyPart::localFilePath();
        } else if (kparts__readonlypart_localfilepath_callback != nullptr) {
            const char* callback_ret = kparts__readonlypart_localfilepath_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KParts__ReadOnlyPart::localFilePath();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLocalFilePath(const QString& localFilePath) {
        if (kparts__readonlypart_setlocalfilepath_isbase) {
            kparts__readonlypart_setlocalfilepath_isbase = false;
            KParts__ReadOnlyPart::setLocalFilePath(localFilePath);
        } else if (kparts__readonlypart_setlocalfilepath_callback != nullptr) {
            const QString localFilePath_ret = localFilePath;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray localFilePath_b = localFilePath_ret.toUtf8();
            libqt_string localFilePath_str;
            localFilePath_str.len = localFilePath_b.length();
            localFilePath_str.data = static_cast<const char*>(malloc(localFilePath_str.len + 1));
            memcpy((void*)localFilePath_str.data, localFilePath_b.data(), localFilePath_str.len);
            ((char*)localFilePath_str.data)[localFilePath_str.len] = '\0';
            libqt_string cbval1 = localFilePath_str;

            kparts__readonlypart_setlocalfilepath_callback(this, cbval1);
        } else {
            KParts__ReadOnlyPart::setLocalFilePath(localFilePath);
        }
    }

    // Virtual method for C ABI access and custom callback
    QWidget* hostContainer(const QString& containerName) {
        if (kparts__readonlypart_hostcontainer_isbase) {
            kparts__readonlypart_hostcontainer_isbase = false;
            return KParts__ReadOnlyPart::hostContainer(containerName);
        } else if (kparts__readonlypart_hostcontainer_callback != nullptr) {
            const QString containerName_ret = containerName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray containerName_b = containerName_ret.toUtf8();
            libqt_string containerName_str;
            containerName_str.len = containerName_b.length();
            containerName_str.data = static_cast<const char*>(malloc(containerName_str.len + 1));
            memcpy((void*)containerName_str.data, containerName_b.data(), containerName_str.len);
            ((char*)containerName_str.data)[containerName_str.len] = '\0';
            libqt_string cbval1 = containerName_str;

            QWidget* callback_ret = kparts__readonlypart_hostcontainer_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__ReadOnlyPart::hostContainer(containerName);
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotWidgetDestroyed() {
        if (kparts__readonlypart_slotwidgetdestroyed_isbase) {
            kparts__readonlypart_slotwidgetdestroyed_isbase = false;
            KParts__ReadOnlyPart::slotWidgetDestroyed();
        } else if (kparts__readonlypart_slotwidgetdestroyed_callback != nullptr) {
            kparts__readonlypart_slotwidgetdestroyed_callback();
        } else {
            KParts__ReadOnlyPart::slotWidgetDestroyed();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kparts__readonlypart_sender_isbase) {
            kparts__readonlypart_sender_isbase = false;
            return KParts__ReadOnlyPart::sender();
        } else if (kparts__readonlypart_sender_callback != nullptr) {
            QObject* callback_ret = kparts__readonlypart_sender_callback();
            return callback_ret;
        } else {
            return KParts__ReadOnlyPart::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kparts__readonlypart_sendersignalindex_isbase) {
            kparts__readonlypart_sendersignalindex_isbase = false;
            return KParts__ReadOnlyPart::senderSignalIndex();
        } else if (kparts__readonlypart_sendersignalindex_callback != nullptr) {
            int callback_ret = kparts__readonlypart_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KParts__ReadOnlyPart::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kparts__readonlypart_receivers_isbase) {
            kparts__readonlypart_receivers_isbase = false;
            return KParts__ReadOnlyPart::receivers(signal);
        } else if (kparts__readonlypart_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kparts__readonlypart_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KParts__ReadOnlyPart::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kparts__readonlypart_issignalconnected_isbase) {
            kparts__readonlypart_issignalconnected_isbase = false;
            return KParts__ReadOnlyPart::isSignalConnected(signal);
        } else if (kparts__readonlypart_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kparts__readonlypart_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__ReadOnlyPart::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString standardsXmlFileLocation() {
        if (kparts__readonlypart_standardsxmlfilelocation_isbase) {
            kparts__readonlypart_standardsxmlfilelocation_isbase = false;
            return KParts__ReadOnlyPart::standardsXmlFileLocation();
        } else if (kparts__readonlypart_standardsxmlfilelocation_callback != nullptr) {
            const char* callback_ret = kparts__readonlypart_standardsxmlfilelocation_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KParts__ReadOnlyPart::standardsXmlFileLocation();
        }
    }

    // Virtual method for C ABI access and custom callback
    void loadStandardsXmlFile() {
        if (kparts__readonlypart_loadstandardsxmlfile_isbase) {
            kparts__readonlypart_loadstandardsxmlfile_isbase = false;
            KParts__ReadOnlyPart::loadStandardsXmlFile();
        } else if (kparts__readonlypart_loadstandardsxmlfile_callback != nullptr) {
            kparts__readonlypart_loadstandardsxmlfile_callback();
        } else {
            KParts__ReadOnlyPart::loadStandardsXmlFile();
        }
    }

    // Friend functions
    friend bool KParts__ReadOnlyPart_OpenFile(KParts::ReadOnlyPart* self);
    friend bool KParts__ReadOnlyPart_QBaseOpenFile(KParts::ReadOnlyPart* self);
    friend void KParts__ReadOnlyPart_GuiActivateEvent(KParts::ReadOnlyPart* self, KParts__GUIActivateEvent* event);
    friend void KParts__ReadOnlyPart_QBaseGuiActivateEvent(KParts::ReadOnlyPart* self, KParts__GUIActivateEvent* event);
    friend void KParts__ReadOnlyPart_SetWidget(KParts::ReadOnlyPart* self, QWidget* widget);
    friend void KParts__ReadOnlyPart_QBaseSetWidget(KParts::ReadOnlyPart* self, QWidget* widget);
    friend void KParts__ReadOnlyPart_CustomEvent(KParts::ReadOnlyPart* self, QEvent* event);
    friend void KParts__ReadOnlyPart_QBaseCustomEvent(KParts::ReadOnlyPart* self, QEvent* event);
    friend void KParts__ReadOnlyPart_PartActivateEvent(KParts::ReadOnlyPart* self, KParts__PartActivateEvent* event);
    friend void KParts__ReadOnlyPart_QBasePartActivateEvent(KParts::ReadOnlyPart* self, KParts__PartActivateEvent* event);
    friend void KParts__ReadOnlyPart_TimerEvent(KParts::ReadOnlyPart* self, QTimerEvent* event);
    friend void KParts__ReadOnlyPart_QBaseTimerEvent(KParts::ReadOnlyPart* self, QTimerEvent* event);
    friend void KParts__ReadOnlyPart_ChildEvent(KParts::ReadOnlyPart* self, QChildEvent* event);
    friend void KParts__ReadOnlyPart_QBaseChildEvent(KParts::ReadOnlyPart* self, QChildEvent* event);
    friend void KParts__ReadOnlyPart_ConnectNotify(KParts::ReadOnlyPart* self, const QMetaMethod* signal);
    friend void KParts__ReadOnlyPart_QBaseConnectNotify(KParts::ReadOnlyPart* self, const QMetaMethod* signal);
    friend void KParts__ReadOnlyPart_DisconnectNotify(KParts::ReadOnlyPart* self, const QMetaMethod* signal);
    friend void KParts__ReadOnlyPart_QBaseDisconnectNotify(KParts::ReadOnlyPart* self, const QMetaMethod* signal);
    friend void KParts__ReadOnlyPart_SetComponentName(KParts::ReadOnlyPart* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KParts__ReadOnlyPart_QBaseSetComponentName(KParts::ReadOnlyPart* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KParts__ReadOnlyPart_SetXMLFile(KParts::ReadOnlyPart* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KParts__ReadOnlyPart_QBaseSetXMLFile(KParts::ReadOnlyPart* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KParts__ReadOnlyPart_SetLocalXMLFile(KParts::ReadOnlyPart* self, const libqt_string file);
    friend void KParts__ReadOnlyPart_QBaseSetLocalXMLFile(KParts::ReadOnlyPart* self, const libqt_string file);
    friend void KParts__ReadOnlyPart_SetXML(KParts::ReadOnlyPart* self, const libqt_string document, bool merge);
    friend void KParts__ReadOnlyPart_QBaseSetXML(KParts::ReadOnlyPart* self, const libqt_string document, bool merge);
    friend void KParts__ReadOnlyPart_SetDOMDocument(KParts::ReadOnlyPart* self, const QDomDocument* document, bool merge);
    friend void KParts__ReadOnlyPart_QBaseSetDOMDocument(KParts::ReadOnlyPart* self, const QDomDocument* document, bool merge);
    friend void KParts__ReadOnlyPart_StateChanged(KParts::ReadOnlyPart* self, const libqt_string newstate, int reverse);
    friend void KParts__ReadOnlyPart_QBaseStateChanged(KParts::ReadOnlyPart* self, const libqt_string newstate, int reverse);
    friend void KParts__ReadOnlyPart_AbortLoad(KParts::ReadOnlyPart* self);
    friend void KParts__ReadOnlyPart_QBaseAbortLoad(KParts::ReadOnlyPart* self);
    friend void KParts__ReadOnlyPart_SetUrl(KParts::ReadOnlyPart* self, const QUrl* url);
    friend void KParts__ReadOnlyPart_QBaseSetUrl(KParts::ReadOnlyPart* self, const QUrl* url);
    friend libqt_string KParts__ReadOnlyPart_LocalFilePath(const KParts::ReadOnlyPart* self);
    friend libqt_string KParts__ReadOnlyPart_QBaseLocalFilePath(const KParts::ReadOnlyPart* self);
    friend void KParts__ReadOnlyPart_SetLocalFilePath(KParts::ReadOnlyPart* self, const libqt_string localFilePath);
    friend void KParts__ReadOnlyPart_QBaseSetLocalFilePath(KParts::ReadOnlyPart* self, const libqt_string localFilePath);
    friend QWidget* KParts__ReadOnlyPart_HostContainer(KParts::ReadOnlyPart* self, const libqt_string containerName);
    friend QWidget* KParts__ReadOnlyPart_QBaseHostContainer(KParts::ReadOnlyPart* self, const libqt_string containerName);
    friend void KParts__ReadOnlyPart_SlotWidgetDestroyed(KParts::ReadOnlyPart* self);
    friend void KParts__ReadOnlyPart_QBaseSlotWidgetDestroyed(KParts::ReadOnlyPart* self);
    friend QObject* KParts__ReadOnlyPart_Sender(const KParts::ReadOnlyPart* self);
    friend QObject* KParts__ReadOnlyPart_QBaseSender(const KParts::ReadOnlyPart* self);
    friend int KParts__ReadOnlyPart_SenderSignalIndex(const KParts::ReadOnlyPart* self);
    friend int KParts__ReadOnlyPart_QBaseSenderSignalIndex(const KParts::ReadOnlyPart* self);
    friend int KParts__ReadOnlyPart_Receivers(const KParts::ReadOnlyPart* self, const char* signal);
    friend int KParts__ReadOnlyPart_QBaseReceivers(const KParts::ReadOnlyPart* self, const char* signal);
    friend bool KParts__ReadOnlyPart_IsSignalConnected(const KParts::ReadOnlyPart* self, const QMetaMethod* signal);
    friend bool KParts__ReadOnlyPart_QBaseIsSignalConnected(const KParts::ReadOnlyPart* self, const QMetaMethod* signal);
    friend libqt_string KParts__ReadOnlyPart_StandardsXmlFileLocation(KParts::ReadOnlyPart* self);
    friend libqt_string KParts__ReadOnlyPart_QBaseStandardsXmlFileLocation(KParts::ReadOnlyPart* self);
    friend void KParts__ReadOnlyPart_LoadStandardsXmlFile(KParts::ReadOnlyPart* self);
    friend void KParts__ReadOnlyPart_QBaseLoadStandardsXmlFile(KParts::ReadOnlyPart* self);
};

#endif
