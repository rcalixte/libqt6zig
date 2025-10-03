#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBVIRTUALREADWRITEPART_H
#define SRC_EXTRAS_KPARTSC_LIBVIRTUALREADWRITEPART_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::ReadWritePart so that we can call protected methods
class VirtualKPartsReadWritePart : public KParts::ReadWritePart {

  public:
    // Virtual class boolean flag
    bool isVirtualKPartsReadWritePart = true;

    // Virtual class public types (including callbacks)
    using KParts__ReadWritePart_Metacall_Callback = int (*)(KParts__ReadWritePart*, int, int, void**);
    using KParts__ReadWritePart_SetReadWrite_Callback = void (*)(KParts__ReadWritePart*, bool);
    using KParts__ReadWritePart_QueryClose_Callback = bool (*)();
    using KParts__ReadWritePart_CloseUrl_Callback = bool (*)();
    using KParts__ReadWritePart_CloseUrl2_Callback = bool (*)(KParts__ReadWritePart*, bool);
    using KParts__ReadWritePart_SaveAs_Callback = bool (*)(KParts__ReadWritePart*, QUrl*);
    using KParts__ReadWritePart_SetModified_Callback = void (*)(KParts__ReadWritePart*, bool);
    using KParts__ReadWritePart_Save_Callback = bool (*)();
    using KParts__ReadWritePart_SaveFile_Callback = bool (*)();
    using KParts__ReadWritePart_SaveToUrl_Callback = bool (*)();
    using KParts__ReadWritePart_OpenUrl_Callback = bool (*)(KParts__ReadWritePart*, QUrl*);
    using KParts__ReadWritePart_OpenFile_Callback = bool (*)();
    using KParts__ReadWritePart_GuiActivateEvent_Callback = void (*)(KParts__ReadWritePart*, KParts__GUIActivateEvent*);
    using KParts__ReadWritePart_Widget_Callback = QWidget* (*)();
    using KParts__ReadWritePart_SetManager_Callback = void (*)(KParts__ReadWritePart*, KParts__PartManager*);
    using KParts__ReadWritePart_HitTest_Callback = KParts__Part* (*)(KParts__ReadWritePart*, QWidget*, QPoint*);
    using KParts__ReadWritePart_SetWidget_Callback = void (*)(KParts__ReadWritePart*, QWidget*);
    using KParts__ReadWritePart_CustomEvent_Callback = void (*)(KParts__ReadWritePart*, QEvent*);
    using KParts__ReadWritePart_PartActivateEvent_Callback = void (*)(KParts__ReadWritePart*, KParts__PartActivateEvent*);
    using KParts__ReadWritePart_Event_Callback = bool (*)(KParts__ReadWritePart*, QEvent*);
    using KParts__ReadWritePart_EventFilter_Callback = bool (*)(KParts__ReadWritePart*, QObject*, QEvent*);
    using KParts__ReadWritePart_TimerEvent_Callback = void (*)(KParts__ReadWritePart*, QTimerEvent*);
    using KParts__ReadWritePart_ChildEvent_Callback = void (*)(KParts__ReadWritePart*, QChildEvent*);
    using KParts__ReadWritePart_ConnectNotify_Callback = void (*)(KParts__ReadWritePart*, QMetaMethod*);
    using KParts__ReadWritePart_DisconnectNotify_Callback = void (*)(KParts__ReadWritePart*, QMetaMethod*);
    using KParts__ReadWritePart_Action2_Callback = QAction* (*)(const KParts__ReadWritePart*, QDomElement*);
    using KParts__ReadWritePart_ActionCollection_Callback = KActionCollection* (*)();
    using KParts__ReadWritePart_ComponentName_Callback = const char* (*)();
    using KParts__ReadWritePart_DomDocument_Callback = QDomDocument* (*)();
    using KParts__ReadWritePart_XmlFile_Callback = const char* (*)();
    using KParts__ReadWritePart_LocalXMLFile_Callback = const char* (*)();
    using KParts__ReadWritePart_SetComponentName_Callback = void (*)(KParts__ReadWritePart*, libqt_string, libqt_string);
    using KParts__ReadWritePart_SetXMLFile_Callback = void (*)(KParts__ReadWritePart*, libqt_string, bool, bool);
    using KParts__ReadWritePart_SetLocalXMLFile_Callback = void (*)(KParts__ReadWritePart*, libqt_string);
    using KParts__ReadWritePart_SetXML_Callback = void (*)(KParts__ReadWritePart*, libqt_string, bool);
    using KParts__ReadWritePart_SetDOMDocument_Callback = void (*)(KParts__ReadWritePart*, QDomDocument*, bool);
    using KParts__ReadWritePart_StateChanged_Callback = void (*)(KParts__ReadWritePart*, libqt_string, int);
    using KParts__ReadWritePart_AbortLoad_Callback = void (*)();
    using KParts__ReadWritePart_SetUrl_Callback = void (*)(KParts__ReadWritePart*, QUrl*);
    using KParts__ReadWritePart_LocalFilePath_Callback = const char* (*)();
    using KParts__ReadWritePart_SetLocalFilePath_Callback = void (*)(KParts__ReadWritePart*, libqt_string);
    using KParts__ReadWritePart_HostContainer_Callback = QWidget* (*)(KParts__ReadWritePart*, libqt_string);
    using KParts__ReadWritePart_SlotWidgetDestroyed_Callback = void (*)();
    using KParts__ReadWritePart_Sender_Callback = QObject* (*)();
    using KParts__ReadWritePart_SenderSignalIndex_Callback = int (*)();
    using KParts__ReadWritePart_Receivers_Callback = int (*)(const KParts__ReadWritePart*, const char*);
    using KParts__ReadWritePart_IsSignalConnected_Callback = bool (*)(const KParts__ReadWritePart*, QMetaMethod*);
    using KParts__ReadWritePart_StandardsXmlFileLocation_Callback = const char* (*)();
    using KParts__ReadWritePart_LoadStandardsXmlFile_Callback = void (*)();

