#pragma once
#ifndef SRC_EXTRAS_KICONTHEMESC_LIBVIRTUALKICONDIALOG_H
#define SRC_EXTRAS_KICONTHEMESC_LIBVIRTUALKICONDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIconDialog so that we can call protected methods
class VirtualKIconDialog final : public KIconDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKIconDialog = true;

    // Virtual class public types (including callbacks)
    using KIconDialog_Metacall_Callback = int (*)(KIconDialog*, int, int, void**);
    using KIconDialog_ShowEvent_Callback = void (*)(KIconDialog*, QShowEvent*);
    using KIconDialog_SetVisible_Callback = void (*)(KIconDialog*, bool);
    using KIconDialog_SizeHint_Callback = QSize* (*)();
    using KIconDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KIconDialog_Open_Callback = void (*)();
    using KIconDialog_Exec_Callback = int (*)();
    using KIconDialog_Done_Callback = void (*)(KIconDialog*, int);
    using KIconDialog_Accept_Callback = void (*)();
    using KIconDialog_Reject_Callback = void (*)();
    using KIconDialog_KeyPressEvent_Callback = void (*)(KIconDialog*, QKeyEvent*);
    using KIconDialog_CloseEvent_Callback = void (*)(KIconDialog*, QCloseEvent*);
    using KIconDialog_ResizeEvent_Callback = void (*)(KIconDialog*, QResizeEvent*);
    using KIconDialog_ContextMenuEvent_Callback = void (*)(KIconDialog*, QContextMenuEvent*);
    using KIconDialog_EventFilter_Callback = bool (*)(KIconDialog*, QObject*, QEvent*);
    using KIconDialog_DevType_Callback = int (*)();
    using KIconDialog_HeightForWidth_Callback = int (*)(const KIconDialog*, int);
    using KIconDialog_HasHeightForWidth_Callback = bool (*)();
    using KIconDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KIconDialog_Event_Callback = bool (*)(KIconDialog*, QEvent*);
    using KIconDialog_MousePressEvent_Callback = void (*)(KIconDialog*, QMouseEvent*);
    using KIconDialog_MouseReleaseEvent_Callback = void (*)(KIconDialog*, QMouseEvent*);
    using KIconDialog_MouseDoubleClickEvent_Callback = void (*)(KIconDialog*, QMouseEvent*);
    using KIconDialog_MouseMoveEvent_Callback = void (*)(KIconDialog*, QMouseEvent*);
    using KIconDialog_WheelEvent_Callback = void (*)(KIconDialog*, QWheelEvent*);
    using KIconDialog_KeyReleaseEvent_Callback = void (*)(KIconDialog*, QKeyEvent*);
    using KIconDialog_FocusInEvent_Callback = void (*)(KIconDialog*, QFocusEvent*);
    using KIconDialog_FocusOutEvent_Callback = void (*)(KIconDialog*, QFocusEvent*);
    using KIconDialog_EnterEvent_Callback = void (*)(KIconDialog*, QEnterEvent*);
    using KIconDialog_LeaveEvent_Callback = void (*)(KIconDialog*, QEvent*);
    using KIconDialog_PaintEvent_Callback = void (*)(KIconDialog*, QPaintEvent*);
    using KIconDialog_MoveEvent_Callback = void (*)(KIconDialog*, QMoveEvent*);
    using KIconDialog_TabletEvent_Callback = void (*)(KIconDialog*, QTabletEvent*);
    using KIconDialog_ActionEvent_Callback = void (*)(KIconDialog*, QActionEvent*);
    using KIconDialog_DragEnterEvent_Callback = void (*)(KIconDialog*, QDragEnterEvent*);
    using KIconDialog_DragMoveEvent_Callback = void (*)(KIconDialog*, QDragMoveEvent*);
    using KIconDialog_DragLeaveEvent_Callback = void (*)(KIconDialog*, QDragLeaveEvent*);
    using KIconDialog_DropEvent_Callback = void (*)(KIconDialog*, QDropEvent*);
    using KIconDialog_HideEvent_Callback = void (*)(KIconDialog*, QHideEvent*);
    using KIconDialog_NativeEvent_Callback = bool (*)(KIconDialog*, libqt_string, void*, intptr_t*);
    using KIconDialog_ChangeEvent_Callback = void (*)(KIconDialog*, QEvent*);
    using KIconDialog_Metric_Callback = int (*)(const KIconDialog*, int);
    using KIconDialog_InitPainter_Callback = void (*)(const KIconDialog*, QPainter*);
    using KIconDialog_Redirected_Callback = QPaintDevice* (*)(const KIconDialog*, QPoint*);
    using KIconDialog_SharedPainter_Callback = QPainter* (*)();
    using KIconDialog_InputMethodEvent_Callback = void (*)(KIconDialog*, QInputMethodEvent*);
    using KIconDialog_InputMethodQuery_Callback = QVariant* (*)(const KIconDialog*, int);
    using KIconDialog_FocusNextPrevChild_Callback = bool (*)(KIconDialog*, bool);
    using KIconDialog_TimerEvent_Callback = void (*)(KIconDialog*, QTimerEvent*);
    using KIconDialog_ChildEvent_Callback = void (*)(KIconDialog*, QChildEvent*);
    using KIconDialog_CustomEvent_Callback = void (*)(KIconDialog*, QEvent*);
    using KIconDialog_ConnectNotify_Callback = void (*)(KIconDialog*, QMetaMethod*);
    using KIconDialog_DisconnectNotify_Callback = void (*)(KIconDialog*, QMetaMethod*);
    using KIconDialog_SlotOk_Callback = void (*)();
    using KIconDialog_AdjustPosition_Callback = void (*)(KIconDialog*, QWidget*);
    using KIconDialog_UpdateMicroFocus_Callback = void (*)();
    using KIconDialog_Create_Callback = void (*)();
    using KIconDialog_Destroy_Callback = void (*)();
    using KIconDialog_FocusNextChild_Callback = bool (*)();
    using KIconDialog_FocusPreviousChild_Callback = bool (*)();
    using KIconDialog_Sender_Callback = QObject* (*)();
    using KIconDialog_SenderSignalIndex_Callback = int (*)();
    using KIconDialog_Receivers_Callback = int (*)(const KIconDialog*, const char*);
    using KIconDialog_IsSignalConnected_Callback = bool (*)(const KIconDialog*, QMetaMethod*);
    using KIconDialog_GetDecodedMetricF_Callback = double (*)(const KIconDialog*, int, int);

  protected:
    // Instance callback storage
    KIconDialog_Metacall_Callback kicondialog_metacall_callback = nullptr;
    KIconDialog_ShowEvent_Callback kicondialog_showevent_callback = nullptr;
    KIconDialog_SetVisible_Callback kicondialog_setvisible_callback = nullptr;
    KIconDialog_SizeHint_Callback kicondialog_sizehint_callback = nullptr;
    KIconDialog_MinimumSizeHint_Callback kicondialog_minimumsizehint_callback = nullptr;
    KIconDialog_Open_Callback kicondialog_open_callback = nullptr;
    KIconDialog_Exec_Callback kicondialog_exec_callback = nullptr;
    KIconDialog_Done_Callback kicondialog_done_callback = nullptr;
    KIconDialog_Accept_Callback kicondialog_accept_callback = nullptr;
    KIconDialog_Reject_Callback kicondialog_reject_callback = nullptr;
    KIconDialog_KeyPressEvent_Callback kicondialog_keypressevent_callback = nullptr;
    KIconDialog_CloseEvent_Callback kicondialog_closeevent_callback = nullptr;
    KIconDialog_ResizeEvent_Callback kicondialog_resizeevent_callback = nullptr;
    KIconDialog_ContextMenuEvent_Callback kicondialog_contextmenuevent_callback = nullptr;
    KIconDialog_EventFilter_Callback kicondialog_eventfilter_callback = nullptr;
    KIconDialog_DevType_Callback kicondialog_devtype_callback = nullptr;
    KIconDialog_HeightForWidth_Callback kicondialog_heightforwidth_callback = nullptr;
    KIconDialog_HasHeightForWidth_Callback kicondialog_hasheightforwidth_callback = nullptr;
    KIconDialog_PaintEngine_Callback kicondialog_paintengine_callback = nullptr;
    KIconDialog_Event_Callback kicondialog_event_callback = nullptr;
    KIconDialog_MousePressEvent_Callback kicondialog_mousepressevent_callback = nullptr;
    KIconDialog_MouseReleaseEvent_Callback kicondialog_mousereleaseevent_callback = nullptr;
    KIconDialog_MouseDoubleClickEvent_Callback kicondialog_mousedoubleclickevent_callback = nullptr;
    KIconDialog_MouseMoveEvent_Callback kicondialog_mousemoveevent_callback = nullptr;
    KIconDialog_WheelEvent_Callback kicondialog_wheelevent_callback = nullptr;
    KIconDialog_KeyReleaseEvent_Callback kicondialog_keyreleaseevent_callback = nullptr;
    KIconDialog_FocusInEvent_Callback kicondialog_focusinevent_callback = nullptr;
    KIconDialog_FocusOutEvent_Callback kicondialog_focusoutevent_callback = nullptr;
    KIconDialog_EnterEvent_Callback kicondialog_enterevent_callback = nullptr;
    KIconDialog_LeaveEvent_Callback kicondialog_leaveevent_callback = nullptr;
    KIconDialog_PaintEvent_Callback kicondialog_paintevent_callback = nullptr;
    KIconDialog_MoveEvent_Callback kicondialog_moveevent_callback = nullptr;
    KIconDialog_TabletEvent_Callback kicondialog_tabletevent_callback = nullptr;
    KIconDialog_ActionEvent_Callback kicondialog_actionevent_callback = nullptr;
    KIconDialog_DragEnterEvent_Callback kicondialog_dragenterevent_callback = nullptr;
    KIconDialog_DragMoveEvent_Callback kicondialog_dragmoveevent_callback = nullptr;
    KIconDialog_DragLeaveEvent_Callback kicondialog_dragleaveevent_callback = nullptr;
    KIconDialog_DropEvent_Callback kicondialog_dropevent_callback = nullptr;
    KIconDialog_HideEvent_Callback kicondialog_hideevent_callback = nullptr;
    KIconDialog_NativeEvent_Callback kicondialog_nativeevent_callback = nullptr;
    KIconDialog_ChangeEvent_Callback kicondialog_changeevent_callback = nullptr;
    KIconDialog_Metric_Callback kicondialog_metric_callback = nullptr;
    KIconDialog_InitPainter_Callback kicondialog_initpainter_callback = nullptr;
    KIconDialog_Redirected_Callback kicondialog_redirected_callback = nullptr;
    KIconDialog_SharedPainter_Callback kicondialog_sharedpainter_callback = nullptr;
    KIconDialog_InputMethodEvent_Callback kicondialog_inputmethodevent_callback = nullptr;
    KIconDialog_InputMethodQuery_Callback kicondialog_inputmethodquery_callback = nullptr;
    KIconDialog_FocusNextPrevChild_Callback kicondialog_focusnextprevchild_callback = nullptr;
    KIconDialog_TimerEvent_Callback kicondialog_timerevent_callback = nullptr;
    KIconDialog_ChildEvent_Callback kicondialog_childevent_callback = nullptr;
    KIconDialog_CustomEvent_Callback kicondialog_customevent_callback = nullptr;
    KIconDialog_ConnectNotify_Callback kicondialog_connectnotify_callback = nullptr;
    KIconDialog_DisconnectNotify_Callback kicondialog_disconnectnotify_callback = nullptr;
    KIconDialog_SlotOk_Callback kicondialog_slotok_callback = nullptr;
    KIconDialog_AdjustPosition_Callback kicondialog_adjustposition_callback = nullptr;
    KIconDialog_UpdateMicroFocus_Callback kicondialog_updatemicrofocus_callback = nullptr;
    KIconDialog_Create_Callback kicondialog_create_callback = nullptr;
    KIconDialog_Destroy_Callback kicondialog_destroy_callback = nullptr;
    KIconDialog_FocusNextChild_Callback kicondialog_focusnextchild_callback = nullptr;
    KIconDialog_FocusPreviousChild_Callback kicondialog_focuspreviouschild_callback = nullptr;
    KIconDialog_Sender_Callback kicondialog_sender_callback = nullptr;
    KIconDialog_SenderSignalIndex_Callback kicondialog_sendersignalindex_callback = nullptr;
    KIconDialog_Receivers_Callback kicondialog_receivers_callback = nullptr;
    KIconDialog_IsSignalConnected_Callback kicondialog_issignalconnected_callback = nullptr;
    KIconDialog_GetDecodedMetricF_Callback kicondialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kicondialog_metacall_isbase = false;
    mutable bool kicondialog_showevent_isbase = false;
    mutable bool kicondialog_setvisible_isbase = false;
    mutable bool kicondialog_sizehint_isbase = false;
    mutable bool kicondialog_minimumsizehint_isbase = false;
    mutable bool kicondialog_open_isbase = false;
    mutable bool kicondialog_exec_isbase = false;
    mutable bool kicondialog_done_isbase = false;
    mutable bool kicondialog_accept_isbase = false;
    mutable bool kicondialog_reject_isbase = false;
    mutable bool kicondialog_keypressevent_isbase = false;
    mutable bool kicondialog_closeevent_isbase = false;
    mutable bool kicondialog_resizeevent_isbase = false;
    mutable bool kicondialog_contextmenuevent_isbase = false;
    mutable bool kicondialog_eventfilter_isbase = false;
    mutable bool kicondialog_devtype_isbase = false;
    mutable bool kicondialog_heightforwidth_isbase = false;
    mutable bool kicondialog_hasheightforwidth_isbase = false;
    mutable bool kicondialog_paintengine_isbase = false;
    mutable bool kicondialog_event_isbase = false;
    mutable bool kicondialog_mousepressevent_isbase = false;
    mutable bool kicondialog_mousereleaseevent_isbase = false;
    mutable bool kicondialog_mousedoubleclickevent_isbase = false;
    mutable bool kicondialog_mousemoveevent_isbase = false;
    mutable bool kicondialog_wheelevent_isbase = false;
    mutable bool kicondialog_keyreleaseevent_isbase = false;
    mutable bool kicondialog_focusinevent_isbase = false;
    mutable bool kicondialog_focusoutevent_isbase = false;
    mutable bool kicondialog_enterevent_isbase = false;
    mutable bool kicondialog_leaveevent_isbase = false;
    mutable bool kicondialog_paintevent_isbase = false;
    mutable bool kicondialog_moveevent_isbase = false;
    mutable bool kicondialog_tabletevent_isbase = false;
    mutable bool kicondialog_actionevent_isbase = false;
    mutable bool kicondialog_dragenterevent_isbase = false;
    mutable bool kicondialog_dragmoveevent_isbase = false;
    mutable bool kicondialog_dragleaveevent_isbase = false;
    mutable bool kicondialog_dropevent_isbase = false;
    mutable bool kicondialog_hideevent_isbase = false;
    mutable bool kicondialog_nativeevent_isbase = false;
    mutable bool kicondialog_changeevent_isbase = false;
    mutable bool kicondialog_metric_isbase = false;
    mutable bool kicondialog_initpainter_isbase = false;
    mutable bool kicondialog_redirected_isbase = false;
    mutable bool kicondialog_sharedpainter_isbase = false;
    mutable bool kicondialog_inputmethodevent_isbase = false;
    mutable bool kicondialog_inputmethodquery_isbase = false;
    mutable bool kicondialog_focusnextprevchild_isbase = false;
    mutable bool kicondialog_timerevent_isbase = false;
    mutable bool kicondialog_childevent_isbase = false;
    mutable bool kicondialog_customevent_isbase = false;
    mutable bool kicondialog_connectnotify_isbase = false;
    mutable bool kicondialog_disconnectnotify_isbase = false;
    mutable bool kicondialog_slotok_isbase = false;
    mutable bool kicondialog_adjustposition_isbase = false;
    mutable bool kicondialog_updatemicrofocus_isbase = false;
    mutable bool kicondialog_create_isbase = false;
    mutable bool kicondialog_destroy_isbase = false;
    mutable bool kicondialog_focusnextchild_isbase = false;
    mutable bool kicondialog_focuspreviouschild_isbase = false;
    mutable bool kicondialog_sender_isbase = false;
    mutable bool kicondialog_sendersignalindex_isbase = false;
    mutable bool kicondialog_receivers_isbase = false;
    mutable bool kicondialog_issignalconnected_isbase = false;
    mutable bool kicondialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKIconDialog(QWidget* parent) : KIconDialog(parent) {};
    VirtualKIconDialog() : KIconDialog() {};

    ~VirtualKIconDialog() {
        kicondialog_metacall_callback = nullptr;
        kicondialog_showevent_callback = nullptr;
        kicondialog_setvisible_callback = nullptr;
        kicondialog_sizehint_callback = nullptr;
        kicondialog_minimumsizehint_callback = nullptr;
        kicondialog_open_callback = nullptr;
        kicondialog_exec_callback = nullptr;
        kicondialog_done_callback = nullptr;
        kicondialog_accept_callback = nullptr;
        kicondialog_reject_callback = nullptr;
        kicondialog_keypressevent_callback = nullptr;
        kicondialog_closeevent_callback = nullptr;
        kicondialog_resizeevent_callback = nullptr;
        kicondialog_contextmenuevent_callback = nullptr;
        kicondialog_eventfilter_callback = nullptr;
        kicondialog_devtype_callback = nullptr;
        kicondialog_heightforwidth_callback = nullptr;
        kicondialog_hasheightforwidth_callback = nullptr;
        kicondialog_paintengine_callback = nullptr;
        kicondialog_event_callback = nullptr;
        kicondialog_mousepressevent_callback = nullptr;
        kicondialog_mousereleaseevent_callback = nullptr;
        kicondialog_mousedoubleclickevent_callback = nullptr;
        kicondialog_mousemoveevent_callback = nullptr;
        kicondialog_wheelevent_callback = nullptr;
        kicondialog_keyreleaseevent_callback = nullptr;
        kicondialog_focusinevent_callback = nullptr;
        kicondialog_focusoutevent_callback = nullptr;
        kicondialog_enterevent_callback = nullptr;
        kicondialog_leaveevent_callback = nullptr;
        kicondialog_paintevent_callback = nullptr;
        kicondialog_moveevent_callback = nullptr;
        kicondialog_tabletevent_callback = nullptr;
        kicondialog_actionevent_callback = nullptr;
        kicondialog_dragenterevent_callback = nullptr;
        kicondialog_dragmoveevent_callback = nullptr;
        kicondialog_dragleaveevent_callback = nullptr;
        kicondialog_dropevent_callback = nullptr;
        kicondialog_hideevent_callback = nullptr;
        kicondialog_nativeevent_callback = nullptr;
        kicondialog_changeevent_callback = nullptr;
        kicondialog_metric_callback = nullptr;
        kicondialog_initpainter_callback = nullptr;
        kicondialog_redirected_callback = nullptr;
        kicondialog_sharedpainter_callback = nullptr;
        kicondialog_inputmethodevent_callback = nullptr;
        kicondialog_inputmethodquery_callback = nullptr;
        kicondialog_focusnextprevchild_callback = nullptr;
        kicondialog_timerevent_callback = nullptr;
        kicondialog_childevent_callback = nullptr;
        kicondialog_customevent_callback = nullptr;
        kicondialog_connectnotify_callback = nullptr;
        kicondialog_disconnectnotify_callback = nullptr;
        kicondialog_slotok_callback = nullptr;
        kicondialog_adjustposition_callback = nullptr;
        kicondialog_updatemicrofocus_callback = nullptr;
        kicondialog_create_callback = nullptr;
        kicondialog_destroy_callback = nullptr;
        kicondialog_focusnextchild_callback = nullptr;
        kicondialog_focuspreviouschild_callback = nullptr;
        kicondialog_sender_callback = nullptr;
        kicondialog_sendersignalindex_callback = nullptr;
        kicondialog_receivers_callback = nullptr;
        kicondialog_issignalconnected_callback = nullptr;
        kicondialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKIconDialog_Metacall_Callback(KIconDialog_Metacall_Callback cb) { kicondialog_metacall_callback = cb; }
    inline void setKIconDialog_ShowEvent_Callback(KIconDialog_ShowEvent_Callback cb) { kicondialog_showevent_callback = cb; }
    inline void setKIconDialog_SetVisible_Callback(KIconDialog_SetVisible_Callback cb) { kicondialog_setvisible_callback = cb; }
    inline void setKIconDialog_SizeHint_Callback(KIconDialog_SizeHint_Callback cb) { kicondialog_sizehint_callback = cb; }
    inline void setKIconDialog_MinimumSizeHint_Callback(KIconDialog_MinimumSizeHint_Callback cb) { kicondialog_minimumsizehint_callback = cb; }
    inline void setKIconDialog_Open_Callback(KIconDialog_Open_Callback cb) { kicondialog_open_callback = cb; }
    inline void setKIconDialog_Exec_Callback(KIconDialog_Exec_Callback cb) { kicondialog_exec_callback = cb; }
    inline void setKIconDialog_Done_Callback(KIconDialog_Done_Callback cb) { kicondialog_done_callback = cb; }
    inline void setKIconDialog_Accept_Callback(KIconDialog_Accept_Callback cb) { kicondialog_accept_callback = cb; }
    inline void setKIconDialog_Reject_Callback(KIconDialog_Reject_Callback cb) { kicondialog_reject_callback = cb; }
    inline void setKIconDialog_KeyPressEvent_Callback(KIconDialog_KeyPressEvent_Callback cb) { kicondialog_keypressevent_callback = cb; }
    inline void setKIconDialog_CloseEvent_Callback(KIconDialog_CloseEvent_Callback cb) { kicondialog_closeevent_callback = cb; }
    inline void setKIconDialog_ResizeEvent_Callback(KIconDialog_ResizeEvent_Callback cb) { kicondialog_resizeevent_callback = cb; }
    inline void setKIconDialog_ContextMenuEvent_Callback(KIconDialog_ContextMenuEvent_Callback cb) { kicondialog_contextmenuevent_callback = cb; }
    inline void setKIconDialog_EventFilter_Callback(KIconDialog_EventFilter_Callback cb) { kicondialog_eventfilter_callback = cb; }
    inline void setKIconDialog_DevType_Callback(KIconDialog_DevType_Callback cb) { kicondialog_devtype_callback = cb; }
    inline void setKIconDialog_HeightForWidth_Callback(KIconDialog_HeightForWidth_Callback cb) { kicondialog_heightforwidth_callback = cb; }
    inline void setKIconDialog_HasHeightForWidth_Callback(KIconDialog_HasHeightForWidth_Callback cb) { kicondialog_hasheightforwidth_callback = cb; }
    inline void setKIconDialog_PaintEngine_Callback(KIconDialog_PaintEngine_Callback cb) { kicondialog_paintengine_callback = cb; }
    inline void setKIconDialog_Event_Callback(KIconDialog_Event_Callback cb) { kicondialog_event_callback = cb; }
    inline void setKIconDialog_MousePressEvent_Callback(KIconDialog_MousePressEvent_Callback cb) { kicondialog_mousepressevent_callback = cb; }
    inline void setKIconDialog_MouseReleaseEvent_Callback(KIconDialog_MouseReleaseEvent_Callback cb) { kicondialog_mousereleaseevent_callback = cb; }
    inline void setKIconDialog_MouseDoubleClickEvent_Callback(KIconDialog_MouseDoubleClickEvent_Callback cb) { kicondialog_mousedoubleclickevent_callback = cb; }
    inline void setKIconDialog_MouseMoveEvent_Callback(KIconDialog_MouseMoveEvent_Callback cb) { kicondialog_mousemoveevent_callback = cb; }
    inline void setKIconDialog_WheelEvent_Callback(KIconDialog_WheelEvent_Callback cb) { kicondialog_wheelevent_callback = cb; }
    inline void setKIconDialog_KeyReleaseEvent_Callback(KIconDialog_KeyReleaseEvent_Callback cb) { kicondialog_keyreleaseevent_callback = cb; }
    inline void setKIconDialog_FocusInEvent_Callback(KIconDialog_FocusInEvent_Callback cb) { kicondialog_focusinevent_callback = cb; }
    inline void setKIconDialog_FocusOutEvent_Callback(KIconDialog_FocusOutEvent_Callback cb) { kicondialog_focusoutevent_callback = cb; }
    inline void setKIconDialog_EnterEvent_Callback(KIconDialog_EnterEvent_Callback cb) { kicondialog_enterevent_callback = cb; }
    inline void setKIconDialog_LeaveEvent_Callback(KIconDialog_LeaveEvent_Callback cb) { kicondialog_leaveevent_callback = cb; }
    inline void setKIconDialog_PaintEvent_Callback(KIconDialog_PaintEvent_Callback cb) { kicondialog_paintevent_callback = cb; }
    inline void setKIconDialog_MoveEvent_Callback(KIconDialog_MoveEvent_Callback cb) { kicondialog_moveevent_callback = cb; }
    inline void setKIconDialog_TabletEvent_Callback(KIconDialog_TabletEvent_Callback cb) { kicondialog_tabletevent_callback = cb; }
    inline void setKIconDialog_ActionEvent_Callback(KIconDialog_ActionEvent_Callback cb) { kicondialog_actionevent_callback = cb; }
    inline void setKIconDialog_DragEnterEvent_Callback(KIconDialog_DragEnterEvent_Callback cb) { kicondialog_dragenterevent_callback = cb; }
    inline void setKIconDialog_DragMoveEvent_Callback(KIconDialog_DragMoveEvent_Callback cb) { kicondialog_dragmoveevent_callback = cb; }
    inline void setKIconDialog_DragLeaveEvent_Callback(KIconDialog_DragLeaveEvent_Callback cb) { kicondialog_dragleaveevent_callback = cb; }
    inline void setKIconDialog_DropEvent_Callback(KIconDialog_DropEvent_Callback cb) { kicondialog_dropevent_callback = cb; }
    inline void setKIconDialog_HideEvent_Callback(KIconDialog_HideEvent_Callback cb) { kicondialog_hideevent_callback = cb; }
    inline void setKIconDialog_NativeEvent_Callback(KIconDialog_NativeEvent_Callback cb) { kicondialog_nativeevent_callback = cb; }
    inline void setKIconDialog_ChangeEvent_Callback(KIconDialog_ChangeEvent_Callback cb) { kicondialog_changeevent_callback = cb; }
    inline void setKIconDialog_Metric_Callback(KIconDialog_Metric_Callback cb) { kicondialog_metric_callback = cb; }
    inline void setKIconDialog_InitPainter_Callback(KIconDialog_InitPainter_Callback cb) { kicondialog_initpainter_callback = cb; }
    inline void setKIconDialog_Redirected_Callback(KIconDialog_Redirected_Callback cb) { kicondialog_redirected_callback = cb; }
    inline void setKIconDialog_SharedPainter_Callback(KIconDialog_SharedPainter_Callback cb) { kicondialog_sharedpainter_callback = cb; }
    inline void setKIconDialog_InputMethodEvent_Callback(KIconDialog_InputMethodEvent_Callback cb) { kicondialog_inputmethodevent_callback = cb; }
    inline void setKIconDialog_InputMethodQuery_Callback(KIconDialog_InputMethodQuery_Callback cb) { kicondialog_inputmethodquery_callback = cb; }
    inline void setKIconDialog_FocusNextPrevChild_Callback(KIconDialog_FocusNextPrevChild_Callback cb) { kicondialog_focusnextprevchild_callback = cb; }
    inline void setKIconDialog_TimerEvent_Callback(KIconDialog_TimerEvent_Callback cb) { kicondialog_timerevent_callback = cb; }
    inline void setKIconDialog_ChildEvent_Callback(KIconDialog_ChildEvent_Callback cb) { kicondialog_childevent_callback = cb; }
    inline void setKIconDialog_CustomEvent_Callback(KIconDialog_CustomEvent_Callback cb) { kicondialog_customevent_callback = cb; }
    inline void setKIconDialog_ConnectNotify_Callback(KIconDialog_ConnectNotify_Callback cb) { kicondialog_connectnotify_callback = cb; }
    inline void setKIconDialog_DisconnectNotify_Callback(KIconDialog_DisconnectNotify_Callback cb) { kicondialog_disconnectnotify_callback = cb; }
    inline void setKIconDialog_SlotOk_Callback(KIconDialog_SlotOk_Callback cb) { kicondialog_slotok_callback = cb; }
    inline void setKIconDialog_AdjustPosition_Callback(KIconDialog_AdjustPosition_Callback cb) { kicondialog_adjustposition_callback = cb; }
    inline void setKIconDialog_UpdateMicroFocus_Callback(KIconDialog_UpdateMicroFocus_Callback cb) { kicondialog_updatemicrofocus_callback = cb; }
    inline void setKIconDialog_Create_Callback(KIconDialog_Create_Callback cb) { kicondialog_create_callback = cb; }
    inline void setKIconDialog_Destroy_Callback(KIconDialog_Destroy_Callback cb) { kicondialog_destroy_callback = cb; }
    inline void setKIconDialog_FocusNextChild_Callback(KIconDialog_FocusNextChild_Callback cb) { kicondialog_focusnextchild_callback = cb; }
    inline void setKIconDialog_FocusPreviousChild_Callback(KIconDialog_FocusPreviousChild_Callback cb) { kicondialog_focuspreviouschild_callback = cb; }
    inline void setKIconDialog_Sender_Callback(KIconDialog_Sender_Callback cb) { kicondialog_sender_callback = cb; }
    inline void setKIconDialog_SenderSignalIndex_Callback(KIconDialog_SenderSignalIndex_Callback cb) { kicondialog_sendersignalindex_callback = cb; }
    inline void setKIconDialog_Receivers_Callback(KIconDialog_Receivers_Callback cb) { kicondialog_receivers_callback = cb; }
    inline void setKIconDialog_IsSignalConnected_Callback(KIconDialog_IsSignalConnected_Callback cb) { kicondialog_issignalconnected_callback = cb; }
    inline void setKIconDialog_GetDecodedMetricF_Callback(KIconDialog_GetDecodedMetricF_Callback cb) { kicondialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKIconDialog_Metacall_IsBase(bool value) const { kicondialog_metacall_isbase = value; }
    inline void setKIconDialog_ShowEvent_IsBase(bool value) const { kicondialog_showevent_isbase = value; }
    inline void setKIconDialog_SetVisible_IsBase(bool value) const { kicondialog_setvisible_isbase = value; }
    inline void setKIconDialog_SizeHint_IsBase(bool value) const { kicondialog_sizehint_isbase = value; }
    inline void setKIconDialog_MinimumSizeHint_IsBase(bool value) const { kicondialog_minimumsizehint_isbase = value; }
    inline void setKIconDialog_Open_IsBase(bool value) const { kicondialog_open_isbase = value; }
    inline void setKIconDialog_Exec_IsBase(bool value) const { kicondialog_exec_isbase = value; }
    inline void setKIconDialog_Done_IsBase(bool value) const { kicondialog_done_isbase = value; }
    inline void setKIconDialog_Accept_IsBase(bool value) const { kicondialog_accept_isbase = value; }
    inline void setKIconDialog_Reject_IsBase(bool value) const { kicondialog_reject_isbase = value; }
    inline void setKIconDialog_KeyPressEvent_IsBase(bool value) const { kicondialog_keypressevent_isbase = value; }
    inline void setKIconDialog_CloseEvent_IsBase(bool value) const { kicondialog_closeevent_isbase = value; }
    inline void setKIconDialog_ResizeEvent_IsBase(bool value) const { kicondialog_resizeevent_isbase = value; }
    inline void setKIconDialog_ContextMenuEvent_IsBase(bool value) const { kicondialog_contextmenuevent_isbase = value; }
    inline void setKIconDialog_EventFilter_IsBase(bool value) const { kicondialog_eventfilter_isbase = value; }
    inline void setKIconDialog_DevType_IsBase(bool value) const { kicondialog_devtype_isbase = value; }
    inline void setKIconDialog_HeightForWidth_IsBase(bool value) const { kicondialog_heightforwidth_isbase = value; }
    inline void setKIconDialog_HasHeightForWidth_IsBase(bool value) const { kicondialog_hasheightforwidth_isbase = value; }
    inline void setKIconDialog_PaintEngine_IsBase(bool value) const { kicondialog_paintengine_isbase = value; }
    inline void setKIconDialog_Event_IsBase(bool value) const { kicondialog_event_isbase = value; }
    inline void setKIconDialog_MousePressEvent_IsBase(bool value) const { kicondialog_mousepressevent_isbase = value; }
    inline void setKIconDialog_MouseReleaseEvent_IsBase(bool value) const { kicondialog_mousereleaseevent_isbase = value; }
    inline void setKIconDialog_MouseDoubleClickEvent_IsBase(bool value) const { kicondialog_mousedoubleclickevent_isbase = value; }
    inline void setKIconDialog_MouseMoveEvent_IsBase(bool value) const { kicondialog_mousemoveevent_isbase = value; }
    inline void setKIconDialog_WheelEvent_IsBase(bool value) const { kicondialog_wheelevent_isbase = value; }
    inline void setKIconDialog_KeyReleaseEvent_IsBase(bool value) const { kicondialog_keyreleaseevent_isbase = value; }
    inline void setKIconDialog_FocusInEvent_IsBase(bool value) const { kicondialog_focusinevent_isbase = value; }
    inline void setKIconDialog_FocusOutEvent_IsBase(bool value) const { kicondialog_focusoutevent_isbase = value; }
    inline void setKIconDialog_EnterEvent_IsBase(bool value) const { kicondialog_enterevent_isbase = value; }
    inline void setKIconDialog_LeaveEvent_IsBase(bool value) const { kicondialog_leaveevent_isbase = value; }
    inline void setKIconDialog_PaintEvent_IsBase(bool value) const { kicondialog_paintevent_isbase = value; }
    inline void setKIconDialog_MoveEvent_IsBase(bool value) const { kicondialog_moveevent_isbase = value; }
    inline void setKIconDialog_TabletEvent_IsBase(bool value) const { kicondialog_tabletevent_isbase = value; }
    inline void setKIconDialog_ActionEvent_IsBase(bool value) const { kicondialog_actionevent_isbase = value; }
    inline void setKIconDialog_DragEnterEvent_IsBase(bool value) const { kicondialog_dragenterevent_isbase = value; }
    inline void setKIconDialog_DragMoveEvent_IsBase(bool value) const { kicondialog_dragmoveevent_isbase = value; }
    inline void setKIconDialog_DragLeaveEvent_IsBase(bool value) const { kicondialog_dragleaveevent_isbase = value; }
    inline void setKIconDialog_DropEvent_IsBase(bool value) const { kicondialog_dropevent_isbase = value; }
    inline void setKIconDialog_HideEvent_IsBase(bool value) const { kicondialog_hideevent_isbase = value; }
    inline void setKIconDialog_NativeEvent_IsBase(bool value) const { kicondialog_nativeevent_isbase = value; }
    inline void setKIconDialog_ChangeEvent_IsBase(bool value) const { kicondialog_changeevent_isbase = value; }
    inline void setKIconDialog_Metric_IsBase(bool value) const { kicondialog_metric_isbase = value; }
    inline void setKIconDialog_InitPainter_IsBase(bool value) const { kicondialog_initpainter_isbase = value; }
    inline void setKIconDialog_Redirected_IsBase(bool value) const { kicondialog_redirected_isbase = value; }
    inline void setKIconDialog_SharedPainter_IsBase(bool value) const { kicondialog_sharedpainter_isbase = value; }
    inline void setKIconDialog_InputMethodEvent_IsBase(bool value) const { kicondialog_inputmethodevent_isbase = value; }
    inline void setKIconDialog_InputMethodQuery_IsBase(bool value) const { kicondialog_inputmethodquery_isbase = value; }
    inline void setKIconDialog_FocusNextPrevChild_IsBase(bool value) const { kicondialog_focusnextprevchild_isbase = value; }
    inline void setKIconDialog_TimerEvent_IsBase(bool value) const { kicondialog_timerevent_isbase = value; }
    inline void setKIconDialog_ChildEvent_IsBase(bool value) const { kicondialog_childevent_isbase = value; }
    inline void setKIconDialog_CustomEvent_IsBase(bool value) const { kicondialog_customevent_isbase = value; }
    inline void setKIconDialog_ConnectNotify_IsBase(bool value) const { kicondialog_connectnotify_isbase = value; }
    inline void setKIconDialog_DisconnectNotify_IsBase(bool value) const { kicondialog_disconnectnotify_isbase = value; }
    inline void setKIconDialog_SlotOk_IsBase(bool value) const { kicondialog_slotok_isbase = value; }
    inline void setKIconDialog_AdjustPosition_IsBase(bool value) const { kicondialog_adjustposition_isbase = value; }
    inline void setKIconDialog_UpdateMicroFocus_IsBase(bool value) const { kicondialog_updatemicrofocus_isbase = value; }
    inline void setKIconDialog_Create_IsBase(bool value) const { kicondialog_create_isbase = value; }
    inline void setKIconDialog_Destroy_IsBase(bool value) const { kicondialog_destroy_isbase = value; }
    inline void setKIconDialog_FocusNextChild_IsBase(bool value) const { kicondialog_focusnextchild_isbase = value; }
    inline void setKIconDialog_FocusPreviousChild_IsBase(bool value) const { kicondialog_focuspreviouschild_isbase = value; }
    inline void setKIconDialog_Sender_IsBase(bool value) const { kicondialog_sender_isbase = value; }
    inline void setKIconDialog_SenderSignalIndex_IsBase(bool value) const { kicondialog_sendersignalindex_isbase = value; }
    inline void setKIconDialog_Receivers_IsBase(bool value) const { kicondialog_receivers_isbase = value; }
    inline void setKIconDialog_IsSignalConnected_IsBase(bool value) const { kicondialog_issignalconnected_isbase = value; }
    inline void setKIconDialog_GetDecodedMetricF_IsBase(bool value) const { kicondialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kicondialog_metacall_isbase) {
            kicondialog_metacall_isbase = false;
            return KIconDialog::qt_metacall(param1, param2, param3);
        } else if (kicondialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kicondialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KIconDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kicondialog_showevent_isbase) {
            kicondialog_showevent_isbase = false;
            KIconDialog::showEvent(event);
        } else if (kicondialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kicondialog_showevent_callback(this, cbval1);
        } else {
            KIconDialog::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kicondialog_setvisible_isbase) {
            kicondialog_setvisible_isbase = false;
            KIconDialog::setVisible(visible);
        } else if (kicondialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kicondialog_setvisible_callback(this, cbval1);
        } else {
            KIconDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kicondialog_sizehint_isbase) {
            kicondialog_sizehint_isbase = false;
            return KIconDialog::sizeHint();
        } else if (kicondialog_sizehint_callback != nullptr) {
            QSize* callback_ret = kicondialog_sizehint_callback();
            return *callback_ret;
        } else {
            return KIconDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kicondialog_minimumsizehint_isbase) {
            kicondialog_minimumsizehint_isbase = false;
            return KIconDialog::minimumSizeHint();
        } else if (kicondialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kicondialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KIconDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kicondialog_open_isbase) {
            kicondialog_open_isbase = false;
            KIconDialog::open();
        } else if (kicondialog_open_callback != nullptr) {
            kicondialog_open_callback();
        } else {
            KIconDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kicondialog_exec_isbase) {
            kicondialog_exec_isbase = false;
            return KIconDialog::exec();
        } else if (kicondialog_exec_callback != nullptr) {
            int callback_ret = kicondialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIconDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kicondialog_done_isbase) {
            kicondialog_done_isbase = false;
            KIconDialog::done(param1);
        } else if (kicondialog_done_callback != nullptr) {
            int cbval1 = param1;

            kicondialog_done_callback(this, cbval1);
        } else {
            KIconDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kicondialog_accept_isbase) {
            kicondialog_accept_isbase = false;
            KIconDialog::accept();
        } else if (kicondialog_accept_callback != nullptr) {
            kicondialog_accept_callback();
        } else {
            KIconDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kicondialog_reject_isbase) {
            kicondialog_reject_isbase = false;
            KIconDialog::reject();
        } else if (kicondialog_reject_callback != nullptr) {
            kicondialog_reject_callback();
        } else {
            KIconDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kicondialog_keypressevent_isbase) {
            kicondialog_keypressevent_isbase = false;
            KIconDialog::keyPressEvent(param1);
        } else if (kicondialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kicondialog_keypressevent_callback(this, cbval1);
        } else {
            KIconDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kicondialog_closeevent_isbase) {
            kicondialog_closeevent_isbase = false;
            KIconDialog::closeEvent(param1);
        } else if (kicondialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            kicondialog_closeevent_callback(this, cbval1);
        } else {
            KIconDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kicondialog_resizeevent_isbase) {
            kicondialog_resizeevent_isbase = false;
            KIconDialog::resizeEvent(param1);
        } else if (kicondialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            kicondialog_resizeevent_callback(this, cbval1);
        } else {
            KIconDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kicondialog_contextmenuevent_isbase) {
            kicondialog_contextmenuevent_isbase = false;
            KIconDialog::contextMenuEvent(param1);
        } else if (kicondialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            kicondialog_contextmenuevent_callback(this, cbval1);
        } else {
            KIconDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kicondialog_eventfilter_isbase) {
            kicondialog_eventfilter_isbase = false;
            return KIconDialog::eventFilter(param1, param2);
        } else if (kicondialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kicondialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KIconDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kicondialog_devtype_isbase) {
            kicondialog_devtype_isbase = false;
            return KIconDialog::devType();
        } else if (kicondialog_devtype_callback != nullptr) {
            int callback_ret = kicondialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIconDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kicondialog_heightforwidth_isbase) {
            kicondialog_heightforwidth_isbase = false;
            return KIconDialog::heightForWidth(param1);
        } else if (kicondialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kicondialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIconDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kicondialog_hasheightforwidth_isbase) {
            kicondialog_hasheightforwidth_isbase = false;
            return KIconDialog::hasHeightForWidth();
        } else if (kicondialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kicondialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KIconDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kicondialog_paintengine_isbase) {
            kicondialog_paintengine_isbase = false;
            return KIconDialog::paintEngine();
        } else if (kicondialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kicondialog_paintengine_callback();
            return callback_ret;
        } else {
            return KIconDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kicondialog_event_isbase) {
            kicondialog_event_isbase = false;
            return KIconDialog::event(event);
        } else if (kicondialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kicondialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIconDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kicondialog_mousepressevent_isbase) {
            kicondialog_mousepressevent_isbase = false;
            KIconDialog::mousePressEvent(event);
        } else if (kicondialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kicondialog_mousepressevent_callback(this, cbval1);
        } else {
            KIconDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kicondialog_mousereleaseevent_isbase) {
            kicondialog_mousereleaseevent_isbase = false;
            KIconDialog::mouseReleaseEvent(event);
        } else if (kicondialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kicondialog_mousereleaseevent_callback(this, cbval1);
        } else {
            KIconDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kicondialog_mousedoubleclickevent_isbase) {
            kicondialog_mousedoubleclickevent_isbase = false;
            KIconDialog::mouseDoubleClickEvent(event);
        } else if (kicondialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kicondialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KIconDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kicondialog_mousemoveevent_isbase) {
            kicondialog_mousemoveevent_isbase = false;
            KIconDialog::mouseMoveEvent(event);
        } else if (kicondialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kicondialog_mousemoveevent_callback(this, cbval1);
        } else {
            KIconDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kicondialog_wheelevent_isbase) {
            kicondialog_wheelevent_isbase = false;
            KIconDialog::wheelEvent(event);
        } else if (kicondialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kicondialog_wheelevent_callback(this, cbval1);
        } else {
            KIconDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kicondialog_keyreleaseevent_isbase) {
            kicondialog_keyreleaseevent_isbase = false;
            KIconDialog::keyReleaseEvent(event);
        } else if (kicondialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kicondialog_keyreleaseevent_callback(this, cbval1);
        } else {
            KIconDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kicondialog_focusinevent_isbase) {
            kicondialog_focusinevent_isbase = false;
            KIconDialog::focusInEvent(event);
        } else if (kicondialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kicondialog_focusinevent_callback(this, cbval1);
        } else {
            KIconDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kicondialog_focusoutevent_isbase) {
            kicondialog_focusoutevent_isbase = false;
            KIconDialog::focusOutEvent(event);
        } else if (kicondialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kicondialog_focusoutevent_callback(this, cbval1);
        } else {
            KIconDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kicondialog_enterevent_isbase) {
            kicondialog_enterevent_isbase = false;
            KIconDialog::enterEvent(event);
        } else if (kicondialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kicondialog_enterevent_callback(this, cbval1);
        } else {
            KIconDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kicondialog_leaveevent_isbase) {
            kicondialog_leaveevent_isbase = false;
            KIconDialog::leaveEvent(event);
        } else if (kicondialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kicondialog_leaveevent_callback(this, cbval1);
        } else {
            KIconDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kicondialog_paintevent_isbase) {
            kicondialog_paintevent_isbase = false;
            KIconDialog::paintEvent(event);
        } else if (kicondialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kicondialog_paintevent_callback(this, cbval1);
        } else {
            KIconDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kicondialog_moveevent_isbase) {
            kicondialog_moveevent_isbase = false;
            KIconDialog::moveEvent(event);
        } else if (kicondialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kicondialog_moveevent_callback(this, cbval1);
        } else {
            KIconDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kicondialog_tabletevent_isbase) {
            kicondialog_tabletevent_isbase = false;
            KIconDialog::tabletEvent(event);
        } else if (kicondialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kicondialog_tabletevent_callback(this, cbval1);
        } else {
            KIconDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kicondialog_actionevent_isbase) {
            kicondialog_actionevent_isbase = false;
            KIconDialog::actionEvent(event);
        } else if (kicondialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kicondialog_actionevent_callback(this, cbval1);
        } else {
            KIconDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kicondialog_dragenterevent_isbase) {
            kicondialog_dragenterevent_isbase = false;
            KIconDialog::dragEnterEvent(event);
        } else if (kicondialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kicondialog_dragenterevent_callback(this, cbval1);
        } else {
            KIconDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kicondialog_dragmoveevent_isbase) {
            kicondialog_dragmoveevent_isbase = false;
            KIconDialog::dragMoveEvent(event);
        } else if (kicondialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kicondialog_dragmoveevent_callback(this, cbval1);
        } else {
            KIconDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kicondialog_dragleaveevent_isbase) {
            kicondialog_dragleaveevent_isbase = false;
            KIconDialog::dragLeaveEvent(event);
        } else if (kicondialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kicondialog_dragleaveevent_callback(this, cbval1);
        } else {
            KIconDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kicondialog_dropevent_isbase) {
            kicondialog_dropevent_isbase = false;
            KIconDialog::dropEvent(event);
        } else if (kicondialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kicondialog_dropevent_callback(this, cbval1);
        } else {
            KIconDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kicondialog_hideevent_isbase) {
            kicondialog_hideevent_isbase = false;
            KIconDialog::hideEvent(event);
        } else if (kicondialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kicondialog_hideevent_callback(this, cbval1);
        } else {
            KIconDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kicondialog_nativeevent_isbase) {
            kicondialog_nativeevent_isbase = false;
            return KIconDialog::nativeEvent(eventType, message, result);
        } else if (kicondialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = kicondialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KIconDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kicondialog_changeevent_isbase) {
            kicondialog_changeevent_isbase = false;
            KIconDialog::changeEvent(param1);
        } else if (kicondialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kicondialog_changeevent_callback(this, cbval1);
        } else {
            KIconDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kicondialog_metric_isbase) {
            kicondialog_metric_isbase = false;
            return KIconDialog::metric(param1);
        } else if (kicondialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kicondialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIconDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kicondialog_initpainter_isbase) {
            kicondialog_initpainter_isbase = false;
            KIconDialog::initPainter(painter);
        } else if (kicondialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kicondialog_initpainter_callback(this, cbval1);
        } else {
            KIconDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kicondialog_redirected_isbase) {
            kicondialog_redirected_isbase = false;
            return KIconDialog::redirected(offset);
        } else if (kicondialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kicondialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIconDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kicondialog_sharedpainter_isbase) {
            kicondialog_sharedpainter_isbase = false;
            return KIconDialog::sharedPainter();
        } else if (kicondialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kicondialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return KIconDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kicondialog_inputmethodevent_isbase) {
            kicondialog_inputmethodevent_isbase = false;
            KIconDialog::inputMethodEvent(param1);
        } else if (kicondialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kicondialog_inputmethodevent_callback(this, cbval1);
        } else {
            KIconDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kicondialog_inputmethodquery_isbase) {
            kicondialog_inputmethodquery_isbase = false;
            return KIconDialog::inputMethodQuery(param1);
        } else if (kicondialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kicondialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIconDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kicondialog_focusnextprevchild_isbase) {
            kicondialog_focusnextprevchild_isbase = false;
            return KIconDialog::focusNextPrevChild(next);
        } else if (kicondialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kicondialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIconDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kicondialog_timerevent_isbase) {
            kicondialog_timerevent_isbase = false;
            KIconDialog::timerEvent(event);
        } else if (kicondialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kicondialog_timerevent_callback(this, cbval1);
        } else {
            KIconDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kicondialog_childevent_isbase) {
            kicondialog_childevent_isbase = false;
            KIconDialog::childEvent(event);
        } else if (kicondialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kicondialog_childevent_callback(this, cbval1);
        } else {
            KIconDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kicondialog_customevent_isbase) {
            kicondialog_customevent_isbase = false;
            KIconDialog::customEvent(event);
        } else if (kicondialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kicondialog_customevent_callback(this, cbval1);
        } else {
            KIconDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kicondialog_connectnotify_isbase) {
            kicondialog_connectnotify_isbase = false;
            KIconDialog::connectNotify(signal);
        } else if (kicondialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kicondialog_connectnotify_callback(this, cbval1);
        } else {
            KIconDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kicondialog_disconnectnotify_isbase) {
            kicondialog_disconnectnotify_isbase = false;
            KIconDialog::disconnectNotify(signal);
        } else if (kicondialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kicondialog_disconnectnotify_callback(this, cbval1);
        } else {
            KIconDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotOk() {
        if (kicondialog_slotok_isbase) {
            kicondialog_slotok_isbase = false;
            KIconDialog::slotOk();
        } else if (kicondialog_slotok_callback != nullptr) {
            kicondialog_slotok_callback();
        } else {
            KIconDialog::slotOk();
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kicondialog_adjustposition_isbase) {
            kicondialog_adjustposition_isbase = false;
            KIconDialog::adjustPosition(param1);
        } else if (kicondialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            kicondialog_adjustposition_callback(this, cbval1);
        } else {
            KIconDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kicondialog_updatemicrofocus_isbase) {
            kicondialog_updatemicrofocus_isbase = false;
            KIconDialog::updateMicroFocus();
        } else if (kicondialog_updatemicrofocus_callback != nullptr) {
            kicondialog_updatemicrofocus_callback();
        } else {
            KIconDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kicondialog_create_isbase) {
            kicondialog_create_isbase = false;
            KIconDialog::create();
        } else if (kicondialog_create_callback != nullptr) {
            kicondialog_create_callback();
        } else {
            KIconDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kicondialog_destroy_isbase) {
            kicondialog_destroy_isbase = false;
            KIconDialog::destroy();
        } else if (kicondialog_destroy_callback != nullptr) {
            kicondialog_destroy_callback();
        } else {
            KIconDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kicondialog_focusnextchild_isbase) {
            kicondialog_focusnextchild_isbase = false;
            return KIconDialog::focusNextChild();
        } else if (kicondialog_focusnextchild_callback != nullptr) {
            bool callback_ret = kicondialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return KIconDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kicondialog_focuspreviouschild_isbase) {
            kicondialog_focuspreviouschild_isbase = false;
            return KIconDialog::focusPreviousChild();
        } else if (kicondialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kicondialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KIconDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kicondialog_sender_isbase) {
            kicondialog_sender_isbase = false;
            return KIconDialog::sender();
        } else if (kicondialog_sender_callback != nullptr) {
            QObject* callback_ret = kicondialog_sender_callback();
            return callback_ret;
        } else {
            return KIconDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kicondialog_sendersignalindex_isbase) {
            kicondialog_sendersignalindex_isbase = false;
            return KIconDialog::senderSignalIndex();
        } else if (kicondialog_sendersignalindex_callback != nullptr) {
            int callback_ret = kicondialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIconDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kicondialog_receivers_isbase) {
            kicondialog_receivers_isbase = false;
            return KIconDialog::receivers(signal);
        } else if (kicondialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kicondialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIconDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kicondialog_issignalconnected_isbase) {
            kicondialog_issignalconnected_isbase = false;
            return KIconDialog::isSignalConnected(signal);
        } else if (kicondialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kicondialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIconDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kicondialog_getdecodedmetricf_isbase) {
            kicondialog_getdecodedmetricf_isbase = false;
            return KIconDialog::getDecodedMetricF(metricA, metricB);
        } else if (kicondialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kicondialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KIconDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KIconDialog_ShowEvent(KIconDialog* self, QShowEvent* event);
    friend void KIconDialog_QBaseShowEvent(KIconDialog* self, QShowEvent* event);
    friend void KIconDialog_KeyPressEvent(KIconDialog* self, QKeyEvent* param1);
    friend void KIconDialog_QBaseKeyPressEvent(KIconDialog* self, QKeyEvent* param1);
    friend void KIconDialog_CloseEvent(KIconDialog* self, QCloseEvent* param1);
    friend void KIconDialog_QBaseCloseEvent(KIconDialog* self, QCloseEvent* param1);
    friend void KIconDialog_ResizeEvent(KIconDialog* self, QResizeEvent* param1);
    friend void KIconDialog_QBaseResizeEvent(KIconDialog* self, QResizeEvent* param1);
    friend void KIconDialog_ContextMenuEvent(KIconDialog* self, QContextMenuEvent* param1);
    friend void KIconDialog_QBaseContextMenuEvent(KIconDialog* self, QContextMenuEvent* param1);
    friend bool KIconDialog_EventFilter(KIconDialog* self, QObject* param1, QEvent* param2);
    friend bool KIconDialog_QBaseEventFilter(KIconDialog* self, QObject* param1, QEvent* param2);
    friend bool KIconDialog_Event(KIconDialog* self, QEvent* event);
    friend bool KIconDialog_QBaseEvent(KIconDialog* self, QEvent* event);
    friend void KIconDialog_MousePressEvent(KIconDialog* self, QMouseEvent* event);
    friend void KIconDialog_QBaseMousePressEvent(KIconDialog* self, QMouseEvent* event);
    friend void KIconDialog_MouseReleaseEvent(KIconDialog* self, QMouseEvent* event);
    friend void KIconDialog_QBaseMouseReleaseEvent(KIconDialog* self, QMouseEvent* event);
    friend void KIconDialog_MouseDoubleClickEvent(KIconDialog* self, QMouseEvent* event);
    friend void KIconDialog_QBaseMouseDoubleClickEvent(KIconDialog* self, QMouseEvent* event);
    friend void KIconDialog_MouseMoveEvent(KIconDialog* self, QMouseEvent* event);
    friend void KIconDialog_QBaseMouseMoveEvent(KIconDialog* self, QMouseEvent* event);
    friend void KIconDialog_WheelEvent(KIconDialog* self, QWheelEvent* event);
    friend void KIconDialog_QBaseWheelEvent(KIconDialog* self, QWheelEvent* event);
    friend void KIconDialog_KeyReleaseEvent(KIconDialog* self, QKeyEvent* event);
    friend void KIconDialog_QBaseKeyReleaseEvent(KIconDialog* self, QKeyEvent* event);
    friend void KIconDialog_FocusInEvent(KIconDialog* self, QFocusEvent* event);
    friend void KIconDialog_QBaseFocusInEvent(KIconDialog* self, QFocusEvent* event);
    friend void KIconDialog_FocusOutEvent(KIconDialog* self, QFocusEvent* event);
    friend void KIconDialog_QBaseFocusOutEvent(KIconDialog* self, QFocusEvent* event);
    friend void KIconDialog_EnterEvent(KIconDialog* self, QEnterEvent* event);
    friend void KIconDialog_QBaseEnterEvent(KIconDialog* self, QEnterEvent* event);
    friend void KIconDialog_LeaveEvent(KIconDialog* self, QEvent* event);
    friend void KIconDialog_QBaseLeaveEvent(KIconDialog* self, QEvent* event);
    friend void KIconDialog_PaintEvent(KIconDialog* self, QPaintEvent* event);
    friend void KIconDialog_QBasePaintEvent(KIconDialog* self, QPaintEvent* event);
    friend void KIconDialog_MoveEvent(KIconDialog* self, QMoveEvent* event);
    friend void KIconDialog_QBaseMoveEvent(KIconDialog* self, QMoveEvent* event);
    friend void KIconDialog_TabletEvent(KIconDialog* self, QTabletEvent* event);
    friend void KIconDialog_QBaseTabletEvent(KIconDialog* self, QTabletEvent* event);
    friend void KIconDialog_ActionEvent(KIconDialog* self, QActionEvent* event);
    friend void KIconDialog_QBaseActionEvent(KIconDialog* self, QActionEvent* event);
    friend void KIconDialog_DragEnterEvent(KIconDialog* self, QDragEnterEvent* event);
    friend void KIconDialog_QBaseDragEnterEvent(KIconDialog* self, QDragEnterEvent* event);
    friend void KIconDialog_DragMoveEvent(KIconDialog* self, QDragMoveEvent* event);
    friend void KIconDialog_QBaseDragMoveEvent(KIconDialog* self, QDragMoveEvent* event);
    friend void KIconDialog_DragLeaveEvent(KIconDialog* self, QDragLeaveEvent* event);
    friend void KIconDialog_QBaseDragLeaveEvent(KIconDialog* self, QDragLeaveEvent* event);
    friend void KIconDialog_DropEvent(KIconDialog* self, QDropEvent* event);
    friend void KIconDialog_QBaseDropEvent(KIconDialog* self, QDropEvent* event);
    friend void KIconDialog_HideEvent(KIconDialog* self, QHideEvent* event);
    friend void KIconDialog_QBaseHideEvent(KIconDialog* self, QHideEvent* event);
    friend bool KIconDialog_NativeEvent(KIconDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KIconDialog_QBaseNativeEvent(KIconDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KIconDialog_ChangeEvent(KIconDialog* self, QEvent* param1);
    friend void KIconDialog_QBaseChangeEvent(KIconDialog* self, QEvent* param1);
    friend int KIconDialog_Metric(const KIconDialog* self, int param1);
    friend int KIconDialog_QBaseMetric(const KIconDialog* self, int param1);
    friend void KIconDialog_InitPainter(const KIconDialog* self, QPainter* painter);
    friend void KIconDialog_QBaseInitPainter(const KIconDialog* self, QPainter* painter);
    friend QPaintDevice* KIconDialog_Redirected(const KIconDialog* self, QPoint* offset);
    friend QPaintDevice* KIconDialog_QBaseRedirected(const KIconDialog* self, QPoint* offset);
    friend QPainter* KIconDialog_SharedPainter(const KIconDialog* self);
    friend QPainter* KIconDialog_QBaseSharedPainter(const KIconDialog* self);
    friend void KIconDialog_InputMethodEvent(KIconDialog* self, QInputMethodEvent* param1);
    friend void KIconDialog_QBaseInputMethodEvent(KIconDialog* self, QInputMethodEvent* param1);
    friend bool KIconDialog_FocusNextPrevChild(KIconDialog* self, bool next);
    friend bool KIconDialog_QBaseFocusNextPrevChild(KIconDialog* self, bool next);
    friend void KIconDialog_TimerEvent(KIconDialog* self, QTimerEvent* event);
    friend void KIconDialog_QBaseTimerEvent(KIconDialog* self, QTimerEvent* event);
    friend void KIconDialog_ChildEvent(KIconDialog* self, QChildEvent* event);
    friend void KIconDialog_QBaseChildEvent(KIconDialog* self, QChildEvent* event);
    friend void KIconDialog_CustomEvent(KIconDialog* self, QEvent* event);
    friend void KIconDialog_QBaseCustomEvent(KIconDialog* self, QEvent* event);
    friend void KIconDialog_ConnectNotify(KIconDialog* self, const QMetaMethod* signal);
    friend void KIconDialog_QBaseConnectNotify(KIconDialog* self, const QMetaMethod* signal);
    friend void KIconDialog_DisconnectNotify(KIconDialog* self, const QMetaMethod* signal);
    friend void KIconDialog_QBaseDisconnectNotify(KIconDialog* self, const QMetaMethod* signal);
    friend void KIconDialog_SlotOk(KIconDialog* self);
    friend void KIconDialog_QBaseSlotOk(KIconDialog* self);
    friend void KIconDialog_AdjustPosition(KIconDialog* self, QWidget* param1);
    friend void KIconDialog_QBaseAdjustPosition(KIconDialog* self, QWidget* param1);
    friend void KIconDialog_UpdateMicroFocus(KIconDialog* self);
    friend void KIconDialog_QBaseUpdateMicroFocus(KIconDialog* self);
    friend void KIconDialog_Create(KIconDialog* self);
    friend void KIconDialog_QBaseCreate(KIconDialog* self);
    friend void KIconDialog_Destroy(KIconDialog* self);
    friend void KIconDialog_QBaseDestroy(KIconDialog* self);
    friend bool KIconDialog_FocusNextChild(KIconDialog* self);
    friend bool KIconDialog_QBaseFocusNextChild(KIconDialog* self);
    friend bool KIconDialog_FocusPreviousChild(KIconDialog* self);
    friend bool KIconDialog_QBaseFocusPreviousChild(KIconDialog* self);
    friend QObject* KIconDialog_Sender(const KIconDialog* self);
    friend QObject* KIconDialog_QBaseSender(const KIconDialog* self);
    friend int KIconDialog_SenderSignalIndex(const KIconDialog* self);
    friend int KIconDialog_QBaseSenderSignalIndex(const KIconDialog* self);
    friend int KIconDialog_Receivers(const KIconDialog* self, const char* signal);
    friend int KIconDialog_QBaseReceivers(const KIconDialog* self, const char* signal);
    friend bool KIconDialog_IsSignalConnected(const KIconDialog* self, const QMetaMethod* signal);
    friend bool KIconDialog_QBaseIsSignalConnected(const KIconDialog* self, const QMetaMethod* signal);
    friend double KIconDialog_GetDecodedMetricF(const KIconDialog* self, int metricA, int metricB);
    friend double KIconDialog_QBaseGetDecodedMetricF(const KIconDialog* self, int metricA, int metricB);
};

#endif
