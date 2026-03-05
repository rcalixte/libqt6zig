#pragma once
#ifndef SRCC_LIBVIRTUALQERRORMESSAGE_H
#define SRCC_LIBVIRTUALQERRORMESSAGE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QErrorMessage so that we can call protected methods
class VirtualQErrorMessage final : public QErrorMessage {

  public:
    // Virtual class boolean flag
    bool isVirtualQErrorMessage = true;

    // Virtual class public types (including callbacks)
    using QErrorMessage_MetaObject_Callback = QMetaObject* (*)();
    using QErrorMessage_Metacast_Callback = void* (*)(QErrorMessage*, const char*);
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
    using QErrorMessage_GetDecodedMetricF_Callback = double (*)(const QErrorMessage*, int, int);

  protected:
    // Instance callback storage
    QErrorMessage_MetaObject_Callback qerrormessage_metaobject_callback = nullptr;
    QErrorMessage_Metacast_Callback qerrormessage_metacast_callback = nullptr;
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
    QErrorMessage_GetDecodedMetricF_Callback qerrormessage_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qerrormessage_metaobject_isbase = false;
    mutable bool qerrormessage_metacast_isbase = false;
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
    mutable bool qerrormessage_getdecodedmetricf_isbase = false;

  public:
    VirtualQErrorMessage(QWidget* parent) : QErrorMessage(parent) {};
    VirtualQErrorMessage() : QErrorMessage() {};

