#pragma once
#ifndef SRCC_LIBVIRTUALQPROGRESSBAR_H
#define SRCC_LIBVIRTUALQPROGRESSBAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QProgressBar so that we can call protected methods
class VirtualQProgressBar final : public QProgressBar {

  public:
    // Virtual class boolean flag
    bool isVirtualQProgressBar = true;

    // Virtual class public types (including callbacks)
    using QProgressBar_Metacall_Callback = int (*)(QProgressBar*, int, int, void**);
    using QProgressBar_Text_Callback = libqt_string (*)();
    using QProgressBar_SizeHint_Callback = QSize* (*)();
    using QProgressBar_MinimumSizeHint_Callback = QSize* (*)();
    using QProgressBar_Event_Callback = bool (*)(QProgressBar*, QEvent*);
    using QProgressBar_PaintEvent_Callback = void (*)(QProgressBar*, QPaintEvent*);
    using QProgressBar_InitStyleOption_Callback = void (*)(const QProgressBar*, QStyleOptionProgressBar*);
    using QProgressBar_DevType_Callback = int (*)();
    using QProgressBar_SetVisible_Callback = void (*)(QProgressBar*, bool);
    using QProgressBar_HeightForWidth_Callback = int (*)(const QProgressBar*, int);
    using QProgressBar_HasHeightForWidth_Callback = bool (*)();
    using QProgressBar_PaintEngine_Callback = QPaintEngine* (*)();
    using QProgressBar_MousePressEvent_Callback = void (*)(QProgressBar*, QMouseEvent*);
    using QProgressBar_MouseReleaseEvent_Callback = void (*)(QProgressBar*, QMouseEvent*);
    using QProgressBar_MouseDoubleClickEvent_Callback = void (*)(QProgressBar*, QMouseEvent*);
    using QProgressBar_MouseMoveEvent_Callback = void (*)(QProgressBar*, QMouseEvent*);
    using QProgressBar_WheelEvent_Callback = void (*)(QProgressBar*, QWheelEvent*);
    using QProgressBar_KeyPressEvent_Callback = void (*)(QProgressBar*, QKeyEvent*);
    using QProgressBar_KeyReleaseEvent_Callback = void (*)(QProgressBar*, QKeyEvent*);
    using QProgressBar_FocusInEvent_Callback = void (*)(QProgressBar*, QFocusEvent*);
    using QProgressBar_FocusOutEvent_Callback = void (*)(QProgressBar*, QFocusEvent*);
    using QProgressBar_EnterEvent_Callback = void (*)(QProgressBar*, QEnterEvent*);
    using QProgressBar_LeaveEvent_Callback = void (*)(QProgressBar*, QEvent*);
    using QProgressBar_MoveEvent_Callback = void (*)(QProgressBar*, QMoveEvent*);
    using QProgressBar_ResizeEvent_Callback = void (*)(QProgressBar*, QResizeEvent*);
    using QProgressBar_CloseEvent_Callback = void (*)(QProgressBar*, QCloseEvent*);
    using QProgressBar_ContextMenuEvent_Callback = void (*)(QProgressBar*, QContextMenuEvent*);
    using QProgressBar_TabletEvent_Callback = void (*)(QProgressBar*, QTabletEvent*);
    using QProgressBar_ActionEvent_Callback = void (*)(QProgressBar*, QActionEvent*);
    using QProgressBar_DragEnterEvent_Callback = void (*)(QProgressBar*, QDragEnterEvent*);
    using QProgressBar_DragMoveEvent_Callback = void (*)(QProgressBar*, QDragMoveEvent*);
    using QProgressBar_DragLeaveEvent_Callback = void (*)(QProgressBar*, QDragLeaveEvent*);
    using QProgressBar_DropEvent_Callback = void (*)(QProgressBar*, QDropEvent*);
    using QProgressBar_ShowEvent_Callback = void (*)(QProgressBar*, QShowEvent*);
    using QProgressBar_HideEvent_Callback = void (*)(QProgressBar*, QHideEvent*);
    using QProgressBar_NativeEvent_Callback = bool (*)(QProgressBar*, libqt_string, void*, intptr_t*);
    using QProgressBar_ChangeEvent_Callback = void (*)(QProgressBar*, QEvent*);
    using QProgressBar_Metric_Callback = int (*)(const QProgressBar*, int);
    using QProgressBar_InitPainter_Callback = void (*)(const QProgressBar*, QPainter*);
    using QProgressBar_Redirected_Callback = QPaintDevice* (*)(const QProgressBar*, QPoint*);
    using QProgressBar_SharedPainter_Callback = QPainter* (*)();
    using QProgressBar_InputMethodEvent_Callback = void (*)(QProgressBar*, QInputMethodEvent*);
    using QProgressBar_InputMethodQuery_Callback = QVariant* (*)(const QProgressBar*, int);
    using QProgressBar_FocusNextPrevChild_Callback = bool (*)(QProgressBar*, bool);
    using QProgressBar_EventFilter_Callback = bool (*)(QProgressBar*, QObject*, QEvent*);
    using QProgressBar_TimerEvent_Callback = void (*)(QProgressBar*, QTimerEvent*);
    using QProgressBar_ChildEvent_Callback = void (*)(QProgressBar*, QChildEvent*);
    using QProgressBar_CustomEvent_Callback = void (*)(QProgressBar*, QEvent*);
    using QProgressBar_ConnectNotify_Callback = void (*)(QProgressBar*, QMetaMethod*);
    using QProgressBar_DisconnectNotify_Callback = void (*)(QProgressBar*, QMetaMethod*);
    using QProgressBar_UpdateMicroFocus_Callback = void (*)();
    using QProgressBar_Create_Callback = void (*)();
    using QProgressBar_Destroy_Callback = void (*)();
    using QProgressBar_FocusNextChild_Callback = bool (*)();
    using QProgressBar_FocusPreviousChild_Callback = bool (*)();
    using QProgressBar_Sender_Callback = QObject* (*)();
    using QProgressBar_SenderSignalIndex_Callback = int (*)();
    using QProgressBar_Receivers_Callback = int (*)(const QProgressBar*, const char*);
    using QProgressBar_IsSignalConnected_Callback = bool (*)(const QProgressBar*, QMetaMethod*);

