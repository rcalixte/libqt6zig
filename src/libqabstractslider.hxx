#pragma once
#ifndef SRCC_LIBVIRTUALQABSTRACTSLIDER_H
#define SRCC_LIBVIRTUALQABSTRACTSLIDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractSlider so that we can call protected methods
class VirtualQAbstractSlider final : public QAbstractSlider {

  public:
    // Virtual class boolean flag
    bool isVirtualQAbstractSlider = true;

    // Virtual class public types (including callbacks)
    using QAbstractSlider::SliderChange;
    using QAbstractSlider_Metacall_Callback = int (*)(QAbstractSlider*, int, int, void**);
    using QAbstractSlider_Event_Callback = bool (*)(QAbstractSlider*, QEvent*);
    using QAbstractSlider_SliderChange_Callback = void (*)(QAbstractSlider*, int);
    using QAbstractSlider_KeyPressEvent_Callback = void (*)(QAbstractSlider*, QKeyEvent*);
    using QAbstractSlider_TimerEvent_Callback = void (*)(QAbstractSlider*, QTimerEvent*);
    using QAbstractSlider_WheelEvent_Callback = void (*)(QAbstractSlider*, QWheelEvent*);
    using QAbstractSlider_ChangeEvent_Callback = void (*)(QAbstractSlider*, QEvent*);
    using QAbstractSlider_DevType_Callback = int (*)();
    using QAbstractSlider_SetVisible_Callback = void (*)(QAbstractSlider*, bool);
    using QAbstractSlider_SizeHint_Callback = QSize* (*)();
    using QAbstractSlider_MinimumSizeHint_Callback = QSize* (*)();
    using QAbstractSlider_HeightForWidth_Callback = int (*)(const QAbstractSlider*, int);
    using QAbstractSlider_HasHeightForWidth_Callback = bool (*)();
    using QAbstractSlider_PaintEngine_Callback = QPaintEngine* (*)();
    using QAbstractSlider_MousePressEvent_Callback = void (*)(QAbstractSlider*, QMouseEvent*);
    using QAbstractSlider_MouseReleaseEvent_Callback = void (*)(QAbstractSlider*, QMouseEvent*);
    using QAbstractSlider_MouseDoubleClickEvent_Callback = void (*)(QAbstractSlider*, QMouseEvent*);
    using QAbstractSlider_MouseMoveEvent_Callback = void (*)(QAbstractSlider*, QMouseEvent*);
    using QAbstractSlider_KeyReleaseEvent_Callback = void (*)(QAbstractSlider*, QKeyEvent*);
    using QAbstractSlider_FocusInEvent_Callback = void (*)(QAbstractSlider*, QFocusEvent*);
    using QAbstractSlider_FocusOutEvent_Callback = void (*)(QAbstractSlider*, QFocusEvent*);
    using QAbstractSlider_EnterEvent_Callback = void (*)(QAbstractSlider*, QEnterEvent*);
    using QAbstractSlider_LeaveEvent_Callback = void (*)(QAbstractSlider*, QEvent*);
    using QAbstractSlider_PaintEvent_Callback = void (*)(QAbstractSlider*, QPaintEvent*);
    using QAbstractSlider_MoveEvent_Callback = void (*)(QAbstractSlider*, QMoveEvent*);
    using QAbstractSlider_ResizeEvent_Callback = void (*)(QAbstractSlider*, QResizeEvent*);
    using QAbstractSlider_CloseEvent_Callback = void (*)(QAbstractSlider*, QCloseEvent*);
    using QAbstractSlider_ContextMenuEvent_Callback = void (*)(QAbstractSlider*, QContextMenuEvent*);
    using QAbstractSlider_TabletEvent_Callback = void (*)(QAbstractSlider*, QTabletEvent*);
    using QAbstractSlider_ActionEvent_Callback = void (*)(QAbstractSlider*, QActionEvent*);
    using QAbstractSlider_DragEnterEvent_Callback = void (*)(QAbstractSlider*, QDragEnterEvent*);
    using QAbstractSlider_DragMoveEvent_Callback = void (*)(QAbstractSlider*, QDragMoveEvent*);
    using QAbstractSlider_DragLeaveEvent_Callback = void (*)(QAbstractSlider*, QDragLeaveEvent*);
    using QAbstractSlider_DropEvent_Callback = void (*)(QAbstractSlider*, QDropEvent*);
    using QAbstractSlider_ShowEvent_Callback = void (*)(QAbstractSlider*, QShowEvent*);
    using QAbstractSlider_HideEvent_Callback = void (*)(QAbstractSlider*, QHideEvent*);
    using QAbstractSlider_NativeEvent_Callback = bool (*)(QAbstractSlider*, libqt_string, void*, intptr_t*);
    using QAbstractSlider_Metric_Callback = int (*)(const QAbstractSlider*, int);
    using QAbstractSlider_InitPainter_Callback = void (*)(const QAbstractSlider*, QPainter*);
    using QAbstractSlider_Redirected_Callback = QPaintDevice* (*)(const QAbstractSlider*, QPoint*);
    using QAbstractSlider_SharedPainter_Callback = QPainter* (*)();
    using QAbstractSlider_InputMethodEvent_Callback = void (*)(QAbstractSlider*, QInputMethodEvent*);
    using QAbstractSlider_InputMethodQuery_Callback = QVariant* (*)(const QAbstractSlider*, int);
    using QAbstractSlider_FocusNextPrevChild_Callback = bool (*)(QAbstractSlider*, bool);
    using QAbstractSlider_EventFilter_Callback = bool (*)(QAbstractSlider*, QObject*, QEvent*);
    using QAbstractSlider_ChildEvent_Callback = void (*)(QAbstractSlider*, QChildEvent*);
    using QAbstractSlider_CustomEvent_Callback = void (*)(QAbstractSlider*, QEvent*);
    using QAbstractSlider_ConnectNotify_Callback = void (*)(QAbstractSlider*, QMetaMethod*);
    using QAbstractSlider_DisconnectNotify_Callback = void (*)(QAbstractSlider*, QMetaMethod*);
    using QAbstractSlider_SetRepeatAction_Callback = void (*)(QAbstractSlider*, int);
    using QAbstractSlider_RepeatAction_Callback = int (*)();
    using QAbstractSlider_SetRepeatAction2_Callback = void (*)(QAbstractSlider*, int, int);
    using QAbstractSlider_SetRepeatAction3_Callback = void (*)(QAbstractSlider*, int, int, int);
    using QAbstractSlider_UpdateMicroFocus_Callback = void (*)();
    using QAbstractSlider_Create_Callback = void (*)();
    using QAbstractSlider_Destroy_Callback = void (*)();
    using QAbstractSlider_FocusNextChild_Callback = bool (*)();
    using QAbstractSlider_FocusPreviousChild_Callback = bool (*)();
    using QAbstractSlider_Sender_Callback = QObject* (*)();
    using QAbstractSlider_SenderSignalIndex_Callback = int (*)();
    using QAbstractSlider_Receivers_Callback = int (*)(const QAbstractSlider*, const char*);
    using QAbstractSlider_IsSignalConnected_Callback = bool (*)(const QAbstractSlider*, QMetaMethod*);
    using QAbstractSlider_GetDecodedMetricF_Callback = double (*)(const QAbstractSlider*, int, int);