  protected:
    // Instance callback storage
    KParts__ReadWritePart_Metacall_Callback kparts__readwritepart_metacall_callback = nullptr;
    KParts__ReadWritePart_SetReadWrite_Callback kparts__readwritepart_setreadwrite_callback = nullptr;
    KParts__ReadWritePart_QueryClose_Callback kparts__readwritepart_queryclose_callback = nullptr;
    KParts__ReadWritePart_CloseUrl_Callback kparts__readwritepart_closeurl_callback = nullptr;
    KParts__ReadWritePart_CloseUrl2_Callback kparts__readwritepart_closeurl2_callback = nullptr;
    KParts__ReadWritePart_SaveAs_Callback kparts__readwritepart_saveas_callback = nullptr;
    KParts__ReadWritePart_SetModified_Callback kparts__readwritepart_setmodified_callback = nullptr;
    KParts__ReadWritePart_Save_Callback kparts__readwritepart_save_callback = nullptr;
    KParts__ReadWritePart_SaveFile_Callback kparts__readwritepart_savefile_callback = nullptr;
    KParts__ReadWritePart_SaveToUrl_Callback kparts__readwritepart_savetourl_callback = nullptr;
    KParts__ReadWritePart_OpenUrl_Callback kparts__readwritepart_openurl_callback = nullptr;
    KParts__ReadWritePart_OpenFile_Callback kparts__readwritepart_openfile_callback = nullptr;
    KParts__ReadWritePart_GuiActivateEvent_Callback kparts__readwritepart_guiactivateevent_callback = nullptr;
    KParts__ReadWritePart_Widget_Callback kparts__readwritepart_widget_callback = nullptr;
    KParts__ReadWritePart_SetManager_Callback kparts__readwritepart_setmanager_callback = nullptr;
    KParts__ReadWritePart_HitTest_Callback kparts__readwritepart_hittest_callback = nullptr;
    KParts__ReadWritePart_SetWidget_Callback kparts__readwritepart_setwidget_callback = nullptr;
    KParts__ReadWritePart_CustomEvent_Callback kparts__readwritepart_customevent_callback = nullptr;
    KParts__ReadWritePart_PartActivateEvent_Callback kparts__readwritepart_partactivateevent_callback = nullptr;
    KParts__ReadWritePart_Event_Callback kparts__readwritepart_event_callback = nullptr;
    KParts__ReadWritePart_EventFilter_Callback kparts__readwritepart_eventfilter_callback = nullptr;
    KParts__ReadWritePart_TimerEvent_Callback kparts__readwritepart_timerevent_callback = nullptr;
    KParts__ReadWritePart_ChildEvent_Callback kparts__readwritepart_childevent_callback = nullptr;
    KParts__ReadWritePart_ConnectNotify_Callback kparts__readwritepart_connectnotify_callback = nullptr;
    KParts__ReadWritePart_DisconnectNotify_Callback kparts__readwritepart_disconnectnotify_callback = nullptr;
    KParts__ReadWritePart_Action2_Callback kparts__readwritepart_action2_callback = nullptr;
    KParts__ReadWritePart_ActionCollection_Callback kparts__readwritepart_actioncollection_callback = nullptr;
    KParts__ReadWritePart_ComponentName_Callback kparts__readwritepart_componentname_callback = nullptr;
    KParts__ReadWritePart_DomDocument_Callback kparts__readwritepart_domdocument_callback = nullptr;
    KParts__ReadWritePart_XmlFile_Callback kparts__readwritepart_xmlfile_callback = nullptr;
    KParts__ReadWritePart_LocalXMLFile_Callback kparts__readwritepart_localxmlfile_callback = nullptr;
    KParts__ReadWritePart_SetComponentName_Callback kparts__readwritepart_setcomponentname_callback = nullptr;
    KParts__ReadWritePart_SetXMLFile_Callback kparts__readwritepart_setxmlfile_callback = nullptr;
    KParts__ReadWritePart_SetLocalXMLFile_Callback kparts__readwritepart_setlocalxmlfile_callback = nullptr;
    KParts__ReadWritePart_SetXML_Callback kparts__readwritepart_setxml_callback = nullptr;
    KParts__ReadWritePart_SetDOMDocument_Callback kparts__readwritepart_setdomdocument_callback = nullptr;
    KParts__ReadWritePart_StateChanged_Callback kparts__readwritepart_statechanged_callback = nullptr;
    KParts__ReadWritePart_AbortLoad_Callback kparts__readwritepart_abortload_callback = nullptr;
    KParts__ReadWritePart_SetUrl_Callback kparts__readwritepart_seturl_callback = nullptr;
    KParts__ReadWritePart_LocalFilePath_Callback kparts__readwritepart_localfilepath_callback = nullptr;
    KParts__ReadWritePart_SetLocalFilePath_Callback kparts__readwritepart_setlocalfilepath_callback = nullptr;
    KParts__ReadWritePart_HostContainer_Callback kparts__readwritepart_hostcontainer_callback = nullptr;
    KParts__ReadWritePart_SlotWidgetDestroyed_Callback kparts__readwritepart_slotwidgetdestroyed_callback = nullptr;
    KParts__ReadWritePart_Sender_Callback kparts__readwritepart_sender_callback = nullptr;
    KParts__ReadWritePart_SenderSignalIndex_Callback kparts__readwritepart_sendersignalindex_callback = nullptr;
    KParts__ReadWritePart_Receivers_Callback kparts__readwritepart_receivers_callback = nullptr;
    KParts__ReadWritePart_IsSignalConnected_Callback kparts__readwritepart_issignalconnected_callback = nullptr;
    KParts__ReadWritePart_StandardsXmlFileLocation_Callback kparts__readwritepart_standardsxmlfilelocation_callback = nullptr;
    KParts__ReadWritePart_LoadStandardsXmlFile_Callback kparts__readwritepart_loadstandardsxmlfile_callback = nullptr;

    // Instance base flags
    mutable bool kparts__readwritepart_metacall_isbase = false;
    mutable bool kparts__readwritepart_setreadwrite_isbase = false;
    mutable bool kparts__readwritepart_queryclose_isbase = false;
    mutable bool kparts__readwritepart_closeurl_isbase = false;
    mutable bool kparts__readwritepart_closeurl2_isbase = false;
    mutable bool kparts__readwritepart_saveas_isbase = false;
    mutable bool kparts__readwritepart_setmodified_isbase = false;
    mutable bool kparts__readwritepart_save_isbase = false;
    mutable bool kparts__readwritepart_savefile_isbase = false;
    mutable bool kparts__readwritepart_savetourl_isbase = false;
    mutable bool kparts__readwritepart_openurl_isbase = false;
    mutable bool kparts__readwritepart_openfile_isbase = false;
    mutable bool kparts__readwritepart_guiactivateevent_isbase = false;
    mutable bool kparts__readwritepart_widget_isbase = false;
    mutable bool kparts__readwritepart_setmanager_isbase = false;
    mutable bool kparts__readwritepart_hittest_isbase = false;
    mutable bool kparts__readwritepart_setwidget_isbase = false;
    mutable bool kparts__readwritepart_customevent_isbase = false;
    mutable bool kparts__readwritepart_partactivateevent_isbase = false;
    mutable bool kparts__readwritepart_event_isbase = false;
    mutable bool kparts__readwritepart_eventfilter_isbase = false;
    mutable bool kparts__readwritepart_timerevent_isbase = false;
    mutable bool kparts__readwritepart_childevent_isbase = false;
    mutable bool kparts__readwritepart_connectnotify_isbase = false;
    mutable bool kparts__readwritepart_disconnectnotify_isbase = false;
    mutable bool kparts__readwritepart_action2_isbase = false;
    mutable bool kparts__readwritepart_actioncollection_isbase = false;
    mutable bool kparts__readwritepart_componentname_isbase = false;
    mutable bool kparts__readwritepart_domdocument_isbase = false;
    mutable bool kparts__readwritepart_xmlfile_isbase = false;
    mutable bool kparts__readwritepart_localxmlfile_isbase = false;
    mutable bool kparts__readwritepart_setcomponentname_isbase = false;
    mutable bool kparts__readwritepart_setxmlfile_isbase = false;
    mutable bool kparts__readwritepart_setlocalxmlfile_isbase = false;
    mutable bool kparts__readwritepart_setxml_isbase = false;
    mutable bool kparts__readwritepart_setdomdocument_isbase = false;
    mutable bool kparts__readwritepart_statechanged_isbase = false;
    mutable bool kparts__readwritepart_abortload_isbase = false;
    mutable bool kparts__readwritepart_seturl_isbase = false;
    mutable bool kparts__readwritepart_localfilepath_isbase = false;
    mutable bool kparts__readwritepart_setlocalfilepath_isbase = false;
    mutable bool kparts__readwritepart_hostcontainer_isbase = false;
    mutable bool kparts__readwritepart_slotwidgetdestroyed_isbase = false;
    mutable bool kparts__readwritepart_sender_isbase = false;
    mutable bool kparts__readwritepart_sendersignalindex_isbase = false;
    mutable bool kparts__readwritepart_receivers_isbase = false;
    mutable bool kparts__readwritepart_issignalconnected_isbase = false;
    mutable bool kparts__readwritepart_standardsxmlfilelocation_isbase = false;
    mutable bool kparts__readwritepart_loadstandardsxmlfile_isbase = false;

  public:
    VirtualKPartsReadWritePart() : KParts::ReadWritePart() {};
    VirtualKPartsReadWritePart(QObject* parent) : KParts::ReadWritePart(parent) {};
    VirtualKPartsReadWritePart(QObject* parent, const KPluginMetaData& data) : KParts::ReadWritePart(parent, data) {};

