#pragma once
#ifndef SRCC_LIBVIRTUALQMDISUBWINDOW_H
#define SRCC_LIBVIRTUALQMDISUBWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QMdiSubWindow so that we can call protected methods
class VirtualQMdiSubWindow final : public QMdiSubWindow {

  public:
    // Virtual class boolean flag
    bool isVirtualQMdiSubWindow = true;

    // Virtual class public types (including callbacks)
    using QMdiSubWindow_MetaObject_Callback = QMetaObject* (*)();
    using QMdiSubWindow_Metacast_Callback = void* (*)(QMdiSubWindow*, const char*);
    using QMdiSubWindow_Metacall_Callback = int (*)(QMdiSubWindow*, int, int, void**);
    using QMdiSubWindow_SizeHint_Callback = QSize* (*)();
    using QMdiSubWindow_MinimumSizeHint_Callback = QSize* (*)();
    using QMdiSubWindow_EventFilter_Callback = bool (*)(QMdiSubWindow*, QObject*, QEvent*);
    using QMdiSubWindow_Event_Callback = bool (*)(QMdiSubWindow*, QEvent*);
    using QMdiSubWindow_ShowEvent_Callback = void (*)(QMdiSubWindow*, QShowEvent*);
    using QMdiSubWindow_HideEvent_Callback = void (*)(QMdiSubWindow*, QHideEvent*);
    using QMdiSubWindow_ChangeEvent_Callback = void (*)(QMdiSubWindow*, QEvent*);
    using QMdiSubWindow_CloseEvent_Callback = void (*)(QMdiSubWindow*, QCloseEvent*);
    using QMdiSubWindow_LeaveEvent_Callback = void (*)(QMdiSubWindow*, QEvent*);
    using QMdiSubWindow_ResizeEvent_Callback = void (*)(QMdiSubWindow*, QResizeEvent*);
    using QMdiSubWindow_TimerEvent_Callback = void (*)(QMdiSubWindow*, QTimerEvent*);
    using QMdiSubWindow_MoveEvent_Callback = void (*)(QMdiSubWindow*, QMoveEvent*);
    using QMdiSubWindow_PaintEvent_Callback = void (*)(QMdiSubWindow*, QPaintEvent*);
    using QMdiSubWindow_MousePressEvent_Callback = void (*)(QMdiSubWindow*, QMouseEvent*);
    using QMdiSubWindow_MouseDoubleClickEvent_Callback = void (*)(QMdiSubWindow*, QMouseEvent*);
    using QMdiSubWindow_MouseReleaseEvent_Callback = void (*)(QMdiSubWindow*, QMouseEvent*);
    using QMdiSubWindow_MouseMoveEvent_Callback = void (*)(QMdiSubWindow*, QMouseEvent*);
    using QMdiSubWindow_KeyPressEvent_Callback = void (*)(QMdiSubWindow*, QKeyEvent*);
    using QMdiSubWindow_ContextMenuEvent_Callback = void (*)(QMdiSubWindow*, QContextMenuEvent*);
    using QMdiSubWindow_FocusInEvent_Callback = void (*)(QMdiSubWindow*, QFocusEvent*);
    using QMdiSubWindow_FocusOutEvent_Callback = void (*)(QMdiSubWindow*, QFocusEvent*);
    using QMdiSubWindow_ChildEvent_Callback = void (*)(QMdiSubWindow*, QChildEvent*);
    using QMdiSubWindow_DevType_Callback = int (*)();
    using QMdiSubWindow_SetVisible_Callback = void (*)(QMdiSubWindow*, bool);
    using QMdiSubWindow_HeightForWidth_Callback = int (*)(const QMdiSubWindow*, int);
    using QMdiSubWindow_HasHeightForWidth_Callback = bool (*)();
    using QMdiSubWindow_PaintEngine_Callback = QPaintEngine* (*)();
    using QMdiSubWindow_WheelEvent_Callback = void (*)(QMdiSubWindow*, QWheelEvent*);
    using QMdiSubWindow_KeyReleaseEvent_Callback = void (*)(QMdiSubWindow*, QKeyEvent*);
    using QMdiSubWindow_EnterEvent_Callback = void (*)(QMdiSubWindow*, QEnterEvent*);
    using QMdiSubWindow_TabletEvent_Callback = void (*)(QMdiSubWindow*, QTabletEvent*);
    using QMdiSubWindow_ActionEvent_Callback = void (*)(QMdiSubWindow*, QActionEvent*);
    using QMdiSubWindow_DragEnterEvent_Callback = void (*)(QMdiSubWindow*, QDragEnterEvent*);
    using QMdiSubWindow_DragMoveEvent_Callback = void (*)(QMdiSubWindow*, QDragMoveEvent*);
    using QMdiSubWindow_DragLeaveEvent_Callback = void (*)(QMdiSubWindow*, QDragLeaveEvent*);
    using QMdiSubWindow_DropEvent_Callback = void (*)(QMdiSubWindow*, QDropEvent*);
    using QMdiSubWindow_NativeEvent_Callback = bool (*)(QMdiSubWindow*, libqt_string, void*, intptr_t*);
    using QMdiSubWindow_Metric_Callback = int (*)(const QMdiSubWindow*, int);
    using QMdiSubWindow_InitPainter_Callback = void (*)(const QMdiSubWindow*, QPainter*);
    using QMdiSubWindow_Redirected_Callback = QPaintDevice* (*)(const QMdiSubWindow*, QPoint*);
    using QMdiSubWindow_SharedPainter_Callback = QPainter* (*)();
    using QMdiSubWindow_InputMethodEvent_Callback = void (*)(QMdiSubWindow*, QInputMethodEvent*);
    using QMdiSubWindow_InputMethodQuery_Callback = QVariant* (*)(const QMdiSubWindow*, int);
    using QMdiSubWindow_FocusNextPrevChild_Callback = bool (*)(QMdiSubWindow*, bool);
    using QMdiSubWindow_CustomEvent_Callback = void (*)(QMdiSubWindow*, QEvent*);
    using QMdiSubWindow_ConnectNotify_Callback = void (*)(QMdiSubWindow*, QMetaMethod*);
    using QMdiSubWindow_DisconnectNotify_Callback = void (*)(QMdiSubWindow*, QMetaMethod*);
    using QMdiSubWindow_UpdateMicroFocus_Callback = void (*)();
    using QMdiSubWindow_Create_Callback = void (*)();
    using QMdiSubWindow_Destroy_Callback = void (*)();
    using QMdiSubWindow_FocusNextChild_Callback = bool (*)();
    using QMdiSubWindow_FocusPreviousChild_Callback = bool (*)();
    using QMdiSubWindow_Sender_Callback = QObject* (*)();
    using QMdiSubWindow_SenderSignalIndex_Callback = int (*)();
    using QMdiSubWindow_Receivers_Callback = int (*)(const QMdiSubWindow*, const char*);
    using QMdiSubWindow_IsSignalConnected_Callback = bool (*)(const QMdiSubWindow*, QMetaMethod*);
    using QMdiSubWindow_GetDecodedMetricF_Callback = double (*)(const QMdiSubWindow*, int, int);

