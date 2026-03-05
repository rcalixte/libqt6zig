#pragma once
#ifndef SRCC_LIBVIRTUALQDIAL_H
#define SRCC_LIBVIRTUALQDIAL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QDial so that we can call protected methods
class VirtualQDial final : public QDial {

  public:
    // Virtual class boolean flag
    bool isVirtualQDial = true;

    // Virtual class public types (including callbacks)
    using QAbstractSlider::SliderChange;
    using QDial_MetaObject_Callback = QMetaObject* (*)();
    using QDial_Metacast_Callback = void* (*)(QDial*, const char*);
    using QDial_Metacall_Callback = int (*)(QDial*, int, int, void**);
    using QDial_SizeHint_Callback = QSize* (*)();
    using QDial_MinimumSizeHint_Callback = QSize* (*)();
    using QDial_Event_Callback = bool (*)(QDial*, QEvent*);
    using QDial_ResizeEvent_Callback = void (*)(QDial*, QResizeEvent*);
    using QDial_PaintEvent_Callback = void (*)(QDial*, QPaintEvent*);
    using QDial_MousePressEvent_Callback = void (*)(QDial*, QMouseEvent*);
    using QDial_MouseReleaseEvent_Callback = void (*)(QDial*, QMouseEvent*);
    using QDial_MouseMoveEvent_Callback = void (*)(QDial*, QMouseEvent*);
    using QDial_SliderChange_Callback = void (*)(QDial*, int);
    using QDial_InitStyleOption_Callback = void (*)(const QDial*, QStyleOptionSlider*);
    using QDial_KeyPressEvent_Callback = void (*)(QDial*, QKeyEvent*);
    using QDial_TimerEvent_Callback = void (*)(QDial*, QTimerEvent*);
    using QDial_WheelEvent_Callback = void (*)(QDial*, QWheelEvent*);
    using QDial_ChangeEvent_Callback = void (*)(QDial*, QEvent*);
    using QDial_DevType_Callback = int (*)();
    using QDial_SetVisible_Callback = void (*)(QDial*, bool);
    using QDial_HeightForWidth_Callback = int (*)(const QDial*, int);
    using QDial_HasHeightForWidth_Callback = bool (*)();
    using QDial_PaintEngine_Callback = QPaintEngine* (*)();
    using QDial_MouseDoubleClickEvent_Callback = void (*)(QDial*, QMouseEvent*);
    using QDial_KeyReleaseEvent_Callback = void (*)(QDial*, QKeyEvent*);
    using QDial_FocusInEvent_Callback = void (*)(QDial*, QFocusEvent*);
    using QDial_FocusOutEvent_Callback = void (*)(QDial*, QFocusEvent*);
    using QDial_EnterEvent_Callback = void (*)(QDial*, QEnterEvent*);
    using QDial_LeaveEvent_Callback = void (*)(QDial*, QEvent*);
    using QDial_MoveEvent_Callback = void (*)(QDial*, QMoveEvent*);
    using QDial_CloseEvent_Callback = void (*)(QDial*, QCloseEvent*);
    using QDial_ContextMenuEvent_Callback = void (*)(QDial*, QContextMenuEvent*);
    using QDial_TabletEvent_Callback = void (*)(QDial*, QTabletEvent*);
    using QDial_ActionEvent_Callback = void (*)(QDial*, QActionEvent*);
    using QDial_DragEnterEvent_Callback = void (*)(QDial*, QDragEnterEvent*);
    using QDial_DragMoveEvent_Callback = void (*)(QDial*, QDragMoveEvent*);
    using QDial_DragLeaveEvent_Callback = void (*)(QDial*, QDragLeaveEvent*);
    using QDial_DropEvent_Callback = void (*)(QDial*, QDropEvent*);
    using QDial_ShowEvent_Callback = void (*)(QDial*, QShowEvent*);
    using QDial_HideEvent_Callback = void (*)(QDial*, QHideEvent*);
    using QDial_NativeEvent_Callback = bool (*)(QDial*, libqt_string, void*, intptr_t*);
    using QDial_Metric_Callback = int (*)(const QDial*, int);
    using QDial_InitPainter_Callback = void (*)(const QDial*, QPainter*);
    using QDial_Redirected_Callback = QPaintDevice* (*)(const QDial*, QPoint*);
    using QDial_SharedPainter_Callback = QPainter* (*)();
    using QDial_InputMethodEvent_Callback = void (*)(QDial*, QInputMethodEvent*);
    using QDial_InputMethodQuery_Callback = QVariant* (*)(const QDial*, int);
    using QDial_FocusNextPrevChild_Callback = bool (*)(QDial*, bool);
    using QDial_EventFilter_Callback = bool (*)(QDial*, QObject*, QEvent*);
    using QDial_ChildEvent_Callback = void (*)(QDial*, QChildEvent*);
    using QDial_CustomEvent_Callback = void (*)(QDial*, QEvent*);
    using QDial_ConnectNotify_Callback = void (*)(QDial*, QMetaMethod*);
    using QDial_DisconnectNotify_Callback = void (*)(QDial*, QMetaMethod*);
    using QDial_SetRepeatAction_Callback = void (*)(QDial*, int);
    using QDial_RepeatAction_Callback = int (*)();
    using QDial_UpdateMicroFocus_Callback = void (*)();
    using QDial_Create_Callback = void (*)();
    using QDial_Destroy_Callback = void (*)();
    using QDial_FocusNextChild_Callback = bool (*)();
    using QDial_FocusPreviousChild_Callback = bool (*)();
    using QDial_Sender_Callback = QObject* (*)();
    using QDial_SenderSignalIndex_Callback = int (*)();
    using QDial_Receivers_Callback = int (*)(const QDial*, const char*);
    using QDial_IsSignalConnected_Callback = bool (*)(const QDial*, QMetaMethod*);
    using QDial_GetDecodedMetricF_Callback = double (*)(const QDial*, int, int);

