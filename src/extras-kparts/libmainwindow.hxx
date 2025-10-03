#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBVIRTUALMAINWINDOW_H
#define SRC_EXTRAS_KPARTSC_LIBVIRTUALMAINWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::MainWindow so that we can call protected methods
class VirtualKPartsMainWindow final : public KParts::MainWindow {

  public:
    // Virtual class boolean flag
    bool isVirtualKPartsMainWindow = true;

    // Virtual class public types (including callbacks)
    using KParts__MainWindow_Metacall_Callback = int (*)(KParts__MainWindow*, int, int, void**);
    using KParts__MainWindow_ConfigureToolbars_Callback = void (*)();
    using KParts__MainWindow_SlotSetStatusBarText_Callback = void (*)(KParts__MainWindow*, libqt_string);
    using KParts__MainWindow_SaveNewToolbarConfig_Callback = void (*)();
    using KParts__MainWindow_CreateShellGUI_Callback = void (*)(KParts__MainWindow*, bool);
    using KParts__MainWindow_GuiFactory_Callback = KXMLGUIFactory* (*)();
    using KParts__MainWindow_ApplyMainWindowSettings_Callback = void (*)(KParts__MainWindow*, KConfigGroup*);
    using KParts__MainWindow_SlotStateChanged_Callback = void (*)(KParts__MainWindow*, libqt_string);
    using KParts__MainWindow_Event_Callback = bool (*)(KParts__MainWindow*, QEvent*);
    using KParts__MainWindow_SetCaption_Callback = void (*)(KParts__MainWindow*, libqt_string);
    using KParts__MainWindow_SetPlainCaption_Callback = void (*)(KParts__MainWindow*, libqt_string);
    using KParts__MainWindow_KeyPressEvent_Callback = void (*)(KParts__MainWindow*, QKeyEvent*);
    using KParts__MainWindow_CloseEvent_Callback = void (*)(KParts__MainWindow*, QCloseEvent*);
    using KParts__MainWindow_QueryClose_Callback = bool (*)();
    using KParts__MainWindow_SaveProperties_Callback = void (*)(KParts__MainWindow*, KConfigGroup*);
    using KParts__MainWindow_ReadProperties_Callback = void (*)(KParts__MainWindow*, KConfigGroup*);
    using KParts__MainWindow_SaveGlobalProperties_Callback = void (*)(KParts__MainWindow*, KConfig*);
    using KParts__MainWindow_ReadGlobalProperties_Callback = void (*)(KParts__MainWindow*, KConfig*);
    using KParts__MainWindow_CreatePopupMenu_Callback = QMenu* (*)();
    using KParts__MainWindow_ContextMenuEvent_Callback = void (*)(KParts__MainWindow*, QContextMenuEvent*);
    using KParts__MainWindow_DevType_Callback = int (*)();
    using KParts__MainWindow_SetVisible_Callback = void (*)(KParts__MainWindow*, bool);
    using KParts__MainWindow_SizeHint_Callback = QSize* (*)();
    using KParts__MainWindow_MinimumSizeHint_Callback = QSize* (*)();
    using KParts__MainWindow_HeightForWidth_Callback = int (*)(const KParts__MainWindow*, int);
    using KParts__MainWindow_HasHeightForWidth_Callback = bool (*)();
    using KParts__MainWindow_PaintEngine_Callback = QPaintEngine* (*)();
    using KParts__MainWindow_MousePressEvent_Callback = void (*)(KParts__MainWindow*, QMouseEvent*);
    using KParts__MainWindow_MouseReleaseEvent_Callback = void (*)(KParts__MainWindow*, QMouseEvent*);
    using KParts__MainWindow_MouseDoubleClickEvent_Callback = void (*)(KParts__MainWindow*, QMouseEvent*);
    using KParts__MainWindow_MouseMoveEvent_Callback = void (*)(KParts__MainWindow*, QMouseEvent*);
    using KParts__MainWindow_WheelEvent_Callback = void (*)(KParts__MainWindow*, QWheelEvent*);
    using KParts__MainWindow_KeyReleaseEvent_Callback = void (*)(KParts__MainWindow*, QKeyEvent*);
    using KParts__MainWindow_FocusInEvent_Callback = void (*)(KParts__MainWindow*, QFocusEvent*);
    using KParts__MainWindow_FocusOutEvent_Callback = void (*)(KParts__MainWindow*, QFocusEvent*);
    using KParts__MainWindow_EnterEvent_Callback = void (*)(KParts__MainWindow*, QEnterEvent*);
    using KParts__MainWindow_LeaveEvent_Callback = void (*)(KParts__MainWindow*, QEvent*);
    using KParts__MainWindow_PaintEvent_Callback = void (*)(KParts__MainWindow*, QPaintEvent*);
    using KParts__MainWindow_MoveEvent_Callback = void (*)(KParts__MainWindow*, QMoveEvent*);
    using KParts__MainWindow_ResizeEvent_Callback = void (*)(KParts__MainWindow*, QResizeEvent*);
    using KParts__MainWindow_TabletEvent_Callback = void (*)(KParts__MainWindow*, QTabletEvent*);
    using KParts__MainWindow_ActionEvent_Callback = void (*)(KParts__MainWindow*, QActionEvent*);
    using KParts__MainWindow_DragEnterEvent_Callback = void (*)(KParts__MainWindow*, QDragEnterEvent*);
    using KParts__MainWindow_DragMoveEvent_Callback = void (*)(KParts__MainWindow*, QDragMoveEvent*);
    using KParts__MainWindow_DragLeaveEvent_Callback = void (*)(KParts__MainWindow*, QDragLeaveEvent*);
    using KParts__MainWindow_DropEvent_Callback = void (*)(KParts__MainWindow*, QDropEvent*);
    using KParts__MainWindow_ShowEvent_Callback = void (*)(KParts__MainWindow*, QShowEvent*);
    using KParts__MainWindow_HideEvent_Callback = void (*)(KParts__MainWindow*, QHideEvent*);
    using KParts__MainWindow_NativeEvent_Callback = bool (*)(KParts__MainWindow*, libqt_string, void*, intptr_t*);
    using KParts__MainWindow_ChangeEvent_Callback = void (*)(KParts__MainWindow*, QEvent*);
    using KParts__MainWindow_Metric_Callback = int (*)(const KParts__MainWindow*, int);
    using KParts__MainWindow_InitPainter_Callback = void (*)(const KParts__MainWindow*, QPainter*);
    using KParts__MainWindow_Redirected_Callback = QPaintDevice* (*)(const KParts__MainWindow*, QPoint*);
    using KParts__MainWindow_SharedPainter_Callback = QPainter* (*)();
    using KParts__MainWindow_InputMethodEvent_Callback = void (*)(KParts__MainWindow*, QInputMethodEvent*);
    using KParts__MainWindow_InputMethodQuery_Callback = QVariant* (*)(const KParts__MainWindow*, int);
    using KParts__MainWindow_FocusNextPrevChild_Callback = bool (*)(KParts__MainWindow*, bool);
    using KParts__MainWindow_EventFilter_Callback = bool (*)(KParts__MainWindow*, QObject*, QEvent*);
    using KParts__MainWindow_TimerEvent_Callback = void (*)(KParts__MainWindow*, QTimerEvent*);
    using KParts__MainWindow_ChildEvent_Callback = void (*)(KParts__MainWindow*, QChildEvent*);
    using KParts__MainWindow_CustomEvent_Callback = void (*)(KParts__MainWindow*, QEvent*);
    using KParts__MainWindow_ConnectNotify_Callback = void (*)(KParts__MainWindow*, QMetaMethod*);
    using KParts__MainWindow_DisconnectNotify_Callback = void (*)(KParts__MainWindow*, QMetaMethod*);
    using KParts__MainWindow_ContainerTags_Callback = const char** (*)();
    using KParts__MainWindow_CreateContainer_Callback = QWidget* (*)(KParts__MainWindow*, QWidget*, int, QDomElement*, QAction**);
    using KParts__MainWindow_RemoveContainer_Callback = void (*)(KParts__MainWindow*, QWidget*, QWidget*, QDomElement*, QAction*);
    using KParts__MainWindow_CustomTags_Callback = const char** (*)();
    using KParts__MainWindow_CreateCustomElement_Callback = QAction* (*)(KParts__MainWindow*, QWidget*, int, QDomElement*);
    using KParts__MainWindow_FinalizeGUI_Callback = void (*)(KParts__MainWindow*, KXMLGUIClient*);
    using KParts__MainWindow_Action2_Callback = QAction* (*)(const KParts__MainWindow*, QDomElement*);
    using KParts__MainWindow_ActionCollection_Callback = KActionCollection* (*)();
    using KParts__MainWindow_ComponentName_Callback = const char* (*)();
    using KParts__MainWindow_DomDocument_Callback = QDomDocument* (*)();
    using KParts__MainWindow_XmlFile_Callback = const char* (*)();
    using KParts__MainWindow_LocalXMLFile_Callback = const char* (*)();
    using KParts__MainWindow_SetComponentName_Callback = void (*)(KParts__MainWindow*, libqt_string, libqt_string);
    using KParts__MainWindow_SetXMLFile_Callback = void (*)(KParts__MainWindow*, libqt_string, bool, bool);
    using KParts__MainWindow_SetLocalXMLFile_Callback = void (*)(KParts__MainWindow*, libqt_string);
    using KParts__MainWindow_SetXML_Callback = void (*)(KParts__MainWindow*, libqt_string, bool);
    using KParts__MainWindow_SetDOMDocument_Callback = void (*)(KParts__MainWindow*, QDomDocument*, bool);
    using KParts__MainWindow_StateChanged_Callback = void (*)(KParts__MainWindow*, libqt_string, int);
    using KParts__MainWindow_CreateGUI_Callback = void (*)(KParts__MainWindow*, KParts__Part*);
    using KParts__MainWindow_SetWindowTitleHandling_Callback = void (*)(KParts__MainWindow*, bool);
    using KParts__MainWindow_CheckAmbiguousShortcuts_Callback = void (*)();
    using KParts__MainWindow_SavePropertiesInternal_Callback = void (*)(KParts__MainWindow*, KConfig*, int);
    using KParts__MainWindow_ReadPropertiesInternal_Callback = bool (*)(KParts__MainWindow*, KConfig*, int);
    using KParts__MainWindow_SettingsDirty_Callback = bool (*)();
    using KParts__MainWindow_SaveAutoSaveSettings_Callback = void (*)();
    using KParts__MainWindow_UpdateMicroFocus_Callback = void (*)();
    using KParts__MainWindow_Create_Callback = void (*)();
    using KParts__MainWindow_Destroy_Callback = void (*)();
    using KParts__MainWindow_FocusNextChild_Callback = bool (*)();
    using KParts__MainWindow_FocusPreviousChild_Callback = bool (*)();
    using KParts__MainWindow_Sender_Callback = QObject* (*)();
    using KParts__MainWindow_SenderSignalIndex_Callback = int (*)();
    using KParts__MainWindow_Receivers_Callback = int (*)(const KParts__MainWindow*, const char*);
    using KParts__MainWindow_IsSignalConnected_Callback = bool (*)(const KParts__MainWindow*, QMetaMethod*);
    using KParts__MainWindow_GetDecodedMetricF_Callback = double (*)(const KParts__MainWindow*, int, int);
    using KParts__MainWindow_StandardsXmlFileLocation_Callback = const char* (*)();
    using KParts__MainWindow_LoadStandardsXmlFile_Callback = void (*)();