    ~VirtualKPartsReadWritePart() {
        kparts__readwritepart_metacall_callback = nullptr;
        kparts__readwritepart_setreadwrite_callback = nullptr;
        kparts__readwritepart_queryclose_callback = nullptr;
        kparts__readwritepart_closeurl_callback = nullptr;
        kparts__readwritepart_closeurl2_callback = nullptr;
        kparts__readwritepart_saveas_callback = nullptr;
        kparts__readwritepart_setmodified_callback = nullptr;
        kparts__readwritepart_save_callback = nullptr;
        kparts__readwritepart_savefile_callback = nullptr;
        kparts__readwritepart_savetourl_callback = nullptr;
        kparts__readwritepart_openurl_callback = nullptr;
        kparts__readwritepart_openfile_callback = nullptr;
        kparts__readwritepart_guiactivateevent_callback = nullptr;
        kparts__readwritepart_widget_callback = nullptr;
        kparts__readwritepart_setmanager_callback = nullptr;
        kparts__readwritepart_hittest_callback = nullptr;
        kparts__readwritepart_setwidget_callback = nullptr;
        kparts__readwritepart_customevent_callback = nullptr;
        kparts__readwritepart_partactivateevent_callback = nullptr;
        kparts__readwritepart_event_callback = nullptr;
        kparts__readwritepart_eventfilter_callback = nullptr;
        kparts__readwritepart_timerevent_callback = nullptr;
        kparts__readwritepart_childevent_callback = nullptr;
        kparts__readwritepart_connectnotify_callback = nullptr;
        kparts__readwritepart_disconnectnotify_callback = nullptr;
        kparts__readwritepart_action2_callback = nullptr;
        kparts__readwritepart_actioncollection_callback = nullptr;
        kparts__readwritepart_componentname_callback = nullptr;
        kparts__readwritepart_domdocument_callback = nullptr;
        kparts__readwritepart_xmlfile_callback = nullptr;
        kparts__readwritepart_localxmlfile_callback = nullptr;
        kparts__readwritepart_setcomponentname_callback = nullptr;
        kparts__readwritepart_setxmlfile_callback = nullptr;
        kparts__readwritepart_setlocalxmlfile_callback = nullptr;
        kparts__readwritepart_setxml_callback = nullptr;
        kparts__readwritepart_setdomdocument_callback = nullptr;
        kparts__readwritepart_statechanged_callback = nullptr;
        kparts__readwritepart_abortload_callback = nullptr;
        kparts__readwritepart_seturl_callback = nullptr;
        kparts__readwritepart_localfilepath_callback = nullptr;
        kparts__readwritepart_setlocalfilepath_callback = nullptr;
        kparts__readwritepart_hostcontainer_callback = nullptr;
        kparts__readwritepart_slotwidgetdestroyed_callback = nullptr;
        kparts__readwritepart_sender_callback = nullptr;
        kparts__readwritepart_sendersignalindex_callback = nullptr;
        kparts__readwritepart_receivers_callback = nullptr;
        kparts__readwritepart_issignalconnected_callback = nullptr;
        kparts__readwritepart_standardsxmlfilelocation_callback = nullptr;
        kparts__readwritepart_loadstandardsxmlfile_callback = nullptr;
    }

    // Callback setters
    inline void setKParts__ReadWritePart_Metacall_Callback(KParts__ReadWritePart_Metacall_Callback cb) { kparts__readwritepart_metacall_callback = cb; }
    inline void setKParts__ReadWritePart_SetReadWrite_Callback(KParts__ReadWritePart_SetReadWrite_Callback cb) { kparts__readwritepart_setreadwrite_callback = cb; }
    inline void setKParts__ReadWritePart_QueryClose_Callback(KParts__ReadWritePart_QueryClose_Callback cb) { kparts__readwritepart_queryclose_callback = cb; }
    inline void setKParts__ReadWritePart_CloseUrl_Callback(KParts__ReadWritePart_CloseUrl_Callback cb) { kparts__readwritepart_closeurl_callback = cb; }
    inline void setKParts__ReadWritePart_CloseUrl2_Callback(KParts__ReadWritePart_CloseUrl2_Callback cb) { kparts__readwritepart_closeurl2_callback = cb; }
    inline void setKParts__ReadWritePart_SaveAs_Callback(KParts__ReadWritePart_SaveAs_Callback cb) { kparts__readwritepart_saveas_callback = cb; }
    inline void setKParts__ReadWritePart_SetModified_Callback(KParts__ReadWritePart_SetModified_Callback cb) { kparts__readwritepart_setmodified_callback = cb; }
    inline void setKParts__ReadWritePart_Save_Callback(KParts__ReadWritePart_Save_Callback cb) { kparts__readwritepart_save_callback = cb; }
    inline void setKParts__ReadWritePart_SaveFile_Callback(KParts__ReadWritePart_SaveFile_Callback cb) { kparts__readwritepart_savefile_callback = cb; }
    inline void setKParts__ReadWritePart_SaveToUrl_Callback(KParts__ReadWritePart_SaveToUrl_Callback cb) { kparts__readwritepart_savetourl_callback = cb; }
    inline void setKParts__ReadWritePart_OpenUrl_Callback(KParts__ReadWritePart_OpenUrl_Callback cb) { kparts__readwritepart_openurl_callback = cb; }
    inline void setKParts__ReadWritePart_OpenFile_Callback(KParts__ReadWritePart_OpenFile_Callback cb) { kparts__readwritepart_openfile_callback = cb; }
    inline void setKParts__ReadWritePart_GuiActivateEvent_Callback(KParts__ReadWritePart_GuiActivateEvent_Callback cb) { kparts__readwritepart_guiactivateevent_callback = cb; }
    inline void setKParts__ReadWritePart_Widget_Callback(KParts__ReadWritePart_Widget_Callback cb) { kparts__readwritepart_widget_callback = cb; }
    inline void setKParts__ReadWritePart_SetManager_Callback(KParts__ReadWritePart_SetManager_Callback cb) { kparts__readwritepart_setmanager_callback = cb; }
    inline void setKParts__ReadWritePart_HitTest_Callback(KParts__ReadWritePart_HitTest_Callback cb) { kparts__readwritepart_hittest_callback = cb; }
    inline void setKParts__ReadWritePart_SetWidget_Callback(KParts__ReadWritePart_SetWidget_Callback cb) { kparts__readwritepart_setwidget_callback = cb; }
    inline void setKParts__ReadWritePart_CustomEvent_Callback(KParts__ReadWritePart_CustomEvent_Callback cb) { kparts__readwritepart_customevent_callback = cb; }
    inline void setKParts__ReadWritePart_PartActivateEvent_Callback(KParts__ReadWritePart_PartActivateEvent_Callback cb) { kparts__readwritepart_partactivateevent_callback = cb; }
    inline void setKParts__ReadWritePart_Event_Callback(KParts__ReadWritePart_Event_Callback cb) { kparts__readwritepart_event_callback = cb; }
    inline void setKParts__ReadWritePart_EventFilter_Callback(KParts__ReadWritePart_EventFilter_Callback cb) { kparts__readwritepart_eventfilter_callback = cb; }
    inline void setKParts__ReadWritePart_TimerEvent_Callback(KParts__ReadWritePart_TimerEvent_Callback cb) { kparts__readwritepart_timerevent_callback = cb; }
    inline void setKParts__ReadWritePart_ChildEvent_Callback(KParts__ReadWritePart_ChildEvent_Callback cb) { kparts__readwritepart_childevent_callback = cb; }
    inline void setKParts__ReadWritePart_ConnectNotify_Callback(KParts__ReadWritePart_ConnectNotify_Callback cb) { kparts__readwritepart_connectnotify_callback = cb; }
    inline void setKParts__ReadWritePart_DisconnectNotify_Callback(KParts__ReadWritePart_DisconnectNotify_Callback cb) { kparts__readwritepart_disconnectnotify_callback = cb; }
    inline void setKParts__ReadWritePart_Action2_Callback(KParts__ReadWritePart_Action2_Callback cb) { kparts__readwritepart_action2_callback = cb; }
    inline void setKParts__ReadWritePart_ActionCollection_Callback(KParts__ReadWritePart_ActionCollection_Callback cb) { kparts__readwritepart_actioncollection_callback = cb; }
    inline void setKParts__ReadWritePart_ComponentName_Callback(KParts__ReadWritePart_ComponentName_Callback cb) { kparts__readwritepart_componentname_callback = cb; }
    inline void setKParts__ReadWritePart_DomDocument_Callback(KParts__ReadWritePart_DomDocument_Callback cb) { kparts__readwritepart_domdocument_callback = cb; }
    inline void setKParts__ReadWritePart_XmlFile_Callback(KParts__ReadWritePart_XmlFile_Callback cb) { kparts__readwritepart_xmlfile_callback = cb; }
    inline void setKParts__ReadWritePart_LocalXMLFile_Callback(KParts__ReadWritePart_LocalXMLFile_Callback cb) { kparts__readwritepart_localxmlfile_callback = cb; }
    inline void setKParts__ReadWritePart_SetComponentName_Callback(KParts__ReadWritePart_SetComponentName_Callback cb) { kparts__readwritepart_setcomponentname_callback = cb; }
    inline void setKParts__ReadWritePart_SetXMLFile_Callback(KParts__ReadWritePart_SetXMLFile_Callback cb) { kparts__readwritepart_setxmlfile_callback = cb; }
    inline void setKParts__ReadWritePart_SetLocalXMLFile_Callback(KParts__ReadWritePart_SetLocalXMLFile_Callback cb) { kparts__readwritepart_setlocalxmlfile_callback = cb; }
    inline void setKParts__ReadWritePart_SetXML_Callback(KParts__ReadWritePart_SetXML_Callback cb) { kparts__readwritepart_setxml_callback = cb; }
    inline void setKParts__ReadWritePart_SetDOMDocument_Callback(KParts__ReadWritePart_SetDOMDocument_Callback cb) { kparts__readwritepart_setdomdocument_callback = cb; }
    inline void setKParts__ReadWritePart_StateChanged_Callback(KParts__ReadWritePart_StateChanged_Callback cb) { kparts__readwritepart_statechanged_callback = cb; }
    inline void setKParts__ReadWritePart_AbortLoad_Callback(KParts__ReadWritePart_AbortLoad_Callback cb) { kparts__readwritepart_abortload_callback = cb; }
    inline void setKParts__ReadWritePart_SetUrl_Callback(KParts__ReadWritePart_SetUrl_Callback cb) { kparts__readwritepart_seturl_callback = cb; }
    inline void setKParts__ReadWritePart_LocalFilePath_Callback(KParts__ReadWritePart_LocalFilePath_Callback cb) { kparts__readwritepart_localfilepath_callback = cb; }
    inline void setKParts__ReadWritePart_SetLocalFilePath_Callback(KParts__ReadWritePart_SetLocalFilePath_Callback cb) { kparts__readwritepart_setlocalfilepath_callback = cb; }
    inline void setKParts__ReadWritePart_HostContainer_Callback(KParts__ReadWritePart_HostContainer_Callback cb) { kparts__readwritepart_hostcontainer_callback = cb; }
    inline void setKParts__ReadWritePart_SlotWidgetDestroyed_Callback(KParts__ReadWritePart_SlotWidgetDestroyed_Callback cb) { kparts__readwritepart_slotwidgetdestroyed_callback = cb; }
    inline void setKParts__ReadWritePart_Sender_Callback(KParts__ReadWritePart_Sender_Callback cb) { kparts__readwritepart_sender_callback = cb; }
    inline void setKParts__ReadWritePart_SenderSignalIndex_Callback(KParts__ReadWritePart_SenderSignalIndex_Callback cb) { kparts__readwritepart_sendersignalindex_callback = cb; }
    inline void setKParts__ReadWritePart_Receivers_Callback(KParts__ReadWritePart_Receivers_Callback cb) { kparts__readwritepart_receivers_callback = cb; }
    inline void setKParts__ReadWritePart_IsSignalConnected_Callback(KParts__ReadWritePart_IsSignalConnected_Callback cb) { kparts__readwritepart_issignalconnected_callback = cb; }
    inline void setKParts__ReadWritePart_StandardsXmlFileLocation_Callback(KParts__ReadWritePart_StandardsXmlFileLocation_Callback cb) { kparts__readwritepart_standardsxmlfilelocation_callback = cb; }
    inline void setKParts__ReadWritePart_LoadStandardsXmlFile_Callback(KParts__ReadWritePart_LoadStandardsXmlFile_Callback cb) { kparts__readwritepart_loadstandardsxmlfile_callback = cb; }

