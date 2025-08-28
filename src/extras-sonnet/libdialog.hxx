#pragma once
#ifndef SRC_EXTRAS_SONNETC_LIBVIRTUALDIALOG_H
#define SRC_EXTRAS_SONNETC_LIBVIRTUALDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Sonnet::Dialog so that we can call protected methods
class VirtualSonnetDialog final : public Sonnet::Dialog {

  public:
    // Virtual class boolean flag
    bool isVirtualSonnetDialog = true;

    // Virtual class public types (including callbacks)
    using Sonnet__Dialog_Metacall_Callback = int (*)(Sonnet__Dialog*, int, int, void**);
    using Sonnet__Dialog_SetVisible_Callback = void (*)(Sonnet__Dialog*, bool);
    using Sonnet__Dialog_SizeHint_Callback = QSize* (*)();
    using Sonnet__Dialog_MinimumSizeHint_Callback = QSize* (*)();
    using Sonnet__Dialog_Open_Callback = void (*)();
    using Sonnet__Dialog_Exec_Callback = int (*)();
    using Sonnet__Dialog_Done_Callback = void (*)(Sonnet__Dialog*, int);
    using Sonnet__Dialog_Accept_Callback = void (*)();
    using Sonnet__Dialog_Reject_Callback = void (*)();
    using Sonnet__Dialog_KeyPressEvent_Callback = void (*)(Sonnet__Dialog*, QKeyEvent*);
    using Sonnet__Dialog_CloseEvent_Callback = void (*)(Sonnet__Dialog*, QCloseEvent*);
    using Sonnet__Dialog_ShowEvent_Callback = void (*)(Sonnet__Dialog*, QShowEvent*);
    using Sonnet__Dialog_ResizeEvent_Callback = void (*)(Sonnet__Dialog*, QResizeEvent*);
    using Sonnet__Dialog_ContextMenuEvent_Callback = void (*)(Sonnet__Dialog*, QContextMenuEvent*);
    using Sonnet__Dialog_EventFilter_Callback = bool (*)(Sonnet__Dialog*, QObject*, QEvent*);
    using Sonnet__Dialog_DevType_Callback = int (*)();
    using Sonnet__Dialog_HeightForWidth_Callback = int (*)(const Sonnet__Dialog*, int);
    using Sonnet__Dialog_HasHeightForWidth_Callback = bool (*)();
    using Sonnet__Dialog_PaintEngine_Callback = QPaintEngine* (*)();
    using Sonnet__Dialog_Event_Callback = bool (*)(Sonnet__Dialog*, QEvent*);
    using Sonnet__Dialog_MousePressEvent_Callback = void (*)(Sonnet__Dialog*, QMouseEvent*);
    using Sonnet__Dialog_MouseReleaseEvent_Callback = void (*)(Sonnet__Dialog*, QMouseEvent*);
    using Sonnet__Dialog_MouseDoubleClickEvent_Callback = void (*)(Sonnet__Dialog*, QMouseEvent*);
    using Sonnet__Dialog_MouseMoveEvent_Callback = void (*)(Sonnet__Dialog*, QMouseEvent*);
    using Sonnet__Dialog_WheelEvent_Callback = void (*)(Sonnet__Dialog*, QWheelEvent*);
    using Sonnet__Dialog_KeyReleaseEvent_Callback = void (*)(Sonnet__Dialog*, QKeyEvent*);
    using Sonnet__Dialog_FocusInEvent_Callback = void (*)(Sonnet__Dialog*, QFocusEvent*);
    using Sonnet__Dialog_FocusOutEvent_Callback = void (*)(Sonnet__Dialog*, QFocusEvent*);
    using Sonnet__Dialog_EnterEvent_Callback = void (*)(Sonnet__Dialog*, QEnterEvent*);
    using Sonnet__Dialog_LeaveEvent_Callback = void (*)(Sonnet__Dialog*, QEvent*);
    using Sonnet__Dialog_PaintEvent_Callback = void (*)(Sonnet__Dialog*, QPaintEvent*);
    using Sonnet__Dialog_MoveEvent_Callback = void (*)(Sonnet__Dialog*, QMoveEvent*);
    using Sonnet__Dialog_TabletEvent_Callback = void (*)(Sonnet__Dialog*, QTabletEvent*);
    using Sonnet__Dialog_ActionEvent_Callback = void (*)(Sonnet__Dialog*, QActionEvent*);
    using Sonnet__Dialog_DragEnterEvent_Callback = void (*)(Sonnet__Dialog*, QDragEnterEvent*);
    using Sonnet__Dialog_DragMoveEvent_Callback = void (*)(Sonnet__Dialog*, QDragMoveEvent*);
    using Sonnet__Dialog_DragLeaveEvent_Callback = void (*)(Sonnet__Dialog*, QDragLeaveEvent*);
    using Sonnet__Dialog_DropEvent_Callback = void (*)(Sonnet__Dialog*, QDropEvent*);
    using Sonnet__Dialog_HideEvent_Callback = void (*)(Sonnet__Dialog*, QHideEvent*);
    using Sonnet__Dialog_NativeEvent_Callback = bool (*)(Sonnet__Dialog*, libqt_string, void*, intptr_t*);
    using Sonnet__Dialog_ChangeEvent_Callback = void (*)(Sonnet__Dialog*, QEvent*);
    using Sonnet__Dialog_Metric_Callback = int (*)(const Sonnet__Dialog*, int);
    using Sonnet__Dialog_InitPainter_Callback = void (*)(const Sonnet__Dialog*, QPainter*);
    using Sonnet__Dialog_Redirected_Callback = QPaintDevice* (*)(const Sonnet__Dialog*, QPoint*);
    using Sonnet__Dialog_SharedPainter_Callback = QPainter* (*)();
    using Sonnet__Dialog_InputMethodEvent_Callback = void (*)(Sonnet__Dialog*, QInputMethodEvent*);
    using Sonnet__Dialog_InputMethodQuery_Callback = QVariant* (*)(const Sonnet__Dialog*, int);
    using Sonnet__Dialog_FocusNextPrevChild_Callback = bool (*)(Sonnet__Dialog*, bool);
    using Sonnet__Dialog_TimerEvent_Callback = void (*)(Sonnet__Dialog*, QTimerEvent*);
    using Sonnet__Dialog_ChildEvent_Callback = void (*)(Sonnet__Dialog*, QChildEvent*);
    using Sonnet__Dialog_CustomEvent_Callback = void (*)(Sonnet__Dialog*, QEvent*);
    using Sonnet__Dialog_ConnectNotify_Callback = void (*)(Sonnet__Dialog*, QMetaMethod*);
    using Sonnet__Dialog_DisconnectNotify_Callback = void (*)(Sonnet__Dialog*, QMetaMethod*);
    using Sonnet__Dialog_AdjustPosition_Callback = void (*)(Sonnet__Dialog*, QWidget*);
    using Sonnet__Dialog_UpdateMicroFocus_Callback = void (*)();
    using Sonnet__Dialog_Create_Callback = void (*)();
    using Sonnet__Dialog_Destroy_Callback = void (*)();
    using Sonnet__Dialog_FocusNextChild_Callback = bool (*)();
    using Sonnet__Dialog_FocusPreviousChild_Callback = bool (*)();
    using Sonnet__Dialog_Sender_Callback = QObject* (*)();
    using Sonnet__Dialog_SenderSignalIndex_Callback = int (*)();
    using Sonnet__Dialog_Receivers_Callback = int (*)(const Sonnet__Dialog*, const char*);
    using Sonnet__Dialog_IsSignalConnected_Callback = bool (*)(const Sonnet__Dialog*, QMetaMethod*);
    using Sonnet__Dialog_GetDecodedMetricF_Callback = double (*)(const Sonnet__Dialog*, int, int);