  protected:
    // Instance callback storage
    KParts__MainWindow_Metacall_Callback kparts__mainwindow_metacall_callback = nullptr;
    KParts__MainWindow_ConfigureToolbars_Callback kparts__mainwindow_configuretoolbars_callback = nullptr;
    KParts__MainWindow_SlotSetStatusBarText_Callback kparts__mainwindow_slotsetstatusbartext_callback = nullptr;
    KParts__MainWindow_SaveNewToolbarConfig_Callback kparts__mainwindow_savenewtoolbarconfig_callback = nullptr;
    KParts__MainWindow_CreateShellGUI_Callback kparts__mainwindow_createshellgui_callback = nullptr;
    KParts__MainWindow_GuiFactory_Callback kparts__mainwindow_guifactory_callback = nullptr;
    KParts__MainWindow_ApplyMainWindowSettings_Callback kparts__mainwindow_applymainwindowsettings_callback = nullptr;
    KParts__MainWindow_SlotStateChanged_Callback kparts__mainwindow_slotstatechanged_callback = nullptr;
    KParts__MainWindow_Event_Callback kparts__mainwindow_event_callback = nullptr;
    KParts__MainWindow_SetCaption_Callback kparts__mainwindow_setcaption_callback = nullptr;
    KParts__MainWindow_SetPlainCaption_Callback kparts__mainwindow_setplaincaption_callback = nullptr;
    KParts__MainWindow_KeyPressEvent_Callback kparts__mainwindow_keypressevent_callback = nullptr;
    KParts__MainWindow_CloseEvent_Callback kparts__mainwindow_closeevent_callback = nullptr;
    KParts__MainWindow_QueryClose_Callback kparts__mainwindow_queryclose_callback = nullptr;
    KParts__MainWindow_SaveProperties_Callback kparts__mainwindow_saveproperties_callback = nullptr;
    KParts__MainWindow_ReadProperties_Callback kparts__mainwindow_readproperties_callback = nullptr;
    KParts__MainWindow_SaveGlobalProperties_Callback kparts__mainwindow_saveglobalproperties_callback = nullptr;
    KParts__MainWindow_ReadGlobalProperties_Callback kparts__mainwindow_readglobalproperties_callback = nullptr;
    KParts__MainWindow_CreatePopupMenu_Callback kparts__mainwindow_createpopupmenu_callback = nullptr;
    KParts__MainWindow_ContextMenuEvent_Callback kparts__mainwindow_contextmenuevent_callback = nullptr;
    KParts__MainWindow_DevType_Callback kparts__mainwindow_devtype_callback = nullptr;
    KParts__MainWindow_SetVisible_Callback kparts__mainwindow_setvisible_callback = nullptr;
    KParts__MainWindow_SizeHint_Callback kparts__mainwindow_sizehint_callback = nullptr;
    KParts__MainWindow_MinimumSizeHint_Callback kparts__mainwindow_minimumsizehint_callback = nullptr;
    KParts__MainWindow_HeightForWidth_Callback kparts__mainwindow_heightforwidth_callback = nullptr;
    KParts__MainWindow_HasHeightForWidth_Callback kparts__mainwindow_hasheightforwidth_callback = nullptr;
    KParts__MainWindow_PaintEngine_Callback kparts__mainwindow_paintengine_callback = nullptr;
    KParts__MainWindow_MousePressEvent_Callback kparts__mainwindow_mousepressevent_callback = nullptr;
    KParts__MainWindow_MouseReleaseEvent_Callback kparts__mainwindow_mousereleaseevent_callback = nullptr;
    KParts__MainWindow_MouseDoubleClickEvent_Callback kparts__mainwindow_mousedoubleclickevent_callback = nullptr;
    KParts__MainWindow_MouseMoveEvent_Callback kparts__mainwindow_mousemoveevent_callback = nullptr;
    KParts__MainWindow_WheelEvent_Callback kparts__mainwindow_wheelevent_callback = nullptr;
    KParts__MainWindow_KeyReleaseEvent_Callback kparts__mainwindow_keyreleaseevent_callback = nullptr;
    KParts__MainWindow_FocusInEvent_Callback kparts__mainwindow_focusinevent_callback = nullptr;
    KParts__MainWindow_FocusOutEvent_Callback kparts__mainwindow_focusoutevent_callback = nullptr;
    KParts__MainWindow_EnterEvent_Callback kparts__mainwindow_enterevent_callback = nullptr;
    KParts__MainWindow_LeaveEvent_Callback kparts__mainwindow_leaveevent_callback = nullptr;
    KParts__MainWindow_PaintEvent_Callback kparts__mainwindow_paintevent_callback = nullptr;
    KParts__MainWindow_MoveEvent_Callback kparts__mainwindow_moveevent_callback = nullptr;
    KParts__MainWindow_ResizeEvent_Callback kparts__mainwindow_resizeevent_callback = nullptr;
    KParts__MainWindow_TabletEvent_Callback kparts__mainwindow_tabletevent_callback = nullptr;
    KParts__MainWindow_ActionEvent_Callback kparts__mainwindow_actionevent_callback = nullptr;
    KParts__MainWindow_DragEnterEvent_Callback kparts__mainwindow_dragenterevent_callback = nullptr;
    KParts__MainWindow_DragMoveEvent_Callback kparts__mainwindow_dragmoveevent_callback = nullptr;
    KParts__MainWindow_DragLeaveEvent_Callback kparts__mainwindow_dragleaveevent_callback = nullptr;
    KParts__MainWindow_DropEvent_Callback kparts__mainwindow_dropevent_callback = nullptr;
    KParts__MainWindow_ShowEvent_Callback kparts__mainwindow_showevent_callback = nullptr;
    KParts__MainWindow_HideEvent_Callback kparts__mainwindow_hideevent_callback = nullptr;
    KParts__MainWindow_NativeEvent_Callback kparts__mainwindow_nativeevent_callback = nullptr;
    KParts__MainWindow_ChangeEvent_Callback kparts__mainwindow_changeevent_callback = nullptr;
    KParts__MainWindow_Metric_Callback kparts__mainwindow_metric_callback = nullptr;
    KParts__MainWindow_InitPainter_Callback kparts__mainwindow_initpainter_callback = nullptr;
    KParts__MainWindow_Redirected_Callback kparts__mainwindow_redirected_callback = nullptr;
    KParts__MainWindow_SharedPainter_Callback kparts__mainwindow_sharedpainter_callback = nullptr;
    KParts__MainWindow_InputMethodEvent_Callback kparts__mainwindow_inputmethodevent_callback = nullptr;
    KParts__MainWindow_InputMethodQuery_Callback kparts__mainwindow_inputmethodquery_callback = nullptr;
    KParts__MainWindow_FocusNextPrevChild_Callback kparts__mainwindow_focusnextprevchild_callback = nullptr;
    KParts__MainWindow_EventFilter_Callback kparts__mainwindow_eventfilter_callback = nullptr;
    KParts__MainWindow_TimerEvent_Callback kparts__mainwindow_timerevent_callback = nullptr;
    KParts__MainWindow_ChildEvent_Callback kparts__mainwindow_childevent_callback = nullptr;
    KParts__MainWindow_CustomEvent_Callback kparts__mainwindow_customevent_callback = nullptr;
    KParts__MainWindow_ConnectNotify_Callback kparts__mainwindow_connectnotify_callback = nullptr;
    KParts__MainWindow_DisconnectNotify_Callback kparts__mainwindow_disconnectnotify_callback = nullptr;
    KParts__MainWindow_ContainerTags_Callback kparts__mainwindow_containertags_callback = nullptr;
    KParts__MainWindow_CreateContainer_Callback kparts__mainwindow_createcontainer_callback = nullptr;
    KParts__MainWindow_RemoveContainer_Callback kparts__mainwindow_removecontainer_callback = nullptr;
    KParts__MainWindow_CustomTags_Callback kparts__mainwindow_customtags_callback = nullptr;
    KParts__MainWindow_CreateCustomElement_Callback kparts__mainwindow_createcustomelement_callback = nullptr;
    KParts__MainWindow_FinalizeGUI_Callback kparts__mainwindow_finalizegui_callback = nullptr;
    KParts__MainWindow_Action2_Callback kparts__mainwindow_action2_callback = nullptr;
    KParts__MainWindow_ActionCollection_Callback kparts__mainwindow_actioncollection_callback = nullptr;
    KParts__MainWindow_ComponentName_Callback kparts__mainwindow_componentname_callback = nullptr;
    KParts__MainWindow_DomDocument_Callback kparts__mainwindow_domdocument_callback = nullptr;
    KParts__MainWindow_XmlFile_Callback kparts__mainwindow_xmlfile_callback = nullptr;
    KParts__MainWindow_LocalXMLFile_Callback kparts__mainwindow_localxmlfile_callback = nullptr;
    KParts__MainWindow_SetComponentName_Callback kparts__mainwindow_setcomponentname_callback = nullptr;
    KParts__MainWindow_SetXMLFile_Callback kparts__mainwindow_setxmlfile_callback = nullptr;
    KParts__MainWindow_SetLocalXMLFile_Callback kparts__mainwindow_setlocalxmlfile_callback = nullptr;
    KParts__MainWindow_SetXML_Callback kparts__mainwindow_setxml_callback = nullptr;
    KParts__MainWindow_SetDOMDocument_Callback kparts__mainwindow_setdomdocument_callback = nullptr;
    KParts__MainWindow_StateChanged_Callback kparts__mainwindow_statechanged_callback = nullptr;
    KParts__MainWindow_CreateGUI_Callback kparts__mainwindow_creategui_callback = nullptr;
    KParts__MainWindow_SetWindowTitleHandling_Callback kparts__mainwindow_setwindowtitlehandling_callback = nullptr;
    KParts__MainWindow_CheckAmbiguousShortcuts_Callback kparts__mainwindow_checkambiguousshortcuts_callback = nullptr;
    KParts__MainWindow_SavePropertiesInternal_Callback kparts__mainwindow_savepropertiesinternal_callback = nullptr;
    KParts__MainWindow_ReadPropertiesInternal_Callback kparts__mainwindow_readpropertiesinternal_callback = nullptr;
    KParts__MainWindow_SettingsDirty_Callback kparts__mainwindow_settingsdirty_callback = nullptr;
    KParts__MainWindow_SaveAutoSaveSettings_Callback kparts__mainwindow_saveautosavesettings_callback = nullptr;
    KParts__MainWindow_UpdateMicroFocus_Callback kparts__mainwindow_updatemicrofocus_callback = nullptr;
    KParts__MainWindow_Create_Callback kparts__mainwindow_create_callback = nullptr;
    KParts__MainWindow_Destroy_Callback kparts__mainwindow_destroy_callback = nullptr;
    KParts__MainWindow_FocusNextChild_Callback kparts__mainwindow_focusnextchild_callback = nullptr;
    KParts__MainWindow_FocusPreviousChild_Callback kparts__mainwindow_focuspreviouschild_callback = nullptr;
    KParts__MainWindow_Sender_Callback kparts__mainwindow_sender_callback = nullptr;
    KParts__MainWindow_SenderSignalIndex_Callback kparts__mainwindow_sendersignalindex_callback = nullptr;
    KParts__MainWindow_Receivers_Callback kparts__mainwindow_receivers_callback = nullptr;
    KParts__MainWindow_IsSignalConnected_Callback kparts__mainwindow_issignalconnected_callback = nullptr;
    KParts__MainWindow_GetDecodedMetricF_Callback kparts__mainwindow_getdecodedmetricf_callback = nullptr;
    KParts__MainWindow_StandardsXmlFileLocation_Callback kparts__mainwindow_standardsxmlfilelocation_callback = nullptr;
    KParts__MainWindow_LoadStandardsXmlFile_Callback kparts__mainwindow_loadstandardsxmlfile_callback = nullptr;

    // Instance base flags
    mutable bool kparts__mainwindow_metacall_isbase = false;
    mutable bool kparts__mainwindow_configuretoolbars_isbase = false;
    mutable bool kparts__mainwindow_slotsetstatusbartext_isbase = false;
    mutable bool kparts__mainwindow_savenewtoolbarconfig_isbase = false;
    mutable bool kparts__mainwindow_createshellgui_isbase = false;
    mutable bool kparts__mainwindow_guifactory_isbase = false;
    mutable bool kparts__mainwindow_applymainwindowsettings_isbase = false;
    mutable bool kparts__mainwindow_slotstatechanged_isbase = false;
    mutable bool kparts__mainwindow_event_isbase = false;
    mutable bool kparts__mainwindow_setcaption_isbase = false;
    mutable bool kparts__mainwindow_setplaincaption_isbase = false;
    mutable bool kparts__mainwindow_keypressevent_isbase = false;
    mutable bool kparts__mainwindow_closeevent_isbase = false;
    mutable bool kparts__mainwindow_queryclose_isbase = false;
    mutable bool kparts__mainwindow_saveproperties_isbase = false;
    mutable bool kparts__mainwindow_readproperties_isbase = false;
    mutable bool kparts__mainwindow_saveglobalproperties_isbase = false;
    mutable bool kparts__mainwindow_readglobalproperties_isbase = false;
    mutable bool kparts__mainwindow_createpopupmenu_isbase = false;
    mutable bool kparts__mainwindow_contextmenuevent_isbase = false;
    mutable bool kparts__mainwindow_devtype_isbase = false;
    mutable bool kparts__mainwindow_setvisible_isbase = false;
    mutable bool kparts__mainwindow_sizehint_isbase = false;
    mutable bool kparts__mainwindow_minimumsizehint_isbase = false;
    mutable bool kparts__mainwindow_heightforwidth_isbase = false;
    mutable bool kparts__mainwindow_hasheightforwidth_isbase = false;
    mutable bool kparts__mainwindow_paintengine_isbase = false;
    mutable bool kparts__mainwindow_mousepressevent_isbase = false;
    mutable bool kparts__mainwindow_mousereleaseevent_isbase = false;
    mutable bool kparts__mainwindow_mousedoubleclickevent_isbase = false;
    mutable bool kparts__mainwindow_mousemoveevent_isbase = false;
    mutable bool kparts__mainwindow_wheelevent_isbase = false;
    mutable bool kparts__mainwindow_keyreleaseevent_isbase = false;
    mutable bool kparts__mainwindow_focusinevent_isbase = false;
    mutable bool kparts__mainwindow_focusoutevent_isbase = false;
    mutable bool kparts__mainwindow_enterevent_isbase = false;
    mutable bool kparts__mainwindow_leaveevent_isbase = false;
    mutable bool kparts__mainwindow_paintevent_isbase = false;
    mutable bool kparts__mainwindow_moveevent_isbase = false;
    mutable bool kparts__mainwindow_resizeevent_isbase = false;
    mutable bool kparts__mainwindow_tabletevent_isbase = false;
    mutable bool kparts__mainwindow_actionevent_isbase = false;
    mutable bool kparts__mainwindow_dragenterevent_isbase = false;
    mutable bool kparts__mainwindow_dragmoveevent_isbase = false;
    mutable bool kparts__mainwindow_dragleaveevent_isbase = false;
    mutable bool kparts__mainwindow_dropevent_isbase = false;
    mutable bool kparts__mainwindow_showevent_isbase = false;
    mutable bool kparts__mainwindow_hideevent_isbase = false;
    mutable bool kparts__mainwindow_nativeevent_isbase = false;
    mutable bool kparts__mainwindow_changeevent_isbase = false;
    mutable bool kparts__mainwindow_metric_isbase = false;
    mutable bool kparts__mainwindow_initpainter_isbase = false;
    mutable bool kparts__mainwindow_redirected_isbase = false;
    mutable bool kparts__mainwindow_sharedpainter_isbase = false;
    mutable bool kparts__mainwindow_inputmethodevent_isbase = false;
    mutable bool kparts__mainwindow_inputmethodquery_isbase = false;
    mutable bool kparts__mainwindow_focusnextprevchild_isbase = false;
    mutable bool kparts__mainwindow_eventfilter_isbase = false;
    mutable bool kparts__mainwindow_timerevent_isbase = false;
    mutable bool kparts__mainwindow_childevent_isbase = false;
    mutable bool kparts__mainwindow_customevent_isbase = false;
    mutable bool kparts__mainwindow_connectnotify_isbase = false;
    mutable bool kparts__mainwindow_disconnectnotify_isbase = false;
    mutable bool kparts__mainwindow_containertags_isbase = false;
    mutable bool kparts__mainwindow_createcontainer_isbase = false;
    mutable bool kparts__mainwindow_removecontainer_isbase = false;
    mutable bool kparts__mainwindow_customtags_isbase = false;
    mutable bool kparts__mainwindow_createcustomelement_isbase = false;
    mutable bool kparts__mainwindow_finalizegui_isbase = false;
    mutable bool kparts__mainwindow_action2_isbase = false;
    mutable bool kparts__mainwindow_actioncollection_isbase = false;
    mutable bool kparts__mainwindow_componentname_isbase = false;
    mutable bool kparts__mainwindow_domdocument_isbase = false;
    mutable bool kparts__mainwindow_xmlfile_isbase = false;
    mutable bool kparts__mainwindow_localxmlfile_isbase = false;
    mutable bool kparts__mainwindow_setcomponentname_isbase = false;
    mutable bool kparts__mainwindow_setxmlfile_isbase = false;
    mutable bool kparts__mainwindow_setlocalxmlfile_isbase = false;
    mutable bool kparts__mainwindow_setxml_isbase = false;
    mutable bool kparts__mainwindow_setdomdocument_isbase = false;
    mutable bool kparts__mainwindow_statechanged_isbase = false;
    mutable bool kparts__mainwindow_creategui_isbase = false;
    mutable bool kparts__mainwindow_setwindowtitlehandling_isbase = false;
    mutable bool kparts__mainwindow_checkambiguousshortcuts_isbase = false;
    mutable bool kparts__mainwindow_savepropertiesinternal_isbase = false;
    mutable bool kparts__mainwindow_readpropertiesinternal_isbase = false;
    mutable bool kparts__mainwindow_settingsdirty_isbase = false;
    mutable bool kparts__mainwindow_saveautosavesettings_isbase = false;
    mutable bool kparts__mainwindow_updatemicrofocus_isbase = false;
    mutable bool kparts__mainwindow_create_isbase = false;
    mutable bool kparts__mainwindow_destroy_isbase = false;
    mutable bool kparts__mainwindow_focusnextchild_isbase = false;
    mutable bool kparts__mainwindow_focuspreviouschild_isbase = false;
    mutable bool kparts__mainwindow_sender_isbase = false;
    mutable bool kparts__mainwindow_sendersignalindex_isbase = false;
    mutable bool kparts__mainwindow_receivers_isbase = false;
    mutable bool kparts__mainwindow_issignalconnected_isbase = false;
    mutable bool kparts__mainwindow_getdecodedmetricf_isbase = false;
    mutable bool kparts__mainwindow_standardsxmlfilelocation_isbase = false;
    mutable bool kparts__mainwindow_loadstandardsxmlfile_isbase = false;

  public:
    VirtualKPartsMainWindow(QWidget* parent) : KParts::MainWindow(parent) {};
    VirtualKPartsMainWindow() : KParts::MainWindow() {};
    VirtualKPartsMainWindow(QWidget* parent, Qt::WindowFlags f) : KParts::MainWindow(parent, f) {};