  protected:
    // Instance callback storage
    QAbstractSlider_Metacall_Callback qabstractslider_metacall_callback = nullptr;
    QAbstractSlider_Event_Callback qabstractslider_event_callback = nullptr;
    QAbstractSlider_SliderChange_Callback qabstractslider_sliderchange_callback = nullptr;
    QAbstractSlider_KeyPressEvent_Callback qabstractslider_keypressevent_callback = nullptr;
    QAbstractSlider_TimerEvent_Callback qabstractslider_timerevent_callback = nullptr;
    QAbstractSlider_WheelEvent_Callback qabstractslider_wheelevent_callback = nullptr;
    QAbstractSlider_ChangeEvent_Callback qabstractslider_changeevent_callback = nullptr;
    QAbstractSlider_DevType_Callback qabstractslider_devtype_callback = nullptr;
    QAbstractSlider_SetVisible_Callback qabstractslider_setvisible_callback = nullptr;
    QAbstractSlider_SizeHint_Callback qabstractslider_sizehint_callback = nullptr;
    QAbstractSlider_MinimumSizeHint_Callback qabstractslider_minimumsizehint_callback = nullptr;
    QAbstractSlider_HeightForWidth_Callback qabstractslider_heightforwidth_callback = nullptr;
    QAbstractSlider_HasHeightForWidth_Callback qabstractslider_hasheightforwidth_callback = nullptr;
    QAbstractSlider_PaintEngine_Callback qabstractslider_paintengine_callback = nullptr;
    QAbstractSlider_MousePressEvent_Callback qabstractslider_mousepressevent_callback = nullptr;
    QAbstractSlider_MouseReleaseEvent_Callback qabstractslider_mousereleaseevent_callback = nullptr;
    QAbstractSlider_MouseDoubleClickEvent_Callback qabstractslider_mousedoubleclickevent_callback = nullptr;
    QAbstractSlider_MouseMoveEvent_Callback qabstractslider_mousemoveevent_callback = nullptr;
    QAbstractSlider_KeyReleaseEvent_Callback qabstractslider_keyreleaseevent_callback = nullptr;
    QAbstractSlider_FocusInEvent_Callback qabstractslider_focusinevent_callback = nullptr;
    QAbstractSlider_FocusOutEvent_Callback qabstractslider_focusoutevent_callback = nullptr;
    QAbstractSlider_EnterEvent_Callback qabstractslider_enterevent_callback = nullptr;
    QAbstractSlider_LeaveEvent_Callback qabstractslider_leaveevent_callback = nullptr;
    QAbstractSlider_PaintEvent_Callback qabstractslider_paintevent_callback = nullptr;
    QAbstractSlider_MoveEvent_Callback qabstractslider_moveevent_callback = nullptr;
    QAbstractSlider_ResizeEvent_Callback qabstractslider_resizeevent_callback = nullptr;
    QAbstractSlider_CloseEvent_Callback qabstractslider_closeevent_callback = nullptr;
    QAbstractSlider_ContextMenuEvent_Callback qabstractslider_contextmenuevent_callback = nullptr;
    QAbstractSlider_TabletEvent_Callback qabstractslider_tabletevent_callback = nullptr;
    QAbstractSlider_ActionEvent_Callback qabstractslider_actionevent_callback = nullptr;
    QAbstractSlider_DragEnterEvent_Callback qabstractslider_dragenterevent_callback = nullptr;
    QAbstractSlider_DragMoveEvent_Callback qabstractslider_dragmoveevent_callback = nullptr;
    QAbstractSlider_DragLeaveEvent_Callback qabstractslider_dragleaveevent_callback = nullptr;
    QAbstractSlider_DropEvent_Callback qabstractslider_dropevent_callback = nullptr;
    QAbstractSlider_ShowEvent_Callback qabstractslider_showevent_callback = nullptr;
    QAbstractSlider_HideEvent_Callback qabstractslider_hideevent_callback = nullptr;
    QAbstractSlider_NativeEvent_Callback qabstractslider_nativeevent_callback = nullptr;
    QAbstractSlider_Metric_Callback qabstractslider_metric_callback = nullptr;
    QAbstractSlider_InitPainter_Callback qabstractslider_initpainter_callback = nullptr;
    QAbstractSlider_Redirected_Callback qabstractslider_redirected_callback = nullptr;
    QAbstractSlider_SharedPainter_Callback qabstractslider_sharedpainter_callback = nullptr;
    QAbstractSlider_InputMethodEvent_Callback qabstractslider_inputmethodevent_callback = nullptr;
    QAbstractSlider_InputMethodQuery_Callback qabstractslider_inputmethodquery_callback = nullptr;
    QAbstractSlider_FocusNextPrevChild_Callback qabstractslider_focusnextprevchild_callback = nullptr;
    QAbstractSlider_EventFilter_Callback qabstractslider_eventfilter_callback = nullptr;
    QAbstractSlider_ChildEvent_Callback qabstractslider_childevent_callback = nullptr;
    QAbstractSlider_CustomEvent_Callback qabstractslider_customevent_callback = nullptr;
    QAbstractSlider_ConnectNotify_Callback qabstractslider_connectnotify_callback = nullptr;
    QAbstractSlider_DisconnectNotify_Callback qabstractslider_disconnectnotify_callback = nullptr;
    QAbstractSlider_SetRepeatAction_Callback qabstractslider_setrepeataction_callback = nullptr;
    QAbstractSlider_RepeatAction_Callback qabstractslider_repeataction_callback = nullptr;
    QAbstractSlider_SetRepeatAction2_Callback qabstractslider_setrepeataction2_callback = nullptr;
    QAbstractSlider_SetRepeatAction3_Callback qabstractslider_setrepeataction3_callback = nullptr;
    QAbstractSlider_UpdateMicroFocus_Callback qabstractslider_updatemicrofocus_callback = nullptr;
    QAbstractSlider_Create_Callback qabstractslider_create_callback = nullptr;
    QAbstractSlider_Destroy_Callback qabstractslider_destroy_callback = nullptr;
    QAbstractSlider_FocusNextChild_Callback qabstractslider_focusnextchild_callback = nullptr;
    QAbstractSlider_FocusPreviousChild_Callback qabstractslider_focuspreviouschild_callback = nullptr;
    QAbstractSlider_Sender_Callback qabstractslider_sender_callback = nullptr;
    QAbstractSlider_SenderSignalIndex_Callback qabstractslider_sendersignalindex_callback = nullptr;
    QAbstractSlider_Receivers_Callback qabstractslider_receivers_callback = nullptr;
    QAbstractSlider_IsSignalConnected_Callback qabstractslider_issignalconnected_callback = nullptr;
    QAbstractSlider_GetDecodedMetricF_Callback qabstractslider_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qabstractslider_metacall_isbase = false;
    mutable bool qabstractslider_event_isbase = false;
    mutable bool qabstractslider_sliderchange_isbase = false;
    mutable bool qabstractslider_keypressevent_isbase = false;
    mutable bool qabstractslider_timerevent_isbase = false;
    mutable bool qabstractslider_wheelevent_isbase = false;
    mutable bool qabstractslider_changeevent_isbase = false;
    mutable bool qabstractslider_devtype_isbase = false;
    mutable bool qabstractslider_setvisible_isbase = false;
    mutable bool qabstractslider_sizehint_isbase = false;
    mutable bool qabstractslider_minimumsizehint_isbase = false;
    mutable bool qabstractslider_heightforwidth_isbase = false;
    mutable bool qabstractslider_hasheightforwidth_isbase = false;
    mutable bool qabstractslider_paintengine_isbase = false;
    mutable bool qabstractslider_mousepressevent_isbase = false;
    mutable bool qabstractslider_mousereleaseevent_isbase = false;
    mutable bool qabstractslider_mousedoubleclickevent_isbase = false;
    mutable bool qabstractslider_mousemoveevent_isbase = false;
    mutable bool qabstractslider_keyreleaseevent_isbase = false;
    mutable bool qabstractslider_focusinevent_isbase = false;
    mutable bool qabstractslider_focusoutevent_isbase = false;
    mutable bool qabstractslider_enterevent_isbase = false;
    mutable bool qabstractslider_leaveevent_isbase = false;
    mutable bool qabstractslider_paintevent_isbase = false;
    mutable bool qabstractslider_moveevent_isbase = false;
    mutable bool qabstractslider_resizeevent_isbase = false;
    mutable bool qabstractslider_closeevent_isbase = false;
    mutable bool qabstractslider_contextmenuevent_isbase = false;
    mutable bool qabstractslider_tabletevent_isbase = false;
    mutable bool qabstractslider_actionevent_isbase = false;
    mutable bool qabstractslider_dragenterevent_isbase = false;
    mutable bool qabstractslider_dragmoveevent_isbase = false;
    mutable bool qabstractslider_dragleaveevent_isbase = false;
    mutable bool qabstractslider_dropevent_isbase = false;
    mutable bool qabstractslider_showevent_isbase = false;
    mutable bool qabstractslider_hideevent_isbase = false;
    mutable bool qabstractslider_nativeevent_isbase = false;
    mutable bool qabstractslider_metric_isbase = false;
    mutable bool qabstractslider_initpainter_isbase = false;
    mutable bool qabstractslider_redirected_isbase = false;
    mutable bool qabstractslider_sharedpainter_isbase = false;
    mutable bool qabstractslider_inputmethodevent_isbase = false;
    mutable bool qabstractslider_inputmethodquery_isbase = false;
    mutable bool qabstractslider_focusnextprevchild_isbase = false;
    mutable bool qabstractslider_eventfilter_isbase = false;
    mutable bool qabstractslider_childevent_isbase = false;
    mutable bool qabstractslider_customevent_isbase = false;
    mutable bool qabstractslider_connectnotify_isbase = false;
    mutable bool qabstractslider_disconnectnotify_isbase = false;
    mutable bool qabstractslider_setrepeataction_isbase = false;
    mutable bool qabstractslider_repeataction_isbase = false;
    mutable bool qabstractslider_setrepeataction2_isbase = false;
    mutable bool qabstractslider_setrepeataction3_isbase = false;
    mutable bool qabstractslider_updatemicrofocus_isbase = false;
    mutable bool qabstractslider_create_isbase = false;
    mutable bool qabstractslider_destroy_isbase = false;
    mutable bool qabstractslider_focusnextchild_isbase = false;
    mutable bool qabstractslider_focuspreviouschild_isbase = false;
    mutable bool qabstractslider_sender_isbase = false;
    mutable bool qabstractslider_sendersignalindex_isbase = false;
    mutable bool qabstractslider_receivers_isbase = false;
    mutable bool qabstractslider_issignalconnected_isbase = false;
    mutable bool qabstractslider_getdecodedmetricf_isbase = false;

