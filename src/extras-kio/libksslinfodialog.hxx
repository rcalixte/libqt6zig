#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKSSLINFODIALOG_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKSSLINFODIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSslInfoDialog so that we can call protected methods
class VirtualKSslInfoDialog final : public KSslInfoDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKSslInfoDialog = true;

    // Virtual class public types (including callbacks)
    using KSslInfoDialog_Metacall_Callback = int (*)(KSslInfoDialog*, int, int, void**);
    using KSslInfoDialog_SetVisible_Callback = void (*)(KSslInfoDialog*, bool);
    using KSslInfoDialog_SizeHint_Callback = QSize* (*)();
    using KSslInfoDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KSslInfoDialog_Open_Callback = void (*)();
    using KSslInfoDialog_Exec_Callback = int (*)();
    using KSslInfoDialog_Done_Callback = void (*)(KSslInfoDialog*, int);
    using KSslInfoDialog_Accept_Callback = void (*)();
    using KSslInfoDialog_Reject_Callback = void (*)();
    using KSslInfoDialog_KeyPressEvent_Callback = void (*)(KSslInfoDialog*, QKeyEvent*);
    using KSslInfoDialog_CloseEvent_Callback = void (*)(KSslInfoDialog*, QCloseEvent*);
    using KSslInfoDialog_ShowEvent_Callback = void (*)(KSslInfoDialog*, QShowEvent*);
    using KSslInfoDialog_ResizeEvent_Callback = void (*)(KSslInfoDialog*, QResizeEvent*);
    using KSslInfoDialog_ContextMenuEvent_Callback = void (*)(KSslInfoDialog*, QContextMenuEvent*);
    using KSslInfoDialog_EventFilter_Callback = bool (*)(KSslInfoDialog*, QObject*, QEvent*);
    using KSslInfoDialog_DevType_Callback = int (*)();
    using KSslInfoDialog_HeightForWidth_Callback = int (*)(const KSslInfoDialog*, int);
    using KSslInfoDialog_HasHeightForWidth_Callback = bool (*)();
    using KSslInfoDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KSslInfoDialog_Event_Callback = bool (*)(KSslInfoDialog*, QEvent*);
    using KSslInfoDialog_MousePressEvent_Callback = void (*)(KSslInfoDialog*, QMouseEvent*);
    using KSslInfoDialog_MouseReleaseEvent_Callback = void (*)(KSslInfoDialog*, QMouseEvent*);
    using KSslInfoDialog_MouseDoubleClickEvent_Callback = void (*)(KSslInfoDialog*, QMouseEvent*);
    using KSslInfoDialog_MouseMoveEvent_Callback = void (*)(KSslInfoDialog*, QMouseEvent*);
    using KSslInfoDialog_WheelEvent_Callback = void (*)(KSslInfoDialog*, QWheelEvent*);
    using KSslInfoDialog_KeyReleaseEvent_Callback = void (*)(KSslInfoDialog*, QKeyEvent*);
    using KSslInfoDialog_FocusInEvent_Callback = void (*)(KSslInfoDialog*, QFocusEvent*);
    using KSslInfoDialog_FocusOutEvent_Callback = void (*)(KSslInfoDialog*, QFocusEvent*);
    using KSslInfoDialog_EnterEvent_Callback = void (*)(KSslInfoDialog*, QEnterEvent*);
    using KSslInfoDialog_LeaveEvent_Callback = void (*)(KSslInfoDialog*, QEvent*);
    using KSslInfoDialog_PaintEvent_Callback = void (*)(KSslInfoDialog*, QPaintEvent*);
    using KSslInfoDialog_MoveEvent_Callback = void (*)(KSslInfoDialog*, QMoveEvent*);
    using KSslInfoDialog_TabletEvent_Callback = void (*)(KSslInfoDialog*, QTabletEvent*);
    using KSslInfoDialog_ActionEvent_Callback = void (*)(KSslInfoDialog*, QActionEvent*);
    using KSslInfoDialog_DragEnterEvent_Callback = void (*)(KSslInfoDialog*, QDragEnterEvent*);
    using KSslInfoDialog_DragMoveEvent_Callback = void (*)(KSslInfoDialog*, QDragMoveEvent*);
    using KSslInfoDialog_DragLeaveEvent_Callback = void (*)(KSslInfoDialog*, QDragLeaveEvent*);
    using KSslInfoDialog_DropEvent_Callback = void (*)(KSslInfoDialog*, QDropEvent*);
    using KSslInfoDialog_HideEvent_Callback = void (*)(KSslInfoDialog*, QHideEvent*);
    using KSslInfoDialog_NativeEvent_Callback = bool (*)(KSslInfoDialog*, libqt_string, void*, intptr_t*);
    using KSslInfoDialog_ChangeEvent_Callback = void (*)(KSslInfoDialog*, QEvent*);
    using KSslInfoDialog_Metric_Callback = int (*)(const KSslInfoDialog*, int);
    using KSslInfoDialog_InitPainter_Callback = void (*)(const KSslInfoDialog*, QPainter*);
    using KSslInfoDialog_Redirected_Callback = QPaintDevice* (*)(const KSslInfoDialog*, QPoint*);
    using KSslInfoDialog_SharedPainter_Callback = QPainter* (*)();
    using KSslInfoDialog_InputMethodEvent_Callback = void (*)(KSslInfoDialog*, QInputMethodEvent*);
    using KSslInfoDialog_InputMethodQuery_Callback = QVariant* (*)(const KSslInfoDialog*, int);
    using KSslInfoDialog_FocusNextPrevChild_Callback = bool (*)(KSslInfoDialog*, bool);
    using KSslInfoDialog_TimerEvent_Callback = void (*)(KSslInfoDialog*, QTimerEvent*);
    using KSslInfoDialog_ChildEvent_Callback = void (*)(KSslInfoDialog*, QChildEvent*);
    using KSslInfoDialog_CustomEvent_Callback = void (*)(KSslInfoDialog*, QEvent*);
    using KSslInfoDialog_ConnectNotify_Callback = void (*)(KSslInfoDialog*, QMetaMethod*);
    using KSslInfoDialog_DisconnectNotify_Callback = void (*)(KSslInfoDialog*, QMetaMethod*);
    using KSslInfoDialog_AdjustPosition_Callback = void (*)(KSslInfoDialog*, QWidget*);
    using KSslInfoDialog_UpdateMicroFocus_Callback = void (*)();
    using KSslInfoDialog_Create_Callback = void (*)();
    using KSslInfoDialog_Destroy_Callback = void (*)();
    using KSslInfoDialog_FocusNextChild_Callback = bool (*)();
    using KSslInfoDialog_FocusPreviousChild_Callback = bool (*)();
    using KSslInfoDialog_Sender_Callback = QObject* (*)();
    using KSslInfoDialog_SenderSignalIndex_Callback = int (*)();
    using KSslInfoDialog_Receivers_Callback = int (*)(const KSslInfoDialog*, const char*);
    using KSslInfoDialog_IsSignalConnected_Callback = bool (*)(const KSslInfoDialog*, QMetaMethod*);
    using KSslInfoDialog_GetDecodedMetricF_Callback = double (*)(const KSslInfoDialog*, int, int);

  protected:
    // Instance callback storage
    KSslInfoDialog_Metacall_Callback ksslinfodialog_metacall_callback = nullptr;
    KSslInfoDialog_SetVisible_Callback ksslinfodialog_setvisible_callback = nullptr;
    KSslInfoDialog_SizeHint_Callback ksslinfodialog_sizehint_callback = nullptr;
    KSslInfoDialog_MinimumSizeHint_Callback ksslinfodialog_minimumsizehint_callback = nullptr;
    KSslInfoDialog_Open_Callback ksslinfodialog_open_callback = nullptr;
    KSslInfoDialog_Exec_Callback ksslinfodialog_exec_callback = nullptr;
    KSslInfoDialog_Done_Callback ksslinfodialog_done_callback = nullptr;
    KSslInfoDialog_Accept_Callback ksslinfodialog_accept_callback = nullptr;
    KSslInfoDialog_Reject_Callback ksslinfodialog_reject_callback = nullptr;
    KSslInfoDialog_KeyPressEvent_Callback ksslinfodialog_keypressevent_callback = nullptr;
    KSslInfoDialog_CloseEvent_Callback ksslinfodialog_closeevent_callback = nullptr;
    KSslInfoDialog_ShowEvent_Callback ksslinfodialog_showevent_callback = nullptr;
    KSslInfoDialog_ResizeEvent_Callback ksslinfodialog_resizeevent_callback = nullptr;
    KSslInfoDialog_ContextMenuEvent_Callback ksslinfodialog_contextmenuevent_callback = nullptr;
    KSslInfoDialog_EventFilter_Callback ksslinfodialog_eventfilter_callback = nullptr;
    KSslInfoDialog_DevType_Callback ksslinfodialog_devtype_callback = nullptr;
    KSslInfoDialog_HeightForWidth_Callback ksslinfodialog_heightforwidth_callback = nullptr;
    KSslInfoDialog_HasHeightForWidth_Callback ksslinfodialog_hasheightforwidth_callback = nullptr;
    KSslInfoDialog_PaintEngine_Callback ksslinfodialog_paintengine_callback = nullptr;
    KSslInfoDialog_Event_Callback ksslinfodialog_event_callback = nullptr;
    KSslInfoDialog_MousePressEvent_Callback ksslinfodialog_mousepressevent_callback = nullptr;
    KSslInfoDialog_MouseReleaseEvent_Callback ksslinfodialog_mousereleaseevent_callback = nullptr;
    KSslInfoDialog_MouseDoubleClickEvent_Callback ksslinfodialog_mousedoubleclickevent_callback = nullptr;
    KSslInfoDialog_MouseMoveEvent_Callback ksslinfodialog_mousemoveevent_callback = nullptr;
    KSslInfoDialog_WheelEvent_Callback ksslinfodialog_wheelevent_callback = nullptr;
    KSslInfoDialog_KeyReleaseEvent_Callback ksslinfodialog_keyreleaseevent_callback = nullptr;
    KSslInfoDialog_FocusInEvent_Callback ksslinfodialog_focusinevent_callback = nullptr;
    KSslInfoDialog_FocusOutEvent_Callback ksslinfodialog_focusoutevent_callback = nullptr;
    KSslInfoDialog_EnterEvent_Callback ksslinfodialog_enterevent_callback = nullptr;
    KSslInfoDialog_LeaveEvent_Callback ksslinfodialog_leaveevent_callback = nullptr;
    KSslInfoDialog_PaintEvent_Callback ksslinfodialog_paintevent_callback = nullptr;
    KSslInfoDialog_MoveEvent_Callback ksslinfodialog_moveevent_callback = nullptr;
    KSslInfoDialog_TabletEvent_Callback ksslinfodialog_tabletevent_callback = nullptr;
    KSslInfoDialog_ActionEvent_Callback ksslinfodialog_actionevent_callback = nullptr;
    KSslInfoDialog_DragEnterEvent_Callback ksslinfodialog_dragenterevent_callback = nullptr;
    KSslInfoDialog_DragMoveEvent_Callback ksslinfodialog_dragmoveevent_callback = nullptr;
    KSslInfoDialog_DragLeaveEvent_Callback ksslinfodialog_dragleaveevent_callback = nullptr;
    KSslInfoDialog_DropEvent_Callback ksslinfodialog_dropevent_callback = nullptr;
    KSslInfoDialog_HideEvent_Callback ksslinfodialog_hideevent_callback = nullptr;
    KSslInfoDialog_NativeEvent_Callback ksslinfodialog_nativeevent_callback = nullptr;
    KSslInfoDialog_ChangeEvent_Callback ksslinfodialog_changeevent_callback = nullptr;
    KSslInfoDialog_Metric_Callback ksslinfodialog_metric_callback = nullptr;
    KSslInfoDialog_InitPainter_Callback ksslinfodialog_initpainter_callback = nullptr;
    KSslInfoDialog_Redirected_Callback ksslinfodialog_redirected_callback = nullptr;
    KSslInfoDialog_SharedPainter_Callback ksslinfodialog_sharedpainter_callback = nullptr;
    KSslInfoDialog_InputMethodEvent_Callback ksslinfodialog_inputmethodevent_callback = nullptr;
    KSslInfoDialog_InputMethodQuery_Callback ksslinfodialog_inputmethodquery_callback = nullptr;
    KSslInfoDialog_FocusNextPrevChild_Callback ksslinfodialog_focusnextprevchild_callback = nullptr;
    KSslInfoDialog_TimerEvent_Callback ksslinfodialog_timerevent_callback = nullptr;
    KSslInfoDialog_ChildEvent_Callback ksslinfodialog_childevent_callback = nullptr;
    KSslInfoDialog_CustomEvent_Callback ksslinfodialog_customevent_callback = nullptr;
    KSslInfoDialog_ConnectNotify_Callback ksslinfodialog_connectnotify_callback = nullptr;
    KSslInfoDialog_DisconnectNotify_Callback ksslinfodialog_disconnectnotify_callback = nullptr;
    KSslInfoDialog_AdjustPosition_Callback ksslinfodialog_adjustposition_callback = nullptr;
    KSslInfoDialog_UpdateMicroFocus_Callback ksslinfodialog_updatemicrofocus_callback = nullptr;
    KSslInfoDialog_Create_Callback ksslinfodialog_create_callback = nullptr;
    KSslInfoDialog_Destroy_Callback ksslinfodialog_destroy_callback = nullptr;
    KSslInfoDialog_FocusNextChild_Callback ksslinfodialog_focusnextchild_callback = nullptr;
    KSslInfoDialog_FocusPreviousChild_Callback ksslinfodialog_focuspreviouschild_callback = nullptr;
    KSslInfoDialog_Sender_Callback ksslinfodialog_sender_callback = nullptr;
    KSslInfoDialog_SenderSignalIndex_Callback ksslinfodialog_sendersignalindex_callback = nullptr;
    KSslInfoDialog_Receivers_Callback ksslinfodialog_receivers_callback = nullptr;
    KSslInfoDialog_IsSignalConnected_Callback ksslinfodialog_issignalconnected_callback = nullptr;
    KSslInfoDialog_GetDecodedMetricF_Callback ksslinfodialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool ksslinfodialog_metacall_isbase = false;
    mutable bool ksslinfodialog_setvisible_isbase = false;
    mutable bool ksslinfodialog_sizehint_isbase = false;
    mutable bool ksslinfodialog_minimumsizehint_isbase = false;
    mutable bool ksslinfodialog_open_isbase = false;
    mutable bool ksslinfodialog_exec_isbase = false;
    mutable bool ksslinfodialog_done_isbase = false;
    mutable bool ksslinfodialog_accept_isbase = false;
    mutable bool ksslinfodialog_reject_isbase = false;
    mutable bool ksslinfodialog_keypressevent_isbase = false;
    mutable bool ksslinfodialog_closeevent_isbase = false;
    mutable bool ksslinfodialog_showevent_isbase = false;
    mutable bool ksslinfodialog_resizeevent_isbase = false;
    mutable bool ksslinfodialog_contextmenuevent_isbase = false;
    mutable bool ksslinfodialog_eventfilter_isbase = false;
    mutable bool ksslinfodialog_devtype_isbase = false;
    mutable bool ksslinfodialog_heightforwidth_isbase = false;
    mutable bool ksslinfodialog_hasheightforwidth_isbase = false;
    mutable bool ksslinfodialog_paintengine_isbase = false;
    mutable bool ksslinfodialog_event_isbase = false;
    mutable bool ksslinfodialog_mousepressevent_isbase = false;
    mutable bool ksslinfodialog_mousereleaseevent_isbase = false;
    mutable bool ksslinfodialog_mousedoubleclickevent_isbase = false;
    mutable bool ksslinfodialog_mousemoveevent_isbase = false;
    mutable bool ksslinfodialog_wheelevent_isbase = false;
    mutable bool ksslinfodialog_keyreleaseevent_isbase = false;
    mutable bool ksslinfodialog_focusinevent_isbase = false;
    mutable bool ksslinfodialog_focusoutevent_isbase = false;
    mutable bool ksslinfodialog_enterevent_isbase = false;
    mutable bool ksslinfodialog_leaveevent_isbase = false;
    mutable bool ksslinfodialog_paintevent_isbase = false;
    mutable bool ksslinfodialog_moveevent_isbase = false;
    mutable bool ksslinfodialog_tabletevent_isbase = false;
    mutable bool ksslinfodialog_actionevent_isbase = false;
    mutable bool ksslinfodialog_dragenterevent_isbase = false;
    mutable bool ksslinfodialog_dragmoveevent_isbase = false;
    mutable bool ksslinfodialog_dragleaveevent_isbase = false;
    mutable bool ksslinfodialog_dropevent_isbase = false;
    mutable bool ksslinfodialog_hideevent_isbase = false;
    mutable bool ksslinfodialog_nativeevent_isbase = false;
    mutable bool ksslinfodialog_changeevent_isbase = false;
    mutable bool ksslinfodialog_metric_isbase = false;
    mutable bool ksslinfodialog_initpainter_isbase = false;
    mutable bool ksslinfodialog_redirected_isbase = false;
    mutable bool ksslinfodialog_sharedpainter_isbase = false;
    mutable bool ksslinfodialog_inputmethodevent_isbase = false;
    mutable bool ksslinfodialog_inputmethodquery_isbase = false;
    mutable bool ksslinfodialog_focusnextprevchild_isbase = false;
    mutable bool ksslinfodialog_timerevent_isbase = false;
    mutable bool ksslinfodialog_childevent_isbase = false;
    mutable bool ksslinfodialog_customevent_isbase = false;
    mutable bool ksslinfodialog_connectnotify_isbase = false;
    mutable bool ksslinfodialog_disconnectnotify_isbase = false;
    mutable bool ksslinfodialog_adjustposition_isbase = false;
    mutable bool ksslinfodialog_updatemicrofocus_isbase = false;
    mutable bool ksslinfodialog_create_isbase = false;
    mutable bool ksslinfodialog_destroy_isbase = false;
    mutable bool ksslinfodialog_focusnextchild_isbase = false;
    mutable bool ksslinfodialog_focuspreviouschild_isbase = false;
    mutable bool ksslinfodialog_sender_isbase = false;
    mutable bool ksslinfodialog_sendersignalindex_isbase = false;
    mutable bool ksslinfodialog_receivers_isbase = false;
    mutable bool ksslinfodialog_issignalconnected_isbase = false;
    mutable bool ksslinfodialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKSslInfoDialog(QWidget* parent) : KSslInfoDialog(parent) {};
    VirtualKSslInfoDialog() : KSslInfoDialog() {};

    ~VirtualKSslInfoDialog() {
        ksslinfodialog_metacall_callback = nullptr;
        ksslinfodialog_setvisible_callback = nullptr;
        ksslinfodialog_sizehint_callback = nullptr;
        ksslinfodialog_minimumsizehint_callback = nullptr;
        ksslinfodialog_open_callback = nullptr;
        ksslinfodialog_exec_callback = nullptr;
        ksslinfodialog_done_callback = nullptr;
        ksslinfodialog_accept_callback = nullptr;
        ksslinfodialog_reject_callback = nullptr;
        ksslinfodialog_keypressevent_callback = nullptr;
        ksslinfodialog_closeevent_callback = nullptr;
        ksslinfodialog_showevent_callback = nullptr;
        ksslinfodialog_resizeevent_callback = nullptr;
        ksslinfodialog_contextmenuevent_callback = nullptr;
        ksslinfodialog_eventfilter_callback = nullptr;
        ksslinfodialog_devtype_callback = nullptr;
        ksslinfodialog_heightforwidth_callback = nullptr;
        ksslinfodialog_hasheightforwidth_callback = nullptr;
        ksslinfodialog_paintengine_callback = nullptr;
        ksslinfodialog_event_callback = nullptr;
        ksslinfodialog_mousepressevent_callback = nullptr;
        ksslinfodialog_mousereleaseevent_callback = nullptr;
        ksslinfodialog_mousedoubleclickevent_callback = nullptr;
        ksslinfodialog_mousemoveevent_callback = nullptr;
        ksslinfodialog_wheelevent_callback = nullptr;
        ksslinfodialog_keyreleaseevent_callback = nullptr;
        ksslinfodialog_focusinevent_callback = nullptr;
        ksslinfodialog_focusoutevent_callback = nullptr;
        ksslinfodialog_enterevent_callback = nullptr;
        ksslinfodialog_leaveevent_callback = nullptr;
        ksslinfodialog_paintevent_callback = nullptr;
        ksslinfodialog_moveevent_callback = nullptr;
        ksslinfodialog_tabletevent_callback = nullptr;
        ksslinfodialog_actionevent_callback = nullptr;
        ksslinfodialog_dragenterevent_callback = nullptr;
        ksslinfodialog_dragmoveevent_callback = nullptr;
        ksslinfodialog_dragleaveevent_callback = nullptr;
        ksslinfodialog_dropevent_callback = nullptr;
        ksslinfodialog_hideevent_callback = nullptr;
        ksslinfodialog_nativeevent_callback = nullptr;
        ksslinfodialog_changeevent_callback = nullptr;
        ksslinfodialog_metric_callback = nullptr;
        ksslinfodialog_initpainter_callback = nullptr;
        ksslinfodialog_redirected_callback = nullptr;
        ksslinfodialog_sharedpainter_callback = nullptr;
        ksslinfodialog_inputmethodevent_callback = nullptr;
        ksslinfodialog_inputmethodquery_callback = nullptr;
        ksslinfodialog_focusnextprevchild_callback = nullptr;
        ksslinfodialog_timerevent_callback = nullptr;
        ksslinfodialog_childevent_callback = nullptr;
        ksslinfodialog_customevent_callback = nullptr;
        ksslinfodialog_connectnotify_callback = nullptr;
        ksslinfodialog_disconnectnotify_callback = nullptr;
        ksslinfodialog_adjustposition_callback = nullptr;
        ksslinfodialog_updatemicrofocus_callback = nullptr;
        ksslinfodialog_create_callback = nullptr;
        ksslinfodialog_destroy_callback = nullptr;
        ksslinfodialog_focusnextchild_callback = nullptr;
        ksslinfodialog_focuspreviouschild_callback = nullptr;
        ksslinfodialog_sender_callback = nullptr;
        ksslinfodialog_sendersignalindex_callback = nullptr;
        ksslinfodialog_receivers_callback = nullptr;
        ksslinfodialog_issignalconnected_callback = nullptr;
        ksslinfodialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKSslInfoDialog_Metacall_Callback(KSslInfoDialog_Metacall_Callback cb) { ksslinfodialog_metacall_callback = cb; }
    inline void setKSslInfoDialog_SetVisible_Callback(KSslInfoDialog_SetVisible_Callback cb) { ksslinfodialog_setvisible_callback = cb; }
    inline void setKSslInfoDialog_SizeHint_Callback(KSslInfoDialog_SizeHint_Callback cb) { ksslinfodialog_sizehint_callback = cb; }
    inline void setKSslInfoDialog_MinimumSizeHint_Callback(KSslInfoDialog_MinimumSizeHint_Callback cb) { ksslinfodialog_minimumsizehint_callback = cb; }
    inline void setKSslInfoDialog_Open_Callback(KSslInfoDialog_Open_Callback cb) { ksslinfodialog_open_callback = cb; }
    inline void setKSslInfoDialog_Exec_Callback(KSslInfoDialog_Exec_Callback cb) { ksslinfodialog_exec_callback = cb; }
    inline void setKSslInfoDialog_Done_Callback(KSslInfoDialog_Done_Callback cb) { ksslinfodialog_done_callback = cb; }
    inline void setKSslInfoDialog_Accept_Callback(KSslInfoDialog_Accept_Callback cb) { ksslinfodialog_accept_callback = cb; }
    inline void setKSslInfoDialog_Reject_Callback(KSslInfoDialog_Reject_Callback cb) { ksslinfodialog_reject_callback = cb; }
    inline void setKSslInfoDialog_KeyPressEvent_Callback(KSslInfoDialog_KeyPressEvent_Callback cb) { ksslinfodialog_keypressevent_callback = cb; }
    inline void setKSslInfoDialog_CloseEvent_Callback(KSslInfoDialog_CloseEvent_Callback cb) { ksslinfodialog_closeevent_callback = cb; }
    inline void setKSslInfoDialog_ShowEvent_Callback(KSslInfoDialog_ShowEvent_Callback cb) { ksslinfodialog_showevent_callback = cb; }
    inline void setKSslInfoDialog_ResizeEvent_Callback(KSslInfoDialog_ResizeEvent_Callback cb) { ksslinfodialog_resizeevent_callback = cb; }
    inline void setKSslInfoDialog_ContextMenuEvent_Callback(KSslInfoDialog_ContextMenuEvent_Callback cb) { ksslinfodialog_contextmenuevent_callback = cb; }
    inline void setKSslInfoDialog_EventFilter_Callback(KSslInfoDialog_EventFilter_Callback cb) { ksslinfodialog_eventfilter_callback = cb; }
    inline void setKSslInfoDialog_DevType_Callback(KSslInfoDialog_DevType_Callback cb) { ksslinfodialog_devtype_callback = cb; }
    inline void setKSslInfoDialog_HeightForWidth_Callback(KSslInfoDialog_HeightForWidth_Callback cb) { ksslinfodialog_heightforwidth_callback = cb; }
    inline void setKSslInfoDialog_HasHeightForWidth_Callback(KSslInfoDialog_HasHeightForWidth_Callback cb) { ksslinfodialog_hasheightforwidth_callback = cb; }
    inline void setKSslInfoDialog_PaintEngine_Callback(KSslInfoDialog_PaintEngine_Callback cb) { ksslinfodialog_paintengine_callback = cb; }
    inline void setKSslInfoDialog_Event_Callback(KSslInfoDialog_Event_Callback cb) { ksslinfodialog_event_callback = cb; }
    inline void setKSslInfoDialog_MousePressEvent_Callback(KSslInfoDialog_MousePressEvent_Callback cb) { ksslinfodialog_mousepressevent_callback = cb; }
    inline void setKSslInfoDialog_MouseReleaseEvent_Callback(KSslInfoDialog_MouseReleaseEvent_Callback cb) { ksslinfodialog_mousereleaseevent_callback = cb; }
    inline void setKSslInfoDialog_MouseDoubleClickEvent_Callback(KSslInfoDialog_MouseDoubleClickEvent_Callback cb) { ksslinfodialog_mousedoubleclickevent_callback = cb; }
    inline void setKSslInfoDialog_MouseMoveEvent_Callback(KSslInfoDialog_MouseMoveEvent_Callback cb) { ksslinfodialog_mousemoveevent_callback = cb; }
    inline void setKSslInfoDialog_WheelEvent_Callback(KSslInfoDialog_WheelEvent_Callback cb) { ksslinfodialog_wheelevent_callback = cb; }
    inline void setKSslInfoDialog_KeyReleaseEvent_Callback(KSslInfoDialog_KeyReleaseEvent_Callback cb) { ksslinfodialog_keyreleaseevent_callback = cb; }
    inline void setKSslInfoDialog_FocusInEvent_Callback(KSslInfoDialog_FocusInEvent_Callback cb) { ksslinfodialog_focusinevent_callback = cb; }
    inline void setKSslInfoDialog_FocusOutEvent_Callback(KSslInfoDialog_FocusOutEvent_Callback cb) { ksslinfodialog_focusoutevent_callback = cb; }
    inline void setKSslInfoDialog_EnterEvent_Callback(KSslInfoDialog_EnterEvent_Callback cb) { ksslinfodialog_enterevent_callback = cb; }
    inline void setKSslInfoDialog_LeaveEvent_Callback(KSslInfoDialog_LeaveEvent_Callback cb) { ksslinfodialog_leaveevent_callback = cb; }
    inline void setKSslInfoDialog_PaintEvent_Callback(KSslInfoDialog_PaintEvent_Callback cb) { ksslinfodialog_paintevent_callback = cb; }
    inline void setKSslInfoDialog_MoveEvent_Callback(KSslInfoDialog_MoveEvent_Callback cb) { ksslinfodialog_moveevent_callback = cb; }
    inline void setKSslInfoDialog_TabletEvent_Callback(KSslInfoDialog_TabletEvent_Callback cb) { ksslinfodialog_tabletevent_callback = cb; }
    inline void setKSslInfoDialog_ActionEvent_Callback(KSslInfoDialog_ActionEvent_Callback cb) { ksslinfodialog_actionevent_callback = cb; }
    inline void setKSslInfoDialog_DragEnterEvent_Callback(KSslInfoDialog_DragEnterEvent_Callback cb) { ksslinfodialog_dragenterevent_callback = cb; }
    inline void setKSslInfoDialog_DragMoveEvent_Callback(KSslInfoDialog_DragMoveEvent_Callback cb) { ksslinfodialog_dragmoveevent_callback = cb; }
    inline void setKSslInfoDialog_DragLeaveEvent_Callback(KSslInfoDialog_DragLeaveEvent_Callback cb) { ksslinfodialog_dragleaveevent_callback = cb; }
    inline void setKSslInfoDialog_DropEvent_Callback(KSslInfoDialog_DropEvent_Callback cb) { ksslinfodialog_dropevent_callback = cb; }
    inline void setKSslInfoDialog_HideEvent_Callback(KSslInfoDialog_HideEvent_Callback cb) { ksslinfodialog_hideevent_callback = cb; }
    inline void setKSslInfoDialog_NativeEvent_Callback(KSslInfoDialog_NativeEvent_Callback cb) { ksslinfodialog_nativeevent_callback = cb; }
    inline void setKSslInfoDialog_ChangeEvent_Callback(KSslInfoDialog_ChangeEvent_Callback cb) { ksslinfodialog_changeevent_callback = cb; }
    inline void setKSslInfoDialog_Metric_Callback(KSslInfoDialog_Metric_Callback cb) { ksslinfodialog_metric_callback = cb; }
    inline void setKSslInfoDialog_InitPainter_Callback(KSslInfoDialog_InitPainter_Callback cb) { ksslinfodialog_initpainter_callback = cb; }
    inline void setKSslInfoDialog_Redirected_Callback(KSslInfoDialog_Redirected_Callback cb) { ksslinfodialog_redirected_callback = cb; }
    inline void setKSslInfoDialog_SharedPainter_Callback(KSslInfoDialog_SharedPainter_Callback cb) { ksslinfodialog_sharedpainter_callback = cb; }
    inline void setKSslInfoDialog_InputMethodEvent_Callback(KSslInfoDialog_InputMethodEvent_Callback cb) { ksslinfodialog_inputmethodevent_callback = cb; }
    inline void setKSslInfoDialog_InputMethodQuery_Callback(KSslInfoDialog_InputMethodQuery_Callback cb) { ksslinfodialog_inputmethodquery_callback = cb; }
    inline void setKSslInfoDialog_FocusNextPrevChild_Callback(KSslInfoDialog_FocusNextPrevChild_Callback cb) { ksslinfodialog_focusnextprevchild_callback = cb; }
    inline void setKSslInfoDialog_TimerEvent_Callback(KSslInfoDialog_TimerEvent_Callback cb) { ksslinfodialog_timerevent_callback = cb; }
    inline void setKSslInfoDialog_ChildEvent_Callback(KSslInfoDialog_ChildEvent_Callback cb) { ksslinfodialog_childevent_callback = cb; }
    inline void setKSslInfoDialog_CustomEvent_Callback(KSslInfoDialog_CustomEvent_Callback cb) { ksslinfodialog_customevent_callback = cb; }
    inline void setKSslInfoDialog_ConnectNotify_Callback(KSslInfoDialog_ConnectNotify_Callback cb) { ksslinfodialog_connectnotify_callback = cb; }
    inline void setKSslInfoDialog_DisconnectNotify_Callback(KSslInfoDialog_DisconnectNotify_Callback cb) { ksslinfodialog_disconnectnotify_callback = cb; }
    inline void setKSslInfoDialog_AdjustPosition_Callback(KSslInfoDialog_AdjustPosition_Callback cb) { ksslinfodialog_adjustposition_callback = cb; }
    inline void setKSslInfoDialog_UpdateMicroFocus_Callback(KSslInfoDialog_UpdateMicroFocus_Callback cb) { ksslinfodialog_updatemicrofocus_callback = cb; }
    inline void setKSslInfoDialog_Create_Callback(KSslInfoDialog_Create_Callback cb) { ksslinfodialog_create_callback = cb; }
    inline void setKSslInfoDialog_Destroy_Callback(KSslInfoDialog_Destroy_Callback cb) { ksslinfodialog_destroy_callback = cb; }
    inline void setKSslInfoDialog_FocusNextChild_Callback(KSslInfoDialog_FocusNextChild_Callback cb) { ksslinfodialog_focusnextchild_callback = cb; }
    inline void setKSslInfoDialog_FocusPreviousChild_Callback(KSslInfoDialog_FocusPreviousChild_Callback cb) { ksslinfodialog_focuspreviouschild_callback = cb; }
    inline void setKSslInfoDialog_Sender_Callback(KSslInfoDialog_Sender_Callback cb) { ksslinfodialog_sender_callback = cb; }
    inline void setKSslInfoDialog_SenderSignalIndex_Callback(KSslInfoDialog_SenderSignalIndex_Callback cb) { ksslinfodialog_sendersignalindex_callback = cb; }
    inline void setKSslInfoDialog_Receivers_Callback(KSslInfoDialog_Receivers_Callback cb) { ksslinfodialog_receivers_callback = cb; }
    inline void setKSslInfoDialog_IsSignalConnected_Callback(KSslInfoDialog_IsSignalConnected_Callback cb) { ksslinfodialog_issignalconnected_callback = cb; }
    inline void setKSslInfoDialog_GetDecodedMetricF_Callback(KSslInfoDialog_GetDecodedMetricF_Callback cb) { ksslinfodialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKSslInfoDialog_Metacall_IsBase(bool value) const { ksslinfodialog_metacall_isbase = value; }
    inline void setKSslInfoDialog_SetVisible_IsBase(bool value) const { ksslinfodialog_setvisible_isbase = value; }
    inline void setKSslInfoDialog_SizeHint_IsBase(bool value) const { ksslinfodialog_sizehint_isbase = value; }
    inline void setKSslInfoDialog_MinimumSizeHint_IsBase(bool value) const { ksslinfodialog_minimumsizehint_isbase = value; }
    inline void setKSslInfoDialog_Open_IsBase(bool value) const { ksslinfodialog_open_isbase = value; }
    inline void setKSslInfoDialog_Exec_IsBase(bool value) const { ksslinfodialog_exec_isbase = value; }
    inline void setKSslInfoDialog_Done_IsBase(bool value) const { ksslinfodialog_done_isbase = value; }
    inline void setKSslInfoDialog_Accept_IsBase(bool value) const { ksslinfodialog_accept_isbase = value; }
    inline void setKSslInfoDialog_Reject_IsBase(bool value) const { ksslinfodialog_reject_isbase = value; }
    inline void setKSslInfoDialog_KeyPressEvent_IsBase(bool value) const { ksslinfodialog_keypressevent_isbase = value; }
    inline void setKSslInfoDialog_CloseEvent_IsBase(bool value) const { ksslinfodialog_closeevent_isbase = value; }
    inline void setKSslInfoDialog_ShowEvent_IsBase(bool value) const { ksslinfodialog_showevent_isbase = value; }
    inline void setKSslInfoDialog_ResizeEvent_IsBase(bool value) const { ksslinfodialog_resizeevent_isbase = value; }
    inline void setKSslInfoDialog_ContextMenuEvent_IsBase(bool value) const { ksslinfodialog_contextmenuevent_isbase = value; }
    inline void setKSslInfoDialog_EventFilter_IsBase(bool value) const { ksslinfodialog_eventfilter_isbase = value; }
    inline void setKSslInfoDialog_DevType_IsBase(bool value) const { ksslinfodialog_devtype_isbase = value; }
    inline void setKSslInfoDialog_HeightForWidth_IsBase(bool value) const { ksslinfodialog_heightforwidth_isbase = value; }
    inline void setKSslInfoDialog_HasHeightForWidth_IsBase(bool value) const { ksslinfodialog_hasheightforwidth_isbase = value; }
    inline void setKSslInfoDialog_PaintEngine_IsBase(bool value) const { ksslinfodialog_paintengine_isbase = value; }
    inline void setKSslInfoDialog_Event_IsBase(bool value) const { ksslinfodialog_event_isbase = value; }
    inline void setKSslInfoDialog_MousePressEvent_IsBase(bool value) const { ksslinfodialog_mousepressevent_isbase = value; }
    inline void setKSslInfoDialog_MouseReleaseEvent_IsBase(bool value) const { ksslinfodialog_mousereleaseevent_isbase = value; }
    inline void setKSslInfoDialog_MouseDoubleClickEvent_IsBase(bool value) const { ksslinfodialog_mousedoubleclickevent_isbase = value; }
    inline void setKSslInfoDialog_MouseMoveEvent_IsBase(bool value) const { ksslinfodialog_mousemoveevent_isbase = value; }
    inline void setKSslInfoDialog_WheelEvent_IsBase(bool value) const { ksslinfodialog_wheelevent_isbase = value; }
    inline void setKSslInfoDialog_KeyReleaseEvent_IsBase(bool value) const { ksslinfodialog_keyreleaseevent_isbase = value; }
    inline void setKSslInfoDialog_FocusInEvent_IsBase(bool value) const { ksslinfodialog_focusinevent_isbase = value; }
    inline void setKSslInfoDialog_FocusOutEvent_IsBase(bool value) const { ksslinfodialog_focusoutevent_isbase = value; }
    inline void setKSslInfoDialog_EnterEvent_IsBase(bool value) const { ksslinfodialog_enterevent_isbase = value; }
    inline void setKSslInfoDialog_LeaveEvent_IsBase(bool value) const { ksslinfodialog_leaveevent_isbase = value; }
    inline void setKSslInfoDialog_PaintEvent_IsBase(bool value) const { ksslinfodialog_paintevent_isbase = value; }
    inline void setKSslInfoDialog_MoveEvent_IsBase(bool value) const { ksslinfodialog_moveevent_isbase = value; }
    inline void setKSslInfoDialog_TabletEvent_IsBase(bool value) const { ksslinfodialog_tabletevent_isbase = value; }
    inline void setKSslInfoDialog_ActionEvent_IsBase(bool value) const { ksslinfodialog_actionevent_isbase = value; }
    inline void setKSslInfoDialog_DragEnterEvent_IsBase(bool value) const { ksslinfodialog_dragenterevent_isbase = value; }
    inline void setKSslInfoDialog_DragMoveEvent_IsBase(bool value) const { ksslinfodialog_dragmoveevent_isbase = value; }
    inline void setKSslInfoDialog_DragLeaveEvent_IsBase(bool value) const { ksslinfodialog_dragleaveevent_isbase = value; }
    inline void setKSslInfoDialog_DropEvent_IsBase(bool value) const { ksslinfodialog_dropevent_isbase = value; }
    inline void setKSslInfoDialog_HideEvent_IsBase(bool value) const { ksslinfodialog_hideevent_isbase = value; }
    inline void setKSslInfoDialog_NativeEvent_IsBase(bool value) const { ksslinfodialog_nativeevent_isbase = value; }
    inline void setKSslInfoDialog_ChangeEvent_IsBase(bool value) const { ksslinfodialog_changeevent_isbase = value; }
    inline void setKSslInfoDialog_Metric_IsBase(bool value) const { ksslinfodialog_metric_isbase = value; }
    inline void setKSslInfoDialog_InitPainter_IsBase(bool value) const { ksslinfodialog_initpainter_isbase = value; }
    inline void setKSslInfoDialog_Redirected_IsBase(bool value) const { ksslinfodialog_redirected_isbase = value; }
    inline void setKSslInfoDialog_SharedPainter_IsBase(bool value) const { ksslinfodialog_sharedpainter_isbase = value; }
    inline void setKSslInfoDialog_InputMethodEvent_IsBase(bool value) const { ksslinfodialog_inputmethodevent_isbase = value; }
    inline void setKSslInfoDialog_InputMethodQuery_IsBase(bool value) const { ksslinfodialog_inputmethodquery_isbase = value; }
    inline void setKSslInfoDialog_FocusNextPrevChild_IsBase(bool value) const { ksslinfodialog_focusnextprevchild_isbase = value; }
    inline void setKSslInfoDialog_TimerEvent_IsBase(bool value) const { ksslinfodialog_timerevent_isbase = value; }
    inline void setKSslInfoDialog_ChildEvent_IsBase(bool value) const { ksslinfodialog_childevent_isbase = value; }
    inline void setKSslInfoDialog_CustomEvent_IsBase(bool value) const { ksslinfodialog_customevent_isbase = value; }
    inline void setKSslInfoDialog_ConnectNotify_IsBase(bool value) const { ksslinfodialog_connectnotify_isbase = value; }
    inline void setKSslInfoDialog_DisconnectNotify_IsBase(bool value) const { ksslinfodialog_disconnectnotify_isbase = value; }
    inline void setKSslInfoDialog_AdjustPosition_IsBase(bool value) const { ksslinfodialog_adjustposition_isbase = value; }
    inline void setKSslInfoDialog_UpdateMicroFocus_IsBase(bool value) const { ksslinfodialog_updatemicrofocus_isbase = value; }
    inline void setKSslInfoDialog_Create_IsBase(bool value) const { ksslinfodialog_create_isbase = value; }
    inline void setKSslInfoDialog_Destroy_IsBase(bool value) const { ksslinfodialog_destroy_isbase = value; }
    inline void setKSslInfoDialog_FocusNextChild_IsBase(bool value) const { ksslinfodialog_focusnextchild_isbase = value; }
    inline void setKSslInfoDialog_FocusPreviousChild_IsBase(bool value) const { ksslinfodialog_focuspreviouschild_isbase = value; }
    inline void setKSslInfoDialog_Sender_IsBase(bool value) const { ksslinfodialog_sender_isbase = value; }
    inline void setKSslInfoDialog_SenderSignalIndex_IsBase(bool value) const { ksslinfodialog_sendersignalindex_isbase = value; }
    inline void setKSslInfoDialog_Receivers_IsBase(bool value) const { ksslinfodialog_receivers_isbase = value; }
    inline void setKSslInfoDialog_IsSignalConnected_IsBase(bool value) const { ksslinfodialog_issignalconnected_isbase = value; }
    inline void setKSslInfoDialog_GetDecodedMetricF_IsBase(bool value) const { ksslinfodialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksslinfodialog_metacall_isbase) {
            ksslinfodialog_metacall_isbase = false;
            return KSslInfoDialog::qt_metacall(param1, param2, param3);
        } else if (ksslinfodialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ksslinfodialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KSslInfoDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ksslinfodialog_setvisible_isbase) {
            ksslinfodialog_setvisible_isbase = false;
            KSslInfoDialog::setVisible(visible);
        } else if (ksslinfodialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            ksslinfodialog_setvisible_callback(this, cbval1);
        } else {
            KSslInfoDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ksslinfodialog_sizehint_isbase) {
            ksslinfodialog_sizehint_isbase = false;
            return KSslInfoDialog::sizeHint();
        } else if (ksslinfodialog_sizehint_callback != nullptr) {
            QSize* callback_ret = ksslinfodialog_sizehint_callback();
            return *callback_ret;
        } else {
            return KSslInfoDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ksslinfodialog_minimumsizehint_isbase) {
            ksslinfodialog_minimumsizehint_isbase = false;
            return KSslInfoDialog::minimumSizeHint();
        } else if (ksslinfodialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = ksslinfodialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KSslInfoDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (ksslinfodialog_open_isbase) {
            ksslinfodialog_open_isbase = false;
            KSslInfoDialog::open();
        } else if (ksslinfodialog_open_callback != nullptr) {
            ksslinfodialog_open_callback();
        } else {
            KSslInfoDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (ksslinfodialog_exec_isbase) {
            ksslinfodialog_exec_isbase = false;
            return KSslInfoDialog::exec();
        } else if (ksslinfodialog_exec_callback != nullptr) {
            int callback_ret = ksslinfodialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KSslInfoDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (ksslinfodialog_done_isbase) {
            ksslinfodialog_done_isbase = false;
            KSslInfoDialog::done(param1);
        } else if (ksslinfodialog_done_callback != nullptr) {
            int cbval1 = param1;

            ksslinfodialog_done_callback(this, cbval1);
        } else {
            KSslInfoDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (ksslinfodialog_accept_isbase) {
            ksslinfodialog_accept_isbase = false;
            KSslInfoDialog::accept();
        } else if (ksslinfodialog_accept_callback != nullptr) {
            ksslinfodialog_accept_callback();
        } else {
            KSslInfoDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (ksslinfodialog_reject_isbase) {
            ksslinfodialog_reject_isbase = false;
            KSslInfoDialog::reject();
        } else if (ksslinfodialog_reject_callback != nullptr) {
            ksslinfodialog_reject_callback();
        } else {
            KSslInfoDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (ksslinfodialog_keypressevent_isbase) {
            ksslinfodialog_keypressevent_isbase = false;
            KSslInfoDialog::keyPressEvent(param1);
        } else if (ksslinfodialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            ksslinfodialog_keypressevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (ksslinfodialog_closeevent_isbase) {
            ksslinfodialog_closeevent_isbase = false;
            KSslInfoDialog::closeEvent(param1);
        } else if (ksslinfodialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            ksslinfodialog_closeevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (ksslinfodialog_showevent_isbase) {
            ksslinfodialog_showevent_isbase = false;
            KSslInfoDialog::showEvent(param1);
        } else if (ksslinfodialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            ksslinfodialog_showevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (ksslinfodialog_resizeevent_isbase) {
            ksslinfodialog_resizeevent_isbase = false;
            KSslInfoDialog::resizeEvent(param1);
        } else if (ksslinfodialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            ksslinfodialog_resizeevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (ksslinfodialog_contextmenuevent_isbase) {
            ksslinfodialog_contextmenuevent_isbase = false;
            KSslInfoDialog::contextMenuEvent(param1);
        } else if (ksslinfodialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            ksslinfodialog_contextmenuevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (ksslinfodialog_eventfilter_isbase) {
            ksslinfodialog_eventfilter_isbase = false;
            return KSslInfoDialog::eventFilter(param1, param2);
        } else if (ksslinfodialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = ksslinfodialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KSslInfoDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ksslinfodialog_devtype_isbase) {
            ksslinfodialog_devtype_isbase = false;
            return KSslInfoDialog::devType();
        } else if (ksslinfodialog_devtype_callback != nullptr) {
            int callback_ret = ksslinfodialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KSslInfoDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ksslinfodialog_heightforwidth_isbase) {
            ksslinfodialog_heightforwidth_isbase = false;
            return KSslInfoDialog::heightForWidth(param1);
        } else if (ksslinfodialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = ksslinfodialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSslInfoDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ksslinfodialog_hasheightforwidth_isbase) {
            ksslinfodialog_hasheightforwidth_isbase = false;
            return KSslInfoDialog::hasHeightForWidth();
        } else if (ksslinfodialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = ksslinfodialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KSslInfoDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ksslinfodialog_paintengine_isbase) {
            ksslinfodialog_paintengine_isbase = false;
            return KSslInfoDialog::paintEngine();
        } else if (ksslinfodialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = ksslinfodialog_paintengine_callback();
            return callback_ret;
        } else {
            return KSslInfoDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksslinfodialog_event_isbase) {
            ksslinfodialog_event_isbase = false;
            return KSslInfoDialog::event(event);
        } else if (ksslinfodialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ksslinfodialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSslInfoDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (ksslinfodialog_mousepressevent_isbase) {
            ksslinfodialog_mousepressevent_isbase = false;
            KSslInfoDialog::mousePressEvent(event);
        } else if (ksslinfodialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ksslinfodialog_mousepressevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (ksslinfodialog_mousereleaseevent_isbase) {
            ksslinfodialog_mousereleaseevent_isbase = false;
            KSslInfoDialog::mouseReleaseEvent(event);
        } else if (ksslinfodialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ksslinfodialog_mousereleaseevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ksslinfodialog_mousedoubleclickevent_isbase) {
            ksslinfodialog_mousedoubleclickevent_isbase = false;
            KSslInfoDialog::mouseDoubleClickEvent(event);
        } else if (ksslinfodialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ksslinfodialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (ksslinfodialog_mousemoveevent_isbase) {
            ksslinfodialog_mousemoveevent_isbase = false;
            KSslInfoDialog::mouseMoveEvent(event);
        } else if (ksslinfodialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ksslinfodialog_mousemoveevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ksslinfodialog_wheelevent_isbase) {
            ksslinfodialog_wheelevent_isbase = false;
            KSslInfoDialog::wheelEvent(event);
        } else if (ksslinfodialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            ksslinfodialog_wheelevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (ksslinfodialog_keyreleaseevent_isbase) {
            ksslinfodialog_keyreleaseevent_isbase = false;
            KSslInfoDialog::keyReleaseEvent(event);
        } else if (ksslinfodialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            ksslinfodialog_keyreleaseevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (ksslinfodialog_focusinevent_isbase) {
            ksslinfodialog_focusinevent_isbase = false;
            KSslInfoDialog::focusInEvent(event);
        } else if (ksslinfodialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            ksslinfodialog_focusinevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (ksslinfodialog_focusoutevent_isbase) {
            ksslinfodialog_focusoutevent_isbase = false;
            KSslInfoDialog::focusOutEvent(event);
        } else if (ksslinfodialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            ksslinfodialog_focusoutevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ksslinfodialog_enterevent_isbase) {
            ksslinfodialog_enterevent_isbase = false;
            KSslInfoDialog::enterEvent(event);
        } else if (ksslinfodialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            ksslinfodialog_enterevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ksslinfodialog_leaveevent_isbase) {
            ksslinfodialog_leaveevent_isbase = false;
            KSslInfoDialog::leaveEvent(event);
        } else if (ksslinfodialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ksslinfodialog_leaveevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (ksslinfodialog_paintevent_isbase) {
            ksslinfodialog_paintevent_isbase = false;
            KSslInfoDialog::paintEvent(event);
        } else if (ksslinfodialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            ksslinfodialog_paintevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ksslinfodialog_moveevent_isbase) {
            ksslinfodialog_moveevent_isbase = false;
            KSslInfoDialog::moveEvent(event);
        } else if (ksslinfodialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            ksslinfodialog_moveevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ksslinfodialog_tabletevent_isbase) {
            ksslinfodialog_tabletevent_isbase = false;
            KSslInfoDialog::tabletEvent(event);
        } else if (ksslinfodialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            ksslinfodialog_tabletevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ksslinfodialog_actionevent_isbase) {
            ksslinfodialog_actionevent_isbase = false;
            KSslInfoDialog::actionEvent(event);
        } else if (ksslinfodialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            ksslinfodialog_actionevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ksslinfodialog_dragenterevent_isbase) {
            ksslinfodialog_dragenterevent_isbase = false;
            KSslInfoDialog::dragEnterEvent(event);
        } else if (ksslinfodialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            ksslinfodialog_dragenterevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ksslinfodialog_dragmoveevent_isbase) {
            ksslinfodialog_dragmoveevent_isbase = false;
            KSslInfoDialog::dragMoveEvent(event);
        } else if (ksslinfodialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            ksslinfodialog_dragmoveevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ksslinfodialog_dragleaveevent_isbase) {
            ksslinfodialog_dragleaveevent_isbase = false;
            KSslInfoDialog::dragLeaveEvent(event);
        } else if (ksslinfodialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            ksslinfodialog_dragleaveevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ksslinfodialog_dropevent_isbase) {
            ksslinfodialog_dropevent_isbase = false;
            KSslInfoDialog::dropEvent(event);
        } else if (ksslinfodialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            ksslinfodialog_dropevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ksslinfodialog_hideevent_isbase) {
            ksslinfodialog_hideevent_isbase = false;
            KSslInfoDialog::hideEvent(event);
        } else if (ksslinfodialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            ksslinfodialog_hideevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ksslinfodialog_nativeevent_isbase) {
            ksslinfodialog_nativeevent_isbase = false;
            return KSslInfoDialog::nativeEvent(eventType, message, result);
        } else if (ksslinfodialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = ksslinfodialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KSslInfoDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (ksslinfodialog_changeevent_isbase) {
            ksslinfodialog_changeevent_isbase = false;
            KSslInfoDialog::changeEvent(param1);
        } else if (ksslinfodialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            ksslinfodialog_changeevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ksslinfodialog_metric_isbase) {
            ksslinfodialog_metric_isbase = false;
            return KSslInfoDialog::metric(param1);
        } else if (ksslinfodialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = ksslinfodialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSslInfoDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ksslinfodialog_initpainter_isbase) {
            ksslinfodialog_initpainter_isbase = false;
            KSslInfoDialog::initPainter(painter);
        } else if (ksslinfodialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            ksslinfodialog_initpainter_callback(this, cbval1);
        } else {
            KSslInfoDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ksslinfodialog_redirected_isbase) {
            ksslinfodialog_redirected_isbase = false;
            return KSslInfoDialog::redirected(offset);
        } else if (ksslinfodialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = ksslinfodialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSslInfoDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ksslinfodialog_sharedpainter_isbase) {
            ksslinfodialog_sharedpainter_isbase = false;
            return KSslInfoDialog::sharedPainter();
        } else if (ksslinfodialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = ksslinfodialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return KSslInfoDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ksslinfodialog_inputmethodevent_isbase) {
            ksslinfodialog_inputmethodevent_isbase = false;
            KSslInfoDialog::inputMethodEvent(param1);
        } else if (ksslinfodialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            ksslinfodialog_inputmethodevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ksslinfodialog_inputmethodquery_isbase) {
            ksslinfodialog_inputmethodquery_isbase = false;
            return KSslInfoDialog::inputMethodQuery(param1);
        } else if (ksslinfodialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = ksslinfodialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KSslInfoDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ksslinfodialog_focusnextprevchild_isbase) {
            ksslinfodialog_focusnextprevchild_isbase = false;
            return KSslInfoDialog::focusNextPrevChild(next);
        } else if (ksslinfodialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = ksslinfodialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSslInfoDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksslinfodialog_timerevent_isbase) {
            ksslinfodialog_timerevent_isbase = false;
            KSslInfoDialog::timerEvent(event);
        } else if (ksslinfodialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ksslinfodialog_timerevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksslinfodialog_childevent_isbase) {
            ksslinfodialog_childevent_isbase = false;
            KSslInfoDialog::childEvent(event);
        } else if (ksslinfodialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ksslinfodialog_childevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksslinfodialog_customevent_isbase) {
            ksslinfodialog_customevent_isbase = false;
            KSslInfoDialog::customEvent(event);
        } else if (ksslinfodialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ksslinfodialog_customevent_callback(this, cbval1);
        } else {
            KSslInfoDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksslinfodialog_connectnotify_isbase) {
            ksslinfodialog_connectnotify_isbase = false;
            KSslInfoDialog::connectNotify(signal);
        } else if (ksslinfodialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ksslinfodialog_connectnotify_callback(this, cbval1);
        } else {
            KSslInfoDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksslinfodialog_disconnectnotify_isbase) {
            ksslinfodialog_disconnectnotify_isbase = false;
            KSslInfoDialog::disconnectNotify(signal);
        } else if (ksslinfodialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ksslinfodialog_disconnectnotify_callback(this, cbval1);
        } else {
            KSslInfoDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (ksslinfodialog_adjustposition_isbase) {
            ksslinfodialog_adjustposition_isbase = false;
            KSslInfoDialog::adjustPosition(param1);
        } else if (ksslinfodialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            ksslinfodialog_adjustposition_callback(this, cbval1);
        } else {
            KSslInfoDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (ksslinfodialog_updatemicrofocus_isbase) {
            ksslinfodialog_updatemicrofocus_isbase = false;
            KSslInfoDialog::updateMicroFocus();
        } else if (ksslinfodialog_updatemicrofocus_callback != nullptr) {
            ksslinfodialog_updatemicrofocus_callback();
        } else {
            KSslInfoDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (ksslinfodialog_create_isbase) {
            ksslinfodialog_create_isbase = false;
            KSslInfoDialog::create();
        } else if (ksslinfodialog_create_callback != nullptr) {
            ksslinfodialog_create_callback();
        } else {
            KSslInfoDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (ksslinfodialog_destroy_isbase) {
            ksslinfodialog_destroy_isbase = false;
            KSslInfoDialog::destroy();
        } else if (ksslinfodialog_destroy_callback != nullptr) {
            ksslinfodialog_destroy_callback();
        } else {
            KSslInfoDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (ksslinfodialog_focusnextchild_isbase) {
            ksslinfodialog_focusnextchild_isbase = false;
            return KSslInfoDialog::focusNextChild();
        } else if (ksslinfodialog_focusnextchild_callback != nullptr) {
            bool callback_ret = ksslinfodialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return KSslInfoDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (ksslinfodialog_focuspreviouschild_isbase) {
            ksslinfodialog_focuspreviouschild_isbase = false;
            return KSslInfoDialog::focusPreviousChild();
        } else if (ksslinfodialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = ksslinfodialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KSslInfoDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ksslinfodialog_sender_isbase) {
            ksslinfodialog_sender_isbase = false;
            return KSslInfoDialog::sender();
        } else if (ksslinfodialog_sender_callback != nullptr) {
            QObject* callback_ret = ksslinfodialog_sender_callback();
            return callback_ret;
        } else {
            return KSslInfoDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ksslinfodialog_sendersignalindex_isbase) {
            ksslinfodialog_sendersignalindex_isbase = false;
            return KSslInfoDialog::senderSignalIndex();
        } else if (ksslinfodialog_sendersignalindex_callback != nullptr) {
            int callback_ret = ksslinfodialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KSslInfoDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ksslinfodialog_receivers_isbase) {
            ksslinfodialog_receivers_isbase = false;
            return KSslInfoDialog::receivers(signal);
        } else if (ksslinfodialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ksslinfodialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSslInfoDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ksslinfodialog_issignalconnected_isbase) {
            ksslinfodialog_issignalconnected_isbase = false;
            return KSslInfoDialog::isSignalConnected(signal);
        } else if (ksslinfodialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ksslinfodialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSslInfoDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (ksslinfodialog_getdecodedmetricf_isbase) {
            ksslinfodialog_getdecodedmetricf_isbase = false;
            return KSslInfoDialog::getDecodedMetricF(metricA, metricB);
        } else if (ksslinfodialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = ksslinfodialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KSslInfoDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KSslInfoDialog_KeyPressEvent(KSslInfoDialog* self, QKeyEvent* param1);
    friend void KSslInfoDialog_QBaseKeyPressEvent(KSslInfoDialog* self, QKeyEvent* param1);
    friend void KSslInfoDialog_CloseEvent(KSslInfoDialog* self, QCloseEvent* param1);
    friend void KSslInfoDialog_QBaseCloseEvent(KSslInfoDialog* self, QCloseEvent* param1);
    friend void KSslInfoDialog_ShowEvent(KSslInfoDialog* self, QShowEvent* param1);
    friend void KSslInfoDialog_QBaseShowEvent(KSslInfoDialog* self, QShowEvent* param1);
    friend void KSslInfoDialog_ResizeEvent(KSslInfoDialog* self, QResizeEvent* param1);
    friend void KSslInfoDialog_QBaseResizeEvent(KSslInfoDialog* self, QResizeEvent* param1);
    friend void KSslInfoDialog_ContextMenuEvent(KSslInfoDialog* self, QContextMenuEvent* param1);
    friend void KSslInfoDialog_QBaseContextMenuEvent(KSslInfoDialog* self, QContextMenuEvent* param1);
    friend bool KSslInfoDialog_EventFilter(KSslInfoDialog* self, QObject* param1, QEvent* param2);
    friend bool KSslInfoDialog_QBaseEventFilter(KSslInfoDialog* self, QObject* param1, QEvent* param2);
    friend bool KSslInfoDialog_Event(KSslInfoDialog* self, QEvent* event);
    friend bool KSslInfoDialog_QBaseEvent(KSslInfoDialog* self, QEvent* event);
    friend void KSslInfoDialog_MousePressEvent(KSslInfoDialog* self, QMouseEvent* event);
    friend void KSslInfoDialog_QBaseMousePressEvent(KSslInfoDialog* self, QMouseEvent* event);
    friend void KSslInfoDialog_MouseReleaseEvent(KSslInfoDialog* self, QMouseEvent* event);
    friend void KSslInfoDialog_QBaseMouseReleaseEvent(KSslInfoDialog* self, QMouseEvent* event);
    friend void KSslInfoDialog_MouseDoubleClickEvent(KSslInfoDialog* self, QMouseEvent* event);
    friend void KSslInfoDialog_QBaseMouseDoubleClickEvent(KSslInfoDialog* self, QMouseEvent* event);
    friend void KSslInfoDialog_MouseMoveEvent(KSslInfoDialog* self, QMouseEvent* event);
    friend void KSslInfoDialog_QBaseMouseMoveEvent(KSslInfoDialog* self, QMouseEvent* event);
    friend void KSslInfoDialog_WheelEvent(KSslInfoDialog* self, QWheelEvent* event);
    friend void KSslInfoDialog_QBaseWheelEvent(KSslInfoDialog* self, QWheelEvent* event);
    friend void KSslInfoDialog_KeyReleaseEvent(KSslInfoDialog* self, QKeyEvent* event);
    friend void KSslInfoDialog_QBaseKeyReleaseEvent(KSslInfoDialog* self, QKeyEvent* event);
    friend void KSslInfoDialog_FocusInEvent(KSslInfoDialog* self, QFocusEvent* event);
    friend void KSslInfoDialog_QBaseFocusInEvent(KSslInfoDialog* self, QFocusEvent* event);
    friend void KSslInfoDialog_FocusOutEvent(KSslInfoDialog* self, QFocusEvent* event);
    friend void KSslInfoDialog_QBaseFocusOutEvent(KSslInfoDialog* self, QFocusEvent* event);
    friend void KSslInfoDialog_EnterEvent(KSslInfoDialog* self, QEnterEvent* event);
    friend void KSslInfoDialog_QBaseEnterEvent(KSslInfoDialog* self, QEnterEvent* event);
    friend void KSslInfoDialog_LeaveEvent(KSslInfoDialog* self, QEvent* event);
    friend void KSslInfoDialog_QBaseLeaveEvent(KSslInfoDialog* self, QEvent* event);
    friend void KSslInfoDialog_PaintEvent(KSslInfoDialog* self, QPaintEvent* event);
    friend void KSslInfoDialog_QBasePaintEvent(KSslInfoDialog* self, QPaintEvent* event);
    friend void KSslInfoDialog_MoveEvent(KSslInfoDialog* self, QMoveEvent* event);
    friend void KSslInfoDialog_QBaseMoveEvent(KSslInfoDialog* self, QMoveEvent* event);
    friend void KSslInfoDialog_TabletEvent(KSslInfoDialog* self, QTabletEvent* event);
    friend void KSslInfoDialog_QBaseTabletEvent(KSslInfoDialog* self, QTabletEvent* event);
    friend void KSslInfoDialog_ActionEvent(KSslInfoDialog* self, QActionEvent* event);
    friend void KSslInfoDialog_QBaseActionEvent(KSslInfoDialog* self, QActionEvent* event);
    friend void KSslInfoDialog_DragEnterEvent(KSslInfoDialog* self, QDragEnterEvent* event);
    friend void KSslInfoDialog_QBaseDragEnterEvent(KSslInfoDialog* self, QDragEnterEvent* event);
    friend void KSslInfoDialog_DragMoveEvent(KSslInfoDialog* self, QDragMoveEvent* event);
    friend void KSslInfoDialog_QBaseDragMoveEvent(KSslInfoDialog* self, QDragMoveEvent* event);
    friend void KSslInfoDialog_DragLeaveEvent(KSslInfoDialog* self, QDragLeaveEvent* event);
    friend void KSslInfoDialog_QBaseDragLeaveEvent(KSslInfoDialog* self, QDragLeaveEvent* event);
    friend void KSslInfoDialog_DropEvent(KSslInfoDialog* self, QDropEvent* event);
    friend void KSslInfoDialog_QBaseDropEvent(KSslInfoDialog* self, QDropEvent* event);
    friend void KSslInfoDialog_HideEvent(KSslInfoDialog* self, QHideEvent* event);
    friend void KSslInfoDialog_QBaseHideEvent(KSslInfoDialog* self, QHideEvent* event);
    friend bool KSslInfoDialog_NativeEvent(KSslInfoDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KSslInfoDialog_QBaseNativeEvent(KSslInfoDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KSslInfoDialog_ChangeEvent(KSslInfoDialog* self, QEvent* param1);
    friend void KSslInfoDialog_QBaseChangeEvent(KSslInfoDialog* self, QEvent* param1);
    friend int KSslInfoDialog_Metric(const KSslInfoDialog* self, int param1);
    friend int KSslInfoDialog_QBaseMetric(const KSslInfoDialog* self, int param1);
    friend void KSslInfoDialog_InitPainter(const KSslInfoDialog* self, QPainter* painter);
    friend void KSslInfoDialog_QBaseInitPainter(const KSslInfoDialog* self, QPainter* painter);
    friend QPaintDevice* KSslInfoDialog_Redirected(const KSslInfoDialog* self, QPoint* offset);
    friend QPaintDevice* KSslInfoDialog_QBaseRedirected(const KSslInfoDialog* self, QPoint* offset);
    friend QPainter* KSslInfoDialog_SharedPainter(const KSslInfoDialog* self);
    friend QPainter* KSslInfoDialog_QBaseSharedPainter(const KSslInfoDialog* self);
    friend void KSslInfoDialog_InputMethodEvent(KSslInfoDialog* self, QInputMethodEvent* param1);
    friend void KSslInfoDialog_QBaseInputMethodEvent(KSslInfoDialog* self, QInputMethodEvent* param1);
    friend bool KSslInfoDialog_FocusNextPrevChild(KSslInfoDialog* self, bool next);
    friend bool KSslInfoDialog_QBaseFocusNextPrevChild(KSslInfoDialog* self, bool next);
    friend void KSslInfoDialog_TimerEvent(KSslInfoDialog* self, QTimerEvent* event);
    friend void KSslInfoDialog_QBaseTimerEvent(KSslInfoDialog* self, QTimerEvent* event);
    friend void KSslInfoDialog_ChildEvent(KSslInfoDialog* self, QChildEvent* event);
    friend void KSslInfoDialog_QBaseChildEvent(KSslInfoDialog* self, QChildEvent* event);
    friend void KSslInfoDialog_CustomEvent(KSslInfoDialog* self, QEvent* event);
    friend void KSslInfoDialog_QBaseCustomEvent(KSslInfoDialog* self, QEvent* event);
    friend void KSslInfoDialog_ConnectNotify(KSslInfoDialog* self, const QMetaMethod* signal);
    friend void KSslInfoDialog_QBaseConnectNotify(KSslInfoDialog* self, const QMetaMethod* signal);
    friend void KSslInfoDialog_DisconnectNotify(KSslInfoDialog* self, const QMetaMethod* signal);
    friend void KSslInfoDialog_QBaseDisconnectNotify(KSslInfoDialog* self, const QMetaMethod* signal);
    friend void KSslInfoDialog_AdjustPosition(KSslInfoDialog* self, QWidget* param1);
    friend void KSslInfoDialog_QBaseAdjustPosition(KSslInfoDialog* self, QWidget* param1);
    friend void KSslInfoDialog_UpdateMicroFocus(KSslInfoDialog* self);
    friend void KSslInfoDialog_QBaseUpdateMicroFocus(KSslInfoDialog* self);
    friend void KSslInfoDialog_Create(KSslInfoDialog* self);
    friend void KSslInfoDialog_QBaseCreate(KSslInfoDialog* self);
    friend void KSslInfoDialog_Destroy(KSslInfoDialog* self);
    friend void KSslInfoDialog_QBaseDestroy(KSslInfoDialog* self);
    friend bool KSslInfoDialog_FocusNextChild(KSslInfoDialog* self);
    friend bool KSslInfoDialog_QBaseFocusNextChild(KSslInfoDialog* self);
    friend bool KSslInfoDialog_FocusPreviousChild(KSslInfoDialog* self);
    friend bool KSslInfoDialog_QBaseFocusPreviousChild(KSslInfoDialog* self);
    friend QObject* KSslInfoDialog_Sender(const KSslInfoDialog* self);
    friend QObject* KSslInfoDialog_QBaseSender(const KSslInfoDialog* self);
    friend int KSslInfoDialog_SenderSignalIndex(const KSslInfoDialog* self);
    friend int KSslInfoDialog_QBaseSenderSignalIndex(const KSslInfoDialog* self);
    friend int KSslInfoDialog_Receivers(const KSslInfoDialog* self, const char* signal);
    friend int KSslInfoDialog_QBaseReceivers(const KSslInfoDialog* self, const char* signal);
    friend bool KSslInfoDialog_IsSignalConnected(const KSslInfoDialog* self, const QMetaMethod* signal);
    friend bool KSslInfoDialog_QBaseIsSignalConnected(const KSslInfoDialog* self, const QMetaMethod* signal);
    friend double KSslInfoDialog_GetDecodedMetricF(const KSslInfoDialog* self, int metricA, int metricB);
    friend double KSslInfoDialog_QBaseGetDecodedMetricF(const KSslInfoDialog* self, int metricA, int metricB);
};

#endif
