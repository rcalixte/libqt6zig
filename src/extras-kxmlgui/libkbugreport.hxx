#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKBUGREPORT_H
#define SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKBUGREPORT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBugReport so that we can call protected methods
class VirtualKBugReport final : public KBugReport {

  public:
    // Virtual class boolean flag
    bool isVirtualKBugReport = true;

    // Virtual class public types (including callbacks)
    using KBugReport_Metacall_Callback = int (*)(KBugReport*, int, int, void**);
    using KBugReport_Accept_Callback = void (*)();
    using KBugReport_SetVisible_Callback = void (*)(KBugReport*, bool);
    using KBugReport_SizeHint_Callback = QSize* (*)();
    using KBugReport_MinimumSizeHint_Callback = QSize* (*)();
    using KBugReport_Open_Callback = void (*)();
    using KBugReport_Exec_Callback = int (*)();
    using KBugReport_Done_Callback = void (*)(KBugReport*, int);
    using KBugReport_Reject_Callback = void (*)();
    using KBugReport_KeyPressEvent_Callback = void (*)(KBugReport*, QKeyEvent*);
    using KBugReport_CloseEvent_Callback = void (*)(KBugReport*, QCloseEvent*);
    using KBugReport_ShowEvent_Callback = void (*)(KBugReport*, QShowEvent*);
    using KBugReport_ResizeEvent_Callback = void (*)(KBugReport*, QResizeEvent*);
    using KBugReport_ContextMenuEvent_Callback = void (*)(KBugReport*, QContextMenuEvent*);
    using KBugReport_EventFilter_Callback = bool (*)(KBugReport*, QObject*, QEvent*);
    using KBugReport_DevType_Callback = int (*)();
    using KBugReport_HeightForWidth_Callback = int (*)(const KBugReport*, int);
    using KBugReport_HasHeightForWidth_Callback = bool (*)();
    using KBugReport_PaintEngine_Callback = QPaintEngine* (*)();
    using KBugReport_Event_Callback = bool (*)(KBugReport*, QEvent*);
    using KBugReport_MousePressEvent_Callback = void (*)(KBugReport*, QMouseEvent*);
    using KBugReport_MouseReleaseEvent_Callback = void (*)(KBugReport*, QMouseEvent*);
    using KBugReport_MouseDoubleClickEvent_Callback = void (*)(KBugReport*, QMouseEvent*);
    using KBugReport_MouseMoveEvent_Callback = void (*)(KBugReport*, QMouseEvent*);
    using KBugReport_WheelEvent_Callback = void (*)(KBugReport*, QWheelEvent*);
    using KBugReport_KeyReleaseEvent_Callback = void (*)(KBugReport*, QKeyEvent*);
    using KBugReport_FocusInEvent_Callback = void (*)(KBugReport*, QFocusEvent*);
    using KBugReport_FocusOutEvent_Callback = void (*)(KBugReport*, QFocusEvent*);
    using KBugReport_EnterEvent_Callback = void (*)(KBugReport*, QEnterEvent*);
    using KBugReport_LeaveEvent_Callback = void (*)(KBugReport*, QEvent*);
    using KBugReport_PaintEvent_Callback = void (*)(KBugReport*, QPaintEvent*);
    using KBugReport_MoveEvent_Callback = void (*)(KBugReport*, QMoveEvent*);
    using KBugReport_TabletEvent_Callback = void (*)(KBugReport*, QTabletEvent*);
    using KBugReport_ActionEvent_Callback = void (*)(KBugReport*, QActionEvent*);
    using KBugReport_DragEnterEvent_Callback = void (*)(KBugReport*, QDragEnterEvent*);
    using KBugReport_DragMoveEvent_Callback = void (*)(KBugReport*, QDragMoveEvent*);
    using KBugReport_DragLeaveEvent_Callback = void (*)(KBugReport*, QDragLeaveEvent*);
    using KBugReport_DropEvent_Callback = void (*)(KBugReport*, QDropEvent*);
    using KBugReport_HideEvent_Callback = void (*)(KBugReport*, QHideEvent*);
    using KBugReport_NativeEvent_Callback = bool (*)(KBugReport*, libqt_string, void*, intptr_t*);
    using KBugReport_ChangeEvent_Callback = void (*)(KBugReport*, QEvent*);
    using KBugReport_Metric_Callback = int (*)(const KBugReport*, int);
    using KBugReport_InitPainter_Callback = void (*)(const KBugReport*, QPainter*);
    using KBugReport_Redirected_Callback = QPaintDevice* (*)(const KBugReport*, QPoint*);
    using KBugReport_SharedPainter_Callback = QPainter* (*)();
    using KBugReport_InputMethodEvent_Callback = void (*)(KBugReport*, QInputMethodEvent*);
    using KBugReport_InputMethodQuery_Callback = QVariant* (*)(const KBugReport*, int);
    using KBugReport_FocusNextPrevChild_Callback = bool (*)(KBugReport*, bool);
    using KBugReport_TimerEvent_Callback = void (*)(KBugReport*, QTimerEvent*);
    using KBugReport_ChildEvent_Callback = void (*)(KBugReport*, QChildEvent*);
    using KBugReport_CustomEvent_Callback = void (*)(KBugReport*, QEvent*);
    using KBugReport_ConnectNotify_Callback = void (*)(KBugReport*, QMetaMethod*);
    using KBugReport_DisconnectNotify_Callback = void (*)(KBugReport*, QMetaMethod*);
    using KBugReport_SendBugReport_Callback = bool (*)();
    using KBugReport_AdjustPosition_Callback = void (*)(KBugReport*, QWidget*);
    using KBugReport_UpdateMicroFocus_Callback = void (*)();
    using KBugReport_Create_Callback = void (*)();
    using KBugReport_Destroy_Callback = void (*)();
    using KBugReport_FocusNextChild_Callback = bool (*)();
    using KBugReport_FocusPreviousChild_Callback = bool (*)();
    using KBugReport_Sender_Callback = QObject* (*)();
    using KBugReport_SenderSignalIndex_Callback = int (*)();
    using KBugReport_Receivers_Callback = int (*)(const KBugReport*, const char*);
    using KBugReport_IsSignalConnected_Callback = bool (*)(const KBugReport*, QMetaMethod*);
    using KBugReport_GetDecodedMetricF_Callback = double (*)(const KBugReport*, int, int);

