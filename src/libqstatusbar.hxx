#pragma once
#ifndef SRCC_LIBVIRTUALQSTATUSBAR_H
#define SRCC_LIBVIRTUALQSTATUSBAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QStatusBar so that we can call protected methods
class VirtualQStatusBar final : public QStatusBar {

  public:
    // Virtual class boolean flag
    bool isVirtualQStatusBar = true;

    // Virtual class public types (including callbacks)
    using QStatusBar_Metacall_Callback = int (*)(QStatusBar*, int, int, void**);
    using QStatusBar_ShowEvent_Callback = void (*)(QStatusBar*, QShowEvent*);
    using QStatusBar_PaintEvent_Callback = void (*)(QStatusBar*, QPaintEvent*);
    using QStatusBar_ResizeEvent_Callback = void (*)(QStatusBar*, QResizeEvent*);
    using QStatusBar_Event_Callback = bool (*)(QStatusBar*, QEvent*);
    using QStatusBar_DevType_Callback = int (*)();
    using QStatusBar_SetVisible_Callback = void (*)(QStatusBar*, bool);
    using QStatusBar_SizeHint_Callback = QSize* (*)();
    using QStatusBar_MinimumSizeHint_Callback = QSize* (*)();
    using QStatusBar_HeightForWidth_Callback = int (*)(const QStatusBar*, int);
    using QStatusBar_HasHeightForWidth_Callback = bool (*)();
    using QStatusBar_PaintEngine_Callback = QPaintEngine* (*)();
    using QStatusBar_MousePressEvent_Callback = void (*)(QStatusBar*, QMouseEvent*);
    using QStatusBar_MouseReleaseEvent_Callback = void (*)(QStatusBar*, QMouseEvent*);
    using QStatusBar_MouseDoubleClickEvent_Callback = void (*)(QStatusBar*, QMouseEvent*);
    using QStatusBar_MouseMoveEvent_Callback = void (*)(QStatusBar*, QMouseEvent*);
    using QStatusBar_WheelEvent_Callback = void (*)(QStatusBar*, QWheelEvent*);
    using QStatusBar_KeyPressEvent_Callback = void (*)(QStatusBar*, QKeyEvent*);
    using QStatusBar_KeyReleaseEvent_Callback = void (*)(QStatusBar*, QKeyEvent*);
    using QStatusBar_FocusInEvent_Callback = void (*)(QStatusBar*, QFocusEvent*);
    using QStatusBar_FocusOutEvent_Callback = void (*)(QStatusBar*, QFocusEvent*);
    using QStatusBar_EnterEvent_Callback = void (*)(QStatusBar*, QEnterEvent*);
    using QStatusBar_LeaveEvent_Callback = void (*)(QStatusBar*, QEvent*);
    using QStatusBar_MoveEvent_Callback = void (*)(QStatusBar*, QMoveEvent*);
    using QStatusBar_CloseEvent_Callback = void (*)(QStatusBar*, QCloseEvent*);
    using QStatusBar_ContextMenuEvent_Callback = void (*)(QStatusBar*, QContextMenuEvent*);
    using QStatusBar_TabletEvent_Callback = void (*)(QStatusBar*, QTabletEvent*);
    using QStatusBar_ActionEvent_Callback = void (*)(QStatusBar*, QActionEvent*);
    using QStatusBar_DragEnterEvent_Callback = void (*)(QStatusBar*, QDragEnterEvent*);
    using QStatusBar_DragMoveEvent_Callback = void (*)(QStatusBar*, QDragMoveEvent*);
    using QStatusBar_DragLeaveEvent_Callback = void (*)(QStatusBar*, QDragLeaveEvent*);
    using QStatusBar_DropEvent_Callback = void (*)(QStatusBar*, QDropEvent*);
    using QStatusBar_HideEvent_Callback = void (*)(QStatusBar*, QHideEvent*);
    using QStatusBar_NativeEvent_Callback = bool (*)(QStatusBar*, libqt_string, void*, intptr_t*);
    using QStatusBar_ChangeEvent_Callback = void (*)(QStatusBar*, QEvent*);
    using QStatusBar_Metric_Callback = int (*)(const QStatusBar*, int);
    using QStatusBar_InitPainter_Callback = void (*)(const QStatusBar*, QPainter*);
    using QStatusBar_Redirected_Callback = QPaintDevice* (*)(const QStatusBar*, QPoint*);
    using QStatusBar_SharedPainter_Callback = QPainter* (*)();
    using QStatusBar_InputMethodEvent_Callback = void (*)(QStatusBar*, QInputMethodEvent*);
    using QStatusBar_InputMethodQuery_Callback = QVariant* (*)(const QStatusBar*, int);
    using QStatusBar_FocusNextPrevChild_Callback = bool (*)(QStatusBar*, bool);
    using QStatusBar_EventFilter_Callback = bool (*)(QStatusBar*, QObject*, QEvent*);
    using QStatusBar_TimerEvent_Callback = void (*)(QStatusBar*, QTimerEvent*);
    using QStatusBar_ChildEvent_Callback = void (*)(QStatusBar*, QChildEvent*);
    using QStatusBar_CustomEvent_Callback = void (*)(QStatusBar*, QEvent*);
    using QStatusBar_ConnectNotify_Callback = void (*)(QStatusBar*, QMetaMethod*);
    using QStatusBar_DisconnectNotify_Callback = void (*)(QStatusBar*, QMetaMethod*);
    using QStatusBar_Reformat_Callback = void (*)();
    using QStatusBar_HideOrShow_Callback = void (*)();
    using QStatusBar_UpdateMicroFocus_Callback = void (*)();
    using QStatusBar_Create_Callback = void (*)();
    using QStatusBar_Destroy_Callback = void (*)();
    using QStatusBar_FocusNextChild_Callback = bool (*)();
    using QStatusBar_FocusPreviousChild_Callback = bool (*)();
    using QStatusBar_Sender_Callback = QObject* (*)();
    using QStatusBar_SenderSignalIndex_Callback = int (*)();
    using QStatusBar_Receivers_Callback = int (*)(const QStatusBar*, const char*);
    using QStatusBar_IsSignalConnected_Callback = bool (*)(const QStatusBar*, QMetaMethod*);

