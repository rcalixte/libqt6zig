#pragma once
#ifndef SRCC_LIBVIRTUALQERRORMESSAGE_H
#define SRCC_LIBVIRTUALQERRORMESSAGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QErrorMessage so that we can call protected methods
class VirtualQErrorMessage final : public QErrorMessage {

  public:
    // Virtual class boolean flag
    bool isVirtualQErrorMessage = true;

    // Virtual class public types (including callbacks)
    using QErrorMessage_Metacall_Callback = int (*)(QErrorMessage*, int, int, void**);
    using QErrorMessage_Done_Callback = void (*)(QErrorMessage*, int);
    using QErrorMessage_ChangeEvent_Callback = void (*)(QErrorMessage*, QEvent*);
    using QErrorMessage_SetVisible_Callback = void (*)(QErrorMessage*, bool);
    using QErrorMessage_SizeHint_Callback = QSize* (*)();
    using QErrorMessage_MinimumSizeHint_Callback = QSize* (*)();
    using QErrorMessage_Open_Callback = void (*)();
    using QErrorMessage_Exec_Callback = int (*)();
    using QErrorMessage_Accept_Callback = void (*)();
    using QErrorMessage_Reject_Callback = void (*)();
    using QErrorMessage_KeyPressEvent_Callback = void (*)(QErrorMessage*, QKeyEvent*);
    using QErrorMessage_CloseEvent_Callback = void (*)(QErrorMessage*, QCloseEvent*);
    using QErrorMessage_ShowEvent_Callback = void (*)(QErrorMessage*, QShowEvent*);
    using QErrorMessage_ResizeEvent_Callback = void (*)(QErrorMessage*, QResizeEvent*);
    using QErrorMessage_ContextMenuEvent_Callback = void (*)(QErrorMessage*, QContextMenuEvent*);
    using QErrorMessage_EventFilter_Callback = bool (*)(QErrorMessage*, QObject*, QEvent*);
    using QErrorMessage_DevType_Callback = int (*)();
    using QErrorMessage_HeightForWidth_Callback = int (*)(const QErrorMessage*, int);
    using QErrorMessage_HasHeightForWidth_Callback = bool (*)();
    using QErrorMessage_PaintEngine_Callback = QPaintEngine* (*)();
    using QErrorMessage_Event_Callback = bool (*)(QErrorMessage*, QEvent*);
    using QErrorMessage_MousePressEvent_Callback = void (*)(QErrorMessage*, QMouseEvent*);
    using QErrorMessage_MouseReleaseEvent_Callback = void (*)(QErrorMessage*, QMouseEvent*);
    using QErrorMessage_MouseDoubleClickEvent_Callback = void (*)(QErrorMessage*, QMouseEvent*);
    using QErrorMessage_MouseMoveEvent_Callback = void (*)(QErrorMessage*, QMouseEvent*);
    using QErrorMessage_WheelEvent_Callback = void (*)(QErrorMessage*, QWheelEvent*);
    using QErrorMessage_KeyReleaseEvent_Callback = void (*)(QErrorMessage*, QKeyEvent*);
    using QErrorMessage_FocusInEvent_Callback = void (*)(QErrorMessage*, QFocusEvent*);
    using QErrorMessage_FocusOutEvent_Callback = void (*)(QErrorMessage*, QFocusEvent*);
    using QErrorMessage_EnterEvent_Callback = void (*)(QErrorMessage*, QEnterEvent*);
    using QErrorMessage_LeaveEvent_Callback = void (*)(QErrorMessage*, QEvent*);
    using QErrorMessage_PaintEvent_Callback = void (*)(QErrorMessage*, QPaintEvent*);
    using QErrorMessage_MoveEvent_Callback = void (*)(QErrorMessage*, QMoveEvent*);
    using QErrorMessage_TabletEvent_Callback = void (*)(QErrorMessage*, QTabletEvent*);
    using QErrorMessage_ActionEvent_Callback = void (*)(QErrorMessage*, QActionEvent*);
    using QErrorMessage_DragEnterEvent_Callback = void (*)(QErrorMessage*, QDragEnterEvent*);
    using QErrorMessage_DragMoveEvent_Callback = void (*)(QErrorMessage*, QDragMoveEvent*);
    using QErrorMessage_DragLeaveEvent_Callback = void (*)(QErrorMessage*, QDragLeaveEvent*);
    using QErrorMessage_DropEvent_Callback = void (*)(QErrorMessage*, QDropEvent*);
    using QErrorMessage_HideEvent_Callback = void (*)(QErrorMessage*, QHideEvent*);
    using QErrorMessage_NativeEvent_Callback = bool (*)(QErrorMessage*, libqt_string, void*, intptr_t*);
    using QErrorMessage_Metric_Callback = int (*)(const QErrorMessage*, int);
    using QErrorMessage_InitPainter_Callback = void (*)(const QErrorMessage*, QPainter*);
    using QErrorMessage_Redirected_Callback = QPaintDevice* (*)(const QErrorMessage*, QPoint*);
    using QErrorMessage_SharedPainter_Callback = QPainter* (*)();
    using QErrorMessage_InputMethodEvent_Callback = void (*)(QErrorMessage*, QInputMethodEvent*);
    using QErrorMessage_InputMethodQuery_Callback = QVariant* (*)(const QErrorMessage*, int);
    using QErrorMessage_FocusNextPrevChild_Callback = bool (*)(QErrorMessage*, bool);
    using QErrorMessage_TimerEvent_Callback = void (*)(QErrorMessage*, QTimerEvent*);
    using QErrorMessage_ChildEvent_Callback = void (*)(QErrorMessage*, QChildEvent*);
    using QErrorMessage_CustomEvent_Callback = void (*)(QErrorMessage*, QEvent*);
    using QErrorMessage_ConnectNotify_Callback = void (*)(QErrorMessage*, QMetaMethod*);
    using QErrorMessage_DisconnectNotify_Callback = void (*)(QErrorMessage*, QMetaMethod*);
    using QErrorMessage_AdjustPosition_Callback = void (*)(QErrorMessage*, QWidget*);
    using QErrorMessage_UpdateMicroFocus_Callback = void (*)();
    using QErrorMessage_Create_Callback = void (*)();
    using QErrorMessage_Destroy_Callback = void (*)();
    using QErrorMessage_FocusNextChild_Callback = bool (*)();
    using QErrorMessage_FocusPreviousChild_Callback = bool (*)();
    using QErrorMessage_Sender_Callback = QObject* (*)();
    using QErrorMessage_SenderSignalIndex_Callback = int (*)();
    using QErrorMessage_Receivers_Callback = int (*)(const QErrorMessage*, const char*);
    using QErrorMessage_IsSignalConnected_Callback = bool (*)(const QErrorMessage*, QMetaMethod*);

