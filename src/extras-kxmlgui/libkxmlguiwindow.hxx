#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKXMLGUIWINDOW_H
#define SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKXMLGUIWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KXmlGuiWindow so that we can call protected methods
class VirtualKXmlGuiWindow final : public KXmlGuiWindow {

  public:
    // Virtual class boolean flag
    bool isVirtualKXmlGuiWindow = true;

    // Virtual class public types (including callbacks)
    using KXmlGuiWindow_Metacall_Callback = int (*)(KXmlGuiWindow*, int, int, void**);
    using KXmlGuiWindow_GuiFactory_Callback = KXMLGUIFactory* (*)();
    using KXmlGuiWindow_ApplyMainWindowSettings_Callback = void (*)(KXmlGuiWindow*, KConfigGroup*);
    using KXmlGuiWindow_ConfigureToolbars_Callback = void (*)();
    using KXmlGuiWindow_SlotStateChanged_Callback = void (*)(KXmlGuiWindow*, libqt_string);
    using KXmlGuiWindow_Event_Callback = bool (*)(KXmlGuiWindow*, QEvent*);
    using KXmlGuiWindow_SaveNewToolbarConfig_Callback = void (*)();
    using KXmlGuiWindow_SetCaption_Callback = void (*)(KXmlGuiWindow*, libqt_string);
    using KXmlGuiWindow_SetPlainCaption_Callback = void (*)(KXmlGuiWindow*, libqt_string);
    using KXmlGuiWindow_KeyPressEvent_Callback = void (*)(KXmlGuiWindow*, QKeyEvent*);
    using KXmlGuiWindow_CloseEvent_Callback = void (*)(KXmlGuiWindow*, QCloseEvent*);
    using KXmlGuiWindow_QueryClose_Callback = bool (*)();
    using KXmlGuiWindow_SaveProperties_Callback = void (*)(KXmlGuiWindow*, KConfigGroup*);
    using KXmlGuiWindow_ReadProperties_Callback = void (*)(KXmlGuiWindow*, KConfigGroup*);
    using KXmlGuiWindow_SaveGlobalProperties_Callback = void (*)(KXmlGuiWindow*, KConfig*);
    using KXmlGuiWindow_ReadGlobalProperties_Callback = void (*)(KXmlGuiWindow*, KConfig*);
    using KXmlGuiWindow_CreatePopupMenu_Callback = QMenu* (*)();
    using KXmlGuiWindow_ContextMenuEvent_Callback = void (*)(KXmlGuiWindow*, QContextMenuEvent*);
    using KXmlGuiWindow_DevType_Callback = int (*)();
    using KXmlGuiWindow_SetVisible_Callback = void (*)(KXmlGuiWindow*, bool);
    using KXmlGuiWindow_SizeHint_Callback = QSize* (*)();
    using KXmlGuiWindow_MinimumSizeHint_Callback = QSize* (*)();
    using KXmlGuiWindow_HeightForWidth_Callback = int (*)(const KXmlGuiWindow*, int);
    using KXmlGuiWindow_HasHeightForWidth_Callback = bool (*)();
    using KXmlGuiWindow_PaintEngine_Callback = QPaintEngine* (*)();
    using KXmlGuiWindow_MousePressEvent_Callback = void (*)(KXmlGuiWindow*, QMouseEvent*);
    using KXmlGuiWindow_MouseReleaseEvent_Callback = void (*)(KXmlGuiWindow*, QMouseEvent*);
    using KXmlGuiWindow_MouseDoubleClickEvent_Callback = void (*)(KXmlGuiWindow*, QMouseEvent*);
    using KXmlGuiWindow_MouseMoveEvent_Callback = void (*)(KXmlGuiWindow*, QMouseEvent*);
    using KXmlGuiWindow_WheelEvent_Callback = void (*)(KXmlGuiWindow*, QWheelEvent*);
    using KXmlGuiWindow_KeyReleaseEvent_Callback = void (*)(KXmlGuiWindow*, QKeyEvent*);
    using KXmlGuiWindow_FocusInEvent_Callback = void (*)(KXmlGuiWindow*, QFocusEvent*);
    using KXmlGuiWindow_FocusOutEvent_Callback = void (*)(KXmlGuiWindow*, QFocusEvent*);
    using KXmlGuiWindow_EnterEvent_Callback = void (*)(KXmlGuiWindow*, QEnterEvent*);
    using KXmlGuiWindow_LeaveEvent_Callback = void (*)(KXmlGuiWindow*, QEvent*);
    using KXmlGuiWindow_PaintEvent_Callback = void (*)(KXmlGuiWindow*, QPaintEvent*);
    using KXmlGuiWindow_MoveEvent_Callback = void (*)(KXmlGuiWindow*, QMoveEvent*);
    using KXmlGuiWindow_ResizeEvent_Callback = void (*)(KXmlGuiWindow*, QResizeEvent*);
    using KXmlGuiWindow_TabletEvent_Callback = void (*)(KXmlGuiWindow*, QTabletEvent*);
    using KXmlGuiWindow_ActionEvent_Callback = void (*)(KXmlGuiWindow*, QActionEvent*);
    using KXmlGuiWindow_DragEnterEvent_Callback = void (*)(KXmlGuiWindow*, QDragEnterEvent*);
    using KXmlGuiWindow_DragMoveEvent_Callback = void (*)(KXmlGuiWindow*, QDragMoveEvent*);
    using KXmlGuiWindow_DragLeaveEvent_Callback = void (*)(KXmlGuiWindow*, QDragLeaveEvent*);
    using KXmlGuiWindow_DropEvent_Callback = void (*)(KXmlGuiWindow*, QDropEvent*);
    using KXmlGuiWindow_ShowEvent_Callback = void (*)(KXmlGuiWindow*, QShowEvent*);
    using KXmlGuiWindow_HideEvent_Callback = void (*)(KXmlGuiWindow*, QHideEvent*);
    using KXmlGuiWindow_NativeEvent_Callback = bool (*)(KXmlGuiWindow*, libqt_string, void*, intptr_t*);
    using KXmlGuiWindow_ChangeEvent_Callback = void (*)(KXmlGuiWindow*, QEvent*);
    using KXmlGuiWindow_Metric_Callback = int (*)(const KXmlGuiWindow*, int);
    using KXmlGuiWindow_InitPainter_Callback = void (*)(const KXmlGuiWindow*, QPainter*);
    using KXmlGuiWindow_Redirected_Callback = QPaintDevice* (*)(const KXmlGuiWindow*, QPoint*);
    using KXmlGuiWindow_SharedPainter_Callback = QPainter* (*)();
    using KXmlGuiWindow_InputMethodEvent_Callback = void (*)(KXmlGuiWindow*, QInputMethodEvent*);
    using KXmlGuiWindow_InputMethodQuery_Callback = QVariant* (*)(const KXmlGuiWindow*, int);
    using KXmlGuiWindow_FocusNextPrevChild_Callback = bool (*)(KXmlGuiWindow*, bool);
    using KXmlGuiWindow_EventFilter_Callback = bool (*)(KXmlGuiWindow*, QObject*, QEvent*);
    using KXmlGuiWindow_TimerEvent_Callback = void (*)(KXmlGuiWindow*, QTimerEvent*);
    using KXmlGuiWindow_ChildEvent_Callback = void (*)(KXmlGuiWindow*, QChildEvent*);
    using KXmlGuiWindow_CustomEvent_Callback = void (*)(KXmlGuiWindow*, QEvent*);
    using KXmlGuiWindow_ConnectNotify_Callback = void (*)(KXmlGuiWindow*, QMetaMethod*);
    using KXmlGuiWindow_DisconnectNotify_Callback = void (*)(KXmlGuiWindow*, QMetaMethod*);
    using KXmlGuiWindow_ContainerTags_Callback = const char** (*)();
    using KXmlGuiWindow_CreateContainer_Callback = QWidget* (*)(KXmlGuiWindow*, QWidget*, int, QDomElement*, QAction**);
    using KXmlGuiWindow_RemoveContainer_Callback = void (*)(KXmlGuiWindow*, QWidget*, QWidget*, QDomElement*, QAction*);
    using KXmlGuiWindow_CustomTags_Callback = const char** (*)();
    using KXmlGuiWindow_CreateCustomElement_Callback = QAction* (*)(KXmlGuiWindow*, QWidget*, int, QDomElement*);
    using KXmlGuiWindow_FinalizeGUI_Callback = void (*)(KXmlGuiWindow*, KXMLGUIClient*);
    using KXmlGuiWindow_Action2_Callback = QAction* (*)(const KXmlGuiWindow*, QDomElement*);
    using KXmlGuiWindow_ActionCollection_Callback = KActionCollection* (*)();
    using KXmlGuiWindow_ComponentName_Callback = const char* (*)();
    using KXmlGuiWindow_DomDocument_Callback = QDomDocument* (*)();
    using KXmlGuiWindow_XmlFile_Callback = const char* (*)();
    using KXmlGuiWindow_LocalXMLFile_Callback = const char* (*)();
    using KXmlGuiWindow_SetComponentName_Callback = void (*)(KXmlGuiWindow*, libqt_string, libqt_string);
    using KXmlGuiWindow_SetXMLFile_Callback = void (*)(KXmlGuiWindow*, libqt_string, bool, bool);
    using KXmlGuiWindow_SetLocalXMLFile_Callback = void (*)(KXmlGuiWindow*, libqt_string);
    using KXmlGuiWindow_SetXML_Callback = void (*)(KXmlGuiWindow*, libqt_string, bool);
    using KXmlGuiWindow_SetDOMDocument_Callback = void (*)(KXmlGuiWindow*, QDomDocument*, bool);
    using KXmlGuiWindow_StateChanged_Callback = void (*)(KXmlGuiWindow*, libqt_string, int);
    using KXmlGuiWindow_CheckAmbiguousShortcuts_Callback = void (*)();
    using KXmlGuiWindow_SavePropertiesInternal_Callback = void (*)(KXmlGuiWindow*, KConfig*, int);
    using KXmlGuiWindow_ReadPropertiesInternal_Callback = bool (*)(KXmlGuiWindow*, KConfig*, int);
    using KXmlGuiWindow_SettingsDirty_Callback = bool (*)();
    using KXmlGuiWindow_SaveAutoSaveSettings_Callback = void (*)();
    using KXmlGuiWindow_UpdateMicroFocus_Callback = void (*)();
    using KXmlGuiWindow_Create_Callback = void (*)();
    using KXmlGuiWindow_Destroy_Callback = void (*)();
    using KXmlGuiWindow_FocusNextChild_Callback = bool (*)();
    using KXmlGuiWindow_FocusPreviousChild_Callback = bool (*)();
    using KXmlGuiWindow_Sender_Callback = QObject* (*)();
    using KXmlGuiWindow_SenderSignalIndex_Callback = int (*)();
    using KXmlGuiWindow_Receivers_Callback = int (*)(const KXmlGuiWindow*, const char*);
    using KXmlGuiWindow_IsSignalConnected_Callback = bool (*)(const KXmlGuiWindow*, QMetaMethod*);
    using KXmlGuiWindow_GetDecodedMetricF_Callback = double (*)(const KXmlGuiWindow*, int, int);
    using KXmlGuiWindow_StandardsXmlFileLocation_Callback = const char* (*)();
    using KXmlGuiWindow_LoadStandardsXmlFile_Callback = void (*)();