  protected:
    // Instance callback storage
    QStatusBar_Metacall_Callback qstatusbar_metacall_callback = nullptr;
    QStatusBar_ShowEvent_Callback qstatusbar_showevent_callback = nullptr;
    QStatusBar_PaintEvent_Callback qstatusbar_paintevent_callback = nullptr;
    QStatusBar_ResizeEvent_Callback qstatusbar_resizeevent_callback = nullptr;
    QStatusBar_Event_Callback qstatusbar_event_callback = nullptr;
    QStatusBar_DevType_Callback qstatusbar_devtype_callback = nullptr;
    QStatusBar_SetVisible_Callback qstatusbar_setvisible_callback = nullptr;
    QStatusBar_SizeHint_Callback qstatusbar_sizehint_callback = nullptr;
    QStatusBar_MinimumSizeHint_Callback qstatusbar_minimumsizehint_callback = nullptr;
    QStatusBar_HeightForWidth_Callback qstatusbar_heightforwidth_callback = nullptr;
    QStatusBar_HasHeightForWidth_Callback qstatusbar_hasheightforwidth_callback = nullptr;
    QStatusBar_PaintEngine_Callback qstatusbar_paintengine_callback = nullptr;
    QStatusBar_MousePressEvent_Callback qstatusbar_mousepressevent_callback = nullptr;
    QStatusBar_MouseReleaseEvent_Callback qstatusbar_mousereleaseevent_callback = nullptr;
    QStatusBar_MouseDoubleClickEvent_Callback qstatusbar_mousedoubleclickevent_callback = nullptr;
    QStatusBar_MouseMoveEvent_Callback qstatusbar_mousemoveevent_callback = nullptr;
    QStatusBar_WheelEvent_Callback qstatusbar_wheelevent_callback = nullptr;
    QStatusBar_KeyPressEvent_Callback qstatusbar_keypressevent_callback = nullptr;
    QStatusBar_KeyReleaseEvent_Callback qstatusbar_keyreleaseevent_callback = nullptr;
    QStatusBar_FocusInEvent_Callback qstatusbar_focusinevent_callback = nullptr;
    QStatusBar_FocusOutEvent_Callback qstatusbar_focusoutevent_callback = nullptr;
    QStatusBar_EnterEvent_Callback qstatusbar_enterevent_callback = nullptr;
    QStatusBar_LeaveEvent_Callback qstatusbar_leaveevent_callback = nullptr;
    QStatusBar_MoveEvent_Callback qstatusbar_moveevent_callback = nullptr;
    QStatusBar_CloseEvent_Callback qstatusbar_closeevent_callback = nullptr;
    QStatusBar_ContextMenuEvent_Callback qstatusbar_contextmenuevent_callback = nullptr;
    QStatusBar_TabletEvent_Callback qstatusbar_tabletevent_callback = nullptr;
    QStatusBar_ActionEvent_Callback qstatusbar_actionevent_callback = nullptr;
    QStatusBar_DragEnterEvent_Callback qstatusbar_dragenterevent_callback = nullptr;
    QStatusBar_DragMoveEvent_Callback qstatusbar_dragmoveevent_callback = nullptr;
    QStatusBar_DragLeaveEvent_Callback qstatusbar_dragleaveevent_callback = nullptr;
    QStatusBar_DropEvent_Callback qstatusbar_dropevent_callback = nullptr;
    QStatusBar_HideEvent_Callback qstatusbar_hideevent_callback = nullptr;
    QStatusBar_NativeEvent_Callback qstatusbar_nativeevent_callback = nullptr;
    QStatusBar_ChangeEvent_Callback qstatusbar_changeevent_callback = nullptr;
    QStatusBar_Metric_Callback qstatusbar_metric_callback = nullptr;
    QStatusBar_InitPainter_Callback qstatusbar_initpainter_callback = nullptr;
    QStatusBar_Redirected_Callback qstatusbar_redirected_callback = nullptr;
    QStatusBar_SharedPainter_Callback qstatusbar_sharedpainter_callback = nullptr;
    QStatusBar_InputMethodEvent_Callback qstatusbar_inputmethodevent_callback = nullptr;
    QStatusBar_InputMethodQuery_Callback qstatusbar_inputmethodquery_callback = nullptr;
    QStatusBar_FocusNextPrevChild_Callback qstatusbar_focusnextprevchild_callback = nullptr;
    QStatusBar_EventFilter_Callback qstatusbar_eventfilter_callback = nullptr;
    QStatusBar_TimerEvent_Callback qstatusbar_timerevent_callback = nullptr;
    QStatusBar_ChildEvent_Callback qstatusbar_childevent_callback = nullptr;
    QStatusBar_CustomEvent_Callback qstatusbar_customevent_callback = nullptr;
    QStatusBar_ConnectNotify_Callback qstatusbar_connectnotify_callback = nullptr;
    QStatusBar_DisconnectNotify_Callback qstatusbar_disconnectnotify_callback = nullptr;
    QStatusBar_Reformat_Callback qstatusbar_reformat_callback = nullptr;
    QStatusBar_HideOrShow_Callback qstatusbar_hideorshow_callback = nullptr;
    QStatusBar_UpdateMicroFocus_Callback qstatusbar_updatemicrofocus_callback = nullptr;
    QStatusBar_Create_Callback qstatusbar_create_callback = nullptr;
    QStatusBar_Destroy_Callback qstatusbar_destroy_callback = nullptr;
    QStatusBar_FocusNextChild_Callback qstatusbar_focusnextchild_callback = nullptr;
    QStatusBar_FocusPreviousChild_Callback qstatusbar_focuspreviouschild_callback = nullptr;
    QStatusBar_Sender_Callback qstatusbar_sender_callback = nullptr;
    QStatusBar_SenderSignalIndex_Callback qstatusbar_sendersignalindex_callback = nullptr;
    QStatusBar_Receivers_Callback qstatusbar_receivers_callback = nullptr;
    QStatusBar_IsSignalConnected_Callback qstatusbar_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qstatusbar_metacall_isbase = false;
    mutable bool qstatusbar_showevent_isbase = false;
    mutable bool qstatusbar_paintevent_isbase = false;
    mutable bool qstatusbar_resizeevent_isbase = false;
    mutable bool qstatusbar_event_isbase = false;
    mutable bool qstatusbar_devtype_isbase = false;
    mutable bool qstatusbar_setvisible_isbase = false;
    mutable bool qstatusbar_sizehint_isbase = false;
    mutable bool qstatusbar_minimumsizehint_isbase = false;
    mutable bool qstatusbar_heightforwidth_isbase = false;
    mutable bool qstatusbar_hasheightforwidth_isbase = false;
    mutable bool qstatusbar_paintengine_isbase = false;
    mutable bool qstatusbar_mousepressevent_isbase = false;
    mutable bool qstatusbar_mousereleaseevent_isbase = false;
    mutable bool qstatusbar_mousedoubleclickevent_isbase = false;
    mutable bool qstatusbar_mousemoveevent_isbase = false;
    mutable bool qstatusbar_wheelevent_isbase = false;
    mutable bool qstatusbar_keypressevent_isbase = false;
    mutable bool qstatusbar_keyreleaseevent_isbase = false;
    mutable bool qstatusbar_focusinevent_isbase = false;
    mutable bool qstatusbar_focusoutevent_isbase = false;
    mutable bool qstatusbar_enterevent_isbase = false;
    mutable bool qstatusbar_leaveevent_isbase = false;
    mutable bool qstatusbar_moveevent_isbase = false;
    mutable bool qstatusbar_closeevent_isbase = false;
    mutable bool qstatusbar_contextmenuevent_isbase = false;
    mutable bool qstatusbar_tabletevent_isbase = false;
    mutable bool qstatusbar_actionevent_isbase = false;
    mutable bool qstatusbar_dragenterevent_isbase = false;
    mutable bool qstatusbar_dragmoveevent_isbase = false;
    mutable bool qstatusbar_dragleaveevent_isbase = false;
    mutable bool qstatusbar_dropevent_isbase = false;
    mutable bool qstatusbar_hideevent_isbase = false;
    mutable bool qstatusbar_nativeevent_isbase = false;
    mutable bool qstatusbar_changeevent_isbase = false;
    mutable bool qstatusbar_metric_isbase = false;
    mutable bool qstatusbar_initpainter_isbase = false;
    mutable bool qstatusbar_redirected_isbase = false;
    mutable bool qstatusbar_sharedpainter_isbase = false;
    mutable bool qstatusbar_inputmethodevent_isbase = false;
    mutable bool qstatusbar_inputmethodquery_isbase = false;
    mutable bool qstatusbar_focusnextprevchild_isbase = false;
    mutable bool qstatusbar_eventfilter_isbase = false;
    mutable bool qstatusbar_timerevent_isbase = false;
    mutable bool qstatusbar_childevent_isbase = false;
    mutable bool qstatusbar_customevent_isbase = false;
    mutable bool qstatusbar_connectnotify_isbase = false;
    mutable bool qstatusbar_disconnectnotify_isbase = false;
    mutable bool qstatusbar_reformat_isbase = false;
    mutable bool qstatusbar_hideorshow_isbase = false;
    mutable bool qstatusbar_updatemicrofocus_isbase = false;
    mutable bool qstatusbar_create_isbase = false;
    mutable bool qstatusbar_destroy_isbase = false;
    mutable bool qstatusbar_focusnextchild_isbase = false;
    mutable bool qstatusbar_focuspreviouschild_isbase = false;
    mutable bool qstatusbar_sender_isbase = false;
    mutable bool qstatusbar_sendersignalindex_isbase = false;
    mutable bool qstatusbar_receivers_isbase = false;
    mutable bool qstatusbar_issignalconnected_isbase = false;

