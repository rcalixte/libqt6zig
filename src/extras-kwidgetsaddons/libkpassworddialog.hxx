#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPASSWORDDIALOG_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPASSWORDDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPasswordDialog so that we can call protected methods
class VirtualKPasswordDialog final : public KPasswordDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKPasswordDialog = true;

    // Virtual class public types (including callbacks)
    using KPasswordDialog_Metacall_Callback = int (*)(KPasswordDialog*, int, int, void**);
    using KPasswordDialog_Accept_Callback = void (*)();
    using KPasswordDialog_CheckPassword_Callback = bool (*)();
    using KPasswordDialog_SetVisible_Callback = void (*)(KPasswordDialog*, bool);
    using KPasswordDialog_SizeHint_Callback = QSize* (*)();
    using KPasswordDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KPasswordDialog_Open_Callback = void (*)();
    using KPasswordDialog_Exec_Callback = int (*)();
    using KPasswordDialog_Done_Callback = void (*)(KPasswordDialog*, int);
    using KPasswordDialog_Reject_Callback = void (*)();
    using KPasswordDialog_KeyPressEvent_Callback = void (*)(KPasswordDialog*, QKeyEvent*);
    using KPasswordDialog_CloseEvent_Callback = void (*)(KPasswordDialog*, QCloseEvent*);
    using KPasswordDialog_ShowEvent_Callback = void (*)(KPasswordDialog*, QShowEvent*);
    using KPasswordDialog_ResizeEvent_Callback = void (*)(KPasswordDialog*, QResizeEvent*);
    using KPasswordDialog_ContextMenuEvent_Callback = void (*)(KPasswordDialog*, QContextMenuEvent*);
    using KPasswordDialog_EventFilter_Callback = bool (*)(KPasswordDialog*, QObject*, QEvent*);
    using KPasswordDialog_DevType_Callback = int (*)();
    using KPasswordDialog_HeightForWidth_Callback = int (*)(const KPasswordDialog*, int);
    using KPasswordDialog_HasHeightForWidth_Callback = bool (*)();
    using KPasswordDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KPasswordDialog_Event_Callback = bool (*)(KPasswordDialog*, QEvent*);
    using KPasswordDialog_MousePressEvent_Callback = void (*)(KPasswordDialog*, QMouseEvent*);
    using KPasswordDialog_MouseReleaseEvent_Callback = void (*)(KPasswordDialog*, QMouseEvent*);
    using KPasswordDialog_MouseDoubleClickEvent_Callback = void (*)(KPasswordDialog*, QMouseEvent*);
    using KPasswordDialog_MouseMoveEvent_Callback = void (*)(KPasswordDialog*, QMouseEvent*);
    using KPasswordDialog_WheelEvent_Callback = void (*)(KPasswordDialog*, QWheelEvent*);
    using KPasswordDialog_KeyReleaseEvent_Callback = void (*)(KPasswordDialog*, QKeyEvent*);
    using KPasswordDialog_FocusInEvent_Callback = void (*)(KPasswordDialog*, QFocusEvent*);
    using KPasswordDialog_FocusOutEvent_Callback = void (*)(KPasswordDialog*, QFocusEvent*);
    using KPasswordDialog_EnterEvent_Callback = void (*)(KPasswordDialog*, QEnterEvent*);
    using KPasswordDialog_LeaveEvent_Callback = void (*)(KPasswordDialog*, QEvent*);
    using KPasswordDialog_PaintEvent_Callback = void (*)(KPasswordDialog*, QPaintEvent*);
    using KPasswordDialog_MoveEvent_Callback = void (*)(KPasswordDialog*, QMoveEvent*);
    using KPasswordDialog_TabletEvent_Callback = void (*)(KPasswordDialog*, QTabletEvent*);
    using KPasswordDialog_ActionEvent_Callback = void (*)(KPasswordDialog*, QActionEvent*);
    using KPasswordDialog_DragEnterEvent_Callback = void (*)(KPasswordDialog*, QDragEnterEvent*);
    using KPasswordDialog_DragMoveEvent_Callback = void (*)(KPasswordDialog*, QDragMoveEvent*);
    using KPasswordDialog_DragLeaveEvent_Callback = void (*)(KPasswordDialog*, QDragLeaveEvent*);
    using KPasswordDialog_DropEvent_Callback = void (*)(KPasswordDialog*, QDropEvent*);
    using KPasswordDialog_HideEvent_Callback = void (*)(KPasswordDialog*, QHideEvent*);
    using KPasswordDialog_NativeEvent_Callback = bool (*)(KPasswordDialog*, libqt_string, void*, intptr_t*);
    using KPasswordDialog_ChangeEvent_Callback = void (*)(KPasswordDialog*, QEvent*);
    using KPasswordDialog_Metric_Callback = int (*)(const KPasswordDialog*, int);
    using KPasswordDialog_InitPainter_Callback = void (*)(const KPasswordDialog*, QPainter*);
    using KPasswordDialog_Redirected_Callback = QPaintDevice* (*)(const KPasswordDialog*, QPoint*);
    using KPasswordDialog_SharedPainter_Callback = QPainter* (*)();
    using KPasswordDialog_InputMethodEvent_Callback = void (*)(KPasswordDialog*, QInputMethodEvent*);
    using KPasswordDialog_InputMethodQuery_Callback = QVariant* (*)(const KPasswordDialog*, int);
    using KPasswordDialog_FocusNextPrevChild_Callback = bool (*)(KPasswordDialog*, bool);
    using KPasswordDialog_TimerEvent_Callback = void (*)(KPasswordDialog*, QTimerEvent*);
    using KPasswordDialog_ChildEvent_Callback = void (*)(KPasswordDialog*, QChildEvent*);
    using KPasswordDialog_CustomEvent_Callback = void (*)(KPasswordDialog*, QEvent*);
    using KPasswordDialog_ConnectNotify_Callback = void (*)(KPasswordDialog*, QMetaMethod*);
    using KPasswordDialog_DisconnectNotify_Callback = void (*)(KPasswordDialog*, QMetaMethod*);
    using KPasswordDialog_AdjustPosition_Callback = void (*)(KPasswordDialog*, QWidget*);
    using KPasswordDialog_UpdateMicroFocus_Callback = void (*)();
    using KPasswordDialog_Create_Callback = void (*)();
    using KPasswordDialog_Destroy_Callback = void (*)();
    using KPasswordDialog_FocusNextChild_Callback = bool (*)();
    using KPasswordDialog_FocusPreviousChild_Callback = bool (*)();
    using KPasswordDialog_Sender_Callback = QObject* (*)();
    using KPasswordDialog_SenderSignalIndex_Callback = int (*)();
    using KPasswordDialog_Receivers_Callback = int (*)(const KPasswordDialog*, const char*);
    using KPasswordDialog_IsSignalConnected_Callback = bool (*)(const KPasswordDialog*, QMetaMethod*);
    using KPasswordDialog_GetDecodedMetricF_Callback = double (*)(const KPasswordDialog*, int, int);

  protected:
    // Instance callback storage
    KPasswordDialog_Metacall_Callback kpassworddialog_metacall_callback = nullptr;
    KPasswordDialog_Accept_Callback kpassworddialog_accept_callback = nullptr;
    KPasswordDialog_CheckPassword_Callback kpassworddialog_checkpassword_callback = nullptr;
    KPasswordDialog_SetVisible_Callback kpassworddialog_setvisible_callback = nullptr;
    KPasswordDialog_SizeHint_Callback kpassworddialog_sizehint_callback = nullptr;
    KPasswordDialog_MinimumSizeHint_Callback kpassworddialog_minimumsizehint_callback = nullptr;
    KPasswordDialog_Open_Callback kpassworddialog_open_callback = nullptr;
    KPasswordDialog_Exec_Callback kpassworddialog_exec_callback = nullptr;
    KPasswordDialog_Done_Callback kpassworddialog_done_callback = nullptr;
    KPasswordDialog_Reject_Callback kpassworddialog_reject_callback = nullptr;
    KPasswordDialog_KeyPressEvent_Callback kpassworddialog_keypressevent_callback = nullptr;
    KPasswordDialog_CloseEvent_Callback kpassworddialog_closeevent_callback = nullptr;
    KPasswordDialog_ShowEvent_Callback kpassworddialog_showevent_callback = nullptr;
    KPasswordDialog_ResizeEvent_Callback kpassworddialog_resizeevent_callback = nullptr;
    KPasswordDialog_ContextMenuEvent_Callback kpassworddialog_contextmenuevent_callback = nullptr;
    KPasswordDialog_EventFilter_Callback kpassworddialog_eventfilter_callback = nullptr;
    KPasswordDialog_DevType_Callback kpassworddialog_devtype_callback = nullptr;
    KPasswordDialog_HeightForWidth_Callback kpassworddialog_heightforwidth_callback = nullptr;
    KPasswordDialog_HasHeightForWidth_Callback kpassworddialog_hasheightforwidth_callback = nullptr;
    KPasswordDialog_PaintEngine_Callback kpassworddialog_paintengine_callback = nullptr;
    KPasswordDialog_Event_Callback kpassworddialog_event_callback = nullptr;
    KPasswordDialog_MousePressEvent_Callback kpassworddialog_mousepressevent_callback = nullptr;
    KPasswordDialog_MouseReleaseEvent_Callback kpassworddialog_mousereleaseevent_callback = nullptr;
    KPasswordDialog_MouseDoubleClickEvent_Callback kpassworddialog_mousedoubleclickevent_callback = nullptr;
    KPasswordDialog_MouseMoveEvent_Callback kpassworddialog_mousemoveevent_callback = nullptr;
    KPasswordDialog_WheelEvent_Callback kpassworddialog_wheelevent_callback = nullptr;
    KPasswordDialog_KeyReleaseEvent_Callback kpassworddialog_keyreleaseevent_callback = nullptr;
    KPasswordDialog_FocusInEvent_Callback kpassworddialog_focusinevent_callback = nullptr;
    KPasswordDialog_FocusOutEvent_Callback kpassworddialog_focusoutevent_callback = nullptr;
    KPasswordDialog_EnterEvent_Callback kpassworddialog_enterevent_callback = nullptr;
    KPasswordDialog_LeaveEvent_Callback kpassworddialog_leaveevent_callback = nullptr;
    KPasswordDialog_PaintEvent_Callback kpassworddialog_paintevent_callback = nullptr;
    KPasswordDialog_MoveEvent_Callback kpassworddialog_moveevent_callback = nullptr;
    KPasswordDialog_TabletEvent_Callback kpassworddialog_tabletevent_callback = nullptr;
    KPasswordDialog_ActionEvent_Callback kpassworddialog_actionevent_callback = nullptr;
    KPasswordDialog_DragEnterEvent_Callback kpassworddialog_dragenterevent_callback = nullptr;
    KPasswordDialog_DragMoveEvent_Callback kpassworddialog_dragmoveevent_callback = nullptr;
    KPasswordDialog_DragLeaveEvent_Callback kpassworddialog_dragleaveevent_callback = nullptr;
    KPasswordDialog_DropEvent_Callback kpassworddialog_dropevent_callback = nullptr;
    KPasswordDialog_HideEvent_Callback kpassworddialog_hideevent_callback = nullptr;
    KPasswordDialog_NativeEvent_Callback kpassworddialog_nativeevent_callback = nullptr;
    KPasswordDialog_ChangeEvent_Callback kpassworddialog_changeevent_callback = nullptr;
    KPasswordDialog_Metric_Callback kpassworddialog_metric_callback = nullptr;
    KPasswordDialog_InitPainter_Callback kpassworddialog_initpainter_callback = nullptr;
    KPasswordDialog_Redirected_Callback kpassworddialog_redirected_callback = nullptr;
    KPasswordDialog_SharedPainter_Callback kpassworddialog_sharedpainter_callback = nullptr;
    KPasswordDialog_InputMethodEvent_Callback kpassworddialog_inputmethodevent_callback = nullptr;
    KPasswordDialog_InputMethodQuery_Callback kpassworddialog_inputmethodquery_callback = nullptr;
    KPasswordDialog_FocusNextPrevChild_Callback kpassworddialog_focusnextprevchild_callback = nullptr;
    KPasswordDialog_TimerEvent_Callback kpassworddialog_timerevent_callback = nullptr;
    KPasswordDialog_ChildEvent_Callback kpassworddialog_childevent_callback = nullptr;
    KPasswordDialog_CustomEvent_Callback kpassworddialog_customevent_callback = nullptr;
    KPasswordDialog_ConnectNotify_Callback kpassworddialog_connectnotify_callback = nullptr;
    KPasswordDialog_DisconnectNotify_Callback kpassworddialog_disconnectnotify_callback = nullptr;
    KPasswordDialog_AdjustPosition_Callback kpassworddialog_adjustposition_callback = nullptr;
    KPasswordDialog_UpdateMicroFocus_Callback kpassworddialog_updatemicrofocus_callback = nullptr;
    KPasswordDialog_Create_Callback kpassworddialog_create_callback = nullptr;
    KPasswordDialog_Destroy_Callback kpassworddialog_destroy_callback = nullptr;
    KPasswordDialog_FocusNextChild_Callback kpassworddialog_focusnextchild_callback = nullptr;
    KPasswordDialog_FocusPreviousChild_Callback kpassworddialog_focuspreviouschild_callback = nullptr;
    KPasswordDialog_Sender_Callback kpassworddialog_sender_callback = nullptr;
    KPasswordDialog_SenderSignalIndex_Callback kpassworddialog_sendersignalindex_callback = nullptr;
    KPasswordDialog_Receivers_Callback kpassworddialog_receivers_callback = nullptr;
    KPasswordDialog_IsSignalConnected_Callback kpassworddialog_issignalconnected_callback = nullptr;
    KPasswordDialog_GetDecodedMetricF_Callback kpassworddialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kpassworddialog_metacall_isbase = false;
    mutable bool kpassworddialog_accept_isbase = false;
    mutable bool kpassworddialog_checkpassword_isbase = false;
    mutable bool kpassworddialog_setvisible_isbase = false;
    mutable bool kpassworddialog_sizehint_isbase = false;
    mutable bool kpassworddialog_minimumsizehint_isbase = false;
    mutable bool kpassworddialog_open_isbase = false;
    mutable bool kpassworddialog_exec_isbase = false;
    mutable bool kpassworddialog_done_isbase = false;
    mutable bool kpassworddialog_reject_isbase = false;
    mutable bool kpassworddialog_keypressevent_isbase = false;
    mutable bool kpassworddialog_closeevent_isbase = false;
    mutable bool kpassworddialog_showevent_isbase = false;
    mutable bool kpassworddialog_resizeevent_isbase = false;
    mutable bool kpassworddialog_contextmenuevent_isbase = false;
    mutable bool kpassworddialog_eventfilter_isbase = false;
    mutable bool kpassworddialog_devtype_isbase = false;
    mutable bool kpassworddialog_heightforwidth_isbase = false;
    mutable bool kpassworddialog_hasheightforwidth_isbase = false;
    mutable bool kpassworddialog_paintengine_isbase = false;
    mutable bool kpassworddialog_event_isbase = false;
    mutable bool kpassworddialog_mousepressevent_isbase = false;
    mutable bool kpassworddialog_mousereleaseevent_isbase = false;
    mutable bool kpassworddialog_mousedoubleclickevent_isbase = false;
    mutable bool kpassworddialog_mousemoveevent_isbase = false;
    mutable bool kpassworddialog_wheelevent_isbase = false;
    mutable bool kpassworddialog_keyreleaseevent_isbase = false;
    mutable bool kpassworddialog_focusinevent_isbase = false;
    mutable bool kpassworddialog_focusoutevent_isbase = false;
    mutable bool kpassworddialog_enterevent_isbase = false;
    mutable bool kpassworddialog_leaveevent_isbase = false;
    mutable bool kpassworddialog_paintevent_isbase = false;
    mutable bool kpassworddialog_moveevent_isbase = false;
    mutable bool kpassworddialog_tabletevent_isbase = false;
    mutable bool kpassworddialog_actionevent_isbase = false;
    mutable bool kpassworddialog_dragenterevent_isbase = false;
    mutable bool kpassworddialog_dragmoveevent_isbase = false;
    mutable bool kpassworddialog_dragleaveevent_isbase = false;
    mutable bool kpassworddialog_dropevent_isbase = false;
    mutable bool kpassworddialog_hideevent_isbase = false;
    mutable bool kpassworddialog_nativeevent_isbase = false;
    mutable bool kpassworddialog_changeevent_isbase = false;
    mutable bool kpassworddialog_metric_isbase = false;
    mutable bool kpassworddialog_initpainter_isbase = false;
    mutable bool kpassworddialog_redirected_isbase = false;
    mutable bool kpassworddialog_sharedpainter_isbase = false;
    mutable bool kpassworddialog_inputmethodevent_isbase = false;
    mutable bool kpassworddialog_inputmethodquery_isbase = false;
    mutable bool kpassworddialog_focusnextprevchild_isbase = false;
    mutable bool kpassworddialog_timerevent_isbase = false;
    mutable bool kpassworddialog_childevent_isbase = false;
    mutable bool kpassworddialog_customevent_isbase = false;
    mutable bool kpassworddialog_connectnotify_isbase = false;
    mutable bool kpassworddialog_disconnectnotify_isbase = false;
    mutable bool kpassworddialog_adjustposition_isbase = false;
    mutable bool kpassworddialog_updatemicrofocus_isbase = false;
    mutable bool kpassworddialog_create_isbase = false;
    mutable bool kpassworddialog_destroy_isbase = false;
    mutable bool kpassworddialog_focusnextchild_isbase = false;
    mutable bool kpassworddialog_focuspreviouschild_isbase = false;
    mutable bool kpassworddialog_sender_isbase = false;
    mutable bool kpassworddialog_sendersignalindex_isbase = false;
    mutable bool kpassworddialog_receivers_isbase = false;
    mutable bool kpassworddialog_issignalconnected_isbase = false;
    mutable bool kpassworddialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKPasswordDialog(QWidget* parent) : KPasswordDialog(parent) {};
    VirtualKPasswordDialog() : KPasswordDialog() {};
    VirtualKPasswordDialog(QWidget* parent, const KPasswordDialog::KPasswordDialogFlags& flags) : KPasswordDialog(parent, flags) {};

    ~VirtualKPasswordDialog() {
        kpassworddialog_metacall_callback = nullptr;
        kpassworddialog_accept_callback = nullptr;
        kpassworddialog_checkpassword_callback = nullptr;
        kpassworddialog_setvisible_callback = nullptr;
        kpassworddialog_sizehint_callback = nullptr;
        kpassworddialog_minimumsizehint_callback = nullptr;
        kpassworddialog_open_callback = nullptr;
        kpassworddialog_exec_callback = nullptr;
        kpassworddialog_done_callback = nullptr;
        kpassworddialog_reject_callback = nullptr;
        kpassworddialog_keypressevent_callback = nullptr;
        kpassworddialog_closeevent_callback = nullptr;
        kpassworddialog_showevent_callback = nullptr;
        kpassworddialog_resizeevent_callback = nullptr;
        kpassworddialog_contextmenuevent_callback = nullptr;
        kpassworddialog_eventfilter_callback = nullptr;
        kpassworddialog_devtype_callback = nullptr;
        kpassworddialog_heightforwidth_callback = nullptr;
        kpassworddialog_hasheightforwidth_callback = nullptr;
        kpassworddialog_paintengine_callback = nullptr;
        kpassworddialog_event_callback = nullptr;
        kpassworddialog_mousepressevent_callback = nullptr;
        kpassworddialog_mousereleaseevent_callback = nullptr;
        kpassworddialog_mousedoubleclickevent_callback = nullptr;
        kpassworddialog_mousemoveevent_callback = nullptr;
        kpassworddialog_wheelevent_callback = nullptr;
        kpassworddialog_keyreleaseevent_callback = nullptr;
        kpassworddialog_focusinevent_callback = nullptr;
        kpassworddialog_focusoutevent_callback = nullptr;
        kpassworddialog_enterevent_callback = nullptr;
        kpassworddialog_leaveevent_callback = nullptr;
        kpassworddialog_paintevent_callback = nullptr;
        kpassworddialog_moveevent_callback = nullptr;
        kpassworddialog_tabletevent_callback = nullptr;
        kpassworddialog_actionevent_callback = nullptr;
        kpassworddialog_dragenterevent_callback = nullptr;
        kpassworddialog_dragmoveevent_callback = nullptr;
        kpassworddialog_dragleaveevent_callback = nullptr;
        kpassworddialog_dropevent_callback = nullptr;
        kpassworddialog_hideevent_callback = nullptr;
        kpassworddialog_nativeevent_callback = nullptr;
        kpassworddialog_changeevent_callback = nullptr;
        kpassworddialog_metric_callback = nullptr;
        kpassworddialog_initpainter_callback = nullptr;
        kpassworddialog_redirected_callback = nullptr;
        kpassworddialog_sharedpainter_callback = nullptr;
        kpassworddialog_inputmethodevent_callback = nullptr;
        kpassworddialog_inputmethodquery_callback = nullptr;
        kpassworddialog_focusnextprevchild_callback = nullptr;
        kpassworddialog_timerevent_callback = nullptr;
        kpassworddialog_childevent_callback = nullptr;
        kpassworddialog_customevent_callback = nullptr;
        kpassworddialog_connectnotify_callback = nullptr;
        kpassworddialog_disconnectnotify_callback = nullptr;
        kpassworddialog_adjustposition_callback = nullptr;
        kpassworddialog_updatemicrofocus_callback = nullptr;
        kpassworddialog_create_callback = nullptr;
        kpassworddialog_destroy_callback = nullptr;
        kpassworddialog_focusnextchild_callback = nullptr;
        kpassworddialog_focuspreviouschild_callback = nullptr;
        kpassworddialog_sender_callback = nullptr;
        kpassworddialog_sendersignalindex_callback = nullptr;
        kpassworddialog_receivers_callback = nullptr;
        kpassworddialog_issignalconnected_callback = nullptr;
        kpassworddialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKPasswordDialog_Metacall_Callback(KPasswordDialog_Metacall_Callback cb) { kpassworddialog_metacall_callback = cb; }
    inline void setKPasswordDialog_Accept_Callback(KPasswordDialog_Accept_Callback cb) { kpassworddialog_accept_callback = cb; }
    inline void setKPasswordDialog_CheckPassword_Callback(KPasswordDialog_CheckPassword_Callback cb) { kpassworddialog_checkpassword_callback = cb; }
    inline void setKPasswordDialog_SetVisible_Callback(KPasswordDialog_SetVisible_Callback cb) { kpassworddialog_setvisible_callback = cb; }
    inline void setKPasswordDialog_SizeHint_Callback(KPasswordDialog_SizeHint_Callback cb) { kpassworddialog_sizehint_callback = cb; }
    inline void setKPasswordDialog_MinimumSizeHint_Callback(KPasswordDialog_MinimumSizeHint_Callback cb) { kpassworddialog_minimumsizehint_callback = cb; }
    inline void setKPasswordDialog_Open_Callback(KPasswordDialog_Open_Callback cb) { kpassworddialog_open_callback = cb; }
    inline void setKPasswordDialog_Exec_Callback(KPasswordDialog_Exec_Callback cb) { kpassworddialog_exec_callback = cb; }
    inline void setKPasswordDialog_Done_Callback(KPasswordDialog_Done_Callback cb) { kpassworddialog_done_callback = cb; }
    inline void setKPasswordDialog_Reject_Callback(KPasswordDialog_Reject_Callback cb) { kpassworddialog_reject_callback = cb; }
    inline void setKPasswordDialog_KeyPressEvent_Callback(KPasswordDialog_KeyPressEvent_Callback cb) { kpassworddialog_keypressevent_callback = cb; }
    inline void setKPasswordDialog_CloseEvent_Callback(KPasswordDialog_CloseEvent_Callback cb) { kpassworddialog_closeevent_callback = cb; }
    inline void setKPasswordDialog_ShowEvent_Callback(KPasswordDialog_ShowEvent_Callback cb) { kpassworddialog_showevent_callback = cb; }
    inline void setKPasswordDialog_ResizeEvent_Callback(KPasswordDialog_ResizeEvent_Callback cb) { kpassworddialog_resizeevent_callback = cb; }
    inline void setKPasswordDialog_ContextMenuEvent_Callback(KPasswordDialog_ContextMenuEvent_Callback cb) { kpassworddialog_contextmenuevent_callback = cb; }
    inline void setKPasswordDialog_EventFilter_Callback(KPasswordDialog_EventFilter_Callback cb) { kpassworddialog_eventfilter_callback = cb; }
    inline void setKPasswordDialog_DevType_Callback(KPasswordDialog_DevType_Callback cb) { kpassworddialog_devtype_callback = cb; }
    inline void setKPasswordDialog_HeightForWidth_Callback(KPasswordDialog_HeightForWidth_Callback cb) { kpassworddialog_heightforwidth_callback = cb; }
    inline void setKPasswordDialog_HasHeightForWidth_Callback(KPasswordDialog_HasHeightForWidth_Callback cb) { kpassworddialog_hasheightforwidth_callback = cb; }
    inline void setKPasswordDialog_PaintEngine_Callback(KPasswordDialog_PaintEngine_Callback cb) { kpassworddialog_paintengine_callback = cb; }
    inline void setKPasswordDialog_Event_Callback(KPasswordDialog_Event_Callback cb) { kpassworddialog_event_callback = cb; }
    inline void setKPasswordDialog_MousePressEvent_Callback(KPasswordDialog_MousePressEvent_Callback cb) { kpassworddialog_mousepressevent_callback = cb; }
    inline void setKPasswordDialog_MouseReleaseEvent_Callback(KPasswordDialog_MouseReleaseEvent_Callback cb) { kpassworddialog_mousereleaseevent_callback = cb; }
    inline void setKPasswordDialog_MouseDoubleClickEvent_Callback(KPasswordDialog_MouseDoubleClickEvent_Callback cb) { kpassworddialog_mousedoubleclickevent_callback = cb; }
    inline void setKPasswordDialog_MouseMoveEvent_Callback(KPasswordDialog_MouseMoveEvent_Callback cb) { kpassworddialog_mousemoveevent_callback = cb; }
    inline void setKPasswordDialog_WheelEvent_Callback(KPasswordDialog_WheelEvent_Callback cb) { kpassworddialog_wheelevent_callback = cb; }
    inline void setKPasswordDialog_KeyReleaseEvent_Callback(KPasswordDialog_KeyReleaseEvent_Callback cb) { kpassworddialog_keyreleaseevent_callback = cb; }
    inline void setKPasswordDialog_FocusInEvent_Callback(KPasswordDialog_FocusInEvent_Callback cb) { kpassworddialog_focusinevent_callback = cb; }
    inline void setKPasswordDialog_FocusOutEvent_Callback(KPasswordDialog_FocusOutEvent_Callback cb) { kpassworddialog_focusoutevent_callback = cb; }
    inline void setKPasswordDialog_EnterEvent_Callback(KPasswordDialog_EnterEvent_Callback cb) { kpassworddialog_enterevent_callback = cb; }
    inline void setKPasswordDialog_LeaveEvent_Callback(KPasswordDialog_LeaveEvent_Callback cb) { kpassworddialog_leaveevent_callback = cb; }
    inline void setKPasswordDialog_PaintEvent_Callback(KPasswordDialog_PaintEvent_Callback cb) { kpassworddialog_paintevent_callback = cb; }
    inline void setKPasswordDialog_MoveEvent_Callback(KPasswordDialog_MoveEvent_Callback cb) { kpassworddialog_moveevent_callback = cb; }
    inline void setKPasswordDialog_TabletEvent_Callback(KPasswordDialog_TabletEvent_Callback cb) { kpassworddialog_tabletevent_callback = cb; }
    inline void setKPasswordDialog_ActionEvent_Callback(KPasswordDialog_ActionEvent_Callback cb) { kpassworddialog_actionevent_callback = cb; }
    inline void setKPasswordDialog_DragEnterEvent_Callback(KPasswordDialog_DragEnterEvent_Callback cb) { kpassworddialog_dragenterevent_callback = cb; }
    inline void setKPasswordDialog_DragMoveEvent_Callback(KPasswordDialog_DragMoveEvent_Callback cb) { kpassworddialog_dragmoveevent_callback = cb; }
    inline void setKPasswordDialog_DragLeaveEvent_Callback(KPasswordDialog_DragLeaveEvent_Callback cb) { kpassworddialog_dragleaveevent_callback = cb; }
    inline void setKPasswordDialog_DropEvent_Callback(KPasswordDialog_DropEvent_Callback cb) { kpassworddialog_dropevent_callback = cb; }
    inline void setKPasswordDialog_HideEvent_Callback(KPasswordDialog_HideEvent_Callback cb) { kpassworddialog_hideevent_callback = cb; }
    inline void setKPasswordDialog_NativeEvent_Callback(KPasswordDialog_NativeEvent_Callback cb) { kpassworddialog_nativeevent_callback = cb; }
    inline void setKPasswordDialog_ChangeEvent_Callback(KPasswordDialog_ChangeEvent_Callback cb) { kpassworddialog_changeevent_callback = cb; }
    inline void setKPasswordDialog_Metric_Callback(KPasswordDialog_Metric_Callback cb) { kpassworddialog_metric_callback = cb; }
    inline void setKPasswordDialog_InitPainter_Callback(KPasswordDialog_InitPainter_Callback cb) { kpassworddialog_initpainter_callback = cb; }
    inline void setKPasswordDialog_Redirected_Callback(KPasswordDialog_Redirected_Callback cb) { kpassworddialog_redirected_callback = cb; }
    inline void setKPasswordDialog_SharedPainter_Callback(KPasswordDialog_SharedPainter_Callback cb) { kpassworddialog_sharedpainter_callback = cb; }
    inline void setKPasswordDialog_InputMethodEvent_Callback(KPasswordDialog_InputMethodEvent_Callback cb) { kpassworddialog_inputmethodevent_callback = cb; }
    inline void setKPasswordDialog_InputMethodQuery_Callback(KPasswordDialog_InputMethodQuery_Callback cb) { kpassworddialog_inputmethodquery_callback = cb; }
    inline void setKPasswordDialog_FocusNextPrevChild_Callback(KPasswordDialog_FocusNextPrevChild_Callback cb) { kpassworddialog_focusnextprevchild_callback = cb; }
    inline void setKPasswordDialog_TimerEvent_Callback(KPasswordDialog_TimerEvent_Callback cb) { kpassworddialog_timerevent_callback = cb; }
    inline void setKPasswordDialog_ChildEvent_Callback(KPasswordDialog_ChildEvent_Callback cb) { kpassworddialog_childevent_callback = cb; }
    inline void setKPasswordDialog_CustomEvent_Callback(KPasswordDialog_CustomEvent_Callback cb) { kpassworddialog_customevent_callback = cb; }
    inline void setKPasswordDialog_ConnectNotify_Callback(KPasswordDialog_ConnectNotify_Callback cb) { kpassworddialog_connectnotify_callback = cb; }
    inline void setKPasswordDialog_DisconnectNotify_Callback(KPasswordDialog_DisconnectNotify_Callback cb) { kpassworddialog_disconnectnotify_callback = cb; }
    inline void setKPasswordDialog_AdjustPosition_Callback(KPasswordDialog_AdjustPosition_Callback cb) { kpassworddialog_adjustposition_callback = cb; }
    inline void setKPasswordDialog_UpdateMicroFocus_Callback(KPasswordDialog_UpdateMicroFocus_Callback cb) { kpassworddialog_updatemicrofocus_callback = cb; }
    inline void setKPasswordDialog_Create_Callback(KPasswordDialog_Create_Callback cb) { kpassworddialog_create_callback = cb; }
    inline void setKPasswordDialog_Destroy_Callback(KPasswordDialog_Destroy_Callback cb) { kpassworddialog_destroy_callback = cb; }
    inline void setKPasswordDialog_FocusNextChild_Callback(KPasswordDialog_FocusNextChild_Callback cb) { kpassworddialog_focusnextchild_callback = cb; }
    inline void setKPasswordDialog_FocusPreviousChild_Callback(KPasswordDialog_FocusPreviousChild_Callback cb) { kpassworddialog_focuspreviouschild_callback = cb; }
    inline void setKPasswordDialog_Sender_Callback(KPasswordDialog_Sender_Callback cb) { kpassworddialog_sender_callback = cb; }
    inline void setKPasswordDialog_SenderSignalIndex_Callback(KPasswordDialog_SenderSignalIndex_Callback cb) { kpassworddialog_sendersignalindex_callback = cb; }
    inline void setKPasswordDialog_Receivers_Callback(KPasswordDialog_Receivers_Callback cb) { kpassworddialog_receivers_callback = cb; }
    inline void setKPasswordDialog_IsSignalConnected_Callback(KPasswordDialog_IsSignalConnected_Callback cb) { kpassworddialog_issignalconnected_callback = cb; }
    inline void setKPasswordDialog_GetDecodedMetricF_Callback(KPasswordDialog_GetDecodedMetricF_Callback cb) { kpassworddialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKPasswordDialog_Metacall_IsBase(bool value) const { kpassworddialog_metacall_isbase = value; }
    inline void setKPasswordDialog_Accept_IsBase(bool value) const { kpassworddialog_accept_isbase = value; }
    inline void setKPasswordDialog_CheckPassword_IsBase(bool value) const { kpassworddialog_checkpassword_isbase = value; }
    inline void setKPasswordDialog_SetVisible_IsBase(bool value) const { kpassworddialog_setvisible_isbase = value; }
    inline void setKPasswordDialog_SizeHint_IsBase(bool value) const { kpassworddialog_sizehint_isbase = value; }
    inline void setKPasswordDialog_MinimumSizeHint_IsBase(bool value) const { kpassworddialog_minimumsizehint_isbase = value; }
    inline void setKPasswordDialog_Open_IsBase(bool value) const { kpassworddialog_open_isbase = value; }
    inline void setKPasswordDialog_Exec_IsBase(bool value) const { kpassworddialog_exec_isbase = value; }
    inline void setKPasswordDialog_Done_IsBase(bool value) const { kpassworddialog_done_isbase = value; }
    inline void setKPasswordDialog_Reject_IsBase(bool value) const { kpassworddialog_reject_isbase = value; }
    inline void setKPasswordDialog_KeyPressEvent_IsBase(bool value) const { kpassworddialog_keypressevent_isbase = value; }
    inline void setKPasswordDialog_CloseEvent_IsBase(bool value) const { kpassworddialog_closeevent_isbase = value; }
    inline void setKPasswordDialog_ShowEvent_IsBase(bool value) const { kpassworddialog_showevent_isbase = value; }
    inline void setKPasswordDialog_ResizeEvent_IsBase(bool value) const { kpassworddialog_resizeevent_isbase = value; }
    inline void setKPasswordDialog_ContextMenuEvent_IsBase(bool value) const { kpassworddialog_contextmenuevent_isbase = value; }
    inline void setKPasswordDialog_EventFilter_IsBase(bool value) const { kpassworddialog_eventfilter_isbase = value; }
    inline void setKPasswordDialog_DevType_IsBase(bool value) const { kpassworddialog_devtype_isbase = value; }
    inline void setKPasswordDialog_HeightForWidth_IsBase(bool value) const { kpassworddialog_heightforwidth_isbase = value; }
    inline void setKPasswordDialog_HasHeightForWidth_IsBase(bool value) const { kpassworddialog_hasheightforwidth_isbase = value; }
    inline void setKPasswordDialog_PaintEngine_IsBase(bool value) const { kpassworddialog_paintengine_isbase = value; }
    inline void setKPasswordDialog_Event_IsBase(bool value) const { kpassworddialog_event_isbase = value; }
    inline void setKPasswordDialog_MousePressEvent_IsBase(bool value) const { kpassworddialog_mousepressevent_isbase = value; }
    inline void setKPasswordDialog_MouseReleaseEvent_IsBase(bool value) const { kpassworddialog_mousereleaseevent_isbase = value; }
    inline void setKPasswordDialog_MouseDoubleClickEvent_IsBase(bool value) const { kpassworddialog_mousedoubleclickevent_isbase = value; }
    inline void setKPasswordDialog_MouseMoveEvent_IsBase(bool value) const { kpassworddialog_mousemoveevent_isbase = value; }
    inline void setKPasswordDialog_WheelEvent_IsBase(bool value) const { kpassworddialog_wheelevent_isbase = value; }
    inline void setKPasswordDialog_KeyReleaseEvent_IsBase(bool value) const { kpassworddialog_keyreleaseevent_isbase = value; }
    inline void setKPasswordDialog_FocusInEvent_IsBase(bool value) const { kpassworddialog_focusinevent_isbase = value; }
    inline void setKPasswordDialog_FocusOutEvent_IsBase(bool value) const { kpassworddialog_focusoutevent_isbase = value; }
    inline void setKPasswordDialog_EnterEvent_IsBase(bool value) const { kpassworddialog_enterevent_isbase = value; }
    inline void setKPasswordDialog_LeaveEvent_IsBase(bool value) const { kpassworddialog_leaveevent_isbase = value; }
    inline void setKPasswordDialog_PaintEvent_IsBase(bool value) const { kpassworddialog_paintevent_isbase = value; }
    inline void setKPasswordDialog_MoveEvent_IsBase(bool value) const { kpassworddialog_moveevent_isbase = value; }
    inline void setKPasswordDialog_TabletEvent_IsBase(bool value) const { kpassworddialog_tabletevent_isbase = value; }
    inline void setKPasswordDialog_ActionEvent_IsBase(bool value) const { kpassworddialog_actionevent_isbase = value; }
    inline void setKPasswordDialog_DragEnterEvent_IsBase(bool value) const { kpassworddialog_dragenterevent_isbase = value; }
    inline void setKPasswordDialog_DragMoveEvent_IsBase(bool value) const { kpassworddialog_dragmoveevent_isbase = value; }
    inline void setKPasswordDialog_DragLeaveEvent_IsBase(bool value) const { kpassworddialog_dragleaveevent_isbase = value; }
    inline void setKPasswordDialog_DropEvent_IsBase(bool value) const { kpassworddialog_dropevent_isbase = value; }
    inline void setKPasswordDialog_HideEvent_IsBase(bool value) const { kpassworddialog_hideevent_isbase = value; }
    inline void setKPasswordDialog_NativeEvent_IsBase(bool value) const { kpassworddialog_nativeevent_isbase = value; }
    inline void setKPasswordDialog_ChangeEvent_IsBase(bool value) const { kpassworddialog_changeevent_isbase = value; }
    inline void setKPasswordDialog_Metric_IsBase(bool value) const { kpassworddialog_metric_isbase = value; }
    inline void setKPasswordDialog_InitPainter_IsBase(bool value) const { kpassworddialog_initpainter_isbase = value; }
    inline void setKPasswordDialog_Redirected_IsBase(bool value) const { kpassworddialog_redirected_isbase = value; }
    inline void setKPasswordDialog_SharedPainter_IsBase(bool value) const { kpassworddialog_sharedpainter_isbase = value; }
    inline void setKPasswordDialog_InputMethodEvent_IsBase(bool value) const { kpassworddialog_inputmethodevent_isbase = value; }
    inline void setKPasswordDialog_InputMethodQuery_IsBase(bool value) const { kpassworddialog_inputmethodquery_isbase = value; }
    inline void setKPasswordDialog_FocusNextPrevChild_IsBase(bool value) const { kpassworddialog_focusnextprevchild_isbase = value; }
    inline void setKPasswordDialog_TimerEvent_IsBase(bool value) const { kpassworddialog_timerevent_isbase = value; }
    inline void setKPasswordDialog_ChildEvent_IsBase(bool value) const { kpassworddialog_childevent_isbase = value; }
    inline void setKPasswordDialog_CustomEvent_IsBase(bool value) const { kpassworddialog_customevent_isbase = value; }
    inline void setKPasswordDialog_ConnectNotify_IsBase(bool value) const { kpassworddialog_connectnotify_isbase = value; }
    inline void setKPasswordDialog_DisconnectNotify_IsBase(bool value) const { kpassworddialog_disconnectnotify_isbase = value; }
    inline void setKPasswordDialog_AdjustPosition_IsBase(bool value) const { kpassworddialog_adjustposition_isbase = value; }
    inline void setKPasswordDialog_UpdateMicroFocus_IsBase(bool value) const { kpassworddialog_updatemicrofocus_isbase = value; }
    inline void setKPasswordDialog_Create_IsBase(bool value) const { kpassworddialog_create_isbase = value; }
    inline void setKPasswordDialog_Destroy_IsBase(bool value) const { kpassworddialog_destroy_isbase = value; }
    inline void setKPasswordDialog_FocusNextChild_IsBase(bool value) const { kpassworddialog_focusnextchild_isbase = value; }
    inline void setKPasswordDialog_FocusPreviousChild_IsBase(bool value) const { kpassworddialog_focuspreviouschild_isbase = value; }
    inline void setKPasswordDialog_Sender_IsBase(bool value) const { kpassworddialog_sender_isbase = value; }
    inline void setKPasswordDialog_SenderSignalIndex_IsBase(bool value) const { kpassworddialog_sendersignalindex_isbase = value; }
    inline void setKPasswordDialog_Receivers_IsBase(bool value) const { kpassworddialog_receivers_isbase = value; }
    inline void setKPasswordDialog_IsSignalConnected_IsBase(bool value) const { kpassworddialog_issignalconnected_isbase = value; }
    inline void setKPasswordDialog_GetDecodedMetricF_IsBase(bool value) const { kpassworddialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpassworddialog_metacall_isbase) {
            kpassworddialog_metacall_isbase = false;
            return KPasswordDialog::qt_metacall(param1, param2, param3);
        } else if (kpassworddialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kpassworddialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KPasswordDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kpassworddialog_accept_isbase) {
            kpassworddialog_accept_isbase = false;
            KPasswordDialog::accept();
        } else if (kpassworddialog_accept_callback != nullptr) {
            kpassworddialog_accept_callback();
        } else {
            KPasswordDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool checkPassword() override {
        if (kpassworddialog_checkpassword_isbase) {
            kpassworddialog_checkpassword_isbase = false;
            return KPasswordDialog::checkPassword();
        } else if (kpassworddialog_checkpassword_callback != nullptr) {
            bool callback_ret = kpassworddialog_checkpassword_callback();
            return callback_ret;
        } else {
            return KPasswordDialog::checkPassword();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpassworddialog_setvisible_isbase) {
            kpassworddialog_setvisible_isbase = false;
            KPasswordDialog::setVisible(visible);
        } else if (kpassworddialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kpassworddialog_setvisible_callback(this, cbval1);
        } else {
            KPasswordDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpassworddialog_sizehint_isbase) {
            kpassworddialog_sizehint_isbase = false;
            return KPasswordDialog::sizeHint();
        } else if (kpassworddialog_sizehint_callback != nullptr) {
            QSize* callback_ret = kpassworddialog_sizehint_callback();
            return *callback_ret;
        } else {
            return KPasswordDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpassworddialog_minimumsizehint_isbase) {
            kpassworddialog_minimumsizehint_isbase = false;
            return KPasswordDialog::minimumSizeHint();
        } else if (kpassworddialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kpassworddialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KPasswordDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kpassworddialog_open_isbase) {
            kpassworddialog_open_isbase = false;
            KPasswordDialog::open();
        } else if (kpassworddialog_open_callback != nullptr) {
            kpassworddialog_open_callback();
        } else {
            KPasswordDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kpassworddialog_exec_isbase) {
            kpassworddialog_exec_isbase = false;
            return KPasswordDialog::exec();
        } else if (kpassworddialog_exec_callback != nullptr) {
            int callback_ret = kpassworddialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPasswordDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kpassworddialog_done_isbase) {
            kpassworddialog_done_isbase = false;
            KPasswordDialog::done(param1);
        } else if (kpassworddialog_done_callback != nullptr) {
            int cbval1 = param1;

            kpassworddialog_done_callback(this, cbval1);
        } else {
            KPasswordDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kpassworddialog_reject_isbase) {
            kpassworddialog_reject_isbase = false;
            KPasswordDialog::reject();
        } else if (kpassworddialog_reject_callback != nullptr) {
            kpassworddialog_reject_callback();
        } else {
            KPasswordDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kpassworddialog_keypressevent_isbase) {
            kpassworddialog_keypressevent_isbase = false;
            KPasswordDialog::keyPressEvent(param1);
        } else if (kpassworddialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kpassworddialog_keypressevent_callback(this, cbval1);
        } else {
            KPasswordDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kpassworddialog_closeevent_isbase) {
            kpassworddialog_closeevent_isbase = false;
            KPasswordDialog::closeEvent(param1);
        } else if (kpassworddialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            kpassworddialog_closeevent_callback(this, cbval1);
        } else {
            KPasswordDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kpassworddialog_showevent_isbase) {
            kpassworddialog_showevent_isbase = false;
            KPasswordDialog::showEvent(param1);
        } else if (kpassworddialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            kpassworddialog_showevent_callback(this, cbval1);
        } else {
            KPasswordDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kpassworddialog_resizeevent_isbase) {
            kpassworddialog_resizeevent_isbase = false;
            KPasswordDialog::resizeEvent(param1);
        } else if (kpassworddialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            kpassworddialog_resizeevent_callback(this, cbval1);
        } else {
            KPasswordDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kpassworddialog_contextmenuevent_isbase) {
            kpassworddialog_contextmenuevent_isbase = false;
            KPasswordDialog::contextMenuEvent(param1);
        } else if (kpassworddialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            kpassworddialog_contextmenuevent_callback(this, cbval1);
        } else {
            KPasswordDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kpassworddialog_eventfilter_isbase) {
            kpassworddialog_eventfilter_isbase = false;
            return KPasswordDialog::eventFilter(param1, param2);
        } else if (kpassworddialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kpassworddialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KPasswordDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpassworddialog_devtype_isbase) {
            kpassworddialog_devtype_isbase = false;
            return KPasswordDialog::devType();
        } else if (kpassworddialog_devtype_callback != nullptr) {
            int callback_ret = kpassworddialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPasswordDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpassworddialog_heightforwidth_isbase) {
            kpassworddialog_heightforwidth_isbase = false;
            return KPasswordDialog::heightForWidth(param1);
        } else if (kpassworddialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kpassworddialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPasswordDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpassworddialog_hasheightforwidth_isbase) {
            kpassworddialog_hasheightforwidth_isbase = false;
            return KPasswordDialog::hasHeightForWidth();
        } else if (kpassworddialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kpassworddialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KPasswordDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpassworddialog_paintengine_isbase) {
            kpassworddialog_paintengine_isbase = false;
            return KPasswordDialog::paintEngine();
        } else if (kpassworddialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kpassworddialog_paintengine_callback();
            return callback_ret;
        } else {
            return KPasswordDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpassworddialog_event_isbase) {
            kpassworddialog_event_isbase = false;
            return KPasswordDialog::event(event);
        } else if (kpassworddialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kpassworddialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPasswordDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpassworddialog_mousepressevent_isbase) {
            kpassworddialog_mousepressevent_isbase = false;
            KPasswordDialog::mousePressEvent(event);
        } else if (kpassworddialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpassworddialog_mousepressevent_callback(this, cbval1);
        } else {
            KPasswordDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpassworddialog_mousereleaseevent_isbase) {
            kpassworddialog_mousereleaseevent_isbase = false;
            KPasswordDialog::mouseReleaseEvent(event);
        } else if (kpassworddialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpassworddialog_mousereleaseevent_callback(this, cbval1);
        } else {
            KPasswordDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpassworddialog_mousedoubleclickevent_isbase) {
            kpassworddialog_mousedoubleclickevent_isbase = false;
            KPasswordDialog::mouseDoubleClickEvent(event);
        } else if (kpassworddialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpassworddialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KPasswordDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpassworddialog_mousemoveevent_isbase) {
            kpassworddialog_mousemoveevent_isbase = false;
            KPasswordDialog::mouseMoveEvent(event);
        } else if (kpassworddialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpassworddialog_mousemoveevent_callback(this, cbval1);
        } else {
            KPasswordDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpassworddialog_wheelevent_isbase) {
            kpassworddialog_wheelevent_isbase = false;
            KPasswordDialog::wheelEvent(event);
        } else if (kpassworddialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kpassworddialog_wheelevent_callback(this, cbval1);
        } else {
            KPasswordDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpassworddialog_keyreleaseevent_isbase) {
            kpassworddialog_keyreleaseevent_isbase = false;
            KPasswordDialog::keyReleaseEvent(event);
        } else if (kpassworddialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kpassworddialog_keyreleaseevent_callback(this, cbval1);
        } else {
            KPasswordDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpassworddialog_focusinevent_isbase) {
            kpassworddialog_focusinevent_isbase = false;
            KPasswordDialog::focusInEvent(event);
        } else if (kpassworddialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kpassworddialog_focusinevent_callback(this, cbval1);
        } else {
            KPasswordDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpassworddialog_focusoutevent_isbase) {
            kpassworddialog_focusoutevent_isbase = false;
            KPasswordDialog::focusOutEvent(event);
        } else if (kpassworddialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kpassworddialog_focusoutevent_callback(this, cbval1);
        } else {
            KPasswordDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpassworddialog_enterevent_isbase) {
            kpassworddialog_enterevent_isbase = false;
            KPasswordDialog::enterEvent(event);
        } else if (kpassworddialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kpassworddialog_enterevent_callback(this, cbval1);
        } else {
            KPasswordDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpassworddialog_leaveevent_isbase) {
            kpassworddialog_leaveevent_isbase = false;
            KPasswordDialog::leaveEvent(event);
        } else if (kpassworddialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpassworddialog_leaveevent_callback(this, cbval1);
        } else {
            KPasswordDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpassworddialog_paintevent_isbase) {
            kpassworddialog_paintevent_isbase = false;
            KPasswordDialog::paintEvent(event);
        } else if (kpassworddialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kpassworddialog_paintevent_callback(this, cbval1);
        } else {
            KPasswordDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpassworddialog_moveevent_isbase) {
            kpassworddialog_moveevent_isbase = false;
            KPasswordDialog::moveEvent(event);
        } else if (kpassworddialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kpassworddialog_moveevent_callback(this, cbval1);
        } else {
            KPasswordDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpassworddialog_tabletevent_isbase) {
            kpassworddialog_tabletevent_isbase = false;
            KPasswordDialog::tabletEvent(event);
        } else if (kpassworddialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kpassworddialog_tabletevent_callback(this, cbval1);
        } else {
            KPasswordDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpassworddialog_actionevent_isbase) {
            kpassworddialog_actionevent_isbase = false;
            KPasswordDialog::actionEvent(event);
        } else if (kpassworddialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kpassworddialog_actionevent_callback(this, cbval1);
        } else {
            KPasswordDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpassworddialog_dragenterevent_isbase) {
            kpassworddialog_dragenterevent_isbase = false;
            KPasswordDialog::dragEnterEvent(event);
        } else if (kpassworddialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kpassworddialog_dragenterevent_callback(this, cbval1);
        } else {
            KPasswordDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpassworddialog_dragmoveevent_isbase) {
            kpassworddialog_dragmoveevent_isbase = false;
            KPasswordDialog::dragMoveEvent(event);
        } else if (kpassworddialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kpassworddialog_dragmoveevent_callback(this, cbval1);
        } else {
            KPasswordDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpassworddialog_dragleaveevent_isbase) {
            kpassworddialog_dragleaveevent_isbase = false;
            KPasswordDialog::dragLeaveEvent(event);
        } else if (kpassworddialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kpassworddialog_dragleaveevent_callback(this, cbval1);
        } else {
            KPasswordDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpassworddialog_dropevent_isbase) {
            kpassworddialog_dropevent_isbase = false;
            KPasswordDialog::dropEvent(event);
        } else if (kpassworddialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kpassworddialog_dropevent_callback(this, cbval1);
        } else {
            KPasswordDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpassworddialog_hideevent_isbase) {
            kpassworddialog_hideevent_isbase = false;
            KPasswordDialog::hideEvent(event);
        } else if (kpassworddialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kpassworddialog_hideevent_callback(this, cbval1);
        } else {
            KPasswordDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpassworddialog_nativeevent_isbase) {
            kpassworddialog_nativeevent_isbase = false;
            return KPasswordDialog::nativeEvent(eventType, message, result);
        } else if (kpassworddialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = kpassworddialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KPasswordDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpassworddialog_changeevent_isbase) {
            kpassworddialog_changeevent_isbase = false;
            KPasswordDialog::changeEvent(param1);
        } else if (kpassworddialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kpassworddialog_changeevent_callback(this, cbval1);
        } else {
            KPasswordDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpassworddialog_metric_isbase) {
            kpassworddialog_metric_isbase = false;
            return KPasswordDialog::metric(param1);
        } else if (kpassworddialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kpassworddialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPasswordDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpassworddialog_initpainter_isbase) {
            kpassworddialog_initpainter_isbase = false;
            KPasswordDialog::initPainter(painter);
        } else if (kpassworddialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kpassworddialog_initpainter_callback(this, cbval1);
        } else {
            KPasswordDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpassworddialog_redirected_isbase) {
            kpassworddialog_redirected_isbase = false;
            return KPasswordDialog::redirected(offset);
        } else if (kpassworddialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kpassworddialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPasswordDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpassworddialog_sharedpainter_isbase) {
            kpassworddialog_sharedpainter_isbase = false;
            return KPasswordDialog::sharedPainter();
        } else if (kpassworddialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kpassworddialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return KPasswordDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpassworddialog_inputmethodevent_isbase) {
            kpassworddialog_inputmethodevent_isbase = false;
            KPasswordDialog::inputMethodEvent(param1);
        } else if (kpassworddialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kpassworddialog_inputmethodevent_callback(this, cbval1);
        } else {
            KPasswordDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpassworddialog_inputmethodquery_isbase) {
            kpassworddialog_inputmethodquery_isbase = false;
            return KPasswordDialog::inputMethodQuery(param1);
        } else if (kpassworddialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kpassworddialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KPasswordDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpassworddialog_focusnextprevchild_isbase) {
            kpassworddialog_focusnextprevchild_isbase = false;
            return KPasswordDialog::focusNextPrevChild(next);
        } else if (kpassworddialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kpassworddialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPasswordDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpassworddialog_timerevent_isbase) {
            kpassworddialog_timerevent_isbase = false;
            KPasswordDialog::timerEvent(event);
        } else if (kpassworddialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kpassworddialog_timerevent_callback(this, cbval1);
        } else {
            KPasswordDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpassworddialog_childevent_isbase) {
            kpassworddialog_childevent_isbase = false;
            KPasswordDialog::childEvent(event);
        } else if (kpassworddialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kpassworddialog_childevent_callback(this, cbval1);
        } else {
            KPasswordDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpassworddialog_customevent_isbase) {
            kpassworddialog_customevent_isbase = false;
            KPasswordDialog::customEvent(event);
        } else if (kpassworddialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpassworddialog_customevent_callback(this, cbval1);
        } else {
            KPasswordDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpassworddialog_connectnotify_isbase) {
            kpassworddialog_connectnotify_isbase = false;
            KPasswordDialog::connectNotify(signal);
        } else if (kpassworddialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpassworddialog_connectnotify_callback(this, cbval1);
        } else {
            KPasswordDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpassworddialog_disconnectnotify_isbase) {
            kpassworddialog_disconnectnotify_isbase = false;
            KPasswordDialog::disconnectNotify(signal);
        } else if (kpassworddialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpassworddialog_disconnectnotify_callback(this, cbval1);
        } else {
            KPasswordDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kpassworddialog_adjustposition_isbase) {
            kpassworddialog_adjustposition_isbase = false;
            KPasswordDialog::adjustPosition(param1);
        } else if (kpassworddialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            kpassworddialog_adjustposition_callback(this, cbval1);
        } else {
            KPasswordDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kpassworddialog_updatemicrofocus_isbase) {
            kpassworddialog_updatemicrofocus_isbase = false;
            KPasswordDialog::updateMicroFocus();
        } else if (kpassworddialog_updatemicrofocus_callback != nullptr) {
            kpassworddialog_updatemicrofocus_callback();
        } else {
            KPasswordDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kpassworddialog_create_isbase) {
            kpassworddialog_create_isbase = false;
            KPasswordDialog::create();
        } else if (kpassworddialog_create_callback != nullptr) {
            kpassworddialog_create_callback();
        } else {
            KPasswordDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kpassworddialog_destroy_isbase) {
            kpassworddialog_destroy_isbase = false;
            KPasswordDialog::destroy();
        } else if (kpassworddialog_destroy_callback != nullptr) {
            kpassworddialog_destroy_callback();
        } else {
            KPasswordDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kpassworddialog_focusnextchild_isbase) {
            kpassworddialog_focusnextchild_isbase = false;
            return KPasswordDialog::focusNextChild();
        } else if (kpassworddialog_focusnextchild_callback != nullptr) {
            bool callback_ret = kpassworddialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return KPasswordDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kpassworddialog_focuspreviouschild_isbase) {
            kpassworddialog_focuspreviouschild_isbase = false;
            return KPasswordDialog::focusPreviousChild();
        } else if (kpassworddialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kpassworddialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KPasswordDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpassworddialog_sender_isbase) {
            kpassworddialog_sender_isbase = false;
            return KPasswordDialog::sender();
        } else if (kpassworddialog_sender_callback != nullptr) {
            QObject* callback_ret = kpassworddialog_sender_callback();
            return callback_ret;
        } else {
            return KPasswordDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpassworddialog_sendersignalindex_isbase) {
            kpassworddialog_sendersignalindex_isbase = false;
            return KPasswordDialog::senderSignalIndex();
        } else if (kpassworddialog_sendersignalindex_callback != nullptr) {
            int callback_ret = kpassworddialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPasswordDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpassworddialog_receivers_isbase) {
            kpassworddialog_receivers_isbase = false;
            return KPasswordDialog::receivers(signal);
        } else if (kpassworddialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kpassworddialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPasswordDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpassworddialog_issignalconnected_isbase) {
            kpassworddialog_issignalconnected_isbase = false;
            return KPasswordDialog::isSignalConnected(signal);
        } else if (kpassworddialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kpassworddialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPasswordDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kpassworddialog_getdecodedmetricf_isbase) {
            kpassworddialog_getdecodedmetricf_isbase = false;
            return KPasswordDialog::getDecodedMetricF(metricA, metricB);
        } else if (kpassworddialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kpassworddialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KPasswordDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KPasswordDialog_CheckPassword(KPasswordDialog* self);
    friend bool KPasswordDialog_QBaseCheckPassword(KPasswordDialog* self);
    friend void KPasswordDialog_KeyPressEvent(KPasswordDialog* self, QKeyEvent* param1);
    friend void KPasswordDialog_QBaseKeyPressEvent(KPasswordDialog* self, QKeyEvent* param1);
    friend void KPasswordDialog_CloseEvent(KPasswordDialog* self, QCloseEvent* param1);
    friend void KPasswordDialog_QBaseCloseEvent(KPasswordDialog* self, QCloseEvent* param1);
    friend void KPasswordDialog_ShowEvent(KPasswordDialog* self, QShowEvent* param1);
    friend void KPasswordDialog_QBaseShowEvent(KPasswordDialog* self, QShowEvent* param1);
    friend void KPasswordDialog_ResizeEvent(KPasswordDialog* self, QResizeEvent* param1);
    friend void KPasswordDialog_QBaseResizeEvent(KPasswordDialog* self, QResizeEvent* param1);
    friend void KPasswordDialog_ContextMenuEvent(KPasswordDialog* self, QContextMenuEvent* param1);
    friend void KPasswordDialog_QBaseContextMenuEvent(KPasswordDialog* self, QContextMenuEvent* param1);
    friend bool KPasswordDialog_EventFilter(KPasswordDialog* self, QObject* param1, QEvent* param2);
    friend bool KPasswordDialog_QBaseEventFilter(KPasswordDialog* self, QObject* param1, QEvent* param2);
    friend bool KPasswordDialog_Event(KPasswordDialog* self, QEvent* event);
    friend bool KPasswordDialog_QBaseEvent(KPasswordDialog* self, QEvent* event);
    friend void KPasswordDialog_MousePressEvent(KPasswordDialog* self, QMouseEvent* event);
    friend void KPasswordDialog_QBaseMousePressEvent(KPasswordDialog* self, QMouseEvent* event);
    friend void KPasswordDialog_MouseReleaseEvent(KPasswordDialog* self, QMouseEvent* event);
    friend void KPasswordDialog_QBaseMouseReleaseEvent(KPasswordDialog* self, QMouseEvent* event);
    friend void KPasswordDialog_MouseDoubleClickEvent(KPasswordDialog* self, QMouseEvent* event);
    friend void KPasswordDialog_QBaseMouseDoubleClickEvent(KPasswordDialog* self, QMouseEvent* event);
    friend void KPasswordDialog_MouseMoveEvent(KPasswordDialog* self, QMouseEvent* event);
    friend void KPasswordDialog_QBaseMouseMoveEvent(KPasswordDialog* self, QMouseEvent* event);
    friend void KPasswordDialog_WheelEvent(KPasswordDialog* self, QWheelEvent* event);
    friend void KPasswordDialog_QBaseWheelEvent(KPasswordDialog* self, QWheelEvent* event);
    friend void KPasswordDialog_KeyReleaseEvent(KPasswordDialog* self, QKeyEvent* event);
    friend void KPasswordDialog_QBaseKeyReleaseEvent(KPasswordDialog* self, QKeyEvent* event);
    friend void KPasswordDialog_FocusInEvent(KPasswordDialog* self, QFocusEvent* event);
    friend void KPasswordDialog_QBaseFocusInEvent(KPasswordDialog* self, QFocusEvent* event);
    friend void KPasswordDialog_FocusOutEvent(KPasswordDialog* self, QFocusEvent* event);
    friend void KPasswordDialog_QBaseFocusOutEvent(KPasswordDialog* self, QFocusEvent* event);
    friend void KPasswordDialog_EnterEvent(KPasswordDialog* self, QEnterEvent* event);
    friend void KPasswordDialog_QBaseEnterEvent(KPasswordDialog* self, QEnterEvent* event);
    friend void KPasswordDialog_LeaveEvent(KPasswordDialog* self, QEvent* event);
    friend void KPasswordDialog_QBaseLeaveEvent(KPasswordDialog* self, QEvent* event);
    friend void KPasswordDialog_PaintEvent(KPasswordDialog* self, QPaintEvent* event);
    friend void KPasswordDialog_QBasePaintEvent(KPasswordDialog* self, QPaintEvent* event);
    friend void KPasswordDialog_MoveEvent(KPasswordDialog* self, QMoveEvent* event);
    friend void KPasswordDialog_QBaseMoveEvent(KPasswordDialog* self, QMoveEvent* event);
    friend void KPasswordDialog_TabletEvent(KPasswordDialog* self, QTabletEvent* event);
    friend void KPasswordDialog_QBaseTabletEvent(KPasswordDialog* self, QTabletEvent* event);
    friend void KPasswordDialog_ActionEvent(KPasswordDialog* self, QActionEvent* event);
    friend void KPasswordDialog_QBaseActionEvent(KPasswordDialog* self, QActionEvent* event);
    friend void KPasswordDialog_DragEnterEvent(KPasswordDialog* self, QDragEnterEvent* event);
    friend void KPasswordDialog_QBaseDragEnterEvent(KPasswordDialog* self, QDragEnterEvent* event);
    friend void KPasswordDialog_DragMoveEvent(KPasswordDialog* self, QDragMoveEvent* event);
    friend void KPasswordDialog_QBaseDragMoveEvent(KPasswordDialog* self, QDragMoveEvent* event);
    friend void KPasswordDialog_DragLeaveEvent(KPasswordDialog* self, QDragLeaveEvent* event);
    friend void KPasswordDialog_QBaseDragLeaveEvent(KPasswordDialog* self, QDragLeaveEvent* event);
    friend void KPasswordDialog_DropEvent(KPasswordDialog* self, QDropEvent* event);
    friend void KPasswordDialog_QBaseDropEvent(KPasswordDialog* self, QDropEvent* event);
    friend void KPasswordDialog_HideEvent(KPasswordDialog* self, QHideEvent* event);
    friend void KPasswordDialog_QBaseHideEvent(KPasswordDialog* self, QHideEvent* event);
    friend bool KPasswordDialog_NativeEvent(KPasswordDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KPasswordDialog_QBaseNativeEvent(KPasswordDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPasswordDialog_ChangeEvent(KPasswordDialog* self, QEvent* param1);
    friend void KPasswordDialog_QBaseChangeEvent(KPasswordDialog* self, QEvent* param1);
    friend int KPasswordDialog_Metric(const KPasswordDialog* self, int param1);
    friend int KPasswordDialog_QBaseMetric(const KPasswordDialog* self, int param1);
    friend void KPasswordDialog_InitPainter(const KPasswordDialog* self, QPainter* painter);
    friend void KPasswordDialog_QBaseInitPainter(const KPasswordDialog* self, QPainter* painter);
    friend QPaintDevice* KPasswordDialog_Redirected(const KPasswordDialog* self, QPoint* offset);
    friend QPaintDevice* KPasswordDialog_QBaseRedirected(const KPasswordDialog* self, QPoint* offset);
    friend QPainter* KPasswordDialog_SharedPainter(const KPasswordDialog* self);
    friend QPainter* KPasswordDialog_QBaseSharedPainter(const KPasswordDialog* self);
    friend void KPasswordDialog_InputMethodEvent(KPasswordDialog* self, QInputMethodEvent* param1);
    friend void KPasswordDialog_QBaseInputMethodEvent(KPasswordDialog* self, QInputMethodEvent* param1);
    friend bool KPasswordDialog_FocusNextPrevChild(KPasswordDialog* self, bool next);
    friend bool KPasswordDialog_QBaseFocusNextPrevChild(KPasswordDialog* self, bool next);
    friend void KPasswordDialog_TimerEvent(KPasswordDialog* self, QTimerEvent* event);
    friend void KPasswordDialog_QBaseTimerEvent(KPasswordDialog* self, QTimerEvent* event);
    friend void KPasswordDialog_ChildEvent(KPasswordDialog* self, QChildEvent* event);
    friend void KPasswordDialog_QBaseChildEvent(KPasswordDialog* self, QChildEvent* event);
    friend void KPasswordDialog_CustomEvent(KPasswordDialog* self, QEvent* event);
    friend void KPasswordDialog_QBaseCustomEvent(KPasswordDialog* self, QEvent* event);
    friend void KPasswordDialog_ConnectNotify(KPasswordDialog* self, const QMetaMethod* signal);
    friend void KPasswordDialog_QBaseConnectNotify(KPasswordDialog* self, const QMetaMethod* signal);
    friend void KPasswordDialog_DisconnectNotify(KPasswordDialog* self, const QMetaMethod* signal);
    friend void KPasswordDialog_QBaseDisconnectNotify(KPasswordDialog* self, const QMetaMethod* signal);
    friend void KPasswordDialog_AdjustPosition(KPasswordDialog* self, QWidget* param1);
    friend void KPasswordDialog_QBaseAdjustPosition(KPasswordDialog* self, QWidget* param1);
    friend void KPasswordDialog_UpdateMicroFocus(KPasswordDialog* self);
    friend void KPasswordDialog_QBaseUpdateMicroFocus(KPasswordDialog* self);
    friend void KPasswordDialog_Create(KPasswordDialog* self);
    friend void KPasswordDialog_QBaseCreate(KPasswordDialog* self);
    friend void KPasswordDialog_Destroy(KPasswordDialog* self);
    friend void KPasswordDialog_QBaseDestroy(KPasswordDialog* self);
    friend bool KPasswordDialog_FocusNextChild(KPasswordDialog* self);
    friend bool KPasswordDialog_QBaseFocusNextChild(KPasswordDialog* self);
    friend bool KPasswordDialog_FocusPreviousChild(KPasswordDialog* self);
    friend bool KPasswordDialog_QBaseFocusPreviousChild(KPasswordDialog* self);
    friend QObject* KPasswordDialog_Sender(const KPasswordDialog* self);
    friend QObject* KPasswordDialog_QBaseSender(const KPasswordDialog* self);
    friend int KPasswordDialog_SenderSignalIndex(const KPasswordDialog* self);
    friend int KPasswordDialog_QBaseSenderSignalIndex(const KPasswordDialog* self);
    friend int KPasswordDialog_Receivers(const KPasswordDialog* self, const char* signal);
    friend int KPasswordDialog_QBaseReceivers(const KPasswordDialog* self, const char* signal);
    friend bool KPasswordDialog_IsSignalConnected(const KPasswordDialog* self, const QMetaMethod* signal);
    friend bool KPasswordDialog_QBaseIsSignalConnected(const KPasswordDialog* self, const QMetaMethod* signal);
    friend double KPasswordDialog_GetDecodedMetricF(const KPasswordDialog* self, int metricA, int metricB);
    friend double KPasswordDialog_QBaseGetDecodedMetricF(const KPasswordDialog* self, int metricA, int metricB);
};

#endif