  protected:
    // Instance callback storage
    QProgressBar_Metacall_Callback qprogressbar_metacall_callback = nullptr;
    QProgressBar_Text_Callback qprogressbar_text_callback = nullptr;
    QProgressBar_SizeHint_Callback qprogressbar_sizehint_callback = nullptr;
    QProgressBar_MinimumSizeHint_Callback qprogressbar_minimumsizehint_callback = nullptr;
    QProgressBar_Event_Callback qprogressbar_event_callback = nullptr;
    QProgressBar_PaintEvent_Callback qprogressbar_paintevent_callback = nullptr;
    QProgressBar_InitStyleOption_Callback qprogressbar_initstyleoption_callback = nullptr;
    QProgressBar_DevType_Callback qprogressbar_devtype_callback = nullptr;
    QProgressBar_SetVisible_Callback qprogressbar_setvisible_callback = nullptr;
    QProgressBar_HeightForWidth_Callback qprogressbar_heightforwidth_callback = nullptr;
    QProgressBar_HasHeightForWidth_Callback qprogressbar_hasheightforwidth_callback = nullptr;
    QProgressBar_PaintEngine_Callback qprogressbar_paintengine_callback = nullptr;
    QProgressBar_MousePressEvent_Callback qprogressbar_mousepressevent_callback = nullptr;
    QProgressBar_MouseReleaseEvent_Callback qprogressbar_mousereleaseevent_callback = nullptr;
    QProgressBar_MouseDoubleClickEvent_Callback qprogressbar_mousedoubleclickevent_callback = nullptr;
    QProgressBar_MouseMoveEvent_Callback qprogressbar_mousemoveevent_callback = nullptr;
    QProgressBar_WheelEvent_Callback qprogressbar_wheelevent_callback = nullptr;
    QProgressBar_KeyPressEvent_Callback qprogressbar_keypressevent_callback = nullptr;
    QProgressBar_KeyReleaseEvent_Callback qprogressbar_keyreleaseevent_callback = nullptr;
    QProgressBar_FocusInEvent_Callback qprogressbar_focusinevent_callback = nullptr;
    QProgressBar_FocusOutEvent_Callback qprogressbar_focusoutevent_callback = nullptr;
    QProgressBar_EnterEvent_Callback qprogressbar_enterevent_callback = nullptr;
    QProgressBar_LeaveEvent_Callback qprogressbar_leaveevent_callback = nullptr;
    QProgressBar_MoveEvent_Callback qprogressbar_moveevent_callback = nullptr;
    QProgressBar_ResizeEvent_Callback qprogressbar_resizeevent_callback = nullptr;
    QProgressBar_CloseEvent_Callback qprogressbar_closeevent_callback = nullptr;
    QProgressBar_ContextMenuEvent_Callback qprogressbar_contextmenuevent_callback = nullptr;
    QProgressBar_TabletEvent_Callback qprogressbar_tabletevent_callback = nullptr;
    QProgressBar_ActionEvent_Callback qprogressbar_actionevent_callback = nullptr;
    QProgressBar_DragEnterEvent_Callback qprogressbar_dragenterevent_callback = nullptr;
    QProgressBar_DragMoveEvent_Callback qprogressbar_dragmoveevent_callback = nullptr;
    QProgressBar_DragLeaveEvent_Callback qprogressbar_dragleaveevent_callback = nullptr;
    QProgressBar_DropEvent_Callback qprogressbar_dropevent_callback = nullptr;
    QProgressBar_ShowEvent_Callback qprogressbar_showevent_callback = nullptr;
    QProgressBar_HideEvent_Callback qprogressbar_hideevent_callback = nullptr;
    QProgressBar_NativeEvent_Callback qprogressbar_nativeevent_callback = nullptr;
    QProgressBar_ChangeEvent_Callback qprogressbar_changeevent_callback = nullptr;
    QProgressBar_Metric_Callback qprogressbar_metric_callback = nullptr;
    QProgressBar_InitPainter_Callback qprogressbar_initpainter_callback = nullptr;
    QProgressBar_Redirected_Callback qprogressbar_redirected_callback = nullptr;
    QProgressBar_SharedPainter_Callback qprogressbar_sharedpainter_callback = nullptr;
    QProgressBar_InputMethodEvent_Callback qprogressbar_inputmethodevent_callback = nullptr;
    QProgressBar_InputMethodQuery_Callback qprogressbar_inputmethodquery_callback = nullptr;
    QProgressBar_FocusNextPrevChild_Callback qprogressbar_focusnextprevchild_callback = nullptr;
    QProgressBar_EventFilter_Callback qprogressbar_eventfilter_callback = nullptr;
    QProgressBar_TimerEvent_Callback qprogressbar_timerevent_callback = nullptr;
    QProgressBar_ChildEvent_Callback qprogressbar_childevent_callback = nullptr;
    QProgressBar_CustomEvent_Callback qprogressbar_customevent_callback = nullptr;
    QProgressBar_ConnectNotify_Callback qprogressbar_connectnotify_callback = nullptr;
    QProgressBar_DisconnectNotify_Callback qprogressbar_disconnectnotify_callback = nullptr;
    QProgressBar_UpdateMicroFocus_Callback qprogressbar_updatemicrofocus_callback = nullptr;
    QProgressBar_Create_Callback qprogressbar_create_callback = nullptr;
    QProgressBar_Destroy_Callback qprogressbar_destroy_callback = nullptr;
    QProgressBar_FocusNextChild_Callback qprogressbar_focusnextchild_callback = nullptr;
    QProgressBar_FocusPreviousChild_Callback qprogressbar_focuspreviouschild_callback = nullptr;
    QProgressBar_Sender_Callback qprogressbar_sender_callback = nullptr;
    QProgressBar_SenderSignalIndex_Callback qprogressbar_sendersignalindex_callback = nullptr;
    QProgressBar_Receivers_Callback qprogressbar_receivers_callback = nullptr;
    QProgressBar_IsSignalConnected_Callback qprogressbar_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qprogressbar_metacall_isbase = false;
    mutable bool qprogressbar_text_isbase = false;
    mutable bool qprogressbar_sizehint_isbase = false;
    mutable bool qprogressbar_minimumsizehint_isbase = false;
    mutable bool qprogressbar_event_isbase = false;
    mutable bool qprogressbar_paintevent_isbase = false;
    mutable bool qprogressbar_initstyleoption_isbase = false;
    mutable bool qprogressbar_devtype_isbase = false;
    mutable bool qprogressbar_setvisible_isbase = false;
    mutable bool qprogressbar_heightforwidth_isbase = false;
    mutable bool qprogressbar_hasheightforwidth_isbase = false;
    mutable bool qprogressbar_paintengine_isbase = false;
    mutable bool qprogressbar_mousepressevent_isbase = false;
    mutable bool qprogressbar_mousereleaseevent_isbase = false;
    mutable bool qprogressbar_mousedoubleclickevent_isbase = false;
    mutable bool qprogressbar_mousemoveevent_isbase = false;
    mutable bool qprogressbar_wheelevent_isbase = false;
    mutable bool qprogressbar_keypressevent_isbase = false;
    mutable bool qprogressbar_keyreleaseevent_isbase = false;
    mutable bool qprogressbar_focusinevent_isbase = false;
    mutable bool qprogressbar_focusoutevent_isbase = false;
    mutable bool qprogressbar_enterevent_isbase = false;
    mutable bool qprogressbar_leaveevent_isbase = false;
    mutable bool qprogressbar_moveevent_isbase = false;
    mutable bool qprogressbar_resizeevent_isbase = false;
    mutable bool qprogressbar_closeevent_isbase = false;
    mutable bool qprogressbar_contextmenuevent_isbase = false;
    mutable bool qprogressbar_tabletevent_isbase = false;
    mutable bool qprogressbar_actionevent_isbase = false;
    mutable bool qprogressbar_dragenterevent_isbase = false;
    mutable bool qprogressbar_dragmoveevent_isbase = false;
    mutable bool qprogressbar_dragleaveevent_isbase = false;
    mutable bool qprogressbar_dropevent_isbase = false;
    mutable bool qprogressbar_showevent_isbase = false;
    mutable bool qprogressbar_hideevent_isbase = false;
    mutable bool qprogressbar_nativeevent_isbase = false;
    mutable bool qprogressbar_changeevent_isbase = false;
    mutable bool qprogressbar_metric_isbase = false;
    mutable bool qprogressbar_initpainter_isbase = false;
    mutable bool qprogressbar_redirected_isbase = false;
    mutable bool qprogressbar_sharedpainter_isbase = false;
    mutable bool qprogressbar_inputmethodevent_isbase = false;
    mutable bool qprogressbar_inputmethodquery_isbase = false;
    mutable bool qprogressbar_focusnextprevchild_isbase = false;
    mutable bool qprogressbar_eventfilter_isbase = false;
    mutable bool qprogressbar_timerevent_isbase = false;
    mutable bool qprogressbar_childevent_isbase = false;
    mutable bool qprogressbar_customevent_isbase = false;
    mutable bool qprogressbar_connectnotify_isbase = false;
    mutable bool qprogressbar_disconnectnotify_isbase = false;
    mutable bool qprogressbar_updatemicrofocus_isbase = false;
    mutable bool qprogressbar_create_isbase = false;
    mutable bool qprogressbar_destroy_isbase = false;
    mutable bool qprogressbar_focusnextchild_isbase = false;
    mutable bool qprogressbar_focuspreviouschild_isbase = false;
    mutable bool qprogressbar_sender_isbase = false;
    mutable bool qprogressbar_sendersignalindex_isbase = false;
    mutable bool qprogressbar_receivers_isbase = false;
    mutable bool qprogressbar_issignalconnected_isbase = false;

