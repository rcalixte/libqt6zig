#pragma once
#ifndef SRC_EXTRAS_SONNETC_LIBVIRTUALCONFIGDIALOG_H
#define SRC_EXTRAS_SONNETC_LIBVIRTUALCONFIGDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Sonnet::ConfigDialog so that we can call protected methods
class VirtualSonnetConfigDialog final : public Sonnet::ConfigDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualSonnetConfigDialog = true;

    // Virtual class public types (including callbacks)
    using Sonnet__ConfigDialog_Metacall_Callback = int (*)(Sonnet__ConfigDialog*, int, int, void**);
    using Sonnet__ConfigDialog_SlotOk_Callback = void (*)();
    using Sonnet__ConfigDialog_SlotApply_Callback = void (*)();
    using Sonnet__ConfigDialog_SetVisible_Callback = void (*)(Sonnet__ConfigDialog*, bool);
    using Sonnet__ConfigDialog_SizeHint_Callback = QSize* (*)();
    using Sonnet__ConfigDialog_MinimumSizeHint_Callback = QSize* (*)();
    using Sonnet__ConfigDialog_Open_Callback = void (*)();
    using Sonnet__ConfigDialog_Exec_Callback = int (*)();
    using Sonnet__ConfigDialog_Done_Callback = void (*)(Sonnet__ConfigDialog*, int);
    using Sonnet__ConfigDialog_Accept_Callback = void (*)();
    using Sonnet__ConfigDialog_Reject_Callback = void (*)();
    using Sonnet__ConfigDialog_KeyPressEvent_Callback = void (*)(Sonnet__ConfigDialog*, QKeyEvent*);
    using Sonnet__ConfigDialog_CloseEvent_Callback = void (*)(Sonnet__ConfigDialog*, QCloseEvent*);
    using Sonnet__ConfigDialog_ShowEvent_Callback = void (*)(Sonnet__ConfigDialog*, QShowEvent*);
    using Sonnet__ConfigDialog_ResizeEvent_Callback = void (*)(Sonnet__ConfigDialog*, QResizeEvent*);
    using Sonnet__ConfigDialog_ContextMenuEvent_Callback = void (*)(Sonnet__ConfigDialog*, QContextMenuEvent*);
    using Sonnet__ConfigDialog_EventFilter_Callback = bool (*)(Sonnet__ConfigDialog*, QObject*, QEvent*);
    using Sonnet__ConfigDialog_DevType_Callback = int (*)();
    using Sonnet__ConfigDialog_HeightForWidth_Callback = int (*)(const Sonnet__ConfigDialog*, int);
    using Sonnet__ConfigDialog_HasHeightForWidth_Callback = bool (*)();
    using Sonnet__ConfigDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using Sonnet__ConfigDialog_Event_Callback = bool (*)(Sonnet__ConfigDialog*, QEvent*);
    using Sonnet__ConfigDialog_MousePressEvent_Callback = void (*)(Sonnet__ConfigDialog*, QMouseEvent*);
    using Sonnet__ConfigDialog_MouseReleaseEvent_Callback = void (*)(Sonnet__ConfigDialog*, QMouseEvent*);
    using Sonnet__ConfigDialog_MouseDoubleClickEvent_Callback = void (*)(Sonnet__ConfigDialog*, QMouseEvent*);
    using Sonnet__ConfigDialog_MouseMoveEvent_Callback = void (*)(Sonnet__ConfigDialog*, QMouseEvent*);
    using Sonnet__ConfigDialog_WheelEvent_Callback = void (*)(Sonnet__ConfigDialog*, QWheelEvent*);
    using Sonnet__ConfigDialog_KeyReleaseEvent_Callback = void (*)(Sonnet__ConfigDialog*, QKeyEvent*);
    using Sonnet__ConfigDialog_FocusInEvent_Callback = void (*)(Sonnet__ConfigDialog*, QFocusEvent*);
    using Sonnet__ConfigDialog_FocusOutEvent_Callback = void (*)(Sonnet__ConfigDialog*, QFocusEvent*);
    using Sonnet__ConfigDialog_EnterEvent_Callback = void (*)(Sonnet__ConfigDialog*, QEnterEvent*);
    using Sonnet__ConfigDialog_LeaveEvent_Callback = void (*)(Sonnet__ConfigDialog*, QEvent*);
    using Sonnet__ConfigDialog_PaintEvent_Callback = void (*)(Sonnet__ConfigDialog*, QPaintEvent*);
    using Sonnet__ConfigDialog_MoveEvent_Callback = void (*)(Sonnet__ConfigDialog*, QMoveEvent*);
    using Sonnet__ConfigDialog_TabletEvent_Callback = void (*)(Sonnet__ConfigDialog*, QTabletEvent*);
    using Sonnet__ConfigDialog_ActionEvent_Callback = void (*)(Sonnet__ConfigDialog*, QActionEvent*);
    using Sonnet__ConfigDialog_DragEnterEvent_Callback = void (*)(Sonnet__ConfigDialog*, QDragEnterEvent*);
    using Sonnet__ConfigDialog_DragMoveEvent_Callback = void (*)(Sonnet__ConfigDialog*, QDragMoveEvent*);
    using Sonnet__ConfigDialog_DragLeaveEvent_Callback = void (*)(Sonnet__ConfigDialog*, QDragLeaveEvent*);
    using Sonnet__ConfigDialog_DropEvent_Callback = void (*)(Sonnet__ConfigDialog*, QDropEvent*);
    using Sonnet__ConfigDialog_HideEvent_Callback = void (*)(Sonnet__ConfigDialog*, QHideEvent*);
    using Sonnet__ConfigDialog_NativeEvent_Callback = bool (*)(Sonnet__ConfigDialog*, libqt_string, void*, intptr_t*);
    using Sonnet__ConfigDialog_ChangeEvent_Callback = void (*)(Sonnet__ConfigDialog*, QEvent*);
    using Sonnet__ConfigDialog_Metric_Callback = int (*)(const Sonnet__ConfigDialog*, int);
    using Sonnet__ConfigDialog_InitPainter_Callback = void (*)(const Sonnet__ConfigDialog*, QPainter*);
    using Sonnet__ConfigDialog_Redirected_Callback = QPaintDevice* (*)(const Sonnet__ConfigDialog*, QPoint*);
    using Sonnet__ConfigDialog_SharedPainter_Callback = QPainter* (*)();
    using Sonnet__ConfigDialog_InputMethodEvent_Callback = void (*)(Sonnet__ConfigDialog*, QInputMethodEvent*);
    using Sonnet__ConfigDialog_InputMethodQuery_Callback = QVariant* (*)(const Sonnet__ConfigDialog*, int);
    using Sonnet__ConfigDialog_FocusNextPrevChild_Callback = bool (*)(Sonnet__ConfigDialog*, bool);
    using Sonnet__ConfigDialog_TimerEvent_Callback = void (*)(Sonnet__ConfigDialog*, QTimerEvent*);
    using Sonnet__ConfigDialog_ChildEvent_Callback = void (*)(Sonnet__ConfigDialog*, QChildEvent*);
    using Sonnet__ConfigDialog_CustomEvent_Callback = void (*)(Sonnet__ConfigDialog*, QEvent*);
    using Sonnet__ConfigDialog_ConnectNotify_Callback = void (*)(Sonnet__ConfigDialog*, QMetaMethod*);
    using Sonnet__ConfigDialog_DisconnectNotify_Callback = void (*)(Sonnet__ConfigDialog*, QMetaMethod*);
    using Sonnet__ConfigDialog_AdjustPosition_Callback = void (*)(Sonnet__ConfigDialog*, QWidget*);
    using Sonnet__ConfigDialog_UpdateMicroFocus_Callback = void (*)();
    using Sonnet__ConfigDialog_Create_Callback = void (*)();
    using Sonnet__ConfigDialog_Destroy_Callback = void (*)();
    using Sonnet__ConfigDialog_FocusNextChild_Callback = bool (*)();
    using Sonnet__ConfigDialog_FocusPreviousChild_Callback = bool (*)();
    using Sonnet__ConfigDialog_Sender_Callback = QObject* (*)();
    using Sonnet__ConfigDialog_SenderSignalIndex_Callback = int (*)();
    using Sonnet__ConfigDialog_Receivers_Callback = int (*)(const Sonnet__ConfigDialog*, const char*);
    using Sonnet__ConfigDialog_IsSignalConnected_Callback = bool (*)(const Sonnet__ConfigDialog*, QMetaMethod*);
    using Sonnet__ConfigDialog_GetDecodedMetricF_Callback = double (*)(const Sonnet__ConfigDialog*, int, int);

  protected:
    // Instance callback storage
    Sonnet__ConfigDialog_Metacall_Callback sonnet__configdialog_metacall_callback = nullptr;
    Sonnet__ConfigDialog_SlotOk_Callback sonnet__configdialog_slotok_callback = nullptr;
    Sonnet__ConfigDialog_SlotApply_Callback sonnet__configdialog_slotapply_callback = nullptr;
    Sonnet__ConfigDialog_SetVisible_Callback sonnet__configdialog_setvisible_callback = nullptr;
    Sonnet__ConfigDialog_SizeHint_Callback sonnet__configdialog_sizehint_callback = nullptr;
    Sonnet__ConfigDialog_MinimumSizeHint_Callback sonnet__configdialog_minimumsizehint_callback = nullptr;
    Sonnet__ConfigDialog_Open_Callback sonnet__configdialog_open_callback = nullptr;
    Sonnet__ConfigDialog_Exec_Callback sonnet__configdialog_exec_callback = nullptr;
    Sonnet__ConfigDialog_Done_Callback sonnet__configdialog_done_callback = nullptr;
    Sonnet__ConfigDialog_Accept_Callback sonnet__configdialog_accept_callback = nullptr;
    Sonnet__ConfigDialog_Reject_Callback sonnet__configdialog_reject_callback = nullptr;
    Sonnet__ConfigDialog_KeyPressEvent_Callback sonnet__configdialog_keypressevent_callback = nullptr;
    Sonnet__ConfigDialog_CloseEvent_Callback sonnet__configdialog_closeevent_callback = nullptr;
    Sonnet__ConfigDialog_ShowEvent_Callback sonnet__configdialog_showevent_callback = nullptr;
    Sonnet__ConfigDialog_ResizeEvent_Callback sonnet__configdialog_resizeevent_callback = nullptr;
    Sonnet__ConfigDialog_ContextMenuEvent_Callback sonnet__configdialog_contextmenuevent_callback = nullptr;
    Sonnet__ConfigDialog_EventFilter_Callback sonnet__configdialog_eventfilter_callback = nullptr;
    Sonnet__ConfigDialog_DevType_Callback sonnet__configdialog_devtype_callback = nullptr;
    Sonnet__ConfigDialog_HeightForWidth_Callback sonnet__configdialog_heightforwidth_callback = nullptr;
    Sonnet__ConfigDialog_HasHeightForWidth_Callback sonnet__configdialog_hasheightforwidth_callback = nullptr;
    Sonnet__ConfigDialog_PaintEngine_Callback sonnet__configdialog_paintengine_callback = nullptr;
    Sonnet__ConfigDialog_Event_Callback sonnet__configdialog_event_callback = nullptr;
    Sonnet__ConfigDialog_MousePressEvent_Callback sonnet__configdialog_mousepressevent_callback = nullptr;
    Sonnet__ConfigDialog_MouseReleaseEvent_Callback sonnet__configdialog_mousereleaseevent_callback = nullptr;
    Sonnet__ConfigDialog_MouseDoubleClickEvent_Callback sonnet__configdialog_mousedoubleclickevent_callback = nullptr;
    Sonnet__ConfigDialog_MouseMoveEvent_Callback sonnet__configdialog_mousemoveevent_callback = nullptr;
    Sonnet__ConfigDialog_WheelEvent_Callback sonnet__configdialog_wheelevent_callback = nullptr;
    Sonnet__ConfigDialog_KeyReleaseEvent_Callback sonnet__configdialog_keyreleaseevent_callback = nullptr;
    Sonnet__ConfigDialog_FocusInEvent_Callback sonnet__configdialog_focusinevent_callback = nullptr;
    Sonnet__ConfigDialog_FocusOutEvent_Callback sonnet__configdialog_focusoutevent_callback = nullptr;
    Sonnet__ConfigDialog_EnterEvent_Callback sonnet__configdialog_enterevent_callback = nullptr;
    Sonnet__ConfigDialog_LeaveEvent_Callback sonnet__configdialog_leaveevent_callback = nullptr;
    Sonnet__ConfigDialog_PaintEvent_Callback sonnet__configdialog_paintevent_callback = nullptr;
    Sonnet__ConfigDialog_MoveEvent_Callback sonnet__configdialog_moveevent_callback = nullptr;
    Sonnet__ConfigDialog_TabletEvent_Callback sonnet__configdialog_tabletevent_callback = nullptr;
    Sonnet__ConfigDialog_ActionEvent_Callback sonnet__configdialog_actionevent_callback = nullptr;
    Sonnet__ConfigDialog_DragEnterEvent_Callback sonnet__configdialog_dragenterevent_callback = nullptr;
    Sonnet__ConfigDialog_DragMoveEvent_Callback sonnet__configdialog_dragmoveevent_callback = nullptr;
    Sonnet__ConfigDialog_DragLeaveEvent_Callback sonnet__configdialog_dragleaveevent_callback = nullptr;
    Sonnet__ConfigDialog_DropEvent_Callback sonnet__configdialog_dropevent_callback = nullptr;
    Sonnet__ConfigDialog_HideEvent_Callback sonnet__configdialog_hideevent_callback = nullptr;
    Sonnet__ConfigDialog_NativeEvent_Callback sonnet__configdialog_nativeevent_callback = nullptr;
    Sonnet__ConfigDialog_ChangeEvent_Callback sonnet__configdialog_changeevent_callback = nullptr;
    Sonnet__ConfigDialog_Metric_Callback sonnet__configdialog_metric_callback = nullptr;
    Sonnet__ConfigDialog_InitPainter_Callback sonnet__configdialog_initpainter_callback = nullptr;
    Sonnet__ConfigDialog_Redirected_Callback sonnet__configdialog_redirected_callback = nullptr;
    Sonnet__ConfigDialog_SharedPainter_Callback sonnet__configdialog_sharedpainter_callback = nullptr;
    Sonnet__ConfigDialog_InputMethodEvent_Callback sonnet__configdialog_inputmethodevent_callback = nullptr;
    Sonnet__ConfigDialog_InputMethodQuery_Callback sonnet__configdialog_inputmethodquery_callback = nullptr;
    Sonnet__ConfigDialog_FocusNextPrevChild_Callback sonnet__configdialog_focusnextprevchild_callback = nullptr;
    Sonnet__ConfigDialog_TimerEvent_Callback sonnet__configdialog_timerevent_callback = nullptr;
    Sonnet__ConfigDialog_ChildEvent_Callback sonnet__configdialog_childevent_callback = nullptr;
    Sonnet__ConfigDialog_CustomEvent_Callback sonnet__configdialog_customevent_callback = nullptr;
    Sonnet__ConfigDialog_ConnectNotify_Callback sonnet__configdialog_connectnotify_callback = nullptr;
    Sonnet__ConfigDialog_DisconnectNotify_Callback sonnet__configdialog_disconnectnotify_callback = nullptr;
    Sonnet__ConfigDialog_AdjustPosition_Callback sonnet__configdialog_adjustposition_callback = nullptr;
    Sonnet__ConfigDialog_UpdateMicroFocus_Callback sonnet__configdialog_updatemicrofocus_callback = nullptr;
    Sonnet__ConfigDialog_Create_Callback sonnet__configdialog_create_callback = nullptr;
    Sonnet__ConfigDialog_Destroy_Callback sonnet__configdialog_destroy_callback = nullptr;
    Sonnet__ConfigDialog_FocusNextChild_Callback sonnet__configdialog_focusnextchild_callback = nullptr;
    Sonnet__ConfigDialog_FocusPreviousChild_Callback sonnet__configdialog_focuspreviouschild_callback = nullptr;
    Sonnet__ConfigDialog_Sender_Callback sonnet__configdialog_sender_callback = nullptr;
    Sonnet__ConfigDialog_SenderSignalIndex_Callback sonnet__configdialog_sendersignalindex_callback = nullptr;
    Sonnet__ConfigDialog_Receivers_Callback sonnet__configdialog_receivers_callback = nullptr;
    Sonnet__ConfigDialog_IsSignalConnected_Callback sonnet__configdialog_issignalconnected_callback = nullptr;
    Sonnet__ConfigDialog_GetDecodedMetricF_Callback sonnet__configdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool sonnet__configdialog_metacall_isbase = false;
    mutable bool sonnet__configdialog_slotok_isbase = false;
    mutable bool sonnet__configdialog_slotapply_isbase = false;
    mutable bool sonnet__configdialog_setvisible_isbase = false;
    mutable bool sonnet__configdialog_sizehint_isbase = false;
    mutable bool sonnet__configdialog_minimumsizehint_isbase = false;
    mutable bool sonnet__configdialog_open_isbase = false;
    mutable bool sonnet__configdialog_exec_isbase = false;
    mutable bool sonnet__configdialog_done_isbase = false;
    mutable bool sonnet__configdialog_accept_isbase = false;
    mutable bool sonnet__configdialog_reject_isbase = false;
    mutable bool sonnet__configdialog_keypressevent_isbase = false;
    mutable bool sonnet__configdialog_closeevent_isbase = false;
    mutable bool sonnet__configdialog_showevent_isbase = false;
    mutable bool sonnet__configdialog_resizeevent_isbase = false;
    mutable bool sonnet__configdialog_contextmenuevent_isbase = false;
    mutable bool sonnet__configdialog_eventfilter_isbase = false;
    mutable bool sonnet__configdialog_devtype_isbase = false;
    mutable bool sonnet__configdialog_heightforwidth_isbase = false;
    mutable bool sonnet__configdialog_hasheightforwidth_isbase = false;
    mutable bool sonnet__configdialog_paintengine_isbase = false;
    mutable bool sonnet__configdialog_event_isbase = false;
    mutable bool sonnet__configdialog_mousepressevent_isbase = false;
    mutable bool sonnet__configdialog_mousereleaseevent_isbase = false;
    mutable bool sonnet__configdialog_mousedoubleclickevent_isbase = false;
    mutable bool sonnet__configdialog_mousemoveevent_isbase = false;
    mutable bool sonnet__configdialog_wheelevent_isbase = false;
    mutable bool sonnet__configdialog_keyreleaseevent_isbase = false;
    mutable bool sonnet__configdialog_focusinevent_isbase = false;
    mutable bool sonnet__configdialog_focusoutevent_isbase = false;
    mutable bool sonnet__configdialog_enterevent_isbase = false;
    mutable bool sonnet__configdialog_leaveevent_isbase = false;
    mutable bool sonnet__configdialog_paintevent_isbase = false;
    mutable bool sonnet__configdialog_moveevent_isbase = false;
    mutable bool sonnet__configdialog_tabletevent_isbase = false;
    mutable bool sonnet__configdialog_actionevent_isbase = false;
    mutable bool sonnet__configdialog_dragenterevent_isbase = false;
    mutable bool sonnet__configdialog_dragmoveevent_isbase = false;
    mutable bool sonnet__configdialog_dragleaveevent_isbase = false;
    mutable bool sonnet__configdialog_dropevent_isbase = false;
    mutable bool sonnet__configdialog_hideevent_isbase = false;
    mutable bool sonnet__configdialog_nativeevent_isbase = false;
    mutable bool sonnet__configdialog_changeevent_isbase = false;
    mutable bool sonnet__configdialog_metric_isbase = false;
    mutable bool sonnet__configdialog_initpainter_isbase = false;
    mutable bool sonnet__configdialog_redirected_isbase = false;
    mutable bool sonnet__configdialog_sharedpainter_isbase = false;
    mutable bool sonnet__configdialog_inputmethodevent_isbase = false;
    mutable bool sonnet__configdialog_inputmethodquery_isbase = false;
    mutable bool sonnet__configdialog_focusnextprevchild_isbase = false;
    mutable bool sonnet__configdialog_timerevent_isbase = false;
    mutable bool sonnet__configdialog_childevent_isbase = false;
    mutable bool sonnet__configdialog_customevent_isbase = false;
    mutable bool sonnet__configdialog_connectnotify_isbase = false;
    mutable bool sonnet__configdialog_disconnectnotify_isbase = false;
    mutable bool sonnet__configdialog_adjustposition_isbase = false;
    mutable bool sonnet__configdialog_updatemicrofocus_isbase = false;
    mutable bool sonnet__configdialog_create_isbase = false;
    mutable bool sonnet__configdialog_destroy_isbase = false;
    mutable bool sonnet__configdialog_focusnextchild_isbase = false;
    mutable bool sonnet__configdialog_focuspreviouschild_isbase = false;
    mutable bool sonnet__configdialog_sender_isbase = false;
    mutable bool sonnet__configdialog_sendersignalindex_isbase = false;
    mutable bool sonnet__configdialog_receivers_isbase = false;
    mutable bool sonnet__configdialog_issignalconnected_isbase = false;
    mutable bool sonnet__configdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualSonnetConfigDialog(QWidget* parent) : Sonnet::ConfigDialog(parent) {};

    ~VirtualSonnetConfigDialog() {
        sonnet__configdialog_metacall_callback = nullptr;
        sonnet__configdialog_slotok_callback = nullptr;
        sonnet__configdialog_slotapply_callback = nullptr;
        sonnet__configdialog_setvisible_callback = nullptr;
        sonnet__configdialog_sizehint_callback = nullptr;
        sonnet__configdialog_minimumsizehint_callback = nullptr;
        sonnet__configdialog_open_callback = nullptr;
        sonnet__configdialog_exec_callback = nullptr;
        sonnet__configdialog_done_callback = nullptr;
        sonnet__configdialog_accept_callback = nullptr;
        sonnet__configdialog_reject_callback = nullptr;
        sonnet__configdialog_keypressevent_callback = nullptr;
        sonnet__configdialog_closeevent_callback = nullptr;
        sonnet__configdialog_showevent_callback = nullptr;
        sonnet__configdialog_resizeevent_callback = nullptr;
        sonnet__configdialog_contextmenuevent_callback = nullptr;
        sonnet__configdialog_eventfilter_callback = nullptr;
        sonnet__configdialog_devtype_callback = nullptr;
        sonnet__configdialog_heightforwidth_callback = nullptr;
        sonnet__configdialog_hasheightforwidth_callback = nullptr;
        sonnet__configdialog_paintengine_callback = nullptr;
        sonnet__configdialog_event_callback = nullptr;
        sonnet__configdialog_mousepressevent_callback = nullptr;
        sonnet__configdialog_mousereleaseevent_callback = nullptr;
        sonnet__configdialog_mousedoubleclickevent_callback = nullptr;
        sonnet__configdialog_mousemoveevent_callback = nullptr;
        sonnet__configdialog_wheelevent_callback = nullptr;
        sonnet__configdialog_keyreleaseevent_callback = nullptr;
        sonnet__configdialog_focusinevent_callback = nullptr;
        sonnet__configdialog_focusoutevent_callback = nullptr;
        sonnet__configdialog_enterevent_callback = nullptr;
        sonnet__configdialog_leaveevent_callback = nullptr;
        sonnet__configdialog_paintevent_callback = nullptr;
        sonnet__configdialog_moveevent_callback = nullptr;
        sonnet__configdialog_tabletevent_callback = nullptr;
        sonnet__configdialog_actionevent_callback = nullptr;
        sonnet__configdialog_dragenterevent_callback = nullptr;
        sonnet__configdialog_dragmoveevent_callback = nullptr;
        sonnet__configdialog_dragleaveevent_callback = nullptr;
        sonnet__configdialog_dropevent_callback = nullptr;
        sonnet__configdialog_hideevent_callback = nullptr;
        sonnet__configdialog_nativeevent_callback = nullptr;
        sonnet__configdialog_changeevent_callback = nullptr;
        sonnet__configdialog_metric_callback = nullptr;
        sonnet__configdialog_initpainter_callback = nullptr;
        sonnet__configdialog_redirected_callback = nullptr;
        sonnet__configdialog_sharedpainter_callback = nullptr;
        sonnet__configdialog_inputmethodevent_callback = nullptr;
        sonnet__configdialog_inputmethodquery_callback = nullptr;
        sonnet__configdialog_focusnextprevchild_callback = nullptr;
        sonnet__configdialog_timerevent_callback = nullptr;
        sonnet__configdialog_childevent_callback = nullptr;
        sonnet__configdialog_customevent_callback = nullptr;
        sonnet__configdialog_connectnotify_callback = nullptr;
        sonnet__configdialog_disconnectnotify_callback = nullptr;
        sonnet__configdialog_adjustposition_callback = nullptr;
        sonnet__configdialog_updatemicrofocus_callback = nullptr;
        sonnet__configdialog_create_callback = nullptr;
        sonnet__configdialog_destroy_callback = nullptr;
        sonnet__configdialog_focusnextchild_callback = nullptr;
        sonnet__configdialog_focuspreviouschild_callback = nullptr;
        sonnet__configdialog_sender_callback = nullptr;
        sonnet__configdialog_sendersignalindex_callback = nullptr;
        sonnet__configdialog_receivers_callback = nullptr;
        sonnet__configdialog_issignalconnected_callback = nullptr;
        sonnet__configdialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setSonnet__ConfigDialog_Metacall_Callback(Sonnet__ConfigDialog_Metacall_Callback cb) { sonnet__configdialog_metacall_callback = cb; }
    inline void setSonnet__ConfigDialog_SlotOk_Callback(Sonnet__ConfigDialog_SlotOk_Callback cb) { sonnet__configdialog_slotok_callback = cb; }
    inline void setSonnet__ConfigDialog_SlotApply_Callback(Sonnet__ConfigDialog_SlotApply_Callback cb) { sonnet__configdialog_slotapply_callback = cb; }
    inline void setSonnet__ConfigDialog_SetVisible_Callback(Sonnet__ConfigDialog_SetVisible_Callback cb) { sonnet__configdialog_setvisible_callback = cb; }
    inline void setSonnet__ConfigDialog_SizeHint_Callback(Sonnet__ConfigDialog_SizeHint_Callback cb) { sonnet__configdialog_sizehint_callback = cb; }
    inline void setSonnet__ConfigDialog_MinimumSizeHint_Callback(Sonnet__ConfigDialog_MinimumSizeHint_Callback cb) { sonnet__configdialog_minimumsizehint_callback = cb; }
    inline void setSonnet__ConfigDialog_Open_Callback(Sonnet__ConfigDialog_Open_Callback cb) { sonnet__configdialog_open_callback = cb; }
    inline void setSonnet__ConfigDialog_Exec_Callback(Sonnet__ConfigDialog_Exec_Callback cb) { sonnet__configdialog_exec_callback = cb; }
    inline void setSonnet__ConfigDialog_Done_Callback(Sonnet__ConfigDialog_Done_Callback cb) { sonnet__configdialog_done_callback = cb; }
    inline void setSonnet__ConfigDialog_Accept_Callback(Sonnet__ConfigDialog_Accept_Callback cb) { sonnet__configdialog_accept_callback = cb; }
    inline void setSonnet__ConfigDialog_Reject_Callback(Sonnet__ConfigDialog_Reject_Callback cb) { sonnet__configdialog_reject_callback = cb; }
    inline void setSonnet__ConfigDialog_KeyPressEvent_Callback(Sonnet__ConfigDialog_KeyPressEvent_Callback cb) { sonnet__configdialog_keypressevent_callback = cb; }
    inline void setSonnet__ConfigDialog_CloseEvent_Callback(Sonnet__ConfigDialog_CloseEvent_Callback cb) { sonnet__configdialog_closeevent_callback = cb; }
    inline void setSonnet__ConfigDialog_ShowEvent_Callback(Sonnet__ConfigDialog_ShowEvent_Callback cb) { sonnet__configdialog_showevent_callback = cb; }
    inline void setSonnet__ConfigDialog_ResizeEvent_Callback(Sonnet__ConfigDialog_ResizeEvent_Callback cb) { sonnet__configdialog_resizeevent_callback = cb; }
    inline void setSonnet__ConfigDialog_ContextMenuEvent_Callback(Sonnet__ConfigDialog_ContextMenuEvent_Callback cb) { sonnet__configdialog_contextmenuevent_callback = cb; }
    inline void setSonnet__ConfigDialog_EventFilter_Callback(Sonnet__ConfigDialog_EventFilter_Callback cb) { sonnet__configdialog_eventfilter_callback = cb; }
    inline void setSonnet__ConfigDialog_DevType_Callback(Sonnet__ConfigDialog_DevType_Callback cb) { sonnet__configdialog_devtype_callback = cb; }
    inline void setSonnet__ConfigDialog_HeightForWidth_Callback(Sonnet__ConfigDialog_HeightForWidth_Callback cb) { sonnet__configdialog_heightforwidth_callback = cb; }
    inline void setSonnet__ConfigDialog_HasHeightForWidth_Callback(Sonnet__ConfigDialog_HasHeightForWidth_Callback cb) { sonnet__configdialog_hasheightforwidth_callback = cb; }
    inline void setSonnet__ConfigDialog_PaintEngine_Callback(Sonnet__ConfigDialog_PaintEngine_Callback cb) { sonnet__configdialog_paintengine_callback = cb; }
    inline void setSonnet__ConfigDialog_Event_Callback(Sonnet__ConfigDialog_Event_Callback cb) { sonnet__configdialog_event_callback = cb; }
    inline void setSonnet__ConfigDialog_MousePressEvent_Callback(Sonnet__ConfigDialog_MousePressEvent_Callback cb) { sonnet__configdialog_mousepressevent_callback = cb; }
    inline void setSonnet__ConfigDialog_MouseReleaseEvent_Callback(Sonnet__ConfigDialog_MouseReleaseEvent_Callback cb) { sonnet__configdialog_mousereleaseevent_callback = cb; }
    inline void setSonnet__ConfigDialog_MouseDoubleClickEvent_Callback(Sonnet__ConfigDialog_MouseDoubleClickEvent_Callback cb) { sonnet__configdialog_mousedoubleclickevent_callback = cb; }
    inline void setSonnet__ConfigDialog_MouseMoveEvent_Callback(Sonnet__ConfigDialog_MouseMoveEvent_Callback cb) { sonnet__configdialog_mousemoveevent_callback = cb; }
    inline void setSonnet__ConfigDialog_WheelEvent_Callback(Sonnet__ConfigDialog_WheelEvent_Callback cb) { sonnet__configdialog_wheelevent_callback = cb; }
    inline void setSonnet__ConfigDialog_KeyReleaseEvent_Callback(Sonnet__ConfigDialog_KeyReleaseEvent_Callback cb) { sonnet__configdialog_keyreleaseevent_callback = cb; }
    inline void setSonnet__ConfigDialog_FocusInEvent_Callback(Sonnet__ConfigDialog_FocusInEvent_Callback cb) { sonnet__configdialog_focusinevent_callback = cb; }
    inline void setSonnet__ConfigDialog_FocusOutEvent_Callback(Sonnet__ConfigDialog_FocusOutEvent_Callback cb) { sonnet__configdialog_focusoutevent_callback = cb; }
    inline void setSonnet__ConfigDialog_EnterEvent_Callback(Sonnet__ConfigDialog_EnterEvent_Callback cb) { sonnet__configdialog_enterevent_callback = cb; }
    inline void setSonnet__ConfigDialog_LeaveEvent_Callback(Sonnet__ConfigDialog_LeaveEvent_Callback cb) { sonnet__configdialog_leaveevent_callback = cb; }
    inline void setSonnet__ConfigDialog_PaintEvent_Callback(Sonnet__ConfigDialog_PaintEvent_Callback cb) { sonnet__configdialog_paintevent_callback = cb; }
    inline void setSonnet__ConfigDialog_MoveEvent_Callback(Sonnet__ConfigDialog_MoveEvent_Callback cb) { sonnet__configdialog_moveevent_callback = cb; }
    inline void setSonnet__ConfigDialog_TabletEvent_Callback(Sonnet__ConfigDialog_TabletEvent_Callback cb) { sonnet__configdialog_tabletevent_callback = cb; }
    inline void setSonnet__ConfigDialog_ActionEvent_Callback(Sonnet__ConfigDialog_ActionEvent_Callback cb) { sonnet__configdialog_actionevent_callback = cb; }
    inline void setSonnet__ConfigDialog_DragEnterEvent_Callback(Sonnet__ConfigDialog_DragEnterEvent_Callback cb) { sonnet__configdialog_dragenterevent_callback = cb; }
    inline void setSonnet__ConfigDialog_DragMoveEvent_Callback(Sonnet__ConfigDialog_DragMoveEvent_Callback cb) { sonnet__configdialog_dragmoveevent_callback = cb; }
    inline void setSonnet__ConfigDialog_DragLeaveEvent_Callback(Sonnet__ConfigDialog_DragLeaveEvent_Callback cb) { sonnet__configdialog_dragleaveevent_callback = cb; }
    inline void setSonnet__ConfigDialog_DropEvent_Callback(Sonnet__ConfigDialog_DropEvent_Callback cb) { sonnet__configdialog_dropevent_callback = cb; }
    inline void setSonnet__ConfigDialog_HideEvent_Callback(Sonnet__ConfigDialog_HideEvent_Callback cb) { sonnet__configdialog_hideevent_callback = cb; }
    inline void setSonnet__ConfigDialog_NativeEvent_Callback(Sonnet__ConfigDialog_NativeEvent_Callback cb) { sonnet__configdialog_nativeevent_callback = cb; }
    inline void setSonnet__ConfigDialog_ChangeEvent_Callback(Sonnet__ConfigDialog_ChangeEvent_Callback cb) { sonnet__configdialog_changeevent_callback = cb; }
    inline void setSonnet__ConfigDialog_Metric_Callback(Sonnet__ConfigDialog_Metric_Callback cb) { sonnet__configdialog_metric_callback = cb; }
    inline void setSonnet__ConfigDialog_InitPainter_Callback(Sonnet__ConfigDialog_InitPainter_Callback cb) { sonnet__configdialog_initpainter_callback = cb; }
    inline void setSonnet__ConfigDialog_Redirected_Callback(Sonnet__ConfigDialog_Redirected_Callback cb) { sonnet__configdialog_redirected_callback = cb; }
    inline void setSonnet__ConfigDialog_SharedPainter_Callback(Sonnet__ConfigDialog_SharedPainter_Callback cb) { sonnet__configdialog_sharedpainter_callback = cb; }
    inline void setSonnet__ConfigDialog_InputMethodEvent_Callback(Sonnet__ConfigDialog_InputMethodEvent_Callback cb) { sonnet__configdialog_inputmethodevent_callback = cb; }
    inline void setSonnet__ConfigDialog_InputMethodQuery_Callback(Sonnet__ConfigDialog_InputMethodQuery_Callback cb) { sonnet__configdialog_inputmethodquery_callback = cb; }
    inline void setSonnet__ConfigDialog_FocusNextPrevChild_Callback(Sonnet__ConfigDialog_FocusNextPrevChild_Callback cb) { sonnet__configdialog_focusnextprevchild_callback = cb; }
    inline void setSonnet__ConfigDialog_TimerEvent_Callback(Sonnet__ConfigDialog_TimerEvent_Callback cb) { sonnet__configdialog_timerevent_callback = cb; }
    inline void setSonnet__ConfigDialog_ChildEvent_Callback(Sonnet__ConfigDialog_ChildEvent_Callback cb) { sonnet__configdialog_childevent_callback = cb; }
    inline void setSonnet__ConfigDialog_CustomEvent_Callback(Sonnet__ConfigDialog_CustomEvent_Callback cb) { sonnet__configdialog_customevent_callback = cb; }
    inline void setSonnet__ConfigDialog_ConnectNotify_Callback(Sonnet__ConfigDialog_ConnectNotify_Callback cb) { sonnet__configdialog_connectnotify_callback = cb; }
    inline void setSonnet__ConfigDialog_DisconnectNotify_Callback(Sonnet__ConfigDialog_DisconnectNotify_Callback cb) { sonnet__configdialog_disconnectnotify_callback = cb; }
    inline void setSonnet__ConfigDialog_AdjustPosition_Callback(Sonnet__ConfigDialog_AdjustPosition_Callback cb) { sonnet__configdialog_adjustposition_callback = cb; }
    inline void setSonnet__ConfigDialog_UpdateMicroFocus_Callback(Sonnet__ConfigDialog_UpdateMicroFocus_Callback cb) { sonnet__configdialog_updatemicrofocus_callback = cb; }
    inline void setSonnet__ConfigDialog_Create_Callback(Sonnet__ConfigDialog_Create_Callback cb) { sonnet__configdialog_create_callback = cb; }
    inline void setSonnet__ConfigDialog_Destroy_Callback(Sonnet__ConfigDialog_Destroy_Callback cb) { sonnet__configdialog_destroy_callback = cb; }
    inline void setSonnet__ConfigDialog_FocusNextChild_Callback(Sonnet__ConfigDialog_FocusNextChild_Callback cb) { sonnet__configdialog_focusnextchild_callback = cb; }
    inline void setSonnet__ConfigDialog_FocusPreviousChild_Callback(Sonnet__ConfigDialog_FocusPreviousChild_Callback cb) { sonnet__configdialog_focuspreviouschild_callback = cb; }
    inline void setSonnet__ConfigDialog_Sender_Callback(Sonnet__ConfigDialog_Sender_Callback cb) { sonnet__configdialog_sender_callback = cb; }
    inline void setSonnet__ConfigDialog_SenderSignalIndex_Callback(Sonnet__ConfigDialog_SenderSignalIndex_Callback cb) { sonnet__configdialog_sendersignalindex_callback = cb; }
    inline void setSonnet__ConfigDialog_Receivers_Callback(Sonnet__ConfigDialog_Receivers_Callback cb) { sonnet__configdialog_receivers_callback = cb; }
    inline void setSonnet__ConfigDialog_IsSignalConnected_Callback(Sonnet__ConfigDialog_IsSignalConnected_Callback cb) { sonnet__configdialog_issignalconnected_callback = cb; }
    inline void setSonnet__ConfigDialog_GetDecodedMetricF_Callback(Sonnet__ConfigDialog_GetDecodedMetricF_Callback cb) { sonnet__configdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setSonnet__ConfigDialog_Metacall_IsBase(bool value) const { sonnet__configdialog_metacall_isbase = value; }
    inline void setSonnet__ConfigDialog_SlotOk_IsBase(bool value) const { sonnet__configdialog_slotok_isbase = value; }
    inline void setSonnet__ConfigDialog_SlotApply_IsBase(bool value) const { sonnet__configdialog_slotapply_isbase = value; }
    inline void setSonnet__ConfigDialog_SetVisible_IsBase(bool value) const { sonnet__configdialog_setvisible_isbase = value; }
    inline void setSonnet__ConfigDialog_SizeHint_IsBase(bool value) const { sonnet__configdialog_sizehint_isbase = value; }
    inline void setSonnet__ConfigDialog_MinimumSizeHint_IsBase(bool value) const { sonnet__configdialog_minimumsizehint_isbase = value; }
    inline void setSonnet__ConfigDialog_Open_IsBase(bool value) const { sonnet__configdialog_open_isbase = value; }
    inline void setSonnet__ConfigDialog_Exec_IsBase(bool value) const { sonnet__configdialog_exec_isbase = value; }
    inline void setSonnet__ConfigDialog_Done_IsBase(bool value) const { sonnet__configdialog_done_isbase = value; }
    inline void setSonnet__ConfigDialog_Accept_IsBase(bool value) const { sonnet__configdialog_accept_isbase = value; }
    inline void setSonnet__ConfigDialog_Reject_IsBase(bool value) const { sonnet__configdialog_reject_isbase = value; }
    inline void setSonnet__ConfigDialog_KeyPressEvent_IsBase(bool value) const { sonnet__configdialog_keypressevent_isbase = value; }
    inline void setSonnet__ConfigDialog_CloseEvent_IsBase(bool value) const { sonnet__configdialog_closeevent_isbase = value; }
    inline void setSonnet__ConfigDialog_ShowEvent_IsBase(bool value) const { sonnet__configdialog_showevent_isbase = value; }
    inline void setSonnet__ConfigDialog_ResizeEvent_IsBase(bool value) const { sonnet__configdialog_resizeevent_isbase = value; }
    inline void setSonnet__ConfigDialog_ContextMenuEvent_IsBase(bool value) const { sonnet__configdialog_contextmenuevent_isbase = value; }
    inline void setSonnet__ConfigDialog_EventFilter_IsBase(bool value) const { sonnet__configdialog_eventfilter_isbase = value; }
    inline void setSonnet__ConfigDialog_DevType_IsBase(bool value) const { sonnet__configdialog_devtype_isbase = value; }
    inline void setSonnet__ConfigDialog_HeightForWidth_IsBase(bool value) const { sonnet__configdialog_heightforwidth_isbase = value; }
    inline void setSonnet__ConfigDialog_HasHeightForWidth_IsBase(bool value) const { sonnet__configdialog_hasheightforwidth_isbase = value; }
    inline void setSonnet__ConfigDialog_PaintEngine_IsBase(bool value) const { sonnet__configdialog_paintengine_isbase = value; }
    inline void setSonnet__ConfigDialog_Event_IsBase(bool value) const { sonnet__configdialog_event_isbase = value; }
    inline void setSonnet__ConfigDialog_MousePressEvent_IsBase(bool value) const { sonnet__configdialog_mousepressevent_isbase = value; }
    inline void setSonnet__ConfigDialog_MouseReleaseEvent_IsBase(bool value) const { sonnet__configdialog_mousereleaseevent_isbase = value; }
    inline void setSonnet__ConfigDialog_MouseDoubleClickEvent_IsBase(bool value) const { sonnet__configdialog_mousedoubleclickevent_isbase = value; }
    inline void setSonnet__ConfigDialog_MouseMoveEvent_IsBase(bool value) const { sonnet__configdialog_mousemoveevent_isbase = value; }
    inline void setSonnet__ConfigDialog_WheelEvent_IsBase(bool value) const { sonnet__configdialog_wheelevent_isbase = value; }
    inline void setSonnet__ConfigDialog_KeyReleaseEvent_IsBase(bool value) const { sonnet__configdialog_keyreleaseevent_isbase = value; }
    inline void setSonnet__ConfigDialog_FocusInEvent_IsBase(bool value) const { sonnet__configdialog_focusinevent_isbase = value; }
    inline void setSonnet__ConfigDialog_FocusOutEvent_IsBase(bool value) const { sonnet__configdialog_focusoutevent_isbase = value; }
    inline void setSonnet__ConfigDialog_EnterEvent_IsBase(bool value) const { sonnet__configdialog_enterevent_isbase = value; }
    inline void setSonnet__ConfigDialog_LeaveEvent_IsBase(bool value) const { sonnet__configdialog_leaveevent_isbase = value; }
    inline void setSonnet__ConfigDialog_PaintEvent_IsBase(bool value) const { sonnet__configdialog_paintevent_isbase = value; }
    inline void setSonnet__ConfigDialog_MoveEvent_IsBase(bool value) const { sonnet__configdialog_moveevent_isbase = value; }
    inline void setSonnet__ConfigDialog_TabletEvent_IsBase(bool value) const { sonnet__configdialog_tabletevent_isbase = value; }
    inline void setSonnet__ConfigDialog_ActionEvent_IsBase(bool value) const { sonnet__configdialog_actionevent_isbase = value; }
    inline void setSonnet__ConfigDialog_DragEnterEvent_IsBase(bool value) const { sonnet__configdialog_dragenterevent_isbase = value; }
    inline void setSonnet__ConfigDialog_DragMoveEvent_IsBase(bool value) const { sonnet__configdialog_dragmoveevent_isbase = value; }
    inline void setSonnet__ConfigDialog_DragLeaveEvent_IsBase(bool value) const { sonnet__configdialog_dragleaveevent_isbase = value; }
    inline void setSonnet__ConfigDialog_DropEvent_IsBase(bool value) const { sonnet__configdialog_dropevent_isbase = value; }
    inline void setSonnet__ConfigDialog_HideEvent_IsBase(bool value) const { sonnet__configdialog_hideevent_isbase = value; }
    inline void setSonnet__ConfigDialog_NativeEvent_IsBase(bool value) const { sonnet__configdialog_nativeevent_isbase = value; }
    inline void setSonnet__ConfigDialog_ChangeEvent_IsBase(bool value) const { sonnet__configdialog_changeevent_isbase = value; }
    inline void setSonnet__ConfigDialog_Metric_IsBase(bool value) const { sonnet__configdialog_metric_isbase = value; }
    inline void setSonnet__ConfigDialog_InitPainter_IsBase(bool value) const { sonnet__configdialog_initpainter_isbase = value; }
    inline void setSonnet__ConfigDialog_Redirected_IsBase(bool value) const { sonnet__configdialog_redirected_isbase = value; }
    inline void setSonnet__ConfigDialog_SharedPainter_IsBase(bool value) const { sonnet__configdialog_sharedpainter_isbase = value; }
    inline void setSonnet__ConfigDialog_InputMethodEvent_IsBase(bool value) const { sonnet__configdialog_inputmethodevent_isbase = value; }
    inline void setSonnet__ConfigDialog_InputMethodQuery_IsBase(bool value) const { sonnet__configdialog_inputmethodquery_isbase = value; }
    inline void setSonnet__ConfigDialog_FocusNextPrevChild_IsBase(bool value) const { sonnet__configdialog_focusnextprevchild_isbase = value; }
    inline void setSonnet__ConfigDialog_TimerEvent_IsBase(bool value) const { sonnet__configdialog_timerevent_isbase = value; }
    inline void setSonnet__ConfigDialog_ChildEvent_IsBase(bool value) const { sonnet__configdialog_childevent_isbase = value; }
    inline void setSonnet__ConfigDialog_CustomEvent_IsBase(bool value) const { sonnet__configdialog_customevent_isbase = value; }
    inline void setSonnet__ConfigDialog_ConnectNotify_IsBase(bool value) const { sonnet__configdialog_connectnotify_isbase = value; }
    inline void setSonnet__ConfigDialog_DisconnectNotify_IsBase(bool value) const { sonnet__configdialog_disconnectnotify_isbase = value; }
    inline void setSonnet__ConfigDialog_AdjustPosition_IsBase(bool value) const { sonnet__configdialog_adjustposition_isbase = value; }
    inline void setSonnet__ConfigDialog_UpdateMicroFocus_IsBase(bool value) const { sonnet__configdialog_updatemicrofocus_isbase = value; }
    inline void setSonnet__ConfigDialog_Create_IsBase(bool value) const { sonnet__configdialog_create_isbase = value; }
    inline void setSonnet__ConfigDialog_Destroy_IsBase(bool value) const { sonnet__configdialog_destroy_isbase = value; }
    inline void setSonnet__ConfigDialog_FocusNextChild_IsBase(bool value) const { sonnet__configdialog_focusnextchild_isbase = value; }
    inline void setSonnet__ConfigDialog_FocusPreviousChild_IsBase(bool value) const { sonnet__configdialog_focuspreviouschild_isbase = value; }
    inline void setSonnet__ConfigDialog_Sender_IsBase(bool value) const { sonnet__configdialog_sender_isbase = value; }
    inline void setSonnet__ConfigDialog_SenderSignalIndex_IsBase(bool value) const { sonnet__configdialog_sendersignalindex_isbase = value; }
    inline void setSonnet__ConfigDialog_Receivers_IsBase(bool value) const { sonnet__configdialog_receivers_isbase = value; }
    inline void setSonnet__ConfigDialog_IsSignalConnected_IsBase(bool value) const { sonnet__configdialog_issignalconnected_isbase = value; }
    inline void setSonnet__ConfigDialog_GetDecodedMetricF_IsBase(bool value) const { sonnet__configdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (sonnet__configdialog_metacall_isbase) {
            sonnet__configdialog_metacall_isbase = false;
            return Sonnet__ConfigDialog::qt_metacall(param1, param2, param3);
        } else if (sonnet__configdialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = sonnet__configdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__ConfigDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotOk() override {
        if (sonnet__configdialog_slotok_isbase) {
            sonnet__configdialog_slotok_isbase = false;
            Sonnet__ConfigDialog::slotOk();
        } else if (sonnet__configdialog_slotok_callback != nullptr) {
            sonnet__configdialog_slotok_callback();
        } else {
            Sonnet__ConfigDialog::slotOk();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotApply() override {
        if (sonnet__configdialog_slotapply_isbase) {
            sonnet__configdialog_slotapply_isbase = false;
            Sonnet__ConfigDialog::slotApply();
        } else if (sonnet__configdialog_slotapply_callback != nullptr) {
            sonnet__configdialog_slotapply_callback();
        } else {
            Sonnet__ConfigDialog::slotApply();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (sonnet__configdialog_setvisible_isbase) {
            sonnet__configdialog_setvisible_isbase = false;
            Sonnet__ConfigDialog::setVisible(visible);
        } else if (sonnet__configdialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            sonnet__configdialog_setvisible_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (sonnet__configdialog_sizehint_isbase) {
            sonnet__configdialog_sizehint_isbase = false;
            return Sonnet__ConfigDialog::sizeHint();
        } else if (sonnet__configdialog_sizehint_callback != nullptr) {
            QSize* callback_ret = sonnet__configdialog_sizehint_callback();
            return *callback_ret;
        } else {
            return Sonnet__ConfigDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (sonnet__configdialog_minimumsizehint_isbase) {
            sonnet__configdialog_minimumsizehint_isbase = false;
            return Sonnet__ConfigDialog::minimumSizeHint();
        } else if (sonnet__configdialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = sonnet__configdialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return Sonnet__ConfigDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (sonnet__configdialog_open_isbase) {
            sonnet__configdialog_open_isbase = false;
            Sonnet__ConfigDialog::open();
        } else if (sonnet__configdialog_open_callback != nullptr) {
            sonnet__configdialog_open_callback();
        } else {
            Sonnet__ConfigDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (sonnet__configdialog_exec_isbase) {
            sonnet__configdialog_exec_isbase = false;
            return Sonnet__ConfigDialog::exec();
        } else if (sonnet__configdialog_exec_callback != nullptr) {
            int callback_ret = sonnet__configdialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__ConfigDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (sonnet__configdialog_done_isbase) {
            sonnet__configdialog_done_isbase = false;
            Sonnet__ConfigDialog::done(param1);
        } else if (sonnet__configdialog_done_callback != nullptr) {
            int cbval1 = param1;

            sonnet__configdialog_done_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (sonnet__configdialog_accept_isbase) {
            sonnet__configdialog_accept_isbase = false;
            Sonnet__ConfigDialog::accept();
        } else if (sonnet__configdialog_accept_callback != nullptr) {
            sonnet__configdialog_accept_callback();
        } else {
            Sonnet__ConfigDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (sonnet__configdialog_reject_isbase) {
            sonnet__configdialog_reject_isbase = false;
            Sonnet__ConfigDialog::reject();
        } else if (sonnet__configdialog_reject_callback != nullptr) {
            sonnet__configdialog_reject_callback();
        } else {
            Sonnet__ConfigDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (sonnet__configdialog_keypressevent_isbase) {
            sonnet__configdialog_keypressevent_isbase = false;
            Sonnet__ConfigDialog::keyPressEvent(param1);
        } else if (sonnet__configdialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            sonnet__configdialog_keypressevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (sonnet__configdialog_closeevent_isbase) {
            sonnet__configdialog_closeevent_isbase = false;
            Sonnet__ConfigDialog::closeEvent(param1);
        } else if (sonnet__configdialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            sonnet__configdialog_closeevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (sonnet__configdialog_showevent_isbase) {
            sonnet__configdialog_showevent_isbase = false;
            Sonnet__ConfigDialog::showEvent(param1);
        } else if (sonnet__configdialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            sonnet__configdialog_showevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (sonnet__configdialog_resizeevent_isbase) {
            sonnet__configdialog_resizeevent_isbase = false;
            Sonnet__ConfigDialog::resizeEvent(param1);
        } else if (sonnet__configdialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            sonnet__configdialog_resizeevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (sonnet__configdialog_contextmenuevent_isbase) {
            sonnet__configdialog_contextmenuevent_isbase = false;
            Sonnet__ConfigDialog::contextMenuEvent(param1);
        } else if (sonnet__configdialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            sonnet__configdialog_contextmenuevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (sonnet__configdialog_eventfilter_isbase) {
            sonnet__configdialog_eventfilter_isbase = false;
            return Sonnet__ConfigDialog::eventFilter(param1, param2);
        } else if (sonnet__configdialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = sonnet__configdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return Sonnet__ConfigDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (sonnet__configdialog_devtype_isbase) {
            sonnet__configdialog_devtype_isbase = false;
            return Sonnet__ConfigDialog::devType();
        } else if (sonnet__configdialog_devtype_callback != nullptr) {
            int callback_ret = sonnet__configdialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__ConfigDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (sonnet__configdialog_heightforwidth_isbase) {
            sonnet__configdialog_heightforwidth_isbase = false;
            return Sonnet__ConfigDialog::heightForWidth(param1);
        } else if (sonnet__configdialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = sonnet__configdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__ConfigDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (sonnet__configdialog_hasheightforwidth_isbase) {
            sonnet__configdialog_hasheightforwidth_isbase = false;
            return Sonnet__ConfigDialog::hasHeightForWidth();
        } else if (sonnet__configdialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = sonnet__configdialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return Sonnet__ConfigDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (sonnet__configdialog_paintengine_isbase) {
            sonnet__configdialog_paintengine_isbase = false;
            return Sonnet__ConfigDialog::paintEngine();
        } else if (sonnet__configdialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = sonnet__configdialog_paintengine_callback();
            return callback_ret;
        } else {
            return Sonnet__ConfigDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (sonnet__configdialog_event_isbase) {
            sonnet__configdialog_event_isbase = false;
            return Sonnet__ConfigDialog::event(event);
        } else if (sonnet__configdialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = sonnet__configdialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__ConfigDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (sonnet__configdialog_mousepressevent_isbase) {
            sonnet__configdialog_mousepressevent_isbase = false;
            Sonnet__ConfigDialog::mousePressEvent(event);
        } else if (sonnet__configdialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            sonnet__configdialog_mousepressevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (sonnet__configdialog_mousereleaseevent_isbase) {
            sonnet__configdialog_mousereleaseevent_isbase = false;
            Sonnet__ConfigDialog::mouseReleaseEvent(event);
        } else if (sonnet__configdialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            sonnet__configdialog_mousereleaseevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (sonnet__configdialog_mousedoubleclickevent_isbase) {
            sonnet__configdialog_mousedoubleclickevent_isbase = false;
            Sonnet__ConfigDialog::mouseDoubleClickEvent(event);
        } else if (sonnet__configdialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            sonnet__configdialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (sonnet__configdialog_mousemoveevent_isbase) {
            sonnet__configdialog_mousemoveevent_isbase = false;
            Sonnet__ConfigDialog::mouseMoveEvent(event);
        } else if (sonnet__configdialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            sonnet__configdialog_mousemoveevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (sonnet__configdialog_wheelevent_isbase) {
            sonnet__configdialog_wheelevent_isbase = false;
            Sonnet__ConfigDialog::wheelEvent(event);
        } else if (sonnet__configdialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            sonnet__configdialog_wheelevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (sonnet__configdialog_keyreleaseevent_isbase) {
            sonnet__configdialog_keyreleaseevent_isbase = false;
            Sonnet__ConfigDialog::keyReleaseEvent(event);
        } else if (sonnet__configdialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            sonnet__configdialog_keyreleaseevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (sonnet__configdialog_focusinevent_isbase) {
            sonnet__configdialog_focusinevent_isbase = false;
            Sonnet__ConfigDialog::focusInEvent(event);
        } else if (sonnet__configdialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            sonnet__configdialog_focusinevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (sonnet__configdialog_focusoutevent_isbase) {
            sonnet__configdialog_focusoutevent_isbase = false;
            Sonnet__ConfigDialog::focusOutEvent(event);
        } else if (sonnet__configdialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            sonnet__configdialog_focusoutevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (sonnet__configdialog_enterevent_isbase) {
            sonnet__configdialog_enterevent_isbase = false;
            Sonnet__ConfigDialog::enterEvent(event);
        } else if (sonnet__configdialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            sonnet__configdialog_enterevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (sonnet__configdialog_leaveevent_isbase) {
            sonnet__configdialog_leaveevent_isbase = false;
            Sonnet__ConfigDialog::leaveEvent(event);
        } else if (sonnet__configdialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            sonnet__configdialog_leaveevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (sonnet__configdialog_paintevent_isbase) {
            sonnet__configdialog_paintevent_isbase = false;
            Sonnet__ConfigDialog::paintEvent(event);
        } else if (sonnet__configdialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            sonnet__configdialog_paintevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (sonnet__configdialog_moveevent_isbase) {
            sonnet__configdialog_moveevent_isbase = false;
            Sonnet__ConfigDialog::moveEvent(event);
        } else if (sonnet__configdialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            sonnet__configdialog_moveevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (sonnet__configdialog_tabletevent_isbase) {
            sonnet__configdialog_tabletevent_isbase = false;
            Sonnet__ConfigDialog::tabletEvent(event);
        } else if (sonnet__configdialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            sonnet__configdialog_tabletevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (sonnet__configdialog_actionevent_isbase) {
            sonnet__configdialog_actionevent_isbase = false;
            Sonnet__ConfigDialog::actionEvent(event);
        } else if (sonnet__configdialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            sonnet__configdialog_actionevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (sonnet__configdialog_dragenterevent_isbase) {
            sonnet__configdialog_dragenterevent_isbase = false;
            Sonnet__ConfigDialog::dragEnterEvent(event);
        } else if (sonnet__configdialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            sonnet__configdialog_dragenterevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (sonnet__configdialog_dragmoveevent_isbase) {
            sonnet__configdialog_dragmoveevent_isbase = false;
            Sonnet__ConfigDialog::dragMoveEvent(event);
        } else if (sonnet__configdialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            sonnet__configdialog_dragmoveevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (sonnet__configdialog_dragleaveevent_isbase) {
            sonnet__configdialog_dragleaveevent_isbase = false;
            Sonnet__ConfigDialog::dragLeaveEvent(event);
        } else if (sonnet__configdialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            sonnet__configdialog_dragleaveevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (sonnet__configdialog_dropevent_isbase) {
            sonnet__configdialog_dropevent_isbase = false;
            Sonnet__ConfigDialog::dropEvent(event);
        } else if (sonnet__configdialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            sonnet__configdialog_dropevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (sonnet__configdialog_hideevent_isbase) {
            sonnet__configdialog_hideevent_isbase = false;
            Sonnet__ConfigDialog::hideEvent(event);
        } else if (sonnet__configdialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            sonnet__configdialog_hideevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (sonnet__configdialog_nativeevent_isbase) {
            sonnet__configdialog_nativeevent_isbase = false;
            return Sonnet__ConfigDialog::nativeEvent(eventType, message, result);
        } else if (sonnet__configdialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = sonnet__configdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return Sonnet__ConfigDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (sonnet__configdialog_changeevent_isbase) {
            sonnet__configdialog_changeevent_isbase = false;
            Sonnet__ConfigDialog::changeEvent(param1);
        } else if (sonnet__configdialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            sonnet__configdialog_changeevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (sonnet__configdialog_metric_isbase) {
            sonnet__configdialog_metric_isbase = false;
            return Sonnet__ConfigDialog::metric(param1);
        } else if (sonnet__configdialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = sonnet__configdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__ConfigDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (sonnet__configdialog_initpainter_isbase) {
            sonnet__configdialog_initpainter_isbase = false;
            Sonnet__ConfigDialog::initPainter(painter);
        } else if (sonnet__configdialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            sonnet__configdialog_initpainter_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (sonnet__configdialog_redirected_isbase) {
            sonnet__configdialog_redirected_isbase = false;
            return Sonnet__ConfigDialog::redirected(offset);
        } else if (sonnet__configdialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = sonnet__configdialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__ConfigDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (sonnet__configdialog_sharedpainter_isbase) {
            sonnet__configdialog_sharedpainter_isbase = false;
            return Sonnet__ConfigDialog::sharedPainter();
        } else if (sonnet__configdialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = sonnet__configdialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return Sonnet__ConfigDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (sonnet__configdialog_inputmethodevent_isbase) {
            sonnet__configdialog_inputmethodevent_isbase = false;
            Sonnet__ConfigDialog::inputMethodEvent(param1);
        } else if (sonnet__configdialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            sonnet__configdialog_inputmethodevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (sonnet__configdialog_inputmethodquery_isbase) {
            sonnet__configdialog_inputmethodquery_isbase = false;
            return Sonnet__ConfigDialog::inputMethodQuery(param1);
        } else if (sonnet__configdialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = sonnet__configdialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return Sonnet__ConfigDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (sonnet__configdialog_focusnextprevchild_isbase) {
            sonnet__configdialog_focusnextprevchild_isbase = false;
            return Sonnet__ConfigDialog::focusNextPrevChild(next);
        } else if (sonnet__configdialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = sonnet__configdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__ConfigDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (sonnet__configdialog_timerevent_isbase) {
            sonnet__configdialog_timerevent_isbase = false;
            Sonnet__ConfigDialog::timerEvent(event);
        } else if (sonnet__configdialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            sonnet__configdialog_timerevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (sonnet__configdialog_childevent_isbase) {
            sonnet__configdialog_childevent_isbase = false;
            Sonnet__ConfigDialog::childEvent(event);
        } else if (sonnet__configdialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            sonnet__configdialog_childevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (sonnet__configdialog_customevent_isbase) {
            sonnet__configdialog_customevent_isbase = false;
            Sonnet__ConfigDialog::customEvent(event);
        } else if (sonnet__configdialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            sonnet__configdialog_customevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (sonnet__configdialog_connectnotify_isbase) {
            sonnet__configdialog_connectnotify_isbase = false;
            Sonnet__ConfigDialog::connectNotify(signal);
        } else if (sonnet__configdialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            sonnet__configdialog_connectnotify_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (sonnet__configdialog_disconnectnotify_isbase) {
            sonnet__configdialog_disconnectnotify_isbase = false;
            Sonnet__ConfigDialog::disconnectNotify(signal);
        } else if (sonnet__configdialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            sonnet__configdialog_disconnectnotify_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (sonnet__configdialog_adjustposition_isbase) {
            sonnet__configdialog_adjustposition_isbase = false;
            Sonnet__ConfigDialog::adjustPosition(param1);
        } else if (sonnet__configdialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            sonnet__configdialog_adjustposition_callback(this, cbval1);
        } else {
            Sonnet__ConfigDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (sonnet__configdialog_updatemicrofocus_isbase) {
            sonnet__configdialog_updatemicrofocus_isbase = false;
            Sonnet__ConfigDialog::updateMicroFocus();
        } else if (sonnet__configdialog_updatemicrofocus_callback != nullptr) {
            sonnet__configdialog_updatemicrofocus_callback();
        } else {
            Sonnet__ConfigDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (sonnet__configdialog_create_isbase) {
            sonnet__configdialog_create_isbase = false;
            Sonnet__ConfigDialog::create();
        } else if (sonnet__configdialog_create_callback != nullptr) {
            sonnet__configdialog_create_callback();
        } else {
            Sonnet__ConfigDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (sonnet__configdialog_destroy_isbase) {
            sonnet__configdialog_destroy_isbase = false;
            Sonnet__ConfigDialog::destroy();
        } else if (sonnet__configdialog_destroy_callback != nullptr) {
            sonnet__configdialog_destroy_callback();
        } else {
            Sonnet__ConfigDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (sonnet__configdialog_focusnextchild_isbase) {
            sonnet__configdialog_focusnextchild_isbase = false;
            return Sonnet__ConfigDialog::focusNextChild();
        } else if (sonnet__configdialog_focusnextchild_callback != nullptr) {
            bool callback_ret = sonnet__configdialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return Sonnet__ConfigDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (sonnet__configdialog_focuspreviouschild_isbase) {
            sonnet__configdialog_focuspreviouschild_isbase = false;
            return Sonnet__ConfigDialog::focusPreviousChild();
        } else if (sonnet__configdialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = sonnet__configdialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return Sonnet__ConfigDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (sonnet__configdialog_sender_isbase) {
            sonnet__configdialog_sender_isbase = false;
            return Sonnet__ConfigDialog::sender();
        } else if (sonnet__configdialog_sender_callback != nullptr) {
            QObject* callback_ret = sonnet__configdialog_sender_callback();
            return callback_ret;
        } else {
            return Sonnet__ConfigDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (sonnet__configdialog_sendersignalindex_isbase) {
            sonnet__configdialog_sendersignalindex_isbase = false;
            return Sonnet__ConfigDialog::senderSignalIndex();
        } else if (sonnet__configdialog_sendersignalindex_callback != nullptr) {
            int callback_ret = sonnet__configdialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__ConfigDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (sonnet__configdialog_receivers_isbase) {
            sonnet__configdialog_receivers_isbase = false;
            return Sonnet__ConfigDialog::receivers(signal);
        } else if (sonnet__configdialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = sonnet__configdialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__ConfigDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (sonnet__configdialog_issignalconnected_isbase) {
            sonnet__configdialog_issignalconnected_isbase = false;
            return Sonnet__ConfigDialog::isSignalConnected(signal);
        } else if (sonnet__configdialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = sonnet__configdialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__ConfigDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (sonnet__configdialog_getdecodedmetricf_isbase) {
            sonnet__configdialog_getdecodedmetricf_isbase = false;
            return Sonnet__ConfigDialog::getDecodedMetricF(metricA, metricB);
        } else if (sonnet__configdialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = sonnet__configdialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return Sonnet__ConfigDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void Sonnet__ConfigDialog_SlotOk(Sonnet::ConfigDialog* self);
    friend void Sonnet__ConfigDialog_QBaseSlotOk(Sonnet::ConfigDialog* self);
    friend void Sonnet__ConfigDialog_SlotApply(Sonnet::ConfigDialog* self);
    friend void Sonnet__ConfigDialog_QBaseSlotApply(Sonnet::ConfigDialog* self);
    friend void Sonnet__ConfigDialog_KeyPressEvent(Sonnet::ConfigDialog* self, QKeyEvent* param1);
    friend void Sonnet__ConfigDialog_QBaseKeyPressEvent(Sonnet::ConfigDialog* self, QKeyEvent* param1);
    friend void Sonnet__ConfigDialog_CloseEvent(Sonnet::ConfigDialog* self, QCloseEvent* param1);
    friend void Sonnet__ConfigDialog_QBaseCloseEvent(Sonnet::ConfigDialog* self, QCloseEvent* param1);
    friend void Sonnet__ConfigDialog_ShowEvent(Sonnet::ConfigDialog* self, QShowEvent* param1);
    friend void Sonnet__ConfigDialog_QBaseShowEvent(Sonnet::ConfigDialog* self, QShowEvent* param1);
    friend void Sonnet__ConfigDialog_ResizeEvent(Sonnet::ConfigDialog* self, QResizeEvent* param1);
    friend void Sonnet__ConfigDialog_QBaseResizeEvent(Sonnet::ConfigDialog* self, QResizeEvent* param1);
    friend void Sonnet__ConfigDialog_ContextMenuEvent(Sonnet::ConfigDialog* self, QContextMenuEvent* param1);
    friend void Sonnet__ConfigDialog_QBaseContextMenuEvent(Sonnet::ConfigDialog* self, QContextMenuEvent* param1);
    friend bool Sonnet__ConfigDialog_EventFilter(Sonnet::ConfigDialog* self, QObject* param1, QEvent* param2);
    friend bool Sonnet__ConfigDialog_QBaseEventFilter(Sonnet::ConfigDialog* self, QObject* param1, QEvent* param2);
    friend bool Sonnet__ConfigDialog_Event(Sonnet::ConfigDialog* self, QEvent* event);
    friend bool Sonnet__ConfigDialog_QBaseEvent(Sonnet::ConfigDialog* self, QEvent* event);
    friend void Sonnet__ConfigDialog_MousePressEvent(Sonnet::ConfigDialog* self, QMouseEvent* event);
    friend void Sonnet__ConfigDialog_QBaseMousePressEvent(Sonnet::ConfigDialog* self, QMouseEvent* event);
    friend void Sonnet__ConfigDialog_MouseReleaseEvent(Sonnet::ConfigDialog* self, QMouseEvent* event);
    friend void Sonnet__ConfigDialog_QBaseMouseReleaseEvent(Sonnet::ConfigDialog* self, QMouseEvent* event);
    friend void Sonnet__ConfigDialog_MouseDoubleClickEvent(Sonnet::ConfigDialog* self, QMouseEvent* event);
    friend void Sonnet__ConfigDialog_QBaseMouseDoubleClickEvent(Sonnet::ConfigDialog* self, QMouseEvent* event);
    friend void Sonnet__ConfigDialog_MouseMoveEvent(Sonnet::ConfigDialog* self, QMouseEvent* event);
    friend void Sonnet__ConfigDialog_QBaseMouseMoveEvent(Sonnet::ConfigDialog* self, QMouseEvent* event);
    friend void Sonnet__ConfigDialog_WheelEvent(Sonnet::ConfigDialog* self, QWheelEvent* event);
    friend void Sonnet__ConfigDialog_QBaseWheelEvent(Sonnet::ConfigDialog* self, QWheelEvent* event);
    friend void Sonnet__ConfigDialog_KeyReleaseEvent(Sonnet::ConfigDialog* self, QKeyEvent* event);
    friend void Sonnet__ConfigDialog_QBaseKeyReleaseEvent(Sonnet::ConfigDialog* self, QKeyEvent* event);
    friend void Sonnet__ConfigDialog_FocusInEvent(Sonnet::ConfigDialog* self, QFocusEvent* event);
    friend void Sonnet__ConfigDialog_QBaseFocusInEvent(Sonnet::ConfigDialog* self, QFocusEvent* event);
    friend void Sonnet__ConfigDialog_FocusOutEvent(Sonnet::ConfigDialog* self, QFocusEvent* event);
    friend void Sonnet__ConfigDialog_QBaseFocusOutEvent(Sonnet::ConfigDialog* self, QFocusEvent* event);
    friend void Sonnet__ConfigDialog_EnterEvent(Sonnet::ConfigDialog* self, QEnterEvent* event);
    friend void Sonnet__ConfigDialog_QBaseEnterEvent(Sonnet::ConfigDialog* self, QEnterEvent* event);
    friend void Sonnet__ConfigDialog_LeaveEvent(Sonnet::ConfigDialog* self, QEvent* event);
    friend void Sonnet__ConfigDialog_QBaseLeaveEvent(Sonnet::ConfigDialog* self, QEvent* event);
    friend void Sonnet__ConfigDialog_PaintEvent(Sonnet::ConfigDialog* self, QPaintEvent* event);
    friend void Sonnet__ConfigDialog_QBasePaintEvent(Sonnet::ConfigDialog* self, QPaintEvent* event);
    friend void Sonnet__ConfigDialog_MoveEvent(Sonnet::ConfigDialog* self, QMoveEvent* event);
    friend void Sonnet__ConfigDialog_QBaseMoveEvent(Sonnet::ConfigDialog* self, QMoveEvent* event);
    friend void Sonnet__ConfigDialog_TabletEvent(Sonnet::ConfigDialog* self, QTabletEvent* event);
    friend void Sonnet__ConfigDialog_QBaseTabletEvent(Sonnet::ConfigDialog* self, QTabletEvent* event);
    friend void Sonnet__ConfigDialog_ActionEvent(Sonnet::ConfigDialog* self, QActionEvent* event);
    friend void Sonnet__ConfigDialog_QBaseActionEvent(Sonnet::ConfigDialog* self, QActionEvent* event);
    friend void Sonnet__ConfigDialog_DragEnterEvent(Sonnet::ConfigDialog* self, QDragEnterEvent* event);
    friend void Sonnet__ConfigDialog_QBaseDragEnterEvent(Sonnet::ConfigDialog* self, QDragEnterEvent* event);
    friend void Sonnet__ConfigDialog_DragMoveEvent(Sonnet::ConfigDialog* self, QDragMoveEvent* event);
    friend void Sonnet__ConfigDialog_QBaseDragMoveEvent(Sonnet::ConfigDialog* self, QDragMoveEvent* event);
    friend void Sonnet__ConfigDialog_DragLeaveEvent(Sonnet::ConfigDialog* self, QDragLeaveEvent* event);
    friend void Sonnet__ConfigDialog_QBaseDragLeaveEvent(Sonnet::ConfigDialog* self, QDragLeaveEvent* event);
    friend void Sonnet__ConfigDialog_DropEvent(Sonnet::ConfigDialog* self, QDropEvent* event);
    friend void Sonnet__ConfigDialog_QBaseDropEvent(Sonnet::ConfigDialog* self, QDropEvent* event);
    friend void Sonnet__ConfigDialog_HideEvent(Sonnet::ConfigDialog* self, QHideEvent* event);
    friend void Sonnet__ConfigDialog_QBaseHideEvent(Sonnet::ConfigDialog* self, QHideEvent* event);
    friend bool Sonnet__ConfigDialog_NativeEvent(Sonnet::ConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool Sonnet__ConfigDialog_QBaseNativeEvent(Sonnet::ConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void Sonnet__ConfigDialog_ChangeEvent(Sonnet::ConfigDialog* self, QEvent* param1);
    friend void Sonnet__ConfigDialog_QBaseChangeEvent(Sonnet::ConfigDialog* self, QEvent* param1);
    friend int Sonnet__ConfigDialog_Metric(const Sonnet::ConfigDialog* self, int param1);
    friend int Sonnet__ConfigDialog_QBaseMetric(const Sonnet::ConfigDialog* self, int param1);
    friend void Sonnet__ConfigDialog_InitPainter(const Sonnet::ConfigDialog* self, QPainter* painter);
    friend void Sonnet__ConfigDialog_QBaseInitPainter(const Sonnet::ConfigDialog* self, QPainter* painter);
    friend QPaintDevice* Sonnet__ConfigDialog_Redirected(const Sonnet::ConfigDialog* self, QPoint* offset);
    friend QPaintDevice* Sonnet__ConfigDialog_QBaseRedirected(const Sonnet::ConfigDialog* self, QPoint* offset);
    friend QPainter* Sonnet__ConfigDialog_SharedPainter(const Sonnet::ConfigDialog* self);
    friend QPainter* Sonnet__ConfigDialog_QBaseSharedPainter(const Sonnet::ConfigDialog* self);
    friend void Sonnet__ConfigDialog_InputMethodEvent(Sonnet::ConfigDialog* self, QInputMethodEvent* param1);
    friend void Sonnet__ConfigDialog_QBaseInputMethodEvent(Sonnet::ConfigDialog* self, QInputMethodEvent* param1);
    friend bool Sonnet__ConfigDialog_FocusNextPrevChild(Sonnet::ConfigDialog* self, bool next);
    friend bool Sonnet__ConfigDialog_QBaseFocusNextPrevChild(Sonnet::ConfigDialog* self, bool next);
    friend void Sonnet__ConfigDialog_TimerEvent(Sonnet::ConfigDialog* self, QTimerEvent* event);
    friend void Sonnet__ConfigDialog_QBaseTimerEvent(Sonnet::ConfigDialog* self, QTimerEvent* event);
    friend void Sonnet__ConfigDialog_ChildEvent(Sonnet::ConfigDialog* self, QChildEvent* event);
    friend void Sonnet__ConfigDialog_QBaseChildEvent(Sonnet::ConfigDialog* self, QChildEvent* event);
    friend void Sonnet__ConfigDialog_CustomEvent(Sonnet::ConfigDialog* self, QEvent* event);
    friend void Sonnet__ConfigDialog_QBaseCustomEvent(Sonnet::ConfigDialog* self, QEvent* event);
    friend void Sonnet__ConfigDialog_ConnectNotify(Sonnet::ConfigDialog* self, const QMetaMethod* signal);
    friend void Sonnet__ConfigDialog_QBaseConnectNotify(Sonnet::ConfigDialog* self, const QMetaMethod* signal);
    friend void Sonnet__ConfigDialog_DisconnectNotify(Sonnet::ConfigDialog* self, const QMetaMethod* signal);
    friend void Sonnet__ConfigDialog_QBaseDisconnectNotify(Sonnet::ConfigDialog* self, const QMetaMethod* signal);
    friend void Sonnet__ConfigDialog_AdjustPosition(Sonnet::ConfigDialog* self, QWidget* param1);
    friend void Sonnet__ConfigDialog_QBaseAdjustPosition(Sonnet::ConfigDialog* self, QWidget* param1);
    friend void Sonnet__ConfigDialog_UpdateMicroFocus(Sonnet::ConfigDialog* self);
    friend void Sonnet__ConfigDialog_QBaseUpdateMicroFocus(Sonnet::ConfigDialog* self);
    friend void Sonnet__ConfigDialog_Create(Sonnet::ConfigDialog* self);
    friend void Sonnet__ConfigDialog_QBaseCreate(Sonnet::ConfigDialog* self);
    friend void Sonnet__ConfigDialog_Destroy(Sonnet::ConfigDialog* self);
    friend void Sonnet__ConfigDialog_QBaseDestroy(Sonnet::ConfigDialog* self);
    friend bool Sonnet__ConfigDialog_FocusNextChild(Sonnet::ConfigDialog* self);
    friend bool Sonnet__ConfigDialog_QBaseFocusNextChild(Sonnet::ConfigDialog* self);
    friend bool Sonnet__ConfigDialog_FocusPreviousChild(Sonnet::ConfigDialog* self);
    friend bool Sonnet__ConfigDialog_QBaseFocusPreviousChild(Sonnet::ConfigDialog* self);
    friend QObject* Sonnet__ConfigDialog_Sender(const Sonnet::ConfigDialog* self);
    friend QObject* Sonnet__ConfigDialog_QBaseSender(const Sonnet::ConfigDialog* self);
    friend int Sonnet__ConfigDialog_SenderSignalIndex(const Sonnet::ConfigDialog* self);
    friend int Sonnet__ConfigDialog_QBaseSenderSignalIndex(const Sonnet::ConfigDialog* self);
    friend int Sonnet__ConfigDialog_Receivers(const Sonnet::ConfigDialog* self, const char* signal);
    friend int Sonnet__ConfigDialog_QBaseReceivers(const Sonnet::ConfigDialog* self, const char* signal);
    friend bool Sonnet__ConfigDialog_IsSignalConnected(const Sonnet::ConfigDialog* self, const QMetaMethod* signal);
    friend bool Sonnet__ConfigDialog_QBaseIsSignalConnected(const Sonnet::ConfigDialog* self, const QMetaMethod* signal);
    friend double Sonnet__ConfigDialog_GetDecodedMetricF(const Sonnet::ConfigDialog* self, int metricA, int metricB);
    friend double Sonnet__ConfigDialog_QBaseGetDecodedMetricF(const Sonnet::ConfigDialog* self, int metricA, int metricB);
};

#endif