  protected:
    // Instance callback storage
    KBugReport_Metacall_Callback kbugreport_metacall_callback = nullptr;
    KBugReport_Accept_Callback kbugreport_accept_callback = nullptr;
    KBugReport_SetVisible_Callback kbugreport_setvisible_callback = nullptr;
    KBugReport_SizeHint_Callback kbugreport_sizehint_callback = nullptr;
    KBugReport_MinimumSizeHint_Callback kbugreport_minimumsizehint_callback = nullptr;
    KBugReport_Open_Callback kbugreport_open_callback = nullptr;
    KBugReport_Exec_Callback kbugreport_exec_callback = nullptr;
    KBugReport_Done_Callback kbugreport_done_callback = nullptr;
    KBugReport_Reject_Callback kbugreport_reject_callback = nullptr;
    KBugReport_KeyPressEvent_Callback kbugreport_keypressevent_callback = nullptr;
    KBugReport_CloseEvent_Callback kbugreport_closeevent_callback = nullptr;
    KBugReport_ShowEvent_Callback kbugreport_showevent_callback = nullptr;
    KBugReport_ResizeEvent_Callback kbugreport_resizeevent_callback = nullptr;
    KBugReport_ContextMenuEvent_Callback kbugreport_contextmenuevent_callback = nullptr;
    KBugReport_EventFilter_Callback kbugreport_eventfilter_callback = nullptr;
    KBugReport_DevType_Callback kbugreport_devtype_callback = nullptr;
    KBugReport_HeightForWidth_Callback kbugreport_heightforwidth_callback = nullptr;
    KBugReport_HasHeightForWidth_Callback kbugreport_hasheightforwidth_callback = nullptr;
    KBugReport_PaintEngine_Callback kbugreport_paintengine_callback = nullptr;
    KBugReport_Event_Callback kbugreport_event_callback = nullptr;
    KBugReport_MousePressEvent_Callback kbugreport_mousepressevent_callback = nullptr;
    KBugReport_MouseReleaseEvent_Callback kbugreport_mousereleaseevent_callback = nullptr;
    KBugReport_MouseDoubleClickEvent_Callback kbugreport_mousedoubleclickevent_callback = nullptr;
    KBugReport_MouseMoveEvent_Callback kbugreport_mousemoveevent_callback = nullptr;
    KBugReport_WheelEvent_Callback kbugreport_wheelevent_callback = nullptr;
    KBugReport_KeyReleaseEvent_Callback kbugreport_keyreleaseevent_callback = nullptr;
    KBugReport_FocusInEvent_Callback kbugreport_focusinevent_callback = nullptr;
    KBugReport_FocusOutEvent_Callback kbugreport_focusoutevent_callback = nullptr;
    KBugReport_EnterEvent_Callback kbugreport_enterevent_callback = nullptr;
    KBugReport_LeaveEvent_Callback kbugreport_leaveevent_callback = nullptr;
    KBugReport_PaintEvent_Callback kbugreport_paintevent_callback = nullptr;
    KBugReport_MoveEvent_Callback kbugreport_moveevent_callback = nullptr;
    KBugReport_TabletEvent_Callback kbugreport_tabletevent_callback = nullptr;
    KBugReport_ActionEvent_Callback kbugreport_actionevent_callback = nullptr;
    KBugReport_DragEnterEvent_Callback kbugreport_dragenterevent_callback = nullptr;
    KBugReport_DragMoveEvent_Callback kbugreport_dragmoveevent_callback = nullptr;
    KBugReport_DragLeaveEvent_Callback kbugreport_dragleaveevent_callback = nullptr;
    KBugReport_DropEvent_Callback kbugreport_dropevent_callback = nullptr;
    KBugReport_HideEvent_Callback kbugreport_hideevent_callback = nullptr;
    KBugReport_NativeEvent_Callback kbugreport_nativeevent_callback = nullptr;
    KBugReport_ChangeEvent_Callback kbugreport_changeevent_callback = nullptr;
    KBugReport_Metric_Callback kbugreport_metric_callback = nullptr;
    KBugReport_InitPainter_Callback kbugreport_initpainter_callback = nullptr;
    KBugReport_Redirected_Callback kbugreport_redirected_callback = nullptr;
    KBugReport_SharedPainter_Callback kbugreport_sharedpainter_callback = nullptr;
    KBugReport_InputMethodEvent_Callback kbugreport_inputmethodevent_callback = nullptr;
    KBugReport_InputMethodQuery_Callback kbugreport_inputmethodquery_callback = nullptr;
    KBugReport_FocusNextPrevChild_Callback kbugreport_focusnextprevchild_callback = nullptr;
    KBugReport_TimerEvent_Callback kbugreport_timerevent_callback = nullptr;
    KBugReport_ChildEvent_Callback kbugreport_childevent_callback = nullptr;
    KBugReport_CustomEvent_Callback kbugreport_customevent_callback = nullptr;
    KBugReport_ConnectNotify_Callback kbugreport_connectnotify_callback = nullptr;
    KBugReport_DisconnectNotify_Callback kbugreport_disconnectnotify_callback = nullptr;
    KBugReport_SendBugReport_Callback kbugreport_sendbugreport_callback = nullptr;
    KBugReport_AdjustPosition_Callback kbugreport_adjustposition_callback = nullptr;
    KBugReport_UpdateMicroFocus_Callback kbugreport_updatemicrofocus_callback = nullptr;
    KBugReport_Create_Callback kbugreport_create_callback = nullptr;
    KBugReport_Destroy_Callback kbugreport_destroy_callback = nullptr;
    KBugReport_FocusNextChild_Callback kbugreport_focusnextchild_callback = nullptr;
    KBugReport_FocusPreviousChild_Callback kbugreport_focuspreviouschild_callback = nullptr;
    KBugReport_Sender_Callback kbugreport_sender_callback = nullptr;
    KBugReport_SenderSignalIndex_Callback kbugreport_sendersignalindex_callback = nullptr;
    KBugReport_Receivers_Callback kbugreport_receivers_callback = nullptr;
    KBugReport_IsSignalConnected_Callback kbugreport_issignalconnected_callback = nullptr;
    KBugReport_GetDecodedMetricF_Callback kbugreport_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kbugreport_metacall_isbase = false;
    mutable bool kbugreport_accept_isbase = false;
    mutable bool kbugreport_setvisible_isbase = false;
    mutable bool kbugreport_sizehint_isbase = false;
    mutable bool kbugreport_minimumsizehint_isbase = false;
    mutable bool kbugreport_open_isbase = false;
    mutable bool kbugreport_exec_isbase = false;
    mutable bool kbugreport_done_isbase = false;
    mutable bool kbugreport_reject_isbase = false;
    mutable bool kbugreport_keypressevent_isbase = false;
    mutable bool kbugreport_closeevent_isbase = false;
    mutable bool kbugreport_showevent_isbase = false;
    mutable bool kbugreport_resizeevent_isbase = false;
    mutable bool kbugreport_contextmenuevent_isbase = false;
    mutable bool kbugreport_eventfilter_isbase = false;
    mutable bool kbugreport_devtype_isbase = false;
    mutable bool kbugreport_heightforwidth_isbase = false;
    mutable bool kbugreport_hasheightforwidth_isbase = false;
    mutable bool kbugreport_paintengine_isbase = false;
    mutable bool kbugreport_event_isbase = false;
    mutable bool kbugreport_mousepressevent_isbase = false;
    mutable bool kbugreport_mousereleaseevent_isbase = false;
    mutable bool kbugreport_mousedoubleclickevent_isbase = false;
    mutable bool kbugreport_mousemoveevent_isbase = false;
    mutable bool kbugreport_wheelevent_isbase = false;
    mutable bool kbugreport_keyreleaseevent_isbase = false;
    mutable bool kbugreport_focusinevent_isbase = false;
    mutable bool kbugreport_focusoutevent_isbase = false;
    mutable bool kbugreport_enterevent_isbase = false;
    mutable bool kbugreport_leaveevent_isbase = false;
    mutable bool kbugreport_paintevent_isbase = false;
    mutable bool kbugreport_moveevent_isbase = false;
    mutable bool kbugreport_tabletevent_isbase = false;
    mutable bool kbugreport_actionevent_isbase = false;
    mutable bool kbugreport_dragenterevent_isbase = false;
    mutable bool kbugreport_dragmoveevent_isbase = false;
    mutable bool kbugreport_dragleaveevent_isbase = false;
    mutable bool kbugreport_dropevent_isbase = false;
    mutable bool kbugreport_hideevent_isbase = false;
    mutable bool kbugreport_nativeevent_isbase = false;
    mutable bool kbugreport_changeevent_isbase = false;
    mutable bool kbugreport_metric_isbase = false;
    mutable bool kbugreport_initpainter_isbase = false;
    mutable bool kbugreport_redirected_isbase = false;
    mutable bool kbugreport_sharedpainter_isbase = false;
    mutable bool kbugreport_inputmethodevent_isbase = false;
    mutable bool kbugreport_inputmethodquery_isbase = false;
    mutable bool kbugreport_focusnextprevchild_isbase = false;
    mutable bool kbugreport_timerevent_isbase = false;
    mutable bool kbugreport_childevent_isbase = false;
    mutable bool kbugreport_customevent_isbase = false;
    mutable bool kbugreport_connectnotify_isbase = false;
    mutable bool kbugreport_disconnectnotify_isbase = false;
    mutable bool kbugreport_sendbugreport_isbase = false;
    mutable bool kbugreport_adjustposition_isbase = false;
    mutable bool kbugreport_updatemicrofocus_isbase = false;
    mutable bool kbugreport_create_isbase = false;
    mutable bool kbugreport_destroy_isbase = false;
    mutable bool kbugreport_focusnextchild_isbase = false;
    mutable bool kbugreport_focuspreviouschild_isbase = false;
    mutable bool kbugreport_sender_isbase = false;
    mutable bool kbugreport_sendersignalindex_isbase = false;
    mutable bool kbugreport_receivers_isbase = false;
    mutable bool kbugreport_issignalconnected_isbase = false;
    mutable bool kbugreport_getdecodedmetricf_isbase = false;