  protected:
    // Instance callback storage
    KXmlGuiWindow_Metacall_Callback kxmlguiwindow_metacall_callback = nullptr;
    KXmlGuiWindow_GuiFactory_Callback kxmlguiwindow_guifactory_callback = nullptr;
    KXmlGuiWindow_ApplyMainWindowSettings_Callback kxmlguiwindow_applymainwindowsettings_callback = nullptr;
    KXmlGuiWindow_ConfigureToolbars_Callback kxmlguiwindow_configuretoolbars_callback = nullptr;
    KXmlGuiWindow_SlotStateChanged_Callback kxmlguiwindow_slotstatechanged_callback = nullptr;
    KXmlGuiWindow_Event_Callback kxmlguiwindow_event_callback = nullptr;
    KXmlGuiWindow_SaveNewToolbarConfig_Callback kxmlguiwindow_savenewtoolbarconfig_callback = nullptr;
    KXmlGuiWindow_SetCaption_Callback kxmlguiwindow_setcaption_callback = nullptr;
    KXmlGuiWindow_SetPlainCaption_Callback kxmlguiwindow_setplaincaption_callback = nullptr;
    KXmlGuiWindow_KeyPressEvent_Callback kxmlguiwindow_keypressevent_callback = nullptr;
    KXmlGuiWindow_CloseEvent_Callback kxmlguiwindow_closeevent_callback = nullptr;
    KXmlGuiWindow_QueryClose_Callback kxmlguiwindow_queryclose_callback = nullptr;
    KXmlGuiWindow_SaveProperties_Callback kxmlguiwindow_saveproperties_callback = nullptr;
    KXmlGuiWindow_ReadProperties_Callback kxmlguiwindow_readproperties_callback = nullptr;
    KXmlGuiWindow_SaveGlobalProperties_Callback kxmlguiwindow_saveglobalproperties_callback = nullptr;
    KXmlGuiWindow_ReadGlobalProperties_Callback kxmlguiwindow_readglobalproperties_callback = nullptr;
    KXmlGuiWindow_CreatePopupMenu_Callback kxmlguiwindow_createpopupmenu_callback = nullptr;
    KXmlGuiWindow_ContextMenuEvent_Callback kxmlguiwindow_contextmenuevent_callback = nullptr;
    KXmlGuiWindow_DevType_Callback kxmlguiwindow_devtype_callback = nullptr;
    KXmlGuiWindow_SetVisible_Callback kxmlguiwindow_setvisible_callback = nullptr;
    KXmlGuiWindow_SizeHint_Callback kxmlguiwindow_sizehint_callback = nullptr;
    KXmlGuiWindow_MinimumSizeHint_Callback kxmlguiwindow_minimumsizehint_callback = nullptr;
    KXmlGuiWindow_HeightForWidth_Callback kxmlguiwindow_heightforwidth_callback = nullptr;
    KXmlGuiWindow_HasHeightForWidth_Callback kxmlguiwindow_hasheightforwidth_callback = nullptr;
    KXmlGuiWindow_PaintEngine_Callback kxmlguiwindow_paintengine_callback = nullptr;
    KXmlGuiWindow_MousePressEvent_Callback kxmlguiwindow_mousepressevent_callback = nullptr;
    KXmlGuiWindow_MouseReleaseEvent_Callback kxmlguiwindow_mousereleaseevent_callback = nullptr;
    KXmlGuiWindow_MouseDoubleClickEvent_Callback kxmlguiwindow_mousedoubleclickevent_callback = nullptr;
    KXmlGuiWindow_MouseMoveEvent_Callback kxmlguiwindow_mousemoveevent_callback = nullptr;
    KXmlGuiWindow_WheelEvent_Callback kxmlguiwindow_wheelevent_callback = nullptr;
    KXmlGuiWindow_KeyReleaseEvent_Callback kxmlguiwindow_keyreleaseevent_callback = nullptr;
    KXmlGuiWindow_FocusInEvent_Callback kxmlguiwindow_focusinevent_callback = nullptr;
    KXmlGuiWindow_FocusOutEvent_Callback kxmlguiwindow_focusoutevent_callback = nullptr;
    KXmlGuiWindow_EnterEvent_Callback kxmlguiwindow_enterevent_callback = nullptr;
    KXmlGuiWindow_LeaveEvent_Callback kxmlguiwindow_leaveevent_callback = nullptr;
    KXmlGuiWindow_PaintEvent_Callback kxmlguiwindow_paintevent_callback = nullptr;
    KXmlGuiWindow_MoveEvent_Callback kxmlguiwindow_moveevent_callback = nullptr;
    KXmlGuiWindow_ResizeEvent_Callback kxmlguiwindow_resizeevent_callback = nullptr;
    KXmlGuiWindow_TabletEvent_Callback kxmlguiwindow_tabletevent_callback = nullptr;
    KXmlGuiWindow_ActionEvent_Callback kxmlguiwindow_actionevent_callback = nullptr;
    KXmlGuiWindow_DragEnterEvent_Callback kxmlguiwindow_dragenterevent_callback = nullptr;
    KXmlGuiWindow_DragMoveEvent_Callback kxmlguiwindow_dragmoveevent_callback = nullptr;
    KXmlGuiWindow_DragLeaveEvent_Callback kxmlguiwindow_dragleaveevent_callback = nullptr;
    KXmlGuiWindow_DropEvent_Callback kxmlguiwindow_dropevent_callback = nullptr;
    KXmlGuiWindow_ShowEvent_Callback kxmlguiwindow_showevent_callback = nullptr;
    KXmlGuiWindow_HideEvent_Callback kxmlguiwindow_hideevent_callback = nullptr;
    KXmlGuiWindow_NativeEvent_Callback kxmlguiwindow_nativeevent_callback = nullptr;
    KXmlGuiWindow_ChangeEvent_Callback kxmlguiwindow_changeevent_callback = nullptr;
    KXmlGuiWindow_Metric_Callback kxmlguiwindow_metric_callback = nullptr;
    KXmlGuiWindow_InitPainter_Callback kxmlguiwindow_initpainter_callback = nullptr;
    KXmlGuiWindow_Redirected_Callback kxmlguiwindow_redirected_callback = nullptr;
    KXmlGuiWindow_SharedPainter_Callback kxmlguiwindow_sharedpainter_callback = nullptr;
    KXmlGuiWindow_InputMethodEvent_Callback kxmlguiwindow_inputmethodevent_callback = nullptr;
    KXmlGuiWindow_InputMethodQuery_Callback kxmlguiwindow_inputmethodquery_callback = nullptr;
    KXmlGuiWindow_FocusNextPrevChild_Callback kxmlguiwindow_focusnextprevchild_callback = nullptr;
    KXmlGuiWindow_EventFilter_Callback kxmlguiwindow_eventfilter_callback = nullptr;
    KXmlGuiWindow_TimerEvent_Callback kxmlguiwindow_timerevent_callback = nullptr;
    KXmlGuiWindow_ChildEvent_Callback kxmlguiwindow_childevent_callback = nullptr;
    KXmlGuiWindow_CustomEvent_Callback kxmlguiwindow_customevent_callback = nullptr;
    KXmlGuiWindow_ConnectNotify_Callback kxmlguiwindow_connectnotify_callback = nullptr;
    KXmlGuiWindow_DisconnectNotify_Callback kxmlguiwindow_disconnectnotify_callback = nullptr;
    KXmlGuiWindow_ContainerTags_Callback kxmlguiwindow_containertags_callback = nullptr;
    KXmlGuiWindow_CreateContainer_Callback kxmlguiwindow_createcontainer_callback = nullptr;
    KXmlGuiWindow_RemoveContainer_Callback kxmlguiwindow_removecontainer_callback = nullptr;
    KXmlGuiWindow_CustomTags_Callback kxmlguiwindow_customtags_callback = nullptr;
    KXmlGuiWindow_CreateCustomElement_Callback kxmlguiwindow_createcustomelement_callback = nullptr;
    KXmlGuiWindow_FinalizeGUI_Callback kxmlguiwindow_finalizegui_callback = nullptr;
    KXmlGuiWindow_Action2_Callback kxmlguiwindow_action2_callback = nullptr;
    KXmlGuiWindow_ActionCollection_Callback kxmlguiwindow_actioncollection_callback = nullptr;
    KXmlGuiWindow_ComponentName_Callback kxmlguiwindow_componentname_callback = nullptr;
    KXmlGuiWindow_DomDocument_Callback kxmlguiwindow_domdocument_callback = nullptr;
    KXmlGuiWindow_XmlFile_Callback kxmlguiwindow_xmlfile_callback = nullptr;
    KXmlGuiWindow_LocalXMLFile_Callback kxmlguiwindow_localxmlfile_callback = nullptr;
    KXmlGuiWindow_SetComponentName_Callback kxmlguiwindow_setcomponentname_callback = nullptr;
    KXmlGuiWindow_SetXMLFile_Callback kxmlguiwindow_setxmlfile_callback = nullptr;
    KXmlGuiWindow_SetLocalXMLFile_Callback kxmlguiwindow_setlocalxmlfile_callback = nullptr;
    KXmlGuiWindow_SetXML_Callback kxmlguiwindow_setxml_callback = nullptr;
    KXmlGuiWindow_SetDOMDocument_Callback kxmlguiwindow_setdomdocument_callback = nullptr;
    KXmlGuiWindow_StateChanged_Callback kxmlguiwindow_statechanged_callback = nullptr;
    KXmlGuiWindow_CheckAmbiguousShortcuts_Callback kxmlguiwindow_checkambiguousshortcuts_callback = nullptr;
    KXmlGuiWindow_SavePropertiesInternal_Callback kxmlguiwindow_savepropertiesinternal_callback = nullptr;
    KXmlGuiWindow_ReadPropertiesInternal_Callback kxmlguiwindow_readpropertiesinternal_callback = nullptr;
    KXmlGuiWindow_SettingsDirty_Callback kxmlguiwindow_settingsdirty_callback = nullptr;
    KXmlGuiWindow_SaveAutoSaveSettings_Callback kxmlguiwindow_saveautosavesettings_callback = nullptr;
    KXmlGuiWindow_UpdateMicroFocus_Callback kxmlguiwindow_updatemicrofocus_callback = nullptr;
    KXmlGuiWindow_Create_Callback kxmlguiwindow_create_callback = nullptr;
    KXmlGuiWindow_Destroy_Callback kxmlguiwindow_destroy_callback = nullptr;
    KXmlGuiWindow_FocusNextChild_Callback kxmlguiwindow_focusnextchild_callback = nullptr;
    KXmlGuiWindow_FocusPreviousChild_Callback kxmlguiwindow_focuspreviouschild_callback = nullptr;
    KXmlGuiWindow_Sender_Callback kxmlguiwindow_sender_callback = nullptr;
    KXmlGuiWindow_SenderSignalIndex_Callback kxmlguiwindow_sendersignalindex_callback = nullptr;
    KXmlGuiWindow_Receivers_Callback kxmlguiwindow_receivers_callback = nullptr;
    KXmlGuiWindow_IsSignalConnected_Callback kxmlguiwindow_issignalconnected_callback = nullptr;
    KXmlGuiWindow_GetDecodedMetricF_Callback kxmlguiwindow_getdecodedmetricf_callback = nullptr;
    KXmlGuiWindow_StandardsXmlFileLocation_Callback kxmlguiwindow_standardsxmlfilelocation_callback = nullptr;
    KXmlGuiWindow_LoadStandardsXmlFile_Callback kxmlguiwindow_loadstandardsxmlfile_callback = nullptr;

    // Instance base flags
    mutable bool kxmlguiwindow_metacall_isbase = false;
    mutable bool kxmlguiwindow_guifactory_isbase = false;
    mutable bool kxmlguiwindow_applymainwindowsettings_isbase = false;
    mutable bool kxmlguiwindow_configuretoolbars_isbase = false;
    mutable bool kxmlguiwindow_slotstatechanged_isbase = false;
    mutable bool kxmlguiwindow_event_isbase = false;
    mutable bool kxmlguiwindow_savenewtoolbarconfig_isbase = false;
    mutable bool kxmlguiwindow_setcaption_isbase = false;
    mutable bool kxmlguiwindow_setplaincaption_isbase = false;
    mutable bool kxmlguiwindow_keypressevent_isbase = false;
    mutable bool kxmlguiwindow_closeevent_isbase = false;
    mutable bool kxmlguiwindow_queryclose_isbase = false;
    mutable bool kxmlguiwindow_saveproperties_isbase = false;
    mutable bool kxmlguiwindow_readproperties_isbase = false;
    mutable bool kxmlguiwindow_saveglobalproperties_isbase = false;
    mutable bool kxmlguiwindow_readglobalproperties_isbase = false;
    mutable bool kxmlguiwindow_createpopupmenu_isbase = false;
    mutable bool kxmlguiwindow_contextmenuevent_isbase = false;
    mutable bool kxmlguiwindow_devtype_isbase = false;
    mutable bool kxmlguiwindow_setvisible_isbase = false;
    mutable bool kxmlguiwindow_sizehint_isbase = false;
    mutable bool kxmlguiwindow_minimumsizehint_isbase = false;
    mutable bool kxmlguiwindow_heightforwidth_isbase = false;
    mutable bool kxmlguiwindow_hasheightforwidth_isbase = false;
    mutable bool kxmlguiwindow_paintengine_isbase = false;
    mutable bool kxmlguiwindow_mousepressevent_isbase = false;
    mutable bool kxmlguiwindow_mousereleaseevent_isbase = false;
    mutable bool kxmlguiwindow_mousedoubleclickevent_isbase = false;
    mutable bool kxmlguiwindow_mousemoveevent_isbase = false;
    mutable bool kxmlguiwindow_wheelevent_isbase = false;
    mutable bool kxmlguiwindow_keyreleaseevent_isbase = false;
    mutable bool kxmlguiwindow_focusinevent_isbase = false;
    mutable bool kxmlguiwindow_focusoutevent_isbase = false;
    mutable bool kxmlguiwindow_enterevent_isbase = false;
    mutable bool kxmlguiwindow_leaveevent_isbase = false;
    mutable bool kxmlguiwindow_paintevent_isbase = false;
    mutable bool kxmlguiwindow_moveevent_isbase = false;
    mutable bool kxmlguiwindow_resizeevent_isbase = false;
    mutable bool kxmlguiwindow_tabletevent_isbase = false;
    mutable bool kxmlguiwindow_actionevent_isbase = false;
    mutable bool kxmlguiwindow_dragenterevent_isbase = false;
    mutable bool kxmlguiwindow_dragmoveevent_isbase = false;
    mutable bool kxmlguiwindow_dragleaveevent_isbase = false;
    mutable bool kxmlguiwindow_dropevent_isbase = false;
    mutable bool kxmlguiwindow_showevent_isbase = false;
    mutable bool kxmlguiwindow_hideevent_isbase = false;
    mutable bool kxmlguiwindow_nativeevent_isbase = false;
    mutable bool kxmlguiwindow_changeevent_isbase = false;
    mutable bool kxmlguiwindow_metric_isbase = false;
    mutable bool kxmlguiwindow_initpainter_isbase = false;
    mutable bool kxmlguiwindow_redirected_isbase = false;
    mutable bool kxmlguiwindow_sharedpainter_isbase = false;
    mutable bool kxmlguiwindow_inputmethodevent_isbase = false;
    mutable bool kxmlguiwindow_inputmethodquery_isbase = false;
    mutable bool kxmlguiwindow_focusnextprevchild_isbase = false;
    mutable bool kxmlguiwindow_eventfilter_isbase = false;
    mutable bool kxmlguiwindow_timerevent_isbase = false;
    mutable bool kxmlguiwindow_childevent_isbase = false;
    mutable bool kxmlguiwindow_customevent_isbase = false;
    mutable bool kxmlguiwindow_connectnotify_isbase = false;
    mutable bool kxmlguiwindow_disconnectnotify_isbase = false;
    mutable bool kxmlguiwindow_containertags_isbase = false;
    mutable bool kxmlguiwindow_createcontainer_isbase = false;
    mutable bool kxmlguiwindow_removecontainer_isbase = false;
    mutable bool kxmlguiwindow_customtags_isbase = false;
    mutable bool kxmlguiwindow_createcustomelement_isbase = false;
    mutable bool kxmlguiwindow_finalizegui_isbase = false;
    mutable bool kxmlguiwindow_action2_isbase = false;
    mutable bool kxmlguiwindow_actioncollection_isbase = false;
    mutable bool kxmlguiwindow_componentname_isbase = false;
    mutable bool kxmlguiwindow_domdocument_isbase = false;
    mutable bool kxmlguiwindow_xmlfile_isbase = false;
    mutable bool kxmlguiwindow_localxmlfile_isbase = false;
    mutable bool kxmlguiwindow_setcomponentname_isbase = false;
    mutable bool kxmlguiwindow_setxmlfile_isbase = false;
    mutable bool kxmlguiwindow_setlocalxmlfile_isbase = false;
    mutable bool kxmlguiwindow_setxml_isbase = false;
    mutable bool kxmlguiwindow_setdomdocument_isbase = false;
    mutable bool kxmlguiwindow_statechanged_isbase = false;
    mutable bool kxmlguiwindow_checkambiguousshortcuts_isbase = false;
    mutable bool kxmlguiwindow_savepropertiesinternal_isbase = false;
    mutable bool kxmlguiwindow_readpropertiesinternal_isbase = false;
    mutable bool kxmlguiwindow_settingsdirty_isbase = false;
    mutable bool kxmlguiwindow_saveautosavesettings_isbase = false;
    mutable bool kxmlguiwindow_updatemicrofocus_isbase = false;
    mutable bool kxmlguiwindow_create_isbase = false;
    mutable bool kxmlguiwindow_destroy_isbase = false;
    mutable bool kxmlguiwindow_focusnextchild_isbase = false;
    mutable bool kxmlguiwindow_focuspreviouschild_isbase = false;
    mutable bool kxmlguiwindow_sender_isbase = false;
    mutable bool kxmlguiwindow_sendersignalindex_isbase = false;
    mutable bool kxmlguiwindow_receivers_isbase = false;
    mutable bool kxmlguiwindow_issignalconnected_isbase = false;
    mutable bool kxmlguiwindow_getdecodedmetricf_isbase = false;
    mutable bool kxmlguiwindow_standardsxmlfilelocation_isbase = false;
    mutable bool kxmlguiwindow_loadstandardsxmlfile_isbase = false;

  public:
    VirtualKXmlGuiWindow(QWidget* parent) : KXmlGuiWindow(parent) {};
    VirtualKXmlGuiWindow() : KXmlGuiWindow() {};
    VirtualKXmlGuiWindow(QWidget* parent, Qt::WindowFlags flags) : KXmlGuiWindow(parent, flags) {};

