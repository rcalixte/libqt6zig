#pragma once
#ifndef SRCC_LIBVIRTUALQMENUBAR_H
#define SRCC_LIBVIRTUALQMENUBAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QMenuBar so that we can call protected methods
class VirtualQMenuBar final : public QMenuBar {

  public:
    // Virtual class boolean flag
    bool isVirtualQMenuBar = true;

    // Virtual class public types (including callbacks)
    using QMenuBar_Metacall_Callback = int (*)(QMenuBar*, int, int, void**);
    using QMenuBar_SizeHint_Callback = QSize* (*)();
    using QMenuBar_MinimumSizeHint_Callback = QSize* (*)();
    using QMenuBar_HeightForWidth_Callback = int (*)(const QMenuBar*, int);
    using QMenuBar_SetVisible_Callback = void (*)(QMenuBar*, bool);
    using QMenuBar_ChangeEvent_Callback = void (*)(QMenuBar*, QEvent*);
    using QMenuBar_KeyPressEvent_Callback = void (*)(QMenuBar*, QKeyEvent*);
    using QMenuBar_MouseReleaseEvent_Callback = void (*)(QMenuBar*, QMouseEvent*);
    using QMenuBar_MousePressEvent_Callback = void (*)(QMenuBar*, QMouseEvent*);
    using QMenuBar_MouseMoveEvent_Callback = void (*)(QMenuBar*, QMouseEvent*);
    using QMenuBar_LeaveEvent_Callback = void (*)(QMenuBar*, QEvent*);
    using QMenuBar_PaintEvent_Callback = void (*)(QMenuBar*, QPaintEvent*);
    using QMenuBar_ResizeEvent_Callback = void (*)(QMenuBar*, QResizeEvent*);
    using QMenuBar_ActionEvent_Callback = void (*)(QMenuBar*, QActionEvent*);
    using QMenuBar_FocusOutEvent_Callback = void (*)(QMenuBar*, QFocusEvent*);
    using QMenuBar_FocusInEvent_Callback = void (*)(QMenuBar*, QFocusEvent*);
    using QMenuBar_TimerEvent_Callback = void (*)(QMenuBar*, QTimerEvent*);
    using QMenuBar_EventFilter_Callback = bool (*)(QMenuBar*, QObject*, QEvent*);
    using QMenuBar_Event_Callback = bool (*)(QMenuBar*, QEvent*);
    using QMenuBar_InitStyleOption_Callback = void (*)(const QMenuBar*, QStyleOptionMenuItem*, QAction*);
    using QMenuBar_DevType_Callback = int (*)();
    using QMenuBar_HasHeightForWidth_Callback = bool (*)();
    using QMenuBar_PaintEngine_Callback = QPaintEngine* (*)();
    using QMenuBar_MouseDoubleClickEvent_Callback = void (*)(QMenuBar*, QMouseEvent*);
    using QMenuBar_WheelEvent_Callback = void (*)(QMenuBar*, QWheelEvent*);
    using QMenuBar_KeyReleaseEvent_Callback = void (*)(QMenuBar*, QKeyEvent*);
    using QMenuBar_EnterEvent_Callback = void (*)(QMenuBar*, QEnterEvent*);
    using QMenuBar_MoveEvent_Callback = void (*)(QMenuBar*, QMoveEvent*);
    using QMenuBar_CloseEvent_Callback = void (*)(QMenuBar*, QCloseEvent*);
    using QMenuBar_ContextMenuEvent_Callback = void (*)(QMenuBar*, QContextMenuEvent*);
    using QMenuBar_TabletEvent_Callback = void (*)(QMenuBar*, QTabletEvent*);
    using QMenuBar_DragEnterEvent_Callback = void (*)(QMenuBar*, QDragEnterEvent*);
    using QMenuBar_DragMoveEvent_Callback = void (*)(QMenuBar*, QDragMoveEvent*);
    using QMenuBar_DragLeaveEvent_Callback = void (*)(QMenuBar*, QDragLeaveEvent*);
    using QMenuBar_DropEvent_Callback = void (*)(QMenuBar*, QDropEvent*);
    using QMenuBar_ShowEvent_Callback = void (*)(QMenuBar*, QShowEvent*);
    using QMenuBar_HideEvent_Callback = void (*)(QMenuBar*, QHideEvent*);
    using QMenuBar_NativeEvent_Callback = bool (*)(QMenuBar*, libqt_string, void*, intptr_t*);
    using QMenuBar_Metric_Callback = int (*)(const QMenuBar*, int);
    using QMenuBar_InitPainter_Callback = void (*)(const QMenuBar*, QPainter*);
    using QMenuBar_Redirected_Callback = QPaintDevice* (*)(const QMenuBar*, QPoint*);
    using QMenuBar_SharedPainter_Callback = QPainter* (*)();
    using QMenuBar_InputMethodEvent_Callback = void (*)(QMenuBar*, QInputMethodEvent*);
    using QMenuBar_InputMethodQuery_Callback = QVariant* (*)(const QMenuBar*, int);
    using QMenuBar_FocusNextPrevChild_Callback = bool (*)(QMenuBar*, bool);
    using QMenuBar_ChildEvent_Callback = void (*)(QMenuBar*, QChildEvent*);
    using QMenuBar_CustomEvent_Callback = void (*)(QMenuBar*, QEvent*);
    using QMenuBar_ConnectNotify_Callback = void (*)(QMenuBar*, QMetaMethod*);
    using QMenuBar_DisconnectNotify_Callback = void (*)(QMenuBar*, QMetaMethod*);
    using QMenuBar_UpdateMicroFocus_Callback = void (*)();
    using QMenuBar_Create_Callback = void (*)();
    using QMenuBar_Destroy_Callback = void (*)();
    using QMenuBar_FocusNextChild_Callback = bool (*)();
    using QMenuBar_FocusPreviousChild_Callback = bool (*)();
    using QMenuBar_Sender_Callback = QObject* (*)();
    using QMenuBar_SenderSignalIndex_Callback = int (*)();
    using QMenuBar_Receivers_Callback = int (*)(const QMenuBar*, const char*);
    using QMenuBar_IsSignalConnected_Callback = bool (*)(const QMenuBar*, QMetaMethod*);
    using QMenuBar_GetDecodedMetricF_Callback = double (*)(const QMenuBar*, int, int);

