#pragma once
#ifndef SRCC_LIBVIRTUALQFRAME_H
#define SRCC_LIBVIRTUALQFRAME_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFrame so that we can call protected methods
class VirtualQFrame final : public QFrame {

  public:
    // Virtual class boolean flag
    bool isVirtualQFrame = true;

    // Virtual class public types (including callbacks)
    using QFrame_Metacall_Callback = int (*)(QFrame*, int, int, void**);
    using QFrame_SizeHint_Callback = QSize* (*)();
    using QFrame_Event_Callback = bool (*)(QFrame*, QEvent*);
    using QFrame_PaintEvent_Callback = void (*)(QFrame*, QPaintEvent*);
    using QFrame_ChangeEvent_Callback = void (*)(QFrame*, QEvent*);
    using QFrame_InitStyleOption_Callback = void (*)(const QFrame*, QStyleOptionFrame*);
    using QFrame_DevType_Callback = int (*)();
    using QFrame_SetVisible_Callback = void (*)(QFrame*, bool);
    using QFrame_MinimumSizeHint_Callback = QSize* (*)();
    using QFrame_HeightForWidth_Callback = int (*)(const QFrame*, int);
    using QFrame_HasHeightForWidth_Callback = bool (*)();
    using QFrame_PaintEngine_Callback = QPaintEngine* (*)();
    using QFrame_MousePressEvent_Callback = void (*)(QFrame*, QMouseEvent*);
    using QFrame_MouseReleaseEvent_Callback = void (*)(QFrame*, QMouseEvent*);
    using QFrame_MouseDoubleClickEvent_Callback = void (*)(QFrame*, QMouseEvent*);
    using QFrame_MouseMoveEvent_Callback = void (*)(QFrame*, QMouseEvent*);
    using QFrame_WheelEvent_Callback = void (*)(QFrame*, QWheelEvent*);
    using QFrame_KeyPressEvent_Callback = void (*)(QFrame*, QKeyEvent*);
    using QFrame_KeyReleaseEvent_Callback = void (*)(QFrame*, QKeyEvent*);
    using QFrame_FocusInEvent_Callback = void (*)(QFrame*, QFocusEvent*);
    using QFrame_FocusOutEvent_Callback = void (*)(QFrame*, QFocusEvent*);
    using QFrame_EnterEvent_Callback = void (*)(QFrame*, QEnterEvent*);
    using QFrame_LeaveEvent_Callback = void (*)(QFrame*, QEvent*);
    using QFrame_MoveEvent_Callback = void (*)(QFrame*, QMoveEvent*);
    using QFrame_ResizeEvent_Callback = void (*)(QFrame*, QResizeEvent*);
    using QFrame_CloseEvent_Callback = void (*)(QFrame*, QCloseEvent*);
    using QFrame_ContextMenuEvent_Callback = void (*)(QFrame*, QContextMenuEvent*);
    using QFrame_TabletEvent_Callback = void (*)(QFrame*, QTabletEvent*);
    using QFrame_ActionEvent_Callback = void (*)(QFrame*, QActionEvent*);
    using QFrame_DragEnterEvent_Callback = void (*)(QFrame*, QDragEnterEvent*);
    using QFrame_DragMoveEvent_Callback = void (*)(QFrame*, QDragMoveEvent*);
    using QFrame_DragLeaveEvent_Callback = void (*)(QFrame*, QDragLeaveEvent*);
    using QFrame_DropEvent_Callback = void (*)(QFrame*, QDropEvent*);
    using QFrame_ShowEvent_Callback = void (*)(QFrame*, QShowEvent*);
    using QFrame_HideEvent_Callback = void (*)(QFrame*, QHideEvent*);
    using QFrame_NativeEvent_Callback = bool (*)(QFrame*, libqt_string, void*, intptr_t*);
    using QFrame_Metric_Callback = int (*)(const QFrame*, int);
    using QFrame_InitPainter_Callback = void (*)(const QFrame*, QPainter*);
    using QFrame_Redirected_Callback = QPaintDevice* (*)(const QFrame*, QPoint*);
    using QFrame_SharedPainter_Callback = QPainter* (*)();
    using QFrame_InputMethodEvent_Callback = void (*)(QFrame*, QInputMethodEvent*);
    using QFrame_InputMethodQuery_Callback = QVariant* (*)(const QFrame*, int);
    using QFrame_FocusNextPrevChild_Callback = bool (*)(QFrame*, bool);
    using QFrame_EventFilter_Callback = bool (*)(QFrame*, QObject*, QEvent*);
    using QFrame_TimerEvent_Callback = void (*)(QFrame*, QTimerEvent*);
    using QFrame_ChildEvent_Callback = void (*)(QFrame*, QChildEvent*);
    using QFrame_CustomEvent_Callback = void (*)(QFrame*, QEvent*);
    using QFrame_ConnectNotify_Callback = void (*)(QFrame*, QMetaMethod*);
    using QFrame_DisconnectNotify_Callback = void (*)(QFrame*, QMetaMethod*);
    using QFrame_DrawFrame_Callback = void (*)(QFrame*, QPainter*);
    using QFrame_UpdateMicroFocus_Callback = void (*)();
    using QFrame_Create_Callback = void (*)();
    using QFrame_Destroy_Callback = void (*)();
    using QFrame_FocusNextChild_Callback = bool (*)();
    using QFrame_FocusPreviousChild_Callback = bool (*)();
    using QFrame_Sender_Callback = QObject* (*)();
    using QFrame_SenderSignalIndex_Callback = int (*)();
    using QFrame_Receivers_Callback = int (*)(const QFrame*, const char*);
    using QFrame_IsSignalConnected_Callback = bool (*)(const QFrame*, QMetaMethod*);
    using QFrame_GetDecodedMetricF_Callback = double (*)(const QFrame*, int, int);