  protected:
    // Instance callback storage
    QErrorMessage_Metacall_Callback qerrormessage_metacall_callback = nullptr;
    QErrorMessage_Done_Callback qerrormessage_done_callback = nullptr;
    QErrorMessage_ChangeEvent_Callback qerrormessage_changeevent_callback = nullptr;
    QErrorMessage_SetVisible_Callback qerrormessage_setvisible_callback = nullptr;
    QErrorMessage_SizeHint_Callback qerrormessage_sizehint_callback = nullptr;
    QErrorMessage_MinimumSizeHint_Callback qerrormessage_minimumsizehint_callback = nullptr;
    QErrorMessage_Open_Callback qerrormessage_open_callback = nullptr;
    QErrorMessage_Exec_Callback qerrormessage_exec_callback = nullptr;
    QErrorMessage_Accept_Callback qerrormessage_accept_callback = nullptr;
    QErrorMessage_Reject_Callback qerrormessage_reject_callback = nullptr;
    QErrorMessage_KeyPressEvent_Callback qerrormessage_keypressevent_callback = nullptr;
    QErrorMessage_CloseEvent_Callback qerrormessage_closeevent_callback = nullptr;
    QErrorMessage_ShowEvent_Callback qerrormessage_showevent_callback = nullptr;
    QErrorMessage_ResizeEvent_Callback qerrormessage_resizeevent_callback = nullptr;
    QErrorMessage_ContextMenuEvent_Callback qerrormessage_contextmenuevent_callback = nullptr;
    QErrorMessage_EventFilter_Callback qerrormessage_eventfilter_callback = nullptr;
    QErrorMessage_DevType_Callback qerrormessage_devtype_callback = nullptr;
    QErrorMessage_HeightForWidth_Callback qerrormessage_heightforwidth_callback = nullptr;
    QErrorMessage_HasHeightForWidth_Callback qerrormessage_hasheightforwidth_callback = nullptr;
    QErrorMessage_PaintEngine_Callback qerrormessage_paintengine_callback = nullptr;
    QErrorMessage_Event_Callback qerrormessage_event_callback = nullptr;
    QErrorMessage_MousePressEvent_Callback qerrormessage_mousepressevent_callback = nullptr;
    QErrorMessage_MouseReleaseEvent_Callback qerrormessage_mousereleaseevent_callback = nullptr;
    QErrorMessage_MouseDoubleClickEvent_Callback qerrormessage_mousedoubleclickevent_callback = nullptr;
    QErrorMessage_MouseMoveEvent_Callback qerrormessage_mousemoveevent_callback = nullptr;
    QErrorMessage_WheelEvent_Callback qerrormessage_wheelevent_callback = nullptr;
    QErrorMessage_KeyReleaseEvent_Callback qerrormessage_keyreleaseevent_callback = nullptr;
    QErrorMessage_FocusInEvent_Callback qerrormessage_focusinevent_callback = nullptr;
    QErrorMessage_FocusOutEvent_Callback qerrormessage_focusoutevent_callback = nullptr;
    QErrorMessage_EnterEvent_Callback qerrormessage_enterevent_callback = nullptr;
    QErrorMessage_LeaveEvent_Callback qerrormessage_leaveevent_callback = nullptr;
    QErrorMessage_PaintEvent_Callback qerrormessage_paintevent_callback = nullptr;
    QErrorMessage_MoveEvent_Callback qerrormessage_moveevent_callback = nullptr;
    QErrorMessage_TabletEvent_Callback qerrormessage_tabletevent_callback = nullptr;
    QErrorMessage_ActionEvent_Callback qerrormessage_actionevent_callback = nullptr;
    QErrorMessage_DragEnterEvent_Callback qerrormessage_dragenterevent_callback = nullptr;
    QErrorMessage_DragMoveEvent_Callback qerrormessage_dragmoveevent_callback = nullptr;
    QErrorMessage_DragLeaveEvent_Callback qerrormessage_dragleaveevent_callback = nullptr;
    QErrorMessage_DropEvent_Callback qerrormessage_dropevent_callback = nullptr;
    QErrorMessage_HideEvent_Callback qerrormessage_hideevent_callback = nullptr;
    QErrorMessage_NativeEvent_Callback qerrormessage_nativeevent_callback = nullptr;
    QErrorMessage_Metric_Callback qerrormessage_metric_callback = nullptr;
    QErrorMessage_InitPainter_Callback qerrormessage_initpainter_callback = nullptr;
    QErrorMessage_Redirected_Callback qerrormessage_redirected_callback = nullptr;
    QErrorMessage_SharedPainter_Callback qerrormessage_sharedpainter_callback = nullptr;
    QErrorMessage_InputMethodEvent_Callback qerrormessage_inputmethodevent_callback = nullptr;
    QErrorMessage_InputMethodQuery_Callback qerrormessage_inputmethodquery_callback = nullptr;
    QErrorMessage_FocusNextPrevChild_Callback qerrormessage_focusnextprevchild_callback = nullptr;
    QErrorMessage_TimerEvent_Callback qerrormessage_timerevent_callback = nullptr;
    QErrorMessage_ChildEvent_Callback qerrormessage_childevent_callback = nullptr;
    QErrorMessage_CustomEvent_Callback qerrormessage_customevent_callback = nullptr;
    QErrorMessage_ConnectNotify_Callback qerrormessage_connectnotify_callback = nullptr;
    QErrorMessage_DisconnectNotify_Callback qerrormessage_disconnectnotify_callback = nullptr;
    QErrorMessage_AdjustPosition_Callback qerrormessage_adjustposition_callback = nullptr;
    QErrorMessage_UpdateMicroFocus_Callback qerrormessage_updatemicrofocus_callback = nullptr;
    QErrorMessage_Create_Callback qerrormessage_create_callback = nullptr;
    QErrorMessage_Destroy_Callback qerrormessage_destroy_callback = nullptr;
    QErrorMessage_FocusNextChild_Callback qerrormessage_focusnextchild_callback = nullptr;
    QErrorMessage_FocusPreviousChild_Callback qerrormessage_focuspreviouschild_callback = nullptr;
    QErrorMessage_Sender_Callback qerrormessage_sender_callback = nullptr;
    QErrorMessage_SenderSignalIndex_Callback qerrormessage_sendersignalindex_callback = nullptr;
    QErrorMessage_Receivers_Callback qerrormessage_receivers_callback = nullptr;
    QErrorMessage_IsSignalConnected_Callback qerrormessage_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qerrormessage_metacall_isbase = false;
    mutable bool qerrormessage_done_isbase = false;
    mutable bool qerrormessage_changeevent_isbase = false;
    mutable bool qerrormessage_setvisible_isbase = false;
    mutable bool qerrormessage_sizehint_isbase = false;
    mutable bool qerrormessage_minimumsizehint_isbase = false;
    mutable bool qerrormessage_open_isbase = false;
    mutable bool qerrormessage_exec_isbase = false;
    mutable bool qerrormessage_accept_isbase = false;
    mutable bool qerrormessage_reject_isbase = false;
    mutable bool qerrormessage_keypressevent_isbase = false;
    mutable bool qerrormessage_closeevent_isbase = false;
    mutable bool qerrormessage_showevent_isbase = false;
    mutable bool qerrormessage_resizeevent_isbase = false;
    mutable bool qerrormessage_contextmenuevent_isbase = false;
    mutable bool qerrormessage_eventfilter_isbase = false;
    mutable bool qerrormessage_devtype_isbase = false;
    mutable bool qerrormessage_heightforwidth_isbase = false;
    mutable bool qerrormessage_hasheightforwidth_isbase = false;
    mutable bool qerrormessage_paintengine_isbase = false;
    mutable bool qerrormessage_event_isbase = false;
    mutable bool qerrormessage_mousepressevent_isbase = false;
    mutable bool qerrormessage_mousereleaseevent_isbase = false;
    mutable bool qerrormessage_mousedoubleclickevent_isbase = false;
    mutable bool qerrormessage_mousemoveevent_isbase = false;
    mutable bool qerrormessage_wheelevent_isbase = false;
    mutable bool qerrormessage_keyreleaseevent_isbase = false;
    mutable bool qerrormessage_focusinevent_isbase = false;
    mutable bool qerrormessage_focusoutevent_isbase = false;
    mutable bool qerrormessage_enterevent_isbase = false;
    mutable bool qerrormessage_leaveevent_isbase = false;
    mutable bool qerrormessage_paintevent_isbase = false;
    mutable bool qerrormessage_moveevent_isbase = false;
    mutable bool qerrormessage_tabletevent_isbase = false;
    mutable bool qerrormessage_actionevent_isbase = false;
    mutable bool qerrormessage_dragenterevent_isbase = false;
    mutable bool qerrormessage_dragmoveevent_isbase = false;
    mutable bool qerrormessage_dragleaveevent_isbase = false;
    mutable bool qerrormessage_dropevent_isbase = false;
    mutable bool qerrormessage_hideevent_isbase = false;
    mutable bool qerrormessage_nativeevent_isbase = false;
    mutable bool qerrormessage_metric_isbase = false;
    mutable bool qerrormessage_initpainter_isbase = false;
    mutable bool qerrormessage_redirected_isbase = false;
    mutable bool qerrormessage_sharedpainter_isbase = false;
    mutable bool qerrormessage_inputmethodevent_isbase = false;
    mutable bool qerrormessage_inputmethodquery_isbase = false;
    mutable bool qerrormessage_focusnextprevchild_isbase = false;
    mutable bool qerrormessage_timerevent_isbase = false;
    mutable bool qerrormessage_childevent_isbase = false;
    mutable bool qerrormessage_customevent_isbase = false;
    mutable bool qerrormessage_connectnotify_isbase = false;
    mutable bool qerrormessage_disconnectnotify_isbase = false;
    mutable bool qerrormessage_adjustposition_isbase = false;
    mutable bool qerrormessage_updatemicrofocus_isbase = false;
    mutable bool qerrormessage_create_isbase = false;
    mutable bool qerrormessage_destroy_isbase = false;
    mutable bool qerrormessage_focusnextchild_isbase = false;
    mutable bool qerrormessage_focuspreviouschild_isbase = false;
    mutable bool qerrormessage_sender_isbase = false;
    mutable bool qerrormessage_sendersignalindex_isbase = false;
    mutable bool qerrormessage_receivers_isbase = false;
    mutable bool qerrormessage_issignalconnected_isbase = false;