  public:
    VirtualQAbstractSlider(QWidget* parent) : QAbstractSlider(parent) {};
    VirtualQAbstractSlider() : QAbstractSlider() {};

    ~VirtualQAbstractSlider() {
        qabstractslider_metacall_callback = nullptr;
        qabstractslider_event_callback = nullptr;
        qabstractslider_sliderchange_callback = nullptr;
        qabstractslider_keypressevent_callback = nullptr;
        qabstractslider_timerevent_callback = nullptr;
        qabstractslider_wheelevent_callback = nullptr;
        qabstractslider_changeevent_callback = nullptr;
        qabstractslider_devtype_callback = nullptr;
        qabstractslider_setvisible_callback = nullptr;
        qabstractslider_sizehint_callback = nullptr;
        qabstractslider_minimumsizehint_callback = nullptr;
        qabstractslider_heightforwidth_callback = nullptr;
        qabstractslider_hasheightforwidth_callback = nullptr;
        qabstractslider_paintengine_callback = nullptr;
        qabstractslider_mousepressevent_callback = nullptr;
        qabstractslider_mousereleaseevent_callback = nullptr;
        qabstractslider_mousedoubleclickevent_callback = nullptr;
        qabstractslider_mousemoveevent_callback = nullptr;
        qabstractslider_keyreleaseevent_callback = nullptr;
        qabstractslider_focusinevent_callback = nullptr;
        qabstractslider_focusoutevent_callback = nullptr;
        qabstractslider_enterevent_callback = nullptr;
        qabstractslider_leaveevent_callback = nullptr;
        qabstractslider_paintevent_callback = nullptr;
        qabstractslider_moveevent_callback = nullptr;
        qabstractslider_resizeevent_callback = nullptr;
        qabstractslider_closeevent_callback = nullptr;
        qabstractslider_contextmenuevent_callback = nullptr;
        qabstractslider_tabletevent_callback = nullptr;
        qabstractslider_actionevent_callback = nullptr;
        qabstractslider_dragenterevent_callback = nullptr;
        qabstractslider_dragmoveevent_callback = nullptr;
        qabstractslider_dragleaveevent_callback = nullptr;
        qabstractslider_dropevent_callback = nullptr;
        qabstractslider_showevent_callback = nullptr;
        qabstractslider_hideevent_callback = nullptr;
        qabstractslider_nativeevent_callback = nullptr;
        qabstractslider_metric_callback = nullptr;
        qabstractslider_initpainter_callback = nullptr;
        qabstractslider_redirected_callback = nullptr;
        qabstractslider_sharedpainter_callback = nullptr;
        qabstractslider_inputmethodevent_callback = nullptr;
        qabstractslider_inputmethodquery_callback = nullptr;
        qabstractslider_focusnextprevchild_callback = nullptr;
        qabstractslider_eventfilter_callback = nullptr;
        qabstractslider_childevent_callback = nullptr;
        qabstractslider_customevent_callback = nullptr;
        qabstractslider_connectnotify_callback = nullptr;
        qabstractslider_disconnectnotify_callback = nullptr;
        qabstractslider_setrepeataction_callback = nullptr;
        qabstractslider_repeataction_callback = nullptr;
        qabstractslider_setrepeataction2_callback = nullptr;
        qabstractslider_setrepeataction3_callback = nullptr;
        qabstractslider_updatemicrofocus_callback = nullptr;
        qabstractslider_create_callback = nullptr;
        qabstractslider_destroy_callback = nullptr;
        qabstractslider_focusnextchild_callback = nullptr;
        qabstractslider_focuspreviouschild_callback = nullptr;
        qabstractslider_sender_callback = nullptr;
        qabstractslider_sendersignalindex_callback = nullptr;
        qabstractslider_receivers_callback = nullptr;
        qabstractslider_issignalconnected_callback = nullptr;
        qabstractslider_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQAbstractSlider_Metacall_Callback(QAbstractSlider_Metacall_Callback cb) { qabstractslider_metacall_callback = cb; }
    inline void setQAbstractSlider_Event_Callback(QAbstractSlider_Event_Callback cb) { qabstractslider_event_callback = cb; }
    inline void setQAbstractSlider_SliderChange_Callback(QAbstractSlider_SliderChange_Callback cb) { qabstractslider_sliderchange_callback = cb; }
    inline void setQAbstractSlider_KeyPressEvent_Callback(QAbstractSlider_KeyPressEvent_Callback cb) { qabstractslider_keypressevent_callback = cb; }
    inline void setQAbstractSlider_TimerEvent_Callback(QAbstractSlider_TimerEvent_Callback cb) { qabstractslider_timerevent_callback = cb; }
    inline void setQAbstractSlider_WheelEvent_Callback(QAbstractSlider_WheelEvent_Callback cb) { qabstractslider_wheelevent_callback = cb; }
    inline void setQAbstractSlider_ChangeEvent_Callback(QAbstractSlider_ChangeEvent_Callback cb) { qabstractslider_changeevent_callback = cb; }
    inline void setQAbstractSlider_DevType_Callback(QAbstractSlider_DevType_Callback cb) { qabstractslider_devtype_callback = cb; }
    inline void setQAbstractSlider_SetVisible_Callback(QAbstractSlider_SetVisible_Callback cb) { qabstractslider_setvisible_callback = cb; }
    inline void setQAbstractSlider_SizeHint_Callback(QAbstractSlider_SizeHint_Callback cb) { qabstractslider_sizehint_callback = cb; }
    inline void setQAbstractSlider_MinimumSizeHint_Callback(QAbstractSlider_MinimumSizeHint_Callback cb) { qabstractslider_minimumsizehint_callback = cb; }
    inline void setQAbstractSlider_HeightForWidth_Callback(QAbstractSlider_HeightForWidth_Callback cb) { qabstractslider_heightforwidth_callback = cb; }
    inline void setQAbstractSlider_HasHeightForWidth_Callback(QAbstractSlider_HasHeightForWidth_Callback cb) { qabstractslider_hasheightforwidth_callback = cb; }
    inline void setQAbstractSlider_PaintEngine_Callback(QAbstractSlider_PaintEngine_Callback cb) { qabstractslider_paintengine_callback = cb; }
    inline void setQAbstractSlider_MousePressEvent_Callback(QAbstractSlider_MousePressEvent_Callback cb) { qabstractslider_mousepressevent_callback = cb; }
    inline void setQAbstractSlider_MouseReleaseEvent_Callback(QAbstractSlider_MouseReleaseEvent_Callback cb) { qabstractslider_mousereleaseevent_callback = cb; }
    inline void setQAbstractSlider_MouseDoubleClickEvent_Callback(QAbstractSlider_MouseDoubleClickEvent_Callback cb) { qabstractslider_mousedoubleclickevent_callback = cb; }
    inline void setQAbstractSlider_MouseMoveEvent_Callback(QAbstractSlider_MouseMoveEvent_Callback cb) { qabstractslider_mousemoveevent_callback = cb; }
    inline void setQAbstractSlider_KeyReleaseEvent_Callback(QAbstractSlider_KeyReleaseEvent_Callback cb) { qabstractslider_keyreleaseevent_callback = cb; }
    inline void setQAbstractSlider_FocusInEvent_Callback(QAbstractSlider_FocusInEvent_Callback cb) { qabstractslider_focusinevent_callback = cb; }
    inline void setQAbstractSlider_FocusOutEvent_Callback(QAbstractSlider_FocusOutEvent_Callback cb) { qabstractslider_focusoutevent_callback = cb; }
    inline void setQAbstractSlider_EnterEvent_Callback(QAbstractSlider_EnterEvent_Callback cb) { qabstractslider_enterevent_callback = cb; }
    inline void setQAbstractSlider_LeaveEvent_Callback(QAbstractSlider_LeaveEvent_Callback cb) { qabstractslider_leaveevent_callback = cb; }
    inline void setQAbstractSlider_PaintEvent_Callback(QAbstractSlider_PaintEvent_Callback cb) { qabstractslider_paintevent_callback = cb; }
    inline void setQAbstractSlider_MoveEvent_Callback(QAbstractSlider_MoveEvent_Callback cb) { qabstractslider_moveevent_callback = cb; }
    inline void setQAbstractSlider_ResizeEvent_Callback(QAbstractSlider_ResizeEvent_Callback cb) { qabstractslider_resizeevent_callback = cb; }
    inline void setQAbstractSlider_CloseEvent_Callback(QAbstractSlider_CloseEvent_Callback cb) { qabstractslider_closeevent_callback = cb; }
    inline void setQAbstractSlider_ContextMenuEvent_Callback(QAbstractSlider_ContextMenuEvent_Callback cb) { qabstractslider_contextmenuevent_callback = cb; }
    inline void setQAbstractSlider_TabletEvent_Callback(QAbstractSlider_TabletEvent_Callback cb) { qabstractslider_tabletevent_callback = cb; }
    inline void setQAbstractSlider_ActionEvent_Callback(QAbstractSlider_ActionEvent_Callback cb) { qabstractslider_actionevent_callback = cb; }
    inline void setQAbstractSlider_DragEnterEvent_Callback(QAbstractSlider_DragEnterEvent_Callback cb) { qabstractslider_dragenterevent_callback = cb; }
    inline void setQAbstractSlider_DragMoveEvent_Callback(QAbstractSlider_DragMoveEvent_Callback cb) { qabstractslider_dragmoveevent_callback = cb; }
    inline void setQAbstractSlider_DragLeaveEvent_Callback(QAbstractSlider_DragLeaveEvent_Callback cb) { qabstractslider_dragleaveevent_callback = cb; }
    inline void setQAbstractSlider_DropEvent_Callback(QAbstractSlider_DropEvent_Callback cb) { qabstractslider_dropevent_callback = cb; }
    inline void setQAbstractSlider_ShowEvent_Callback(QAbstractSlider_ShowEvent_Callback cb) { qabstractslider_showevent_callback = cb; }
    inline void setQAbstractSlider_HideEvent_Callback(QAbstractSlider_HideEvent_Callback cb) { qabstractslider_hideevent_callback = cb; }
    inline void setQAbstractSlider_NativeEvent_Callback(QAbstractSlider_NativeEvent_Callback cb) { qabstractslider_nativeevent_callback = cb; }
    inline void setQAbstractSlider_Metric_Callback(QAbstractSlider_Metric_Callback cb) { qabstractslider_metric_callback = cb; }
    inline void setQAbstractSlider_InitPainter_Callback(QAbstractSlider_InitPainter_Callback cb) { qabstractslider_initpainter_callback = cb; }
    inline void setQAbstractSlider_Redirected_Callback(QAbstractSlider_Redirected_Callback cb) { qabstractslider_redirected_callback = cb; }
    inline void setQAbstractSlider_SharedPainter_Callback(QAbstractSlider_SharedPainter_Callback cb) { qabstractslider_sharedpainter_callback = cb; }
    inline void setQAbstractSlider_InputMethodEvent_Callback(QAbstractSlider_InputMethodEvent_Callback cb) { qabstractslider_inputmethodevent_callback = cb; }
    inline void setQAbstractSlider_InputMethodQuery_Callback(QAbstractSlider_InputMethodQuery_Callback cb) { qabstractslider_inputmethodquery_callback = cb; }
    inline void setQAbstractSlider_FocusNextPrevChild_Callback(QAbstractSlider_FocusNextPrevChild_Callback cb) { qabstractslider_focusnextprevchild_callback = cb; }
    inline void setQAbstractSlider_EventFilter_Callback(QAbstractSlider_EventFilter_Callback cb) { qabstractslider_eventfilter_callback = cb; }
    inline void setQAbstractSlider_ChildEvent_Callback(QAbstractSlider_ChildEvent_Callback cb) { qabstractslider_childevent_callback = cb; }
    inline void setQAbstractSlider_CustomEvent_Callback(QAbstractSlider_CustomEvent_Callback cb) { qabstractslider_customevent_callback = cb; }
    inline void setQAbstractSlider_ConnectNotify_Callback(QAbstractSlider_ConnectNotify_Callback cb) { qabstractslider_connectnotify_callback = cb; }
    inline void setQAbstractSlider_DisconnectNotify_Callback(QAbstractSlider_DisconnectNotify_Callback cb) { qabstractslider_disconnectnotify_callback = cb; }
    inline void setQAbstractSlider_SetRepeatAction_Callback(QAbstractSlider_SetRepeatAction_Callback cb) { qabstractslider_setrepeataction_callback = cb; }
    inline void setQAbstractSlider_RepeatAction_Callback(QAbstractSlider_RepeatAction_Callback cb) { qabstractslider_repeataction_callback = cb; }
    inline void setQAbstractSlider_SetRepeatAction2_Callback(QAbstractSlider_SetRepeatAction2_Callback cb) { qabstractslider_setrepeataction2_callback = cb; }
    inline void setQAbstractSlider_SetRepeatAction3_Callback(QAbstractSlider_SetRepeatAction3_Callback cb) { qabstractslider_setrepeataction3_callback = cb; }
    inline void setQAbstractSlider_UpdateMicroFocus_Callback(QAbstractSlider_UpdateMicroFocus_Callback cb) { qabstractslider_updatemicrofocus_callback = cb; }
    inline void setQAbstractSlider_Create_Callback(QAbstractSlider_Create_Callback cb) { qabstractslider_create_callback = cb; }
    inline void setQAbstractSlider_Destroy_Callback(QAbstractSlider_Destroy_Callback cb) { qabstractslider_destroy_callback = cb; }
    inline void setQAbstractSlider_FocusNextChild_Callback(QAbstractSlider_FocusNextChild_Callback cb) { qabstractslider_focusnextchild_callback = cb; }
    inline void setQAbstractSlider_FocusPreviousChild_Callback(QAbstractSlider_FocusPreviousChild_Callback cb) { qabstractslider_focuspreviouschild_callback = cb; }
    inline void setQAbstractSlider_Sender_Callback(QAbstractSlider_Sender_Callback cb) { qabstractslider_sender_callback = cb; }
    inline void setQAbstractSlider_SenderSignalIndex_Callback(QAbstractSlider_SenderSignalIndex_Callback cb) { qabstractslider_sendersignalindex_callback = cb; }
    inline void setQAbstractSlider_Receivers_Callback(QAbstractSlider_Receivers_Callback cb) { qabstractslider_receivers_callback = cb; }
    inline void setQAbstractSlider_IsSignalConnected_Callback(QAbstractSlider_IsSignalConnected_Callback cb) { qabstractslider_issignalconnected_callback = cb; }
    inline void setQAbstractSlider_GetDecodedMetricF_Callback(QAbstractSlider_GetDecodedMetricF_Callback cb) { qabstractslider_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQAbstractSlider_Metacall_IsBase(bool value) const { qabstractslider_metacall_isbase = value; }
    inline void setQAbstractSlider_Event_IsBase(bool value) const { qabstractslider_event_isbase = value; }
    inline void setQAbstractSlider_SliderChange_IsBase(bool value) const { qabstractslider_sliderchange_isbase = value; }
    inline void setQAbstractSlider_KeyPressEvent_IsBase(bool value) const { qabstractslider_keypressevent_isbase = value; }
    inline void setQAbstractSlider_TimerEvent_IsBase(bool value) const { qabstractslider_timerevent_isbase = value; }
    inline void setQAbstractSlider_WheelEvent_IsBase(bool value) const { qabstractslider_wheelevent_isbase = value; }
    inline void setQAbstractSlider_ChangeEvent_IsBase(bool value) const { qabstractslider_changeevent_isbase = value; }
    inline void setQAbstractSlider_DevType_IsBase(bool value) const { qabstractslider_devtype_isbase = value; }
    inline void setQAbstractSlider_SetVisible_IsBase(bool value) const { qabstractslider_setvisible_isbase = value; }
    inline void setQAbstractSlider_SizeHint_IsBase(bool value) const { qabstractslider_sizehint_isbase = value; }
    inline void setQAbstractSlider_MinimumSizeHint_IsBase(bool value) const { qabstractslider_minimumsizehint_isbase = value; }
    inline void setQAbstractSlider_HeightForWidth_IsBase(bool value) const { qabstractslider_heightforwidth_isbase = value; }
    inline void setQAbstractSlider_HasHeightForWidth_IsBase(bool value) const { qabstractslider_hasheightforwidth_isbase = value; }
    inline void setQAbstractSlider_PaintEngine_IsBase(bool value) const { qabstractslider_paintengine_isbase = value; }
    inline void setQAbstractSlider_MousePressEvent_IsBase(bool value) const { qabstractslider_mousepressevent_isbase = value; }
    inline void setQAbstractSlider_MouseReleaseEvent_IsBase(bool value) const { qabstractslider_mousereleaseevent_isbase = value; }
    inline void setQAbstractSlider_MouseDoubleClickEvent_IsBase(bool value) const { qabstractslider_mousedoubleclickevent_isbase = value; }
    inline void setQAbstractSlider_MouseMoveEvent_IsBase(bool value) const { qabstractslider_mousemoveevent_isbase = value; }
    inline void setQAbstractSlider_KeyReleaseEvent_IsBase(bool value) const { qabstractslider_keyreleaseevent_isbase = value; }
    inline void setQAbstractSlider_FocusInEvent_IsBase(bool value) const { qabstractslider_focusinevent_isbase = value; }
    inline void setQAbstractSlider_FocusOutEvent_IsBase(bool value) const { qabstractslider_focusoutevent_isbase = value; }
    inline void setQAbstractSlider_EnterEvent_IsBase(bool value) const { qabstractslider_enterevent_isbase = value; }
    inline void setQAbstractSlider_LeaveEvent_IsBase(bool value) const { qabstractslider_leaveevent_isbase = value; }
    inline void setQAbstractSlider_PaintEvent_IsBase(bool value) const { qabstractslider_paintevent_isbase = value; }
    inline void setQAbstractSlider_MoveEvent_IsBase(bool value) const { qabstractslider_moveevent_isbase = value; }
    inline void setQAbstractSlider_ResizeEvent_IsBase(bool value) const { qabstractslider_resizeevent_isbase = value; }
    inline void setQAbstractSlider_CloseEvent_IsBase(bool value) const { qabstractslider_closeevent_isbase = value; }
    inline void setQAbstractSlider_ContextMenuEvent_IsBase(bool value) const { qabstractslider_contextmenuevent_isbase = value; }
    inline void setQAbstractSlider_TabletEvent_IsBase(bool value) const { qabstractslider_tabletevent_isbase = value; }
    inline void setQAbstractSlider_ActionEvent_IsBase(bool value) const { qabstractslider_actionevent_isbase = value; }
    inline void setQAbstractSlider_DragEnterEvent_IsBase(bool value) const { qabstractslider_dragenterevent_isbase = value; }
    inline void setQAbstractSlider_DragMoveEvent_IsBase(bool value) const { qabstractslider_dragmoveevent_isbase = value; }
    inline void setQAbstractSlider_DragLeaveEvent_IsBase(bool value) const { qabstractslider_dragleaveevent_isbase = value; }
    inline void setQAbstractSlider_DropEvent_IsBase(bool value) const { qabstractslider_dropevent_isbase = value; }
    inline void setQAbstractSlider_ShowEvent_IsBase(bool value) const { qabstractslider_showevent_isbase = value; }
    inline void setQAbstractSlider_HideEvent_IsBase(bool value) const { qabstractslider_hideevent_isbase = value; }
    inline void setQAbstractSlider_NativeEvent_IsBase(bool value) const { qabstractslider_nativeevent_isbase = value; }
    inline void setQAbstractSlider_Metric_IsBase(bool value) const { qabstractslider_metric_isbase = value; }
    inline void setQAbstractSlider_InitPainter_IsBase(bool value) const { qabstractslider_initpainter_isbase = value; }
    inline void setQAbstractSlider_Redirected_IsBase(bool value) const { qabstractslider_redirected_isbase = value; }
    inline void setQAbstractSlider_SharedPainter_IsBase(bool value) const { qabstractslider_sharedpainter_isbase = value; }
    inline void setQAbstractSlider_InputMethodEvent_IsBase(bool value) const { qabstractslider_inputmethodevent_isbase = value; }
    inline void setQAbstractSlider_InputMethodQuery_IsBase(bool value) const { qabstractslider_inputmethodquery_isbase = value; }
    inline void setQAbstractSlider_FocusNextPrevChild_IsBase(bool value) const { qabstractslider_focusnextprevchild_isbase = value; }
    inline void setQAbstractSlider_EventFilter_IsBase(bool value) const { qabstractslider_eventfilter_isbase = value; }
    inline void setQAbstractSlider_ChildEvent_IsBase(bool value) const { qabstractslider_childevent_isbase = value; }
    inline void setQAbstractSlider_CustomEvent_IsBase(bool value) const { qabstractslider_customevent_isbase = value; }
    inline void setQAbstractSlider_ConnectNotify_IsBase(bool value) const { qabstractslider_connectnotify_isbase = value; }
    inline void setQAbstractSlider_DisconnectNotify_IsBase(bool value) const { qabstractslider_disconnectnotify_isbase = value; }
    inline void setQAbstractSlider_SetRepeatAction_IsBase(bool value) const { qabstractslider_setrepeataction_isbase = value; }
    inline void setQAbstractSlider_RepeatAction_IsBase(bool value) const { qabstractslider_repeataction_isbase = value; }
    inline void setQAbstractSlider_SetRepeatAction2_IsBase(bool value) const { qabstractslider_setrepeataction2_isbase = value; }
    inline void setQAbstractSlider_SetRepeatAction3_IsBase(bool value) const { qabstractslider_setrepeataction3_isbase = value; }
    inline void setQAbstractSlider_UpdateMicroFocus_IsBase(bool value) const { qabstractslider_updatemicrofocus_isbase = value; }
    inline void setQAbstractSlider_Create_IsBase(bool value) const { qabstractslider_create_isbase = value; }
    inline void setQAbstractSlider_Destroy_IsBase(bool value) const { qabstractslider_destroy_isbase = value; }
    inline void setQAbstractSlider_FocusNextChild_IsBase(bool value) const { qabstractslider_focusnextchild_isbase = value; }
    inline void setQAbstractSlider_FocusPreviousChild_IsBase(bool value) const { qabstractslider_focuspreviouschild_isbase = value; }
    inline void setQAbstractSlider_Sender_IsBase(bool value) const { qabstractslider_sender_isbase = value; }
    inline void setQAbstractSlider_SenderSignalIndex_IsBase(bool value) const { qabstractslider_sendersignalindex_isbase = value; }
    inline void setQAbstractSlider_Receivers_IsBase(bool value) const { qabstractslider_receivers_isbase = value; }
    inline void setQAbstractSlider_IsSignalConnected_IsBase(bool value) const { qabstractslider_issignalconnected_isbase = value; }
    inline void setQAbstractSlider_GetDecodedMetricF_IsBase(bool value) const { qabstractslider_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractslider_metacall_isbase) {
            qabstractslider_metacall_isbase = false;
            return QAbstractSlider::qt_metacall(param1, param2, param3);
        } else if (qabstractslider_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qabstractslider_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractSlider::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qabstractslider_event_isbase) {
            qabstractslider_event_isbase = false;
            return QAbstractSlider::event(e);
        } else if (qabstractslider_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qabstractslider_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractSlider::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sliderChange(QAbstractSlider::SliderChange change) override {
        if (qabstractslider_sliderchange_isbase) {
            qabstractslider_sliderchange_isbase = false;
            QAbstractSlider::sliderChange(change);
        } else if (qabstractslider_sliderchange_callback != nullptr) {
            int cbval1 = static_cast<int>(change);

            qabstractslider_sliderchange_callback(this, cbval1);
        } else {
            QAbstractSlider::sliderChange(change);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (qabstractslider_keypressevent_isbase) {
            qabstractslider_keypressevent_isbase = false;
            QAbstractSlider::keyPressEvent(ev);
        } else if (qabstractslider_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = ev;

            qabstractslider_keypressevent_callback(this, cbval1);
        } else {
            QAbstractSlider::keyPressEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qabstractslider_timerevent_isbase) {
            qabstractslider_timerevent_isbase = false;
            QAbstractSlider::timerEvent(param1);
        } else if (qabstractslider_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = param1;

            qabstractslider_timerevent_callback(this, cbval1);
        } else {
            QAbstractSlider::timerEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qabstractslider_wheelevent_isbase) {
            qabstractslider_wheelevent_isbase = false;
            QAbstractSlider::wheelEvent(e);
        } else if (qabstractslider_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = e;

            qabstractslider_wheelevent_callback(this, cbval1);
        } else {
            QAbstractSlider::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qabstractslider_changeevent_isbase) {
            qabstractslider_changeevent_isbase = false;
            QAbstractSlider::changeEvent(e);
        } else if (qabstractslider_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            qabstractslider_changeevent_callback(this, cbval1);
        } else {
            QAbstractSlider::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qabstractslider_devtype_isbase) {
            qabstractslider_devtype_isbase = false;
            return QAbstractSlider::devType();
        } else if (qabstractslider_devtype_callback != nullptr) {
            int callback_ret = qabstractslider_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractSlider::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qabstractslider_setvisible_isbase) {
            qabstractslider_setvisible_isbase = false;
            QAbstractSlider::setVisible(visible);
        } else if (qabstractslider_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qabstractslider_setvisible_callback(this, cbval1);
        } else {
            QAbstractSlider::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qabstractslider_sizehint_isbase) {
            qabstractslider_sizehint_isbase = false;
            return QAbstractSlider::sizeHint();
        } else if (qabstractslider_sizehint_callback != nullptr) {
            QSize* callback_ret = qabstractslider_sizehint_callback();
            return *callback_ret;
        } else {
            return QAbstractSlider::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qabstractslider_minimumsizehint_isbase) {
            qabstractslider_minimumsizehint_isbase = false;
            return QAbstractSlider::minimumSizeHint();
        } else if (qabstractslider_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qabstractslider_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QAbstractSlider::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qabstractslider_heightforwidth_isbase) {
            qabstractslider_heightforwidth_isbase = false;
            return QAbstractSlider::heightForWidth(param1);
        } else if (qabstractslider_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qabstractslider_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractSlider::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qabstractslider_hasheightforwidth_isbase) {
            qabstractslider_hasheightforwidth_isbase = false;
            return QAbstractSlider::hasHeightForWidth();
        } else if (qabstractslider_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qabstractslider_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QAbstractSlider::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qabstractslider_paintengine_isbase) {
            qabstractslider_paintengine_isbase = false;
            return QAbstractSlider::paintEngine();
        } else if (qabstractslider_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qabstractslider_paintengine_callback();
            return callback_ret;
        } else {
            return QAbstractSlider::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qabstractslider_mousepressevent_isbase) {
            qabstractslider_mousepressevent_isbase = false;
            QAbstractSlider::mousePressEvent(event);
        } else if (qabstractslider_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qabstractslider_mousepressevent_callback(this, cbval1);
        } else {
            QAbstractSlider::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qabstractslider_mousereleaseevent_isbase) {
            qabstractslider_mousereleaseevent_isbase = false;
            QAbstractSlider::mouseReleaseEvent(event);
        } else if (qabstractslider_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qabstractslider_mousereleaseevent_callback(this, cbval1);
        } else {
            QAbstractSlider::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qabstractslider_mousedoubleclickevent_isbase) {
            qabstractslider_mousedoubleclickevent_isbase = false;
            QAbstractSlider::mouseDoubleClickEvent(event);
        } else if (qabstractslider_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qabstractslider_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QAbstractSlider::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qabstractslider_mousemoveevent_isbase) {
            qabstractslider_mousemoveevent_isbase = false;
            QAbstractSlider::mouseMoveEvent(event);
        } else if (qabstractslider_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qabstractslider_mousemoveevent_callback(this, cbval1);
        } else {
            QAbstractSlider::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qabstractslider_keyreleaseevent_isbase) {
            qabstractslider_keyreleaseevent_isbase = false;
            QAbstractSlider::keyReleaseEvent(event);
        } else if (qabstractslider_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qabstractslider_keyreleaseevent_callback(this, cbval1);
        } else {
            QAbstractSlider::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qabstractslider_focusinevent_isbase) {
            qabstractslider_focusinevent_isbase = false;
            QAbstractSlider::focusInEvent(event);
        } else if (qabstractslider_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qabstractslider_focusinevent_callback(this, cbval1);
        } else {
            QAbstractSlider::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qabstractslider_focusoutevent_isbase) {
            qabstractslider_focusoutevent_isbase = false;
            QAbstractSlider::focusOutEvent(event);
        } else if (qabstractslider_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qabstractslider_focusoutevent_callback(this, cbval1);
        } else {
            QAbstractSlider::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qabstractslider_enterevent_isbase) {
            qabstractslider_enterevent_isbase = false;
            QAbstractSlider::enterEvent(event);
        } else if (qabstractslider_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qabstractslider_enterevent_callback(this, cbval1);
        } else {
            QAbstractSlider::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qabstractslider_leaveevent_isbase) {
            qabstractslider_leaveevent_isbase = false;
            QAbstractSlider::leaveEvent(event);
        } else if (qabstractslider_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qabstractslider_leaveevent_callback(this, cbval1);
        } else {
            QAbstractSlider::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qabstractslider_paintevent_isbase) {
            qabstractslider_paintevent_isbase = false;
            QAbstractSlider::paintEvent(event);
        } else if (qabstractslider_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qabstractslider_paintevent_callback(this, cbval1);
        } else {
            QAbstractSlider::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qabstractslider_moveevent_isbase) {
            qabstractslider_moveevent_isbase = false;
            QAbstractSlider::moveEvent(event);
        } else if (qabstractslider_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qabstractslider_moveevent_callback(this, cbval1);
        } else {
            QAbstractSlider::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qabstractslider_resizeevent_isbase) {
            qabstractslider_resizeevent_isbase = false;
            QAbstractSlider::resizeEvent(event);
        } else if (qabstractslider_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qabstractslider_resizeevent_callback(this, cbval1);
        } else {
            QAbstractSlider::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qabstractslider_closeevent_isbase) {
            qabstractslider_closeevent_isbase = false;
            QAbstractSlider::closeEvent(event);
        } else if (qabstractslider_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qabstractslider_closeevent_callback(this, cbval1);
        } else {
            QAbstractSlider::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qabstractslider_contextmenuevent_isbase) {
            qabstractslider_contextmenuevent_isbase = false;
            QAbstractSlider::contextMenuEvent(event);
        } else if (qabstractslider_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qabstractslider_contextmenuevent_callback(this, cbval1);
        } else {
            QAbstractSlider::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qabstractslider_tabletevent_isbase) {
            qabstractslider_tabletevent_isbase = false;
            QAbstractSlider::tabletEvent(event);
        } else if (qabstractslider_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qabstractslider_tabletevent_callback(this, cbval1);
        } else {
            QAbstractSlider::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qabstractslider_actionevent_isbase) {
            qabstractslider_actionevent_isbase = false;
            QAbstractSlider::actionEvent(event);
        } else if (qabstractslider_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qabstractslider_actionevent_callback(this, cbval1);
        } else {
            QAbstractSlider::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qabstractslider_dragenterevent_isbase) {
            qabstractslider_dragenterevent_isbase = false;
            QAbstractSlider::dragEnterEvent(event);
        } else if (qabstractslider_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qabstractslider_dragenterevent_callback(this, cbval1);
        } else {
            QAbstractSlider::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qabstractslider_dragmoveevent_isbase) {
            qabstractslider_dragmoveevent_isbase = false;
            QAbstractSlider::dragMoveEvent(event);
        } else if (qabstractslider_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qabstractslider_dragmoveevent_callback(this, cbval1);
        } else {
            QAbstractSlider::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qabstractslider_dragleaveevent_isbase) {
            qabstractslider_dragleaveevent_isbase = false;
            QAbstractSlider::dragLeaveEvent(event);
        } else if (qabstractslider_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qabstractslider_dragleaveevent_callback(this, cbval1);
        } else {
            QAbstractSlider::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qabstractslider_dropevent_isbase) {
            qabstractslider_dropevent_isbase = false;
            QAbstractSlider::dropEvent(event);
        } else if (qabstractslider_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qabstractslider_dropevent_callback(this, cbval1);
        } else {
            QAbstractSlider::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qabstractslider_showevent_isbase) {
            qabstractslider_showevent_isbase = false;
            QAbstractSlider::showEvent(event);
        } else if (qabstractslider_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qabstractslider_showevent_callback(this, cbval1);
        } else {
            QAbstractSlider::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qabstractslider_hideevent_isbase) {
            qabstractslider_hideevent_isbase = false;
            QAbstractSlider::hideEvent(event);
        } else if (qabstractslider_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qabstractslider_hideevent_callback(this, cbval1);
        } else {
            QAbstractSlider::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qabstractslider_nativeevent_isbase) {
            qabstractslider_nativeevent_isbase = false;
            return QAbstractSlider::nativeEvent(eventType, message, result);
        } else if (qabstractslider_nativeevent_callback != nullptr) {
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

            bool callback_ret = qabstractslider_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QAbstractSlider::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qabstractslider_metric_isbase) {
            qabstractslider_metric_isbase = false;
            return QAbstractSlider::metric(param1);
        } else if (qabstractslider_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qabstractslider_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractSlider::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qabstractslider_initpainter_isbase) {
            qabstractslider_initpainter_isbase = false;
            QAbstractSlider::initPainter(painter);
        } else if (qabstractslider_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qabstractslider_initpainter_callback(this, cbval1);
        } else {
            QAbstractSlider::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qabstractslider_redirected_isbase) {
            qabstractslider_redirected_isbase = false;
            return QAbstractSlider::redirected(offset);
        } else if (qabstractslider_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qabstractslider_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractSlider::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qabstractslider_sharedpainter_isbase) {
            qabstractslider_sharedpainter_isbase = false;
            return QAbstractSlider::sharedPainter();
        } else if (qabstractslider_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qabstractslider_sharedpainter_callback();
            return callback_ret;
        } else {
            return QAbstractSlider::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qabstractslider_inputmethodevent_isbase) {
            qabstractslider_inputmethodevent_isbase = false;
            QAbstractSlider::inputMethodEvent(param1);
        } else if (qabstractslider_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qabstractslider_inputmethodevent_callback(this, cbval1);
        } else {
            QAbstractSlider::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qabstractslider_inputmethodquery_isbase) {
            qabstractslider_inputmethodquery_isbase = false;
            return QAbstractSlider::inputMethodQuery(param1);
        } else if (qabstractslider_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qabstractslider_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QAbstractSlider::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qabstractslider_focusnextprevchild_isbase) {
            qabstractslider_focusnextprevchild_isbase = false;
            return QAbstractSlider::focusNextPrevChild(next);
        } else if (qabstractslider_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qabstractslider_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractSlider::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractslider_eventfilter_isbase) {
            qabstractslider_eventfilter_isbase = false;
            return QAbstractSlider::eventFilter(watched, event);
        } else if (qabstractslider_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qabstractslider_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAbstractSlider::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractslider_childevent_isbase) {
            qabstractslider_childevent_isbase = false;
            QAbstractSlider::childEvent(event);
        } else if (qabstractslider_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qabstractslider_childevent_callback(this, cbval1);
        } else {
            QAbstractSlider::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractslider_customevent_isbase) {
            qabstractslider_customevent_isbase = false;
            QAbstractSlider::customEvent(event);
        } else if (qabstractslider_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qabstractslider_customevent_callback(this, cbval1);
        } else {
            QAbstractSlider::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractslider_connectnotify_isbase) {
            qabstractslider_connectnotify_isbase = false;
            QAbstractSlider::connectNotify(signal);
        } else if (qabstractslider_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qabstractslider_connectnotify_callback(this, cbval1);
        } else {
            QAbstractSlider::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractslider_disconnectnotify_isbase) {
            qabstractslider_disconnectnotify_isbase = false;
            QAbstractSlider::disconnectNotify(signal);
        } else if (qabstractslider_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qabstractslider_disconnectnotify_callback(this, cbval1);
        } else {
            QAbstractSlider::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setRepeatAction(QAbstractSlider::SliderAction action) {
        if (qabstractslider_setrepeataction_isbase) {
            qabstractslider_setrepeataction_isbase = false;
            QAbstractSlider::setRepeatAction(action);
        } else if (qabstractslider_setrepeataction_callback != nullptr) {
            int cbval1 = static_cast<int>(action);

            qabstractslider_setrepeataction_callback(this, cbval1);
        } else {
            QAbstractSlider::setRepeatAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractSlider::SliderAction repeatAction() const {
        if (qabstractslider_repeataction_isbase) {
            qabstractslider_repeataction_isbase = false;
            return QAbstractSlider::repeatAction();
        } else if (qabstractslider_repeataction_callback != nullptr) {
            int callback_ret = qabstractslider_repeataction_callback();
            return static_cast<QAbstractSlider::SliderAction>(callback_ret);
        } else {
            return QAbstractSlider::repeatAction();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setRepeatAction(QAbstractSlider::SliderAction action, int thresholdTime) {
        if (qabstractslider_setrepeataction2_isbase) {
            qabstractslider_setrepeataction2_isbase = false;
            QAbstractSlider::setRepeatAction(action, thresholdTime);
        } else if (qabstractslider_setrepeataction2_callback != nullptr) {
            int cbval1 = static_cast<int>(action);
            int cbval2 = thresholdTime;

            qabstractslider_setrepeataction2_callback(this, cbval1, cbval2);
        } else {
            QAbstractSlider::setRepeatAction(action, thresholdTime);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setRepeatAction(QAbstractSlider::SliderAction action, int thresholdTime, int repeatTime) {
        if (qabstractslider_setrepeataction3_isbase) {
            qabstractslider_setrepeataction3_isbase = false;
            QAbstractSlider::setRepeatAction(action, thresholdTime, repeatTime);
        } else if (qabstractslider_setrepeataction3_callback != nullptr) {
            int cbval1 = static_cast<int>(action);
            int cbval2 = thresholdTime;
            int cbval3 = repeatTime;

            qabstractslider_setrepeataction3_callback(this, cbval1, cbval2, cbval3);
        } else {
            QAbstractSlider::setRepeatAction(action, thresholdTime, repeatTime);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qabstractslider_updatemicrofocus_isbase) {
            qabstractslider_updatemicrofocus_isbase = false;
            QAbstractSlider::updateMicroFocus();
        } else if (qabstractslider_updatemicrofocus_callback != nullptr) {
            qabstractslider_updatemicrofocus_callback();
        } else {
            QAbstractSlider::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qabstractslider_create_isbase) {
            qabstractslider_create_isbase = false;
            QAbstractSlider::create();
        } else if (qabstractslider_create_callback != nullptr) {
            qabstractslider_create_callback();
        } else {
            QAbstractSlider::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qabstractslider_destroy_isbase) {
            qabstractslider_destroy_isbase = false;
            QAbstractSlider::destroy();
        } else if (qabstractslider_destroy_callback != nullptr) {
            qabstractslider_destroy_callback();
        } else {
            QAbstractSlider::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qabstractslider_focusnextchild_isbase) {
            qabstractslider_focusnextchild_isbase = false;
            return QAbstractSlider::focusNextChild();
        } else if (qabstractslider_focusnextchild_callback != nullptr) {
            bool callback_ret = qabstractslider_focusnextchild_callback();
            return callback_ret;
        } else {
            return QAbstractSlider::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qabstractslider_focuspreviouschild_isbase) {
            qabstractslider_focuspreviouschild_isbase = false;
            return QAbstractSlider::focusPreviousChild();
        } else if (qabstractslider_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qabstractslider_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QAbstractSlider::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstractslider_sender_isbase) {
            qabstractslider_sender_isbase = false;
            return QAbstractSlider::sender();
        } else if (qabstractslider_sender_callback != nullptr) {
            QObject* callback_ret = qabstractslider_sender_callback();
            return callback_ret;
        } else {
            return QAbstractSlider::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstractslider_sendersignalindex_isbase) {
            qabstractslider_sendersignalindex_isbase = false;
            return QAbstractSlider::senderSignalIndex();
        } else if (qabstractslider_sendersignalindex_callback != nullptr) {
            int callback_ret = qabstractslider_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractSlider::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstractslider_receivers_isbase) {
            qabstractslider_receivers_isbase = false;
            return QAbstractSlider::receivers(signal);
        } else if (qabstractslider_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qabstractslider_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractSlider::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstractslider_issignalconnected_isbase) {
            qabstractslider_issignalconnected_isbase = false;
            return QAbstractSlider::isSignalConnected(signal);
        } else if (qabstractslider_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qabstractslider_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractSlider::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qabstractslider_getdecodedmetricf_isbase) {
            qabstractslider_getdecodedmetricf_isbase = false;
            return QAbstractSlider::getDecodedMetricF(metricA, metricB);
        } else if (qabstractslider_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qabstractslider_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QAbstractSlider::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool QAbstractSlider_Event(QAbstractSlider* self, QEvent* e);
    friend bool QAbstractSlider_QBaseEvent(QAbstractSlider* self, QEvent* e);
    friend void QAbstractSlider_SliderChange(QAbstractSlider* self, int change);
    friend void QAbstractSlider_QBaseSliderChange(QAbstractSlider* self, int change);
    friend void QAbstractSlider_KeyPressEvent(QAbstractSlider* self, QKeyEvent* ev);
    friend void QAbstractSlider_QBaseKeyPressEvent(QAbstractSlider* self, QKeyEvent* ev);
    friend void QAbstractSlider_TimerEvent(QAbstractSlider* self, QTimerEvent* param1);
    friend void QAbstractSlider_QBaseTimerEvent(QAbstractSlider* self, QTimerEvent* param1);
    friend void QAbstractSlider_WheelEvent(QAbstractSlider* self, QWheelEvent* e);
    friend void QAbstractSlider_QBaseWheelEvent(QAbstractSlider* self, QWheelEvent* e);
    friend void QAbstractSlider_ChangeEvent(QAbstractSlider* self, QEvent* e);
    friend void QAbstractSlider_QBaseChangeEvent(QAbstractSlider* self, QEvent* e);
    friend void QAbstractSlider_MousePressEvent(QAbstractSlider* self, QMouseEvent* event);
    friend void QAbstractSlider_QBaseMousePressEvent(QAbstractSlider* self, QMouseEvent* event);
    friend void QAbstractSlider_MouseReleaseEvent(QAbstractSlider* self, QMouseEvent* event);
    friend void QAbstractSlider_QBaseMouseReleaseEvent(QAbstractSlider* self, QMouseEvent* event);
    friend void QAbstractSlider_MouseDoubleClickEvent(QAbstractSlider* self, QMouseEvent* event);
    friend void QAbstractSlider_QBaseMouseDoubleClickEvent(QAbstractSlider* self, QMouseEvent* event);
    friend void QAbstractSlider_MouseMoveEvent(QAbstractSlider* self, QMouseEvent* event);
    friend void QAbstractSlider_QBaseMouseMoveEvent(QAbstractSlider* self, QMouseEvent* event);
    friend void QAbstractSlider_KeyReleaseEvent(QAbstractSlider* self, QKeyEvent* event);
    friend void QAbstractSlider_QBaseKeyReleaseEvent(QAbstractSlider* self, QKeyEvent* event);
    friend void QAbstractSlider_FocusInEvent(QAbstractSlider* self, QFocusEvent* event);
    friend void QAbstractSlider_QBaseFocusInEvent(QAbstractSlider* self, QFocusEvent* event);
    friend void QAbstractSlider_FocusOutEvent(QAbstractSlider* self, QFocusEvent* event);
    friend void QAbstractSlider_QBaseFocusOutEvent(QAbstractSlider* self, QFocusEvent* event);
    friend void QAbstractSlider_EnterEvent(QAbstractSlider* self, QEnterEvent* event);
    friend void QAbstractSlider_QBaseEnterEvent(QAbstractSlider* self, QEnterEvent* event);
    friend void QAbstractSlider_LeaveEvent(QAbstractSlider* self, QEvent* event);
    friend void QAbstractSlider_QBaseLeaveEvent(QAbstractSlider* self, QEvent* event);
    friend void QAbstractSlider_PaintEvent(QAbstractSlider* self, QPaintEvent* event);
    friend void QAbstractSlider_QBasePaintEvent(QAbstractSlider* self, QPaintEvent* event);
    friend void QAbstractSlider_MoveEvent(QAbstractSlider* self, QMoveEvent* event);
    friend void QAbstractSlider_QBaseMoveEvent(QAbstractSlider* self, QMoveEvent* event);
    friend void QAbstractSlider_ResizeEvent(QAbstractSlider* self, QResizeEvent* event);
    friend void QAbstractSlider_QBaseResizeEvent(QAbstractSlider* self, QResizeEvent* event);
    friend void QAbstractSlider_CloseEvent(QAbstractSlider* self, QCloseEvent* event);
    friend void QAbstractSlider_QBaseCloseEvent(QAbstractSlider* self, QCloseEvent* event);
    friend void QAbstractSlider_ContextMenuEvent(QAbstractSlider* self, QContextMenuEvent* event);
    friend void QAbstractSlider_QBaseContextMenuEvent(QAbstractSlider* self, QContextMenuEvent* event);
    friend void QAbstractSlider_TabletEvent(QAbstractSlider* self, QTabletEvent* event);
    friend void QAbstractSlider_QBaseTabletEvent(QAbstractSlider* self, QTabletEvent* event);
    friend void QAbstractSlider_ActionEvent(QAbstractSlider* self, QActionEvent* event);
    friend void QAbstractSlider_QBaseActionEvent(QAbstractSlider* self, QActionEvent* event);
    friend void QAbstractSlider_DragEnterEvent(QAbstractSlider* self, QDragEnterEvent* event);
    friend void QAbstractSlider_QBaseDragEnterEvent(QAbstractSlider* self, QDragEnterEvent* event);
    friend void QAbstractSlider_DragMoveEvent(QAbstractSlider* self, QDragMoveEvent* event);
    friend void QAbstractSlider_QBaseDragMoveEvent(QAbstractSlider* self, QDragMoveEvent* event);
    friend void QAbstractSlider_DragLeaveEvent(QAbstractSlider* self, QDragLeaveEvent* event);
    friend void QAbstractSlider_QBaseDragLeaveEvent(QAbstractSlider* self, QDragLeaveEvent* event);
    friend void QAbstractSlider_DropEvent(QAbstractSlider* self, QDropEvent* event);
    friend void QAbstractSlider_QBaseDropEvent(QAbstractSlider* self, QDropEvent* event);
    friend void QAbstractSlider_ShowEvent(QAbstractSlider* self, QShowEvent* event);
    friend void QAbstractSlider_QBaseShowEvent(QAbstractSlider* self, QShowEvent* event);
    friend void QAbstractSlider_HideEvent(QAbstractSlider* self, QHideEvent* event);
    friend void QAbstractSlider_QBaseHideEvent(QAbstractSlider* self, QHideEvent* event);
    friend bool QAbstractSlider_NativeEvent(QAbstractSlider* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QAbstractSlider_QBaseNativeEvent(QAbstractSlider* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QAbstractSlider_Metric(const QAbstractSlider* self, int param1);
    friend int QAbstractSlider_QBaseMetric(const QAbstractSlider* self, int param1);
    friend void QAbstractSlider_InitPainter(const QAbstractSlider* self, QPainter* painter);
    friend void QAbstractSlider_QBaseInitPainter(const QAbstractSlider* self, QPainter* painter);
    friend QPaintDevice* QAbstractSlider_Redirected(const QAbstractSlider* self, QPoint* offset);
    friend QPaintDevice* QAbstractSlider_QBaseRedirected(const QAbstractSlider* self, QPoint* offset);
    friend QPainter* QAbstractSlider_SharedPainter(const QAbstractSlider* self);
    friend QPainter* QAbstractSlider_QBaseSharedPainter(const QAbstractSlider* self);
    friend void QAbstractSlider_InputMethodEvent(QAbstractSlider* self, QInputMethodEvent* param1);
    friend void QAbstractSlider_QBaseInputMethodEvent(QAbstractSlider* self, QInputMethodEvent* param1);
    friend bool QAbstractSlider_FocusNextPrevChild(QAbstractSlider* self, bool next);
    friend bool QAbstractSlider_QBaseFocusNextPrevChild(QAbstractSlider* self, bool next);
    friend void QAbstractSlider_ChildEvent(QAbstractSlider* self, QChildEvent* event);
    friend void QAbstractSlider_QBaseChildEvent(QAbstractSlider* self, QChildEvent* event);
    friend void QAbstractSlider_CustomEvent(QAbstractSlider* self, QEvent* event);
    friend void QAbstractSlider_QBaseCustomEvent(QAbstractSlider* self, QEvent* event);
    friend void QAbstractSlider_ConnectNotify(QAbstractSlider* self, const QMetaMethod* signal);
    friend void QAbstractSlider_QBaseConnectNotify(QAbstractSlider* self, const QMetaMethod* signal);
    friend void QAbstractSlider_DisconnectNotify(QAbstractSlider* self, const QMetaMethod* signal);
    friend void QAbstractSlider_QBaseDisconnectNotify(QAbstractSlider* self, const QMetaMethod* signal);
    friend void QAbstractSlider_SetRepeatAction(QAbstractSlider* self, int action);
    friend void QAbstractSlider_QBaseSetRepeatAction(QAbstractSlider* self, int action);
    friend int QAbstractSlider_RepeatAction(const QAbstractSlider* self);
    friend int QAbstractSlider_QBaseRepeatAction(const QAbstractSlider* self);
    friend void QAbstractSlider_SetRepeatAction2(QAbstractSlider* self, int action, int thresholdTime);
    friend void QAbstractSlider_QBaseSetRepeatAction2(QAbstractSlider* self, int action, int thresholdTime);
    friend void QAbstractSlider_SetRepeatAction3(QAbstractSlider* self, int action, int thresholdTime, int repeatTime);
    friend void QAbstractSlider_QBaseSetRepeatAction3(QAbstractSlider* self, int action, int thresholdTime, int repeatTime);
    friend void QAbstractSlider_UpdateMicroFocus(QAbstractSlider* self);
    friend void QAbstractSlider_QBaseUpdateMicroFocus(QAbstractSlider* self);
    friend void QAbstractSlider_Create(QAbstractSlider* self);
    friend void QAbstractSlider_QBaseCreate(QAbstractSlider* self);
    friend void QAbstractSlider_Destroy(QAbstractSlider* self);
    friend void QAbstractSlider_QBaseDestroy(QAbstractSlider* self);
    friend bool QAbstractSlider_FocusNextChild(QAbstractSlider* self);
    friend bool QAbstractSlider_QBaseFocusNextChild(QAbstractSlider* self);
    friend bool QAbstractSlider_FocusPreviousChild(QAbstractSlider* self);
    friend bool QAbstractSlider_QBaseFocusPreviousChild(QAbstractSlider* self);
    friend QObject* QAbstractSlider_Sender(const QAbstractSlider* self);
    friend QObject* QAbstractSlider_QBaseSender(const QAbstractSlider* self);
    friend int QAbstractSlider_SenderSignalIndex(const QAbstractSlider* self);
    friend int QAbstractSlider_QBaseSenderSignalIndex(const QAbstractSlider* self);
    friend int QAbstractSlider_Receivers(const QAbstractSlider* self, const char* signal);
    friend int QAbstractSlider_QBaseReceivers(const QAbstractSlider* self, const char* signal);
    friend bool QAbstractSlider_IsSignalConnected(const QAbstractSlider* self, const QMetaMethod* signal);
    friend bool QAbstractSlider_QBaseIsSignalConnected(const QAbstractSlider* self, const QMetaMethod* signal);
    friend double QAbstractSlider_GetDecodedMetricF(const QAbstractSlider* self, int metricA, int metricB);
    friend double QAbstractSlider_QBaseGetDecodedMetricF(const QAbstractSlider* self, int metricA, int metricB);
};

#endif