  protected:
    // Instance callback storage
    QFrame_Metacall_Callback qframe_metacall_callback = nullptr;
    QFrame_SizeHint_Callback qframe_sizehint_callback = nullptr;
    QFrame_Event_Callback qframe_event_callback = nullptr;
    QFrame_PaintEvent_Callback qframe_paintevent_callback = nullptr;
    QFrame_ChangeEvent_Callback qframe_changeevent_callback = nullptr;
    QFrame_InitStyleOption_Callback qframe_initstyleoption_callback = nullptr;
    QFrame_DevType_Callback qframe_devtype_callback = nullptr;
    QFrame_SetVisible_Callback qframe_setvisible_callback = nullptr;
    QFrame_MinimumSizeHint_Callback qframe_minimumsizehint_callback = nullptr;
    QFrame_HeightForWidth_Callback qframe_heightforwidth_callback = nullptr;
    QFrame_HasHeightForWidth_Callback qframe_hasheightforwidth_callback = nullptr;
    QFrame_PaintEngine_Callback qframe_paintengine_callback = nullptr;
    QFrame_MousePressEvent_Callback qframe_mousepressevent_callback = nullptr;
    QFrame_MouseReleaseEvent_Callback qframe_mousereleaseevent_callback = nullptr;
    QFrame_MouseDoubleClickEvent_Callback qframe_mousedoubleclickevent_callback = nullptr;
    QFrame_MouseMoveEvent_Callback qframe_mousemoveevent_callback = nullptr;
    QFrame_WheelEvent_Callback qframe_wheelevent_callback = nullptr;
    QFrame_KeyPressEvent_Callback qframe_keypressevent_callback = nullptr;
    QFrame_KeyReleaseEvent_Callback qframe_keyreleaseevent_callback = nullptr;
    QFrame_FocusInEvent_Callback qframe_focusinevent_callback = nullptr;
    QFrame_FocusOutEvent_Callback qframe_focusoutevent_callback = nullptr;
    QFrame_EnterEvent_Callback qframe_enterevent_callback = nullptr;
    QFrame_LeaveEvent_Callback qframe_leaveevent_callback = nullptr;
    QFrame_MoveEvent_Callback qframe_moveevent_callback = nullptr;
    QFrame_ResizeEvent_Callback qframe_resizeevent_callback = nullptr;
    QFrame_CloseEvent_Callback qframe_closeevent_callback = nullptr;
    QFrame_ContextMenuEvent_Callback qframe_contextmenuevent_callback = nullptr;
    QFrame_TabletEvent_Callback qframe_tabletevent_callback = nullptr;
    QFrame_ActionEvent_Callback qframe_actionevent_callback = nullptr;
    QFrame_DragEnterEvent_Callback qframe_dragenterevent_callback = nullptr;
    QFrame_DragMoveEvent_Callback qframe_dragmoveevent_callback = nullptr;
    QFrame_DragLeaveEvent_Callback qframe_dragleaveevent_callback = nullptr;
    QFrame_DropEvent_Callback qframe_dropevent_callback = nullptr;
    QFrame_ShowEvent_Callback qframe_showevent_callback = nullptr;
    QFrame_HideEvent_Callback qframe_hideevent_callback = nullptr;
    QFrame_NativeEvent_Callback qframe_nativeevent_callback = nullptr;
    QFrame_Metric_Callback qframe_metric_callback = nullptr;
    QFrame_InitPainter_Callback qframe_initpainter_callback = nullptr;
    QFrame_Redirected_Callback qframe_redirected_callback = nullptr;
    QFrame_SharedPainter_Callback qframe_sharedpainter_callback = nullptr;
    QFrame_InputMethodEvent_Callback qframe_inputmethodevent_callback = nullptr;
    QFrame_InputMethodQuery_Callback qframe_inputmethodquery_callback = nullptr;
    QFrame_FocusNextPrevChild_Callback qframe_focusnextprevchild_callback = nullptr;
    QFrame_EventFilter_Callback qframe_eventfilter_callback = nullptr;
    QFrame_TimerEvent_Callback qframe_timerevent_callback = nullptr;
    QFrame_ChildEvent_Callback qframe_childevent_callback = nullptr;
    QFrame_CustomEvent_Callback qframe_customevent_callback = nullptr;
    QFrame_ConnectNotify_Callback qframe_connectnotify_callback = nullptr;
    QFrame_DisconnectNotify_Callback qframe_disconnectnotify_callback = nullptr;
    QFrame_DrawFrame_Callback qframe_drawframe_callback = nullptr;
    QFrame_UpdateMicroFocus_Callback qframe_updatemicrofocus_callback = nullptr;
    QFrame_Create_Callback qframe_create_callback = nullptr;
    QFrame_Destroy_Callback qframe_destroy_callback = nullptr;
    QFrame_FocusNextChild_Callback qframe_focusnextchild_callback = nullptr;
    QFrame_FocusPreviousChild_Callback qframe_focuspreviouschild_callback = nullptr;
    QFrame_Sender_Callback qframe_sender_callback = nullptr;
    QFrame_SenderSignalIndex_Callback qframe_sendersignalindex_callback = nullptr;
    QFrame_Receivers_Callback qframe_receivers_callback = nullptr;
    QFrame_IsSignalConnected_Callback qframe_issignalconnected_callback = nullptr;
    QFrame_GetDecodedMetricF_Callback qframe_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qframe_metacall_isbase = false;
    mutable bool qframe_sizehint_isbase = false;
    mutable bool qframe_event_isbase = false;
    mutable bool qframe_paintevent_isbase = false;
    mutable bool qframe_changeevent_isbase = false;
    mutable bool qframe_initstyleoption_isbase = false;
    mutable bool qframe_devtype_isbase = false;
    mutable bool qframe_setvisible_isbase = false;
    mutable bool qframe_minimumsizehint_isbase = false;
    mutable bool qframe_heightforwidth_isbase = false;
    mutable bool qframe_hasheightforwidth_isbase = false;
    mutable bool qframe_paintengine_isbase = false;
    mutable bool qframe_mousepressevent_isbase = false;
    mutable bool qframe_mousereleaseevent_isbase = false;
    mutable bool qframe_mousedoubleclickevent_isbase = false;
    mutable bool qframe_mousemoveevent_isbase = false;
    mutable bool qframe_wheelevent_isbase = false;
    mutable bool qframe_keypressevent_isbase = false;
    mutable bool qframe_keyreleaseevent_isbase = false;
    mutable bool qframe_focusinevent_isbase = false;
    mutable bool qframe_focusoutevent_isbase = false;
    mutable bool qframe_enterevent_isbase = false;
    mutable bool qframe_leaveevent_isbase = false;
    mutable bool qframe_moveevent_isbase = false;
    mutable bool qframe_resizeevent_isbase = false;
    mutable bool qframe_closeevent_isbase = false;
    mutable bool qframe_contextmenuevent_isbase = false;
    mutable bool qframe_tabletevent_isbase = false;
    mutable bool qframe_actionevent_isbase = false;
    mutable bool qframe_dragenterevent_isbase = false;
    mutable bool qframe_dragmoveevent_isbase = false;
    mutable bool qframe_dragleaveevent_isbase = false;
    mutable bool qframe_dropevent_isbase = false;
    mutable bool qframe_showevent_isbase = false;
    mutable bool qframe_hideevent_isbase = false;
    mutable bool qframe_nativeevent_isbase = false;
    mutable bool qframe_metric_isbase = false;
    mutable bool qframe_initpainter_isbase = false;
    mutable bool qframe_redirected_isbase = false;
    mutable bool qframe_sharedpainter_isbase = false;
    mutable bool qframe_inputmethodevent_isbase = false;
    mutable bool qframe_inputmethodquery_isbase = false;
    mutable bool qframe_focusnextprevchild_isbase = false;
    mutable bool qframe_eventfilter_isbase = false;
    mutable bool qframe_timerevent_isbase = false;
    mutable bool qframe_childevent_isbase = false;
    mutable bool qframe_customevent_isbase = false;
    mutable bool qframe_connectnotify_isbase = false;
    mutable bool qframe_disconnectnotify_isbase = false;
    mutable bool qframe_drawframe_isbase = false;
    mutable bool qframe_updatemicrofocus_isbase = false;
    mutable bool qframe_create_isbase = false;
    mutable bool qframe_destroy_isbase = false;
    mutable bool qframe_focusnextchild_isbase = false;
    mutable bool qframe_focuspreviouschild_isbase = false;
    mutable bool qframe_sender_isbase = false;
    mutable bool qframe_sendersignalindex_isbase = false;
    mutable bool qframe_receivers_isbase = false;
    mutable bool qframe_issignalconnected_isbase = false;
    mutable bool qframe_getdecodedmetricf_isbase = false;

