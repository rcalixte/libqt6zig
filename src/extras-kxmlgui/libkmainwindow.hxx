#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKMAINWINDOW_H
#define SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKMAINWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KMainWindow so that we can call protected methods
class VirtualKMainWindow final : public KMainWindow {

  public:
    // Virtual class boolean flag
    bool isVirtualKMainWindow = true;

    // Virtual class public types (including callbacks)
    using KMainWindow_MetaObject_Callback = QMetaObject* (*)();
    using KMainWindow_Metacast_Callback = void* (*)(KMainWindow*, const char*);
    using KMainWindow_Metacall_Callback = int (*)(KMainWindow*, int, int, void**);
    using KMainWindow_ApplyMainWindowSettings_Callback = void (*)(KMainWindow*, KConfigGroup*);
    using KMainWindow_SetCaption_Callback = void (*)(KMainWindow*, const char*);
    using KMainWindow_SetCaption2_Callback = void (*)(KMainWindow*, const char*, bool);
    using KMainWindow_SetPlainCaption_Callback = void (*)(KMainWindow*, const char*);
    using KMainWindow_Event_Callback = bool (*)(KMainWindow*, QEvent*);
    using KMainWindow_KeyPressEvent_Callback = void (*)(KMainWindow*, QKeyEvent*);
    using KMainWindow_CloseEvent_Callback = void (*)(KMainWindow*, QCloseEvent*);
    using KMainWindow_QueryClose_Callback = bool (*)();
    using KMainWindow_SaveProperties_Callback = void (*)(KMainWindow*, KConfigGroup*);
    using KMainWindow_ReadProperties_Callback = void (*)(KMainWindow*, KConfigGroup*);
    using KMainWindow_SaveGlobalProperties_Callback = void (*)(KMainWindow*, KConfig*);
    using KMainWindow_ReadGlobalProperties_Callback = void (*)(KMainWindow*, KConfig*);
    using KMainWindow_CreatePopupMenu_Callback = QMenu* (*)();
    using KMainWindow_ContextMenuEvent_Callback = void (*)(KMainWindow*, QContextMenuEvent*);
    using KMainWindow_DevType_Callback = int (*)();
    using KMainWindow_SetVisible_Callback = void (*)(KMainWindow*, bool);
    using KMainWindow_SizeHint_Callback = QSize* (*)();
    using KMainWindow_MinimumSizeHint_Callback = QSize* (*)();
    using KMainWindow_HeightForWidth_Callback = int (*)(const KMainWindow*, int);
    using KMainWindow_HasHeightForWidth_Callback = bool (*)();
    using KMainWindow_PaintEngine_Callback = QPaintEngine* (*)();
    using KMainWindow_MousePressEvent_Callback = void (*)(KMainWindow*, QMouseEvent*);
    using KMainWindow_MouseReleaseEvent_Callback = void (*)(KMainWindow*, QMouseEvent*);
    using KMainWindow_MouseDoubleClickEvent_Callback = void (*)(KMainWindow*, QMouseEvent*);
    using KMainWindow_MouseMoveEvent_Callback = void (*)(KMainWindow*, QMouseEvent*);
    using KMainWindow_WheelEvent_Callback = void (*)(KMainWindow*, QWheelEvent*);
    using KMainWindow_KeyReleaseEvent_Callback = void (*)(KMainWindow*, QKeyEvent*);
    using KMainWindow_FocusInEvent_Callback = void (*)(KMainWindow*, QFocusEvent*);
    using KMainWindow_FocusOutEvent_Callback = void (*)(KMainWindow*, QFocusEvent*);
    using KMainWindow_EnterEvent_Callback = void (*)(KMainWindow*, QEnterEvent*);
    using KMainWindow_LeaveEvent_Callback = void (*)(KMainWindow*, QEvent*);
    using KMainWindow_PaintEvent_Callback = void (*)(KMainWindow*, QPaintEvent*);
    using KMainWindow_MoveEvent_Callback = void (*)(KMainWindow*, QMoveEvent*);
    using KMainWindow_ResizeEvent_Callback = void (*)(KMainWindow*, QResizeEvent*);
    using KMainWindow_TabletEvent_Callback = void (*)(KMainWindow*, QTabletEvent*);
    using KMainWindow_ActionEvent_Callback = void (*)(KMainWindow*, QActionEvent*);
    using KMainWindow_DragEnterEvent_Callback = void (*)(KMainWindow*, QDragEnterEvent*);
    using KMainWindow_DragMoveEvent_Callback = void (*)(KMainWindow*, QDragMoveEvent*);
    using KMainWindow_DragLeaveEvent_Callback = void (*)(KMainWindow*, QDragLeaveEvent*);
    using KMainWindow_DropEvent_Callback = void (*)(KMainWindow*, QDropEvent*);
    using KMainWindow_ShowEvent_Callback = void (*)(KMainWindow*, QShowEvent*);
    using KMainWindow_HideEvent_Callback = void (*)(KMainWindow*, QHideEvent*);
    using KMainWindow_NativeEvent_Callback = bool (*)(KMainWindow*, libqt_string, void*, intptr_t*);
    using KMainWindow_ChangeEvent_Callback = void (*)(KMainWindow*, QEvent*);
    using KMainWindow_Metric_Callback = int (*)(const KMainWindow*, int);
    using KMainWindow_InitPainter_Callback = void (*)(const KMainWindow*, QPainter*);
    using KMainWindow_Redirected_Callback = QPaintDevice* (*)(const KMainWindow*, QPoint*);
    using KMainWindow_SharedPainter_Callback = QPainter* (*)();
    using KMainWindow_InputMethodEvent_Callback = void (*)(KMainWindow*, QInputMethodEvent*);
    using KMainWindow_InputMethodQuery_Callback = QVariant* (*)(const KMainWindow*, int);
    using KMainWindow_FocusNextPrevChild_Callback = bool (*)(KMainWindow*, bool);
    using KMainWindow_EventFilter_Callback = bool (*)(KMainWindow*, QObject*, QEvent*);
    using KMainWindow_TimerEvent_Callback = void (*)(KMainWindow*, QTimerEvent*);
    using KMainWindow_ChildEvent_Callback = void (*)(KMainWindow*, QChildEvent*);
    using KMainWindow_CustomEvent_Callback = void (*)(KMainWindow*, QEvent*);
    using KMainWindow_ConnectNotify_Callback = void (*)(KMainWindow*, QMetaMethod*);
    using KMainWindow_DisconnectNotify_Callback = void (*)(KMainWindow*, QMetaMethod*);
    using KMainWindow_SavePropertiesInternal_Callback = void (*)(KMainWindow*, KConfig*, int);
    using KMainWindow_ReadPropertiesInternal_Callback = bool (*)(KMainWindow*, KConfig*, int);
    using KMainWindow_SettingsDirty_Callback = bool (*)();
    using KMainWindow_SaveAutoSaveSettings_Callback = void (*)();
    using KMainWindow_UpdateMicroFocus_Callback = void (*)();
    using KMainWindow_Create_Callback = void (*)();
    using KMainWindow_Destroy_Callback = void (*)();
    using KMainWindow_FocusNextChild_Callback = bool (*)();
    using KMainWindow_FocusPreviousChild_Callback = bool (*)();
    using KMainWindow_Sender_Callback = QObject* (*)();
    using KMainWindow_SenderSignalIndex_Callback = int (*)();
    using KMainWindow_Receivers_Callback = int (*)(const KMainWindow*, const char*);
    using KMainWindow_IsSignalConnected_Callback = bool (*)(const KMainWindow*, QMetaMethod*);
    using KMainWindow_GetDecodedMetricF_Callback = double (*)(const KMainWindow*, int, int);

