#pragma once
#ifndef SRCC_LIBVIRTUALQSCROLLBAR_H
#define SRCC_LIBVIRTUALQSCROLLBAR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QScrollBar so that we can call protected methods
class VirtualQScrollBar final : public QScrollBar {

  public:
    // Virtual class boolean flag
    bool isVirtualQScrollBar = true;

    // Virtual class public types (including callbacks)
    using QAbstractSlider::SliderChange;
    using QScrollBar_Metacall_Callback = int (*)(QScrollBar*, int, int, void**);
    using QScrollBar_SizeHint_Callback = QSize* (*)();
    using QScrollBar_Event_Callback = bool (*)(QScrollBar*, QEvent*);
    using QScrollBar_WheelEvent_Callback = void (*)(QScrollBar*, QWheelEvent*);
    using QScrollBar_PaintEvent_Callback = void (*)(QScrollBar*, QPaintEvent*);
    using QScrollBar_MousePressEvent_Callback = void (*)(QScrollBar*, QMouseEvent*);
    using QScrollBar_MouseReleaseEvent_Callback = void (*)(QScrollBar*, QMouseEvent*);
    using QScrollBar_MouseMoveEvent_Callback = void (*)(QScrollBar*, QMouseEvent*);
    using QScrollBar_HideEvent_Callback = void (*)(QScrollBar*, QHideEvent*);
    using QScrollBar_SliderChange_Callback = void (*)(QScrollBar*, int);
    using QScrollBar_ContextMenuEvent_Callback = void (*)(QScrollBar*, QContextMenuEvent*);
    using QScrollBar_InitStyleOption_Callback = void (*)(const QScrollBar*, QStyleOptionSlider*);
    using QScrollBar_KeyPressEvent_Callback = void (*)(QScrollBar*, QKeyEvent*);
    using QScrollBar_TimerEvent_Callback = void (*)(QScrollBar*, QTimerEvent*);
    using QScrollBar_ChangeEvent_Callback = void (*)(QScrollBar*, QEvent*);
    using QScrollBar_DevType_Callback = int (*)();
    using QScrollBar_SetVisible_Callback = void (*)(QScrollBar*, bool);
    using QScrollBar_MinimumSizeHint_Callback = QSize* (*)();
    using QScrollBar_HeightForWidth_Callback = int (*)(const QScrollBar*, int);
    using QScrollBar_HasHeightForWidth_Callback = bool (*)();
    using QScrollBar_PaintEngine_Callback = QPaintEngine* (*)();
    using QScrollBar_MouseDoubleClickEvent_Callback = void (*)(QScrollBar*, QMouseEvent*);
    using QScrollBar_KeyReleaseEvent_Callback = void (*)(QScrollBar*, QKeyEvent*);
    using QScrollBar_FocusInEvent_Callback = void (*)(QScrollBar*, QFocusEvent*);
    using QScrollBar_FocusOutEvent_Callback = void (*)(QScrollBar*, QFocusEvent*);
    using QScrollBar_EnterEvent_Callback = void (*)(QScrollBar*, QEnterEvent*);
    using QScrollBar_LeaveEvent_Callback = void (*)(QScrollBar*, QEvent*);
    using QScrollBar_MoveEvent_Callback = void (*)(QScrollBar*, QMoveEvent*);
    using QScrollBar_ResizeEvent_Callback = void (*)(QScrollBar*, QResizeEvent*);
    using QScrollBar_CloseEvent_Callback = void (*)(QScrollBar*, QCloseEvent*);
    using QScrollBar_TabletEvent_Callback = void (*)(QScrollBar*, QTabletEvent*);
    using QScrollBar_ActionEvent_Callback = void (*)(QScrollBar*, QActionEvent*);
    using QScrollBar_DragEnterEvent_Callback = void (*)(QScrollBar*, QDragEnterEvent*);
    using QScrollBar_DragMoveEvent_Callback = void (*)(QScrollBar*, QDragMoveEvent*);
    using QScrollBar_DragLeaveEvent_Callback = void (*)(QScrollBar*, QDragLeaveEvent*);
    using QScrollBar_DropEvent_Callback = void (*)(QScrollBar*, QDropEvent*);
    using QScrollBar_ShowEvent_Callback = void (*)(QScrollBar*, QShowEvent*);
    using QScrollBar_NativeEvent_Callback = bool (*)(QScrollBar*, libqt_string, void*, intptr_t*);
    using QScrollBar_Metric_Callback = int (*)(const QScrollBar*, int);
    using QScrollBar_InitPainter_Callback = void (*)(const QScrollBar*, QPainter*);
    using QScrollBar_Redirected_Callback = QPaintDevice* (*)(const QScrollBar*, QPoint*);
    using QScrollBar_SharedPainter_Callback = QPainter* (*)();
    using QScrollBar_InputMethodEvent_Callback = void (*)(QScrollBar*, QInputMethodEvent*);
    using QScrollBar_InputMethodQuery_Callback = QVariant* (*)(const QScrollBar*, int);
    using QScrollBar_FocusNextPrevChild_Callback = bool (*)(QScrollBar*, bool);
    using QScrollBar_EventFilter_Callback = bool (*)(QScrollBar*, QObject*, QEvent*);
    using QScrollBar_ChildEvent_Callback = void (*)(QScrollBar*, QChildEvent*);
    using QScrollBar_CustomEvent_Callback = void (*)(QScrollBar*, QEvent*);
    using QScrollBar_ConnectNotify_Callback = void (*)(QScrollBar*, QMetaMethod*);
    using QScrollBar_DisconnectNotify_Callback = void (*)(QScrollBar*, QMetaMethod*);
    using QScrollBar_SetRepeatAction_Callback = void (*)(QScrollBar*, int);
    using QScrollBar_RepeatAction_Callback = int (*)();
    using QScrollBar_UpdateMicroFocus_Callback = void (*)();
    using QScrollBar_Create_Callback = void (*)();
    using QScrollBar_Destroy_Callback = void (*)();
    using QScrollBar_FocusNextChild_Callback = bool (*)();
    using QScrollBar_FocusPreviousChild_Callback = bool (*)();
    using QScrollBar_Sender_Callback = QObject* (*)();
    using QScrollBar_SenderSignalIndex_Callback = int (*)();
    using QScrollBar_Receivers_Callback = int (*)(const QScrollBar*, const char*);
    using QScrollBar_IsSignalConnected_Callback = bool (*)(const QScrollBar*, QMetaMethod*);
    using QScrollBar_GetDecodedMetricF_Callback = double (*)(const QScrollBar*, int, int);