    ~VirtualKXmlGuiWindow() {
        kxmlguiwindow_metacall_callback = nullptr;
        kxmlguiwindow_guifactory_callback = nullptr;
        kxmlguiwindow_applymainwindowsettings_callback = nullptr;
        kxmlguiwindow_configuretoolbars_callback = nullptr;
        kxmlguiwindow_slotstatechanged_callback = nullptr;
        kxmlguiwindow_event_callback = nullptr;
        kxmlguiwindow_savenewtoolbarconfig_callback = nullptr;
        kxmlguiwindow_setcaption_callback = nullptr;
        kxmlguiwindow_setplaincaption_callback = nullptr;
        kxmlguiwindow_keypressevent_callback = nullptr;
        kxmlguiwindow_closeevent_callback = nullptr;
        kxmlguiwindow_queryclose_callback = nullptr;
        kxmlguiwindow_saveproperties_callback = nullptr;
        kxmlguiwindow_readproperties_callback = nullptr;
        kxmlguiwindow_saveglobalproperties_callback = nullptr;
        kxmlguiwindow_readglobalproperties_callback = nullptr;
        kxmlguiwindow_createpopupmenu_callback = nullptr;
        kxmlguiwindow_contextmenuevent_callback = nullptr;
        kxmlguiwindow_devtype_callback = nullptr;
        kxmlguiwindow_setvisible_callback = nullptr;
        kxmlguiwindow_sizehint_callback = nullptr;
        kxmlguiwindow_minimumsizehint_callback = nullptr;
        kxmlguiwindow_heightforwidth_callback = nullptr;
        kxmlguiwindow_hasheightforwidth_callback = nullptr;
        kxmlguiwindow_paintengine_callback = nullptr;
        kxmlguiwindow_mousepressevent_callback = nullptr;
        kxmlguiwindow_mousereleaseevent_callback = nullptr;
        kxmlguiwindow_mousedoubleclickevent_callback = nullptr;
        kxmlguiwindow_mousemoveevent_callback = nullptr;
        kxmlguiwindow_wheelevent_callback = nullptr;
        kxmlguiwindow_keyreleaseevent_callback = nullptr;
        kxmlguiwindow_focusinevent_callback = nullptr;
        kxmlguiwindow_focusoutevent_callback = nullptr;
        kxmlguiwindow_enterevent_callback = nullptr;
        kxmlguiwindow_leaveevent_callback = nullptr;
        kxmlguiwindow_paintevent_callback = nullptr;
        kxmlguiwindow_moveevent_callback = nullptr;
        kxmlguiwindow_resizeevent_callback = nullptr;
        kxmlguiwindow_tabletevent_callback = nullptr;
        kxmlguiwindow_actionevent_callback = nullptr;
        kxmlguiwindow_dragenterevent_callback = nullptr;
        kxmlguiwindow_dragmoveevent_callback = nullptr;
        kxmlguiwindow_dragleaveevent_callback = nullptr;
        kxmlguiwindow_dropevent_callback = nullptr;
        kxmlguiwindow_showevent_callback = nullptr;
        kxmlguiwindow_hideevent_callback = nullptr;
        kxmlguiwindow_nativeevent_callback = nullptr;
        kxmlguiwindow_changeevent_callback = nullptr;
        kxmlguiwindow_metric_callback = nullptr;
        kxmlguiwindow_initpainter_callback = nullptr;
        kxmlguiwindow_redirected_callback = nullptr;
        kxmlguiwindow_sharedpainter_callback = nullptr;
        kxmlguiwindow_inputmethodevent_callback = nullptr;
        kxmlguiwindow_inputmethodquery_callback = nullptr;
        kxmlguiwindow_focusnextprevchild_callback = nullptr;
        kxmlguiwindow_eventfilter_callback = nullptr;
        kxmlguiwindow_timerevent_callback = nullptr;
        kxmlguiwindow_childevent_callback = nullptr;
        kxmlguiwindow_customevent_callback = nullptr;
        kxmlguiwindow_connectnotify_callback = nullptr;
        kxmlguiwindow_disconnectnotify_callback = nullptr;
        kxmlguiwindow_containertags_callback = nullptr;
        kxmlguiwindow_createcontainer_callback = nullptr;
        kxmlguiwindow_removecontainer_callback = nullptr;
        kxmlguiwindow_customtags_callback = nullptr;
        kxmlguiwindow_createcustomelement_callback = nullptr;
        kxmlguiwindow_finalizegui_callback = nullptr;
        kxmlguiwindow_action2_callback = nullptr;
        kxmlguiwindow_actioncollection_callback = nullptr;
        kxmlguiwindow_componentname_callback = nullptr;
        kxmlguiwindow_domdocument_callback = nullptr;
        kxmlguiwindow_xmlfile_callback = nullptr;
        kxmlguiwindow_localxmlfile_callback = nullptr;
        kxmlguiwindow_setcomponentname_callback = nullptr;
        kxmlguiwindow_setxmlfile_callback = nullptr;
        kxmlguiwindow_setlocalxmlfile_callback = nullptr;
        kxmlguiwindow_setxml_callback = nullptr;
        kxmlguiwindow_setdomdocument_callback = nullptr;
        kxmlguiwindow_statechanged_callback = nullptr;
        kxmlguiwindow_checkambiguousshortcuts_callback = nullptr;
        kxmlguiwindow_savepropertiesinternal_callback = nullptr;
        kxmlguiwindow_readpropertiesinternal_callback = nullptr;
        kxmlguiwindow_settingsdirty_callback = nullptr;
        kxmlguiwindow_saveautosavesettings_callback = nullptr;
        kxmlguiwindow_updatemicrofocus_callback = nullptr;
        kxmlguiwindow_create_callback = nullptr;
        kxmlguiwindow_destroy_callback = nullptr;
        kxmlguiwindow_focusnextchild_callback = nullptr;
        kxmlguiwindow_focuspreviouschild_callback = nullptr;
        kxmlguiwindow_sender_callback = nullptr;
        kxmlguiwindow_sendersignalindex_callback = nullptr;
        kxmlguiwindow_receivers_callback = nullptr;
        kxmlguiwindow_issignalconnected_callback = nullptr;
        kxmlguiwindow_getdecodedmetricf_callback = nullptr;
        kxmlguiwindow_standardsxmlfilelocation_callback = nullptr;
        kxmlguiwindow_loadstandardsxmlfile_callback = nullptr;
    }