  protected:
    // Instance callback storage
    KMainWindow_MetaObject_Callback kmainwindow_metaobject_callback = nullptr;
    KMainWindow_Metacast_Callback kmainwindow_metacast_callback = nullptr;
    KMainWindow_Metacall_Callback kmainwindow_metacall_callback = nullptr;
    KMainWindow_ApplyMainWindowSettings_Callback kmainwindow_applymainwindowsettings_callback = nullptr;
    KMainWindow_SetCaption_Callback kmainwindow_setcaption_callback = nullptr;
    KMainWindow_SetCaption2_Callback kmainwindow_setcaption2_callback = nullptr;
    KMainWindow_SetPlainCaption_Callback kmainwindow_setplaincaption_callback = nullptr;
    KMainWindow_Event_Callback kmainwindow_event_callback = nullptr;
    KMainWindow_KeyPressEvent_Callback kmainwindow_keypressevent_callback = nullptr;
    KMainWindow_CloseEvent_Callback kmainwindow_closeevent_callback = nullptr;
    KMainWindow_QueryClose_Callback kmainwindow_queryclose_callback = nullptr;
    KMainWindow_SaveProperties_Callback kmainwindow_saveproperties_callback = nullptr;
    KMainWindow_ReadProperties_Callback kmainwindow_readproperties_callback = nullptr;
    KMainWindow_SaveGlobalProperties_Callback kmainwindow_saveglobalproperties_callback = nullptr;
    KMainWindow_ReadGlobalProperties_Callback kmainwindow_readglobalproperties_callback = nullptr;
    KMainWindow_CreatePopupMenu_Callback kmainwindow_createpopupmenu_callback = nullptr;
    KMainWindow_ContextMenuEvent_Callback kmainwindow_contextmenuevent_callback = nullptr;
    KMainWindow_DevType_Callback kmainwindow_devtype_callback = nullptr;
    KMainWindow_SetVisible_Callback kmainwindow_setvisible_callback = nullptr;
    KMainWindow_SizeHint_Callback kmainwindow_sizehint_callback = nullptr;
    KMainWindow_MinimumSizeHint_Callback kmainwindow_minimumsizehint_callback = nullptr;
    KMainWindow_HeightForWidth_Callback kmainwindow_heightforwidth_callback = nullptr;
    KMainWindow_HasHeightForWidth_Callback kmainwindow_hasheightforwidth_callback = nullptr;
    KMainWindow_PaintEngine_Callback kmainwindow_paintengine_callback = nullptr;
    KMainWindow_MousePressEvent_Callback kmainwindow_mousepressevent_callback = nullptr;
    KMainWindow_MouseReleaseEvent_Callback kmainwindow_mousereleaseevent_callback = nullptr;
    KMainWindow_MouseDoubleClickEvent_Callback kmainwindow_mousedoubleclickevent_callback = nullptr;
    KMainWindow_MouseMoveEvent_Callback kmainwindow_mousemoveevent_callback = nullptr;
    KMainWindow_WheelEvent_Callback kmainwindow_wheelevent_callback = nullptr;
    KMainWindow_KeyReleaseEvent_Callback kmainwindow_keyreleaseevent_callback = nullptr;
    KMainWindow_FocusInEvent_Callback kmainwindow_focusinevent_callback = nullptr;
    KMainWindow_FocusOutEvent_Callback kmainwindow_focusoutevent_callback = nullptr;
    KMainWindow_EnterEvent_Callback kmainwindow_enterevent_callback = nullptr;
    KMainWindow_LeaveEvent_Callback kmainwindow_leaveevent_callback = nullptr;
    KMainWindow_PaintEvent_Callback kmainwindow_paintevent_callback = nullptr;
    KMainWindow_MoveEvent_Callback kmainwindow_moveevent_callback = nullptr;
    KMainWindow_ResizeEvent_Callback kmainwindow_resizeevent_callback = nullptr;
    KMainWindow_TabletEvent_Callback kmainwindow_tabletevent_callback = nullptr;
    KMainWindow_ActionEvent_Callback kmainwindow_actionevent_callback = nullptr;
    KMainWindow_DragEnterEvent_Callback kmainwindow_dragenterevent_callback = nullptr;
    KMainWindow_DragMoveEvent_Callback kmainwindow_dragmoveevent_callback = nullptr;
    KMainWindow_DragLeaveEvent_Callback kmainwindow_dragleaveevent_callback = nullptr;
    KMainWindow_DropEvent_Callback kmainwindow_dropevent_callback = nullptr;
    KMainWindow_ShowEvent_Callback kmainwindow_showevent_callback = nullptr;
    KMainWindow_HideEvent_Callback kmainwindow_hideevent_callback = nullptr;
    KMainWindow_NativeEvent_Callback kmainwindow_nativeevent_callback = nullptr;
    KMainWindow_ChangeEvent_Callback kmainwindow_changeevent_callback = nullptr;
    KMainWindow_Metric_Callback kmainwindow_metric_callback = nullptr;
    KMainWindow_InitPainter_Callback kmainwindow_initpainter_callback = nullptr;
    KMainWindow_Redirected_Callback kmainwindow_redirected_callback = nullptr;
    KMainWindow_SharedPainter_Callback kmainwindow_sharedpainter_callback = nullptr;
    KMainWindow_InputMethodEvent_Callback kmainwindow_inputmethodevent_callback = nullptr;
    KMainWindow_InputMethodQuery_Callback kmainwindow_inputmethodquery_callback = nullptr;
    KMainWindow_FocusNextPrevChild_Callback kmainwindow_focusnextprevchild_callback = nullptr;
    KMainWindow_EventFilter_Callback kmainwindow_eventfilter_callback = nullptr;
    KMainWindow_TimerEvent_Callback kmainwindow_timerevent_callback = nullptr;
    KMainWindow_ChildEvent_Callback kmainwindow_childevent_callback = nullptr;
    KMainWindow_CustomEvent_Callback kmainwindow_customevent_callback = nullptr;
    KMainWindow_ConnectNotify_Callback kmainwindow_connectnotify_callback = nullptr;
    KMainWindow_DisconnectNotify_Callback kmainwindow_disconnectnotify_callback = nullptr;
    KMainWindow_SavePropertiesInternal_Callback kmainwindow_savepropertiesinternal_callback = nullptr;
    KMainWindow_ReadPropertiesInternal_Callback kmainwindow_readpropertiesinternal_callback = nullptr;
    KMainWindow_SettingsDirty_Callback kmainwindow_settingsdirty_callback = nullptr;
    KMainWindow_SaveAutoSaveSettings_Callback kmainwindow_saveautosavesettings_callback = nullptr;
    KMainWindow_UpdateMicroFocus_Callback kmainwindow_updatemicrofocus_callback = nullptr;
    KMainWindow_Create_Callback kmainwindow_create_callback = nullptr;
    KMainWindow_Destroy_Callback kmainwindow_destroy_callback = nullptr;
    KMainWindow_FocusNextChild_Callback kmainwindow_focusnextchild_callback = nullptr;
    KMainWindow_FocusPreviousChild_Callback kmainwindow_focuspreviouschild_callback = nullptr;
    KMainWindow_Sender_Callback kmainwindow_sender_callback = nullptr;
    KMainWindow_SenderSignalIndex_Callback kmainwindow_sendersignalindex_callback = nullptr;
    KMainWindow_Receivers_Callback kmainwindow_receivers_callback = nullptr;
    KMainWindow_IsSignalConnected_Callback kmainwindow_issignalconnected_callback = nullptr;
    KMainWindow_GetDecodedMetricF_Callback kmainwindow_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kmainwindow_metaobject_isbase = false;
    mutable bool kmainwindow_metacast_isbase = false;
    mutable bool kmainwindow_metacall_isbase = false;
    mutable bool kmainwindow_applymainwindowsettings_isbase = false;
    mutable bool kmainwindow_setcaption_isbase = false;
    mutable bool kmainwindow_setcaption2_isbase = false;
    mutable bool kmainwindow_setplaincaption_isbase = false;
    mutable bool kmainwindow_event_isbase = false;
    mutable bool kmainwindow_keypressevent_isbase = false;
    mutable bool kmainwindow_closeevent_isbase = false;
    mutable bool kmainwindow_queryclose_isbase = false;
    mutable bool kmainwindow_saveproperties_isbase = false;
    mutable bool kmainwindow_readproperties_isbase = false;
    mutable bool kmainwindow_saveglobalproperties_isbase = false;
    mutable bool kmainwindow_readglobalproperties_isbase = false;
    mutable bool kmainwindow_createpopupmenu_isbase = false;
    mutable bool kmainwindow_contextmenuevent_isbase = false;
    mutable bool kmainwindow_devtype_isbase = false;
    mutable bool kmainwindow_setvisible_isbase = false;
    mutable bool kmainwindow_sizehint_isbase = false;
    mutable bool kmainwindow_minimumsizehint_isbase = false;
    mutable bool kmainwindow_heightforwidth_isbase = false;
    mutable bool kmainwindow_hasheightforwidth_isbase = false;
    mutable bool kmainwindow_paintengine_isbase = false;
    mutable bool kmainwindow_mousepressevent_isbase = false;
    mutable bool kmainwindow_mousereleaseevent_isbase = false;
    mutable bool kmainwindow_mousedoubleclickevent_isbase = false;
    mutable bool kmainwindow_mousemoveevent_isbase = false;
    mutable bool kmainwindow_wheelevent_isbase = false;
    mutable bool kmainwindow_keyreleaseevent_isbase = false;
    mutable bool kmainwindow_focusinevent_isbase = false;
    mutable bool kmainwindow_focusoutevent_isbase = false;
    mutable bool kmainwindow_enterevent_isbase = false;
    mutable bool kmainwindow_leaveevent_isbase = false;
    mutable bool kmainwindow_paintevent_isbase = false;
    mutable bool kmainwindow_moveevent_isbase = false;
    mutable bool kmainwindow_resizeevent_isbase = false;
    mutable bool kmainwindow_tabletevent_isbase = false;
    mutable bool kmainwindow_actionevent_isbase = false;
    mutable bool kmainwindow_dragenterevent_isbase = false;
    mutable bool kmainwindow_dragmoveevent_isbase = false;
    mutable bool kmainwindow_dragleaveevent_isbase = false;
    mutable bool kmainwindow_dropevent_isbase = false;
    mutable bool kmainwindow_showevent_isbase = false;
    mutable bool kmainwindow_hideevent_isbase = false;
    mutable bool kmainwindow_nativeevent_isbase = false;
    mutable bool kmainwindow_changeevent_isbase = false;
    mutable bool kmainwindow_metric_isbase = false;
    mutable bool kmainwindow_initpainter_isbase = false;
    mutable bool kmainwindow_redirected_isbase = false;
    mutable bool kmainwindow_sharedpainter_isbase = false;
    mutable bool kmainwindow_inputmethodevent_isbase = false;
    mutable bool kmainwindow_inputmethodquery_isbase = false;
    mutable bool kmainwindow_focusnextprevchild_isbase = false;
    mutable bool kmainwindow_eventfilter_isbase = false;
    mutable bool kmainwindow_timerevent_isbase = false;
    mutable bool kmainwindow_childevent_isbase = false;
    mutable bool kmainwindow_customevent_isbase = false;
    mutable bool kmainwindow_connectnotify_isbase = false;
    mutable bool kmainwindow_disconnectnotify_isbase = false;
    mutable bool kmainwindow_savepropertiesinternal_isbase = false;
    mutable bool kmainwindow_readpropertiesinternal_isbase = false;
    mutable bool kmainwindow_settingsdirty_isbase = false;
    mutable bool kmainwindow_saveautosavesettings_isbase = false;
    mutable bool kmainwindow_updatemicrofocus_isbase = false;
    mutable bool kmainwindow_create_isbase = false;
    mutable bool kmainwindow_destroy_isbase = false;
    mutable bool kmainwindow_focusnextchild_isbase = false;
    mutable bool kmainwindow_focuspreviouschild_isbase = false;
    mutable bool kmainwindow_sender_isbase = false;
    mutable bool kmainwindow_sendersignalindex_isbase = false;
    mutable bool kmainwindow_receivers_isbase = false;
    mutable bool kmainwindow_issignalconnected_isbase = false;
    mutable bool kmainwindow_getdecodedmetricf_isbase = false;