  protected:
    // Instance callback storage
    QMenuBar_Metacall_Callback qmenubar_metacall_callback = nullptr;
    QMenuBar_SizeHint_Callback qmenubar_sizehint_callback = nullptr;
    QMenuBar_MinimumSizeHint_Callback qmenubar_minimumsizehint_callback = nullptr;
    QMenuBar_HeightForWidth_Callback qmenubar_heightforwidth_callback = nullptr;
    QMenuBar_SetVisible_Callback qmenubar_setvisible_callback = nullptr;
    QMenuBar_ChangeEvent_Callback qmenubar_changeevent_callback = nullptr;
    QMenuBar_KeyPressEvent_Callback qmenubar_keypressevent_callback = nullptr;
    QMenuBar_MouseReleaseEvent_Callback qmenubar_mousereleaseevent_callback = nullptr;
    QMenuBar_MousePressEvent_Callback qmenubar_mousepressevent_callback = nullptr;
    QMenuBar_MouseMoveEvent_Callback qmenubar_mousemoveevent_callback = nullptr;
    QMenuBar_LeaveEvent_Callback qmenubar_leaveevent_callback = nullptr;
    QMenuBar_PaintEvent_Callback qmenubar_paintevent_callback = nullptr;
    QMenuBar_ResizeEvent_Callback qmenubar_resizeevent_callback = nullptr;
    QMenuBar_ActionEvent_Callback qmenubar_actionevent_callback = nullptr;
    QMenuBar_FocusOutEvent_Callback qmenubar_focusoutevent_callback = nullptr;
    QMenuBar_FocusInEvent_Callback qmenubar_focusinevent_callback = nullptr;
    QMenuBar_TimerEvent_Callback qmenubar_timerevent_callback = nullptr;
    QMenuBar_EventFilter_Callback qmenubar_eventfilter_callback = nullptr;
    QMenuBar_Event_Callback qmenubar_event_callback = nullptr;
    QMenuBar_InitStyleOption_Callback qmenubar_initstyleoption_callback = nullptr;
    QMenuBar_DevType_Callback qmenubar_devtype_callback = nullptr;
    QMenuBar_HasHeightForWidth_Callback qmenubar_hasheightforwidth_callback = nullptr;
    QMenuBar_PaintEngine_Callback qmenubar_paintengine_callback = nullptr;
    QMenuBar_MouseDoubleClickEvent_Callback qmenubar_mousedoubleclickevent_callback = nullptr;
    QMenuBar_WheelEvent_Callback qmenubar_wheelevent_callback = nullptr;
    QMenuBar_KeyReleaseEvent_Callback qmenubar_keyreleaseevent_callback = nullptr;
    QMenuBar_EnterEvent_Callback qmenubar_enterevent_callback = nullptr;
    QMenuBar_MoveEvent_Callback qmenubar_moveevent_callback = nullptr;
    QMenuBar_CloseEvent_Callback qmenubar_closeevent_callback = nullptr;
    QMenuBar_ContextMenuEvent_Callback qmenubar_contextmenuevent_callback = nullptr;
    QMenuBar_TabletEvent_Callback qmenubar_tabletevent_callback = nullptr;
    QMenuBar_DragEnterEvent_Callback qmenubar_dragenterevent_callback = nullptr;
    QMenuBar_DragMoveEvent_Callback qmenubar_dragmoveevent_callback = nullptr;
    QMenuBar_DragLeaveEvent_Callback qmenubar_dragleaveevent_callback = nullptr;
    QMenuBar_DropEvent_Callback qmenubar_dropevent_callback = nullptr;
    QMenuBar_ShowEvent_Callback qmenubar_showevent_callback = nullptr;
    QMenuBar_HideEvent_Callback qmenubar_hideevent_callback = nullptr;
    QMenuBar_NativeEvent_Callback qmenubar_nativeevent_callback = nullptr;
    QMenuBar_Metric_Callback qmenubar_metric_callback = nullptr;
    QMenuBar_InitPainter_Callback qmenubar_initpainter_callback = nullptr;
    QMenuBar_Redirected_Callback qmenubar_redirected_callback = nullptr;
    QMenuBar_SharedPainter_Callback qmenubar_sharedpainter_callback = nullptr;
    QMenuBar_InputMethodEvent_Callback qmenubar_inputmethodevent_callback = nullptr;
    QMenuBar_InputMethodQuery_Callback qmenubar_inputmethodquery_callback = nullptr;
    QMenuBar_FocusNextPrevChild_Callback qmenubar_focusnextprevchild_callback = nullptr;
    QMenuBar_ChildEvent_Callback qmenubar_childevent_callback = nullptr;
    QMenuBar_CustomEvent_Callback qmenubar_customevent_callback = nullptr;
    QMenuBar_ConnectNotify_Callback qmenubar_connectnotify_callback = nullptr;
    QMenuBar_DisconnectNotify_Callback qmenubar_disconnectnotify_callback = nullptr;
    QMenuBar_UpdateMicroFocus_Callback qmenubar_updatemicrofocus_callback = nullptr;
    QMenuBar_Create_Callback qmenubar_create_callback = nullptr;
    QMenuBar_Destroy_Callback qmenubar_destroy_callback = nullptr;
    QMenuBar_FocusNextChild_Callback qmenubar_focusnextchild_callback = nullptr;
    QMenuBar_FocusPreviousChild_Callback qmenubar_focuspreviouschild_callback = nullptr;
    QMenuBar_Sender_Callback qmenubar_sender_callback = nullptr;
    QMenuBar_SenderSignalIndex_Callback qmenubar_sendersignalindex_callback = nullptr;
    QMenuBar_Receivers_Callback qmenubar_receivers_callback = nullptr;
    QMenuBar_IsSignalConnected_Callback qmenubar_issignalconnected_callback = nullptr;
    QMenuBar_GetDecodedMetricF_Callback qmenubar_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qmenubar_metacall_isbase = false;
    mutable bool qmenubar_sizehint_isbase = false;
    mutable bool qmenubar_minimumsizehint_isbase = false;
    mutable bool qmenubar_heightforwidth_isbase = false;
    mutable bool qmenubar_setvisible_isbase = false;
    mutable bool qmenubar_changeevent_isbase = false;
    mutable bool qmenubar_keypressevent_isbase = false;
    mutable bool qmenubar_mousereleaseevent_isbase = false;
    mutable bool qmenubar_mousepressevent_isbase = false;
    mutable bool qmenubar_mousemoveevent_isbase = false;
    mutable bool qmenubar_leaveevent_isbase = false;
    mutable bool qmenubar_paintevent_isbase = false;
    mutable bool qmenubar_resizeevent_isbase = false;
    mutable bool qmenubar_actionevent_isbase = false;
    mutable bool qmenubar_focusoutevent_isbase = false;
    mutable bool qmenubar_focusinevent_isbase = false;
    mutable bool qmenubar_timerevent_isbase = false;
    mutable bool qmenubar_eventfilter_isbase = false;
    mutable bool qmenubar_event_isbase = false;
    mutable bool qmenubar_initstyleoption_isbase = false;
    mutable bool qmenubar_devtype_isbase = false;
    mutable bool qmenubar_hasheightforwidth_isbase = false;
    mutable bool qmenubar_paintengine_isbase = false;
    mutable bool qmenubar_mousedoubleclickevent_isbase = false;
    mutable bool qmenubar_wheelevent_isbase = false;
    mutable bool qmenubar_keyreleaseevent_isbase = false;
    mutable bool qmenubar_enterevent_isbase = false;
    mutable bool qmenubar_moveevent_isbase = false;
    mutable bool qmenubar_closeevent_isbase = false;
    mutable bool qmenubar_contextmenuevent_isbase = false;
    mutable bool qmenubar_tabletevent_isbase = false;
    mutable bool qmenubar_dragenterevent_isbase = false;
    mutable bool qmenubar_dragmoveevent_isbase = false;
    mutable bool qmenubar_dragleaveevent_isbase = false;
    mutable bool qmenubar_dropevent_isbase = false;
    mutable bool qmenubar_showevent_isbase = false;
    mutable bool qmenubar_hideevent_isbase = false;
    mutable bool qmenubar_nativeevent_isbase = false;
    mutable bool qmenubar_metric_isbase = false;
    mutable bool qmenubar_initpainter_isbase = false;
    mutable bool qmenubar_redirected_isbase = false;
    mutable bool qmenubar_sharedpainter_isbase = false;
    mutable bool qmenubar_inputmethodevent_isbase = false;
    mutable bool qmenubar_inputmethodquery_isbase = false;
    mutable bool qmenubar_focusnextprevchild_isbase = false;
    mutable bool qmenubar_childevent_isbase = false;
    mutable bool qmenubar_customevent_isbase = false;
    mutable bool qmenubar_connectnotify_isbase = false;
    mutable bool qmenubar_disconnectnotify_isbase = false;
    mutable bool qmenubar_updatemicrofocus_isbase = false;
    mutable bool qmenubar_create_isbase = false;
    mutable bool qmenubar_destroy_isbase = false;
    mutable bool qmenubar_focusnextchild_isbase = false;
    mutable bool qmenubar_focuspreviouschild_isbase = false;
    mutable bool qmenubar_sender_isbase = false;
    mutable bool qmenubar_sendersignalindex_isbase = false;
    mutable bool qmenubar_receivers_isbase = false;
    mutable bool qmenubar_issignalconnected_isbase = false;
    mutable bool qmenubar_getdecodedmetricf_isbase = false;