  protected:
    // Instance callback storage
    QScrollBar_Metacall_Callback qscrollbar_metacall_callback = nullptr;
    QScrollBar_SizeHint_Callback qscrollbar_sizehint_callback = nullptr;
    QScrollBar_Event_Callback qscrollbar_event_callback = nullptr;
    QScrollBar_WheelEvent_Callback qscrollbar_wheelevent_callback = nullptr;
    QScrollBar_PaintEvent_Callback qscrollbar_paintevent_callback = nullptr;
    QScrollBar_MousePressEvent_Callback qscrollbar_mousepressevent_callback = nullptr;
    QScrollBar_MouseReleaseEvent_Callback qscrollbar_mousereleaseevent_callback = nullptr;
    QScrollBar_MouseMoveEvent_Callback qscrollbar_mousemoveevent_callback = nullptr;
    QScrollBar_HideEvent_Callback qscrollbar_hideevent_callback = nullptr;
    QScrollBar_SliderChange_Callback qscrollbar_sliderchange_callback = nullptr;
    QScrollBar_ContextMenuEvent_Callback qscrollbar_contextmenuevent_callback = nullptr;
    QScrollBar_InitStyleOption_Callback qscrollbar_initstyleoption_callback = nullptr;
    QScrollBar_KeyPressEvent_Callback qscrollbar_keypressevent_callback = nullptr;
    QScrollBar_TimerEvent_Callback qscrollbar_timerevent_callback = nullptr;
    QScrollBar_ChangeEvent_Callback qscrollbar_changeevent_callback = nullptr;
    QScrollBar_DevType_Callback qscrollbar_devtype_callback = nullptr;
    QScrollBar_SetVisible_Callback qscrollbar_setvisible_callback = nullptr;
    QScrollBar_MinimumSizeHint_Callback qscrollbar_minimumsizehint_callback = nullptr;
    QScrollBar_HeightForWidth_Callback qscrollbar_heightforwidth_callback = nullptr;
    QScrollBar_HasHeightForWidth_Callback qscrollbar_hasheightforwidth_callback = nullptr;
    QScrollBar_PaintEngine_Callback qscrollbar_paintengine_callback = nullptr;
    QScrollBar_MouseDoubleClickEvent_Callback qscrollbar_mousedoubleclickevent_callback = nullptr;
    QScrollBar_KeyReleaseEvent_Callback qscrollbar_keyreleaseevent_callback = nullptr;
    QScrollBar_FocusInEvent_Callback qscrollbar_focusinevent_callback = nullptr;
    QScrollBar_FocusOutEvent_Callback qscrollbar_focusoutevent_callback = nullptr;
    QScrollBar_EnterEvent_Callback qscrollbar_enterevent_callback = nullptr;
    QScrollBar_LeaveEvent_Callback qscrollbar_leaveevent_callback = nullptr;
    QScrollBar_MoveEvent_Callback qscrollbar_moveevent_callback = nullptr;
    QScrollBar_ResizeEvent_Callback qscrollbar_resizeevent_callback = nullptr;
    QScrollBar_CloseEvent_Callback qscrollbar_closeevent_callback = nullptr;
    QScrollBar_TabletEvent_Callback qscrollbar_tabletevent_callback = nullptr;
    QScrollBar_ActionEvent_Callback qscrollbar_actionevent_callback = nullptr;
    QScrollBar_DragEnterEvent_Callback qscrollbar_dragenterevent_callback = nullptr;
    QScrollBar_DragMoveEvent_Callback qscrollbar_dragmoveevent_callback = nullptr;
    QScrollBar_DragLeaveEvent_Callback qscrollbar_dragleaveevent_callback = nullptr;
    QScrollBar_DropEvent_Callback qscrollbar_dropevent_callback = nullptr;
    QScrollBar_ShowEvent_Callback qscrollbar_showevent_callback = nullptr;
    QScrollBar_NativeEvent_Callback qscrollbar_nativeevent_callback = nullptr;
    QScrollBar_Metric_Callback qscrollbar_metric_callback = nullptr;
    QScrollBar_InitPainter_Callback qscrollbar_initpainter_callback = nullptr;
    QScrollBar_Redirected_Callback qscrollbar_redirected_callback = nullptr;
    QScrollBar_SharedPainter_Callback qscrollbar_sharedpainter_callback = nullptr;
    QScrollBar_InputMethodEvent_Callback qscrollbar_inputmethodevent_callback = nullptr;
    QScrollBar_InputMethodQuery_Callback qscrollbar_inputmethodquery_callback = nullptr;
    QScrollBar_FocusNextPrevChild_Callback qscrollbar_focusnextprevchild_callback = nullptr;
    QScrollBar_EventFilter_Callback qscrollbar_eventfilter_callback = nullptr;
    QScrollBar_ChildEvent_Callback qscrollbar_childevent_callback = nullptr;
    QScrollBar_CustomEvent_Callback qscrollbar_customevent_callback = nullptr;
    QScrollBar_ConnectNotify_Callback qscrollbar_connectnotify_callback = nullptr;
    QScrollBar_DisconnectNotify_Callback qscrollbar_disconnectnotify_callback = nullptr;
    QScrollBar_SetRepeatAction_Callback qscrollbar_setrepeataction_callback = nullptr;
    QScrollBar_RepeatAction_Callback qscrollbar_repeataction_callback = nullptr;
    QScrollBar_UpdateMicroFocus_Callback qscrollbar_updatemicrofocus_callback = nullptr;
    QScrollBar_Create_Callback qscrollbar_create_callback = nullptr;
    QScrollBar_Destroy_Callback qscrollbar_destroy_callback = nullptr;
    QScrollBar_FocusNextChild_Callback qscrollbar_focusnextchild_callback = nullptr;
    QScrollBar_FocusPreviousChild_Callback qscrollbar_focuspreviouschild_callback = nullptr;
    QScrollBar_Sender_Callback qscrollbar_sender_callback = nullptr;
    QScrollBar_SenderSignalIndex_Callback qscrollbar_sendersignalindex_callback = nullptr;
    QScrollBar_Receivers_Callback qscrollbar_receivers_callback = nullptr;
    QScrollBar_IsSignalConnected_Callback qscrollbar_issignalconnected_callback = nullptr;
    QScrollBar_GetDecodedMetricF_Callback qscrollbar_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qscrollbar_metacall_isbase = false;
    mutable bool qscrollbar_sizehint_isbase = false;
    mutable bool qscrollbar_event_isbase = false;
    mutable bool qscrollbar_wheelevent_isbase = false;
    mutable bool qscrollbar_paintevent_isbase = false;
    mutable bool qscrollbar_mousepressevent_isbase = false;
    mutable bool qscrollbar_mousereleaseevent_isbase = false;
    mutable bool qscrollbar_mousemoveevent_isbase = false;
    mutable bool qscrollbar_hideevent_isbase = false;
    mutable bool qscrollbar_sliderchange_isbase = false;
    mutable bool qscrollbar_contextmenuevent_isbase = false;
    mutable bool qscrollbar_initstyleoption_isbase = false;
    mutable bool qscrollbar_keypressevent_isbase = false;
    mutable bool qscrollbar_timerevent_isbase = false;
    mutable bool qscrollbar_changeevent_isbase = false;
    mutable bool qscrollbar_devtype_isbase = false;
    mutable bool qscrollbar_setvisible_isbase = false;
    mutable bool qscrollbar_minimumsizehint_isbase = false;
    mutable bool qscrollbar_heightforwidth_isbase = false;
    mutable bool qscrollbar_hasheightforwidth_isbase = false;
    mutable bool qscrollbar_paintengine_isbase = false;
    mutable bool qscrollbar_mousedoubleclickevent_isbase = false;
    mutable bool qscrollbar_keyreleaseevent_isbase = false;
    mutable bool qscrollbar_focusinevent_isbase = false;
    mutable bool qscrollbar_focusoutevent_isbase = false;
    mutable bool qscrollbar_enterevent_isbase = false;
    mutable bool qscrollbar_leaveevent_isbase = false;
    mutable bool qscrollbar_moveevent_isbase = false;
    mutable bool qscrollbar_resizeevent_isbase = false;
    mutable bool qscrollbar_closeevent_isbase = false;
    mutable bool qscrollbar_tabletevent_isbase = false;
    mutable bool qscrollbar_actionevent_isbase = false;
    mutable bool qscrollbar_dragenterevent_isbase = false;
    mutable bool qscrollbar_dragmoveevent_isbase = false;
    mutable bool qscrollbar_dragleaveevent_isbase = false;
    mutable bool qscrollbar_dropevent_isbase = false;
    mutable bool qscrollbar_showevent_isbase = false;
    mutable bool qscrollbar_nativeevent_isbase = false;
    mutable bool qscrollbar_metric_isbase = false;
    mutable bool qscrollbar_initpainter_isbase = false;
    mutable bool qscrollbar_redirected_isbase = false;
    mutable bool qscrollbar_sharedpainter_isbase = false;
    mutable bool qscrollbar_inputmethodevent_isbase = false;
    mutable bool qscrollbar_inputmethodquery_isbase = false;
    mutable bool qscrollbar_focusnextprevchild_isbase = false;
    mutable bool qscrollbar_eventfilter_isbase = false;
    mutable bool qscrollbar_childevent_isbase = false;
    mutable bool qscrollbar_customevent_isbase = false;
    mutable bool qscrollbar_connectnotify_isbase = false;
    mutable bool qscrollbar_disconnectnotify_isbase = false;
    mutable bool qscrollbar_setrepeataction_isbase = false;
    mutable bool qscrollbar_repeataction_isbase = false;
    mutable bool qscrollbar_updatemicrofocus_isbase = false;
    mutable bool qscrollbar_create_isbase = false;
    mutable bool qscrollbar_destroy_isbase = false;
    mutable bool qscrollbar_focusnextchild_isbase = false;
    mutable bool qscrollbar_focuspreviouschild_isbase = false;
    mutable bool qscrollbar_sender_isbase = false;
    mutable bool qscrollbar_sendersignalindex_isbase = false;
    mutable bool qscrollbar_receivers_isbase = false;
    mutable bool qscrollbar_issignalconnected_isbase = false;
    mutable bool qscrollbar_getdecodedmetricf_isbase = false;