  protected:
    // Instance callback storage
    Sonnet__Dialog_Metacall_Callback sonnet__dialog_metacall_callback = nullptr;
    Sonnet__Dialog_SetVisible_Callback sonnet__dialog_setvisible_callback = nullptr;
    Sonnet__Dialog_SizeHint_Callback sonnet__dialog_sizehint_callback = nullptr;
    Sonnet__Dialog_MinimumSizeHint_Callback sonnet__dialog_minimumsizehint_callback = nullptr;
    Sonnet__Dialog_Open_Callback sonnet__dialog_open_callback = nullptr;
    Sonnet__Dialog_Exec_Callback sonnet__dialog_exec_callback = nullptr;
    Sonnet__Dialog_Done_Callback sonnet__dialog_done_callback = nullptr;
    Sonnet__Dialog_Accept_Callback sonnet__dialog_accept_callback = nullptr;
    Sonnet__Dialog_Reject_Callback sonnet__dialog_reject_callback = nullptr;
    Sonnet__Dialog_KeyPressEvent_Callback sonnet__dialog_keypressevent_callback = nullptr;
    Sonnet__Dialog_CloseEvent_Callback sonnet__dialog_closeevent_callback = nullptr;
    Sonnet__Dialog_ShowEvent_Callback sonnet__dialog_showevent_callback = nullptr;
    Sonnet__Dialog_ResizeEvent_Callback sonnet__dialog_resizeevent_callback = nullptr;
    Sonnet__Dialog_ContextMenuEvent_Callback sonnet__dialog_contextmenuevent_callback = nullptr;
    Sonnet__Dialog_EventFilter_Callback sonnet__dialog_eventfilter_callback = nullptr;
    Sonnet__Dialog_DevType_Callback sonnet__dialog_devtype_callback = nullptr;
    Sonnet__Dialog_HeightForWidth_Callback sonnet__dialog_heightforwidth_callback = nullptr;
    Sonnet__Dialog_HasHeightForWidth_Callback sonnet__dialog_hasheightforwidth_callback = nullptr;
    Sonnet__Dialog_PaintEngine_Callback sonnet__dialog_paintengine_callback = nullptr;
    Sonnet__Dialog_Event_Callback sonnet__dialog_event_callback = nullptr;
    Sonnet__Dialog_MousePressEvent_Callback sonnet__dialog_mousepressevent_callback = nullptr;
    Sonnet__Dialog_MouseReleaseEvent_Callback sonnet__dialog_mousereleaseevent_callback = nullptr;
    Sonnet__Dialog_MouseDoubleClickEvent_Callback sonnet__dialog_mousedoubleclickevent_callback = nullptr;
    Sonnet__Dialog_MouseMoveEvent_Callback sonnet__dialog_mousemoveevent_callback = nullptr;
    Sonnet__Dialog_WheelEvent_Callback sonnet__dialog_wheelevent_callback = nullptr;
    Sonnet__Dialog_KeyReleaseEvent_Callback sonnet__dialog_keyreleaseevent_callback = nullptr;
    Sonnet__Dialog_FocusInEvent_Callback sonnet__dialog_focusinevent_callback = nullptr;
    Sonnet__Dialog_FocusOutEvent_Callback sonnet__dialog_focusoutevent_callback = nullptr;
    Sonnet__Dialog_EnterEvent_Callback sonnet__dialog_enterevent_callback = nullptr;
    Sonnet__Dialog_LeaveEvent_Callback sonnet__dialog_leaveevent_callback = nullptr;
    Sonnet__Dialog_PaintEvent_Callback sonnet__dialog_paintevent_callback = nullptr;
    Sonnet__Dialog_MoveEvent_Callback sonnet__dialog_moveevent_callback = nullptr;
    Sonnet__Dialog_TabletEvent_Callback sonnet__dialog_tabletevent_callback = nullptr;
    Sonnet__Dialog_ActionEvent_Callback sonnet__dialog_actionevent_callback = nullptr;
    Sonnet__Dialog_DragEnterEvent_Callback sonnet__dialog_dragenterevent_callback = nullptr;
    Sonnet__Dialog_DragMoveEvent_Callback sonnet__dialog_dragmoveevent_callback = nullptr;
    Sonnet__Dialog_DragLeaveEvent_Callback sonnet__dialog_dragleaveevent_callback = nullptr;
    Sonnet__Dialog_DropEvent_Callback sonnet__dialog_dropevent_callback = nullptr;
    Sonnet__Dialog_HideEvent_Callback sonnet__dialog_hideevent_callback = nullptr;
    Sonnet__Dialog_NativeEvent_Callback sonnet__dialog_nativeevent_callback = nullptr;
    Sonnet__Dialog_ChangeEvent_Callback sonnet__dialog_changeevent_callback = nullptr;
    Sonnet__Dialog_Metric_Callback sonnet__dialog_metric_callback = nullptr;
    Sonnet__Dialog_InitPainter_Callback sonnet__dialog_initpainter_callback = nullptr;
    Sonnet__Dialog_Redirected_Callback sonnet__dialog_redirected_callback = nullptr;
    Sonnet__Dialog_SharedPainter_Callback sonnet__dialog_sharedpainter_callback = nullptr;
    Sonnet__Dialog_InputMethodEvent_Callback sonnet__dialog_inputmethodevent_callback = nullptr;
    Sonnet__Dialog_InputMethodQuery_Callback sonnet__dialog_inputmethodquery_callback = nullptr;
    Sonnet__Dialog_FocusNextPrevChild_Callback sonnet__dialog_focusnextprevchild_callback = nullptr;
    Sonnet__Dialog_TimerEvent_Callback sonnet__dialog_timerevent_callback = nullptr;
    Sonnet__Dialog_ChildEvent_Callback sonnet__dialog_childevent_callback = nullptr;
    Sonnet__Dialog_CustomEvent_Callback sonnet__dialog_customevent_callback = nullptr;
    Sonnet__Dialog_ConnectNotify_Callback sonnet__dialog_connectnotify_callback = nullptr;
    Sonnet__Dialog_DisconnectNotify_Callback sonnet__dialog_disconnectnotify_callback = nullptr;
    Sonnet__Dialog_AdjustPosition_Callback sonnet__dialog_adjustposition_callback = nullptr;
    Sonnet__Dialog_UpdateMicroFocus_Callback sonnet__dialog_updatemicrofocus_callback = nullptr;
    Sonnet__Dialog_Create_Callback sonnet__dialog_create_callback = nullptr;
    Sonnet__Dialog_Destroy_Callback sonnet__dialog_destroy_callback = nullptr;
    Sonnet__Dialog_FocusNextChild_Callback sonnet__dialog_focusnextchild_callback = nullptr;
    Sonnet__Dialog_FocusPreviousChild_Callback sonnet__dialog_focuspreviouschild_callback = nullptr;
    Sonnet__Dialog_Sender_Callback sonnet__dialog_sender_callback = nullptr;
    Sonnet__Dialog_SenderSignalIndex_Callback sonnet__dialog_sendersignalindex_callback = nullptr;
    Sonnet__Dialog_Receivers_Callback sonnet__dialog_receivers_callback = nullptr;
    Sonnet__Dialog_IsSignalConnected_Callback sonnet__dialog_issignalconnected_callback = nullptr;
    Sonnet__Dialog_GetDecodedMetricF_Callback sonnet__dialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool sonnet__dialog_metacall_isbase = false;
    mutable bool sonnet__dialog_setvisible_isbase = false;
    mutable bool sonnet__dialog_sizehint_isbase = false;
    mutable bool sonnet__dialog_minimumsizehint_isbase = false;
    mutable bool sonnet__dialog_open_isbase = false;
    mutable bool sonnet__dialog_exec_isbase = false;
    mutable bool sonnet__dialog_done_isbase = false;
    mutable bool sonnet__dialog_accept_isbase = false;
    mutable bool sonnet__dialog_reject_isbase = false;
    mutable bool sonnet__dialog_keypressevent_isbase = false;
    mutable bool sonnet__dialog_closeevent_isbase = false;
    mutable bool sonnet__dialog_showevent_isbase = false;
    mutable bool sonnet__dialog_resizeevent_isbase = false;
    mutable bool sonnet__dialog_contextmenuevent_isbase = false;
    mutable bool sonnet__dialog_eventfilter_isbase = false;
    mutable bool sonnet__dialog_devtype_isbase = false;
    mutable bool sonnet__dialog_heightforwidth_isbase = false;
    mutable bool sonnet__dialog_hasheightforwidth_isbase = false;
    mutable bool sonnet__dialog_paintengine_isbase = false;
    mutable bool sonnet__dialog_event_isbase = false;
    mutable bool sonnet__dialog_mousepressevent_isbase = false;
    mutable bool sonnet__dialog_mousereleaseevent_isbase = false;
    mutable bool sonnet__dialog_mousedoubleclickevent_isbase = false;
    mutable bool sonnet__dialog_mousemoveevent_isbase = false;
    mutable bool sonnet__dialog_wheelevent_isbase = false;
    mutable bool sonnet__dialog_keyreleaseevent_isbase = false;
    mutable bool sonnet__dialog_focusinevent_isbase = false;
    mutable bool sonnet__dialog_focusoutevent_isbase = false;
    mutable bool sonnet__dialog_enterevent_isbase = false;
    mutable bool sonnet__dialog_leaveevent_isbase = false;
    mutable bool sonnet__dialog_paintevent_isbase = false;
    mutable bool sonnet__dialog_moveevent_isbase = false;
    mutable bool sonnet__dialog_tabletevent_isbase = false;
    mutable bool sonnet__dialog_actionevent_isbase = false;
    mutable bool sonnet__dialog_dragenterevent_isbase = false;
    mutable bool sonnet__dialog_dragmoveevent_isbase = false;
    mutable bool sonnet__dialog_dragleaveevent_isbase = false;
    mutable bool sonnet__dialog_dropevent_isbase = false;
    mutable bool sonnet__dialog_hideevent_isbase = false;
    mutable bool sonnet__dialog_nativeevent_isbase = false;
    mutable bool sonnet__dialog_changeevent_isbase = false;
    mutable bool sonnet__dialog_metric_isbase = false;
    mutable bool sonnet__dialog_initpainter_isbase = false;
    mutable bool sonnet__dialog_redirected_isbase = false;
    mutable bool sonnet__dialog_sharedpainter_isbase = false;
    mutable bool sonnet__dialog_inputmethodevent_isbase = false;
    mutable bool sonnet__dialog_inputmethodquery_isbase = false;
    mutable bool sonnet__dialog_focusnextprevchild_isbase = false;
    mutable bool sonnet__dialog_timerevent_isbase = false;
    mutable bool sonnet__dialog_childevent_isbase = false;
    mutable bool sonnet__dialog_customevent_isbase = false;
    mutable bool sonnet__dialog_connectnotify_isbase = false;
    mutable bool sonnet__dialog_disconnectnotify_isbase = false;
    mutable bool sonnet__dialog_adjustposition_isbase = false;
    mutable bool sonnet__dialog_updatemicrofocus_isbase = false;
    mutable bool sonnet__dialog_create_isbase = false;
    mutable bool sonnet__dialog_destroy_isbase = false;
    mutable bool sonnet__dialog_focusnextchild_isbase = false;
    mutable bool sonnet__dialog_focuspreviouschild_isbase = false;
    mutable bool sonnet__dialog_sender_isbase = false;
    mutable bool sonnet__dialog_sendersignalindex_isbase = false;
    mutable bool sonnet__dialog_receivers_isbase = false;
    mutable bool sonnet__dialog_issignalconnected_isbase = false;
    mutable bool sonnet__dialog_getdecodedmetricf_isbase = false;

