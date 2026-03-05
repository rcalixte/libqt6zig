#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKCONFIGDIALOG_H
#define SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKCONFIGDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KConfigDialog so that we can call protected methods
class VirtualKConfigDialog final : public KConfigDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKConfigDialog = true;

    // Virtual class public types (including callbacks)
    using KConfigDialog_MetaObject_Callback = QMetaObject* (*)();
    using KConfigDialog_Metacast_Callback = void* (*)(KConfigDialog*, const char*);
    using KConfigDialog_Metacall_Callback = int (*)(KConfigDialog*, int, int, void**);
    using KConfigDialog_UpdateSettings_Callback = void (*)();
    using KConfigDialog_UpdateWidgets_Callback = void (*)();
    using KConfigDialog_UpdateWidgetsDefault_Callback = void (*)();
    using KConfigDialog_ShowHelp_Callback = void (*)();
    using KConfigDialog_HasChanged_Callback = bool (*)();
    using KConfigDialog_IsDefault_Callback = bool (*)();
    using KConfigDialog_ShowEvent_Callback = void (*)(KConfigDialog*, QShowEvent*);
    using KConfigDialog_SetVisible_Callback = void (*)(KConfigDialog*, bool);
    using KConfigDialog_SizeHint_Callback = QSize* (*)();
    using KConfigDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KConfigDialog_Open_Callback = void (*)();
    using KConfigDialog_Exec_Callback = int (*)();
    using KConfigDialog_Done_Callback = void (*)(KConfigDialog*, int);
    using KConfigDialog_Accept_Callback = void (*)();
    using KConfigDialog_Reject_Callback = void (*)();
    using KConfigDialog_KeyPressEvent_Callback = void (*)(KConfigDialog*, QKeyEvent*);
    using KConfigDialog_CloseEvent_Callback = void (*)(KConfigDialog*, QCloseEvent*);
    using KConfigDialog_ResizeEvent_Callback = void (*)(KConfigDialog*, QResizeEvent*);
    using KConfigDialog_ContextMenuEvent_Callback = void (*)(KConfigDialog*, QContextMenuEvent*);
    using KConfigDialog_EventFilter_Callback = bool (*)(KConfigDialog*, QObject*, QEvent*);
    using KConfigDialog_DevType_Callback = int (*)();
    using KConfigDialog_HeightForWidth_Callback = int (*)(const KConfigDialog*, int);
    using KConfigDialog_HasHeightForWidth_Callback = bool (*)();
    using KConfigDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KConfigDialog_Event_Callback = bool (*)(KConfigDialog*, QEvent*);
    using KConfigDialog_MousePressEvent_Callback = void (*)(KConfigDialog*, QMouseEvent*);
    using KConfigDialog_MouseReleaseEvent_Callback = void (*)(KConfigDialog*, QMouseEvent*);
    using KConfigDialog_MouseDoubleClickEvent_Callback = void (*)(KConfigDialog*, QMouseEvent*);
    using KConfigDialog_MouseMoveEvent_Callback = void (*)(KConfigDialog*, QMouseEvent*);
    using KConfigDialog_WheelEvent_Callback = void (*)(KConfigDialog*, QWheelEvent*);
    using KConfigDialog_KeyReleaseEvent_Callback = void (*)(KConfigDialog*, QKeyEvent*);
    using KConfigDialog_FocusInEvent_Callback = void (*)(KConfigDialog*, QFocusEvent*);
    using KConfigDialog_FocusOutEvent_Callback = void (*)(KConfigDialog*, QFocusEvent*);
    using KConfigDialog_EnterEvent_Callback = void (*)(KConfigDialog*, QEnterEvent*);
    using KConfigDialog_LeaveEvent_Callback = void (*)(KConfigDialog*, QEvent*);
    using KConfigDialog_PaintEvent_Callback = void (*)(KConfigDialog*, QPaintEvent*);
    using KConfigDialog_MoveEvent_Callback = void (*)(KConfigDialog*, QMoveEvent*);
    using KConfigDialog_TabletEvent_Callback = void (*)(KConfigDialog*, QTabletEvent*);
    using KConfigDialog_ActionEvent_Callback = void (*)(KConfigDialog*, QActionEvent*);
    using KConfigDialog_DragEnterEvent_Callback = void (*)(KConfigDialog*, QDragEnterEvent*);
    using KConfigDialog_DragMoveEvent_Callback = void (*)(KConfigDialog*, QDragMoveEvent*);
    using KConfigDialog_DragLeaveEvent_Callback = void (*)(KConfigDialog*, QDragLeaveEvent*);
    using KConfigDialog_DropEvent_Callback = void (*)(KConfigDialog*, QDropEvent*);
    using KConfigDialog_HideEvent_Callback = void (*)(KConfigDialog*, QHideEvent*);
    using KConfigDialog_NativeEvent_Callback = bool (*)(KConfigDialog*, libqt_string, void*, intptr_t*);
    using KConfigDialog_ChangeEvent_Callback = void (*)(KConfigDialog*, QEvent*);
    using KConfigDialog_Metric_Callback = int (*)(const KConfigDialog*, int);
    using KConfigDialog_InitPainter_Callback = void (*)(const KConfigDialog*, QPainter*);
    using KConfigDialog_Redirected_Callback = QPaintDevice* (*)(const KConfigDialog*, QPoint*);
    using KConfigDialog_SharedPainter_Callback = QPainter* (*)();
    using KConfigDialog_InputMethodEvent_Callback = void (*)(KConfigDialog*, QInputMethodEvent*);
    using KConfigDialog_InputMethodQuery_Callback = QVariant* (*)(const KConfigDialog*, int);
    using KConfigDialog_FocusNextPrevChild_Callback = bool (*)(KConfigDialog*, bool);
    using KConfigDialog_TimerEvent_Callback = void (*)(KConfigDialog*, QTimerEvent*);
    using KConfigDialog_ChildEvent_Callback = void (*)(KConfigDialog*, QChildEvent*);
    using KConfigDialog_CustomEvent_Callback = void (*)(KConfigDialog*, QEvent*);
    using KConfigDialog_ConnectNotify_Callback = void (*)(KConfigDialog*, QMetaMethod*);
    using KConfigDialog_DisconnectNotify_Callback = void (*)(KConfigDialog*, QMetaMethod*);
    using KConfigDialog_UpdateButtons_Callback = void (*)();
    using KConfigDialog_SettingsChangedSlot_Callback = void (*)();
    using KConfigDialog_SetHelp_Callback = void (*)(KConfigDialog*, const char*);
    using KConfigDialog_SetHelp2_Callback = void (*)(KConfigDialog*, const char*, const char*);
    using KConfigDialog_PageWidget_Callback = KPageWidget* (*)();
    using KConfigDialog_SetPageWidget_Callback = void (*)(KConfigDialog*, KPageWidget*);
    using KConfigDialog_ButtonBox_Callback = QDialogButtonBox* (*)();
    using KConfigDialog_SetButtonBox_Callback = void (*)(KConfigDialog*, QDialogButtonBox*);
    using KConfigDialog_AdjustPosition_Callback = void (*)(KConfigDialog*, QWidget*);
    using KConfigDialog_UpdateMicroFocus_Callback = void (*)();
    using KConfigDialog_Create_Callback = void (*)();
    using KConfigDialog_Destroy_Callback = void (*)();
    using KConfigDialog_FocusNextChild_Callback = bool (*)();
    using KConfigDialog_FocusPreviousChild_Callback = bool (*)();
    using KConfigDialog_Sender_Callback = QObject* (*)();
    using KConfigDialog_SenderSignalIndex_Callback = int (*)();
    using KConfigDialog_Receivers_Callback = int (*)(const KConfigDialog*, const char*);
    using KConfigDialog_IsSignalConnected_Callback = bool (*)(const KConfigDialog*, QMetaMethod*);
    using KConfigDialog_GetDecodedMetricF_Callback = double (*)(const KConfigDialog*, int, int);

  protected:
    // Instance callback storage
    KConfigDialog_MetaObject_Callback kconfigdialog_metaobject_callback = nullptr;
    KConfigDialog_Metacast_Callback kconfigdialog_metacast_callback = nullptr;
    KConfigDialog_Metacall_Callback kconfigdialog_metacall_callback = nullptr;
    KConfigDialog_UpdateSettings_Callback kconfigdialog_updatesettings_callback = nullptr;
    KConfigDialog_UpdateWidgets_Callback kconfigdialog_updatewidgets_callback = nullptr;
    KConfigDialog_UpdateWidgetsDefault_Callback kconfigdialog_updatewidgetsdefault_callback = nullptr;
    KConfigDialog_ShowHelp_Callback kconfigdialog_showhelp_callback = nullptr;
    KConfigDialog_HasChanged_Callback kconfigdialog_haschanged_callback = nullptr;
    KConfigDialog_IsDefault_Callback kconfigdialog_isdefault_callback = nullptr;
    KConfigDialog_ShowEvent_Callback kconfigdialog_showevent_callback = nullptr;
    KConfigDialog_SetVisible_Callback kconfigdialog_setvisible_callback = nullptr;
    KConfigDialog_SizeHint_Callback kconfigdialog_sizehint_callback = nullptr;
    KConfigDialog_MinimumSizeHint_Callback kconfigdialog_minimumsizehint_callback = nullptr;
    KConfigDialog_Open_Callback kconfigdialog_open_callback = nullptr;
    KConfigDialog_Exec_Callback kconfigdialog_exec_callback = nullptr;
    KConfigDialog_Done_Callback kconfigdialog_done_callback = nullptr;
    KConfigDialog_Accept_Callback kconfigdialog_accept_callback = nullptr;
    KConfigDialog_Reject_Callback kconfigdialog_reject_callback = nullptr;
    KConfigDialog_KeyPressEvent_Callback kconfigdialog_keypressevent_callback = nullptr;
    KConfigDialog_CloseEvent_Callback kconfigdialog_closeevent_callback = nullptr;
    KConfigDialog_ResizeEvent_Callback kconfigdialog_resizeevent_callback = nullptr;
    KConfigDialog_ContextMenuEvent_Callback kconfigdialog_contextmenuevent_callback = nullptr;
    KConfigDialog_EventFilter_Callback kconfigdialog_eventfilter_callback = nullptr;
    KConfigDialog_DevType_Callback kconfigdialog_devtype_callback = nullptr;
    KConfigDialog_HeightForWidth_Callback kconfigdialog_heightforwidth_callback = nullptr;
    KConfigDialog_HasHeightForWidth_Callback kconfigdialog_hasheightforwidth_callback = nullptr;
    KConfigDialog_PaintEngine_Callback kconfigdialog_paintengine_callback = nullptr;
    KConfigDialog_Event_Callback kconfigdialog_event_callback = nullptr;
    KConfigDialog_MousePressEvent_Callback kconfigdialog_mousepressevent_callback = nullptr;
    KConfigDialog_MouseReleaseEvent_Callback kconfigdialog_mousereleaseevent_callback = nullptr;
    KConfigDialog_MouseDoubleClickEvent_Callback kconfigdialog_mousedoubleclickevent_callback = nullptr;
    KConfigDialog_MouseMoveEvent_Callback kconfigdialog_mousemoveevent_callback = nullptr;
    KConfigDialog_WheelEvent_Callback kconfigdialog_wheelevent_callback = nullptr;
    KConfigDialog_KeyReleaseEvent_Callback kconfigdialog_keyreleaseevent_callback = nullptr;
    KConfigDialog_FocusInEvent_Callback kconfigdialog_focusinevent_callback = nullptr;
    KConfigDialog_FocusOutEvent_Callback kconfigdialog_focusoutevent_callback = nullptr;
    KConfigDialog_EnterEvent_Callback kconfigdialog_enterevent_callback = nullptr;
    KConfigDialog_LeaveEvent_Callback kconfigdialog_leaveevent_callback = nullptr;
    KConfigDialog_PaintEvent_Callback kconfigdialog_paintevent_callback = nullptr;
    KConfigDialog_MoveEvent_Callback kconfigdialog_moveevent_callback = nullptr;
    KConfigDialog_TabletEvent_Callback kconfigdialog_tabletevent_callback = nullptr;
    KConfigDialog_ActionEvent_Callback kconfigdialog_actionevent_callback = nullptr;
    KConfigDialog_DragEnterEvent_Callback kconfigdialog_dragenterevent_callback = nullptr;
    KConfigDialog_DragMoveEvent_Callback kconfigdialog_dragmoveevent_callback = nullptr;
    KConfigDialog_DragLeaveEvent_Callback kconfigdialog_dragleaveevent_callback = nullptr;
    KConfigDialog_DropEvent_Callback kconfigdialog_dropevent_callback = nullptr;
    KConfigDialog_HideEvent_Callback kconfigdialog_hideevent_callback = nullptr;
    KConfigDialog_NativeEvent_Callback kconfigdialog_nativeevent_callback = nullptr;
    KConfigDialog_ChangeEvent_Callback kconfigdialog_changeevent_callback = nullptr;
    KConfigDialog_Metric_Callback kconfigdialog_metric_callback = nullptr;
    KConfigDialog_InitPainter_Callback kconfigdialog_initpainter_callback = nullptr;
    KConfigDialog_Redirected_Callback kconfigdialog_redirected_callback = nullptr;
    KConfigDialog_SharedPainter_Callback kconfigdialog_sharedpainter_callback = nullptr;
    KConfigDialog_InputMethodEvent_Callback kconfigdialog_inputmethodevent_callback = nullptr;
    KConfigDialog_InputMethodQuery_Callback kconfigdialog_inputmethodquery_callback = nullptr;
    KConfigDialog_FocusNextPrevChild_Callback kconfigdialog_focusnextprevchild_callback = nullptr;
    KConfigDialog_TimerEvent_Callback kconfigdialog_timerevent_callback = nullptr;
    KConfigDialog_ChildEvent_Callback kconfigdialog_childevent_callback = nullptr;
    KConfigDialog_CustomEvent_Callback kconfigdialog_customevent_callback = nullptr;
    KConfigDialog_ConnectNotify_Callback kconfigdialog_connectnotify_callback = nullptr;
    KConfigDialog_DisconnectNotify_Callback kconfigdialog_disconnectnotify_callback = nullptr;
    KConfigDialog_UpdateButtons_Callback kconfigdialog_updatebuttons_callback = nullptr;
    KConfigDialog_SettingsChangedSlot_Callback kconfigdialog_settingschangedslot_callback = nullptr;
    KConfigDialog_SetHelp_Callback kconfigdialog_sethelp_callback = nullptr;
    KConfigDialog_SetHelp2_Callback kconfigdialog_sethelp2_callback = nullptr;
    KConfigDialog_PageWidget_Callback kconfigdialog_pagewidget_callback = nullptr;
    KConfigDialog_SetPageWidget_Callback kconfigdialog_setpagewidget_callback = nullptr;
    KConfigDialog_ButtonBox_Callback kconfigdialog_buttonbox_callback = nullptr;
    KConfigDialog_SetButtonBox_Callback kconfigdialog_setbuttonbox_callback = nullptr;
    KConfigDialog_AdjustPosition_Callback kconfigdialog_adjustposition_callback = nullptr;
    KConfigDialog_UpdateMicroFocus_Callback kconfigdialog_updatemicrofocus_callback = nullptr;
    KConfigDialog_Create_Callback kconfigdialog_create_callback = nullptr;
    KConfigDialog_Destroy_Callback kconfigdialog_destroy_callback = nullptr;
    KConfigDialog_FocusNextChild_Callback kconfigdialog_focusnextchild_callback = nullptr;
    KConfigDialog_FocusPreviousChild_Callback kconfigdialog_focuspreviouschild_callback = nullptr;
    KConfigDialog_Sender_Callback kconfigdialog_sender_callback = nullptr;
    KConfigDialog_SenderSignalIndex_Callback kconfigdialog_sendersignalindex_callback = nullptr;
    KConfigDialog_Receivers_Callback kconfigdialog_receivers_callback = nullptr;
    KConfigDialog_IsSignalConnected_Callback kconfigdialog_issignalconnected_callback = nullptr;
    KConfigDialog_GetDecodedMetricF_Callback kconfigdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kconfigdialog_metaobject_isbase = false;
    mutable bool kconfigdialog_metacast_isbase = false;
    mutable bool kconfigdialog_metacall_isbase = false;
    mutable bool kconfigdialog_updatesettings_isbase = false;
    mutable bool kconfigdialog_updatewidgets_isbase = false;
    mutable bool kconfigdialog_updatewidgetsdefault_isbase = false;
    mutable bool kconfigdialog_showhelp_isbase = false;
    mutable bool kconfigdialog_haschanged_isbase = false;
    mutable bool kconfigdialog_isdefault_isbase = false;
    mutable bool kconfigdialog_showevent_isbase = false;
    mutable bool kconfigdialog_setvisible_isbase = false;
    mutable bool kconfigdialog_sizehint_isbase = false;
    mutable bool kconfigdialog_minimumsizehint_isbase = false;
    mutable bool kconfigdialog_open_isbase = false;
    mutable bool kconfigdialog_exec_isbase = false;
    mutable bool kconfigdialog_done_isbase = false;
    mutable bool kconfigdialog_accept_isbase = false;
    mutable bool kconfigdialog_reject_isbase = false;
    mutable bool kconfigdialog_keypressevent_isbase = false;
    mutable bool kconfigdialog_closeevent_isbase = false;
    mutable bool kconfigdialog_resizeevent_isbase = false;
    mutable bool kconfigdialog_contextmenuevent_isbase = false;
    mutable bool kconfigdialog_eventfilter_isbase = false;
    mutable bool kconfigdialog_devtype_isbase = false;
    mutable bool kconfigdialog_heightforwidth_isbase = false;
    mutable bool kconfigdialog_hasheightforwidth_isbase = false;
    mutable bool kconfigdialog_paintengine_isbase = false;
    mutable bool kconfigdialog_event_isbase = false;
    mutable bool kconfigdialog_mousepressevent_isbase = false;
    mutable bool kconfigdialog_mousereleaseevent_isbase = false;
    mutable bool kconfigdialog_mousedoubleclickevent_isbase = false;
    mutable bool kconfigdialog_mousemoveevent_isbase = false;
    mutable bool kconfigdialog_wheelevent_isbase = false;
    mutable bool kconfigdialog_keyreleaseevent_isbase = false;
    mutable bool kconfigdialog_focusinevent_isbase = false;
    mutable bool kconfigdialog_focusoutevent_isbase = false;
    mutable bool kconfigdialog_enterevent_isbase = false;
    mutable bool kconfigdialog_leaveevent_isbase = false;
    mutable bool kconfigdialog_paintevent_isbase = false;
    mutable bool kconfigdialog_moveevent_isbase = false;
    mutable bool kconfigdialog_tabletevent_isbase = false;
    mutable bool kconfigdialog_actionevent_isbase = false;
    mutable bool kconfigdialog_dragenterevent_isbase = false;
    mutable bool kconfigdialog_dragmoveevent_isbase = false;
    mutable bool kconfigdialog_dragleaveevent_isbase = false;
    mutable bool kconfigdialog_dropevent_isbase = false;
    mutable bool kconfigdialog_hideevent_isbase = false;
    mutable bool kconfigdialog_nativeevent_isbase = false;
    mutable bool kconfigdialog_changeevent_isbase = false;
    mutable bool kconfigdialog_metric_isbase = false;
    mutable bool kconfigdialog_initpainter_isbase = false;
    mutable bool kconfigdialog_redirected_isbase = false;
    mutable bool kconfigdialog_sharedpainter_isbase = false;
    mutable bool kconfigdialog_inputmethodevent_isbase = false;
    mutable bool kconfigdialog_inputmethodquery_isbase = false;
    mutable bool kconfigdialog_focusnextprevchild_isbase = false;
    mutable bool kconfigdialog_timerevent_isbase = false;
    mutable bool kconfigdialog_childevent_isbase = false;
    mutable bool kconfigdialog_customevent_isbase = false;
    mutable bool kconfigdialog_connectnotify_isbase = false;
    mutable bool kconfigdialog_disconnectnotify_isbase = false;
    mutable bool kconfigdialog_updatebuttons_isbase = false;
    mutable bool kconfigdialog_settingschangedslot_isbase = false;
    mutable bool kconfigdialog_sethelp_isbase = false;
    mutable bool kconfigdialog_sethelp2_isbase = false;
    mutable bool kconfigdialog_pagewidget_isbase = false;
    mutable bool kconfigdialog_setpagewidget_isbase = false;
    mutable bool kconfigdialog_buttonbox_isbase = false;
    mutable bool kconfigdialog_setbuttonbox_isbase = false;
    mutable bool kconfigdialog_adjustposition_isbase = false;
    mutable bool kconfigdialog_updatemicrofocus_isbase = false;
    mutable bool kconfigdialog_create_isbase = false;
    mutable bool kconfigdialog_destroy_isbase = false;
    mutable bool kconfigdialog_focusnextchild_isbase = false;
    mutable bool kconfigdialog_focuspreviouschild_isbase = false;
    mutable bool kconfigdialog_sender_isbase = false;
    mutable bool kconfigdialog_sendersignalindex_isbase = false;
    mutable bool kconfigdialog_receivers_isbase = false;
    mutable bool kconfigdialog_issignalconnected_isbase = false;
    mutable bool kconfigdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKConfigDialog(QWidget* parent, const QString& name, KCoreConfigSkeleton* config) : KConfigDialog(parent, name, config) {};

    // Callback setters
    inline void setKConfigDialog_MetaObject_Callback(KConfigDialog_MetaObject_Callback cb) { kconfigdialog_metaobject_callback = cb; }
    inline void setKConfigDialog_Metacast_Callback(KConfigDialog_Metacast_Callback cb) { kconfigdialog_metacast_callback = cb; }
    inline void setKConfigDialog_Metacall_Callback(KConfigDialog_Metacall_Callback cb) { kconfigdialog_metacall_callback = cb; }
    inline void setKConfigDialog_UpdateSettings_Callback(KConfigDialog_UpdateSettings_Callback cb) { kconfigdialog_updatesettings_callback = cb; }
    inline void setKConfigDialog_UpdateWidgets_Callback(KConfigDialog_UpdateWidgets_Callback cb) { kconfigdialog_updatewidgets_callback = cb; }
    inline void setKConfigDialog_UpdateWidgetsDefault_Callback(KConfigDialog_UpdateWidgetsDefault_Callback cb) { kconfigdialog_updatewidgetsdefault_callback = cb; }
    inline void setKConfigDialog_ShowHelp_Callback(KConfigDialog_ShowHelp_Callback cb) { kconfigdialog_showhelp_callback = cb; }
    inline void setKConfigDialog_HasChanged_Callback(KConfigDialog_HasChanged_Callback cb) { kconfigdialog_haschanged_callback = cb; }
    inline void setKConfigDialog_IsDefault_Callback(KConfigDialog_IsDefault_Callback cb) { kconfigdialog_isdefault_callback = cb; }
    inline void setKConfigDialog_ShowEvent_Callback(KConfigDialog_ShowEvent_Callback cb) { kconfigdialog_showevent_callback = cb; }
    inline void setKConfigDialog_SetVisible_Callback(KConfigDialog_SetVisible_Callback cb) { kconfigdialog_setvisible_callback = cb; }
    inline void setKConfigDialog_SizeHint_Callback(KConfigDialog_SizeHint_Callback cb) { kconfigdialog_sizehint_callback = cb; }
    inline void setKConfigDialog_MinimumSizeHint_Callback(KConfigDialog_MinimumSizeHint_Callback cb) { kconfigdialog_minimumsizehint_callback = cb; }
    inline void setKConfigDialog_Open_Callback(KConfigDialog_Open_Callback cb) { kconfigdialog_open_callback = cb; }
    inline void setKConfigDialog_Exec_Callback(KConfigDialog_Exec_Callback cb) { kconfigdialog_exec_callback = cb; }
    inline void setKConfigDialog_Done_Callback(KConfigDialog_Done_Callback cb) { kconfigdialog_done_callback = cb; }
    inline void setKConfigDialog_Accept_Callback(KConfigDialog_Accept_Callback cb) { kconfigdialog_accept_callback = cb; }
    inline void setKConfigDialog_Reject_Callback(KConfigDialog_Reject_Callback cb) { kconfigdialog_reject_callback = cb; }
    inline void setKConfigDialog_KeyPressEvent_Callback(KConfigDialog_KeyPressEvent_Callback cb) { kconfigdialog_keypressevent_callback = cb; }
    inline void setKConfigDialog_CloseEvent_Callback(KConfigDialog_CloseEvent_Callback cb) { kconfigdialog_closeevent_callback = cb; }
    inline void setKConfigDialog_ResizeEvent_Callback(KConfigDialog_ResizeEvent_Callback cb) { kconfigdialog_resizeevent_callback = cb; }
    inline void setKConfigDialog_ContextMenuEvent_Callback(KConfigDialog_ContextMenuEvent_Callback cb) { kconfigdialog_contextmenuevent_callback = cb; }
    inline void setKConfigDialog_EventFilter_Callback(KConfigDialog_EventFilter_Callback cb) { kconfigdialog_eventfilter_callback = cb; }
    inline void setKConfigDialog_DevType_Callback(KConfigDialog_DevType_Callback cb) { kconfigdialog_devtype_callback = cb; }
    inline void setKConfigDialog_HeightForWidth_Callback(KConfigDialog_HeightForWidth_Callback cb) { kconfigdialog_heightforwidth_callback = cb; }
    inline void setKConfigDialog_HasHeightForWidth_Callback(KConfigDialog_HasHeightForWidth_Callback cb) { kconfigdialog_hasheightforwidth_callback = cb; }
    inline void setKConfigDialog_PaintEngine_Callback(KConfigDialog_PaintEngine_Callback cb) { kconfigdialog_paintengine_callback = cb; }
    inline void setKConfigDialog_Event_Callback(KConfigDialog_Event_Callback cb) { kconfigdialog_event_callback = cb; }
    inline void setKConfigDialog_MousePressEvent_Callback(KConfigDialog_MousePressEvent_Callback cb) { kconfigdialog_mousepressevent_callback = cb; }
    inline void setKConfigDialog_MouseReleaseEvent_Callback(KConfigDialog_MouseReleaseEvent_Callback cb) { kconfigdialog_mousereleaseevent_callback = cb; }
    inline void setKConfigDialog_MouseDoubleClickEvent_Callback(KConfigDialog_MouseDoubleClickEvent_Callback cb) { kconfigdialog_mousedoubleclickevent_callback = cb; }
    inline void setKConfigDialog_MouseMoveEvent_Callback(KConfigDialog_MouseMoveEvent_Callback cb) { kconfigdialog_mousemoveevent_callback = cb; }
    inline void setKConfigDialog_WheelEvent_Callback(KConfigDialog_WheelEvent_Callback cb) { kconfigdialog_wheelevent_callback = cb; }
    inline void setKConfigDialog_KeyReleaseEvent_Callback(KConfigDialog_KeyReleaseEvent_Callback cb) { kconfigdialog_keyreleaseevent_callback = cb; }
    inline void setKConfigDialog_FocusInEvent_Callback(KConfigDialog_FocusInEvent_Callback cb) { kconfigdialog_focusinevent_callback = cb; }
    inline void setKConfigDialog_FocusOutEvent_Callback(KConfigDialog_FocusOutEvent_Callback cb) { kconfigdialog_focusoutevent_callback = cb; }
    inline void setKConfigDialog_EnterEvent_Callback(KConfigDialog_EnterEvent_Callback cb) { kconfigdialog_enterevent_callback = cb; }
    inline void setKConfigDialog_LeaveEvent_Callback(KConfigDialog_LeaveEvent_Callback cb) { kconfigdialog_leaveevent_callback = cb; }
    inline void setKConfigDialog_PaintEvent_Callback(KConfigDialog_PaintEvent_Callback cb) { kconfigdialog_paintevent_callback = cb; }
    inline void setKConfigDialog_MoveEvent_Callback(KConfigDialog_MoveEvent_Callback cb) { kconfigdialog_moveevent_callback = cb; }
    inline void setKConfigDialog_TabletEvent_Callback(KConfigDialog_TabletEvent_Callback cb) { kconfigdialog_tabletevent_callback = cb; }
    inline void setKConfigDialog_ActionEvent_Callback(KConfigDialog_ActionEvent_Callback cb) { kconfigdialog_actionevent_callback = cb; }
    inline void setKConfigDialog_DragEnterEvent_Callback(KConfigDialog_DragEnterEvent_Callback cb) { kconfigdialog_dragenterevent_callback = cb; }
    inline void setKConfigDialog_DragMoveEvent_Callback(KConfigDialog_DragMoveEvent_Callback cb) { kconfigdialog_dragmoveevent_callback = cb; }
    inline void setKConfigDialog_DragLeaveEvent_Callback(KConfigDialog_DragLeaveEvent_Callback cb) { kconfigdialog_dragleaveevent_callback = cb; }
    inline void setKConfigDialog_DropEvent_Callback(KConfigDialog_DropEvent_Callback cb) { kconfigdialog_dropevent_callback = cb; }
    inline void setKConfigDialog_HideEvent_Callback(KConfigDialog_HideEvent_Callback cb) { kconfigdialog_hideevent_callback = cb; }
    inline void setKConfigDialog_NativeEvent_Callback(KConfigDialog_NativeEvent_Callback cb) { kconfigdialog_nativeevent_callback = cb; }
    inline void setKConfigDialog_ChangeEvent_Callback(KConfigDialog_ChangeEvent_Callback cb) { kconfigdialog_changeevent_callback = cb; }
    inline void setKConfigDialog_Metric_Callback(KConfigDialog_Metric_Callback cb) { kconfigdialog_metric_callback = cb; }
    inline void setKConfigDialog_InitPainter_Callback(KConfigDialog_InitPainter_Callback cb) { kconfigdialog_initpainter_callback = cb; }
    inline void setKConfigDialog_Redirected_Callback(KConfigDialog_Redirected_Callback cb) { kconfigdialog_redirected_callback = cb; }
    inline void setKConfigDialog_SharedPainter_Callback(KConfigDialog_SharedPainter_Callback cb) { kconfigdialog_sharedpainter_callback = cb; }
    inline void setKConfigDialog_InputMethodEvent_Callback(KConfigDialog_InputMethodEvent_Callback cb) { kconfigdialog_inputmethodevent_callback = cb; }
    inline void setKConfigDialog_InputMethodQuery_Callback(KConfigDialog_InputMethodQuery_Callback cb) { kconfigdialog_inputmethodquery_callback = cb; }
    inline void setKConfigDialog_FocusNextPrevChild_Callback(KConfigDialog_FocusNextPrevChild_Callback cb) { kconfigdialog_focusnextprevchild_callback = cb; }
    inline void setKConfigDialog_TimerEvent_Callback(KConfigDialog_TimerEvent_Callback cb) { kconfigdialog_timerevent_callback = cb; }
    inline void setKConfigDialog_ChildEvent_Callback(KConfigDialog_ChildEvent_Callback cb) { kconfigdialog_childevent_callback = cb; }
    inline void setKConfigDialog_CustomEvent_Callback(KConfigDialog_CustomEvent_Callback cb) { kconfigdialog_customevent_callback = cb; }
    inline void setKConfigDialog_ConnectNotify_Callback(KConfigDialog_ConnectNotify_Callback cb) { kconfigdialog_connectnotify_callback = cb; }
    inline void setKConfigDialog_DisconnectNotify_Callback(KConfigDialog_DisconnectNotify_Callback cb) { kconfigdialog_disconnectnotify_callback = cb; }
    inline void setKConfigDialog_UpdateButtons_Callback(KConfigDialog_UpdateButtons_Callback cb) { kconfigdialog_updatebuttons_callback = cb; }
    inline void setKConfigDialog_SettingsChangedSlot_Callback(KConfigDialog_SettingsChangedSlot_Callback cb) { kconfigdialog_settingschangedslot_callback = cb; }
    inline void setKConfigDialog_SetHelp_Callback(KConfigDialog_SetHelp_Callback cb) { kconfigdialog_sethelp_callback = cb; }
    inline void setKConfigDialog_SetHelp2_Callback(KConfigDialog_SetHelp2_Callback cb) { kconfigdialog_sethelp2_callback = cb; }
    inline void setKConfigDialog_PageWidget_Callback(KConfigDialog_PageWidget_Callback cb) { kconfigdialog_pagewidget_callback = cb; }
    inline void setKConfigDialog_SetPageWidget_Callback(KConfigDialog_SetPageWidget_Callback cb) { kconfigdialog_setpagewidget_callback = cb; }
    inline void setKConfigDialog_ButtonBox_Callback(KConfigDialog_ButtonBox_Callback cb) { kconfigdialog_buttonbox_callback = cb; }
    inline void setKConfigDialog_SetButtonBox_Callback(KConfigDialog_SetButtonBox_Callback cb) { kconfigdialog_setbuttonbox_callback = cb; }
    inline void setKConfigDialog_AdjustPosition_Callback(KConfigDialog_AdjustPosition_Callback cb) { kconfigdialog_adjustposition_callback = cb; }
    inline void setKConfigDialog_UpdateMicroFocus_Callback(KConfigDialog_UpdateMicroFocus_Callback cb) { kconfigdialog_updatemicrofocus_callback = cb; }
    inline void setKConfigDialog_Create_Callback(KConfigDialog_Create_Callback cb) { kconfigdialog_create_callback = cb; }
    inline void setKConfigDialog_Destroy_Callback(KConfigDialog_Destroy_Callback cb) { kconfigdialog_destroy_callback = cb; }
    inline void setKConfigDialog_FocusNextChild_Callback(KConfigDialog_FocusNextChild_Callback cb) { kconfigdialog_focusnextchild_callback = cb; }
    inline void setKConfigDialog_FocusPreviousChild_Callback(KConfigDialog_FocusPreviousChild_Callback cb) { kconfigdialog_focuspreviouschild_callback = cb; }
    inline void setKConfigDialog_Sender_Callback(KConfigDialog_Sender_Callback cb) { kconfigdialog_sender_callback = cb; }
    inline void setKConfigDialog_SenderSignalIndex_Callback(KConfigDialog_SenderSignalIndex_Callback cb) { kconfigdialog_sendersignalindex_callback = cb; }
    inline void setKConfigDialog_Receivers_Callback(KConfigDialog_Receivers_Callback cb) { kconfigdialog_receivers_callback = cb; }
    inline void setKConfigDialog_IsSignalConnected_Callback(KConfigDialog_IsSignalConnected_Callback cb) { kconfigdialog_issignalconnected_callback = cb; }
    inline void setKConfigDialog_GetDecodedMetricF_Callback(KConfigDialog_GetDecodedMetricF_Callback cb) { kconfigdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKConfigDialog_MetaObject_IsBase(bool value) const { kconfigdialog_metaobject_isbase = value; }
    inline void setKConfigDialog_Metacast_IsBase(bool value) const { kconfigdialog_metacast_isbase = value; }
    inline void setKConfigDialog_Metacall_IsBase(bool value) const { kconfigdialog_metacall_isbase = value; }
    inline void setKConfigDialog_UpdateSettings_IsBase(bool value) const { kconfigdialog_updatesettings_isbase = value; }
    inline void setKConfigDialog_UpdateWidgets_IsBase(bool value) const { kconfigdialog_updatewidgets_isbase = value; }
    inline void setKConfigDialog_UpdateWidgetsDefault_IsBase(bool value) const { kconfigdialog_updatewidgetsdefault_isbase = value; }
    inline void setKConfigDialog_ShowHelp_IsBase(bool value) const { kconfigdialog_showhelp_isbase = value; }
    inline void setKConfigDialog_HasChanged_IsBase(bool value) const { kconfigdialog_haschanged_isbase = value; }
    inline void setKConfigDialog_IsDefault_IsBase(bool value) const { kconfigdialog_isdefault_isbase = value; }
    inline void setKConfigDialog_ShowEvent_IsBase(bool value) const { kconfigdialog_showevent_isbase = value; }
    inline void setKConfigDialog_SetVisible_IsBase(bool value) const { kconfigdialog_setvisible_isbase = value; }
    inline void setKConfigDialog_SizeHint_IsBase(bool value) const { kconfigdialog_sizehint_isbase = value; }
    inline void setKConfigDialog_MinimumSizeHint_IsBase(bool value) const { kconfigdialog_minimumsizehint_isbase = value; }
    inline void setKConfigDialog_Open_IsBase(bool value) const { kconfigdialog_open_isbase = value; }
    inline void setKConfigDialog_Exec_IsBase(bool value) const { kconfigdialog_exec_isbase = value; }
    inline void setKConfigDialog_Done_IsBase(bool value) const { kconfigdialog_done_isbase = value; }
    inline void setKConfigDialog_Accept_IsBase(bool value) const { kconfigdialog_accept_isbase = value; }
    inline void setKConfigDialog_Reject_IsBase(bool value) const { kconfigdialog_reject_isbase = value; }
    inline void setKConfigDialog_KeyPressEvent_IsBase(bool value) const { kconfigdialog_keypressevent_isbase = value; }
    inline void setKConfigDialog_CloseEvent_IsBase(bool value) const { kconfigdialog_closeevent_isbase = value; }
    inline void setKConfigDialog_ResizeEvent_IsBase(bool value) const { kconfigdialog_resizeevent_isbase = value; }
    inline void setKConfigDialog_ContextMenuEvent_IsBase(bool value) const { kconfigdialog_contextmenuevent_isbase = value; }
    inline void setKConfigDialog_EventFilter_IsBase(bool value) const { kconfigdialog_eventfilter_isbase = value; }
    inline void setKConfigDialog_DevType_IsBase(bool value) const { kconfigdialog_devtype_isbase = value; }
    inline void setKConfigDialog_HeightForWidth_IsBase(bool value) const { kconfigdialog_heightforwidth_isbase = value; }
    inline void setKConfigDialog_HasHeightForWidth_IsBase(bool value) const { kconfigdialog_hasheightforwidth_isbase = value; }
    inline void setKConfigDialog_PaintEngine_IsBase(bool value) const { kconfigdialog_paintengine_isbase = value; }
    inline void setKConfigDialog_Event_IsBase(bool value) const { kconfigdialog_event_isbase = value; }
    inline void setKConfigDialog_MousePressEvent_IsBase(bool value) const { kconfigdialog_mousepressevent_isbase = value; }
    inline void setKConfigDialog_MouseReleaseEvent_IsBase(bool value) const { kconfigdialog_mousereleaseevent_isbase = value; }
    inline void setKConfigDialog_MouseDoubleClickEvent_IsBase(bool value) const { kconfigdialog_mousedoubleclickevent_isbase = value; }
    inline void setKConfigDialog_MouseMoveEvent_IsBase(bool value) const { kconfigdialog_mousemoveevent_isbase = value; }
    inline void setKConfigDialog_WheelEvent_IsBase(bool value) const { kconfigdialog_wheelevent_isbase = value; }
    inline void setKConfigDialog_KeyReleaseEvent_IsBase(bool value) const { kconfigdialog_keyreleaseevent_isbase = value; }
    inline void setKConfigDialog_FocusInEvent_IsBase(bool value) const { kconfigdialog_focusinevent_isbase = value; }
    inline void setKConfigDialog_FocusOutEvent_IsBase(bool value) const { kconfigdialog_focusoutevent_isbase = value; }
    inline void setKConfigDialog_EnterEvent_IsBase(bool value) const { kconfigdialog_enterevent_isbase = value; }
    inline void setKConfigDialog_LeaveEvent_IsBase(bool value) const { kconfigdialog_leaveevent_isbase = value; }
    inline void setKConfigDialog_PaintEvent_IsBase(bool value) const { kconfigdialog_paintevent_isbase = value; }
    inline void setKConfigDialog_MoveEvent_IsBase(bool value) const { kconfigdialog_moveevent_isbase = value; }
    inline void setKConfigDialog_TabletEvent_IsBase(bool value) const { kconfigdialog_tabletevent_isbase = value; }
    inline void setKConfigDialog_ActionEvent_IsBase(bool value) const { kconfigdialog_actionevent_isbase = value; }
    inline void setKConfigDialog_DragEnterEvent_IsBase(bool value) const { kconfigdialog_dragenterevent_isbase = value; }
    inline void setKConfigDialog_DragMoveEvent_IsBase(bool value) const { kconfigdialog_dragmoveevent_isbase = value; }
    inline void setKConfigDialog_DragLeaveEvent_IsBase(bool value) const { kconfigdialog_dragleaveevent_isbase = value; }
    inline void setKConfigDialog_DropEvent_IsBase(bool value) const { kconfigdialog_dropevent_isbase = value; }
    inline void setKConfigDialog_HideEvent_IsBase(bool value) const { kconfigdialog_hideevent_isbase = value; }
    inline void setKConfigDialog_NativeEvent_IsBase(bool value) const { kconfigdialog_nativeevent_isbase = value; }
    inline void setKConfigDialog_ChangeEvent_IsBase(bool value) const { kconfigdialog_changeevent_isbase = value; }
    inline void setKConfigDialog_Metric_IsBase(bool value) const { kconfigdialog_metric_isbase = value; }
    inline void setKConfigDialog_InitPainter_IsBase(bool value) const { kconfigdialog_initpainter_isbase = value; }
    inline void setKConfigDialog_Redirected_IsBase(bool value) const { kconfigdialog_redirected_isbase = value; }
    inline void setKConfigDialog_SharedPainter_IsBase(bool value) const { kconfigdialog_sharedpainter_isbase = value; }
    inline void setKConfigDialog_InputMethodEvent_IsBase(bool value) const { kconfigdialog_inputmethodevent_isbase = value; }
    inline void setKConfigDialog_InputMethodQuery_IsBase(bool value) const { kconfigdialog_inputmethodquery_isbase = value; }
    inline void setKConfigDialog_FocusNextPrevChild_IsBase(bool value) const { kconfigdialog_focusnextprevchild_isbase = value; }
    inline void setKConfigDialog_TimerEvent_IsBase(bool value) const { kconfigdialog_timerevent_isbase = value; }
    inline void setKConfigDialog_ChildEvent_IsBase(bool value) const { kconfigdialog_childevent_isbase = value; }
    inline void setKConfigDialog_CustomEvent_IsBase(bool value) const { kconfigdialog_customevent_isbase = value; }
    inline void setKConfigDialog_ConnectNotify_IsBase(bool value) const { kconfigdialog_connectnotify_isbase = value; }
    inline void setKConfigDialog_DisconnectNotify_IsBase(bool value) const { kconfigdialog_disconnectnotify_isbase = value; }
    inline void setKConfigDialog_UpdateButtons_IsBase(bool value) const { kconfigdialog_updatebuttons_isbase = value; }
    inline void setKConfigDialog_SettingsChangedSlot_IsBase(bool value) const { kconfigdialog_settingschangedslot_isbase = value; }
    inline void setKConfigDialog_SetHelp_IsBase(bool value) const { kconfigdialog_sethelp_isbase = value; }
    inline void setKConfigDialog_SetHelp2_IsBase(bool value) const { kconfigdialog_sethelp2_isbase = value; }
    inline void setKConfigDialog_PageWidget_IsBase(bool value) const { kconfigdialog_pagewidget_isbase = value; }
    inline void setKConfigDialog_SetPageWidget_IsBase(bool value) const { kconfigdialog_setpagewidget_isbase = value; }
    inline void setKConfigDialog_ButtonBox_IsBase(bool value) const { kconfigdialog_buttonbox_isbase = value; }
    inline void setKConfigDialog_SetButtonBox_IsBase(bool value) const { kconfigdialog_setbuttonbox_isbase = value; }
    inline void setKConfigDialog_AdjustPosition_IsBase(bool value) const { kconfigdialog_adjustposition_isbase = value; }
    inline void setKConfigDialog_UpdateMicroFocus_IsBase(bool value) const { kconfigdialog_updatemicrofocus_isbase = value; }
    inline void setKConfigDialog_Create_IsBase(bool value) const { kconfigdialog_create_isbase = value; }
    inline void setKConfigDialog_Destroy_IsBase(bool value) const { kconfigdialog_destroy_isbase = value; }
    inline void setKConfigDialog_FocusNextChild_IsBase(bool value) const { kconfigdialog_focusnextchild_isbase = value; }
    inline void setKConfigDialog_FocusPreviousChild_IsBase(bool value) const { kconfigdialog_focuspreviouschild_isbase = value; }
    inline void setKConfigDialog_Sender_IsBase(bool value) const { kconfigdialog_sender_isbase = value; }
    inline void setKConfigDialog_SenderSignalIndex_IsBase(bool value) const { kconfigdialog_sendersignalindex_isbase = value; }
    inline void setKConfigDialog_Receivers_IsBase(bool value) const { kconfigdialog_receivers_isbase = value; }
    inline void setKConfigDialog_IsSignalConnected_IsBase(bool value) const { kconfigdialog_issignalconnected_isbase = value; }
    inline void setKConfigDialog_GetDecodedMetricF_IsBase(bool value) const { kconfigdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kconfigdialog_metaobject_isbase) {
            kconfigdialog_metaobject_isbase = false;
            return KConfigDialog::metaObject();
        }
        auto metaobject_cb = kconfigdialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KConfigDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kconfigdialog_metacast_isbase) {
            kconfigdialog_metacast_isbase = false;
            return KConfigDialog::qt_metacast(param1);
        }
        auto metacast_cb = kconfigdialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KConfigDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kconfigdialog_metacall_isbase) {
            kconfigdialog_metacall_isbase = false;
            return KConfigDialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kconfigdialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KConfigDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateSettings() override {
        if (kconfigdialog_updatesettings_isbase) {
            kconfigdialog_updatesettings_isbase = false;
            KConfigDialog::updateSettings();
            return;
        }
        auto updatesettings_cb = kconfigdialog_updatesettings_callback;
        if (updatesettings_cb) {
            updatesettings_cb();
            return;
        }
        KConfigDialog::updateSettings();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateWidgets() override {
        if (kconfigdialog_updatewidgets_isbase) {
            kconfigdialog_updatewidgets_isbase = false;
            KConfigDialog::updateWidgets();
            return;
        }
        auto updatewidgets_cb = kconfigdialog_updatewidgets_callback;
        if (updatewidgets_cb) {
            updatewidgets_cb();
            return;
        }
        KConfigDialog::updateWidgets();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateWidgetsDefault() override {
        if (kconfigdialog_updatewidgetsdefault_isbase) {
            kconfigdialog_updatewidgetsdefault_isbase = false;
            KConfigDialog::updateWidgetsDefault();
            return;
        }
        auto updatewidgetsdefault_cb = kconfigdialog_updatewidgetsdefault_callback;
        if (updatewidgetsdefault_cb) {
            updatewidgetsdefault_cb();
            return;
        }
        KConfigDialog::updateWidgetsDefault();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showHelp() override {
        if (kconfigdialog_showhelp_isbase) {
            kconfigdialog_showhelp_isbase = false;
            KConfigDialog::showHelp();
            return;
        }
        auto showhelp_cb = kconfigdialog_showhelp_callback;
        if (showhelp_cb) {
            showhelp_cb();
            return;
        }
        KConfigDialog::showHelp();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChanged() override {
        if (kconfigdialog_haschanged_isbase) {
            kconfigdialog_haschanged_isbase = false;
            return KConfigDialog::hasChanged();
        }
        auto haschanged_cb = kconfigdialog_haschanged_callback;
        if (haschanged_cb) {
            bool callback_ret = haschanged_cb();
            return callback_ret;
        }
        return KConfigDialog::hasChanged();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isDefault() override {
        if (kconfigdialog_isdefault_isbase) {
            kconfigdialog_isdefault_isbase = false;
            return KConfigDialog::isDefault();
        }
        auto isdefault_cb = kconfigdialog_isdefault_callback;
        if (isdefault_cb) {
            bool callback_ret = isdefault_cb();
            return callback_ret;
        }
        return KConfigDialog::isDefault();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (kconfigdialog_showevent_isbase) {
            kconfigdialog_showevent_isbase = false;
            KConfigDialog::showEvent(e);
            return;
        }
        auto showevent_cb = kconfigdialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = e;

            showevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::showEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kconfigdialog_setvisible_isbase) {
            kconfigdialog_setvisible_isbase = false;
            KConfigDialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = kconfigdialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KConfigDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kconfigdialog_sizehint_isbase) {
            kconfigdialog_sizehint_isbase = false;
            return KConfigDialog::sizeHint();
        }
        auto sizehint_cb = kconfigdialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KConfigDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kconfigdialog_minimumsizehint_isbase) {
            kconfigdialog_minimumsizehint_isbase = false;
            return KConfigDialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = kconfigdialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KConfigDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kconfigdialog_open_isbase) {
            kconfigdialog_open_isbase = false;
            KConfigDialog::open();
            return;
        }
        auto open_cb = kconfigdialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        KConfigDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kconfigdialog_exec_isbase) {
            kconfigdialog_exec_isbase = false;
            return KConfigDialog::exec();
        }
        auto exec_cb = kconfigdialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return KConfigDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kconfigdialog_done_isbase) {
            kconfigdialog_done_isbase = false;
            KConfigDialog::done(param1);
            return;
        }
        auto done_cb = kconfigdialog_done_callback;
        if (done_cb) {
            int cbval1 = param1;

            done_cb(this, cbval1);
            return;
        }
        KConfigDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kconfigdialog_accept_isbase) {
            kconfigdialog_accept_isbase = false;
            KConfigDialog::accept();
            return;
        }
        auto accept_cb = kconfigdialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        KConfigDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kconfigdialog_reject_isbase) {
            kconfigdialog_reject_isbase = false;
            KConfigDialog::reject();
            return;
        }
        auto reject_cb = kconfigdialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        KConfigDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kconfigdialog_keypressevent_isbase) {
            kconfigdialog_keypressevent_isbase = false;
            KConfigDialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = kconfigdialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kconfigdialog_closeevent_isbase) {
            kconfigdialog_closeevent_isbase = false;
            KConfigDialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = kconfigdialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kconfigdialog_resizeevent_isbase) {
            kconfigdialog_resizeevent_isbase = false;
            KConfigDialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = kconfigdialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kconfigdialog_contextmenuevent_isbase) {
            kconfigdialog_contextmenuevent_isbase = false;
            KConfigDialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = kconfigdialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kconfigdialog_eventfilter_isbase) {
            kconfigdialog_eventfilter_isbase = false;
            return KConfigDialog::eventFilter(param1, param2);
        }
        auto eventfilter_cb = kconfigdialog_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KConfigDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kconfigdialog_devtype_isbase) {
            kconfigdialog_devtype_isbase = false;
            return KConfigDialog::devType();
        }
        auto devtype_cb = kconfigdialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KConfigDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kconfigdialog_heightforwidth_isbase) {
            kconfigdialog_heightforwidth_isbase = false;
            return KConfigDialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = kconfigdialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KConfigDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kconfigdialog_hasheightforwidth_isbase) {
            kconfigdialog_hasheightforwidth_isbase = false;
            return KConfigDialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kconfigdialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KConfigDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kconfigdialog_paintengine_isbase) {
            kconfigdialog_paintengine_isbase = false;
            return KConfigDialog::paintEngine();
        }
        auto paintengine_cb = kconfigdialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KConfigDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kconfigdialog_event_isbase) {
            kconfigdialog_event_isbase = false;
            return KConfigDialog::event(event);
        }
        auto event_cb = kconfigdialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KConfigDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kconfigdialog_mousepressevent_isbase) {
            kconfigdialog_mousepressevent_isbase = false;
            KConfigDialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kconfigdialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kconfigdialog_mousereleaseevent_isbase) {
            kconfigdialog_mousereleaseevent_isbase = false;
            KConfigDialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kconfigdialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kconfigdialog_mousedoubleclickevent_isbase) {
            kconfigdialog_mousedoubleclickevent_isbase = false;
            KConfigDialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kconfigdialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kconfigdialog_mousemoveevent_isbase) {
            kconfigdialog_mousemoveevent_isbase = false;
            KConfigDialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kconfigdialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kconfigdialog_wheelevent_isbase) {
            kconfigdialog_wheelevent_isbase = false;
            KConfigDialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kconfigdialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kconfigdialog_keyreleaseevent_isbase) {
            kconfigdialog_keyreleaseevent_isbase = false;
            KConfigDialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kconfigdialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kconfigdialog_focusinevent_isbase) {
            kconfigdialog_focusinevent_isbase = false;
            KConfigDialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kconfigdialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kconfigdialog_focusoutevent_isbase) {
            kconfigdialog_focusoutevent_isbase = false;
            KConfigDialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kconfigdialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kconfigdialog_enterevent_isbase) {
            kconfigdialog_enterevent_isbase = false;
            KConfigDialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = kconfigdialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kconfigdialog_leaveevent_isbase) {
            kconfigdialog_leaveevent_isbase = false;
            KConfigDialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kconfigdialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kconfigdialog_paintevent_isbase) {
            kconfigdialog_paintevent_isbase = false;
            KConfigDialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = kconfigdialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kconfigdialog_moveevent_isbase) {
            kconfigdialog_moveevent_isbase = false;
            KConfigDialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = kconfigdialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kconfigdialog_tabletevent_isbase) {
            kconfigdialog_tabletevent_isbase = false;
            KConfigDialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kconfigdialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kconfigdialog_actionevent_isbase) {
            kconfigdialog_actionevent_isbase = false;
            KConfigDialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = kconfigdialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kconfigdialog_dragenterevent_isbase) {
            kconfigdialog_dragenterevent_isbase = false;
            KConfigDialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kconfigdialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kconfigdialog_dragmoveevent_isbase) {
            kconfigdialog_dragmoveevent_isbase = false;
            KConfigDialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kconfigdialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kconfigdialog_dragleaveevent_isbase) {
            kconfigdialog_dragleaveevent_isbase = false;
            KConfigDialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kconfigdialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kconfigdialog_dropevent_isbase) {
            kconfigdialog_dropevent_isbase = false;
            KConfigDialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = kconfigdialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kconfigdialog_hideevent_isbase) {
            kconfigdialog_hideevent_isbase = false;
            KConfigDialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = kconfigdialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kconfigdialog_nativeevent_isbase) {
            kconfigdialog_nativeevent_isbase = false;
            return KConfigDialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kconfigdialog_nativeevent_callback;
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
        return KConfigDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kconfigdialog_changeevent_isbase) {
            kconfigdialog_changeevent_isbase = false;
            KConfigDialog::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kconfigdialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kconfigdialog_metric_isbase) {
            kconfigdialog_metric_isbase = false;
            return KConfigDialog::metric(param1);
        }
        auto metric_cb = kconfigdialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KConfigDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kconfigdialog_initpainter_isbase) {
            kconfigdialog_initpainter_isbase = false;
            KConfigDialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = kconfigdialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KConfigDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kconfigdialog_redirected_isbase) {
            kconfigdialog_redirected_isbase = false;
            return KConfigDialog::redirected(offset);
        }
        auto redirected_cb = kconfigdialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KConfigDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kconfigdialog_sharedpainter_isbase) {
            kconfigdialog_sharedpainter_isbase = false;
            return KConfigDialog::sharedPainter();
        }
        auto sharedpainter_cb = kconfigdialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KConfigDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kconfigdialog_inputmethodevent_isbase) {
            kconfigdialog_inputmethodevent_isbase = false;
            KConfigDialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kconfigdialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kconfigdialog_inputmethodquery_isbase) {
            kconfigdialog_inputmethodquery_isbase = false;
            return KConfigDialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kconfigdialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KConfigDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kconfigdialog_focusnextprevchild_isbase) {
            kconfigdialog_focusnextprevchild_isbase = false;
            return KConfigDialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kconfigdialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KConfigDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kconfigdialog_timerevent_isbase) {
            kconfigdialog_timerevent_isbase = false;
            KConfigDialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = kconfigdialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kconfigdialog_childevent_isbase) {
            kconfigdialog_childevent_isbase = false;
            KConfigDialog::childEvent(event);
            return;
        }
        auto childevent_cb = kconfigdialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kconfigdialog_customevent_isbase) {
            kconfigdialog_customevent_isbase = false;
            KConfigDialog::customEvent(event);
            return;
        }
        auto customevent_cb = kconfigdialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KConfigDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kconfigdialog_connectnotify_isbase) {
            kconfigdialog_connectnotify_isbase = false;
            KConfigDialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kconfigdialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KConfigDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kconfigdialog_disconnectnotify_isbase) {
            kconfigdialog_disconnectnotify_isbase = false;
            KConfigDialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kconfigdialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KConfigDialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateButtons() {
        if (kconfigdialog_updatebuttons_isbase) {
            kconfigdialog_updatebuttons_isbase = false;
            KConfigDialog::updateButtons();
            return;
        }
        auto updatebuttons_cb = kconfigdialog_updatebuttons_callback;
        if (updatebuttons_cb) {
            updatebuttons_cb();
            return;
        }
        KConfigDialog::updateButtons();
    }

    // Virtual method for C ABI access and custom callback
    void settingsChangedSlot() {
        if (kconfigdialog_settingschangedslot_isbase) {
            kconfigdialog_settingschangedslot_isbase = false;
            KConfigDialog::settingsChangedSlot();
            return;
        }
        auto settingschangedslot_cb = kconfigdialog_settingschangedslot_callback;
        if (settingschangedslot_cb) {
            settingschangedslot_cb();
            return;
        }
        KConfigDialog::settingsChangedSlot();
    }

    // Virtual method for C ABI access and custom callback
    void setHelp(const QString& anchor) {
        if (kconfigdialog_sethelp_isbase) {
            kconfigdialog_sethelp_isbase = false;
            KConfigDialog::setHelp(anchor);
            return;
        }
        auto sethelp_cb = kconfigdialog_sethelp_callback;
        if (sethelp_cb) {
            const QString anchor_ret = anchor;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray anchor_b = anchor_ret.toUtf8();
            auto anchor_str_len = anchor_b.length();
            const char* anchor_str = static_cast<const char*>(malloc(anchor_str_len + 1));
            memcpy((void*)anchor_str, anchor_b.data(), anchor_str_len);
            ((char*)anchor_str)[anchor_str_len] = '\0';
            const char* cbval1 = anchor_str;

            sethelp_cb(this, cbval1);
            libqt_free(anchor_str);
            return;
        }
        KConfigDialog::setHelp(anchor);
    }

    // Virtual method for C ABI access and custom callback
    void setHelp(const QString& anchor, const QString& appname) {
        if (kconfigdialog_sethelp2_isbase) {
            kconfigdialog_sethelp2_isbase = false;
            KConfigDialog::setHelp(anchor, appname);
            return;
        }
        auto sethelp2_cb = kconfigdialog_sethelp2_callback;
        if (sethelp2_cb) {
            const QString anchor_ret = anchor;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray anchor_b = anchor_ret.toUtf8();
            auto anchor_str_len = anchor_b.length();
            const char* anchor_str = static_cast<const char*>(malloc(anchor_str_len + 1));
            memcpy((void*)anchor_str, anchor_b.data(), anchor_str_len);
            ((char*)anchor_str)[anchor_str_len] = '\0';
            const char* cbval1 = anchor_str;
            const QString appname_ret = appname;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray appname_b = appname_ret.toUtf8();
            auto appname_str_len = appname_b.length();
            const char* appname_str = static_cast<const char*>(malloc(appname_str_len + 1));
            memcpy((void*)appname_str, appname_b.data(), appname_str_len);
            ((char*)appname_str)[appname_str_len] = '\0';
            const char* cbval2 = appname_str;

            sethelp2_cb(this, cbval1, cbval2);
            libqt_free(anchor_str);
            libqt_free(appname_str);
            return;
        }
        KConfigDialog::setHelp(anchor, appname);
    }

    // Virtual method for C ABI access and custom callback
    KPageWidget* pageWidget() {
        if (kconfigdialog_pagewidget_isbase) {
            kconfigdialog_pagewidget_isbase = false;
            return KConfigDialog::pageWidget();
        }
        auto pagewidget_cb = kconfigdialog_pagewidget_callback;
        if (pagewidget_cb) {
            KPageWidget* callback_ret = pagewidget_cb();
            return callback_ret;
        }
        return KConfigDialog::pageWidget();
    }

    // Virtual method for C ABI access and custom callback
    void setPageWidget(KPageWidget* widget) {
        if (kconfigdialog_setpagewidget_isbase) {
            kconfigdialog_setpagewidget_isbase = false;
            KConfigDialog::setPageWidget(widget);
            return;
        }
        auto setpagewidget_cb = kconfigdialog_setpagewidget_callback;
        if (setpagewidget_cb) {
            KPageWidget* cbval1 = widget;

            setpagewidget_cb(this, cbval1);
            return;
        }
        KConfigDialog::setPageWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    QDialogButtonBox* buttonBox() {
        if (kconfigdialog_buttonbox_isbase) {
            kconfigdialog_buttonbox_isbase = false;
            return KConfigDialog::buttonBox();
        }
        auto buttonbox_cb = kconfigdialog_buttonbox_callback;
        if (buttonbox_cb) {
            QDialogButtonBox* callback_ret = buttonbox_cb();
            return callback_ret;
        }
        return KConfigDialog::buttonBox();
    }

    // Virtual method for C ABI access and custom callback
    void setButtonBox(QDialogButtonBox* box) {
        if (kconfigdialog_setbuttonbox_isbase) {
            kconfigdialog_setbuttonbox_isbase = false;
            KConfigDialog::setButtonBox(box);
            return;
        }
        auto setbuttonbox_cb = kconfigdialog_setbuttonbox_callback;
        if (setbuttonbox_cb) {
            QDialogButtonBox* cbval1 = box;

            setbuttonbox_cb(this, cbval1);
            return;
        }
        KConfigDialog::setButtonBox(box);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kconfigdialog_adjustposition_isbase) {
            kconfigdialog_adjustposition_isbase = false;
            KConfigDialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = kconfigdialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        KConfigDialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kconfigdialog_updatemicrofocus_isbase) {
            kconfigdialog_updatemicrofocus_isbase = false;
            KConfigDialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kconfigdialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KConfigDialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kconfigdialog_create_isbase) {
            kconfigdialog_create_isbase = false;
            KConfigDialog::create();
            return;
        }
        auto create_cb = kconfigdialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KConfigDialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kconfigdialog_destroy_isbase) {
            kconfigdialog_destroy_isbase = false;
            KConfigDialog::destroy();
            return;
        }
        auto destroy_cb = kconfigdialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KConfigDialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kconfigdialog_focusnextchild_isbase) {
            kconfigdialog_focusnextchild_isbase = false;
            return KConfigDialog::focusNextChild();
        }
        auto focusnextchild_cb = kconfigdialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KConfigDialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kconfigdialog_focuspreviouschild_isbase) {
            kconfigdialog_focuspreviouschild_isbase = false;
            return KConfigDialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kconfigdialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KConfigDialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kconfigdialog_sender_isbase) {
            kconfigdialog_sender_isbase = false;
            return KConfigDialog::sender();
        }
        auto sender_cb = kconfigdialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KConfigDialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kconfigdialog_sendersignalindex_isbase) {
            kconfigdialog_sendersignalindex_isbase = false;
            return KConfigDialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = kconfigdialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KConfigDialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kconfigdialog_receivers_isbase) {
            kconfigdialog_receivers_isbase = false;
            return KConfigDialog::receivers(signal);
        }
        auto receivers_cb = kconfigdialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KConfigDialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kconfigdialog_issignalconnected_isbase) {
            kconfigdialog_issignalconnected_isbase = false;
            return KConfigDialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kconfigdialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KConfigDialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kconfigdialog_getdecodedmetricf_isbase) {
            kconfigdialog_getdecodedmetricf_isbase = false;
            return KConfigDialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kconfigdialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KConfigDialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KConfigDialog_UpdateSettings(KConfigDialog* self);
    friend void KConfigDialog_SuperUpdateSettings(KConfigDialog* self);
    friend void KConfigDialog_UpdateWidgets(KConfigDialog* self);
    friend void KConfigDialog_SuperUpdateWidgets(KConfigDialog* self);
    friend void KConfigDialog_UpdateWidgetsDefault(KConfigDialog* self);
    friend void KConfigDialog_SuperUpdateWidgetsDefault(KConfigDialog* self);
    friend void KConfigDialog_ShowHelp(KConfigDialog* self);
    friend void KConfigDialog_SuperShowHelp(KConfigDialog* self);
    friend bool KConfigDialog_HasChanged(KConfigDialog* self);
    friend bool KConfigDialog_SuperHasChanged(KConfigDialog* self);
    friend bool KConfigDialog_IsDefault(KConfigDialog* self);
    friend bool KConfigDialog_SuperIsDefault(KConfigDialog* self);
    friend void KConfigDialog_ShowEvent(KConfigDialog* self, QShowEvent* e);
    friend void KConfigDialog_SuperShowEvent(KConfigDialog* self, QShowEvent* e);
    friend void KConfigDialog_KeyPressEvent(KConfigDialog* self, QKeyEvent* param1);
    friend void KConfigDialog_SuperKeyPressEvent(KConfigDialog* self, QKeyEvent* param1);
    friend void KConfigDialog_CloseEvent(KConfigDialog* self, QCloseEvent* param1);
    friend void KConfigDialog_SuperCloseEvent(KConfigDialog* self, QCloseEvent* param1);
    friend void KConfigDialog_ResizeEvent(KConfigDialog* self, QResizeEvent* param1);
    friend void KConfigDialog_SuperResizeEvent(KConfigDialog* self, QResizeEvent* param1);
    friend void KConfigDialog_ContextMenuEvent(KConfigDialog* self, QContextMenuEvent* param1);
    friend void KConfigDialog_SuperContextMenuEvent(KConfigDialog* self, QContextMenuEvent* param1);
    friend bool KConfigDialog_EventFilter(KConfigDialog* self, QObject* param1, QEvent* param2);
    friend bool KConfigDialog_SuperEventFilter(KConfigDialog* self, QObject* param1, QEvent* param2);
    friend bool KConfigDialog_Event(KConfigDialog* self, QEvent* event);
    friend bool KConfigDialog_SuperEvent(KConfigDialog* self, QEvent* event);
    friend void KConfigDialog_MousePressEvent(KConfigDialog* self, QMouseEvent* event);
    friend void KConfigDialog_SuperMousePressEvent(KConfigDialog* self, QMouseEvent* event);
    friend void KConfigDialog_MouseReleaseEvent(KConfigDialog* self, QMouseEvent* event);
    friend void KConfigDialog_SuperMouseReleaseEvent(KConfigDialog* self, QMouseEvent* event);
    friend void KConfigDialog_MouseDoubleClickEvent(KConfigDialog* self, QMouseEvent* event);
    friend void KConfigDialog_SuperMouseDoubleClickEvent(KConfigDialog* self, QMouseEvent* event);
    friend void KConfigDialog_MouseMoveEvent(KConfigDialog* self, QMouseEvent* event);
    friend void KConfigDialog_SuperMouseMoveEvent(KConfigDialog* self, QMouseEvent* event);
    friend void KConfigDialog_WheelEvent(KConfigDialog* self, QWheelEvent* event);
    friend void KConfigDialog_SuperWheelEvent(KConfigDialog* self, QWheelEvent* event);
    friend void KConfigDialog_KeyReleaseEvent(KConfigDialog* self, QKeyEvent* event);
    friend void KConfigDialog_SuperKeyReleaseEvent(KConfigDialog* self, QKeyEvent* event);
    friend void KConfigDialog_FocusInEvent(KConfigDialog* self, QFocusEvent* event);
    friend void KConfigDialog_SuperFocusInEvent(KConfigDialog* self, QFocusEvent* event);
    friend void KConfigDialog_FocusOutEvent(KConfigDialog* self, QFocusEvent* event);
    friend void KConfigDialog_SuperFocusOutEvent(KConfigDialog* self, QFocusEvent* event);
    friend void KConfigDialog_EnterEvent(KConfigDialog* self, QEnterEvent* event);
    friend void KConfigDialog_SuperEnterEvent(KConfigDialog* self, QEnterEvent* event);
    friend void KConfigDialog_LeaveEvent(KConfigDialog* self, QEvent* event);
    friend void KConfigDialog_SuperLeaveEvent(KConfigDialog* self, QEvent* event);
    friend void KConfigDialog_PaintEvent(KConfigDialog* self, QPaintEvent* event);
    friend void KConfigDialog_SuperPaintEvent(KConfigDialog* self, QPaintEvent* event);
    friend void KConfigDialog_MoveEvent(KConfigDialog* self, QMoveEvent* event);
    friend void KConfigDialog_SuperMoveEvent(KConfigDialog* self, QMoveEvent* event);
    friend void KConfigDialog_TabletEvent(KConfigDialog* self, QTabletEvent* event);
    friend void KConfigDialog_SuperTabletEvent(KConfigDialog* self, QTabletEvent* event);
    friend void KConfigDialog_ActionEvent(KConfigDialog* self, QActionEvent* event);
    friend void KConfigDialog_SuperActionEvent(KConfigDialog* self, QActionEvent* event);
    friend void KConfigDialog_DragEnterEvent(KConfigDialog* self, QDragEnterEvent* event);
    friend void KConfigDialog_SuperDragEnterEvent(KConfigDialog* self, QDragEnterEvent* event);
    friend void KConfigDialog_DragMoveEvent(KConfigDialog* self, QDragMoveEvent* event);
    friend void KConfigDialog_SuperDragMoveEvent(KConfigDialog* self, QDragMoveEvent* event);
    friend void KConfigDialog_DragLeaveEvent(KConfigDialog* self, QDragLeaveEvent* event);
    friend void KConfigDialog_SuperDragLeaveEvent(KConfigDialog* self, QDragLeaveEvent* event);
    friend void KConfigDialog_DropEvent(KConfigDialog* self, QDropEvent* event);
    friend void KConfigDialog_SuperDropEvent(KConfigDialog* self, QDropEvent* event);
    friend void KConfigDialog_HideEvent(KConfigDialog* self, QHideEvent* event);
    friend void KConfigDialog_SuperHideEvent(KConfigDialog* self, QHideEvent* event);
    friend bool KConfigDialog_NativeEvent(KConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KConfigDialog_SuperNativeEvent(KConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KConfigDialog_ChangeEvent(KConfigDialog* self, QEvent* param1);
    friend void KConfigDialog_SuperChangeEvent(KConfigDialog* self, QEvent* param1);
    friend int KConfigDialog_Metric(const KConfigDialog* self, int param1);
    friend int KConfigDialog_SuperMetric(const KConfigDialog* self, int param1);
    friend void KConfigDialog_InitPainter(const KConfigDialog* self, QPainter* painter);
    friend void KConfigDialog_SuperInitPainter(const KConfigDialog* self, QPainter* painter);
    friend QPaintDevice* KConfigDialog_Redirected(const KConfigDialog* self, QPoint* offset);
    friend QPaintDevice* KConfigDialog_SuperRedirected(const KConfigDialog* self, QPoint* offset);
    friend QPainter* KConfigDialog_SharedPainter(const KConfigDialog* self);
    friend QPainter* KConfigDialog_SuperSharedPainter(const KConfigDialog* self);
    friend void KConfigDialog_InputMethodEvent(KConfigDialog* self, QInputMethodEvent* param1);
    friend void KConfigDialog_SuperInputMethodEvent(KConfigDialog* self, QInputMethodEvent* param1);
    friend bool KConfigDialog_FocusNextPrevChild(KConfigDialog* self, bool next);
    friend bool KConfigDialog_SuperFocusNextPrevChild(KConfigDialog* self, bool next);
    friend void KConfigDialog_TimerEvent(KConfigDialog* self, QTimerEvent* event);
    friend void KConfigDialog_SuperTimerEvent(KConfigDialog* self, QTimerEvent* event);
    friend void KConfigDialog_ChildEvent(KConfigDialog* self, QChildEvent* event);
    friend void KConfigDialog_SuperChildEvent(KConfigDialog* self, QChildEvent* event);
    friend void KConfigDialog_CustomEvent(KConfigDialog* self, QEvent* event);
    friend void KConfigDialog_SuperCustomEvent(KConfigDialog* self, QEvent* event);
    friend void KConfigDialog_ConnectNotify(KConfigDialog* self, const QMetaMethod* signal);
    friend void KConfigDialog_SuperConnectNotify(KConfigDialog* self, const QMetaMethod* signal);
    friend void KConfigDialog_DisconnectNotify(KConfigDialog* self, const QMetaMethod* signal);
    friend void KConfigDialog_SuperDisconnectNotify(KConfigDialog* self, const QMetaMethod* signal);
    friend void KConfigDialog_UpdateButtons(KConfigDialog* self);
    friend void KConfigDialog_SuperUpdateButtons(KConfigDialog* self);
    friend void KConfigDialog_SettingsChangedSlot(KConfigDialog* self);
    friend void KConfigDialog_SuperSettingsChangedSlot(KConfigDialog* self);
    friend void KConfigDialog_SetHelp(KConfigDialog* self, const libqt_string anchor);
    friend void KConfigDialog_SuperSetHelp(KConfigDialog* self, const libqt_string anchor);
    friend void KConfigDialog_SetHelp2(KConfigDialog* self, const libqt_string anchor, const libqt_string appname);
    friend void KConfigDialog_SuperSetHelp2(KConfigDialog* self, const libqt_string anchor, const libqt_string appname);
    friend KPageWidget* KConfigDialog_PageWidget(KConfigDialog* self);
    friend KPageWidget* KConfigDialog_SuperPageWidget(KConfigDialog* self);
    friend void KConfigDialog_SetPageWidget(KConfigDialog* self, KPageWidget* widget);
    friend void KConfigDialog_SuperSetPageWidget(KConfigDialog* self, KPageWidget* widget);
    friend QDialogButtonBox* KConfigDialog_ButtonBox(KConfigDialog* self);
    friend QDialogButtonBox* KConfigDialog_SuperButtonBox(KConfigDialog* self);
    friend void KConfigDialog_SetButtonBox(KConfigDialog* self, QDialogButtonBox* box);
    friend void KConfigDialog_SuperSetButtonBox(KConfigDialog* self, QDialogButtonBox* box);
    friend void KConfigDialog_AdjustPosition(KConfigDialog* self, QWidget* param1);
    friend void KConfigDialog_SuperAdjustPosition(KConfigDialog* self, QWidget* param1);
    friend void KConfigDialog_UpdateMicroFocus(KConfigDialog* self);
    friend void KConfigDialog_SuperUpdateMicroFocus(KConfigDialog* self);
    friend void KConfigDialog_Create(KConfigDialog* self);
    friend void KConfigDialog_SuperCreate(KConfigDialog* self);
    friend void KConfigDialog_Destroy(KConfigDialog* self);
    friend void KConfigDialog_SuperDestroy(KConfigDialog* self);
    friend bool KConfigDialog_FocusNextChild(KConfigDialog* self);
    friend bool KConfigDialog_SuperFocusNextChild(KConfigDialog* self);
    friend bool KConfigDialog_FocusPreviousChild(KConfigDialog* self);
    friend bool KConfigDialog_SuperFocusPreviousChild(KConfigDialog* self);
    friend QObject* KConfigDialog_Sender(const KConfigDialog* self);
    friend QObject* KConfigDialog_SuperSender(const KConfigDialog* self);
    friend int KConfigDialog_SenderSignalIndex(const KConfigDialog* self);
    friend int KConfigDialog_SuperSenderSignalIndex(const KConfigDialog* self);
    friend int KConfigDialog_Receivers(const KConfigDialog* self, const char* signal);
    friend int KConfigDialog_SuperReceivers(const KConfigDialog* self, const char* signal);
    friend bool KConfigDialog_IsSignalConnected(const KConfigDialog* self, const QMetaMethod* signal);
    friend bool KConfigDialog_SuperIsSignalConnected(const KConfigDialog* self, const QMetaMethod* signal);
    friend double KConfigDialog_GetDecodedMetricF(const KConfigDialog* self, int metricA, int metricB);
    friend double KConfigDialog_SuperGetDecodedMetricF(const KConfigDialog* self, int metricA, int metricB);
};

#endif