    // Callback setters
    inline void setKXmlGuiWindow_Metacall_Callback(KXmlGuiWindow_Metacall_Callback cb) { kxmlguiwindow_metacall_callback = cb; }
    inline void setKXmlGuiWindow_GuiFactory_Callback(KXmlGuiWindow_GuiFactory_Callback cb) { kxmlguiwindow_guifactory_callback = cb; }
    inline void setKXmlGuiWindow_ApplyMainWindowSettings_Callback(KXmlGuiWindow_ApplyMainWindowSettings_Callback cb) { kxmlguiwindow_applymainwindowsettings_callback = cb; }
    inline void setKXmlGuiWindow_ConfigureToolbars_Callback(KXmlGuiWindow_ConfigureToolbars_Callback cb) { kxmlguiwindow_configuretoolbars_callback = cb; }
    inline void setKXmlGuiWindow_SlotStateChanged_Callback(KXmlGuiWindow_SlotStateChanged_Callback cb) { kxmlguiwindow_slotstatechanged_callback = cb; }
    inline void setKXmlGuiWindow_Event_Callback(KXmlGuiWindow_Event_Callback cb) { kxmlguiwindow_event_callback = cb; }
    inline void setKXmlGuiWindow_SaveNewToolbarConfig_Callback(KXmlGuiWindow_SaveNewToolbarConfig_Callback cb) { kxmlguiwindow_savenewtoolbarconfig_callback = cb; }
    inline void setKXmlGuiWindow_SetCaption_Callback(KXmlGuiWindow_SetCaption_Callback cb) { kxmlguiwindow_setcaption_callback = cb; }
    inline void setKXmlGuiWindow_SetPlainCaption_Callback(KXmlGuiWindow_SetPlainCaption_Callback cb) { kxmlguiwindow_setplaincaption_callback = cb; }
    inline void setKXmlGuiWindow_KeyPressEvent_Callback(KXmlGuiWindow_KeyPressEvent_Callback cb) { kxmlguiwindow_keypressevent_callback = cb; }
    inline void setKXmlGuiWindow_CloseEvent_Callback(KXmlGuiWindow_CloseEvent_Callback cb) { kxmlguiwindow_closeevent_callback = cb; }
    inline void setKXmlGuiWindow_QueryClose_Callback(KXmlGuiWindow_QueryClose_Callback cb) { kxmlguiwindow_queryclose_callback = cb; }
    inline void setKXmlGuiWindow_SaveProperties_Callback(KXmlGuiWindow_SaveProperties_Callback cb) { kxmlguiwindow_saveproperties_callback = cb; }
    inline void setKXmlGuiWindow_ReadProperties_Callback(KXmlGuiWindow_ReadProperties_Callback cb) { kxmlguiwindow_readproperties_callback = cb; }
    inline void setKXmlGuiWindow_SaveGlobalProperties_Callback(KXmlGuiWindow_SaveGlobalProperties_Callback cb) { kxmlguiwindow_saveglobalproperties_callback = cb; }
    inline void setKXmlGuiWindow_ReadGlobalProperties_Callback(KXmlGuiWindow_ReadGlobalProperties_Callback cb) { kxmlguiwindow_readglobalproperties_callback = cb; }
    inline void setKXmlGuiWindow_CreatePopupMenu_Callback(KXmlGuiWindow_CreatePopupMenu_Callback cb) { kxmlguiwindow_createpopupmenu_callback = cb; }
    inline void setKXmlGuiWindow_ContextMenuEvent_Callback(KXmlGuiWindow_ContextMenuEvent_Callback cb) { kxmlguiwindow_contextmenuevent_callback = cb; }
    inline void setKXmlGuiWindow_DevType_Callback(KXmlGuiWindow_DevType_Callback cb) { kxmlguiwindow_devtype_callback = cb; }
    inline void setKXmlGuiWindow_SetVisible_Callback(KXmlGuiWindow_SetVisible_Callback cb) { kxmlguiwindow_setvisible_callback = cb; }
    inline void setKXmlGuiWindow_SizeHint_Callback(KXmlGuiWindow_SizeHint_Callback cb) { kxmlguiwindow_sizehint_callback = cb; }
    inline void setKXmlGuiWindow_MinimumSizeHint_Callback(KXmlGuiWindow_MinimumSizeHint_Callback cb) { kxmlguiwindow_minimumsizehint_callback = cb; }
    inline void setKXmlGuiWindow_HeightForWidth_Callback(KXmlGuiWindow_HeightForWidth_Callback cb) { kxmlguiwindow_heightforwidth_callback = cb; }
    inline void setKXmlGuiWindow_HasHeightForWidth_Callback(KXmlGuiWindow_HasHeightForWidth_Callback cb) { kxmlguiwindow_hasheightforwidth_callback = cb; }
    inline void setKXmlGuiWindow_PaintEngine_Callback(KXmlGuiWindow_PaintEngine_Callback cb) { kxmlguiwindow_paintengine_callback = cb; }
    inline void setKXmlGuiWindow_MousePressEvent_Callback(KXmlGuiWindow_MousePressEvent_Callback cb) { kxmlguiwindow_mousepressevent_callback = cb; }
    inline void setKXmlGuiWindow_MouseReleaseEvent_Callback(KXmlGuiWindow_MouseReleaseEvent_Callback cb) { kxmlguiwindow_mousereleaseevent_callback = cb; }
    inline void setKXmlGuiWindow_MouseDoubleClickEvent_Callback(KXmlGuiWindow_MouseDoubleClickEvent_Callback cb) { kxmlguiwindow_mousedoubleclickevent_callback = cb; }
    inline void setKXmlGuiWindow_MouseMoveEvent_Callback(KXmlGuiWindow_MouseMoveEvent_Callback cb) { kxmlguiwindow_mousemoveevent_callback = cb; }
    inline void setKXmlGuiWindow_WheelEvent_Callback(KXmlGuiWindow_WheelEvent_Callback cb) { kxmlguiwindow_wheelevent_callback = cb; }
    inline void setKXmlGuiWindow_KeyReleaseEvent_Callback(KXmlGuiWindow_KeyReleaseEvent_Callback cb) { kxmlguiwindow_keyreleaseevent_callback = cb; }
    inline void setKXmlGuiWindow_FocusInEvent_Callback(KXmlGuiWindow_FocusInEvent_Callback cb) { kxmlguiwindow_focusinevent_callback = cb; }
    inline void setKXmlGuiWindow_FocusOutEvent_Callback(KXmlGuiWindow_FocusOutEvent_Callback cb) { kxmlguiwindow_focusoutevent_callback = cb; }
    inline void setKXmlGuiWindow_EnterEvent_Callback(KXmlGuiWindow_EnterEvent_Callback cb) { kxmlguiwindow_enterevent_callback = cb; }
    inline void setKXmlGuiWindow_LeaveEvent_Callback(KXmlGuiWindow_LeaveEvent_Callback cb) { kxmlguiwindow_leaveevent_callback = cb; }
    inline void setKXmlGuiWindow_PaintEvent_Callback(KXmlGuiWindow_PaintEvent_Callback cb) { kxmlguiwindow_paintevent_callback = cb; }
    inline void setKXmlGuiWindow_MoveEvent_Callback(KXmlGuiWindow_MoveEvent_Callback cb) { kxmlguiwindow_moveevent_callback = cb; }
    inline void setKXmlGuiWindow_ResizeEvent_Callback(KXmlGuiWindow_ResizeEvent_Callback cb) { kxmlguiwindow_resizeevent_callback = cb; }
    inline void setKXmlGuiWindow_TabletEvent_Callback(KXmlGuiWindow_TabletEvent_Callback cb) { kxmlguiwindow_tabletevent_callback = cb; }
    inline void setKXmlGuiWindow_ActionEvent_Callback(KXmlGuiWindow_ActionEvent_Callback cb) { kxmlguiwindow_actionevent_callback = cb; }
    inline void setKXmlGuiWindow_DragEnterEvent_Callback(KXmlGuiWindow_DragEnterEvent_Callback cb) { kxmlguiwindow_dragenterevent_callback = cb; }
    inline void setKXmlGuiWindow_DragMoveEvent_Callback(KXmlGuiWindow_DragMoveEvent_Callback cb) { kxmlguiwindow_dragmoveevent_callback = cb; }
    inline void setKXmlGuiWindow_DragLeaveEvent_Callback(KXmlGuiWindow_DragLeaveEvent_Callback cb) { kxmlguiwindow_dragleaveevent_callback = cb; }
    inline void setKXmlGuiWindow_DropEvent_Callback(KXmlGuiWindow_DropEvent_Callback cb) { kxmlguiwindow_dropevent_callback = cb; }
    inline void setKXmlGuiWindow_ShowEvent_Callback(KXmlGuiWindow_ShowEvent_Callback cb) { kxmlguiwindow_showevent_callback = cb; }
    inline void setKXmlGuiWindow_HideEvent_Callback(KXmlGuiWindow_HideEvent_Callback cb) { kxmlguiwindow_hideevent_callback = cb; }
    inline void setKXmlGuiWindow_NativeEvent_Callback(KXmlGuiWindow_NativeEvent_Callback cb) { kxmlguiwindow_nativeevent_callback = cb; }
    inline void setKXmlGuiWindow_ChangeEvent_Callback(KXmlGuiWindow_ChangeEvent_Callback cb) { kxmlguiwindow_changeevent_callback = cb; }
    inline void setKXmlGuiWindow_Metric_Callback(KXmlGuiWindow_Metric_Callback cb) { kxmlguiwindow_metric_callback = cb; }
    inline void setKXmlGuiWindow_InitPainter_Callback(KXmlGuiWindow_InitPainter_Callback cb) { kxmlguiwindow_initpainter_callback = cb; }
    inline void setKXmlGuiWindow_Redirected_Callback(KXmlGuiWindow_Redirected_Callback cb) { kxmlguiwindow_redirected_callback = cb; }
    inline void setKXmlGuiWindow_SharedPainter_Callback(KXmlGuiWindow_SharedPainter_Callback cb) { kxmlguiwindow_sharedpainter_callback = cb; }
    inline void setKXmlGuiWindow_InputMethodEvent_Callback(KXmlGuiWindow_InputMethodEvent_Callback cb) { kxmlguiwindow_inputmethodevent_callback = cb; }
    inline void setKXmlGuiWindow_InputMethodQuery_Callback(KXmlGuiWindow_InputMethodQuery_Callback cb) { kxmlguiwindow_inputmethodquery_callback = cb; }
    inline void setKXmlGuiWindow_FocusNextPrevChild_Callback(KXmlGuiWindow_FocusNextPrevChild_Callback cb) { kxmlguiwindow_focusnextprevchild_callback = cb; }
    inline void setKXmlGuiWindow_EventFilter_Callback(KXmlGuiWindow_EventFilter_Callback cb) { kxmlguiwindow_eventfilter_callback = cb; }
    inline void setKXmlGuiWindow_TimerEvent_Callback(KXmlGuiWindow_TimerEvent_Callback cb) { kxmlguiwindow_timerevent_callback = cb; }
    inline void setKXmlGuiWindow_ChildEvent_Callback(KXmlGuiWindow_ChildEvent_Callback cb) { kxmlguiwindow_childevent_callback = cb; }
    inline void setKXmlGuiWindow_CustomEvent_Callback(KXmlGuiWindow_CustomEvent_Callback cb) { kxmlguiwindow_customevent_callback = cb; }
    inline void setKXmlGuiWindow_ConnectNotify_Callback(KXmlGuiWindow_ConnectNotify_Callback cb) { kxmlguiwindow_connectnotify_callback = cb; }
    inline void setKXmlGuiWindow_DisconnectNotify_Callback(KXmlGuiWindow_DisconnectNotify_Callback cb) { kxmlguiwindow_disconnectnotify_callback = cb; }
    inline void setKXmlGuiWindow_ContainerTags_Callback(KXmlGuiWindow_ContainerTags_Callback cb) { kxmlguiwindow_containertags_callback = cb; }
    inline void setKXmlGuiWindow_CreateContainer_Callback(KXmlGuiWindow_CreateContainer_Callback cb) { kxmlguiwindow_createcontainer_callback = cb; }
    inline void setKXmlGuiWindow_RemoveContainer_Callback(KXmlGuiWindow_RemoveContainer_Callback cb) { kxmlguiwindow_removecontainer_callback = cb; }
    inline void setKXmlGuiWindow_CustomTags_Callback(KXmlGuiWindow_CustomTags_Callback cb) { kxmlguiwindow_customtags_callback = cb; }
    inline void setKXmlGuiWindow_CreateCustomElement_Callback(KXmlGuiWindow_CreateCustomElement_Callback cb) { kxmlguiwindow_createcustomelement_callback = cb; }
    inline void setKXmlGuiWindow_FinalizeGUI_Callback(KXmlGuiWindow_FinalizeGUI_Callback cb) { kxmlguiwindow_finalizegui_callback = cb; }
    inline void setKXmlGuiWindow_Action2_Callback(KXmlGuiWindow_Action2_Callback cb) { kxmlguiwindow_action2_callback = cb; }
    inline void setKXmlGuiWindow_ActionCollection_Callback(KXmlGuiWindow_ActionCollection_Callback cb) { kxmlguiwindow_actioncollection_callback = cb; }
    inline void setKXmlGuiWindow_ComponentName_Callback(KXmlGuiWindow_ComponentName_Callback cb) { kxmlguiwindow_componentname_callback = cb; }
    inline void setKXmlGuiWindow_DomDocument_Callback(KXmlGuiWindow_DomDocument_Callback cb) { kxmlguiwindow_domdocument_callback = cb; }
    inline void setKXmlGuiWindow_XmlFile_Callback(KXmlGuiWindow_XmlFile_Callback cb) { kxmlguiwindow_xmlfile_callback = cb; }
    inline void setKXmlGuiWindow_LocalXMLFile_Callback(KXmlGuiWindow_LocalXMLFile_Callback cb) { kxmlguiwindow_localxmlfile_callback = cb; }
    inline void setKXmlGuiWindow_SetComponentName_Callback(KXmlGuiWindow_SetComponentName_Callback cb) { kxmlguiwindow_setcomponentname_callback = cb; }
    inline void setKXmlGuiWindow_SetXMLFile_Callback(KXmlGuiWindow_SetXMLFile_Callback cb) { kxmlguiwindow_setxmlfile_callback = cb; }
    inline void setKXmlGuiWindow_SetLocalXMLFile_Callback(KXmlGuiWindow_SetLocalXMLFile_Callback cb) { kxmlguiwindow_setlocalxmlfile_callback = cb; }
    inline void setKXmlGuiWindow_SetXML_Callback(KXmlGuiWindow_SetXML_Callback cb) { kxmlguiwindow_setxml_callback = cb; }
    inline void setKXmlGuiWindow_SetDOMDocument_Callback(KXmlGuiWindow_SetDOMDocument_Callback cb) { kxmlguiwindow_setdomdocument_callback = cb; }
    inline void setKXmlGuiWindow_StateChanged_Callback(KXmlGuiWindow_StateChanged_Callback cb) { kxmlguiwindow_statechanged_callback = cb; }
    inline void setKXmlGuiWindow_CheckAmbiguousShortcuts_Callback(KXmlGuiWindow_CheckAmbiguousShortcuts_Callback cb) { kxmlguiwindow_checkambiguousshortcuts_callback = cb; }
    inline void setKXmlGuiWindow_SavePropertiesInternal_Callback(KXmlGuiWindow_SavePropertiesInternal_Callback cb) { kxmlguiwindow_savepropertiesinternal_callback = cb; }
    inline void setKXmlGuiWindow_ReadPropertiesInternal_Callback(KXmlGuiWindow_ReadPropertiesInternal_Callback cb) { kxmlguiwindow_readpropertiesinternal_callback = cb; }
    inline void setKXmlGuiWindow_SettingsDirty_Callback(KXmlGuiWindow_SettingsDirty_Callback cb) { kxmlguiwindow_settingsdirty_callback = cb; }
    inline void setKXmlGuiWindow_SaveAutoSaveSettings_Callback(KXmlGuiWindow_SaveAutoSaveSettings_Callback cb) { kxmlguiwindow_saveautosavesettings_callback = cb; }
    inline void setKXmlGuiWindow_UpdateMicroFocus_Callback(KXmlGuiWindow_UpdateMicroFocus_Callback cb) { kxmlguiwindow_updatemicrofocus_callback = cb; }
    inline void setKXmlGuiWindow_Create_Callback(KXmlGuiWindow_Create_Callback cb) { kxmlguiwindow_create_callback = cb; }
    inline void setKXmlGuiWindow_Destroy_Callback(KXmlGuiWindow_Destroy_Callback cb) { kxmlguiwindow_destroy_callback = cb; }
    inline void setKXmlGuiWindow_FocusNextChild_Callback(KXmlGuiWindow_FocusNextChild_Callback cb) { kxmlguiwindow_focusnextchild_callback = cb; }
    inline void setKXmlGuiWindow_FocusPreviousChild_Callback(KXmlGuiWindow_FocusPreviousChild_Callback cb) { kxmlguiwindow_focuspreviouschild_callback = cb; }
    inline void setKXmlGuiWindow_Sender_Callback(KXmlGuiWindow_Sender_Callback cb) { kxmlguiwindow_sender_callback = cb; }
    inline void setKXmlGuiWindow_SenderSignalIndex_Callback(KXmlGuiWindow_SenderSignalIndex_Callback cb) { kxmlguiwindow_sendersignalindex_callback = cb; }
    inline void setKXmlGuiWindow_Receivers_Callback(KXmlGuiWindow_Receivers_Callback cb) { kxmlguiwindow_receivers_callback = cb; }
    inline void setKXmlGuiWindow_IsSignalConnected_Callback(KXmlGuiWindow_IsSignalConnected_Callback cb) { kxmlguiwindow_issignalconnected_callback = cb; }
    inline void setKXmlGuiWindow_GetDecodedMetricF_Callback(KXmlGuiWindow_GetDecodedMetricF_Callback cb) { kxmlguiwindow_getdecodedmetricf_callback = cb; }
    inline void setKXmlGuiWindow_StandardsXmlFileLocation_Callback(KXmlGuiWindow_StandardsXmlFileLocation_Callback cb) { kxmlguiwindow_standardsxmlfilelocation_callback = cb; }
    inline void setKXmlGuiWindow_LoadStandardsXmlFile_Callback(KXmlGuiWindow_LoadStandardsXmlFile_Callback cb) { kxmlguiwindow_loadstandardsxmlfile_callback = cb; }