    // Base flag setters
    inline void setKParts__ReadWritePart_Metacall_IsBase(bool value) const { kparts__readwritepart_metacall_isbase = value; }
    inline void setKParts__ReadWritePart_SetReadWrite_IsBase(bool value) const { kparts__readwritepart_setreadwrite_isbase = value; }
    inline void setKParts__ReadWritePart_QueryClose_IsBase(bool value) const { kparts__readwritepart_queryclose_isbase = value; }
    inline void setKParts__ReadWritePart_CloseUrl_IsBase(bool value) const { kparts__readwritepart_closeurl_isbase = value; }
    inline void setKParts__ReadWritePart_CloseUrl2_IsBase(bool value) const { kparts__readwritepart_closeurl2_isbase = value; }
    inline void setKParts__ReadWritePart_SaveAs_IsBase(bool value) const { kparts__readwritepart_saveas_isbase = value; }
    inline void setKParts__ReadWritePart_SetModified_IsBase(bool value) const { kparts__readwritepart_setmodified_isbase = value; }
    inline void setKParts__ReadWritePart_Save_IsBase(bool value) const { kparts__readwritepart_save_isbase = value; }
    inline void setKParts__ReadWritePart_SaveFile_IsBase(bool value) const { kparts__readwritepart_savefile_isbase = value; }
    inline void setKParts__ReadWritePart_SaveToUrl_IsBase(bool value) const { kparts__readwritepart_savetourl_isbase = value; }
    inline void setKParts__ReadWritePart_OpenUrl_IsBase(bool value) const { kparts__readwritepart_openurl_isbase = value; }
    inline void setKParts__ReadWritePart_OpenFile_IsBase(bool value) const { kparts__readwritepart_openfile_isbase = value; }
    inline void setKParts__ReadWritePart_GuiActivateEvent_IsBase(bool value) const { kparts__readwritepart_guiactivateevent_isbase = value; }
    inline void setKParts__ReadWritePart_Widget_IsBase(bool value) const { kparts__readwritepart_widget_isbase = value; }
    inline void setKParts__ReadWritePart_SetManager_IsBase(bool value) const { kparts__readwritepart_setmanager_isbase = value; }
    inline void setKParts__ReadWritePart_HitTest_IsBase(bool value) const { kparts__readwritepart_hittest_isbase = value; }
    inline void setKParts__ReadWritePart_SetWidget_IsBase(bool value) const { kparts__readwritepart_setwidget_isbase = value; }
    inline void setKParts__ReadWritePart_CustomEvent_IsBase(bool value) const { kparts__readwritepart_customevent_isbase = value; }
    inline void setKParts__ReadWritePart_PartActivateEvent_IsBase(bool value) const { kparts__readwritepart_partactivateevent_isbase = value; }
    inline void setKParts__ReadWritePart_Event_IsBase(bool value) const { kparts__readwritepart_event_isbase = value; }
    inline void setKParts__ReadWritePart_EventFilter_IsBase(bool value) const { kparts__readwritepart_eventfilter_isbase = value; }
    inline void setKParts__ReadWritePart_TimerEvent_IsBase(bool value) const { kparts__readwritepart_timerevent_isbase = value; }
    inline void setKParts__ReadWritePart_ChildEvent_IsBase(bool value) const { kparts__readwritepart_childevent_isbase = value; }
    inline void setKParts__ReadWritePart_ConnectNotify_IsBase(bool value) const { kparts__readwritepart_connectnotify_isbase = value; }
    inline void setKParts__ReadWritePart_DisconnectNotify_IsBase(bool value) const { kparts__readwritepart_disconnectnotify_isbase = value; }
    inline void setKParts__ReadWritePart_Action2_IsBase(bool value) const { kparts__readwritepart_action2_isbase = value; }
    inline void setKParts__ReadWritePart_ActionCollection_IsBase(bool value) const { kparts__readwritepart_actioncollection_isbase = value; }
    inline void setKParts__ReadWritePart_ComponentName_IsBase(bool value) const { kparts__readwritepart_componentname_isbase = value; }
    inline void setKParts__ReadWritePart_DomDocument_IsBase(bool value) const { kparts__readwritepart_domdocument_isbase = value; }
    inline void setKParts__ReadWritePart_XmlFile_IsBase(bool value) const { kparts__readwritepart_xmlfile_isbase = value; }
    inline void setKParts__ReadWritePart_LocalXMLFile_IsBase(bool value) const { kparts__readwritepart_localxmlfile_isbase = value; }
    inline void setKParts__ReadWritePart_SetComponentName_IsBase(bool value) const { kparts__readwritepart_setcomponentname_isbase = value; }
    inline void setKParts__ReadWritePart_SetXMLFile_IsBase(bool value) const { kparts__readwritepart_setxmlfile_isbase = value; }
    inline void setKParts__ReadWritePart_SetLocalXMLFile_IsBase(bool value) const { kparts__readwritepart_setlocalxmlfile_isbase = value; }
    inline void setKParts__ReadWritePart_SetXML_IsBase(bool value) const { kparts__readwritepart_setxml_isbase = value; }
    inline void setKParts__ReadWritePart_SetDOMDocument_IsBase(bool value) const { kparts__readwritepart_setdomdocument_isbase = value; }
    inline void setKParts__ReadWritePart_StateChanged_IsBase(bool value) const { kparts__readwritepart_statechanged_isbase = value; }
    inline void setKParts__ReadWritePart_AbortLoad_IsBase(bool value) const { kparts__readwritepart_abortload_isbase = value; }
    inline void setKParts__ReadWritePart_SetUrl_IsBase(bool value) const { kparts__readwritepart_seturl_isbase = value; }
    inline void setKParts__ReadWritePart_LocalFilePath_IsBase(bool value) const { kparts__readwritepart_localfilepath_isbase = value; }
    inline void setKParts__ReadWritePart_SetLocalFilePath_IsBase(bool value) const { kparts__readwritepart_setlocalfilepath_isbase = value; }
    inline void setKParts__ReadWritePart_HostContainer_IsBase(bool value) const { kparts__readwritepart_hostcontainer_isbase = value; }
    inline void setKParts__ReadWritePart_SlotWidgetDestroyed_IsBase(bool value) const { kparts__readwritepart_slotwidgetdestroyed_isbase = value; }
    inline void setKParts__ReadWritePart_Sender_IsBase(bool value) const { kparts__readwritepart_sender_isbase = value; }
    inline void setKParts__ReadWritePart_SenderSignalIndex_IsBase(bool value) const { kparts__readwritepart_sendersignalindex_isbase = value; }
    inline void setKParts__ReadWritePart_Receivers_IsBase(bool value) const { kparts__readwritepart_receivers_isbase = value; }
    inline void setKParts__ReadWritePart_IsSignalConnected_IsBase(bool value) const { kparts__readwritepart_issignalconnected_isbase = value; }
    inline void setKParts__ReadWritePart_StandardsXmlFileLocation_IsBase(bool value) const { kparts__readwritepart_standardsxmlfilelocation_isbase = value; }
    inline void setKParts__ReadWritePart_LoadStandardsXmlFile_IsBase(bool value) const { kparts__readwritepart_loadstandardsxmlfile_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__readwritepart_metacall_isbase) {
            kparts__readwritepart_metacall_isbase = false;
            return KParts__ReadWritePart::qt_metacall(param1, param2, param3);
        } else if (kparts__readwritepart_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kparts__readwritepart_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KParts__ReadWritePart::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadWrite(bool readwrite) override {
        if (kparts__readwritepart_setreadwrite_isbase) {
            kparts__readwritepart_setreadwrite_isbase = false;
            KParts__ReadWritePart::setReadWrite(readwrite);
        } else if (kparts__readwritepart_setreadwrite_callback != nullptr) {
            bool cbval1 = readwrite;

            kparts__readwritepart_setreadwrite_callback(this, cbval1);
        } else {
            KParts__ReadWritePart::setReadWrite(readwrite);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool queryClose() override {
        if (kparts__readwritepart_queryclose_isbase) {
            kparts__readwritepart_queryclose_isbase = false;
            return KParts__ReadWritePart::queryClose();
        } else if (kparts__readwritepart_queryclose_callback != nullptr) {
            bool callback_ret = kparts__readwritepart_queryclose_callback();
            return callback_ret;
        } else {
            return KParts__ReadWritePart::queryClose();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool closeUrl() override {
        if (kparts__readwritepart_closeurl_isbase) {
            kparts__readwritepart_closeurl_isbase = false;
            return KParts__ReadWritePart::closeUrl();
        } else if (kparts__readwritepart_closeurl_callback != nullptr) {
            bool callback_ret = kparts__readwritepart_closeurl_callback();
            return callback_ret;
        } else {
            return KParts__ReadWritePart::closeUrl();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool closeUrl(bool promptToSave) override {
        if (kparts__readwritepart_closeurl2_isbase) {
            kparts__readwritepart_closeurl2_isbase = false;
            return KParts__ReadWritePart::closeUrl(promptToSave);
        } else if (kparts__readwritepart_closeurl2_callback != nullptr) {
            bool cbval1 = promptToSave;

            bool callback_ret = kparts__readwritepart_closeurl2_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__ReadWritePart::closeUrl(promptToSave);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool saveAs(const QUrl& url) override {
        if (kparts__readwritepart_saveas_isbase) {
            kparts__readwritepart_saveas_isbase = false;
            return KParts__ReadWritePart::saveAs(url);
        } else if (kparts__readwritepart_saveas_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            bool callback_ret = kparts__readwritepart_saveas_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__ReadWritePart::saveAs(url);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModified(bool modified) override {
        if (kparts__readwritepart_setmodified_isbase) {
            kparts__readwritepart_setmodified_isbase = false;
            KParts__ReadWritePart::setModified(modified);
        } else if (kparts__readwritepart_setmodified_callback != nullptr) {
            bool cbval1 = modified;

            kparts__readwritepart_setmodified_callback(this, cbval1);
        } else {
            KParts__ReadWritePart::setModified(modified);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool save() override {
        if (kparts__readwritepart_save_isbase) {
            kparts__readwritepart_save_isbase = false;
            return KParts__ReadWritePart::save();
        } else if (kparts__readwritepart_save_callback != nullptr) {
            bool callback_ret = kparts__readwritepart_save_callback();
            return callback_ret;
        } else {
            return KParts__ReadWritePart::save();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool saveFile() override {
        if (kparts__readwritepart_savefile_callback != nullptr) {
            bool callback_ret = kparts__readwritepart_savefile_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool saveToUrl() override {
        if (kparts__readwritepart_savetourl_isbase) {
            kparts__readwritepart_savetourl_isbase = false;
            return KParts__ReadWritePart::saveToUrl();
        } else if (kparts__readwritepart_savetourl_callback != nullptr) {
            bool callback_ret = kparts__readwritepart_savetourl_callback();
            return callback_ret;
        } else {
            return KParts__ReadWritePart::saveToUrl();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool openUrl(const QUrl& url) override {
        if (kparts__readwritepart_openurl_isbase) {
            kparts__readwritepart_openurl_isbase = false;
            return KParts__ReadWritePart::openUrl(url);
        } else if (kparts__readwritepart_openurl_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            bool callback_ret = kparts__readwritepart_openurl_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__ReadWritePart::openUrl(url);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool openFile() override {
        if (kparts__readwritepart_openfile_isbase) {
            kparts__readwritepart_openfile_isbase = false;
            return KParts__ReadWritePart::openFile();
        } else if (kparts__readwritepart_openfile_callback != nullptr) {
            bool callback_ret = kparts__readwritepart_openfile_callback();
            return callback_ret;
        } else {
            return KParts__ReadWritePart::openFile();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void guiActivateEvent(KParts::GUIActivateEvent* event) override {
        if (kparts__readwritepart_guiactivateevent_isbase) {
            kparts__readwritepart_guiactivateevent_isbase = false;
            KParts__ReadWritePart::guiActivateEvent(event);
        } else if (kparts__readwritepart_guiactivateevent_callback != nullptr) {
            KParts__GUIActivateEvent* cbval1 = event;

            kparts__readwritepart_guiactivateevent_callback(this, cbval1);
        } else {
            KParts__ReadWritePart::guiActivateEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() override {
        if (kparts__readwritepart_widget_isbase) {
            kparts__readwritepart_widget_isbase = false;
            return KParts__ReadWritePart::widget();
        } else if (kparts__readwritepart_widget_callback != nullptr) {
            QWidget* callback_ret = kparts__readwritepart_widget_callback();
            return callback_ret;
        } else {
            return KParts__ReadWritePart::widget();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setManager(KParts::PartManager* manager) override {
        if (kparts__readwritepart_setmanager_isbase) {
            kparts__readwritepart_setmanager_isbase = false;
            KParts__ReadWritePart::setManager(manager);
        } else if (kparts__readwritepart_setmanager_callback != nullptr) {
            KParts__PartManager* cbval1 = manager;

            kparts__readwritepart_setmanager_callback(this, cbval1);
        } else {
            KParts__ReadWritePart::setManager(manager);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KParts::Part* hitTest(QWidget* widget, const QPoint& globalPos) override {
        if (kparts__readwritepart_hittest_isbase) {
            kparts__readwritepart_hittest_isbase = false;
            return KParts__ReadWritePart::hitTest(widget, globalPos);
        } else if (kparts__readwritepart_hittest_callback != nullptr) {
            QWidget* cbval1 = widget;
            const QPoint& globalPos_ret = globalPos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&globalPos_ret);

            KParts__Part* callback_ret = kparts__readwritepart_hittest_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KParts__ReadWritePart::hitTest(widget, globalPos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWidget(QWidget* widget) override {
        if (kparts__readwritepart_setwidget_isbase) {
            kparts__readwritepart_setwidget_isbase = false;
            KParts__ReadWritePart::setWidget(widget);
        } else if (kparts__readwritepart_setwidget_callback != nullptr) {
            QWidget* cbval1 = widget;

            kparts__readwritepart_setwidget_callback(this, cbval1);
        } else {
            KParts__ReadWritePart::setWidget(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__readwritepart_customevent_isbase) {
            kparts__readwritepart_customevent_isbase = false;
            KParts__ReadWritePart::customEvent(event);
        } else if (kparts__readwritepart_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kparts__readwritepart_customevent_callback(this, cbval1);
        } else {
            KParts__ReadWritePart::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void partActivateEvent(KParts::PartActivateEvent* event) override {
        if (kparts__readwritepart_partactivateevent_isbase) {
            kparts__readwritepart_partactivateevent_isbase = false;
            KParts__ReadWritePart::partActivateEvent(event);
        } else if (kparts__readwritepart_partactivateevent_callback != nullptr) {
            KParts__PartActivateEvent* cbval1 = event;

            kparts__readwritepart_partactivateevent_callback(this, cbval1);
        } else {
            KParts__ReadWritePart::partActivateEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__readwritepart_event_isbase) {
            kparts__readwritepart_event_isbase = false;
            return KParts__ReadWritePart::event(event);
        } else if (kparts__readwritepart_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kparts__readwritepart_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__ReadWritePart::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kparts__readwritepart_eventfilter_isbase) {
            kparts__readwritepart_eventfilter_isbase = false;
            return KParts__ReadWritePart::eventFilter(watched, event);
        } else if (kparts__readwritepart_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kparts__readwritepart_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KParts__ReadWritePart::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__readwritepart_timerevent_isbase) {
            kparts__readwritepart_timerevent_isbase = false;
            KParts__ReadWritePart::timerEvent(event);
        } else if (kparts__readwritepart_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kparts__readwritepart_timerevent_callback(this, cbval1);
        } else {
            KParts__ReadWritePart::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__readwritepart_childevent_isbase) {
            kparts__readwritepart_childevent_isbase = false;
            KParts__ReadWritePart::childEvent(event);
        } else if (kparts__readwritepart_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kparts__readwritepart_childevent_callback(this, cbval1);
        } else {
            KParts__ReadWritePart::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__readwritepart_connectnotify_isbase) {
            kparts__readwritepart_connectnotify_isbase = false;
            KParts__ReadWritePart::connectNotify(signal);
        } else if (kparts__readwritepart_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kparts__readwritepart_connectnotify_callback(this, cbval1);
        } else {
            KParts__ReadWritePart::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__readwritepart_disconnectnotify_isbase) {
            kparts__readwritepart_disconnectnotify_isbase = false;
            KParts__ReadWritePart::disconnectNotify(signal);
        } else if (kparts__readwritepart_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kparts__readwritepart_disconnectnotify_callback(this, cbval1);
        } else {
            KParts__ReadWritePart::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* action(const QDomElement& element) const override {
        if (kparts__readwritepart_action2_isbase) {
            kparts__readwritepart_action2_isbase = false;
            return KParts__ReadWritePart::action(element);
        } else if (kparts__readwritepart_action2_callback != nullptr) {
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval1 = const_cast<QDomElement*>(&element_ret);

            QAction* callback_ret = kparts__readwritepart_action2_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__ReadWritePart::action(element);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KActionCollection* actionCollection() const override {
        if (kparts__readwritepart_actioncollection_isbase) {
            kparts__readwritepart_actioncollection_isbase = false;
            return KParts__ReadWritePart::actionCollection();
        } else if (kparts__readwritepart_actioncollection_callback != nullptr) {
            KActionCollection* callback_ret = kparts__readwritepart_actioncollection_callback();
            return callback_ret;
        } else {
            return KParts__ReadWritePart::actionCollection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString componentName() const override {
        if (kparts__readwritepart_componentname_isbase) {
            kparts__readwritepart_componentname_isbase = false;
            return KParts__ReadWritePart::componentName();
        } else if (kparts__readwritepart_componentname_callback != nullptr) {
            const char* callback_ret = kparts__readwritepart_componentname_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KParts__ReadWritePart::componentName();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDomDocument domDocument() const override {
        if (kparts__readwritepart_domdocument_isbase) {
            kparts__readwritepart_domdocument_isbase = false;
            return KParts__ReadWritePart::domDocument();
        } else if (kparts__readwritepart_domdocument_callback != nullptr) {
            QDomDocument* callback_ret = kparts__readwritepart_domdocument_callback();
            return *callback_ret;
        } else {
            return KParts__ReadWritePart::domDocument();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString xmlFile() const override {
        if (kparts__readwritepart_xmlfile_isbase) {
            kparts__readwritepart_xmlfile_isbase = false;
            return KParts__ReadWritePart::xmlFile();
        } else if (kparts__readwritepart_xmlfile_callback != nullptr) {
            const char* callback_ret = kparts__readwritepart_xmlfile_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KParts__ReadWritePart::xmlFile();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString localXMLFile() const override {
        if (kparts__readwritepart_localxmlfile_isbase) {
            kparts__readwritepart_localxmlfile_isbase = false;
            return KParts__ReadWritePart::localXMLFile();
        } else if (kparts__readwritepart_localxmlfile_callback != nullptr) {
            const char* callback_ret = kparts__readwritepart_localxmlfile_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KParts__ReadWritePart::localXMLFile();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setComponentName(const QString& componentName, const QString& componentDisplayName) override {
        if (kparts__readwritepart_setcomponentname_isbase) {
            kparts__readwritepart_setcomponentname_isbase = false;
            KParts__ReadWritePart::setComponentName(componentName, componentDisplayName);
        } else if (kparts__readwritepart_setcomponentname_callback != nullptr) {
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

            kparts__readwritepart_setcomponentname_callback(this, cbval1, cbval2);
        } else {
            KParts__ReadWritePart::setComponentName(componentName, componentDisplayName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXMLFile(const QString& file, bool merge, bool setXMLDoc) override {
        if (kparts__readwritepart_setxmlfile_isbase) {
            kparts__readwritepart_setxmlfile_isbase = false;
            KParts__ReadWritePart::setXMLFile(file, merge, setXMLDoc);
        } else if (kparts__readwritepart_setxmlfile_callback != nullptr) {
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

            kparts__readwritepart_setxmlfile_callback(this, cbval1, cbval2, cbval3);
        } else {
            KParts__ReadWritePart::setXMLFile(file, merge, setXMLDoc);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLocalXMLFile(const QString& file) override {
        if (kparts__readwritepart_setlocalxmlfile_isbase) {
            kparts__readwritepart_setlocalxmlfile_isbase = false;
            KParts__ReadWritePart::setLocalXMLFile(file);
        } else if (kparts__readwritepart_setlocalxmlfile_callback != nullptr) {
            const QString file_ret = file;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray file_b = file_ret.toUtf8();
            libqt_string file_str;
            file_str.len = file_b.length();
            file_str.data = static_cast<const char*>(malloc(file_str.len + 1));
            memcpy((void*)file_str.data, file_b.data(), file_str.len);
            ((char*)file_str.data)[file_str.len] = '\0';
            libqt_string cbval1 = file_str;

            kparts__readwritepart_setlocalxmlfile_callback(this, cbval1);
        } else {
            KParts__ReadWritePart::setLocalXMLFile(file);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXML(const QString& document, bool merge) override {
        if (kparts__readwritepart_setxml_isbase) {
            kparts__readwritepart_setxml_isbase = false;
            KParts__ReadWritePart::setXML(document, merge);
        } else if (kparts__readwritepart_setxml_callback != nullptr) {
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

            kparts__readwritepart_setxml_callback(this, cbval1, cbval2);
        } else {
            KParts__ReadWritePart::setXML(document, merge);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDOMDocument(const QDomDocument& document, bool merge) override {
        if (kparts__readwritepart_setdomdocument_isbase) {
            kparts__readwritepart_setdomdocument_isbase = false;
            KParts__ReadWritePart::setDOMDocument(document, merge);
        } else if (kparts__readwritepart_setdomdocument_callback != nullptr) {
            const QDomDocument& document_ret = document;
            // Cast returned reference into pointer
            QDomDocument* cbval1 = const_cast<QDomDocument*>(&document_ret);
            bool cbval2 = merge;

            kparts__readwritepart_setdomdocument_callback(this, cbval1, cbval2);
        } else {
            KParts__ReadWritePart::setDOMDocument(document, merge);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stateChanged(const QString& newstate, KXMLGUIClient::ReverseStateChange reverse) override {
        if (kparts__readwritepart_statechanged_isbase) {
            kparts__readwritepart_statechanged_isbase = false;
            KParts__ReadWritePart::stateChanged(newstate, reverse);
        } else if (kparts__readwritepart_statechanged_callback != nullptr) {
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

            kparts__readwritepart_statechanged_callback(this, cbval1, cbval2);
        } else {
            KParts__ReadWritePart::stateChanged(newstate, reverse);
        }
    }

    // Virtual method for C ABI access and custom callback
    void abortLoad() {
        if (kparts__readwritepart_abortload_isbase) {
            kparts__readwritepart_abortload_isbase = false;
            KParts__ReadWritePart::abortLoad();
        } else if (kparts__readwritepart_abortload_callback != nullptr) {
            kparts__readwritepart_abortload_callback();
        } else {
            KParts__ReadWritePart::abortLoad();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setUrl(const QUrl& url) {
        if (kparts__readwritepart_seturl_isbase) {
            kparts__readwritepart_seturl_isbase = false;
            KParts__ReadWritePart::setUrl(url);
        } else if (kparts__readwritepart_seturl_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            kparts__readwritepart_seturl_callback(this, cbval1);
        } else {
            KParts__ReadWritePart::setUrl(url);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString localFilePath() const {
        if (kparts__readwritepart_localfilepath_isbase) {
            kparts__readwritepart_localfilepath_isbase = false;
            return KParts__ReadWritePart::localFilePath();
        } else if (kparts__readwritepart_localfilepath_callback != nullptr) {
            const char* callback_ret = kparts__readwritepart_localfilepath_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KParts__ReadWritePart::localFilePath();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLocalFilePath(const QString& localFilePath) {
        if (kparts__readwritepart_setlocalfilepath_isbase) {
            kparts__readwritepart_setlocalfilepath_isbase = false;
            KParts__ReadWritePart::setLocalFilePath(localFilePath);
        } else if (kparts__readwritepart_setlocalfilepath_callback != nullptr) {
            const QString localFilePath_ret = localFilePath;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray localFilePath_b = localFilePath_ret.toUtf8();
            libqt_string localFilePath_str;
            localFilePath_str.len = localFilePath_b.length();
            localFilePath_str.data = static_cast<const char*>(malloc(localFilePath_str.len + 1));
            memcpy((void*)localFilePath_str.data, localFilePath_b.data(), localFilePath_str.len);
            ((char*)localFilePath_str.data)[localFilePath_str.len] = '\0';
            libqt_string cbval1 = localFilePath_str;

            kparts__readwritepart_setlocalfilepath_callback(this, cbval1);
        } else {
            KParts__ReadWritePart::setLocalFilePath(localFilePath);
        }
    }

    // Virtual method for C ABI access and custom callback
    QWidget* hostContainer(const QString& containerName) {
        if (kparts__readwritepart_hostcontainer_isbase) {
            kparts__readwritepart_hostcontainer_isbase = false;
            return KParts__ReadWritePart::hostContainer(containerName);
        } else if (kparts__readwritepart_hostcontainer_callback != nullptr) {
            const QString containerName_ret = containerName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray containerName_b = containerName_ret.toUtf8();
            libqt_string containerName_str;
            containerName_str.len = containerName_b.length();
            containerName_str.data = static_cast<const char*>(malloc(containerName_str.len + 1));
            memcpy((void*)containerName_str.data, containerName_b.data(), containerName_str.len);
            ((char*)containerName_str.data)[containerName_str.len] = '\0';
            libqt_string cbval1 = containerName_str;

            QWidget* callback_ret = kparts__readwritepart_hostcontainer_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__ReadWritePart::hostContainer(containerName);
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotWidgetDestroyed() {
        if (kparts__readwritepart_slotwidgetdestroyed_isbase) {
            kparts__readwritepart_slotwidgetdestroyed_isbase = false;
            KParts__ReadWritePart::slotWidgetDestroyed();
        } else if (kparts__readwritepart_slotwidgetdestroyed_callback != nullptr) {
            kparts__readwritepart_slotwidgetdestroyed_callback();
        } else {
            KParts__ReadWritePart::slotWidgetDestroyed();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kparts__readwritepart_sender_isbase) {
            kparts__readwritepart_sender_isbase = false;
            return KParts__ReadWritePart::sender();
        } else if (kparts__readwritepart_sender_callback != nullptr) {
            QObject* callback_ret = kparts__readwritepart_sender_callback();
            return callback_ret;
        } else {
            return KParts__ReadWritePart::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kparts__readwritepart_sendersignalindex_isbase) {
            kparts__readwritepart_sendersignalindex_isbase = false;
            return KParts__ReadWritePart::senderSignalIndex();
        } else if (kparts__readwritepart_sendersignalindex_callback != nullptr) {
            int callback_ret = kparts__readwritepart_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KParts__ReadWritePart::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kparts__readwritepart_receivers_isbase) {
            kparts__readwritepart_receivers_isbase = false;
            return KParts__ReadWritePart::receivers(signal);
        } else if (kparts__readwritepart_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kparts__readwritepart_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KParts__ReadWritePart::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kparts__readwritepart_issignalconnected_isbase) {
            kparts__readwritepart_issignalconnected_isbase = false;
            return KParts__ReadWritePart::isSignalConnected(signal);
        } else if (kparts__readwritepart_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kparts__readwritepart_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__ReadWritePart::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString standardsXmlFileLocation() {
        if (kparts__readwritepart_standardsxmlfilelocation_isbase) {
            kparts__readwritepart_standardsxmlfilelocation_isbase = false;
            return KParts__ReadWritePart::standardsXmlFileLocation();
        } else if (kparts__readwritepart_standardsxmlfilelocation_callback != nullptr) {
            const char* callback_ret = kparts__readwritepart_standardsxmlfilelocation_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KParts__ReadWritePart::standardsXmlFileLocation();
        }
    }

    // Virtual method for C ABI access and custom callback
    void loadStandardsXmlFile() {
        if (kparts__readwritepart_loadstandardsxmlfile_isbase) {
            kparts__readwritepart_loadstandardsxmlfile_isbase = false;
            KParts__ReadWritePart::loadStandardsXmlFile();
        } else if (kparts__readwritepart_loadstandardsxmlfile_callback != nullptr) {
            kparts__readwritepart_loadstandardsxmlfile_callback();
        } else {
            KParts__ReadWritePart::loadStandardsXmlFile();
        }
    }

    // Friend functions
    friend bool KParts__ReadWritePart_SaveFile(KParts::ReadWritePart* self);
    friend bool KParts__ReadWritePart_QBaseSaveFile(KParts::ReadWritePart* self);
    friend bool KParts__ReadWritePart_SaveToUrl(KParts::ReadWritePart* self);
    friend bool KParts__ReadWritePart_QBaseSaveToUrl(KParts::ReadWritePart* self);
    friend bool KParts__ReadWritePart_OpenFile(KParts::ReadWritePart* self);
    friend bool KParts__ReadWritePart_QBaseOpenFile(KParts::ReadWritePart* self);
    friend void KParts__ReadWritePart_GuiActivateEvent(KParts::ReadWritePart* self, KParts__GUIActivateEvent* event);
    friend void KParts__ReadWritePart_QBaseGuiActivateEvent(KParts::ReadWritePart* self, KParts__GUIActivateEvent* event);
    friend void KParts__ReadWritePart_SetWidget(KParts::ReadWritePart* self, QWidget* widget);
    friend void KParts__ReadWritePart_QBaseSetWidget(KParts::ReadWritePart* self, QWidget* widget);
    friend void KParts__ReadWritePart_CustomEvent(KParts::ReadWritePart* self, QEvent* event);
    friend void KParts__ReadWritePart_QBaseCustomEvent(KParts::ReadWritePart* self, QEvent* event);
    friend void KParts__ReadWritePart_PartActivateEvent(KParts::ReadWritePart* self, KParts__PartActivateEvent* event);
    friend void KParts__ReadWritePart_QBasePartActivateEvent(KParts::ReadWritePart* self, KParts__PartActivateEvent* event);
    friend void KParts__ReadWritePart_TimerEvent(KParts::ReadWritePart* self, QTimerEvent* event);
    friend void KParts__ReadWritePart_QBaseTimerEvent(KParts::ReadWritePart* self, QTimerEvent* event);
    friend void KParts__ReadWritePart_ChildEvent(KParts::ReadWritePart* self, QChildEvent* event);
    friend void KParts__ReadWritePart_QBaseChildEvent(KParts::ReadWritePart* self, QChildEvent* event);
    friend void KParts__ReadWritePart_ConnectNotify(KParts::ReadWritePart* self, const QMetaMethod* signal);
    friend void KParts__ReadWritePart_QBaseConnectNotify(KParts::ReadWritePart* self, const QMetaMethod* signal);
    friend void KParts__ReadWritePart_DisconnectNotify(KParts::ReadWritePart* self, const QMetaMethod* signal);
    friend void KParts__ReadWritePart_QBaseDisconnectNotify(KParts::ReadWritePart* self, const QMetaMethod* signal);
    friend void KParts__ReadWritePart_SetComponentName(KParts::ReadWritePart* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KParts__ReadWritePart_QBaseSetComponentName(KParts::ReadWritePart* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KParts__ReadWritePart_SetXMLFile(KParts::ReadWritePart* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KParts__ReadWritePart_QBaseSetXMLFile(KParts::ReadWritePart* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KParts__ReadWritePart_SetLocalXMLFile(KParts::ReadWritePart* self, const libqt_string file);
    friend void KParts__ReadWritePart_QBaseSetLocalXMLFile(KParts::ReadWritePart* self, const libqt_string file);
    friend void KParts__ReadWritePart_SetXML(KParts::ReadWritePart* self, const libqt_string document, bool merge);
    friend void KParts__ReadWritePart_QBaseSetXML(KParts::ReadWritePart* self, const libqt_string document, bool merge);
    friend void KParts__ReadWritePart_SetDOMDocument(KParts::ReadWritePart* self, const QDomDocument* document, bool merge);
    friend void KParts__ReadWritePart_QBaseSetDOMDocument(KParts::ReadWritePart* self, const QDomDocument* document, bool merge);
    friend void KParts__ReadWritePart_StateChanged(KParts::ReadWritePart* self, const libqt_string newstate, int reverse);
    friend void KParts__ReadWritePart_QBaseStateChanged(KParts::ReadWritePart* self, const libqt_string newstate, int reverse);
    friend void KParts__ReadWritePart_AbortLoad(KParts::ReadWritePart* self);
    friend void KParts__ReadWritePart_QBaseAbortLoad(KParts::ReadWritePart* self);
    friend void KParts__ReadWritePart_SetUrl(KParts::ReadWritePart* self, const QUrl* url);
    friend void KParts__ReadWritePart_QBaseSetUrl(KParts::ReadWritePart* self, const QUrl* url);
    friend libqt_string KParts__ReadWritePart_LocalFilePath(const KParts::ReadWritePart* self);
    friend libqt_string KParts__ReadWritePart_QBaseLocalFilePath(const KParts::ReadWritePart* self);
    friend void KParts__ReadWritePart_SetLocalFilePath(KParts::ReadWritePart* self, const libqt_string localFilePath);
    friend void KParts__ReadWritePart_QBaseSetLocalFilePath(KParts::ReadWritePart* self, const libqt_string localFilePath);
    friend QWidget* KParts__ReadWritePart_HostContainer(KParts::ReadWritePart* self, const libqt_string containerName);
    friend QWidget* KParts__ReadWritePart_QBaseHostContainer(KParts::ReadWritePart* self, const libqt_string containerName);
    friend void KParts__ReadWritePart_SlotWidgetDestroyed(KParts::ReadWritePart* self);
    friend void KParts__ReadWritePart_QBaseSlotWidgetDestroyed(KParts::ReadWritePart* self);
    friend QObject* KParts__ReadWritePart_Sender(const KParts::ReadWritePart* self);
    friend QObject* KParts__ReadWritePart_QBaseSender(const KParts::ReadWritePart* self);
    friend int KParts__ReadWritePart_SenderSignalIndex(const KParts::ReadWritePart* self);
    friend int KParts__ReadWritePart_QBaseSenderSignalIndex(const KParts::ReadWritePart* self);
    friend int KParts__ReadWritePart_Receivers(const KParts::ReadWritePart* self, const char* signal);
    friend int KParts__ReadWritePart_QBaseReceivers(const KParts::ReadWritePart* self, const char* signal);
    friend bool KParts__ReadWritePart_IsSignalConnected(const KParts::ReadWritePart* self, const QMetaMethod* signal);
    friend bool KParts__ReadWritePart_QBaseIsSignalConnected(const KParts::ReadWritePart* self, const QMetaMethod* signal);
    friend libqt_string KParts__ReadWritePart_StandardsXmlFileLocation(KParts::ReadWritePart* self);
    friend libqt_string KParts__ReadWritePart_QBaseStandardsXmlFileLocation(KParts::ReadWritePart* self);
    friend void KParts__ReadWritePart_LoadStandardsXmlFile(KParts::ReadWritePart* self);
    friend void KParts__ReadWritePart_QBaseLoadStandardsXmlFile(KParts::ReadWritePart* self);
};

#endif
