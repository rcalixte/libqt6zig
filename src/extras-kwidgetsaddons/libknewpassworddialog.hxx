#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKNEWPASSWORDDIALOG_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKNEWPASSWORDDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNewPasswordDialog so that we can call protected methods
class VirtualKNewPasswordDialog final : public KNewPasswordDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKNewPasswordDialog = true;

    // Virtual class public types (including callbacks)
    using KNewPasswordDialog_Metacall_Callback = int (*)(KNewPasswordDialog*, int, int, void**);
    using KNewPasswordDialog_Accept_Callback = void (*)();
    using KNewPasswordDialog_CheckPassword_Callback = bool (*)(KNewPasswordDialog*, libqt_string);
    using KNewPasswordDialog_SetVisible_Callback = void (*)(KNewPasswordDialog*, bool);
    using KNewPasswordDialog_SizeHint_Callback = QSize* (*)();
    using KNewPasswordDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KNewPasswordDialog_Open_Callback = void (*)();
    using KNewPasswordDialog_Exec_Callback = int (*)();
    using KNewPasswordDialog_Done_Callback = void (*)(KNewPasswordDialog*, int);
    using KNewPasswordDialog_Reject_Callback = void (*)();
    using KNewPasswordDialog_KeyPressEvent_Callback = void (*)(KNewPasswordDialog*, QKeyEvent*);
    using KNewPasswordDialog_CloseEvent_Callback = void (*)(KNewPasswordDialog*, QCloseEvent*);
    using KNewPasswordDialog_ShowEvent_Callback = void (*)(KNewPasswordDialog*, QShowEvent*);
    using KNewPasswordDialog_ResizeEvent_Callback = void (*)(KNewPasswordDialog*, QResizeEvent*);
    using KNewPasswordDialog_ContextMenuEvent_Callback = void (*)(KNewPasswordDialog*, QContextMenuEvent*);
    using KNewPasswordDialog_EventFilter_Callback = bool (*)(KNewPasswordDialog*, QObject*, QEvent*);
    using KNewPasswordDialog_DevType_Callback = int (*)();
    using KNewPasswordDialog_HeightForWidth_Callback = int (*)(const KNewPasswordDialog*, int);
    using KNewPasswordDialog_HasHeightForWidth_Callback = bool (*)();
    using KNewPasswordDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KNewPasswordDialog_Event_Callback = bool (*)(KNewPasswordDialog*, QEvent*);
    using KNewPasswordDialog_MousePressEvent_Callback = void (*)(KNewPasswordDialog*, QMouseEvent*);
    using KNewPasswordDialog_MouseReleaseEvent_Callback = void (*)(KNewPasswordDialog*, QMouseEvent*);
    using KNewPasswordDialog_MouseDoubleClickEvent_Callback = void (*)(KNewPasswordDialog*, QMouseEvent*);
    using KNewPasswordDialog_MouseMoveEvent_Callback = void (*)(KNewPasswordDialog*, QMouseEvent*);
    using KNewPasswordDialog_WheelEvent_Callback = void (*)(KNewPasswordDialog*, QWheelEvent*);
    using KNewPasswordDialog_KeyReleaseEvent_Callback = void (*)(KNewPasswordDialog*, QKeyEvent*);
    using KNewPasswordDialog_FocusInEvent_Callback = void (*)(KNewPasswordDialog*, QFocusEvent*);
    using KNewPasswordDialog_FocusOutEvent_Callback = void (*)(KNewPasswordDialog*, QFocusEvent*);
    using KNewPasswordDialog_EnterEvent_Callback = void (*)(KNewPasswordDialog*, QEnterEvent*);
    using KNewPasswordDialog_LeaveEvent_Callback = void (*)(KNewPasswordDialog*, QEvent*);
    using KNewPasswordDialog_PaintEvent_Callback = void (*)(KNewPasswordDialog*, QPaintEvent*);
    using KNewPasswordDialog_MoveEvent_Callback = void (*)(KNewPasswordDialog*, QMoveEvent*);
    using KNewPasswordDialog_TabletEvent_Callback = void (*)(KNewPasswordDialog*, QTabletEvent*);
    using KNewPasswordDialog_ActionEvent_Callback = void (*)(KNewPasswordDialog*, QActionEvent*);
    using KNewPasswordDialog_DragEnterEvent_Callback = void (*)(KNewPasswordDialog*, QDragEnterEvent*);
    using KNewPasswordDialog_DragMoveEvent_Callback = void (*)(KNewPasswordDialog*, QDragMoveEvent*);
    using KNewPasswordDialog_DragLeaveEvent_Callback = void (*)(KNewPasswordDialog*, QDragLeaveEvent*);
    using KNewPasswordDialog_DropEvent_Callback = void (*)(KNewPasswordDialog*, QDropEvent*);
    using KNewPasswordDialog_HideEvent_Callback = void (*)(KNewPasswordDialog*, QHideEvent*);
    using KNewPasswordDialog_NativeEvent_Callback = bool (*)(KNewPasswordDialog*, libqt_string, void*, intptr_t*);
    using KNewPasswordDialog_ChangeEvent_Callback = void (*)(KNewPasswordDialog*, QEvent*);
    using KNewPasswordDialog_Metric_Callback = int (*)(const KNewPasswordDialog*, int);
    using KNewPasswordDialog_InitPainter_Callback = void (*)(const KNewPasswordDialog*, QPainter*);
    using KNewPasswordDialog_Redirected_Callback = QPaintDevice* (*)(const KNewPasswordDialog*, QPoint*);
    using KNewPasswordDialog_SharedPainter_Callback = QPainter* (*)();
    using KNewPasswordDialog_InputMethodEvent_Callback = void (*)(KNewPasswordDialog*, QInputMethodEvent*);
    using KNewPasswordDialog_InputMethodQuery_Callback = QVariant* (*)(const KNewPasswordDialog*, int);
    using KNewPasswordDialog_FocusNextPrevChild_Callback = bool (*)(KNewPasswordDialog*, bool);
    using KNewPasswordDialog_TimerEvent_Callback = void (*)(KNewPasswordDialog*, QTimerEvent*);
    using KNewPasswordDialog_ChildEvent_Callback = void (*)(KNewPasswordDialog*, QChildEvent*);
    using KNewPasswordDialog_CustomEvent_Callback = void (*)(KNewPasswordDialog*, QEvent*);
    using KNewPasswordDialog_ConnectNotify_Callback = void (*)(KNewPasswordDialog*, QMetaMethod*);
    using KNewPasswordDialog_DisconnectNotify_Callback = void (*)(KNewPasswordDialog*, QMetaMethod*);
    using KNewPasswordDialog_AdjustPosition_Callback = void (*)(KNewPasswordDialog*, QWidget*);
    using KNewPasswordDialog_UpdateMicroFocus_Callback = void (*)();
    using KNewPasswordDialog_Create_Callback = void (*)();
    using KNewPasswordDialog_Destroy_Callback = void (*)();
    using KNewPasswordDialog_FocusNextChild_Callback = bool (*)();
    using KNewPasswordDialog_FocusPreviousChild_Callback = bool (*)();
    using KNewPasswordDialog_Sender_Callback = QObject* (*)();
    using KNewPasswordDialog_SenderSignalIndex_Callback = int (*)();
    using KNewPasswordDialog_Receivers_Callback = int (*)(const KNewPasswordDialog*, const char*);
    using KNewPasswordDialog_IsSignalConnected_Callback = bool (*)(const KNewPasswordDialog*, QMetaMethod*);
    using KNewPasswordDialog_GetDecodedMetricF_Callback = double (*)(const KNewPasswordDialog*, int, int);

  protected:
    // Instance callback storage
    KNewPasswordDialog_Metacall_Callback knewpassworddialog_metacall_callback = nullptr;
    KNewPasswordDialog_Accept_Callback knewpassworddialog_accept_callback = nullptr;
    KNewPasswordDialog_CheckPassword_Callback knewpassworddialog_checkpassword_callback = nullptr;
    KNewPasswordDialog_SetVisible_Callback knewpassworddialog_setvisible_callback = nullptr;
    KNewPasswordDialog_SizeHint_Callback knewpassworddialog_sizehint_callback = nullptr;
    KNewPasswordDialog_MinimumSizeHint_Callback knewpassworddialog_minimumsizehint_callback = nullptr;
    KNewPasswordDialog_Open_Callback knewpassworddialog_open_callback = nullptr;
    KNewPasswordDialog_Exec_Callback knewpassworddialog_exec_callback = nullptr;
    KNewPasswordDialog_Done_Callback knewpassworddialog_done_callback = nullptr;
    KNewPasswordDialog_Reject_Callback knewpassworddialog_reject_callback = nullptr;
    KNewPasswordDialog_KeyPressEvent_Callback knewpassworddialog_keypressevent_callback = nullptr;
    KNewPasswordDialog_CloseEvent_Callback knewpassworddialog_closeevent_callback = nullptr;
    KNewPasswordDialog_ShowEvent_Callback knewpassworddialog_showevent_callback = nullptr;
    KNewPasswordDialog_ResizeEvent_Callback knewpassworddialog_resizeevent_callback = nullptr;
    KNewPasswordDialog_ContextMenuEvent_Callback knewpassworddialog_contextmenuevent_callback = nullptr;
    KNewPasswordDialog_EventFilter_Callback knewpassworddialog_eventfilter_callback = nullptr;
    KNewPasswordDialog_DevType_Callback knewpassworddialog_devtype_callback = nullptr;
    KNewPasswordDialog_HeightForWidth_Callback knewpassworddialog_heightforwidth_callback = nullptr;
    KNewPasswordDialog_HasHeightForWidth_Callback knewpassworddialog_hasheightforwidth_callback = nullptr;
    KNewPasswordDialog_PaintEngine_Callback knewpassworddialog_paintengine_callback = nullptr;
    KNewPasswordDialog_Event_Callback knewpassworddialog_event_callback = nullptr;
    KNewPasswordDialog_MousePressEvent_Callback knewpassworddialog_mousepressevent_callback = nullptr;
    KNewPasswordDialog_MouseReleaseEvent_Callback knewpassworddialog_mousereleaseevent_callback = nullptr;
    KNewPasswordDialog_MouseDoubleClickEvent_Callback knewpassworddialog_mousedoubleclickevent_callback = nullptr;
    KNewPasswordDialog_MouseMoveEvent_Callback knewpassworddialog_mousemoveevent_callback = nullptr;
    KNewPasswordDialog_WheelEvent_Callback knewpassworddialog_wheelevent_callback = nullptr;
    KNewPasswordDialog_KeyReleaseEvent_Callback knewpassworddialog_keyreleaseevent_callback = nullptr;
    KNewPasswordDialog_FocusInEvent_Callback knewpassworddialog_focusinevent_callback = nullptr;
    KNewPasswordDialog_FocusOutEvent_Callback knewpassworddialog_focusoutevent_callback = nullptr;
    KNewPasswordDialog_EnterEvent_Callback knewpassworddialog_enterevent_callback = nullptr;
    KNewPasswordDialog_LeaveEvent_Callback knewpassworddialog_leaveevent_callback = nullptr;
    KNewPasswordDialog_PaintEvent_Callback knewpassworddialog_paintevent_callback = nullptr;
    KNewPasswordDialog_MoveEvent_Callback knewpassworddialog_moveevent_callback = nullptr;
    KNewPasswordDialog_TabletEvent_Callback knewpassworddialog_tabletevent_callback = nullptr;
    KNewPasswordDialog_ActionEvent_Callback knewpassworddialog_actionevent_callback = nullptr;
    KNewPasswordDialog_DragEnterEvent_Callback knewpassworddialog_dragenterevent_callback = nullptr;
    KNewPasswordDialog_DragMoveEvent_Callback knewpassworddialog_dragmoveevent_callback = nullptr;
    KNewPasswordDialog_DragLeaveEvent_Callback knewpassworddialog_dragleaveevent_callback = nullptr;
    KNewPasswordDialog_DropEvent_Callback knewpassworddialog_dropevent_callback = nullptr;
    KNewPasswordDialog_HideEvent_Callback knewpassworddialog_hideevent_callback = nullptr;
    KNewPasswordDialog_NativeEvent_Callback knewpassworddialog_nativeevent_callback = nullptr;
    KNewPasswordDialog_ChangeEvent_Callback knewpassworddialog_changeevent_callback = nullptr;
    KNewPasswordDialog_Metric_Callback knewpassworddialog_metric_callback = nullptr;
    KNewPasswordDialog_InitPainter_Callback knewpassworddialog_initpainter_callback = nullptr;
    KNewPasswordDialog_Redirected_Callback knewpassworddialog_redirected_callback = nullptr;
    KNewPasswordDialog_SharedPainter_Callback knewpassworddialog_sharedpainter_callback = nullptr;
    KNewPasswordDialog_InputMethodEvent_Callback knewpassworddialog_inputmethodevent_callback = nullptr;
    KNewPasswordDialog_InputMethodQuery_Callback knewpassworddialog_inputmethodquery_callback = nullptr;
    KNewPasswordDialog_FocusNextPrevChild_Callback knewpassworddialog_focusnextprevchild_callback = nullptr;
    KNewPasswordDialog_TimerEvent_Callback knewpassworddialog_timerevent_callback = nullptr;
    KNewPasswordDialog_ChildEvent_Callback knewpassworddialog_childevent_callback = nullptr;
    KNewPasswordDialog_CustomEvent_Callback knewpassworddialog_customevent_callback = nullptr;
    KNewPasswordDialog_ConnectNotify_Callback knewpassworddialog_connectnotify_callback = nullptr;
    KNewPasswordDialog_DisconnectNotify_Callback knewpassworddialog_disconnectnotify_callback = nullptr;
    KNewPasswordDialog_AdjustPosition_Callback knewpassworddialog_adjustposition_callback = nullptr;
    KNewPasswordDialog_UpdateMicroFocus_Callback knewpassworddialog_updatemicrofocus_callback = nullptr;
    KNewPasswordDialog_Create_Callback knewpassworddialog_create_callback = nullptr;
    KNewPasswordDialog_Destroy_Callback knewpassworddialog_destroy_callback = nullptr;
    KNewPasswordDialog_FocusNextChild_Callback knewpassworddialog_focusnextchild_callback = nullptr;
    KNewPasswordDialog_FocusPreviousChild_Callback knewpassworddialog_focuspreviouschild_callback = nullptr;
    KNewPasswordDialog_Sender_Callback knewpassworddialog_sender_callback = nullptr;
    KNewPasswordDialog_SenderSignalIndex_Callback knewpassworddialog_sendersignalindex_callback = nullptr;
    KNewPasswordDialog_Receivers_Callback knewpassworddialog_receivers_callback = nullptr;
    KNewPasswordDialog_IsSignalConnected_Callback knewpassworddialog_issignalconnected_callback = nullptr;
    KNewPasswordDialog_GetDecodedMetricF_Callback knewpassworddialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool knewpassworddialog_metacall_isbase = false;
    mutable bool knewpassworddialog_accept_isbase = false;
    mutable bool knewpassworddialog_checkpassword_isbase = false;
    mutable bool knewpassworddialog_setvisible_isbase = false;
    mutable bool knewpassworddialog_sizehint_isbase = false;
    mutable bool knewpassworddialog_minimumsizehint_isbase = false;
    mutable bool knewpassworddialog_open_isbase = false;
    mutable bool knewpassworddialog_exec_isbase = false;
    mutable bool knewpassworddialog_done_isbase = false;
    mutable bool knewpassworddialog_reject_isbase = false;
    mutable bool knewpassworddialog_keypressevent_isbase = false;
    mutable bool knewpassworddialog_closeevent_isbase = false;
    mutable bool knewpassworddialog_showevent_isbase = false;
    mutable bool knewpassworddialog_resizeevent_isbase = false;
    mutable bool knewpassworddialog_contextmenuevent_isbase = false;
    mutable bool knewpassworddialog_eventfilter_isbase = false;
    mutable bool knewpassworddialog_devtype_isbase = false;
    mutable bool knewpassworddialog_heightforwidth_isbase = false;
    mutable bool knewpassworddialog_hasheightforwidth_isbase = false;
    mutable bool knewpassworddialog_paintengine_isbase = false;
    mutable bool knewpassworddialog_event_isbase = false;
    mutable bool knewpassworddialog_mousepressevent_isbase = false;
    mutable bool knewpassworddialog_mousereleaseevent_isbase = false;
    mutable bool knewpassworddialog_mousedoubleclickevent_isbase = false;
    mutable bool knewpassworddialog_mousemoveevent_isbase = false;
    mutable bool knewpassworddialog_wheelevent_isbase = false;
    mutable bool knewpassworddialog_keyreleaseevent_isbase = false;
    mutable bool knewpassworddialog_focusinevent_isbase = false;
    mutable bool knewpassworddialog_focusoutevent_isbase = false;
    mutable bool knewpassworddialog_enterevent_isbase = false;
    mutable bool knewpassworddialog_leaveevent_isbase = false;
    mutable bool knewpassworddialog_paintevent_isbase = false;
    mutable bool knewpassworddialog_moveevent_isbase = false;
    mutable bool knewpassworddialog_tabletevent_isbase = false;
    mutable bool knewpassworddialog_actionevent_isbase = false;
    mutable bool knewpassworddialog_dragenterevent_isbase = false;
    mutable bool knewpassworddialog_dragmoveevent_isbase = false;
    mutable bool knewpassworddialog_dragleaveevent_isbase = false;
    mutable bool knewpassworddialog_dropevent_isbase = false;
    mutable bool knewpassworddialog_hideevent_isbase = false;
    mutable bool knewpassworddialog_nativeevent_isbase = false;
    mutable bool knewpassworddialog_changeevent_isbase = false;
    mutable bool knewpassworddialog_metric_isbase = false;
    mutable bool knewpassworddialog_initpainter_isbase = false;
    mutable bool knewpassworddialog_redirected_isbase = false;
    mutable bool knewpassworddialog_sharedpainter_isbase = false;
    mutable bool knewpassworddialog_inputmethodevent_isbase = false;
    mutable bool knewpassworddialog_inputmethodquery_isbase = false;
    mutable bool knewpassworddialog_focusnextprevchild_isbase = false;
    mutable bool knewpassworddialog_timerevent_isbase = false;
    mutable bool knewpassworddialog_childevent_isbase = false;
    mutable bool knewpassworddialog_customevent_isbase = false;
    mutable bool knewpassworddialog_connectnotify_isbase = false;
    mutable bool knewpassworddialog_disconnectnotify_isbase = false;
    mutable bool knewpassworddialog_adjustposition_isbase = false;
    mutable bool knewpassworddialog_updatemicrofocus_isbase = false;
    mutable bool knewpassworddialog_create_isbase = false;
    mutable bool knewpassworddialog_destroy_isbase = false;
    mutable bool knewpassworddialog_focusnextchild_isbase = false;
    mutable bool knewpassworddialog_focuspreviouschild_isbase = false;
    mutable bool knewpassworddialog_sender_isbase = false;
    mutable bool knewpassworddialog_sendersignalindex_isbase = false;
    mutable bool knewpassworddialog_receivers_isbase = false;
    mutable bool knewpassworddialog_issignalconnected_isbase = false;
    mutable bool knewpassworddialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKNewPasswordDialog(QWidget* parent) : KNewPasswordDialog(parent) {};
    VirtualKNewPasswordDialog() : KNewPasswordDialog() {};

    ~VirtualKNewPasswordDialog() {
        knewpassworddialog_metacall_callback = nullptr;
        knewpassworddialog_accept_callback = nullptr;
        knewpassworddialog_checkpassword_callback = nullptr;
        knewpassworddialog_setvisible_callback = nullptr;
        knewpassworddialog_sizehint_callback = nullptr;
        knewpassworddialog_minimumsizehint_callback = nullptr;
        knewpassworddialog_open_callback = nullptr;
        knewpassworddialog_exec_callback = nullptr;
        knewpassworddialog_done_callback = nullptr;
        knewpassworddialog_reject_callback = nullptr;
        knewpassworddialog_keypressevent_callback = nullptr;
        knewpassworddialog_closeevent_callback = nullptr;
        knewpassworddialog_showevent_callback = nullptr;
        knewpassworddialog_resizeevent_callback = nullptr;
        knewpassworddialog_contextmenuevent_callback = nullptr;
        knewpassworddialog_eventfilter_callback = nullptr;
        knewpassworddialog_devtype_callback = nullptr;
        knewpassworddialog_heightforwidth_callback = nullptr;
        knewpassworddialog_hasheightforwidth_callback = nullptr;
        knewpassworddialog_paintengine_callback = nullptr;
        knewpassworddialog_event_callback = nullptr;
        knewpassworddialog_mousepressevent_callback = nullptr;
        knewpassworddialog_mousereleaseevent_callback = nullptr;
        knewpassworddialog_mousedoubleclickevent_callback = nullptr;
        knewpassworddialog_mousemoveevent_callback = nullptr;
        knewpassworddialog_wheelevent_callback = nullptr;
        knewpassworddialog_keyreleaseevent_callback = nullptr;
        knewpassworddialog_focusinevent_callback = nullptr;
        knewpassworddialog_focusoutevent_callback = nullptr;
        knewpassworddialog_enterevent_callback = nullptr;
        knewpassworddialog_leaveevent_callback = nullptr;
        knewpassworddialog_paintevent_callback = nullptr;
        knewpassworddialog_moveevent_callback = nullptr;
        knewpassworddialog_tabletevent_callback = nullptr;
        knewpassworddialog_actionevent_callback = nullptr;
        knewpassworddialog_dragenterevent_callback = nullptr;
        knewpassworddialog_dragmoveevent_callback = nullptr;
        knewpassworddialog_dragleaveevent_callback = nullptr;
        knewpassworddialog_dropevent_callback = nullptr;
        knewpassworddialog_hideevent_callback = nullptr;
        knewpassworddialog_nativeevent_callback = nullptr;
        knewpassworddialog_changeevent_callback = nullptr;
        knewpassworddialog_metric_callback = nullptr;
        knewpassworddialog_initpainter_callback = nullptr;
        knewpassworddialog_redirected_callback = nullptr;
        knewpassworddialog_sharedpainter_callback = nullptr;
        knewpassworddialog_inputmethodevent_callback = nullptr;
        knewpassworddialog_inputmethodquery_callback = nullptr;
        knewpassworddialog_focusnextprevchild_callback = nullptr;
        knewpassworddialog_timerevent_callback = nullptr;
        knewpassworddialog_childevent_callback = nullptr;
        knewpassworddialog_customevent_callback = nullptr;
        knewpassworddialog_connectnotify_callback = nullptr;
        knewpassworddialog_disconnectnotify_callback = nullptr;
        knewpassworddialog_adjustposition_callback = nullptr;
        knewpassworddialog_updatemicrofocus_callback = nullptr;
        knewpassworddialog_create_callback = nullptr;
        knewpassworddialog_destroy_callback = nullptr;
        knewpassworddialog_focusnextchild_callback = nullptr;
        knewpassworddialog_focuspreviouschild_callback = nullptr;
        knewpassworddialog_sender_callback = nullptr;
        knewpassworddialog_sendersignalindex_callback = nullptr;
        knewpassworddialog_receivers_callback = nullptr;
        knewpassworddialog_issignalconnected_callback = nullptr;
        knewpassworddialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKNewPasswordDialog_Metacall_Callback(KNewPasswordDialog_Metacall_Callback cb) { knewpassworddialog_metacall_callback = cb; }
    inline void setKNewPasswordDialog_Accept_Callback(KNewPasswordDialog_Accept_Callback cb) { knewpassworddialog_accept_callback = cb; }
    inline void setKNewPasswordDialog_CheckPassword_Callback(KNewPasswordDialog_CheckPassword_Callback cb) { knewpassworddialog_checkpassword_callback = cb; }
    inline void setKNewPasswordDialog_SetVisible_Callback(KNewPasswordDialog_SetVisible_Callback cb) { knewpassworddialog_setvisible_callback = cb; }
    inline void setKNewPasswordDialog_SizeHint_Callback(KNewPasswordDialog_SizeHint_Callback cb) { knewpassworddialog_sizehint_callback = cb; }
    inline void setKNewPasswordDialog_MinimumSizeHint_Callback(KNewPasswordDialog_MinimumSizeHint_Callback cb) { knewpassworddialog_minimumsizehint_callback = cb; }
    inline void setKNewPasswordDialog_Open_Callback(KNewPasswordDialog_Open_Callback cb) { knewpassworddialog_open_callback = cb; }
    inline void setKNewPasswordDialog_Exec_Callback(KNewPasswordDialog_Exec_Callback cb) { knewpassworddialog_exec_callback = cb; }
    inline void setKNewPasswordDialog_Done_Callback(KNewPasswordDialog_Done_Callback cb) { knewpassworddialog_done_callback = cb; }
    inline void setKNewPasswordDialog_Reject_Callback(KNewPasswordDialog_Reject_Callback cb) { knewpassworddialog_reject_callback = cb; }
    inline void setKNewPasswordDialog_KeyPressEvent_Callback(KNewPasswordDialog_KeyPressEvent_Callback cb) { knewpassworddialog_keypressevent_callback = cb; }
    inline void setKNewPasswordDialog_CloseEvent_Callback(KNewPasswordDialog_CloseEvent_Callback cb) { knewpassworddialog_closeevent_callback = cb; }
    inline void setKNewPasswordDialog_ShowEvent_Callback(KNewPasswordDialog_ShowEvent_Callback cb) { knewpassworddialog_showevent_callback = cb; }
    inline void setKNewPasswordDialog_ResizeEvent_Callback(KNewPasswordDialog_ResizeEvent_Callback cb) { knewpassworddialog_resizeevent_callback = cb; }
    inline void setKNewPasswordDialog_ContextMenuEvent_Callback(KNewPasswordDialog_ContextMenuEvent_Callback cb) { knewpassworddialog_contextmenuevent_callback = cb; }
    inline void setKNewPasswordDialog_EventFilter_Callback(KNewPasswordDialog_EventFilter_Callback cb) { knewpassworddialog_eventfilter_callback = cb; }
    inline void setKNewPasswordDialog_DevType_Callback(KNewPasswordDialog_DevType_Callback cb) { knewpassworddialog_devtype_callback = cb; }
    inline void setKNewPasswordDialog_HeightForWidth_Callback(KNewPasswordDialog_HeightForWidth_Callback cb) { knewpassworddialog_heightforwidth_callback = cb; }
    inline void setKNewPasswordDialog_HasHeightForWidth_Callback(KNewPasswordDialog_HasHeightForWidth_Callback cb) { knewpassworddialog_hasheightforwidth_callback = cb; }
    inline void setKNewPasswordDialog_PaintEngine_Callback(KNewPasswordDialog_PaintEngine_Callback cb) { knewpassworddialog_paintengine_callback = cb; }
    inline void setKNewPasswordDialog_Event_Callback(KNewPasswordDialog_Event_Callback cb) { knewpassworddialog_event_callback = cb; }
    inline void setKNewPasswordDialog_MousePressEvent_Callback(KNewPasswordDialog_MousePressEvent_Callback cb) { knewpassworddialog_mousepressevent_callback = cb; }
    inline void setKNewPasswordDialog_MouseReleaseEvent_Callback(KNewPasswordDialog_MouseReleaseEvent_Callback cb) { knewpassworddialog_mousereleaseevent_callback = cb; }
    inline void setKNewPasswordDialog_MouseDoubleClickEvent_Callback(KNewPasswordDialog_MouseDoubleClickEvent_Callback cb) { knewpassworddialog_mousedoubleclickevent_callback = cb; }
    inline void setKNewPasswordDialog_MouseMoveEvent_Callback(KNewPasswordDialog_MouseMoveEvent_Callback cb) { knewpassworddialog_mousemoveevent_callback = cb; }
    inline void setKNewPasswordDialog_WheelEvent_Callback(KNewPasswordDialog_WheelEvent_Callback cb) { knewpassworddialog_wheelevent_callback = cb; }
    inline void setKNewPasswordDialog_KeyReleaseEvent_Callback(KNewPasswordDialog_KeyReleaseEvent_Callback cb) { knewpassworddialog_keyreleaseevent_callback = cb; }
    inline void setKNewPasswordDialog_FocusInEvent_Callback(KNewPasswordDialog_FocusInEvent_Callback cb) { knewpassworddialog_focusinevent_callback = cb; }
    inline void setKNewPasswordDialog_FocusOutEvent_Callback(KNewPasswordDialog_FocusOutEvent_Callback cb) { knewpassworddialog_focusoutevent_callback = cb; }
    inline void setKNewPasswordDialog_EnterEvent_Callback(KNewPasswordDialog_EnterEvent_Callback cb) { knewpassworddialog_enterevent_callback = cb; }
    inline void setKNewPasswordDialog_LeaveEvent_Callback(KNewPasswordDialog_LeaveEvent_Callback cb) { knewpassworddialog_leaveevent_callback = cb; }
    inline void setKNewPasswordDialog_PaintEvent_Callback(KNewPasswordDialog_PaintEvent_Callback cb) { knewpassworddialog_paintevent_callback = cb; }
    inline void setKNewPasswordDialog_MoveEvent_Callback(KNewPasswordDialog_MoveEvent_Callback cb) { knewpassworddialog_moveevent_callback = cb; }
    inline void setKNewPasswordDialog_TabletEvent_Callback(KNewPasswordDialog_TabletEvent_Callback cb) { knewpassworddialog_tabletevent_callback = cb; }
    inline void setKNewPasswordDialog_ActionEvent_Callback(KNewPasswordDialog_ActionEvent_Callback cb) { knewpassworddialog_actionevent_callback = cb; }
    inline void setKNewPasswordDialog_DragEnterEvent_Callback(KNewPasswordDialog_DragEnterEvent_Callback cb) { knewpassworddialog_dragenterevent_callback = cb; }
    inline void setKNewPasswordDialog_DragMoveEvent_Callback(KNewPasswordDialog_DragMoveEvent_Callback cb) { knewpassworddialog_dragmoveevent_callback = cb; }
    inline void setKNewPasswordDialog_DragLeaveEvent_Callback(KNewPasswordDialog_DragLeaveEvent_Callback cb) { knewpassworddialog_dragleaveevent_callback = cb; }
    inline void setKNewPasswordDialog_DropEvent_Callback(KNewPasswordDialog_DropEvent_Callback cb) { knewpassworddialog_dropevent_callback = cb; }
    inline void setKNewPasswordDialog_HideEvent_Callback(KNewPasswordDialog_HideEvent_Callback cb) { knewpassworddialog_hideevent_callback = cb; }
    inline void setKNewPasswordDialog_NativeEvent_Callback(KNewPasswordDialog_NativeEvent_Callback cb) { knewpassworddialog_nativeevent_callback = cb; }
    inline void setKNewPasswordDialog_ChangeEvent_Callback(KNewPasswordDialog_ChangeEvent_Callback cb) { knewpassworddialog_changeevent_callback = cb; }
    inline void setKNewPasswordDialog_Metric_Callback(KNewPasswordDialog_Metric_Callback cb) { knewpassworddialog_metric_callback = cb; }
    inline void setKNewPasswordDialog_InitPainter_Callback(KNewPasswordDialog_InitPainter_Callback cb) { knewpassworddialog_initpainter_callback = cb; }
    inline void setKNewPasswordDialog_Redirected_Callback(KNewPasswordDialog_Redirected_Callback cb) { knewpassworddialog_redirected_callback = cb; }
    inline void setKNewPasswordDialog_SharedPainter_Callback(KNewPasswordDialog_SharedPainter_Callback cb) { knewpassworddialog_sharedpainter_callback = cb; }
    inline void setKNewPasswordDialog_InputMethodEvent_Callback(KNewPasswordDialog_InputMethodEvent_Callback cb) { knewpassworddialog_inputmethodevent_callback = cb; }
    inline void setKNewPasswordDialog_InputMethodQuery_Callback(KNewPasswordDialog_InputMethodQuery_Callback cb) { knewpassworddialog_inputmethodquery_callback = cb; }
    inline void setKNewPasswordDialog_FocusNextPrevChild_Callback(KNewPasswordDialog_FocusNextPrevChild_Callback cb) { knewpassworddialog_focusnextprevchild_callback = cb; }
    inline void setKNewPasswordDialog_TimerEvent_Callback(KNewPasswordDialog_TimerEvent_Callback cb) { knewpassworddialog_timerevent_callback = cb; }
    inline void setKNewPasswordDialog_ChildEvent_Callback(KNewPasswordDialog_ChildEvent_Callback cb) { knewpassworddialog_childevent_callback = cb; }
    inline void setKNewPasswordDialog_CustomEvent_Callback(KNewPasswordDialog_CustomEvent_Callback cb) { knewpassworddialog_customevent_callback = cb; }
    inline void setKNewPasswordDialog_ConnectNotify_Callback(KNewPasswordDialog_ConnectNotify_Callback cb) { knewpassworddialog_connectnotify_callback = cb; }
    inline void setKNewPasswordDialog_DisconnectNotify_Callback(KNewPasswordDialog_DisconnectNotify_Callback cb) { knewpassworddialog_disconnectnotify_callback = cb; }
    inline void setKNewPasswordDialog_AdjustPosition_Callback(KNewPasswordDialog_AdjustPosition_Callback cb) { knewpassworddialog_adjustposition_callback = cb; }
    inline void setKNewPasswordDialog_UpdateMicroFocus_Callback(KNewPasswordDialog_UpdateMicroFocus_Callback cb) { knewpassworddialog_updatemicrofocus_callback = cb; }
    inline void setKNewPasswordDialog_Create_Callback(KNewPasswordDialog_Create_Callback cb) { knewpassworddialog_create_callback = cb; }
    inline void setKNewPasswordDialog_Destroy_Callback(KNewPasswordDialog_Destroy_Callback cb) { knewpassworddialog_destroy_callback = cb; }
    inline void setKNewPasswordDialog_FocusNextChild_Callback(KNewPasswordDialog_FocusNextChild_Callback cb) { knewpassworddialog_focusnextchild_callback = cb; }
    inline void setKNewPasswordDialog_FocusPreviousChild_Callback(KNewPasswordDialog_FocusPreviousChild_Callback cb) { knewpassworddialog_focuspreviouschild_callback = cb; }
    inline void setKNewPasswordDialog_Sender_Callback(KNewPasswordDialog_Sender_Callback cb) { knewpassworddialog_sender_callback = cb; }
    inline void setKNewPasswordDialog_SenderSignalIndex_Callback(KNewPasswordDialog_SenderSignalIndex_Callback cb) { knewpassworddialog_sendersignalindex_callback = cb; }
    inline void setKNewPasswordDialog_Receivers_Callback(KNewPasswordDialog_Receivers_Callback cb) { knewpassworddialog_receivers_callback = cb; }
    inline void setKNewPasswordDialog_IsSignalConnected_Callback(KNewPasswordDialog_IsSignalConnected_Callback cb) { knewpassworddialog_issignalconnected_callback = cb; }
    inline void setKNewPasswordDialog_GetDecodedMetricF_Callback(KNewPasswordDialog_GetDecodedMetricF_Callback cb) { knewpassworddialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKNewPasswordDialog_Metacall_IsBase(bool value) const { knewpassworddialog_metacall_isbase = value; }
    inline void setKNewPasswordDialog_Accept_IsBase(bool value) const { knewpassworddialog_accept_isbase = value; }
    inline void setKNewPasswordDialog_CheckPassword_IsBase(bool value) const { knewpassworddialog_checkpassword_isbase = value; }
    inline void setKNewPasswordDialog_SetVisible_IsBase(bool value) const { knewpassworddialog_setvisible_isbase = value; }
    inline void setKNewPasswordDialog_SizeHint_IsBase(bool value) const { knewpassworddialog_sizehint_isbase = value; }
    inline void setKNewPasswordDialog_MinimumSizeHint_IsBase(bool value) const { knewpassworddialog_minimumsizehint_isbase = value; }
    inline void setKNewPasswordDialog_Open_IsBase(bool value) const { knewpassworddialog_open_isbase = value; }
    inline void setKNewPasswordDialog_Exec_IsBase(bool value) const { knewpassworddialog_exec_isbase = value; }
    inline void setKNewPasswordDialog_Done_IsBase(bool value) const { knewpassworddialog_done_isbase = value; }
    inline void setKNewPasswordDialog_Reject_IsBase(bool value) const { knewpassworddialog_reject_isbase = value; }
    inline void setKNewPasswordDialog_KeyPressEvent_IsBase(bool value) const { knewpassworddialog_keypressevent_isbase = value; }
    inline void setKNewPasswordDialog_CloseEvent_IsBase(bool value) const { knewpassworddialog_closeevent_isbase = value; }
    inline void setKNewPasswordDialog_ShowEvent_IsBase(bool value) const { knewpassworddialog_showevent_isbase = value; }
    inline void setKNewPasswordDialog_ResizeEvent_IsBase(bool value) const { knewpassworddialog_resizeevent_isbase = value; }
    inline void setKNewPasswordDialog_ContextMenuEvent_IsBase(bool value) const { knewpassworddialog_contextmenuevent_isbase = value; }
    inline void setKNewPasswordDialog_EventFilter_IsBase(bool value) const { knewpassworddialog_eventfilter_isbase = value; }
    inline void setKNewPasswordDialog_DevType_IsBase(bool value) const { knewpassworddialog_devtype_isbase = value; }
    inline void setKNewPasswordDialog_HeightForWidth_IsBase(bool value) const { knewpassworddialog_heightforwidth_isbase = value; }
    inline void setKNewPasswordDialog_HasHeightForWidth_IsBase(bool value) const { knewpassworddialog_hasheightforwidth_isbase = value; }
    inline void setKNewPasswordDialog_PaintEngine_IsBase(bool value) const { knewpassworddialog_paintengine_isbase = value; }
    inline void setKNewPasswordDialog_Event_IsBase(bool value) const { knewpassworddialog_event_isbase = value; }
    inline void setKNewPasswordDialog_MousePressEvent_IsBase(bool value) const { knewpassworddialog_mousepressevent_isbase = value; }
    inline void setKNewPasswordDialog_MouseReleaseEvent_IsBase(bool value) const { knewpassworddialog_mousereleaseevent_isbase = value; }
    inline void setKNewPasswordDialog_MouseDoubleClickEvent_IsBase(bool value) const { knewpassworddialog_mousedoubleclickevent_isbase = value; }
    inline void setKNewPasswordDialog_MouseMoveEvent_IsBase(bool value) const { knewpassworddialog_mousemoveevent_isbase = value; }
    inline void setKNewPasswordDialog_WheelEvent_IsBase(bool value) const { knewpassworddialog_wheelevent_isbase = value; }
    inline void setKNewPasswordDialog_KeyReleaseEvent_IsBase(bool value) const { knewpassworddialog_keyreleaseevent_isbase = value; }
    inline void setKNewPasswordDialog_FocusInEvent_IsBase(bool value) const { knewpassworddialog_focusinevent_isbase = value; }
    inline void setKNewPasswordDialog_FocusOutEvent_IsBase(bool value) const { knewpassworddialog_focusoutevent_isbase = value; }
    inline void setKNewPasswordDialog_EnterEvent_IsBase(bool value) const { knewpassworddialog_enterevent_isbase = value; }
    inline void setKNewPasswordDialog_LeaveEvent_IsBase(bool value) const { knewpassworddialog_leaveevent_isbase = value; }
    inline void setKNewPasswordDialog_PaintEvent_IsBase(bool value) const { knewpassworddialog_paintevent_isbase = value; }
    inline void setKNewPasswordDialog_MoveEvent_IsBase(bool value) const { knewpassworddialog_moveevent_isbase = value; }
    inline void setKNewPasswordDialog_TabletEvent_IsBase(bool value) const { knewpassworddialog_tabletevent_isbase = value; }
    inline void setKNewPasswordDialog_ActionEvent_IsBase(bool value) const { knewpassworddialog_actionevent_isbase = value; }
    inline void setKNewPasswordDialog_DragEnterEvent_IsBase(bool value) const { knewpassworddialog_dragenterevent_isbase = value; }
    inline void setKNewPasswordDialog_DragMoveEvent_IsBase(bool value) const { knewpassworddialog_dragmoveevent_isbase = value; }
    inline void setKNewPasswordDialog_DragLeaveEvent_IsBase(bool value) const { knewpassworddialog_dragleaveevent_isbase = value; }
    inline void setKNewPasswordDialog_DropEvent_IsBase(bool value) const { knewpassworddialog_dropevent_isbase = value; }
    inline void setKNewPasswordDialog_HideEvent_IsBase(bool value) const { knewpassworddialog_hideevent_isbase = value; }
    inline void setKNewPasswordDialog_NativeEvent_IsBase(bool value) const { knewpassworddialog_nativeevent_isbase = value; }
    inline void setKNewPasswordDialog_ChangeEvent_IsBase(bool value) const { knewpassworddialog_changeevent_isbase = value; }
    inline void setKNewPasswordDialog_Metric_IsBase(bool value) const { knewpassworddialog_metric_isbase = value; }
    inline void setKNewPasswordDialog_InitPainter_IsBase(bool value) const { knewpassworddialog_initpainter_isbase = value; }
    inline void setKNewPasswordDialog_Redirected_IsBase(bool value) const { knewpassworddialog_redirected_isbase = value; }
    inline void setKNewPasswordDialog_SharedPainter_IsBase(bool value) const { knewpassworddialog_sharedpainter_isbase = value; }
    inline void setKNewPasswordDialog_InputMethodEvent_IsBase(bool value) const { knewpassworddialog_inputmethodevent_isbase = value; }
    inline void setKNewPasswordDialog_InputMethodQuery_IsBase(bool value) const { knewpassworddialog_inputmethodquery_isbase = value; }
    inline void setKNewPasswordDialog_FocusNextPrevChild_IsBase(bool value) const { knewpassworddialog_focusnextprevchild_isbase = value; }
    inline void setKNewPasswordDialog_TimerEvent_IsBase(bool value) const { knewpassworddialog_timerevent_isbase = value; }
    inline void setKNewPasswordDialog_ChildEvent_IsBase(bool value) const { knewpassworddialog_childevent_isbase = value; }
    inline void setKNewPasswordDialog_CustomEvent_IsBase(bool value) const { knewpassworddialog_customevent_isbase = value; }
    inline void setKNewPasswordDialog_ConnectNotify_IsBase(bool value) const { knewpassworddialog_connectnotify_isbase = value; }
    inline void setKNewPasswordDialog_DisconnectNotify_IsBase(bool value) const { knewpassworddialog_disconnectnotify_isbase = value; }
    inline void setKNewPasswordDialog_AdjustPosition_IsBase(bool value) const { knewpassworddialog_adjustposition_isbase = value; }
    inline void setKNewPasswordDialog_UpdateMicroFocus_IsBase(bool value) const { knewpassworddialog_updatemicrofocus_isbase = value; }
    inline void setKNewPasswordDialog_Create_IsBase(bool value) const { knewpassworddialog_create_isbase = value; }
    inline void setKNewPasswordDialog_Destroy_IsBase(bool value) const { knewpassworddialog_destroy_isbase = value; }
    inline void setKNewPasswordDialog_FocusNextChild_IsBase(bool value) const { knewpassworddialog_focusnextchild_isbase = value; }
    inline void setKNewPasswordDialog_FocusPreviousChild_IsBase(bool value) const { knewpassworddialog_focuspreviouschild_isbase = value; }
    inline void setKNewPasswordDialog_Sender_IsBase(bool value) const { knewpassworddialog_sender_isbase = value; }
    inline void setKNewPasswordDialog_SenderSignalIndex_IsBase(bool value) const { knewpassworddialog_sendersignalindex_isbase = value; }
    inline void setKNewPasswordDialog_Receivers_IsBase(bool value) const { knewpassworddialog_receivers_isbase = value; }
    inline void setKNewPasswordDialog_IsSignalConnected_IsBase(bool value) const { knewpassworddialog_issignalconnected_isbase = value; }
    inline void setKNewPasswordDialog_GetDecodedMetricF_IsBase(bool value) const { knewpassworddialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knewpassworddialog_metacall_isbase) {
            knewpassworddialog_metacall_isbase = false;
            return KNewPasswordDialog::qt_metacall(param1, param2, param3);
        } else if (knewpassworddialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = knewpassworddialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KNewPasswordDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (knewpassworddialog_accept_isbase) {
            knewpassworddialog_accept_isbase = false;
            KNewPasswordDialog::accept();
        } else if (knewpassworddialog_accept_callback != nullptr) {
            knewpassworddialog_accept_callback();
        } else {
            KNewPasswordDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool checkPassword(const QString& param1) override {
        if (knewpassworddialog_checkpassword_isbase) {
            knewpassworddialog_checkpassword_isbase = false;
            return KNewPasswordDialog::checkPassword(param1);
        } else if (knewpassworddialog_checkpassword_callback != nullptr) {
            const QString param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            libqt_string param1_str;
            param1_str.len = param1_b.length();
            param1_str.data = static_cast<const char*>(malloc(param1_str.len + 1));
            memcpy((void*)param1_str.data, param1_b.data(), param1_str.len);
            ((char*)param1_str.data)[param1_str.len] = '\0';
            libqt_string cbval1 = param1_str;

            bool callback_ret = knewpassworddialog_checkpassword_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNewPasswordDialog::checkPassword(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (knewpassworddialog_setvisible_isbase) {
            knewpassworddialog_setvisible_isbase = false;
            KNewPasswordDialog::setVisible(visible);
        } else if (knewpassworddialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            knewpassworddialog_setvisible_callback(this, cbval1);
        } else {
            KNewPasswordDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (knewpassworddialog_sizehint_isbase) {
            knewpassworddialog_sizehint_isbase = false;
            return KNewPasswordDialog::sizeHint();
        } else if (knewpassworddialog_sizehint_callback != nullptr) {
            QSize* callback_ret = knewpassworddialog_sizehint_callback();
            return *callback_ret;
        } else {
            return KNewPasswordDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (knewpassworddialog_minimumsizehint_isbase) {
            knewpassworddialog_minimumsizehint_isbase = false;
            return KNewPasswordDialog::minimumSizeHint();
        } else if (knewpassworddialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = knewpassworddialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KNewPasswordDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (knewpassworddialog_open_isbase) {
            knewpassworddialog_open_isbase = false;
            KNewPasswordDialog::open();
        } else if (knewpassworddialog_open_callback != nullptr) {
            knewpassworddialog_open_callback();
        } else {
            KNewPasswordDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (knewpassworddialog_exec_isbase) {
            knewpassworddialog_exec_isbase = false;
            return KNewPasswordDialog::exec();
        } else if (knewpassworddialog_exec_callback != nullptr) {
            int callback_ret = knewpassworddialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KNewPasswordDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (knewpassworddialog_done_isbase) {
            knewpassworddialog_done_isbase = false;
            KNewPasswordDialog::done(param1);
        } else if (knewpassworddialog_done_callback != nullptr) {
            int cbval1 = param1;

            knewpassworddialog_done_callback(this, cbval1);
        } else {
            KNewPasswordDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (knewpassworddialog_reject_isbase) {
            knewpassworddialog_reject_isbase = false;
            KNewPasswordDialog::reject();
        } else if (knewpassworddialog_reject_callback != nullptr) {
            knewpassworddialog_reject_callback();
        } else {
            KNewPasswordDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (knewpassworddialog_keypressevent_isbase) {
            knewpassworddialog_keypressevent_isbase = false;
            KNewPasswordDialog::keyPressEvent(param1);
        } else if (knewpassworddialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            knewpassworddialog_keypressevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (knewpassworddialog_closeevent_isbase) {
            knewpassworddialog_closeevent_isbase = false;
            KNewPasswordDialog::closeEvent(param1);
        } else if (knewpassworddialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            knewpassworddialog_closeevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (knewpassworddialog_showevent_isbase) {
            knewpassworddialog_showevent_isbase = false;
            KNewPasswordDialog::showEvent(param1);
        } else if (knewpassworddialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            knewpassworddialog_showevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (knewpassworddialog_resizeevent_isbase) {
            knewpassworddialog_resizeevent_isbase = false;
            KNewPasswordDialog::resizeEvent(param1);
        } else if (knewpassworddialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            knewpassworddialog_resizeevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (knewpassworddialog_contextmenuevent_isbase) {
            knewpassworddialog_contextmenuevent_isbase = false;
            KNewPasswordDialog::contextMenuEvent(param1);
        } else if (knewpassworddialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            knewpassworddialog_contextmenuevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (knewpassworddialog_eventfilter_isbase) {
            knewpassworddialog_eventfilter_isbase = false;
            return KNewPasswordDialog::eventFilter(param1, param2);
        } else if (knewpassworddialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = knewpassworddialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KNewPasswordDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (knewpassworddialog_devtype_isbase) {
            knewpassworddialog_devtype_isbase = false;
            return KNewPasswordDialog::devType();
        } else if (knewpassworddialog_devtype_callback != nullptr) {
            int callback_ret = knewpassworddialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KNewPasswordDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (knewpassworddialog_heightforwidth_isbase) {
            knewpassworddialog_heightforwidth_isbase = false;
            return KNewPasswordDialog::heightForWidth(param1);
        } else if (knewpassworddialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = knewpassworddialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNewPasswordDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (knewpassworddialog_hasheightforwidth_isbase) {
            knewpassworddialog_hasheightforwidth_isbase = false;
            return KNewPasswordDialog::hasHeightForWidth();
        } else if (knewpassworddialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = knewpassworddialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KNewPasswordDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (knewpassworddialog_paintengine_isbase) {
            knewpassworddialog_paintengine_isbase = false;
            return KNewPasswordDialog::paintEngine();
        } else if (knewpassworddialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = knewpassworddialog_paintengine_callback();
            return callback_ret;
        } else {
            return KNewPasswordDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knewpassworddialog_event_isbase) {
            knewpassworddialog_event_isbase = false;
            return KNewPasswordDialog::event(event);
        } else if (knewpassworddialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = knewpassworddialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNewPasswordDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (knewpassworddialog_mousepressevent_isbase) {
            knewpassworddialog_mousepressevent_isbase = false;
            KNewPasswordDialog::mousePressEvent(event);
        } else if (knewpassworddialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            knewpassworddialog_mousepressevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (knewpassworddialog_mousereleaseevent_isbase) {
            knewpassworddialog_mousereleaseevent_isbase = false;
            KNewPasswordDialog::mouseReleaseEvent(event);
        } else if (knewpassworddialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            knewpassworddialog_mousereleaseevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (knewpassworddialog_mousedoubleclickevent_isbase) {
            knewpassworddialog_mousedoubleclickevent_isbase = false;
            KNewPasswordDialog::mouseDoubleClickEvent(event);
        } else if (knewpassworddialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            knewpassworddialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (knewpassworddialog_mousemoveevent_isbase) {
            knewpassworddialog_mousemoveevent_isbase = false;
            KNewPasswordDialog::mouseMoveEvent(event);
        } else if (knewpassworddialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            knewpassworddialog_mousemoveevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (knewpassworddialog_wheelevent_isbase) {
            knewpassworddialog_wheelevent_isbase = false;
            KNewPasswordDialog::wheelEvent(event);
        } else if (knewpassworddialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            knewpassworddialog_wheelevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (knewpassworddialog_keyreleaseevent_isbase) {
            knewpassworddialog_keyreleaseevent_isbase = false;
            KNewPasswordDialog::keyReleaseEvent(event);
        } else if (knewpassworddialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            knewpassworddialog_keyreleaseevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (knewpassworddialog_focusinevent_isbase) {
            knewpassworddialog_focusinevent_isbase = false;
            KNewPasswordDialog::focusInEvent(event);
        } else if (knewpassworddialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            knewpassworddialog_focusinevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (knewpassworddialog_focusoutevent_isbase) {
            knewpassworddialog_focusoutevent_isbase = false;
            KNewPasswordDialog::focusOutEvent(event);
        } else if (knewpassworddialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            knewpassworddialog_focusoutevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (knewpassworddialog_enterevent_isbase) {
            knewpassworddialog_enterevent_isbase = false;
            KNewPasswordDialog::enterEvent(event);
        } else if (knewpassworddialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            knewpassworddialog_enterevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (knewpassworddialog_leaveevent_isbase) {
            knewpassworddialog_leaveevent_isbase = false;
            KNewPasswordDialog::leaveEvent(event);
        } else if (knewpassworddialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            knewpassworddialog_leaveevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (knewpassworddialog_paintevent_isbase) {
            knewpassworddialog_paintevent_isbase = false;
            KNewPasswordDialog::paintEvent(event);
        } else if (knewpassworddialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            knewpassworddialog_paintevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (knewpassworddialog_moveevent_isbase) {
            knewpassworddialog_moveevent_isbase = false;
            KNewPasswordDialog::moveEvent(event);
        } else if (knewpassworddialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            knewpassworddialog_moveevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (knewpassworddialog_tabletevent_isbase) {
            knewpassworddialog_tabletevent_isbase = false;
            KNewPasswordDialog::tabletEvent(event);
        } else if (knewpassworddialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            knewpassworddialog_tabletevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (knewpassworddialog_actionevent_isbase) {
            knewpassworddialog_actionevent_isbase = false;
            KNewPasswordDialog::actionEvent(event);
        } else if (knewpassworddialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            knewpassworddialog_actionevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (knewpassworddialog_dragenterevent_isbase) {
            knewpassworddialog_dragenterevent_isbase = false;
            KNewPasswordDialog::dragEnterEvent(event);
        } else if (knewpassworddialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            knewpassworddialog_dragenterevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (knewpassworddialog_dragmoveevent_isbase) {
            knewpassworddialog_dragmoveevent_isbase = false;
            KNewPasswordDialog::dragMoveEvent(event);
        } else if (knewpassworddialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            knewpassworddialog_dragmoveevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (knewpassworddialog_dragleaveevent_isbase) {
            knewpassworddialog_dragleaveevent_isbase = false;
            KNewPasswordDialog::dragLeaveEvent(event);
        } else if (knewpassworddialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            knewpassworddialog_dragleaveevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (knewpassworddialog_dropevent_isbase) {
            knewpassworddialog_dropevent_isbase = false;
            KNewPasswordDialog::dropEvent(event);
        } else if (knewpassworddialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            knewpassworddialog_dropevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (knewpassworddialog_hideevent_isbase) {
            knewpassworddialog_hideevent_isbase = false;
            KNewPasswordDialog::hideEvent(event);
        } else if (knewpassworddialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            knewpassworddialog_hideevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (knewpassworddialog_nativeevent_isbase) {
            knewpassworddialog_nativeevent_isbase = false;
            return KNewPasswordDialog::nativeEvent(eventType, message, result);
        } else if (knewpassworddialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = knewpassworddialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KNewPasswordDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (knewpassworddialog_changeevent_isbase) {
            knewpassworddialog_changeevent_isbase = false;
            KNewPasswordDialog::changeEvent(param1);
        } else if (knewpassworddialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            knewpassworddialog_changeevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (knewpassworddialog_metric_isbase) {
            knewpassworddialog_metric_isbase = false;
            return KNewPasswordDialog::metric(param1);
        } else if (knewpassworddialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = knewpassworddialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNewPasswordDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (knewpassworddialog_initpainter_isbase) {
            knewpassworddialog_initpainter_isbase = false;
            KNewPasswordDialog::initPainter(painter);
        } else if (knewpassworddialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            knewpassworddialog_initpainter_callback(this, cbval1);
        } else {
            KNewPasswordDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (knewpassworddialog_redirected_isbase) {
            knewpassworddialog_redirected_isbase = false;
            return KNewPasswordDialog::redirected(offset);
        } else if (knewpassworddialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = knewpassworddialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNewPasswordDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (knewpassworddialog_sharedpainter_isbase) {
            knewpassworddialog_sharedpainter_isbase = false;
            return KNewPasswordDialog::sharedPainter();
        } else if (knewpassworddialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = knewpassworddialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return KNewPasswordDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (knewpassworddialog_inputmethodevent_isbase) {
            knewpassworddialog_inputmethodevent_isbase = false;
            KNewPasswordDialog::inputMethodEvent(param1);
        } else if (knewpassworddialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            knewpassworddialog_inputmethodevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (knewpassworddialog_inputmethodquery_isbase) {
            knewpassworddialog_inputmethodquery_isbase = false;
            return KNewPasswordDialog::inputMethodQuery(param1);
        } else if (knewpassworddialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = knewpassworddialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KNewPasswordDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (knewpassworddialog_focusnextprevchild_isbase) {
            knewpassworddialog_focusnextprevchild_isbase = false;
            return KNewPasswordDialog::focusNextPrevChild(next);
        } else if (knewpassworddialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = knewpassworddialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNewPasswordDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knewpassworddialog_timerevent_isbase) {
            knewpassworddialog_timerevent_isbase = false;
            KNewPasswordDialog::timerEvent(event);
        } else if (knewpassworddialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            knewpassworddialog_timerevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knewpassworddialog_childevent_isbase) {
            knewpassworddialog_childevent_isbase = false;
            KNewPasswordDialog::childEvent(event);
        } else if (knewpassworddialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            knewpassworddialog_childevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knewpassworddialog_customevent_isbase) {
            knewpassworddialog_customevent_isbase = false;
            KNewPasswordDialog::customEvent(event);
        } else if (knewpassworddialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            knewpassworddialog_customevent_callback(this, cbval1);
        } else {
            KNewPasswordDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knewpassworddialog_connectnotify_isbase) {
            knewpassworddialog_connectnotify_isbase = false;
            KNewPasswordDialog::connectNotify(signal);
        } else if (knewpassworddialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knewpassworddialog_connectnotify_callback(this, cbval1);
        } else {
            KNewPasswordDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knewpassworddialog_disconnectnotify_isbase) {
            knewpassworddialog_disconnectnotify_isbase = false;
            KNewPasswordDialog::disconnectNotify(signal);
        } else if (knewpassworddialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knewpassworddialog_disconnectnotify_callback(this, cbval1);
        } else {
            KNewPasswordDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (knewpassworddialog_adjustposition_isbase) {
            knewpassworddialog_adjustposition_isbase = false;
            KNewPasswordDialog::adjustPosition(param1);
        } else if (knewpassworddialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            knewpassworddialog_adjustposition_callback(this, cbval1);
        } else {
            KNewPasswordDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (knewpassworddialog_updatemicrofocus_isbase) {
            knewpassworddialog_updatemicrofocus_isbase = false;
            KNewPasswordDialog::updateMicroFocus();
        } else if (knewpassworddialog_updatemicrofocus_callback != nullptr) {
            knewpassworddialog_updatemicrofocus_callback();
        } else {
            KNewPasswordDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (knewpassworddialog_create_isbase) {
            knewpassworddialog_create_isbase = false;
            KNewPasswordDialog::create();
        } else if (knewpassworddialog_create_callback != nullptr) {
            knewpassworddialog_create_callback();
        } else {
            KNewPasswordDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (knewpassworddialog_destroy_isbase) {
            knewpassworddialog_destroy_isbase = false;
            KNewPasswordDialog::destroy();
        } else if (knewpassworddialog_destroy_callback != nullptr) {
            knewpassworddialog_destroy_callback();
        } else {
            KNewPasswordDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (knewpassworddialog_focusnextchild_isbase) {
            knewpassworddialog_focusnextchild_isbase = false;
            return KNewPasswordDialog::focusNextChild();
        } else if (knewpassworddialog_focusnextchild_callback != nullptr) {
            bool callback_ret = knewpassworddialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return KNewPasswordDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (knewpassworddialog_focuspreviouschild_isbase) {
            knewpassworddialog_focuspreviouschild_isbase = false;
            return KNewPasswordDialog::focusPreviousChild();
        } else if (knewpassworddialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = knewpassworddialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KNewPasswordDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knewpassworddialog_sender_isbase) {
            knewpassworddialog_sender_isbase = false;
            return KNewPasswordDialog::sender();
        } else if (knewpassworddialog_sender_callback != nullptr) {
            QObject* callback_ret = knewpassworddialog_sender_callback();
            return callback_ret;
        } else {
            return KNewPasswordDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knewpassworddialog_sendersignalindex_isbase) {
            knewpassworddialog_sendersignalindex_isbase = false;
            return KNewPasswordDialog::senderSignalIndex();
        } else if (knewpassworddialog_sendersignalindex_callback != nullptr) {
            int callback_ret = knewpassworddialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KNewPasswordDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knewpassworddialog_receivers_isbase) {
            knewpassworddialog_receivers_isbase = false;
            return KNewPasswordDialog::receivers(signal);
        } else if (knewpassworddialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = knewpassworddialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNewPasswordDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knewpassworddialog_issignalconnected_isbase) {
            knewpassworddialog_issignalconnected_isbase = false;
            return KNewPasswordDialog::isSignalConnected(signal);
        } else if (knewpassworddialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = knewpassworddialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNewPasswordDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (knewpassworddialog_getdecodedmetricf_isbase) {
            knewpassworddialog_getdecodedmetricf_isbase = false;
            return KNewPasswordDialog::getDecodedMetricF(metricA, metricB);
        } else if (knewpassworddialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = knewpassworddialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KNewPasswordDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KNewPasswordDialog_CheckPassword(KNewPasswordDialog* self, const libqt_string param1);
    friend bool KNewPasswordDialog_QBaseCheckPassword(KNewPasswordDialog* self, const libqt_string param1);
    friend void KNewPasswordDialog_KeyPressEvent(KNewPasswordDialog* self, QKeyEvent* param1);
    friend void KNewPasswordDialog_QBaseKeyPressEvent(KNewPasswordDialog* self, QKeyEvent* param1);
    friend void KNewPasswordDialog_CloseEvent(KNewPasswordDialog* self, QCloseEvent* param1);
    friend void KNewPasswordDialog_QBaseCloseEvent(KNewPasswordDialog* self, QCloseEvent* param1);
    friend void KNewPasswordDialog_ShowEvent(KNewPasswordDialog* self, QShowEvent* param1);
    friend void KNewPasswordDialog_QBaseShowEvent(KNewPasswordDialog* self, QShowEvent* param1);
    friend void KNewPasswordDialog_ResizeEvent(KNewPasswordDialog* self, QResizeEvent* param1);
    friend void KNewPasswordDialog_QBaseResizeEvent(KNewPasswordDialog* self, QResizeEvent* param1);
    friend void KNewPasswordDialog_ContextMenuEvent(KNewPasswordDialog* self, QContextMenuEvent* param1);
    friend void KNewPasswordDialog_QBaseContextMenuEvent(KNewPasswordDialog* self, QContextMenuEvent* param1);
    friend bool KNewPasswordDialog_EventFilter(KNewPasswordDialog* self, QObject* param1, QEvent* param2);
    friend bool KNewPasswordDialog_QBaseEventFilter(KNewPasswordDialog* self, QObject* param1, QEvent* param2);
    friend bool KNewPasswordDialog_Event(KNewPasswordDialog* self, QEvent* event);
    friend bool KNewPasswordDialog_QBaseEvent(KNewPasswordDialog* self, QEvent* event);
    friend void KNewPasswordDialog_MousePressEvent(KNewPasswordDialog* self, QMouseEvent* event);
    friend void KNewPasswordDialog_QBaseMousePressEvent(KNewPasswordDialog* self, QMouseEvent* event);
    friend void KNewPasswordDialog_MouseReleaseEvent(KNewPasswordDialog* self, QMouseEvent* event);
    friend void KNewPasswordDialog_QBaseMouseReleaseEvent(KNewPasswordDialog* self, QMouseEvent* event);
    friend void KNewPasswordDialog_MouseDoubleClickEvent(KNewPasswordDialog* self, QMouseEvent* event);
    friend void KNewPasswordDialog_QBaseMouseDoubleClickEvent(KNewPasswordDialog* self, QMouseEvent* event);
    friend void KNewPasswordDialog_MouseMoveEvent(KNewPasswordDialog* self, QMouseEvent* event);
    friend void KNewPasswordDialog_QBaseMouseMoveEvent(KNewPasswordDialog* self, QMouseEvent* event);
    friend void KNewPasswordDialog_WheelEvent(KNewPasswordDialog* self, QWheelEvent* event);
    friend void KNewPasswordDialog_QBaseWheelEvent(KNewPasswordDialog* self, QWheelEvent* event);
    friend void KNewPasswordDialog_KeyReleaseEvent(KNewPasswordDialog* self, QKeyEvent* event);
    friend void KNewPasswordDialog_QBaseKeyReleaseEvent(KNewPasswordDialog* self, QKeyEvent* event);
    friend void KNewPasswordDialog_FocusInEvent(KNewPasswordDialog* self, QFocusEvent* event);
    friend void KNewPasswordDialog_QBaseFocusInEvent(KNewPasswordDialog* self, QFocusEvent* event);
    friend void KNewPasswordDialog_FocusOutEvent(KNewPasswordDialog* self, QFocusEvent* event);
    friend void KNewPasswordDialog_QBaseFocusOutEvent(KNewPasswordDialog* self, QFocusEvent* event);
    friend void KNewPasswordDialog_EnterEvent(KNewPasswordDialog* self, QEnterEvent* event);
    friend void KNewPasswordDialog_QBaseEnterEvent(KNewPasswordDialog* self, QEnterEvent* event);
    friend void KNewPasswordDialog_LeaveEvent(KNewPasswordDialog* self, QEvent* event);
    friend void KNewPasswordDialog_QBaseLeaveEvent(KNewPasswordDialog* self, QEvent* event);
    friend void KNewPasswordDialog_PaintEvent(KNewPasswordDialog* self, QPaintEvent* event);
    friend void KNewPasswordDialog_QBasePaintEvent(KNewPasswordDialog* self, QPaintEvent* event);
    friend void KNewPasswordDialog_MoveEvent(KNewPasswordDialog* self, QMoveEvent* event);
    friend void KNewPasswordDialog_QBaseMoveEvent(KNewPasswordDialog* self, QMoveEvent* event);
    friend void KNewPasswordDialog_TabletEvent(KNewPasswordDialog* self, QTabletEvent* event);
    friend void KNewPasswordDialog_QBaseTabletEvent(KNewPasswordDialog* self, QTabletEvent* event);
    friend void KNewPasswordDialog_ActionEvent(KNewPasswordDialog* self, QActionEvent* event);
    friend void KNewPasswordDialog_QBaseActionEvent(KNewPasswordDialog* self, QActionEvent* event);
    friend void KNewPasswordDialog_DragEnterEvent(KNewPasswordDialog* self, QDragEnterEvent* event);
    friend void KNewPasswordDialog_QBaseDragEnterEvent(KNewPasswordDialog* self, QDragEnterEvent* event);
    friend void KNewPasswordDialog_DragMoveEvent(KNewPasswordDialog* self, QDragMoveEvent* event);
    friend void KNewPasswordDialog_QBaseDragMoveEvent(KNewPasswordDialog* self, QDragMoveEvent* event);
    friend void KNewPasswordDialog_DragLeaveEvent(KNewPasswordDialog* self, QDragLeaveEvent* event);
    friend void KNewPasswordDialog_QBaseDragLeaveEvent(KNewPasswordDialog* self, QDragLeaveEvent* event);
    friend void KNewPasswordDialog_DropEvent(KNewPasswordDialog* self, QDropEvent* event);
    friend void KNewPasswordDialog_QBaseDropEvent(KNewPasswordDialog* self, QDropEvent* event);
    friend void KNewPasswordDialog_HideEvent(KNewPasswordDialog* self, QHideEvent* event);
    friend void KNewPasswordDialog_QBaseHideEvent(KNewPasswordDialog* self, QHideEvent* event);
    friend bool KNewPasswordDialog_NativeEvent(KNewPasswordDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KNewPasswordDialog_QBaseNativeEvent(KNewPasswordDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KNewPasswordDialog_ChangeEvent(KNewPasswordDialog* self, QEvent* param1);
    friend void KNewPasswordDialog_QBaseChangeEvent(KNewPasswordDialog* self, QEvent* param1);
    friend int KNewPasswordDialog_Metric(const KNewPasswordDialog* self, int param1);
    friend int KNewPasswordDialog_QBaseMetric(const KNewPasswordDialog* self, int param1);
    friend void KNewPasswordDialog_InitPainter(const KNewPasswordDialog* self, QPainter* painter);
    friend void KNewPasswordDialog_QBaseInitPainter(const KNewPasswordDialog* self, QPainter* painter);
    friend QPaintDevice* KNewPasswordDialog_Redirected(const KNewPasswordDialog* self, QPoint* offset);
    friend QPaintDevice* KNewPasswordDialog_QBaseRedirected(const KNewPasswordDialog* self, QPoint* offset);
    friend QPainter* KNewPasswordDialog_SharedPainter(const KNewPasswordDialog* self);
    friend QPainter* KNewPasswordDialog_QBaseSharedPainter(const KNewPasswordDialog* self);
    friend void KNewPasswordDialog_InputMethodEvent(KNewPasswordDialog* self, QInputMethodEvent* param1);
    friend void KNewPasswordDialog_QBaseInputMethodEvent(KNewPasswordDialog* self, QInputMethodEvent* param1);
    friend bool KNewPasswordDialog_FocusNextPrevChild(KNewPasswordDialog* self, bool next);
    friend bool KNewPasswordDialog_QBaseFocusNextPrevChild(KNewPasswordDialog* self, bool next);
    friend void KNewPasswordDialog_TimerEvent(KNewPasswordDialog* self, QTimerEvent* event);
    friend void KNewPasswordDialog_QBaseTimerEvent(KNewPasswordDialog* self, QTimerEvent* event);
    friend void KNewPasswordDialog_ChildEvent(KNewPasswordDialog* self, QChildEvent* event);
    friend void KNewPasswordDialog_QBaseChildEvent(KNewPasswordDialog* self, QChildEvent* event);
    friend void KNewPasswordDialog_CustomEvent(KNewPasswordDialog* self, QEvent* event);
    friend void KNewPasswordDialog_QBaseCustomEvent(KNewPasswordDialog* self, QEvent* event);
    friend void KNewPasswordDialog_ConnectNotify(KNewPasswordDialog* self, const QMetaMethod* signal);
    friend void KNewPasswordDialog_QBaseConnectNotify(KNewPasswordDialog* self, const QMetaMethod* signal);
    friend void KNewPasswordDialog_DisconnectNotify(KNewPasswordDialog* self, const QMetaMethod* signal);
    friend void KNewPasswordDialog_QBaseDisconnectNotify(KNewPasswordDialog* self, const QMetaMethod* signal);
    friend void KNewPasswordDialog_AdjustPosition(KNewPasswordDialog* self, QWidget* param1);
    friend void KNewPasswordDialog_QBaseAdjustPosition(KNewPasswordDialog* self, QWidget* param1);
    friend void KNewPasswordDialog_UpdateMicroFocus(KNewPasswordDialog* self);
    friend void KNewPasswordDialog_QBaseUpdateMicroFocus(KNewPasswordDialog* self);
    friend void KNewPasswordDialog_Create(KNewPasswordDialog* self);
    friend void KNewPasswordDialog_QBaseCreate(KNewPasswordDialog* self);
    friend void KNewPasswordDialog_Destroy(KNewPasswordDialog* self);
    friend void KNewPasswordDialog_QBaseDestroy(KNewPasswordDialog* self);
    friend bool KNewPasswordDialog_FocusNextChild(KNewPasswordDialog* self);
    friend bool KNewPasswordDialog_QBaseFocusNextChild(KNewPasswordDialog* self);
    friend bool KNewPasswordDialog_FocusPreviousChild(KNewPasswordDialog* self);
    friend bool KNewPasswordDialog_QBaseFocusPreviousChild(KNewPasswordDialog* self);
    friend QObject* KNewPasswordDialog_Sender(const KNewPasswordDialog* self);
    friend QObject* KNewPasswordDialog_QBaseSender(const KNewPasswordDialog* self);
    friend int KNewPasswordDialog_SenderSignalIndex(const KNewPasswordDialog* self);
    friend int KNewPasswordDialog_QBaseSenderSignalIndex(const KNewPasswordDialog* self);
    friend int KNewPasswordDialog_Receivers(const KNewPasswordDialog* self, const char* signal);
    friend int KNewPasswordDialog_QBaseReceivers(const KNewPasswordDialog* self, const char* signal);
    friend bool KNewPasswordDialog_IsSignalConnected(const KNewPasswordDialog* self, const QMetaMethod* signal);
    friend bool KNewPasswordDialog_QBaseIsSignalConnected(const KNewPasswordDialog* self, const QMetaMethod* signal);
    friend double KNewPasswordDialog_GetDecodedMetricF(const KNewPasswordDialog* self, int metricA, int metricB);
    friend double KNewPasswordDialog_QBaseGetDecodedMetricF(const KNewPasswordDialog* self, int metricA, int metricB);
};

#endif