  protected:
    // Instance callback storage
    QMdiSubWindow_MetaObject_Callback qmdisubwindow_metaobject_callback = nullptr;
    QMdiSubWindow_Metacast_Callback qmdisubwindow_metacast_callback = nullptr;
    QMdiSubWindow_Metacall_Callback qmdisubwindow_metacall_callback = nullptr;
    QMdiSubWindow_SizeHint_Callback qmdisubwindow_sizehint_callback = nullptr;
    QMdiSubWindow_MinimumSizeHint_Callback qmdisubwindow_minimumsizehint_callback = nullptr;
    QMdiSubWindow_EventFilter_Callback qmdisubwindow_eventfilter_callback = nullptr;
    QMdiSubWindow_Event_Callback qmdisubwindow_event_callback = nullptr;
    QMdiSubWindow_ShowEvent_Callback qmdisubwindow_showevent_callback = nullptr;
    QMdiSubWindow_HideEvent_Callback qmdisubwindow_hideevent_callback = nullptr;
    QMdiSubWindow_ChangeEvent_Callback qmdisubwindow_changeevent_callback = nullptr;
    QMdiSubWindow_CloseEvent_Callback qmdisubwindow_closeevent_callback = nullptr;
    QMdiSubWindow_LeaveEvent_Callback qmdisubwindow_leaveevent_callback = nullptr;
    QMdiSubWindow_ResizeEvent_Callback qmdisubwindow_resizeevent_callback = nullptr;
    QMdiSubWindow_TimerEvent_Callback qmdisubwindow_timerevent_callback = nullptr;
    QMdiSubWindow_MoveEvent_Callback qmdisubwindow_moveevent_callback = nullptr;
    QMdiSubWindow_PaintEvent_Callback qmdisubwindow_paintevent_callback = nullptr;
    QMdiSubWindow_MousePressEvent_Callback qmdisubwindow_mousepressevent_callback = nullptr;
    QMdiSubWindow_MouseDoubleClickEvent_Callback qmdisubwindow_mousedoubleclickevent_callback = nullptr;
    QMdiSubWindow_MouseReleaseEvent_Callback qmdisubwindow_mousereleaseevent_callback = nullptr;
    QMdiSubWindow_MouseMoveEvent_Callback qmdisubwindow_mousemoveevent_callback = nullptr;
    QMdiSubWindow_KeyPressEvent_Callback qmdisubwindow_keypressevent_callback = nullptr;
    QMdiSubWindow_ContextMenuEvent_Callback qmdisubwindow_contextmenuevent_callback = nullptr;
    QMdiSubWindow_FocusInEvent_Callback qmdisubwindow_focusinevent_callback = nullptr;
    QMdiSubWindow_FocusOutEvent_Callback qmdisubwindow_focusoutevent_callback = nullptr;
    QMdiSubWindow_ChildEvent_Callback qmdisubwindow_childevent_callback = nullptr;
    QMdiSubWindow_DevType_Callback qmdisubwindow_devtype_callback = nullptr;
    QMdiSubWindow_SetVisible_Callback qmdisubwindow_setvisible_callback = nullptr;
    QMdiSubWindow_HeightForWidth_Callback qmdisubwindow_heightforwidth_callback = nullptr;
    QMdiSubWindow_HasHeightForWidth_Callback qmdisubwindow_hasheightforwidth_callback = nullptr;
    QMdiSubWindow_PaintEngine_Callback qmdisubwindow_paintengine_callback = nullptr;
    QMdiSubWindow_WheelEvent_Callback qmdisubwindow_wheelevent_callback = nullptr;
    QMdiSubWindow_KeyReleaseEvent_Callback qmdisubwindow_keyreleaseevent_callback = nullptr;
    QMdiSubWindow_EnterEvent_Callback qmdisubwindow_enterevent_callback = nullptr;
    QMdiSubWindow_TabletEvent_Callback qmdisubwindow_tabletevent_callback = nullptr;
    QMdiSubWindow_ActionEvent_Callback qmdisubwindow_actionevent_callback = nullptr;
    QMdiSubWindow_DragEnterEvent_Callback qmdisubwindow_dragenterevent_callback = nullptr;
    QMdiSubWindow_DragMoveEvent_Callback qmdisubwindow_dragmoveevent_callback = nullptr;
    QMdiSubWindow_DragLeaveEvent_Callback qmdisubwindow_dragleaveevent_callback = nullptr;
    QMdiSubWindow_DropEvent_Callback qmdisubwindow_dropevent_callback = nullptr;
    QMdiSubWindow_NativeEvent_Callback qmdisubwindow_nativeevent_callback = nullptr;
    QMdiSubWindow_Metric_Callback qmdisubwindow_metric_callback = nullptr;
    QMdiSubWindow_InitPainter_Callback qmdisubwindow_initpainter_callback = nullptr;
    QMdiSubWindow_Redirected_Callback qmdisubwindow_redirected_callback = nullptr;
    QMdiSubWindow_SharedPainter_Callback qmdisubwindow_sharedpainter_callback = nullptr;
    QMdiSubWindow_InputMethodEvent_Callback qmdisubwindow_inputmethodevent_callback = nullptr;
    QMdiSubWindow_InputMethodQuery_Callback qmdisubwindow_inputmethodquery_callback = nullptr;
    QMdiSubWindow_FocusNextPrevChild_Callback qmdisubwindow_focusnextprevchild_callback = nullptr;
    QMdiSubWindow_CustomEvent_Callback qmdisubwindow_customevent_callback = nullptr;
    QMdiSubWindow_ConnectNotify_Callback qmdisubwindow_connectnotify_callback = nullptr;
    QMdiSubWindow_DisconnectNotify_Callback qmdisubwindow_disconnectnotify_callback = nullptr;
    QMdiSubWindow_UpdateMicroFocus_Callback qmdisubwindow_updatemicrofocus_callback = nullptr;
    QMdiSubWindow_Create_Callback qmdisubwindow_create_callback = nullptr;
    QMdiSubWindow_Destroy_Callback qmdisubwindow_destroy_callback = nullptr;
    QMdiSubWindow_FocusNextChild_Callback qmdisubwindow_focusnextchild_callback = nullptr;
    QMdiSubWindow_FocusPreviousChild_Callback qmdisubwindow_focuspreviouschild_callback = nullptr;
    QMdiSubWindow_Sender_Callback qmdisubwindow_sender_callback = nullptr;
    QMdiSubWindow_SenderSignalIndex_Callback qmdisubwindow_sendersignalindex_callback = nullptr;
    QMdiSubWindow_Receivers_Callback qmdisubwindow_receivers_callback = nullptr;
    QMdiSubWindow_IsSignalConnected_Callback qmdisubwindow_issignalconnected_callback = nullptr;
    QMdiSubWindow_GetDecodedMetricF_Callback qmdisubwindow_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qmdisubwindow_metaobject_isbase = false;
    mutable bool qmdisubwindow_metacast_isbase = false;
    mutable bool qmdisubwindow_metacall_isbase = false;
    mutable bool qmdisubwindow_sizehint_isbase = false;
    mutable bool qmdisubwindow_minimumsizehint_isbase = false;
    mutable bool qmdisubwindow_eventfilter_isbase = false;
    mutable bool qmdisubwindow_event_isbase = false;
    mutable bool qmdisubwindow_showevent_isbase = false;
    mutable bool qmdisubwindow_hideevent_isbase = false;
    mutable bool qmdisubwindow_changeevent_isbase = false;
    mutable bool qmdisubwindow_closeevent_isbase = false;
    mutable bool qmdisubwindow_leaveevent_isbase = false;
    mutable bool qmdisubwindow_resizeevent_isbase = false;
    mutable bool qmdisubwindow_timerevent_isbase = false;
    mutable bool qmdisubwindow_moveevent_isbase = false;
    mutable bool qmdisubwindow_paintevent_isbase = false;
    mutable bool qmdisubwindow_mousepressevent_isbase = false;
    mutable bool qmdisubwindow_mousedoubleclickevent_isbase = false;
    mutable bool qmdisubwindow_mousereleaseevent_isbase = false;
    mutable bool qmdisubwindow_mousemoveevent_isbase = false;
    mutable bool qmdisubwindow_keypressevent_isbase = false;
    mutable bool qmdisubwindow_contextmenuevent_isbase = false;
    mutable bool qmdisubwindow_focusinevent_isbase = false;
    mutable bool qmdisubwindow_focusoutevent_isbase = false;
    mutable bool qmdisubwindow_childevent_isbase = false;
    mutable bool qmdisubwindow_devtype_isbase = false;
    mutable bool qmdisubwindow_setvisible_isbase = false;
    mutable bool qmdisubwindow_heightforwidth_isbase = false;
    mutable bool qmdisubwindow_hasheightforwidth_isbase = false;
    mutable bool qmdisubwindow_paintengine_isbase = false;
    mutable bool qmdisubwindow_wheelevent_isbase = false;
    mutable bool qmdisubwindow_keyreleaseevent_isbase = false;
    mutable bool qmdisubwindow_enterevent_isbase = false;
    mutable bool qmdisubwindow_tabletevent_isbase = false;
    mutable bool qmdisubwindow_actionevent_isbase = false;
    mutable bool qmdisubwindow_dragenterevent_isbase = false;
    mutable bool qmdisubwindow_dragmoveevent_isbase = false;
    mutable bool qmdisubwindow_dragleaveevent_isbase = false;
    mutable bool qmdisubwindow_dropevent_isbase = false;
    mutable bool qmdisubwindow_nativeevent_isbase = false;
    mutable bool qmdisubwindow_metric_isbase = false;
    mutable bool qmdisubwindow_initpainter_isbase = false;
    mutable bool qmdisubwindow_redirected_isbase = false;
    mutable bool qmdisubwindow_sharedpainter_isbase = false;
    mutable bool qmdisubwindow_inputmethodevent_isbase = false;
    mutable bool qmdisubwindow_inputmethodquery_isbase = false;
    mutable bool qmdisubwindow_focusnextprevchild_isbase = false;
    mutable bool qmdisubwindow_customevent_isbase = false;
    mutable bool qmdisubwindow_connectnotify_isbase = false;
    mutable bool qmdisubwindow_disconnectnotify_isbase = false;
    mutable bool qmdisubwindow_updatemicrofocus_isbase = false;
    mutable bool qmdisubwindow_create_isbase = false;
    mutable bool qmdisubwindow_destroy_isbase = false;
    mutable bool qmdisubwindow_focusnextchild_isbase = false;
    mutable bool qmdisubwindow_focuspreviouschild_isbase = false;
    mutable bool qmdisubwindow_sender_isbase = false;
    mutable bool qmdisubwindow_sendersignalindex_isbase = false;
    mutable bool qmdisubwindow_receivers_isbase = false;
    mutable bool qmdisubwindow_issignalconnected_isbase = false;
    mutable bool qmdisubwindow_getdecodedmetricf_isbase = false;