    ~VirtualKPartsMainWindow() {
        kparts__mainwindow_metacall_callback = nullptr;
        kparts__mainwindow_configuretoolbars_callback = nullptr;
        kparts__mainwindow_slotsetstatusbartext_callback = nullptr;
        kparts__mainwindow_savenewtoolbarconfig_callback = nullptr;
        kparts__mainwindow_createshellgui_callback = nullptr;
        kparts__mainwindow_guifactory_callback = nullptr;
        kparts__mainwindow_applymainwindowsettings_callback = nullptr;
        kparts__mainwindow_slotstatechanged_callback = nullptr;
        kparts__mainwindow_event_callback = nullptr;
        kparts__mainwindow_setcaption_callback = nullptr;
        kparts__mainwindow_setplaincaption_callback = nullptr;
        kparts__mainwindow_keypressevent_callback = nullptr;
        kparts__mainwindow_closeevent_callback = nullptr;
        kparts__mainwindow_queryclose_callback = nullptr;
        kparts__mainwindow_saveproperties_callback = nullptr;
        kparts__mainwindow_readproperties_callback = nullptr;
        kparts__mainwindow_saveglobalproperties_callback = nullptr;
        kparts__mainwindow_readglobalproperties_callback = nullptr;
        kparts__mainwindow_createpopupmenu_callback = nullptr;
        kparts__mainwindow_contextmenuevent_callback = nullptr;
        kparts__mainwindow_devtype_callback = nullptr;
        kparts__mainwindow_setvisible_callback = nullptr;
        kparts__mainwindow_sizehint_callback = nullptr;
        kparts__mainwindow_minimumsizehint_callback = nullptr;
        kparts__mainwindow_heightforwidth_callback = nullptr;
        kparts__mainwindow_hasheightforwidth_callback = nullptr;
        kparts__mainwindow_paintengine_callback = nullptr;
        kparts__mainwindow_mousepressevent_callback = nullptr;
        kparts__mainwindow_mousereleaseevent_callback = nullptr;
        kparts__mainwindow_mousedoubleclickevent_callback = nullptr;
        kparts__mainwindow_mousemoveevent_callback = nullptr;
        kparts__mainwindow_wheelevent_callback = nullptr;
        kparts__mainwindow_keyreleaseevent_callback = nullptr;
        kparts__mainwindow_focusinevent_callback = nullptr;
        kparts__mainwindow_focusoutevent_callback = nullptr;
        kparts__mainwindow_enterevent_callback = nullptr;
        kparts__mainwindow_leaveevent_callback = nullptr;
        kparts__mainwindow_paintevent_callback = nullptr;
        kparts__mainwindow_moveevent_callback = nullptr;
        kparts__mainwindow_resizeevent_callback = nullptr;
        kparts__mainwindow_tabletevent_callback = nullptr;
        kparts__mainwindow_actionevent_callback = nullptr;
        kparts__mainwindow_dragenterevent_callback = nullptr;
        kparts__mainwindow_dragmoveevent_callback = nullptr;
        kparts__mainwindow_dragleaveevent_callback = nullptr;
        kparts__mainwindow_dropevent_callback = nullptr;
        kparts__mainwindow_showevent_callback = nullptr;
        kparts__mainwindow_hideevent_callback = nullptr;
        kparts__mainwindow_nativeevent_callback = nullptr;
        kparts__mainwindow_changeevent_callback = nullptr;
        kparts__mainwindow_metric_callback = nullptr;
        kparts__mainwindow_initpainter_callback = nullptr;
        kparts__mainwindow_redirected_callback = nullptr;
        kparts__mainwindow_sharedpainter_callback = nullptr;
        kparts__mainwindow_inputmethodevent_callback = nullptr;
        kparts__mainwindow_inputmethodquery_callback = nullptr;
        kparts__mainwindow_focusnextprevchild_callback = nullptr;
        kparts__mainwindow_eventfilter_callback = nullptr;
        kparts__mainwindow_timerevent_callback = nullptr;
        kparts__mainwindow_childevent_callback = nullptr;
        kparts__mainwindow_customevent_callback = nullptr;
        kparts__mainwindow_connectnotify_callback = nullptr;
        kparts__mainwindow_disconnectnotify_callback = nullptr;
        kparts__mainwindow_containertags_callback = nullptr;
        kparts__mainwindow_createcontainer_callback = nullptr;
        kparts__mainwindow_removecontainer_callback = nullptr;
        kparts__mainwindow_customtags_callback = nullptr;
        kparts__mainwindow_createcustomelement_callback = nullptr;
        kparts__mainwindow_finalizegui_callback = nullptr;
        kparts__mainwindow_action2_callback = nullptr;
        kparts__mainwindow_actioncollection_callback = nullptr;
        kparts__mainwindow_componentname_callback = nullptr;
        kparts__mainwindow_domdocument_callback = nullptr;
        kparts__mainwindow_xmlfile_callback = nullptr;
        kparts__mainwindow_localxmlfile_callback = nullptr;
        kparts__mainwindow_setcomponentname_callback = nullptr;
        kparts__mainwindow_setxmlfile_callback = nullptr;
        kparts__mainwindow_setlocalxmlfile_callback = nullptr;
        kparts__mainwindow_setxml_callback = nullptr;
        kparts__mainwindow_setdomdocument_callback = nullptr;
        kparts__mainwindow_statechanged_callback = nullptr;
        kparts__mainwindow_creategui_callback = nullptr;
        kparts__mainwindow_setwindowtitlehandling_callback = nullptr;
        kparts__mainwindow_checkambiguousshortcuts_callback = nullptr;
        kparts__mainwindow_savepropertiesinternal_callback = nullptr;
        kparts__mainwindow_readpropertiesinternal_callback = nullptr;
        kparts__mainwindow_settingsdirty_callback = nullptr;
        kparts__mainwindow_saveautosavesettings_callback = nullptr;
        kparts__mainwindow_updatemicrofocus_callback = nullptr;
        kparts__mainwindow_create_callback = nullptr;
        kparts__mainwindow_destroy_callback = nullptr;
        kparts__mainwindow_focusnextchild_callback = nullptr;
        kparts__mainwindow_focuspreviouschild_callback = nullptr;
        kparts__mainwindow_sender_callback = nullptr;
        kparts__mainwindow_sendersignalindex_callback = nullptr;
        kparts__mainwindow_receivers_callback = nullptr;
        kparts__mainwindow_issignalconnected_callback = nullptr;
        kparts__mainwindow_getdecodedmetricf_callback = nullptr;
        kparts__mainwindow_standardsxmlfilelocation_callback = nullptr;
        kparts__mainwindow_loadstandardsxmlfile_callback = nullptr;
    }

    // Callback setters
    inline void setKParts__MainWindow_Metacall_Callback(KParts__MainWindow_Metacall_Callback cb) { kparts__mainwindow_metacall_callback = cb; }
    inline void setKParts__MainWindow_ConfigureToolbars_Callback(KParts__MainWindow_ConfigureToolbars_Callback cb) { kparts__mainwindow_configuretoolbars_callback = cb; }
    inline void setKParts__MainWindow_SlotSetStatusBarText_Callback(KParts__MainWindow_SlotSetStatusBarText_Callback cb) { kparts__mainwindow_slotsetstatusbartext_callback = cb; }
    inline void setKParts__MainWindow_SaveNewToolbarConfig_Callback(KParts__MainWindow_SaveNewToolbarConfig_Callback cb) { kparts__mainwindow_savenewtoolbarconfig_callback = cb; }
    inline void setKParts__MainWindow_CreateShellGUI_Callback(KParts__MainWindow_CreateShellGUI_Callback cb) { kparts__mainwindow_createshellgui_callback = cb; }
    inline void setKParts__MainWindow_GuiFactory_Callback(KParts__MainWindow_GuiFactory_Callback cb) { kparts__mainwindow_guifactory_callback = cb; }
    inline void setKParts__MainWindow_ApplyMainWindowSettings_Callback(KParts__MainWindow_ApplyMainWindowSettings_Callback cb) { kparts__mainwindow_applymainwindowsettings_callback = cb; }
    inline void setKParts__MainWindow_SlotStateChanged_Callback(KParts__MainWindow_SlotStateChanged_Callback cb) { kparts__mainwindow_slotstatechanged_callback = cb; }
    inline void setKParts__MainWindow_Event_Callback(KParts__MainWindow_Event_Callback cb) { kparts__mainwindow_event_callback = cb; }
    inline void setKParts__MainWindow_SetCaption_Callback(KParts__MainWindow_SetCaption_Callback cb) { kparts__mainwindow_setcaption_callback = cb; }
    inline void setKParts__MainWindow_SetPlainCaption_Callback(KParts__MainWindow_SetPlainCaption_Callback cb) { kparts__mainwindow_setplaincaption_callback = cb; }
    inline void setKParts__MainWindow_KeyPressEvent_Callback(KParts__MainWindow_KeyPressEvent_Callback cb) { kparts__mainwindow_keypressevent_callback = cb; }
    inline void setKParts__MainWindow_CloseEvent_Callback(KParts__MainWindow_CloseEvent_Callback cb) { kparts__mainwindow_closeevent_callback = cb; }
    inline void setKParts__MainWindow_QueryClose_Callback(KParts__MainWindow_QueryClose_Callback cb) { kparts__mainwindow_queryclose_callback = cb; }
    inline void setKParts__MainWindow_SaveProperties_Callback(KParts__MainWindow_SaveProperties_Callback cb) { kparts__mainwindow_saveproperties_callback = cb; }
    inline void setKParts__MainWindow_ReadProperties_Callback(KParts__MainWindow_ReadProperties_Callback cb) { kparts__mainwindow_readproperties_callback = cb; }
    inline void setKParts__MainWindow_SaveGlobalProperties_Callback(KParts__MainWindow_SaveGlobalProperties_Callback cb) { kparts__mainwindow_saveglobalproperties_callback = cb; }
    inline void setKParts__MainWindow_ReadGlobalProperties_Callback(KParts__MainWindow_ReadGlobalProperties_Callback cb) { kparts__mainwindow_readglobalproperties_callback = cb; }
    inline void setKParts__MainWindow_CreatePopupMenu_Callback(KParts__MainWindow_CreatePopupMenu_Callback cb) { kparts__mainwindow_createpopupmenu_callback = cb; }
    inline void setKParts__MainWindow_ContextMenuEvent_Callback(KParts__MainWindow_ContextMenuEvent_Callback cb) { kparts__mainwindow_contextmenuevent_callback = cb; }
    inline void setKParts__MainWindow_DevType_Callback(KParts__MainWindow_DevType_Callback cb) { kparts__mainwindow_devtype_callback = cb; }
    inline void setKParts__MainWindow_SetVisible_Callback(KParts__MainWindow_SetVisible_Callback cb) { kparts__mainwindow_setvisible_callback = cb; }
    inline void setKParts__MainWindow_SizeHint_Callback(KParts__MainWindow_SizeHint_Callback cb) { kparts__mainwindow_sizehint_callback = cb; }
    inline void setKParts__MainWindow_MinimumSizeHint_Callback(KParts__MainWindow_MinimumSizeHint_Callback cb) { kparts__mainwindow_minimumsizehint_callback = cb; }
    inline void setKParts__MainWindow_HeightForWidth_Callback(KParts__MainWindow_HeightForWidth_Callback cb) { kparts__mainwindow_heightforwidth_callback = cb; }
    inline void setKParts__MainWindow_HasHeightForWidth_Callback(KParts__MainWindow_HasHeightForWidth_Callback cb) { kparts__mainwindow_hasheightforwidth_callback = cb; }
    inline void setKParts__MainWindow_PaintEngine_Callback(KParts__MainWindow_PaintEngine_Callback cb) { kparts__mainwindow_paintengine_callback = cb; }
    inline void setKParts__MainWindow_MousePressEvent_Callback(KParts__MainWindow_MousePressEvent_Callback cb) { kparts__mainwindow_mousepressevent_callback = cb; }
    inline void setKParts__MainWindow_MouseReleaseEvent_Callback(KParts__MainWindow_MouseReleaseEvent_Callback cb) { kparts__mainwindow_mousereleaseevent_callback = cb; }
    inline void setKParts__MainWindow_MouseDoubleClickEvent_Callback(KParts__MainWindow_MouseDoubleClickEvent_Callback cb) { kparts__mainwindow_mousedoubleclickevent_callback = cb; }
    inline void setKParts__MainWindow_MouseMoveEvent_Callback(KParts__MainWindow_MouseMoveEvent_Callback cb) { kparts__mainwindow_mousemoveevent_callback = cb; }
    inline void setKParts__MainWindow_WheelEvent_Callback(KParts__MainWindow_WheelEvent_Callback cb) { kparts__mainwindow_wheelevent_callback = cb; }
    inline void setKParts__MainWindow_KeyReleaseEvent_Callback(KParts__MainWindow_KeyReleaseEvent_Callback cb) { kparts__mainwindow_keyreleaseevent_callback = cb; }
    inline void setKParts__MainWindow_FocusInEvent_Callback(KParts__MainWindow_FocusInEvent_Callback cb) { kparts__mainwindow_focusinevent_callback = cb; }
    inline void setKParts__MainWindow_FocusOutEvent_Callback(KParts__MainWindow_FocusOutEvent_Callback cb) { kparts__mainwindow_focusoutevent_callback = cb; }
    inline void setKParts__MainWindow_EnterEvent_Callback(KParts__MainWindow_EnterEvent_Callback cb) { kparts__mainwindow_enterevent_callback = cb; }
    inline void setKParts__MainWindow_LeaveEvent_Callback(KParts__MainWindow_LeaveEvent_Callback cb) { kparts__mainwindow_leaveevent_callback = cb; }
    inline void setKParts__MainWindow_PaintEvent_Callback(KParts__MainWindow_PaintEvent_Callback cb) { kparts__mainwindow_paintevent_callback = cb; }
    inline void setKParts__MainWindow_MoveEvent_Callback(KParts__MainWindow_MoveEvent_Callback cb) { kparts__mainwindow_moveevent_callback = cb; }
    inline void setKParts__MainWindow_ResizeEvent_Callback(KParts__MainWindow_ResizeEvent_Callback cb) { kparts__mainwindow_resizeevent_callback = cb; }
    inline void setKParts__MainWindow_TabletEvent_Callback(KParts__MainWindow_TabletEvent_Callback cb) { kparts__mainwindow_tabletevent_callback = cb; }
    inline void setKParts__MainWindow_ActionEvent_Callback(KParts__MainWindow_ActionEvent_Callback cb) { kparts__mainwindow_actionevent_callback = cb; }
    inline void setKParts__MainWindow_DragEnterEvent_Callback(KParts__MainWindow_DragEnterEvent_Callback cb) { kparts__mainwindow_dragenterevent_callback = cb; }
    inline void setKParts__MainWindow_DragMoveEvent_Callback(KParts__MainWindow_DragMoveEvent_Callback cb) { kparts__mainwindow_dragmoveevent_callback = cb; }
    inline void setKParts__MainWindow_DragLeaveEvent_Callback(KParts__MainWindow_DragLeaveEvent_Callback cb) { kparts__mainwindow_dragleaveevent_callback = cb; }
    inline void setKParts__MainWindow_DropEvent_Callback(KParts__MainWindow_DropEvent_Callback cb) { kparts__mainwindow_dropevent_callback = cb; }
    inline void setKParts__MainWindow_ShowEvent_Callback(KParts__MainWindow_ShowEvent_Callback cb) { kparts__mainwindow_showevent_callback = cb; }
    inline void setKParts__MainWindow_HideEvent_Callback(KParts__MainWindow_HideEvent_Callback cb) { kparts__mainwindow_hideevent_callback = cb; }
    inline void setKParts__MainWindow_NativeEvent_Callback(KParts__MainWindow_NativeEvent_Callback cb) { kparts__mainwindow_nativeevent_callback = cb; }
    inline void setKParts__MainWindow_ChangeEvent_Callback(KParts__MainWindow_ChangeEvent_Callback cb) { kparts__mainwindow_changeevent_callback = cb; }
    inline void setKParts__MainWindow_Metric_Callback(KParts__MainWindow_Metric_Callback cb) { kparts__mainwindow_metric_callback = cb; }
    inline void setKParts__MainWindow_InitPainter_Callback(KParts__MainWindow_InitPainter_Callback cb) { kparts__mainwindow_initpainter_callback = cb; }
    inline void setKParts__MainWindow_Redirected_Callback(KParts__MainWindow_Redirected_Callback cb) { kparts__mainwindow_redirected_callback = cb; }
    inline void setKParts__MainWindow_SharedPainter_Callback(KParts__MainWindow_SharedPainter_Callback cb) { kparts__mainwindow_sharedpainter_callback = cb; }
    inline void setKParts__MainWindow_InputMethodEvent_Callback(KParts__MainWindow_InputMethodEvent_Callback cb) { kparts__mainwindow_inputmethodevent_callback = cb; }
    inline void setKParts__MainWindow_InputMethodQuery_Callback(KParts__MainWindow_InputMethodQuery_Callback cb) { kparts__mainwindow_inputmethodquery_callback = cb; }
    inline void setKParts__MainWindow_FocusNextPrevChild_Callback(KParts__MainWindow_FocusNextPrevChild_Callback cb) { kparts__mainwindow_focusnextprevchild_callback = cb; }
    inline void setKParts__MainWindow_EventFilter_Callback(KParts__MainWindow_EventFilter_Callback cb) { kparts__mainwindow_eventfilter_callback = cb; }
    inline void setKParts__MainWindow_TimerEvent_Callback(KParts__MainWindow_TimerEvent_Callback cb) { kparts__mainwindow_timerevent_callback = cb; }
    inline void setKParts__MainWindow_ChildEvent_Callback(KParts__MainWindow_ChildEvent_Callback cb) { kparts__mainwindow_childevent_callback = cb; }
    inline void setKParts__MainWindow_CustomEvent_Callback(KParts__MainWindow_CustomEvent_Callback cb) { kparts__mainwindow_customevent_callback = cb; }
    inline void setKParts__MainWindow_ConnectNotify_Callback(KParts__MainWindow_ConnectNotify_Callback cb) { kparts__mainwindow_connectnotify_callback = cb; }
    inline void setKParts__MainWindow_DisconnectNotify_Callback(KParts__MainWindow_DisconnectNotify_Callback cb) { kparts__mainwindow_disconnectnotify_callback = cb; }
    inline void setKParts__MainWindow_ContainerTags_Callback(KParts__MainWindow_ContainerTags_Callback cb) { kparts__mainwindow_containertags_callback = cb; }
    inline void setKParts__MainWindow_CreateContainer_Callback(KParts__MainWindow_CreateContainer_Callback cb) { kparts__mainwindow_createcontainer_callback = cb; }
    inline void setKParts__MainWindow_RemoveContainer_Callback(KParts__MainWindow_RemoveContainer_Callback cb) { kparts__mainwindow_removecontainer_callback = cb; }
    inline void setKParts__MainWindow_CustomTags_Callback(KParts__MainWindow_CustomTags_Callback cb) { kparts__mainwindow_customtags_callback = cb; }
    inline void setKParts__MainWindow_CreateCustomElement_Callback(KParts__MainWindow_CreateCustomElement_Callback cb) { kparts__mainwindow_createcustomelement_callback = cb; }
    inline void setKParts__MainWindow_FinalizeGUI_Callback(KParts__MainWindow_FinalizeGUI_Callback cb) { kparts__mainwindow_finalizegui_callback = cb; }
    inline void setKParts__MainWindow_Action2_Callback(KParts__MainWindow_Action2_Callback cb) { kparts__mainwindow_action2_callback = cb; }
    inline void setKParts__MainWindow_ActionCollection_Callback(KParts__MainWindow_ActionCollection_Callback cb) { kparts__mainwindow_actioncollection_callback = cb; }
    inline void setKParts__MainWindow_ComponentName_Callback(KParts__MainWindow_ComponentName_Callback cb) { kparts__mainwindow_componentname_callback = cb; }
    inline void setKParts__MainWindow_DomDocument_Callback(KParts__MainWindow_DomDocument_Callback cb) { kparts__mainwindow_domdocument_callback = cb; }
    inline void setKParts__MainWindow_XmlFile_Callback(KParts__MainWindow_XmlFile_Callback cb) { kparts__mainwindow_xmlfile_callback = cb; }
    inline void setKParts__MainWindow_LocalXMLFile_Callback(KParts__MainWindow_LocalXMLFile_Callback cb) { kparts__mainwindow_localxmlfile_callback = cb; }
    inline void setKParts__MainWindow_SetComponentName_Callback(KParts__MainWindow_SetComponentName_Callback cb) { kparts__mainwindow_setcomponentname_callback = cb; }
    inline void setKParts__MainWindow_SetXMLFile_Callback(KParts__MainWindow_SetXMLFile_Callback cb) { kparts__mainwindow_setxmlfile_callback = cb; }
    inline void setKParts__MainWindow_SetLocalXMLFile_Callback(KParts__MainWindow_SetLocalXMLFile_Callback cb) { kparts__mainwindow_setlocalxmlfile_callback = cb; }
    inline void setKParts__MainWindow_SetXML_Callback(KParts__MainWindow_SetXML_Callback cb) { kparts__mainwindow_setxml_callback = cb; }
    inline void setKParts__MainWindow_SetDOMDocument_Callback(KParts__MainWindow_SetDOMDocument_Callback cb) { kparts__mainwindow_setdomdocument_callback = cb; }
    inline void setKParts__MainWindow_StateChanged_Callback(KParts__MainWindow_StateChanged_Callback cb) { kparts__mainwindow_statechanged_callback = cb; }
    inline void setKParts__MainWindow_CreateGUI_Callback(KParts__MainWindow_CreateGUI_Callback cb) { kparts__mainwindow_creategui_callback = cb; }
    inline void setKParts__MainWindow_SetWindowTitleHandling_Callback(KParts__MainWindow_SetWindowTitleHandling_Callback cb) { kparts__mainwindow_setwindowtitlehandling_callback = cb; }
    inline void setKParts__MainWindow_CheckAmbiguousShortcuts_Callback(KParts__MainWindow_CheckAmbiguousShortcuts_Callback cb) { kparts__mainwindow_checkambiguousshortcuts_callback = cb; }
    inline void setKParts__MainWindow_SavePropertiesInternal_Callback(KParts__MainWindow_SavePropertiesInternal_Callback cb) { kparts__mainwindow_savepropertiesinternal_callback = cb; }
    inline void setKParts__MainWindow_ReadPropertiesInternal_Callback(KParts__MainWindow_ReadPropertiesInternal_Callback cb) { kparts__mainwindow_readpropertiesinternal_callback = cb; }
    inline void setKParts__MainWindow_SettingsDirty_Callback(KParts__MainWindow_SettingsDirty_Callback cb) { kparts__mainwindow_settingsdirty_callback = cb; }
    inline void setKParts__MainWindow_SaveAutoSaveSettings_Callback(KParts__MainWindow_SaveAutoSaveSettings_Callback cb) { kparts__mainwindow_saveautosavesettings_callback = cb; }
    inline void setKParts__MainWindow_UpdateMicroFocus_Callback(KParts__MainWindow_UpdateMicroFocus_Callback cb) { kparts__mainwindow_updatemicrofocus_callback = cb; }
    inline void setKParts__MainWindow_Create_Callback(KParts__MainWindow_Create_Callback cb) { kparts__mainwindow_create_callback = cb; }
    inline void setKParts__MainWindow_Destroy_Callback(KParts__MainWindow_Destroy_Callback cb) { kparts__mainwindow_destroy_callback = cb; }
    inline void setKParts__MainWindow_FocusNextChild_Callback(KParts__MainWindow_FocusNextChild_Callback cb) { kparts__mainwindow_focusnextchild_callback = cb; }
    inline void setKParts__MainWindow_FocusPreviousChild_Callback(KParts__MainWindow_FocusPreviousChild_Callback cb) { kparts__mainwindow_focuspreviouschild_callback = cb; }
    inline void setKParts__MainWindow_Sender_Callback(KParts__MainWindow_Sender_Callback cb) { kparts__mainwindow_sender_callback = cb; }
    inline void setKParts__MainWindow_SenderSignalIndex_Callback(KParts__MainWindow_SenderSignalIndex_Callback cb) { kparts__mainwindow_sendersignalindex_callback = cb; }
    inline void setKParts__MainWindow_Receivers_Callback(KParts__MainWindow_Receivers_Callback cb) { kparts__mainwindow_receivers_callback = cb; }
    inline void setKParts__MainWindow_IsSignalConnected_Callback(KParts__MainWindow_IsSignalConnected_Callback cb) { kparts__mainwindow_issignalconnected_callback = cb; }
    inline void setKParts__MainWindow_GetDecodedMetricF_Callback(KParts__MainWindow_GetDecodedMetricF_Callback cb) { kparts__mainwindow_getdecodedmetricf_callback = cb; }
    inline void setKParts__MainWindow_StandardsXmlFileLocation_Callback(KParts__MainWindow_StandardsXmlFileLocation_Callback cb) { kparts__mainwindow_standardsxmlfilelocation_callback = cb; }
    inline void setKParts__MainWindow_LoadStandardsXmlFile_Callback(KParts__MainWindow_LoadStandardsXmlFile_Callback cb) { kparts__mainwindow_loadstandardsxmlfile_callback = cb; }