  public:
    VirtualQErrorMessage(QWidget* parent) : QErrorMessage(parent){};
    VirtualQErrorMessage() : QErrorMessage(){};

    ~VirtualQErrorMessage() {
        qerrormessage_metacall_callback = nullptr;
        qerrormessage_done_callback = nullptr;
        qerrormessage_changeevent_callback = nullptr;
        qerrormessage_setvisible_callback = nullptr;
        qerrormessage_sizehint_callback = nullptr;
        qerrormessage_minimumsizehint_callback = nullptr;
        qerrormessage_open_callback = nullptr;
        qerrormessage_exec_callback = nullptr;
        qerrormessage_accept_callback = nullptr;
        qerrormessage_reject_callback = nullptr;
        qerrormessage_keypressevent_callback = nullptr;
        qerrormessage_closeevent_callback = nullptr;
        qerrormessage_showevent_callback = nullptr;
        qerrormessage_resizeevent_callback = nullptr;
        qerrormessage_contextmenuevent_callback = nullptr;
        qerrormessage_eventfilter_callback = nullptr;
        qerrormessage_devtype_callback = nullptr;
        qerrormessage_heightforwidth_callback = nullptr;
        qerrormessage_hasheightforwidth_callback = nullptr;
        qerrormessage_paintengine_callback = nullptr;
        qerrormessage_event_callback = nullptr;
        qerrormessage_mousepressevent_callback = nullptr;
        qerrormessage_mousereleaseevent_callback = nullptr;
        qerrormessage_mousedoubleclickevent_callback = nullptr;
        qerrormessage_mousemoveevent_callback = nullptr;
        qerrormessage_wheelevent_callback = nullptr;
        qerrormessage_keyreleaseevent_callback = nullptr;
        qerrormessage_focusinevent_callback = nullptr;
        qerrormessage_focusoutevent_callback = nullptr;
        qerrormessage_enterevent_callback = nullptr;
        qerrormessage_leaveevent_callback = nullptr;
        qerrormessage_paintevent_callback = nullptr;
        qerrormessage_moveevent_callback = nullptr;
        qerrormessage_tabletevent_callback = nullptr;
        qerrormessage_actionevent_callback = nullptr;
        qerrormessage_dragenterevent_callback = nullptr;
        qerrormessage_dragmoveevent_callback = nullptr;
        qerrormessage_dragleaveevent_callback = nullptr;
        qerrormessage_dropevent_callback = nullptr;
        qerrormessage_hideevent_callback = nullptr;
        qerrormessage_nativeevent_callback = nullptr;
        qerrormessage_metric_callback = nullptr;
        qerrormessage_initpainter_callback = nullptr;
        qerrormessage_redirected_callback = nullptr;
        qerrormessage_sharedpainter_callback = nullptr;
        qerrormessage_inputmethodevent_callback = nullptr;
        qerrormessage_inputmethodquery_callback = nullptr;
        qerrormessage_focusnextprevchild_callback = nullptr;
        qerrormessage_timerevent_callback = nullptr;
        qerrormessage_childevent_callback = nullptr;
        qerrormessage_customevent_callback = nullptr;
        qerrormessage_connectnotify_callback = nullptr;
        qerrormessage_disconnectnotify_callback = nullptr;
        qerrormessage_adjustposition_callback = nullptr;
        qerrormessage_updatemicrofocus_callback = nullptr;
        qerrormessage_create_callback = nullptr;
        qerrormessage_destroy_callback = nullptr;
        qerrormessage_focusnextchild_callback = nullptr;
        qerrormessage_focuspreviouschild_callback = nullptr;
        qerrormessage_sender_callback = nullptr;
        qerrormessage_sendersignalindex_callback = nullptr;
        qerrormessage_receivers_callback = nullptr;
        qerrormessage_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQErrorMessage_Metacall_Callback(QErrorMessage_Metacall_Callback cb) { qerrormessage_metacall_callback = cb; }
    inline void setQErrorMessage_Done_Callback(QErrorMessage_Done_Callback cb) { qerrormessage_done_callback = cb; }
    inline void setQErrorMessage_ChangeEvent_Callback(QErrorMessage_ChangeEvent_Callback cb) { qerrormessage_changeevent_callback = cb; }
    inline void setQErrorMessage_SetVisible_Callback(QErrorMessage_SetVisible_Callback cb) { qerrormessage_setvisible_callback = cb; }
    inline void setQErrorMessage_SizeHint_Callback(QErrorMessage_SizeHint_Callback cb) { qerrormessage_sizehint_callback = cb; }
    inline void setQErrorMessage_MinimumSizeHint_Callback(QErrorMessage_MinimumSizeHint_Callback cb) { qerrormessage_minimumsizehint_callback = cb; }
    inline void setQErrorMessage_Open_Callback(QErrorMessage_Open_Callback cb) { qerrormessage_open_callback = cb; }
    inline void setQErrorMessage_Exec_Callback(QErrorMessage_Exec_Callback cb) { qerrormessage_exec_callback = cb; }
    inline void setQErrorMessage_Accept_Callback(QErrorMessage_Accept_Callback cb) { qerrormessage_accept_callback = cb; }
    inline void setQErrorMessage_Reject_Callback(QErrorMessage_Reject_Callback cb) { qerrormessage_reject_callback = cb; }
    inline void setQErrorMessage_KeyPressEvent_Callback(QErrorMessage_KeyPressEvent_Callback cb) { qerrormessage_keypressevent_callback = cb; }
    inline void setQErrorMessage_CloseEvent_Callback(QErrorMessage_CloseEvent_Callback cb) { qerrormessage_closeevent_callback = cb; }
    inline void setQErrorMessage_ShowEvent_Callback(QErrorMessage_ShowEvent_Callback cb) { qerrormessage_showevent_callback = cb; }
    inline void setQErrorMessage_ResizeEvent_Callback(QErrorMessage_ResizeEvent_Callback cb) { qerrormessage_resizeevent_callback = cb; }
    inline void setQErrorMessage_ContextMenuEvent_Callback(QErrorMessage_ContextMenuEvent_Callback cb) { qerrormessage_contextmenuevent_callback = cb; }
    inline void setQErrorMessage_EventFilter_Callback(QErrorMessage_EventFilter_Callback cb) { qerrormessage_eventfilter_callback = cb; }
    inline void setQErrorMessage_DevType_Callback(QErrorMessage_DevType_Callback cb) { qerrormessage_devtype_callback = cb; }
    inline void setQErrorMessage_HeightForWidth_Callback(QErrorMessage_HeightForWidth_Callback cb) { qerrormessage_heightforwidth_callback = cb; }
    inline void setQErrorMessage_HasHeightForWidth_Callback(QErrorMessage_HasHeightForWidth_Callback cb) { qerrormessage_hasheightforwidth_callback = cb; }
    inline void setQErrorMessage_PaintEngine_Callback(QErrorMessage_PaintEngine_Callback cb) { qerrormessage_paintengine_callback = cb; }
    inline void setQErrorMessage_Event_Callback(QErrorMessage_Event_Callback cb) { qerrormessage_event_callback = cb; }
    inline void setQErrorMessage_MousePressEvent_Callback(QErrorMessage_MousePressEvent_Callback cb) { qerrormessage_mousepressevent_callback = cb; }
    inline void setQErrorMessage_MouseReleaseEvent_Callback(QErrorMessage_MouseReleaseEvent_Callback cb) { qerrormessage_mousereleaseevent_callback = cb; }
    inline void setQErrorMessage_MouseDoubleClickEvent_Callback(QErrorMessage_MouseDoubleClickEvent_Callback cb) { qerrormessage_mousedoubleclickevent_callback = cb; }
    inline void setQErrorMessage_MouseMoveEvent_Callback(QErrorMessage_MouseMoveEvent_Callback cb) { qerrormessage_mousemoveevent_callback = cb; }
    inline void setQErrorMessage_WheelEvent_Callback(QErrorMessage_WheelEvent_Callback cb) { qerrormessage_wheelevent_callback = cb; }
    inline void setQErrorMessage_KeyReleaseEvent_Callback(QErrorMessage_KeyReleaseEvent_Callback cb) { qerrormessage_keyreleaseevent_callback = cb; }
    inline void setQErrorMessage_FocusInEvent_Callback(QErrorMessage_FocusInEvent_Callback cb) { qerrormessage_focusinevent_callback = cb; }
    inline void setQErrorMessage_FocusOutEvent_Callback(QErrorMessage_FocusOutEvent_Callback cb) { qerrormessage_focusoutevent_callback = cb; }
    inline void setQErrorMessage_EnterEvent_Callback(QErrorMessage_EnterEvent_Callback cb) { qerrormessage_enterevent_callback = cb; }
    inline void setQErrorMessage_LeaveEvent_Callback(QErrorMessage_LeaveEvent_Callback cb) { qerrormessage_leaveevent_callback = cb; }
    inline void setQErrorMessage_PaintEvent_Callback(QErrorMessage_PaintEvent_Callback cb) { qerrormessage_paintevent_callback = cb; }
    inline void setQErrorMessage_MoveEvent_Callback(QErrorMessage_MoveEvent_Callback cb) { qerrormessage_moveevent_callback = cb; }
    inline void setQErrorMessage_TabletEvent_Callback(QErrorMessage_TabletEvent_Callback cb) { qerrormessage_tabletevent_callback = cb; }
    inline void setQErrorMessage_ActionEvent_Callback(QErrorMessage_ActionEvent_Callback cb) { qerrormessage_actionevent_callback = cb; }
    inline void setQErrorMessage_DragEnterEvent_Callback(QErrorMessage_DragEnterEvent_Callback cb) { qerrormessage_dragenterevent_callback = cb; }
    inline void setQErrorMessage_DragMoveEvent_Callback(QErrorMessage_DragMoveEvent_Callback cb) { qerrormessage_dragmoveevent_callback = cb; }
    inline void setQErrorMessage_DragLeaveEvent_Callback(QErrorMessage_DragLeaveEvent_Callback cb) { qerrormessage_dragleaveevent_callback = cb; }
    inline void setQErrorMessage_DropEvent_Callback(QErrorMessage_DropEvent_Callback cb) { qerrormessage_dropevent_callback = cb; }
    inline void setQErrorMessage_HideEvent_Callback(QErrorMessage_HideEvent_Callback cb) { qerrormessage_hideevent_callback = cb; }
    inline void setQErrorMessage_NativeEvent_Callback(QErrorMessage_NativeEvent_Callback cb) { qerrormessage_nativeevent_callback = cb; }
    inline void setQErrorMessage_Metric_Callback(QErrorMessage_Metric_Callback cb) { qerrormessage_metric_callback = cb; }
    inline void setQErrorMessage_InitPainter_Callback(QErrorMessage_InitPainter_Callback cb) { qerrormessage_initpainter_callback = cb; }
    inline void setQErrorMessage_Redirected_Callback(QErrorMessage_Redirected_Callback cb) { qerrormessage_redirected_callback = cb; }
    inline void setQErrorMessage_SharedPainter_Callback(QErrorMessage_SharedPainter_Callback cb) { qerrormessage_sharedpainter_callback = cb; }
    inline void setQErrorMessage_InputMethodEvent_Callback(QErrorMessage_InputMethodEvent_Callback cb) { qerrormessage_inputmethodevent_callback = cb; }
    inline void setQErrorMessage_InputMethodQuery_Callback(QErrorMessage_InputMethodQuery_Callback cb) { qerrormessage_inputmethodquery_callback = cb; }
    inline void setQErrorMessage_FocusNextPrevChild_Callback(QErrorMessage_FocusNextPrevChild_Callback cb) { qerrormessage_focusnextprevchild_callback = cb; }
    inline void setQErrorMessage_TimerEvent_Callback(QErrorMessage_TimerEvent_Callback cb) { qerrormessage_timerevent_callback = cb; }
    inline void setQErrorMessage_ChildEvent_Callback(QErrorMessage_ChildEvent_Callback cb) { qerrormessage_childevent_callback = cb; }
    inline void setQErrorMessage_CustomEvent_Callback(QErrorMessage_CustomEvent_Callback cb) { qerrormessage_customevent_callback = cb; }
    inline void setQErrorMessage_ConnectNotify_Callback(QErrorMessage_ConnectNotify_Callback cb) { qerrormessage_connectnotify_callback = cb; }
    inline void setQErrorMessage_DisconnectNotify_Callback(QErrorMessage_DisconnectNotify_Callback cb) { qerrormessage_disconnectnotify_callback = cb; }
    inline void setQErrorMessage_AdjustPosition_Callback(QErrorMessage_AdjustPosition_Callback cb) { qerrormessage_adjustposition_callback = cb; }
    inline void setQErrorMessage_UpdateMicroFocus_Callback(QErrorMessage_UpdateMicroFocus_Callback cb) { qerrormessage_updatemicrofocus_callback = cb; }
    inline void setQErrorMessage_Create_Callback(QErrorMessage_Create_Callback cb) { qerrormessage_create_callback = cb; }
    inline void setQErrorMessage_Destroy_Callback(QErrorMessage_Destroy_Callback cb) { qerrormessage_destroy_callback = cb; }
    inline void setQErrorMessage_FocusNextChild_Callback(QErrorMessage_FocusNextChild_Callback cb) { qerrormessage_focusnextchild_callback = cb; }
    inline void setQErrorMessage_FocusPreviousChild_Callback(QErrorMessage_FocusPreviousChild_Callback cb) { qerrormessage_focuspreviouschild_callback = cb; }
    inline void setQErrorMessage_Sender_Callback(QErrorMessage_Sender_Callback cb) { qerrormessage_sender_callback = cb; }
    inline void setQErrorMessage_SenderSignalIndex_Callback(QErrorMessage_SenderSignalIndex_Callback cb) { qerrormessage_sendersignalindex_callback = cb; }
    inline void setQErrorMessage_Receivers_Callback(QErrorMessage_Receivers_Callback cb) { qerrormessage_receivers_callback = cb; }
    inline void setQErrorMessage_IsSignalConnected_Callback(QErrorMessage_IsSignalConnected_Callback cb) { qerrormessage_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQErrorMessage_Metacall_IsBase(bool value) const { qerrormessage_metacall_isbase = value; }
    inline void setQErrorMessage_Done_IsBase(bool value) const { qerrormessage_done_isbase = value; }
    inline void setQErrorMessage_ChangeEvent_IsBase(bool value) const { qerrormessage_changeevent_isbase = value; }
    inline void setQErrorMessage_SetVisible_IsBase(bool value) const { qerrormessage_setvisible_isbase = value; }
    inline void setQErrorMessage_SizeHint_IsBase(bool value) const { qerrormessage_sizehint_isbase = value; }
    inline void setQErrorMessage_MinimumSizeHint_IsBase(bool value) const { qerrormessage_minimumsizehint_isbase = value; }
    inline void setQErrorMessage_Open_IsBase(bool value) const { qerrormessage_open_isbase = value; }
    inline void setQErrorMessage_Exec_IsBase(bool value) const { qerrormessage_exec_isbase = value; }
    inline void setQErrorMessage_Accept_IsBase(bool value) const { qerrormessage_accept_isbase = value; }
    inline void setQErrorMessage_Reject_IsBase(bool value) const { qerrormessage_reject_isbase = value; }
    inline void setQErrorMessage_KeyPressEvent_IsBase(bool value) const { qerrormessage_keypressevent_isbase = value; }
    inline void setQErrorMessage_CloseEvent_IsBase(bool value) const { qerrormessage_closeevent_isbase = value; }
    inline void setQErrorMessage_ShowEvent_IsBase(bool value) const { qerrormessage_showevent_isbase = value; }
    inline void setQErrorMessage_ResizeEvent_IsBase(bool value) const { qerrormessage_resizeevent_isbase = value; }
    inline void setQErrorMessage_ContextMenuEvent_IsBase(bool value) const { qerrormessage_contextmenuevent_isbase = value; }
    inline void setQErrorMessage_EventFilter_IsBase(bool value) const { qerrormessage_eventfilter_isbase = value; }
    inline void setQErrorMessage_DevType_IsBase(bool value) const { qerrormessage_devtype_isbase = value; }
    inline void setQErrorMessage_HeightForWidth_IsBase(bool value) const { qerrormessage_heightforwidth_isbase = value; }
    inline void setQErrorMessage_HasHeightForWidth_IsBase(bool value) const { qerrormessage_hasheightforwidth_isbase = value; }
    inline void setQErrorMessage_PaintEngine_IsBase(bool value) const { qerrormessage_paintengine_isbase = value; }
    inline void setQErrorMessage_Event_IsBase(bool value) const { qerrormessage_event_isbase = value; }
    inline void setQErrorMessage_MousePressEvent_IsBase(bool value) const { qerrormessage_mousepressevent_isbase = value; }
    inline void setQErrorMessage_MouseReleaseEvent_IsBase(bool value) const { qerrormessage_mousereleaseevent_isbase = value; }
    inline void setQErrorMessage_MouseDoubleClickEvent_IsBase(bool value) const { qerrormessage_mousedoubleclickevent_isbase = value; }
    inline void setQErrorMessage_MouseMoveEvent_IsBase(bool value) const { qerrormessage_mousemoveevent_isbase = value; }
    inline void setQErrorMessage_WheelEvent_IsBase(bool value) const { qerrormessage_wheelevent_isbase = value; }
    inline void setQErrorMessage_KeyReleaseEvent_IsBase(bool value) const { qerrormessage_keyreleaseevent_isbase = value; }
    inline void setQErrorMessage_FocusInEvent_IsBase(bool value) const { qerrormessage_focusinevent_isbase = value; }
    inline void setQErrorMessage_FocusOutEvent_IsBase(bool value) const { qerrormessage_focusoutevent_isbase = value; }
    inline void setQErrorMessage_EnterEvent_IsBase(bool value) const { qerrormessage_enterevent_isbase = value; }
    inline void setQErrorMessage_LeaveEvent_IsBase(bool value) const { qerrormessage_leaveevent_isbase = value; }
    inline void setQErrorMessage_PaintEvent_IsBase(bool value) const { qerrormessage_paintevent_isbase = value; }
    inline void setQErrorMessage_MoveEvent_IsBase(bool value) const { qerrormessage_moveevent_isbase = value; }
    inline void setQErrorMessage_TabletEvent_IsBase(bool value) const { qerrormessage_tabletevent_isbase = value; }
    inline void setQErrorMessage_ActionEvent_IsBase(bool value) const { qerrormessage_actionevent_isbase = value; }
    inline void setQErrorMessage_DragEnterEvent_IsBase(bool value) const { qerrormessage_dragenterevent_isbase = value; }
    inline void setQErrorMessage_DragMoveEvent_IsBase(bool value) const { qerrormessage_dragmoveevent_isbase = value; }
    inline void setQErrorMessage_DragLeaveEvent_IsBase(bool value) const { qerrormessage_dragleaveevent_isbase = value; }
    inline void setQErrorMessage_DropEvent_IsBase(bool value) const { qerrormessage_dropevent_isbase = value; }
    inline void setQErrorMessage_HideEvent_IsBase(bool value) const { qerrormessage_hideevent_isbase = value; }
    inline void setQErrorMessage_NativeEvent_IsBase(bool value) const { qerrormessage_nativeevent_isbase = value; }
    inline void setQErrorMessage_Metric_IsBase(bool value) const { qerrormessage_metric_isbase = value; }
    inline void setQErrorMessage_InitPainter_IsBase(bool value) const { qerrormessage_initpainter_isbase = value; }
    inline void setQErrorMessage_Redirected_IsBase(bool value) const { qerrormessage_redirected_isbase = value; }
    inline void setQErrorMessage_SharedPainter_IsBase(bool value) const { qerrormessage_sharedpainter_isbase = value; }
    inline void setQErrorMessage_InputMethodEvent_IsBase(bool value) const { qerrormessage_inputmethodevent_isbase = value; }
    inline void setQErrorMessage_InputMethodQuery_IsBase(bool value) const { qerrormessage_inputmethodquery_isbase = value; }
    inline void setQErrorMessage_FocusNextPrevChild_IsBase(bool value) const { qerrormessage_focusnextprevchild_isbase = value; }
    inline void setQErrorMessage_TimerEvent_IsBase(bool value) const { qerrormessage_timerevent_isbase = value; }
    inline void setQErrorMessage_ChildEvent_IsBase(bool value) const { qerrormessage_childevent_isbase = value; }
    inline void setQErrorMessage_CustomEvent_IsBase(bool value) const { qerrormessage_customevent_isbase = value; }
    inline void setQErrorMessage_ConnectNotify_IsBase(bool value) const { qerrormessage_connectnotify_isbase = value; }
    inline void setQErrorMessage_DisconnectNotify_IsBase(bool value) const { qerrormessage_disconnectnotify_isbase = value; }
    inline void setQErrorMessage_AdjustPosition_IsBase(bool value) const { qerrormessage_adjustposition_isbase = value; }
    inline void setQErrorMessage_UpdateMicroFocus_IsBase(bool value) const { qerrormessage_updatemicrofocus_isbase = value; }
    inline void setQErrorMessage_Create_IsBase(bool value) const { qerrormessage_create_isbase = value; }
    inline void setQErrorMessage_Destroy_IsBase(bool value) const { qerrormessage_destroy_isbase = value; }
    inline void setQErrorMessage_FocusNextChild_IsBase(bool value) const { qerrormessage_focusnextchild_isbase = value; }
    inline void setQErrorMessage_FocusPreviousChild_IsBase(bool value) const { qerrormessage_focuspreviouschild_isbase = value; }
    inline void setQErrorMessage_Sender_IsBase(bool value) const { qerrormessage_sender_isbase = value; }
    inline void setQErrorMessage_SenderSignalIndex_IsBase(bool value) const { qerrormessage_sendersignalindex_isbase = value; }
    inline void setQErrorMessage_Receivers_IsBase(bool value) const { qerrormessage_receivers_isbase = value; }
    inline void setQErrorMessage_IsSignalConnected_IsBase(bool value) const { qerrormessage_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qerrormessage_metacall_isbase) {
            qerrormessage_metacall_isbase = false;
            return QErrorMessage::qt_metacall(param1, param2, param3);
        } else if (qerrormessage_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qerrormessage_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QErrorMessage::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (qerrormessage_done_isbase) {
            qerrormessage_done_isbase = false;
            QErrorMessage::done(param1);
        } else if (qerrormessage_done_callback != nullptr) {
            int cbval1 = param1;

            qerrormessage_done_callback(this, cbval1);
        } else {
            QErrorMessage::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qerrormessage_changeevent_isbase) {
            qerrormessage_changeevent_isbase = false;
            QErrorMessage::changeEvent(e);
        } else if (qerrormessage_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            qerrormessage_changeevent_callback(this, cbval1);
        } else {
            QErrorMessage::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qerrormessage_setvisible_isbase) {
            qerrormessage_setvisible_isbase = false;
            QErrorMessage::setVisible(visible);
        } else if (qerrormessage_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qerrormessage_setvisible_callback(this, cbval1);
        } else {
            QErrorMessage::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qerrormessage_sizehint_isbase) {
            qerrormessage_sizehint_isbase = false;
            return QErrorMessage::sizeHint();
        } else if (qerrormessage_sizehint_callback != nullptr) {
            QSize* callback_ret = qerrormessage_sizehint_callback();
            return *callback_ret;
        } else {
            return QErrorMessage::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qerrormessage_minimumsizehint_isbase) {
            qerrormessage_minimumsizehint_isbase = false;
            return QErrorMessage::minimumSizeHint();
        } else if (qerrormessage_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qerrormessage_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QErrorMessage::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qerrormessage_open_isbase) {
            qerrormessage_open_isbase = false;
            QErrorMessage::open();
        } else if (qerrormessage_open_callback != nullptr) {
            qerrormessage_open_callback();
        } else {
            QErrorMessage::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qerrormessage_exec_isbase) {
            qerrormessage_exec_isbase = false;
            return QErrorMessage::exec();
        } else if (qerrormessage_exec_callback != nullptr) {
            int callback_ret = qerrormessage_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QErrorMessage::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qerrormessage_accept_isbase) {
            qerrormessage_accept_isbase = false;
            QErrorMessage::accept();
        } else if (qerrormessage_accept_callback != nullptr) {
            qerrormessage_accept_callback();
        } else {
            QErrorMessage::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qerrormessage_reject_isbase) {
            qerrormessage_reject_isbase = false;
            QErrorMessage::reject();
        } else if (qerrormessage_reject_callback != nullptr) {
            qerrormessage_reject_callback();
        } else {
            QErrorMessage::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qerrormessage_keypressevent_isbase) {
            qerrormessage_keypressevent_isbase = false;
            QErrorMessage::keyPressEvent(param1);
        } else if (qerrormessage_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qerrormessage_keypressevent_callback(this, cbval1);
        } else {
            QErrorMessage::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qerrormessage_closeevent_isbase) {
            qerrormessage_closeevent_isbase = false;
            QErrorMessage::closeEvent(param1);
        } else if (qerrormessage_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            qerrormessage_closeevent_callback(this, cbval1);
        } else {
            QErrorMessage::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qerrormessage_showevent_isbase) {
            qerrormessage_showevent_isbase = false;
            QErrorMessage::showEvent(param1);
        } else if (qerrormessage_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            qerrormessage_showevent_callback(this, cbval1);
        } else {
            QErrorMessage::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qerrormessage_resizeevent_isbase) {
            qerrormessage_resizeevent_isbase = false;
            QErrorMessage::resizeEvent(param1);
        } else if (qerrormessage_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            qerrormessage_resizeevent_callback(this, cbval1);
        } else {
            QErrorMessage::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qerrormessage_contextmenuevent_isbase) {
            qerrormessage_contextmenuevent_isbase = false;
            QErrorMessage::contextMenuEvent(param1);
        } else if (qerrormessage_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            qerrormessage_contextmenuevent_callback(this, cbval1);
        } else {
            QErrorMessage::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qerrormessage_eventfilter_isbase) {
            qerrormessage_eventfilter_isbase = false;
            return QErrorMessage::eventFilter(param1, param2);
        } else if (qerrormessage_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = qerrormessage_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QErrorMessage::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qerrormessage_devtype_isbase) {
            qerrormessage_devtype_isbase = false;
            return QErrorMessage::devType();
        } else if (qerrormessage_devtype_callback != nullptr) {
            int callback_ret = qerrormessage_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QErrorMessage::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qerrormessage_heightforwidth_isbase) {
            qerrormessage_heightforwidth_isbase = false;
            return QErrorMessage::heightForWidth(param1);
        } else if (qerrormessage_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qerrormessage_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QErrorMessage::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qerrormessage_hasheightforwidth_isbase) {
            qerrormessage_hasheightforwidth_isbase = false;
            return QErrorMessage::hasHeightForWidth();
        } else if (qerrormessage_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qerrormessage_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QErrorMessage::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qerrormessage_paintengine_isbase) {
            qerrormessage_paintengine_isbase = false;
            return QErrorMessage::paintEngine();
        } else if (qerrormessage_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qerrormessage_paintengine_callback();
            return callback_ret;
        } else {
            return QErrorMessage::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qerrormessage_event_isbase) {
            qerrormessage_event_isbase = false;
            return QErrorMessage::event(event);
        } else if (qerrormessage_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qerrormessage_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QErrorMessage::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qerrormessage_mousepressevent_isbase) {
            qerrormessage_mousepressevent_isbase = false;
            QErrorMessage::mousePressEvent(event);
        } else if (qerrormessage_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qerrormessage_mousepressevent_callback(this, cbval1);
        } else {
            QErrorMessage::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qerrormessage_mousereleaseevent_isbase) {
            qerrormessage_mousereleaseevent_isbase = false;
            QErrorMessage::mouseReleaseEvent(event);
        } else if (qerrormessage_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qerrormessage_mousereleaseevent_callback(this, cbval1);
        } else {
            QErrorMessage::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qerrormessage_mousedoubleclickevent_isbase) {
            qerrormessage_mousedoubleclickevent_isbase = false;
            QErrorMessage::mouseDoubleClickEvent(event);
        } else if (qerrormessage_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qerrormessage_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QErrorMessage::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qerrormessage_mousemoveevent_isbase) {
            qerrormessage_mousemoveevent_isbase = false;
            QErrorMessage::mouseMoveEvent(event);
        } else if (qerrormessage_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qerrormessage_mousemoveevent_callback(this, cbval1);
        } else {
            QErrorMessage::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qerrormessage_wheelevent_isbase) {
            qerrormessage_wheelevent_isbase = false;
            QErrorMessage::wheelEvent(event);
        } else if (qerrormessage_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qerrormessage_wheelevent_callback(this, cbval1);
        } else {
            QErrorMessage::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qerrormessage_keyreleaseevent_isbase) {
            qerrormessage_keyreleaseevent_isbase = false;
            QErrorMessage::keyReleaseEvent(event);
        } else if (qerrormessage_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qerrormessage_keyreleaseevent_callback(this, cbval1);
        } else {
            QErrorMessage::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qerrormessage_focusinevent_isbase) {
            qerrormessage_focusinevent_isbase = false;
            QErrorMessage::focusInEvent(event);
        } else if (qerrormessage_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qerrormessage_focusinevent_callback(this, cbval1);
        } else {
            QErrorMessage::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qerrormessage_focusoutevent_isbase) {
            qerrormessage_focusoutevent_isbase = false;
            QErrorMessage::focusOutEvent(event);
        } else if (qerrormessage_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qerrormessage_focusoutevent_callback(this, cbval1);
        } else {
            QErrorMessage::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qerrormessage_enterevent_isbase) {
            qerrormessage_enterevent_isbase = false;
            QErrorMessage::enterEvent(event);
        } else if (qerrormessage_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qerrormessage_enterevent_callback(this, cbval1);
        } else {
            QErrorMessage::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qerrormessage_leaveevent_isbase) {
            qerrormessage_leaveevent_isbase = false;
            QErrorMessage::leaveEvent(event);
        } else if (qerrormessage_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qerrormessage_leaveevent_callback(this, cbval1);
        } else {
            QErrorMessage::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qerrormessage_paintevent_isbase) {
            qerrormessage_paintevent_isbase = false;
            QErrorMessage::paintEvent(event);
        } else if (qerrormessage_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qerrormessage_paintevent_callback(this, cbval1);
        } else {
            QErrorMessage::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qerrormessage_moveevent_isbase) {
            qerrormessage_moveevent_isbase = false;
            QErrorMessage::moveEvent(event);
        } else if (qerrormessage_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qerrormessage_moveevent_callback(this, cbval1);
        } else {
            QErrorMessage::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qerrormessage_tabletevent_isbase) {
            qerrormessage_tabletevent_isbase = false;
            QErrorMessage::tabletEvent(event);
        } else if (qerrormessage_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qerrormessage_tabletevent_callback(this, cbval1);
        } else {
            QErrorMessage::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qerrormessage_actionevent_isbase) {
            qerrormessage_actionevent_isbase = false;
            QErrorMessage::actionEvent(event);
        } else if (qerrormessage_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qerrormessage_actionevent_callback(this, cbval1);
        } else {
            QErrorMessage::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qerrormessage_dragenterevent_isbase) {
            qerrormessage_dragenterevent_isbase = false;
            QErrorMessage::dragEnterEvent(event);
        } else if (qerrormessage_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qerrormessage_dragenterevent_callback(this, cbval1);
        } else {
            QErrorMessage::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qerrormessage_dragmoveevent_isbase) {
            qerrormessage_dragmoveevent_isbase = false;
            QErrorMessage::dragMoveEvent(event);
        } else if (qerrormessage_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qerrormessage_dragmoveevent_callback(this, cbval1);
        } else {
            QErrorMessage::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qerrormessage_dragleaveevent_isbase) {
            qerrormessage_dragleaveevent_isbase = false;
            QErrorMessage::dragLeaveEvent(event);
        } else if (qerrormessage_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qerrormessage_dragleaveevent_callback(this, cbval1);
        } else {
            QErrorMessage::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qerrormessage_dropevent_isbase) {
            qerrormessage_dropevent_isbase = false;
            QErrorMessage::dropEvent(event);
        } else if (qerrormessage_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qerrormessage_dropevent_callback(this, cbval1);
        } else {
            QErrorMessage::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qerrormessage_hideevent_isbase) {
            qerrormessage_hideevent_isbase = false;
            QErrorMessage::hideEvent(event);
        } else if (qerrormessage_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qerrormessage_hideevent_callback(this, cbval1);
        } else {
            QErrorMessage::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qerrormessage_nativeevent_isbase) {
            qerrormessage_nativeevent_isbase = false;
            return QErrorMessage::nativeEvent(eventType, message, result);
        } else if (qerrormessage_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc((eventType_str.len + 1) * sizeof(char)));
            memcpy(eventType_str.data, eventType_qb.data(), eventType_str.len);
            eventType_str.data[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qerrormessage_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QErrorMessage::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qerrormessage_metric_isbase) {
            qerrormessage_metric_isbase = false;
            return QErrorMessage::metric(param1);
        } else if (qerrormessage_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qerrormessage_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QErrorMessage::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qerrormessage_initpainter_isbase) {
            qerrormessage_initpainter_isbase = false;
            QErrorMessage::initPainter(painter);
        } else if (qerrormessage_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qerrormessage_initpainter_callback(this, cbval1);
        } else {
            QErrorMessage::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qerrormessage_redirected_isbase) {
            qerrormessage_redirected_isbase = false;
            return QErrorMessage::redirected(offset);
        } else if (qerrormessage_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qerrormessage_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QErrorMessage::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qerrormessage_sharedpainter_isbase) {
            qerrormessage_sharedpainter_isbase = false;
            return QErrorMessage::sharedPainter();
        } else if (qerrormessage_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qerrormessage_sharedpainter_callback();
            return callback_ret;
        } else {
            return QErrorMessage::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qerrormessage_inputmethodevent_isbase) {
            qerrormessage_inputmethodevent_isbase = false;
            QErrorMessage::inputMethodEvent(param1);
        } else if (qerrormessage_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qerrormessage_inputmethodevent_callback(this, cbval1);
        } else {
            QErrorMessage::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qerrormessage_inputmethodquery_isbase) {
            qerrormessage_inputmethodquery_isbase = false;
            return QErrorMessage::inputMethodQuery(param1);
        } else if (qerrormessage_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qerrormessage_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QErrorMessage::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qerrormessage_focusnextprevchild_isbase) {
            qerrormessage_focusnextprevchild_isbase = false;
            return QErrorMessage::focusNextPrevChild(next);
        } else if (qerrormessage_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qerrormessage_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QErrorMessage::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qerrormessage_timerevent_isbase) {
            qerrormessage_timerevent_isbase = false;
            QErrorMessage::timerEvent(event);
        } else if (qerrormessage_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qerrormessage_timerevent_callback(this, cbval1);
        } else {
            QErrorMessage::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qerrormessage_childevent_isbase) {
            qerrormessage_childevent_isbase = false;
            QErrorMessage::childEvent(event);
        } else if (qerrormessage_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qerrormessage_childevent_callback(this, cbval1);
        } else {
            QErrorMessage::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qerrormessage_customevent_isbase) {
            qerrormessage_customevent_isbase = false;
            QErrorMessage::customEvent(event);
        } else if (qerrormessage_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qerrormessage_customevent_callback(this, cbval1);
        } else {
            QErrorMessage::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qerrormessage_connectnotify_isbase) {
            qerrormessage_connectnotify_isbase = false;
            QErrorMessage::connectNotify(signal);
        } else if (qerrormessage_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qerrormessage_connectnotify_callback(this, cbval1);
        } else {
            QErrorMessage::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qerrormessage_disconnectnotify_isbase) {
            qerrormessage_disconnectnotify_isbase = false;
            QErrorMessage::disconnectNotify(signal);
        } else if (qerrormessage_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qerrormessage_disconnectnotify_callback(this, cbval1);
        } else {
            QErrorMessage::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qerrormessage_adjustposition_isbase) {
            qerrormessage_adjustposition_isbase = false;
            QErrorMessage::adjustPosition(param1);
        } else if (qerrormessage_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            qerrormessage_adjustposition_callback(this, cbval1);
        } else {
            QErrorMessage::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qerrormessage_updatemicrofocus_isbase) {
            qerrormessage_updatemicrofocus_isbase = false;
            QErrorMessage::updateMicroFocus();
        } else if (qerrormessage_updatemicrofocus_callback != nullptr) {
            qerrormessage_updatemicrofocus_callback();
        } else {
            QErrorMessage::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qerrormessage_create_isbase) {
            qerrormessage_create_isbase = false;
            QErrorMessage::create();
        } else if (qerrormessage_create_callback != nullptr) {
            qerrormessage_create_callback();
        } else {
            QErrorMessage::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qerrormessage_destroy_isbase) {
            qerrormessage_destroy_isbase = false;
            QErrorMessage::destroy();
        } else if (qerrormessage_destroy_callback != nullptr) {
            qerrormessage_destroy_callback();
        } else {
            QErrorMessage::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qerrormessage_focusnextchild_isbase) {
            qerrormessage_focusnextchild_isbase = false;
            return QErrorMessage::focusNextChild();
        } else if (qerrormessage_focusnextchild_callback != nullptr) {
            bool callback_ret = qerrormessage_focusnextchild_callback();
            return callback_ret;
        } else {
            return QErrorMessage::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qerrormessage_focuspreviouschild_isbase) {
            qerrormessage_focuspreviouschild_isbase = false;
            return QErrorMessage::focusPreviousChild();
        } else if (qerrormessage_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qerrormessage_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QErrorMessage::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qerrormessage_sender_isbase) {
            qerrormessage_sender_isbase = false;
            return QErrorMessage::sender();
        } else if (qerrormessage_sender_callback != nullptr) {
            QObject* callback_ret = qerrormessage_sender_callback();
            return callback_ret;
        } else {
            return QErrorMessage::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qerrormessage_sendersignalindex_isbase) {
            qerrormessage_sendersignalindex_isbase = false;
            return QErrorMessage::senderSignalIndex();
        } else if (qerrormessage_sendersignalindex_callback != nullptr) {
            int callback_ret = qerrormessage_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QErrorMessage::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qerrormessage_receivers_isbase) {
            qerrormessage_receivers_isbase = false;
            return QErrorMessage::receivers(signal);
        } else if (qerrormessage_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qerrormessage_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QErrorMessage::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qerrormessage_issignalconnected_isbase) {
            qerrormessage_issignalconnected_isbase = false;
            return QErrorMessage::isSignalConnected(signal);
        } else if (qerrormessage_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qerrormessage_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QErrorMessage::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QErrorMessage_Done(QErrorMessage* self, int param1);
    friend void QErrorMessage_QBaseDone(QErrorMessage* self, int param1);
    friend void QErrorMessage_ChangeEvent(QErrorMessage* self, QEvent* e);
    friend void QErrorMessage_QBaseChangeEvent(QErrorMessage* self, QEvent* e);
    friend void QErrorMessage_KeyPressEvent(QErrorMessage* self, QKeyEvent* param1);
    friend void QErrorMessage_QBaseKeyPressEvent(QErrorMessage* self, QKeyEvent* param1);
    friend void QErrorMessage_CloseEvent(QErrorMessage* self, QCloseEvent* param1);
    friend void QErrorMessage_QBaseCloseEvent(QErrorMessage* self, QCloseEvent* param1);
    friend void QErrorMessage_ShowEvent(QErrorMessage* self, QShowEvent* param1);
    friend void QErrorMessage_QBaseShowEvent(QErrorMessage* self, QShowEvent* param1);
    friend void QErrorMessage_ResizeEvent(QErrorMessage* self, QResizeEvent* param1);
    friend void QErrorMessage_QBaseResizeEvent(QErrorMessage* self, QResizeEvent* param1);
    friend void QErrorMessage_ContextMenuEvent(QErrorMessage* self, QContextMenuEvent* param1);
    friend void QErrorMessage_QBaseContextMenuEvent(QErrorMessage* self, QContextMenuEvent* param1);
    friend bool QErrorMessage_EventFilter(QErrorMessage* self, QObject* param1, QEvent* param2);
    friend bool QErrorMessage_QBaseEventFilter(QErrorMessage* self, QObject* param1, QEvent* param2);
    friend bool QErrorMessage_Event(QErrorMessage* self, QEvent* event);
    friend bool QErrorMessage_QBaseEvent(QErrorMessage* self, QEvent* event);
    friend void QErrorMessage_MousePressEvent(QErrorMessage* self, QMouseEvent* event);
    friend void QErrorMessage_QBaseMousePressEvent(QErrorMessage* self, QMouseEvent* event);
    friend void QErrorMessage_MouseReleaseEvent(QErrorMessage* self, QMouseEvent* event);
    friend void QErrorMessage_QBaseMouseReleaseEvent(QErrorMessage* self, QMouseEvent* event);
    friend void QErrorMessage_MouseDoubleClickEvent(QErrorMessage* self, QMouseEvent* event);
    friend void QErrorMessage_QBaseMouseDoubleClickEvent(QErrorMessage* self, QMouseEvent* event);
    friend void QErrorMessage_MouseMoveEvent(QErrorMessage* self, QMouseEvent* event);
    friend void QErrorMessage_QBaseMouseMoveEvent(QErrorMessage* self, QMouseEvent* event);
    friend void QErrorMessage_WheelEvent(QErrorMessage* self, QWheelEvent* event);
    friend void QErrorMessage_QBaseWheelEvent(QErrorMessage* self, QWheelEvent* event);
    friend void QErrorMessage_KeyReleaseEvent(QErrorMessage* self, QKeyEvent* event);
    friend void QErrorMessage_QBaseKeyReleaseEvent(QErrorMessage* self, QKeyEvent* event);
    friend void QErrorMessage_FocusInEvent(QErrorMessage* self, QFocusEvent* event);
    friend void QErrorMessage_QBaseFocusInEvent(QErrorMessage* self, QFocusEvent* event);
    friend void QErrorMessage_FocusOutEvent(QErrorMessage* self, QFocusEvent* event);
    friend void QErrorMessage_QBaseFocusOutEvent(QErrorMessage* self, QFocusEvent* event);
    friend void QErrorMessage_EnterEvent(QErrorMessage* self, QEnterEvent* event);
    friend void QErrorMessage_QBaseEnterEvent(QErrorMessage* self, QEnterEvent* event);
    friend void QErrorMessage_LeaveEvent(QErrorMessage* self, QEvent* event);
    friend void QErrorMessage_QBaseLeaveEvent(QErrorMessage* self, QEvent* event);
    friend void QErrorMessage_PaintEvent(QErrorMessage* self, QPaintEvent* event);
    friend void QErrorMessage_QBasePaintEvent(QErrorMessage* self, QPaintEvent* event);
    friend void QErrorMessage_MoveEvent(QErrorMessage* self, QMoveEvent* event);
    friend void QErrorMessage_QBaseMoveEvent(QErrorMessage* self, QMoveEvent* event);
    friend void QErrorMessage_TabletEvent(QErrorMessage* self, QTabletEvent* event);
    friend void QErrorMessage_QBaseTabletEvent(QErrorMessage* self, QTabletEvent* event);
    friend void QErrorMessage_ActionEvent(QErrorMessage* self, QActionEvent* event);
    friend void QErrorMessage_QBaseActionEvent(QErrorMessage* self, QActionEvent* event);
    friend void QErrorMessage_DragEnterEvent(QErrorMessage* self, QDragEnterEvent* event);
    friend void QErrorMessage_QBaseDragEnterEvent(QErrorMessage* self, QDragEnterEvent* event);
    friend void QErrorMessage_DragMoveEvent(QErrorMessage* self, QDragMoveEvent* event);
    friend void QErrorMessage_QBaseDragMoveEvent(QErrorMessage* self, QDragMoveEvent* event);
    friend void QErrorMessage_DragLeaveEvent(QErrorMessage* self, QDragLeaveEvent* event);
    friend void QErrorMessage_QBaseDragLeaveEvent(QErrorMessage* self, QDragLeaveEvent* event);
    friend void QErrorMessage_DropEvent(QErrorMessage* self, QDropEvent* event);
    friend void QErrorMessage_QBaseDropEvent(QErrorMessage* self, QDropEvent* event);
    friend void QErrorMessage_HideEvent(QErrorMessage* self, QHideEvent* event);
    friend void QErrorMessage_QBaseHideEvent(QErrorMessage* self, QHideEvent* event);
    friend bool QErrorMessage_NativeEvent(QErrorMessage* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QErrorMessage_QBaseNativeEvent(QErrorMessage* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QErrorMessage_Metric(const QErrorMessage* self, int param1);
    friend int QErrorMessage_QBaseMetric(const QErrorMessage* self, int param1);
    friend void QErrorMessage_InitPainter(const QErrorMessage* self, QPainter* painter);
    friend void QErrorMessage_QBaseInitPainter(const QErrorMessage* self, QPainter* painter);
    friend QPaintDevice* QErrorMessage_Redirected(const QErrorMessage* self, QPoint* offset);
    friend QPaintDevice* QErrorMessage_QBaseRedirected(const QErrorMessage* self, QPoint* offset);
    friend QPainter* QErrorMessage_SharedPainter(const QErrorMessage* self);
    friend QPainter* QErrorMessage_QBaseSharedPainter(const QErrorMessage* self);
    friend void QErrorMessage_InputMethodEvent(QErrorMessage* self, QInputMethodEvent* param1);
    friend void QErrorMessage_QBaseInputMethodEvent(QErrorMessage* self, QInputMethodEvent* param1);
    friend bool QErrorMessage_FocusNextPrevChild(QErrorMessage* self, bool next);
    friend bool QErrorMessage_QBaseFocusNextPrevChild(QErrorMessage* self, bool next);
    friend void QErrorMessage_TimerEvent(QErrorMessage* self, QTimerEvent* event);
    friend void QErrorMessage_QBaseTimerEvent(QErrorMessage* self, QTimerEvent* event);
    friend void QErrorMessage_ChildEvent(QErrorMessage* self, QChildEvent* event);
    friend void QErrorMessage_QBaseChildEvent(QErrorMessage* self, QChildEvent* event);
    friend void QErrorMessage_CustomEvent(QErrorMessage* self, QEvent* event);
    friend void QErrorMessage_QBaseCustomEvent(QErrorMessage* self, QEvent* event);
    friend void QErrorMessage_ConnectNotify(QErrorMessage* self, const QMetaMethod* signal);
    friend void QErrorMessage_QBaseConnectNotify(QErrorMessage* self, const QMetaMethod* signal);
    friend void QErrorMessage_DisconnectNotify(QErrorMessage* self, const QMetaMethod* signal);
    friend void QErrorMessage_QBaseDisconnectNotify(QErrorMessage* self, const QMetaMethod* signal);
    friend void QErrorMessage_AdjustPosition(QErrorMessage* self, QWidget* param1);
    friend void QErrorMessage_QBaseAdjustPosition(QErrorMessage* self, QWidget* param1);
    friend void QErrorMessage_UpdateMicroFocus(QErrorMessage* self);
    friend void QErrorMessage_QBaseUpdateMicroFocus(QErrorMessage* self);
    friend void QErrorMessage_Create(QErrorMessage* self);
    friend void QErrorMessage_QBaseCreate(QErrorMessage* self);
    friend void QErrorMessage_Destroy(QErrorMessage* self);
    friend void QErrorMessage_QBaseDestroy(QErrorMessage* self);
    friend bool QErrorMessage_FocusNextChild(QErrorMessage* self);
    friend bool QErrorMessage_QBaseFocusNextChild(QErrorMessage* self);
    friend bool QErrorMessage_FocusPreviousChild(QErrorMessage* self);
    friend bool QErrorMessage_QBaseFocusPreviousChild(QErrorMessage* self);
    friend QObject* QErrorMessage_Sender(const QErrorMessage* self);
    friend QObject* QErrorMessage_QBaseSender(const QErrorMessage* self);
    friend int QErrorMessage_SenderSignalIndex(const QErrorMessage* self);
    friend int QErrorMessage_QBaseSenderSignalIndex(const QErrorMessage* self);
    friend int QErrorMessage_Receivers(const QErrorMessage* self, const char* signal);
    friend int QErrorMessage_QBaseReceivers(const QErrorMessage* self, const char* signal);
    friend bool QErrorMessage_IsSignalConnected(const QErrorMessage* self, const QMetaMethod* signal);
    friend bool QErrorMessage_QBaseIsSignalConnected(const QErrorMessage* self, const QMetaMethod* signal);
};

#endif