  protected:
    // Instance callback storage
    QDial_MetaObject_Callback qdial_metaobject_callback = nullptr;
    QDial_Metacast_Callback qdial_metacast_callback = nullptr;
    QDial_Metacall_Callback qdial_metacall_callback = nullptr;
    QDial_SizeHint_Callback qdial_sizehint_callback = nullptr;
    QDial_MinimumSizeHint_Callback qdial_minimumsizehint_callback = nullptr;
    QDial_Event_Callback qdial_event_callback = nullptr;
    QDial_ResizeEvent_Callback qdial_resizeevent_callback = nullptr;
    QDial_PaintEvent_Callback qdial_paintevent_callback = nullptr;
    QDial_MousePressEvent_Callback qdial_mousepressevent_callback = nullptr;
    QDial_MouseReleaseEvent_Callback qdial_mousereleaseevent_callback = nullptr;
    QDial_MouseMoveEvent_Callback qdial_mousemoveevent_callback = nullptr;
    QDial_SliderChange_Callback qdial_sliderchange_callback = nullptr;
    QDial_InitStyleOption_Callback qdial_initstyleoption_callback = nullptr;
    QDial_KeyPressEvent_Callback qdial_keypressevent_callback = nullptr;
    QDial_TimerEvent_Callback qdial_timerevent_callback = nullptr;
    QDial_WheelEvent_Callback qdial_wheelevent_callback = nullptr;
    QDial_ChangeEvent_Callback qdial_changeevent_callback = nullptr;
    QDial_DevType_Callback qdial_devtype_callback = nullptr;
    QDial_SetVisible_Callback qdial_setvisible_callback = nullptr;
    QDial_HeightForWidth_Callback qdial_heightforwidth_callback = nullptr;
    QDial_HasHeightForWidth_Callback qdial_hasheightforwidth_callback = nullptr;
    QDial_PaintEngine_Callback qdial_paintengine_callback = nullptr;
    QDial_MouseDoubleClickEvent_Callback qdial_mousedoubleclickevent_callback = nullptr;
    QDial_KeyReleaseEvent_Callback qdial_keyreleaseevent_callback = nullptr;
    QDial_FocusInEvent_Callback qdial_focusinevent_callback = nullptr;
    QDial_FocusOutEvent_Callback qdial_focusoutevent_callback = nullptr;
    QDial_EnterEvent_Callback qdial_enterevent_callback = nullptr;
    QDial_LeaveEvent_Callback qdial_leaveevent_callback = nullptr;
    QDial_MoveEvent_Callback qdial_moveevent_callback = nullptr;
    QDial_CloseEvent_Callback qdial_closeevent_callback = nullptr;
    QDial_ContextMenuEvent_Callback qdial_contextmenuevent_callback = nullptr;
    QDial_TabletEvent_Callback qdial_tabletevent_callback = nullptr;
    QDial_ActionEvent_Callback qdial_actionevent_callback = nullptr;
    QDial_DragEnterEvent_Callback qdial_dragenterevent_callback = nullptr;
    QDial_DragMoveEvent_Callback qdial_dragmoveevent_callback = nullptr;
    QDial_DragLeaveEvent_Callback qdial_dragleaveevent_callback = nullptr;
    QDial_DropEvent_Callback qdial_dropevent_callback = nullptr;
    QDial_ShowEvent_Callback qdial_showevent_callback = nullptr;
    QDial_HideEvent_Callback qdial_hideevent_callback = nullptr;
    QDial_NativeEvent_Callback qdial_nativeevent_callback = nullptr;
    QDial_Metric_Callback qdial_metric_callback = nullptr;
    QDial_InitPainter_Callback qdial_initpainter_callback = nullptr;
    QDial_Redirected_Callback qdial_redirected_callback = nullptr;
    QDial_SharedPainter_Callback qdial_sharedpainter_callback = nullptr;
    QDial_InputMethodEvent_Callback qdial_inputmethodevent_callback = nullptr;
    QDial_InputMethodQuery_Callback qdial_inputmethodquery_callback = nullptr;
    QDial_FocusNextPrevChild_Callback qdial_focusnextprevchild_callback = nullptr;
    QDial_EventFilter_Callback qdial_eventfilter_callback = nullptr;
    QDial_ChildEvent_Callback qdial_childevent_callback = nullptr;
    QDial_CustomEvent_Callback qdial_customevent_callback = nullptr;
    QDial_ConnectNotify_Callback qdial_connectnotify_callback = nullptr;
    QDial_DisconnectNotify_Callback qdial_disconnectnotify_callback = nullptr;
    QDial_SetRepeatAction_Callback qdial_setrepeataction_callback = nullptr;
    QDial_RepeatAction_Callback qdial_repeataction_callback = nullptr;
    QDial_UpdateMicroFocus_Callback qdial_updatemicrofocus_callback = nullptr;
    QDial_Create_Callback qdial_create_callback = nullptr;
    QDial_Destroy_Callback qdial_destroy_callback = nullptr;
    QDial_FocusNextChild_Callback qdial_focusnextchild_callback = nullptr;
    QDial_FocusPreviousChild_Callback qdial_focuspreviouschild_callback = nullptr;
    QDial_Sender_Callback qdial_sender_callback = nullptr;
    QDial_SenderSignalIndex_Callback qdial_sendersignalindex_callback = nullptr;
    QDial_Receivers_Callback qdial_receivers_callback = nullptr;
    QDial_IsSignalConnected_Callback qdial_issignalconnected_callback = nullptr;
    QDial_GetDecodedMetricF_Callback qdial_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qdial_metaobject_isbase = false;
    mutable bool qdial_metacast_isbase = false;
    mutable bool qdial_metacall_isbase = false;
    mutable bool qdial_sizehint_isbase = false;
    mutable bool qdial_minimumsizehint_isbase = false;
    mutable bool qdial_event_isbase = false;
    mutable bool qdial_resizeevent_isbase = false;
    mutable bool qdial_paintevent_isbase = false;
    mutable bool qdial_mousepressevent_isbase = false;
    mutable bool qdial_mousereleaseevent_isbase = false;
    mutable bool qdial_mousemoveevent_isbase = false;
    mutable bool qdial_sliderchange_isbase = false;
    mutable bool qdial_initstyleoption_isbase = false;
    mutable bool qdial_keypressevent_isbase = false;
    mutable bool qdial_timerevent_isbase = false;
    mutable bool qdial_wheelevent_isbase = false;
    mutable bool qdial_changeevent_isbase = false;
    mutable bool qdial_devtype_isbase = false;
    mutable bool qdial_setvisible_isbase = false;
    mutable bool qdial_heightforwidth_isbase = false;
    mutable bool qdial_hasheightforwidth_isbase = false;
    mutable bool qdial_paintengine_isbase = false;
    mutable bool qdial_mousedoubleclickevent_isbase = false;
    mutable bool qdial_keyreleaseevent_isbase = false;
    mutable bool qdial_focusinevent_isbase = false;
    mutable bool qdial_focusoutevent_isbase = false;
    mutable bool qdial_enterevent_isbase = false;
    mutable bool qdial_leaveevent_isbase = false;
    mutable bool qdial_moveevent_isbase = false;
    mutable bool qdial_closeevent_isbase = false;
    mutable bool qdial_contextmenuevent_isbase = false;
    mutable bool qdial_tabletevent_isbase = false;
    mutable bool qdial_actionevent_isbase = false;
    mutable bool qdial_dragenterevent_isbase = false;
    mutable bool qdial_dragmoveevent_isbase = false;
    mutable bool qdial_dragleaveevent_isbase = false;
    mutable bool qdial_dropevent_isbase = false;
    mutable bool qdial_showevent_isbase = false;
    mutable bool qdial_hideevent_isbase = false;
    mutable bool qdial_nativeevent_isbase = false;
    mutable bool qdial_metric_isbase = false;
    mutable bool qdial_initpainter_isbase = false;
    mutable bool qdial_redirected_isbase = false;
    mutable bool qdial_sharedpainter_isbase = false;
    mutable bool qdial_inputmethodevent_isbase = false;
    mutable bool qdial_inputmethodquery_isbase = false;
    mutable bool qdial_focusnextprevchild_isbase = false;
    mutable bool qdial_eventfilter_isbase = false;
    mutable bool qdial_childevent_isbase = false;
    mutable bool qdial_customevent_isbase = false;
    mutable bool qdial_connectnotify_isbase = false;
    mutable bool qdial_disconnectnotify_isbase = false;
    mutable bool qdial_setrepeataction_isbase = false;
    mutable bool qdial_repeataction_isbase = false;
    mutable bool qdial_updatemicrofocus_isbase = false;
    mutable bool qdial_create_isbase = false;
    mutable bool qdial_destroy_isbase = false;
    mutable bool qdial_focusnextchild_isbase = false;
    mutable bool qdial_focuspreviouschild_isbase = false;
    mutable bool qdial_sender_isbase = false;
    mutable bool qdial_sendersignalindex_isbase = false;
    mutable bool qdial_receivers_isbase = false;
    mutable bool qdial_issignalconnected_isbase = false;
    mutable bool qdial_getdecodedmetricf_isbase = false;