  public:
    VirtualQMdiSubWindow(QWidget* parent) : QMdiSubWindow(parent) {};
    VirtualQMdiSubWindow() : QMdiSubWindow() {};
    VirtualQMdiSubWindow(QWidget* parent, Qt::WindowFlags flags) : QMdiSubWindow(parent, flags) {};

    // Callback setters
    inline void setQMdiSubWindow_MetaObject_Callback(QMdiSubWindow_MetaObject_Callback cb) { qmdisubwindow_metaobject_callback = cb; }
    inline void setQMdiSubWindow_Metacast_Callback(QMdiSubWindow_Metacast_Callback cb) { qmdisubwindow_metacast_callback = cb; }
    inline void setQMdiSubWindow_Metacall_Callback(QMdiSubWindow_Metacall_Callback cb) { qmdisubwindow_metacall_callback = cb; }
    inline void setQMdiSubWindow_SizeHint_Callback(QMdiSubWindow_SizeHint_Callback cb) { qmdisubwindow_sizehint_callback = cb; }
    inline void setQMdiSubWindow_MinimumSizeHint_Callback(QMdiSubWindow_MinimumSizeHint_Callback cb) { qmdisubwindow_minimumsizehint_callback = cb; }
    inline void setQMdiSubWindow_EventFilter_Callback(QMdiSubWindow_EventFilter_Callback cb) { qmdisubwindow_eventfilter_callback = cb; }
    inline void setQMdiSubWindow_Event_Callback(QMdiSubWindow_Event_Callback cb) { qmdisubwindow_event_callback = cb; }
    inline void setQMdiSubWindow_ShowEvent_Callback(QMdiSubWindow_ShowEvent_Callback cb) { qmdisubwindow_showevent_callback = cb; }
    inline void setQMdiSubWindow_HideEvent_Callback(QMdiSubWindow_HideEvent_Callback cb) { qmdisubwindow_hideevent_callback = cb; }
    inline void setQMdiSubWindow_ChangeEvent_Callback(QMdiSubWindow_ChangeEvent_Callback cb) { qmdisubwindow_changeevent_callback = cb; }
    inline void setQMdiSubWindow_CloseEvent_Callback(QMdiSubWindow_CloseEvent_Callback cb) { qmdisubwindow_closeevent_callback = cb; }
    inline void setQMdiSubWindow_LeaveEvent_Callback(QMdiSubWindow_LeaveEvent_Callback cb) { qmdisubwindow_leaveevent_callback = cb; }
    inline void setQMdiSubWindow_ResizeEvent_Callback(QMdiSubWindow_ResizeEvent_Callback cb) { qmdisubwindow_resizeevent_callback = cb; }
    inline void setQMdiSubWindow_TimerEvent_Callback(QMdiSubWindow_TimerEvent_Callback cb) { qmdisubwindow_timerevent_callback = cb; }
    inline void setQMdiSubWindow_MoveEvent_Callback(QMdiSubWindow_MoveEvent_Callback cb) { qmdisubwindow_moveevent_callback = cb; }
    inline void setQMdiSubWindow_PaintEvent_Callback(QMdiSubWindow_PaintEvent_Callback cb) { qmdisubwindow_paintevent_callback = cb; }
    inline void setQMdiSubWindow_MousePressEvent_Callback(QMdiSubWindow_MousePressEvent_Callback cb) { qmdisubwindow_mousepressevent_callback = cb; }
    inline void setQMdiSubWindow_MouseDoubleClickEvent_Callback(QMdiSubWindow_MouseDoubleClickEvent_Callback cb) { qmdisubwindow_mousedoubleclickevent_callback = cb; }
    inline void setQMdiSubWindow_MouseReleaseEvent_Callback(QMdiSubWindow_MouseReleaseEvent_Callback cb) { qmdisubwindow_mousereleaseevent_callback = cb; }
    inline void setQMdiSubWindow_MouseMoveEvent_Callback(QMdiSubWindow_MouseMoveEvent_Callback cb) { qmdisubwindow_mousemoveevent_callback = cb; }
    inline void setQMdiSubWindow_KeyPressEvent_Callback(QMdiSubWindow_KeyPressEvent_Callback cb) { qmdisubwindow_keypressevent_callback = cb; }
    inline void setQMdiSubWindow_ContextMenuEvent_Callback(QMdiSubWindow_ContextMenuEvent_Callback cb) { qmdisubwindow_contextmenuevent_callback = cb; }
    inline void setQMdiSubWindow_FocusInEvent_Callback(QMdiSubWindow_FocusInEvent_Callback cb) { qmdisubwindow_focusinevent_callback = cb; }
    inline void setQMdiSubWindow_FocusOutEvent_Callback(QMdiSubWindow_FocusOutEvent_Callback cb) { qmdisubwindow_focusoutevent_callback = cb; }
    inline void setQMdiSubWindow_ChildEvent_Callback(QMdiSubWindow_ChildEvent_Callback cb) { qmdisubwindow_childevent_callback = cb; }
    inline void setQMdiSubWindow_DevType_Callback(QMdiSubWindow_DevType_Callback cb) { qmdisubwindow_devtype_callback = cb; }
    inline void setQMdiSubWindow_SetVisible_Callback(QMdiSubWindow_SetVisible_Callback cb) { qmdisubwindow_setvisible_callback = cb; }
    inline void setQMdiSubWindow_HeightForWidth_Callback(QMdiSubWindow_HeightForWidth_Callback cb) { qmdisubwindow_heightforwidth_callback = cb; }
    inline void setQMdiSubWindow_HasHeightForWidth_Callback(QMdiSubWindow_HasHeightForWidth_Callback cb) { qmdisubwindow_hasheightforwidth_callback = cb; }
    inline void setQMdiSubWindow_PaintEngine_Callback(QMdiSubWindow_PaintEngine_Callback cb) { qmdisubwindow_paintengine_callback = cb; }
    inline void setQMdiSubWindow_WheelEvent_Callback(QMdiSubWindow_WheelEvent_Callback cb) { qmdisubwindow_wheelevent_callback = cb; }
    inline void setQMdiSubWindow_KeyReleaseEvent_Callback(QMdiSubWindow_KeyReleaseEvent_Callback cb) { qmdisubwindow_keyreleaseevent_callback = cb; }
    inline void setQMdiSubWindow_EnterEvent_Callback(QMdiSubWindow_EnterEvent_Callback cb) { qmdisubwindow_enterevent_callback = cb; }
    inline void setQMdiSubWindow_TabletEvent_Callback(QMdiSubWindow_TabletEvent_Callback cb) { qmdisubwindow_tabletevent_callback = cb; }
    inline void setQMdiSubWindow_ActionEvent_Callback(QMdiSubWindow_ActionEvent_Callback cb) { qmdisubwindow_actionevent_callback = cb; }
    inline void setQMdiSubWindow_DragEnterEvent_Callback(QMdiSubWindow_DragEnterEvent_Callback cb) { qmdisubwindow_dragenterevent_callback = cb; }
    inline void setQMdiSubWindow_DragMoveEvent_Callback(QMdiSubWindow_DragMoveEvent_Callback cb) { qmdisubwindow_dragmoveevent_callback = cb; }
    inline void setQMdiSubWindow_DragLeaveEvent_Callback(QMdiSubWindow_DragLeaveEvent_Callback cb) { qmdisubwindow_dragleaveevent_callback = cb; }
    inline void setQMdiSubWindow_DropEvent_Callback(QMdiSubWindow_DropEvent_Callback cb) { qmdisubwindow_dropevent_callback = cb; }
    inline void setQMdiSubWindow_NativeEvent_Callback(QMdiSubWindow_NativeEvent_Callback cb) { qmdisubwindow_nativeevent_callback = cb; }
    inline void setQMdiSubWindow_Metric_Callback(QMdiSubWindow_Metric_Callback cb) { qmdisubwindow_metric_callback = cb; }
    inline void setQMdiSubWindow_InitPainter_Callback(QMdiSubWindow_InitPainter_Callback cb) { qmdisubwindow_initpainter_callback = cb; }
    inline void setQMdiSubWindow_Redirected_Callback(QMdiSubWindow_Redirected_Callback cb) { qmdisubwindow_redirected_callback = cb; }
    inline void setQMdiSubWindow_SharedPainter_Callback(QMdiSubWindow_SharedPainter_Callback cb) { qmdisubwindow_sharedpainter_callback = cb; }
    inline void setQMdiSubWindow_InputMethodEvent_Callback(QMdiSubWindow_InputMethodEvent_Callback cb) { qmdisubwindow_inputmethodevent_callback = cb; }
    inline void setQMdiSubWindow_InputMethodQuery_Callback(QMdiSubWindow_InputMethodQuery_Callback cb) { qmdisubwindow_inputmethodquery_callback = cb; }
    inline void setQMdiSubWindow_FocusNextPrevChild_Callback(QMdiSubWindow_FocusNextPrevChild_Callback cb) { qmdisubwindow_focusnextprevchild_callback = cb; }
    inline void setQMdiSubWindow_CustomEvent_Callback(QMdiSubWindow_CustomEvent_Callback cb) { qmdisubwindow_customevent_callback = cb; }
    inline void setQMdiSubWindow_ConnectNotify_Callback(QMdiSubWindow_ConnectNotify_Callback cb) { qmdisubwindow_connectnotify_callback = cb; }
    inline void setQMdiSubWindow_DisconnectNotify_Callback(QMdiSubWindow_DisconnectNotify_Callback cb) { qmdisubwindow_disconnectnotify_callback = cb; }
    inline void setQMdiSubWindow_UpdateMicroFocus_Callback(QMdiSubWindow_UpdateMicroFocus_Callback cb) { qmdisubwindow_updatemicrofocus_callback = cb; }
    inline void setQMdiSubWindow_Create_Callback(QMdiSubWindow_Create_Callback cb) { qmdisubwindow_create_callback = cb; }
    inline void setQMdiSubWindow_Destroy_Callback(QMdiSubWindow_Destroy_Callback cb) { qmdisubwindow_destroy_callback = cb; }
    inline void setQMdiSubWindow_FocusNextChild_Callback(QMdiSubWindow_FocusNextChild_Callback cb) { qmdisubwindow_focusnextchild_callback = cb; }
    inline void setQMdiSubWindow_FocusPreviousChild_Callback(QMdiSubWindow_FocusPreviousChild_Callback cb) { qmdisubwindow_focuspreviouschild_callback = cb; }
    inline void setQMdiSubWindow_Sender_Callback(QMdiSubWindow_Sender_Callback cb) { qmdisubwindow_sender_callback = cb; }
    inline void setQMdiSubWindow_SenderSignalIndex_Callback(QMdiSubWindow_SenderSignalIndex_Callback cb) { qmdisubwindow_sendersignalindex_callback = cb; }
    inline void setQMdiSubWindow_Receivers_Callback(QMdiSubWindow_Receivers_Callback cb) { qmdisubwindow_receivers_callback = cb; }
    inline void setQMdiSubWindow_IsSignalConnected_Callback(QMdiSubWindow_IsSignalConnected_Callback cb) { qmdisubwindow_issignalconnected_callback = cb; }
    inline void setQMdiSubWindow_GetDecodedMetricF_Callback(QMdiSubWindow_GetDecodedMetricF_Callback cb) { qmdisubwindow_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQMdiSubWindow_MetaObject_IsBase(bool value) const { qmdisubwindow_metaobject_isbase = value; }
    inline void setQMdiSubWindow_Metacast_IsBase(bool value) const { qmdisubwindow_metacast_isbase = value; }
    inline void setQMdiSubWindow_Metacall_IsBase(bool value) const { qmdisubwindow_metacall_isbase = value; }
    inline void setQMdiSubWindow_SizeHint_IsBase(bool value) const { qmdisubwindow_sizehint_isbase = value; }
    inline void setQMdiSubWindow_MinimumSizeHint_IsBase(bool value) const { qmdisubwindow_minimumsizehint_isbase = value; }
    inline void setQMdiSubWindow_EventFilter_IsBase(bool value) const { qmdisubwindow_eventfilter_isbase = value; }
    inline void setQMdiSubWindow_Event_IsBase(bool value) const { qmdisubwindow_event_isbase = value; }
    inline void setQMdiSubWindow_ShowEvent_IsBase(bool value) const { qmdisubwindow_showevent_isbase = value; }
    inline void setQMdiSubWindow_HideEvent_IsBase(bool value) const { qmdisubwindow_hideevent_isbase = value; }
    inline void setQMdiSubWindow_ChangeEvent_IsBase(bool value) const { qmdisubwindow_changeevent_isbase = value; }
    inline void setQMdiSubWindow_CloseEvent_IsBase(bool value) const { qmdisubwindow_closeevent_isbase = value; }
    inline void setQMdiSubWindow_LeaveEvent_IsBase(bool value) const { qmdisubwindow_leaveevent_isbase = value; }
    inline void setQMdiSubWindow_ResizeEvent_IsBase(bool value) const { qmdisubwindow_resizeevent_isbase = value; }
    inline void setQMdiSubWindow_TimerEvent_IsBase(bool value) const { qmdisubwindow_timerevent_isbase = value; }
    inline void setQMdiSubWindow_MoveEvent_IsBase(bool value) const { qmdisubwindow_moveevent_isbase = value; }
    inline void setQMdiSubWindow_PaintEvent_IsBase(bool value) const { qmdisubwindow_paintevent_isbase = value; }
    inline void setQMdiSubWindow_MousePressEvent_IsBase(bool value) const { qmdisubwindow_mousepressevent_isbase = value; }
    inline void setQMdiSubWindow_MouseDoubleClickEvent_IsBase(bool value) const { qmdisubwindow_mousedoubleclickevent_isbase = value; }
    inline void setQMdiSubWindow_MouseReleaseEvent_IsBase(bool value) const { qmdisubwindow_mousereleaseevent_isbase = value; }
    inline void setQMdiSubWindow_MouseMoveEvent_IsBase(bool value) const { qmdisubwindow_mousemoveevent_isbase = value; }
    inline void setQMdiSubWindow_KeyPressEvent_IsBase(bool value) const { qmdisubwindow_keypressevent_isbase = value; }
    inline void setQMdiSubWindow_ContextMenuEvent_IsBase(bool value) const { qmdisubwindow_contextmenuevent_isbase = value; }
    inline void setQMdiSubWindow_FocusInEvent_IsBase(bool value) const { qmdisubwindow_focusinevent_isbase = value; }
    inline void setQMdiSubWindow_FocusOutEvent_IsBase(bool value) const { qmdisubwindow_focusoutevent_isbase = value; }
    inline void setQMdiSubWindow_ChildEvent_IsBase(bool value) const { qmdisubwindow_childevent_isbase = value; }
    inline void setQMdiSubWindow_DevType_IsBase(bool value) const { qmdisubwindow_devtype_isbase = value; }
    inline void setQMdiSubWindow_SetVisible_IsBase(bool value) const { qmdisubwindow_setvisible_isbase = value; }
    inline void setQMdiSubWindow_HeightForWidth_IsBase(bool value) const { qmdisubwindow_heightforwidth_isbase = value; }
    inline void setQMdiSubWindow_HasHeightForWidth_IsBase(bool value) const { qmdisubwindow_hasheightforwidth_isbase = value; }
    inline void setQMdiSubWindow_PaintEngine_IsBase(bool value) const { qmdisubwindow_paintengine_isbase = value; }
    inline void setQMdiSubWindow_WheelEvent_IsBase(bool value) const { qmdisubwindow_wheelevent_isbase = value; }
    inline void setQMdiSubWindow_KeyReleaseEvent_IsBase(bool value) const { qmdisubwindow_keyreleaseevent_isbase = value; }
    inline void setQMdiSubWindow_EnterEvent_IsBase(bool value) const { qmdisubwindow_enterevent_isbase = value; }
    inline void setQMdiSubWindow_TabletEvent_IsBase(bool value) const { qmdisubwindow_tabletevent_isbase = value; }
    inline void setQMdiSubWindow_ActionEvent_IsBase(bool value) const { qmdisubwindow_actionevent_isbase = value; }
    inline void setQMdiSubWindow_DragEnterEvent_IsBase(bool value) const { qmdisubwindow_dragenterevent_isbase = value; }
    inline void setQMdiSubWindow_DragMoveEvent_IsBase(bool value) const { qmdisubwindow_dragmoveevent_isbase = value; }
    inline void setQMdiSubWindow_DragLeaveEvent_IsBase(bool value) const { qmdisubwindow_dragleaveevent_isbase = value; }
    inline void setQMdiSubWindow_DropEvent_IsBase(bool value) const { qmdisubwindow_dropevent_isbase = value; }
    inline void setQMdiSubWindow_NativeEvent_IsBase(bool value) const { qmdisubwindow_nativeevent_isbase = value; }
    inline void setQMdiSubWindow_Metric_IsBase(bool value) const { qmdisubwindow_metric_isbase = value; }
    inline void setQMdiSubWindow_InitPainter_IsBase(bool value) const { qmdisubwindow_initpainter_isbase = value; }
    inline void setQMdiSubWindow_Redirected_IsBase(bool value) const { qmdisubwindow_redirected_isbase = value; }
    inline void setQMdiSubWindow_SharedPainter_IsBase(bool value) const { qmdisubwindow_sharedpainter_isbase = value; }
    inline void setQMdiSubWindow_InputMethodEvent_IsBase(bool value) const { qmdisubwindow_inputmethodevent_isbase = value; }
    inline void setQMdiSubWindow_InputMethodQuery_IsBase(bool value) const { qmdisubwindow_inputmethodquery_isbase = value; }
    inline void setQMdiSubWindow_FocusNextPrevChild_IsBase(bool value) const { qmdisubwindow_focusnextprevchild_isbase = value; }
    inline void setQMdiSubWindow_CustomEvent_IsBase(bool value) const { qmdisubwindow_customevent_isbase = value; }
    inline void setQMdiSubWindow_ConnectNotify_IsBase(bool value) const { qmdisubwindow_connectnotify_isbase = value; }
    inline void setQMdiSubWindow_DisconnectNotify_IsBase(bool value) const { qmdisubwindow_disconnectnotify_isbase = value; }
    inline void setQMdiSubWindow_UpdateMicroFocus_IsBase(bool value) const { qmdisubwindow_updatemicrofocus_isbase = value; }
    inline void setQMdiSubWindow_Create_IsBase(bool value) const { qmdisubwindow_create_isbase = value; }
    inline void setQMdiSubWindow_Destroy_IsBase(bool value) const { qmdisubwindow_destroy_isbase = value; }
    inline void setQMdiSubWindow_FocusNextChild_IsBase(bool value) const { qmdisubwindow_focusnextchild_isbase = value; }
    inline void setQMdiSubWindow_FocusPreviousChild_IsBase(bool value) const { qmdisubwindow_focuspreviouschild_isbase = value; }
    inline void setQMdiSubWindow_Sender_IsBase(bool value) const { qmdisubwindow_sender_isbase = value; }
    inline void setQMdiSubWindow_SenderSignalIndex_IsBase(bool value) const { qmdisubwindow_sendersignalindex_isbase = value; }
    inline void setQMdiSubWindow_Receivers_IsBase(bool value) const { qmdisubwindow_receivers_isbase = value; }
    inline void setQMdiSubWindow_IsSignalConnected_IsBase(bool value) const { qmdisubwindow_issignalconnected_isbase = value; }
    inline void setQMdiSubWindow_GetDecodedMetricF_IsBase(bool value) const { qmdisubwindow_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qmdisubwindow_metaobject_isbase) {
            qmdisubwindow_metaobject_isbase = false;
            return QMdiSubWindow::metaObject();
        }
        auto metaobject_cb = qmdisubwindow_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QMdiSubWindow::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qmdisubwindow_metacast_isbase) {
            qmdisubwindow_metacast_isbase = false;
            return QMdiSubWindow::qt_metacast(param1);
        }
        auto metacast_cb = qmdisubwindow_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QMdiSubWindow::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmdisubwindow_metacall_isbase) {
            qmdisubwindow_metacall_isbase = false;
            return QMdiSubWindow::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qmdisubwindow_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QMdiSubWindow::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qmdisubwindow_sizehint_isbase) {
            qmdisubwindow_sizehint_isbase = false;
            return QMdiSubWindow::sizeHint();
        }
        auto sizehint_cb = qmdisubwindow_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QMdiSubWindow::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qmdisubwindow_minimumsizehint_isbase) {
            qmdisubwindow_minimumsizehint_isbase = false;
            return QMdiSubWindow::minimumSizeHint();
        }
        auto minimumsizehint_cb = qmdisubwindow_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QMdiSubWindow::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qmdisubwindow_eventfilter_isbase) {
            qmdisubwindow_eventfilter_isbase = false;
            return QMdiSubWindow::eventFilter(object, event);
        }
        auto eventfilter_cb = qmdisubwindow_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QMdiSubWindow::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmdisubwindow_event_isbase) {
            qmdisubwindow_event_isbase = false;
            return QMdiSubWindow::event(event);
        }
        auto event_cb = qmdisubwindow_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QMdiSubWindow::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* showEvent) override {
        if (qmdisubwindow_showevent_isbase) {
            qmdisubwindow_showevent_isbase = false;
            QMdiSubWindow::showEvent(showEvent);
            return;
        }
        auto showevent_cb = qmdisubwindow_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = showEvent;

            showevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::showEvent(showEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* hideEvent) override {
        if (qmdisubwindow_hideevent_isbase) {
            qmdisubwindow_hideevent_isbase = false;
            QMdiSubWindow::hideEvent(hideEvent);
            return;
        }
        auto hideevent_cb = qmdisubwindow_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = hideEvent;

            hideevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::hideEvent(hideEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* changeEvent) override {
        if (qmdisubwindow_changeevent_isbase) {
            qmdisubwindow_changeevent_isbase = false;
            QMdiSubWindow::changeEvent(changeEvent);
            return;
        }
        auto changeevent_cb = qmdisubwindow_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = changeEvent;

            changeevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::changeEvent(changeEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* closeEvent) override {
        if (qmdisubwindow_closeevent_isbase) {
            qmdisubwindow_closeevent_isbase = false;
            QMdiSubWindow::closeEvent(closeEvent);
            return;
        }
        auto closeevent_cb = qmdisubwindow_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = closeEvent;

            closeevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::closeEvent(closeEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* leaveEvent) override {
        if (qmdisubwindow_leaveevent_isbase) {
            qmdisubwindow_leaveevent_isbase = false;
            QMdiSubWindow::leaveEvent(leaveEvent);
            return;
        }
        auto leaveevent_cb = qmdisubwindow_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = leaveEvent;

            leaveevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::leaveEvent(leaveEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* resizeEvent) override {
        if (qmdisubwindow_resizeevent_isbase) {
            qmdisubwindow_resizeevent_isbase = false;
            QMdiSubWindow::resizeEvent(resizeEvent);
            return;
        }
        auto resizeevent_cb = qmdisubwindow_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = resizeEvent;

            resizeevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::resizeEvent(resizeEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* timerEvent) override {
        if (qmdisubwindow_timerevent_isbase) {
            qmdisubwindow_timerevent_isbase = false;
            QMdiSubWindow::timerEvent(timerEvent);
            return;
        }
        auto timerevent_cb = qmdisubwindow_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = timerEvent;

            timerevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::timerEvent(timerEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* moveEvent) override {
        if (qmdisubwindow_moveevent_isbase) {
            qmdisubwindow_moveevent_isbase = false;
            QMdiSubWindow::moveEvent(moveEvent);
            return;
        }
        auto moveevent_cb = qmdisubwindow_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = moveEvent;

            moveevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::moveEvent(moveEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* paintEvent) override {
        if (qmdisubwindow_paintevent_isbase) {
            qmdisubwindow_paintevent_isbase = false;
            QMdiSubWindow::paintEvent(paintEvent);
            return;
        }
        auto paintevent_cb = qmdisubwindow_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = paintEvent;

            paintevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::paintEvent(paintEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* mouseEvent) override {
        if (qmdisubwindow_mousepressevent_isbase) {
            qmdisubwindow_mousepressevent_isbase = false;
            QMdiSubWindow::mousePressEvent(mouseEvent);
            return;
        }
        auto mousepressevent_cb = qmdisubwindow_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = mouseEvent;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::mousePressEvent(mouseEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* mouseEvent) override {
        if (qmdisubwindow_mousedoubleclickevent_isbase) {
            qmdisubwindow_mousedoubleclickevent_isbase = false;
            QMdiSubWindow::mouseDoubleClickEvent(mouseEvent);
            return;
        }
        auto mousedoubleclickevent_cb = qmdisubwindow_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = mouseEvent;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::mouseDoubleClickEvent(mouseEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* mouseEvent) override {
        if (qmdisubwindow_mousereleaseevent_isbase) {
            qmdisubwindow_mousereleaseevent_isbase = false;
            QMdiSubWindow::mouseReleaseEvent(mouseEvent);
            return;
        }
        auto mousereleaseevent_cb = qmdisubwindow_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = mouseEvent;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::mouseReleaseEvent(mouseEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* mouseEvent) override {
        if (qmdisubwindow_mousemoveevent_isbase) {
            qmdisubwindow_mousemoveevent_isbase = false;
            QMdiSubWindow::mouseMoveEvent(mouseEvent);
            return;
        }
        auto mousemoveevent_cb = qmdisubwindow_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = mouseEvent;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::mouseMoveEvent(mouseEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* keyEvent) override {
        if (qmdisubwindow_keypressevent_isbase) {
            qmdisubwindow_keypressevent_isbase = false;
            QMdiSubWindow::keyPressEvent(keyEvent);
            return;
        }
        auto keypressevent_cb = qmdisubwindow_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = keyEvent;

            keypressevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::keyPressEvent(keyEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* contextMenuEvent) override {
        if (qmdisubwindow_contextmenuevent_isbase) {
            qmdisubwindow_contextmenuevent_isbase = false;
            QMdiSubWindow::contextMenuEvent(contextMenuEvent);
            return;
        }
        auto contextmenuevent_cb = qmdisubwindow_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = contextMenuEvent;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::contextMenuEvent(contextMenuEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* focusInEvent) override {
        if (qmdisubwindow_focusinevent_isbase) {
            qmdisubwindow_focusinevent_isbase = false;
            QMdiSubWindow::focusInEvent(focusInEvent);
            return;
        }
        auto focusinevent_cb = qmdisubwindow_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = focusInEvent;

            focusinevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::focusInEvent(focusInEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* focusOutEvent) override {
        if (qmdisubwindow_focusoutevent_isbase) {
            qmdisubwindow_focusoutevent_isbase = false;
            QMdiSubWindow::focusOutEvent(focusOutEvent);
            return;
        }
        auto focusoutevent_cb = qmdisubwindow_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = focusOutEvent;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::focusOutEvent(focusOutEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* childEvent) override {
        if (qmdisubwindow_childevent_isbase) {
            qmdisubwindow_childevent_isbase = false;
            QMdiSubWindow::childEvent(childEvent);
            return;
        }
        auto childevent_cb = qmdisubwindow_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = childEvent;

            childevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::childEvent(childEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qmdisubwindow_devtype_isbase) {
            qmdisubwindow_devtype_isbase = false;
            return QMdiSubWindow::devType();
        }
        auto devtype_cb = qmdisubwindow_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QMdiSubWindow::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qmdisubwindow_setvisible_isbase) {
            qmdisubwindow_setvisible_isbase = false;
            QMdiSubWindow::setVisible(visible);
            return;
        }
        auto setvisible_cb = qmdisubwindow_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qmdisubwindow_heightforwidth_isbase) {
            qmdisubwindow_heightforwidth_isbase = false;
            return QMdiSubWindow::heightForWidth(param1);
        }
        auto heightforwidth_cb = qmdisubwindow_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMdiSubWindow::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qmdisubwindow_hasheightforwidth_isbase) {
            qmdisubwindow_hasheightforwidth_isbase = false;
            return QMdiSubWindow::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qmdisubwindow_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QMdiSubWindow::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qmdisubwindow_paintengine_isbase) {
            qmdisubwindow_paintengine_isbase = false;
            return QMdiSubWindow::paintEngine();
        }
        auto paintengine_cb = qmdisubwindow_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QMdiSubWindow::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qmdisubwindow_wheelevent_isbase) {
            qmdisubwindow_wheelevent_isbase = false;
            QMdiSubWindow::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qmdisubwindow_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qmdisubwindow_keyreleaseevent_isbase) {
            qmdisubwindow_keyreleaseevent_isbase = false;
            QMdiSubWindow::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qmdisubwindow_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qmdisubwindow_enterevent_isbase) {
            qmdisubwindow_enterevent_isbase = false;
            QMdiSubWindow::enterEvent(event);
            return;
        }
        auto enterevent_cb = qmdisubwindow_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qmdisubwindow_tabletevent_isbase) {
            qmdisubwindow_tabletevent_isbase = false;
            QMdiSubWindow::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qmdisubwindow_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qmdisubwindow_actionevent_isbase) {
            qmdisubwindow_actionevent_isbase = false;
            QMdiSubWindow::actionEvent(event);
            return;
        }
        auto actionevent_cb = qmdisubwindow_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qmdisubwindow_dragenterevent_isbase) {
            qmdisubwindow_dragenterevent_isbase = false;
            QMdiSubWindow::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qmdisubwindow_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qmdisubwindow_dragmoveevent_isbase) {
            qmdisubwindow_dragmoveevent_isbase = false;
            QMdiSubWindow::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qmdisubwindow_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qmdisubwindow_dragleaveevent_isbase) {
            qmdisubwindow_dragleaveevent_isbase = false;
            QMdiSubWindow::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qmdisubwindow_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qmdisubwindow_dropevent_isbase) {
            qmdisubwindow_dropevent_isbase = false;
            QMdiSubWindow::dropEvent(event);
            return;
        }
        auto dropevent_cb = qmdisubwindow_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qmdisubwindow_nativeevent_isbase) {
            qmdisubwindow_nativeevent_isbase = false;
            return QMdiSubWindow::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qmdisubwindow_nativeevent_callback;
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
        return QMdiSubWindow::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qmdisubwindow_metric_isbase) {
            qmdisubwindow_metric_isbase = false;
            return QMdiSubWindow::metric(param1);
        }
        auto metric_cb = qmdisubwindow_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMdiSubWindow::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qmdisubwindow_initpainter_isbase) {
            qmdisubwindow_initpainter_isbase = false;
            QMdiSubWindow::initPainter(painter);
            return;
        }
        auto initpainter_cb = qmdisubwindow_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qmdisubwindow_redirected_isbase) {
            qmdisubwindow_redirected_isbase = false;
            return QMdiSubWindow::redirected(offset);
        }
        auto redirected_cb = qmdisubwindow_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QMdiSubWindow::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qmdisubwindow_sharedpainter_isbase) {
            qmdisubwindow_sharedpainter_isbase = false;
            return QMdiSubWindow::sharedPainter();
        }
        auto sharedpainter_cb = qmdisubwindow_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QMdiSubWindow::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qmdisubwindow_inputmethodevent_isbase) {
            qmdisubwindow_inputmethodevent_isbase = false;
            QMdiSubWindow::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qmdisubwindow_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qmdisubwindow_inputmethodquery_isbase) {
            qmdisubwindow_inputmethodquery_isbase = false;
            return QMdiSubWindow::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qmdisubwindow_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QMdiSubWindow::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qmdisubwindow_focusnextprevchild_isbase) {
            qmdisubwindow_focusnextprevchild_isbase = false;
            return QMdiSubWindow::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qmdisubwindow_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QMdiSubWindow::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmdisubwindow_customevent_isbase) {
            qmdisubwindow_customevent_isbase = false;
            QMdiSubWindow::customEvent(event);
            return;
        }
        auto customevent_cb = qmdisubwindow_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmdisubwindow_connectnotify_isbase) {
            qmdisubwindow_connectnotify_isbase = false;
            QMdiSubWindow::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qmdisubwindow_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmdisubwindow_disconnectnotify_isbase) {
            qmdisubwindow_disconnectnotify_isbase = false;
            QMdiSubWindow::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qmdisubwindow_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QMdiSubWindow::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qmdisubwindow_updatemicrofocus_isbase) {
            qmdisubwindow_updatemicrofocus_isbase = false;
            QMdiSubWindow::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qmdisubwindow_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QMdiSubWindow::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qmdisubwindow_create_isbase) {
            qmdisubwindow_create_isbase = false;
            QMdiSubWindow::create();
            return;
        }
        auto create_cb = qmdisubwindow_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QMdiSubWindow::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qmdisubwindow_destroy_isbase) {
            qmdisubwindow_destroy_isbase = false;
            QMdiSubWindow::destroy();
            return;
        }
        auto destroy_cb = qmdisubwindow_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QMdiSubWindow::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qmdisubwindow_focusnextchild_isbase) {
            qmdisubwindow_focusnextchild_isbase = false;
            return QMdiSubWindow::focusNextChild();
        }
        auto focusnextchild_cb = qmdisubwindow_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QMdiSubWindow::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qmdisubwindow_focuspreviouschild_isbase) {
            qmdisubwindow_focuspreviouschild_isbase = false;
            return QMdiSubWindow::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qmdisubwindow_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QMdiSubWindow::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qmdisubwindow_sender_isbase) {
            qmdisubwindow_sender_isbase = false;
            return QMdiSubWindow::sender();
        }
        auto sender_cb = qmdisubwindow_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QMdiSubWindow::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qmdisubwindow_sendersignalindex_isbase) {
            qmdisubwindow_sendersignalindex_isbase = false;
            return QMdiSubWindow::senderSignalIndex();
        }
        auto sendersignalindex_cb = qmdisubwindow_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QMdiSubWindow::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qmdisubwindow_receivers_isbase) {
            qmdisubwindow_receivers_isbase = false;
            return QMdiSubWindow::receivers(signal);
        }
        auto receivers_cb = qmdisubwindow_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMdiSubWindow::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qmdisubwindow_issignalconnected_isbase) {
            qmdisubwindow_issignalconnected_isbase = false;
            return QMdiSubWindow::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qmdisubwindow_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QMdiSubWindow::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qmdisubwindow_getdecodedmetricf_isbase) {
            qmdisubwindow_getdecodedmetricf_isbase = false;
            return QMdiSubWindow::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qmdisubwindow_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QMdiSubWindow::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool QMdiSubWindow_EventFilter(QMdiSubWindow* self, QObject* object, QEvent* event);
    friend bool QMdiSubWindow_SuperEventFilter(QMdiSubWindow* self, QObject* object, QEvent* event);
    friend bool QMdiSubWindow_Event(QMdiSubWindow* self, QEvent* event);
    friend bool QMdiSubWindow_SuperEvent(QMdiSubWindow* self, QEvent* event);
    friend void QMdiSubWindow_ShowEvent(QMdiSubWindow* self, QShowEvent* showEvent);
    friend void QMdiSubWindow_SuperShowEvent(QMdiSubWindow* self, QShowEvent* showEvent);
    friend void QMdiSubWindow_HideEvent(QMdiSubWindow* self, QHideEvent* hideEvent);
    friend void QMdiSubWindow_SuperHideEvent(QMdiSubWindow* self, QHideEvent* hideEvent);
    friend void QMdiSubWindow_ChangeEvent(QMdiSubWindow* self, QEvent* changeEvent);
    friend void QMdiSubWindow_SuperChangeEvent(QMdiSubWindow* self, QEvent* changeEvent);
    friend void QMdiSubWindow_CloseEvent(QMdiSubWindow* self, QCloseEvent* closeEvent);
    friend void QMdiSubWindow_SuperCloseEvent(QMdiSubWindow* self, QCloseEvent* closeEvent);
    friend void QMdiSubWindow_LeaveEvent(QMdiSubWindow* self, QEvent* leaveEvent);
    friend void QMdiSubWindow_SuperLeaveEvent(QMdiSubWindow* self, QEvent* leaveEvent);
    friend void QMdiSubWindow_ResizeEvent(QMdiSubWindow* self, QResizeEvent* resizeEvent);
    friend void QMdiSubWindow_SuperResizeEvent(QMdiSubWindow* self, QResizeEvent* resizeEvent);
    friend void QMdiSubWindow_TimerEvent(QMdiSubWindow* self, QTimerEvent* timerEvent);
    friend void QMdiSubWindow_SuperTimerEvent(QMdiSubWindow* self, QTimerEvent* timerEvent);
    friend void QMdiSubWindow_MoveEvent(QMdiSubWindow* self, QMoveEvent* moveEvent);
    friend void QMdiSubWindow_SuperMoveEvent(QMdiSubWindow* self, QMoveEvent* moveEvent);
    friend void QMdiSubWindow_PaintEvent(QMdiSubWindow* self, QPaintEvent* paintEvent);
    friend void QMdiSubWindow_SuperPaintEvent(QMdiSubWindow* self, QPaintEvent* paintEvent);
    friend void QMdiSubWindow_MousePressEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
    friend void QMdiSubWindow_SuperMousePressEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
    friend void QMdiSubWindow_MouseDoubleClickEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
    friend void QMdiSubWindow_SuperMouseDoubleClickEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
    friend void QMdiSubWindow_MouseReleaseEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
    friend void QMdiSubWindow_SuperMouseReleaseEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
    friend void QMdiSubWindow_MouseMoveEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
    friend void QMdiSubWindow_SuperMouseMoveEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
    friend void QMdiSubWindow_KeyPressEvent(QMdiSubWindow* self, QKeyEvent* keyEvent);
    friend void QMdiSubWindow_SuperKeyPressEvent(QMdiSubWindow* self, QKeyEvent* keyEvent);
    friend void QMdiSubWindow_ContextMenuEvent(QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent);
    friend void QMdiSubWindow_SuperContextMenuEvent(QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent);
    friend void QMdiSubWindow_FocusInEvent(QMdiSubWindow* self, QFocusEvent* focusInEvent);
    friend void QMdiSubWindow_SuperFocusInEvent(QMdiSubWindow* self, QFocusEvent* focusInEvent);
    friend void QMdiSubWindow_FocusOutEvent(QMdiSubWindow* self, QFocusEvent* focusOutEvent);
    friend void QMdiSubWindow_SuperFocusOutEvent(QMdiSubWindow* self, QFocusEvent* focusOutEvent);
    friend void QMdiSubWindow_ChildEvent(QMdiSubWindow* self, QChildEvent* childEvent);
    friend void QMdiSubWindow_SuperChildEvent(QMdiSubWindow* self, QChildEvent* childEvent);
    friend void QMdiSubWindow_WheelEvent(QMdiSubWindow* self, QWheelEvent* event);
    friend void QMdiSubWindow_SuperWheelEvent(QMdiSubWindow* self, QWheelEvent* event);
    friend void QMdiSubWindow_KeyReleaseEvent(QMdiSubWindow* self, QKeyEvent* event);
    friend void QMdiSubWindow_SuperKeyReleaseEvent(QMdiSubWindow* self, QKeyEvent* event);
    friend void QMdiSubWindow_EnterEvent(QMdiSubWindow* self, QEnterEvent* event);
    friend void QMdiSubWindow_SuperEnterEvent(QMdiSubWindow* self, QEnterEvent* event);
    friend void QMdiSubWindow_TabletEvent(QMdiSubWindow* self, QTabletEvent* event);
    friend void QMdiSubWindow_SuperTabletEvent(QMdiSubWindow* self, QTabletEvent* event);
    friend void QMdiSubWindow_ActionEvent(QMdiSubWindow* self, QActionEvent* event);
    friend void QMdiSubWindow_SuperActionEvent(QMdiSubWindow* self, QActionEvent* event);
    friend void QMdiSubWindow_DragEnterEvent(QMdiSubWindow* self, QDragEnterEvent* event);
    friend void QMdiSubWindow_SuperDragEnterEvent(QMdiSubWindow* self, QDragEnterEvent* event);
    friend void QMdiSubWindow_DragMoveEvent(QMdiSubWindow* self, QDragMoveEvent* event);
    friend void QMdiSubWindow_SuperDragMoveEvent(QMdiSubWindow* self, QDragMoveEvent* event);
    friend void QMdiSubWindow_DragLeaveEvent(QMdiSubWindow* self, QDragLeaveEvent* event);
    friend void QMdiSubWindow_SuperDragLeaveEvent(QMdiSubWindow* self, QDragLeaveEvent* event);
    friend void QMdiSubWindow_DropEvent(QMdiSubWindow* self, QDropEvent* event);
    friend void QMdiSubWindow_SuperDropEvent(QMdiSubWindow* self, QDropEvent* event);
    friend bool QMdiSubWindow_NativeEvent(QMdiSubWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QMdiSubWindow_SuperNativeEvent(QMdiSubWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QMdiSubWindow_Metric(const QMdiSubWindow* self, int param1);
    friend int QMdiSubWindow_SuperMetric(const QMdiSubWindow* self, int param1);
    friend void QMdiSubWindow_InitPainter(const QMdiSubWindow* self, QPainter* painter);
    friend void QMdiSubWindow_SuperInitPainter(const QMdiSubWindow* self, QPainter* painter);
    friend QPaintDevice* QMdiSubWindow_Redirected(const QMdiSubWindow* self, QPoint* offset);
    friend QPaintDevice* QMdiSubWindow_SuperRedirected(const QMdiSubWindow* self, QPoint* offset);
    friend QPainter* QMdiSubWindow_SharedPainter(const QMdiSubWindow* self);
    friend QPainter* QMdiSubWindow_SuperSharedPainter(const QMdiSubWindow* self);
    friend void QMdiSubWindow_InputMethodEvent(QMdiSubWindow* self, QInputMethodEvent* param1);
    friend void QMdiSubWindow_SuperInputMethodEvent(QMdiSubWindow* self, QInputMethodEvent* param1);
    friend bool QMdiSubWindow_FocusNextPrevChild(QMdiSubWindow* self, bool next);
    friend bool QMdiSubWindow_SuperFocusNextPrevChild(QMdiSubWindow* self, bool next);
    friend void QMdiSubWindow_CustomEvent(QMdiSubWindow* self, QEvent* event);
    friend void QMdiSubWindow_SuperCustomEvent(QMdiSubWindow* self, QEvent* event);
    friend void QMdiSubWindow_ConnectNotify(QMdiSubWindow* self, const QMetaMethod* signal);
    friend void QMdiSubWindow_SuperConnectNotify(QMdiSubWindow* self, const QMetaMethod* signal);
    friend void QMdiSubWindow_DisconnectNotify(QMdiSubWindow* self, const QMetaMethod* signal);
    friend void QMdiSubWindow_SuperDisconnectNotify(QMdiSubWindow* self, const QMetaMethod* signal);
    friend void QMdiSubWindow_UpdateMicroFocus(QMdiSubWindow* self);
    friend void QMdiSubWindow_SuperUpdateMicroFocus(QMdiSubWindow* self);
    friend void QMdiSubWindow_Create(QMdiSubWindow* self);
    friend void QMdiSubWindow_SuperCreate(QMdiSubWindow* self);
    friend void QMdiSubWindow_Destroy(QMdiSubWindow* self);
    friend void QMdiSubWindow_SuperDestroy(QMdiSubWindow* self);
    friend bool QMdiSubWindow_FocusNextChild(QMdiSubWindow* self);
    friend bool QMdiSubWindow_SuperFocusNextChild(QMdiSubWindow* self);
    friend bool QMdiSubWindow_FocusPreviousChild(QMdiSubWindow* self);
    friend bool QMdiSubWindow_SuperFocusPreviousChild(QMdiSubWindow* self);
    friend QObject* QMdiSubWindow_Sender(const QMdiSubWindow* self);
    friend QObject* QMdiSubWindow_SuperSender(const QMdiSubWindow* self);
    friend int QMdiSubWindow_SenderSignalIndex(const QMdiSubWindow* self);
    friend int QMdiSubWindow_SuperSenderSignalIndex(const QMdiSubWindow* self);
    friend int QMdiSubWindow_Receivers(const QMdiSubWindow* self, const char* signal);
    friend int QMdiSubWindow_SuperReceivers(const QMdiSubWindow* self, const char* signal);
    friend bool QMdiSubWindow_IsSignalConnected(const QMdiSubWindow* self, const QMetaMethod* signal);
    friend bool QMdiSubWindow_SuperIsSignalConnected(const QMdiSubWindow* self, const QMetaMethod* signal);
    friend double QMdiSubWindow_GetDecodedMetricF(const QMdiSubWindow* self, int metricA, int metricB);
    friend double QMdiSubWindow_SuperGetDecodedMetricF(const QMdiSubWindow* self, int metricA, int metricB);
};

#endif