  public:
    VirtualQFrame(QWidget* parent) : QFrame(parent) {};
    VirtualQFrame() : QFrame() {};
    VirtualQFrame(QWidget* parent, Qt::WindowFlags f) : QFrame(parent, f) {};

    ~VirtualQFrame() {
        qframe_metacall_callback = nullptr;
        qframe_sizehint_callback = nullptr;
        qframe_event_callback = nullptr;
        qframe_paintevent_callback = nullptr;
        qframe_changeevent_callback = nullptr;
        qframe_initstyleoption_callback = nullptr;
        qframe_devtype_callback = nullptr;
        qframe_setvisible_callback = nullptr;
        qframe_minimumsizehint_callback = nullptr;
        qframe_heightforwidth_callback = nullptr;
        qframe_hasheightforwidth_callback = nullptr;
        qframe_paintengine_callback = nullptr;
        qframe_mousepressevent_callback = nullptr;
        qframe_mousereleaseevent_callback = nullptr;
        qframe_mousedoubleclickevent_callback = nullptr;
        qframe_mousemoveevent_callback = nullptr;
        qframe_wheelevent_callback = nullptr;
        qframe_keypressevent_callback = nullptr;
        qframe_keyreleaseevent_callback = nullptr;
        qframe_focusinevent_callback = nullptr;
        qframe_focusoutevent_callback = nullptr;
        qframe_enterevent_callback = nullptr;
        qframe_leaveevent_callback = nullptr;
        qframe_moveevent_callback = nullptr;
        qframe_resizeevent_callback = nullptr;
        qframe_closeevent_callback = nullptr;
        qframe_contextmenuevent_callback = nullptr;
        qframe_tabletevent_callback = nullptr;
        qframe_actionevent_callback = nullptr;
        qframe_dragenterevent_callback = nullptr;
        qframe_dragmoveevent_callback = nullptr;
        qframe_dragleaveevent_callback = nullptr;
        qframe_dropevent_callback = nullptr;
        qframe_showevent_callback = nullptr;
        qframe_hideevent_callback = nullptr;
        qframe_nativeevent_callback = nullptr;
        qframe_metric_callback = nullptr;
        qframe_initpainter_callback = nullptr;
        qframe_redirected_callback = nullptr;
        qframe_sharedpainter_callback = nullptr;
        qframe_inputmethodevent_callback = nullptr;
        qframe_inputmethodquery_callback = nullptr;
        qframe_focusnextprevchild_callback = nullptr;
        qframe_eventfilter_callback = nullptr;
        qframe_timerevent_callback = nullptr;
        qframe_childevent_callback = nullptr;
        qframe_customevent_callback = nullptr;
        qframe_connectnotify_callback = nullptr;
        qframe_disconnectnotify_callback = nullptr;
        qframe_drawframe_callback = nullptr;
        qframe_updatemicrofocus_callback = nullptr;
        qframe_create_callback = nullptr;
        qframe_destroy_callback = nullptr;
        qframe_focusnextchild_callback = nullptr;
        qframe_focuspreviouschild_callback = nullptr;
        qframe_sender_callback = nullptr;
        qframe_sendersignalindex_callback = nullptr;
        qframe_receivers_callback = nullptr;
        qframe_issignalconnected_callback = nullptr;
        qframe_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQFrame_Metacall_Callback(QFrame_Metacall_Callback cb) { qframe_metacall_callback = cb; }
    inline void setQFrame_SizeHint_Callback(QFrame_SizeHint_Callback cb) { qframe_sizehint_callback = cb; }
    inline void setQFrame_Event_Callback(QFrame_Event_Callback cb) { qframe_event_callback = cb; }
    inline void setQFrame_PaintEvent_Callback(QFrame_PaintEvent_Callback cb) { qframe_paintevent_callback = cb; }
    inline void setQFrame_ChangeEvent_Callback(QFrame_ChangeEvent_Callback cb) { qframe_changeevent_callback = cb; }
    inline void setQFrame_InitStyleOption_Callback(QFrame_InitStyleOption_Callback cb) { qframe_initstyleoption_callback = cb; }
    inline void setQFrame_DevType_Callback(QFrame_DevType_Callback cb) { qframe_devtype_callback = cb; }
    inline void setQFrame_SetVisible_Callback(QFrame_SetVisible_Callback cb) { qframe_setvisible_callback = cb; }
    inline void setQFrame_MinimumSizeHint_Callback(QFrame_MinimumSizeHint_Callback cb) { qframe_minimumsizehint_callback = cb; }
    inline void setQFrame_HeightForWidth_Callback(QFrame_HeightForWidth_Callback cb) { qframe_heightforwidth_callback = cb; }
    inline void setQFrame_HasHeightForWidth_Callback(QFrame_HasHeightForWidth_Callback cb) { qframe_hasheightforwidth_callback = cb; }
    inline void setQFrame_PaintEngine_Callback(QFrame_PaintEngine_Callback cb) { qframe_paintengine_callback = cb; }
    inline void setQFrame_MousePressEvent_Callback(QFrame_MousePressEvent_Callback cb) { qframe_mousepressevent_callback = cb; }
    inline void setQFrame_MouseReleaseEvent_Callback(QFrame_MouseReleaseEvent_Callback cb) { qframe_mousereleaseevent_callback = cb; }
    inline void setQFrame_MouseDoubleClickEvent_Callback(QFrame_MouseDoubleClickEvent_Callback cb) { qframe_mousedoubleclickevent_callback = cb; }
    inline void setQFrame_MouseMoveEvent_Callback(QFrame_MouseMoveEvent_Callback cb) { qframe_mousemoveevent_callback = cb; }
    inline void setQFrame_WheelEvent_Callback(QFrame_WheelEvent_Callback cb) { qframe_wheelevent_callback = cb; }
    inline void setQFrame_KeyPressEvent_Callback(QFrame_KeyPressEvent_Callback cb) { qframe_keypressevent_callback = cb; }
    inline void setQFrame_KeyReleaseEvent_Callback(QFrame_KeyReleaseEvent_Callback cb) { qframe_keyreleaseevent_callback = cb; }
    inline void setQFrame_FocusInEvent_Callback(QFrame_FocusInEvent_Callback cb) { qframe_focusinevent_callback = cb; }
    inline void setQFrame_FocusOutEvent_Callback(QFrame_FocusOutEvent_Callback cb) { qframe_focusoutevent_callback = cb; }
    inline void setQFrame_EnterEvent_Callback(QFrame_EnterEvent_Callback cb) { qframe_enterevent_callback = cb; }
    inline void setQFrame_LeaveEvent_Callback(QFrame_LeaveEvent_Callback cb) { qframe_leaveevent_callback = cb; }
    inline void setQFrame_MoveEvent_Callback(QFrame_MoveEvent_Callback cb) { qframe_moveevent_callback = cb; }
    inline void setQFrame_ResizeEvent_Callback(QFrame_ResizeEvent_Callback cb) { qframe_resizeevent_callback = cb; }
    inline void setQFrame_CloseEvent_Callback(QFrame_CloseEvent_Callback cb) { qframe_closeevent_callback = cb; }
    inline void setQFrame_ContextMenuEvent_Callback(QFrame_ContextMenuEvent_Callback cb) { qframe_contextmenuevent_callback = cb; }
    inline void setQFrame_TabletEvent_Callback(QFrame_TabletEvent_Callback cb) { qframe_tabletevent_callback = cb; }
    inline void setQFrame_ActionEvent_Callback(QFrame_ActionEvent_Callback cb) { qframe_actionevent_callback = cb; }
    inline void setQFrame_DragEnterEvent_Callback(QFrame_DragEnterEvent_Callback cb) { qframe_dragenterevent_callback = cb; }
    inline void setQFrame_DragMoveEvent_Callback(QFrame_DragMoveEvent_Callback cb) { qframe_dragmoveevent_callback = cb; }
    inline void setQFrame_DragLeaveEvent_Callback(QFrame_DragLeaveEvent_Callback cb) { qframe_dragleaveevent_callback = cb; }
    inline void setQFrame_DropEvent_Callback(QFrame_DropEvent_Callback cb) { qframe_dropevent_callback = cb; }
    inline void setQFrame_ShowEvent_Callback(QFrame_ShowEvent_Callback cb) { qframe_showevent_callback = cb; }
    inline void setQFrame_HideEvent_Callback(QFrame_HideEvent_Callback cb) { qframe_hideevent_callback = cb; }
    inline void setQFrame_NativeEvent_Callback(QFrame_NativeEvent_Callback cb) { qframe_nativeevent_callback = cb; }
    inline void setQFrame_Metric_Callback(QFrame_Metric_Callback cb) { qframe_metric_callback = cb; }
    inline void setQFrame_InitPainter_Callback(QFrame_InitPainter_Callback cb) { qframe_initpainter_callback = cb; }
    inline void setQFrame_Redirected_Callback(QFrame_Redirected_Callback cb) { qframe_redirected_callback = cb; }
    inline void setQFrame_SharedPainter_Callback(QFrame_SharedPainter_Callback cb) { qframe_sharedpainter_callback = cb; }
    inline void setQFrame_InputMethodEvent_Callback(QFrame_InputMethodEvent_Callback cb) { qframe_inputmethodevent_callback = cb; }
    inline void setQFrame_InputMethodQuery_Callback(QFrame_InputMethodQuery_Callback cb) { qframe_inputmethodquery_callback = cb; }
    inline void setQFrame_FocusNextPrevChild_Callback(QFrame_FocusNextPrevChild_Callback cb) { qframe_focusnextprevchild_callback = cb; }
    inline void setQFrame_EventFilter_Callback(QFrame_EventFilter_Callback cb) { qframe_eventfilter_callback = cb; }
    inline void setQFrame_TimerEvent_Callback(QFrame_TimerEvent_Callback cb) { qframe_timerevent_callback = cb; }
    inline void setQFrame_ChildEvent_Callback(QFrame_ChildEvent_Callback cb) { qframe_childevent_callback = cb; }
    inline void setQFrame_CustomEvent_Callback(QFrame_CustomEvent_Callback cb) { qframe_customevent_callback = cb; }
    inline void setQFrame_ConnectNotify_Callback(QFrame_ConnectNotify_Callback cb) { qframe_connectnotify_callback = cb; }
    inline void setQFrame_DisconnectNotify_Callback(QFrame_DisconnectNotify_Callback cb) { qframe_disconnectnotify_callback = cb; }
    inline void setQFrame_DrawFrame_Callback(QFrame_DrawFrame_Callback cb) { qframe_drawframe_callback = cb; }
    inline void setQFrame_UpdateMicroFocus_Callback(QFrame_UpdateMicroFocus_Callback cb) { qframe_updatemicrofocus_callback = cb; }
    inline void setQFrame_Create_Callback(QFrame_Create_Callback cb) { qframe_create_callback = cb; }
    inline void setQFrame_Destroy_Callback(QFrame_Destroy_Callback cb) { qframe_destroy_callback = cb; }
    inline void setQFrame_FocusNextChild_Callback(QFrame_FocusNextChild_Callback cb) { qframe_focusnextchild_callback = cb; }
    inline void setQFrame_FocusPreviousChild_Callback(QFrame_FocusPreviousChild_Callback cb) { qframe_focuspreviouschild_callback = cb; }
    inline void setQFrame_Sender_Callback(QFrame_Sender_Callback cb) { qframe_sender_callback = cb; }
    inline void setQFrame_SenderSignalIndex_Callback(QFrame_SenderSignalIndex_Callback cb) { qframe_sendersignalindex_callback = cb; }
    inline void setQFrame_Receivers_Callback(QFrame_Receivers_Callback cb) { qframe_receivers_callback = cb; }
    inline void setQFrame_IsSignalConnected_Callback(QFrame_IsSignalConnected_Callback cb) { qframe_issignalconnected_callback = cb; }
    inline void setQFrame_GetDecodedMetricF_Callback(QFrame_GetDecodedMetricF_Callback cb) { qframe_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQFrame_Metacall_IsBase(bool value) const { qframe_metacall_isbase = value; }
    inline void setQFrame_SizeHint_IsBase(bool value) const { qframe_sizehint_isbase = value; }
    inline void setQFrame_Event_IsBase(bool value) const { qframe_event_isbase = value; }
    inline void setQFrame_PaintEvent_IsBase(bool value) const { qframe_paintevent_isbase = value; }
    inline void setQFrame_ChangeEvent_IsBase(bool value) const { qframe_changeevent_isbase = value; }
    inline void setQFrame_InitStyleOption_IsBase(bool value) const { qframe_initstyleoption_isbase = value; }
    inline void setQFrame_DevType_IsBase(bool value) const { qframe_devtype_isbase = value; }
    inline void setQFrame_SetVisible_IsBase(bool value) const { qframe_setvisible_isbase = value; }
    inline void setQFrame_MinimumSizeHint_IsBase(bool value) const { qframe_minimumsizehint_isbase = value; }
    inline void setQFrame_HeightForWidth_IsBase(bool value) const { qframe_heightforwidth_isbase = value; }
    inline void setQFrame_HasHeightForWidth_IsBase(bool value) const { qframe_hasheightforwidth_isbase = value; }
    inline void setQFrame_PaintEngine_IsBase(bool value) const { qframe_paintengine_isbase = value; }
    inline void setQFrame_MousePressEvent_IsBase(bool value) const { qframe_mousepressevent_isbase = value; }
    inline void setQFrame_MouseReleaseEvent_IsBase(bool value) const { qframe_mousereleaseevent_isbase = value; }
    inline void setQFrame_MouseDoubleClickEvent_IsBase(bool value) const { qframe_mousedoubleclickevent_isbase = value; }
    inline void setQFrame_MouseMoveEvent_IsBase(bool value) const { qframe_mousemoveevent_isbase = value; }
    inline void setQFrame_WheelEvent_IsBase(bool value) const { qframe_wheelevent_isbase = value; }
    inline void setQFrame_KeyPressEvent_IsBase(bool value) const { qframe_keypressevent_isbase = value; }
    inline void setQFrame_KeyReleaseEvent_IsBase(bool value) const { qframe_keyreleaseevent_isbase = value; }
    inline void setQFrame_FocusInEvent_IsBase(bool value) const { qframe_focusinevent_isbase = value; }
    inline void setQFrame_FocusOutEvent_IsBase(bool value) const { qframe_focusoutevent_isbase = value; }
    inline void setQFrame_EnterEvent_IsBase(bool value) const { qframe_enterevent_isbase = value; }
    inline void setQFrame_LeaveEvent_IsBase(bool value) const { qframe_leaveevent_isbase = value; }
    inline void setQFrame_MoveEvent_IsBase(bool value) const { qframe_moveevent_isbase = value; }
    inline void setQFrame_ResizeEvent_IsBase(bool value) const { qframe_resizeevent_isbase = value; }
    inline void setQFrame_CloseEvent_IsBase(bool value) const { qframe_closeevent_isbase = value; }
    inline void setQFrame_ContextMenuEvent_IsBase(bool value) const { qframe_contextmenuevent_isbase = value; }
    inline void setQFrame_TabletEvent_IsBase(bool value) const { qframe_tabletevent_isbase = value; }
    inline void setQFrame_ActionEvent_IsBase(bool value) const { qframe_actionevent_isbase = value; }
    inline void setQFrame_DragEnterEvent_IsBase(bool value) const { qframe_dragenterevent_isbase = value; }
    inline void setQFrame_DragMoveEvent_IsBase(bool value) const { qframe_dragmoveevent_isbase = value; }
    inline void setQFrame_DragLeaveEvent_IsBase(bool value) const { qframe_dragleaveevent_isbase = value; }
    inline void setQFrame_DropEvent_IsBase(bool value) const { qframe_dropevent_isbase = value; }
    inline void setQFrame_ShowEvent_IsBase(bool value) const { qframe_showevent_isbase = value; }
    inline void setQFrame_HideEvent_IsBase(bool value) const { qframe_hideevent_isbase = value; }
    inline void setQFrame_NativeEvent_IsBase(bool value) const { qframe_nativeevent_isbase = value; }
    inline void setQFrame_Metric_IsBase(bool value) const { qframe_metric_isbase = value; }
    inline void setQFrame_InitPainter_IsBase(bool value) const { qframe_initpainter_isbase = value; }
    inline void setQFrame_Redirected_IsBase(bool value) const { qframe_redirected_isbase = value; }
    inline void setQFrame_SharedPainter_IsBase(bool value) const { qframe_sharedpainter_isbase = value; }
    inline void setQFrame_InputMethodEvent_IsBase(bool value) const { qframe_inputmethodevent_isbase = value; }
    inline void setQFrame_InputMethodQuery_IsBase(bool value) const { qframe_inputmethodquery_isbase = value; }
    inline void setQFrame_FocusNextPrevChild_IsBase(bool value) const { qframe_focusnextprevchild_isbase = value; }
    inline void setQFrame_EventFilter_IsBase(bool value) const { qframe_eventfilter_isbase = value; }
    inline void setQFrame_TimerEvent_IsBase(bool value) const { qframe_timerevent_isbase = value; }
    inline void setQFrame_ChildEvent_IsBase(bool value) const { qframe_childevent_isbase = value; }
    inline void setQFrame_CustomEvent_IsBase(bool value) const { qframe_customevent_isbase = value; }
    inline void setQFrame_ConnectNotify_IsBase(bool value) const { qframe_connectnotify_isbase = value; }
    inline void setQFrame_DisconnectNotify_IsBase(bool value) const { qframe_disconnectnotify_isbase = value; }
    inline void setQFrame_DrawFrame_IsBase(bool value) const { qframe_drawframe_isbase = value; }
    inline void setQFrame_UpdateMicroFocus_IsBase(bool value) const { qframe_updatemicrofocus_isbase = value; }
    inline void setQFrame_Create_IsBase(bool value) const { qframe_create_isbase = value; }
    inline void setQFrame_Destroy_IsBase(bool value) const { qframe_destroy_isbase = value; }
    inline void setQFrame_FocusNextChild_IsBase(bool value) const { qframe_focusnextchild_isbase = value; }
    inline void setQFrame_FocusPreviousChild_IsBase(bool value) const { qframe_focuspreviouschild_isbase = value; }
    inline void setQFrame_Sender_IsBase(bool value) const { qframe_sender_isbase = value; }
    inline void setQFrame_SenderSignalIndex_IsBase(bool value) const { qframe_sendersignalindex_isbase = value; }
    inline void setQFrame_Receivers_IsBase(bool value) const { qframe_receivers_isbase = value; }
    inline void setQFrame_IsSignalConnected_IsBase(bool value) const { qframe_issignalconnected_isbase = value; }
    inline void setQFrame_GetDecodedMetricF_IsBase(bool value) const { qframe_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qframe_metacall_isbase) {
            qframe_metacall_isbase = false;
            return QFrame::qt_metacall(param1, param2, param3);
        } else if (qframe_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qframe_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QFrame::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qframe_sizehint_isbase) {
            qframe_sizehint_isbase = false;
            return QFrame::sizeHint();
        } else if (qframe_sizehint_callback != nullptr) {
            QSize* callback_ret = qframe_sizehint_callback();
            return *callback_ret;
        } else {
            return QFrame::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qframe_event_isbase) {
            qframe_event_isbase = false;
            return QFrame::event(e);
        } else if (qframe_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qframe_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QFrame::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qframe_paintevent_isbase) {
            qframe_paintevent_isbase = false;
            QFrame::paintEvent(param1);
        } else if (qframe_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            qframe_paintevent_callback(this, cbval1);
        } else {
            QFrame::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qframe_changeevent_isbase) {
            qframe_changeevent_isbase = false;
            QFrame::changeEvent(param1);
        } else if (qframe_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qframe_changeevent_callback(this, cbval1);
        } else {
            QFrame::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qframe_initstyleoption_isbase) {
            qframe_initstyleoption_isbase = false;
            QFrame::initStyleOption(option);
        } else if (qframe_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            qframe_initstyleoption_callback(this, cbval1);
        } else {
            QFrame::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qframe_devtype_isbase) {
            qframe_devtype_isbase = false;
            return QFrame::devType();
        } else if (qframe_devtype_callback != nullptr) {
            int callback_ret = qframe_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QFrame::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qframe_setvisible_isbase) {
            qframe_setvisible_isbase = false;
            QFrame::setVisible(visible);
        } else if (qframe_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qframe_setvisible_callback(this, cbval1);
        } else {
            QFrame::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qframe_minimumsizehint_isbase) {
            qframe_minimumsizehint_isbase = false;
            return QFrame::minimumSizeHint();
        } else if (qframe_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qframe_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QFrame::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qframe_heightforwidth_isbase) {
            qframe_heightforwidth_isbase = false;
            return QFrame::heightForWidth(param1);
        } else if (qframe_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qframe_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QFrame::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qframe_hasheightforwidth_isbase) {
            qframe_hasheightforwidth_isbase = false;
            return QFrame::hasHeightForWidth();
        } else if (qframe_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qframe_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QFrame::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qframe_paintengine_isbase) {
            qframe_paintengine_isbase = false;
            return QFrame::paintEngine();
        } else if (qframe_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qframe_paintengine_callback();
            return callback_ret;
        } else {
            return QFrame::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qframe_mousepressevent_isbase) {
            qframe_mousepressevent_isbase = false;
            QFrame::mousePressEvent(event);
        } else if (qframe_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qframe_mousepressevent_callback(this, cbval1);
        } else {
            QFrame::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qframe_mousereleaseevent_isbase) {
            qframe_mousereleaseevent_isbase = false;
            QFrame::mouseReleaseEvent(event);
        } else if (qframe_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qframe_mousereleaseevent_callback(this, cbval1);
        } else {
            QFrame::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qframe_mousedoubleclickevent_isbase) {
            qframe_mousedoubleclickevent_isbase = false;
            QFrame::mouseDoubleClickEvent(event);
        } else if (qframe_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qframe_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QFrame::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qframe_mousemoveevent_isbase) {
            qframe_mousemoveevent_isbase = false;
            QFrame::mouseMoveEvent(event);
        } else if (qframe_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qframe_mousemoveevent_callback(this, cbval1);
        } else {
            QFrame::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qframe_wheelevent_isbase) {
            qframe_wheelevent_isbase = false;
            QFrame::wheelEvent(event);
        } else if (qframe_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qframe_wheelevent_callback(this, cbval1);
        } else {
            QFrame::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qframe_keypressevent_isbase) {
            qframe_keypressevent_isbase = false;
            QFrame::keyPressEvent(event);
        } else if (qframe_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qframe_keypressevent_callback(this, cbval1);
        } else {
            QFrame::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qframe_keyreleaseevent_isbase) {
            qframe_keyreleaseevent_isbase = false;
            QFrame::keyReleaseEvent(event);
        } else if (qframe_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qframe_keyreleaseevent_callback(this, cbval1);
        } else {
            QFrame::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qframe_focusinevent_isbase) {
            qframe_focusinevent_isbase = false;
            QFrame::focusInEvent(event);
        } else if (qframe_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qframe_focusinevent_callback(this, cbval1);
        } else {
            QFrame::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qframe_focusoutevent_isbase) {
            qframe_focusoutevent_isbase = false;
            QFrame::focusOutEvent(event);
        } else if (qframe_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qframe_focusoutevent_callback(this, cbval1);
        } else {
            QFrame::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qframe_enterevent_isbase) {
            qframe_enterevent_isbase = false;
            QFrame::enterEvent(event);
        } else if (qframe_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qframe_enterevent_callback(this, cbval1);
        } else {
            QFrame::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qframe_leaveevent_isbase) {
            qframe_leaveevent_isbase = false;
            QFrame::leaveEvent(event);
        } else if (qframe_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qframe_leaveevent_callback(this, cbval1);
        } else {
            QFrame::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qframe_moveevent_isbase) {
            qframe_moveevent_isbase = false;
            QFrame::moveEvent(event);
        } else if (qframe_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qframe_moveevent_callback(this, cbval1);
        } else {
            QFrame::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qframe_resizeevent_isbase) {
            qframe_resizeevent_isbase = false;
            QFrame::resizeEvent(event);
        } else if (qframe_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qframe_resizeevent_callback(this, cbval1);
        } else {
            QFrame::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qframe_closeevent_isbase) {
            qframe_closeevent_isbase = false;
            QFrame::closeEvent(event);
        } else if (qframe_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qframe_closeevent_callback(this, cbval1);
        } else {
            QFrame::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qframe_contextmenuevent_isbase) {
            qframe_contextmenuevent_isbase = false;
            QFrame::contextMenuEvent(event);
        } else if (qframe_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qframe_contextmenuevent_callback(this, cbval1);
        } else {
            QFrame::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qframe_tabletevent_isbase) {
            qframe_tabletevent_isbase = false;
            QFrame::tabletEvent(event);
        } else if (qframe_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qframe_tabletevent_callback(this, cbval1);
        } else {
            QFrame::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qframe_actionevent_isbase) {
            qframe_actionevent_isbase = false;
            QFrame::actionEvent(event);
        } else if (qframe_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qframe_actionevent_callback(this, cbval1);
        } else {
            QFrame::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qframe_dragenterevent_isbase) {
            qframe_dragenterevent_isbase = false;
            QFrame::dragEnterEvent(event);
        } else if (qframe_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qframe_dragenterevent_callback(this, cbval1);
        } else {
            QFrame::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qframe_dragmoveevent_isbase) {
            qframe_dragmoveevent_isbase = false;
            QFrame::dragMoveEvent(event);
        } else if (qframe_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qframe_dragmoveevent_callback(this, cbval1);
        } else {
            QFrame::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qframe_dragleaveevent_isbase) {
            qframe_dragleaveevent_isbase = false;
            QFrame::dragLeaveEvent(event);
        } else if (qframe_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qframe_dragleaveevent_callback(this, cbval1);
        } else {
            QFrame::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qframe_dropevent_isbase) {
            qframe_dropevent_isbase = false;
            QFrame::dropEvent(event);
        } else if (qframe_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qframe_dropevent_callback(this, cbval1);
        } else {
            QFrame::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qframe_showevent_isbase) {
            qframe_showevent_isbase = false;
            QFrame::showEvent(event);
        } else if (qframe_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qframe_showevent_callback(this, cbval1);
        } else {
            QFrame::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qframe_hideevent_isbase) {
            qframe_hideevent_isbase = false;
            QFrame::hideEvent(event);
        } else if (qframe_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qframe_hideevent_callback(this, cbval1);
        } else {
            QFrame::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qframe_nativeevent_isbase) {
            qframe_nativeevent_isbase = false;
            return QFrame::nativeEvent(eventType, message, result);
        } else if (qframe_nativeevent_callback != nullptr) {
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

            bool callback_ret = qframe_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QFrame::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qframe_metric_isbase) {
            qframe_metric_isbase = false;
            return QFrame::metric(param1);
        } else if (qframe_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qframe_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QFrame::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qframe_initpainter_isbase) {
            qframe_initpainter_isbase = false;
            QFrame::initPainter(painter);
        } else if (qframe_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qframe_initpainter_callback(this, cbval1);
        } else {
            QFrame::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qframe_redirected_isbase) {
            qframe_redirected_isbase = false;
            return QFrame::redirected(offset);
        } else if (qframe_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qframe_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QFrame::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qframe_sharedpainter_isbase) {
            qframe_sharedpainter_isbase = false;
            return QFrame::sharedPainter();
        } else if (qframe_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qframe_sharedpainter_callback();
            return callback_ret;
        } else {
            return QFrame::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qframe_inputmethodevent_isbase) {
            qframe_inputmethodevent_isbase = false;
            QFrame::inputMethodEvent(param1);
        } else if (qframe_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qframe_inputmethodevent_callback(this, cbval1);
        } else {
            QFrame::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qframe_inputmethodquery_isbase) {
            qframe_inputmethodquery_isbase = false;
            return QFrame::inputMethodQuery(param1);
        } else if (qframe_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qframe_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QFrame::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qframe_focusnextprevchild_isbase) {
            qframe_focusnextprevchild_isbase = false;
            return QFrame::focusNextPrevChild(next);
        } else if (qframe_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qframe_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QFrame::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qframe_eventfilter_isbase) {
            qframe_eventfilter_isbase = false;
            return QFrame::eventFilter(watched, event);
        } else if (qframe_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qframe_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QFrame::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qframe_timerevent_isbase) {
            qframe_timerevent_isbase = false;
            QFrame::timerEvent(event);
        } else if (qframe_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qframe_timerevent_callback(this, cbval1);
        } else {
            QFrame::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qframe_childevent_isbase) {
            qframe_childevent_isbase = false;
            QFrame::childEvent(event);
        } else if (qframe_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qframe_childevent_callback(this, cbval1);
        } else {
            QFrame::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qframe_customevent_isbase) {
            qframe_customevent_isbase = false;
            QFrame::customEvent(event);
        } else if (qframe_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qframe_customevent_callback(this, cbval1);
        } else {
            QFrame::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qframe_connectnotify_isbase) {
            qframe_connectnotify_isbase = false;
            QFrame::connectNotify(signal);
        } else if (qframe_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qframe_connectnotify_callback(this, cbval1);
        } else {
            QFrame::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qframe_disconnectnotify_isbase) {
            qframe_disconnectnotify_isbase = false;
            QFrame::disconnectNotify(signal);
        } else if (qframe_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qframe_disconnectnotify_callback(this, cbval1);
        } else {
            QFrame::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qframe_drawframe_isbase) {
            qframe_drawframe_isbase = false;
            QFrame::drawFrame(param1);
        } else if (qframe_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            qframe_drawframe_callback(this, cbval1);
        } else {
            QFrame::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qframe_updatemicrofocus_isbase) {
            qframe_updatemicrofocus_isbase = false;
            QFrame::updateMicroFocus();
        } else if (qframe_updatemicrofocus_callback != nullptr) {
            qframe_updatemicrofocus_callback();
        } else {
            QFrame::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qframe_create_isbase) {
            qframe_create_isbase = false;
            QFrame::create();
        } else if (qframe_create_callback != nullptr) {
            qframe_create_callback();
        } else {
            QFrame::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qframe_destroy_isbase) {
            qframe_destroy_isbase = false;
            QFrame::destroy();
        } else if (qframe_destroy_callback != nullptr) {
            qframe_destroy_callback();
        } else {
            QFrame::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qframe_focusnextchild_isbase) {
            qframe_focusnextchild_isbase = false;
            return QFrame::focusNextChild();
        } else if (qframe_focusnextchild_callback != nullptr) {
            bool callback_ret = qframe_focusnextchild_callback();
            return callback_ret;
        } else {
            return QFrame::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qframe_focuspreviouschild_isbase) {
            qframe_focuspreviouschild_isbase = false;
            return QFrame::focusPreviousChild();
        } else if (qframe_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qframe_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QFrame::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qframe_sender_isbase) {
            qframe_sender_isbase = false;
            return QFrame::sender();
        } else if (qframe_sender_callback != nullptr) {
            QObject* callback_ret = qframe_sender_callback();
            return callback_ret;
        } else {
            return QFrame::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qframe_sendersignalindex_isbase) {
            qframe_sendersignalindex_isbase = false;
            return QFrame::senderSignalIndex();
        } else if (qframe_sendersignalindex_callback != nullptr) {
            int callback_ret = qframe_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QFrame::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qframe_receivers_isbase) {
            qframe_receivers_isbase = false;
            return QFrame::receivers(signal);
        } else if (qframe_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qframe_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QFrame::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qframe_issignalconnected_isbase) {
            qframe_issignalconnected_isbase = false;
            return QFrame::isSignalConnected(signal);
        } else if (qframe_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qframe_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QFrame::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qframe_getdecodedmetricf_isbase) {
            qframe_getdecodedmetricf_isbase = false;
            return QFrame::getDecodedMetricF(metricA, metricB);
        } else if (qframe_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qframe_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QFrame::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool QFrame_Event(QFrame* self, QEvent* e);
    friend bool QFrame_QBaseEvent(QFrame* self, QEvent* e);
    friend void QFrame_PaintEvent(QFrame* self, QPaintEvent* param1);
    friend void QFrame_QBasePaintEvent(QFrame* self, QPaintEvent* param1);
    friend void QFrame_ChangeEvent(QFrame* self, QEvent* param1);
    friend void QFrame_QBaseChangeEvent(QFrame* self, QEvent* param1);
    friend void QFrame_InitStyleOption(const QFrame* self, QStyleOptionFrame* option);
    friend void QFrame_QBaseInitStyleOption(const QFrame* self, QStyleOptionFrame* option);
    friend void QFrame_MousePressEvent(QFrame* self, QMouseEvent* event);
    friend void QFrame_QBaseMousePressEvent(QFrame* self, QMouseEvent* event);
    friend void QFrame_MouseReleaseEvent(QFrame* self, QMouseEvent* event);
    friend void QFrame_QBaseMouseReleaseEvent(QFrame* self, QMouseEvent* event);
    friend void QFrame_MouseDoubleClickEvent(QFrame* self, QMouseEvent* event);
    friend void QFrame_QBaseMouseDoubleClickEvent(QFrame* self, QMouseEvent* event);
    friend void QFrame_MouseMoveEvent(QFrame* self, QMouseEvent* event);
    friend void QFrame_QBaseMouseMoveEvent(QFrame* self, QMouseEvent* event);
    friend void QFrame_WheelEvent(QFrame* self, QWheelEvent* event);
    friend void QFrame_QBaseWheelEvent(QFrame* self, QWheelEvent* event);
    friend void QFrame_KeyPressEvent(QFrame* self, QKeyEvent* event);
    friend void QFrame_QBaseKeyPressEvent(QFrame* self, QKeyEvent* event);
    friend void QFrame_KeyReleaseEvent(QFrame* self, QKeyEvent* event);
    friend void QFrame_QBaseKeyReleaseEvent(QFrame* self, QKeyEvent* event);
    friend void QFrame_FocusInEvent(QFrame* self, QFocusEvent* event);
    friend void QFrame_QBaseFocusInEvent(QFrame* self, QFocusEvent* event);
    friend void QFrame_FocusOutEvent(QFrame* self, QFocusEvent* event);
    friend void QFrame_QBaseFocusOutEvent(QFrame* self, QFocusEvent* event);
    friend void QFrame_EnterEvent(QFrame* self, QEnterEvent* event);
    friend void QFrame_QBaseEnterEvent(QFrame* self, QEnterEvent* event);
    friend void QFrame_LeaveEvent(QFrame* self, QEvent* event);
    friend void QFrame_QBaseLeaveEvent(QFrame* self, QEvent* event);
    friend void QFrame_MoveEvent(QFrame* self, QMoveEvent* event);
    friend void QFrame_QBaseMoveEvent(QFrame* self, QMoveEvent* event);
    friend void QFrame_ResizeEvent(QFrame* self, QResizeEvent* event);
    friend void QFrame_QBaseResizeEvent(QFrame* self, QResizeEvent* event);
    friend void QFrame_CloseEvent(QFrame* self, QCloseEvent* event);
    friend void QFrame_QBaseCloseEvent(QFrame* self, QCloseEvent* event);
    friend void QFrame_ContextMenuEvent(QFrame* self, QContextMenuEvent* event);
    friend void QFrame_QBaseContextMenuEvent(QFrame* self, QContextMenuEvent* event);
    friend void QFrame_TabletEvent(QFrame* self, QTabletEvent* event);
    friend void QFrame_QBaseTabletEvent(QFrame* self, QTabletEvent* event);
    friend void QFrame_ActionEvent(QFrame* self, QActionEvent* event);
    friend void QFrame_QBaseActionEvent(QFrame* self, QActionEvent* event);
    friend void QFrame_DragEnterEvent(QFrame* self, QDragEnterEvent* event);
    friend void QFrame_QBaseDragEnterEvent(QFrame* self, QDragEnterEvent* event);
    friend void QFrame_DragMoveEvent(QFrame* self, QDragMoveEvent* event);
    friend void QFrame_QBaseDragMoveEvent(QFrame* self, QDragMoveEvent* event);
    friend void QFrame_DragLeaveEvent(QFrame* self, QDragLeaveEvent* event);
    friend void QFrame_QBaseDragLeaveEvent(QFrame* self, QDragLeaveEvent* event);
    friend void QFrame_DropEvent(QFrame* self, QDropEvent* event);
    friend void QFrame_QBaseDropEvent(QFrame* self, QDropEvent* event);
    friend void QFrame_ShowEvent(QFrame* self, QShowEvent* event);
    friend void QFrame_QBaseShowEvent(QFrame* self, QShowEvent* event);
    friend void QFrame_HideEvent(QFrame* self, QHideEvent* event);
    friend void QFrame_QBaseHideEvent(QFrame* self, QHideEvent* event);
    friend bool QFrame_NativeEvent(QFrame* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QFrame_QBaseNativeEvent(QFrame* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QFrame_Metric(const QFrame* self, int param1);
    friend int QFrame_QBaseMetric(const QFrame* self, int param1);
    friend void QFrame_InitPainter(const QFrame* self, QPainter* painter);
    friend void QFrame_QBaseInitPainter(const QFrame* self, QPainter* painter);
    friend QPaintDevice* QFrame_Redirected(const QFrame* self, QPoint* offset);
    friend QPaintDevice* QFrame_QBaseRedirected(const QFrame* self, QPoint* offset);
    friend QPainter* QFrame_SharedPainter(const QFrame* self);
    friend QPainter* QFrame_QBaseSharedPainter(const QFrame* self);
    friend void QFrame_InputMethodEvent(QFrame* self, QInputMethodEvent* param1);
    friend void QFrame_QBaseInputMethodEvent(QFrame* self, QInputMethodEvent* param1);
    friend bool QFrame_FocusNextPrevChild(QFrame* self, bool next);
    friend bool QFrame_QBaseFocusNextPrevChild(QFrame* self, bool next);
    friend void QFrame_TimerEvent(QFrame* self, QTimerEvent* event);
    friend void QFrame_QBaseTimerEvent(QFrame* self, QTimerEvent* event);
    friend void QFrame_ChildEvent(QFrame* self, QChildEvent* event);
    friend void QFrame_QBaseChildEvent(QFrame* self, QChildEvent* event);
    friend void QFrame_CustomEvent(QFrame* self, QEvent* event);
    friend void QFrame_QBaseCustomEvent(QFrame* self, QEvent* event);
    friend void QFrame_ConnectNotify(QFrame* self, const QMetaMethod* signal);
    friend void QFrame_QBaseConnectNotify(QFrame* self, const QMetaMethod* signal);
    friend void QFrame_DisconnectNotify(QFrame* self, const QMetaMethod* signal);
    friend void QFrame_QBaseDisconnectNotify(QFrame* self, const QMetaMethod* signal);
    friend void QFrame_DrawFrame(QFrame* self, QPainter* param1);
    friend void QFrame_QBaseDrawFrame(QFrame* self, QPainter* param1);
    friend void QFrame_UpdateMicroFocus(QFrame* self);
    friend void QFrame_QBaseUpdateMicroFocus(QFrame* self);
    friend void QFrame_Create(QFrame* self);
    friend void QFrame_QBaseCreate(QFrame* self);
    friend void QFrame_Destroy(QFrame* self);
    friend void QFrame_QBaseDestroy(QFrame* self);
    friend bool QFrame_FocusNextChild(QFrame* self);
    friend bool QFrame_QBaseFocusNextChild(QFrame* self);
    friend bool QFrame_FocusPreviousChild(QFrame* self);
    friend bool QFrame_QBaseFocusPreviousChild(QFrame* self);
    friend QObject* QFrame_Sender(const QFrame* self);
    friend QObject* QFrame_QBaseSender(const QFrame* self);
    friend int QFrame_SenderSignalIndex(const QFrame* self);
    friend int QFrame_QBaseSenderSignalIndex(const QFrame* self);
    friend int QFrame_Receivers(const QFrame* self, const char* signal);
    friend int QFrame_QBaseReceivers(const QFrame* self, const char* signal);
    friend bool QFrame_IsSignalConnected(const QFrame* self, const QMetaMethod* signal);
    friend bool QFrame_QBaseIsSignalConnected(const QFrame* self, const QMetaMethod* signal);
    friend double QFrame_GetDecodedMetricF(const QFrame* self, int metricA, int metricB);
    friend double QFrame_QBaseGetDecodedMetricF(const QFrame* self, int metricA, int metricB);
};

#endif