    // Base flag setters
    inline void setKXmlGuiWindow_Metacall_IsBase(bool value) const { kxmlguiwindow_metacall_isbase = value; }
    inline void setKXmlGuiWindow_GuiFactory_IsBase(bool value) const { kxmlguiwindow_guifactory_isbase = value; }
    inline void setKXmlGuiWindow_ApplyMainWindowSettings_IsBase(bool value) const { kxmlguiwindow_applymainwindowsettings_isbase = value; }
    inline void setKXmlGuiWindow_ConfigureToolbars_IsBase(bool value) const { kxmlguiwindow_configuretoolbars_isbase = value; }
    inline void setKXmlGuiWindow_SlotStateChanged_IsBase(bool value) const { kxmlguiwindow_slotstatechanged_isbase = value; }
    inline void setKXmlGuiWindow_Event_IsBase(bool value) const { kxmlguiwindow_event_isbase = value; }
    inline void setKXmlGuiWindow_SaveNewToolbarConfig_IsBase(bool value) const { kxmlguiwindow_savenewtoolbarconfig_isbase = value; }
    inline void setKXmlGuiWindow_SetCaption_IsBase(bool value) const { kxmlguiwindow_setcaption_isbase = value; }
    inline void setKXmlGuiWindow_SetPlainCaption_IsBase(bool value) const { kxmlguiwindow_setplaincaption_isbase = value; }
    inline void setKXmlGuiWindow_KeyPressEvent_IsBase(bool value) const { kxmlguiwindow_keypressevent_isbase = value; }
    inline void setKXmlGuiWindow_CloseEvent_IsBase(bool value) const { kxmlguiwindow_closeevent_isbase = value; }
    inline void setKXmlGuiWindow_QueryClose_IsBase(bool value) const { kxmlguiwindow_queryclose_isbase = value; }
    inline void setKXmlGuiWindow_SaveProperties_IsBase(bool value) const { kxmlguiwindow_saveproperties_isbase = value; }
    inline void setKXmlGuiWindow_ReadProperties_IsBase(bool value) const { kxmlguiwindow_readproperties_isbase = value; }
    inline void setKXmlGuiWindow_SaveGlobalProperties_IsBase(bool value) const { kxmlguiwindow_saveglobalproperties_isbase = value; }
    inline void setKXmlGuiWindow_ReadGlobalProperties_IsBase(bool value) const { kxmlguiwindow_readglobalproperties_isbase = value; }
    inline void setKXmlGuiWindow_CreatePopupMenu_IsBase(bool value) const { kxmlguiwindow_createpopupmenu_isbase = value; }
    inline void setKXmlGuiWindow_ContextMenuEvent_IsBase(bool value) const { kxmlguiwindow_contextmenuevent_isbase = value; }
    inline void setKXmlGuiWindow_DevType_IsBase(bool value) const { kxmlguiwindow_devtype_isbase = value; }
    inline void setKXmlGuiWindow_SetVisible_IsBase(bool value) const { kxmlguiwindow_setvisible_isbase = value; }
    inline void setKXmlGuiWindow_SizeHint_IsBase(bool value) const { kxmlguiwindow_sizehint_isbase = value; }
    inline void setKXmlGuiWindow_MinimumSizeHint_IsBase(bool value) const { kxmlguiwindow_minimumsizehint_isbase = value; }
    inline void setKXmlGuiWindow_HeightForWidth_IsBase(bool value) const { kxmlguiwindow_heightforwidth_isbase = value; }
    inline void setKXmlGuiWindow_HasHeightForWidth_IsBase(bool value) const { kxmlguiwindow_hasheightforwidth_isbase = value; }
    inline void setKXmlGuiWindow_PaintEngine_IsBase(bool value) const { kxmlguiwindow_paintengine_isbase = value; }
    inline void setKXmlGuiWindow_MousePressEvent_IsBase(bool value) const { kxmlguiwindow_mousepressevent_isbase = value; }
    inline void setKXmlGuiWindow_MouseReleaseEvent_IsBase(bool value) const { kxmlguiwindow_mousereleaseevent_isbase = value; }
    inline void setKXmlGuiWindow_MouseDoubleClickEvent_IsBase(bool value) const { kxmlguiwindow_mousedoubleclickevent_isbase = value; }
    inline void setKXmlGuiWindow_MouseMoveEvent_IsBase(bool value) const { kxmlguiwindow_mousemoveevent_isbase = value; }
    inline void setKXmlGuiWindow_WheelEvent_IsBase(bool value) const { kxmlguiwindow_wheelevent_isbase = value; }
    inline void setKXmlGuiWindow_KeyReleaseEvent_IsBase(bool value) const { kxmlguiwindow_keyreleaseevent_isbase = value; }
    inline void setKXmlGuiWindow_FocusInEvent_IsBase(bool value) const { kxmlguiwindow_focusinevent_isbase = value; }
    inline void setKXmlGuiWindow_FocusOutEvent_IsBase(bool value) const { kxmlguiwindow_focusoutevent_isbase = value; }
    inline void setKXmlGuiWindow_EnterEvent_IsBase(bool value) const { kxmlguiwindow_enterevent_isbase = value; }
    inline void setKXmlGuiWindow_LeaveEvent_IsBase(bool value) const { kxmlguiwindow_leaveevent_isbase = value; }
    inline void setKXmlGuiWindow_PaintEvent_IsBase(bool value) const { kxmlguiwindow_paintevent_isbase = value; }
    inline void setKXmlGuiWindow_MoveEvent_IsBase(bool value) const { kxmlguiwindow_moveevent_isbase = value; }
    inline void setKXmlGuiWindow_ResizeEvent_IsBase(bool value) const { kxmlguiwindow_resizeevent_isbase = value; }
    inline void setKXmlGuiWindow_TabletEvent_IsBase(bool value) const { kxmlguiwindow_tabletevent_isbase = value; }
    inline void setKXmlGuiWindow_ActionEvent_IsBase(bool value) const { kxmlguiwindow_actionevent_isbase = value; }
    inline void setKXmlGuiWindow_DragEnterEvent_IsBase(bool value) const { kxmlguiwindow_dragenterevent_isbase = value; }
    inline void setKXmlGuiWindow_DragMoveEvent_IsBase(bool value) const { kxmlguiwindow_dragmoveevent_isbase = value; }
    inline void setKXmlGuiWindow_DragLeaveEvent_IsBase(bool value) const { kxmlguiwindow_dragleaveevent_isbase = value; }
    inline void setKXmlGuiWindow_DropEvent_IsBase(bool value) const { kxmlguiwindow_dropevent_isbase = value; }
    inline void setKXmlGuiWindow_ShowEvent_IsBase(bool value) const { kxmlguiwindow_showevent_isbase = value; }
    inline void setKXmlGuiWindow_HideEvent_IsBase(bool value) const { kxmlguiwindow_hideevent_isbase = value; }
    inline void setKXmlGuiWindow_NativeEvent_IsBase(bool value) const { kxmlguiwindow_nativeevent_isbase = value; }
    inline void setKXmlGuiWindow_ChangeEvent_IsBase(bool value) const { kxmlguiwindow_changeevent_isbase = value; }
    inline void setKXmlGuiWindow_Metric_IsBase(bool value) const { kxmlguiwindow_metric_isbase = value; }
    inline void setKXmlGuiWindow_InitPainter_IsBase(bool value) const { kxmlguiwindow_initpainter_isbase = value; }
    inline void setKXmlGuiWindow_Redirected_IsBase(bool value) const { kxmlguiwindow_redirected_isbase = value; }
    inline void setKXmlGuiWindow_SharedPainter_IsBase(bool value) const { kxmlguiwindow_sharedpainter_isbase = value; }
    inline void setKXmlGuiWindow_InputMethodEvent_IsBase(bool value) const { kxmlguiwindow_inputmethodevent_isbase = value; }
    inline void setKXmlGuiWindow_InputMethodQuery_IsBase(bool value) const { kxmlguiwindow_inputmethodquery_isbase = value; }
    inline void setKXmlGuiWindow_FocusNextPrevChild_IsBase(bool value) const { kxmlguiwindow_focusnextprevchild_isbase = value; }
    inline void setKXmlGuiWindow_EventFilter_IsBase(bool value) const { kxmlguiwindow_eventfilter_isbase = value; }
    inline void setKXmlGuiWindow_TimerEvent_IsBase(bool value) const { kxmlguiwindow_timerevent_isbase = value; }
    inline void setKXmlGuiWindow_ChildEvent_IsBase(bool value) const { kxmlguiwindow_childevent_isbase = value; }
    inline void setKXmlGuiWindow_CustomEvent_IsBase(bool value) const { kxmlguiwindow_customevent_isbase = value; }
    inline void setKXmlGuiWindow_ConnectNotify_IsBase(bool value) const { kxmlguiwindow_connectnotify_isbase = value; }
    inline void setKXmlGuiWindow_DisconnectNotify_IsBase(bool value) const { kxmlguiwindow_disconnectnotify_isbase = value; }
    inline void setKXmlGuiWindow_ContainerTags_IsBase(bool value) const { kxmlguiwindow_containertags_isbase = value; }
    inline void setKXmlGuiWindow_CreateContainer_IsBase(bool value) const { kxmlguiwindow_createcontainer_isbase = value; }
    inline void setKXmlGuiWindow_RemoveContainer_IsBase(bool value) const { kxmlguiwindow_removecontainer_isbase = value; }
    inline void setKXmlGuiWindow_CustomTags_IsBase(bool value) const { kxmlguiwindow_customtags_isbase = value; }
    inline void setKXmlGuiWindow_CreateCustomElement_IsBase(bool value) const { kxmlguiwindow_createcustomelement_isbase = value; }
    inline void setKXmlGuiWindow_FinalizeGUI_IsBase(bool value) const { kxmlguiwindow_finalizegui_isbase = value; }
    inline void setKXmlGuiWindow_Action2_IsBase(bool value) const { kxmlguiwindow_action2_isbase = value; }
    inline void setKXmlGuiWindow_ActionCollection_IsBase(bool value) const { kxmlguiwindow_actioncollection_isbase = value; }
    inline void setKXmlGuiWindow_ComponentName_IsBase(bool value) const { kxmlguiwindow_componentname_isbase = value; }
    inline void setKXmlGuiWindow_DomDocument_IsBase(bool value) const { kxmlguiwindow_domdocument_isbase = value; }
    inline void setKXmlGuiWindow_XmlFile_IsBase(bool value) const { kxmlguiwindow_xmlfile_isbase = value; }
    inline void setKXmlGuiWindow_LocalXMLFile_IsBase(bool value) const { kxmlguiwindow_localxmlfile_isbase = value; }
    inline void setKXmlGuiWindow_SetComponentName_IsBase(bool value) const { kxmlguiwindow_setcomponentname_isbase = value; }
    inline void setKXmlGuiWindow_SetXMLFile_IsBase(bool value) const { kxmlguiwindow_setxmlfile_isbase = value; }
    inline void setKXmlGuiWindow_SetLocalXMLFile_IsBase(bool value) const { kxmlguiwindow_setlocalxmlfile_isbase = value; }
    inline void setKXmlGuiWindow_SetXML_IsBase(bool value) const { kxmlguiwindow_setxml_isbase = value; }
    inline void setKXmlGuiWindow_SetDOMDocument_IsBase(bool value) const { kxmlguiwindow_setdomdocument_isbase = value; }
    inline void setKXmlGuiWindow_StateChanged_IsBase(bool value) const { kxmlguiwindow_statechanged_isbase = value; }
    inline void setKXmlGuiWindow_CheckAmbiguousShortcuts_IsBase(bool value) const { kxmlguiwindow_checkambiguousshortcuts_isbase = value; }
    inline void setKXmlGuiWindow_SavePropertiesInternal_IsBase(bool value) const { kxmlguiwindow_savepropertiesinternal_isbase = value; }
    inline void setKXmlGuiWindow_ReadPropertiesInternal_IsBase(bool value) const { kxmlguiwindow_readpropertiesinternal_isbase = value; }
    inline void setKXmlGuiWindow_SettingsDirty_IsBase(bool value) const { kxmlguiwindow_settingsdirty_isbase = value; }
    inline void setKXmlGuiWindow_SaveAutoSaveSettings_IsBase(bool value) const { kxmlguiwindow_saveautosavesettings_isbase = value; }
    inline void setKXmlGuiWindow_UpdateMicroFocus_IsBase(bool value) const { kxmlguiwindow_updatemicrofocus_isbase = value; }
    inline void setKXmlGuiWindow_Create_IsBase(bool value) const { kxmlguiwindow_create_isbase = value; }
    inline void setKXmlGuiWindow_Destroy_IsBase(bool value) const { kxmlguiwindow_destroy_isbase = value; }
    inline void setKXmlGuiWindow_FocusNextChild_IsBase(bool value) const { kxmlguiwindow_focusnextchild_isbase = value; }
    inline void setKXmlGuiWindow_FocusPreviousChild_IsBase(bool value) const { kxmlguiwindow_focuspreviouschild_isbase = value; }
    inline void setKXmlGuiWindow_Sender_IsBase(bool value) const { kxmlguiwindow_sender_isbase = value; }
    inline void setKXmlGuiWindow_SenderSignalIndex_IsBase(bool value) const { kxmlguiwindow_sendersignalindex_isbase = value; }
    inline void setKXmlGuiWindow_Receivers_IsBase(bool value) const { kxmlguiwindow_receivers_isbase = value; }
    inline void setKXmlGuiWindow_IsSignalConnected_IsBase(bool value) const { kxmlguiwindow_issignalconnected_isbase = value; }
    inline void setKXmlGuiWindow_GetDecodedMetricF_IsBase(bool value) const { kxmlguiwindow_getdecodedmetricf_isbase = value; }
    inline void setKXmlGuiWindow_StandardsXmlFileLocation_IsBase(bool value) const { kxmlguiwindow_standardsxmlfilelocation_isbase = value; }
    inline void setKXmlGuiWindow_LoadStandardsXmlFile_IsBase(bool value) const { kxmlguiwindow_loadstandardsxmlfile_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kxmlguiwindow_metacall_isbase) {
            kxmlguiwindow_metacall_isbase = false;
            return KXmlGuiWindow::qt_metacall(param1, param2, param3);
        } else if (kxmlguiwindow_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kxmlguiwindow_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KXmlGuiWindow::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KXMLGUIFactory* guiFactory() override {
        if (kxmlguiwindow_guifactory_isbase) {
            kxmlguiwindow_guifactory_isbase = false;
            return KXmlGuiWindow::guiFactory();
        } else if (kxmlguiwindow_guifactory_callback != nullptr) {
            KXMLGUIFactory* callback_ret = kxmlguiwindow_guifactory_callback();
            return callback_ret;
        } else {
            return KXmlGuiWindow::guiFactory();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyMainWindowSettings(const KConfigGroup& config) override {
        if (kxmlguiwindow_applymainwindowsettings_isbase) {
            kxmlguiwindow_applymainwindowsettings_isbase = false;
            KXmlGuiWindow::applyMainWindowSettings(config);
        } else if (kxmlguiwindow_applymainwindowsettings_callback != nullptr) {
            const KConfigGroup& config_ret = config;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&config_ret);

            kxmlguiwindow_applymainwindowsettings_callback(this, cbval1);
        } else {
            KXmlGuiWindow::applyMainWindowSettings(config);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void configureToolbars() override {
        if (kxmlguiwindow_configuretoolbars_isbase) {
            kxmlguiwindow_configuretoolbars_isbase = false;
            KXmlGuiWindow::configureToolbars();
        } else if (kxmlguiwindow_configuretoolbars_callback != nullptr) {
            kxmlguiwindow_configuretoolbars_callback();
        } else {
            KXmlGuiWindow::configureToolbars();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotStateChanged(const QString& newstate) override {
        if (kxmlguiwindow_slotstatechanged_isbase) {
            kxmlguiwindow_slotstatechanged_isbase = false;
            KXmlGuiWindow::slotStateChanged(newstate);
        } else if (kxmlguiwindow_slotstatechanged_callback != nullptr) {
            const QString newstate_ret = newstate;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray newstate_b = newstate_ret.toUtf8();
            libqt_string newstate_str;
            newstate_str.len = newstate_b.length();
            newstate_str.data = static_cast<const char*>(malloc(newstate_str.len + 1));
            memcpy((void*)newstate_str.data, newstate_b.data(), newstate_str.len);
            ((char*)newstate_str.data)[newstate_str.len] = '\0';
            libqt_string cbval1 = newstate_str;

            kxmlguiwindow_slotstatechanged_callback(this, cbval1);
        } else {
            KXmlGuiWindow::slotStateChanged(newstate);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kxmlguiwindow_event_isbase) {
            kxmlguiwindow_event_isbase = false;
            return KXmlGuiWindow::event(event);
        } else if (kxmlguiwindow_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kxmlguiwindow_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KXmlGuiWindow::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveNewToolbarConfig() override {
        if (kxmlguiwindow_savenewtoolbarconfig_isbase) {
            kxmlguiwindow_savenewtoolbarconfig_isbase = false;
            KXmlGuiWindow::saveNewToolbarConfig();
        } else if (kxmlguiwindow_savenewtoolbarconfig_callback != nullptr) {
            kxmlguiwindow_savenewtoolbarconfig_callback();
        } else {
            KXmlGuiWindow::saveNewToolbarConfig();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaption(const QString& caption) override {
        if (kxmlguiwindow_setcaption_isbase) {
            kxmlguiwindow_setcaption_isbase = false;
            KXmlGuiWindow::setCaption(caption);
        } else if (kxmlguiwindow_setcaption_callback != nullptr) {
            const QString caption_ret = caption;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray caption_b = caption_ret.toUtf8();
            libqt_string caption_str;
            caption_str.len = caption_b.length();
            caption_str.data = static_cast<const char*>(malloc(caption_str.len + 1));
            memcpy((void*)caption_str.data, caption_b.data(), caption_str.len);
            ((char*)caption_str.data)[caption_str.len] = '\0';
            libqt_string cbval1 = caption_str;

            kxmlguiwindow_setcaption_callback(this, cbval1);
        } else {
            KXmlGuiWindow::setCaption(caption);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPlainCaption(const QString& caption) override {
        if (kxmlguiwindow_setplaincaption_isbase) {
            kxmlguiwindow_setplaincaption_isbase = false;
            KXmlGuiWindow::setPlainCaption(caption);
        } else if (kxmlguiwindow_setplaincaption_callback != nullptr) {
            const QString caption_ret = caption;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray caption_b = caption_ret.toUtf8();
            libqt_string caption_str;
            caption_str.len = caption_b.length();
            caption_str.data = static_cast<const char*>(malloc(caption_str.len + 1));
            memcpy((void*)caption_str.data, caption_b.data(), caption_str.len);
            ((char*)caption_str.data)[caption_str.len] = '\0';
            libqt_string cbval1 = caption_str;

            kxmlguiwindow_setplaincaption_callback(this, cbval1);
        } else {
            KXmlGuiWindow::setPlainCaption(caption);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* keyEvent) override {
        if (kxmlguiwindow_keypressevent_isbase) {
            kxmlguiwindow_keypressevent_isbase = false;
            KXmlGuiWindow::keyPressEvent(keyEvent);
        } else if (kxmlguiwindow_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = keyEvent;

            kxmlguiwindow_keypressevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::keyPressEvent(keyEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kxmlguiwindow_closeevent_isbase) {
            kxmlguiwindow_closeevent_isbase = false;
            KXmlGuiWindow::closeEvent(param1);
        } else if (kxmlguiwindow_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            kxmlguiwindow_closeevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool queryClose() override {
        if (kxmlguiwindow_queryclose_isbase) {
            kxmlguiwindow_queryclose_isbase = false;
            return KXmlGuiWindow::queryClose();
        } else if (kxmlguiwindow_queryclose_callback != nullptr) {
            bool callback_ret = kxmlguiwindow_queryclose_callback();
            return callback_ret;
        } else {
            return KXmlGuiWindow::queryClose();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveProperties(KConfigGroup& param1) override {
        if (kxmlguiwindow_saveproperties_isbase) {
            kxmlguiwindow_saveproperties_isbase = false;
            KXmlGuiWindow::saveProperties(param1);
        } else if (kxmlguiwindow_saveproperties_callback != nullptr) {
            KConfigGroup& param1_ret = param1;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = &param1_ret;

            kxmlguiwindow_saveproperties_callback(this, cbval1);
        } else {
            KXmlGuiWindow::saveProperties(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void readProperties(const KConfigGroup& param1) override {
        if (kxmlguiwindow_readproperties_isbase) {
            kxmlguiwindow_readproperties_isbase = false;
            KXmlGuiWindow::readProperties(param1);
        } else if (kxmlguiwindow_readproperties_callback != nullptr) {
            const KConfigGroup& param1_ret = param1;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&param1_ret);

            kxmlguiwindow_readproperties_callback(this, cbval1);
        } else {
            KXmlGuiWindow::readProperties(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveGlobalProperties(KConfig* sessionConfig) override {
        if (kxmlguiwindow_saveglobalproperties_isbase) {
            kxmlguiwindow_saveglobalproperties_isbase = false;
            KXmlGuiWindow::saveGlobalProperties(sessionConfig);
        } else if (kxmlguiwindow_saveglobalproperties_callback != nullptr) {
            KConfig* cbval1 = sessionConfig;

            kxmlguiwindow_saveglobalproperties_callback(this, cbval1);
        } else {
            KXmlGuiWindow::saveGlobalProperties(sessionConfig);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void readGlobalProperties(KConfig* sessionConfig) override {
        if (kxmlguiwindow_readglobalproperties_isbase) {
            kxmlguiwindow_readglobalproperties_isbase = false;
            KXmlGuiWindow::readGlobalProperties(sessionConfig);
        } else if (kxmlguiwindow_readglobalproperties_callback != nullptr) {
            KConfig* cbval1 = sessionConfig;

            kxmlguiwindow_readglobalproperties_callback(this, cbval1);
        } else {
            KXmlGuiWindow::readGlobalProperties(sessionConfig);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMenu* createPopupMenu() override {
        if (kxmlguiwindow_createpopupmenu_isbase) {
            kxmlguiwindow_createpopupmenu_isbase = false;
            return KXmlGuiWindow::createPopupMenu();
        } else if (kxmlguiwindow_createpopupmenu_callback != nullptr) {
            QMenu* callback_ret = kxmlguiwindow_createpopupmenu_callback();
            return callback_ret;
        } else {
            return KXmlGuiWindow::createPopupMenu();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kxmlguiwindow_contextmenuevent_isbase) {
            kxmlguiwindow_contextmenuevent_isbase = false;
            KXmlGuiWindow::contextMenuEvent(event);
        } else if (kxmlguiwindow_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kxmlguiwindow_contextmenuevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kxmlguiwindow_devtype_isbase) {
            kxmlguiwindow_devtype_isbase = false;
            return KXmlGuiWindow::devType();
        } else if (kxmlguiwindow_devtype_callback != nullptr) {
            int callback_ret = kxmlguiwindow_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KXmlGuiWindow::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kxmlguiwindow_setvisible_isbase) {
            kxmlguiwindow_setvisible_isbase = false;
            KXmlGuiWindow::setVisible(visible);
        } else if (kxmlguiwindow_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kxmlguiwindow_setvisible_callback(this, cbval1);
        } else {
            KXmlGuiWindow::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kxmlguiwindow_sizehint_isbase) {
            kxmlguiwindow_sizehint_isbase = false;
            return KXmlGuiWindow::sizeHint();
        } else if (kxmlguiwindow_sizehint_callback != nullptr) {
            QSize* callback_ret = kxmlguiwindow_sizehint_callback();
            return *callback_ret;
        } else {
            return KXmlGuiWindow::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kxmlguiwindow_minimumsizehint_isbase) {
            kxmlguiwindow_minimumsizehint_isbase = false;
            return KXmlGuiWindow::minimumSizeHint();
        } else if (kxmlguiwindow_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kxmlguiwindow_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KXmlGuiWindow::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kxmlguiwindow_heightforwidth_isbase) {
            kxmlguiwindow_heightforwidth_isbase = false;
            return KXmlGuiWindow::heightForWidth(param1);
        } else if (kxmlguiwindow_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kxmlguiwindow_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KXmlGuiWindow::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kxmlguiwindow_hasheightforwidth_isbase) {
            kxmlguiwindow_hasheightforwidth_isbase = false;
            return KXmlGuiWindow::hasHeightForWidth();
        } else if (kxmlguiwindow_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kxmlguiwindow_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KXmlGuiWindow::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kxmlguiwindow_paintengine_isbase) {
            kxmlguiwindow_paintengine_isbase = false;
            return KXmlGuiWindow::paintEngine();
        } else if (kxmlguiwindow_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kxmlguiwindow_paintengine_callback();
            return callback_ret;
        } else {
            return KXmlGuiWindow::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kxmlguiwindow_mousepressevent_isbase) {
            kxmlguiwindow_mousepressevent_isbase = false;
            KXmlGuiWindow::mousePressEvent(event);
        } else if (kxmlguiwindow_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kxmlguiwindow_mousepressevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kxmlguiwindow_mousereleaseevent_isbase) {
            kxmlguiwindow_mousereleaseevent_isbase = false;
            KXmlGuiWindow::mouseReleaseEvent(event);
        } else if (kxmlguiwindow_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kxmlguiwindow_mousereleaseevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kxmlguiwindow_mousedoubleclickevent_isbase) {
            kxmlguiwindow_mousedoubleclickevent_isbase = false;
            KXmlGuiWindow::mouseDoubleClickEvent(event);
        } else if (kxmlguiwindow_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kxmlguiwindow_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kxmlguiwindow_mousemoveevent_isbase) {
            kxmlguiwindow_mousemoveevent_isbase = false;
            KXmlGuiWindow::mouseMoveEvent(event);
        } else if (kxmlguiwindow_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kxmlguiwindow_mousemoveevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kxmlguiwindow_wheelevent_isbase) {
            kxmlguiwindow_wheelevent_isbase = false;
            KXmlGuiWindow::wheelEvent(event);
        } else if (kxmlguiwindow_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kxmlguiwindow_wheelevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kxmlguiwindow_keyreleaseevent_isbase) {
            kxmlguiwindow_keyreleaseevent_isbase = false;
            KXmlGuiWindow::keyReleaseEvent(event);
        } else if (kxmlguiwindow_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kxmlguiwindow_keyreleaseevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kxmlguiwindow_focusinevent_isbase) {
            kxmlguiwindow_focusinevent_isbase = false;
            KXmlGuiWindow::focusInEvent(event);
        } else if (kxmlguiwindow_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kxmlguiwindow_focusinevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kxmlguiwindow_focusoutevent_isbase) {
            kxmlguiwindow_focusoutevent_isbase = false;
            KXmlGuiWindow::focusOutEvent(event);
        } else if (kxmlguiwindow_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kxmlguiwindow_focusoutevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kxmlguiwindow_enterevent_isbase) {
            kxmlguiwindow_enterevent_isbase = false;
            KXmlGuiWindow::enterEvent(event);
        } else if (kxmlguiwindow_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kxmlguiwindow_enterevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kxmlguiwindow_leaveevent_isbase) {
            kxmlguiwindow_leaveevent_isbase = false;
            KXmlGuiWindow::leaveEvent(event);
        } else if (kxmlguiwindow_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kxmlguiwindow_leaveevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kxmlguiwindow_paintevent_isbase) {
            kxmlguiwindow_paintevent_isbase = false;
            KXmlGuiWindow::paintEvent(event);
        } else if (kxmlguiwindow_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kxmlguiwindow_paintevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kxmlguiwindow_moveevent_isbase) {
            kxmlguiwindow_moveevent_isbase = false;
            KXmlGuiWindow::moveEvent(event);
        } else if (kxmlguiwindow_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kxmlguiwindow_moveevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kxmlguiwindow_resizeevent_isbase) {
            kxmlguiwindow_resizeevent_isbase = false;
            KXmlGuiWindow::resizeEvent(event);
        } else if (kxmlguiwindow_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kxmlguiwindow_resizeevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kxmlguiwindow_tabletevent_isbase) {
            kxmlguiwindow_tabletevent_isbase = false;
            KXmlGuiWindow::tabletEvent(event);
        } else if (kxmlguiwindow_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kxmlguiwindow_tabletevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kxmlguiwindow_actionevent_isbase) {
            kxmlguiwindow_actionevent_isbase = false;
            KXmlGuiWindow::actionEvent(event);
        } else if (kxmlguiwindow_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kxmlguiwindow_actionevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kxmlguiwindow_dragenterevent_isbase) {
            kxmlguiwindow_dragenterevent_isbase = false;
            KXmlGuiWindow::dragEnterEvent(event);
        } else if (kxmlguiwindow_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kxmlguiwindow_dragenterevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kxmlguiwindow_dragmoveevent_isbase) {
            kxmlguiwindow_dragmoveevent_isbase = false;
            KXmlGuiWindow::dragMoveEvent(event);
        } else if (kxmlguiwindow_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kxmlguiwindow_dragmoveevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kxmlguiwindow_dragleaveevent_isbase) {
            kxmlguiwindow_dragleaveevent_isbase = false;
            KXmlGuiWindow::dragLeaveEvent(event);
        } else if (kxmlguiwindow_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kxmlguiwindow_dragleaveevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kxmlguiwindow_dropevent_isbase) {
            kxmlguiwindow_dropevent_isbase = false;
            KXmlGuiWindow::dropEvent(event);
        } else if (kxmlguiwindow_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kxmlguiwindow_dropevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kxmlguiwindow_showevent_isbase) {
            kxmlguiwindow_showevent_isbase = false;
            KXmlGuiWindow::showEvent(event);
        } else if (kxmlguiwindow_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kxmlguiwindow_showevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kxmlguiwindow_hideevent_isbase) {
            kxmlguiwindow_hideevent_isbase = false;
            KXmlGuiWindow::hideEvent(event);
        } else if (kxmlguiwindow_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kxmlguiwindow_hideevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kxmlguiwindow_nativeevent_isbase) {
            kxmlguiwindow_nativeevent_isbase = false;
            return KXmlGuiWindow::nativeEvent(eventType, message, result);
        } else if (kxmlguiwindow_nativeevent_callback != nullptr) {
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

            bool callback_ret = kxmlguiwindow_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KXmlGuiWindow::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kxmlguiwindow_changeevent_isbase) {
            kxmlguiwindow_changeevent_isbase = false;
            KXmlGuiWindow::changeEvent(param1);
        } else if (kxmlguiwindow_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kxmlguiwindow_changeevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kxmlguiwindow_metric_isbase) {
            kxmlguiwindow_metric_isbase = false;
            return KXmlGuiWindow::metric(param1);
        } else if (kxmlguiwindow_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kxmlguiwindow_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KXmlGuiWindow::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kxmlguiwindow_initpainter_isbase) {
            kxmlguiwindow_initpainter_isbase = false;
            KXmlGuiWindow::initPainter(painter);
        } else if (kxmlguiwindow_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kxmlguiwindow_initpainter_callback(this, cbval1);
        } else {
            KXmlGuiWindow::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kxmlguiwindow_redirected_isbase) {
            kxmlguiwindow_redirected_isbase = false;
            return KXmlGuiWindow::redirected(offset);
        } else if (kxmlguiwindow_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kxmlguiwindow_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KXmlGuiWindow::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kxmlguiwindow_sharedpainter_isbase) {
            kxmlguiwindow_sharedpainter_isbase = false;
            return KXmlGuiWindow::sharedPainter();
        } else if (kxmlguiwindow_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kxmlguiwindow_sharedpainter_callback();
            return callback_ret;
        } else {
            return KXmlGuiWindow::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kxmlguiwindow_inputmethodevent_isbase) {
            kxmlguiwindow_inputmethodevent_isbase = false;
            KXmlGuiWindow::inputMethodEvent(param1);
        } else if (kxmlguiwindow_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kxmlguiwindow_inputmethodevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kxmlguiwindow_inputmethodquery_isbase) {
            kxmlguiwindow_inputmethodquery_isbase = false;
            return KXmlGuiWindow::inputMethodQuery(param1);
        } else if (kxmlguiwindow_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kxmlguiwindow_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KXmlGuiWindow::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kxmlguiwindow_focusnextprevchild_isbase) {
            kxmlguiwindow_focusnextprevchild_isbase = false;
            return KXmlGuiWindow::focusNextPrevChild(next);
        } else if (kxmlguiwindow_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kxmlguiwindow_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KXmlGuiWindow::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kxmlguiwindow_eventfilter_isbase) {
            kxmlguiwindow_eventfilter_isbase = false;
            return KXmlGuiWindow::eventFilter(watched, event);
        } else if (kxmlguiwindow_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kxmlguiwindow_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KXmlGuiWindow::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kxmlguiwindow_timerevent_isbase) {
            kxmlguiwindow_timerevent_isbase = false;
            KXmlGuiWindow::timerEvent(event);
        } else if (kxmlguiwindow_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kxmlguiwindow_timerevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kxmlguiwindow_childevent_isbase) {
            kxmlguiwindow_childevent_isbase = false;
            KXmlGuiWindow::childEvent(event);
        } else if (kxmlguiwindow_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kxmlguiwindow_childevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kxmlguiwindow_customevent_isbase) {
            kxmlguiwindow_customevent_isbase = false;
            KXmlGuiWindow::customEvent(event);
        } else if (kxmlguiwindow_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kxmlguiwindow_customevent_callback(this, cbval1);
        } else {
            KXmlGuiWindow::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kxmlguiwindow_connectnotify_isbase) {
            kxmlguiwindow_connectnotify_isbase = false;
            KXmlGuiWindow::connectNotify(signal);
        } else if (kxmlguiwindow_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kxmlguiwindow_connectnotify_callback(this, cbval1);
        } else {
            KXmlGuiWindow::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kxmlguiwindow_disconnectnotify_isbase) {
            kxmlguiwindow_disconnectnotify_isbase = false;
            KXmlGuiWindow::disconnectNotify(signal);
        } else if (kxmlguiwindow_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kxmlguiwindow_disconnectnotify_callback(this, cbval1);
        } else {
            KXmlGuiWindow::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> containerTags() const override {
        if (kxmlguiwindow_containertags_isbase) {
            kxmlguiwindow_containertags_isbase = false;
            return KXmlGuiWindow::containerTags();
        } else if (kxmlguiwindow_containertags_callback != nullptr) {
            const char** callback_ret = kxmlguiwindow_containertags_callback();
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
            return KXmlGuiWindow::containerTags();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createContainer(QWidget* parent, int index, const QDomElement& element, QAction*& containerAction) override {
        if (kxmlguiwindow_createcontainer_isbase) {
            kxmlguiwindow_createcontainer_isbase = false;
            return KXmlGuiWindow::createContainer(parent, index, element, containerAction);
        } else if (kxmlguiwindow_createcontainer_callback != nullptr) {
            QWidget* cbval1 = parent;
            int cbval2 = index;
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval3 = const_cast<QDomElement*>(&element_ret);
            QAction*& containerAction_ret = containerAction;
            // Cast returned reference into pointer
            QAction** cbval4 = &containerAction_ret;

            QWidget* callback_ret = kxmlguiwindow_createcontainer_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KXmlGuiWindow::createContainer(parent, index, element, containerAction);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeContainer(QWidget* container, QWidget* parent, QDomElement& element, QAction* containerAction) override {
        if (kxmlguiwindow_removecontainer_isbase) {
            kxmlguiwindow_removecontainer_isbase = false;
            KXmlGuiWindow::removeContainer(container, parent, element, containerAction);
        } else if (kxmlguiwindow_removecontainer_callback != nullptr) {
            QWidget* cbval1 = container;
            QWidget* cbval2 = parent;
            QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval3 = &element_ret;
            QAction* cbval4 = containerAction;

            kxmlguiwindow_removecontainer_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            KXmlGuiWindow::removeContainer(container, parent, element, containerAction);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> customTags() const override {
        if (kxmlguiwindow_customtags_isbase) {
            kxmlguiwindow_customtags_isbase = false;
            return KXmlGuiWindow::customTags();
        } else if (kxmlguiwindow_customtags_callback != nullptr) {
            const char** callback_ret = kxmlguiwindow_customtags_callback();
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
            return KXmlGuiWindow::customTags();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* createCustomElement(QWidget* parent, int index, const QDomElement& element) override {
        if (kxmlguiwindow_createcustomelement_isbase) {
            kxmlguiwindow_createcustomelement_isbase = false;
            return KXmlGuiWindow::createCustomElement(parent, index, element);
        } else if (kxmlguiwindow_createcustomelement_callback != nullptr) {
            QWidget* cbval1 = parent;
            int cbval2 = index;
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval3 = const_cast<QDomElement*>(&element_ret);

            QAction* callback_ret = kxmlguiwindow_createcustomelement_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KXmlGuiWindow::createCustomElement(parent, index, element);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void finalizeGUI(KXMLGUIClient* client) override {
        if (kxmlguiwindow_finalizegui_isbase) {
            kxmlguiwindow_finalizegui_isbase = false;
            KXmlGuiWindow::finalizeGUI(client);
        } else if (kxmlguiwindow_finalizegui_callback != nullptr) {
            KXMLGUIClient* cbval1 = client;

            kxmlguiwindow_finalizegui_callback(this, cbval1);
        } else {
            KXmlGuiWindow::finalizeGUI(client);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* action(const QDomElement& element) const override {
        if (kxmlguiwindow_action2_isbase) {
            kxmlguiwindow_action2_isbase = false;
            return KXmlGuiWindow::action(element);
        } else if (kxmlguiwindow_action2_callback != nullptr) {
            const QDomElement& element_ret = element;
            // Cast returned reference into pointer
            QDomElement* cbval1 = const_cast<QDomElement*>(&element_ret);

            QAction* callback_ret = kxmlguiwindow_action2_callback(this, cbval1);
            return callback_ret;
        } else {
            return KXmlGuiWindow::action(element);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KActionCollection* actionCollection() const override {
        if (kxmlguiwindow_actioncollection_isbase) {
            kxmlguiwindow_actioncollection_isbase = false;
            return KXmlGuiWindow::actionCollection();
        } else if (kxmlguiwindow_actioncollection_callback != nullptr) {
            KActionCollection* callback_ret = kxmlguiwindow_actioncollection_callback();
            return callback_ret;
        } else {
            return KXmlGuiWindow::actionCollection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString componentName() const override {
        if (kxmlguiwindow_componentname_isbase) {
            kxmlguiwindow_componentname_isbase = false;
            return KXmlGuiWindow::componentName();
        } else if (kxmlguiwindow_componentname_callback != nullptr) {
            const char* callback_ret = kxmlguiwindow_componentname_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KXmlGuiWindow::componentName();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDomDocument domDocument() const override {
        if (kxmlguiwindow_domdocument_isbase) {
            kxmlguiwindow_domdocument_isbase = false;
            return KXmlGuiWindow::domDocument();
        } else if (kxmlguiwindow_domdocument_callback != nullptr) {
            QDomDocument* callback_ret = kxmlguiwindow_domdocument_callback();
            return *callback_ret;
        } else {
            return KXmlGuiWindow::domDocument();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString xmlFile() const override {
        if (kxmlguiwindow_xmlfile_isbase) {
            kxmlguiwindow_xmlfile_isbase = false;
            return KXmlGuiWindow::xmlFile();
        } else if (kxmlguiwindow_xmlfile_callback != nullptr) {
            const char* callback_ret = kxmlguiwindow_xmlfile_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KXmlGuiWindow::xmlFile();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString localXMLFile() const override {
        if (kxmlguiwindow_localxmlfile_isbase) {
            kxmlguiwindow_localxmlfile_isbase = false;
            return KXmlGuiWindow::localXMLFile();
        } else if (kxmlguiwindow_localxmlfile_callback != nullptr) {
            const char* callback_ret = kxmlguiwindow_localxmlfile_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KXmlGuiWindow::localXMLFile();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setComponentName(const QString& componentName, const QString& componentDisplayName) override {
        if (kxmlguiwindow_setcomponentname_isbase) {
            kxmlguiwindow_setcomponentname_isbase = false;
            KXmlGuiWindow::setComponentName(componentName, componentDisplayName);
        } else if (kxmlguiwindow_setcomponentname_callback != nullptr) {
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

            kxmlguiwindow_setcomponentname_callback(this, cbval1, cbval2);
        } else {
            KXmlGuiWindow::setComponentName(componentName, componentDisplayName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXMLFile(const QString& file, bool merge, bool setXMLDoc) override {
        if (kxmlguiwindow_setxmlfile_isbase) {
            kxmlguiwindow_setxmlfile_isbase = false;
            KXmlGuiWindow::setXMLFile(file, merge, setXMLDoc);
        } else if (kxmlguiwindow_setxmlfile_callback != nullptr) {
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

            kxmlguiwindow_setxmlfile_callback(this, cbval1, cbval2, cbval3);
        } else {
            KXmlGuiWindow::setXMLFile(file, merge, setXMLDoc);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLocalXMLFile(const QString& file) override {
        if (kxmlguiwindow_setlocalxmlfile_isbase) {
            kxmlguiwindow_setlocalxmlfile_isbase = false;
            KXmlGuiWindow::setLocalXMLFile(file);
        } else if (kxmlguiwindow_setlocalxmlfile_callback != nullptr) {
            const QString file_ret = file;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray file_b = file_ret.toUtf8();
            libqt_string file_str;
            file_str.len = file_b.length();
            file_str.data = static_cast<const char*>(malloc(file_str.len + 1));
            memcpy((void*)file_str.data, file_b.data(), file_str.len);
            ((char*)file_str.data)[file_str.len] = '\0';
            libqt_string cbval1 = file_str;

            kxmlguiwindow_setlocalxmlfile_callback(this, cbval1);
        } else {
            KXmlGuiWindow::setLocalXMLFile(file);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setXML(const QString& document, bool merge) override {
        if (kxmlguiwindow_setxml_isbase) {
            kxmlguiwindow_setxml_isbase = false;
            KXmlGuiWindow::setXML(document, merge);
        } else if (kxmlguiwindow_setxml_callback != nullptr) {
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

            kxmlguiwindow_setxml_callback(this, cbval1, cbval2);
        } else {
            KXmlGuiWindow::setXML(document, merge);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDOMDocument(const QDomDocument& document, bool merge) override {
        if (kxmlguiwindow_setdomdocument_isbase) {
            kxmlguiwindow_setdomdocument_isbase = false;
            KXmlGuiWindow::setDOMDocument(document, merge);
        } else if (kxmlguiwindow_setdomdocument_callback != nullptr) {
            const QDomDocument& document_ret = document;
            // Cast returned reference into pointer
            QDomDocument* cbval1 = const_cast<QDomDocument*>(&document_ret);
            bool cbval2 = merge;

            kxmlguiwindow_setdomdocument_callback(this, cbval1, cbval2);
        } else {
            KXmlGuiWindow::setDOMDocument(document, merge);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stateChanged(const QString& newstate, KXMLGUIClient::ReverseStateChange reverse) override {
        if (kxmlguiwindow_statechanged_isbase) {
            kxmlguiwindow_statechanged_isbase = false;
            KXmlGuiWindow::stateChanged(newstate, reverse);
        } else if (kxmlguiwindow_statechanged_callback != nullptr) {
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

            kxmlguiwindow_statechanged_callback(this, cbval1, cbval2);
        } else {
            KXmlGuiWindow::stateChanged(newstate, reverse);
        }
    }

    // Virtual method for C ABI access and custom callback
    void checkAmbiguousShortcuts() {
        if (kxmlguiwindow_checkambiguousshortcuts_isbase) {
            kxmlguiwindow_checkambiguousshortcuts_isbase = false;
            KXmlGuiWindow::checkAmbiguousShortcuts();
        } else if (kxmlguiwindow_checkambiguousshortcuts_callback != nullptr) {
            kxmlguiwindow_checkambiguousshortcuts_callback();
        } else {
            KXmlGuiWindow::checkAmbiguousShortcuts();
        }
    }

    // Virtual method for C ABI access and custom callback
    void savePropertiesInternal(KConfig* param1, int param2) {
        if (kxmlguiwindow_savepropertiesinternal_isbase) {
            kxmlguiwindow_savepropertiesinternal_isbase = false;
            KXmlGuiWindow::savePropertiesInternal(param1, param2);
        } else if (kxmlguiwindow_savepropertiesinternal_callback != nullptr) {
            KConfig* cbval1 = param1;
            int cbval2 = param2;

            kxmlguiwindow_savepropertiesinternal_callback(this, cbval1, cbval2);
        } else {
            KXmlGuiWindow::savePropertiesInternal(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool readPropertiesInternal(KConfig* param1, int param2) {
        if (kxmlguiwindow_readpropertiesinternal_isbase) {
            kxmlguiwindow_readpropertiesinternal_isbase = false;
            return KXmlGuiWindow::readPropertiesInternal(param1, param2);
        } else if (kxmlguiwindow_readpropertiesinternal_callback != nullptr) {
            KConfig* cbval1 = param1;
            int cbval2 = param2;

            bool callback_ret = kxmlguiwindow_readpropertiesinternal_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KXmlGuiWindow::readPropertiesInternal(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool settingsDirty() const {
        if (kxmlguiwindow_settingsdirty_isbase) {
            kxmlguiwindow_settingsdirty_isbase = false;
            return KXmlGuiWindow::settingsDirty();
        } else if (kxmlguiwindow_settingsdirty_callback != nullptr) {
            bool callback_ret = kxmlguiwindow_settingsdirty_callback();
            return callback_ret;
        } else {
            return KXmlGuiWindow::settingsDirty();
        }
    }

    // Virtual method for C ABI access and custom callback
    void saveAutoSaveSettings() {
        if (kxmlguiwindow_saveautosavesettings_isbase) {
            kxmlguiwindow_saveautosavesettings_isbase = false;
            KXmlGuiWindow::saveAutoSaveSettings();
        } else if (kxmlguiwindow_saveautosavesettings_callback != nullptr) {
            kxmlguiwindow_saveautosavesettings_callback();
        } else {
            KXmlGuiWindow::saveAutoSaveSettings();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kxmlguiwindow_updatemicrofocus_isbase) {
            kxmlguiwindow_updatemicrofocus_isbase = false;
            KXmlGuiWindow::updateMicroFocus();
        } else if (kxmlguiwindow_updatemicrofocus_callback != nullptr) {
            kxmlguiwindow_updatemicrofocus_callback();
        } else {
            KXmlGuiWindow::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kxmlguiwindow_create_isbase) {
            kxmlguiwindow_create_isbase = false;
            KXmlGuiWindow::create();
        } else if (kxmlguiwindow_create_callback != nullptr) {
            kxmlguiwindow_create_callback();
        } else {
            KXmlGuiWindow::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kxmlguiwindow_destroy_isbase) {
            kxmlguiwindow_destroy_isbase = false;
            KXmlGuiWindow::destroy();
        } else if (kxmlguiwindow_destroy_callback != nullptr) {
            kxmlguiwindow_destroy_callback();
        } else {
            KXmlGuiWindow::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kxmlguiwindow_focusnextchild_isbase) {
            kxmlguiwindow_focusnextchild_isbase = false;
            return KXmlGuiWindow::focusNextChild();
        } else if (kxmlguiwindow_focusnextchild_callback != nullptr) {
            bool callback_ret = kxmlguiwindow_focusnextchild_callback();
            return callback_ret;
        } else {
            return KXmlGuiWindow::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kxmlguiwindow_focuspreviouschild_isbase) {
            kxmlguiwindow_focuspreviouschild_isbase = false;
            return KXmlGuiWindow::focusPreviousChild();
        } else if (kxmlguiwindow_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kxmlguiwindow_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KXmlGuiWindow::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kxmlguiwindow_sender_isbase) {
            kxmlguiwindow_sender_isbase = false;
            return KXmlGuiWindow::sender();
        } else if (kxmlguiwindow_sender_callback != nullptr) {
            QObject* callback_ret = kxmlguiwindow_sender_callback();
            return callback_ret;
        } else {
            return KXmlGuiWindow::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kxmlguiwindow_sendersignalindex_isbase) {
            kxmlguiwindow_sendersignalindex_isbase = false;
            return KXmlGuiWindow::senderSignalIndex();
        } else if (kxmlguiwindow_sendersignalindex_callback != nullptr) {
            int callback_ret = kxmlguiwindow_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KXmlGuiWindow::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kxmlguiwindow_receivers_isbase) {
            kxmlguiwindow_receivers_isbase = false;
            return KXmlGuiWindow::receivers(signal);
        } else if (kxmlguiwindow_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kxmlguiwindow_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KXmlGuiWindow::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kxmlguiwindow_issignalconnected_isbase) {
            kxmlguiwindow_issignalconnected_isbase = false;
            return KXmlGuiWindow::isSignalConnected(signal);
        } else if (kxmlguiwindow_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kxmlguiwindow_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KXmlGuiWindow::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kxmlguiwindow_getdecodedmetricf_isbase) {
            kxmlguiwindow_getdecodedmetricf_isbase = false;
            return KXmlGuiWindow::getDecodedMetricF(metricA, metricB);
        } else if (kxmlguiwindow_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kxmlguiwindow_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KXmlGuiWindow::getDecodedMetricF(metricA, metricB);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString standardsXmlFileLocation() {
        if (kxmlguiwindow_standardsxmlfilelocation_isbase) {
            kxmlguiwindow_standardsxmlfilelocation_isbase = false;
            return KXmlGuiWindow::standardsXmlFileLocation();
        } else if (kxmlguiwindow_standardsxmlfilelocation_callback != nullptr) {
            const char* callback_ret = kxmlguiwindow_standardsxmlfilelocation_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KXmlGuiWindow::standardsXmlFileLocation();
        }
    }

    // Virtual method for C ABI access and custom callback
    void loadStandardsXmlFile() {
        if (kxmlguiwindow_loadstandardsxmlfile_isbase) {
            kxmlguiwindow_loadstandardsxmlfile_isbase = false;
            KXmlGuiWindow::loadStandardsXmlFile();
        } else if (kxmlguiwindow_loadstandardsxmlfile_callback != nullptr) {
            kxmlguiwindow_loadstandardsxmlfile_callback();
        } else {
            KXmlGuiWindow::loadStandardsXmlFile();
        }
    }

    // Friend functions
    friend bool KXmlGuiWindow_Event(KXmlGuiWindow* self, QEvent* event);
    friend bool KXmlGuiWindow_QBaseEvent(KXmlGuiWindow* self, QEvent* event);
    friend void KXmlGuiWindow_SaveNewToolbarConfig(KXmlGuiWindow* self);
    friend void KXmlGuiWindow_QBaseSaveNewToolbarConfig(KXmlGuiWindow* self);
    friend void KXmlGuiWindow_KeyPressEvent(KXmlGuiWindow* self, QKeyEvent* keyEvent);
    friend void KXmlGuiWindow_QBaseKeyPressEvent(KXmlGuiWindow* self, QKeyEvent* keyEvent);
    friend void KXmlGuiWindow_CloseEvent(KXmlGuiWindow* self, QCloseEvent* param1);
    friend void KXmlGuiWindow_QBaseCloseEvent(KXmlGuiWindow* self, QCloseEvent* param1);
    friend bool KXmlGuiWindow_QueryClose(KXmlGuiWindow* self);
    friend bool KXmlGuiWindow_QBaseQueryClose(KXmlGuiWindow* self);
    friend void KXmlGuiWindow_SaveProperties(KXmlGuiWindow* self, KConfigGroup* param1);
    friend void KXmlGuiWindow_QBaseSaveProperties(KXmlGuiWindow* self, KConfigGroup* param1);
    friend void KXmlGuiWindow_ReadProperties(KXmlGuiWindow* self, const KConfigGroup* param1);
    friend void KXmlGuiWindow_QBaseReadProperties(KXmlGuiWindow* self, const KConfigGroup* param1);
    friend void KXmlGuiWindow_SaveGlobalProperties(KXmlGuiWindow* self, KConfig* sessionConfig);
    friend void KXmlGuiWindow_QBaseSaveGlobalProperties(KXmlGuiWindow* self, KConfig* sessionConfig);
    friend void KXmlGuiWindow_ReadGlobalProperties(KXmlGuiWindow* self, KConfig* sessionConfig);
    friend void KXmlGuiWindow_QBaseReadGlobalProperties(KXmlGuiWindow* self, KConfig* sessionConfig);
    friend void KXmlGuiWindow_ContextMenuEvent(KXmlGuiWindow* self, QContextMenuEvent* event);
    friend void KXmlGuiWindow_QBaseContextMenuEvent(KXmlGuiWindow* self, QContextMenuEvent* event);
    friend void KXmlGuiWindow_MousePressEvent(KXmlGuiWindow* self, QMouseEvent* event);
    friend void KXmlGuiWindow_QBaseMousePressEvent(KXmlGuiWindow* self, QMouseEvent* event);
    friend void KXmlGuiWindow_MouseReleaseEvent(KXmlGuiWindow* self, QMouseEvent* event);
    friend void KXmlGuiWindow_QBaseMouseReleaseEvent(KXmlGuiWindow* self, QMouseEvent* event);
    friend void KXmlGuiWindow_MouseDoubleClickEvent(KXmlGuiWindow* self, QMouseEvent* event);
    friend void KXmlGuiWindow_QBaseMouseDoubleClickEvent(KXmlGuiWindow* self, QMouseEvent* event);
    friend void KXmlGuiWindow_MouseMoveEvent(KXmlGuiWindow* self, QMouseEvent* event);
    friend void KXmlGuiWindow_QBaseMouseMoveEvent(KXmlGuiWindow* self, QMouseEvent* event);
    friend void KXmlGuiWindow_WheelEvent(KXmlGuiWindow* self, QWheelEvent* event);
    friend void KXmlGuiWindow_QBaseWheelEvent(KXmlGuiWindow* self, QWheelEvent* event);
    friend void KXmlGuiWindow_KeyReleaseEvent(KXmlGuiWindow* self, QKeyEvent* event);
    friend void KXmlGuiWindow_QBaseKeyReleaseEvent(KXmlGuiWindow* self, QKeyEvent* event);
    friend void KXmlGuiWindow_FocusInEvent(KXmlGuiWindow* self, QFocusEvent* event);
    friend void KXmlGuiWindow_QBaseFocusInEvent(KXmlGuiWindow* self, QFocusEvent* event);
    friend void KXmlGuiWindow_FocusOutEvent(KXmlGuiWindow* self, QFocusEvent* event);
    friend void KXmlGuiWindow_QBaseFocusOutEvent(KXmlGuiWindow* self, QFocusEvent* event);
    friend void KXmlGuiWindow_EnterEvent(KXmlGuiWindow* self, QEnterEvent* event);
    friend void KXmlGuiWindow_QBaseEnterEvent(KXmlGuiWindow* self, QEnterEvent* event);
    friend void KXmlGuiWindow_LeaveEvent(KXmlGuiWindow* self, QEvent* event);
    friend void KXmlGuiWindow_QBaseLeaveEvent(KXmlGuiWindow* self, QEvent* event);
    friend void KXmlGuiWindow_PaintEvent(KXmlGuiWindow* self, QPaintEvent* event);
    friend void KXmlGuiWindow_QBasePaintEvent(KXmlGuiWindow* self, QPaintEvent* event);
    friend void KXmlGuiWindow_MoveEvent(KXmlGuiWindow* self, QMoveEvent* event);
    friend void KXmlGuiWindow_QBaseMoveEvent(KXmlGuiWindow* self, QMoveEvent* event);
    friend void KXmlGuiWindow_ResizeEvent(KXmlGuiWindow* self, QResizeEvent* event);
    friend void KXmlGuiWindow_QBaseResizeEvent(KXmlGuiWindow* self, QResizeEvent* event);
    friend void KXmlGuiWindow_TabletEvent(KXmlGuiWindow* self, QTabletEvent* event);
    friend void KXmlGuiWindow_QBaseTabletEvent(KXmlGuiWindow* self, QTabletEvent* event);
    friend void KXmlGuiWindow_ActionEvent(KXmlGuiWindow* self, QActionEvent* event);
    friend void KXmlGuiWindow_QBaseActionEvent(KXmlGuiWindow* self, QActionEvent* event);
    friend void KXmlGuiWindow_DragEnterEvent(KXmlGuiWindow* self, QDragEnterEvent* event);
    friend void KXmlGuiWindow_QBaseDragEnterEvent(KXmlGuiWindow* self, QDragEnterEvent* event);
    friend void KXmlGuiWindow_DragMoveEvent(KXmlGuiWindow* self, QDragMoveEvent* event);
    friend void KXmlGuiWindow_QBaseDragMoveEvent(KXmlGuiWindow* self, QDragMoveEvent* event);
    friend void KXmlGuiWindow_DragLeaveEvent(KXmlGuiWindow* self, QDragLeaveEvent* event);
    friend void KXmlGuiWindow_QBaseDragLeaveEvent(KXmlGuiWindow* self, QDragLeaveEvent* event);
    friend void KXmlGuiWindow_DropEvent(KXmlGuiWindow* self, QDropEvent* event);
    friend void KXmlGuiWindow_QBaseDropEvent(KXmlGuiWindow* self, QDropEvent* event);
    friend void KXmlGuiWindow_ShowEvent(KXmlGuiWindow* self, QShowEvent* event);
    friend void KXmlGuiWindow_QBaseShowEvent(KXmlGuiWindow* self, QShowEvent* event);
    friend void KXmlGuiWindow_HideEvent(KXmlGuiWindow* self, QHideEvent* event);
    friend void KXmlGuiWindow_QBaseHideEvent(KXmlGuiWindow* self, QHideEvent* event);
    friend bool KXmlGuiWindow_NativeEvent(KXmlGuiWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KXmlGuiWindow_QBaseNativeEvent(KXmlGuiWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KXmlGuiWindow_ChangeEvent(KXmlGuiWindow* self, QEvent* param1);
    friend void KXmlGuiWindow_QBaseChangeEvent(KXmlGuiWindow* self, QEvent* param1);
    friend int KXmlGuiWindow_Metric(const KXmlGuiWindow* self, int param1);
    friend int KXmlGuiWindow_QBaseMetric(const KXmlGuiWindow* self, int param1);
    friend void KXmlGuiWindow_InitPainter(const KXmlGuiWindow* self, QPainter* painter);
    friend void KXmlGuiWindow_QBaseInitPainter(const KXmlGuiWindow* self, QPainter* painter);
    friend QPaintDevice* KXmlGuiWindow_Redirected(const KXmlGuiWindow* self, QPoint* offset);
    friend QPaintDevice* KXmlGuiWindow_QBaseRedirected(const KXmlGuiWindow* self, QPoint* offset);
    friend QPainter* KXmlGuiWindow_SharedPainter(const KXmlGuiWindow* self);
    friend QPainter* KXmlGuiWindow_QBaseSharedPainter(const KXmlGuiWindow* self);
    friend void KXmlGuiWindow_InputMethodEvent(KXmlGuiWindow* self, QInputMethodEvent* param1);
    friend void KXmlGuiWindow_QBaseInputMethodEvent(KXmlGuiWindow* self, QInputMethodEvent* param1);
    friend bool KXmlGuiWindow_FocusNextPrevChild(KXmlGuiWindow* self, bool next);
    friend bool KXmlGuiWindow_QBaseFocusNextPrevChild(KXmlGuiWindow* self, bool next);
    friend void KXmlGuiWindow_TimerEvent(KXmlGuiWindow* self, QTimerEvent* event);
    friend void KXmlGuiWindow_QBaseTimerEvent(KXmlGuiWindow* self, QTimerEvent* event);
    friend void KXmlGuiWindow_ChildEvent(KXmlGuiWindow* self, QChildEvent* event);
    friend void KXmlGuiWindow_QBaseChildEvent(KXmlGuiWindow* self, QChildEvent* event);
    friend void KXmlGuiWindow_CustomEvent(KXmlGuiWindow* self, QEvent* event);
    friend void KXmlGuiWindow_QBaseCustomEvent(KXmlGuiWindow* self, QEvent* event);
    friend void KXmlGuiWindow_ConnectNotify(KXmlGuiWindow* self, const QMetaMethod* signal);
    friend void KXmlGuiWindow_QBaseConnectNotify(KXmlGuiWindow* self, const QMetaMethod* signal);
    friend void KXmlGuiWindow_DisconnectNotify(KXmlGuiWindow* self, const QMetaMethod* signal);
    friend void KXmlGuiWindow_QBaseDisconnectNotify(KXmlGuiWindow* self, const QMetaMethod* signal);
    friend void KXmlGuiWindow_SetComponentName(KXmlGuiWindow* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KXmlGuiWindow_QBaseSetComponentName(KXmlGuiWindow* self, const libqt_string componentName, const libqt_string componentDisplayName);
    friend void KXmlGuiWindow_SetXMLFile(KXmlGuiWindow* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KXmlGuiWindow_QBaseSetXMLFile(KXmlGuiWindow* self, const libqt_string file, bool merge, bool setXMLDoc);
    friend void KXmlGuiWindow_SetLocalXMLFile(KXmlGuiWindow* self, const libqt_string file);
    friend void KXmlGuiWindow_QBaseSetLocalXMLFile(KXmlGuiWindow* self, const libqt_string file);
    friend void KXmlGuiWindow_SetXML(KXmlGuiWindow* self, const libqt_string document, bool merge);
    friend void KXmlGuiWindow_QBaseSetXML(KXmlGuiWindow* self, const libqt_string document, bool merge);
    friend void KXmlGuiWindow_SetDOMDocument(KXmlGuiWindow* self, const QDomDocument* document, bool merge);
    friend void KXmlGuiWindow_QBaseSetDOMDocument(KXmlGuiWindow* self, const QDomDocument* document, bool merge);
    friend void KXmlGuiWindow_StateChanged(KXmlGuiWindow* self, const libqt_string newstate, int reverse);
    friend void KXmlGuiWindow_QBaseStateChanged(KXmlGuiWindow* self, const libqt_string newstate, int reverse);
    friend void KXmlGuiWindow_CheckAmbiguousShortcuts(KXmlGuiWindow* self);
    friend void KXmlGuiWindow_QBaseCheckAmbiguousShortcuts(KXmlGuiWindow* self);
    friend void KXmlGuiWindow_SavePropertiesInternal(KXmlGuiWindow* self, KConfig* param1, int param2);
    friend void KXmlGuiWindow_QBaseSavePropertiesInternal(KXmlGuiWindow* self, KConfig* param1, int param2);
    friend bool KXmlGuiWindow_ReadPropertiesInternal(KXmlGuiWindow* self, KConfig* param1, int param2);
    friend bool KXmlGuiWindow_QBaseReadPropertiesInternal(KXmlGuiWindow* self, KConfig* param1, int param2);
    friend bool KXmlGuiWindow_SettingsDirty(const KXmlGuiWindow* self);
    friend bool KXmlGuiWindow_QBaseSettingsDirty(const KXmlGuiWindow* self);
    friend void KXmlGuiWindow_SaveAutoSaveSettings(KXmlGuiWindow* self);
    friend void KXmlGuiWindow_QBaseSaveAutoSaveSettings(KXmlGuiWindow* self);
    friend void KXmlGuiWindow_UpdateMicroFocus(KXmlGuiWindow* self);
    friend void KXmlGuiWindow_QBaseUpdateMicroFocus(KXmlGuiWindow* self);
    friend void KXmlGuiWindow_Create(KXmlGuiWindow* self);
    friend void KXmlGuiWindow_QBaseCreate(KXmlGuiWindow* self);
    friend void KXmlGuiWindow_Destroy(KXmlGuiWindow* self);
    friend void KXmlGuiWindow_QBaseDestroy(KXmlGuiWindow* self);
    friend bool KXmlGuiWindow_FocusNextChild(KXmlGuiWindow* self);
    friend bool KXmlGuiWindow_QBaseFocusNextChild(KXmlGuiWindow* self);
    friend bool KXmlGuiWindow_FocusPreviousChild(KXmlGuiWindow* self);
    friend bool KXmlGuiWindow_QBaseFocusPreviousChild(KXmlGuiWindow* self);
    friend QObject* KXmlGuiWindow_Sender(const KXmlGuiWindow* self);
    friend QObject* KXmlGuiWindow_QBaseSender(const KXmlGuiWindow* self);
    friend int KXmlGuiWindow_SenderSignalIndex(const KXmlGuiWindow* self);
    friend int KXmlGuiWindow_QBaseSenderSignalIndex(const KXmlGuiWindow* self);
    friend int KXmlGuiWindow_Receivers(const KXmlGuiWindow* self, const char* signal);
    friend int KXmlGuiWindow_QBaseReceivers(const KXmlGuiWindow* self, const char* signal);
    friend bool KXmlGuiWindow_IsSignalConnected(const KXmlGuiWindow* self, const QMetaMethod* signal);
    friend bool KXmlGuiWindow_QBaseIsSignalConnected(const KXmlGuiWindow* self, const QMetaMethod* signal);
    friend double KXmlGuiWindow_GetDecodedMetricF(const KXmlGuiWindow* self, int metricA, int metricB);
    friend double KXmlGuiWindow_QBaseGetDecodedMetricF(const KXmlGuiWindow* self, int metricA, int metricB);
    friend libqt_string KXmlGuiWindow_StandardsXmlFileLocation(KXmlGuiWindow* self);
    friend libqt_string KXmlGuiWindow_QBaseStandardsXmlFileLocation(KXmlGuiWindow* self);
    friend void KXmlGuiWindow_LoadStandardsXmlFile(KXmlGuiWindow* self);
    friend void KXmlGuiWindow_QBaseLoadStandardsXmlFile(KXmlGuiWindow* self);
};

#endif