  public:
    VirtualQDial(QWidget* parent) : QDial(parent) {};
    VirtualQDial() : QDial() {};

    // Callback setters
    inline void setQDial_MetaObject_Callback(QDial_MetaObject_Callback cb) { qdial_metaobject_callback = cb; }
    inline void setQDial_Metacast_Callback(QDial_Metacast_Callback cb) { qdial_metacast_callback = cb; }
    inline void setQDial_Metacall_Callback(QDial_Metacall_Callback cb) { qdial_metacall_callback = cb; }
    inline void setQDial_SizeHint_Callback(QDial_SizeHint_Callback cb) { qdial_sizehint_callback = cb; }
    inline void setQDial_MinimumSizeHint_Callback(QDial_MinimumSizeHint_Callback cb) { qdial_minimumsizehint_callback = cb; }
    inline void setQDial_Event_Callback(QDial_Event_Callback cb) { qdial_event_callback = cb; }
    inline void setQDial_ResizeEvent_Callback(QDial_ResizeEvent_Callback cb) { qdial_resizeevent_callback = cb; }
    inline void setQDial_PaintEvent_Callback(QDial_PaintEvent_Callback cb) { qdial_paintevent_callback = cb; }
    inline void setQDial_MousePressEvent_Callback(QDial_MousePressEvent_Callback cb) { qdial_mousepressevent_callback = cb; }
    inline void setQDial_MouseReleaseEvent_Callback(QDial_MouseReleaseEvent_Callback cb) { qdial_mousereleaseevent_callback = cb; }
    inline void setQDial_MouseMoveEvent_Callback(QDial_MouseMoveEvent_Callback cb) { qdial_mousemoveevent_callback = cb; }
    inline void setQDial_SliderChange_Callback(QDial_SliderChange_Callback cb) { qdial_sliderchange_callback = cb; }
    inline void setQDial_InitStyleOption_Callback(QDial_InitStyleOption_Callback cb) { qdial_initstyleoption_callback = cb; }
    inline void setQDial_KeyPressEvent_Callback(QDial_KeyPressEvent_Callback cb) { qdial_keypressevent_callback = cb; }
    inline void setQDial_TimerEvent_Callback(QDial_TimerEvent_Callback cb) { qdial_timerevent_callback = cb; }
    inline void setQDial_WheelEvent_Callback(QDial_WheelEvent_Callback cb) { qdial_wheelevent_callback = cb; }
    inline void setQDial_ChangeEvent_Callback(QDial_ChangeEvent_Callback cb) { qdial_changeevent_callback = cb; }
    inline void setQDial_DevType_Callback(QDial_DevType_Callback cb) { qdial_devtype_callback = cb; }
    inline void setQDial_SetVisible_Callback(QDial_SetVisible_Callback cb) { qdial_setvisible_callback = cb; }
    inline void setQDial_HeightForWidth_Callback(QDial_HeightForWidth_Callback cb) { qdial_heightforwidth_callback = cb; }
    inline void setQDial_HasHeightForWidth_Callback(QDial_HasHeightForWidth_Callback cb) { qdial_hasheightforwidth_callback = cb; }
    inline void setQDial_PaintEngine_Callback(QDial_PaintEngine_Callback cb) { qdial_paintengine_callback = cb; }
    inline void setQDial_MouseDoubleClickEvent_Callback(QDial_MouseDoubleClickEvent_Callback cb) { qdial_mousedoubleclickevent_callback = cb; }
    inline void setQDial_KeyReleaseEvent_Callback(QDial_KeyReleaseEvent_Callback cb) { qdial_keyreleaseevent_callback = cb; }
    inline void setQDial_FocusInEvent_Callback(QDial_FocusInEvent_Callback cb) { qdial_focusinevent_callback = cb; }
    inline void setQDial_FocusOutEvent_Callback(QDial_FocusOutEvent_Callback cb) { qdial_focusoutevent_callback = cb; }
    inline void setQDial_EnterEvent_Callback(QDial_EnterEvent_Callback cb) { qdial_enterevent_callback = cb; }
    inline void setQDial_LeaveEvent_Callback(QDial_LeaveEvent_Callback cb) { qdial_leaveevent_callback = cb; }
    inline void setQDial_MoveEvent_Callback(QDial_MoveEvent_Callback cb) { qdial_moveevent_callback = cb; }
    inline void setQDial_CloseEvent_Callback(QDial_CloseEvent_Callback cb) { qdial_closeevent_callback = cb; }
    inline void setQDial_ContextMenuEvent_Callback(QDial_ContextMenuEvent_Callback cb) { qdial_contextmenuevent_callback = cb; }
    inline void setQDial_TabletEvent_Callback(QDial_TabletEvent_Callback cb) { qdial_tabletevent_callback = cb; }
    inline void setQDial_ActionEvent_Callback(QDial_ActionEvent_Callback cb) { qdial_actionevent_callback = cb; }
    inline void setQDial_DragEnterEvent_Callback(QDial_DragEnterEvent_Callback cb) { qdial_dragenterevent_callback = cb; }
    inline void setQDial_DragMoveEvent_Callback(QDial_DragMoveEvent_Callback cb) { qdial_dragmoveevent_callback = cb; }
    inline void setQDial_DragLeaveEvent_Callback(QDial_DragLeaveEvent_Callback cb) { qdial_dragleaveevent_callback = cb; }
    inline void setQDial_DropEvent_Callback(QDial_DropEvent_Callback cb) { qdial_dropevent_callback = cb; }
    inline void setQDial_ShowEvent_Callback(QDial_ShowEvent_Callback cb) { qdial_showevent_callback = cb; }
    inline void setQDial_HideEvent_Callback(QDial_HideEvent_Callback cb) { qdial_hideevent_callback = cb; }
    inline void setQDial_NativeEvent_Callback(QDial_NativeEvent_Callback cb) { qdial_nativeevent_callback = cb; }
    inline void setQDial_Metric_Callback(QDial_Metric_Callback cb) { qdial_metric_callback = cb; }
    inline void setQDial_InitPainter_Callback(QDial_InitPainter_Callback cb) { qdial_initpainter_callback = cb; }
    inline void setQDial_Redirected_Callback(QDial_Redirected_Callback cb) { qdial_redirected_callback = cb; }
    inline void setQDial_SharedPainter_Callback(QDial_SharedPainter_Callback cb) { qdial_sharedpainter_callback = cb; }
    inline void setQDial_InputMethodEvent_Callback(QDial_InputMethodEvent_Callback cb) { qdial_inputmethodevent_callback = cb; }
    inline void setQDial_InputMethodQuery_Callback(QDial_InputMethodQuery_Callback cb) { qdial_inputmethodquery_callback = cb; }
    inline void setQDial_FocusNextPrevChild_Callback(QDial_FocusNextPrevChild_Callback cb) { qdial_focusnextprevchild_callback = cb; }
    inline void setQDial_EventFilter_Callback(QDial_EventFilter_Callback cb) { qdial_eventfilter_callback = cb; }
    inline void setQDial_ChildEvent_Callback(QDial_ChildEvent_Callback cb) { qdial_childevent_callback = cb; }
    inline void setQDial_CustomEvent_Callback(QDial_CustomEvent_Callback cb) { qdial_customevent_callback = cb; }
    inline void setQDial_ConnectNotify_Callback(QDial_ConnectNotify_Callback cb) { qdial_connectnotify_callback = cb; }
    inline void setQDial_DisconnectNotify_Callback(QDial_DisconnectNotify_Callback cb) { qdial_disconnectnotify_callback = cb; }
    inline void setQDial_SetRepeatAction_Callback(QDial_SetRepeatAction_Callback cb) { qdial_setrepeataction_callback = cb; }
    inline void setQDial_RepeatAction_Callback(QDial_RepeatAction_Callback cb) { qdial_repeataction_callback = cb; }
    inline void setQDial_UpdateMicroFocus_Callback(QDial_UpdateMicroFocus_Callback cb) { qdial_updatemicrofocus_callback = cb; }
    inline void setQDial_Create_Callback(QDial_Create_Callback cb) { qdial_create_callback = cb; }
    inline void setQDial_Destroy_Callback(QDial_Destroy_Callback cb) { qdial_destroy_callback = cb; }
    inline void setQDial_FocusNextChild_Callback(QDial_FocusNextChild_Callback cb) { qdial_focusnextchild_callback = cb; }
    inline void setQDial_FocusPreviousChild_Callback(QDial_FocusPreviousChild_Callback cb) { qdial_focuspreviouschild_callback = cb; }
    inline void setQDial_Sender_Callback(QDial_Sender_Callback cb) { qdial_sender_callback = cb; }
    inline void setQDial_SenderSignalIndex_Callback(QDial_SenderSignalIndex_Callback cb) { qdial_sendersignalindex_callback = cb; }
    inline void setQDial_Receivers_Callback(QDial_Receivers_Callback cb) { qdial_receivers_callback = cb; }
    inline void setQDial_IsSignalConnected_Callback(QDial_IsSignalConnected_Callback cb) { qdial_issignalconnected_callback = cb; }
    inline void setQDial_GetDecodedMetricF_Callback(QDial_GetDecodedMetricF_Callback cb) { qdial_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQDial_MetaObject_IsBase(bool value) const { qdial_metaobject_isbase = value; }
    inline void setQDial_Metacast_IsBase(bool value) const { qdial_metacast_isbase = value; }
    inline void setQDial_Metacall_IsBase(bool value) const { qdial_metacall_isbase = value; }
    inline void setQDial_SizeHint_IsBase(bool value) const { qdial_sizehint_isbase = value; }
    inline void setQDial_MinimumSizeHint_IsBase(bool value) const { qdial_minimumsizehint_isbase = value; }
    inline void setQDial_Event_IsBase(bool value) const { qdial_event_isbase = value; }
    inline void setQDial_ResizeEvent_IsBase(bool value) const { qdial_resizeevent_isbase = value; }
    inline void setQDial_PaintEvent_IsBase(bool value) const { qdial_paintevent_isbase = value; }
    inline void setQDial_MousePressEvent_IsBase(bool value) const { qdial_mousepressevent_isbase = value; }
    inline void setQDial_MouseReleaseEvent_IsBase(bool value) const { qdial_mousereleaseevent_isbase = value; }
    inline void setQDial_MouseMoveEvent_IsBase(bool value) const { qdial_mousemoveevent_isbase = value; }
    inline void setQDial_SliderChange_IsBase(bool value) const { qdial_sliderchange_isbase = value; }
    inline void setQDial_InitStyleOption_IsBase(bool value) const { qdial_initstyleoption_isbase = value; }
    inline void setQDial_KeyPressEvent_IsBase(bool value) const { qdial_keypressevent_isbase = value; }
    inline void setQDial_TimerEvent_IsBase(bool value) const { qdial_timerevent_isbase = value; }
    inline void setQDial_WheelEvent_IsBase(bool value) const { qdial_wheelevent_isbase = value; }
    inline void setQDial_ChangeEvent_IsBase(bool value) const { qdial_changeevent_isbase = value; }
    inline void setQDial_DevType_IsBase(bool value) const { qdial_devtype_isbase = value; }
    inline void setQDial_SetVisible_IsBase(bool value) const { qdial_setvisible_isbase = value; }
    inline void setQDial_HeightForWidth_IsBase(bool value) const { qdial_heightforwidth_isbase = value; }
    inline void setQDial_HasHeightForWidth_IsBase(bool value) const { qdial_hasheightforwidth_isbase = value; }
    inline void setQDial_PaintEngine_IsBase(bool value) const { qdial_paintengine_isbase = value; }
    inline void setQDial_MouseDoubleClickEvent_IsBase(bool value) const { qdial_mousedoubleclickevent_isbase = value; }
    inline void setQDial_KeyReleaseEvent_IsBase(bool value) const { qdial_keyreleaseevent_isbase = value; }
    inline void setQDial_FocusInEvent_IsBase(bool value) const { qdial_focusinevent_isbase = value; }
    inline void setQDial_FocusOutEvent_IsBase(bool value) const { qdial_focusoutevent_isbase = value; }
    inline void setQDial_EnterEvent_IsBase(bool value) const { qdial_enterevent_isbase = value; }
    inline void setQDial_LeaveEvent_IsBase(bool value) const { qdial_leaveevent_isbase = value; }
    inline void setQDial_MoveEvent_IsBase(bool value) const { qdial_moveevent_isbase = value; }
    inline void setQDial_CloseEvent_IsBase(bool value) const { qdial_closeevent_isbase = value; }
    inline void setQDial_ContextMenuEvent_IsBase(bool value) const { qdial_contextmenuevent_isbase = value; }
    inline void setQDial_TabletEvent_IsBase(bool value) const { qdial_tabletevent_isbase = value; }
    inline void setQDial_ActionEvent_IsBase(bool value) const { qdial_actionevent_isbase = value; }
    inline void setQDial_DragEnterEvent_IsBase(bool value) const { qdial_dragenterevent_isbase = value; }
    inline void setQDial_DragMoveEvent_IsBase(bool value) const { qdial_dragmoveevent_isbase = value; }
    inline void setQDial_DragLeaveEvent_IsBase(bool value) const { qdial_dragleaveevent_isbase = value; }
    inline void setQDial_DropEvent_IsBase(bool value) const { qdial_dropevent_isbase = value; }
    inline void setQDial_ShowEvent_IsBase(bool value) const { qdial_showevent_isbase = value; }
    inline void setQDial_HideEvent_IsBase(bool value) const { qdial_hideevent_isbase = value; }
    inline void setQDial_NativeEvent_IsBase(bool value) const { qdial_nativeevent_isbase = value; }
    inline void setQDial_Metric_IsBase(bool value) const { qdial_metric_isbase = value; }
    inline void setQDial_InitPainter_IsBase(bool value) const { qdial_initpainter_isbase = value; }
    inline void setQDial_Redirected_IsBase(bool value) const { qdial_redirected_isbase = value; }
    inline void setQDial_SharedPainter_IsBase(bool value) const { qdial_sharedpainter_isbase = value; }
    inline void setQDial_InputMethodEvent_IsBase(bool value) const { qdial_inputmethodevent_isbase = value; }
    inline void setQDial_InputMethodQuery_IsBase(bool value) const { qdial_inputmethodquery_isbase = value; }
    inline void setQDial_FocusNextPrevChild_IsBase(bool value) const { qdial_focusnextprevchild_isbase = value; }
    inline void setQDial_EventFilter_IsBase(bool value) const { qdial_eventfilter_isbase = value; }
    inline void setQDial_ChildEvent_IsBase(bool value) const { qdial_childevent_isbase = value; }
    inline void setQDial_CustomEvent_IsBase(bool value) const { qdial_customevent_isbase = value; }
    inline void setQDial_ConnectNotify_IsBase(bool value) const { qdial_connectnotify_isbase = value; }
    inline void setQDial_DisconnectNotify_IsBase(bool value) const { qdial_disconnectnotify_isbase = value; }
    inline void setQDial_SetRepeatAction_IsBase(bool value) const { qdial_setrepeataction_isbase = value; }
    inline void setQDial_RepeatAction_IsBase(bool value) const { qdial_repeataction_isbase = value; }
    inline void setQDial_UpdateMicroFocus_IsBase(bool value) const { qdial_updatemicrofocus_isbase = value; }
    inline void setQDial_Create_IsBase(bool value) const { qdial_create_isbase = value; }
    inline void setQDial_Destroy_IsBase(bool value) const { qdial_destroy_isbase = value; }
    inline void setQDial_FocusNextChild_IsBase(bool value) const { qdial_focusnextchild_isbase = value; }
    inline void setQDial_FocusPreviousChild_IsBase(bool value) const { qdial_focuspreviouschild_isbase = value; }
    inline void setQDial_Sender_IsBase(bool value) const { qdial_sender_isbase = value; }
    inline void setQDial_SenderSignalIndex_IsBase(bool value) const { qdial_sendersignalindex_isbase = value; }
    inline void setQDial_Receivers_IsBase(bool value) const { qdial_receivers_isbase = value; }
    inline void setQDial_IsSignalConnected_IsBase(bool value) const { qdial_issignalconnected_isbase = value; }
    inline void setQDial_GetDecodedMetricF_IsBase(bool value) const { qdial_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdial_metaobject_isbase) {
            qdial_metaobject_isbase = false;
            return QDial::metaObject();
        }
        auto metaobject_cb = qdial_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QDial::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdial_metacast_isbase) {
            qdial_metacast_isbase = false;
            return QDial::qt_metacast(param1);
        }
        auto metacast_cb = qdial_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QDial::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdial_metacall_isbase) {
            qdial_metacall_isbase = false;
            return QDial::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qdial_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDial::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdial_sizehint_isbase) {
            qdial_sizehint_isbase = false;
            return QDial::sizeHint();
        }
        auto sizehint_cb = qdial_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QDial::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdial_minimumsizehint_isbase) {
            qdial_minimumsizehint_isbase = false;
            return QDial::minimumSizeHint();
        }
        auto minimumsizehint_cb = qdial_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QDial::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qdial_event_isbase) {
            qdial_event_isbase = false;
            return QDial::event(e);
        }
        auto event_cb = qdial_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QDial::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* re) override {
        if (qdial_resizeevent_isbase) {
            qdial_resizeevent_isbase = false;
            QDial::resizeEvent(re);
            return;
        }
        auto resizeevent_cb = qdial_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = re;

            resizeevent_cb(this, cbval1);
            return;
        }
        QDial::resizeEvent(re);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* pe) override {
        if (qdial_paintevent_isbase) {
            qdial_paintevent_isbase = false;
            QDial::paintEvent(pe);
            return;
        }
        auto paintevent_cb = qdial_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = pe;

            paintevent_cb(this, cbval1);
            return;
        }
        QDial::paintEvent(pe);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* me) override {
        if (qdial_mousepressevent_isbase) {
            qdial_mousepressevent_isbase = false;
            QDial::mousePressEvent(me);
            return;
        }
        auto mousepressevent_cb = qdial_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = me;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QDial::mousePressEvent(me);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* me) override {
        if (qdial_mousereleaseevent_isbase) {
            qdial_mousereleaseevent_isbase = false;
            QDial::mouseReleaseEvent(me);
            return;
        }
        auto mousereleaseevent_cb = qdial_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = me;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QDial::mouseReleaseEvent(me);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* me) override {
        if (qdial_mousemoveevent_isbase) {
            qdial_mousemoveevent_isbase = false;
            QDial::mouseMoveEvent(me);
            return;
        }
        auto mousemoveevent_cb = qdial_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = me;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QDial::mouseMoveEvent(me);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sliderChange(QAbstractSlider::SliderChange change) override {
        if (qdial_sliderchange_isbase) {
            qdial_sliderchange_isbase = false;
            QDial::sliderChange(change);
            return;
        }
        auto sliderchange_cb = qdial_sliderchange_callback;
        if (sliderchange_cb) {
            int cbval1 = static_cast<int>(change);

            sliderchange_cb(this, cbval1);
            return;
        }
        QDial::sliderChange(change);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSlider* option) const override {
        if (qdial_initstyleoption_isbase) {
            qdial_initstyleoption_isbase = false;
            QDial::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qdial_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionSlider* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QDial::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (qdial_keypressevent_isbase) {
            qdial_keypressevent_isbase = false;
            QDial::keyPressEvent(ev);
            return;
        }
        auto keypressevent_cb = qdial_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = ev;

            keypressevent_cb(this, cbval1);
            return;
        }
        QDial::keyPressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qdial_timerevent_isbase) {
            qdial_timerevent_isbase = false;
            QDial::timerEvent(param1);
            return;
        }
        auto timerevent_cb = qdial_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = param1;

            timerevent_cb(this, cbval1);
            return;
        }
        QDial::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qdial_wheelevent_isbase) {
            qdial_wheelevent_isbase = false;
            QDial::wheelEvent(e);
            return;
        }
        auto wheelevent_cb = qdial_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = e;

            wheelevent_cb(this, cbval1);
            return;
        }
        QDial::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qdial_changeevent_isbase) {
            qdial_changeevent_isbase = false;
            QDial::changeEvent(e);
            return;
        }
        auto changeevent_cb = qdial_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = e;

            changeevent_cb(this, cbval1);
            return;
        }
        QDial::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdial_devtype_isbase) {
            qdial_devtype_isbase = false;
            return QDial::devType();
        }
        auto devtype_cb = qdial_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QDial::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdial_setvisible_isbase) {
            qdial_setvisible_isbase = false;
            QDial::setVisible(visible);
            return;
        }
        auto setvisible_cb = qdial_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QDial::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdial_heightforwidth_isbase) {
            qdial_heightforwidth_isbase = false;
            return QDial::heightForWidth(param1);
        }
        auto heightforwidth_cb = qdial_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDial::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdial_hasheightforwidth_isbase) {
            qdial_hasheightforwidth_isbase = false;
            return QDial::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qdial_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QDial::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdial_paintengine_isbase) {
            qdial_paintengine_isbase = false;
            return QDial::paintEngine();
        }
        auto paintengine_cb = qdial_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QDial::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdial_mousedoubleclickevent_isbase) {
            qdial_mousedoubleclickevent_isbase = false;
            QDial::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qdial_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QDial::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdial_keyreleaseevent_isbase) {
            qdial_keyreleaseevent_isbase = false;
            QDial::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qdial_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QDial::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdial_focusinevent_isbase) {
            qdial_focusinevent_isbase = false;
            QDial::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qdial_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QDial::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdial_focusoutevent_isbase) {
            qdial_focusoutevent_isbase = false;
            QDial::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qdial_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QDial::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdial_enterevent_isbase) {
            qdial_enterevent_isbase = false;
            QDial::enterEvent(event);
            return;
        }
        auto enterevent_cb = qdial_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QDial::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdial_leaveevent_isbase) {
            qdial_leaveevent_isbase = false;
            QDial::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qdial_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QDial::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdial_moveevent_isbase) {
            qdial_moveevent_isbase = false;
            QDial::moveEvent(event);
            return;
        }
        auto moveevent_cb = qdial_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QDial::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdial_closeevent_isbase) {
            qdial_closeevent_isbase = false;
            QDial::closeEvent(event);
            return;
        }
        auto closeevent_cb = qdial_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QDial::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdial_contextmenuevent_isbase) {
            qdial_contextmenuevent_isbase = false;
            QDial::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qdial_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QDial::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdial_tabletevent_isbase) {
            qdial_tabletevent_isbase = false;
            QDial::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qdial_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QDial::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdial_actionevent_isbase) {
            qdial_actionevent_isbase = false;
            QDial::actionEvent(event);
            return;
        }
        auto actionevent_cb = qdial_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QDial::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdial_dragenterevent_isbase) {
            qdial_dragenterevent_isbase = false;
            QDial::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qdial_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QDial::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdial_dragmoveevent_isbase) {
            qdial_dragmoveevent_isbase = false;
            QDial::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qdial_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QDial::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdial_dragleaveevent_isbase) {
            qdial_dragleaveevent_isbase = false;
            QDial::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qdial_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QDial::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdial_dropevent_isbase) {
            qdial_dropevent_isbase = false;
            QDial::dropEvent(event);
            return;
        }
        auto dropevent_cb = qdial_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QDial::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdial_showevent_isbase) {
            qdial_showevent_isbase = false;
            QDial::showEvent(event);
            return;
        }
        auto showevent_cb = qdial_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QDial::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdial_hideevent_isbase) {
            qdial_hideevent_isbase = false;
            QDial::hideEvent(event);
            return;
        }
        auto hideevent_cb = qdial_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QDial::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdial_nativeevent_isbase) {
            qdial_nativeevent_isbase = false;
            return QDial::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qdial_nativeevent_callback;
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
        return QDial::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdial_metric_isbase) {
            qdial_metric_isbase = false;
            return QDial::metric(param1);
        }
        auto metric_cb = qdial_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDial::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdial_initpainter_isbase) {
            qdial_initpainter_isbase = false;
            QDial::initPainter(painter);
            return;
        }
        auto initpainter_cb = qdial_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QDial::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdial_redirected_isbase) {
            qdial_redirected_isbase = false;
            return QDial::redirected(offset);
        }
        auto redirected_cb = qdial_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QDial::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdial_sharedpainter_isbase) {
            qdial_sharedpainter_isbase = false;
            return QDial::sharedPainter();
        }
        auto sharedpainter_cb = qdial_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QDial::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdial_inputmethodevent_isbase) {
            qdial_inputmethodevent_isbase = false;
            QDial::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qdial_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QDial::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdial_inputmethodquery_isbase) {
            qdial_inputmethodquery_isbase = false;
            return QDial::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qdial_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QDial::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdial_focusnextprevchild_isbase) {
            qdial_focusnextprevchild_isbase = false;
            return QDial::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qdial_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QDial::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdial_eventfilter_isbase) {
            qdial_eventfilter_isbase = false;
            return QDial::eventFilter(watched, event);
        }
        auto eventfilter_cb = qdial_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDial::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdial_childevent_isbase) {
            qdial_childevent_isbase = false;
            QDial::childEvent(event);
            return;
        }
        auto childevent_cb = qdial_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QDial::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdial_customevent_isbase) {
            qdial_customevent_isbase = false;
            QDial::customEvent(event);
            return;
        }
        auto customevent_cb = qdial_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QDial::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdial_connectnotify_isbase) {
            qdial_connectnotify_isbase = false;
            QDial::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qdial_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QDial::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdial_disconnectnotify_isbase) {
            qdial_disconnectnotify_isbase = false;
            QDial::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qdial_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QDial::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setRepeatAction(QAbstractSlider::SliderAction action) {
        if (qdial_setrepeataction_isbase) {
            qdial_setrepeataction_isbase = false;
            QDial::setRepeatAction(action);
            return;
        }
        auto setrepeataction_cb = qdial_setrepeataction_callback;
        if (setrepeataction_cb) {
            int cbval1 = static_cast<int>(action);

            setrepeataction_cb(this, cbval1);
            return;
        }
        QDial::setRepeatAction(action);
    }

    // Virtual method for C ABI access and custom callback
    QAbstractSlider::SliderAction repeatAction() const {
        if (qdial_repeataction_isbase) {
            qdial_repeataction_isbase = false;
            return QDial::repeatAction();
        }
        auto repeataction_cb = qdial_repeataction_callback;
        if (repeataction_cb) {
            int callback_ret = repeataction_cb();
            return static_cast<QAbstractSlider::SliderAction>(callback_ret);
        }
        return QDial::repeatAction();
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qdial_updatemicrofocus_isbase) {
            qdial_updatemicrofocus_isbase = false;
            QDial::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qdial_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QDial::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qdial_create_isbase) {
            qdial_create_isbase = false;
            QDial::create();
            return;
        }
        auto create_cb = qdial_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QDial::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qdial_destroy_isbase) {
            qdial_destroy_isbase = false;
            QDial::destroy();
            return;
        }
        auto destroy_cb = qdial_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QDial::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qdial_focusnextchild_isbase) {
            qdial_focusnextchild_isbase = false;
            return QDial::focusNextChild();
        }
        auto focusnextchild_cb = qdial_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QDial::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qdial_focuspreviouschild_isbase) {
            qdial_focuspreviouschild_isbase = false;
            return QDial::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qdial_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QDial::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdial_sender_isbase) {
            qdial_sender_isbase = false;
            return QDial::sender();
        }
        auto sender_cb = qdial_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QDial::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdial_sendersignalindex_isbase) {
            qdial_sendersignalindex_isbase = false;
            return QDial::senderSignalIndex();
        }
        auto sendersignalindex_cb = qdial_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QDial::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdial_receivers_isbase) {
            qdial_receivers_isbase = false;
            return QDial::receivers(signal);
        }
        auto receivers_cb = qdial_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDial::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdial_issignalconnected_isbase) {
            qdial_issignalconnected_isbase = false;
            return QDial::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qdial_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QDial::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qdial_getdecodedmetricf_isbase) {
            qdial_getdecodedmetricf_isbase = false;
            return QDial::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qdial_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QDial::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool QDial_Event(QDial* self, QEvent* e);
    friend bool QDial_SuperEvent(QDial* self, QEvent* e);
    friend void QDial_ResizeEvent(QDial* self, QResizeEvent* re);
    friend void QDial_SuperResizeEvent(QDial* self, QResizeEvent* re);
    friend void QDial_PaintEvent(QDial* self, QPaintEvent* pe);
    friend void QDial_SuperPaintEvent(QDial* self, QPaintEvent* pe);
    friend void QDial_MousePressEvent(QDial* self, QMouseEvent* me);
    friend void QDial_SuperMousePressEvent(QDial* self, QMouseEvent* me);
    friend void QDial_MouseReleaseEvent(QDial* self, QMouseEvent* me);
    friend void QDial_SuperMouseReleaseEvent(QDial* self, QMouseEvent* me);
    friend void QDial_MouseMoveEvent(QDial* self, QMouseEvent* me);
    friend void QDial_SuperMouseMoveEvent(QDial* self, QMouseEvent* me);
    friend void QDial_SliderChange(QDial* self, int change);
    friend void QDial_SuperSliderChange(QDial* self, int change);
    friend void QDial_InitStyleOption(const QDial* self, QStyleOptionSlider* option);
    friend void QDial_SuperInitStyleOption(const QDial* self, QStyleOptionSlider* option);
    friend void QDial_KeyPressEvent(QDial* self, QKeyEvent* ev);
    friend void QDial_SuperKeyPressEvent(QDial* self, QKeyEvent* ev);
    friend void QDial_TimerEvent(QDial* self, QTimerEvent* param1);
    friend void QDial_SuperTimerEvent(QDial* self, QTimerEvent* param1);
    friend void QDial_WheelEvent(QDial* self, QWheelEvent* e);
    friend void QDial_SuperWheelEvent(QDial* self, QWheelEvent* e);
    friend void QDial_ChangeEvent(QDial* self, QEvent* e);
    friend void QDial_SuperChangeEvent(QDial* self, QEvent* e);
    friend void QDial_MouseDoubleClickEvent(QDial* self, QMouseEvent* event);
    friend void QDial_SuperMouseDoubleClickEvent(QDial* self, QMouseEvent* event);
    friend void QDial_KeyReleaseEvent(QDial* self, QKeyEvent* event);
    friend void QDial_SuperKeyReleaseEvent(QDial* self, QKeyEvent* event);
    friend void QDial_FocusInEvent(QDial* self, QFocusEvent* event);
    friend void QDial_SuperFocusInEvent(QDial* self, QFocusEvent* event);
    friend void QDial_FocusOutEvent(QDial* self, QFocusEvent* event);
    friend void QDial_SuperFocusOutEvent(QDial* self, QFocusEvent* event);
    friend void QDial_EnterEvent(QDial* self, QEnterEvent* event);
    friend void QDial_SuperEnterEvent(QDial* self, QEnterEvent* event);
    friend void QDial_LeaveEvent(QDial* self, QEvent* event);
    friend void QDial_SuperLeaveEvent(QDial* self, QEvent* event);
    friend void QDial_MoveEvent(QDial* self, QMoveEvent* event);
    friend void QDial_SuperMoveEvent(QDial* self, QMoveEvent* event);
    friend void QDial_CloseEvent(QDial* self, QCloseEvent* event);
    friend void QDial_SuperCloseEvent(QDial* self, QCloseEvent* event);
    friend void QDial_ContextMenuEvent(QDial* self, QContextMenuEvent* event);
    friend void QDial_SuperContextMenuEvent(QDial* self, QContextMenuEvent* event);
    friend void QDial_TabletEvent(QDial* self, QTabletEvent* event);
    friend void QDial_SuperTabletEvent(QDial* self, QTabletEvent* event);
    friend void QDial_ActionEvent(QDial* self, QActionEvent* event);
    friend void QDial_SuperActionEvent(QDial* self, QActionEvent* event);
    friend void QDial_DragEnterEvent(QDial* self, QDragEnterEvent* event);
    friend void QDial_SuperDragEnterEvent(QDial* self, QDragEnterEvent* event);
    friend void QDial_DragMoveEvent(QDial* self, QDragMoveEvent* event);
    friend void QDial_SuperDragMoveEvent(QDial* self, QDragMoveEvent* event);
    friend void QDial_DragLeaveEvent(QDial* self, QDragLeaveEvent* event);
    friend void QDial_SuperDragLeaveEvent(QDial* self, QDragLeaveEvent* event);
    friend void QDial_DropEvent(QDial* self, QDropEvent* event);
    friend void QDial_SuperDropEvent(QDial* self, QDropEvent* event);
    friend void QDial_ShowEvent(QDial* self, QShowEvent* event);
    friend void QDial_SuperShowEvent(QDial* self, QShowEvent* event);
    friend void QDial_HideEvent(QDial* self, QHideEvent* event);
    friend void QDial_SuperHideEvent(QDial* self, QHideEvent* event);
    friend bool QDial_NativeEvent(QDial* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QDial_SuperNativeEvent(QDial* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QDial_Metric(const QDial* self, int param1);
    friend int QDial_SuperMetric(const QDial* self, int param1);
    friend void QDial_InitPainter(const QDial* self, QPainter* painter);
    friend void QDial_SuperInitPainter(const QDial* self, QPainter* painter);
    friend QPaintDevice* QDial_Redirected(const QDial* self, QPoint* offset);
    friend QPaintDevice* QDial_SuperRedirected(const QDial* self, QPoint* offset);
    friend QPainter* QDial_SharedPainter(const QDial* self);
    friend QPainter* QDial_SuperSharedPainter(const QDial* self);
    friend void QDial_InputMethodEvent(QDial* self, QInputMethodEvent* param1);
    friend void QDial_SuperInputMethodEvent(QDial* self, QInputMethodEvent* param1);
    friend bool QDial_FocusNextPrevChild(QDial* self, bool next);
    friend bool QDial_SuperFocusNextPrevChild(QDial* self, bool next);
    friend void QDial_ChildEvent(QDial* self, QChildEvent* event);
    friend void QDial_SuperChildEvent(QDial* self, QChildEvent* event);
    friend void QDial_CustomEvent(QDial* self, QEvent* event);
    friend void QDial_SuperCustomEvent(QDial* self, QEvent* event);
    friend void QDial_ConnectNotify(QDial* self, const QMetaMethod* signal);
    friend void QDial_SuperConnectNotify(QDial* self, const QMetaMethod* signal);
    friend void QDial_DisconnectNotify(QDial* self, const QMetaMethod* signal);
    friend void QDial_SuperDisconnectNotify(QDial* self, const QMetaMethod* signal);
    friend void QDial_SetRepeatAction(QDial* self, int action);
    friend void QDial_SuperSetRepeatAction(QDial* self, int action);
    friend int QDial_RepeatAction(const QDial* self);
    friend int QDial_SuperRepeatAction(const QDial* self);
    friend void QDial_UpdateMicroFocus(QDial* self);
    friend void QDial_SuperUpdateMicroFocus(QDial* self);
    friend void QDial_Create(QDial* self);
    friend void QDial_SuperCreate(QDial* self);
    friend void QDial_Destroy(QDial* self);
    friend void QDial_SuperDestroy(QDial* self);
    friend bool QDial_FocusNextChild(QDial* self);
    friend bool QDial_SuperFocusNextChild(QDial* self);
    friend bool QDial_FocusPreviousChild(QDial* self);
    friend bool QDial_SuperFocusPreviousChild(QDial* self);
    friend QObject* QDial_Sender(const QDial* self);
    friend QObject* QDial_SuperSender(const QDial* self);
    friend int QDial_SenderSignalIndex(const QDial* self);
    friend int QDial_SuperSenderSignalIndex(const QDial* self);
    friend int QDial_Receivers(const QDial* self, const char* signal);
    friend int QDial_SuperReceivers(const QDial* self, const char* signal);
    friend bool QDial_IsSignalConnected(const QDial* self, const QMetaMethod* signal);
    friend bool QDial_SuperIsSignalConnected(const QDial* self, const QMetaMethod* signal);
    friend double QDial_GetDecodedMetricF(const QDial* self, int metricA, int metricB);
    friend double QDial_SuperGetDecodedMetricF(const QDial* self, int metricA, int metricB);
};

#endif