  public:
    VirtualQScrollBar(QWidget* parent) : QScrollBar(parent) {};
    VirtualQScrollBar() : QScrollBar() {};
    VirtualQScrollBar(Qt::Orientation param1) : QScrollBar(param1) {};
    VirtualQScrollBar(Qt::Orientation param1, QWidget* parent) : QScrollBar(param1, parent) {};

    ~VirtualQScrollBar() {
        qscrollbar_metacall_callback = nullptr;
        qscrollbar_sizehint_callback = nullptr;
        qscrollbar_event_callback = nullptr;
        qscrollbar_wheelevent_callback = nullptr;
        qscrollbar_paintevent_callback = nullptr;
        qscrollbar_mousepressevent_callback = nullptr;
        qscrollbar_mousereleaseevent_callback = nullptr;
        qscrollbar_mousemoveevent_callback = nullptr;
        qscrollbar_hideevent_callback = nullptr;
        qscrollbar_sliderchange_callback = nullptr;
        qscrollbar_contextmenuevent_callback = nullptr;
        qscrollbar_initstyleoption_callback = nullptr;
        qscrollbar_keypressevent_callback = nullptr;
        qscrollbar_timerevent_callback = nullptr;
        qscrollbar_changeevent_callback = nullptr;
        qscrollbar_devtype_callback = nullptr;
        qscrollbar_setvisible_callback = nullptr;
        qscrollbar_minimumsizehint_callback = nullptr;
        qscrollbar_heightforwidth_callback = nullptr;
        qscrollbar_hasheightforwidth_callback = nullptr;
        qscrollbar_paintengine_callback = nullptr;
        qscrollbar_mousedoubleclickevent_callback = nullptr;
        qscrollbar_keyreleaseevent_callback = nullptr;
        qscrollbar_focusinevent_callback = nullptr;
        qscrollbar_focusoutevent_callback = nullptr;
        qscrollbar_enterevent_callback = nullptr;
        qscrollbar_leaveevent_callback = nullptr;
        qscrollbar_moveevent_callback = nullptr;
        qscrollbar_resizeevent_callback = nullptr;
        qscrollbar_closeevent_callback = nullptr;
        qscrollbar_tabletevent_callback = nullptr;
        qscrollbar_actionevent_callback = nullptr;
        qscrollbar_dragenterevent_callback = nullptr;
        qscrollbar_dragmoveevent_callback = nullptr;
        qscrollbar_dragleaveevent_callback = nullptr;
        qscrollbar_dropevent_callback = nullptr;
        qscrollbar_showevent_callback = nullptr;
        qscrollbar_nativeevent_callback = nullptr;
        qscrollbar_metric_callback = nullptr;
        qscrollbar_initpainter_callback = nullptr;
        qscrollbar_redirected_callback = nullptr;
        qscrollbar_sharedpainter_callback = nullptr;
        qscrollbar_inputmethodevent_callback = nullptr;
        qscrollbar_inputmethodquery_callback = nullptr;
        qscrollbar_focusnextprevchild_callback = nullptr;
        qscrollbar_eventfilter_callback = nullptr;
        qscrollbar_childevent_callback = nullptr;
        qscrollbar_customevent_callback = nullptr;
        qscrollbar_connectnotify_callback = nullptr;
        qscrollbar_disconnectnotify_callback = nullptr;
        qscrollbar_setrepeataction_callback = nullptr;
        qscrollbar_repeataction_callback = nullptr;
        qscrollbar_updatemicrofocus_callback = nullptr;
        qscrollbar_create_callback = nullptr;
        qscrollbar_destroy_callback = nullptr;
        qscrollbar_focusnextchild_callback = nullptr;
        qscrollbar_focuspreviouschild_callback = nullptr;
        qscrollbar_sender_callback = nullptr;
        qscrollbar_sendersignalindex_callback = nullptr;
        qscrollbar_receivers_callback = nullptr;
        qscrollbar_issignalconnected_callback = nullptr;
        qscrollbar_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQScrollBar_Metacall_Callback(QScrollBar_Metacall_Callback cb) { qscrollbar_metacall_callback = cb; }
    inline void setQScrollBar_SizeHint_Callback(QScrollBar_SizeHint_Callback cb) { qscrollbar_sizehint_callback = cb; }
    inline void setQScrollBar_Event_Callback(QScrollBar_Event_Callback cb) { qscrollbar_event_callback = cb; }
    inline void setQScrollBar_WheelEvent_Callback(QScrollBar_WheelEvent_Callback cb) { qscrollbar_wheelevent_callback = cb; }
    inline void setQScrollBar_PaintEvent_Callback(QScrollBar_PaintEvent_Callback cb) { qscrollbar_paintevent_callback = cb; }
    inline void setQScrollBar_MousePressEvent_Callback(QScrollBar_MousePressEvent_Callback cb) { qscrollbar_mousepressevent_callback = cb; }
    inline void setQScrollBar_MouseReleaseEvent_Callback(QScrollBar_MouseReleaseEvent_Callback cb) { qscrollbar_mousereleaseevent_callback = cb; }
    inline void setQScrollBar_MouseMoveEvent_Callback(QScrollBar_MouseMoveEvent_Callback cb) { qscrollbar_mousemoveevent_callback = cb; }
    inline void setQScrollBar_HideEvent_Callback(QScrollBar_HideEvent_Callback cb) { qscrollbar_hideevent_callback = cb; }
    inline void setQScrollBar_SliderChange_Callback(QScrollBar_SliderChange_Callback cb) { qscrollbar_sliderchange_callback = cb; }
    inline void setQScrollBar_ContextMenuEvent_Callback(QScrollBar_ContextMenuEvent_Callback cb) { qscrollbar_contextmenuevent_callback = cb; }
    inline void setQScrollBar_InitStyleOption_Callback(QScrollBar_InitStyleOption_Callback cb) { qscrollbar_initstyleoption_callback = cb; }
    inline void setQScrollBar_KeyPressEvent_Callback(QScrollBar_KeyPressEvent_Callback cb) { qscrollbar_keypressevent_callback = cb; }
    inline void setQScrollBar_TimerEvent_Callback(QScrollBar_TimerEvent_Callback cb) { qscrollbar_timerevent_callback = cb; }
    inline void setQScrollBar_ChangeEvent_Callback(QScrollBar_ChangeEvent_Callback cb) { qscrollbar_changeevent_callback = cb; }
    inline void setQScrollBar_DevType_Callback(QScrollBar_DevType_Callback cb) { qscrollbar_devtype_callback = cb; }
    inline void setQScrollBar_SetVisible_Callback(QScrollBar_SetVisible_Callback cb) { qscrollbar_setvisible_callback = cb; }
    inline void setQScrollBar_MinimumSizeHint_Callback(QScrollBar_MinimumSizeHint_Callback cb) { qscrollbar_minimumsizehint_callback = cb; }
    inline void setQScrollBar_HeightForWidth_Callback(QScrollBar_HeightForWidth_Callback cb) { qscrollbar_heightforwidth_callback = cb; }
    inline void setQScrollBar_HasHeightForWidth_Callback(QScrollBar_HasHeightForWidth_Callback cb) { qscrollbar_hasheightforwidth_callback = cb; }
    inline void setQScrollBar_PaintEngine_Callback(QScrollBar_PaintEngine_Callback cb) { qscrollbar_paintengine_callback = cb; }
    inline void setQScrollBar_MouseDoubleClickEvent_Callback(QScrollBar_MouseDoubleClickEvent_Callback cb) { qscrollbar_mousedoubleclickevent_callback = cb; }
    inline void setQScrollBar_KeyReleaseEvent_Callback(QScrollBar_KeyReleaseEvent_Callback cb) { qscrollbar_keyreleaseevent_callback = cb; }
    inline void setQScrollBar_FocusInEvent_Callback(QScrollBar_FocusInEvent_Callback cb) { qscrollbar_focusinevent_callback = cb; }
    inline void setQScrollBar_FocusOutEvent_Callback(QScrollBar_FocusOutEvent_Callback cb) { qscrollbar_focusoutevent_callback = cb; }
    inline void setQScrollBar_EnterEvent_Callback(QScrollBar_EnterEvent_Callback cb) { qscrollbar_enterevent_callback = cb; }
    inline void setQScrollBar_LeaveEvent_Callback(QScrollBar_LeaveEvent_Callback cb) { qscrollbar_leaveevent_callback = cb; }
    inline void setQScrollBar_MoveEvent_Callback(QScrollBar_MoveEvent_Callback cb) { qscrollbar_moveevent_callback = cb; }
    inline void setQScrollBar_ResizeEvent_Callback(QScrollBar_ResizeEvent_Callback cb) { qscrollbar_resizeevent_callback = cb; }
    inline void setQScrollBar_CloseEvent_Callback(QScrollBar_CloseEvent_Callback cb) { qscrollbar_closeevent_callback = cb; }
    inline void setQScrollBar_TabletEvent_Callback(QScrollBar_TabletEvent_Callback cb) { qscrollbar_tabletevent_callback = cb; }
    inline void setQScrollBar_ActionEvent_Callback(QScrollBar_ActionEvent_Callback cb) { qscrollbar_actionevent_callback = cb; }
    inline void setQScrollBar_DragEnterEvent_Callback(QScrollBar_DragEnterEvent_Callback cb) { qscrollbar_dragenterevent_callback = cb; }
    inline void setQScrollBar_DragMoveEvent_Callback(QScrollBar_DragMoveEvent_Callback cb) { qscrollbar_dragmoveevent_callback = cb; }
    inline void setQScrollBar_DragLeaveEvent_Callback(QScrollBar_DragLeaveEvent_Callback cb) { qscrollbar_dragleaveevent_callback = cb; }
    inline void setQScrollBar_DropEvent_Callback(QScrollBar_DropEvent_Callback cb) { qscrollbar_dropevent_callback = cb; }
    inline void setQScrollBar_ShowEvent_Callback(QScrollBar_ShowEvent_Callback cb) { qscrollbar_showevent_callback = cb; }
    inline void setQScrollBar_NativeEvent_Callback(QScrollBar_NativeEvent_Callback cb) { qscrollbar_nativeevent_callback = cb; }
    inline void setQScrollBar_Metric_Callback(QScrollBar_Metric_Callback cb) { qscrollbar_metric_callback = cb; }
    inline void setQScrollBar_InitPainter_Callback(QScrollBar_InitPainter_Callback cb) { qscrollbar_initpainter_callback = cb; }
    inline void setQScrollBar_Redirected_Callback(QScrollBar_Redirected_Callback cb) { qscrollbar_redirected_callback = cb; }
    inline void setQScrollBar_SharedPainter_Callback(QScrollBar_SharedPainter_Callback cb) { qscrollbar_sharedpainter_callback = cb; }
    inline void setQScrollBar_InputMethodEvent_Callback(QScrollBar_InputMethodEvent_Callback cb) { qscrollbar_inputmethodevent_callback = cb; }
    inline void setQScrollBar_InputMethodQuery_Callback(QScrollBar_InputMethodQuery_Callback cb) { qscrollbar_inputmethodquery_callback = cb; }
    inline void setQScrollBar_FocusNextPrevChild_Callback(QScrollBar_FocusNextPrevChild_Callback cb) { qscrollbar_focusnextprevchild_callback = cb; }
    inline void setQScrollBar_EventFilter_Callback(QScrollBar_EventFilter_Callback cb) { qscrollbar_eventfilter_callback = cb; }
    inline void setQScrollBar_ChildEvent_Callback(QScrollBar_ChildEvent_Callback cb) { qscrollbar_childevent_callback = cb; }
    inline void setQScrollBar_CustomEvent_Callback(QScrollBar_CustomEvent_Callback cb) { qscrollbar_customevent_callback = cb; }
    inline void setQScrollBar_ConnectNotify_Callback(QScrollBar_ConnectNotify_Callback cb) { qscrollbar_connectnotify_callback = cb; }
    inline void setQScrollBar_DisconnectNotify_Callback(QScrollBar_DisconnectNotify_Callback cb) { qscrollbar_disconnectnotify_callback = cb; }
    inline void setQScrollBar_SetRepeatAction_Callback(QScrollBar_SetRepeatAction_Callback cb) { qscrollbar_setrepeataction_callback = cb; }
    inline void setQScrollBar_RepeatAction_Callback(QScrollBar_RepeatAction_Callback cb) { qscrollbar_repeataction_callback = cb; }
    inline void setQScrollBar_UpdateMicroFocus_Callback(QScrollBar_UpdateMicroFocus_Callback cb) { qscrollbar_updatemicrofocus_callback = cb; }
    inline void setQScrollBar_Create_Callback(QScrollBar_Create_Callback cb) { qscrollbar_create_callback = cb; }
    inline void setQScrollBar_Destroy_Callback(QScrollBar_Destroy_Callback cb) { qscrollbar_destroy_callback = cb; }
    inline void setQScrollBar_FocusNextChild_Callback(QScrollBar_FocusNextChild_Callback cb) { qscrollbar_focusnextchild_callback = cb; }
    inline void setQScrollBar_FocusPreviousChild_Callback(QScrollBar_FocusPreviousChild_Callback cb) { qscrollbar_focuspreviouschild_callback = cb; }
    inline void setQScrollBar_Sender_Callback(QScrollBar_Sender_Callback cb) { qscrollbar_sender_callback = cb; }
    inline void setQScrollBar_SenderSignalIndex_Callback(QScrollBar_SenderSignalIndex_Callback cb) { qscrollbar_sendersignalindex_callback = cb; }
    inline void setQScrollBar_Receivers_Callback(QScrollBar_Receivers_Callback cb) { qscrollbar_receivers_callback = cb; }
    inline void setQScrollBar_IsSignalConnected_Callback(QScrollBar_IsSignalConnected_Callback cb) { qscrollbar_issignalconnected_callback = cb; }
    inline void setQScrollBar_GetDecodedMetricF_Callback(QScrollBar_GetDecodedMetricF_Callback cb) { qscrollbar_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQScrollBar_Metacall_IsBase(bool value) const { qscrollbar_metacall_isbase = value; }
    inline void setQScrollBar_SizeHint_IsBase(bool value) const { qscrollbar_sizehint_isbase = value; }
    inline void setQScrollBar_Event_IsBase(bool value) const { qscrollbar_event_isbase = value; }
    inline void setQScrollBar_WheelEvent_IsBase(bool value) const { qscrollbar_wheelevent_isbase = value; }
    inline void setQScrollBar_PaintEvent_IsBase(bool value) const { qscrollbar_paintevent_isbase = value; }
    inline void setQScrollBar_MousePressEvent_IsBase(bool value) const { qscrollbar_mousepressevent_isbase = value; }
    inline void setQScrollBar_MouseReleaseEvent_IsBase(bool value) const { qscrollbar_mousereleaseevent_isbase = value; }
    inline void setQScrollBar_MouseMoveEvent_IsBase(bool value) const { qscrollbar_mousemoveevent_isbase = value; }
    inline void setQScrollBar_HideEvent_IsBase(bool value) const { qscrollbar_hideevent_isbase = value; }
    inline void setQScrollBar_SliderChange_IsBase(bool value) const { qscrollbar_sliderchange_isbase = value; }
    inline void setQScrollBar_ContextMenuEvent_IsBase(bool value) const { qscrollbar_contextmenuevent_isbase = value; }
    inline void setQScrollBar_InitStyleOption_IsBase(bool value) const { qscrollbar_initstyleoption_isbase = value; }
    inline void setQScrollBar_KeyPressEvent_IsBase(bool value) const { qscrollbar_keypressevent_isbase = value; }
    inline void setQScrollBar_TimerEvent_IsBase(bool value) const { qscrollbar_timerevent_isbase = value; }
    inline void setQScrollBar_ChangeEvent_IsBase(bool value) const { qscrollbar_changeevent_isbase = value; }
    inline void setQScrollBar_DevType_IsBase(bool value) const { qscrollbar_devtype_isbase = value; }
    inline void setQScrollBar_SetVisible_IsBase(bool value) const { qscrollbar_setvisible_isbase = value; }
    inline void setQScrollBar_MinimumSizeHint_IsBase(bool value) const { qscrollbar_minimumsizehint_isbase = value; }
    inline void setQScrollBar_HeightForWidth_IsBase(bool value) const { qscrollbar_heightforwidth_isbase = value; }
    inline void setQScrollBar_HasHeightForWidth_IsBase(bool value) const { qscrollbar_hasheightforwidth_isbase = value; }
    inline void setQScrollBar_PaintEngine_IsBase(bool value) const { qscrollbar_paintengine_isbase = value; }
    inline void setQScrollBar_MouseDoubleClickEvent_IsBase(bool value) const { qscrollbar_mousedoubleclickevent_isbase = value; }
    inline void setQScrollBar_KeyReleaseEvent_IsBase(bool value) const { qscrollbar_keyreleaseevent_isbase = value; }
    inline void setQScrollBar_FocusInEvent_IsBase(bool value) const { qscrollbar_focusinevent_isbase = value; }
    inline void setQScrollBar_FocusOutEvent_IsBase(bool value) const { qscrollbar_focusoutevent_isbase = value; }
    inline void setQScrollBar_EnterEvent_IsBase(bool value) const { qscrollbar_enterevent_isbase = value; }
    inline void setQScrollBar_LeaveEvent_IsBase(bool value) const { qscrollbar_leaveevent_isbase = value; }
    inline void setQScrollBar_MoveEvent_IsBase(bool value) const { qscrollbar_moveevent_isbase = value; }
    inline void setQScrollBar_ResizeEvent_IsBase(bool value) const { qscrollbar_resizeevent_isbase = value; }
    inline void setQScrollBar_CloseEvent_IsBase(bool value) const { qscrollbar_closeevent_isbase = value; }
    inline void setQScrollBar_TabletEvent_IsBase(bool value) const { qscrollbar_tabletevent_isbase = value; }
    inline void setQScrollBar_ActionEvent_IsBase(bool value) const { qscrollbar_actionevent_isbase = value; }
    inline void setQScrollBar_DragEnterEvent_IsBase(bool value) const { qscrollbar_dragenterevent_isbase = value; }
    inline void setQScrollBar_DragMoveEvent_IsBase(bool value) const { qscrollbar_dragmoveevent_isbase = value; }
    inline void setQScrollBar_DragLeaveEvent_IsBase(bool value) const { qscrollbar_dragleaveevent_isbase = value; }
    inline void setQScrollBar_DropEvent_IsBase(bool value) const { qscrollbar_dropevent_isbase = value; }
    inline void setQScrollBar_ShowEvent_IsBase(bool value) const { qscrollbar_showevent_isbase = value; }
    inline void setQScrollBar_NativeEvent_IsBase(bool value) const { qscrollbar_nativeevent_isbase = value; }
    inline void setQScrollBar_Metric_IsBase(bool value) const { qscrollbar_metric_isbase = value; }
    inline void setQScrollBar_InitPainter_IsBase(bool value) const { qscrollbar_initpainter_isbase = value; }
    inline void setQScrollBar_Redirected_IsBase(bool value) const { qscrollbar_redirected_isbase = value; }
    inline void setQScrollBar_SharedPainter_IsBase(bool value) const { qscrollbar_sharedpainter_isbase = value; }
    inline void setQScrollBar_InputMethodEvent_IsBase(bool value) const { qscrollbar_inputmethodevent_isbase = value; }
    inline void setQScrollBar_InputMethodQuery_IsBase(bool value) const { qscrollbar_inputmethodquery_isbase = value; }
    inline void setQScrollBar_FocusNextPrevChild_IsBase(bool value) const { qscrollbar_focusnextprevchild_isbase = value; }
    inline void setQScrollBar_EventFilter_IsBase(bool value) const { qscrollbar_eventfilter_isbase = value; }
    inline void setQScrollBar_ChildEvent_IsBase(bool value) const { qscrollbar_childevent_isbase = value; }
    inline void setQScrollBar_CustomEvent_IsBase(bool value) const { qscrollbar_customevent_isbase = value; }
    inline void setQScrollBar_ConnectNotify_IsBase(bool value) const { qscrollbar_connectnotify_isbase = value; }
    inline void setQScrollBar_DisconnectNotify_IsBase(bool value) const { qscrollbar_disconnectnotify_isbase = value; }
    inline void setQScrollBar_SetRepeatAction_IsBase(bool value) const { qscrollbar_setrepeataction_isbase = value; }
    inline void setQScrollBar_RepeatAction_IsBase(bool value) const { qscrollbar_repeataction_isbase = value; }
    inline void setQScrollBar_UpdateMicroFocus_IsBase(bool value) const { qscrollbar_updatemicrofocus_isbase = value; }
    inline void setQScrollBar_Create_IsBase(bool value) const { qscrollbar_create_isbase = value; }
    inline void setQScrollBar_Destroy_IsBase(bool value) const { qscrollbar_destroy_isbase = value; }
    inline void setQScrollBar_FocusNextChild_IsBase(bool value) const { qscrollbar_focusnextchild_isbase = value; }
    inline void setQScrollBar_FocusPreviousChild_IsBase(bool value) const { qscrollbar_focuspreviouschild_isbase = value; }
    inline void setQScrollBar_Sender_IsBase(bool value) const { qscrollbar_sender_isbase = value; }
    inline void setQScrollBar_SenderSignalIndex_IsBase(bool value) const { qscrollbar_sendersignalindex_isbase = value; }
    inline void setQScrollBar_Receivers_IsBase(bool value) const { qscrollbar_receivers_isbase = value; }
    inline void setQScrollBar_IsSignalConnected_IsBase(bool value) const { qscrollbar_issignalconnected_isbase = value; }
    inline void setQScrollBar_GetDecodedMetricF_IsBase(bool value) const { qscrollbar_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscrollbar_metacall_isbase) {
            qscrollbar_metacall_isbase = false;
            return QScrollBar::qt_metacall(param1, param2, param3);
        } else if (qscrollbar_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscrollbar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QScrollBar::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qscrollbar_sizehint_isbase) {
            qscrollbar_sizehint_isbase = false;
            return QScrollBar::sizeHint();
        } else if (qscrollbar_sizehint_callback != nullptr) {
            QSize* callback_ret = qscrollbar_sizehint_callback();
            return *callback_ret;
        } else {
            return QScrollBar::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscrollbar_event_isbase) {
            qscrollbar_event_isbase = false;
            return QScrollBar::event(event);
        } else if (qscrollbar_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscrollbar_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QScrollBar::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qscrollbar_wheelevent_isbase) {
            qscrollbar_wheelevent_isbase = false;
            QScrollBar::wheelEvent(param1);
        } else if (qscrollbar_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = param1;

            qscrollbar_wheelevent_callback(this, cbval1);
        } else {
            QScrollBar::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qscrollbar_paintevent_isbase) {
            qscrollbar_paintevent_isbase = false;
            QScrollBar::paintEvent(param1);
        } else if (qscrollbar_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            qscrollbar_paintevent_callback(this, cbval1);
        } else {
            QScrollBar::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qscrollbar_mousepressevent_isbase) {
            qscrollbar_mousepressevent_isbase = false;
            QScrollBar::mousePressEvent(param1);
        } else if (qscrollbar_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qscrollbar_mousepressevent_callback(this, cbval1);
        } else {
            QScrollBar::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qscrollbar_mousereleaseevent_isbase) {
            qscrollbar_mousereleaseevent_isbase = false;
            QScrollBar::mouseReleaseEvent(param1);
        } else if (qscrollbar_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qscrollbar_mousereleaseevent_callback(this, cbval1);
        } else {
            QScrollBar::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qscrollbar_mousemoveevent_isbase) {
            qscrollbar_mousemoveevent_isbase = false;
            QScrollBar::mouseMoveEvent(param1);
        } else if (qscrollbar_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qscrollbar_mousemoveevent_callback(this, cbval1);
        } else {
            QScrollBar::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qscrollbar_hideevent_isbase) {
            qscrollbar_hideevent_isbase = false;
            QScrollBar::hideEvent(param1);
        } else if (qscrollbar_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = param1;

            qscrollbar_hideevent_callback(this, cbval1);
        } else {
            QScrollBar::hideEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sliderChange(QAbstractSlider::SliderChange change) override {
        if (qscrollbar_sliderchange_isbase) {
            qscrollbar_sliderchange_isbase = false;
            QScrollBar::sliderChange(change);
        } else if (qscrollbar_sliderchange_callback != nullptr) {
            int cbval1 = static_cast<int>(change);

            qscrollbar_sliderchange_callback(this, cbval1);
        } else {
            QScrollBar::sliderChange(change);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qscrollbar_contextmenuevent_isbase) {
            qscrollbar_contextmenuevent_isbase = false;
            QScrollBar::contextMenuEvent(param1);
        } else if (qscrollbar_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            qscrollbar_contextmenuevent_callback(this, cbval1);
        } else {
            QScrollBar::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSlider* option) const override {
        if (qscrollbar_initstyleoption_isbase) {
            qscrollbar_initstyleoption_isbase = false;
            QScrollBar::initStyleOption(option);
        } else if (qscrollbar_initstyleoption_callback != nullptr) {
            QStyleOptionSlider* cbval1 = option;

            qscrollbar_initstyleoption_callback(this, cbval1);
        } else {
            QScrollBar::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (qscrollbar_keypressevent_isbase) {
            qscrollbar_keypressevent_isbase = false;
            QScrollBar::keyPressEvent(ev);
        } else if (qscrollbar_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = ev;

            qscrollbar_keypressevent_callback(this, cbval1);
        } else {
            QScrollBar::keyPressEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qscrollbar_timerevent_isbase) {
            qscrollbar_timerevent_isbase = false;
            QScrollBar::timerEvent(param1);
        } else if (qscrollbar_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = param1;

            qscrollbar_timerevent_callback(this, cbval1);
        } else {
            QScrollBar::timerEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qscrollbar_changeevent_isbase) {
            qscrollbar_changeevent_isbase = false;
            QScrollBar::changeEvent(e);
        } else if (qscrollbar_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            qscrollbar_changeevent_callback(this, cbval1);
        } else {
            QScrollBar::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qscrollbar_devtype_isbase) {
            qscrollbar_devtype_isbase = false;
            return QScrollBar::devType();
        } else if (qscrollbar_devtype_callback != nullptr) {
            int callback_ret = qscrollbar_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QScrollBar::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qscrollbar_setvisible_isbase) {
            qscrollbar_setvisible_isbase = false;
            QScrollBar::setVisible(visible);
        } else if (qscrollbar_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qscrollbar_setvisible_callback(this, cbval1);
        } else {
            QScrollBar::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qscrollbar_minimumsizehint_isbase) {
            qscrollbar_minimumsizehint_isbase = false;
            return QScrollBar::minimumSizeHint();
        } else if (qscrollbar_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qscrollbar_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QScrollBar::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qscrollbar_heightforwidth_isbase) {
            qscrollbar_heightforwidth_isbase = false;
            return QScrollBar::heightForWidth(param1);
        } else if (qscrollbar_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qscrollbar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QScrollBar::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qscrollbar_hasheightforwidth_isbase) {
            qscrollbar_hasheightforwidth_isbase = false;
            return QScrollBar::hasHeightForWidth();
        } else if (qscrollbar_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qscrollbar_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QScrollBar::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qscrollbar_paintengine_isbase) {
            qscrollbar_paintengine_isbase = false;
            return QScrollBar::paintEngine();
        } else if (qscrollbar_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qscrollbar_paintengine_callback();
            return callback_ret;
        } else {
            return QScrollBar::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qscrollbar_mousedoubleclickevent_isbase) {
            qscrollbar_mousedoubleclickevent_isbase = false;
            QScrollBar::mouseDoubleClickEvent(event);
        } else if (qscrollbar_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qscrollbar_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QScrollBar::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qscrollbar_keyreleaseevent_isbase) {
            qscrollbar_keyreleaseevent_isbase = false;
            QScrollBar::keyReleaseEvent(event);
        } else if (qscrollbar_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qscrollbar_keyreleaseevent_callback(this, cbval1);
        } else {
            QScrollBar::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qscrollbar_focusinevent_isbase) {
            qscrollbar_focusinevent_isbase = false;
            QScrollBar::focusInEvent(event);
        } else if (qscrollbar_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qscrollbar_focusinevent_callback(this, cbval1);
        } else {
            QScrollBar::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qscrollbar_focusoutevent_isbase) {
            qscrollbar_focusoutevent_isbase = false;
            QScrollBar::focusOutEvent(event);
        } else if (qscrollbar_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qscrollbar_focusoutevent_callback(this, cbval1);
        } else {
            QScrollBar::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qscrollbar_enterevent_isbase) {
            qscrollbar_enterevent_isbase = false;
            QScrollBar::enterEvent(event);
        } else if (qscrollbar_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qscrollbar_enterevent_callback(this, cbval1);
        } else {
            QScrollBar::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qscrollbar_leaveevent_isbase) {
            qscrollbar_leaveevent_isbase = false;
            QScrollBar::leaveEvent(event);
        } else if (qscrollbar_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscrollbar_leaveevent_callback(this, cbval1);
        } else {
            QScrollBar::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qscrollbar_moveevent_isbase) {
            qscrollbar_moveevent_isbase = false;
            QScrollBar::moveEvent(event);
        } else if (qscrollbar_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qscrollbar_moveevent_callback(this, cbval1);
        } else {
            QScrollBar::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qscrollbar_resizeevent_isbase) {
            qscrollbar_resizeevent_isbase = false;
            QScrollBar::resizeEvent(event);
        } else if (qscrollbar_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qscrollbar_resizeevent_callback(this, cbval1);
        } else {
            QScrollBar::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qscrollbar_closeevent_isbase) {
            qscrollbar_closeevent_isbase = false;
            QScrollBar::closeEvent(event);
        } else if (qscrollbar_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qscrollbar_closeevent_callback(this, cbval1);
        } else {
            QScrollBar::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qscrollbar_tabletevent_isbase) {
            qscrollbar_tabletevent_isbase = false;
            QScrollBar::tabletEvent(event);
        } else if (qscrollbar_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qscrollbar_tabletevent_callback(this, cbval1);
        } else {
            QScrollBar::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qscrollbar_actionevent_isbase) {
            qscrollbar_actionevent_isbase = false;
            QScrollBar::actionEvent(event);
        } else if (qscrollbar_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qscrollbar_actionevent_callback(this, cbval1);
        } else {
            QScrollBar::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qscrollbar_dragenterevent_isbase) {
            qscrollbar_dragenterevent_isbase = false;
            QScrollBar::dragEnterEvent(event);
        } else if (qscrollbar_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qscrollbar_dragenterevent_callback(this, cbval1);
        } else {
            QScrollBar::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qscrollbar_dragmoveevent_isbase) {
            qscrollbar_dragmoveevent_isbase = false;
            QScrollBar::dragMoveEvent(event);
        } else if (qscrollbar_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qscrollbar_dragmoveevent_callback(this, cbval1);
        } else {
            QScrollBar::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qscrollbar_dragleaveevent_isbase) {
            qscrollbar_dragleaveevent_isbase = false;
            QScrollBar::dragLeaveEvent(event);
        } else if (qscrollbar_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qscrollbar_dragleaveevent_callback(this, cbval1);
        } else {
            QScrollBar::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qscrollbar_dropevent_isbase) {
            qscrollbar_dropevent_isbase = false;
            QScrollBar::dropEvent(event);
        } else if (qscrollbar_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qscrollbar_dropevent_callback(this, cbval1);
        } else {
            QScrollBar::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qscrollbar_showevent_isbase) {
            qscrollbar_showevent_isbase = false;
            QScrollBar::showEvent(event);
        } else if (qscrollbar_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qscrollbar_showevent_callback(this, cbval1);
        } else {
            QScrollBar::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qscrollbar_nativeevent_isbase) {
            qscrollbar_nativeevent_isbase = false;
            return QScrollBar::nativeEvent(eventType, message, result);
        } else if (qscrollbar_nativeevent_callback != nullptr) {
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

            bool callback_ret = qscrollbar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QScrollBar::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qscrollbar_metric_isbase) {
            qscrollbar_metric_isbase = false;
            return QScrollBar::metric(param1);
        } else if (qscrollbar_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qscrollbar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QScrollBar::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qscrollbar_initpainter_isbase) {
            qscrollbar_initpainter_isbase = false;
            QScrollBar::initPainter(painter);
        } else if (qscrollbar_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qscrollbar_initpainter_callback(this, cbval1);
        } else {
            QScrollBar::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qscrollbar_redirected_isbase) {
            qscrollbar_redirected_isbase = false;
            return QScrollBar::redirected(offset);
        } else if (qscrollbar_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qscrollbar_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QScrollBar::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qscrollbar_sharedpainter_isbase) {
            qscrollbar_sharedpainter_isbase = false;
            return QScrollBar::sharedPainter();
        } else if (qscrollbar_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qscrollbar_sharedpainter_callback();
            return callback_ret;
        } else {
            return QScrollBar::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qscrollbar_inputmethodevent_isbase) {
            qscrollbar_inputmethodevent_isbase = false;
            QScrollBar::inputMethodEvent(param1);
        } else if (qscrollbar_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qscrollbar_inputmethodevent_callback(this, cbval1);
        } else {
            QScrollBar::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qscrollbar_inputmethodquery_isbase) {
            qscrollbar_inputmethodquery_isbase = false;
            return QScrollBar::inputMethodQuery(param1);
        } else if (qscrollbar_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qscrollbar_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QScrollBar::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qscrollbar_focusnextprevchild_isbase) {
            qscrollbar_focusnextprevchild_isbase = false;
            return QScrollBar::focusNextPrevChild(next);
        } else if (qscrollbar_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qscrollbar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QScrollBar::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscrollbar_eventfilter_isbase) {
            qscrollbar_eventfilter_isbase = false;
            return QScrollBar::eventFilter(watched, event);
        } else if (qscrollbar_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscrollbar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QScrollBar::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscrollbar_childevent_isbase) {
            qscrollbar_childevent_isbase = false;
            QScrollBar::childEvent(event);
        } else if (qscrollbar_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscrollbar_childevent_callback(this, cbval1);
        } else {
            QScrollBar::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscrollbar_customevent_isbase) {
            qscrollbar_customevent_isbase = false;
            QScrollBar::customEvent(event);
        } else if (qscrollbar_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscrollbar_customevent_callback(this, cbval1);
        } else {
            QScrollBar::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscrollbar_connectnotify_isbase) {
            qscrollbar_connectnotify_isbase = false;
            QScrollBar::connectNotify(signal);
        } else if (qscrollbar_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscrollbar_connectnotify_callback(this, cbval1);
        } else {
            QScrollBar::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscrollbar_disconnectnotify_isbase) {
            qscrollbar_disconnectnotify_isbase = false;
            QScrollBar::disconnectNotify(signal);
        } else if (qscrollbar_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscrollbar_disconnectnotify_callback(this, cbval1);
        } else {
            QScrollBar::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setRepeatAction(QAbstractSlider::SliderAction action) {
        if (qscrollbar_setrepeataction_isbase) {
            qscrollbar_setrepeataction_isbase = false;
            QScrollBar::setRepeatAction(action);
        } else if (qscrollbar_setrepeataction_callback != nullptr) {
            int cbval1 = static_cast<int>(action);

            qscrollbar_setrepeataction_callback(this, cbval1);
        } else {
            QScrollBar::setRepeatAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractSlider::SliderAction repeatAction() const {
        if (qscrollbar_repeataction_isbase) {
            qscrollbar_repeataction_isbase = false;
            return QScrollBar::repeatAction();
        } else if (qscrollbar_repeataction_callback != nullptr) {
            int callback_ret = qscrollbar_repeataction_callback();
            return static_cast<QAbstractSlider::SliderAction>(callback_ret);
        } else {
            return QScrollBar::repeatAction();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qscrollbar_updatemicrofocus_isbase) {
            qscrollbar_updatemicrofocus_isbase = false;
            QScrollBar::updateMicroFocus();
        } else if (qscrollbar_updatemicrofocus_callback != nullptr) {
            qscrollbar_updatemicrofocus_callback();
        } else {
            QScrollBar::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qscrollbar_create_isbase) {
            qscrollbar_create_isbase = false;
            QScrollBar::create();
        } else if (qscrollbar_create_callback != nullptr) {
            qscrollbar_create_callback();
        } else {
            QScrollBar::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qscrollbar_destroy_isbase) {
            qscrollbar_destroy_isbase = false;
            QScrollBar::destroy();
        } else if (qscrollbar_destroy_callback != nullptr) {
            qscrollbar_destroy_callback();
        } else {
            QScrollBar::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qscrollbar_focusnextchild_isbase) {
            qscrollbar_focusnextchild_isbase = false;
            return QScrollBar::focusNextChild();
        } else if (qscrollbar_focusnextchild_callback != nullptr) {
            bool callback_ret = qscrollbar_focusnextchild_callback();
            return callback_ret;
        } else {
            return QScrollBar::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qscrollbar_focuspreviouschild_isbase) {
            qscrollbar_focuspreviouschild_isbase = false;
            return QScrollBar::focusPreviousChild();
        } else if (qscrollbar_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qscrollbar_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QScrollBar::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscrollbar_sender_isbase) {
            qscrollbar_sender_isbase = false;
            return QScrollBar::sender();
        } else if (qscrollbar_sender_callback != nullptr) {
            QObject* callback_ret = qscrollbar_sender_callback();
            return callback_ret;
        } else {
            return QScrollBar::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscrollbar_sendersignalindex_isbase) {
            qscrollbar_sendersignalindex_isbase = false;
            return QScrollBar::senderSignalIndex();
        } else if (qscrollbar_sendersignalindex_callback != nullptr) {
            int callback_ret = qscrollbar_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QScrollBar::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscrollbar_receivers_isbase) {
            qscrollbar_receivers_isbase = false;
            return QScrollBar::receivers(signal);
        } else if (qscrollbar_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscrollbar_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QScrollBar::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscrollbar_issignalconnected_isbase) {
            qscrollbar_issignalconnected_isbase = false;
            return QScrollBar::isSignalConnected(signal);
        } else if (qscrollbar_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscrollbar_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QScrollBar::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qscrollbar_getdecodedmetricf_isbase) {
            qscrollbar_getdecodedmetricf_isbase = false;
            return QScrollBar::getDecodedMetricF(metricA, metricB);
        } else if (qscrollbar_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qscrollbar_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QScrollBar::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void QScrollBar_WheelEvent(QScrollBar* self, QWheelEvent* param1);
    friend void QScrollBar_QBaseWheelEvent(QScrollBar* self, QWheelEvent* param1);
    friend void QScrollBar_PaintEvent(QScrollBar* self, QPaintEvent* param1);
    friend void QScrollBar_QBasePaintEvent(QScrollBar* self, QPaintEvent* param1);
    friend void QScrollBar_MousePressEvent(QScrollBar* self, QMouseEvent* param1);
    friend void QScrollBar_QBaseMousePressEvent(QScrollBar* self, QMouseEvent* param1);
    friend void QScrollBar_MouseReleaseEvent(QScrollBar* self, QMouseEvent* param1);
    friend void QScrollBar_QBaseMouseReleaseEvent(QScrollBar* self, QMouseEvent* param1);
    friend void QScrollBar_MouseMoveEvent(QScrollBar* self, QMouseEvent* param1);
    friend void QScrollBar_QBaseMouseMoveEvent(QScrollBar* self, QMouseEvent* param1);
    friend void QScrollBar_HideEvent(QScrollBar* self, QHideEvent* param1);
    friend void QScrollBar_QBaseHideEvent(QScrollBar* self, QHideEvent* param1);
    friend void QScrollBar_SliderChange(QScrollBar* self, int change);
    friend void QScrollBar_QBaseSliderChange(QScrollBar* self, int change);
    friend void QScrollBar_ContextMenuEvent(QScrollBar* self, QContextMenuEvent* param1);
    friend void QScrollBar_QBaseContextMenuEvent(QScrollBar* self, QContextMenuEvent* param1);
    friend void QScrollBar_InitStyleOption(const QScrollBar* self, QStyleOptionSlider* option);
    friend void QScrollBar_QBaseInitStyleOption(const QScrollBar* self, QStyleOptionSlider* option);
    friend void QScrollBar_KeyPressEvent(QScrollBar* self, QKeyEvent* ev);
    friend void QScrollBar_QBaseKeyPressEvent(QScrollBar* self, QKeyEvent* ev);
    friend void QScrollBar_TimerEvent(QScrollBar* self, QTimerEvent* param1);
    friend void QScrollBar_QBaseTimerEvent(QScrollBar* self, QTimerEvent* param1);
    friend void QScrollBar_ChangeEvent(QScrollBar* self, QEvent* e);
    friend void QScrollBar_QBaseChangeEvent(QScrollBar* self, QEvent* e);
    friend void QScrollBar_MouseDoubleClickEvent(QScrollBar* self, QMouseEvent* event);
    friend void QScrollBar_QBaseMouseDoubleClickEvent(QScrollBar* self, QMouseEvent* event);
    friend void QScrollBar_KeyReleaseEvent(QScrollBar* self, QKeyEvent* event);
    friend void QScrollBar_QBaseKeyReleaseEvent(QScrollBar* self, QKeyEvent* event);
    friend void QScrollBar_FocusInEvent(QScrollBar* self, QFocusEvent* event);
    friend void QScrollBar_QBaseFocusInEvent(QScrollBar* self, QFocusEvent* event);
    friend void QScrollBar_FocusOutEvent(QScrollBar* self, QFocusEvent* event);
    friend void QScrollBar_QBaseFocusOutEvent(QScrollBar* self, QFocusEvent* event);
    friend void QScrollBar_EnterEvent(QScrollBar* self, QEnterEvent* event);
    friend void QScrollBar_QBaseEnterEvent(QScrollBar* self, QEnterEvent* event);
    friend void QScrollBar_LeaveEvent(QScrollBar* self, QEvent* event);
    friend void QScrollBar_QBaseLeaveEvent(QScrollBar* self, QEvent* event);
    friend void QScrollBar_MoveEvent(QScrollBar* self, QMoveEvent* event);
    friend void QScrollBar_QBaseMoveEvent(QScrollBar* self, QMoveEvent* event);
    friend void QScrollBar_ResizeEvent(QScrollBar* self, QResizeEvent* event);
    friend void QScrollBar_QBaseResizeEvent(QScrollBar* self, QResizeEvent* event);
    friend void QScrollBar_CloseEvent(QScrollBar* self, QCloseEvent* event);
    friend void QScrollBar_QBaseCloseEvent(QScrollBar* self, QCloseEvent* event);
    friend void QScrollBar_TabletEvent(QScrollBar* self, QTabletEvent* event);
    friend void QScrollBar_QBaseTabletEvent(QScrollBar* self, QTabletEvent* event);
    friend void QScrollBar_ActionEvent(QScrollBar* self, QActionEvent* event);
    friend void QScrollBar_QBaseActionEvent(QScrollBar* self, QActionEvent* event);
    friend void QScrollBar_DragEnterEvent(QScrollBar* self, QDragEnterEvent* event);
    friend void QScrollBar_QBaseDragEnterEvent(QScrollBar* self, QDragEnterEvent* event);
    friend void QScrollBar_DragMoveEvent(QScrollBar* self, QDragMoveEvent* event);
    friend void QScrollBar_QBaseDragMoveEvent(QScrollBar* self, QDragMoveEvent* event);
    friend void QScrollBar_DragLeaveEvent(QScrollBar* self, QDragLeaveEvent* event);
    friend void QScrollBar_QBaseDragLeaveEvent(QScrollBar* self, QDragLeaveEvent* event);
    friend void QScrollBar_DropEvent(QScrollBar* self, QDropEvent* event);
    friend void QScrollBar_QBaseDropEvent(QScrollBar* self, QDropEvent* event);
    friend void QScrollBar_ShowEvent(QScrollBar* self, QShowEvent* event);
    friend void QScrollBar_QBaseShowEvent(QScrollBar* self, QShowEvent* event);
    friend bool QScrollBar_NativeEvent(QScrollBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QScrollBar_QBaseNativeEvent(QScrollBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QScrollBar_Metric(const QScrollBar* self, int param1);
    friend int QScrollBar_QBaseMetric(const QScrollBar* self, int param1);
    friend void QScrollBar_InitPainter(const QScrollBar* self, QPainter* painter);
    friend void QScrollBar_QBaseInitPainter(const QScrollBar* self, QPainter* painter);
    friend QPaintDevice* QScrollBar_Redirected(const QScrollBar* self, QPoint* offset);
    friend QPaintDevice* QScrollBar_QBaseRedirected(const QScrollBar* self, QPoint* offset);
    friend QPainter* QScrollBar_SharedPainter(const QScrollBar* self);
    friend QPainter* QScrollBar_QBaseSharedPainter(const QScrollBar* self);
    friend void QScrollBar_InputMethodEvent(QScrollBar* self, QInputMethodEvent* param1);
    friend void QScrollBar_QBaseInputMethodEvent(QScrollBar* self, QInputMethodEvent* param1);
    friend bool QScrollBar_FocusNextPrevChild(QScrollBar* self, bool next);
    friend bool QScrollBar_QBaseFocusNextPrevChild(QScrollBar* self, bool next);
    friend void QScrollBar_ChildEvent(QScrollBar* self, QChildEvent* event);
    friend void QScrollBar_QBaseChildEvent(QScrollBar* self, QChildEvent* event);
    friend void QScrollBar_CustomEvent(QScrollBar* self, QEvent* event);
    friend void QScrollBar_QBaseCustomEvent(QScrollBar* self, QEvent* event);
    friend void QScrollBar_ConnectNotify(QScrollBar* self, const QMetaMethod* signal);
    friend void QScrollBar_QBaseConnectNotify(QScrollBar* self, const QMetaMethod* signal);
    friend void QScrollBar_DisconnectNotify(QScrollBar* self, const QMetaMethod* signal);
    friend void QScrollBar_QBaseDisconnectNotify(QScrollBar* self, const QMetaMethod* signal);
    friend void QScrollBar_SetRepeatAction(QScrollBar* self, int action);
    friend void QScrollBar_QBaseSetRepeatAction(QScrollBar* self, int action);
    friend int QScrollBar_RepeatAction(const QScrollBar* self);
    friend int QScrollBar_QBaseRepeatAction(const QScrollBar* self);
    friend void QScrollBar_UpdateMicroFocus(QScrollBar* self);
    friend void QScrollBar_QBaseUpdateMicroFocus(QScrollBar* self);
    friend void QScrollBar_Create(QScrollBar* self);
    friend void QScrollBar_QBaseCreate(QScrollBar* self);
    friend void QScrollBar_Destroy(QScrollBar* self);
    friend void QScrollBar_QBaseDestroy(QScrollBar* self);
    friend bool QScrollBar_FocusNextChild(QScrollBar* self);
    friend bool QScrollBar_QBaseFocusNextChild(QScrollBar* self);
    friend bool QScrollBar_FocusPreviousChild(QScrollBar* self);
    friend bool QScrollBar_QBaseFocusPreviousChild(QScrollBar* self);
    friend QObject* QScrollBar_Sender(const QScrollBar* self);
    friend QObject* QScrollBar_QBaseSender(const QScrollBar* self);
    friend int QScrollBar_SenderSignalIndex(const QScrollBar* self);
    friend int QScrollBar_QBaseSenderSignalIndex(const QScrollBar* self);
    friend int QScrollBar_Receivers(const QScrollBar* self, const char* signal);
    friend int QScrollBar_QBaseReceivers(const QScrollBar* self, const char* signal);
    friend bool QScrollBar_IsSignalConnected(const QScrollBar* self, const QMetaMethod* signal);
    friend bool QScrollBar_QBaseIsSignalConnected(const QScrollBar* self, const QMetaMethod* signal);
    friend double QScrollBar_GetDecodedMetricF(const QScrollBar* self, int metricA, int metricB);
    friend double QScrollBar_QBaseGetDecodedMetricF(const QScrollBar* self, int metricA, int metricB);
};

#endif