  public:
    VirtualSonnetDialog(Sonnet::BackgroundChecker* checker, QWidget* parent) : Sonnet::Dialog(checker, parent) {};

    ~VirtualSonnetDialog() {
        sonnet__dialog_metacall_callback = nullptr;
        sonnet__dialog_setvisible_callback = nullptr;
        sonnet__dialog_sizehint_callback = nullptr;
        sonnet__dialog_minimumsizehint_callback = nullptr;
        sonnet__dialog_open_callback = nullptr;
        sonnet__dialog_exec_callback = nullptr;
        sonnet__dialog_done_callback = nullptr;
        sonnet__dialog_accept_callback = nullptr;
        sonnet__dialog_reject_callback = nullptr;
        sonnet__dialog_keypressevent_callback = nullptr;
        sonnet__dialog_closeevent_callback = nullptr;
        sonnet__dialog_showevent_callback = nullptr;
        sonnet__dialog_resizeevent_callback = nullptr;
        sonnet__dialog_contextmenuevent_callback = nullptr;
        sonnet__dialog_eventfilter_callback = nullptr;
        sonnet__dialog_devtype_callback = nullptr;
        sonnet__dialog_heightforwidth_callback = nullptr;
        sonnet__dialog_hasheightforwidth_callback = nullptr;
        sonnet__dialog_paintengine_callback = nullptr;
        sonnet__dialog_event_callback = nullptr;
        sonnet__dialog_mousepressevent_callback = nullptr;
        sonnet__dialog_mousereleaseevent_callback = nullptr;
        sonnet__dialog_mousedoubleclickevent_callback = nullptr;
        sonnet__dialog_mousemoveevent_callback = nullptr;
        sonnet__dialog_wheelevent_callback = nullptr;
        sonnet__dialog_keyreleaseevent_callback = nullptr;
        sonnet__dialog_focusinevent_callback = nullptr;
        sonnet__dialog_focusoutevent_callback = nullptr;
        sonnet__dialog_enterevent_callback = nullptr;
        sonnet__dialog_leaveevent_callback = nullptr;
        sonnet__dialog_paintevent_callback = nullptr;
        sonnet__dialog_moveevent_callback = nullptr;
        sonnet__dialog_tabletevent_callback = nullptr;
        sonnet__dialog_actionevent_callback = nullptr;
        sonnet__dialog_dragenterevent_callback = nullptr;
        sonnet__dialog_dragmoveevent_callback = nullptr;
        sonnet__dialog_dragleaveevent_callback = nullptr;
        sonnet__dialog_dropevent_callback = nullptr;
        sonnet__dialog_hideevent_callback = nullptr;
        sonnet__dialog_nativeevent_callback = nullptr;
        sonnet__dialog_changeevent_callback = nullptr;
        sonnet__dialog_metric_callback = nullptr;
        sonnet__dialog_initpainter_callback = nullptr;
        sonnet__dialog_redirected_callback = nullptr;
        sonnet__dialog_sharedpainter_callback = nullptr;
        sonnet__dialog_inputmethodevent_callback = nullptr;
        sonnet__dialog_inputmethodquery_callback = nullptr;
        sonnet__dialog_focusnextprevchild_callback = nullptr;
        sonnet__dialog_timerevent_callback = nullptr;
        sonnet__dialog_childevent_callback = nullptr;
        sonnet__dialog_customevent_callback = nullptr;
        sonnet__dialog_connectnotify_callback = nullptr;
        sonnet__dialog_disconnectnotify_callback = nullptr;
        sonnet__dialog_adjustposition_callback = nullptr;
        sonnet__dialog_updatemicrofocus_callback = nullptr;
        sonnet__dialog_create_callback = nullptr;
        sonnet__dialog_destroy_callback = nullptr;
        sonnet__dialog_focusnextchild_callback = nullptr;
        sonnet__dialog_focuspreviouschild_callback = nullptr;
        sonnet__dialog_sender_callback = nullptr;
        sonnet__dialog_sendersignalindex_callback = nullptr;
        sonnet__dialog_receivers_callback = nullptr;
        sonnet__dialog_issignalconnected_callback = nullptr;
        sonnet__dialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setSonnet__Dialog_Metacall_Callback(Sonnet__Dialog_Metacall_Callback cb) { sonnet__dialog_metacall_callback = cb; }
    inline void setSonnet__Dialog_SetVisible_Callback(Sonnet__Dialog_SetVisible_Callback cb) { sonnet__dialog_setvisible_callback = cb; }
    inline void setSonnet__Dialog_SizeHint_Callback(Sonnet__Dialog_SizeHint_Callback cb) { sonnet__dialog_sizehint_callback = cb; }
    inline void setSonnet__Dialog_MinimumSizeHint_Callback(Sonnet__Dialog_MinimumSizeHint_Callback cb) { sonnet__dialog_minimumsizehint_callback = cb; }
    inline void setSonnet__Dialog_Open_Callback(Sonnet__Dialog_Open_Callback cb) { sonnet__dialog_open_callback = cb; }
    inline void setSonnet__Dialog_Exec_Callback(Sonnet__Dialog_Exec_Callback cb) { sonnet__dialog_exec_callback = cb; }
    inline void setSonnet__Dialog_Done_Callback(Sonnet__Dialog_Done_Callback cb) { sonnet__dialog_done_callback = cb; }
    inline void setSonnet__Dialog_Accept_Callback(Sonnet__Dialog_Accept_Callback cb) { sonnet__dialog_accept_callback = cb; }
    inline void setSonnet__Dialog_Reject_Callback(Sonnet__Dialog_Reject_Callback cb) { sonnet__dialog_reject_callback = cb; }
    inline void setSonnet__Dialog_KeyPressEvent_Callback(Sonnet__Dialog_KeyPressEvent_Callback cb) { sonnet__dialog_keypressevent_callback = cb; }
    inline void setSonnet__Dialog_CloseEvent_Callback(Sonnet__Dialog_CloseEvent_Callback cb) { sonnet__dialog_closeevent_callback = cb; }
    inline void setSonnet__Dialog_ShowEvent_Callback(Sonnet__Dialog_ShowEvent_Callback cb) { sonnet__dialog_showevent_callback = cb; }
    inline void setSonnet__Dialog_ResizeEvent_Callback(Sonnet__Dialog_ResizeEvent_Callback cb) { sonnet__dialog_resizeevent_callback = cb; }
    inline void setSonnet__Dialog_ContextMenuEvent_Callback(Sonnet__Dialog_ContextMenuEvent_Callback cb) { sonnet__dialog_contextmenuevent_callback = cb; }
    inline void setSonnet__Dialog_EventFilter_Callback(Sonnet__Dialog_EventFilter_Callback cb) { sonnet__dialog_eventfilter_callback = cb; }
    inline void setSonnet__Dialog_DevType_Callback(Sonnet__Dialog_DevType_Callback cb) { sonnet__dialog_devtype_callback = cb; }
    inline void setSonnet__Dialog_HeightForWidth_Callback(Sonnet__Dialog_HeightForWidth_Callback cb) { sonnet__dialog_heightforwidth_callback = cb; }
    inline void setSonnet__Dialog_HasHeightForWidth_Callback(Sonnet__Dialog_HasHeightForWidth_Callback cb) { sonnet__dialog_hasheightforwidth_callback = cb; }
    inline void setSonnet__Dialog_PaintEngine_Callback(Sonnet__Dialog_PaintEngine_Callback cb) { sonnet__dialog_paintengine_callback = cb; }
    inline void setSonnet__Dialog_Event_Callback(Sonnet__Dialog_Event_Callback cb) { sonnet__dialog_event_callback = cb; }
    inline void setSonnet__Dialog_MousePressEvent_Callback(Sonnet__Dialog_MousePressEvent_Callback cb) { sonnet__dialog_mousepressevent_callback = cb; }
    inline void setSonnet__Dialog_MouseReleaseEvent_Callback(Sonnet__Dialog_MouseReleaseEvent_Callback cb) { sonnet__dialog_mousereleaseevent_callback = cb; }
    inline void setSonnet__Dialog_MouseDoubleClickEvent_Callback(Sonnet__Dialog_MouseDoubleClickEvent_Callback cb) { sonnet__dialog_mousedoubleclickevent_callback = cb; }
    inline void setSonnet__Dialog_MouseMoveEvent_Callback(Sonnet__Dialog_MouseMoveEvent_Callback cb) { sonnet__dialog_mousemoveevent_callback = cb; }
    inline void setSonnet__Dialog_WheelEvent_Callback(Sonnet__Dialog_WheelEvent_Callback cb) { sonnet__dialog_wheelevent_callback = cb; }
    inline void setSonnet__Dialog_KeyReleaseEvent_Callback(Sonnet__Dialog_KeyReleaseEvent_Callback cb) { sonnet__dialog_keyreleaseevent_callback = cb; }
    inline void setSonnet__Dialog_FocusInEvent_Callback(Sonnet__Dialog_FocusInEvent_Callback cb) { sonnet__dialog_focusinevent_callback = cb; }
    inline void setSonnet__Dialog_FocusOutEvent_Callback(Sonnet__Dialog_FocusOutEvent_Callback cb) { sonnet__dialog_focusoutevent_callback = cb; }
    inline void setSonnet__Dialog_EnterEvent_Callback(Sonnet__Dialog_EnterEvent_Callback cb) { sonnet__dialog_enterevent_callback = cb; }
    inline void setSonnet__Dialog_LeaveEvent_Callback(Sonnet__Dialog_LeaveEvent_Callback cb) { sonnet__dialog_leaveevent_callback = cb; }
    inline void setSonnet__Dialog_PaintEvent_Callback(Sonnet__Dialog_PaintEvent_Callback cb) { sonnet__dialog_paintevent_callback = cb; }
    inline void setSonnet__Dialog_MoveEvent_Callback(Sonnet__Dialog_MoveEvent_Callback cb) { sonnet__dialog_moveevent_callback = cb; }
    inline void setSonnet__Dialog_TabletEvent_Callback(Sonnet__Dialog_TabletEvent_Callback cb) { sonnet__dialog_tabletevent_callback = cb; }
    inline void setSonnet__Dialog_ActionEvent_Callback(Sonnet__Dialog_ActionEvent_Callback cb) { sonnet__dialog_actionevent_callback = cb; }
    inline void setSonnet__Dialog_DragEnterEvent_Callback(Sonnet__Dialog_DragEnterEvent_Callback cb) { sonnet__dialog_dragenterevent_callback = cb; }
    inline void setSonnet__Dialog_DragMoveEvent_Callback(Sonnet__Dialog_DragMoveEvent_Callback cb) { sonnet__dialog_dragmoveevent_callback = cb; }
    inline void setSonnet__Dialog_DragLeaveEvent_Callback(Sonnet__Dialog_DragLeaveEvent_Callback cb) { sonnet__dialog_dragleaveevent_callback = cb; }
    inline void setSonnet__Dialog_DropEvent_Callback(Sonnet__Dialog_DropEvent_Callback cb) { sonnet__dialog_dropevent_callback = cb; }
    inline void setSonnet__Dialog_HideEvent_Callback(Sonnet__Dialog_HideEvent_Callback cb) { sonnet__dialog_hideevent_callback = cb; }
    inline void setSonnet__Dialog_NativeEvent_Callback(Sonnet__Dialog_NativeEvent_Callback cb) { sonnet__dialog_nativeevent_callback = cb; }
    inline void setSonnet__Dialog_ChangeEvent_Callback(Sonnet__Dialog_ChangeEvent_Callback cb) { sonnet__dialog_changeevent_callback = cb; }
    inline void setSonnet__Dialog_Metric_Callback(Sonnet__Dialog_Metric_Callback cb) { sonnet__dialog_metric_callback = cb; }
    inline void setSonnet__Dialog_InitPainter_Callback(Sonnet__Dialog_InitPainter_Callback cb) { sonnet__dialog_initpainter_callback = cb; }
    inline void setSonnet__Dialog_Redirected_Callback(Sonnet__Dialog_Redirected_Callback cb) { sonnet__dialog_redirected_callback = cb; }
    inline void setSonnet__Dialog_SharedPainter_Callback(Sonnet__Dialog_SharedPainter_Callback cb) { sonnet__dialog_sharedpainter_callback = cb; }
    inline void setSonnet__Dialog_InputMethodEvent_Callback(Sonnet__Dialog_InputMethodEvent_Callback cb) { sonnet__dialog_inputmethodevent_callback = cb; }
    inline void setSonnet__Dialog_InputMethodQuery_Callback(Sonnet__Dialog_InputMethodQuery_Callback cb) { sonnet__dialog_inputmethodquery_callback = cb; }
    inline void setSonnet__Dialog_FocusNextPrevChild_Callback(Sonnet__Dialog_FocusNextPrevChild_Callback cb) { sonnet__dialog_focusnextprevchild_callback = cb; }
    inline void setSonnet__Dialog_TimerEvent_Callback(Sonnet__Dialog_TimerEvent_Callback cb) { sonnet__dialog_timerevent_callback = cb; }
    inline void setSonnet__Dialog_ChildEvent_Callback(Sonnet__Dialog_ChildEvent_Callback cb) { sonnet__dialog_childevent_callback = cb; }
    inline void setSonnet__Dialog_CustomEvent_Callback(Sonnet__Dialog_CustomEvent_Callback cb) { sonnet__dialog_customevent_callback = cb; }
    inline void setSonnet__Dialog_ConnectNotify_Callback(Sonnet__Dialog_ConnectNotify_Callback cb) { sonnet__dialog_connectnotify_callback = cb; }
    inline void setSonnet__Dialog_DisconnectNotify_Callback(Sonnet__Dialog_DisconnectNotify_Callback cb) { sonnet__dialog_disconnectnotify_callback = cb; }
    inline void setSonnet__Dialog_AdjustPosition_Callback(Sonnet__Dialog_AdjustPosition_Callback cb) { sonnet__dialog_adjustposition_callback = cb; }
    inline void setSonnet__Dialog_UpdateMicroFocus_Callback(Sonnet__Dialog_UpdateMicroFocus_Callback cb) { sonnet__dialog_updatemicrofocus_callback = cb; }
    inline void setSonnet__Dialog_Create_Callback(Sonnet__Dialog_Create_Callback cb) { sonnet__dialog_create_callback = cb; }
    inline void setSonnet__Dialog_Destroy_Callback(Sonnet__Dialog_Destroy_Callback cb) { sonnet__dialog_destroy_callback = cb; }
    inline void setSonnet__Dialog_FocusNextChild_Callback(Sonnet__Dialog_FocusNextChild_Callback cb) { sonnet__dialog_focusnextchild_callback = cb; }
    inline void setSonnet__Dialog_FocusPreviousChild_Callback(Sonnet__Dialog_FocusPreviousChild_Callback cb) { sonnet__dialog_focuspreviouschild_callback = cb; }
    inline void setSonnet__Dialog_Sender_Callback(Sonnet__Dialog_Sender_Callback cb) { sonnet__dialog_sender_callback = cb; }
    inline void setSonnet__Dialog_SenderSignalIndex_Callback(Sonnet__Dialog_SenderSignalIndex_Callback cb) { sonnet__dialog_sendersignalindex_callback = cb; }
    inline void setSonnet__Dialog_Receivers_Callback(Sonnet__Dialog_Receivers_Callback cb) { sonnet__dialog_receivers_callback = cb; }
    inline void setSonnet__Dialog_IsSignalConnected_Callback(Sonnet__Dialog_IsSignalConnected_Callback cb) { sonnet__dialog_issignalconnected_callback = cb; }
    inline void setSonnet__Dialog_GetDecodedMetricF_Callback(Sonnet__Dialog_GetDecodedMetricF_Callback cb) { sonnet__dialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setSonnet__Dialog_Metacall_IsBase(bool value) const { sonnet__dialog_metacall_isbase = value; }
    inline void setSonnet__Dialog_SetVisible_IsBase(bool value) const { sonnet__dialog_setvisible_isbase = value; }
    inline void setSonnet__Dialog_SizeHint_IsBase(bool value) const { sonnet__dialog_sizehint_isbase = value; }
    inline void setSonnet__Dialog_MinimumSizeHint_IsBase(bool value) const { sonnet__dialog_minimumsizehint_isbase = value; }
    inline void setSonnet__Dialog_Open_IsBase(bool value) const { sonnet__dialog_open_isbase = value; }
    inline void setSonnet__Dialog_Exec_IsBase(bool value) const { sonnet__dialog_exec_isbase = value; }
    inline void setSonnet__Dialog_Done_IsBase(bool value) const { sonnet__dialog_done_isbase = value; }
    inline void setSonnet__Dialog_Accept_IsBase(bool value) const { sonnet__dialog_accept_isbase = value; }
    inline void setSonnet__Dialog_Reject_IsBase(bool value) const { sonnet__dialog_reject_isbase = value; }
    inline void setSonnet__Dialog_KeyPressEvent_IsBase(bool value) const { sonnet__dialog_keypressevent_isbase = value; }
    inline void setSonnet__Dialog_CloseEvent_IsBase(bool value) const { sonnet__dialog_closeevent_isbase = value; }
    inline void setSonnet__Dialog_ShowEvent_IsBase(bool value) const { sonnet__dialog_showevent_isbase = value; }
    inline void setSonnet__Dialog_ResizeEvent_IsBase(bool value) const { sonnet__dialog_resizeevent_isbase = value; }
    inline void setSonnet__Dialog_ContextMenuEvent_IsBase(bool value) const { sonnet__dialog_contextmenuevent_isbase = value; }
    inline void setSonnet__Dialog_EventFilter_IsBase(bool value) const { sonnet__dialog_eventfilter_isbase = value; }
    inline void setSonnet__Dialog_DevType_IsBase(bool value) const { sonnet__dialog_devtype_isbase = value; }
    inline void setSonnet__Dialog_HeightForWidth_IsBase(bool value) const { sonnet__dialog_heightforwidth_isbase = value; }
    inline void setSonnet__Dialog_HasHeightForWidth_IsBase(bool value) const { sonnet__dialog_hasheightforwidth_isbase = value; }
    inline void setSonnet__Dialog_PaintEngine_IsBase(bool value) const { sonnet__dialog_paintengine_isbase = value; }
    inline void setSonnet__Dialog_Event_IsBase(bool value) const { sonnet__dialog_event_isbase = value; }
    inline void setSonnet__Dialog_MousePressEvent_IsBase(bool value) const { sonnet__dialog_mousepressevent_isbase = value; }
    inline void setSonnet__Dialog_MouseReleaseEvent_IsBase(bool value) const { sonnet__dialog_mousereleaseevent_isbase = value; }
    inline void setSonnet__Dialog_MouseDoubleClickEvent_IsBase(bool value) const { sonnet__dialog_mousedoubleclickevent_isbase = value; }
    inline void setSonnet__Dialog_MouseMoveEvent_IsBase(bool value) const { sonnet__dialog_mousemoveevent_isbase = value; }
    inline void setSonnet__Dialog_WheelEvent_IsBase(bool value) const { sonnet__dialog_wheelevent_isbase = value; }
    inline void setSonnet__Dialog_KeyReleaseEvent_IsBase(bool value) const { sonnet__dialog_keyreleaseevent_isbase = value; }
    inline void setSonnet__Dialog_FocusInEvent_IsBase(bool value) const { sonnet__dialog_focusinevent_isbase = value; }
    inline void setSonnet__Dialog_FocusOutEvent_IsBase(bool value) const { sonnet__dialog_focusoutevent_isbase = value; }
    inline void setSonnet__Dialog_EnterEvent_IsBase(bool value) const { sonnet__dialog_enterevent_isbase = value; }
    inline void setSonnet__Dialog_LeaveEvent_IsBase(bool value) const { sonnet__dialog_leaveevent_isbase = value; }
    inline void setSonnet__Dialog_PaintEvent_IsBase(bool value) const { sonnet__dialog_paintevent_isbase = value; }
    inline void setSonnet__Dialog_MoveEvent_IsBase(bool value) const { sonnet__dialog_moveevent_isbase = value; }
    inline void setSonnet__Dialog_TabletEvent_IsBase(bool value) const { sonnet__dialog_tabletevent_isbase = value; }
    inline void setSonnet__Dialog_ActionEvent_IsBase(bool value) const { sonnet__dialog_actionevent_isbase = value; }
    inline void setSonnet__Dialog_DragEnterEvent_IsBase(bool value) const { sonnet__dialog_dragenterevent_isbase = value; }
    inline void setSonnet__Dialog_DragMoveEvent_IsBase(bool value) const { sonnet__dialog_dragmoveevent_isbase = value; }
    inline void setSonnet__Dialog_DragLeaveEvent_IsBase(bool value) const { sonnet__dialog_dragleaveevent_isbase = value; }
    inline void setSonnet__Dialog_DropEvent_IsBase(bool value) const { sonnet__dialog_dropevent_isbase = value; }
    inline void setSonnet__Dialog_HideEvent_IsBase(bool value) const { sonnet__dialog_hideevent_isbase = value; }
    inline void setSonnet__Dialog_NativeEvent_IsBase(bool value) const { sonnet__dialog_nativeevent_isbase = value; }
    inline void setSonnet__Dialog_ChangeEvent_IsBase(bool value) const { sonnet__dialog_changeevent_isbase = value; }
    inline void setSonnet__Dialog_Metric_IsBase(bool value) const { sonnet__dialog_metric_isbase = value; }
    inline void setSonnet__Dialog_InitPainter_IsBase(bool value) const { sonnet__dialog_initpainter_isbase = value; }
    inline void setSonnet__Dialog_Redirected_IsBase(bool value) const { sonnet__dialog_redirected_isbase = value; }
    inline void setSonnet__Dialog_SharedPainter_IsBase(bool value) const { sonnet__dialog_sharedpainter_isbase = value; }
    inline void setSonnet__Dialog_InputMethodEvent_IsBase(bool value) const { sonnet__dialog_inputmethodevent_isbase = value; }
    inline void setSonnet__Dialog_InputMethodQuery_IsBase(bool value) const { sonnet__dialog_inputmethodquery_isbase = value; }
    inline void setSonnet__Dialog_FocusNextPrevChild_IsBase(bool value) const { sonnet__dialog_focusnextprevchild_isbase = value; }
    inline void setSonnet__Dialog_TimerEvent_IsBase(bool value) const { sonnet__dialog_timerevent_isbase = value; }
    inline void setSonnet__Dialog_ChildEvent_IsBase(bool value) const { sonnet__dialog_childevent_isbase = value; }
    inline void setSonnet__Dialog_CustomEvent_IsBase(bool value) const { sonnet__dialog_customevent_isbase = value; }
    inline void setSonnet__Dialog_ConnectNotify_IsBase(bool value) const { sonnet__dialog_connectnotify_isbase = value; }
    inline void setSonnet__Dialog_DisconnectNotify_IsBase(bool value) const { sonnet__dialog_disconnectnotify_isbase = value; }
    inline void setSonnet__Dialog_AdjustPosition_IsBase(bool value) const { sonnet__dialog_adjustposition_isbase = value; }
    inline void setSonnet__Dialog_UpdateMicroFocus_IsBase(bool value) const { sonnet__dialog_updatemicrofocus_isbase = value; }
    inline void setSonnet__Dialog_Create_IsBase(bool value) const { sonnet__dialog_create_isbase = value; }
    inline void setSonnet__Dialog_Destroy_IsBase(bool value) const { sonnet__dialog_destroy_isbase = value; }
    inline void setSonnet__Dialog_FocusNextChild_IsBase(bool value) const { sonnet__dialog_focusnextchild_isbase = value; }
    inline void setSonnet__Dialog_FocusPreviousChild_IsBase(bool value) const { sonnet__dialog_focuspreviouschild_isbase = value; }
    inline void setSonnet__Dialog_Sender_IsBase(bool value) const { sonnet__dialog_sender_isbase = value; }
    inline void setSonnet__Dialog_SenderSignalIndex_IsBase(bool value) const { sonnet__dialog_sendersignalindex_isbase = value; }
    inline void setSonnet__Dialog_Receivers_IsBase(bool value) const { sonnet__dialog_receivers_isbase = value; }
    inline void setSonnet__Dialog_IsSignalConnected_IsBase(bool value) const { sonnet__dialog_issignalconnected_isbase = value; }
    inline void setSonnet__Dialog_GetDecodedMetricF_IsBase(bool value) const { sonnet__dialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (sonnet__dialog_metacall_isbase) {
            sonnet__dialog_metacall_isbase = false;
            return Sonnet__Dialog::qt_metacall(param1, param2, param3);
        } else if (sonnet__dialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = sonnet__dialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__Dialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (sonnet__dialog_setvisible_isbase) {
            sonnet__dialog_setvisible_isbase = false;
            Sonnet__Dialog::setVisible(visible);
        } else if (sonnet__dialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            sonnet__dialog_setvisible_callback(this, cbval1);
        } else {
            Sonnet__Dialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (sonnet__dialog_sizehint_isbase) {
            sonnet__dialog_sizehint_isbase = false;
            return Sonnet__Dialog::sizeHint();
        } else if (sonnet__dialog_sizehint_callback != nullptr) {
            QSize* callback_ret = sonnet__dialog_sizehint_callback();
            return *callback_ret;
        } else {
            return Sonnet__Dialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (sonnet__dialog_minimumsizehint_isbase) {
            sonnet__dialog_minimumsizehint_isbase = false;
            return Sonnet__Dialog::minimumSizeHint();
        } else if (sonnet__dialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = sonnet__dialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return Sonnet__Dialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (sonnet__dialog_open_isbase) {
            sonnet__dialog_open_isbase = false;
            Sonnet__Dialog::open();
        } else if (sonnet__dialog_open_callback != nullptr) {
            sonnet__dialog_open_callback();
        } else {
            Sonnet__Dialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (sonnet__dialog_exec_isbase) {
            sonnet__dialog_exec_isbase = false;
            return Sonnet__Dialog::exec();
        } else if (sonnet__dialog_exec_callback != nullptr) {
            int callback_ret = sonnet__dialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__Dialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (sonnet__dialog_done_isbase) {
            sonnet__dialog_done_isbase = false;
            Sonnet__Dialog::done(param1);
        } else if (sonnet__dialog_done_callback != nullptr) {
            int cbval1 = param1;

            sonnet__dialog_done_callback(this, cbval1);
        } else {
            Sonnet__Dialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (sonnet__dialog_accept_isbase) {
            sonnet__dialog_accept_isbase = false;
            Sonnet__Dialog::accept();
        } else if (sonnet__dialog_accept_callback != nullptr) {
            sonnet__dialog_accept_callback();
        } else {
            Sonnet__Dialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (sonnet__dialog_reject_isbase) {
            sonnet__dialog_reject_isbase = false;
            Sonnet__Dialog::reject();
        } else if (sonnet__dialog_reject_callback != nullptr) {
            sonnet__dialog_reject_callback();
        } else {
            Sonnet__Dialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (sonnet__dialog_keypressevent_isbase) {
            sonnet__dialog_keypressevent_isbase = false;
            Sonnet__Dialog::keyPressEvent(param1);
        } else if (sonnet__dialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            sonnet__dialog_keypressevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (sonnet__dialog_closeevent_isbase) {
            sonnet__dialog_closeevent_isbase = false;
            Sonnet__Dialog::closeEvent(param1);
        } else if (sonnet__dialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            sonnet__dialog_closeevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (sonnet__dialog_showevent_isbase) {
            sonnet__dialog_showevent_isbase = false;
            Sonnet__Dialog::showEvent(param1);
        } else if (sonnet__dialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            sonnet__dialog_showevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (sonnet__dialog_resizeevent_isbase) {
            sonnet__dialog_resizeevent_isbase = false;
            Sonnet__Dialog::resizeEvent(param1);
        } else if (sonnet__dialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            sonnet__dialog_resizeevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (sonnet__dialog_contextmenuevent_isbase) {
            sonnet__dialog_contextmenuevent_isbase = false;
            Sonnet__Dialog::contextMenuEvent(param1);
        } else if (sonnet__dialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            sonnet__dialog_contextmenuevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (sonnet__dialog_eventfilter_isbase) {
            sonnet__dialog_eventfilter_isbase = false;
            return Sonnet__Dialog::eventFilter(param1, param2);
        } else if (sonnet__dialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = sonnet__dialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return Sonnet__Dialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (sonnet__dialog_devtype_isbase) {
            sonnet__dialog_devtype_isbase = false;
            return Sonnet__Dialog::devType();
        } else if (sonnet__dialog_devtype_callback != nullptr) {
            int callback_ret = sonnet__dialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__Dialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (sonnet__dialog_heightforwidth_isbase) {
            sonnet__dialog_heightforwidth_isbase = false;
            return Sonnet__Dialog::heightForWidth(param1);
        } else if (sonnet__dialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = sonnet__dialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__Dialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (sonnet__dialog_hasheightforwidth_isbase) {
            sonnet__dialog_hasheightforwidth_isbase = false;
            return Sonnet__Dialog::hasHeightForWidth();
        } else if (sonnet__dialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = sonnet__dialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return Sonnet__Dialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (sonnet__dialog_paintengine_isbase) {
            sonnet__dialog_paintengine_isbase = false;
            return Sonnet__Dialog::paintEngine();
        } else if (sonnet__dialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = sonnet__dialog_paintengine_callback();
            return callback_ret;
        } else {
            return Sonnet__Dialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (sonnet__dialog_event_isbase) {
            sonnet__dialog_event_isbase = false;
            return Sonnet__Dialog::event(event);
        } else if (sonnet__dialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = sonnet__dialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__Dialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (sonnet__dialog_mousepressevent_isbase) {
            sonnet__dialog_mousepressevent_isbase = false;
            Sonnet__Dialog::mousePressEvent(event);
        } else if (sonnet__dialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            sonnet__dialog_mousepressevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (sonnet__dialog_mousereleaseevent_isbase) {
            sonnet__dialog_mousereleaseevent_isbase = false;
            Sonnet__Dialog::mouseReleaseEvent(event);
        } else if (sonnet__dialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            sonnet__dialog_mousereleaseevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (sonnet__dialog_mousedoubleclickevent_isbase) {
            sonnet__dialog_mousedoubleclickevent_isbase = false;
            Sonnet__Dialog::mouseDoubleClickEvent(event);
        } else if (sonnet__dialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            sonnet__dialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (sonnet__dialog_mousemoveevent_isbase) {
            sonnet__dialog_mousemoveevent_isbase = false;
            Sonnet__Dialog::mouseMoveEvent(event);
        } else if (sonnet__dialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            sonnet__dialog_mousemoveevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (sonnet__dialog_wheelevent_isbase) {
            sonnet__dialog_wheelevent_isbase = false;
            Sonnet__Dialog::wheelEvent(event);
        } else if (sonnet__dialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            sonnet__dialog_wheelevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (sonnet__dialog_keyreleaseevent_isbase) {
            sonnet__dialog_keyreleaseevent_isbase = false;
            Sonnet__Dialog::keyReleaseEvent(event);
        } else if (sonnet__dialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            sonnet__dialog_keyreleaseevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (sonnet__dialog_focusinevent_isbase) {
            sonnet__dialog_focusinevent_isbase = false;
            Sonnet__Dialog::focusInEvent(event);
        } else if (sonnet__dialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            sonnet__dialog_focusinevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (sonnet__dialog_focusoutevent_isbase) {
            sonnet__dialog_focusoutevent_isbase = false;
            Sonnet__Dialog::focusOutEvent(event);
        } else if (sonnet__dialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            sonnet__dialog_focusoutevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (sonnet__dialog_enterevent_isbase) {
            sonnet__dialog_enterevent_isbase = false;
            Sonnet__Dialog::enterEvent(event);
        } else if (sonnet__dialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            sonnet__dialog_enterevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (sonnet__dialog_leaveevent_isbase) {
            sonnet__dialog_leaveevent_isbase = false;
            Sonnet__Dialog::leaveEvent(event);
        } else if (sonnet__dialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            sonnet__dialog_leaveevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (sonnet__dialog_paintevent_isbase) {
            sonnet__dialog_paintevent_isbase = false;
            Sonnet__Dialog::paintEvent(event);
        } else if (sonnet__dialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            sonnet__dialog_paintevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (sonnet__dialog_moveevent_isbase) {
            sonnet__dialog_moveevent_isbase = false;
            Sonnet__Dialog::moveEvent(event);
        } else if (sonnet__dialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            sonnet__dialog_moveevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (sonnet__dialog_tabletevent_isbase) {
            sonnet__dialog_tabletevent_isbase = false;
            Sonnet__Dialog::tabletEvent(event);
        } else if (sonnet__dialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            sonnet__dialog_tabletevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (sonnet__dialog_actionevent_isbase) {
            sonnet__dialog_actionevent_isbase = false;
            Sonnet__Dialog::actionEvent(event);
        } else if (sonnet__dialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            sonnet__dialog_actionevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (sonnet__dialog_dragenterevent_isbase) {
            sonnet__dialog_dragenterevent_isbase = false;
            Sonnet__Dialog::dragEnterEvent(event);
        } else if (sonnet__dialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            sonnet__dialog_dragenterevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (sonnet__dialog_dragmoveevent_isbase) {
            sonnet__dialog_dragmoveevent_isbase = false;
            Sonnet__Dialog::dragMoveEvent(event);
        } else if (sonnet__dialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            sonnet__dialog_dragmoveevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (sonnet__dialog_dragleaveevent_isbase) {
            sonnet__dialog_dragleaveevent_isbase = false;
            Sonnet__Dialog::dragLeaveEvent(event);
        } else if (sonnet__dialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            sonnet__dialog_dragleaveevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (sonnet__dialog_dropevent_isbase) {
            sonnet__dialog_dropevent_isbase = false;
            Sonnet__Dialog::dropEvent(event);
        } else if (sonnet__dialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            sonnet__dialog_dropevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (sonnet__dialog_hideevent_isbase) {
            sonnet__dialog_hideevent_isbase = false;
            Sonnet__Dialog::hideEvent(event);
        } else if (sonnet__dialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            sonnet__dialog_hideevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (sonnet__dialog_nativeevent_isbase) {
            sonnet__dialog_nativeevent_isbase = false;
            return Sonnet__Dialog::nativeEvent(eventType, message, result);
        } else if (sonnet__dialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = sonnet__dialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return Sonnet__Dialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (sonnet__dialog_changeevent_isbase) {
            sonnet__dialog_changeevent_isbase = false;
            Sonnet__Dialog::changeEvent(param1);
        } else if (sonnet__dialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            sonnet__dialog_changeevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (sonnet__dialog_metric_isbase) {
            sonnet__dialog_metric_isbase = false;
            return Sonnet__Dialog::metric(param1);
        } else if (sonnet__dialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = sonnet__dialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__Dialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (sonnet__dialog_initpainter_isbase) {
            sonnet__dialog_initpainter_isbase = false;
            Sonnet__Dialog::initPainter(painter);
        } else if (sonnet__dialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            sonnet__dialog_initpainter_callback(this, cbval1);
        } else {
            Sonnet__Dialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (sonnet__dialog_redirected_isbase) {
            sonnet__dialog_redirected_isbase = false;
            return Sonnet__Dialog::redirected(offset);
        } else if (sonnet__dialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = sonnet__dialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__Dialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (sonnet__dialog_sharedpainter_isbase) {
            sonnet__dialog_sharedpainter_isbase = false;
            return Sonnet__Dialog::sharedPainter();
        } else if (sonnet__dialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = sonnet__dialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return Sonnet__Dialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (sonnet__dialog_inputmethodevent_isbase) {
            sonnet__dialog_inputmethodevent_isbase = false;
            Sonnet__Dialog::inputMethodEvent(param1);
        } else if (sonnet__dialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            sonnet__dialog_inputmethodevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (sonnet__dialog_inputmethodquery_isbase) {
            sonnet__dialog_inputmethodquery_isbase = false;
            return Sonnet__Dialog::inputMethodQuery(param1);
        } else if (sonnet__dialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = sonnet__dialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return Sonnet__Dialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (sonnet__dialog_focusnextprevchild_isbase) {
            sonnet__dialog_focusnextprevchild_isbase = false;
            return Sonnet__Dialog::focusNextPrevChild(next);
        } else if (sonnet__dialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = sonnet__dialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__Dialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (sonnet__dialog_timerevent_isbase) {
            sonnet__dialog_timerevent_isbase = false;
            Sonnet__Dialog::timerEvent(event);
        } else if (sonnet__dialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            sonnet__dialog_timerevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (sonnet__dialog_childevent_isbase) {
            sonnet__dialog_childevent_isbase = false;
            Sonnet__Dialog::childEvent(event);
        } else if (sonnet__dialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            sonnet__dialog_childevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (sonnet__dialog_customevent_isbase) {
            sonnet__dialog_customevent_isbase = false;
            Sonnet__Dialog::customEvent(event);
        } else if (sonnet__dialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            sonnet__dialog_customevent_callback(this, cbval1);
        } else {
            Sonnet__Dialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (sonnet__dialog_connectnotify_isbase) {
            sonnet__dialog_connectnotify_isbase = false;
            Sonnet__Dialog::connectNotify(signal);
        } else if (sonnet__dialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            sonnet__dialog_connectnotify_callback(this, cbval1);
        } else {
            Sonnet__Dialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (sonnet__dialog_disconnectnotify_isbase) {
            sonnet__dialog_disconnectnotify_isbase = false;
            Sonnet__Dialog::disconnectNotify(signal);
        } else if (sonnet__dialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            sonnet__dialog_disconnectnotify_callback(this, cbval1);
        } else {
            Sonnet__Dialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (sonnet__dialog_adjustposition_isbase) {
            sonnet__dialog_adjustposition_isbase = false;
            Sonnet__Dialog::adjustPosition(param1);
        } else if (sonnet__dialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            sonnet__dialog_adjustposition_callback(this, cbval1);
        } else {
            Sonnet__Dialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (sonnet__dialog_updatemicrofocus_isbase) {
            sonnet__dialog_updatemicrofocus_isbase = false;
            Sonnet__Dialog::updateMicroFocus();
        } else if (sonnet__dialog_updatemicrofocus_callback != nullptr) {
            sonnet__dialog_updatemicrofocus_callback();
        } else {
            Sonnet__Dialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (sonnet__dialog_create_isbase) {
            sonnet__dialog_create_isbase = false;
            Sonnet__Dialog::create();
        } else if (sonnet__dialog_create_callback != nullptr) {
            sonnet__dialog_create_callback();
        } else {
            Sonnet__Dialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (sonnet__dialog_destroy_isbase) {
            sonnet__dialog_destroy_isbase = false;
            Sonnet__Dialog::destroy();
        } else if (sonnet__dialog_destroy_callback != nullptr) {
            sonnet__dialog_destroy_callback();
        } else {
            Sonnet__Dialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (sonnet__dialog_focusnextchild_isbase) {
            sonnet__dialog_focusnextchild_isbase = false;
            return Sonnet__Dialog::focusNextChild();
        } else if (sonnet__dialog_focusnextchild_callback != nullptr) {
            bool callback_ret = sonnet__dialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return Sonnet__Dialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (sonnet__dialog_focuspreviouschild_isbase) {
            sonnet__dialog_focuspreviouschild_isbase = false;
            return Sonnet__Dialog::focusPreviousChild();
        } else if (sonnet__dialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = sonnet__dialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return Sonnet__Dialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (sonnet__dialog_sender_isbase) {
            sonnet__dialog_sender_isbase = false;
            return Sonnet__Dialog::sender();
        } else if (sonnet__dialog_sender_callback != nullptr) {
            QObject* callback_ret = sonnet__dialog_sender_callback();
            return callback_ret;
        } else {
            return Sonnet__Dialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (sonnet__dialog_sendersignalindex_isbase) {
            sonnet__dialog_sendersignalindex_isbase = false;
            return Sonnet__Dialog::senderSignalIndex();
        } else if (sonnet__dialog_sendersignalindex_callback != nullptr) {
            int callback_ret = sonnet__dialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__Dialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (sonnet__dialog_receivers_isbase) {
            sonnet__dialog_receivers_isbase = false;
            return Sonnet__Dialog::receivers(signal);
        } else if (sonnet__dialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = sonnet__dialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__Dialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (sonnet__dialog_issignalconnected_isbase) {
            sonnet__dialog_issignalconnected_isbase = false;
            return Sonnet__Dialog::isSignalConnected(signal);
        } else if (sonnet__dialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = sonnet__dialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__Dialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (sonnet__dialog_getdecodedmetricf_isbase) {
            sonnet__dialog_getdecodedmetricf_isbase = false;
            return Sonnet__Dialog::getDecodedMetricF(metricA, metricB);
        } else if (sonnet__dialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = sonnet__dialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return Sonnet__Dialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void Sonnet__Dialog_KeyPressEvent(Sonnet::Dialog* self, QKeyEvent* param1);
    friend void Sonnet__Dialog_QBaseKeyPressEvent(Sonnet::Dialog* self, QKeyEvent* param1);
    friend void Sonnet__Dialog_CloseEvent(Sonnet::Dialog* self, QCloseEvent* param1);
    friend void Sonnet__Dialog_QBaseCloseEvent(Sonnet::Dialog* self, QCloseEvent* param1);
    friend void Sonnet__Dialog_ShowEvent(Sonnet::Dialog* self, QShowEvent* param1);
    friend void Sonnet__Dialog_QBaseShowEvent(Sonnet::Dialog* self, QShowEvent* param1);
    friend void Sonnet__Dialog_ResizeEvent(Sonnet::Dialog* self, QResizeEvent* param1);
    friend void Sonnet__Dialog_QBaseResizeEvent(Sonnet::Dialog* self, QResizeEvent* param1);
    friend void Sonnet__Dialog_ContextMenuEvent(Sonnet::Dialog* self, QContextMenuEvent* param1);
    friend void Sonnet__Dialog_QBaseContextMenuEvent(Sonnet::Dialog* self, QContextMenuEvent* param1);
    friend bool Sonnet__Dialog_EventFilter(Sonnet::Dialog* self, QObject* param1, QEvent* param2);
    friend bool Sonnet__Dialog_QBaseEventFilter(Sonnet::Dialog* self, QObject* param1, QEvent* param2);
    friend bool Sonnet__Dialog_Event(Sonnet::Dialog* self, QEvent* event);
    friend bool Sonnet__Dialog_QBaseEvent(Sonnet::Dialog* self, QEvent* event);
    friend void Sonnet__Dialog_MousePressEvent(Sonnet::Dialog* self, QMouseEvent* event);
    friend void Sonnet__Dialog_QBaseMousePressEvent(Sonnet::Dialog* self, QMouseEvent* event);
    friend void Sonnet__Dialog_MouseReleaseEvent(Sonnet::Dialog* self, QMouseEvent* event);
    friend void Sonnet__Dialog_QBaseMouseReleaseEvent(Sonnet::Dialog* self, QMouseEvent* event);
    friend void Sonnet__Dialog_MouseDoubleClickEvent(Sonnet::Dialog* self, QMouseEvent* event);
    friend void Sonnet__Dialog_QBaseMouseDoubleClickEvent(Sonnet::Dialog* self, QMouseEvent* event);
    friend void Sonnet__Dialog_MouseMoveEvent(Sonnet::Dialog* self, QMouseEvent* event);
    friend void Sonnet__Dialog_QBaseMouseMoveEvent(Sonnet::Dialog* self, QMouseEvent* event);
    friend void Sonnet__Dialog_WheelEvent(Sonnet::Dialog* self, QWheelEvent* event);
    friend void Sonnet__Dialog_QBaseWheelEvent(Sonnet::Dialog* self, QWheelEvent* event);
    friend void Sonnet__Dialog_KeyReleaseEvent(Sonnet::Dialog* self, QKeyEvent* event);
    friend void Sonnet__Dialog_QBaseKeyReleaseEvent(Sonnet::Dialog* self, QKeyEvent* event);
    friend void Sonnet__Dialog_FocusInEvent(Sonnet::Dialog* self, QFocusEvent* event);
    friend void Sonnet__Dialog_QBaseFocusInEvent(Sonnet::Dialog* self, QFocusEvent* event);
    friend void Sonnet__Dialog_FocusOutEvent(Sonnet::Dialog* self, QFocusEvent* event);
    friend void Sonnet__Dialog_QBaseFocusOutEvent(Sonnet::Dialog* self, QFocusEvent* event);
    friend void Sonnet__Dialog_EnterEvent(Sonnet::Dialog* self, QEnterEvent* event);
    friend void Sonnet__Dialog_QBaseEnterEvent(Sonnet::Dialog* self, QEnterEvent* event);
    friend void Sonnet__Dialog_LeaveEvent(Sonnet::Dialog* self, QEvent* event);
    friend void Sonnet__Dialog_QBaseLeaveEvent(Sonnet::Dialog* self, QEvent* event);
    friend void Sonnet__Dialog_PaintEvent(Sonnet::Dialog* self, QPaintEvent* event);
    friend void Sonnet__Dialog_QBasePaintEvent(Sonnet::Dialog* self, QPaintEvent* event);
    friend void Sonnet__Dialog_MoveEvent(Sonnet::Dialog* self, QMoveEvent* event);
    friend void Sonnet__Dialog_QBaseMoveEvent(Sonnet::Dialog* self, QMoveEvent* event);
    friend void Sonnet__Dialog_TabletEvent(Sonnet::Dialog* self, QTabletEvent* event);
    friend void Sonnet__Dialog_QBaseTabletEvent(Sonnet::Dialog* self, QTabletEvent* event);
    friend void Sonnet__Dialog_ActionEvent(Sonnet::Dialog* self, QActionEvent* event);
    friend void Sonnet__Dialog_QBaseActionEvent(Sonnet::Dialog* self, QActionEvent* event);
    friend void Sonnet__Dialog_DragEnterEvent(Sonnet::Dialog* self, QDragEnterEvent* event);
    friend void Sonnet__Dialog_QBaseDragEnterEvent(Sonnet::Dialog* self, QDragEnterEvent* event);
    friend void Sonnet__Dialog_DragMoveEvent(Sonnet::Dialog* self, QDragMoveEvent* event);
    friend void Sonnet__Dialog_QBaseDragMoveEvent(Sonnet::Dialog* self, QDragMoveEvent* event);
    friend void Sonnet__Dialog_DragLeaveEvent(Sonnet::Dialog* self, QDragLeaveEvent* event);
    friend void Sonnet__Dialog_QBaseDragLeaveEvent(Sonnet::Dialog* self, QDragLeaveEvent* event);
    friend void Sonnet__Dialog_DropEvent(Sonnet::Dialog* self, QDropEvent* event);
    friend void Sonnet__Dialog_QBaseDropEvent(Sonnet::Dialog* self, QDropEvent* event);
    friend void Sonnet__Dialog_HideEvent(Sonnet::Dialog* self, QHideEvent* event);
    friend void Sonnet__Dialog_QBaseHideEvent(Sonnet::Dialog* self, QHideEvent* event);
    friend bool Sonnet__Dialog_NativeEvent(Sonnet::Dialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool Sonnet__Dialog_QBaseNativeEvent(Sonnet::Dialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void Sonnet__Dialog_ChangeEvent(Sonnet::Dialog* self, QEvent* param1);
    friend void Sonnet__Dialog_QBaseChangeEvent(Sonnet::Dialog* self, QEvent* param1);
    friend int Sonnet__Dialog_Metric(const Sonnet::Dialog* self, int param1);
    friend int Sonnet__Dialog_QBaseMetric(const Sonnet::Dialog* self, int param1);
    friend void Sonnet__Dialog_InitPainter(const Sonnet::Dialog* self, QPainter* painter);
    friend void Sonnet__Dialog_QBaseInitPainter(const Sonnet::Dialog* self, QPainter* painter);
    friend QPaintDevice* Sonnet__Dialog_Redirected(const Sonnet::Dialog* self, QPoint* offset);
    friend QPaintDevice* Sonnet__Dialog_QBaseRedirected(const Sonnet::Dialog* self, QPoint* offset);
    friend QPainter* Sonnet__Dialog_SharedPainter(const Sonnet::Dialog* self);
    friend QPainter* Sonnet__Dialog_QBaseSharedPainter(const Sonnet::Dialog* self);
    friend void Sonnet__Dialog_InputMethodEvent(Sonnet::Dialog* self, QInputMethodEvent* param1);
    friend void Sonnet__Dialog_QBaseInputMethodEvent(Sonnet::Dialog* self, QInputMethodEvent* param1);
    friend bool Sonnet__Dialog_FocusNextPrevChild(Sonnet::Dialog* self, bool next);
    friend bool Sonnet__Dialog_QBaseFocusNextPrevChild(Sonnet::Dialog* self, bool next);
    friend void Sonnet__Dialog_TimerEvent(Sonnet::Dialog* self, QTimerEvent* event);
    friend void Sonnet__Dialog_QBaseTimerEvent(Sonnet::Dialog* self, QTimerEvent* event);
    friend void Sonnet__Dialog_ChildEvent(Sonnet::Dialog* self, QChildEvent* event);
    friend void Sonnet__Dialog_QBaseChildEvent(Sonnet::Dialog* self, QChildEvent* event);
    friend void Sonnet__Dialog_CustomEvent(Sonnet::Dialog* self, QEvent* event);
    friend void Sonnet__Dialog_QBaseCustomEvent(Sonnet::Dialog* self, QEvent* event);
    friend void Sonnet__Dialog_ConnectNotify(Sonnet::Dialog* self, const QMetaMethod* signal);
    friend void Sonnet__Dialog_QBaseConnectNotify(Sonnet::Dialog* self, const QMetaMethod* signal);
    friend void Sonnet__Dialog_DisconnectNotify(Sonnet::Dialog* self, const QMetaMethod* signal);
    friend void Sonnet__Dialog_QBaseDisconnectNotify(Sonnet::Dialog* self, const QMetaMethod* signal);
    friend void Sonnet__Dialog_AdjustPosition(Sonnet::Dialog* self, QWidget* param1);
    friend void Sonnet__Dialog_QBaseAdjustPosition(Sonnet::Dialog* self, QWidget* param1);
    friend void Sonnet__Dialog_UpdateMicroFocus(Sonnet::Dialog* self);
    friend void Sonnet__Dialog_QBaseUpdateMicroFocus(Sonnet::Dialog* self);
    friend void Sonnet__Dialog_Create(Sonnet::Dialog* self);
    friend void Sonnet__Dialog_QBaseCreate(Sonnet::Dialog* self);
    friend void Sonnet__Dialog_Destroy(Sonnet::Dialog* self);
    friend void Sonnet__Dialog_QBaseDestroy(Sonnet::Dialog* self);
    friend bool Sonnet__Dialog_FocusNextChild(Sonnet::Dialog* self);
    friend bool Sonnet__Dialog_QBaseFocusNextChild(Sonnet::Dialog* self);
    friend bool Sonnet__Dialog_FocusPreviousChild(Sonnet::Dialog* self);
    friend bool Sonnet__Dialog_QBaseFocusPreviousChild(Sonnet::Dialog* self);
    friend QObject* Sonnet__Dialog_Sender(const Sonnet::Dialog* self);
    friend QObject* Sonnet__Dialog_QBaseSender(const Sonnet::Dialog* self);
    friend int Sonnet__Dialog_SenderSignalIndex(const Sonnet::Dialog* self);
    friend int Sonnet__Dialog_QBaseSenderSignalIndex(const Sonnet::Dialog* self);
    friend int Sonnet__Dialog_Receivers(const Sonnet::Dialog* self, const char* signal);
    friend int Sonnet__Dialog_QBaseReceivers(const Sonnet::Dialog* self, const char* signal);
    friend bool Sonnet__Dialog_IsSignalConnected(const Sonnet::Dialog* self, const QMetaMethod* signal);
    friend bool Sonnet__Dialog_QBaseIsSignalConnected(const Sonnet::Dialog* self, const QMetaMethod* signal);
    friend double Sonnet__Dialog_GetDecodedMetricF(const Sonnet::Dialog* self, int metricA, int metricB);
    friend double Sonnet__Dialog_QBaseGetDecodedMetricF(const Sonnet::Dialog* self, int metricA, int metricB);
};

#endif