  public:
    VirtualKMainWindow(QWidget* parent) : KMainWindow(parent) {};
    VirtualKMainWindow() : KMainWindow() {};
    VirtualKMainWindow(QWidget* parent, Qt::WindowFlags flags) : KMainWindow(parent, flags) {};

    // Callback setters
    inline void setKMainWindow_MetaObject_Callback(KMainWindow_MetaObject_Callback cb) { kmainwindow_metaobject_callback = cb; }
    inline void setKMainWindow_Metacast_Callback(KMainWindow_Metacast_Callback cb) { kmainwindow_metacast_callback = cb; }
    inline void setKMainWindow_Metacall_Callback(KMainWindow_Metacall_Callback cb) { kmainwindow_metacall_callback = cb; }
    inline void setKMainWindow_ApplyMainWindowSettings_Callback(KMainWindow_ApplyMainWindowSettings_Callback cb) { kmainwindow_applymainwindowsettings_callback = cb; }
    inline void setKMainWindow_SetCaption_Callback(KMainWindow_SetCaption_Callback cb) { kmainwindow_setcaption_callback = cb; }
    inline void setKMainWindow_SetCaption2_Callback(KMainWindow_SetCaption2_Callback cb) { kmainwindow_setcaption2_callback = cb; }
    inline void setKMainWindow_SetPlainCaption_Callback(KMainWindow_SetPlainCaption_Callback cb) { kmainwindow_setplaincaption_callback = cb; }
    inline void setKMainWindow_Event_Callback(KMainWindow_Event_Callback cb) { kmainwindow_event_callback = cb; }
    inline void setKMainWindow_KeyPressEvent_Callback(KMainWindow_KeyPressEvent_Callback cb) { kmainwindow_keypressevent_callback = cb; }
    inline void setKMainWindow_CloseEvent_Callback(KMainWindow_CloseEvent_Callback cb) { kmainwindow_closeevent_callback = cb; }
    inline void setKMainWindow_QueryClose_Callback(KMainWindow_QueryClose_Callback cb) { kmainwindow_queryclose_callback = cb; }
    inline void setKMainWindow_SaveProperties_Callback(KMainWindow_SaveProperties_Callback cb) { kmainwindow_saveproperties_callback = cb; }
    inline void setKMainWindow_ReadProperties_Callback(KMainWindow_ReadProperties_Callback cb) { kmainwindow_readproperties_callback = cb; }
    inline void setKMainWindow_SaveGlobalProperties_Callback(KMainWindow_SaveGlobalProperties_Callback cb) { kmainwindow_saveglobalproperties_callback = cb; }
    inline void setKMainWindow_ReadGlobalProperties_Callback(KMainWindow_ReadGlobalProperties_Callback cb) { kmainwindow_readglobalproperties_callback = cb; }
    inline void setKMainWindow_CreatePopupMenu_Callback(KMainWindow_CreatePopupMenu_Callback cb) { kmainwindow_createpopupmenu_callback = cb; }
    inline void setKMainWindow_ContextMenuEvent_Callback(KMainWindow_ContextMenuEvent_Callback cb) { kmainwindow_contextmenuevent_callback = cb; }
    inline void setKMainWindow_DevType_Callback(KMainWindow_DevType_Callback cb) { kmainwindow_devtype_callback = cb; }
    inline void setKMainWindow_SetVisible_Callback(KMainWindow_SetVisible_Callback cb) { kmainwindow_setvisible_callback = cb; }
    inline void setKMainWindow_SizeHint_Callback(KMainWindow_SizeHint_Callback cb) { kmainwindow_sizehint_callback = cb; }
    inline void setKMainWindow_MinimumSizeHint_Callback(KMainWindow_MinimumSizeHint_Callback cb) { kmainwindow_minimumsizehint_callback = cb; }
    inline void setKMainWindow_HeightForWidth_Callback(KMainWindow_HeightForWidth_Callback cb) { kmainwindow_heightforwidth_callback = cb; }
    inline void setKMainWindow_HasHeightForWidth_Callback(KMainWindow_HasHeightForWidth_Callback cb) { kmainwindow_hasheightforwidth_callback = cb; }
    inline void setKMainWindow_PaintEngine_Callback(KMainWindow_PaintEngine_Callback cb) { kmainwindow_paintengine_callback = cb; }
    inline void setKMainWindow_MousePressEvent_Callback(KMainWindow_MousePressEvent_Callback cb) { kmainwindow_mousepressevent_callback = cb; }
    inline void setKMainWindow_MouseReleaseEvent_Callback(KMainWindow_MouseReleaseEvent_Callback cb) { kmainwindow_mousereleaseevent_callback = cb; }
    inline void setKMainWindow_MouseDoubleClickEvent_Callback(KMainWindow_MouseDoubleClickEvent_Callback cb) { kmainwindow_mousedoubleclickevent_callback = cb; }
    inline void setKMainWindow_MouseMoveEvent_Callback(KMainWindow_MouseMoveEvent_Callback cb) { kmainwindow_mousemoveevent_callback = cb; }
    inline void setKMainWindow_WheelEvent_Callback(KMainWindow_WheelEvent_Callback cb) { kmainwindow_wheelevent_callback = cb; }
    inline void setKMainWindow_KeyReleaseEvent_Callback(KMainWindow_KeyReleaseEvent_Callback cb) { kmainwindow_keyreleaseevent_callback = cb; }
    inline void setKMainWindow_FocusInEvent_Callback(KMainWindow_FocusInEvent_Callback cb) { kmainwindow_focusinevent_callback = cb; }
    inline void setKMainWindow_FocusOutEvent_Callback(KMainWindow_FocusOutEvent_Callback cb) { kmainwindow_focusoutevent_callback = cb; }
    inline void setKMainWindow_EnterEvent_Callback(KMainWindow_EnterEvent_Callback cb) { kmainwindow_enterevent_callback = cb; }
    inline void setKMainWindow_LeaveEvent_Callback(KMainWindow_LeaveEvent_Callback cb) { kmainwindow_leaveevent_callback = cb; }
    inline void setKMainWindow_PaintEvent_Callback(KMainWindow_PaintEvent_Callback cb) { kmainwindow_paintevent_callback = cb; }
    inline void setKMainWindow_MoveEvent_Callback(KMainWindow_MoveEvent_Callback cb) { kmainwindow_moveevent_callback = cb; }
    inline void setKMainWindow_ResizeEvent_Callback(KMainWindow_ResizeEvent_Callback cb) { kmainwindow_resizeevent_callback = cb; }
    inline void setKMainWindow_TabletEvent_Callback(KMainWindow_TabletEvent_Callback cb) { kmainwindow_tabletevent_callback = cb; }
    inline void setKMainWindow_ActionEvent_Callback(KMainWindow_ActionEvent_Callback cb) { kmainwindow_actionevent_callback = cb; }
    inline void setKMainWindow_DragEnterEvent_Callback(KMainWindow_DragEnterEvent_Callback cb) { kmainwindow_dragenterevent_callback = cb; }
    inline void setKMainWindow_DragMoveEvent_Callback(KMainWindow_DragMoveEvent_Callback cb) { kmainwindow_dragmoveevent_callback = cb; }
    inline void setKMainWindow_DragLeaveEvent_Callback(KMainWindow_DragLeaveEvent_Callback cb) { kmainwindow_dragleaveevent_callback = cb; }
    inline void setKMainWindow_DropEvent_Callback(KMainWindow_DropEvent_Callback cb) { kmainwindow_dropevent_callback = cb; }
    inline void setKMainWindow_ShowEvent_Callback(KMainWindow_ShowEvent_Callback cb) { kmainwindow_showevent_callback = cb; }
    inline void setKMainWindow_HideEvent_Callback(KMainWindow_HideEvent_Callback cb) { kmainwindow_hideevent_callback = cb; }
    inline void setKMainWindow_NativeEvent_Callback(KMainWindow_NativeEvent_Callback cb) { kmainwindow_nativeevent_callback = cb; }
    inline void setKMainWindow_ChangeEvent_Callback(KMainWindow_ChangeEvent_Callback cb) { kmainwindow_changeevent_callback = cb; }
    inline void setKMainWindow_Metric_Callback(KMainWindow_Metric_Callback cb) { kmainwindow_metric_callback = cb; }
    inline void setKMainWindow_InitPainter_Callback(KMainWindow_InitPainter_Callback cb) { kmainwindow_initpainter_callback = cb; }
    inline void setKMainWindow_Redirected_Callback(KMainWindow_Redirected_Callback cb) { kmainwindow_redirected_callback = cb; }
    inline void setKMainWindow_SharedPainter_Callback(KMainWindow_SharedPainter_Callback cb) { kmainwindow_sharedpainter_callback = cb; }
    inline void setKMainWindow_InputMethodEvent_Callback(KMainWindow_InputMethodEvent_Callback cb) { kmainwindow_inputmethodevent_callback = cb; }
    inline void setKMainWindow_InputMethodQuery_Callback(KMainWindow_InputMethodQuery_Callback cb) { kmainwindow_inputmethodquery_callback = cb; }
    inline void setKMainWindow_FocusNextPrevChild_Callback(KMainWindow_FocusNextPrevChild_Callback cb) { kmainwindow_focusnextprevchild_callback = cb; }
    inline void setKMainWindow_EventFilter_Callback(KMainWindow_EventFilter_Callback cb) { kmainwindow_eventfilter_callback = cb; }
    inline void setKMainWindow_TimerEvent_Callback(KMainWindow_TimerEvent_Callback cb) { kmainwindow_timerevent_callback = cb; }
    inline void setKMainWindow_ChildEvent_Callback(KMainWindow_ChildEvent_Callback cb) { kmainwindow_childevent_callback = cb; }
    inline void setKMainWindow_CustomEvent_Callback(KMainWindow_CustomEvent_Callback cb) { kmainwindow_customevent_callback = cb; }
    inline void setKMainWindow_ConnectNotify_Callback(KMainWindow_ConnectNotify_Callback cb) { kmainwindow_connectnotify_callback = cb; }
    inline void setKMainWindow_DisconnectNotify_Callback(KMainWindow_DisconnectNotify_Callback cb) { kmainwindow_disconnectnotify_callback = cb; }
    inline void setKMainWindow_SavePropertiesInternal_Callback(KMainWindow_SavePropertiesInternal_Callback cb) { kmainwindow_savepropertiesinternal_callback = cb; }
    inline void setKMainWindow_ReadPropertiesInternal_Callback(KMainWindow_ReadPropertiesInternal_Callback cb) { kmainwindow_readpropertiesinternal_callback = cb; }
    inline void setKMainWindow_SettingsDirty_Callback(KMainWindow_SettingsDirty_Callback cb) { kmainwindow_settingsdirty_callback = cb; }
    inline void setKMainWindow_SaveAutoSaveSettings_Callback(KMainWindow_SaveAutoSaveSettings_Callback cb) { kmainwindow_saveautosavesettings_callback = cb; }
    inline void setKMainWindow_UpdateMicroFocus_Callback(KMainWindow_UpdateMicroFocus_Callback cb) { kmainwindow_updatemicrofocus_callback = cb; }
    inline void setKMainWindow_Create_Callback(KMainWindow_Create_Callback cb) { kmainwindow_create_callback = cb; }
    inline void setKMainWindow_Destroy_Callback(KMainWindow_Destroy_Callback cb) { kmainwindow_destroy_callback = cb; }
    inline void setKMainWindow_FocusNextChild_Callback(KMainWindow_FocusNextChild_Callback cb) { kmainwindow_focusnextchild_callback = cb; }
    inline void setKMainWindow_FocusPreviousChild_Callback(KMainWindow_FocusPreviousChild_Callback cb) { kmainwindow_focuspreviouschild_callback = cb; }
    inline void setKMainWindow_Sender_Callback(KMainWindow_Sender_Callback cb) { kmainwindow_sender_callback = cb; }
    inline void setKMainWindow_SenderSignalIndex_Callback(KMainWindow_SenderSignalIndex_Callback cb) { kmainwindow_sendersignalindex_callback = cb; }
    inline void setKMainWindow_Receivers_Callback(KMainWindow_Receivers_Callback cb) { kmainwindow_receivers_callback = cb; }
    inline void setKMainWindow_IsSignalConnected_Callback(KMainWindow_IsSignalConnected_Callback cb) { kmainwindow_issignalconnected_callback = cb; }
    inline void setKMainWindow_GetDecodedMetricF_Callback(KMainWindow_GetDecodedMetricF_Callback cb) { kmainwindow_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKMainWindow_MetaObject_IsBase(bool value) const { kmainwindow_metaobject_isbase = value; }
    inline void setKMainWindow_Metacast_IsBase(bool value) const { kmainwindow_metacast_isbase = value; }
    inline void setKMainWindow_Metacall_IsBase(bool value) const { kmainwindow_metacall_isbase = value; }
    inline void setKMainWindow_ApplyMainWindowSettings_IsBase(bool value) const { kmainwindow_applymainwindowsettings_isbase = value; }
    inline void setKMainWindow_SetCaption_IsBase(bool value) const { kmainwindow_setcaption_isbase = value; }
    inline void setKMainWindow_SetCaption2_IsBase(bool value) const { kmainwindow_setcaption2_isbase = value; }
    inline void setKMainWindow_SetPlainCaption_IsBase(bool value) const { kmainwindow_setplaincaption_isbase = value; }
    inline void setKMainWindow_Event_IsBase(bool value) const { kmainwindow_event_isbase = value; }
    inline void setKMainWindow_KeyPressEvent_IsBase(bool value) const { kmainwindow_keypressevent_isbase = value; }
    inline void setKMainWindow_CloseEvent_IsBase(bool value) const { kmainwindow_closeevent_isbase = value; }
    inline void setKMainWindow_QueryClose_IsBase(bool value) const { kmainwindow_queryclose_isbase = value; }
    inline void setKMainWindow_SaveProperties_IsBase(bool value) const { kmainwindow_saveproperties_isbase = value; }
    inline void setKMainWindow_ReadProperties_IsBase(bool value) const { kmainwindow_readproperties_isbase = value; }
    inline void setKMainWindow_SaveGlobalProperties_IsBase(bool value) const { kmainwindow_saveglobalproperties_isbase = value; }
    inline void setKMainWindow_ReadGlobalProperties_IsBase(bool value) const { kmainwindow_readglobalproperties_isbase = value; }
    inline void setKMainWindow_CreatePopupMenu_IsBase(bool value) const { kmainwindow_createpopupmenu_isbase = value; }
    inline void setKMainWindow_ContextMenuEvent_IsBase(bool value) const { kmainwindow_contextmenuevent_isbase = value; }
    inline void setKMainWindow_DevType_IsBase(bool value) const { kmainwindow_devtype_isbase = value; }
    inline void setKMainWindow_SetVisible_IsBase(bool value) const { kmainwindow_setvisible_isbase = value; }
    inline void setKMainWindow_SizeHint_IsBase(bool value) const { kmainwindow_sizehint_isbase = value; }
    inline void setKMainWindow_MinimumSizeHint_IsBase(bool value) const { kmainwindow_minimumsizehint_isbase = value; }
    inline void setKMainWindow_HeightForWidth_IsBase(bool value) const { kmainwindow_heightforwidth_isbase = value; }
    inline void setKMainWindow_HasHeightForWidth_IsBase(bool value) const { kmainwindow_hasheightforwidth_isbase = value; }
    inline void setKMainWindow_PaintEngine_IsBase(bool value) const { kmainwindow_paintengine_isbase = value; }
    inline void setKMainWindow_MousePressEvent_IsBase(bool value) const { kmainwindow_mousepressevent_isbase = value; }
    inline void setKMainWindow_MouseReleaseEvent_IsBase(bool value) const { kmainwindow_mousereleaseevent_isbase = value; }
    inline void setKMainWindow_MouseDoubleClickEvent_IsBase(bool value) const { kmainwindow_mousedoubleclickevent_isbase = value; }
    inline void setKMainWindow_MouseMoveEvent_IsBase(bool value) const { kmainwindow_mousemoveevent_isbase = value; }
    inline void setKMainWindow_WheelEvent_IsBase(bool value) const { kmainwindow_wheelevent_isbase = value; }
    inline void setKMainWindow_KeyReleaseEvent_IsBase(bool value) const { kmainwindow_keyreleaseevent_isbase = value; }
    inline void setKMainWindow_FocusInEvent_IsBase(bool value) const { kmainwindow_focusinevent_isbase = value; }
    inline void setKMainWindow_FocusOutEvent_IsBase(bool value) const { kmainwindow_focusoutevent_isbase = value; }
    inline void setKMainWindow_EnterEvent_IsBase(bool value) const { kmainwindow_enterevent_isbase = value; }
    inline void setKMainWindow_LeaveEvent_IsBase(bool value) const { kmainwindow_leaveevent_isbase = value; }
    inline void setKMainWindow_PaintEvent_IsBase(bool value) const { kmainwindow_paintevent_isbase = value; }
    inline void setKMainWindow_MoveEvent_IsBase(bool value) const { kmainwindow_moveevent_isbase = value; }
    inline void setKMainWindow_ResizeEvent_IsBase(bool value) const { kmainwindow_resizeevent_isbase = value; }
    inline void setKMainWindow_TabletEvent_IsBase(bool value) const { kmainwindow_tabletevent_isbase = value; }
    inline void setKMainWindow_ActionEvent_IsBase(bool value) const { kmainwindow_actionevent_isbase = value; }
    inline void setKMainWindow_DragEnterEvent_IsBase(bool value) const { kmainwindow_dragenterevent_isbase = value; }
    inline void setKMainWindow_DragMoveEvent_IsBase(bool value) const { kmainwindow_dragmoveevent_isbase = value; }
    inline void setKMainWindow_DragLeaveEvent_IsBase(bool value) const { kmainwindow_dragleaveevent_isbase = value; }
    inline void setKMainWindow_DropEvent_IsBase(bool value) const { kmainwindow_dropevent_isbase = value; }
    inline void setKMainWindow_ShowEvent_IsBase(bool value) const { kmainwindow_showevent_isbase = value; }
    inline void setKMainWindow_HideEvent_IsBase(bool value) const { kmainwindow_hideevent_isbase = value; }
    inline void setKMainWindow_NativeEvent_IsBase(bool value) const { kmainwindow_nativeevent_isbase = value; }
    inline void setKMainWindow_ChangeEvent_IsBase(bool value) const { kmainwindow_changeevent_isbase = value; }
    inline void setKMainWindow_Metric_IsBase(bool value) const { kmainwindow_metric_isbase = value; }
    inline void setKMainWindow_InitPainter_IsBase(bool value) const { kmainwindow_initpainter_isbase = value; }
    inline void setKMainWindow_Redirected_IsBase(bool value) const { kmainwindow_redirected_isbase = value; }
    inline void setKMainWindow_SharedPainter_IsBase(bool value) const { kmainwindow_sharedpainter_isbase = value; }
    inline void setKMainWindow_InputMethodEvent_IsBase(bool value) const { kmainwindow_inputmethodevent_isbase = value; }
    inline void setKMainWindow_InputMethodQuery_IsBase(bool value) const { kmainwindow_inputmethodquery_isbase = value; }
    inline void setKMainWindow_FocusNextPrevChild_IsBase(bool value) const { kmainwindow_focusnextprevchild_isbase = value; }
    inline void setKMainWindow_EventFilter_IsBase(bool value) const { kmainwindow_eventfilter_isbase = value; }
    inline void setKMainWindow_TimerEvent_IsBase(bool value) const { kmainwindow_timerevent_isbase = value; }
    inline void setKMainWindow_ChildEvent_IsBase(bool value) const { kmainwindow_childevent_isbase = value; }
    inline void setKMainWindow_CustomEvent_IsBase(bool value) const { kmainwindow_customevent_isbase = value; }
    inline void setKMainWindow_ConnectNotify_IsBase(bool value) const { kmainwindow_connectnotify_isbase = value; }
    inline void setKMainWindow_DisconnectNotify_IsBase(bool value) const { kmainwindow_disconnectnotify_isbase = value; }
    inline void setKMainWindow_SavePropertiesInternal_IsBase(bool value) const { kmainwindow_savepropertiesinternal_isbase = value; }
    inline void setKMainWindow_ReadPropertiesInternal_IsBase(bool value) const { kmainwindow_readpropertiesinternal_isbase = value; }
    inline void setKMainWindow_SettingsDirty_IsBase(bool value) const { kmainwindow_settingsdirty_isbase = value; }
    inline void setKMainWindow_SaveAutoSaveSettings_IsBase(bool value) const { kmainwindow_saveautosavesettings_isbase = value; }
    inline void setKMainWindow_UpdateMicroFocus_IsBase(bool value) const { kmainwindow_updatemicrofocus_isbase = value; }
    inline void setKMainWindow_Create_IsBase(bool value) const { kmainwindow_create_isbase = value; }
    inline void setKMainWindow_Destroy_IsBase(bool value) const { kmainwindow_destroy_isbase = value; }
    inline void setKMainWindow_FocusNextChild_IsBase(bool value) const { kmainwindow_focusnextchild_isbase = value; }
    inline void setKMainWindow_FocusPreviousChild_IsBase(bool value) const { kmainwindow_focuspreviouschild_isbase = value; }
    inline void setKMainWindow_Sender_IsBase(bool value) const { kmainwindow_sender_isbase = value; }
    inline void setKMainWindow_SenderSignalIndex_IsBase(bool value) const { kmainwindow_sendersignalindex_isbase = value; }
    inline void setKMainWindow_Receivers_IsBase(bool value) const { kmainwindow_receivers_isbase = value; }
    inline void setKMainWindow_IsSignalConnected_IsBase(bool value) const { kmainwindow_issignalconnected_isbase = value; }
    inline void setKMainWindow_GetDecodedMetricF_IsBase(bool value) const { kmainwindow_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kmainwindow_metaobject_isbase) {
            kmainwindow_metaobject_isbase = false;
            return KMainWindow::metaObject();
        }
        auto metaobject_cb = kmainwindow_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KMainWindow::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kmainwindow_metacast_isbase) {
            kmainwindow_metacast_isbase = false;
            return KMainWindow::qt_metacast(param1);
        }
        auto metacast_cb = kmainwindow_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KMainWindow::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kmainwindow_metacall_isbase) {
            kmainwindow_metacall_isbase = false;
            return KMainWindow::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kmainwindow_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KMainWindow::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyMainWindowSettings(const KConfigGroup& config) override {
        if (kmainwindow_applymainwindowsettings_isbase) {
            kmainwindow_applymainwindowsettings_isbase = false;
            KMainWindow::applyMainWindowSettings(config);
            return;
        }
        auto applymainwindowsettings_cb = kmainwindow_applymainwindowsettings_callback;
        if (applymainwindowsettings_cb) {
            const KConfigGroup& config_ret = config;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&config_ret);

            applymainwindowsettings_cb(this, cbval1);
            return;
        }
        KMainWindow::applyMainWindowSettings(config);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaption(const QString& caption) override {
        if (kmainwindow_setcaption_isbase) {
            kmainwindow_setcaption_isbase = false;
            KMainWindow::setCaption(caption);
            return;
        }
        auto setcaption_cb = kmainwindow_setcaption_callback;
        if (setcaption_cb) {
            const QString caption_ret = caption;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray caption_b = caption_ret.toUtf8();
            auto caption_str_len = caption_b.length();
            const char* caption_str = static_cast<const char*>(malloc(caption_str_len + 1));
            memcpy((void*)caption_str, caption_b.data(), caption_str_len);
            ((char*)caption_str)[caption_str_len] = '\0';
            const char* cbval1 = caption_str;

            setcaption_cb(this, cbval1);
            libqt_free(caption_str);
            return;
        }
        KMainWindow::setCaption(caption);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaption(const QString& caption, bool modified) override {
        if (kmainwindow_setcaption2_isbase) {
            kmainwindow_setcaption2_isbase = false;
            KMainWindow::setCaption(caption, modified);
            return;
        }
        auto setcaption2_cb = kmainwindow_setcaption2_callback;
        if (setcaption2_cb) {
            const QString caption_ret = caption;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray caption_b = caption_ret.toUtf8();
            auto caption_str_len = caption_b.length();
            const char* caption_str = static_cast<const char*>(malloc(caption_str_len + 1));
            memcpy((void*)caption_str, caption_b.data(), caption_str_len);
            ((char*)caption_str)[caption_str_len] = '\0';
            const char* cbval1 = caption_str;
            bool cbval2 = modified;

            setcaption2_cb(this, cbval1, cbval2);
            libqt_free(caption_str);
            return;
        }
        KMainWindow::setCaption(caption, modified);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPlainCaption(const QString& caption) override {
        if (kmainwindow_setplaincaption_isbase) {
            kmainwindow_setplaincaption_isbase = false;
            KMainWindow::setPlainCaption(caption);
            return;
        }
        auto setplaincaption_cb = kmainwindow_setplaincaption_callback;
        if (setplaincaption_cb) {
            const QString caption_ret = caption;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray caption_b = caption_ret.toUtf8();
            auto caption_str_len = caption_b.length();
            const char* caption_str = static_cast<const char*>(malloc(caption_str_len + 1));
            memcpy((void*)caption_str, caption_b.data(), caption_str_len);
            ((char*)caption_str)[caption_str_len] = '\0';
            const char* cbval1 = caption_str;

            setplaincaption_cb(this, cbval1);
            libqt_free(caption_str);
            return;
        }
        KMainWindow::setPlainCaption(caption);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kmainwindow_event_isbase) {
            kmainwindow_event_isbase = false;
            return KMainWindow::event(event);
        }
        auto event_cb = kmainwindow_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KMainWindow::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* keyEvent) override {
        if (kmainwindow_keypressevent_isbase) {
            kmainwindow_keypressevent_isbase = false;
            KMainWindow::keyPressEvent(keyEvent);
            return;
        }
        auto keypressevent_cb = kmainwindow_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = keyEvent;

            keypressevent_cb(this, cbval1);
            return;
        }
        KMainWindow::keyPressEvent(keyEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kmainwindow_closeevent_isbase) {
            kmainwindow_closeevent_isbase = false;
            KMainWindow::closeEvent(param1);
            return;
        }
        auto closeevent_cb = kmainwindow_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        KMainWindow::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool queryClose() override {
        if (kmainwindow_queryclose_isbase) {
            kmainwindow_queryclose_isbase = false;
            return KMainWindow::queryClose();
        }
        auto queryclose_cb = kmainwindow_queryclose_callback;
        if (queryclose_cb) {
            bool callback_ret = queryclose_cb();
            return callback_ret;
        }
        return KMainWindow::queryClose();
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveProperties(KConfigGroup& param1) override {
        if (kmainwindow_saveproperties_isbase) {
            kmainwindow_saveproperties_isbase = false;
            KMainWindow::saveProperties(param1);
            return;
        }
        auto saveproperties_cb = kmainwindow_saveproperties_callback;
        if (saveproperties_cb) {
            KConfigGroup& param1_ret = param1;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = &param1_ret;

            saveproperties_cb(this, cbval1);
            return;
        }
        KMainWindow::saveProperties(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readProperties(const KConfigGroup& param1) override {
        if (kmainwindow_readproperties_isbase) {
            kmainwindow_readproperties_isbase = false;
            KMainWindow::readProperties(param1);
            return;
        }
        auto readproperties_cb = kmainwindow_readproperties_callback;
        if (readproperties_cb) {
            const KConfigGroup& param1_ret = param1;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&param1_ret);

            readproperties_cb(this, cbval1);
            return;
        }
        KMainWindow::readProperties(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveGlobalProperties(KConfig* sessionConfig) override {
        if (kmainwindow_saveglobalproperties_isbase) {
            kmainwindow_saveglobalproperties_isbase = false;
            KMainWindow::saveGlobalProperties(sessionConfig);
            return;
        }
        auto saveglobalproperties_cb = kmainwindow_saveglobalproperties_callback;
        if (saveglobalproperties_cb) {
            KConfig* cbval1 = sessionConfig;

            saveglobalproperties_cb(this, cbval1);
            return;
        }
        KMainWindow::saveGlobalProperties(sessionConfig);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readGlobalProperties(KConfig* sessionConfig) override {
        if (kmainwindow_readglobalproperties_isbase) {
            kmainwindow_readglobalproperties_isbase = false;
            KMainWindow::readGlobalProperties(sessionConfig);
            return;
        }
        auto readglobalproperties_cb = kmainwindow_readglobalproperties_callback;
        if (readglobalproperties_cb) {
            KConfig* cbval1 = sessionConfig;

            readglobalproperties_cb(this, cbval1);
            return;
        }
        KMainWindow::readGlobalProperties(sessionConfig);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMenu* createPopupMenu() override {
        if (kmainwindow_createpopupmenu_isbase) {
            kmainwindow_createpopupmenu_isbase = false;
            return KMainWindow::createPopupMenu();
        }
        auto createpopupmenu_cb = kmainwindow_createpopupmenu_callback;
        if (createpopupmenu_cb) {
            QMenu* callback_ret = createpopupmenu_cb();
            return callback_ret;
        }
        return KMainWindow::createPopupMenu();
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kmainwindow_contextmenuevent_isbase) {
            kmainwindow_contextmenuevent_isbase = false;
            KMainWindow::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = kmainwindow_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KMainWindow::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kmainwindow_devtype_isbase) {
            kmainwindow_devtype_isbase = false;
            return KMainWindow::devType();
        }
        auto devtype_cb = kmainwindow_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KMainWindow::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kmainwindow_setvisible_isbase) {
            kmainwindow_setvisible_isbase = false;
            KMainWindow::setVisible(visible);
            return;
        }
        auto setvisible_cb = kmainwindow_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KMainWindow::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kmainwindow_sizehint_isbase) {
            kmainwindow_sizehint_isbase = false;
            return KMainWindow::sizeHint();
        }
        auto sizehint_cb = kmainwindow_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KMainWindow::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kmainwindow_minimumsizehint_isbase) {
            kmainwindow_minimumsizehint_isbase = false;
            return KMainWindow::minimumSizeHint();
        }
        auto minimumsizehint_cb = kmainwindow_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KMainWindow::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kmainwindow_heightforwidth_isbase) {
            kmainwindow_heightforwidth_isbase = false;
            return KMainWindow::heightForWidth(param1);
        }
        auto heightforwidth_cb = kmainwindow_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KMainWindow::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kmainwindow_hasheightforwidth_isbase) {
            kmainwindow_hasheightforwidth_isbase = false;
            return KMainWindow::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kmainwindow_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KMainWindow::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kmainwindow_paintengine_isbase) {
            kmainwindow_paintengine_isbase = false;
            return KMainWindow::paintEngine();
        }
        auto paintengine_cb = kmainwindow_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KMainWindow::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kmainwindow_mousepressevent_isbase) {
            kmainwindow_mousepressevent_isbase = false;
            KMainWindow::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kmainwindow_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KMainWindow::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kmainwindow_mousereleaseevent_isbase) {
            kmainwindow_mousereleaseevent_isbase = false;
            KMainWindow::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kmainwindow_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KMainWindow::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kmainwindow_mousedoubleclickevent_isbase) {
            kmainwindow_mousedoubleclickevent_isbase = false;
            KMainWindow::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kmainwindow_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KMainWindow::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kmainwindow_mousemoveevent_isbase) {
            kmainwindow_mousemoveevent_isbase = false;
            KMainWindow::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kmainwindow_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KMainWindow::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kmainwindow_wheelevent_isbase) {
            kmainwindow_wheelevent_isbase = false;
            KMainWindow::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kmainwindow_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KMainWindow::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kmainwindow_keyreleaseevent_isbase) {
            kmainwindow_keyreleaseevent_isbase = false;
            KMainWindow::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kmainwindow_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KMainWindow::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kmainwindow_focusinevent_isbase) {
            kmainwindow_focusinevent_isbase = false;
            KMainWindow::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kmainwindow_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KMainWindow::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kmainwindow_focusoutevent_isbase) {
            kmainwindow_focusoutevent_isbase = false;
            KMainWindow::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kmainwindow_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KMainWindow::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kmainwindow_enterevent_isbase) {
            kmainwindow_enterevent_isbase = false;
            KMainWindow::enterEvent(event);
            return;
        }
        auto enterevent_cb = kmainwindow_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KMainWindow::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kmainwindow_leaveevent_isbase) {
            kmainwindow_leaveevent_isbase = false;
            KMainWindow::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kmainwindow_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KMainWindow::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kmainwindow_paintevent_isbase) {
            kmainwindow_paintevent_isbase = false;
            KMainWindow::paintEvent(event);
            return;
        }
        auto paintevent_cb = kmainwindow_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KMainWindow::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kmainwindow_moveevent_isbase) {
            kmainwindow_moveevent_isbase = false;
            KMainWindow::moveEvent(event);
            return;
        }
        auto moveevent_cb = kmainwindow_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KMainWindow::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kmainwindow_resizeevent_isbase) {
            kmainwindow_resizeevent_isbase = false;
            KMainWindow::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = kmainwindow_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KMainWindow::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kmainwindow_tabletevent_isbase) {
            kmainwindow_tabletevent_isbase = false;
            KMainWindow::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kmainwindow_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KMainWindow::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kmainwindow_actionevent_isbase) {
            kmainwindow_actionevent_isbase = false;
            KMainWindow::actionEvent(event);
            return;
        }
        auto actionevent_cb = kmainwindow_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KMainWindow::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kmainwindow_dragenterevent_isbase) {
            kmainwindow_dragenterevent_isbase = false;
            KMainWindow::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kmainwindow_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KMainWindow::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kmainwindow_dragmoveevent_isbase) {
            kmainwindow_dragmoveevent_isbase = false;
            KMainWindow::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kmainwindow_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KMainWindow::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kmainwindow_dragleaveevent_isbase) {
            kmainwindow_dragleaveevent_isbase = false;
            KMainWindow::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kmainwindow_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KMainWindow::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kmainwindow_dropevent_isbase) {
            kmainwindow_dropevent_isbase = false;
            KMainWindow::dropEvent(event);
            return;
        }
        auto dropevent_cb = kmainwindow_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KMainWindow::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kmainwindow_showevent_isbase) {
            kmainwindow_showevent_isbase = false;
            KMainWindow::showEvent(event);
            return;
        }
        auto showevent_cb = kmainwindow_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KMainWindow::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kmainwindow_hideevent_isbase) {
            kmainwindow_hideevent_isbase = false;
            KMainWindow::hideEvent(event);
            return;
        }
        auto hideevent_cb = kmainwindow_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KMainWindow::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kmainwindow_nativeevent_isbase) {
            kmainwindow_nativeevent_isbase = false;
            return KMainWindow::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kmainwindow_nativeevent_callback;
        if (nativeevent_cb) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = nativeevent_cb(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KMainWindow::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kmainwindow_changeevent_isbase) {
            kmainwindow_changeevent_isbase = false;
            KMainWindow::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kmainwindow_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KMainWindow::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kmainwindow_metric_isbase) {
            kmainwindow_metric_isbase = false;
            return KMainWindow::metric(param1);
        }
        auto metric_cb = kmainwindow_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KMainWindow::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kmainwindow_initpainter_isbase) {
            kmainwindow_initpainter_isbase = false;
            KMainWindow::initPainter(painter);
            return;
        }
        auto initpainter_cb = kmainwindow_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KMainWindow::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kmainwindow_redirected_isbase) {
            kmainwindow_redirected_isbase = false;
            return KMainWindow::redirected(offset);
        }
        auto redirected_cb = kmainwindow_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KMainWindow::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kmainwindow_sharedpainter_isbase) {
            kmainwindow_sharedpainter_isbase = false;
            return KMainWindow::sharedPainter();
        }
        auto sharedpainter_cb = kmainwindow_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KMainWindow::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kmainwindow_inputmethodevent_isbase) {
            kmainwindow_inputmethodevent_isbase = false;
            KMainWindow::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kmainwindow_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KMainWindow::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kmainwindow_inputmethodquery_isbase) {
            kmainwindow_inputmethodquery_isbase = false;
            return KMainWindow::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kmainwindow_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KMainWindow::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kmainwindow_focusnextprevchild_isbase) {
            kmainwindow_focusnextprevchild_isbase = false;
            return KMainWindow::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kmainwindow_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KMainWindow::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kmainwindow_eventfilter_isbase) {
            kmainwindow_eventfilter_isbase = false;
            return KMainWindow::eventFilter(watched, event);
        }
        auto eventfilter_cb = kmainwindow_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KMainWindow::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kmainwindow_timerevent_isbase) {
            kmainwindow_timerevent_isbase = false;
            KMainWindow::timerEvent(event);
            return;
        }
        auto timerevent_cb = kmainwindow_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KMainWindow::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kmainwindow_childevent_isbase) {
            kmainwindow_childevent_isbase = false;
            KMainWindow::childEvent(event);
            return;
        }
        auto childevent_cb = kmainwindow_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KMainWindow::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kmainwindow_customevent_isbase) {
            kmainwindow_customevent_isbase = false;
            KMainWindow::customEvent(event);
            return;
        }
        auto customevent_cb = kmainwindow_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KMainWindow::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kmainwindow_connectnotify_isbase) {
            kmainwindow_connectnotify_isbase = false;
            KMainWindow::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kmainwindow_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KMainWindow::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kmainwindow_disconnectnotify_isbase) {
            kmainwindow_disconnectnotify_isbase = false;
            KMainWindow::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kmainwindow_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KMainWindow::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void savePropertiesInternal(KConfig* param1, int param2) {
        if (kmainwindow_savepropertiesinternal_isbase) {
            kmainwindow_savepropertiesinternal_isbase = false;
            KMainWindow::savePropertiesInternal(param1, param2);
            return;
        }
        auto savepropertiesinternal_cb = kmainwindow_savepropertiesinternal_callback;
        if (savepropertiesinternal_cb) {
            KConfig* cbval1 = param1;
            int cbval2 = param2;

            savepropertiesinternal_cb(this, cbval1, cbval2);
            return;
        }
        KMainWindow::savePropertiesInternal(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    bool readPropertiesInternal(KConfig* param1, int param2) {
        if (kmainwindow_readpropertiesinternal_isbase) {
            kmainwindow_readpropertiesinternal_isbase = false;
            return KMainWindow::readPropertiesInternal(param1, param2);
        }
        auto readpropertiesinternal_cb = kmainwindow_readpropertiesinternal_callback;
        if (readpropertiesinternal_cb) {
            KConfig* cbval1 = param1;
            int cbval2 = param2;

            bool callback_ret = readpropertiesinternal_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KMainWindow::readPropertiesInternal(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    bool settingsDirty() const {
        if (kmainwindow_settingsdirty_isbase) {
            kmainwindow_settingsdirty_isbase = false;
            return KMainWindow::settingsDirty();
        }
        auto settingsdirty_cb = kmainwindow_settingsdirty_callback;
        if (settingsdirty_cb) {
            bool callback_ret = settingsdirty_cb();
            return callback_ret;
        }
        return KMainWindow::settingsDirty();
    }

    // Virtual method for C ABI access and custom callback
    void saveAutoSaveSettings() {
        if (kmainwindow_saveautosavesettings_isbase) {
            kmainwindow_saveautosavesettings_isbase = false;
            KMainWindow::saveAutoSaveSettings();
            return;
        }
        auto saveautosavesettings_cb = kmainwindow_saveautosavesettings_callback;
        if (saveautosavesettings_cb) {
            saveautosavesettings_cb();
            return;
        }
        KMainWindow::saveAutoSaveSettings();
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kmainwindow_updatemicrofocus_isbase) {
            kmainwindow_updatemicrofocus_isbase = false;
            KMainWindow::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kmainwindow_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KMainWindow::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kmainwindow_create_isbase) {
            kmainwindow_create_isbase = false;
            KMainWindow::create();
            return;
        }
        auto create_cb = kmainwindow_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KMainWindow::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kmainwindow_destroy_isbase) {
            kmainwindow_destroy_isbase = false;
            KMainWindow::destroy();
            return;
        }
        auto destroy_cb = kmainwindow_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KMainWindow::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kmainwindow_focusnextchild_isbase) {
            kmainwindow_focusnextchild_isbase = false;
            return KMainWindow::focusNextChild();
        }
        auto focusnextchild_cb = kmainwindow_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KMainWindow::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kmainwindow_focuspreviouschild_isbase) {
            kmainwindow_focuspreviouschild_isbase = false;
            return KMainWindow::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kmainwindow_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KMainWindow::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kmainwindow_sender_isbase) {
            kmainwindow_sender_isbase = false;
            return KMainWindow::sender();
        }
        auto sender_cb = kmainwindow_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KMainWindow::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kmainwindow_sendersignalindex_isbase) {
            kmainwindow_sendersignalindex_isbase = false;
            return KMainWindow::senderSignalIndex();
        }
        auto sendersignalindex_cb = kmainwindow_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KMainWindow::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kmainwindow_receivers_isbase) {
            kmainwindow_receivers_isbase = false;
            return KMainWindow::receivers(signal);
        }
        auto receivers_cb = kmainwindow_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KMainWindow::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kmainwindow_issignalconnected_isbase) {
            kmainwindow_issignalconnected_isbase = false;
            return KMainWindow::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kmainwindow_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KMainWindow::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kmainwindow_getdecodedmetricf_isbase) {
            kmainwindow_getdecodedmetricf_isbase = false;
            return KMainWindow::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kmainwindow_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KMainWindow::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool KMainWindow_Event(KMainWindow* self, QEvent* event);
    friend bool KMainWindow_SuperEvent(KMainWindow* self, QEvent* event);
    friend void KMainWindow_KeyPressEvent(KMainWindow* self, QKeyEvent* keyEvent);
    friend void KMainWindow_SuperKeyPressEvent(KMainWindow* self, QKeyEvent* keyEvent);
    friend void KMainWindow_CloseEvent(KMainWindow* self, QCloseEvent* param1);
    friend void KMainWindow_SuperCloseEvent(KMainWindow* self, QCloseEvent* param1);
    friend bool KMainWindow_QueryClose(KMainWindow* self);
    friend bool KMainWindow_SuperQueryClose(KMainWindow* self);
    friend void KMainWindow_SaveProperties(KMainWindow* self, KConfigGroup* param1);
    friend void KMainWindow_SuperSaveProperties(KMainWindow* self, KConfigGroup* param1);
    friend void KMainWindow_ReadProperties(KMainWindow* self, const KConfigGroup* param1);
    friend void KMainWindow_SuperReadProperties(KMainWindow* self, const KConfigGroup* param1);
    friend void KMainWindow_SaveGlobalProperties(KMainWindow* self, KConfig* sessionConfig);
    friend void KMainWindow_SuperSaveGlobalProperties(KMainWindow* self, KConfig* sessionConfig);
    friend void KMainWindow_ReadGlobalProperties(KMainWindow* self, KConfig* sessionConfig);
    friend void KMainWindow_SuperReadGlobalProperties(KMainWindow* self, KConfig* sessionConfig);
    friend void KMainWindow_ContextMenuEvent(KMainWindow* self, QContextMenuEvent* event);
    friend void KMainWindow_SuperContextMenuEvent(KMainWindow* self, QContextMenuEvent* event);
    friend void KMainWindow_MousePressEvent(KMainWindow* self, QMouseEvent* event);
    friend void KMainWindow_SuperMousePressEvent(KMainWindow* self, QMouseEvent* event);
    friend void KMainWindow_MouseReleaseEvent(KMainWindow* self, QMouseEvent* event);
    friend void KMainWindow_SuperMouseReleaseEvent(KMainWindow* self, QMouseEvent* event);
    friend void KMainWindow_MouseDoubleClickEvent(KMainWindow* self, QMouseEvent* event);
    friend void KMainWindow_SuperMouseDoubleClickEvent(KMainWindow* self, QMouseEvent* event);
    friend void KMainWindow_MouseMoveEvent(KMainWindow* self, QMouseEvent* event);
    friend void KMainWindow_SuperMouseMoveEvent(KMainWindow* self, QMouseEvent* event);
    friend void KMainWindow_WheelEvent(KMainWindow* self, QWheelEvent* event);
    friend void KMainWindow_SuperWheelEvent(KMainWindow* self, QWheelEvent* event);
    friend void KMainWindow_KeyReleaseEvent(KMainWindow* self, QKeyEvent* event);
    friend void KMainWindow_SuperKeyReleaseEvent(KMainWindow* self, QKeyEvent* event);
    friend void KMainWindow_FocusInEvent(KMainWindow* self, QFocusEvent* event);
    friend void KMainWindow_SuperFocusInEvent(KMainWindow* self, QFocusEvent* event);
    friend void KMainWindow_FocusOutEvent(KMainWindow* self, QFocusEvent* event);
    friend void KMainWindow_SuperFocusOutEvent(KMainWindow* self, QFocusEvent* event);
    friend void KMainWindow_EnterEvent(KMainWindow* self, QEnterEvent* event);
    friend void KMainWindow_SuperEnterEvent(KMainWindow* self, QEnterEvent* event);
    friend void KMainWindow_LeaveEvent(KMainWindow* self, QEvent* event);
    friend void KMainWindow_SuperLeaveEvent(KMainWindow* self, QEvent* event);
    friend void KMainWindow_PaintEvent(KMainWindow* self, QPaintEvent* event);
    friend void KMainWindow_SuperPaintEvent(KMainWindow* self, QPaintEvent* event);
    friend void KMainWindow_MoveEvent(KMainWindow* self, QMoveEvent* event);
    friend void KMainWindow_SuperMoveEvent(KMainWindow* self, QMoveEvent* event);
    friend void KMainWindow_ResizeEvent(KMainWindow* self, QResizeEvent* event);
    friend void KMainWindow_SuperResizeEvent(KMainWindow* self, QResizeEvent* event);
    friend void KMainWindow_TabletEvent(KMainWindow* self, QTabletEvent* event);
    friend void KMainWindow_SuperTabletEvent(KMainWindow* self, QTabletEvent* event);
    friend void KMainWindow_ActionEvent(KMainWindow* self, QActionEvent* event);
    friend void KMainWindow_SuperActionEvent(KMainWindow* self, QActionEvent* event);
    friend void KMainWindow_DragEnterEvent(KMainWindow* self, QDragEnterEvent* event);
    friend void KMainWindow_SuperDragEnterEvent(KMainWindow* self, QDragEnterEvent* event);
    friend void KMainWindow_DragMoveEvent(KMainWindow* self, QDragMoveEvent* event);
    friend void KMainWindow_SuperDragMoveEvent(KMainWindow* self, QDragMoveEvent* event);
    friend void KMainWindow_DragLeaveEvent(KMainWindow* self, QDragLeaveEvent* event);
    friend void KMainWindow_SuperDragLeaveEvent(KMainWindow* self, QDragLeaveEvent* event);
    friend void KMainWindow_DropEvent(KMainWindow* self, QDropEvent* event);
    friend void KMainWindow_SuperDropEvent(KMainWindow* self, QDropEvent* event);
    friend void KMainWindow_ShowEvent(KMainWindow* self, QShowEvent* event);
    friend void KMainWindow_SuperShowEvent(KMainWindow* self, QShowEvent* event);
    friend void KMainWindow_HideEvent(KMainWindow* self, QHideEvent* event);
    friend void KMainWindow_SuperHideEvent(KMainWindow* self, QHideEvent* event);
    friend bool KMainWindow_NativeEvent(KMainWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KMainWindow_SuperNativeEvent(KMainWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KMainWindow_ChangeEvent(KMainWindow* self, QEvent* param1);
    friend void KMainWindow_SuperChangeEvent(KMainWindow* self, QEvent* param1);
    friend int KMainWindow_Metric(const KMainWindow* self, int param1);
    friend int KMainWindow_SuperMetric(const KMainWindow* self, int param1);
    friend void KMainWindow_InitPainter(const KMainWindow* self, QPainter* painter);
    friend void KMainWindow_SuperInitPainter(const KMainWindow* self, QPainter* painter);
    friend QPaintDevice* KMainWindow_Redirected(const KMainWindow* self, QPoint* offset);
    friend QPaintDevice* KMainWindow_SuperRedirected(const KMainWindow* self, QPoint* offset);
    friend QPainter* KMainWindow_SharedPainter(const KMainWindow* self);
    friend QPainter* KMainWindow_SuperSharedPainter(const KMainWindow* self);
    friend void KMainWindow_InputMethodEvent(KMainWindow* self, QInputMethodEvent* param1);
    friend void KMainWindow_SuperInputMethodEvent(KMainWindow* self, QInputMethodEvent* param1);
    friend bool KMainWindow_FocusNextPrevChild(KMainWindow* self, bool next);
    friend bool KMainWindow_SuperFocusNextPrevChild(KMainWindow* self, bool next);
    friend void KMainWindow_TimerEvent(KMainWindow* self, QTimerEvent* event);
    friend void KMainWindow_SuperTimerEvent(KMainWindow* self, QTimerEvent* event);
    friend void KMainWindow_ChildEvent(KMainWindow* self, QChildEvent* event);
    friend void KMainWindow_SuperChildEvent(KMainWindow* self, QChildEvent* event);
    friend void KMainWindow_CustomEvent(KMainWindow* self, QEvent* event);
    friend void KMainWindow_SuperCustomEvent(KMainWindow* self, QEvent* event);
    friend void KMainWindow_ConnectNotify(KMainWindow* self, const QMetaMethod* signal);
    friend void KMainWindow_SuperConnectNotify(KMainWindow* self, const QMetaMethod* signal);
    friend void KMainWindow_DisconnectNotify(KMainWindow* self, const QMetaMethod* signal);
    friend void KMainWindow_SuperDisconnectNotify(KMainWindow* self, const QMetaMethod* signal);
    friend void KMainWindow_SavePropertiesInternal(KMainWindow* self, KConfig* param1, int param2);
    friend void KMainWindow_SuperSavePropertiesInternal(KMainWindow* self, KConfig* param1, int param2);
    friend bool KMainWindow_ReadPropertiesInternal(KMainWindow* self, KConfig* param1, int param2);
    friend bool KMainWindow_SuperReadPropertiesInternal(KMainWindow* self, KConfig* param1, int param2);
    friend bool KMainWindow_SettingsDirty(const KMainWindow* self);
    friend bool KMainWindow_SuperSettingsDirty(const KMainWindow* self);
    friend void KMainWindow_SaveAutoSaveSettings(KMainWindow* self);
    friend void KMainWindow_SuperSaveAutoSaveSettings(KMainWindow* self);
    friend void KMainWindow_UpdateMicroFocus(KMainWindow* self);
    friend void KMainWindow_SuperUpdateMicroFocus(KMainWindow* self);
    friend void KMainWindow_Create(KMainWindow* self);
    friend void KMainWindow_SuperCreate(KMainWindow* self);
    friend void KMainWindow_Destroy(KMainWindow* self);
    friend void KMainWindow_SuperDestroy(KMainWindow* self);
    friend bool KMainWindow_FocusNextChild(KMainWindow* self);
    friend bool KMainWindow_SuperFocusNextChild(KMainWindow* self);
    friend bool KMainWindow_FocusPreviousChild(KMainWindow* self);
    friend bool KMainWindow_SuperFocusPreviousChild(KMainWindow* self);
    friend QObject* KMainWindow_Sender(const KMainWindow* self);
    friend QObject* KMainWindow_SuperSender(const KMainWindow* self);
    friend int KMainWindow_SenderSignalIndex(const KMainWindow* self);
    friend int KMainWindow_SuperSenderSignalIndex(const KMainWindow* self);
    friend int KMainWindow_Receivers(const KMainWindow* self, const char* signal);
    friend int KMainWindow_SuperReceivers(const KMainWindow* self, const char* signal);
    friend bool KMainWindow_IsSignalConnected(const KMainWindow* self, const QMetaMethod* signal);
    friend bool KMainWindow_SuperIsSignalConnected(const KMainWindow* self, const QMetaMethod* signal);
    friend double KMainWindow_GetDecodedMetricF(const KMainWindow* self, int metricA, int metricB);
    friend double KMainWindow_SuperGetDecodedMetricF(const KMainWindow* self, int metricA, int metricB);
};

#endif