  public:
    VirtualQProgressBar(QWidget* parent) : QProgressBar(parent){};
    VirtualQProgressBar() : QProgressBar(){};

    ~VirtualQProgressBar() {
        qprogressbar_metacall_callback = nullptr;
        qprogressbar_text_callback = nullptr;
        qprogressbar_sizehint_callback = nullptr;
        qprogressbar_minimumsizehint_callback = nullptr;
        qprogressbar_event_callback = nullptr;
        qprogressbar_paintevent_callback = nullptr;
        qprogressbar_initstyleoption_callback = nullptr;
        qprogressbar_devtype_callback = nullptr;
        qprogressbar_setvisible_callback = nullptr;
        qprogressbar_heightforwidth_callback = nullptr;
        qprogressbar_hasheightforwidth_callback = nullptr;
        qprogressbar_paintengine_callback = nullptr;
        qprogressbar_mousepressevent_callback = nullptr;
        qprogressbar_mousereleaseevent_callback = nullptr;
        qprogressbar_mousedoubleclickevent_callback = nullptr;
        qprogressbar_mousemoveevent_callback = nullptr;
        qprogressbar_wheelevent_callback = nullptr;
        qprogressbar_keypressevent_callback = nullptr;
        qprogressbar_keyreleaseevent_callback = nullptr;
        qprogressbar_focusinevent_callback = nullptr;
        qprogressbar_focusoutevent_callback = nullptr;
        qprogressbar_enterevent_callback = nullptr;
        qprogressbar_leaveevent_callback = nullptr;
        qprogressbar_moveevent_callback = nullptr;
        qprogressbar_resizeevent_callback = nullptr;
        qprogressbar_closeevent_callback = nullptr;
        qprogressbar_contextmenuevent_callback = nullptr;
        qprogressbar_tabletevent_callback = nullptr;
        qprogressbar_actionevent_callback = nullptr;
        qprogressbar_dragenterevent_callback = nullptr;
        qprogressbar_dragmoveevent_callback = nullptr;
        qprogressbar_dragleaveevent_callback = nullptr;
        qprogressbar_dropevent_callback = nullptr;
        qprogressbar_showevent_callback = nullptr;
        qprogressbar_hideevent_callback = nullptr;
        qprogressbar_nativeevent_callback = nullptr;
        qprogressbar_changeevent_callback = nullptr;
        qprogressbar_metric_callback = nullptr;
        qprogressbar_initpainter_callback = nullptr;
        qprogressbar_redirected_callback = nullptr;
        qprogressbar_sharedpainter_callback = nullptr;
        qprogressbar_inputmethodevent_callback = nullptr;
        qprogressbar_inputmethodquery_callback = nullptr;
        qprogressbar_focusnextprevchild_callback = nullptr;
        qprogressbar_eventfilter_callback = nullptr;
        qprogressbar_timerevent_callback = nullptr;
        qprogressbar_childevent_callback = nullptr;
        qprogressbar_customevent_callback = nullptr;
        qprogressbar_connectnotify_callback = nullptr;
        qprogressbar_disconnectnotify_callback = nullptr;
        qprogressbar_updatemicrofocus_callback = nullptr;
        qprogressbar_create_callback = nullptr;
        qprogressbar_destroy_callback = nullptr;
        qprogressbar_focusnextchild_callback = nullptr;
        qprogressbar_focuspreviouschild_callback = nullptr;
        qprogressbar_sender_callback = nullptr;
        qprogressbar_sendersignalindex_callback = nullptr;
        qprogressbar_receivers_callback = nullptr;
        qprogressbar_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQProgressBar_Metacall_Callback(QProgressBar_Metacall_Callback cb) { qprogressbar_metacall_callback = cb; }
    inline void setQProgressBar_Text_Callback(QProgressBar_Text_Callback cb) { qprogressbar_text_callback = cb; }
    inline void setQProgressBar_SizeHint_Callback(QProgressBar_SizeHint_Callback cb) { qprogressbar_sizehint_callback = cb; }
    inline void setQProgressBar_MinimumSizeHint_Callback(QProgressBar_MinimumSizeHint_Callback cb) { qprogressbar_minimumsizehint_callback = cb; }
    inline void setQProgressBar_Event_Callback(QProgressBar_Event_Callback cb) { qprogressbar_event_callback = cb; }
    inline void setQProgressBar_PaintEvent_Callback(QProgressBar_PaintEvent_Callback cb) { qprogressbar_paintevent_callback = cb; }
    inline void setQProgressBar_InitStyleOption_Callback(QProgressBar_InitStyleOption_Callback cb) { qprogressbar_initstyleoption_callback = cb; }
    inline void setQProgressBar_DevType_Callback(QProgressBar_DevType_Callback cb) { qprogressbar_devtype_callback = cb; }
    inline void setQProgressBar_SetVisible_Callback(QProgressBar_SetVisible_Callback cb) { qprogressbar_setvisible_callback = cb; }
    inline void setQProgressBar_HeightForWidth_Callback(QProgressBar_HeightForWidth_Callback cb) { qprogressbar_heightforwidth_callback = cb; }
    inline void setQProgressBar_HasHeightForWidth_Callback(QProgressBar_HasHeightForWidth_Callback cb) { qprogressbar_hasheightforwidth_callback = cb; }
    inline void setQProgressBar_PaintEngine_Callback(QProgressBar_PaintEngine_Callback cb) { qprogressbar_paintengine_callback = cb; }
    inline void setQProgressBar_MousePressEvent_Callback(QProgressBar_MousePressEvent_Callback cb) { qprogressbar_mousepressevent_callback = cb; }
    inline void setQProgressBar_MouseReleaseEvent_Callback(QProgressBar_MouseReleaseEvent_Callback cb) { qprogressbar_mousereleaseevent_callback = cb; }
    inline void setQProgressBar_MouseDoubleClickEvent_Callback(QProgressBar_MouseDoubleClickEvent_Callback cb) { qprogressbar_mousedoubleclickevent_callback = cb; }
    inline void setQProgressBar_MouseMoveEvent_Callback(QProgressBar_MouseMoveEvent_Callback cb) { qprogressbar_mousemoveevent_callback = cb; }
    inline void setQProgressBar_WheelEvent_Callback(QProgressBar_WheelEvent_Callback cb) { qprogressbar_wheelevent_callback = cb; }
    inline void setQProgressBar_KeyPressEvent_Callback(QProgressBar_KeyPressEvent_Callback cb) { qprogressbar_keypressevent_callback = cb; }
    inline void setQProgressBar_KeyReleaseEvent_Callback(QProgressBar_KeyReleaseEvent_Callback cb) { qprogressbar_keyreleaseevent_callback = cb; }
    inline void setQProgressBar_FocusInEvent_Callback(QProgressBar_FocusInEvent_Callback cb) { qprogressbar_focusinevent_callback = cb; }
    inline void setQProgressBar_FocusOutEvent_Callback(QProgressBar_FocusOutEvent_Callback cb) { qprogressbar_focusoutevent_callback = cb; }
    inline void setQProgressBar_EnterEvent_Callback(QProgressBar_EnterEvent_Callback cb) { qprogressbar_enterevent_callback = cb; }
    inline void setQProgressBar_LeaveEvent_Callback(QProgressBar_LeaveEvent_Callback cb) { qprogressbar_leaveevent_callback = cb; }
    inline void setQProgressBar_MoveEvent_Callback(QProgressBar_MoveEvent_Callback cb) { qprogressbar_moveevent_callback = cb; }
    inline void setQProgressBar_ResizeEvent_Callback(QProgressBar_ResizeEvent_Callback cb) { qprogressbar_resizeevent_callback = cb; }
    inline void setQProgressBar_CloseEvent_Callback(QProgressBar_CloseEvent_Callback cb) { qprogressbar_closeevent_callback = cb; }
    inline void setQProgressBar_ContextMenuEvent_Callback(QProgressBar_ContextMenuEvent_Callback cb) { qprogressbar_contextmenuevent_callback = cb; }
    inline void setQProgressBar_TabletEvent_Callback(QProgressBar_TabletEvent_Callback cb) { qprogressbar_tabletevent_callback = cb; }
    inline void setQProgressBar_ActionEvent_Callback(QProgressBar_ActionEvent_Callback cb) { qprogressbar_actionevent_callback = cb; }
    inline void setQProgressBar_DragEnterEvent_Callback(QProgressBar_DragEnterEvent_Callback cb) { qprogressbar_dragenterevent_callback = cb; }
    inline void setQProgressBar_DragMoveEvent_Callback(QProgressBar_DragMoveEvent_Callback cb) { qprogressbar_dragmoveevent_callback = cb; }
    inline void setQProgressBar_DragLeaveEvent_Callback(QProgressBar_DragLeaveEvent_Callback cb) { qprogressbar_dragleaveevent_callback = cb; }
    inline void setQProgressBar_DropEvent_Callback(QProgressBar_DropEvent_Callback cb) { qprogressbar_dropevent_callback = cb; }
    inline void setQProgressBar_ShowEvent_Callback(QProgressBar_ShowEvent_Callback cb) { qprogressbar_showevent_callback = cb; }
    inline void setQProgressBar_HideEvent_Callback(QProgressBar_HideEvent_Callback cb) { qprogressbar_hideevent_callback = cb; }
    inline void setQProgressBar_NativeEvent_Callback(QProgressBar_NativeEvent_Callback cb) { qprogressbar_nativeevent_callback = cb; }
    inline void setQProgressBar_ChangeEvent_Callback(QProgressBar_ChangeEvent_Callback cb) { qprogressbar_changeevent_callback = cb; }
    inline void setQProgressBar_Metric_Callback(QProgressBar_Metric_Callback cb) { qprogressbar_metric_callback = cb; }
    inline void setQProgressBar_InitPainter_Callback(QProgressBar_InitPainter_Callback cb) { qprogressbar_initpainter_callback = cb; }
    inline void setQProgressBar_Redirected_Callback(QProgressBar_Redirected_Callback cb) { qprogressbar_redirected_callback = cb; }
    inline void setQProgressBar_SharedPainter_Callback(QProgressBar_SharedPainter_Callback cb) { qprogressbar_sharedpainter_callback = cb; }
    inline void setQProgressBar_InputMethodEvent_Callback(QProgressBar_InputMethodEvent_Callback cb) { qprogressbar_inputmethodevent_callback = cb; }
    inline void setQProgressBar_InputMethodQuery_Callback(QProgressBar_InputMethodQuery_Callback cb) { qprogressbar_inputmethodquery_callback = cb; }
    inline void setQProgressBar_FocusNextPrevChild_Callback(QProgressBar_FocusNextPrevChild_Callback cb) { qprogressbar_focusnextprevchild_callback = cb; }
    inline void setQProgressBar_EventFilter_Callback(QProgressBar_EventFilter_Callback cb) { qprogressbar_eventfilter_callback = cb; }
    inline void setQProgressBar_TimerEvent_Callback(QProgressBar_TimerEvent_Callback cb) { qprogressbar_timerevent_callback = cb; }
    inline void setQProgressBar_ChildEvent_Callback(QProgressBar_ChildEvent_Callback cb) { qprogressbar_childevent_callback = cb; }
    inline void setQProgressBar_CustomEvent_Callback(QProgressBar_CustomEvent_Callback cb) { qprogressbar_customevent_callback = cb; }
    inline void setQProgressBar_ConnectNotify_Callback(QProgressBar_ConnectNotify_Callback cb) { qprogressbar_connectnotify_callback = cb; }
    inline void setQProgressBar_DisconnectNotify_Callback(QProgressBar_DisconnectNotify_Callback cb) { qprogressbar_disconnectnotify_callback = cb; }
    inline void setQProgressBar_UpdateMicroFocus_Callback(QProgressBar_UpdateMicroFocus_Callback cb) { qprogressbar_updatemicrofocus_callback = cb; }
    inline void setQProgressBar_Create_Callback(QProgressBar_Create_Callback cb) { qprogressbar_create_callback = cb; }
    inline void setQProgressBar_Destroy_Callback(QProgressBar_Destroy_Callback cb) { qprogressbar_destroy_callback = cb; }
    inline void setQProgressBar_FocusNextChild_Callback(QProgressBar_FocusNextChild_Callback cb) { qprogressbar_focusnextchild_callback = cb; }
    inline void setQProgressBar_FocusPreviousChild_Callback(QProgressBar_FocusPreviousChild_Callback cb) { qprogressbar_focuspreviouschild_callback = cb; }
    inline void setQProgressBar_Sender_Callback(QProgressBar_Sender_Callback cb) { qprogressbar_sender_callback = cb; }
    inline void setQProgressBar_SenderSignalIndex_Callback(QProgressBar_SenderSignalIndex_Callback cb) { qprogressbar_sendersignalindex_callback = cb; }
    inline void setQProgressBar_Receivers_Callback(QProgressBar_Receivers_Callback cb) { qprogressbar_receivers_callback = cb; }
    inline void setQProgressBar_IsSignalConnected_Callback(QProgressBar_IsSignalConnected_Callback cb) { qprogressbar_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQProgressBar_Metacall_IsBase(bool value) const { qprogressbar_metacall_isbase = value; }
    inline void setQProgressBar_Text_IsBase(bool value) const { qprogressbar_text_isbase = value; }
    inline void setQProgressBar_SizeHint_IsBase(bool value) const { qprogressbar_sizehint_isbase = value; }
    inline void setQProgressBar_MinimumSizeHint_IsBase(bool value) const { qprogressbar_minimumsizehint_isbase = value; }
    inline void setQProgressBar_Event_IsBase(bool value) const { qprogressbar_event_isbase = value; }
    inline void setQProgressBar_PaintEvent_IsBase(bool value) const { qprogressbar_paintevent_isbase = value; }
    inline void setQProgressBar_InitStyleOption_IsBase(bool value) const { qprogressbar_initstyleoption_isbase = value; }
    inline void setQProgressBar_DevType_IsBase(bool value) const { qprogressbar_devtype_isbase = value; }
    inline void setQProgressBar_SetVisible_IsBase(bool value) const { qprogressbar_setvisible_isbase = value; }
    inline void setQProgressBar_HeightForWidth_IsBase(bool value) const { qprogressbar_heightforwidth_isbase = value; }
    inline void setQProgressBar_HasHeightForWidth_IsBase(bool value) const { qprogressbar_hasheightforwidth_isbase = value; }
    inline void setQProgressBar_PaintEngine_IsBase(bool value) const { qprogressbar_paintengine_isbase = value; }
    inline void setQProgressBar_MousePressEvent_IsBase(bool value) const { qprogressbar_mousepressevent_isbase = value; }
    inline void setQProgressBar_MouseReleaseEvent_IsBase(bool value) const { qprogressbar_mousereleaseevent_isbase = value; }
    inline void setQProgressBar_MouseDoubleClickEvent_IsBase(bool value) const { qprogressbar_mousedoubleclickevent_isbase = value; }
    inline void setQProgressBar_MouseMoveEvent_IsBase(bool value) const { qprogressbar_mousemoveevent_isbase = value; }
    inline void setQProgressBar_WheelEvent_IsBase(bool value) const { qprogressbar_wheelevent_isbase = value; }
    inline void setQProgressBar_KeyPressEvent_IsBase(bool value) const { qprogressbar_keypressevent_isbase = value; }
    inline void setQProgressBar_KeyReleaseEvent_IsBase(bool value) const { qprogressbar_keyreleaseevent_isbase = value; }
    inline void setQProgressBar_FocusInEvent_IsBase(bool value) const { qprogressbar_focusinevent_isbase = value; }
    inline void setQProgressBar_FocusOutEvent_IsBase(bool value) const { qprogressbar_focusoutevent_isbase = value; }
    inline void setQProgressBar_EnterEvent_IsBase(bool value) const { qprogressbar_enterevent_isbase = value; }
    inline void setQProgressBar_LeaveEvent_IsBase(bool value) const { qprogressbar_leaveevent_isbase = value; }
    inline void setQProgressBar_MoveEvent_IsBase(bool value) const { qprogressbar_moveevent_isbase = value; }
    inline void setQProgressBar_ResizeEvent_IsBase(bool value) const { qprogressbar_resizeevent_isbase = value; }
    inline void setQProgressBar_CloseEvent_IsBase(bool value) const { qprogressbar_closeevent_isbase = value; }
    inline void setQProgressBar_ContextMenuEvent_IsBase(bool value) const { qprogressbar_contextmenuevent_isbase = value; }
    inline void setQProgressBar_TabletEvent_IsBase(bool value) const { qprogressbar_tabletevent_isbase = value; }
    inline void setQProgressBar_ActionEvent_IsBase(bool value) const { qprogressbar_actionevent_isbase = value; }
    inline void setQProgressBar_DragEnterEvent_IsBase(bool value) const { qprogressbar_dragenterevent_isbase = value; }
    inline void setQProgressBar_DragMoveEvent_IsBase(bool value) const { qprogressbar_dragmoveevent_isbase = value; }
    inline void setQProgressBar_DragLeaveEvent_IsBase(bool value) const { qprogressbar_dragleaveevent_isbase = value; }
    inline void setQProgressBar_DropEvent_IsBase(bool value) const { qprogressbar_dropevent_isbase = value; }
    inline void setQProgressBar_ShowEvent_IsBase(bool value) const { qprogressbar_showevent_isbase = value; }
    inline void setQProgressBar_HideEvent_IsBase(bool value) const { qprogressbar_hideevent_isbase = value; }
    inline void setQProgressBar_NativeEvent_IsBase(bool value) const { qprogressbar_nativeevent_isbase = value; }
    inline void setQProgressBar_ChangeEvent_IsBase(bool value) const { qprogressbar_changeevent_isbase = value; }
    inline void setQProgressBar_Metric_IsBase(bool value) const { qprogressbar_metric_isbase = value; }
    inline void setQProgressBar_InitPainter_IsBase(bool value) const { qprogressbar_initpainter_isbase = value; }
    inline void setQProgressBar_Redirected_IsBase(bool value) const { qprogressbar_redirected_isbase = value; }
    inline void setQProgressBar_SharedPainter_IsBase(bool value) const { qprogressbar_sharedpainter_isbase = value; }
    inline void setQProgressBar_InputMethodEvent_IsBase(bool value) const { qprogressbar_inputmethodevent_isbase = value; }
    inline void setQProgressBar_InputMethodQuery_IsBase(bool value) const { qprogressbar_inputmethodquery_isbase = value; }
    inline void setQProgressBar_FocusNextPrevChild_IsBase(bool value) const { qprogressbar_focusnextprevchild_isbase = value; }
    inline void setQProgressBar_EventFilter_IsBase(bool value) const { qprogressbar_eventfilter_isbase = value; }
    inline void setQProgressBar_TimerEvent_IsBase(bool value) const { qprogressbar_timerevent_isbase = value; }
    inline void setQProgressBar_ChildEvent_IsBase(bool value) const { qprogressbar_childevent_isbase = value; }
    inline void setQProgressBar_CustomEvent_IsBase(bool value) const { qprogressbar_customevent_isbase = value; }
    inline void setQProgressBar_ConnectNotify_IsBase(bool value) const { qprogressbar_connectnotify_isbase = value; }
    inline void setQProgressBar_DisconnectNotify_IsBase(bool value) const { qprogressbar_disconnectnotify_isbase = value; }
    inline void setQProgressBar_UpdateMicroFocus_IsBase(bool value) const { qprogressbar_updatemicrofocus_isbase = value; }
    inline void setQProgressBar_Create_IsBase(bool value) const { qprogressbar_create_isbase = value; }
    inline void setQProgressBar_Destroy_IsBase(bool value) const { qprogressbar_destroy_isbase = value; }
    inline void setQProgressBar_FocusNextChild_IsBase(bool value) const { qprogressbar_focusnextchild_isbase = value; }
    inline void setQProgressBar_FocusPreviousChild_IsBase(bool value) const { qprogressbar_focuspreviouschild_isbase = value; }
    inline void setQProgressBar_Sender_IsBase(bool value) const { qprogressbar_sender_isbase = value; }
    inline void setQProgressBar_SenderSignalIndex_IsBase(bool value) const { qprogressbar_sendersignalindex_isbase = value; }
    inline void setQProgressBar_Receivers_IsBase(bool value) const { qprogressbar_receivers_isbase = value; }
    inline void setQProgressBar_IsSignalConnected_IsBase(bool value) const { qprogressbar_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qprogressbar_metacall_isbase) {
            qprogressbar_metacall_isbase = false;
            return QProgressBar::qt_metacall(param1, param2, param3);
        } else if (qprogressbar_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qprogressbar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QProgressBar::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString text() const override {
        if (qprogressbar_text_isbase) {
            qprogressbar_text_isbase = false;
            return QProgressBar::text();
        } else if (qprogressbar_text_callback != nullptr) {
            libqt_string callback_ret = qprogressbar_text_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QProgressBar::text();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qprogressbar_sizehint_isbase) {
            qprogressbar_sizehint_isbase = false;
            return QProgressBar::sizeHint();
        } else if (qprogressbar_sizehint_callback != nullptr) {
            QSize* callback_ret = qprogressbar_sizehint_callback();
            return *callback_ret;
        } else {
            return QProgressBar::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qprogressbar_minimumsizehint_isbase) {
            qprogressbar_minimumsizehint_isbase = false;
            return QProgressBar::minimumSizeHint();
        } else if (qprogressbar_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qprogressbar_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QProgressBar::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qprogressbar_event_isbase) {
            qprogressbar_event_isbase = false;
            return QProgressBar::event(e);
        } else if (qprogressbar_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qprogressbar_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QProgressBar::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qprogressbar_paintevent_isbase) {
            qprogressbar_paintevent_isbase = false;
            QProgressBar::paintEvent(param1);
        } else if (qprogressbar_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            qprogressbar_paintevent_callback(this, cbval1);
        } else {
            QProgressBar::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionProgressBar* option) const override {
        if (qprogressbar_initstyleoption_isbase) {
            qprogressbar_initstyleoption_isbase = false;
            QProgressBar::initStyleOption(option);
        } else if (qprogressbar_initstyleoption_callback != nullptr) {
            QStyleOptionProgressBar* cbval1 = option;

            qprogressbar_initstyleoption_callback(this, cbval1);
        } else {
            QProgressBar::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qprogressbar_devtype_isbase) {
            qprogressbar_devtype_isbase = false;
            return QProgressBar::devType();
        } else if (qprogressbar_devtype_callback != nullptr) {
            int callback_ret = qprogressbar_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QProgressBar::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qprogressbar_setvisible_isbase) {
            qprogressbar_setvisible_isbase = false;
            QProgressBar::setVisible(visible);
        } else if (qprogressbar_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qprogressbar_setvisible_callback(this, cbval1);
        } else {
            QProgressBar::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qprogressbar_heightforwidth_isbase) {
            qprogressbar_heightforwidth_isbase = false;
            return QProgressBar::heightForWidth(param1);
        } else if (qprogressbar_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qprogressbar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QProgressBar::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qprogressbar_hasheightforwidth_isbase) {
            qprogressbar_hasheightforwidth_isbase = false;
            return QProgressBar::hasHeightForWidth();
        } else if (qprogressbar_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qprogressbar_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QProgressBar::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qprogressbar_paintengine_isbase) {
            qprogressbar_paintengine_isbase = false;
            return QProgressBar::paintEngine();
        } else if (qprogressbar_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qprogressbar_paintengine_callback();
            return callback_ret;
        } else {
            return QProgressBar::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qprogressbar_mousepressevent_isbase) {
            qprogressbar_mousepressevent_isbase = false;
            QProgressBar::mousePressEvent(event);
        } else if (qprogressbar_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qprogressbar_mousepressevent_callback(this, cbval1);
        } else {
            QProgressBar::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qprogressbar_mousereleaseevent_isbase) {
            qprogressbar_mousereleaseevent_isbase = false;
            QProgressBar::mouseReleaseEvent(event);
        } else if (qprogressbar_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qprogressbar_mousereleaseevent_callback(this, cbval1);
        } else {
            QProgressBar::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qprogressbar_mousedoubleclickevent_isbase) {
            qprogressbar_mousedoubleclickevent_isbase = false;
            QProgressBar::mouseDoubleClickEvent(event);
        } else if (qprogressbar_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qprogressbar_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QProgressBar::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qprogressbar_mousemoveevent_isbase) {
            qprogressbar_mousemoveevent_isbase = false;
            QProgressBar::mouseMoveEvent(event);
        } else if (qprogressbar_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qprogressbar_mousemoveevent_callback(this, cbval1);
        } else {
            QProgressBar::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qprogressbar_wheelevent_isbase) {
            qprogressbar_wheelevent_isbase = false;
            QProgressBar::wheelEvent(event);
        } else if (qprogressbar_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qprogressbar_wheelevent_callback(this, cbval1);
        } else {
            QProgressBar::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qprogressbar_keypressevent_isbase) {
            qprogressbar_keypressevent_isbase = false;
            QProgressBar::keyPressEvent(event);
        } else if (qprogressbar_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qprogressbar_keypressevent_callback(this, cbval1);
        } else {
            QProgressBar::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qprogressbar_keyreleaseevent_isbase) {
            qprogressbar_keyreleaseevent_isbase = false;
            QProgressBar::keyReleaseEvent(event);
        } else if (qprogressbar_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qprogressbar_keyreleaseevent_callback(this, cbval1);
        } else {
            QProgressBar::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qprogressbar_focusinevent_isbase) {
            qprogressbar_focusinevent_isbase = false;
            QProgressBar::focusInEvent(event);
        } else if (qprogressbar_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qprogressbar_focusinevent_callback(this, cbval1);
        } else {
            QProgressBar::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qprogressbar_focusoutevent_isbase) {
            qprogressbar_focusoutevent_isbase = false;
            QProgressBar::focusOutEvent(event);
        } else if (qprogressbar_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qprogressbar_focusoutevent_callback(this, cbval1);
        } else {
            QProgressBar::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qprogressbar_enterevent_isbase) {
            qprogressbar_enterevent_isbase = false;
            QProgressBar::enterEvent(event);
        } else if (qprogressbar_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qprogressbar_enterevent_callback(this, cbval1);
        } else {
            QProgressBar::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qprogressbar_leaveevent_isbase) {
            qprogressbar_leaveevent_isbase = false;
            QProgressBar::leaveEvent(event);
        } else if (qprogressbar_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qprogressbar_leaveevent_callback(this, cbval1);
        } else {
            QProgressBar::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qprogressbar_moveevent_isbase) {
            qprogressbar_moveevent_isbase = false;
            QProgressBar::moveEvent(event);
        } else if (qprogressbar_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qprogressbar_moveevent_callback(this, cbval1);
        } else {
            QProgressBar::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qprogressbar_resizeevent_isbase) {
            qprogressbar_resizeevent_isbase = false;
            QProgressBar::resizeEvent(event);
        } else if (qprogressbar_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qprogressbar_resizeevent_callback(this, cbval1);
        } else {
            QProgressBar::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qprogressbar_closeevent_isbase) {
            qprogressbar_closeevent_isbase = false;
            QProgressBar::closeEvent(event);
        } else if (qprogressbar_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qprogressbar_closeevent_callback(this, cbval1);
        } else {
            QProgressBar::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qprogressbar_contextmenuevent_isbase) {
            qprogressbar_contextmenuevent_isbase = false;
            QProgressBar::contextMenuEvent(event);
        } else if (qprogressbar_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qprogressbar_contextmenuevent_callback(this, cbval1);
        } else {
            QProgressBar::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qprogressbar_tabletevent_isbase) {
            qprogressbar_tabletevent_isbase = false;
            QProgressBar::tabletEvent(event);
        } else if (qprogressbar_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qprogressbar_tabletevent_callback(this, cbval1);
        } else {
            QProgressBar::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qprogressbar_actionevent_isbase) {
            qprogressbar_actionevent_isbase = false;
            QProgressBar::actionEvent(event);
        } else if (qprogressbar_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qprogressbar_actionevent_callback(this, cbval1);
        } else {
            QProgressBar::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qprogressbar_dragenterevent_isbase) {
            qprogressbar_dragenterevent_isbase = false;
            QProgressBar::dragEnterEvent(event);
        } else if (qprogressbar_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qprogressbar_dragenterevent_callback(this, cbval1);
        } else {
            QProgressBar::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qprogressbar_dragmoveevent_isbase) {
            qprogressbar_dragmoveevent_isbase = false;
            QProgressBar::dragMoveEvent(event);
        } else if (qprogressbar_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qprogressbar_dragmoveevent_callback(this, cbval1);
        } else {
            QProgressBar::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qprogressbar_dragleaveevent_isbase) {
            qprogressbar_dragleaveevent_isbase = false;
            QProgressBar::dragLeaveEvent(event);
        } else if (qprogressbar_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qprogressbar_dragleaveevent_callback(this, cbval1);
        } else {
            QProgressBar::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qprogressbar_dropevent_isbase) {
            qprogressbar_dropevent_isbase = false;
            QProgressBar::dropEvent(event);
        } else if (qprogressbar_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qprogressbar_dropevent_callback(this, cbval1);
        } else {
            QProgressBar::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qprogressbar_showevent_isbase) {
            qprogressbar_showevent_isbase = false;
            QProgressBar::showEvent(event);
        } else if (qprogressbar_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qprogressbar_showevent_callback(this, cbval1);
        } else {
            QProgressBar::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qprogressbar_hideevent_isbase) {
            qprogressbar_hideevent_isbase = false;
            QProgressBar::hideEvent(event);
        } else if (qprogressbar_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qprogressbar_hideevent_callback(this, cbval1);
        } else {
            QProgressBar::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qprogressbar_nativeevent_isbase) {
            qprogressbar_nativeevent_isbase = false;
            return QProgressBar::nativeEvent(eventType, message, result);
        } else if (qprogressbar_nativeevent_callback != nullptr) {
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

            bool callback_ret = qprogressbar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QProgressBar::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qprogressbar_changeevent_isbase) {
            qprogressbar_changeevent_isbase = false;
            QProgressBar::changeEvent(param1);
        } else if (qprogressbar_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qprogressbar_changeevent_callback(this, cbval1);
        } else {
            QProgressBar::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qprogressbar_metric_isbase) {
            qprogressbar_metric_isbase = false;
            return QProgressBar::metric(param1);
        } else if (qprogressbar_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qprogressbar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QProgressBar::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qprogressbar_initpainter_isbase) {
            qprogressbar_initpainter_isbase = false;
            QProgressBar::initPainter(painter);
        } else if (qprogressbar_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qprogressbar_initpainter_callback(this, cbval1);
        } else {
            QProgressBar::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qprogressbar_redirected_isbase) {
            qprogressbar_redirected_isbase = false;
            return QProgressBar::redirected(offset);
        } else if (qprogressbar_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qprogressbar_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QProgressBar::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qprogressbar_sharedpainter_isbase) {
            qprogressbar_sharedpainter_isbase = false;
            return QProgressBar::sharedPainter();
        } else if (qprogressbar_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qprogressbar_sharedpainter_callback();
            return callback_ret;
        } else {
            return QProgressBar::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qprogressbar_inputmethodevent_isbase) {
            qprogressbar_inputmethodevent_isbase = false;
            QProgressBar::inputMethodEvent(param1);
        } else if (qprogressbar_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qprogressbar_inputmethodevent_callback(this, cbval1);
        } else {
            QProgressBar::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qprogressbar_inputmethodquery_isbase) {
            qprogressbar_inputmethodquery_isbase = false;
            return QProgressBar::inputMethodQuery(param1);
        } else if (qprogressbar_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qprogressbar_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QProgressBar::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qprogressbar_focusnextprevchild_isbase) {
            qprogressbar_focusnextprevchild_isbase = false;
            return QProgressBar::focusNextPrevChild(next);
        } else if (qprogressbar_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qprogressbar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QProgressBar::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qprogressbar_eventfilter_isbase) {
            qprogressbar_eventfilter_isbase = false;
            return QProgressBar::eventFilter(watched, event);
        } else if (qprogressbar_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qprogressbar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QProgressBar::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qprogressbar_timerevent_isbase) {
            qprogressbar_timerevent_isbase = false;
            QProgressBar::timerEvent(event);
        } else if (qprogressbar_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qprogressbar_timerevent_callback(this, cbval1);
        } else {
            QProgressBar::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qprogressbar_childevent_isbase) {
            qprogressbar_childevent_isbase = false;
            QProgressBar::childEvent(event);
        } else if (qprogressbar_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qprogressbar_childevent_callback(this, cbval1);
        } else {
            QProgressBar::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qprogressbar_customevent_isbase) {
            qprogressbar_customevent_isbase = false;
            QProgressBar::customEvent(event);
        } else if (qprogressbar_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qprogressbar_customevent_callback(this, cbval1);
        } else {
            QProgressBar::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qprogressbar_connectnotify_isbase) {
            qprogressbar_connectnotify_isbase = false;
            QProgressBar::connectNotify(signal);
        } else if (qprogressbar_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qprogressbar_connectnotify_callback(this, cbval1);
        } else {
            QProgressBar::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qprogressbar_disconnectnotify_isbase) {
            qprogressbar_disconnectnotify_isbase = false;
            QProgressBar::disconnectNotify(signal);
        } else if (qprogressbar_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qprogressbar_disconnectnotify_callback(this, cbval1);
        } else {
            QProgressBar::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qprogressbar_updatemicrofocus_isbase) {
            qprogressbar_updatemicrofocus_isbase = false;
            QProgressBar::updateMicroFocus();
        } else if (qprogressbar_updatemicrofocus_callback != nullptr) {
            qprogressbar_updatemicrofocus_callback();
        } else {
            QProgressBar::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qprogressbar_create_isbase) {
            qprogressbar_create_isbase = false;
            QProgressBar::create();
        } else if (qprogressbar_create_callback != nullptr) {
            qprogressbar_create_callback();
        } else {
            QProgressBar::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qprogressbar_destroy_isbase) {
            qprogressbar_destroy_isbase = false;
            QProgressBar::destroy();
        } else if (qprogressbar_destroy_callback != nullptr) {
            qprogressbar_destroy_callback();
        } else {
            QProgressBar::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qprogressbar_focusnextchild_isbase) {
            qprogressbar_focusnextchild_isbase = false;
            return QProgressBar::focusNextChild();
        } else if (qprogressbar_focusnextchild_callback != nullptr) {
            bool callback_ret = qprogressbar_focusnextchild_callback();
            return callback_ret;
        } else {
            return QProgressBar::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qprogressbar_focuspreviouschild_isbase) {
            qprogressbar_focuspreviouschild_isbase = false;
            return QProgressBar::focusPreviousChild();
        } else if (qprogressbar_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qprogressbar_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QProgressBar::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qprogressbar_sender_isbase) {
            qprogressbar_sender_isbase = false;
            return QProgressBar::sender();
        } else if (qprogressbar_sender_callback != nullptr) {
            QObject* callback_ret = qprogressbar_sender_callback();
            return callback_ret;
        } else {
            return QProgressBar::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qprogressbar_sendersignalindex_isbase) {
            qprogressbar_sendersignalindex_isbase = false;
            return QProgressBar::senderSignalIndex();
        } else if (qprogressbar_sendersignalindex_callback != nullptr) {
            int callback_ret = qprogressbar_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QProgressBar::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qprogressbar_receivers_isbase) {
            qprogressbar_receivers_isbase = false;
            return QProgressBar::receivers(signal);
        } else if (qprogressbar_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qprogressbar_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QProgressBar::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qprogressbar_issignalconnected_isbase) {
            qprogressbar_issignalconnected_isbase = false;
            return QProgressBar::isSignalConnected(signal);
        } else if (qprogressbar_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qprogressbar_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QProgressBar::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QProgressBar_Event(QProgressBar* self, QEvent* e);
    friend bool QProgressBar_QBaseEvent(QProgressBar* self, QEvent* e);
    friend void QProgressBar_PaintEvent(QProgressBar* self, QPaintEvent* param1);
    friend void QProgressBar_QBasePaintEvent(QProgressBar* self, QPaintEvent* param1);
    friend void QProgressBar_InitStyleOption(const QProgressBar* self, QStyleOptionProgressBar* option);
    friend void QProgressBar_QBaseInitStyleOption(const QProgressBar* self, QStyleOptionProgressBar* option);
    friend void QProgressBar_MousePressEvent(QProgressBar* self, QMouseEvent* event);
    friend void QProgressBar_QBaseMousePressEvent(QProgressBar* self, QMouseEvent* event);
    friend void QProgressBar_MouseReleaseEvent(QProgressBar* self, QMouseEvent* event);
    friend void QProgressBar_QBaseMouseReleaseEvent(QProgressBar* self, QMouseEvent* event);
    friend void QProgressBar_MouseDoubleClickEvent(QProgressBar* self, QMouseEvent* event);
    friend void QProgressBar_QBaseMouseDoubleClickEvent(QProgressBar* self, QMouseEvent* event);
    friend void QProgressBar_MouseMoveEvent(QProgressBar* self, QMouseEvent* event);
    friend void QProgressBar_QBaseMouseMoveEvent(QProgressBar* self, QMouseEvent* event);
    friend void QProgressBar_WheelEvent(QProgressBar* self, QWheelEvent* event);
    friend void QProgressBar_QBaseWheelEvent(QProgressBar* self, QWheelEvent* event);
    friend void QProgressBar_KeyPressEvent(QProgressBar* self, QKeyEvent* event);
    friend void QProgressBar_QBaseKeyPressEvent(QProgressBar* self, QKeyEvent* event);
    friend void QProgressBar_KeyReleaseEvent(QProgressBar* self, QKeyEvent* event);
    friend void QProgressBar_QBaseKeyReleaseEvent(QProgressBar* self, QKeyEvent* event);
    friend void QProgressBar_FocusInEvent(QProgressBar* self, QFocusEvent* event);
    friend void QProgressBar_QBaseFocusInEvent(QProgressBar* self, QFocusEvent* event);
    friend void QProgressBar_FocusOutEvent(QProgressBar* self, QFocusEvent* event);
    friend void QProgressBar_QBaseFocusOutEvent(QProgressBar* self, QFocusEvent* event);
    friend void QProgressBar_EnterEvent(QProgressBar* self, QEnterEvent* event);
    friend void QProgressBar_QBaseEnterEvent(QProgressBar* self, QEnterEvent* event);
    friend void QProgressBar_LeaveEvent(QProgressBar* self, QEvent* event);
    friend void QProgressBar_QBaseLeaveEvent(QProgressBar* self, QEvent* event);
    friend void QProgressBar_MoveEvent(QProgressBar* self, QMoveEvent* event);
    friend void QProgressBar_QBaseMoveEvent(QProgressBar* self, QMoveEvent* event);
    friend void QProgressBar_ResizeEvent(QProgressBar* self, QResizeEvent* event);
    friend void QProgressBar_QBaseResizeEvent(QProgressBar* self, QResizeEvent* event);
    friend void QProgressBar_CloseEvent(QProgressBar* self, QCloseEvent* event);
    friend void QProgressBar_QBaseCloseEvent(QProgressBar* self, QCloseEvent* event);
    friend void QProgressBar_ContextMenuEvent(QProgressBar* self, QContextMenuEvent* event);
    friend void QProgressBar_QBaseContextMenuEvent(QProgressBar* self, QContextMenuEvent* event);
    friend void QProgressBar_TabletEvent(QProgressBar* self, QTabletEvent* event);
    friend void QProgressBar_QBaseTabletEvent(QProgressBar* self, QTabletEvent* event);
    friend void QProgressBar_ActionEvent(QProgressBar* self, QActionEvent* event);
    friend void QProgressBar_QBaseActionEvent(QProgressBar* self, QActionEvent* event);
    friend void QProgressBar_DragEnterEvent(QProgressBar* self, QDragEnterEvent* event);
    friend void QProgressBar_QBaseDragEnterEvent(QProgressBar* self, QDragEnterEvent* event);
    friend void QProgressBar_DragMoveEvent(QProgressBar* self, QDragMoveEvent* event);
    friend void QProgressBar_QBaseDragMoveEvent(QProgressBar* self, QDragMoveEvent* event);
    friend void QProgressBar_DragLeaveEvent(QProgressBar* self, QDragLeaveEvent* event);
    friend void QProgressBar_QBaseDragLeaveEvent(QProgressBar* self, QDragLeaveEvent* event);
    friend void QProgressBar_DropEvent(QProgressBar* self, QDropEvent* event);
    friend void QProgressBar_QBaseDropEvent(QProgressBar* self, QDropEvent* event);
    friend void QProgressBar_ShowEvent(QProgressBar* self, QShowEvent* event);
    friend void QProgressBar_QBaseShowEvent(QProgressBar* self, QShowEvent* event);
    friend void QProgressBar_HideEvent(QProgressBar* self, QHideEvent* event);
    friend void QProgressBar_QBaseHideEvent(QProgressBar* self, QHideEvent* event);
    friend bool QProgressBar_NativeEvent(QProgressBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QProgressBar_QBaseNativeEvent(QProgressBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QProgressBar_ChangeEvent(QProgressBar* self, QEvent* param1);
    friend void QProgressBar_QBaseChangeEvent(QProgressBar* self, QEvent* param1);
    friend int QProgressBar_Metric(const QProgressBar* self, int param1);
    friend int QProgressBar_QBaseMetric(const QProgressBar* self, int param1);
    friend void QProgressBar_InitPainter(const QProgressBar* self, QPainter* painter);
    friend void QProgressBar_QBaseInitPainter(const QProgressBar* self, QPainter* painter);
    friend QPaintDevice* QProgressBar_Redirected(const QProgressBar* self, QPoint* offset);
    friend QPaintDevice* QProgressBar_QBaseRedirected(const QProgressBar* self, QPoint* offset);
    friend QPainter* QProgressBar_SharedPainter(const QProgressBar* self);
    friend QPainter* QProgressBar_QBaseSharedPainter(const QProgressBar* self);
    friend void QProgressBar_InputMethodEvent(QProgressBar* self, QInputMethodEvent* param1);
    friend void QProgressBar_QBaseInputMethodEvent(QProgressBar* self, QInputMethodEvent* param1);
    friend bool QProgressBar_FocusNextPrevChild(QProgressBar* self, bool next);
    friend bool QProgressBar_QBaseFocusNextPrevChild(QProgressBar* self, bool next);
    friend void QProgressBar_TimerEvent(QProgressBar* self, QTimerEvent* event);
    friend void QProgressBar_QBaseTimerEvent(QProgressBar* self, QTimerEvent* event);
    friend void QProgressBar_ChildEvent(QProgressBar* self, QChildEvent* event);
    friend void QProgressBar_QBaseChildEvent(QProgressBar* self, QChildEvent* event);
    friend void QProgressBar_CustomEvent(QProgressBar* self, QEvent* event);
    friend void QProgressBar_QBaseCustomEvent(QProgressBar* self, QEvent* event);
    friend void QProgressBar_ConnectNotify(QProgressBar* self, const QMetaMethod* signal);
    friend void QProgressBar_QBaseConnectNotify(QProgressBar* self, const QMetaMethod* signal);
    friend void QProgressBar_DisconnectNotify(QProgressBar* self, const QMetaMethod* signal);
    friend void QProgressBar_QBaseDisconnectNotify(QProgressBar* self, const QMetaMethod* signal);
    friend void QProgressBar_UpdateMicroFocus(QProgressBar* self);
    friend void QProgressBar_QBaseUpdateMicroFocus(QProgressBar* self);
    friend void QProgressBar_Create(QProgressBar* self);
    friend void QProgressBar_QBaseCreate(QProgressBar* self);
    friend void QProgressBar_Destroy(QProgressBar* self);
    friend void QProgressBar_QBaseDestroy(QProgressBar* self);
    friend bool QProgressBar_FocusNextChild(QProgressBar* self);
    friend bool QProgressBar_QBaseFocusNextChild(QProgressBar* self);
    friend bool QProgressBar_FocusPreviousChild(QProgressBar* self);
    friend bool QProgressBar_QBaseFocusPreviousChild(QProgressBar* self);
    friend QObject* QProgressBar_Sender(const QProgressBar* self);
    friend QObject* QProgressBar_QBaseSender(const QProgressBar* self);
    friend int QProgressBar_SenderSignalIndex(const QProgressBar* self);
    friend int QProgressBar_QBaseSenderSignalIndex(const QProgressBar* self);
    friend int QProgressBar_Receivers(const QProgressBar* self, const char* signal);
    friend int QProgressBar_QBaseReceivers(const QProgressBar* self, const char* signal);
    friend bool QProgressBar_IsSignalConnected(const QProgressBar* self, const QMetaMethod* signal);
    friend bool QProgressBar_QBaseIsSignalConnected(const QProgressBar* self, const QMetaMethod* signal);
};

#endif