    // Callback setters
    inline void setQErrorMessage_MetaObject_Callback(QErrorMessage_MetaObject_Callback cb) { qerrormessage_metaobject_callback = cb; }
    inline void setQErrorMessage_Metacast_Callback(QErrorMessage_Metacast_Callback cb) { qerrormessage_metacast_callback = cb; }
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
    inline void setQErrorMessage_GetDecodedMetricF_Callback(QErrorMessage_GetDecodedMetricF_Callback cb) { qerrormessage_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQErrorMessage_MetaObject_IsBase(bool value) const { qerrormessage_metaobject_isbase = value; }
    inline void setQErrorMessage_Metacast_IsBase(bool value) const { qerrormessage_metacast_isbase = value; }
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
    inline void setQErrorMessage_GetDecodedMetricF_IsBase(bool value) const { qerrormessage_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qerrormessage_metaobject_isbase) {
            qerrormessage_metaobject_isbase = false;
            return QErrorMessage::metaObject();
        }
        auto metaobject_cb = qerrormessage_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QErrorMessage::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qerrormessage_metacast_isbase) {
            qerrormessage_metacast_isbase = false;
            return QErrorMessage::qt_metacast(param1);
        }
        auto metacast_cb = qerrormessage_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QErrorMessage::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qerrormessage_metacall_isbase) {
            qerrormessage_metacall_isbase = false;
            return QErrorMessage::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qerrormessage_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QErrorMessage::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (qerrormessage_done_isbase) {
            qerrormessage_done_isbase = false;
            QErrorMessage::done(param1);
            return;
        }
        auto done_cb = qerrormessage_done_callback;
        if (done_cb) {
            int cbval1 = param1;

            done_cb(this, cbval1);
            return;
        }
        QErrorMessage::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qerrormessage_changeevent_isbase) {
            qerrormessage_changeevent_isbase = false;
            QErrorMessage::changeEvent(e);
            return;
        }
        auto changeevent_cb = qerrormessage_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = e;

            changeevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qerrormessage_setvisible_isbase) {
            qerrormessage_setvisible_isbase = false;
            QErrorMessage::setVisible(visible);
            return;
        }
        auto setvisible_cb = qerrormessage_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QErrorMessage::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qerrormessage_sizehint_isbase) {
            qerrormessage_sizehint_isbase = false;
            return QErrorMessage::sizeHint();
        }
        auto sizehint_cb = qerrormessage_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QErrorMessage::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qerrormessage_minimumsizehint_isbase) {
            qerrormessage_minimumsizehint_isbase = false;
            return QErrorMessage::minimumSizeHint();
        }
        auto minimumsizehint_cb = qerrormessage_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QErrorMessage::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qerrormessage_open_isbase) {
            qerrormessage_open_isbase = false;
            QErrorMessage::open();
            return;
        }
        auto open_cb = qerrormessage_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        QErrorMessage::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qerrormessage_exec_isbase) {
            qerrormessage_exec_isbase = false;
            return QErrorMessage::exec();
        }
        auto exec_cb = qerrormessage_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return QErrorMessage::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qerrormessage_accept_isbase) {
            qerrormessage_accept_isbase = false;
            QErrorMessage::accept();
            return;
        }
        auto accept_cb = qerrormessage_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        QErrorMessage::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qerrormessage_reject_isbase) {
            qerrormessage_reject_isbase = false;
            QErrorMessage::reject();
            return;
        }
        auto reject_cb = qerrormessage_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        QErrorMessage::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qerrormessage_keypressevent_isbase) {
            qerrormessage_keypressevent_isbase = false;
            QErrorMessage::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = qerrormessage_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qerrormessage_closeevent_isbase) {
            qerrormessage_closeevent_isbase = false;
            QErrorMessage::closeEvent(param1);
            return;
        }
        auto closeevent_cb = qerrormessage_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qerrormessage_showevent_isbase) {
            qerrormessage_showevent_isbase = false;
            QErrorMessage::showEvent(param1);
            return;
        }
        auto showevent_cb = qerrormessage_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qerrormessage_resizeevent_isbase) {
            qerrormessage_resizeevent_isbase = false;
            QErrorMessage::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = qerrormessage_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qerrormessage_contextmenuevent_isbase) {
            qerrormessage_contextmenuevent_isbase = false;
            QErrorMessage::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = qerrormessage_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qerrormessage_eventfilter_isbase) {
            qerrormessage_eventfilter_isbase = false;
            return QErrorMessage::eventFilter(param1, param2);
        }
        auto eventfilter_cb = qerrormessage_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QErrorMessage::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qerrormessage_devtype_isbase) {
            qerrormessage_devtype_isbase = false;
            return QErrorMessage::devType();
        }
        auto devtype_cb = qerrormessage_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QErrorMessage::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qerrormessage_heightforwidth_isbase) {
            qerrormessage_heightforwidth_isbase = false;
            return QErrorMessage::heightForWidth(param1);
        }
        auto heightforwidth_cb = qerrormessage_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QErrorMessage::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qerrormessage_hasheightforwidth_isbase) {
            qerrormessage_hasheightforwidth_isbase = false;
            return QErrorMessage::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qerrormessage_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QErrorMessage::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qerrormessage_paintengine_isbase) {
            qerrormessage_paintengine_isbase = false;
            return QErrorMessage::paintEngine();
        }
        auto paintengine_cb = qerrormessage_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QErrorMessage::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qerrormessage_event_isbase) {
            qerrormessage_event_isbase = false;
            return QErrorMessage::event(event);
        }
        auto event_cb = qerrormessage_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QErrorMessage::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qerrormessage_mousepressevent_isbase) {
            qerrormessage_mousepressevent_isbase = false;
            QErrorMessage::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qerrormessage_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qerrormessage_mousereleaseevent_isbase) {
            qerrormessage_mousereleaseevent_isbase = false;
            QErrorMessage::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qerrormessage_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qerrormessage_mousedoubleclickevent_isbase) {
            qerrormessage_mousedoubleclickevent_isbase = false;
            QErrorMessage::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qerrormessage_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qerrormessage_mousemoveevent_isbase) {
            qerrormessage_mousemoveevent_isbase = false;
            QErrorMessage::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qerrormessage_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qerrormessage_wheelevent_isbase) {
            qerrormessage_wheelevent_isbase = false;
            QErrorMessage::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qerrormessage_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qerrormessage_keyreleaseevent_isbase) {
            qerrormessage_keyreleaseevent_isbase = false;
            QErrorMessage::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qerrormessage_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qerrormessage_focusinevent_isbase) {
            qerrormessage_focusinevent_isbase = false;
            QErrorMessage::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qerrormessage_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qerrormessage_focusoutevent_isbase) {
            qerrormessage_focusoutevent_isbase = false;
            QErrorMessage::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qerrormessage_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qerrormessage_enterevent_isbase) {
            qerrormessage_enterevent_isbase = false;
            QErrorMessage::enterEvent(event);
            return;
        }
        auto enterevent_cb = qerrormessage_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qerrormessage_leaveevent_isbase) {
            qerrormessage_leaveevent_isbase = false;
            QErrorMessage::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qerrormessage_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qerrormessage_paintevent_isbase) {
            qerrormessage_paintevent_isbase = false;
            QErrorMessage::paintEvent(event);
            return;
        }
        auto paintevent_cb = qerrormessage_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qerrormessage_moveevent_isbase) {
            qerrormessage_moveevent_isbase = false;
            QErrorMessage::moveEvent(event);
            return;
        }
        auto moveevent_cb = qerrormessage_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qerrormessage_tabletevent_isbase) {
            qerrormessage_tabletevent_isbase = false;
            QErrorMessage::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qerrormessage_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qerrormessage_actionevent_isbase) {
            qerrormessage_actionevent_isbase = false;
            QErrorMessage::actionEvent(event);
            return;
        }
        auto actionevent_cb = qerrormessage_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qerrormessage_dragenterevent_isbase) {
            qerrormessage_dragenterevent_isbase = false;
            QErrorMessage::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qerrormessage_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qerrormessage_dragmoveevent_isbase) {
            qerrormessage_dragmoveevent_isbase = false;
            QErrorMessage::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qerrormessage_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qerrormessage_dragleaveevent_isbase) {
            qerrormessage_dragleaveevent_isbase = false;
            QErrorMessage::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qerrormessage_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qerrormessage_dropevent_isbase) {
            qerrormessage_dropevent_isbase = false;
            QErrorMessage::dropEvent(event);
            return;
        }
        auto dropevent_cb = qerrormessage_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qerrormessage_hideevent_isbase) {
            qerrormessage_hideevent_isbase = false;
            QErrorMessage::hideEvent(event);
            return;
        }
        auto hideevent_cb = qerrormessage_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qerrormessage_nativeevent_isbase) {
            qerrormessage_nativeevent_isbase = false;
            return QErrorMessage::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qerrormessage_nativeevent_callback;
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
        return QErrorMessage::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qerrormessage_metric_isbase) {
            qerrormessage_metric_isbase = false;
            return QErrorMessage::metric(param1);
        }
        auto metric_cb = qerrormessage_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QErrorMessage::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qerrormessage_initpainter_isbase) {
            qerrormessage_initpainter_isbase = false;
            QErrorMessage::initPainter(painter);
            return;
        }
        auto initpainter_cb = qerrormessage_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QErrorMessage::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qerrormessage_redirected_isbase) {
            qerrormessage_redirected_isbase = false;
            return QErrorMessage::redirected(offset);
        }
        auto redirected_cb = qerrormessage_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QErrorMessage::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qerrormessage_sharedpainter_isbase) {
            qerrormessage_sharedpainter_isbase = false;
            return QErrorMessage::sharedPainter();
        }
        auto sharedpainter_cb = qerrormessage_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QErrorMessage::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qerrormessage_inputmethodevent_isbase) {
            qerrormessage_inputmethodevent_isbase = false;
            QErrorMessage::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qerrormessage_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qerrormessage_inputmethodquery_isbase) {
            qerrormessage_inputmethodquery_isbase = false;
            return QErrorMessage::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qerrormessage_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QErrorMessage::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qerrormessage_focusnextprevchild_isbase) {
            qerrormessage_focusnextprevchild_isbase = false;
            return QErrorMessage::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qerrormessage_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QErrorMessage::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qerrormessage_timerevent_isbase) {
            qerrormessage_timerevent_isbase = false;
            QErrorMessage::timerEvent(event);
            return;
        }
        auto timerevent_cb = qerrormessage_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qerrormessage_childevent_isbase) {
            qerrormessage_childevent_isbase = false;
            QErrorMessage::childEvent(event);
            return;
        }
        auto childevent_cb = qerrormessage_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qerrormessage_customevent_isbase) {
            qerrormessage_customevent_isbase = false;
            QErrorMessage::customEvent(event);
            return;
        }
        auto customevent_cb = qerrormessage_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QErrorMessage::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qerrormessage_connectnotify_isbase) {
            qerrormessage_connectnotify_isbase = false;
            QErrorMessage::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qerrormessage_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QErrorMessage::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qerrormessage_disconnectnotify_isbase) {
            qerrormessage_disconnectnotify_isbase = false;
            QErrorMessage::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qerrormessage_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QErrorMessage::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qerrormessage_adjustposition_isbase) {
            qerrormessage_adjustposition_isbase = false;
            QErrorMessage::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = qerrormessage_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        QErrorMessage::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qerrormessage_updatemicrofocus_isbase) {
            qerrormessage_updatemicrofocus_isbase = false;
            QErrorMessage::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qerrormessage_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QErrorMessage::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qerrormessage_create_isbase) {
            qerrormessage_create_isbase = false;
            QErrorMessage::create();
            return;
        }
        auto create_cb = qerrormessage_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QErrorMessage::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qerrormessage_destroy_isbase) {
            qerrormessage_destroy_isbase = false;
            QErrorMessage::destroy();
            return;
        }
        auto destroy_cb = qerrormessage_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QErrorMessage::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qerrormessage_focusnextchild_isbase) {
            qerrormessage_focusnextchild_isbase = false;
            return QErrorMessage::focusNextChild();
        }
        auto focusnextchild_cb = qerrormessage_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QErrorMessage::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qerrormessage_focuspreviouschild_isbase) {
            qerrormessage_focuspreviouschild_isbase = false;
            return QErrorMessage::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qerrormessage_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QErrorMessage::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qerrormessage_sender_isbase) {
            qerrormessage_sender_isbase = false;
            return QErrorMessage::sender();
        }
        auto sender_cb = qerrormessage_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QErrorMessage::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qerrormessage_sendersignalindex_isbase) {
            qerrormessage_sendersignalindex_isbase = false;
            return QErrorMessage::senderSignalIndex();
        }
        auto sendersignalindex_cb = qerrormessage_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QErrorMessage::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qerrormessage_receivers_isbase) {
            qerrormessage_receivers_isbase = false;
            return QErrorMessage::receivers(signal);
        }
        auto receivers_cb = qerrormessage_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QErrorMessage::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qerrormessage_issignalconnected_isbase) {
            qerrormessage_issignalconnected_isbase = false;
            return QErrorMessage::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qerrormessage_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QErrorMessage::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qerrormessage_getdecodedmetricf_isbase) {
            qerrormessage_getdecodedmetricf_isbase = false;
            return QErrorMessage::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qerrormessage_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QErrorMessage::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void QErrorMessage_Done(QErrorMessage* self, int param1);
    friend void QErrorMessage_SuperDone(QErrorMessage* self, int param1);
    friend void QErrorMessage_ChangeEvent(QErrorMessage* self, QEvent* e);
    friend void QErrorMessage_SuperChangeEvent(QErrorMessage* self, QEvent* e);
    friend void QErrorMessage_KeyPressEvent(QErrorMessage* self, QKeyEvent* param1);
    friend void QErrorMessage_SuperKeyPressEvent(QErrorMessage* self, QKeyEvent* param1);
    friend void QErrorMessage_CloseEvent(QErrorMessage* self, QCloseEvent* param1);
    friend void QErrorMessage_SuperCloseEvent(QErrorMessage* self, QCloseEvent* param1);
    friend void QErrorMessage_ShowEvent(QErrorMessage* self, QShowEvent* param1);
    friend void QErrorMessage_SuperShowEvent(QErrorMessage* self, QShowEvent* param1);
    friend void QErrorMessage_ResizeEvent(QErrorMessage* self, QResizeEvent* param1);
    friend void QErrorMessage_SuperResizeEvent(QErrorMessage* self, QResizeEvent* param1);
    friend void QErrorMessage_ContextMenuEvent(QErrorMessage* self, QContextMenuEvent* param1);
    friend void QErrorMessage_SuperContextMenuEvent(QErrorMessage* self, QContextMenuEvent* param1);
    friend bool QErrorMessage_EventFilter(QErrorMessage* self, QObject* param1, QEvent* param2);
    friend bool QErrorMessage_SuperEventFilter(QErrorMessage* self, QObject* param1, QEvent* param2);
    friend bool QErrorMessage_Event(QErrorMessage* self, QEvent* event);
    friend bool QErrorMessage_SuperEvent(QErrorMessage* self, QEvent* event);
    friend void QErrorMessage_MousePressEvent(QErrorMessage* self, QMouseEvent* event);
    friend void QErrorMessage_SuperMousePressEvent(QErrorMessage* self, QMouseEvent* event);
    friend void QErrorMessage_MouseReleaseEvent(QErrorMessage* self, QMouseEvent* event);
    friend void QErrorMessage_SuperMouseReleaseEvent(QErrorMessage* self, QMouseEvent* event);
    friend void QErrorMessage_MouseDoubleClickEvent(QErrorMessage* self, QMouseEvent* event);
    friend void QErrorMessage_SuperMouseDoubleClickEvent(QErrorMessage* self, QMouseEvent* event);
    friend void QErrorMessage_MouseMoveEvent(QErrorMessage* self, QMouseEvent* event);
    friend void QErrorMessage_SuperMouseMoveEvent(QErrorMessage* self, QMouseEvent* event);
    friend void QErrorMessage_WheelEvent(QErrorMessage* self, QWheelEvent* event);
    friend void QErrorMessage_SuperWheelEvent(QErrorMessage* self, QWheelEvent* event);
    friend void QErrorMessage_KeyReleaseEvent(QErrorMessage* self, QKeyEvent* event);
    friend void QErrorMessage_SuperKeyReleaseEvent(QErrorMessage* self, QKeyEvent* event);
    friend void QErrorMessage_FocusInEvent(QErrorMessage* self, QFocusEvent* event);
    friend void QErrorMessage_SuperFocusInEvent(QErrorMessage* self, QFocusEvent* event);
    friend void QErrorMessage_FocusOutEvent(QErrorMessage* self, QFocusEvent* event);
    friend void QErrorMessage_SuperFocusOutEvent(QErrorMessage* self, QFocusEvent* event);
    friend void QErrorMessage_EnterEvent(QErrorMessage* self, QEnterEvent* event);
    friend void QErrorMessage_SuperEnterEvent(QErrorMessage* self, QEnterEvent* event);
    friend void QErrorMessage_LeaveEvent(QErrorMessage* self, QEvent* event);
    friend void QErrorMessage_SuperLeaveEvent(QErrorMessage* self, QEvent* event);
    friend void QErrorMessage_PaintEvent(QErrorMessage* self, QPaintEvent* event);
    friend void QErrorMessage_SuperPaintEvent(QErrorMessage* self, QPaintEvent* event);
    friend void QErrorMessage_MoveEvent(QErrorMessage* self, QMoveEvent* event);
    friend void QErrorMessage_SuperMoveEvent(QErrorMessage* self, QMoveEvent* event);
    friend void QErrorMessage_TabletEvent(QErrorMessage* self, QTabletEvent* event);
    friend void QErrorMessage_SuperTabletEvent(QErrorMessage* self, QTabletEvent* event);
    friend void QErrorMessage_ActionEvent(QErrorMessage* self, QActionEvent* event);
    friend void QErrorMessage_SuperActionEvent(QErrorMessage* self, QActionEvent* event);
    friend void QErrorMessage_DragEnterEvent(QErrorMessage* self, QDragEnterEvent* event);
    friend void QErrorMessage_SuperDragEnterEvent(QErrorMessage* self, QDragEnterEvent* event);
    friend void QErrorMessage_DragMoveEvent(QErrorMessage* self, QDragMoveEvent* event);
    friend void QErrorMessage_SuperDragMoveEvent(QErrorMessage* self, QDragMoveEvent* event);
    friend void QErrorMessage_DragLeaveEvent(QErrorMessage* self, QDragLeaveEvent* event);
    friend void QErrorMessage_SuperDragLeaveEvent(QErrorMessage* self, QDragLeaveEvent* event);
    friend void QErrorMessage_DropEvent(QErrorMessage* self, QDropEvent* event);
    friend void QErrorMessage_SuperDropEvent(QErrorMessage* self, QDropEvent* event);
    friend void QErrorMessage_HideEvent(QErrorMessage* self, QHideEvent* event);
    friend void QErrorMessage_SuperHideEvent(QErrorMessage* self, QHideEvent* event);
    friend bool QErrorMessage_NativeEvent(QErrorMessage* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QErrorMessage_SuperNativeEvent(QErrorMessage* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QErrorMessage_Metric(const QErrorMessage* self, int param1);
    friend int QErrorMessage_SuperMetric(const QErrorMessage* self, int param1);
    friend void QErrorMessage_InitPainter(const QErrorMessage* self, QPainter* painter);
    friend void QErrorMessage_SuperInitPainter(const QErrorMessage* self, QPainter* painter);
    friend QPaintDevice* QErrorMessage_Redirected(const QErrorMessage* self, QPoint* offset);
    friend QPaintDevice* QErrorMessage_SuperRedirected(const QErrorMessage* self, QPoint* offset);
    friend QPainter* QErrorMessage_SharedPainter(const QErrorMessage* self);
    friend QPainter* QErrorMessage_SuperSharedPainter(const QErrorMessage* self);
    friend void QErrorMessage_InputMethodEvent(QErrorMessage* self, QInputMethodEvent* param1);
    friend void QErrorMessage_SuperInputMethodEvent(QErrorMessage* self, QInputMethodEvent* param1);
    friend bool QErrorMessage_FocusNextPrevChild(QErrorMessage* self, bool next);
    friend bool QErrorMessage_SuperFocusNextPrevChild(QErrorMessage* self, bool next);
    friend void QErrorMessage_TimerEvent(QErrorMessage* self, QTimerEvent* event);
    friend void QErrorMessage_SuperTimerEvent(QErrorMessage* self, QTimerEvent* event);
    friend void QErrorMessage_ChildEvent(QErrorMessage* self, QChildEvent* event);
    friend void QErrorMessage_SuperChildEvent(QErrorMessage* self, QChildEvent* event);
    friend void QErrorMessage_CustomEvent(QErrorMessage* self, QEvent* event);
    friend void QErrorMessage_SuperCustomEvent(QErrorMessage* self, QEvent* event);
    friend void QErrorMessage_ConnectNotify(QErrorMessage* self, const QMetaMethod* signal);
    friend void QErrorMessage_SuperConnectNotify(QErrorMessage* self, const QMetaMethod* signal);
    friend void QErrorMessage_DisconnectNotify(QErrorMessage* self, const QMetaMethod* signal);
    friend void QErrorMessage_SuperDisconnectNotify(QErrorMessage* self, const QMetaMethod* signal);
    friend void QErrorMessage_AdjustPosition(QErrorMessage* self, QWidget* param1);
    friend void QErrorMessage_SuperAdjustPosition(QErrorMessage* self, QWidget* param1);
    friend void QErrorMessage_UpdateMicroFocus(QErrorMessage* self);
    friend void QErrorMessage_SuperUpdateMicroFocus(QErrorMessage* self);
    friend void QErrorMessage_Create(QErrorMessage* self);
    friend void QErrorMessage_SuperCreate(QErrorMessage* self);
    friend void QErrorMessage_Destroy(QErrorMessage* self);
    friend void QErrorMessage_SuperDestroy(QErrorMessage* self);
    friend bool QErrorMessage_FocusNextChild(QErrorMessage* self);
    friend bool QErrorMessage_SuperFocusNextChild(QErrorMessage* self);
    friend bool QErrorMessage_FocusPreviousChild(QErrorMessage* self);
    friend bool QErrorMessage_SuperFocusPreviousChild(QErrorMessage* self);
    friend QObject* QErrorMessage_Sender(const QErrorMessage* self);
    friend QObject* QErrorMessage_SuperSender(const QErrorMessage* self);
    friend int QErrorMessage_SenderSignalIndex(const QErrorMessage* self);
    friend int QErrorMessage_SuperSenderSignalIndex(const QErrorMessage* self);
    friend int QErrorMessage_Receivers(const QErrorMessage* self, const char* signal);
    friend int QErrorMessage_SuperReceivers(const QErrorMessage* self, const char* signal);
    friend bool QErrorMessage_IsSignalConnected(const QErrorMessage* self, const QMetaMethod* signal);
    friend bool QErrorMessage_SuperIsSignalConnected(const QErrorMessage* self, const QMetaMethod* signal);
    friend double QErrorMessage_GetDecodedMetricF(const QErrorMessage* self, int metricA, int metricB);
    friend double QErrorMessage_SuperGetDecodedMetricF(const QErrorMessage* self, int metricA, int metricB);
};

#endif
