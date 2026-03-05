#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKMESSAGEDIALOG_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKMESSAGEDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KMessageDialog so that we can call protected methods
class VirtualKMessageDialog final : public KMessageDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKMessageDialog = true;

    // Virtual class public types (including callbacks)
    using KMessageDialog_MetaObject_Callback = QMetaObject* (*)();
    using KMessageDialog_Metacast_Callback = void* (*)(KMessageDialog*, const char*);
    using KMessageDialog_Metacall_Callback = int (*)(KMessageDialog*, int, int, void**);
    using KMessageDialog_ShowEvent_Callback = void (*)(KMessageDialog*, QShowEvent*);
    using KMessageDialog_SetVisible_Callback = void (*)(KMessageDialog*, bool);
    using KMessageDialog_SizeHint_Callback = QSize* (*)();
    using KMessageDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KMessageDialog_Open_Callback = void (*)();
    using KMessageDialog_Exec_Callback = int (*)();
    using KMessageDialog_Done_Callback = void (*)(KMessageDialog*, int);
    using KMessageDialog_Accept_Callback = void (*)();
    using KMessageDialog_Reject_Callback = void (*)();
    using KMessageDialog_KeyPressEvent_Callback = void (*)(KMessageDialog*, QKeyEvent*);
    using KMessageDialog_CloseEvent_Callback = void (*)(KMessageDialog*, QCloseEvent*);
    using KMessageDialog_ResizeEvent_Callback = void (*)(KMessageDialog*, QResizeEvent*);
    using KMessageDialog_ContextMenuEvent_Callback = void (*)(KMessageDialog*, QContextMenuEvent*);
    using KMessageDialog_EventFilter_Callback = bool (*)(KMessageDialog*, QObject*, QEvent*);
    using KMessageDialog_DevType_Callback = int (*)();
    using KMessageDialog_HeightForWidth_Callback = int (*)(const KMessageDialog*, int);
    using KMessageDialog_HasHeightForWidth_Callback = bool (*)();
    using KMessageDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KMessageDialog_Event_Callback = bool (*)(KMessageDialog*, QEvent*);
    using KMessageDialog_MousePressEvent_Callback = void (*)(KMessageDialog*, QMouseEvent*);
    using KMessageDialog_MouseReleaseEvent_Callback = void (*)(KMessageDialog*, QMouseEvent*);
    using KMessageDialog_MouseDoubleClickEvent_Callback = void (*)(KMessageDialog*, QMouseEvent*);
    using KMessageDialog_MouseMoveEvent_Callback = void (*)(KMessageDialog*, QMouseEvent*);
    using KMessageDialog_WheelEvent_Callback = void (*)(KMessageDialog*, QWheelEvent*);
    using KMessageDialog_KeyReleaseEvent_Callback = void (*)(KMessageDialog*, QKeyEvent*);
    using KMessageDialog_FocusInEvent_Callback = void (*)(KMessageDialog*, QFocusEvent*);
    using KMessageDialog_FocusOutEvent_Callback = void (*)(KMessageDialog*, QFocusEvent*);
    using KMessageDialog_EnterEvent_Callback = void (*)(KMessageDialog*, QEnterEvent*);
    using KMessageDialog_LeaveEvent_Callback = void (*)(KMessageDialog*, QEvent*);
    using KMessageDialog_PaintEvent_Callback = void (*)(KMessageDialog*, QPaintEvent*);
    using KMessageDialog_MoveEvent_Callback = void (*)(KMessageDialog*, QMoveEvent*);
    using KMessageDialog_TabletEvent_Callback = void (*)(KMessageDialog*, QTabletEvent*);
    using KMessageDialog_ActionEvent_Callback = void (*)(KMessageDialog*, QActionEvent*);
    using KMessageDialog_DragEnterEvent_Callback = void (*)(KMessageDialog*, QDragEnterEvent*);
    using KMessageDialog_DragMoveEvent_Callback = void (*)(KMessageDialog*, QDragMoveEvent*);
    using KMessageDialog_DragLeaveEvent_Callback = void (*)(KMessageDialog*, QDragLeaveEvent*);
    using KMessageDialog_DropEvent_Callback = void (*)(KMessageDialog*, QDropEvent*);
    using KMessageDialog_HideEvent_Callback = void (*)(KMessageDialog*, QHideEvent*);
    using KMessageDialog_NativeEvent_Callback = bool (*)(KMessageDialog*, libqt_string, void*, intptr_t*);
    using KMessageDialog_ChangeEvent_Callback = void (*)(KMessageDialog*, QEvent*);
    using KMessageDialog_Metric_Callback = int (*)(const KMessageDialog*, int);
    using KMessageDialog_InitPainter_Callback = void (*)(const KMessageDialog*, QPainter*);
    using KMessageDialog_Redirected_Callback = QPaintDevice* (*)(const KMessageDialog*, QPoint*);
    using KMessageDialog_SharedPainter_Callback = QPainter* (*)();
    using KMessageDialog_InputMethodEvent_Callback = void (*)(KMessageDialog*, QInputMethodEvent*);
    using KMessageDialog_InputMethodQuery_Callback = QVariant* (*)(const KMessageDialog*, int);
    using KMessageDialog_FocusNextPrevChild_Callback = bool (*)(KMessageDialog*, bool);
    using KMessageDialog_TimerEvent_Callback = void (*)(KMessageDialog*, QTimerEvent*);
    using KMessageDialog_ChildEvent_Callback = void (*)(KMessageDialog*, QChildEvent*);
    using KMessageDialog_CustomEvent_Callback = void (*)(KMessageDialog*, QEvent*);
    using KMessageDialog_ConnectNotify_Callback = void (*)(KMessageDialog*, QMetaMethod*);
    using KMessageDialog_DisconnectNotify_Callback = void (*)(KMessageDialog*, QMetaMethod*);
    using KMessageDialog_AdjustPosition_Callback = void (*)(KMessageDialog*, QWidget*);
    using KMessageDialog_UpdateMicroFocus_Callback = void (*)();
    using KMessageDialog_Create_Callback = void (*)();
    using KMessageDialog_Destroy_Callback = void (*)();
    using KMessageDialog_FocusNextChild_Callback = bool (*)();
    using KMessageDialog_FocusPreviousChild_Callback = bool (*)();
    using KMessageDialog_Sender_Callback = QObject* (*)();
    using KMessageDialog_SenderSignalIndex_Callback = int (*)();
    using KMessageDialog_Receivers_Callback = int (*)(const KMessageDialog*, const char*);
    using KMessageDialog_IsSignalConnected_Callback = bool (*)(const KMessageDialog*, QMetaMethod*);
    using KMessageDialog_GetDecodedMetricF_Callback = double (*)(const KMessageDialog*, int, int);

  protected:
    // Instance callback storage
    KMessageDialog_MetaObject_Callback kmessagedialog_metaobject_callback = nullptr;
    KMessageDialog_Metacast_Callback kmessagedialog_metacast_callback = nullptr;
    KMessageDialog_Metacall_Callback kmessagedialog_metacall_callback = nullptr;
    KMessageDialog_ShowEvent_Callback kmessagedialog_showevent_callback = nullptr;
    KMessageDialog_SetVisible_Callback kmessagedialog_setvisible_callback = nullptr;
    KMessageDialog_SizeHint_Callback kmessagedialog_sizehint_callback = nullptr;
    KMessageDialog_MinimumSizeHint_Callback kmessagedialog_minimumsizehint_callback = nullptr;
    KMessageDialog_Open_Callback kmessagedialog_open_callback = nullptr;
    KMessageDialog_Exec_Callback kmessagedialog_exec_callback = nullptr;
    KMessageDialog_Done_Callback kmessagedialog_done_callback = nullptr;
    KMessageDialog_Accept_Callback kmessagedialog_accept_callback = nullptr;
    KMessageDialog_Reject_Callback kmessagedialog_reject_callback = nullptr;
    KMessageDialog_KeyPressEvent_Callback kmessagedialog_keypressevent_callback = nullptr;
    KMessageDialog_CloseEvent_Callback kmessagedialog_closeevent_callback = nullptr;
    KMessageDialog_ResizeEvent_Callback kmessagedialog_resizeevent_callback = nullptr;
    KMessageDialog_ContextMenuEvent_Callback kmessagedialog_contextmenuevent_callback = nullptr;
    KMessageDialog_EventFilter_Callback kmessagedialog_eventfilter_callback = nullptr;
    KMessageDialog_DevType_Callback kmessagedialog_devtype_callback = nullptr;
    KMessageDialog_HeightForWidth_Callback kmessagedialog_heightforwidth_callback = nullptr;
    KMessageDialog_HasHeightForWidth_Callback kmessagedialog_hasheightforwidth_callback = nullptr;
    KMessageDialog_PaintEngine_Callback kmessagedialog_paintengine_callback = nullptr;
    KMessageDialog_Event_Callback kmessagedialog_event_callback = nullptr;
    KMessageDialog_MousePressEvent_Callback kmessagedialog_mousepressevent_callback = nullptr;
    KMessageDialog_MouseReleaseEvent_Callback kmessagedialog_mousereleaseevent_callback = nullptr;
    KMessageDialog_MouseDoubleClickEvent_Callback kmessagedialog_mousedoubleclickevent_callback = nullptr;
    KMessageDialog_MouseMoveEvent_Callback kmessagedialog_mousemoveevent_callback = nullptr;
    KMessageDialog_WheelEvent_Callback kmessagedialog_wheelevent_callback = nullptr;
    KMessageDialog_KeyReleaseEvent_Callback kmessagedialog_keyreleaseevent_callback = nullptr;
    KMessageDialog_FocusInEvent_Callback kmessagedialog_focusinevent_callback = nullptr;
    KMessageDialog_FocusOutEvent_Callback kmessagedialog_focusoutevent_callback = nullptr;
    KMessageDialog_EnterEvent_Callback kmessagedialog_enterevent_callback = nullptr;
    KMessageDialog_LeaveEvent_Callback kmessagedialog_leaveevent_callback = nullptr;
    KMessageDialog_PaintEvent_Callback kmessagedialog_paintevent_callback = nullptr;
    KMessageDialog_MoveEvent_Callback kmessagedialog_moveevent_callback = nullptr;
    KMessageDialog_TabletEvent_Callback kmessagedialog_tabletevent_callback = nullptr;
    KMessageDialog_ActionEvent_Callback kmessagedialog_actionevent_callback = nullptr;
    KMessageDialog_DragEnterEvent_Callback kmessagedialog_dragenterevent_callback = nullptr;
    KMessageDialog_DragMoveEvent_Callback kmessagedialog_dragmoveevent_callback = nullptr;
    KMessageDialog_DragLeaveEvent_Callback kmessagedialog_dragleaveevent_callback = nullptr;
    KMessageDialog_DropEvent_Callback kmessagedialog_dropevent_callback = nullptr;
    KMessageDialog_HideEvent_Callback kmessagedialog_hideevent_callback = nullptr;
    KMessageDialog_NativeEvent_Callback kmessagedialog_nativeevent_callback = nullptr;
    KMessageDialog_ChangeEvent_Callback kmessagedialog_changeevent_callback = nullptr;
    KMessageDialog_Metric_Callback kmessagedialog_metric_callback = nullptr;
    KMessageDialog_InitPainter_Callback kmessagedialog_initpainter_callback = nullptr;
    KMessageDialog_Redirected_Callback kmessagedialog_redirected_callback = nullptr;
    KMessageDialog_SharedPainter_Callback kmessagedialog_sharedpainter_callback = nullptr;
    KMessageDialog_InputMethodEvent_Callback kmessagedialog_inputmethodevent_callback = nullptr;
    KMessageDialog_InputMethodQuery_Callback kmessagedialog_inputmethodquery_callback = nullptr;
    KMessageDialog_FocusNextPrevChild_Callback kmessagedialog_focusnextprevchild_callback = nullptr;
    KMessageDialog_TimerEvent_Callback kmessagedialog_timerevent_callback = nullptr;
    KMessageDialog_ChildEvent_Callback kmessagedialog_childevent_callback = nullptr;
    KMessageDialog_CustomEvent_Callback kmessagedialog_customevent_callback = nullptr;
    KMessageDialog_ConnectNotify_Callback kmessagedialog_connectnotify_callback = nullptr;
    KMessageDialog_DisconnectNotify_Callback kmessagedialog_disconnectnotify_callback = nullptr;
    KMessageDialog_AdjustPosition_Callback kmessagedialog_adjustposition_callback = nullptr;
    KMessageDialog_UpdateMicroFocus_Callback kmessagedialog_updatemicrofocus_callback = nullptr;
    KMessageDialog_Create_Callback kmessagedialog_create_callback = nullptr;
    KMessageDialog_Destroy_Callback kmessagedialog_destroy_callback = nullptr;
    KMessageDialog_FocusNextChild_Callback kmessagedialog_focusnextchild_callback = nullptr;
    KMessageDialog_FocusPreviousChild_Callback kmessagedialog_focuspreviouschild_callback = nullptr;
    KMessageDialog_Sender_Callback kmessagedialog_sender_callback = nullptr;
    KMessageDialog_SenderSignalIndex_Callback kmessagedialog_sendersignalindex_callback = nullptr;
    KMessageDialog_Receivers_Callback kmessagedialog_receivers_callback = nullptr;
    KMessageDialog_IsSignalConnected_Callback kmessagedialog_issignalconnected_callback = nullptr;
    KMessageDialog_GetDecodedMetricF_Callback kmessagedialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kmessagedialog_metaobject_isbase = false;
    mutable bool kmessagedialog_metacast_isbase = false;
    mutable bool kmessagedialog_metacall_isbase = false;
    mutable bool kmessagedialog_showevent_isbase = false;
    mutable bool kmessagedialog_setvisible_isbase = false;
    mutable bool kmessagedialog_sizehint_isbase = false;
    mutable bool kmessagedialog_minimumsizehint_isbase = false;
    mutable bool kmessagedialog_open_isbase = false;
    mutable bool kmessagedialog_exec_isbase = false;
    mutable bool kmessagedialog_done_isbase = false;
    mutable bool kmessagedialog_accept_isbase = false;
    mutable bool kmessagedialog_reject_isbase = false;
    mutable bool kmessagedialog_keypressevent_isbase = false;
    mutable bool kmessagedialog_closeevent_isbase = false;
    mutable bool kmessagedialog_resizeevent_isbase = false;
    mutable bool kmessagedialog_contextmenuevent_isbase = false;
    mutable bool kmessagedialog_eventfilter_isbase = false;
    mutable bool kmessagedialog_devtype_isbase = false;
    mutable bool kmessagedialog_heightforwidth_isbase = false;
    mutable bool kmessagedialog_hasheightforwidth_isbase = false;
    mutable bool kmessagedialog_paintengine_isbase = false;
    mutable bool kmessagedialog_event_isbase = false;
    mutable bool kmessagedialog_mousepressevent_isbase = false;
    mutable bool kmessagedialog_mousereleaseevent_isbase = false;
    mutable bool kmessagedialog_mousedoubleclickevent_isbase = false;
    mutable bool kmessagedialog_mousemoveevent_isbase = false;
    mutable bool kmessagedialog_wheelevent_isbase = false;
    mutable bool kmessagedialog_keyreleaseevent_isbase = false;
    mutable bool kmessagedialog_focusinevent_isbase = false;
    mutable bool kmessagedialog_focusoutevent_isbase = false;
    mutable bool kmessagedialog_enterevent_isbase = false;
    mutable bool kmessagedialog_leaveevent_isbase = false;
    mutable bool kmessagedialog_paintevent_isbase = false;
    mutable bool kmessagedialog_moveevent_isbase = false;
    mutable bool kmessagedialog_tabletevent_isbase = false;
    mutable bool kmessagedialog_actionevent_isbase = false;
    mutable bool kmessagedialog_dragenterevent_isbase = false;
    mutable bool kmessagedialog_dragmoveevent_isbase = false;
    mutable bool kmessagedialog_dragleaveevent_isbase = false;
    mutable bool kmessagedialog_dropevent_isbase = false;
    mutable bool kmessagedialog_hideevent_isbase = false;
    mutable bool kmessagedialog_nativeevent_isbase = false;
    mutable bool kmessagedialog_changeevent_isbase = false;
    mutable bool kmessagedialog_metric_isbase = false;
    mutable bool kmessagedialog_initpainter_isbase = false;
    mutable bool kmessagedialog_redirected_isbase = false;
    mutable bool kmessagedialog_sharedpainter_isbase = false;
    mutable bool kmessagedialog_inputmethodevent_isbase = false;
    mutable bool kmessagedialog_inputmethodquery_isbase = false;
    mutable bool kmessagedialog_focusnextprevchild_isbase = false;
    mutable bool kmessagedialog_timerevent_isbase = false;
    mutable bool kmessagedialog_childevent_isbase = false;
    mutable bool kmessagedialog_customevent_isbase = false;
    mutable bool kmessagedialog_connectnotify_isbase = false;
    mutable bool kmessagedialog_disconnectnotify_isbase = false;
    mutable bool kmessagedialog_adjustposition_isbase = false;
    mutable bool kmessagedialog_updatemicrofocus_isbase = false;
    mutable bool kmessagedialog_create_isbase = false;
    mutable bool kmessagedialog_destroy_isbase = false;
    mutable bool kmessagedialog_focusnextchild_isbase = false;
    mutable bool kmessagedialog_focuspreviouschild_isbase = false;
    mutable bool kmessagedialog_sender_isbase = false;
    mutable bool kmessagedialog_sendersignalindex_isbase = false;
    mutable bool kmessagedialog_receivers_isbase = false;
    mutable bool kmessagedialog_issignalconnected_isbase = false;
    mutable bool kmessagedialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKMessageDialog(KMessageDialog::Type typeVal, const QString& text) : KMessageDialog(typeVal, text) {};
    VirtualKMessageDialog(KMessageDialog::Type typeVal, const QString& text, WId parent_id) : KMessageDialog(typeVal, text, parent_id) {};
    VirtualKMessageDialog(KMessageDialog::Type typeVal, const QString& text, QWidget* parent) : KMessageDialog(typeVal, text, parent) {};

    // Callback setters
    inline void setKMessageDialog_MetaObject_Callback(KMessageDialog_MetaObject_Callback cb) { kmessagedialog_metaobject_callback = cb; }
    inline void setKMessageDialog_Metacast_Callback(KMessageDialog_Metacast_Callback cb) { kmessagedialog_metacast_callback = cb; }
    inline void setKMessageDialog_Metacall_Callback(KMessageDialog_Metacall_Callback cb) { kmessagedialog_metacall_callback = cb; }
    inline void setKMessageDialog_ShowEvent_Callback(KMessageDialog_ShowEvent_Callback cb) { kmessagedialog_showevent_callback = cb; }
    inline void setKMessageDialog_SetVisible_Callback(KMessageDialog_SetVisible_Callback cb) { kmessagedialog_setvisible_callback = cb; }
    inline void setKMessageDialog_SizeHint_Callback(KMessageDialog_SizeHint_Callback cb) { kmessagedialog_sizehint_callback = cb; }
    inline void setKMessageDialog_MinimumSizeHint_Callback(KMessageDialog_MinimumSizeHint_Callback cb) { kmessagedialog_minimumsizehint_callback = cb; }
    inline void setKMessageDialog_Open_Callback(KMessageDialog_Open_Callback cb) { kmessagedialog_open_callback = cb; }
    inline void setKMessageDialog_Exec_Callback(KMessageDialog_Exec_Callback cb) { kmessagedialog_exec_callback = cb; }
    inline void setKMessageDialog_Done_Callback(KMessageDialog_Done_Callback cb) { kmessagedialog_done_callback = cb; }
    inline void setKMessageDialog_Accept_Callback(KMessageDialog_Accept_Callback cb) { kmessagedialog_accept_callback = cb; }
    inline void setKMessageDialog_Reject_Callback(KMessageDialog_Reject_Callback cb) { kmessagedialog_reject_callback = cb; }
    inline void setKMessageDialog_KeyPressEvent_Callback(KMessageDialog_KeyPressEvent_Callback cb) { kmessagedialog_keypressevent_callback = cb; }
    inline void setKMessageDialog_CloseEvent_Callback(KMessageDialog_CloseEvent_Callback cb) { kmessagedialog_closeevent_callback = cb; }
    inline void setKMessageDialog_ResizeEvent_Callback(KMessageDialog_ResizeEvent_Callback cb) { kmessagedialog_resizeevent_callback = cb; }
    inline void setKMessageDialog_ContextMenuEvent_Callback(KMessageDialog_ContextMenuEvent_Callback cb) { kmessagedialog_contextmenuevent_callback = cb; }
    inline void setKMessageDialog_EventFilter_Callback(KMessageDialog_EventFilter_Callback cb) { kmessagedialog_eventfilter_callback = cb; }
    inline void setKMessageDialog_DevType_Callback(KMessageDialog_DevType_Callback cb) { kmessagedialog_devtype_callback = cb; }
    inline void setKMessageDialog_HeightForWidth_Callback(KMessageDialog_HeightForWidth_Callback cb) { kmessagedialog_heightforwidth_callback = cb; }
    inline void setKMessageDialog_HasHeightForWidth_Callback(KMessageDialog_HasHeightForWidth_Callback cb) { kmessagedialog_hasheightforwidth_callback = cb; }
    inline void setKMessageDialog_PaintEngine_Callback(KMessageDialog_PaintEngine_Callback cb) { kmessagedialog_paintengine_callback = cb; }
    inline void setKMessageDialog_Event_Callback(KMessageDialog_Event_Callback cb) { kmessagedialog_event_callback = cb; }
    inline void setKMessageDialog_MousePressEvent_Callback(KMessageDialog_MousePressEvent_Callback cb) { kmessagedialog_mousepressevent_callback = cb; }
    inline void setKMessageDialog_MouseReleaseEvent_Callback(KMessageDialog_MouseReleaseEvent_Callback cb) { kmessagedialog_mousereleaseevent_callback = cb; }
    inline void setKMessageDialog_MouseDoubleClickEvent_Callback(KMessageDialog_MouseDoubleClickEvent_Callback cb) { kmessagedialog_mousedoubleclickevent_callback = cb; }
    inline void setKMessageDialog_MouseMoveEvent_Callback(KMessageDialog_MouseMoveEvent_Callback cb) { kmessagedialog_mousemoveevent_callback = cb; }
    inline void setKMessageDialog_WheelEvent_Callback(KMessageDialog_WheelEvent_Callback cb) { kmessagedialog_wheelevent_callback = cb; }
    inline void setKMessageDialog_KeyReleaseEvent_Callback(KMessageDialog_KeyReleaseEvent_Callback cb) { kmessagedialog_keyreleaseevent_callback = cb; }
    inline void setKMessageDialog_FocusInEvent_Callback(KMessageDialog_FocusInEvent_Callback cb) { kmessagedialog_focusinevent_callback = cb; }
    inline void setKMessageDialog_FocusOutEvent_Callback(KMessageDialog_FocusOutEvent_Callback cb) { kmessagedialog_focusoutevent_callback = cb; }
    inline void setKMessageDialog_EnterEvent_Callback(KMessageDialog_EnterEvent_Callback cb) { kmessagedialog_enterevent_callback = cb; }
    inline void setKMessageDialog_LeaveEvent_Callback(KMessageDialog_LeaveEvent_Callback cb) { kmessagedialog_leaveevent_callback = cb; }
    inline void setKMessageDialog_PaintEvent_Callback(KMessageDialog_PaintEvent_Callback cb) { kmessagedialog_paintevent_callback = cb; }
    inline void setKMessageDialog_MoveEvent_Callback(KMessageDialog_MoveEvent_Callback cb) { kmessagedialog_moveevent_callback = cb; }
    inline void setKMessageDialog_TabletEvent_Callback(KMessageDialog_TabletEvent_Callback cb) { kmessagedialog_tabletevent_callback = cb; }
    inline void setKMessageDialog_ActionEvent_Callback(KMessageDialog_ActionEvent_Callback cb) { kmessagedialog_actionevent_callback = cb; }
    inline void setKMessageDialog_DragEnterEvent_Callback(KMessageDialog_DragEnterEvent_Callback cb) { kmessagedialog_dragenterevent_callback = cb; }
    inline void setKMessageDialog_DragMoveEvent_Callback(KMessageDialog_DragMoveEvent_Callback cb) { kmessagedialog_dragmoveevent_callback = cb; }
    inline void setKMessageDialog_DragLeaveEvent_Callback(KMessageDialog_DragLeaveEvent_Callback cb) { kmessagedialog_dragleaveevent_callback = cb; }
    inline void setKMessageDialog_DropEvent_Callback(KMessageDialog_DropEvent_Callback cb) { kmessagedialog_dropevent_callback = cb; }
    inline void setKMessageDialog_HideEvent_Callback(KMessageDialog_HideEvent_Callback cb) { kmessagedialog_hideevent_callback = cb; }
    inline void setKMessageDialog_NativeEvent_Callback(KMessageDialog_NativeEvent_Callback cb) { kmessagedialog_nativeevent_callback = cb; }
    inline void setKMessageDialog_ChangeEvent_Callback(KMessageDialog_ChangeEvent_Callback cb) { kmessagedialog_changeevent_callback = cb; }
    inline void setKMessageDialog_Metric_Callback(KMessageDialog_Metric_Callback cb) { kmessagedialog_metric_callback = cb; }
    inline void setKMessageDialog_InitPainter_Callback(KMessageDialog_InitPainter_Callback cb) { kmessagedialog_initpainter_callback = cb; }
    inline void setKMessageDialog_Redirected_Callback(KMessageDialog_Redirected_Callback cb) { kmessagedialog_redirected_callback = cb; }
    inline void setKMessageDialog_SharedPainter_Callback(KMessageDialog_SharedPainter_Callback cb) { kmessagedialog_sharedpainter_callback = cb; }
    inline void setKMessageDialog_InputMethodEvent_Callback(KMessageDialog_InputMethodEvent_Callback cb) { kmessagedialog_inputmethodevent_callback = cb; }
    inline void setKMessageDialog_InputMethodQuery_Callback(KMessageDialog_InputMethodQuery_Callback cb) { kmessagedialog_inputmethodquery_callback = cb; }
    inline void setKMessageDialog_FocusNextPrevChild_Callback(KMessageDialog_FocusNextPrevChild_Callback cb) { kmessagedialog_focusnextprevchild_callback = cb; }
    inline void setKMessageDialog_TimerEvent_Callback(KMessageDialog_TimerEvent_Callback cb) { kmessagedialog_timerevent_callback = cb; }
    inline void setKMessageDialog_ChildEvent_Callback(KMessageDialog_ChildEvent_Callback cb) { kmessagedialog_childevent_callback = cb; }
    inline void setKMessageDialog_CustomEvent_Callback(KMessageDialog_CustomEvent_Callback cb) { kmessagedialog_customevent_callback = cb; }
    inline void setKMessageDialog_ConnectNotify_Callback(KMessageDialog_ConnectNotify_Callback cb) { kmessagedialog_connectnotify_callback = cb; }
    inline void setKMessageDialog_DisconnectNotify_Callback(KMessageDialog_DisconnectNotify_Callback cb) { kmessagedialog_disconnectnotify_callback = cb; }
    inline void setKMessageDialog_AdjustPosition_Callback(KMessageDialog_AdjustPosition_Callback cb) { kmessagedialog_adjustposition_callback = cb; }
    inline void setKMessageDialog_UpdateMicroFocus_Callback(KMessageDialog_UpdateMicroFocus_Callback cb) { kmessagedialog_updatemicrofocus_callback = cb; }
    inline void setKMessageDialog_Create_Callback(KMessageDialog_Create_Callback cb) { kmessagedialog_create_callback = cb; }
    inline void setKMessageDialog_Destroy_Callback(KMessageDialog_Destroy_Callback cb) { kmessagedialog_destroy_callback = cb; }
    inline void setKMessageDialog_FocusNextChild_Callback(KMessageDialog_FocusNextChild_Callback cb) { kmessagedialog_focusnextchild_callback = cb; }
    inline void setKMessageDialog_FocusPreviousChild_Callback(KMessageDialog_FocusPreviousChild_Callback cb) { kmessagedialog_focuspreviouschild_callback = cb; }
    inline void setKMessageDialog_Sender_Callback(KMessageDialog_Sender_Callback cb) { kmessagedialog_sender_callback = cb; }
    inline void setKMessageDialog_SenderSignalIndex_Callback(KMessageDialog_SenderSignalIndex_Callback cb) { kmessagedialog_sendersignalindex_callback = cb; }
    inline void setKMessageDialog_Receivers_Callback(KMessageDialog_Receivers_Callback cb) { kmessagedialog_receivers_callback = cb; }
    inline void setKMessageDialog_IsSignalConnected_Callback(KMessageDialog_IsSignalConnected_Callback cb) { kmessagedialog_issignalconnected_callback = cb; }
    inline void setKMessageDialog_GetDecodedMetricF_Callback(KMessageDialog_GetDecodedMetricF_Callback cb) { kmessagedialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKMessageDialog_MetaObject_IsBase(bool value) const { kmessagedialog_metaobject_isbase = value; }
    inline void setKMessageDialog_Metacast_IsBase(bool value) const { kmessagedialog_metacast_isbase = value; }
    inline void setKMessageDialog_Metacall_IsBase(bool value) const { kmessagedialog_metacall_isbase = value; }
    inline void setKMessageDialog_ShowEvent_IsBase(bool value) const { kmessagedialog_showevent_isbase = value; }
    inline void setKMessageDialog_SetVisible_IsBase(bool value) const { kmessagedialog_setvisible_isbase = value; }
    inline void setKMessageDialog_SizeHint_IsBase(bool value) const { kmessagedialog_sizehint_isbase = value; }
    inline void setKMessageDialog_MinimumSizeHint_IsBase(bool value) const { kmessagedialog_minimumsizehint_isbase = value; }
    inline void setKMessageDialog_Open_IsBase(bool value) const { kmessagedialog_open_isbase = value; }
    inline void setKMessageDialog_Exec_IsBase(bool value) const { kmessagedialog_exec_isbase = value; }
    inline void setKMessageDialog_Done_IsBase(bool value) const { kmessagedialog_done_isbase = value; }
    inline void setKMessageDialog_Accept_IsBase(bool value) const { kmessagedialog_accept_isbase = value; }
    inline void setKMessageDialog_Reject_IsBase(bool value) const { kmessagedialog_reject_isbase = value; }
    inline void setKMessageDialog_KeyPressEvent_IsBase(bool value) const { kmessagedialog_keypressevent_isbase = value; }
    inline void setKMessageDialog_CloseEvent_IsBase(bool value) const { kmessagedialog_closeevent_isbase = value; }
    inline void setKMessageDialog_ResizeEvent_IsBase(bool value) const { kmessagedialog_resizeevent_isbase = value; }
    inline void setKMessageDialog_ContextMenuEvent_IsBase(bool value) const { kmessagedialog_contextmenuevent_isbase = value; }
    inline void setKMessageDialog_EventFilter_IsBase(bool value) const { kmessagedialog_eventfilter_isbase = value; }
    inline void setKMessageDialog_DevType_IsBase(bool value) const { kmessagedialog_devtype_isbase = value; }
    inline void setKMessageDialog_HeightForWidth_IsBase(bool value) const { kmessagedialog_heightforwidth_isbase = value; }
    inline void setKMessageDialog_HasHeightForWidth_IsBase(bool value) const { kmessagedialog_hasheightforwidth_isbase = value; }
    inline void setKMessageDialog_PaintEngine_IsBase(bool value) const { kmessagedialog_paintengine_isbase = value; }
    inline void setKMessageDialog_Event_IsBase(bool value) const { kmessagedialog_event_isbase = value; }
    inline void setKMessageDialog_MousePressEvent_IsBase(bool value) const { kmessagedialog_mousepressevent_isbase = value; }
    inline void setKMessageDialog_MouseReleaseEvent_IsBase(bool value) const { kmessagedialog_mousereleaseevent_isbase = value; }
    inline void setKMessageDialog_MouseDoubleClickEvent_IsBase(bool value) const { kmessagedialog_mousedoubleclickevent_isbase = value; }
    inline void setKMessageDialog_MouseMoveEvent_IsBase(bool value) const { kmessagedialog_mousemoveevent_isbase = value; }
    inline void setKMessageDialog_WheelEvent_IsBase(bool value) const { kmessagedialog_wheelevent_isbase = value; }
    inline void setKMessageDialog_KeyReleaseEvent_IsBase(bool value) const { kmessagedialog_keyreleaseevent_isbase = value; }
    inline void setKMessageDialog_FocusInEvent_IsBase(bool value) const { kmessagedialog_focusinevent_isbase = value; }
    inline void setKMessageDialog_FocusOutEvent_IsBase(bool value) const { kmessagedialog_focusoutevent_isbase = value; }
    inline void setKMessageDialog_EnterEvent_IsBase(bool value) const { kmessagedialog_enterevent_isbase = value; }
    inline void setKMessageDialog_LeaveEvent_IsBase(bool value) const { kmessagedialog_leaveevent_isbase = value; }
    inline void setKMessageDialog_PaintEvent_IsBase(bool value) const { kmessagedialog_paintevent_isbase = value; }
    inline void setKMessageDialog_MoveEvent_IsBase(bool value) const { kmessagedialog_moveevent_isbase = value; }
    inline void setKMessageDialog_TabletEvent_IsBase(bool value) const { kmessagedialog_tabletevent_isbase = value; }
    inline void setKMessageDialog_ActionEvent_IsBase(bool value) const { kmessagedialog_actionevent_isbase = value; }
    inline void setKMessageDialog_DragEnterEvent_IsBase(bool value) const { kmessagedialog_dragenterevent_isbase = value; }
    inline void setKMessageDialog_DragMoveEvent_IsBase(bool value) const { kmessagedialog_dragmoveevent_isbase = value; }
    inline void setKMessageDialog_DragLeaveEvent_IsBase(bool value) const { kmessagedialog_dragleaveevent_isbase = value; }
    inline void setKMessageDialog_DropEvent_IsBase(bool value) const { kmessagedialog_dropevent_isbase = value; }
    inline void setKMessageDialog_HideEvent_IsBase(bool value) const { kmessagedialog_hideevent_isbase = value; }
    inline void setKMessageDialog_NativeEvent_IsBase(bool value) const { kmessagedialog_nativeevent_isbase = value; }
    inline void setKMessageDialog_ChangeEvent_IsBase(bool value) const { kmessagedialog_changeevent_isbase = value; }
    inline void setKMessageDialog_Metric_IsBase(bool value) const { kmessagedialog_metric_isbase = value; }
    inline void setKMessageDialog_InitPainter_IsBase(bool value) const { kmessagedialog_initpainter_isbase = value; }
    inline void setKMessageDialog_Redirected_IsBase(bool value) const { kmessagedialog_redirected_isbase = value; }
    inline void setKMessageDialog_SharedPainter_IsBase(bool value) const { kmessagedialog_sharedpainter_isbase = value; }
    inline void setKMessageDialog_InputMethodEvent_IsBase(bool value) const { kmessagedialog_inputmethodevent_isbase = value; }
    inline void setKMessageDialog_InputMethodQuery_IsBase(bool value) const { kmessagedialog_inputmethodquery_isbase = value; }
    inline void setKMessageDialog_FocusNextPrevChild_IsBase(bool value) const { kmessagedialog_focusnextprevchild_isbase = value; }
    inline void setKMessageDialog_TimerEvent_IsBase(bool value) const { kmessagedialog_timerevent_isbase = value; }
    inline void setKMessageDialog_ChildEvent_IsBase(bool value) const { kmessagedialog_childevent_isbase = value; }
    inline void setKMessageDialog_CustomEvent_IsBase(bool value) const { kmessagedialog_customevent_isbase = value; }
    inline void setKMessageDialog_ConnectNotify_IsBase(bool value) const { kmessagedialog_connectnotify_isbase = value; }
    inline void setKMessageDialog_DisconnectNotify_IsBase(bool value) const { kmessagedialog_disconnectnotify_isbase = value; }
    inline void setKMessageDialog_AdjustPosition_IsBase(bool value) const { kmessagedialog_adjustposition_isbase = value; }
    inline void setKMessageDialog_UpdateMicroFocus_IsBase(bool value) const { kmessagedialog_updatemicrofocus_isbase = value; }
    inline void setKMessageDialog_Create_IsBase(bool value) const { kmessagedialog_create_isbase = value; }
    inline void setKMessageDialog_Destroy_IsBase(bool value) const { kmessagedialog_destroy_isbase = value; }
    inline void setKMessageDialog_FocusNextChild_IsBase(bool value) const { kmessagedialog_focusnextchild_isbase = value; }
    inline void setKMessageDialog_FocusPreviousChild_IsBase(bool value) const { kmessagedialog_focuspreviouschild_isbase = value; }
    inline void setKMessageDialog_Sender_IsBase(bool value) const { kmessagedialog_sender_isbase = value; }
    inline void setKMessageDialog_SenderSignalIndex_IsBase(bool value) const { kmessagedialog_sendersignalindex_isbase = value; }
    inline void setKMessageDialog_Receivers_IsBase(bool value) const { kmessagedialog_receivers_isbase = value; }
    inline void setKMessageDialog_IsSignalConnected_IsBase(bool value) const { kmessagedialog_issignalconnected_isbase = value; }
    inline void setKMessageDialog_GetDecodedMetricF_IsBase(bool value) const { kmessagedialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kmessagedialog_metaobject_isbase) {
            kmessagedialog_metaobject_isbase = false;
            return KMessageDialog::metaObject();
        }
        auto metaobject_cb = kmessagedialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KMessageDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kmessagedialog_metacast_isbase) {
            kmessagedialog_metacast_isbase = false;
            return KMessageDialog::qt_metacast(param1);
        }
        auto metacast_cb = kmessagedialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KMessageDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kmessagedialog_metacall_isbase) {
            kmessagedialog_metacall_isbase = false;
            return KMessageDialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kmessagedialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KMessageDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kmessagedialog_showevent_isbase) {
            kmessagedialog_showevent_isbase = false;
            KMessageDialog::showEvent(event);
            return;
        }
        auto showevent_cb = kmessagedialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kmessagedialog_setvisible_isbase) {
            kmessagedialog_setvisible_isbase = false;
            KMessageDialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = kmessagedialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KMessageDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kmessagedialog_sizehint_isbase) {
            kmessagedialog_sizehint_isbase = false;
            return KMessageDialog::sizeHint();
        }
        auto sizehint_cb = kmessagedialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KMessageDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kmessagedialog_minimumsizehint_isbase) {
            kmessagedialog_minimumsizehint_isbase = false;
            return KMessageDialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = kmessagedialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KMessageDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kmessagedialog_open_isbase) {
            kmessagedialog_open_isbase = false;
            KMessageDialog::open();
            return;
        }
        auto open_cb = kmessagedialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        KMessageDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kmessagedialog_exec_isbase) {
            kmessagedialog_exec_isbase = false;
            return KMessageDialog::exec();
        }
        auto exec_cb = kmessagedialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return KMessageDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kmessagedialog_done_isbase) {
            kmessagedialog_done_isbase = false;
            KMessageDialog::done(param1);
            return;
        }
        auto done_cb = kmessagedialog_done_callback;
        if (done_cb) {
            int cbval1 = param1;

            done_cb(this, cbval1);
            return;
        }
        KMessageDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kmessagedialog_accept_isbase) {
            kmessagedialog_accept_isbase = false;
            KMessageDialog::accept();
            return;
        }
        auto accept_cb = kmessagedialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        KMessageDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kmessagedialog_reject_isbase) {
            kmessagedialog_reject_isbase = false;
            KMessageDialog::reject();
            return;
        }
        auto reject_cb = kmessagedialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        KMessageDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kmessagedialog_keypressevent_isbase) {
            kmessagedialog_keypressevent_isbase = false;
            KMessageDialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = kmessagedialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kmessagedialog_closeevent_isbase) {
            kmessagedialog_closeevent_isbase = false;
            KMessageDialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = kmessagedialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kmessagedialog_resizeevent_isbase) {
            kmessagedialog_resizeevent_isbase = false;
            KMessageDialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = kmessagedialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kmessagedialog_contextmenuevent_isbase) {
            kmessagedialog_contextmenuevent_isbase = false;
            KMessageDialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = kmessagedialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kmessagedialog_eventfilter_isbase) {
            kmessagedialog_eventfilter_isbase = false;
            return KMessageDialog::eventFilter(param1, param2);
        }
        auto eventfilter_cb = kmessagedialog_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KMessageDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kmessagedialog_devtype_isbase) {
            kmessagedialog_devtype_isbase = false;
            return KMessageDialog::devType();
        }
        auto devtype_cb = kmessagedialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KMessageDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kmessagedialog_heightforwidth_isbase) {
            kmessagedialog_heightforwidth_isbase = false;
            return KMessageDialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = kmessagedialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KMessageDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kmessagedialog_hasheightforwidth_isbase) {
            kmessagedialog_hasheightforwidth_isbase = false;
            return KMessageDialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kmessagedialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KMessageDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kmessagedialog_paintengine_isbase) {
            kmessagedialog_paintengine_isbase = false;
            return KMessageDialog::paintEngine();
        }
        auto paintengine_cb = kmessagedialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KMessageDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kmessagedialog_event_isbase) {
            kmessagedialog_event_isbase = false;
            return KMessageDialog::event(event);
        }
        auto event_cb = kmessagedialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KMessageDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kmessagedialog_mousepressevent_isbase) {
            kmessagedialog_mousepressevent_isbase = false;
            KMessageDialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kmessagedialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kmessagedialog_mousereleaseevent_isbase) {
            kmessagedialog_mousereleaseevent_isbase = false;
            KMessageDialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kmessagedialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kmessagedialog_mousedoubleclickevent_isbase) {
            kmessagedialog_mousedoubleclickevent_isbase = false;
            KMessageDialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kmessagedialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kmessagedialog_mousemoveevent_isbase) {
            kmessagedialog_mousemoveevent_isbase = false;
            KMessageDialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kmessagedialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kmessagedialog_wheelevent_isbase) {
            kmessagedialog_wheelevent_isbase = false;
            KMessageDialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kmessagedialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kmessagedialog_keyreleaseevent_isbase) {
            kmessagedialog_keyreleaseevent_isbase = false;
            KMessageDialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kmessagedialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kmessagedialog_focusinevent_isbase) {
            kmessagedialog_focusinevent_isbase = false;
            KMessageDialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kmessagedialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kmessagedialog_focusoutevent_isbase) {
            kmessagedialog_focusoutevent_isbase = false;
            KMessageDialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kmessagedialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kmessagedialog_enterevent_isbase) {
            kmessagedialog_enterevent_isbase = false;
            KMessageDialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = kmessagedialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kmessagedialog_leaveevent_isbase) {
            kmessagedialog_leaveevent_isbase = false;
            KMessageDialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kmessagedialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kmessagedialog_paintevent_isbase) {
            kmessagedialog_paintevent_isbase = false;
            KMessageDialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = kmessagedialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kmessagedialog_moveevent_isbase) {
            kmessagedialog_moveevent_isbase = false;
            KMessageDialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = kmessagedialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kmessagedialog_tabletevent_isbase) {
            kmessagedialog_tabletevent_isbase = false;
            KMessageDialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kmessagedialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kmessagedialog_actionevent_isbase) {
            kmessagedialog_actionevent_isbase = false;
            KMessageDialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = kmessagedialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kmessagedialog_dragenterevent_isbase) {
            kmessagedialog_dragenterevent_isbase = false;
            KMessageDialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kmessagedialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kmessagedialog_dragmoveevent_isbase) {
            kmessagedialog_dragmoveevent_isbase = false;
            KMessageDialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kmessagedialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kmessagedialog_dragleaveevent_isbase) {
            kmessagedialog_dragleaveevent_isbase = false;
            KMessageDialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kmessagedialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kmessagedialog_dropevent_isbase) {
            kmessagedialog_dropevent_isbase = false;
            KMessageDialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = kmessagedialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kmessagedialog_hideevent_isbase) {
            kmessagedialog_hideevent_isbase = false;
            KMessageDialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = kmessagedialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kmessagedialog_nativeevent_isbase) {
            kmessagedialog_nativeevent_isbase = false;
            return KMessageDialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kmessagedialog_nativeevent_callback;
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
        return KMessageDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kmessagedialog_changeevent_isbase) {
            kmessagedialog_changeevent_isbase = false;
            KMessageDialog::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kmessagedialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kmessagedialog_metric_isbase) {
            kmessagedialog_metric_isbase = false;
            return KMessageDialog::metric(param1);
        }
        auto metric_cb = kmessagedialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KMessageDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kmessagedialog_initpainter_isbase) {
            kmessagedialog_initpainter_isbase = false;
            KMessageDialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = kmessagedialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KMessageDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kmessagedialog_redirected_isbase) {
            kmessagedialog_redirected_isbase = false;
            return KMessageDialog::redirected(offset);
        }
        auto redirected_cb = kmessagedialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KMessageDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kmessagedialog_sharedpainter_isbase) {
            kmessagedialog_sharedpainter_isbase = false;
            return KMessageDialog::sharedPainter();
        }
        auto sharedpainter_cb = kmessagedialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KMessageDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kmessagedialog_inputmethodevent_isbase) {
            kmessagedialog_inputmethodevent_isbase = false;
            KMessageDialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kmessagedialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kmessagedialog_inputmethodquery_isbase) {
            kmessagedialog_inputmethodquery_isbase = false;
            return KMessageDialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kmessagedialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KMessageDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kmessagedialog_focusnextprevchild_isbase) {
            kmessagedialog_focusnextprevchild_isbase = false;
            return KMessageDialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kmessagedialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KMessageDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kmessagedialog_timerevent_isbase) {
            kmessagedialog_timerevent_isbase = false;
            KMessageDialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = kmessagedialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kmessagedialog_childevent_isbase) {
            kmessagedialog_childevent_isbase = false;
            KMessageDialog::childEvent(event);
            return;
        }
        auto childevent_cb = kmessagedialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kmessagedialog_customevent_isbase) {
            kmessagedialog_customevent_isbase = false;
            KMessageDialog::customEvent(event);
            return;
        }
        auto customevent_cb = kmessagedialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KMessageDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kmessagedialog_connectnotify_isbase) {
            kmessagedialog_connectnotify_isbase = false;
            KMessageDialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kmessagedialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KMessageDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kmessagedialog_disconnectnotify_isbase) {
            kmessagedialog_disconnectnotify_isbase = false;
            KMessageDialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kmessagedialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KMessageDialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kmessagedialog_adjustposition_isbase) {
            kmessagedialog_adjustposition_isbase = false;
            KMessageDialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = kmessagedialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        KMessageDialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kmessagedialog_updatemicrofocus_isbase) {
            kmessagedialog_updatemicrofocus_isbase = false;
            KMessageDialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kmessagedialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KMessageDialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kmessagedialog_create_isbase) {
            kmessagedialog_create_isbase = false;
            KMessageDialog::create();
            return;
        }
        auto create_cb = kmessagedialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KMessageDialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kmessagedialog_destroy_isbase) {
            kmessagedialog_destroy_isbase = false;
            KMessageDialog::destroy();
            return;
        }
        auto destroy_cb = kmessagedialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KMessageDialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kmessagedialog_focusnextchild_isbase) {
            kmessagedialog_focusnextchild_isbase = false;
            return KMessageDialog::focusNextChild();
        }
        auto focusnextchild_cb = kmessagedialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KMessageDialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kmessagedialog_focuspreviouschild_isbase) {
            kmessagedialog_focuspreviouschild_isbase = false;
            return KMessageDialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kmessagedialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KMessageDialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kmessagedialog_sender_isbase) {
            kmessagedialog_sender_isbase = false;
            return KMessageDialog::sender();
        }
        auto sender_cb = kmessagedialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KMessageDialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kmessagedialog_sendersignalindex_isbase) {
            kmessagedialog_sendersignalindex_isbase = false;
            return KMessageDialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = kmessagedialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KMessageDialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kmessagedialog_receivers_isbase) {
            kmessagedialog_receivers_isbase = false;
            return KMessageDialog::receivers(signal);
        }
        auto receivers_cb = kmessagedialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KMessageDialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kmessagedialog_issignalconnected_isbase) {
            kmessagedialog_issignalconnected_isbase = false;
            return KMessageDialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kmessagedialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KMessageDialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kmessagedialog_getdecodedmetricf_isbase) {
            kmessagedialog_getdecodedmetricf_isbase = false;
            return KMessageDialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kmessagedialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KMessageDialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KMessageDialog_ShowEvent(KMessageDialog* self, QShowEvent* event);
    friend void KMessageDialog_SuperShowEvent(KMessageDialog* self, QShowEvent* event);
    friend void KMessageDialog_KeyPressEvent(KMessageDialog* self, QKeyEvent* param1);
    friend void KMessageDialog_SuperKeyPressEvent(KMessageDialog* self, QKeyEvent* param1);
    friend void KMessageDialog_CloseEvent(KMessageDialog* self, QCloseEvent* param1);
    friend void KMessageDialog_SuperCloseEvent(KMessageDialog* self, QCloseEvent* param1);
    friend void KMessageDialog_ResizeEvent(KMessageDialog* self, QResizeEvent* param1);
    friend void KMessageDialog_SuperResizeEvent(KMessageDialog* self, QResizeEvent* param1);
    friend void KMessageDialog_ContextMenuEvent(KMessageDialog* self, QContextMenuEvent* param1);
    friend void KMessageDialog_SuperContextMenuEvent(KMessageDialog* self, QContextMenuEvent* param1);
    friend bool KMessageDialog_EventFilter(KMessageDialog* self, QObject* param1, QEvent* param2);
    friend bool KMessageDialog_SuperEventFilter(KMessageDialog* self, QObject* param1, QEvent* param2);
    friend bool KMessageDialog_Event(KMessageDialog* self, QEvent* event);
    friend bool KMessageDialog_SuperEvent(KMessageDialog* self, QEvent* event);
    friend void KMessageDialog_MousePressEvent(KMessageDialog* self, QMouseEvent* event);
    friend void KMessageDialog_SuperMousePressEvent(KMessageDialog* self, QMouseEvent* event);
    friend void KMessageDialog_MouseReleaseEvent(KMessageDialog* self, QMouseEvent* event);
    friend void KMessageDialog_SuperMouseReleaseEvent(KMessageDialog* self, QMouseEvent* event);
    friend void KMessageDialog_MouseDoubleClickEvent(KMessageDialog* self, QMouseEvent* event);
    friend void KMessageDialog_SuperMouseDoubleClickEvent(KMessageDialog* self, QMouseEvent* event);
    friend void KMessageDialog_MouseMoveEvent(KMessageDialog* self, QMouseEvent* event);
    friend void KMessageDialog_SuperMouseMoveEvent(KMessageDialog* self, QMouseEvent* event);
    friend void KMessageDialog_WheelEvent(KMessageDialog* self, QWheelEvent* event);
    friend void KMessageDialog_SuperWheelEvent(KMessageDialog* self, QWheelEvent* event);
    friend void KMessageDialog_KeyReleaseEvent(KMessageDialog* self, QKeyEvent* event);
    friend void KMessageDialog_SuperKeyReleaseEvent(KMessageDialog* self, QKeyEvent* event);
    friend void KMessageDialog_FocusInEvent(KMessageDialog* self, QFocusEvent* event);
    friend void KMessageDialog_SuperFocusInEvent(KMessageDialog* self, QFocusEvent* event);
    friend void KMessageDialog_FocusOutEvent(KMessageDialog* self, QFocusEvent* event);
    friend void KMessageDialog_SuperFocusOutEvent(KMessageDialog* self, QFocusEvent* event);
    friend void KMessageDialog_EnterEvent(KMessageDialog* self, QEnterEvent* event);
    friend void KMessageDialog_SuperEnterEvent(KMessageDialog* self, QEnterEvent* event);
    friend void KMessageDialog_LeaveEvent(KMessageDialog* self, QEvent* event);
    friend void KMessageDialog_SuperLeaveEvent(KMessageDialog* self, QEvent* event);
    friend void KMessageDialog_PaintEvent(KMessageDialog* self, QPaintEvent* event);
    friend void KMessageDialog_SuperPaintEvent(KMessageDialog* self, QPaintEvent* event);
    friend void KMessageDialog_MoveEvent(KMessageDialog* self, QMoveEvent* event);
    friend void KMessageDialog_SuperMoveEvent(KMessageDialog* self, QMoveEvent* event);
    friend void KMessageDialog_TabletEvent(KMessageDialog* self, QTabletEvent* event);
    friend void KMessageDialog_SuperTabletEvent(KMessageDialog* self, QTabletEvent* event);
    friend void KMessageDialog_ActionEvent(KMessageDialog* self, QActionEvent* event);
    friend void KMessageDialog_SuperActionEvent(KMessageDialog* self, QActionEvent* event);
    friend void KMessageDialog_DragEnterEvent(KMessageDialog* self, QDragEnterEvent* event);
    friend void KMessageDialog_SuperDragEnterEvent(KMessageDialog* self, QDragEnterEvent* event);
    friend void KMessageDialog_DragMoveEvent(KMessageDialog* self, QDragMoveEvent* event);
    friend void KMessageDialog_SuperDragMoveEvent(KMessageDialog* self, QDragMoveEvent* event);
    friend void KMessageDialog_DragLeaveEvent(KMessageDialog* self, QDragLeaveEvent* event);
    friend void KMessageDialog_SuperDragLeaveEvent(KMessageDialog* self, QDragLeaveEvent* event);
    friend void KMessageDialog_DropEvent(KMessageDialog* self, QDropEvent* event);
    friend void KMessageDialog_SuperDropEvent(KMessageDialog* self, QDropEvent* event);
    friend void KMessageDialog_HideEvent(KMessageDialog* self, QHideEvent* event);
    friend void KMessageDialog_SuperHideEvent(KMessageDialog* self, QHideEvent* event);
    friend bool KMessageDialog_NativeEvent(KMessageDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KMessageDialog_SuperNativeEvent(KMessageDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KMessageDialog_ChangeEvent(KMessageDialog* self, QEvent* param1);
    friend void KMessageDialog_SuperChangeEvent(KMessageDialog* self, QEvent* param1);
    friend int KMessageDialog_Metric(const KMessageDialog* self, int param1);
    friend int KMessageDialog_SuperMetric(const KMessageDialog* self, int param1);
    friend void KMessageDialog_InitPainter(const KMessageDialog* self, QPainter* painter);
    friend void KMessageDialog_SuperInitPainter(const KMessageDialog* self, QPainter* painter);
    friend QPaintDevice* KMessageDialog_Redirected(const KMessageDialog* self, QPoint* offset);
    friend QPaintDevice* KMessageDialog_SuperRedirected(const KMessageDialog* self, QPoint* offset);
    friend QPainter* KMessageDialog_SharedPainter(const KMessageDialog* self);
    friend QPainter* KMessageDialog_SuperSharedPainter(const KMessageDialog* self);
    friend void KMessageDialog_InputMethodEvent(KMessageDialog* self, QInputMethodEvent* param1);
    friend void KMessageDialog_SuperInputMethodEvent(KMessageDialog* self, QInputMethodEvent* param1);
    friend bool KMessageDialog_FocusNextPrevChild(KMessageDialog* self, bool next);
    friend bool KMessageDialog_SuperFocusNextPrevChild(KMessageDialog* self, bool next);
    friend void KMessageDialog_TimerEvent(KMessageDialog* self, QTimerEvent* event);
    friend void KMessageDialog_SuperTimerEvent(KMessageDialog* self, QTimerEvent* event);
    friend void KMessageDialog_ChildEvent(KMessageDialog* self, QChildEvent* event);
    friend void KMessageDialog_SuperChildEvent(KMessageDialog* self, QChildEvent* event);
    friend void KMessageDialog_CustomEvent(KMessageDialog* self, QEvent* event);
    friend void KMessageDialog_SuperCustomEvent(KMessageDialog* self, QEvent* event);
    friend void KMessageDialog_ConnectNotify(KMessageDialog* self, const QMetaMethod* signal);
    friend void KMessageDialog_SuperConnectNotify(KMessageDialog* self, const QMetaMethod* signal);
    friend void KMessageDialog_DisconnectNotify(KMessageDialog* self, const QMetaMethod* signal);
    friend void KMessageDialog_SuperDisconnectNotify(KMessageDialog* self, const QMetaMethod* signal);
    friend void KMessageDialog_AdjustPosition(KMessageDialog* self, QWidget* param1);
    friend void KMessageDialog_SuperAdjustPosition(KMessageDialog* self, QWidget* param1);
    friend void KMessageDialog_UpdateMicroFocus(KMessageDialog* self);
    friend void KMessageDialog_SuperUpdateMicroFocus(KMessageDialog* self);
    friend void KMessageDialog_Create(KMessageDialog* self);
    friend void KMessageDialog_SuperCreate(KMessageDialog* self);
    friend void KMessageDialog_Destroy(KMessageDialog* self);
    friend void KMessageDialog_SuperDestroy(KMessageDialog* self);
    friend bool KMessageDialog_FocusNextChild(KMessageDialog* self);
    friend bool KMessageDialog_SuperFocusNextChild(KMessageDialog* self);
    friend bool KMessageDialog_FocusPreviousChild(KMessageDialog* self);
    friend bool KMessageDialog_SuperFocusPreviousChild(KMessageDialog* self);
    friend QObject* KMessageDialog_Sender(const KMessageDialog* self);
    friend QObject* KMessageDialog_SuperSender(const KMessageDialog* self);
    friend int KMessageDialog_SenderSignalIndex(const KMessageDialog* self);
    friend int KMessageDialog_SuperSenderSignalIndex(const KMessageDialog* self);
    friend int KMessageDialog_Receivers(const KMessageDialog* self, const char* signal);
    friend int KMessageDialog_SuperReceivers(const KMessageDialog* self, const char* signal);
    friend bool KMessageDialog_IsSignalConnected(const KMessageDialog* self, const QMetaMethod* signal);
    friend bool KMessageDialog_SuperIsSignalConnected(const KMessageDialog* self, const QMetaMethod* signal);
    friend double KMessageDialog_GetDecodedMetricF(const KMessageDialog* self, int metricA, int metricB);
    friend double KMessageDialog_SuperGetDecodedMetricF(const KMessageDialog* self, int metricA, int metricB);
};

#endif