  public:
    VirtualKBugReport(const KAboutData& aboutData) : KBugReport(aboutData) {};
    VirtualKBugReport(const KAboutData& aboutData, QWidget* parent) : KBugReport(aboutData, parent) {};

    ~VirtualKBugReport() {
        kbugreport_metacall_callback = nullptr;
        kbugreport_accept_callback = nullptr;
        kbugreport_setvisible_callback = nullptr;
        kbugreport_sizehint_callback = nullptr;
        kbugreport_minimumsizehint_callback = nullptr;
        kbugreport_open_callback = nullptr;
        kbugreport_exec_callback = nullptr;
        kbugreport_done_callback = nullptr;
        kbugreport_reject_callback = nullptr;
        kbugreport_keypressevent_callback = nullptr;
        kbugreport_closeevent_callback = nullptr;
        kbugreport_showevent_callback = nullptr;
        kbugreport_resizeevent_callback = nullptr;
        kbugreport_contextmenuevent_callback = nullptr;
        kbugreport_eventfilter_callback = nullptr;
        kbugreport_devtype_callback = nullptr;
        kbugreport_heightforwidth_callback = nullptr;
        kbugreport_hasheightforwidth_callback = nullptr;
        kbugreport_paintengine_callback = nullptr;
        kbugreport_event_callback = nullptr;
        kbugreport_mousepressevent_callback = nullptr;
        kbugreport_mousereleaseevent_callback = nullptr;
        kbugreport_mousedoubleclickevent_callback = nullptr;
        kbugreport_mousemoveevent_callback = nullptr;
        kbugreport_wheelevent_callback = nullptr;
        kbugreport_keyreleaseevent_callback = nullptr;
        kbugreport_focusinevent_callback = nullptr;
        kbugreport_focusoutevent_callback = nullptr;
        kbugreport_enterevent_callback = nullptr;
        kbugreport_leaveevent_callback = nullptr;
        kbugreport_paintevent_callback = nullptr;
        kbugreport_moveevent_callback = nullptr;
        kbugreport_tabletevent_callback = nullptr;
        kbugreport_actionevent_callback = nullptr;
        kbugreport_dragenterevent_callback = nullptr;
        kbugreport_dragmoveevent_callback = nullptr;
        kbugreport_dragleaveevent_callback = nullptr;
        kbugreport_dropevent_callback = nullptr;
        kbugreport_hideevent_callback = nullptr;
        kbugreport_nativeevent_callback = nullptr;
        kbugreport_changeevent_callback = nullptr;
        kbugreport_metric_callback = nullptr;
        kbugreport_initpainter_callback = nullptr;
        kbugreport_redirected_callback = nullptr;
        kbugreport_sharedpainter_callback = nullptr;
        kbugreport_inputmethodevent_callback = nullptr;
        kbugreport_inputmethodquery_callback = nullptr;
        kbugreport_focusnextprevchild_callback = nullptr;
        kbugreport_timerevent_callback = nullptr;
        kbugreport_childevent_callback = nullptr;
        kbugreport_customevent_callback = nullptr;
        kbugreport_connectnotify_callback = nullptr;
        kbugreport_disconnectnotify_callback = nullptr;
        kbugreport_sendbugreport_callback = nullptr;
        kbugreport_adjustposition_callback = nullptr;
        kbugreport_updatemicrofocus_callback = nullptr;
        kbugreport_create_callback = nullptr;
        kbugreport_destroy_callback = nullptr;
        kbugreport_focusnextchild_callback = nullptr;
        kbugreport_focuspreviouschild_callback = nullptr;
        kbugreport_sender_callback = nullptr;
        kbugreport_sendersignalindex_callback = nullptr;
        kbugreport_receivers_callback = nullptr;
        kbugreport_issignalconnected_callback = nullptr;
        kbugreport_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKBugReport_Metacall_Callback(KBugReport_Metacall_Callback cb) { kbugreport_metacall_callback = cb; }
    inline void setKBugReport_Accept_Callback(KBugReport_Accept_Callback cb) { kbugreport_accept_callback = cb; }
    inline void setKBugReport_SetVisible_Callback(KBugReport_SetVisible_Callback cb) { kbugreport_setvisible_callback = cb; }
    inline void setKBugReport_SizeHint_Callback(KBugReport_SizeHint_Callback cb) { kbugreport_sizehint_callback = cb; }
    inline void setKBugReport_MinimumSizeHint_Callback(KBugReport_MinimumSizeHint_Callback cb) { kbugreport_minimumsizehint_callback = cb; }
    inline void setKBugReport_Open_Callback(KBugReport_Open_Callback cb) { kbugreport_open_callback = cb; }
    inline void setKBugReport_Exec_Callback(KBugReport_Exec_Callback cb) { kbugreport_exec_callback = cb; }
    inline void setKBugReport_Done_Callback(KBugReport_Done_Callback cb) { kbugreport_done_callback = cb; }
    inline void setKBugReport_Reject_Callback(KBugReport_Reject_Callback cb) { kbugreport_reject_callback = cb; }
    inline void setKBugReport_KeyPressEvent_Callback(KBugReport_KeyPressEvent_Callback cb) { kbugreport_keypressevent_callback = cb; }
    inline void setKBugReport_CloseEvent_Callback(KBugReport_CloseEvent_Callback cb) { kbugreport_closeevent_callback = cb; }
    inline void setKBugReport_ShowEvent_Callback(KBugReport_ShowEvent_Callback cb) { kbugreport_showevent_callback = cb; }
    inline void setKBugReport_ResizeEvent_Callback(KBugReport_ResizeEvent_Callback cb) { kbugreport_resizeevent_callback = cb; }
    inline void setKBugReport_ContextMenuEvent_Callback(KBugReport_ContextMenuEvent_Callback cb) { kbugreport_contextmenuevent_callback = cb; }
    inline void setKBugReport_EventFilter_Callback(KBugReport_EventFilter_Callback cb) { kbugreport_eventfilter_callback = cb; }
    inline void setKBugReport_DevType_Callback(KBugReport_DevType_Callback cb) { kbugreport_devtype_callback = cb; }
    inline void setKBugReport_HeightForWidth_Callback(KBugReport_HeightForWidth_Callback cb) { kbugreport_heightforwidth_callback = cb; }
    inline void setKBugReport_HasHeightForWidth_Callback(KBugReport_HasHeightForWidth_Callback cb) { kbugreport_hasheightforwidth_callback = cb; }
    inline void setKBugReport_PaintEngine_Callback(KBugReport_PaintEngine_Callback cb) { kbugreport_paintengine_callback = cb; }
    inline void setKBugReport_Event_Callback(KBugReport_Event_Callback cb) { kbugreport_event_callback = cb; }
    inline void setKBugReport_MousePressEvent_Callback(KBugReport_MousePressEvent_Callback cb) { kbugreport_mousepressevent_callback = cb; }
    inline void setKBugReport_MouseReleaseEvent_Callback(KBugReport_MouseReleaseEvent_Callback cb) { kbugreport_mousereleaseevent_callback = cb; }
    inline void setKBugReport_MouseDoubleClickEvent_Callback(KBugReport_MouseDoubleClickEvent_Callback cb) { kbugreport_mousedoubleclickevent_callback = cb; }
    inline void setKBugReport_MouseMoveEvent_Callback(KBugReport_MouseMoveEvent_Callback cb) { kbugreport_mousemoveevent_callback = cb; }
    inline void setKBugReport_WheelEvent_Callback(KBugReport_WheelEvent_Callback cb) { kbugreport_wheelevent_callback = cb; }
    inline void setKBugReport_KeyReleaseEvent_Callback(KBugReport_KeyReleaseEvent_Callback cb) { kbugreport_keyreleaseevent_callback = cb; }
    inline void setKBugReport_FocusInEvent_Callback(KBugReport_FocusInEvent_Callback cb) { kbugreport_focusinevent_callback = cb; }
    inline void setKBugReport_FocusOutEvent_Callback(KBugReport_FocusOutEvent_Callback cb) { kbugreport_focusoutevent_callback = cb; }
    inline void setKBugReport_EnterEvent_Callback(KBugReport_EnterEvent_Callback cb) { kbugreport_enterevent_callback = cb; }
    inline void setKBugReport_LeaveEvent_Callback(KBugReport_LeaveEvent_Callback cb) { kbugreport_leaveevent_callback = cb; }
    inline void setKBugReport_PaintEvent_Callback(KBugReport_PaintEvent_Callback cb) { kbugreport_paintevent_callback = cb; }
    inline void setKBugReport_MoveEvent_Callback(KBugReport_MoveEvent_Callback cb) { kbugreport_moveevent_callback = cb; }
    inline void setKBugReport_TabletEvent_Callback(KBugReport_TabletEvent_Callback cb) { kbugreport_tabletevent_callback = cb; }
    inline void setKBugReport_ActionEvent_Callback(KBugReport_ActionEvent_Callback cb) { kbugreport_actionevent_callback = cb; }
    inline void setKBugReport_DragEnterEvent_Callback(KBugReport_DragEnterEvent_Callback cb) { kbugreport_dragenterevent_callback = cb; }
    inline void setKBugReport_DragMoveEvent_Callback(KBugReport_DragMoveEvent_Callback cb) { kbugreport_dragmoveevent_callback = cb; }
    inline void setKBugReport_DragLeaveEvent_Callback(KBugReport_DragLeaveEvent_Callback cb) { kbugreport_dragleaveevent_callback = cb; }
    inline void setKBugReport_DropEvent_Callback(KBugReport_DropEvent_Callback cb) { kbugreport_dropevent_callback = cb; }
    inline void setKBugReport_HideEvent_Callback(KBugReport_HideEvent_Callback cb) { kbugreport_hideevent_callback = cb; }
    inline void setKBugReport_NativeEvent_Callback(KBugReport_NativeEvent_Callback cb) { kbugreport_nativeevent_callback = cb; }
    inline void setKBugReport_ChangeEvent_Callback(KBugReport_ChangeEvent_Callback cb) { kbugreport_changeevent_callback = cb; }
    inline void setKBugReport_Metric_Callback(KBugReport_Metric_Callback cb) { kbugreport_metric_callback = cb; }
    inline void setKBugReport_InitPainter_Callback(KBugReport_InitPainter_Callback cb) { kbugreport_initpainter_callback = cb; }
    inline void setKBugReport_Redirected_Callback(KBugReport_Redirected_Callback cb) { kbugreport_redirected_callback = cb; }
    inline void setKBugReport_SharedPainter_Callback(KBugReport_SharedPainter_Callback cb) { kbugreport_sharedpainter_callback = cb; }
    inline void setKBugReport_InputMethodEvent_Callback(KBugReport_InputMethodEvent_Callback cb) { kbugreport_inputmethodevent_callback = cb; }
    inline void setKBugReport_InputMethodQuery_Callback(KBugReport_InputMethodQuery_Callback cb) { kbugreport_inputmethodquery_callback = cb; }
    inline void setKBugReport_FocusNextPrevChild_Callback(KBugReport_FocusNextPrevChild_Callback cb) { kbugreport_focusnextprevchild_callback = cb; }
    inline void setKBugReport_TimerEvent_Callback(KBugReport_TimerEvent_Callback cb) { kbugreport_timerevent_callback = cb; }
    inline void setKBugReport_ChildEvent_Callback(KBugReport_ChildEvent_Callback cb) { kbugreport_childevent_callback = cb; }
    inline void setKBugReport_CustomEvent_Callback(KBugReport_CustomEvent_Callback cb) { kbugreport_customevent_callback = cb; }
    inline void setKBugReport_ConnectNotify_Callback(KBugReport_ConnectNotify_Callback cb) { kbugreport_connectnotify_callback = cb; }
    inline void setKBugReport_DisconnectNotify_Callback(KBugReport_DisconnectNotify_Callback cb) { kbugreport_disconnectnotify_callback = cb; }
    inline void setKBugReport_SendBugReport_Callback(KBugReport_SendBugReport_Callback cb) { kbugreport_sendbugreport_callback = cb; }
    inline void setKBugReport_AdjustPosition_Callback(KBugReport_AdjustPosition_Callback cb) { kbugreport_adjustposition_callback = cb; }
    inline void setKBugReport_UpdateMicroFocus_Callback(KBugReport_UpdateMicroFocus_Callback cb) { kbugreport_updatemicrofocus_callback = cb; }
    inline void setKBugReport_Create_Callback(KBugReport_Create_Callback cb) { kbugreport_create_callback = cb; }
    inline void setKBugReport_Destroy_Callback(KBugReport_Destroy_Callback cb) { kbugreport_destroy_callback = cb; }
    inline void setKBugReport_FocusNextChild_Callback(KBugReport_FocusNextChild_Callback cb) { kbugreport_focusnextchild_callback = cb; }
    inline void setKBugReport_FocusPreviousChild_Callback(KBugReport_FocusPreviousChild_Callback cb) { kbugreport_focuspreviouschild_callback = cb; }
    inline void setKBugReport_Sender_Callback(KBugReport_Sender_Callback cb) { kbugreport_sender_callback = cb; }
    inline void setKBugReport_SenderSignalIndex_Callback(KBugReport_SenderSignalIndex_Callback cb) { kbugreport_sendersignalindex_callback = cb; }
    inline void setKBugReport_Receivers_Callback(KBugReport_Receivers_Callback cb) { kbugreport_receivers_callback = cb; }
    inline void setKBugReport_IsSignalConnected_Callback(KBugReport_IsSignalConnected_Callback cb) { kbugreport_issignalconnected_callback = cb; }
    inline void setKBugReport_GetDecodedMetricF_Callback(KBugReport_GetDecodedMetricF_Callback cb) { kbugreport_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKBugReport_Metacall_IsBase(bool value) const { kbugreport_metacall_isbase = value; }
    inline void setKBugReport_Accept_IsBase(bool value) const { kbugreport_accept_isbase = value; }
    inline void setKBugReport_SetVisible_IsBase(bool value) const { kbugreport_setvisible_isbase = value; }
    inline void setKBugReport_SizeHint_IsBase(bool value) const { kbugreport_sizehint_isbase = value; }
    inline void setKBugReport_MinimumSizeHint_IsBase(bool value) const { kbugreport_minimumsizehint_isbase = value; }
    inline void setKBugReport_Open_IsBase(bool value) const { kbugreport_open_isbase = value; }
    inline void setKBugReport_Exec_IsBase(bool value) const { kbugreport_exec_isbase = value; }
    inline void setKBugReport_Done_IsBase(bool value) const { kbugreport_done_isbase = value; }
    inline void setKBugReport_Reject_IsBase(bool value) const { kbugreport_reject_isbase = value; }
    inline void setKBugReport_KeyPressEvent_IsBase(bool value) const { kbugreport_keypressevent_isbase = value; }
    inline void setKBugReport_CloseEvent_IsBase(bool value) const { kbugreport_closeevent_isbase = value; }
    inline void setKBugReport_ShowEvent_IsBase(bool value) const { kbugreport_showevent_isbase = value; }
    inline void setKBugReport_ResizeEvent_IsBase(bool value) const { kbugreport_resizeevent_isbase = value; }
    inline void setKBugReport_ContextMenuEvent_IsBase(bool value) const { kbugreport_contextmenuevent_isbase = value; }
    inline void setKBugReport_EventFilter_IsBase(bool value) const { kbugreport_eventfilter_isbase = value; }
    inline void setKBugReport_DevType_IsBase(bool value) const { kbugreport_devtype_isbase = value; }
    inline void setKBugReport_HeightForWidth_IsBase(bool value) const { kbugreport_heightforwidth_isbase = value; }
    inline void setKBugReport_HasHeightForWidth_IsBase(bool value) const { kbugreport_hasheightforwidth_isbase = value; }
    inline void setKBugReport_PaintEngine_IsBase(bool value) const { kbugreport_paintengine_isbase = value; }
    inline void setKBugReport_Event_IsBase(bool value) const { kbugreport_event_isbase = value; }
    inline void setKBugReport_MousePressEvent_IsBase(bool value) const { kbugreport_mousepressevent_isbase = value; }
    inline void setKBugReport_MouseReleaseEvent_IsBase(bool value) const { kbugreport_mousereleaseevent_isbase = value; }
    inline void setKBugReport_MouseDoubleClickEvent_IsBase(bool value) const { kbugreport_mousedoubleclickevent_isbase = value; }
    inline void setKBugReport_MouseMoveEvent_IsBase(bool value) const { kbugreport_mousemoveevent_isbase = value; }
    inline void setKBugReport_WheelEvent_IsBase(bool value) const { kbugreport_wheelevent_isbase = value; }
    inline void setKBugReport_KeyReleaseEvent_IsBase(bool value) const { kbugreport_keyreleaseevent_isbase = value; }
    inline void setKBugReport_FocusInEvent_IsBase(bool value) const { kbugreport_focusinevent_isbase = value; }
    inline void setKBugReport_FocusOutEvent_IsBase(bool value) const { kbugreport_focusoutevent_isbase = value; }
    inline void setKBugReport_EnterEvent_IsBase(bool value) const { kbugreport_enterevent_isbase = value; }
    inline void setKBugReport_LeaveEvent_IsBase(bool value) const { kbugreport_leaveevent_isbase = value; }
    inline void setKBugReport_PaintEvent_IsBase(bool value) const { kbugreport_paintevent_isbase = value; }
    inline void setKBugReport_MoveEvent_IsBase(bool value) const { kbugreport_moveevent_isbase = value; }
    inline void setKBugReport_TabletEvent_IsBase(bool value) const { kbugreport_tabletevent_isbase = value; }
    inline void setKBugReport_ActionEvent_IsBase(bool value) const { kbugreport_actionevent_isbase = value; }
    inline void setKBugReport_DragEnterEvent_IsBase(bool value) const { kbugreport_dragenterevent_isbase = value; }
    inline void setKBugReport_DragMoveEvent_IsBase(bool value) const { kbugreport_dragmoveevent_isbase = value; }
    inline void setKBugReport_DragLeaveEvent_IsBase(bool value) const { kbugreport_dragleaveevent_isbase = value; }
    inline void setKBugReport_DropEvent_IsBase(bool value) const { kbugreport_dropevent_isbase = value; }
    inline void setKBugReport_HideEvent_IsBase(bool value) const { kbugreport_hideevent_isbase = value; }
    inline void setKBugReport_NativeEvent_IsBase(bool value) const { kbugreport_nativeevent_isbase = value; }
    inline void setKBugReport_ChangeEvent_IsBase(bool value) const { kbugreport_changeevent_isbase = value; }
    inline void setKBugReport_Metric_IsBase(bool value) const { kbugreport_metric_isbase = value; }
    inline void setKBugReport_InitPainter_IsBase(bool value) const { kbugreport_initpainter_isbase = value; }
    inline void setKBugReport_Redirected_IsBase(bool value) const { kbugreport_redirected_isbase = value; }
    inline void setKBugReport_SharedPainter_IsBase(bool value) const { kbugreport_sharedpainter_isbase = value; }
    inline void setKBugReport_InputMethodEvent_IsBase(bool value) const { kbugreport_inputmethodevent_isbase = value; }
    inline void setKBugReport_InputMethodQuery_IsBase(bool value) const { kbugreport_inputmethodquery_isbase = value; }
    inline void setKBugReport_FocusNextPrevChild_IsBase(bool value) const { kbugreport_focusnextprevchild_isbase = value; }
    inline void setKBugReport_TimerEvent_IsBase(bool value) const { kbugreport_timerevent_isbase = value; }
    inline void setKBugReport_ChildEvent_IsBase(bool value) const { kbugreport_childevent_isbase = value; }
    inline void setKBugReport_CustomEvent_IsBase(bool value) const { kbugreport_customevent_isbase = value; }
    inline void setKBugReport_ConnectNotify_IsBase(bool value) const { kbugreport_connectnotify_isbase = value; }
    inline void setKBugReport_DisconnectNotify_IsBase(bool value) const { kbugreport_disconnectnotify_isbase = value; }
    inline void setKBugReport_SendBugReport_IsBase(bool value) const { kbugreport_sendbugreport_isbase = value; }
    inline void setKBugReport_AdjustPosition_IsBase(bool value) const { kbugreport_adjustposition_isbase = value; }
    inline void setKBugReport_UpdateMicroFocus_IsBase(bool value) const { kbugreport_updatemicrofocus_isbase = value; }
    inline void setKBugReport_Create_IsBase(bool value) const { kbugreport_create_isbase = value; }
    inline void setKBugReport_Destroy_IsBase(bool value) const { kbugreport_destroy_isbase = value; }
    inline void setKBugReport_FocusNextChild_IsBase(bool value) const { kbugreport_focusnextchild_isbase = value; }
    inline void setKBugReport_FocusPreviousChild_IsBase(bool value) const { kbugreport_focuspreviouschild_isbase = value; }
    inline void setKBugReport_Sender_IsBase(bool value) const { kbugreport_sender_isbase = value; }
    inline void setKBugReport_SenderSignalIndex_IsBase(bool value) const { kbugreport_sendersignalindex_isbase = value; }
    inline void setKBugReport_Receivers_IsBase(bool value) const { kbugreport_receivers_isbase = value; }
    inline void setKBugReport_IsSignalConnected_IsBase(bool value) const { kbugreport_issignalconnected_isbase = value; }
    inline void setKBugReport_GetDecodedMetricF_IsBase(bool value) const { kbugreport_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kbugreport_metacall_isbase) {
            kbugreport_metacall_isbase = false;
            return KBugReport::qt_metacall(param1, param2, param3);
        } else if (kbugreport_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kbugreport_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KBugReport::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kbugreport_accept_isbase) {
            kbugreport_accept_isbase = false;
            KBugReport::accept();
        } else if (kbugreport_accept_callback != nullptr) {
            kbugreport_accept_callback();
        } else {
            KBugReport::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kbugreport_setvisible_isbase) {
            kbugreport_setvisible_isbase = false;
            KBugReport::setVisible(visible);
        } else if (kbugreport_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kbugreport_setvisible_callback(this, cbval1);
        } else {
            KBugReport::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kbugreport_sizehint_isbase) {
            kbugreport_sizehint_isbase = false;
            return KBugReport::sizeHint();
        } else if (kbugreport_sizehint_callback != nullptr) {
            QSize* callback_ret = kbugreport_sizehint_callback();
            return *callback_ret;
        } else {
            return KBugReport::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kbugreport_minimumsizehint_isbase) {
            kbugreport_minimumsizehint_isbase = false;
            return KBugReport::minimumSizeHint();
        } else if (kbugreport_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kbugreport_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KBugReport::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kbugreport_open_isbase) {
            kbugreport_open_isbase = false;
            KBugReport::open();
        } else if (kbugreport_open_callback != nullptr) {
            kbugreport_open_callback();
        } else {
            KBugReport::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kbugreport_exec_isbase) {
            kbugreport_exec_isbase = false;
            return KBugReport::exec();
        } else if (kbugreport_exec_callback != nullptr) {
            int callback_ret = kbugreport_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KBugReport::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kbugreport_done_isbase) {
            kbugreport_done_isbase = false;
            KBugReport::done(param1);
        } else if (kbugreport_done_callback != nullptr) {
            int cbval1 = param1;

            kbugreport_done_callback(this, cbval1);
        } else {
            KBugReport::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kbugreport_reject_isbase) {
            kbugreport_reject_isbase = false;
            KBugReport::reject();
        } else if (kbugreport_reject_callback != nullptr) {
            kbugreport_reject_callback();
        } else {
            KBugReport::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kbugreport_keypressevent_isbase) {
            kbugreport_keypressevent_isbase = false;
            KBugReport::keyPressEvent(param1);
        } else if (kbugreport_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kbugreport_keypressevent_callback(this, cbval1);
        } else {
            KBugReport::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kbugreport_closeevent_isbase) {
            kbugreport_closeevent_isbase = false;
            KBugReport::closeEvent(param1);
        } else if (kbugreport_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            kbugreport_closeevent_callback(this, cbval1);
        } else {
            KBugReport::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kbugreport_showevent_isbase) {
            kbugreport_showevent_isbase = false;
            KBugReport::showEvent(param1);
        } else if (kbugreport_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            kbugreport_showevent_callback(this, cbval1);
        } else {
            KBugReport::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kbugreport_resizeevent_isbase) {
            kbugreport_resizeevent_isbase = false;
            KBugReport::resizeEvent(param1);
        } else if (kbugreport_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            kbugreport_resizeevent_callback(this, cbval1);
        } else {
            KBugReport::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kbugreport_contextmenuevent_isbase) {
            kbugreport_contextmenuevent_isbase = false;
            KBugReport::contextMenuEvent(param1);
        } else if (kbugreport_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            kbugreport_contextmenuevent_callback(this, cbval1);
        } else {
            KBugReport::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kbugreport_eventfilter_isbase) {
            kbugreport_eventfilter_isbase = false;
            return KBugReport::eventFilter(param1, param2);
        } else if (kbugreport_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kbugreport_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KBugReport::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kbugreport_devtype_isbase) {
            kbugreport_devtype_isbase = false;
            return KBugReport::devType();
        } else if (kbugreport_devtype_callback != nullptr) {
            int callback_ret = kbugreport_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KBugReport::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kbugreport_heightforwidth_isbase) {
            kbugreport_heightforwidth_isbase = false;
            return KBugReport::heightForWidth(param1);
        } else if (kbugreport_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kbugreport_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KBugReport::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kbugreport_hasheightforwidth_isbase) {
            kbugreport_hasheightforwidth_isbase = false;
            return KBugReport::hasHeightForWidth();
        } else if (kbugreport_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kbugreport_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KBugReport::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kbugreport_paintengine_isbase) {
            kbugreport_paintengine_isbase = false;
            return KBugReport::paintEngine();
        } else if (kbugreport_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kbugreport_paintengine_callback();
            return callback_ret;
        } else {
            return KBugReport::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kbugreport_event_isbase) {
            kbugreport_event_isbase = false;
            return KBugReport::event(event);
        } else if (kbugreport_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kbugreport_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBugReport::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kbugreport_mousepressevent_isbase) {
            kbugreport_mousepressevent_isbase = false;
            KBugReport::mousePressEvent(event);
        } else if (kbugreport_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kbugreport_mousepressevent_callback(this, cbval1);
        } else {
            KBugReport::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kbugreport_mousereleaseevent_isbase) {
            kbugreport_mousereleaseevent_isbase = false;
            KBugReport::mouseReleaseEvent(event);
        } else if (kbugreport_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kbugreport_mousereleaseevent_callback(this, cbval1);
        } else {
            KBugReport::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kbugreport_mousedoubleclickevent_isbase) {
            kbugreport_mousedoubleclickevent_isbase = false;
            KBugReport::mouseDoubleClickEvent(event);
        } else if (kbugreport_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kbugreport_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KBugReport::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kbugreport_mousemoveevent_isbase) {
            kbugreport_mousemoveevent_isbase = false;
            KBugReport::mouseMoveEvent(event);
        } else if (kbugreport_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kbugreport_mousemoveevent_callback(this, cbval1);
        } else {
            KBugReport::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kbugreport_wheelevent_isbase) {
            kbugreport_wheelevent_isbase = false;
            KBugReport::wheelEvent(event);
        } else if (kbugreport_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kbugreport_wheelevent_callback(this, cbval1);
        } else {
            KBugReport::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kbugreport_keyreleaseevent_isbase) {
            kbugreport_keyreleaseevent_isbase = false;
            KBugReport::keyReleaseEvent(event);
        } else if (kbugreport_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kbugreport_keyreleaseevent_callback(this, cbval1);
        } else {
            KBugReport::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kbugreport_focusinevent_isbase) {
            kbugreport_focusinevent_isbase = false;
            KBugReport::focusInEvent(event);
        } else if (kbugreport_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kbugreport_focusinevent_callback(this, cbval1);
        } else {
            KBugReport::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kbugreport_focusoutevent_isbase) {
            kbugreport_focusoutevent_isbase = false;
            KBugReport::focusOutEvent(event);
        } else if (kbugreport_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kbugreport_focusoutevent_callback(this, cbval1);
        } else {
            KBugReport::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kbugreport_enterevent_isbase) {
            kbugreport_enterevent_isbase = false;
            KBugReport::enterEvent(event);
        } else if (kbugreport_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kbugreport_enterevent_callback(this, cbval1);
        } else {
            KBugReport::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kbugreport_leaveevent_isbase) {
            kbugreport_leaveevent_isbase = false;
            KBugReport::leaveEvent(event);
        } else if (kbugreport_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kbugreport_leaveevent_callback(this, cbval1);
        } else {
            KBugReport::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kbugreport_paintevent_isbase) {
            kbugreport_paintevent_isbase = false;
            KBugReport::paintEvent(event);
        } else if (kbugreport_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kbugreport_paintevent_callback(this, cbval1);
        } else {
            KBugReport::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kbugreport_moveevent_isbase) {
            kbugreport_moveevent_isbase = false;
            KBugReport::moveEvent(event);
        } else if (kbugreport_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kbugreport_moveevent_callback(this, cbval1);
        } else {
            KBugReport::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kbugreport_tabletevent_isbase) {
            kbugreport_tabletevent_isbase = false;
            KBugReport::tabletEvent(event);
        } else if (kbugreport_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kbugreport_tabletevent_callback(this, cbval1);
        } else {
            KBugReport::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kbugreport_actionevent_isbase) {
            kbugreport_actionevent_isbase = false;
            KBugReport::actionEvent(event);
        } else if (kbugreport_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kbugreport_actionevent_callback(this, cbval1);
        } else {
            KBugReport::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kbugreport_dragenterevent_isbase) {
            kbugreport_dragenterevent_isbase = false;
            KBugReport::dragEnterEvent(event);
        } else if (kbugreport_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kbugreport_dragenterevent_callback(this, cbval1);
        } else {
            KBugReport::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kbugreport_dragmoveevent_isbase) {
            kbugreport_dragmoveevent_isbase = false;
            KBugReport::dragMoveEvent(event);
        } else if (kbugreport_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kbugreport_dragmoveevent_callback(this, cbval1);
        } else {
            KBugReport::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kbugreport_dragleaveevent_isbase) {
            kbugreport_dragleaveevent_isbase = false;
            KBugReport::dragLeaveEvent(event);
        } else if (kbugreport_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kbugreport_dragleaveevent_callback(this, cbval1);
        } else {
            KBugReport::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kbugreport_dropevent_isbase) {
            kbugreport_dropevent_isbase = false;
            KBugReport::dropEvent(event);
        } else if (kbugreport_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kbugreport_dropevent_callback(this, cbval1);
        } else {
            KBugReport::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kbugreport_hideevent_isbase) {
            kbugreport_hideevent_isbase = false;
            KBugReport::hideEvent(event);
        } else if (kbugreport_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kbugreport_hideevent_callback(this, cbval1);
        } else {
            KBugReport::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kbugreport_nativeevent_isbase) {
            kbugreport_nativeevent_isbase = false;
            return KBugReport::nativeEvent(eventType, message, result);
        } else if (kbugreport_nativeevent_callback != nullptr) {
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

            bool callback_ret = kbugreport_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KBugReport::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kbugreport_changeevent_isbase) {
            kbugreport_changeevent_isbase = false;
            KBugReport::changeEvent(param1);
        } else if (kbugreport_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kbugreport_changeevent_callback(this, cbval1);
        } else {
            KBugReport::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kbugreport_metric_isbase) {
            kbugreport_metric_isbase = false;
            return KBugReport::metric(param1);
        } else if (kbugreport_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kbugreport_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KBugReport::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kbugreport_initpainter_isbase) {
            kbugreport_initpainter_isbase = false;
            KBugReport::initPainter(painter);
        } else if (kbugreport_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kbugreport_initpainter_callback(this, cbval1);
        } else {
            KBugReport::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kbugreport_redirected_isbase) {
            kbugreport_redirected_isbase = false;
            return KBugReport::redirected(offset);
        } else if (kbugreport_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kbugreport_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBugReport::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kbugreport_sharedpainter_isbase) {
            kbugreport_sharedpainter_isbase = false;
            return KBugReport::sharedPainter();
        } else if (kbugreport_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kbugreport_sharedpainter_callback();
            return callback_ret;
        } else {
            return KBugReport::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kbugreport_inputmethodevent_isbase) {
            kbugreport_inputmethodevent_isbase = false;
            KBugReport::inputMethodEvent(param1);
        } else if (kbugreport_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kbugreport_inputmethodevent_callback(this, cbval1);
        } else {
            KBugReport::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kbugreport_inputmethodquery_isbase) {
            kbugreport_inputmethodquery_isbase = false;
            return KBugReport::inputMethodQuery(param1);
        } else if (kbugreport_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kbugreport_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KBugReport::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kbugreport_focusnextprevchild_isbase) {
            kbugreport_focusnextprevchild_isbase = false;
            return KBugReport::focusNextPrevChild(next);
        } else if (kbugreport_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kbugreport_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBugReport::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kbugreport_timerevent_isbase) {
            kbugreport_timerevent_isbase = false;
            KBugReport::timerEvent(event);
        } else if (kbugreport_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kbugreport_timerevent_callback(this, cbval1);
        } else {
            KBugReport::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kbugreport_childevent_isbase) {
            kbugreport_childevent_isbase = false;
            KBugReport::childEvent(event);
        } else if (kbugreport_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kbugreport_childevent_callback(this, cbval1);
        } else {
            KBugReport::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kbugreport_customevent_isbase) {
            kbugreport_customevent_isbase = false;
            KBugReport::customEvent(event);
        } else if (kbugreport_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kbugreport_customevent_callback(this, cbval1);
        } else {
            KBugReport::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kbugreport_connectnotify_isbase) {
            kbugreport_connectnotify_isbase = false;
            KBugReport::connectNotify(signal);
        } else if (kbugreport_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kbugreport_connectnotify_callback(this, cbval1);
        } else {
            KBugReport::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kbugreport_disconnectnotify_isbase) {
            kbugreport_disconnectnotify_isbase = false;
            KBugReport::disconnectNotify(signal);
        } else if (kbugreport_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kbugreport_disconnectnotify_callback(this, cbval1);
        } else {
            KBugReport::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool sendBugReport() {
        if (kbugreport_sendbugreport_isbase) {
            kbugreport_sendbugreport_isbase = false;
            return KBugReport::sendBugReport();
        } else if (kbugreport_sendbugreport_callback != nullptr) {
            bool callback_ret = kbugreport_sendbugreport_callback();
            return callback_ret;
        } else {
            return KBugReport::sendBugReport();
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kbugreport_adjustposition_isbase) {
            kbugreport_adjustposition_isbase = false;
            KBugReport::adjustPosition(param1);
        } else if (kbugreport_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            kbugreport_adjustposition_callback(this, cbval1);
        } else {
            KBugReport::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kbugreport_updatemicrofocus_isbase) {
            kbugreport_updatemicrofocus_isbase = false;
            KBugReport::updateMicroFocus();
        } else if (kbugreport_updatemicrofocus_callback != nullptr) {
            kbugreport_updatemicrofocus_callback();
        } else {
            KBugReport::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kbugreport_create_isbase) {
            kbugreport_create_isbase = false;
            KBugReport::create();
        } else if (kbugreport_create_callback != nullptr) {
            kbugreport_create_callback();
        } else {
            KBugReport::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kbugreport_destroy_isbase) {
            kbugreport_destroy_isbase = false;
            KBugReport::destroy();
        } else if (kbugreport_destroy_callback != nullptr) {
            kbugreport_destroy_callback();
        } else {
            KBugReport::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kbugreport_focusnextchild_isbase) {
            kbugreport_focusnextchild_isbase = false;
            return KBugReport::focusNextChild();
        } else if (kbugreport_focusnextchild_callback != nullptr) {
            bool callback_ret = kbugreport_focusnextchild_callback();
            return callback_ret;
        } else {
            return KBugReport::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kbugreport_focuspreviouschild_isbase) {
            kbugreport_focuspreviouschild_isbase = false;
            return KBugReport::focusPreviousChild();
        } else if (kbugreport_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kbugreport_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KBugReport::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kbugreport_sender_isbase) {
            kbugreport_sender_isbase = false;
            return KBugReport::sender();
        } else if (kbugreport_sender_callback != nullptr) {
            QObject* callback_ret = kbugreport_sender_callback();
            return callback_ret;
        } else {
            return KBugReport::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kbugreport_sendersignalindex_isbase) {
            kbugreport_sendersignalindex_isbase = false;
            return KBugReport::senderSignalIndex();
        } else if (kbugreport_sendersignalindex_callback != nullptr) {
            int callback_ret = kbugreport_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KBugReport::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kbugreport_receivers_isbase) {
            kbugreport_receivers_isbase = false;
            return KBugReport::receivers(signal);
        } else if (kbugreport_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kbugreport_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KBugReport::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kbugreport_issignalconnected_isbase) {
            kbugreport_issignalconnected_isbase = false;
            return KBugReport::isSignalConnected(signal);
        } else if (kbugreport_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kbugreport_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBugReport::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kbugreport_getdecodedmetricf_isbase) {
            kbugreport_getdecodedmetricf_isbase = false;
            return KBugReport::getDecodedMetricF(metricA, metricB);
        } else if (kbugreport_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kbugreport_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KBugReport::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KBugReport_KeyPressEvent(KBugReport* self, QKeyEvent* param1);
    friend void KBugReport_QBaseKeyPressEvent(KBugReport* self, QKeyEvent* param1);
    friend void KBugReport_CloseEvent(KBugReport* self, QCloseEvent* param1);
    friend void KBugReport_QBaseCloseEvent(KBugReport* self, QCloseEvent* param1);
    friend void KBugReport_ShowEvent(KBugReport* self, QShowEvent* param1);
    friend void KBugReport_QBaseShowEvent(KBugReport* self, QShowEvent* param1);
    friend void KBugReport_ResizeEvent(KBugReport* self, QResizeEvent* param1);
    friend void KBugReport_QBaseResizeEvent(KBugReport* self, QResizeEvent* param1);
    friend void KBugReport_ContextMenuEvent(KBugReport* self, QContextMenuEvent* param1);
    friend void KBugReport_QBaseContextMenuEvent(KBugReport* self, QContextMenuEvent* param1);
    friend bool KBugReport_EventFilter(KBugReport* self, QObject* param1, QEvent* param2);
    friend bool KBugReport_QBaseEventFilter(KBugReport* self, QObject* param1, QEvent* param2);
    friend bool KBugReport_Event(KBugReport* self, QEvent* event);
    friend bool KBugReport_QBaseEvent(KBugReport* self, QEvent* event);
    friend void KBugReport_MousePressEvent(KBugReport* self, QMouseEvent* event);
    friend void KBugReport_QBaseMousePressEvent(KBugReport* self, QMouseEvent* event);
    friend void KBugReport_MouseReleaseEvent(KBugReport* self, QMouseEvent* event);
    friend void KBugReport_QBaseMouseReleaseEvent(KBugReport* self, QMouseEvent* event);
    friend void KBugReport_MouseDoubleClickEvent(KBugReport* self, QMouseEvent* event);
    friend void KBugReport_QBaseMouseDoubleClickEvent(KBugReport* self, QMouseEvent* event);
    friend void KBugReport_MouseMoveEvent(KBugReport* self, QMouseEvent* event);
    friend void KBugReport_QBaseMouseMoveEvent(KBugReport* self, QMouseEvent* event);
    friend void KBugReport_WheelEvent(KBugReport* self, QWheelEvent* event);
    friend void KBugReport_QBaseWheelEvent(KBugReport* self, QWheelEvent* event);
    friend void KBugReport_KeyReleaseEvent(KBugReport* self, QKeyEvent* event);
    friend void KBugReport_QBaseKeyReleaseEvent(KBugReport* self, QKeyEvent* event);
    friend void KBugReport_FocusInEvent(KBugReport* self, QFocusEvent* event);
    friend void KBugReport_QBaseFocusInEvent(KBugReport* self, QFocusEvent* event);
    friend void KBugReport_FocusOutEvent(KBugReport* self, QFocusEvent* event);
    friend void KBugReport_QBaseFocusOutEvent(KBugReport* self, QFocusEvent* event);
    friend void KBugReport_EnterEvent(KBugReport* self, QEnterEvent* event);
    friend void KBugReport_QBaseEnterEvent(KBugReport* self, QEnterEvent* event);
    friend void KBugReport_LeaveEvent(KBugReport* self, QEvent* event);
    friend void KBugReport_QBaseLeaveEvent(KBugReport* self, QEvent* event);
    friend void KBugReport_PaintEvent(KBugReport* self, QPaintEvent* event);
    friend void KBugReport_QBasePaintEvent(KBugReport* self, QPaintEvent* event);
    friend void KBugReport_MoveEvent(KBugReport* self, QMoveEvent* event);
    friend void KBugReport_QBaseMoveEvent(KBugReport* self, QMoveEvent* event);
    friend void KBugReport_TabletEvent(KBugReport* self, QTabletEvent* event);
    friend void KBugReport_QBaseTabletEvent(KBugReport* self, QTabletEvent* event);
    friend void KBugReport_ActionEvent(KBugReport* self, QActionEvent* event);
    friend void KBugReport_QBaseActionEvent(KBugReport* self, QActionEvent* event);
    friend void KBugReport_DragEnterEvent(KBugReport* self, QDragEnterEvent* event);
    friend void KBugReport_QBaseDragEnterEvent(KBugReport* self, QDragEnterEvent* event);
    friend void KBugReport_DragMoveEvent(KBugReport* self, QDragMoveEvent* event);
    friend void KBugReport_QBaseDragMoveEvent(KBugReport* self, QDragMoveEvent* event);
    friend void KBugReport_DragLeaveEvent(KBugReport* self, QDragLeaveEvent* event);
    friend void KBugReport_QBaseDragLeaveEvent(KBugReport* self, QDragLeaveEvent* event);
    friend void KBugReport_DropEvent(KBugReport* self, QDropEvent* event);
    friend void KBugReport_QBaseDropEvent(KBugReport* self, QDropEvent* event);
    friend void KBugReport_HideEvent(KBugReport* self, QHideEvent* event);
    friend void KBugReport_QBaseHideEvent(KBugReport* self, QHideEvent* event);
    friend bool KBugReport_NativeEvent(KBugReport* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KBugReport_QBaseNativeEvent(KBugReport* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KBugReport_ChangeEvent(KBugReport* self, QEvent* param1);
    friend void KBugReport_QBaseChangeEvent(KBugReport* self, QEvent* param1);
    friend int KBugReport_Metric(const KBugReport* self, int param1);
    friend int KBugReport_QBaseMetric(const KBugReport* self, int param1);
    friend void KBugReport_InitPainter(const KBugReport* self, QPainter* painter);
    friend void KBugReport_QBaseInitPainter(const KBugReport* self, QPainter* painter);
    friend QPaintDevice* KBugReport_Redirected(const KBugReport* self, QPoint* offset);
    friend QPaintDevice* KBugReport_QBaseRedirected(const KBugReport* self, QPoint* offset);
    friend QPainter* KBugReport_SharedPainter(const KBugReport* self);
    friend QPainter* KBugReport_QBaseSharedPainter(const KBugReport* self);
    friend void KBugReport_InputMethodEvent(KBugReport* self, QInputMethodEvent* param1);
    friend void KBugReport_QBaseInputMethodEvent(KBugReport* self, QInputMethodEvent* param1);
    friend bool KBugReport_FocusNextPrevChild(KBugReport* self, bool next);
    friend bool KBugReport_QBaseFocusNextPrevChild(KBugReport* self, bool next);
    friend void KBugReport_TimerEvent(KBugReport* self, QTimerEvent* event);
    friend void KBugReport_QBaseTimerEvent(KBugReport* self, QTimerEvent* event);
    friend void KBugReport_ChildEvent(KBugReport* self, QChildEvent* event);
    friend void KBugReport_QBaseChildEvent(KBugReport* self, QChildEvent* event);
    friend void KBugReport_CustomEvent(KBugReport* self, QEvent* event);
    friend void KBugReport_QBaseCustomEvent(KBugReport* self, QEvent* event);
    friend void KBugReport_ConnectNotify(KBugReport* self, const QMetaMethod* signal);
    friend void KBugReport_QBaseConnectNotify(KBugReport* self, const QMetaMethod* signal);
    friend void KBugReport_DisconnectNotify(KBugReport* self, const QMetaMethod* signal);
    friend void KBugReport_QBaseDisconnectNotify(KBugReport* self, const QMetaMethod* signal);
    friend bool KBugReport_SendBugReport(KBugReport* self);
    friend bool KBugReport_QBaseSendBugReport(KBugReport* self);
    friend void KBugReport_AdjustPosition(KBugReport* self, QWidget* param1);
    friend void KBugReport_QBaseAdjustPosition(KBugReport* self, QWidget* param1);
    friend void KBugReport_UpdateMicroFocus(KBugReport* self);
    friend void KBugReport_QBaseUpdateMicroFocus(KBugReport* self);
    friend void KBugReport_Create(KBugReport* self);
    friend void KBugReport_QBaseCreate(KBugReport* self);
    friend void KBugReport_Destroy(KBugReport* self);
    friend void KBugReport_QBaseDestroy(KBugReport* self);
    friend bool KBugReport_FocusNextChild(KBugReport* self);
    friend bool KBugReport_QBaseFocusNextChild(KBugReport* self);
    friend bool KBugReport_FocusPreviousChild(KBugReport* self);
    friend bool KBugReport_QBaseFocusPreviousChild(KBugReport* self);
    friend QObject* KBugReport_Sender(const KBugReport* self);
    friend QObject* KBugReport_QBaseSender(const KBugReport* self);
    friend int KBugReport_SenderSignalIndex(const KBugReport* self);
    friend int KBugReport_QBaseSenderSignalIndex(const KBugReport* self);
    friend int KBugReport_Receivers(const KBugReport* self, const char* signal);
    friend int KBugReport_QBaseReceivers(const KBugReport* self, const char* signal);
    friend bool KBugReport_IsSignalConnected(const KBugReport* self, const QMetaMethod* signal);
    friend bool KBugReport_QBaseIsSignalConnected(const KBugReport* self, const QMetaMethod* signal);
    friend double KBugReport_GetDecodedMetricF(const KBugReport* self, int metricA, int metricB);
    friend double KBugReport_QBaseGetDecodedMetricF(const KBugReport* self, int metricA, int metricB);
};

#endif