    // Base flag setters
    inline void setKParts__MainWindow_Metacall_IsBase(bool value) const { kparts__mainwindow_metacall_isbase = value; }
    inline void setKParts__MainWindow_ConfigureToolbars_IsBase(bool value) const { kparts__mainwindow_configuretoolbars_isbase = value; }
    inline void setKParts__MainWindow_SlotSetStatusBarText_IsBase(bool value) const { kparts__mainwindow_slotsetstatusbartext_isbase = value; }
    inline void setKParts__MainWindow_SaveNewToolbarConfig_IsBase(bool value) const { kparts__mainwindow_savenewtoolbarconfig_isbase = value; }
    inline void setKParts__MainWindow_CreateShellGUI_IsBase(bool value) const { kparts__mainwindow_createshellgui_isbase = value; }
    inline void setKParts__MainWindow_GuiFactory_IsBase(bool value) const { kparts__mainwindow_guifactory_isbase = value; }
    inline void setKParts__MainWindow_ApplyMainWindowSettings_IsBase(bool value) const { kparts__mainwindow_applymainwindowsettings_isbase = value; }
    inline void setKParts__MainWindow_SlotStateChanged_IsBase(bool value) const { kparts__mainwindow_slotstatechanged_isbase = value; }
    inline void setKParts__MainWindow_Event_IsBase(bool value) const { kparts__mainwindow_event_isbase = value; }
    inline void setKParts__MainWindow_SetCaption_IsBase(bool value) const { kparts__mainwindow_setcaption_isbase = value; }
    inline void setKParts__MainWindow_SetPlainCaption_IsBase(bool value) const { kparts__mainwindow_setplaincaption_isbase = value; }
    inline void setKParts__MainWindow_KeyPressEvent_IsBase(bool value) const { kparts__mainwindow_keypressevent_isbase = value; }
    inline void setKParts__MainWindow_CloseEvent_IsBase(bool value) const { kparts__mainwindow_closeevent_isbase = value; }
    inline void setKParts__MainWindow_QueryClose_IsBase(bool value) const { kparts__mainwindow_queryclose_isbase = value; }
    inline void setKParts__MainWindow_SaveProperties_IsBase(bool value) const { kparts__mainwindow_saveproperties_isbase = value; }
    inline void setKParts__MainWindow_ReadProperties_IsBase(bool value) const { kparts__mainwindow_readproperties_isbase = value; }
    inline void setKParts__MainWindow_SaveGlobalProperties_IsBase(bool value) const { kparts__mainwindow_saveglobalproperties_isbase = value; }
    inline void setKParts__MainWindow_ReadGlobalProperties_IsBase(bool value) const { kparts__mainwindow_readglobalproperties_isbase = value; }
    inline void setKParts__MainWindow_CreatePopupMenu_IsBase(bool value) const { kparts__mainwindow_createpopupmenu_isbase = value; }
    inline void setKParts__MainWindow_ContextMenuEvent_IsBase(bool value) const { kparts__mainwindow_contextmenuevent_isbase = value; }
    inline void setKParts__MainWindow_DevType_IsBase(bool value) const { kparts__mainwindow_devtype_isbase = value; }
    inline void setKParts__MainWindow_SetVisible_IsBase(bool value) const { kparts__mainwindow_setvisible_isbase = value; }
    inline void setKParts__MainWindow_SizeHint_IsBase(bool value) const { kparts__mainwindow_sizehint_isbase = value; }
    inline void setKParts__MainWindow_MinimumSizeHint_IsBase(bool value) const { kparts__mainwindow_minimumsizehint_isbase = value; }
    inline void setKParts__MainWindow_HeightForWidth_IsBase(bool value) const { kparts__mainwindow_heightforwidth_isbase = value; }
    inline void setKParts__MainWindow_HasHeightForWidth_IsBase(bool value) const { kparts__mainwindow_hasheightforwidth_isbase = value; }
    inline void setKParts__MainWindow_PaintEngine_IsBase(bool value) const { kparts__mainwindow_paintengine_isbase = value; }
    inline void setKParts__MainWindow_MousePressEvent_IsBase(bool value) const { kparts__mainwindow_mousepressevent_isbase = value; }
    inline void setKParts__MainWindow_MouseReleaseEvent_IsBase(bool value) const { kparts__mainwindow_mousereleaseevent_isbase = value; }
    inline void setKParts__MainWindow_MouseDoubleClickEvent_IsBase(bool value) const { kparts__mainwindow_mousedoubleclickevent_isbase = value; }
    inline void setKParts__MainWindow_MouseMoveEvent_IsBase(bool value) const { kparts__mainwindow_mousemoveevent_isbase = value; }
    inline void setKParts__MainWindow_WheelEvent_IsBase(bool value) const { kparts__mainwindow_wheelevent_isbase = value; }
    inline void setKParts__MainWindow_KeyReleaseEvent_IsBase(bool value) const { kparts__mainwindow_keyreleaseevent_isbase = value; }
    inline void setKParts__MainWindow_FocusInEvent_IsBase(bool value) const { kparts__mainwindow_focusinevent_isbase = value; }
    inline void setKParts__MainWindow_FocusOutEvent_IsBase(bool value) const { kparts__mainwindow_focusoutevent_isbase = value; }
    inline void setKParts__MainWindow_EnterEvent_IsBase(bool value) const { kparts__mainwindow_enterevent_isbase = value; }
    inline void setKParts__MainWindow_LeaveEvent_IsBase(bool value) const { kparts__mainwindow_leaveevent_isbase = value; }
    inline void setKParts__MainWindow_PaintEvent_IsBase(bool value) const { kparts__mainwindow_paintevent_isbase = value; }
    inline void setKParts__MainWindow_MoveEvent_IsBase(bool value) const { kparts__mainwindow_moveevent_isbase = value; }
    inline void setKParts__MainWindow_ResizeEvent_IsBase(bool value) const { kparts__mainwindow_resizeevent_isbase = value; }
    inline void setKParts__MainWindow_TabletEvent_IsBase(bool value) const { kparts__mainwindow_tabletevent_isbase = value; }
    inline void setKParts__MainWindow_ActionEvent_IsBase(bool value) const { kparts__mainwindow_actionevent_isbase = value; }
    inline void setKParts__MainWindow_DragEnterEvent_IsBase(bool value) const { kparts__mainwindow_dragenterevent_isbase = value; }
    inline void setKParts__MainWindow_DragMoveEvent_IsBase(bool value) const { kparts__mainwindow_dragmoveevent_isbase = value; }
    inline void setKParts__MainWindow_DragLeaveEvent_IsBase(bool value) const { kparts__mainwindow_dragleaveevent_isbase = value; }
    inline void setKParts__MainWindow_DropEvent_IsBase(bool value) const { kparts__mainwindow_dropevent_isbase = value; }
    inline void setKParts__MainWindow_ShowEvent_IsBase(bool value) const { kparts__mainwindow_showevent_isbase = value; }
    inline void setKParts__MainWindow_HideEvent_IsBase(bool value) const { kparts__mainwindow_hideevent_isbase = value; }
    inline void setKParts__MainWindow_NativeEvent_IsBase(bool value) const { kparts__mainwindow_nativeevent_isbase = value; }
    inline void setKParts__MainWindow_ChangeEvent_IsBase(bool value) const { kparts__mainwindow_changeevent_isbase = value; }
    inline void setKParts__MainWindow_Metric_IsBase(bool value) const { kparts__mainwindow_metric_isbase = value; }
    inline void setKParts__MainWindow_InitPainter_IsBase(bool value) const { kparts__mainwindow_initpainter_isbase = value; }
    inline void setKParts__MainWindow_Redirected_IsBase(bool value) const { kparts__mainwindow_redirected_isbase = value; }
    inline void setKParts__MainWindow_SharedPainter_IsBase(bool value) const { kparts__mainwindow_sharedpainter_isbase = value; }
    inline void setKParts__MainWindow_InputMethodEvent_IsBase(bool value) const { kparts__mainwindow_inputmethodevent_isbase = value; }
    inline void setKParts__MainWindow_InputMethodQuery_IsBase(bool value) const { kparts__mainwindow_inputmethodquery_isbase = value; }
    inline void setKParts__MainWindow_FocusNextPrevChild_IsBase(bool value) const { kparts__mainwindow_focusnextprevchild_isbase = value; }
    inline void setKParts__MainWindow_EventFilter_IsBase(bool value) const { kparts__mainwindow_eventfilter_isbase = value; }
    inline void setKParts__MainWindow_TimerEvent_IsBase(bool value) const { kparts__mainwindow_timerevent_isbase = value; }
    inline void setKParts__MainWindow_ChildEvent_IsBase(bool value) const { kparts__mainwindow_childevent_isbase = value; }
    inline void setKParts__MainWindow_CustomEvent_IsBase(bool value) const { kparts__mainwindow_customevent_isbase = value; }
    inline void setKParts__MainWindow_ConnectNotify_IsBase(bool value) const { kparts__mainwindow_connectnotify_isbase = value; }
    inline void setKParts__MainWindow_DisconnectNotify_IsBase(bool value) const { kparts__mainwindow_disconnectnotify_isbase = value; }
    inline void setKParts__MainWindow_ContainerTags_IsBase(bool value) const { kparts__mainwindow_containertags_isbase = value; }
    inline void setKParts__MainWindow_CreateContainer_IsBase(bool value) const { kparts__mainwindow_createcontainer_isbase = value; }
    inline void setKParts__MainWindow_RemoveContainer_IsBase(bool value) const { kparts__mainwindow_removecontainer_isbase = value; }
    inline void setKParts__MainWindow_CustomTags_IsBase(bool value) const { kparts__mainwindow_customtags_isbase = value; }
    inline void setKParts__MainWindow_CreateCustomElement_IsBase(bool value) const { kparts__mainwindow_createcustomelement_isbase = value; }
    inline void setKParts__MainWindow_FinalizeGUI_IsBase(bool value) const { kparts__mainwindow_finalizegui_isbase = value; }
    inline void setKParts__MainWindow_Action2_IsBase(bool value) const { kparts__mainwindow_action2_isbase = value; }
    inline void setKParts__MainWindow_ActionCollection_IsBase(bool value) const { kparts__mainwindow_actioncollection_isbase = value; }
    inline void setKParts__MainWindow_ComponentName_IsBase(bool value) const { kparts__mainwindow_componentname_isbase = value; }
    inline void setKParts__MainWindow_DomDocument_IsBase(bool value) const { kparts__mainwindow_domdocument_isbase = value; }
    inline void setKParts__MainWindow_XmlFile_IsBase(bool value) const { kparts__mainwindow_xmlfile_isbase = value; }
    inline void setKParts__MainWindow_LocalXMLFile_IsBase(bool value) const { kparts__mainwindow_localxmlfile_isbase = value; }
    inline void setKParts__MainWindow_SetComponentName_IsBase(bool value) const { kparts__mainwindow_setcomponentname_isbase = value; }
    inline void setKParts__MainWindow_SetXMLFile_IsBase(bool value) const { kparts__mainwindow_setxmlfile_isbase = value; }
    inline void setKParts__MainWindow_SetLocalXMLFile_IsBase(bool value) const { kparts__mainwindow_setlocalxmlfile_isbase = value; }
    inline void setKParts__MainWindow_SetXML_IsBase(bool value) const { kparts__mainwindow_setxml_isbase = value; }
    inline void setKParts__MainWindow_SetDOMDocument_IsBase(bool value) const { kparts__mainwindow_setdomdocument_isbase = value; }
    inline void setKParts__MainWindow_StateChanged_IsBase(bool value) const { kparts__mainwindow_statechanged_isbase = value; }
    inline void setKParts__MainWindow_CreateGUI_IsBase(bool value) const { kparts__mainwindow_creategui_isbase = value; }
    inline void setKParts__MainWindow_SetWindowTitleHandling_IsBase(bool value) const { kparts__mainwindow_setwindowtitlehandling_isbase = value; }
    inline void setKParts__MainWindow_CheckAmbiguousShortcuts_IsBase(bool value) const { kparts__mainwindow_checkambiguousshortcuts_isbase = value; }
    inline void setKParts__MainWindow_SavePropertiesInternal_IsBase(bool value) const { kparts__mainwindow_savepropertiesinternal_isbase = value; }
    inline void setKParts__MainWindow_ReadPropertiesInternal_IsBase(bool value) const { kparts__mainwindow_readpropertiesinternal_isbase = value; }
    inline void setKParts__MainWindow_SettingsDirty_IsBase(bool value) const { kparts__mainwindow_settingsdirty_isbase = value; }
    inline void setKParts__MainWindow_SaveAutoSaveSettings_IsBase(bool value) const { kparts__mainwindow_saveautosavesettings_isbase = value; }
    inline void setKParts__MainWindow_UpdateMicroFocus_IsBase(bool value) const { kparts__mainwindow_updatemicrofocus_isbase = value; }
    inline void setKParts__MainWindow_Create_IsBase(bool value) const { kparts__mainwindow_create_isbase = value; }
    inline void setKParts__MainWindow_Destroy_IsBase(bool value) const { kparts__mainwindow_destroy_isbase = value; }
    inline void setKParts__MainWindow_FocusNextChild_IsBase(bool value) const { kparts__mainwindow_focusnextchild_isbase = value; }
    inline void setKParts__MainWindow_FocusPreviousChild_IsBase(bool value) const { kparts__mainwindow_focuspreviouschild_isbase = value; }
    inline void setKParts__MainWindow_Sender_IsBase(bool value) const { kparts__mainwindow_sender_isbase = value; }
    inline void setKParts__MainWindow_SenderSignalIndex_IsBase(bool value) const { kparts__mainwindow_sendersignalindex_isbase = value; }
    inline void setKParts__MainWindow_Receivers_IsBase(bool value) const { kparts__mainwindow_receivers_isbase = value; }
    inline void setKParts__MainWindow_IsSignalConnected_IsBase(bool value) const { kparts__mainwindow_issignalconnected_isbase = value; }
    inline void setKParts__MainWindow_GetDecodedMetricF_IsBase(bool value) const { kparts__mainwindow_getdecodedmetricf_isbase = value; }
    inline void setKParts__MainWindow_StandardsXmlFileLocation_IsBase(bool value) const { kparts__mainwindow_standardsxmlfilelocation_isbase = value; }
    inline void setKParts__MainWindow_LoadStandardsXmlFile_IsBase(bool value) const { kparts__mainwindow_loadstandardsxmlfile_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__mainwindow_metacall_isbase) {
            kparts__mainwindow_metacall_isbase = false;
            return KParts__MainWindow::qt_metacall(param1, param2, param3);
        } else if (kparts__mainwindow_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kparts__mainwindow_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KParts__MainWindow::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void configureToolbars() override {
        if (kparts__mainwindow_configuretoolbars_isbase) {
            kparts__mainwindow_configuretoolbars_isbase = false;
            KParts__MainWindow::configureToolbars();
        } else if (kparts__mainwindow_configuretoolbars_callback != nullptr) {
            kparts__mainwindow_configuretoolbars_callback();
        } else {
            KParts__MainWindow::configureToolbars();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotSetStatusBarText(const QString& param1) override {
        if (kparts__mainwindow_slotsetstatusbartext_isbase) {
            kparts__mainwindow_slotsetstatusbartext_isbase = false;
            KParts__MainWindow::slotSetStatusBarText(param1);
        } else if (kparts__mainwindow_slotsetstatusbartext_callback != nullptr) {
            const QString param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            libqt_string param1_str;
            param1_str.len = param1_b.length();
            param1_str.data = static_cast<const char*>(malloc(param1_str.len + 1));
            memcpy((void*)param1_str.data, param1_b.data(), param1_str.len);
            ((char*)param1_str.data)[param1_str.len] = '\0';
            libqt_string cbval1 = param1_str;

            kparts__mainwindow_slotsetstatusbartext_callback(this, cbval1);
        } else {
            KParts__MainWindow::slotSetStatusBarText(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveNewToolbarConfig() override {
        if (kparts__mainwindow_savenewtoolbarconfig_isbase) {
            kparts__mainwindow_savenewtoolbarconfig_isbase = false;
            KParts__MainWindow::saveNewToolbarConfig();
        } else if (kparts__mainwindow_savenewtoolbarconfig_callback != nullptr) {
            kparts__mainwindow_savenewtoolbarconfig_callback();
        } else {
            KParts__MainWindow::saveNewToolbarConfig();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void createShellGUI(bool create) override {
        if (kparts__mainwindow_createshellgui_isbase) {
            kparts__mainwindow_createshellgui_isbase = false;
            KParts__MainWindow::createShellGUI(create);
        } else if (kparts__mainwindow_createshellgui_callback != nullptr) {
            bool cbval1 = create;

            kparts__mainwindow_createshellgui_callback(this, cbval1);
        } else {
            KParts__MainWindow::createShellGUI(create);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KXMLGUIFactory* guiFactory() override {
        if (kparts__mainwindow_guifactory_isbase) {
            kparts__mainwindow_guifactory_isbase = false;
            return KParts__MainWindow::guiFactory();
        } else if (kparts__mainwindow_guifactory_callback != nullptr) {
            KXMLGUIFactory* callback_ret = kparts__mainwindow_guifactory_callback();
            return callback_ret;
        } else {
            return KParts__MainWindow::guiFactory();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyMainWindowSettings(const KConfigGroup& config) override {
        if (kparts__mainwindow_applymainwindowsettings_isbase) {
            kparts__mainwindow_applymainwindowsettings_isbase = false;
            KParts__MainWindow::applyMainWindowSettings(config);
        } else if (kparts__mainwindow_applymainwindowsettings_callback != nullptr) {
            const KConfigGroup& config_ret = config;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&config_ret);

            kparts__mainwindow_applymainwindowsettings_callback(this, cbval1);
        } else {
            KParts__MainWindow::applyMainWindowSettings(config);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotStateChanged(const QString& newstate) override {
        if (kparts__mainwindow_slotstatechanged_isbase) {
            kparts__mainwindow_slotstatechanged_isbase = false;
            KParts__MainWindow::slotStateChanged(newstate);
        } else if (kparts__mainwindow_slotstatechanged_callback != nullptr) {
            const QString newstate_ret = newstate;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray newstate_b = newstate_ret.toUtf8();
            libqt_string newstate_str;
            newstate_str.len = newstate_b.length();
            newstate_str.data = static_cast<const char*>(malloc(newstate_str.len + 1));
            memcpy((void*)newstate_str.data, newstate_b.data(), newstate_str.len);
            ((char*)newstate_str.data)[newstate_str.len] = '\0';
            libqt_string cbval1 = newstate_str;

            kparts__mainwindow_slotstatechanged_callback(this, cbval1);
        } else {
            KParts__MainWindow::slotStateChanged(newstate);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__mainwindow_event_isbase) {
            kparts__mainwindow_event_isbase = false;
            return KParts__MainWindow::event(event);
        } else if (kparts__mainwindow_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kparts__mainwindow_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__MainWindow::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaption(const QString& caption) override {
        if (kparts__mainwindow_setcaption_isbase) {
            kparts__mainwindow_setcaption_isbase = false;
            KParts__MainWindow::setCaption(caption);
        } else if (kparts__mainwindow_setcaption_callback != nullptr) {
            const QString caption_ret = caption;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray caption_b = caption_ret.toUtf8();
            libqt_string caption_str;
            caption_str.len = caption_b.length();
            caption_str.data = static_cast<const char*>(malloc(caption_str.len + 1));
            memcpy((void*)caption_str.data, caption_b.data(), caption_str.len);
            ((char*)caption_str.data)[caption_str.len] = '\0';
            libqt_string cbval1 = caption_str;

            kparts__mainwindow_setcaption_callback(this, cbval1);
        } else {
            KParts__MainWindow::setCaption(caption);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPlainCaption(const QString& caption) override {
        if (kparts__mainwindow_setplaincaption_isbase) {
            kparts__mainwindow_setplaincaption_isbase = false;
            KParts__MainWindow::setPlainCaption(caption);
        } else if (kparts__mainwindow_setplaincaption_callback != nullptr) {
            const QString caption_ret = caption;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray caption_b = caption_ret.toUtf8();
            libqt_string caption_str;
            caption_str.len = caption_b.length();
            caption_str.data = static_cast<const char*>(malloc(caption_str.len + 1));
            memcpy((void*)caption_str.data, caption_b.data(), caption_str.len);
            ((char*)caption_str.data)[caption_str.len] = '\0';
            libqt_string cbval1 = caption_str;

            kparts__mainwindow_setplaincaption_callback(this, cbval1);
        } else {
            KParts__MainWindow::setPlainCaption(caption);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* keyEvent) override {
        if (kparts__mainwindow_keypressevent_isbase) {
            kparts__mainwindow_keypressevent_isbase = false;
            KParts__MainWindow::keyPressEvent(keyEvent);
        } else if (kparts__mainwindow_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = keyEvent;

            kparts__mainwindow_keypressevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::keyPressEvent(keyEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kparts__mainwindow_closeevent_isbase) {
            kparts__mainwindow_closeevent_isbase = false;
            KParts__MainWindow::closeEvent(param1);
        } else if (kparts__mainwindow_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            kparts__mainwindow_closeevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool queryClose() override {
        if (kparts__mainwindow_queryclose_isbase) {
            kparts__mainwindow_queryclose_isbase = false;
            return KParts__MainWindow::queryClose();
        } else if (kparts__mainwindow_queryclose_callback != nullptr) {
            bool callback_ret = kparts__mainwindow_queryclose_callback();
            return callback_ret;
        } else {
            return KParts__MainWindow::queryClose();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveProperties(KConfigGroup& param1) override {
        if (kparts__mainwindow_saveproperties_isbase) {
            kparts__mainwindow_saveproperties_isbase = false;
            KParts__MainWindow::saveProperties(param1);
        } else if (kparts__mainwindow_saveproperties_callback != nullptr) {
            KConfigGroup& param1_ret = param1;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = &param1_ret;

            kparts__mainwindow_saveproperties_callback(this, cbval1);
        } else {
            KParts__MainWindow::saveProperties(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void readProperties(const KConfigGroup& param1) override {
        if (kparts__mainwindow_readproperties_isbase) {
            kparts__mainwindow_readproperties_isbase = false;
            KParts__MainWindow::readProperties(param1);
        } else if (kparts__mainwindow_readproperties_callback != nullptr) {
            const KConfigGroup& param1_ret = param1;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&param1_ret);

            kparts__mainwindow_readproperties_callback(this, cbval1);
        } else {
            KParts__MainWindow::readProperties(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveGlobalProperties(KConfig* sessionConfig) override {
        if (kparts__mainwindow_saveglobalproperties_isbase) {
            kparts__mainwindow_saveglobalproperties_isbase = false;
            KParts__MainWindow::saveGlobalProperties(sessionConfig);
        } else if (kparts__mainwindow_saveglobalproperties_callback != nullptr) {
            KConfig* cbval1 = sessionConfig;

            kparts__mainwindow_saveglobalproperties_callback(this, cbval1);
        } else {
            KParts__MainWindow::saveGlobalProperties(sessionConfig);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void readGlobalProperties(KConfig* sessionConfig) override {
        if (kparts__mainwindow_readglobalproperties_isbase) {
            kparts__mainwindow_readglobalproperties_isbase = false;
            KParts__MainWindow::readGlobalProperties(sessionConfig);
        } else if (kparts__mainwindow_readglobalproperties_callback != nullptr) {
            KConfig* cbval1 = sessionConfig;

            kparts__mainwindow_readglobalproperties_callback(this, cbval1);
        } else {
            KParts__MainWindow::readGlobalProperties(sessionConfig);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMenu* createPopupMenu() override {
        if (kparts__mainwindow_createpopupmenu_isbase) {
            kparts__mainwindow_createpopupmenu_isbase = false;
            return KParts__MainWindow::createPopupMenu();
        } else if (kparts__mainwindow_createpopupmenu_callback != nullptr) {
            QMenu* callback_ret = kparts__mainwindow_createpopupmenu_callback();
            return callback_ret;
        } else {
            return KParts__MainWindow::createPopupMenu();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kparts__mainwindow_contextmenuevent_isbase) {
            kparts__mainwindow_contextmenuevent_isbase = false;
            KParts__MainWindow::contextMenuEvent(event);
        } else if (kparts__mainwindow_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kparts__mainwindow_contextmenuevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kparts__mainwindow_devtype_isbase) {
            kparts__mainwindow_devtype_isbase = false;
            return KParts__MainWindow::devType();
        } else if (kparts__mainwindow_devtype_callback != nullptr) {
            int callback_ret = kparts__mainwindow_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KParts__MainWindow::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kparts__mainwindow_setvisible_isbase) {
            kparts__mainwindow_setvisible_isbase = false;
            KParts__MainWindow::setVisible(visible);
        } else if (kparts__mainwindow_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kparts__mainwindow_setvisible_callback(this, cbval1);
        } else {
            KParts__MainWindow::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kparts__mainwindow_sizehint_isbase) {
            kparts__mainwindow_sizehint_isbase = false;
            return KParts__MainWindow::sizeHint();
        } else if (kparts__mainwindow_sizehint_callback != nullptr) {
            QSize* callback_ret = kparts__mainwindow_sizehint_callback();
            return *callback_ret;
        } else {
            return KParts__MainWindow::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kparts__mainwindow_minimumsizehint_isbase) {
            kparts__mainwindow_minimumsizehint_isbase = false;
            return KParts__MainWindow::minimumSizeHint();
        } else if (kparts__mainwindow_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kparts__mainwindow_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KParts__MainWindow::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kparts__mainwindow_heightforwidth_isbase) {
            kparts__mainwindow_heightforwidth_isbase = false;
            return KParts__MainWindow::heightForWidth(param1);
        } else if (kparts__mainwindow_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kparts__mainwindow_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KParts__MainWindow::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kparts__mainwindow_hasheightforwidth_isbase) {
            kparts__mainwindow_hasheightforwidth_isbase = false;
            return KParts__MainWindow::hasHeightForWidth();
        } else if (kparts__mainwindow_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kparts__mainwindow_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KParts__MainWindow::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kparts__mainwindow_paintengine_isbase) {
            kparts__mainwindow_paintengine_isbase = false;
            return KParts__MainWindow::paintEngine();
        } else if (kparts__mainwindow_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kparts__mainwindow_paintengine_callback();
            return callback_ret;
        } else {
            return KParts__MainWindow::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kparts__mainwindow_mousepressevent_isbase) {
            kparts__mainwindow_mousepressevent_isbase = false;
            KParts__MainWindow::mousePressEvent(event);
        } else if (kparts__mainwindow_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kparts__mainwindow_mousepressevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kparts__mainwindow_mousereleaseevent_isbase) {
            kparts__mainwindow_mousereleaseevent_isbase = false;
            KParts__MainWindow::mouseReleaseEvent(event);
        } else if (kparts__mainwindow_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kparts__mainwindow_mousereleaseevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kparts__mainwindow_mousedoubleclickevent_isbase) {
            kparts__mainwindow_mousedoubleclickevent_isbase = false;
            KParts__MainWindow::mouseDoubleClickEvent(event);
        } else if (kparts__mainwindow_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kparts__mainwindow_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kparts__mainwindow_mousemoveevent_isbase) {
            kparts__mainwindow_mousemoveevent_isbase = false;
            KParts__MainWindow::mouseMoveEvent(event);
        } else if (kparts__mainwindow_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kparts__mainwindow_mousemoveevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kparts__mainwindow_wheelevent_isbase) {
            kparts__mainwindow_wheelevent_isbase = false;
            KParts__MainWindow::wheelEvent(event);
        } else if (kparts__mainwindow_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kparts__mainwindow_wheelevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kparts__mainwindow_keyreleaseevent_isbase) {
            kparts__mainwindow_keyreleaseevent_isbase = false;
            KParts__MainWindow::keyReleaseEvent(event);
        } else if (kparts__mainwindow_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kparts__mainwindow_keyreleaseevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kparts__mainwindow_focusinevent_isbase) {
            kparts__mainwindow_focusinevent_isbase = false;
            KParts__MainWindow::focusInEvent(event);
        } else if (kparts__mainwindow_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kparts__mainwindow_focusinevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kparts__mainwindow_focusoutevent_isbase) {
            kparts__mainwindow_focusoutevent_isbase = false;
            KParts__MainWindow::focusOutEvent(event);
        } else if (kparts__mainwindow_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kparts__mainwindow_focusoutevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kparts__mainwindow_enterevent_isbase) {
            kparts__mainwindow_enterevent_isbase = false;
            KParts__MainWindow::enterEvent(event);
        } else if (kparts__mainwindow_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kparts__mainwindow_enterevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kparts__mainwindow_leaveevent_isbase) {
            kparts__mainwindow_leaveevent_isbase = false;
            KParts__MainWindow::leaveEvent(event);
        } else if (kparts__mainwindow_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kparts__mainwindow_leaveevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kparts__mainwindow_paintevent_isbase) {
            kparts__mainwindow_paintevent_isbase = false;
            KParts__MainWindow::paintEvent(event);
        } else if (kparts__mainwindow_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kparts__mainwindow_paintevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kparts__mainwindow_moveevent_isbase) {
            kparts__mainwindow_moveevent_isbase = false;
            KParts__MainWindow::moveEvent(event);
        } else if (kparts__mainwindow_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kparts__mainwindow_moveevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kparts__mainwindow_resizeevent_isbase) {
            kparts__mainwindow_resizeevent_isbase = false;
            KParts__MainWindow::resizeEvent(event);
        } else if (kparts__mainwindow_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kparts__mainwindow_resizeevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kparts__mainwindow_tabletevent_isbase) {
            kparts__mainwindow_tabletevent_isbase = false;
            KParts__MainWindow::tabletEvent(event);
        } else if (kparts__mainwindow_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kparts__mainwindow_tabletevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kparts__mainwindow_actionevent_isbase) {
            kparts__mainwindow_actionevent_isbase = false;
            KParts__MainWindow::actionEvent(event);
        } else if (kparts__mainwindow_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kparts__mainwindow_actionevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kparts__mainwindow_dragenterevent_isbase) {
            kparts__mainwindow_dragenterevent_isbase = false;
            KParts__MainWindow::dragEnterEvent(event);
        } else if (kparts__mainwindow_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kparts__mainwindow_dragenterevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kparts__mainwindow_dragmoveevent_isbase) {
            kparts__mainwindow_dragmoveevent_isbase = false;
            KParts__MainWindow::dragMoveEvent(event);
        } else if (kparts__mainwindow_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kparts__mainwindow_dragmoveevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kparts__mainwindow_dragleaveevent_isbase) {
            kparts__mainwindow_dragleaveevent_isbase = false;
            KParts__MainWindow::dragLeaveEvent(event);
        } else if (kparts__mainwindow_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kparts__mainwindow_dragleaveevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kparts__mainwindow_dropevent_isbase) {
            kparts__mainwindow_dropevent_isbase = false;
            KParts__MainWindow::dropEvent(event);
        } else if (kparts__mainwindow_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kparts__mainwindow_dropevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kparts__mainwindow_showevent_isbase) {
            kparts__mainwindow_showevent_isbase = false;
            KParts__MainWindow::showEvent(event);
        } else if (kparts__mainwindow_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kparts__mainwindow_showevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kparts__mainwindow_hideevent_isbase) {
            kparts__mainwindow_hideevent_isbase = false;
            KParts__MainWindow::hideEvent(event);
        } else if (kparts__mainwindow_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kparts__mainwindow_hideevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kparts__mainwindow_nativeevent_isbase) {
            kparts__mainwindow_nativeevent_isbase = false;
            return KParts__MainWindow::nativeEvent(eventType, message, result);
        } else if (kparts__mainwindow_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<const char*>(malloc(eventType_str.len + 1));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            ((char*)eventType_str.data)[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = kparts__mainwindow_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KParts__MainWindow::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kparts__mainwindow_changeevent_isbase) {
            kparts__mainwindow_changeevent_isbase = false;
            KParts__MainWindow::changeEvent(param1);
        } else if (kparts__mainwindow_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kparts__mainwindow_changeevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kparts__mainwindow_metric_isbase) {
            kparts__mainwindow_metric_isbase = false;
            return KParts__MainWindow::metric(param1);
        } else if (kparts__mainwindow_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kparts__mainwindow_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KParts__MainWindow::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kparts__mainwindow_initpainter_isbase) {
            kparts__mainwindow_initpainter_isbase = false;
            KParts__MainWindow::initPainter(painter);
        } else if (kparts__mainwindow_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kparts__mainwindow_initpainter_callback(this, cbval1);
        } else {
            KParts__MainWindow::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kparts__mainwindow_redirected_isbase) {
            kparts__mainwindow_redirected_isbase = false;
            return KParts__MainWindow::redirected(offset);
        } else if (kparts__mainwindow_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kparts__mainwindow_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__MainWindow::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kparts__mainwindow_sharedpainter_isbase) {
            kparts__mainwindow_sharedpainter_isbase = false;
            return KParts__MainWindow::sharedPainter();
        } else if (kparts__mainwindow_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kparts__mainwindow_sharedpainter_callback();
            return callback_ret;
        } else {
            return KParts__MainWindow::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kparts__mainwindow_inputmethodevent_isbase) {
            kparts__mainwindow_inputmethodevent_isbase = false;
            KParts__MainWindow::inputMethodEvent(param1);
        } else if (kparts__mainwindow_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kparts__mainwindow_inputmethodevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kparts__mainwindow_inputmethodquery_isbase) {
            kparts__mainwindow_inputmethodquery_isbase = false;
            return KParts__MainWindow::inputMethodQuery(param1);
        } else if (kparts__mainwindow_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kparts__mainwindow_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KParts__MainWindow::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kparts__mainwindow_focusnextprevchild_isbase) {
            kparts__mainwindow_focusnextprevchild_isbase = false;
            return KParts__MainWindow::focusNextPrevChild(next);
        } else if (kparts__mainwindow_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kparts__mainwindow_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__MainWindow::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kparts__mainwindow_eventfilter_isbase) {
            kparts__mainwindow_eventfilter_isbase = false;
            return KParts__MainWindow::eventFilter(watched, event);
        } else if (kparts__mainwindow_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kparts__mainwindow_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KParts__MainWindow::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__mainwindow_timerevent_isbase) {
            kparts__mainwindow_timerevent_isbase = false;
            KParts__MainWindow::timerEvent(event);
        } else if (kparts__mainwindow_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kparts__mainwindow_timerevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__mainwindow_childevent_isbase) {
            kparts__mainwindow_childevent_isbase = false;
            KParts__MainWindow::childEvent(event);
        } else if (kparts__mainwindow_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kparts__mainwindow_childevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__mainwindow_customevent_isbase) {
            kparts__mainwindow_customevent_isbase = false;
            KParts__MainWindow::customEvent(event);
        } else if (kparts__mainwindow_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kparts__mainwindow_customevent_callback(this, cbval1);
        } else {
            KParts__MainWindow::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__mainwindow_connectnotify_isbase) {
            kparts__mainwindow_connectnotify_isbase = false;
            KParts__MainWindow::connectNotify(signal);
        } else if (kparts__mainwindow_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kparts__mainwindow_connectnotify_callback(this, cbval1);
        } else {
            KParts__MainWindow::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__mainwindow_disconnectnotify_isbase) {
            kparts__mainwindow_disconnectnotify_isbase = false;
            KParts__MainWindow::disconnectNotify(signal);
        } else if (kparts__mainwindow_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kparts__mainwindow_disconnectnotify_callback(this, cbval1);
        } else {
            KParts__MainWindow::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> containerTags() const override {
        if (kparts__mainwindow_containertags_isbase) {
            kparts__mainwindow_containertags_isbase = false;
            return KParts__MainWindow::containerTags();
        } else if (kparts__mainwindow_containertags_callback != nullptr) {
            const char** callback_ret = kparts__mainwindow_containertags_callback();
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return KParts__MainWindow::containerTags();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createContainer(QWidget* parent, int index, const QDomElement& element, QAction*& containerAction) override {
        if (kparts__mainwindow_createcontainer_isbase) {
            kparts__mainwindow_createcontainer_isbase = false;
            return KParts__MainWindow::createContainer(parent, index, element, containerAction);
        } else if (kparts__mainwindow_createcontainer_callback != nullptr) {
            QWidget* cbval1 = parent;
            int cbval2 = index;
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval3 = const_cast<QDomElement*>(&element_ret);
            QAction*& containerAction_ret = containerAction;
            // Cast returned reference into pointer
            QAction** cbval4 = &containerAction_ret;

            QWidget* callback_ret = kparts__mainwindow_createcontainer_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KParts__MainWindow::createContainer(parent, index, element, containerAction);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeContainer(QWidget* container, QWidget* parent, QDomElement& element, QAction* containerAction) override {
        if (kparts__mainwindow_removecontainer_isbase) {
            kparts__mainwindow_removecontainer_isbase = false;
            KParts__MainWindow::removeContainer(container, parent, element, containerAction);
        } else if (kparts__mainwindow_removecontainer_callback != nullptr) {
            QWidget* cbval1 = container;
            QWidget* cbval2 = parent;
            QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval3 = &element_ret;
            QAction* cbval4 = containerAction;

            kparts__mainwindow_removecontainer_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            KParts__MainWindow::removeContainer(container, parent, element, containerAction);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> customTags() const override {
        if (kparts__mainwindow_customtags_isbase) {
            kparts__mainwindow_customtags_isbase = false;
            return KParts__MainWindow::customTags();
        } else if (kparts__mainwindow_customtags_callback != nullptr) {
            const char** callback_ret = kparts__mainwindow_customtags_callback();
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return KParts__MainWindow::customTags();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* createCustomElement(QWidget* parent, int index, const QDomElement& element) override {
        if (kparts__mainwindow_createcustomelement_isbase) {
            kparts__mainwindow_createcustomelement_isbase = false;
            return KParts__MainWindow::createCustomElement(parent, index, element);
        } else if (kparts__mainwindow_createcustomelement_callback != nullptr) {
            QWidget* cbval1 = parent;
            int cbval2 = index;
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval3 = const_cast<QDomElement*>(&element_ret);

            QAction* callback_ret = kparts__mainwindow_createcustomelement_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KParts__MainWindow::createCustomElement(parent, index, element);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void finalizeGUI(KXMLGUIClient* client) override {
        if (kparts__mainwindow_finalizegui_isbase) {
            kparts__mainwindow_finalizegui_isbase = false;
            KParts__MainWindow::finalizeGUI(client);
        } else if (kparts__mainwindow_finalizegui_callback != nullptr) {
            KXMLGUIClient* cbval1 = client;

            kparts__mainwindow_finalizegui_callback(this, cbval1);
        } else {
            KParts__MainWindow::finalizeGUI(client);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* action(const QDomElement& element) const override {
        if (kparts__mainwindow_action2_isbase) {
            kparts__mainwindow_action2_isbase = false;
            return KParts__MainWindow::action(element);
        } else if (kparts__mainwindow_action2_callback != nullptr) {
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval1 = const_cast<QDomElement*>(&element_ret);

            QAction* callback_ret = kparts__mainwindow_action2_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__MainWindow::action(element);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KActionCollection* actionCollection() const override {
        if (kparts__mainwindow_actioncollection_isbase) {
            kparts__mainwindow_actioncollection_isbase = false;
            return KParts__MainWindow::actionCollection();
        } else if (kparts__mainwindow_actioncollection_callback != nullptr) {
            KActionCollection* callback_ret = kparts__mainwindow_actioncollection_callback();
            return callback_ret;
        } else {
            return KParts__MainWindow::actionCollection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString componentName() const override {
        if (kparts__mainwindow_componentname_isbase) {
            kparts__mainwindow_componentname_isbase = false;
            return KParts__MainWindow::componentName();
        } else if (kparts__mainwindow_componentname_callback != nullptr) {
            const char* callback_ret = kparts__mainwindow_componentname_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KParts__MainWindow::componentName();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDomDocument domDocument() const override {
        if (kparts__mainwindow_domdocument_isbase) {
            kparts__mainwindow_domdocument_isbase = false;
            return KParts__MainWindow::domDocument();
        } else if (kparts__mainwindow_domdocument_callback != nullptr) {
            QDomDocument* callback_ret = kparts__mainwindow_domdocument_callback();
            return *callback_ret;
        } else {
            return KParts__MainWindow::domDocument();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString xmlFile() const override {
        if (kparts__mainwindow_xmlfile_isbase) {
            kparts__mainwindow_xmlfile_isbase = false;
            return KParts__MainWindow::xmlFile();
        } else if (kparts__mainwindow_xmlfile_callback != nullptr) {
            const char* callback_ret = kparts__mainwindow_xmlfile_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KParts__MainWindow::xmlFile();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString localXMLFile() const override {
        if (kparts__mainwindow_localxmlfile_isbase) {
            kparts__mainwindow_localxmlfile_isbase = false;
            return KParts__MainWindow::localXMLFile();
        } else if (kparts__mainwindow_localxmlfile_callback != nullptr) {
            const char* callback_ret = kparts__mainwindow_localxmlfile_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KParts__MainWindow::localXMLFile();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setComponentName(const QString& componentName, const QString& componentDisplayName) override {
        if (kparts__mainwindow_setcomponentname_isbase) {
            kparts__mainwindow_setcomponentname_isbase = false;
            KParts__MainWindow::setComponentName(componentName, componentDisplayName);
        } else if (kparts__mainwindow_setcomponentname_callback != nullptr) {
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

            kparts__mainwindow_setcomponentname_callback(this, cbval1, cbval2);
        } else {
            KParts__MainWindow::setComponentName(componentName, componentDisplayName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXMLFile(const QString& file, bool merge, bool setXMLDoc) override {
        if (kparts__mainwindow_setxmlfile_isbase) {
            kparts__mainwindow_setxmlfile_isbase = false;
            KParts__MainWindow::setXMLFile(file, merge, setXMLDoc);
        } else if (kparts__mainwindow_setxmlfile_callback != nullptr) {
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

            kparts__mainwindow_setxmlfile_callback(this, cbval1, cbval2, cbval3);
        } else {
            KParts__MainWindow::setXMLFile(file, merge, setXMLDoc);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLocalXMLFile(const QString& file) override {
        if (kparts__mainwindow_setlocalxmlfile_isbase) {
            kparts__mainwindow_setlocalxmlfile_isbase = false;
            KParts__MainWindow::setLocalXMLFile(file);
        } else if (kparts__mainwindow_setlocalxmlfile_callback != nullptr) {
            const QString file_ret = file;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray file_b = file_ret.toUtf8();
            libqt_string file_str;
            file_str.len = file_b.length();
            file_str.data = static_cast<const char*>(malloc(file_str.len + 1));
            memcpy((void*)file_str.data, file_b.data(), file_str.len);
            ((char*)file_str.data)[file_str.len] = '\0';
            libqt_string cbval1 = file_str;

            kparts__mainwindow_setlocalxmlfile_callback(this, cbval1);
        } else {
            KParts__MainWindow::setLocalXMLFile(file);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXML(const QString& document, bool merge) override {
        if (kparts__mainwindow_setxml_isbase) {
            kparts__mainwindow_setxml_isbase = false;
            KParts__MainWindow::setXML(document, merge);
        } else if (kparts__mainwindow_setxml_callback != nullptr) {
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

            kparts__mainwindow_setxml_callback(this, cbval1, cbval2);
        } else {
            KParts__MainWindow::setXML(document, merge);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDOMDocument(const QDomDocument& document, bool merge) override {
        if (kparts__mainwindow_setdomdocument_isbase) {
            kparts__mainwindow_setdomdocument_isbase = false;
            KParts__MainWindow::setDOMDocument(document, merge);
        } else if (kparts__mainwindow_setdomdocument_callback != nullptr) {
            const QDomDocument& document_ret = document;
            // Cast returned reference into pointer
            QDomDocument* cbval1 = const_cast<QDomDocument*>(&document_ret);
            bool cbval2 = merge;

            kparts__mainwindow_setdomdocument_callback(this, cbval1, cbval2);
        } else {
            KParts__MainWindow::setDOMDocument(document, merge);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stateChanged(const QString& newstate, KXMLGUIClient::ReverseStateChange reverse) override {
        if (kparts__mainwindow_statechanged_isbase) {
            kparts__mainwindow_statechanged_isbase = false;
            KParts__MainWindow::stateChanged(newstate, reverse);
        } else if (kparts__mainwindow_statechanged_callback != nullptr) {
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

            kparts__mainwindow_statechanged_callback(this, cbval1, cbval2);
        } else {
            KParts__MainWindow::stateChanged(newstate, reverse);
        }
    }

    // Virtual method for C ABI access and custom callback
    void createGUI(KParts::Part* part) {
        if (kparts__mainwindow_creategui_isbase) {
            kparts__mainwindow_creategui_isbase = false;
            KParts__MainWindow::createGUI(part);
        } else if (kparts__mainwindow_creategui_callback != nullptr) {
            KParts__Part* cbval1 = part;

            kparts__mainwindow_creategui_callback(this, cbval1);
        } else {
            KParts__MainWindow::createGUI(part);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setWindowTitleHandling(bool enabled) {
        if (kparts__mainwindow_setwindowtitlehandling_isbase) {
            kparts__mainwindow_setwindowtitlehandling_isbase = false;
            KParts__MainWindow::setWindowTitleHandling(enabled);
        } else if (kparts__mainwindow_setwindowtitlehandling_callback != nullptr) {
            bool cbval1 = enabled;

            kparts__mainwindow_setwindowtitlehandling_callback(this, cbval1);
        } else {
            KParts__MainWindow::setWindowTitleHandling(enabled);
        }
    }

    // Virtual method for C ABI access and custom callback
    void checkAmbiguousShortcuts() {
        if (kparts__mainwindow_checkambiguousshortcuts_isbase) {
            kparts__mainwindow_checkambiguousshortcuts_isbase = false;
            KParts__MainWindow::checkAmbiguousShortcuts();
        } else if (kparts__mainwindow_checkambiguousshortcuts_callback != nullptr) {
            kparts__mainwindow_checkambiguousshortcuts_callback();
        } else {
            KParts__MainWindow::checkAmbiguousShortcuts();
        }
    }

    // Virtual method for C ABI access and custom callback
    void savePropertiesInternal(KConfig* param1, int param2) {
        if (kparts__mainwindow_savepropertiesinternal_isbase) {
            kparts__mainwindow_savepropertiesinternal_isbase = false;
            KParts__MainWindow::savePropertiesInternal(param1, param2);
        } else if (kparts__mainwindow_savepropertiesinternal_callback != nullptr) {
            KConfig* cbval1 = param1;
            int cbval2 = param2;

            kparts__mainwindow_savepropertiesinternal_callback(this, cbval1, cbval2);
        } else {
            KParts__MainWindow::savePropertiesInternal(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool readPropertiesInternal(KConfig* param1, int param2) {
        if (kparts__mainwindow_readpropertiesinternal_isbase) {
            kparts__mainwindow_readpropertiesinternal_isbase = false;
            return KParts__MainWindow::readPropertiesInternal(param1, param2);
        } else if (kparts__mainwindow_readpropertiesinternal_callback != nullptr) {
            KConfig* cbval1 = param1;
            int cbval2 = param2;

            bool callback_ret = kparts__mainwindow_readpropertiesinternal_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KParts__MainWindow::readPropertiesInternal(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool settingsDirty() const {
        if (kparts__mainwindow_settingsdirty_isbase) {
            kparts__mainwindow_settingsdirty_isbase = false;
            return KParts__MainWindow::settingsDirty();
        } else if (kparts__mainwindow_settingsdirty_callback != nullptr) {
            bool callback_ret = kparts__mainwindow_settingsdirty_callback();
            return callback_ret;
        } else {
            return KParts__MainWindow::settingsDirty();
        }
    }

    // Virtual method for C ABI access and custom callback
    void saveAutoSaveSettings() {
        if (kparts__mainwindow_saveautosavesettings_isbase) {
            kparts__mainwindow_saveautosavesettings_isbase = false;
            KParts__MainWindow::saveAutoSaveSettings();
        } else if (kparts__mainwindow_saveautosavesettings_callback != nullptr) {
            kparts__mainwindow_saveautosavesettings_callback();
        } else {
            KParts__MainWindow::saveAutoSaveSettings();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kparts__mainwindow_updatemicrofocus_isbase) {
            kparts__mainwindow_updatemicrofocus_isbase = false;
            KParts__MainWindow::updateMicroFocus();
        } else if (kparts__mainwindow_updatemicrofocus_callback != nullptr) {
            kparts__mainwindow_updatemicrofocus_callback();
        } else {
            KParts__MainWindow::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kparts__mainwindow_create_isbase) {
            kparts__mainwindow_create_isbase = false;
            KParts__MainWindow::create();
        } else if (kparts__mainwindow_create_callback != nullptr) {
            kparts__mainwindow_create_callback();
        } else {
            KParts__MainWindow::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kparts__mainwindow_destroy_isbase) {
            kparts__mainwindow_destroy_isbase = false;
            KParts__MainWindow::destroy();
        } else if (kparts__mainwindow_destroy_callback != nullptr) {
            kparts__mainwindow_destroy_callback();
        } else {
            KParts__MainWindow::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kparts__mainwindow_focusnextchild_isbase) {
            kparts__mainwindow_focusnextchild_isbase = false;
            return KParts__MainWindow::focusNextChild();
        } else if (kparts__mainwindow_focusnextchild_callback != nullptr) {
            bool callback_ret = kparts__mainwindow_focusnextchild_callback();
            return callback_ret;
        } else {
            return KParts__MainWindow::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kparts__mainwindow_focuspreviouschild_isbase) {
            kparts__mainwindow_focuspreviouschild_isbase = false;
            return KParts__MainWindow::focusPreviousChild();
        } else if (kparts__mainwindow_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kparts__mainwindow_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KParts__MainWindow::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kparts__mainwindow_sender_isbase) {
            kparts__mainwindow_sender_isbase = false;
            return KParts__MainWindow::sender();
        } else if (kparts__mainwindow_sender_callback != nullptr) {
            QObject* callback_ret = kparts__mainwindow_sender_callback();
            return callback_ret;
        } else {
            return KParts__MainWindow::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kparts__mainwindow_sendersignalindex_isbase) {
            kparts__mainwindow_sendersignalindex_isbase = false;
            return KParts__MainWindow::senderSignalIndex();
        } else if (kparts__mainwindow_sendersignalindex_callback != nullptr) {
            int callback_ret = kparts__mainwindow_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KParts__MainWindow::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kparts__mainwindow_receivers_isbase) {
            kparts__mainwindow_receivers_isbase = false;
            return KParts__MainWindow::receivers(signal);
        } else if (kparts__mainwindow_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kparts__mainwindow_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KParts__MainWindow::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kparts__mainwindow_issignalconnected_isbase) {
            kparts__mainwindow_issignalconnected_isbase = false;
            return KParts__MainWindow::isSignalConnected(signal);
        } else if (kparts__mainwindow_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kparts__mainwindow_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__MainWindow::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kparts__mainwindow_getdecodedmetricf_isbase) {
            kparts__mainwindow_getdecodedmetricf_isbase = false;
            return KParts__MainWindow::getDecodedMetricF(metricA, metricB);
        } else if (kparts__mainwindow_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kparts__mainwindow_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KParts__MainWindow::getDecodedMetricF(metricA, metricB);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString standardsXmlFileLocation() {
        if (kparts__mainwindow_standardsxmlfilelocation_isbase) {
            kparts__mainwindow_standardsxmlfilelocation_isbase = false;
            return KParts__MainWindow::standardsXmlFileLocation();
        } else if (kparts__mainwindow_standardsxmlfilelocation_callback != nullptr) {
            const char* callback_ret = kparts__mainwindow_standardsxmlfilelocation_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KParts__MainWindow::standardsXmlFileLocation();
        }
    }

    // Virtual method for C ABI access and custom callback
    void loadStandardsXmlFile() {
        if (kparts__mainwindow_loadstandardsxmlfile_isbase) {
            kparts__mainwindow_loadstandardsxmlfile_isbase = false;
            KParts__MainWindow::loadStandardsXmlFile();
        } else if (kparts__mainwindow_loadstandardsxmlfile_callback != nullptr) {
            kparts__mainwindow_loadstandardsxmlfile_callback();
        } else {
            KParts__MainWindow::loadStandardsXmlFile();
        }
    }

    // Friend functions
    friend void KParts__MainWindow_SlotSetStatusBarText(KParts::MainWindow* self, const libqt_string param1);
    friend void KParts__MainWindow_QBaseSlotSetStatusBarText(KParts::MainWindow* self, const libqt_string param1);
    friend void KParts__MainWindow_SaveNewToolbarConfig(KParts::MainWindow* self);
    friend void KParts__MainWindow_QBaseSaveNewToolbarConfig(KParts::MainWindow* self);
    friend void KParts__MainWindow_CreateShellGUI(KParts::MainWindow* self, bool create);
    friend void KParts__MainWindow_QBaseCreateShellGUI(KParts::MainWindow* self, bool create);
    friend bool KParts__MainWindow_Event(KParts::MainWindow* self, QEvent* event);
    friend bool KParts__MainWindow_QBaseEvent(KParts::MainWindow* self, QEvent* event);
    friend void KParts__MainWindow_KeyPressEvent(KParts::MainWindow* self, QKeyEvent* keyEvent);
    friend void KParts__MainWindow_QBaseKeyPressEvent(KParts::MainWindow* self, QKeyEvent* keyEvent);
    friend void KParts__MainWindow_CloseEvent(KParts::MainWindow* self, QCloseEvent* param1);
    friend void KParts__MainWindow_QBaseCloseEvent(KParts::MainWindow* self, QCloseEvent* param1);
    friend bool KParts__MainWindow_QueryClose(KParts::MainWindow* self);
    friend bool KParts__MainWindow_QBaseQueryClose(KParts::MainWindow* self);
    friend void KParts__MainWindow_SaveProperties(KParts::MainWindow* self, KConfigGroup* param1);
    friend void KParts__MainWindow_QBaseSaveProperties(KParts::MainWindow* self, KConfigGroup* param1);
    friend void KParts__MainWindow_ReadProperties(KParts::MainWindow* self, const KConfigGroup* param1);
    friend void KParts__MainWindow_QBaseReadProperties(KParts::MainWindow* self, const KConfigGroup* param1);
    friend void KParts__MainWindow_SaveGlobalProperties(KParts::MainWindow* self, KConfig* sessionConfig);
    friend void KParts__MainWindow_QBaseSaveGlobalProperties(KParts::MainWindow* self, KConfig* sessionConfig);
    friend void KParts__MainWindow_ReadGlobalProperties(KParts::MainWindow* self, KConfig* sessionConfig);
    friend void KParts__MainWindow_QBaseReadGlobalProperties(KParts::MainWindow* self, KConfig* sessionConfig);
    friend void KParts__MainWindow_ContextMenuEvent(KParts::MainWindow* self, QContextMenuEvent* event);
    friend void KParts__MainWindow_QBaseContextMenuEvent(KParts::MainWindow* self, QContextMenuEvent* event);
    friend void KParts__MainWindow_MousePressEvent(KParts::MainWindow* self, QMouseEvent* event);
    friend void KParts__MainWindow_QBaseMousePressEvent(KParts::MainWindow* self, QMouseEvent* event);
    friend void KParts__MainWindow_MouseReleaseEvent(KParts::MainWindow* self, QMouseEvent* event);
    friend void KParts__MainWindow_QBaseMouseReleaseEvent(KParts::MainWindow* self, QMouseEvent* event);
    friend void KParts__MainWindow_MouseDoubleClickEvent(KParts::MainWindow* self, QMouseEvent* event);
    friend void KParts__MainWindow_QBaseMouseDoubleClickEvent(KParts::MainWindow* self, QMouseEvent* event);
    friend void KParts__MainWindow_MouseMoveEvent(KParts::MainWindow* self, QMouseEvent* event);
    friend void KParts__MainWindow_QBaseMouseMoveEvent(KParts::MainWindow* self, QMouseEvent* event);
    friend void KParts__MainWindow_WheelEvent(KParts::MainWindow* self, QWheelEvent* event);
    friend void KParts__MainWindow_QBaseWheelEvent(KParts::MainWindow* self, QWheelEvent* event);
    friend void KParts__MainWindow_KeyReleaseEvent(KParts::MainWindow* self, QKeyEvent* event);
    friend void KParts__MainWindow_QBaseKeyReleaseEvent(KParts::MainWindow* self, QKeyEvent* event);
    friend void KParts__MainWindow_FocusInEvent(KParts::MainWindow* self, QFocusEvent* event);
    friend void KParts__MainWindow_QBaseFocusInEvent(KParts::MainWindow* self, QFocusEvent* event);
    friend void KParts__MainWindow_FocusOutEvent(KParts::MainWindow* self, QFocusEvent* event);
    friend void KParts__MainWindow_QBaseFocusOutEvent(KParts::MainWindow* self, QFocusEvent* event);
    friend void KParts__MainWindow_EnterEvent(KParts::MainWindow* self, QEnterEvent* event);
    friend void KParts__MainWindow_QBaseEnterEvent(KParts::MainWindow* self, QEnterEvent* event);
    friend void KParts__MainWindow_LeaveEvent(KParts::MainWindow* self, QEvent* event);
    friend void KParts__MainWindow_QBaseLeaveEvent(KParts::MainWindow* self, QEvent* event);
    friend void KParts__MainWindow_PaintEvent(KParts::MainWindow* self, QPaintEvent* event);
    friend void KParts__MainWindow_QBasePaintEvent(KParts::MainWindow* self, QPaintEvent* event);
    friend void KParts__MainWindow_MoveEvent(KParts::MainWindow* self, QMoveEvent* event);
    friend void KParts__MainWindow_QBaseMoveEvent(KParts::MainWindow* self, QMoveEvent* event);
    friend void KParts__MainWindow_ResizeEvent(KParts::MainWindow* self, QResizeEvent* event);
    friend void KParts__MainWindow_QBaseResizeEvent(KParts::MainWindow* self, QResizeEvent* event);
    friend void KParts__MainWindow_TabletEvent(KParts::MainWindow* self, QTabletEvent* event);
    friend void KParts__MainWindow_QBaseTabletEvent(KParts::MainWindow* self, QTabletEvent* event);
    friend void KParts__MainWindow_ActionEvent(KParts::MainWindow* self, QActionEvent* event);
    friend void KParts__MainWindow_QBaseActionEvent(KParts::MainWindow* self, QActionEvent* event);
    friend void KParts__MainWindow_DragEnterEvent(KParts::MainWindow* self, QDragEnterEvent* event);
    friend void KParts__MainWindow_QBaseDragEnterEvent(KParts::MainWindow* self, QDragEnterEvent* event);
    friend void KParts__MainWindow_DragMoveEvent(KParts::MainWindow* self, QDragMoveEvent* event);
    friend void KParts__MainWindow_QBaseDragMoveEvent(KParts::MainWindow* self, QDragMoveEvent* event);
    friend void KParts__MainWindow_DragLeaveEvent(KParts::MainWindow* self, QDragLeaveEvent* event);
    friend void KParts__MainWindow_QBaseDragLeaveEvent(KParts::MainWindow* self, QDragLeaveEvent* event);
    friend void KParts__MainWindow_DropEvent(KParts::MainWindow* self, QDropEvent* event);
    friend void KParts__MainWindow_QBaseDropEvent(KParts::MainWindow* self, QDropEvent* event);
    friend void KParts__MainWindow_ShowEvent(KParts::MainWindow* self, QShowEvent* event);
    friend void KParts__MainWindow_QBaseShowEvent(KParts::MainWindow* self, QShowEvent* event);
    friend void KParts__MainWindow_HideEvent(KParts::MainWindow* self, QHideEvent* event);
    friend void KParts__MainWindow_QBaseHideEvent(KParts::MainWindow* self, QHideEvent* event);
    friend bool KParts__MainWindow_NativeEvent(KParts::MainWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KParts__MainWindow_QBaseNativeEvent(KParts::MainWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KParts__MainWindow_ChangeEvent(KParts::MainWindow* self, QEvent* param1);
    friend void KParts__MainWindow_QBaseChangeEvent(KParts::MainWindow* self, QEvent* param1);
    friend int KParts__MainWindow_Metric(const KParts::MainWindow* self, int param1);
    friend int KParts__MainWindow_QBaseMetric(const KParts::MainWindow* self, int param1);
    friend void KParts__MainWindow_InitPainter(const KParts::MainWindow* self, QPainter* painter);
    friend void KParts__MainWindow_QBaseInitPainter(const KParts::MainWindow* self, QPainter* painter);
    friend QPaintDevice* KParts__MainWindow_Redirected(const KParts::MainWindow* self, QPoint* offset);
    friend QPaintDevice* KParts__MainWindow_QBaseRedirected(const KParts::MainWindow* self, QPoint* offset);
    friend QPainter* KParts__MainWindow_SharedPainter(const KParts::MainWindow* self);
    friend QPainter* KParts__MainWindow_QBaseSharedPainter(const KParts::MainWindow* self);
    friend void KParts__MainWindow_InputMethodEvent(KParts::MainWindow* self, QInputMethodEvent* param1);
    friend void KParts__MainWindow_QBaseInputMethodEvent(KParts::MainWindow* self, QInputMethodEvent* param1);
    friend bool KParts__MainWindow_FocusNextPrevChild(KParts::MainWindow* self, bool next);
    friend bool KParts__MainWindow_QBaseFocusNextPrevChild(KParts::MainWindow* self, bool next);
    friend void KParts__MainWindow_TimerEvent(KParts::MainWindow* self, QTimerEvent* event);
    friend void KParts__MainWindow_QBaseTimerEvent(KParts::MainWindow* self, QTimerEvent* event);
    friend void KParts__MainWindow_ChildEvent(KParts::MainWindow* self, QChildEvent* event);
    friend void KParts__MainWindow_QBaseChildEvent(KParts::MainWindow* self, QChildEvent* event);
    friend void KParts__MainWindow_CustomEvent(KParts::MainWindow* self, QEvent* event);
    friend void KParts__MainWindow_QBaseCustomEvent(KParts::MainWindow* self, QEvent* event);
    friend void KParts__MainWindow_ConnectNotify(KParts::MainWindow* self, const QMetaMethod* signal);
    friend void KParts__MainWindow_QBaseConnectNotify(KParts::MainWindow* self, const QMetaMethod* signal);
    friend void KParts__MainWindow_DisconnectNotify(KParts::MainWindow* self, const QMetaMethod* signal);
    friend void KParts__MainWindow_QBaseDisconnectNotify(KParts::MainWindow* self, const QMetaMethod* signal);
    friend void KParts__MainWindow_SetComponentName(KParts::MainWindow* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KParts__MainWindow_QBaseSetComponentName(KParts::MainWindow* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KParts__MainWindow_SetXMLFile(KParts::MainWindow* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KParts__MainWindow_QBaseSetXMLFile(KParts::MainWindow* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KParts__MainWindow_SetLocalXMLFile(KParts::MainWindow* self, const libqt_string file);
    friend void KParts__MainWindow_QBaseSetLocalXMLFile(KParts::MainWindow* self, const libqt_string file);
    friend void KParts__MainWindow_SetXML(KParts::MainWindow* self, const libqt_string document, bool merge);
    friend void KParts__MainWindow_QBaseSetXML(KParts::MainWindow* self, const libqt_string document, bool merge);
    friend void KParts__MainWindow_SetDOMDocument(KParts::MainWindow* self, const QDomDocument* document, bool merge);
    friend void KParts__MainWindow_QBaseSetDOMDocument(KParts::MainWindow* self, const QDomDocument* document, bool merge);
    friend void KParts__MainWindow_StateChanged(KParts::MainWindow* self, const libqt_string newstate, int reverse);
    friend void KParts__MainWindow_QBaseStateChanged(KParts::MainWindow* self, const libqt_string newstate, int reverse);
    friend void KParts__MainWindow_CreateGUI(KParts::MainWindow* self, KParts__Part* part);
    friend void KParts__MainWindow_QBaseCreateGUI(KParts::MainWindow* self, KParts__Part* part);
    friend void KParts__MainWindow_SetWindowTitleHandling(KParts::MainWindow* self, bool enabled);
    friend void KParts__MainWindow_QBaseSetWindowTitleHandling(KParts::MainWindow* self, bool enabled);
    friend void KParts__MainWindow_CheckAmbiguousShortcuts(KParts::MainWindow* self);
    friend void KParts__MainWindow_QBaseCheckAmbiguousShortcuts(KParts::MainWindow* self);
    friend void KParts__MainWindow_SavePropertiesInternal(KParts::MainWindow* self, KConfig* param1, int param2);
    friend void KParts__MainWindow_QBaseSavePropertiesInternal(KParts::MainWindow* self, KConfig* param1, int param2);
    friend bool KParts__MainWindow_ReadPropertiesInternal(KParts::MainWindow* self, KConfig* param1, int param2);
    friend bool KParts__MainWindow_QBaseReadPropertiesInternal(KParts::MainWindow* self, KConfig* param1, int param2);
    friend bool KParts__MainWindow_SettingsDirty(const KParts::MainWindow* self);
    friend bool KParts__MainWindow_QBaseSettingsDirty(const KParts::MainWindow* self);
    friend void KParts__MainWindow_SaveAutoSaveSettings(KParts::MainWindow* self);
    friend void KParts__MainWindow_QBaseSaveAutoSaveSettings(KParts::MainWindow* self);
    friend void KParts__MainWindow_UpdateMicroFocus(KParts::MainWindow* self);
    friend void KParts__MainWindow_QBaseUpdateMicroFocus(KParts::MainWindow* self);
    friend void KParts__MainWindow_Create(KParts::MainWindow* self);
    friend void KParts__MainWindow_QBaseCreate(KParts::MainWindow* self);
    friend void KParts__MainWindow_Destroy(KParts::MainWindow* self);
    friend void KParts__MainWindow_QBaseDestroy(KParts::MainWindow* self);
    friend bool KParts__MainWindow_FocusNextChild(KParts::MainWindow* self);
    friend bool KParts__MainWindow_QBaseFocusNextChild(KParts::MainWindow* self);
    friend bool KParts__MainWindow_FocusPreviousChild(KParts::MainWindow* self);
    friend bool KParts__MainWindow_QBaseFocusPreviousChild(KParts::MainWindow* self);
    friend QObject* KParts__MainWindow_Sender(const KParts::MainWindow* self);
    friend QObject* KParts__MainWindow_QBaseSender(const KParts::MainWindow* self);
    friend int KParts__MainWindow_SenderSignalIndex(const KParts::MainWindow* self);
    friend int KParts__MainWindow_QBaseSenderSignalIndex(const KParts::MainWindow* self);
    friend int KParts__MainWindow_Receivers(const KParts::MainWindow* self, const char* signal);
    friend int KParts__MainWindow_QBaseReceivers(const KParts::MainWindow* self, const char* signal);
    friend bool KParts__MainWindow_IsSignalConnected(const KParts::MainWindow* self, const QMetaMethod* signal);
    friend bool KParts__MainWindow_QBaseIsSignalConnected(const KParts::MainWindow* self, const QMetaMethod* signal);
    friend double KParts__MainWindow_GetDecodedMetricF(const KParts::MainWindow* self, int metricA, int metricB);
    friend double KParts__MainWindow_QBaseGetDecodedMetricF(const KParts::MainWindow* self, int metricA, int metricB);
    friend libqt_string KParts__MainWindow_StandardsXmlFileLocation(KParts::MainWindow* self);
    friend libqt_string KParts__MainWindow_QBaseStandardsXmlFileLocation(KParts::MainWindow* self);
    friend void KParts__MainWindow_LoadStandardsXmlFile(KParts::MainWindow* self);
    friend void KParts__MainWindow_QBaseLoadStandardsXmlFile(KParts::MainWindow* self);
};

#endif