  public:
    VirtualQStatusBar(QWidget* parent) : QStatusBar(parent){};
    VirtualQStatusBar() : QStatusBar(){};

    ~VirtualQStatusBar() {
        qstatusbar_metacall_callback = nullptr;
        qstatusbar_showevent_callback = nullptr;
        qstatusbar_paintevent_callback = nullptr;
        qstatusbar_resizeevent_callback = nullptr;
        qstatusbar_event_callback = nullptr;
        qstatusbar_devtype_callback = nullptr;
        qstatusbar_setvisible_callback = nullptr;
        qstatusbar_sizehint_callback = nullptr;
        qstatusbar_minimumsizehint_callback = nullptr;
        qstatusbar_heightforwidth_callback = nullptr;
        qstatusbar_hasheightforwidth_callback = nullptr;
        qstatusbar_paintengine_callback = nullptr;
        qstatusbar_mousepressevent_callback = nullptr;
        qstatusbar_mousereleaseevent_callback = nullptr;
        qstatusbar_mousedoubleclickevent_callback = nullptr;
        qstatusbar_mousemoveevent_callback = nullptr;
        qstatusbar_wheelevent_callback = nullptr;
        qstatusbar_keypressevent_callback = nullptr;
        qstatusbar_keyreleaseevent_callback = nullptr;
        qstatusbar_focusinevent_callback = nullptr;
        qstatusbar_focusoutevent_callback = nullptr;
        qstatusbar_enterevent_callback = nullptr;
        qstatusbar_leaveevent_callback = nullptr;
        qstatusbar_moveevent_callback = nullptr;
        qstatusbar_closeevent_callback = nullptr;
        qstatusbar_contextmenuevent_callback = nullptr;
        qstatusbar_tabletevent_callback = nullptr;
        qstatusbar_actionevent_callback = nullptr;
        qstatusbar_dragenterevent_callback = nullptr;
        qstatusbar_dragmoveevent_callback = nullptr;
        qstatusbar_dragleaveevent_callback = nullptr;
        qstatusbar_dropevent_callback = nullptr;
        qstatusbar_hideevent_callback = nullptr;
        qstatusbar_nativeevent_callback = nullptr;
        qstatusbar_changeevent_callback = nullptr;
        qstatusbar_metric_callback = nullptr;
        qstatusbar_initpainter_callback = nullptr;
        qstatusbar_redirected_callback = nullptr;
        qstatusbar_sharedpainter_callback = nullptr;
        qstatusbar_inputmethodevent_callback = nullptr;
        qstatusbar_inputmethodquery_callback = nullptr;
        qstatusbar_focusnextprevchild_callback = nullptr;
        qstatusbar_eventfilter_callback = nullptr;
        qstatusbar_timerevent_callback = nullptr;
        qstatusbar_childevent_callback = nullptr;
        qstatusbar_customevent_callback = nullptr;
        qstatusbar_connectnotify_callback = nullptr;
        qstatusbar_disconnectnotify_callback = nullptr;
        qstatusbar_reformat_callback = nullptr;
        qstatusbar_hideorshow_callback = nullptr;
        qstatusbar_updatemicrofocus_callback = nullptr;
        qstatusbar_create_callback = nullptr;
        qstatusbar_destroy_callback = nullptr;
        qstatusbar_focusnextchild_callback = nullptr;
        qstatusbar_focuspreviouschild_callback = nullptr;
        qstatusbar_sender_callback = nullptr;
        qstatusbar_sendersignalindex_callback = nullptr;
        qstatusbar_receivers_callback = nullptr;
        qstatusbar_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQStatusBar_Metacall_Callback(QStatusBar_Metacall_Callback cb) { qstatusbar_metacall_callback = cb; }
    inline void setQStatusBar_ShowEvent_Callback(QStatusBar_ShowEvent_Callback cb) { qstatusbar_showevent_callback = cb; }
    inline void setQStatusBar_PaintEvent_Callback(QStatusBar_PaintEvent_Callback cb) { qstatusbar_paintevent_callback = cb; }
    inline void setQStatusBar_ResizeEvent_Callback(QStatusBar_ResizeEvent_Callback cb) { qstatusbar_resizeevent_callback = cb; }
    inline void setQStatusBar_Event_Callback(QStatusBar_Event_Callback cb) { qstatusbar_event_callback = cb; }
    inline void setQStatusBar_DevType_Callback(QStatusBar_DevType_Callback cb) { qstatusbar_devtype_callback = cb; }
    inline void setQStatusBar_SetVisible_Callback(QStatusBar_SetVisible_Callback cb) { qstatusbar_setvisible_callback = cb; }
    inline void setQStatusBar_SizeHint_Callback(QStatusBar_SizeHint_Callback cb) { qstatusbar_sizehint_callback = cb; }
    inline void setQStatusBar_MinimumSizeHint_Callback(QStatusBar_MinimumSizeHint_Callback cb) { qstatusbar_minimumsizehint_callback = cb; }
    inline void setQStatusBar_HeightForWidth_Callback(QStatusBar_HeightForWidth_Callback cb) { qstatusbar_heightforwidth_callback = cb; }
    inline void setQStatusBar_HasHeightForWidth_Callback(QStatusBar_HasHeightForWidth_Callback cb) { qstatusbar_hasheightforwidth_callback = cb; }
    inline void setQStatusBar_PaintEngine_Callback(QStatusBar_PaintEngine_Callback cb) { qstatusbar_paintengine_callback = cb; }
    inline void setQStatusBar_MousePressEvent_Callback(QStatusBar_MousePressEvent_Callback cb) { qstatusbar_mousepressevent_callback = cb; }
    inline void setQStatusBar_MouseReleaseEvent_Callback(QStatusBar_MouseReleaseEvent_Callback cb) { qstatusbar_mousereleaseevent_callback = cb; }
    inline void setQStatusBar_MouseDoubleClickEvent_Callback(QStatusBar_MouseDoubleClickEvent_Callback cb) { qstatusbar_mousedoubleclickevent_callback = cb; }
    inline void setQStatusBar_MouseMoveEvent_Callback(QStatusBar_MouseMoveEvent_Callback cb) { qstatusbar_mousemoveevent_callback = cb; }
    inline void setQStatusBar_WheelEvent_Callback(QStatusBar_WheelEvent_Callback cb) { qstatusbar_wheelevent_callback = cb; }
    inline void setQStatusBar_KeyPressEvent_Callback(QStatusBar_KeyPressEvent_Callback cb) { qstatusbar_keypressevent_callback = cb; }
    inline void setQStatusBar_KeyReleaseEvent_Callback(QStatusBar_KeyReleaseEvent_Callback cb) { qstatusbar_keyreleaseevent_callback = cb; }
    inline void setQStatusBar_FocusInEvent_Callback(QStatusBar_FocusInEvent_Callback cb) { qstatusbar_focusinevent_callback = cb; }
    inline void setQStatusBar_FocusOutEvent_Callback(QStatusBar_FocusOutEvent_Callback cb) { qstatusbar_focusoutevent_callback = cb; }
    inline void setQStatusBar_EnterEvent_Callback(QStatusBar_EnterEvent_Callback cb) { qstatusbar_enterevent_callback = cb; }
    inline void setQStatusBar_LeaveEvent_Callback(QStatusBar_LeaveEvent_Callback cb) { qstatusbar_leaveevent_callback = cb; }
    inline void setQStatusBar_MoveEvent_Callback(QStatusBar_MoveEvent_Callback cb) { qstatusbar_moveevent_callback = cb; }
    inline void setQStatusBar_CloseEvent_Callback(QStatusBar_CloseEvent_Callback cb) { qstatusbar_closeevent_callback = cb; }
    inline void setQStatusBar_ContextMenuEvent_Callback(QStatusBar_ContextMenuEvent_Callback cb) { qstatusbar_contextmenuevent_callback = cb; }
    inline void setQStatusBar_TabletEvent_Callback(QStatusBar_TabletEvent_Callback cb) { qstatusbar_tabletevent_callback = cb; }
    inline void setQStatusBar_ActionEvent_Callback(QStatusBar_ActionEvent_Callback cb) { qstatusbar_actionevent_callback = cb; }
    inline void setQStatusBar_DragEnterEvent_Callback(QStatusBar_DragEnterEvent_Callback cb) { qstatusbar_dragenterevent_callback = cb; }
    inline void setQStatusBar_DragMoveEvent_Callback(QStatusBar_DragMoveEvent_Callback cb) { qstatusbar_dragmoveevent_callback = cb; }
    inline void setQStatusBar_DragLeaveEvent_Callback(QStatusBar_DragLeaveEvent_Callback cb) { qstatusbar_dragleaveevent_callback = cb; }
    inline void setQStatusBar_DropEvent_Callback(QStatusBar_DropEvent_Callback cb) { qstatusbar_dropevent_callback = cb; }
    inline void setQStatusBar_HideEvent_Callback(QStatusBar_HideEvent_Callback cb) { qstatusbar_hideevent_callback = cb; }
    inline void setQStatusBar_NativeEvent_Callback(QStatusBar_NativeEvent_Callback cb) { qstatusbar_nativeevent_callback = cb; }
    inline void setQStatusBar_ChangeEvent_Callback(QStatusBar_ChangeEvent_Callback cb) { qstatusbar_changeevent_callback = cb; }
    inline void setQStatusBar_Metric_Callback(QStatusBar_Metric_Callback cb) { qstatusbar_metric_callback = cb; }
    inline void setQStatusBar_InitPainter_Callback(QStatusBar_InitPainter_Callback cb) { qstatusbar_initpainter_callback = cb; }
    inline void setQStatusBar_Redirected_Callback(QStatusBar_Redirected_Callback cb) { qstatusbar_redirected_callback = cb; }
    inline void setQStatusBar_SharedPainter_Callback(QStatusBar_SharedPainter_Callback cb) { qstatusbar_sharedpainter_callback = cb; }
    inline void setQStatusBar_InputMethodEvent_Callback(QStatusBar_InputMethodEvent_Callback cb) { qstatusbar_inputmethodevent_callback = cb; }
    inline void setQStatusBar_InputMethodQuery_Callback(QStatusBar_InputMethodQuery_Callback cb) { qstatusbar_inputmethodquery_callback = cb; }
    inline void setQStatusBar_FocusNextPrevChild_Callback(QStatusBar_FocusNextPrevChild_Callback cb) { qstatusbar_focusnextprevchild_callback = cb; }
    inline void setQStatusBar_EventFilter_Callback(QStatusBar_EventFilter_Callback cb) { qstatusbar_eventfilter_callback = cb; }
    inline void setQStatusBar_TimerEvent_Callback(QStatusBar_TimerEvent_Callback cb) { qstatusbar_timerevent_callback = cb; }
    inline void setQStatusBar_ChildEvent_Callback(QStatusBar_ChildEvent_Callback cb) { qstatusbar_childevent_callback = cb; }
    inline void setQStatusBar_CustomEvent_Callback(QStatusBar_CustomEvent_Callback cb) { qstatusbar_customevent_callback = cb; }
    inline void setQStatusBar_ConnectNotify_Callback(QStatusBar_ConnectNotify_Callback cb) { qstatusbar_connectnotify_callback = cb; }
    inline void setQStatusBar_DisconnectNotify_Callback(QStatusBar_DisconnectNotify_Callback cb) { qstatusbar_disconnectnotify_callback = cb; }
    inline void setQStatusBar_Reformat_Callback(QStatusBar_Reformat_Callback cb) { qstatusbar_reformat_callback = cb; }
    inline void setQStatusBar_HideOrShow_Callback(QStatusBar_HideOrShow_Callback cb) { qstatusbar_hideorshow_callback = cb; }
    inline void setQStatusBar_UpdateMicroFocus_Callback(QStatusBar_UpdateMicroFocus_Callback cb) { qstatusbar_updatemicrofocus_callback = cb; }
    inline void setQStatusBar_Create_Callback(QStatusBar_Create_Callback cb) { qstatusbar_create_callback = cb; }
    inline void setQStatusBar_Destroy_Callback(QStatusBar_Destroy_Callback cb) { qstatusbar_destroy_callback = cb; }
    inline void setQStatusBar_FocusNextChild_Callback(QStatusBar_FocusNextChild_Callback cb) { qstatusbar_focusnextchild_callback = cb; }
    inline void setQStatusBar_FocusPreviousChild_Callback(QStatusBar_FocusPreviousChild_Callback cb) { qstatusbar_focuspreviouschild_callback = cb; }
    inline void setQStatusBar_Sender_Callback(QStatusBar_Sender_Callback cb) { qstatusbar_sender_callback = cb; }
    inline void setQStatusBar_SenderSignalIndex_Callback(QStatusBar_SenderSignalIndex_Callback cb) { qstatusbar_sendersignalindex_callback = cb; }
    inline void setQStatusBar_Receivers_Callback(QStatusBar_Receivers_Callback cb) { qstatusbar_receivers_callback = cb; }
    inline void setQStatusBar_IsSignalConnected_Callback(QStatusBar_IsSignalConnected_Callback cb) { qstatusbar_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQStatusBar_Metacall_IsBase(bool value) const { qstatusbar_metacall_isbase = value; }
    inline void setQStatusBar_ShowEvent_IsBase(bool value) const { qstatusbar_showevent_isbase = value; }
    inline void setQStatusBar_PaintEvent_IsBase(bool value) const { qstatusbar_paintevent_isbase = value; }
    inline void setQStatusBar_ResizeEvent_IsBase(bool value) const { qstatusbar_resizeevent_isbase = value; }
    inline void setQStatusBar_Event_IsBase(bool value) const { qstatusbar_event_isbase = value; }
    inline void setQStatusBar_DevType_IsBase(bool value) const { qstatusbar_devtype_isbase = value; }
    inline void setQStatusBar_SetVisible_IsBase(bool value) const { qstatusbar_setvisible_isbase = value; }
    inline void setQStatusBar_SizeHint_IsBase(bool value) const { qstatusbar_sizehint_isbase = value; }
    inline void setQStatusBar_MinimumSizeHint_IsBase(bool value) const { qstatusbar_minimumsizehint_isbase = value; }
    inline void setQStatusBar_HeightForWidth_IsBase(bool value) const { qstatusbar_heightforwidth_isbase = value; }
    inline void setQStatusBar_HasHeightForWidth_IsBase(bool value) const { qstatusbar_hasheightforwidth_isbase = value; }
    inline void setQStatusBar_PaintEngine_IsBase(bool value) const { qstatusbar_paintengine_isbase = value; }
    inline void setQStatusBar_MousePressEvent_IsBase(bool value) const { qstatusbar_mousepressevent_isbase = value; }
    inline void setQStatusBar_MouseReleaseEvent_IsBase(bool value) const { qstatusbar_mousereleaseevent_isbase = value; }
    inline void setQStatusBar_MouseDoubleClickEvent_IsBase(bool value) const { qstatusbar_mousedoubleclickevent_isbase = value; }
    inline void setQStatusBar_MouseMoveEvent_IsBase(bool value) const { qstatusbar_mousemoveevent_isbase = value; }
    inline void setQStatusBar_WheelEvent_IsBase(bool value) const { qstatusbar_wheelevent_isbase = value; }
    inline void setQStatusBar_KeyPressEvent_IsBase(bool value) const { qstatusbar_keypressevent_isbase = value; }
    inline void setQStatusBar_KeyReleaseEvent_IsBase(bool value) const { qstatusbar_keyreleaseevent_isbase = value; }
    inline void setQStatusBar_FocusInEvent_IsBase(bool value) const { qstatusbar_focusinevent_isbase = value; }
    inline void setQStatusBar_FocusOutEvent_IsBase(bool value) const { qstatusbar_focusoutevent_isbase = value; }
    inline void setQStatusBar_EnterEvent_IsBase(bool value) const { qstatusbar_enterevent_isbase = value; }
    inline void setQStatusBar_LeaveEvent_IsBase(bool value) const { qstatusbar_leaveevent_isbase = value; }
    inline void setQStatusBar_MoveEvent_IsBase(bool value) const { qstatusbar_moveevent_isbase = value; }
    inline void setQStatusBar_CloseEvent_IsBase(bool value) const { qstatusbar_closeevent_isbase = value; }
    inline void setQStatusBar_ContextMenuEvent_IsBase(bool value) const { qstatusbar_contextmenuevent_isbase = value; }
    inline void setQStatusBar_TabletEvent_IsBase(bool value) const { qstatusbar_tabletevent_isbase = value; }
    inline void setQStatusBar_ActionEvent_IsBase(bool value) const { qstatusbar_actionevent_isbase = value; }
    inline void setQStatusBar_DragEnterEvent_IsBase(bool value) const { qstatusbar_dragenterevent_isbase = value; }
    inline void setQStatusBar_DragMoveEvent_IsBase(bool value) const { qstatusbar_dragmoveevent_isbase = value; }
    inline void setQStatusBar_DragLeaveEvent_IsBase(bool value) const { qstatusbar_dragleaveevent_isbase = value; }
    inline void setQStatusBar_DropEvent_IsBase(bool value) const { qstatusbar_dropevent_isbase = value; }
    inline void setQStatusBar_HideEvent_IsBase(bool value) const { qstatusbar_hideevent_isbase = value; }
    inline void setQStatusBar_NativeEvent_IsBase(bool value) const { qstatusbar_nativeevent_isbase = value; }
    inline void setQStatusBar_ChangeEvent_IsBase(bool value) const { qstatusbar_changeevent_isbase = value; }
    inline void setQStatusBar_Metric_IsBase(bool value) const { qstatusbar_metric_isbase = value; }
    inline void setQStatusBar_InitPainter_IsBase(bool value) const { qstatusbar_initpainter_isbase = value; }
    inline void setQStatusBar_Redirected_IsBase(bool value) const { qstatusbar_redirected_isbase = value; }
    inline void setQStatusBar_SharedPainter_IsBase(bool value) const { qstatusbar_sharedpainter_isbase = value; }
    inline void setQStatusBar_InputMethodEvent_IsBase(bool value) const { qstatusbar_inputmethodevent_isbase = value; }
    inline void setQStatusBar_InputMethodQuery_IsBase(bool value) const { qstatusbar_inputmethodquery_isbase = value; }
    inline void setQStatusBar_FocusNextPrevChild_IsBase(bool value) const { qstatusbar_focusnextprevchild_isbase = value; }
    inline void setQStatusBar_EventFilter_IsBase(bool value) const { qstatusbar_eventfilter_isbase = value; }
    inline void setQStatusBar_TimerEvent_IsBase(bool value) const { qstatusbar_timerevent_isbase = value; }
    inline void setQStatusBar_ChildEvent_IsBase(bool value) const { qstatusbar_childevent_isbase = value; }
    inline void setQStatusBar_CustomEvent_IsBase(bool value) const { qstatusbar_customevent_isbase = value; }
    inline void setQStatusBar_ConnectNotify_IsBase(bool value) const { qstatusbar_connectnotify_isbase = value; }
    inline void setQStatusBar_DisconnectNotify_IsBase(bool value) const { qstatusbar_disconnectnotify_isbase = value; }
    inline void setQStatusBar_Reformat_IsBase(bool value) const { qstatusbar_reformat_isbase = value; }
    inline void setQStatusBar_HideOrShow_IsBase(bool value) const { qstatusbar_hideorshow_isbase = value; }
    inline void setQStatusBar_UpdateMicroFocus_IsBase(bool value) const { qstatusbar_updatemicrofocus_isbase = value; }
    inline void setQStatusBar_Create_IsBase(bool value) const { qstatusbar_create_isbase = value; }
    inline void setQStatusBar_Destroy_IsBase(bool value) const { qstatusbar_destroy_isbase = value; }
    inline void setQStatusBar_FocusNextChild_IsBase(bool value) const { qstatusbar_focusnextchild_isbase = value; }
    inline void setQStatusBar_FocusPreviousChild_IsBase(bool value) const { qstatusbar_focuspreviouschild_isbase = value; }
    inline void setQStatusBar_Sender_IsBase(bool value) const { qstatusbar_sender_isbase = value; }
    inline void setQStatusBar_SenderSignalIndex_IsBase(bool value) const { qstatusbar_sendersignalindex_isbase = value; }
    inline void setQStatusBar_Receivers_IsBase(bool value) const { qstatusbar_receivers_isbase = value; }
    inline void setQStatusBar_IsSignalConnected_IsBase(bool value) const { qstatusbar_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstatusbar_metacall_isbase) {
            qstatusbar_metacall_isbase = false;
            return QStatusBar::qt_metacall(param1, param2, param3);
        } else if (qstatusbar_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qstatusbar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QStatusBar::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qstatusbar_showevent_isbase) {
            qstatusbar_showevent_isbase = false;
            QStatusBar::showEvent(param1);
        } else if (qstatusbar_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            qstatusbar_showevent_callback(this, cbval1);
        } else {
            QStatusBar::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qstatusbar_paintevent_isbase) {
            qstatusbar_paintevent_isbase = false;
            QStatusBar::paintEvent(param1);
        } else if (qstatusbar_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            qstatusbar_paintevent_callback(this, cbval1);
        } else {
            QStatusBar::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qstatusbar_resizeevent_isbase) {
            qstatusbar_resizeevent_isbase = false;
            QStatusBar::resizeEvent(param1);
        } else if (qstatusbar_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            qstatusbar_resizeevent_callback(this, cbval1);
        } else {
            QStatusBar::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qstatusbar_event_isbase) {
            qstatusbar_event_isbase = false;
            return QStatusBar::event(param1);
        } else if (qstatusbar_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = qstatusbar_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QStatusBar::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qstatusbar_devtype_isbase) {
            qstatusbar_devtype_isbase = false;
            return QStatusBar::devType();
        } else if (qstatusbar_devtype_callback != nullptr) {
            int callback_ret = qstatusbar_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QStatusBar::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qstatusbar_setvisible_isbase) {
            qstatusbar_setvisible_isbase = false;
            QStatusBar::setVisible(visible);
        } else if (qstatusbar_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qstatusbar_setvisible_callback(this, cbval1);
        } else {
            QStatusBar::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qstatusbar_sizehint_isbase) {
            qstatusbar_sizehint_isbase = false;
            return QStatusBar::sizeHint();
        } else if (qstatusbar_sizehint_callback != nullptr) {
            QSize* callback_ret = qstatusbar_sizehint_callback();
            return *callback_ret;
        } else {
            return QStatusBar::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qstatusbar_minimumsizehint_isbase) {
            qstatusbar_minimumsizehint_isbase = false;
            return QStatusBar::minimumSizeHint();
        } else if (qstatusbar_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qstatusbar_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QStatusBar::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qstatusbar_heightforwidth_isbase) {
            qstatusbar_heightforwidth_isbase = false;
            return QStatusBar::heightForWidth(param1);
        } else if (qstatusbar_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qstatusbar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QStatusBar::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qstatusbar_hasheightforwidth_isbase) {
            qstatusbar_hasheightforwidth_isbase = false;
            return QStatusBar::hasHeightForWidth();
        } else if (qstatusbar_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qstatusbar_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QStatusBar::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qstatusbar_paintengine_isbase) {
            qstatusbar_paintengine_isbase = false;
            return QStatusBar::paintEngine();
        } else if (qstatusbar_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qstatusbar_paintengine_callback();
            return callback_ret;
        } else {
            return QStatusBar::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qstatusbar_mousepressevent_isbase) {
            qstatusbar_mousepressevent_isbase = false;
            QStatusBar::mousePressEvent(event);
        } else if (qstatusbar_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qstatusbar_mousepressevent_callback(this, cbval1);
        } else {
            QStatusBar::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qstatusbar_mousereleaseevent_isbase) {
            qstatusbar_mousereleaseevent_isbase = false;
            QStatusBar::mouseReleaseEvent(event);
        } else if (qstatusbar_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qstatusbar_mousereleaseevent_callback(this, cbval1);
        } else {
            QStatusBar::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qstatusbar_mousedoubleclickevent_isbase) {
            qstatusbar_mousedoubleclickevent_isbase = false;
            QStatusBar::mouseDoubleClickEvent(event);
        } else if (qstatusbar_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qstatusbar_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QStatusBar::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qstatusbar_mousemoveevent_isbase) {
            qstatusbar_mousemoveevent_isbase = false;
            QStatusBar::mouseMoveEvent(event);
        } else if (qstatusbar_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qstatusbar_mousemoveevent_callback(this, cbval1);
        } else {
            QStatusBar::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qstatusbar_wheelevent_isbase) {
            qstatusbar_wheelevent_isbase = false;
            QStatusBar::wheelEvent(event);
        } else if (qstatusbar_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qstatusbar_wheelevent_callback(this, cbval1);
        } else {
            QStatusBar::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qstatusbar_keypressevent_isbase) {
            qstatusbar_keypressevent_isbase = false;
            QStatusBar::keyPressEvent(event);
        } else if (qstatusbar_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qstatusbar_keypressevent_callback(this, cbval1);
        } else {
            QStatusBar::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qstatusbar_keyreleaseevent_isbase) {
            qstatusbar_keyreleaseevent_isbase = false;
            QStatusBar::keyReleaseEvent(event);
        } else if (qstatusbar_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qstatusbar_keyreleaseevent_callback(this, cbval1);
        } else {
            QStatusBar::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qstatusbar_focusinevent_isbase) {
            qstatusbar_focusinevent_isbase = false;
            QStatusBar::focusInEvent(event);
        } else if (qstatusbar_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qstatusbar_focusinevent_callback(this, cbval1);
        } else {
            QStatusBar::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qstatusbar_focusoutevent_isbase) {
            qstatusbar_focusoutevent_isbase = false;
            QStatusBar::focusOutEvent(event);
        } else if (qstatusbar_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qstatusbar_focusoutevent_callback(this, cbval1);
        } else {
            QStatusBar::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qstatusbar_enterevent_isbase) {
            qstatusbar_enterevent_isbase = false;
            QStatusBar::enterEvent(event);
        } else if (qstatusbar_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qstatusbar_enterevent_callback(this, cbval1);
        } else {
            QStatusBar::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qstatusbar_leaveevent_isbase) {
            qstatusbar_leaveevent_isbase = false;
            QStatusBar::leaveEvent(event);
        } else if (qstatusbar_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qstatusbar_leaveevent_callback(this, cbval1);
        } else {
            QStatusBar::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qstatusbar_moveevent_isbase) {
            qstatusbar_moveevent_isbase = false;
            QStatusBar::moveEvent(event);
        } else if (qstatusbar_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qstatusbar_moveevent_callback(this, cbval1);
        } else {
            QStatusBar::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qstatusbar_closeevent_isbase) {
            qstatusbar_closeevent_isbase = false;
            QStatusBar::closeEvent(event);
        } else if (qstatusbar_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qstatusbar_closeevent_callback(this, cbval1);
        } else {
            QStatusBar::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qstatusbar_contextmenuevent_isbase) {
            qstatusbar_contextmenuevent_isbase = false;
            QStatusBar::contextMenuEvent(event);
        } else if (qstatusbar_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qstatusbar_contextmenuevent_callback(this, cbval1);
        } else {
            QStatusBar::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qstatusbar_tabletevent_isbase) {
            qstatusbar_tabletevent_isbase = false;
            QStatusBar::tabletEvent(event);
        } else if (qstatusbar_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qstatusbar_tabletevent_callback(this, cbval1);
        } else {
            QStatusBar::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qstatusbar_actionevent_isbase) {
            qstatusbar_actionevent_isbase = false;
            QStatusBar::actionEvent(event);
        } else if (qstatusbar_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qstatusbar_actionevent_callback(this, cbval1);
        } else {
            QStatusBar::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qstatusbar_dragenterevent_isbase) {
            qstatusbar_dragenterevent_isbase = false;
            QStatusBar::dragEnterEvent(event);
        } else if (qstatusbar_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qstatusbar_dragenterevent_callback(this, cbval1);
        } else {
            QStatusBar::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qstatusbar_dragmoveevent_isbase) {
            qstatusbar_dragmoveevent_isbase = false;
            QStatusBar::dragMoveEvent(event);
        } else if (qstatusbar_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qstatusbar_dragmoveevent_callback(this, cbval1);
        } else {
            QStatusBar::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qstatusbar_dragleaveevent_isbase) {
            qstatusbar_dragleaveevent_isbase = false;
            QStatusBar::dragLeaveEvent(event);
        } else if (qstatusbar_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qstatusbar_dragleaveevent_callback(this, cbval1);
        } else {
            QStatusBar::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qstatusbar_dropevent_isbase) {
            qstatusbar_dropevent_isbase = false;
            QStatusBar::dropEvent(event);
        } else if (qstatusbar_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qstatusbar_dropevent_callback(this, cbval1);
        } else {
            QStatusBar::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qstatusbar_hideevent_isbase) {
            qstatusbar_hideevent_isbase = false;
            QStatusBar::hideEvent(event);
        } else if (qstatusbar_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qstatusbar_hideevent_callback(this, cbval1);
        } else {
            QStatusBar::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qstatusbar_nativeevent_isbase) {
            qstatusbar_nativeevent_isbase = false;
            return QStatusBar::nativeEvent(eventType, message, result);
        } else if (qstatusbar_nativeevent_callback != nullptr) {
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

            bool callback_ret = qstatusbar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QStatusBar::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qstatusbar_changeevent_isbase) {
            qstatusbar_changeevent_isbase = false;
            QStatusBar::changeEvent(param1);
        } else if (qstatusbar_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qstatusbar_changeevent_callback(this, cbval1);
        } else {
            QStatusBar::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qstatusbar_metric_isbase) {
            qstatusbar_metric_isbase = false;
            return QStatusBar::metric(param1);
        } else if (qstatusbar_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qstatusbar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QStatusBar::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qstatusbar_initpainter_isbase) {
            qstatusbar_initpainter_isbase = false;
            QStatusBar::initPainter(painter);
        } else if (qstatusbar_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qstatusbar_initpainter_callback(this, cbval1);
        } else {
            QStatusBar::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qstatusbar_redirected_isbase) {
            qstatusbar_redirected_isbase = false;
            return QStatusBar::redirected(offset);
        } else if (qstatusbar_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qstatusbar_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QStatusBar::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qstatusbar_sharedpainter_isbase) {
            qstatusbar_sharedpainter_isbase = false;
            return QStatusBar::sharedPainter();
        } else if (qstatusbar_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qstatusbar_sharedpainter_callback();
            return callback_ret;
        } else {
            return QStatusBar::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qstatusbar_inputmethodevent_isbase) {
            qstatusbar_inputmethodevent_isbase = false;
            QStatusBar::inputMethodEvent(param1);
        } else if (qstatusbar_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qstatusbar_inputmethodevent_callback(this, cbval1);
        } else {
            QStatusBar::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qstatusbar_inputmethodquery_isbase) {
            qstatusbar_inputmethodquery_isbase = false;
            return QStatusBar::inputMethodQuery(param1);
        } else if (qstatusbar_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qstatusbar_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QStatusBar::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qstatusbar_focusnextprevchild_isbase) {
            qstatusbar_focusnextprevchild_isbase = false;
            return QStatusBar::focusNextPrevChild(next);
        } else if (qstatusbar_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qstatusbar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QStatusBar::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstatusbar_eventfilter_isbase) {
            qstatusbar_eventfilter_isbase = false;
            return QStatusBar::eventFilter(watched, event);
        } else if (qstatusbar_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qstatusbar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QStatusBar::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstatusbar_timerevent_isbase) {
            qstatusbar_timerevent_isbase = false;
            QStatusBar::timerEvent(event);
        } else if (qstatusbar_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qstatusbar_timerevent_callback(this, cbval1);
        } else {
            QStatusBar::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstatusbar_childevent_isbase) {
            qstatusbar_childevent_isbase = false;
            QStatusBar::childEvent(event);
        } else if (qstatusbar_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qstatusbar_childevent_callback(this, cbval1);
        } else {
            QStatusBar::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstatusbar_customevent_isbase) {
            qstatusbar_customevent_isbase = false;
            QStatusBar::customEvent(event);
        } else if (qstatusbar_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qstatusbar_customevent_callback(this, cbval1);
        } else {
            QStatusBar::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstatusbar_connectnotify_isbase) {
            qstatusbar_connectnotify_isbase = false;
            QStatusBar::connectNotify(signal);
        } else if (qstatusbar_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qstatusbar_connectnotify_callback(this, cbval1);
        } else {
            QStatusBar::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstatusbar_disconnectnotify_isbase) {
            qstatusbar_disconnectnotify_isbase = false;
            QStatusBar::disconnectNotify(signal);
        } else if (qstatusbar_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qstatusbar_disconnectnotify_callback(this, cbval1);
        } else {
            QStatusBar::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void reformat() {
        if (qstatusbar_reformat_isbase) {
            qstatusbar_reformat_isbase = false;
            QStatusBar::reformat();
        } else if (qstatusbar_reformat_callback != nullptr) {
            qstatusbar_reformat_callback();
        } else {
            QStatusBar::reformat();
        }
    }

    // Virtual method for C ABI access and custom callback
    void hideOrShow() {
        if (qstatusbar_hideorshow_isbase) {
            qstatusbar_hideorshow_isbase = false;
            QStatusBar::hideOrShow();
        } else if (qstatusbar_hideorshow_callback != nullptr) {
            qstatusbar_hideorshow_callback();
        } else {
            QStatusBar::hideOrShow();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qstatusbar_updatemicrofocus_isbase) {
            qstatusbar_updatemicrofocus_isbase = false;
            QStatusBar::updateMicroFocus();
        } else if (qstatusbar_updatemicrofocus_callback != nullptr) {
            qstatusbar_updatemicrofocus_callback();
        } else {
            QStatusBar::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qstatusbar_create_isbase) {
            qstatusbar_create_isbase = false;
            QStatusBar::create();
        } else if (qstatusbar_create_callback != nullptr) {
            qstatusbar_create_callback();
        } else {
            QStatusBar::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qstatusbar_destroy_isbase) {
            qstatusbar_destroy_isbase = false;
            QStatusBar::destroy();
        } else if (qstatusbar_destroy_callback != nullptr) {
            qstatusbar_destroy_callback();
        } else {
            QStatusBar::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qstatusbar_focusnextchild_isbase) {
            qstatusbar_focusnextchild_isbase = false;
            return QStatusBar::focusNextChild();
        } else if (qstatusbar_focusnextchild_callback != nullptr) {
            bool callback_ret = qstatusbar_focusnextchild_callback();
            return callback_ret;
        } else {
            return QStatusBar::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qstatusbar_focuspreviouschild_isbase) {
            qstatusbar_focuspreviouschild_isbase = false;
            return QStatusBar::focusPreviousChild();
        } else if (qstatusbar_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qstatusbar_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QStatusBar::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qstatusbar_sender_isbase) {
            qstatusbar_sender_isbase = false;
            return QStatusBar::sender();
        } else if (qstatusbar_sender_callback != nullptr) {
            QObject* callback_ret = qstatusbar_sender_callback();
            return callback_ret;
        } else {
            return QStatusBar::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qstatusbar_sendersignalindex_isbase) {
            qstatusbar_sendersignalindex_isbase = false;
            return QStatusBar::senderSignalIndex();
        } else if (qstatusbar_sendersignalindex_callback != nullptr) {
            int callback_ret = qstatusbar_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QStatusBar::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qstatusbar_receivers_isbase) {
            qstatusbar_receivers_isbase = false;
            return QStatusBar::receivers(signal);
        } else if (qstatusbar_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qstatusbar_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QStatusBar::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qstatusbar_issignalconnected_isbase) {
            qstatusbar_issignalconnected_isbase = false;
            return QStatusBar::isSignalConnected(signal);
        } else if (qstatusbar_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qstatusbar_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QStatusBar::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QStatusBar_ShowEvent(QStatusBar* self, QShowEvent* param1);
    friend void QStatusBar_QBaseShowEvent(QStatusBar* self, QShowEvent* param1);
    friend void QStatusBar_PaintEvent(QStatusBar* self, QPaintEvent* param1);
    friend void QStatusBar_QBasePaintEvent(QStatusBar* self, QPaintEvent* param1);
    friend void QStatusBar_ResizeEvent(QStatusBar* self, QResizeEvent* param1);
    friend void QStatusBar_QBaseResizeEvent(QStatusBar* self, QResizeEvent* param1);
    friend bool QStatusBar_Event(QStatusBar* self, QEvent* param1);
    friend bool QStatusBar_QBaseEvent(QStatusBar* self, QEvent* param1);
    friend void QStatusBar_MousePressEvent(QStatusBar* self, QMouseEvent* event);
    friend void QStatusBar_QBaseMousePressEvent(QStatusBar* self, QMouseEvent* event);
    friend void QStatusBar_MouseReleaseEvent(QStatusBar* self, QMouseEvent* event);
    friend void QStatusBar_QBaseMouseReleaseEvent(QStatusBar* self, QMouseEvent* event);
    friend void QStatusBar_MouseDoubleClickEvent(QStatusBar* self, QMouseEvent* event);
    friend void QStatusBar_QBaseMouseDoubleClickEvent(QStatusBar* self, QMouseEvent* event);
    friend void QStatusBar_MouseMoveEvent(QStatusBar* self, QMouseEvent* event);
    friend void QStatusBar_QBaseMouseMoveEvent(QStatusBar* self, QMouseEvent* event);
    friend void QStatusBar_WheelEvent(QStatusBar* self, QWheelEvent* event);
    friend void QStatusBar_QBaseWheelEvent(QStatusBar* self, QWheelEvent* event);
    friend void QStatusBar_KeyPressEvent(QStatusBar* self, QKeyEvent* event);
    friend void QStatusBar_QBaseKeyPressEvent(QStatusBar* self, QKeyEvent* event);
    friend void QStatusBar_KeyReleaseEvent(QStatusBar* self, QKeyEvent* event);
    friend void QStatusBar_QBaseKeyReleaseEvent(QStatusBar* self, QKeyEvent* event);
    friend void QStatusBar_FocusInEvent(QStatusBar* self, QFocusEvent* event);
    friend void QStatusBar_QBaseFocusInEvent(QStatusBar* self, QFocusEvent* event);
    friend void QStatusBar_FocusOutEvent(QStatusBar* self, QFocusEvent* event);
    friend void QStatusBar_QBaseFocusOutEvent(QStatusBar* self, QFocusEvent* event);
    friend void QStatusBar_EnterEvent(QStatusBar* self, QEnterEvent* event);
    friend void QStatusBar_QBaseEnterEvent(QStatusBar* self, QEnterEvent* event);
    friend void QStatusBar_LeaveEvent(QStatusBar* self, QEvent* event);
    friend void QStatusBar_QBaseLeaveEvent(QStatusBar* self, QEvent* event);
    friend void QStatusBar_MoveEvent(QStatusBar* self, QMoveEvent* event);
    friend void QStatusBar_QBaseMoveEvent(QStatusBar* self, QMoveEvent* event);
    friend void QStatusBar_CloseEvent(QStatusBar* self, QCloseEvent* event);
    friend void QStatusBar_QBaseCloseEvent(QStatusBar* self, QCloseEvent* event);
    friend void QStatusBar_ContextMenuEvent(QStatusBar* self, QContextMenuEvent* event);
    friend void QStatusBar_QBaseContextMenuEvent(QStatusBar* self, QContextMenuEvent* event);
    friend void QStatusBar_TabletEvent(QStatusBar* self, QTabletEvent* event);
    friend void QStatusBar_QBaseTabletEvent(QStatusBar* self, QTabletEvent* event);
    friend void QStatusBar_ActionEvent(QStatusBar* self, QActionEvent* event);
    friend void QStatusBar_QBaseActionEvent(QStatusBar* self, QActionEvent* event);
    friend void QStatusBar_DragEnterEvent(QStatusBar* self, QDragEnterEvent* event);
    friend void QStatusBar_QBaseDragEnterEvent(QStatusBar* self, QDragEnterEvent* event);
    friend void QStatusBar_DragMoveEvent(QStatusBar* self, QDragMoveEvent* event);
    friend void QStatusBar_QBaseDragMoveEvent(QStatusBar* self, QDragMoveEvent* event);
    friend void QStatusBar_DragLeaveEvent(QStatusBar* self, QDragLeaveEvent* event);
    friend void QStatusBar_QBaseDragLeaveEvent(QStatusBar* self, QDragLeaveEvent* event);
    friend void QStatusBar_DropEvent(QStatusBar* self, QDropEvent* event);
    friend void QStatusBar_QBaseDropEvent(QStatusBar* self, QDropEvent* event);
    friend void QStatusBar_HideEvent(QStatusBar* self, QHideEvent* event);
    friend void QStatusBar_QBaseHideEvent(QStatusBar* self, QHideEvent* event);
    friend bool QStatusBar_NativeEvent(QStatusBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QStatusBar_QBaseNativeEvent(QStatusBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QStatusBar_ChangeEvent(QStatusBar* self, QEvent* param1);
    friend void QStatusBar_QBaseChangeEvent(QStatusBar* self, QEvent* param1);
    friend int QStatusBar_Metric(const QStatusBar* self, int param1);
    friend int QStatusBar_QBaseMetric(const QStatusBar* self, int param1);
    friend void QStatusBar_InitPainter(const QStatusBar* self, QPainter* painter);
    friend void QStatusBar_QBaseInitPainter(const QStatusBar* self, QPainter* painter);
    friend QPaintDevice* QStatusBar_Redirected(const QStatusBar* self, QPoint* offset);
    friend QPaintDevice* QStatusBar_QBaseRedirected(const QStatusBar* self, QPoint* offset);
    friend QPainter* QStatusBar_SharedPainter(const QStatusBar* self);
    friend QPainter* QStatusBar_QBaseSharedPainter(const QStatusBar* self);
    friend void QStatusBar_InputMethodEvent(QStatusBar* self, QInputMethodEvent* param1);
    friend void QStatusBar_QBaseInputMethodEvent(QStatusBar* self, QInputMethodEvent* param1);
    friend bool QStatusBar_FocusNextPrevChild(QStatusBar* self, bool next);
    friend bool QStatusBar_QBaseFocusNextPrevChild(QStatusBar* self, bool next);
    friend void QStatusBar_TimerEvent(QStatusBar* self, QTimerEvent* event);
    friend void QStatusBar_QBaseTimerEvent(QStatusBar* self, QTimerEvent* event);
    friend void QStatusBar_ChildEvent(QStatusBar* self, QChildEvent* event);
    friend void QStatusBar_QBaseChildEvent(QStatusBar* self, QChildEvent* event);
    friend void QStatusBar_CustomEvent(QStatusBar* self, QEvent* event);
    friend void QStatusBar_QBaseCustomEvent(QStatusBar* self, QEvent* event);
    friend void QStatusBar_ConnectNotify(QStatusBar* self, const QMetaMethod* signal);
    friend void QStatusBar_QBaseConnectNotify(QStatusBar* self, const QMetaMethod* signal);
    friend void QStatusBar_DisconnectNotify(QStatusBar* self, const QMetaMethod* signal);
    friend void QStatusBar_QBaseDisconnectNotify(QStatusBar* self, const QMetaMethod* signal);
    friend void QStatusBar_Reformat(QStatusBar* self);
    friend void QStatusBar_QBaseReformat(QStatusBar* self);
    friend void QStatusBar_HideOrShow(QStatusBar* self);
    friend void QStatusBar_QBaseHideOrShow(QStatusBar* self);
    friend void QStatusBar_UpdateMicroFocus(QStatusBar* self);
    friend void QStatusBar_QBaseUpdateMicroFocus(QStatusBar* self);
    friend void QStatusBar_Create(QStatusBar* self);
    friend void QStatusBar_QBaseCreate(QStatusBar* self);
    friend void QStatusBar_Destroy(QStatusBar* self);
    friend void QStatusBar_QBaseDestroy(QStatusBar* self);
    friend bool QStatusBar_FocusNextChild(QStatusBar* self);
    friend bool QStatusBar_QBaseFocusNextChild(QStatusBar* self);
    friend bool QStatusBar_FocusPreviousChild(QStatusBar* self);
    friend bool QStatusBar_QBaseFocusPreviousChild(QStatusBar* self);
    friend QObject* QStatusBar_Sender(const QStatusBar* self);
    friend QObject* QStatusBar_QBaseSender(const QStatusBar* self);
    friend int QStatusBar_SenderSignalIndex(const QStatusBar* self);
    friend int QStatusBar_QBaseSenderSignalIndex(const QStatusBar* self);
    friend int QStatusBar_Receivers(const QStatusBar* self, const char* signal);
    friend int QStatusBar_QBaseReceivers(const QStatusBar* self, const char* signal);
    friend bool QStatusBar_IsSignalConnected(const QStatusBar* self, const QMetaMethod* signal);
    friend bool QStatusBar_QBaseIsSignalConnected(const QStatusBar* self, const QMetaMethod* signal);
};

#endif