  public:
    VirtualQMenuBar(QWidget* parent) : QMenuBar(parent) {};
    VirtualQMenuBar() : QMenuBar() {};

    ~VirtualQMenuBar() {
        qmenubar_metacall_callback = nullptr;
        qmenubar_sizehint_callback = nullptr;
        qmenubar_minimumsizehint_callback = nullptr;
        qmenubar_heightforwidth_callback = nullptr;
        qmenubar_setvisible_callback = nullptr;
        qmenubar_changeevent_callback = nullptr;
        qmenubar_keypressevent_callback = nullptr;
        qmenubar_mousereleaseevent_callback = nullptr;
        qmenubar_mousepressevent_callback = nullptr;
        qmenubar_mousemoveevent_callback = nullptr;
        qmenubar_leaveevent_callback = nullptr;
        qmenubar_paintevent_callback = nullptr;
        qmenubar_resizeevent_callback = nullptr;
        qmenubar_actionevent_callback = nullptr;
        qmenubar_focusoutevent_callback = nullptr;
        qmenubar_focusinevent_callback = nullptr;
        qmenubar_timerevent_callback = nullptr;
        qmenubar_eventfilter_callback = nullptr;
        qmenubar_event_callback = nullptr;
        qmenubar_initstyleoption_callback = nullptr;
        qmenubar_devtype_callback = nullptr;
        qmenubar_hasheightforwidth_callback = nullptr;
        qmenubar_paintengine_callback = nullptr;
        qmenubar_mousedoubleclickevent_callback = nullptr;
        qmenubar_wheelevent_callback = nullptr;
        qmenubar_keyreleaseevent_callback = nullptr;
        qmenubar_enterevent_callback = nullptr;
        qmenubar_moveevent_callback = nullptr;
        qmenubar_closeevent_callback = nullptr;
        qmenubar_contextmenuevent_callback = nullptr;
        qmenubar_tabletevent_callback = nullptr;
        qmenubar_dragenterevent_callback = nullptr;
        qmenubar_dragmoveevent_callback = nullptr;
        qmenubar_dragleaveevent_callback = nullptr;
        qmenubar_dropevent_callback = nullptr;
        qmenubar_showevent_callback = nullptr;
        qmenubar_hideevent_callback = nullptr;
        qmenubar_nativeevent_callback = nullptr;
        qmenubar_metric_callback = nullptr;
        qmenubar_initpainter_callback = nullptr;
        qmenubar_redirected_callback = nullptr;
        qmenubar_sharedpainter_callback = nullptr;
        qmenubar_inputmethodevent_callback = nullptr;
        qmenubar_inputmethodquery_callback = nullptr;
        qmenubar_focusnextprevchild_callback = nullptr;
        qmenubar_childevent_callback = nullptr;
        qmenubar_customevent_callback = nullptr;
        qmenubar_connectnotify_callback = nullptr;
        qmenubar_disconnectnotify_callback = nullptr;
        qmenubar_updatemicrofocus_callback = nullptr;
        qmenubar_create_callback = nullptr;
        qmenubar_destroy_callback = nullptr;
        qmenubar_focusnextchild_callback = nullptr;
        qmenubar_focuspreviouschild_callback = nullptr;
        qmenubar_sender_callback = nullptr;
        qmenubar_sendersignalindex_callback = nullptr;
        qmenubar_receivers_callback = nullptr;
        qmenubar_issignalconnected_callback = nullptr;
        qmenubar_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQMenuBar_Metacall_Callback(QMenuBar_Metacall_Callback cb) { qmenubar_metacall_callback = cb; }
    inline void setQMenuBar_SizeHint_Callback(QMenuBar_SizeHint_Callback cb) { qmenubar_sizehint_callback = cb; }
    inline void setQMenuBar_MinimumSizeHint_Callback(QMenuBar_MinimumSizeHint_Callback cb) { qmenubar_minimumsizehint_callback = cb; }
    inline void setQMenuBar_HeightForWidth_Callback(QMenuBar_HeightForWidth_Callback cb) { qmenubar_heightforwidth_callback = cb; }
    inline void setQMenuBar_SetVisible_Callback(QMenuBar_SetVisible_Callback cb) { qmenubar_setvisible_callback = cb; }
    inline void setQMenuBar_ChangeEvent_Callback(QMenuBar_ChangeEvent_Callback cb) { qmenubar_changeevent_callback = cb; }
    inline void setQMenuBar_KeyPressEvent_Callback(QMenuBar_KeyPressEvent_Callback cb) { qmenubar_keypressevent_callback = cb; }
    inline void setQMenuBar_MouseReleaseEvent_Callback(QMenuBar_MouseReleaseEvent_Callback cb) { qmenubar_mousereleaseevent_callback = cb; }
    inline void setQMenuBar_MousePressEvent_Callback(QMenuBar_MousePressEvent_Callback cb) { qmenubar_mousepressevent_callback = cb; }
    inline void setQMenuBar_MouseMoveEvent_Callback(QMenuBar_MouseMoveEvent_Callback cb) { qmenubar_mousemoveevent_callback = cb; }
    inline void setQMenuBar_LeaveEvent_Callback(QMenuBar_LeaveEvent_Callback cb) { qmenubar_leaveevent_callback = cb; }
    inline void setQMenuBar_PaintEvent_Callback(QMenuBar_PaintEvent_Callback cb) { qmenubar_paintevent_callback = cb; }
    inline void setQMenuBar_ResizeEvent_Callback(QMenuBar_ResizeEvent_Callback cb) { qmenubar_resizeevent_callback = cb; }
    inline void setQMenuBar_ActionEvent_Callback(QMenuBar_ActionEvent_Callback cb) { qmenubar_actionevent_callback = cb; }
    inline void setQMenuBar_FocusOutEvent_Callback(QMenuBar_FocusOutEvent_Callback cb) { qmenubar_focusoutevent_callback = cb; }
    inline void setQMenuBar_FocusInEvent_Callback(QMenuBar_FocusInEvent_Callback cb) { qmenubar_focusinevent_callback = cb; }
    inline void setQMenuBar_TimerEvent_Callback(QMenuBar_TimerEvent_Callback cb) { qmenubar_timerevent_callback = cb; }
    inline void setQMenuBar_EventFilter_Callback(QMenuBar_EventFilter_Callback cb) { qmenubar_eventfilter_callback = cb; }
    inline void setQMenuBar_Event_Callback(QMenuBar_Event_Callback cb) { qmenubar_event_callback = cb; }
    inline void setQMenuBar_InitStyleOption_Callback(QMenuBar_InitStyleOption_Callback cb) { qmenubar_initstyleoption_callback = cb; }
    inline void setQMenuBar_DevType_Callback(QMenuBar_DevType_Callback cb) { qmenubar_devtype_callback = cb; }
    inline void setQMenuBar_HasHeightForWidth_Callback(QMenuBar_HasHeightForWidth_Callback cb) { qmenubar_hasheightforwidth_callback = cb; }
    inline void setQMenuBar_PaintEngine_Callback(QMenuBar_PaintEngine_Callback cb) { qmenubar_paintengine_callback = cb; }
    inline void setQMenuBar_MouseDoubleClickEvent_Callback(QMenuBar_MouseDoubleClickEvent_Callback cb) { qmenubar_mousedoubleclickevent_callback = cb; }
    inline void setQMenuBar_WheelEvent_Callback(QMenuBar_WheelEvent_Callback cb) { qmenubar_wheelevent_callback = cb; }
    inline void setQMenuBar_KeyReleaseEvent_Callback(QMenuBar_KeyReleaseEvent_Callback cb) { qmenubar_keyreleaseevent_callback = cb; }
    inline void setQMenuBar_EnterEvent_Callback(QMenuBar_EnterEvent_Callback cb) { qmenubar_enterevent_callback = cb; }
    inline void setQMenuBar_MoveEvent_Callback(QMenuBar_MoveEvent_Callback cb) { qmenubar_moveevent_callback = cb; }
    inline void setQMenuBar_CloseEvent_Callback(QMenuBar_CloseEvent_Callback cb) { qmenubar_closeevent_callback = cb; }
    inline void setQMenuBar_ContextMenuEvent_Callback(QMenuBar_ContextMenuEvent_Callback cb) { qmenubar_contextmenuevent_callback = cb; }
    inline void setQMenuBar_TabletEvent_Callback(QMenuBar_TabletEvent_Callback cb) { qmenubar_tabletevent_callback = cb; }
    inline void setQMenuBar_DragEnterEvent_Callback(QMenuBar_DragEnterEvent_Callback cb) { qmenubar_dragenterevent_callback = cb; }
    inline void setQMenuBar_DragMoveEvent_Callback(QMenuBar_DragMoveEvent_Callback cb) { qmenubar_dragmoveevent_callback = cb; }
    inline void setQMenuBar_DragLeaveEvent_Callback(QMenuBar_DragLeaveEvent_Callback cb) { qmenubar_dragleaveevent_callback = cb; }
    inline void setQMenuBar_DropEvent_Callback(QMenuBar_DropEvent_Callback cb) { qmenubar_dropevent_callback = cb; }
    inline void setQMenuBar_ShowEvent_Callback(QMenuBar_ShowEvent_Callback cb) { qmenubar_showevent_callback = cb; }
    inline void setQMenuBar_HideEvent_Callback(QMenuBar_HideEvent_Callback cb) { qmenubar_hideevent_callback = cb; }
    inline void setQMenuBar_NativeEvent_Callback(QMenuBar_NativeEvent_Callback cb) { qmenubar_nativeevent_callback = cb; }
    inline void setQMenuBar_Metric_Callback(QMenuBar_Metric_Callback cb) { qmenubar_metric_callback = cb; }
    inline void setQMenuBar_InitPainter_Callback(QMenuBar_InitPainter_Callback cb) { qmenubar_initpainter_callback = cb; }
    inline void setQMenuBar_Redirected_Callback(QMenuBar_Redirected_Callback cb) { qmenubar_redirected_callback = cb; }
    inline void setQMenuBar_SharedPainter_Callback(QMenuBar_SharedPainter_Callback cb) { qmenubar_sharedpainter_callback = cb; }
    inline void setQMenuBar_InputMethodEvent_Callback(QMenuBar_InputMethodEvent_Callback cb) { qmenubar_inputmethodevent_callback = cb; }
    inline void setQMenuBar_InputMethodQuery_Callback(QMenuBar_InputMethodQuery_Callback cb) { qmenubar_inputmethodquery_callback = cb; }
    inline void setQMenuBar_FocusNextPrevChild_Callback(QMenuBar_FocusNextPrevChild_Callback cb) { qmenubar_focusnextprevchild_callback = cb; }
    inline void setQMenuBar_ChildEvent_Callback(QMenuBar_ChildEvent_Callback cb) { qmenubar_childevent_callback = cb; }
    inline void setQMenuBar_CustomEvent_Callback(QMenuBar_CustomEvent_Callback cb) { qmenubar_customevent_callback = cb; }
    inline void setQMenuBar_ConnectNotify_Callback(QMenuBar_ConnectNotify_Callback cb) { qmenubar_connectnotify_callback = cb; }
    inline void setQMenuBar_DisconnectNotify_Callback(QMenuBar_DisconnectNotify_Callback cb) { qmenubar_disconnectnotify_callback = cb; }
    inline void setQMenuBar_UpdateMicroFocus_Callback(QMenuBar_UpdateMicroFocus_Callback cb) { qmenubar_updatemicrofocus_callback = cb; }
    inline void setQMenuBar_Create_Callback(QMenuBar_Create_Callback cb) { qmenubar_create_callback = cb; }
    inline void setQMenuBar_Destroy_Callback(QMenuBar_Destroy_Callback cb) { qmenubar_destroy_callback = cb; }
    inline void setQMenuBar_FocusNextChild_Callback(QMenuBar_FocusNextChild_Callback cb) { qmenubar_focusnextchild_callback = cb; }
    inline void setQMenuBar_FocusPreviousChild_Callback(QMenuBar_FocusPreviousChild_Callback cb) { qmenubar_focuspreviouschild_callback = cb; }
    inline void setQMenuBar_Sender_Callback(QMenuBar_Sender_Callback cb) { qmenubar_sender_callback = cb; }
    inline void setQMenuBar_SenderSignalIndex_Callback(QMenuBar_SenderSignalIndex_Callback cb) { qmenubar_sendersignalindex_callback = cb; }
    inline void setQMenuBar_Receivers_Callback(QMenuBar_Receivers_Callback cb) { qmenubar_receivers_callback = cb; }
    inline void setQMenuBar_IsSignalConnected_Callback(QMenuBar_IsSignalConnected_Callback cb) { qmenubar_issignalconnected_callback = cb; }
    inline void setQMenuBar_GetDecodedMetricF_Callback(QMenuBar_GetDecodedMetricF_Callback cb) { qmenubar_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQMenuBar_Metacall_IsBase(bool value) const { qmenubar_metacall_isbase = value; }
    inline void setQMenuBar_SizeHint_IsBase(bool value) const { qmenubar_sizehint_isbase = value; }
    inline void setQMenuBar_MinimumSizeHint_IsBase(bool value) const { qmenubar_minimumsizehint_isbase = value; }
    inline void setQMenuBar_HeightForWidth_IsBase(bool value) const { qmenubar_heightforwidth_isbase = value; }
    inline void setQMenuBar_SetVisible_IsBase(bool value) const { qmenubar_setvisible_isbase = value; }
    inline void setQMenuBar_ChangeEvent_IsBase(bool value) const { qmenubar_changeevent_isbase = value; }
    inline void setQMenuBar_KeyPressEvent_IsBase(bool value) const { qmenubar_keypressevent_isbase = value; }
    inline void setQMenuBar_MouseReleaseEvent_IsBase(bool value) const { qmenubar_mousereleaseevent_isbase = value; }
    inline void setQMenuBar_MousePressEvent_IsBase(bool value) const { qmenubar_mousepressevent_isbase = value; }
    inline void setQMenuBar_MouseMoveEvent_IsBase(bool value) const { qmenubar_mousemoveevent_isbase = value; }
    inline void setQMenuBar_LeaveEvent_IsBase(bool value) const { qmenubar_leaveevent_isbase = value; }
    inline void setQMenuBar_PaintEvent_IsBase(bool value) const { qmenubar_paintevent_isbase = value; }
    inline void setQMenuBar_ResizeEvent_IsBase(bool value) const { qmenubar_resizeevent_isbase = value; }
    inline void setQMenuBar_ActionEvent_IsBase(bool value) const { qmenubar_actionevent_isbase = value; }
    inline void setQMenuBar_FocusOutEvent_IsBase(bool value) const { qmenubar_focusoutevent_isbase = value; }
    inline void setQMenuBar_FocusInEvent_IsBase(bool value) const { qmenubar_focusinevent_isbase = value; }
    inline void setQMenuBar_TimerEvent_IsBase(bool value) const { qmenubar_timerevent_isbase = value; }
    inline void setQMenuBar_EventFilter_IsBase(bool value) const { qmenubar_eventfilter_isbase = value; }
    inline void setQMenuBar_Event_IsBase(bool value) const { qmenubar_event_isbase = value; }
    inline void setQMenuBar_InitStyleOption_IsBase(bool value) const { qmenubar_initstyleoption_isbase = value; }
    inline void setQMenuBar_DevType_IsBase(bool value) const { qmenubar_devtype_isbase = value; }
    inline void setQMenuBar_HasHeightForWidth_IsBase(bool value) const { qmenubar_hasheightforwidth_isbase = value; }
    inline void setQMenuBar_PaintEngine_IsBase(bool value) const { qmenubar_paintengine_isbase = value; }
    inline void setQMenuBar_MouseDoubleClickEvent_IsBase(bool value) const { qmenubar_mousedoubleclickevent_isbase = value; }
    inline void setQMenuBar_WheelEvent_IsBase(bool value) const { qmenubar_wheelevent_isbase = value; }
    inline void setQMenuBar_KeyReleaseEvent_IsBase(bool value) const { qmenubar_keyreleaseevent_isbase = value; }
    inline void setQMenuBar_EnterEvent_IsBase(bool value) const { qmenubar_enterevent_isbase = value; }
    inline void setQMenuBar_MoveEvent_IsBase(bool value) const { qmenubar_moveevent_isbase = value; }
    inline void setQMenuBar_CloseEvent_IsBase(bool value) const { qmenubar_closeevent_isbase = value; }
    inline void setQMenuBar_ContextMenuEvent_IsBase(bool value) const { qmenubar_contextmenuevent_isbase = value; }
    inline void setQMenuBar_TabletEvent_IsBase(bool value) const { qmenubar_tabletevent_isbase = value; }
    inline void setQMenuBar_DragEnterEvent_IsBase(bool value) const { qmenubar_dragenterevent_isbase = value; }
    inline void setQMenuBar_DragMoveEvent_IsBase(bool value) const { qmenubar_dragmoveevent_isbase = value; }
    inline void setQMenuBar_DragLeaveEvent_IsBase(bool value) const { qmenubar_dragleaveevent_isbase = value; }
    inline void setQMenuBar_DropEvent_IsBase(bool value) const { qmenubar_dropevent_isbase = value; }
    inline void setQMenuBar_ShowEvent_IsBase(bool value) const { qmenubar_showevent_isbase = value; }
    inline void setQMenuBar_HideEvent_IsBase(bool value) const { qmenubar_hideevent_isbase = value; }
    inline void setQMenuBar_NativeEvent_IsBase(bool value) const { qmenubar_nativeevent_isbase = value; }
    inline void setQMenuBar_Metric_IsBase(bool value) const { qmenubar_metric_isbase = value; }
    inline void setQMenuBar_InitPainter_IsBase(bool value) const { qmenubar_initpainter_isbase = value; }
    inline void setQMenuBar_Redirected_IsBase(bool value) const { qmenubar_redirected_isbase = value; }
    inline void setQMenuBar_SharedPainter_IsBase(bool value) const { qmenubar_sharedpainter_isbase = value; }
    inline void setQMenuBar_InputMethodEvent_IsBase(bool value) const { qmenubar_inputmethodevent_isbase = value; }
    inline void setQMenuBar_InputMethodQuery_IsBase(bool value) const { qmenubar_inputmethodquery_isbase = value; }
    inline void setQMenuBar_FocusNextPrevChild_IsBase(bool value) const { qmenubar_focusnextprevchild_isbase = value; }
    inline void setQMenuBar_ChildEvent_IsBase(bool value) const { qmenubar_childevent_isbase = value; }
    inline void setQMenuBar_CustomEvent_IsBase(bool value) const { qmenubar_customevent_isbase = value; }
    inline void setQMenuBar_ConnectNotify_IsBase(bool value) const { qmenubar_connectnotify_isbase = value; }
    inline void setQMenuBar_DisconnectNotify_IsBase(bool value) const { qmenubar_disconnectnotify_isbase = value; }
    inline void setQMenuBar_UpdateMicroFocus_IsBase(bool value) const { qmenubar_updatemicrofocus_isbase = value; }
    inline void setQMenuBar_Create_IsBase(bool value) const { qmenubar_create_isbase = value; }
    inline void setQMenuBar_Destroy_IsBase(bool value) const { qmenubar_destroy_isbase = value; }
    inline void setQMenuBar_FocusNextChild_IsBase(bool value) const { qmenubar_focusnextchild_isbase = value; }
    inline void setQMenuBar_FocusPreviousChild_IsBase(bool value) const { qmenubar_focuspreviouschild_isbase = value; }
    inline void setQMenuBar_Sender_IsBase(bool value) const { qmenubar_sender_isbase = value; }
    inline void setQMenuBar_SenderSignalIndex_IsBase(bool value) const { qmenubar_sendersignalindex_isbase = value; }
    inline void setQMenuBar_Receivers_IsBase(bool value) const { qmenubar_receivers_isbase = value; }
    inline void setQMenuBar_IsSignalConnected_IsBase(bool value) const { qmenubar_issignalconnected_isbase = value; }
    inline void setQMenuBar_GetDecodedMetricF_IsBase(bool value) const { qmenubar_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmenubar_metacall_isbase) {
            qmenubar_metacall_isbase = false;
            return QMenuBar::qt_metacall(param1, param2, param3);
        } else if (qmenubar_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qmenubar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QMenuBar::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qmenubar_sizehint_isbase) {
            qmenubar_sizehint_isbase = false;
            return QMenuBar::sizeHint();
        } else if (qmenubar_sizehint_callback != nullptr) {
            QSize* callback_ret = qmenubar_sizehint_callback();
            return *callback_ret;
        } else {
            return QMenuBar::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qmenubar_minimumsizehint_isbase) {
            qmenubar_minimumsizehint_isbase = false;
            return QMenuBar::minimumSizeHint();
        } else if (qmenubar_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qmenubar_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QMenuBar::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qmenubar_heightforwidth_isbase) {
            qmenubar_heightforwidth_isbase = false;
            return QMenuBar::heightForWidth(param1);
        } else if (qmenubar_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qmenubar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QMenuBar::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qmenubar_setvisible_isbase) {
            qmenubar_setvisible_isbase = false;
            QMenuBar::setVisible(visible);
        } else if (qmenubar_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qmenubar_setvisible_callback(this, cbval1);
        } else {
            QMenuBar::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qmenubar_changeevent_isbase) {
            qmenubar_changeevent_isbase = false;
            QMenuBar::changeEvent(param1);
        } else if (qmenubar_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qmenubar_changeevent_callback(this, cbval1);
        } else {
            QMenuBar::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qmenubar_keypressevent_isbase) {
            qmenubar_keypressevent_isbase = false;
            QMenuBar::keyPressEvent(param1);
        } else if (qmenubar_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qmenubar_keypressevent_callback(this, cbval1);
        } else {
            QMenuBar::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qmenubar_mousereleaseevent_isbase) {
            qmenubar_mousereleaseevent_isbase = false;
            QMenuBar::mouseReleaseEvent(param1);
        } else if (qmenubar_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qmenubar_mousereleaseevent_callback(this, cbval1);
        } else {
            QMenuBar::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qmenubar_mousepressevent_isbase) {
            qmenubar_mousepressevent_isbase = false;
            QMenuBar::mousePressEvent(param1);
        } else if (qmenubar_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qmenubar_mousepressevent_callback(this, cbval1);
        } else {
            QMenuBar::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qmenubar_mousemoveevent_isbase) {
            qmenubar_mousemoveevent_isbase = false;
            QMenuBar::mouseMoveEvent(param1);
        } else if (qmenubar_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qmenubar_mousemoveevent_callback(this, cbval1);
        } else {
            QMenuBar::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (qmenubar_leaveevent_isbase) {
            qmenubar_leaveevent_isbase = false;
            QMenuBar::leaveEvent(param1);
        } else if (qmenubar_leaveevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qmenubar_leaveevent_callback(this, cbval1);
        } else {
            QMenuBar::leaveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qmenubar_paintevent_isbase) {
            qmenubar_paintevent_isbase = false;
            QMenuBar::paintEvent(param1);
        } else if (qmenubar_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            qmenubar_paintevent_callback(this, cbval1);
        } else {
            QMenuBar::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qmenubar_resizeevent_isbase) {
            qmenubar_resizeevent_isbase = false;
            QMenuBar::resizeEvent(param1);
        } else if (qmenubar_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            qmenubar_resizeevent_callback(this, cbval1);
        } else {
            QMenuBar::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (qmenubar_actionevent_isbase) {
            qmenubar_actionevent_isbase = false;
            QMenuBar::actionEvent(param1);
        } else if (qmenubar_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = param1;

            qmenubar_actionevent_callback(this, cbval1);
        } else {
            QMenuBar::actionEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qmenubar_focusoutevent_isbase) {
            qmenubar_focusoutevent_isbase = false;
            QMenuBar::focusOutEvent(param1);
        } else if (qmenubar_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            qmenubar_focusoutevent_callback(this, cbval1);
        } else {
            QMenuBar::focusOutEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qmenubar_focusinevent_isbase) {
            qmenubar_focusinevent_isbase = false;
            QMenuBar::focusInEvent(param1);
        } else if (qmenubar_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            qmenubar_focusinevent_callback(this, cbval1);
        } else {
            QMenuBar::focusInEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qmenubar_timerevent_isbase) {
            qmenubar_timerevent_isbase = false;
            QMenuBar::timerEvent(param1);
        } else if (qmenubar_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = param1;

            qmenubar_timerevent_callback(this, cbval1);
        } else {
            QMenuBar::timerEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qmenubar_eventfilter_isbase) {
            qmenubar_eventfilter_isbase = false;
            return QMenuBar::eventFilter(param1, param2);
        } else if (qmenubar_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = qmenubar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QMenuBar::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qmenubar_event_isbase) {
            qmenubar_event_isbase = false;
            return QMenuBar::event(param1);
        } else if (qmenubar_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = qmenubar_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMenuBar::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionMenuItem* option, const QAction* action) const override {
        if (qmenubar_initstyleoption_isbase) {
            qmenubar_initstyleoption_isbase = false;
            QMenuBar::initStyleOption(option, action);
        } else if (qmenubar_initstyleoption_callback != nullptr) {
            QStyleOptionMenuItem* cbval1 = option;
            QAction* cbval2 = (QAction*)action;

            qmenubar_initstyleoption_callback(this, cbval1, cbval2);
        } else {
            QMenuBar::initStyleOption(option, action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qmenubar_devtype_isbase) {
            qmenubar_devtype_isbase = false;
            return QMenuBar::devType();
        } else if (qmenubar_devtype_callback != nullptr) {
            int callback_ret = qmenubar_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QMenuBar::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qmenubar_hasheightforwidth_isbase) {
            qmenubar_hasheightforwidth_isbase = false;
            return QMenuBar::hasHeightForWidth();
        } else if (qmenubar_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qmenubar_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QMenuBar::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qmenubar_paintengine_isbase) {
            qmenubar_paintengine_isbase = false;
            return QMenuBar::paintEngine();
        } else if (qmenubar_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qmenubar_paintengine_callback();
            return callback_ret;
        } else {
            return QMenuBar::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qmenubar_mousedoubleclickevent_isbase) {
            qmenubar_mousedoubleclickevent_isbase = false;
            QMenuBar::mouseDoubleClickEvent(event);
        } else if (qmenubar_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qmenubar_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QMenuBar::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qmenubar_wheelevent_isbase) {
            qmenubar_wheelevent_isbase = false;
            QMenuBar::wheelEvent(event);
        } else if (qmenubar_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qmenubar_wheelevent_callback(this, cbval1);
        } else {
            QMenuBar::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qmenubar_keyreleaseevent_isbase) {
            qmenubar_keyreleaseevent_isbase = false;
            QMenuBar::keyReleaseEvent(event);
        } else if (qmenubar_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qmenubar_keyreleaseevent_callback(this, cbval1);
        } else {
            QMenuBar::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qmenubar_enterevent_isbase) {
            qmenubar_enterevent_isbase = false;
            QMenuBar::enterEvent(event);
        } else if (qmenubar_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qmenubar_enterevent_callback(this, cbval1);
        } else {
            QMenuBar::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qmenubar_moveevent_isbase) {
            qmenubar_moveevent_isbase = false;
            QMenuBar::moveEvent(event);
        } else if (qmenubar_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qmenubar_moveevent_callback(this, cbval1);
        } else {
            QMenuBar::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qmenubar_closeevent_isbase) {
            qmenubar_closeevent_isbase = false;
            QMenuBar::closeEvent(event);
        } else if (qmenubar_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qmenubar_closeevent_callback(this, cbval1);
        } else {
            QMenuBar::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qmenubar_contextmenuevent_isbase) {
            qmenubar_contextmenuevent_isbase = false;
            QMenuBar::contextMenuEvent(event);
        } else if (qmenubar_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qmenubar_contextmenuevent_callback(this, cbval1);
        } else {
            QMenuBar::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qmenubar_tabletevent_isbase) {
            qmenubar_tabletevent_isbase = false;
            QMenuBar::tabletEvent(event);
        } else if (qmenubar_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qmenubar_tabletevent_callback(this, cbval1);
        } else {
            QMenuBar::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qmenubar_dragenterevent_isbase) {
            qmenubar_dragenterevent_isbase = false;
            QMenuBar::dragEnterEvent(event);
        } else if (qmenubar_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qmenubar_dragenterevent_callback(this, cbval1);
        } else {
            QMenuBar::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qmenubar_dragmoveevent_isbase) {
            qmenubar_dragmoveevent_isbase = false;
            QMenuBar::dragMoveEvent(event);
        } else if (qmenubar_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qmenubar_dragmoveevent_callback(this, cbval1);
        } else {
            QMenuBar::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qmenubar_dragleaveevent_isbase) {
            qmenubar_dragleaveevent_isbase = false;
            QMenuBar::dragLeaveEvent(event);
        } else if (qmenubar_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qmenubar_dragleaveevent_callback(this, cbval1);
        } else {
            QMenuBar::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qmenubar_dropevent_isbase) {
            qmenubar_dropevent_isbase = false;
            QMenuBar::dropEvent(event);
        } else if (qmenubar_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qmenubar_dropevent_callback(this, cbval1);
        } else {
            QMenuBar::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qmenubar_showevent_isbase) {
            qmenubar_showevent_isbase = false;
            QMenuBar::showEvent(event);
        } else if (qmenubar_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qmenubar_showevent_callback(this, cbval1);
        } else {
            QMenuBar::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qmenubar_hideevent_isbase) {
            qmenubar_hideevent_isbase = false;
            QMenuBar::hideEvent(event);
        } else if (qmenubar_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qmenubar_hideevent_callback(this, cbval1);
        } else {
            QMenuBar::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qmenubar_nativeevent_isbase) {
            qmenubar_nativeevent_isbase = false;
            return QMenuBar::nativeEvent(eventType, message, result);
        } else if (qmenubar_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<const char*>(malloc((eventType_str.len + 1) * sizeof(char)));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            ((char*)eventType_str.data)[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qmenubar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QMenuBar::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qmenubar_metric_isbase) {
            qmenubar_metric_isbase = false;
            return QMenuBar::metric(param1);
        } else if (qmenubar_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qmenubar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QMenuBar::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qmenubar_initpainter_isbase) {
            qmenubar_initpainter_isbase = false;
            QMenuBar::initPainter(painter);
        } else if (qmenubar_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qmenubar_initpainter_callback(this, cbval1);
        } else {
            QMenuBar::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qmenubar_redirected_isbase) {
            qmenubar_redirected_isbase = false;
            return QMenuBar::redirected(offset);
        } else if (qmenubar_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qmenubar_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMenuBar::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qmenubar_sharedpainter_isbase) {
            qmenubar_sharedpainter_isbase = false;
            return QMenuBar::sharedPainter();
        } else if (qmenubar_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qmenubar_sharedpainter_callback();
            return callback_ret;
        } else {
            return QMenuBar::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qmenubar_inputmethodevent_isbase) {
            qmenubar_inputmethodevent_isbase = false;
            QMenuBar::inputMethodEvent(param1);
        } else if (qmenubar_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qmenubar_inputmethodevent_callback(this, cbval1);
        } else {
            QMenuBar::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qmenubar_inputmethodquery_isbase) {
            qmenubar_inputmethodquery_isbase = false;
            return QMenuBar::inputMethodQuery(param1);
        } else if (qmenubar_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qmenubar_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QMenuBar::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qmenubar_focusnextprevchild_isbase) {
            qmenubar_focusnextprevchild_isbase = false;
            return QMenuBar::focusNextPrevChild(next);
        } else if (qmenubar_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qmenubar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMenuBar::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmenubar_childevent_isbase) {
            qmenubar_childevent_isbase = false;
            QMenuBar::childEvent(event);
        } else if (qmenubar_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qmenubar_childevent_callback(this, cbval1);
        } else {
            QMenuBar::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmenubar_customevent_isbase) {
            qmenubar_customevent_isbase = false;
            QMenuBar::customEvent(event);
        } else if (qmenubar_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qmenubar_customevent_callback(this, cbval1);
        } else {
            QMenuBar::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmenubar_connectnotify_isbase) {
            qmenubar_connectnotify_isbase = false;
            QMenuBar::connectNotify(signal);
        } else if (qmenubar_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qmenubar_connectnotify_callback(this, cbval1);
        } else {
            QMenuBar::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmenubar_disconnectnotify_isbase) {
            qmenubar_disconnectnotify_isbase = false;
            QMenuBar::disconnectNotify(signal);
        } else if (qmenubar_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qmenubar_disconnectnotify_callback(this, cbval1);
        } else {
            QMenuBar::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qmenubar_updatemicrofocus_isbase) {
            qmenubar_updatemicrofocus_isbase = false;
            QMenuBar::updateMicroFocus();
        } else if (qmenubar_updatemicrofocus_callback != nullptr) {
            qmenubar_updatemicrofocus_callback();
        } else {
            QMenuBar::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qmenubar_create_isbase) {
            qmenubar_create_isbase = false;
            QMenuBar::create();
        } else if (qmenubar_create_callback != nullptr) {
            qmenubar_create_callback();
        } else {
            QMenuBar::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qmenubar_destroy_isbase) {
            qmenubar_destroy_isbase = false;
            QMenuBar::destroy();
        } else if (qmenubar_destroy_callback != nullptr) {
            qmenubar_destroy_callback();
        } else {
            QMenuBar::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qmenubar_focusnextchild_isbase) {
            qmenubar_focusnextchild_isbase = false;
            return QMenuBar::focusNextChild();
        } else if (qmenubar_focusnextchild_callback != nullptr) {
            bool callback_ret = qmenubar_focusnextchild_callback();
            return callback_ret;
        } else {
            return QMenuBar::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qmenubar_focuspreviouschild_isbase) {
            qmenubar_focuspreviouschild_isbase = false;
            return QMenuBar::focusPreviousChild();
        } else if (qmenubar_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qmenubar_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QMenuBar::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qmenubar_sender_isbase) {
            qmenubar_sender_isbase = false;
            return QMenuBar::sender();
        } else if (qmenubar_sender_callback != nullptr) {
            QObject* callback_ret = qmenubar_sender_callback();
            return callback_ret;
        } else {
            return QMenuBar::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qmenubar_sendersignalindex_isbase) {
            qmenubar_sendersignalindex_isbase = false;
            return QMenuBar::senderSignalIndex();
        } else if (qmenubar_sendersignalindex_callback != nullptr) {
            int callback_ret = qmenubar_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QMenuBar::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qmenubar_receivers_isbase) {
            qmenubar_receivers_isbase = false;
            return QMenuBar::receivers(signal);
        } else if (qmenubar_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qmenubar_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QMenuBar::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qmenubar_issignalconnected_isbase) {
            qmenubar_issignalconnected_isbase = false;
            return QMenuBar::isSignalConnected(signal);
        } else if (qmenubar_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qmenubar_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMenuBar::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qmenubar_getdecodedmetricf_isbase) {
            qmenubar_getdecodedmetricf_isbase = false;
            return QMenuBar::getDecodedMetricF(metricA, metricB);
        } else if (qmenubar_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qmenubar_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QMenuBar::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void QMenuBar_ChangeEvent(QMenuBar* self, QEvent* param1);
    friend void QMenuBar_QBaseChangeEvent(QMenuBar* self, QEvent* param1);
    friend void QMenuBar_KeyPressEvent(QMenuBar* self, QKeyEvent* param1);
    friend void QMenuBar_QBaseKeyPressEvent(QMenuBar* self, QKeyEvent* param1);
    friend void QMenuBar_MouseReleaseEvent(QMenuBar* self, QMouseEvent* param1);
    friend void QMenuBar_QBaseMouseReleaseEvent(QMenuBar* self, QMouseEvent* param1);
    friend void QMenuBar_MousePressEvent(QMenuBar* self, QMouseEvent* param1);
    friend void QMenuBar_QBaseMousePressEvent(QMenuBar* self, QMouseEvent* param1);
    friend void QMenuBar_MouseMoveEvent(QMenuBar* self, QMouseEvent* param1);
    friend void QMenuBar_QBaseMouseMoveEvent(QMenuBar* self, QMouseEvent* param1);
    friend void QMenuBar_LeaveEvent(QMenuBar* self, QEvent* param1);
    friend void QMenuBar_QBaseLeaveEvent(QMenuBar* self, QEvent* param1);
    friend void QMenuBar_PaintEvent(QMenuBar* self, QPaintEvent* param1);
    friend void QMenuBar_QBasePaintEvent(QMenuBar* self, QPaintEvent* param1);
    friend void QMenuBar_ResizeEvent(QMenuBar* self, QResizeEvent* param1);
    friend void QMenuBar_QBaseResizeEvent(QMenuBar* self, QResizeEvent* param1);
    friend void QMenuBar_ActionEvent(QMenuBar* self, QActionEvent* param1);
    friend void QMenuBar_QBaseActionEvent(QMenuBar* self, QActionEvent* param1);
    friend void QMenuBar_FocusOutEvent(QMenuBar* self, QFocusEvent* param1);
    friend void QMenuBar_QBaseFocusOutEvent(QMenuBar* self, QFocusEvent* param1);
    friend void QMenuBar_FocusInEvent(QMenuBar* self, QFocusEvent* param1);
    friend void QMenuBar_QBaseFocusInEvent(QMenuBar* self, QFocusEvent* param1);
    friend void QMenuBar_TimerEvent(QMenuBar* self, QTimerEvent* param1);
    friend void QMenuBar_QBaseTimerEvent(QMenuBar* self, QTimerEvent* param1);
    friend bool QMenuBar_EventFilter(QMenuBar* self, QObject* param1, QEvent* param2);
    friend bool QMenuBar_QBaseEventFilter(QMenuBar* self, QObject* param1, QEvent* param2);
    friend bool QMenuBar_Event(QMenuBar* self, QEvent* param1);
    friend bool QMenuBar_QBaseEvent(QMenuBar* self, QEvent* param1);
    friend void QMenuBar_InitStyleOption(const QMenuBar* self, QStyleOptionMenuItem* option, const QAction* action);
    friend void QMenuBar_QBaseInitStyleOption(const QMenuBar* self, QStyleOptionMenuItem* option, const QAction* action);
    friend void QMenuBar_MouseDoubleClickEvent(QMenuBar* self, QMouseEvent* event);
    friend void QMenuBar_QBaseMouseDoubleClickEvent(QMenuBar* self, QMouseEvent* event);
    friend void QMenuBar_WheelEvent(QMenuBar* self, QWheelEvent* event);
    friend void QMenuBar_QBaseWheelEvent(QMenuBar* self, QWheelEvent* event);
    friend void QMenuBar_KeyReleaseEvent(QMenuBar* self, QKeyEvent* event);
    friend void QMenuBar_QBaseKeyReleaseEvent(QMenuBar* self, QKeyEvent* event);
    friend void QMenuBar_EnterEvent(QMenuBar* self, QEnterEvent* event);
    friend void QMenuBar_QBaseEnterEvent(QMenuBar* self, QEnterEvent* event);
    friend void QMenuBar_MoveEvent(QMenuBar* self, QMoveEvent* event);
    friend void QMenuBar_QBaseMoveEvent(QMenuBar* self, QMoveEvent* event);
    friend void QMenuBar_CloseEvent(QMenuBar* self, QCloseEvent* event);
    friend void QMenuBar_QBaseCloseEvent(QMenuBar* self, QCloseEvent* event);
    friend void QMenuBar_ContextMenuEvent(QMenuBar* self, QContextMenuEvent* event);
    friend void QMenuBar_QBaseContextMenuEvent(QMenuBar* self, QContextMenuEvent* event);
    friend void QMenuBar_TabletEvent(QMenuBar* self, QTabletEvent* event);
    friend void QMenuBar_QBaseTabletEvent(QMenuBar* self, QTabletEvent* event);
    friend void QMenuBar_DragEnterEvent(QMenuBar* self, QDragEnterEvent* event);
    friend void QMenuBar_QBaseDragEnterEvent(QMenuBar* self, QDragEnterEvent* event);
    friend void QMenuBar_DragMoveEvent(QMenuBar* self, QDragMoveEvent* event);
    friend void QMenuBar_QBaseDragMoveEvent(QMenuBar* self, QDragMoveEvent* event);
    friend void QMenuBar_DragLeaveEvent(QMenuBar* self, QDragLeaveEvent* event);
    friend void QMenuBar_QBaseDragLeaveEvent(QMenuBar* self, QDragLeaveEvent* event);
    friend void QMenuBar_DropEvent(QMenuBar* self, QDropEvent* event);
    friend void QMenuBar_QBaseDropEvent(QMenuBar* self, QDropEvent* event);
    friend void QMenuBar_ShowEvent(QMenuBar* self, QShowEvent* event);
    friend void QMenuBar_QBaseShowEvent(QMenuBar* self, QShowEvent* event);
    friend void QMenuBar_HideEvent(QMenuBar* self, QHideEvent* event);
    friend void QMenuBar_QBaseHideEvent(QMenuBar* self, QHideEvent* event);
    friend bool QMenuBar_NativeEvent(QMenuBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QMenuBar_QBaseNativeEvent(QMenuBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QMenuBar_Metric(const QMenuBar* self, int param1);
    friend int QMenuBar_QBaseMetric(const QMenuBar* self, int param1);
    friend void QMenuBar_InitPainter(const QMenuBar* self, QPainter* painter);
    friend void QMenuBar_QBaseInitPainter(const QMenuBar* self, QPainter* painter);
    friend QPaintDevice* QMenuBar_Redirected(const QMenuBar* self, QPoint* offset);
    friend QPaintDevice* QMenuBar_QBaseRedirected(const QMenuBar* self, QPoint* offset);
    friend QPainter* QMenuBar_SharedPainter(const QMenuBar* self);
    friend QPainter* QMenuBar_QBaseSharedPainter(const QMenuBar* self);
    friend void QMenuBar_InputMethodEvent(QMenuBar* self, QInputMethodEvent* param1);
    friend void QMenuBar_QBaseInputMethodEvent(QMenuBar* self, QInputMethodEvent* param1);
    friend bool QMenuBar_FocusNextPrevChild(QMenuBar* self, bool next);
    friend bool QMenuBar_QBaseFocusNextPrevChild(QMenuBar* self, bool next);
    friend void QMenuBar_ChildEvent(QMenuBar* self, QChildEvent* event);
    friend void QMenuBar_QBaseChildEvent(QMenuBar* self, QChildEvent* event);
    friend void QMenuBar_CustomEvent(QMenuBar* self, QEvent* event);
    friend void QMenuBar_QBaseCustomEvent(QMenuBar* self, QEvent* event);
    friend void QMenuBar_ConnectNotify(QMenuBar* self, const QMetaMethod* signal);
    friend void QMenuBar_QBaseConnectNotify(QMenuBar* self, const QMetaMethod* signal);
    friend void QMenuBar_DisconnectNotify(QMenuBar* self, const QMetaMethod* signal);
    friend void QMenuBar_QBaseDisconnectNotify(QMenuBar* self, const QMetaMethod* signal);
    friend void QMenuBar_UpdateMicroFocus(QMenuBar* self);
    friend void QMenuBar_QBaseUpdateMicroFocus(QMenuBar* self);
    friend void QMenuBar_Create(QMenuBar* self);
    friend void QMenuBar_QBaseCreate(QMenuBar* self);
    friend void QMenuBar_Destroy(QMenuBar* self);
    friend void QMenuBar_QBaseDestroy(QMenuBar* self);
    friend bool QMenuBar_FocusNextChild(QMenuBar* self);
    friend bool QMenuBar_QBaseFocusNextChild(QMenuBar* self);
    friend bool QMenuBar_FocusPreviousChild(QMenuBar* self);
    friend bool QMenuBar_QBaseFocusPreviousChild(QMenuBar* self);
    friend QObject* QMenuBar_Sender(const QMenuBar* self);
    friend QObject* QMenuBar_QBaseSender(const QMenuBar* self);
    friend int QMenuBar_SenderSignalIndex(const QMenuBar* self);
    friend int QMenuBar_QBaseSenderSignalIndex(const QMenuBar* self);
    friend int QMenuBar_Receivers(const QMenuBar* self, const char* signal);
    friend int QMenuBar_QBaseReceivers(const QMenuBar* self, const char* signal);
    friend bool QMenuBar_IsSignalConnected(const QMenuBar* self, const QMetaMethod* signal);
    friend bool QMenuBar_QBaseIsSignalConnected(const QMenuBar* self, const QMetaMethod* signal);
    friend double QMenuBar_GetDecodedMetricF(const QMenuBar* self, int metricA, int metricB);
    friend double QMenuBar_QBaseGetDecodedMetricF(const QMenuBar* self, int metricA, int metricB);
};

#endif
