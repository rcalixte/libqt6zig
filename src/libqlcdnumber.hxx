#pragma once
#ifndef SRCC_LIBVIRTUALQLCDNUMBER_H
#define SRCC_LIBVIRTUALQLCDNUMBER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QLCDNumber so that we can call protected methods
class VirtualQLCDNumber final : public QLCDNumber {

  public:
    // Virtual class boolean flag
    bool isVirtualQLCDNumber = true;

    // Virtual class public types (including callbacks)
    using QLCDNumber_Metacall_Callback = int (*)(QLCDNumber*, int, int, void**);
    using QLCDNumber_SizeHint_Callback = QSize* (*)();
    using QLCDNumber_Event_Callback = bool (*)(QLCDNumber*, QEvent*);
    using QLCDNumber_PaintEvent_Callback = void (*)(QLCDNumber*, QPaintEvent*);
    using QLCDNumber_ChangeEvent_Callback = void (*)(QLCDNumber*, QEvent*);
    using QLCDNumber_InitStyleOption_Callback = void (*)(const QLCDNumber*, QStyleOptionFrame*);
    using QLCDNumber_DevType_Callback = int (*)();
    using QLCDNumber_SetVisible_Callback = void (*)(QLCDNumber*, bool);
    using QLCDNumber_MinimumSizeHint_Callback = QSize* (*)();
    using QLCDNumber_HeightForWidth_Callback = int (*)(const QLCDNumber*, int);
    using QLCDNumber_HasHeightForWidth_Callback = bool (*)();
    using QLCDNumber_PaintEngine_Callback = QPaintEngine* (*)();
    using QLCDNumber_MousePressEvent_Callback = void (*)(QLCDNumber*, QMouseEvent*);
    using QLCDNumber_MouseReleaseEvent_Callback = void (*)(QLCDNumber*, QMouseEvent*);
    using QLCDNumber_MouseDoubleClickEvent_Callback = void (*)(QLCDNumber*, QMouseEvent*);
    using QLCDNumber_MouseMoveEvent_Callback = void (*)(QLCDNumber*, QMouseEvent*);
    using QLCDNumber_WheelEvent_Callback = void (*)(QLCDNumber*, QWheelEvent*);
    using QLCDNumber_KeyPressEvent_Callback = void (*)(QLCDNumber*, QKeyEvent*);
    using QLCDNumber_KeyReleaseEvent_Callback = void (*)(QLCDNumber*, QKeyEvent*);
    using QLCDNumber_FocusInEvent_Callback = void (*)(QLCDNumber*, QFocusEvent*);
    using QLCDNumber_FocusOutEvent_Callback = void (*)(QLCDNumber*, QFocusEvent*);
    using QLCDNumber_EnterEvent_Callback = void (*)(QLCDNumber*, QEnterEvent*);
    using QLCDNumber_LeaveEvent_Callback = void (*)(QLCDNumber*, QEvent*);
    using QLCDNumber_MoveEvent_Callback = void (*)(QLCDNumber*, QMoveEvent*);
    using QLCDNumber_ResizeEvent_Callback = void (*)(QLCDNumber*, QResizeEvent*);
    using QLCDNumber_CloseEvent_Callback = void (*)(QLCDNumber*, QCloseEvent*);
    using QLCDNumber_ContextMenuEvent_Callback = void (*)(QLCDNumber*, QContextMenuEvent*);
    using QLCDNumber_TabletEvent_Callback = void (*)(QLCDNumber*, QTabletEvent*);
    using QLCDNumber_ActionEvent_Callback = void (*)(QLCDNumber*, QActionEvent*);
    using QLCDNumber_DragEnterEvent_Callback = void (*)(QLCDNumber*, QDragEnterEvent*);
    using QLCDNumber_DragMoveEvent_Callback = void (*)(QLCDNumber*, QDragMoveEvent*);
    using QLCDNumber_DragLeaveEvent_Callback = void (*)(QLCDNumber*, QDragLeaveEvent*);
    using QLCDNumber_DropEvent_Callback = void (*)(QLCDNumber*, QDropEvent*);
    using QLCDNumber_ShowEvent_Callback = void (*)(QLCDNumber*, QShowEvent*);
    using QLCDNumber_HideEvent_Callback = void (*)(QLCDNumber*, QHideEvent*);
    using QLCDNumber_NativeEvent_Callback = bool (*)(QLCDNumber*, libqt_string, void*, intptr_t*);
    using QLCDNumber_Metric_Callback = int (*)(const QLCDNumber*, int);
    using QLCDNumber_InitPainter_Callback = void (*)(const QLCDNumber*, QPainter*);
    using QLCDNumber_Redirected_Callback = QPaintDevice* (*)(const QLCDNumber*, QPoint*);
    using QLCDNumber_SharedPainter_Callback = QPainter* (*)();
    using QLCDNumber_InputMethodEvent_Callback = void (*)(QLCDNumber*, QInputMethodEvent*);
    using QLCDNumber_InputMethodQuery_Callback = QVariant* (*)(const QLCDNumber*, int);
    using QLCDNumber_FocusNextPrevChild_Callback = bool (*)(QLCDNumber*, bool);
    using QLCDNumber_EventFilter_Callback = bool (*)(QLCDNumber*, QObject*, QEvent*);
    using QLCDNumber_TimerEvent_Callback = void (*)(QLCDNumber*, QTimerEvent*);
    using QLCDNumber_ChildEvent_Callback = void (*)(QLCDNumber*, QChildEvent*);
    using QLCDNumber_CustomEvent_Callback = void (*)(QLCDNumber*, QEvent*);
    using QLCDNumber_ConnectNotify_Callback = void (*)(QLCDNumber*, QMetaMethod*);
    using QLCDNumber_DisconnectNotify_Callback = void (*)(QLCDNumber*, QMetaMethod*);
    using QLCDNumber_DrawFrame_Callback = void (*)(QLCDNumber*, QPainter*);
    using QLCDNumber_UpdateMicroFocus_Callback = void (*)();
    using QLCDNumber_Create_Callback = void (*)();
    using QLCDNumber_Destroy_Callback = void (*)();
    using QLCDNumber_FocusNextChild_Callback = bool (*)();
    using QLCDNumber_FocusPreviousChild_Callback = bool (*)();
    using QLCDNumber_Sender_Callback = QObject* (*)();
    using QLCDNumber_SenderSignalIndex_Callback = int (*)();
    using QLCDNumber_Receivers_Callback = int (*)(const QLCDNumber*, const char*);
    using QLCDNumber_IsSignalConnected_Callback = bool (*)(const QLCDNumber*, QMetaMethod*);
    using QLCDNumber_GetDecodedMetricF_Callback = double (*)(const QLCDNumber*, int, int);

  protected:
    // Instance callback storage
    QLCDNumber_Metacall_Callback qlcdnumber_metacall_callback = nullptr;
    QLCDNumber_SizeHint_Callback qlcdnumber_sizehint_callback = nullptr;
    QLCDNumber_Event_Callback qlcdnumber_event_callback = nullptr;
    QLCDNumber_PaintEvent_Callback qlcdnumber_paintevent_callback = nullptr;
    QLCDNumber_ChangeEvent_Callback qlcdnumber_changeevent_callback = nullptr;
    QLCDNumber_InitStyleOption_Callback qlcdnumber_initstyleoption_callback = nullptr;
    QLCDNumber_DevType_Callback qlcdnumber_devtype_callback = nullptr;
    QLCDNumber_SetVisible_Callback qlcdnumber_setvisible_callback = nullptr;
    QLCDNumber_MinimumSizeHint_Callback qlcdnumber_minimumsizehint_callback = nullptr;
    QLCDNumber_HeightForWidth_Callback qlcdnumber_heightforwidth_callback = nullptr;
    QLCDNumber_HasHeightForWidth_Callback qlcdnumber_hasheightforwidth_callback = nullptr;
    QLCDNumber_PaintEngine_Callback qlcdnumber_paintengine_callback = nullptr;
    QLCDNumber_MousePressEvent_Callback qlcdnumber_mousepressevent_callback = nullptr;
    QLCDNumber_MouseReleaseEvent_Callback qlcdnumber_mousereleaseevent_callback = nullptr;
    QLCDNumber_MouseDoubleClickEvent_Callback qlcdnumber_mousedoubleclickevent_callback = nullptr;
    QLCDNumber_MouseMoveEvent_Callback qlcdnumber_mousemoveevent_callback = nullptr;
    QLCDNumber_WheelEvent_Callback qlcdnumber_wheelevent_callback = nullptr;
    QLCDNumber_KeyPressEvent_Callback qlcdnumber_keypressevent_callback = nullptr;
    QLCDNumber_KeyReleaseEvent_Callback qlcdnumber_keyreleaseevent_callback = nullptr;
    QLCDNumber_FocusInEvent_Callback qlcdnumber_focusinevent_callback = nullptr;
    QLCDNumber_FocusOutEvent_Callback qlcdnumber_focusoutevent_callback = nullptr;
    QLCDNumber_EnterEvent_Callback qlcdnumber_enterevent_callback = nullptr;
    QLCDNumber_LeaveEvent_Callback qlcdnumber_leaveevent_callback = nullptr;
    QLCDNumber_MoveEvent_Callback qlcdnumber_moveevent_callback = nullptr;
    QLCDNumber_ResizeEvent_Callback qlcdnumber_resizeevent_callback = nullptr;
    QLCDNumber_CloseEvent_Callback qlcdnumber_closeevent_callback = nullptr;
    QLCDNumber_ContextMenuEvent_Callback qlcdnumber_contextmenuevent_callback = nullptr;
    QLCDNumber_TabletEvent_Callback qlcdnumber_tabletevent_callback = nullptr;
    QLCDNumber_ActionEvent_Callback qlcdnumber_actionevent_callback = nullptr;
    QLCDNumber_DragEnterEvent_Callback qlcdnumber_dragenterevent_callback = nullptr;
    QLCDNumber_DragMoveEvent_Callback qlcdnumber_dragmoveevent_callback = nullptr;
    QLCDNumber_DragLeaveEvent_Callback qlcdnumber_dragleaveevent_callback = nullptr;
    QLCDNumber_DropEvent_Callback qlcdnumber_dropevent_callback = nullptr;
    QLCDNumber_ShowEvent_Callback qlcdnumber_showevent_callback = nullptr;
    QLCDNumber_HideEvent_Callback qlcdnumber_hideevent_callback = nullptr;
    QLCDNumber_NativeEvent_Callback qlcdnumber_nativeevent_callback = nullptr;
    QLCDNumber_Metric_Callback qlcdnumber_metric_callback = nullptr;
    QLCDNumber_InitPainter_Callback qlcdnumber_initpainter_callback = nullptr;
    QLCDNumber_Redirected_Callback qlcdnumber_redirected_callback = nullptr;
    QLCDNumber_SharedPainter_Callback qlcdnumber_sharedpainter_callback = nullptr;
    QLCDNumber_InputMethodEvent_Callback qlcdnumber_inputmethodevent_callback = nullptr;
    QLCDNumber_InputMethodQuery_Callback qlcdnumber_inputmethodquery_callback = nullptr;
    QLCDNumber_FocusNextPrevChild_Callback qlcdnumber_focusnextprevchild_callback = nullptr;
    QLCDNumber_EventFilter_Callback qlcdnumber_eventfilter_callback = nullptr;
    QLCDNumber_TimerEvent_Callback qlcdnumber_timerevent_callback = nullptr;
    QLCDNumber_ChildEvent_Callback qlcdnumber_childevent_callback = nullptr;
    QLCDNumber_CustomEvent_Callback qlcdnumber_customevent_callback = nullptr;
    QLCDNumber_ConnectNotify_Callback qlcdnumber_connectnotify_callback = nullptr;
    QLCDNumber_DisconnectNotify_Callback qlcdnumber_disconnectnotify_callback = nullptr;
    QLCDNumber_DrawFrame_Callback qlcdnumber_drawframe_callback = nullptr;
    QLCDNumber_UpdateMicroFocus_Callback qlcdnumber_updatemicrofocus_callback = nullptr;
    QLCDNumber_Create_Callback qlcdnumber_create_callback = nullptr;
    QLCDNumber_Destroy_Callback qlcdnumber_destroy_callback = nullptr;
    QLCDNumber_FocusNextChild_Callback qlcdnumber_focusnextchild_callback = nullptr;
    QLCDNumber_FocusPreviousChild_Callback qlcdnumber_focuspreviouschild_callback = nullptr;
    QLCDNumber_Sender_Callback qlcdnumber_sender_callback = nullptr;
    QLCDNumber_SenderSignalIndex_Callback qlcdnumber_sendersignalindex_callback = nullptr;
    QLCDNumber_Receivers_Callback qlcdnumber_receivers_callback = nullptr;
    QLCDNumber_IsSignalConnected_Callback qlcdnumber_issignalconnected_callback = nullptr;
    QLCDNumber_GetDecodedMetricF_Callback qlcdnumber_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qlcdnumber_metacall_isbase = false;
    mutable bool qlcdnumber_sizehint_isbase = false;
    mutable bool qlcdnumber_event_isbase = false;
    mutable bool qlcdnumber_paintevent_isbase = false;
    mutable bool qlcdnumber_changeevent_isbase = false;
    mutable bool qlcdnumber_initstyleoption_isbase = false;
    mutable bool qlcdnumber_devtype_isbase = false;
    mutable bool qlcdnumber_setvisible_isbase = false;
    mutable bool qlcdnumber_minimumsizehint_isbase = false;
    mutable bool qlcdnumber_heightforwidth_isbase = false;
    mutable bool qlcdnumber_hasheightforwidth_isbase = false;
    mutable bool qlcdnumber_paintengine_isbase = false;
    mutable bool qlcdnumber_mousepressevent_isbase = false;
    mutable bool qlcdnumber_mousereleaseevent_isbase = false;
    mutable bool qlcdnumber_mousedoubleclickevent_isbase = false;
    mutable bool qlcdnumber_mousemoveevent_isbase = false;
    mutable bool qlcdnumber_wheelevent_isbase = false;
    mutable bool qlcdnumber_keypressevent_isbase = false;
    mutable bool qlcdnumber_keyreleaseevent_isbase = false;
    mutable bool qlcdnumber_focusinevent_isbase = false;
    mutable bool qlcdnumber_focusoutevent_isbase = false;
    mutable bool qlcdnumber_enterevent_isbase = false;
    mutable bool qlcdnumber_leaveevent_isbase = false;
    mutable bool qlcdnumber_moveevent_isbase = false;
    mutable bool qlcdnumber_resizeevent_isbase = false;
    mutable bool qlcdnumber_closeevent_isbase = false;
    mutable bool qlcdnumber_contextmenuevent_isbase = false;
    mutable bool qlcdnumber_tabletevent_isbase = false;
    mutable bool qlcdnumber_actionevent_isbase = false;
    mutable bool qlcdnumber_dragenterevent_isbase = false;
    mutable bool qlcdnumber_dragmoveevent_isbase = false;
    mutable bool qlcdnumber_dragleaveevent_isbase = false;
    mutable bool qlcdnumber_dropevent_isbase = false;
    mutable bool qlcdnumber_showevent_isbase = false;
    mutable bool qlcdnumber_hideevent_isbase = false;
    mutable bool qlcdnumber_nativeevent_isbase = false;
    mutable bool qlcdnumber_metric_isbase = false;
    mutable bool qlcdnumber_initpainter_isbase = false;
    mutable bool qlcdnumber_redirected_isbase = false;
    mutable bool qlcdnumber_sharedpainter_isbase = false;
    mutable bool qlcdnumber_inputmethodevent_isbase = false;
    mutable bool qlcdnumber_inputmethodquery_isbase = false;
    mutable bool qlcdnumber_focusnextprevchild_isbase = false;
    mutable bool qlcdnumber_eventfilter_isbase = false;
    mutable bool qlcdnumber_timerevent_isbase = false;
    mutable bool qlcdnumber_childevent_isbase = false;
    mutable bool qlcdnumber_customevent_isbase = false;
    mutable bool qlcdnumber_connectnotify_isbase = false;
    mutable bool qlcdnumber_disconnectnotify_isbase = false;
    mutable bool qlcdnumber_drawframe_isbase = false;
    mutable bool qlcdnumber_updatemicrofocus_isbase = false;
    mutable bool qlcdnumber_create_isbase = false;
    mutable bool qlcdnumber_destroy_isbase = false;
    mutable bool qlcdnumber_focusnextchild_isbase = false;
    mutable bool qlcdnumber_focuspreviouschild_isbase = false;
    mutable bool qlcdnumber_sender_isbase = false;
    mutable bool qlcdnumber_sendersignalindex_isbase = false;
    mutable bool qlcdnumber_receivers_isbase = false;
    mutable bool qlcdnumber_issignalconnected_isbase = false;
    mutable bool qlcdnumber_getdecodedmetricf_isbase = false;

  public:
    VirtualQLCDNumber(QWidget* parent) : QLCDNumber(parent) {};
    VirtualQLCDNumber() : QLCDNumber() {};
    VirtualQLCDNumber(uint numDigits) : QLCDNumber(numDigits) {};
    VirtualQLCDNumber(uint numDigits, QWidget* parent) : QLCDNumber(numDigits, parent) {};

    ~VirtualQLCDNumber() {
        qlcdnumber_metacall_callback = nullptr;
        qlcdnumber_sizehint_callback = nullptr;
        qlcdnumber_event_callback = nullptr;
        qlcdnumber_paintevent_callback = nullptr;
        qlcdnumber_changeevent_callback = nullptr;
        qlcdnumber_initstyleoption_callback = nullptr;
        qlcdnumber_devtype_callback = nullptr;
        qlcdnumber_setvisible_callback = nullptr;
        qlcdnumber_minimumsizehint_callback = nullptr;
        qlcdnumber_heightforwidth_callback = nullptr;
        qlcdnumber_hasheightforwidth_callback = nullptr;
        qlcdnumber_paintengine_callback = nullptr;
        qlcdnumber_mousepressevent_callback = nullptr;
        qlcdnumber_mousereleaseevent_callback = nullptr;
        qlcdnumber_mousedoubleclickevent_callback = nullptr;
        qlcdnumber_mousemoveevent_callback = nullptr;
        qlcdnumber_wheelevent_callback = nullptr;
        qlcdnumber_keypressevent_callback = nullptr;
        qlcdnumber_keyreleaseevent_callback = nullptr;
        qlcdnumber_focusinevent_callback = nullptr;
        qlcdnumber_focusoutevent_callback = nullptr;
        qlcdnumber_enterevent_callback = nullptr;
        qlcdnumber_leaveevent_callback = nullptr;
        qlcdnumber_moveevent_callback = nullptr;
        qlcdnumber_resizeevent_callback = nullptr;
        qlcdnumber_closeevent_callback = nullptr;
        qlcdnumber_contextmenuevent_callback = nullptr;
        qlcdnumber_tabletevent_callback = nullptr;
        qlcdnumber_actionevent_callback = nullptr;
        qlcdnumber_dragenterevent_callback = nullptr;
        qlcdnumber_dragmoveevent_callback = nullptr;
        qlcdnumber_dragleaveevent_callback = nullptr;
        qlcdnumber_dropevent_callback = nullptr;
        qlcdnumber_showevent_callback = nullptr;
        qlcdnumber_hideevent_callback = nullptr;
        qlcdnumber_nativeevent_callback = nullptr;
        qlcdnumber_metric_callback = nullptr;
        qlcdnumber_initpainter_callback = nullptr;
        qlcdnumber_redirected_callback = nullptr;
        qlcdnumber_sharedpainter_callback = nullptr;
        qlcdnumber_inputmethodevent_callback = nullptr;
        qlcdnumber_inputmethodquery_callback = nullptr;
        qlcdnumber_focusnextprevchild_callback = nullptr;
        qlcdnumber_eventfilter_callback = nullptr;
        qlcdnumber_timerevent_callback = nullptr;
        qlcdnumber_childevent_callback = nullptr;
        qlcdnumber_customevent_callback = nullptr;
        qlcdnumber_connectnotify_callback = nullptr;
        qlcdnumber_disconnectnotify_callback = nullptr;
        qlcdnumber_drawframe_callback = nullptr;
        qlcdnumber_updatemicrofocus_callback = nullptr;
        qlcdnumber_create_callback = nullptr;
        qlcdnumber_destroy_callback = nullptr;
        qlcdnumber_focusnextchild_callback = nullptr;
        qlcdnumber_focuspreviouschild_callback = nullptr;
        qlcdnumber_sender_callback = nullptr;
        qlcdnumber_sendersignalindex_callback = nullptr;
        qlcdnumber_receivers_callback = nullptr;
        qlcdnumber_issignalconnected_callback = nullptr;
        qlcdnumber_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQLCDNumber_Metacall_Callback(QLCDNumber_Metacall_Callback cb) { qlcdnumber_metacall_callback = cb; }
    inline void setQLCDNumber_SizeHint_Callback(QLCDNumber_SizeHint_Callback cb) { qlcdnumber_sizehint_callback = cb; }
    inline void setQLCDNumber_Event_Callback(QLCDNumber_Event_Callback cb) { qlcdnumber_event_callback = cb; }
    inline void setQLCDNumber_PaintEvent_Callback(QLCDNumber_PaintEvent_Callback cb) { qlcdnumber_paintevent_callback = cb; }
    inline void setQLCDNumber_ChangeEvent_Callback(QLCDNumber_ChangeEvent_Callback cb) { qlcdnumber_changeevent_callback = cb; }
    inline void setQLCDNumber_InitStyleOption_Callback(QLCDNumber_InitStyleOption_Callback cb) { qlcdnumber_initstyleoption_callback = cb; }
    inline void setQLCDNumber_DevType_Callback(QLCDNumber_DevType_Callback cb) { qlcdnumber_devtype_callback = cb; }
    inline void setQLCDNumber_SetVisible_Callback(QLCDNumber_SetVisible_Callback cb) { qlcdnumber_setvisible_callback = cb; }
    inline void setQLCDNumber_MinimumSizeHint_Callback(QLCDNumber_MinimumSizeHint_Callback cb) { qlcdnumber_minimumsizehint_callback = cb; }
    inline void setQLCDNumber_HeightForWidth_Callback(QLCDNumber_HeightForWidth_Callback cb) { qlcdnumber_heightforwidth_callback = cb; }
    inline void setQLCDNumber_HasHeightForWidth_Callback(QLCDNumber_HasHeightForWidth_Callback cb) { qlcdnumber_hasheightforwidth_callback = cb; }
    inline void setQLCDNumber_PaintEngine_Callback(QLCDNumber_PaintEngine_Callback cb) { qlcdnumber_paintengine_callback = cb; }
    inline void setQLCDNumber_MousePressEvent_Callback(QLCDNumber_MousePressEvent_Callback cb) { qlcdnumber_mousepressevent_callback = cb; }
    inline void setQLCDNumber_MouseReleaseEvent_Callback(QLCDNumber_MouseReleaseEvent_Callback cb) { qlcdnumber_mousereleaseevent_callback = cb; }
    inline void setQLCDNumber_MouseDoubleClickEvent_Callback(QLCDNumber_MouseDoubleClickEvent_Callback cb) { qlcdnumber_mousedoubleclickevent_callback = cb; }
    inline void setQLCDNumber_MouseMoveEvent_Callback(QLCDNumber_MouseMoveEvent_Callback cb) { qlcdnumber_mousemoveevent_callback = cb; }
    inline void setQLCDNumber_WheelEvent_Callback(QLCDNumber_WheelEvent_Callback cb) { qlcdnumber_wheelevent_callback = cb; }
    inline void setQLCDNumber_KeyPressEvent_Callback(QLCDNumber_KeyPressEvent_Callback cb) { qlcdnumber_keypressevent_callback = cb; }
    inline void setQLCDNumber_KeyReleaseEvent_Callback(QLCDNumber_KeyReleaseEvent_Callback cb) { qlcdnumber_keyreleaseevent_callback = cb; }
    inline void setQLCDNumber_FocusInEvent_Callback(QLCDNumber_FocusInEvent_Callback cb) { qlcdnumber_focusinevent_callback = cb; }
    inline void setQLCDNumber_FocusOutEvent_Callback(QLCDNumber_FocusOutEvent_Callback cb) { qlcdnumber_focusoutevent_callback = cb; }
    inline void setQLCDNumber_EnterEvent_Callback(QLCDNumber_EnterEvent_Callback cb) { qlcdnumber_enterevent_callback = cb; }
    inline void setQLCDNumber_LeaveEvent_Callback(QLCDNumber_LeaveEvent_Callback cb) { qlcdnumber_leaveevent_callback = cb; }
    inline void setQLCDNumber_MoveEvent_Callback(QLCDNumber_MoveEvent_Callback cb) { qlcdnumber_moveevent_callback = cb; }
    inline void setQLCDNumber_ResizeEvent_Callback(QLCDNumber_ResizeEvent_Callback cb) { qlcdnumber_resizeevent_callback = cb; }
    inline void setQLCDNumber_CloseEvent_Callback(QLCDNumber_CloseEvent_Callback cb) { qlcdnumber_closeevent_callback = cb; }
    inline void setQLCDNumber_ContextMenuEvent_Callback(QLCDNumber_ContextMenuEvent_Callback cb) { qlcdnumber_contextmenuevent_callback = cb; }
    inline void setQLCDNumber_TabletEvent_Callback(QLCDNumber_TabletEvent_Callback cb) { qlcdnumber_tabletevent_callback = cb; }
    inline void setQLCDNumber_ActionEvent_Callback(QLCDNumber_ActionEvent_Callback cb) { qlcdnumber_actionevent_callback = cb; }
    inline void setQLCDNumber_DragEnterEvent_Callback(QLCDNumber_DragEnterEvent_Callback cb) { qlcdnumber_dragenterevent_callback = cb; }
    inline void setQLCDNumber_DragMoveEvent_Callback(QLCDNumber_DragMoveEvent_Callback cb) { qlcdnumber_dragmoveevent_callback = cb; }
    inline void setQLCDNumber_DragLeaveEvent_Callback(QLCDNumber_DragLeaveEvent_Callback cb) { qlcdnumber_dragleaveevent_callback = cb; }
    inline void setQLCDNumber_DropEvent_Callback(QLCDNumber_DropEvent_Callback cb) { qlcdnumber_dropevent_callback = cb; }
    inline void setQLCDNumber_ShowEvent_Callback(QLCDNumber_ShowEvent_Callback cb) { qlcdnumber_showevent_callback = cb; }
    inline void setQLCDNumber_HideEvent_Callback(QLCDNumber_HideEvent_Callback cb) { qlcdnumber_hideevent_callback = cb; }
    inline void setQLCDNumber_NativeEvent_Callback(QLCDNumber_NativeEvent_Callback cb) { qlcdnumber_nativeevent_callback = cb; }
    inline void setQLCDNumber_Metric_Callback(QLCDNumber_Metric_Callback cb) { qlcdnumber_metric_callback = cb; }
    inline void setQLCDNumber_InitPainter_Callback(QLCDNumber_InitPainter_Callback cb) { qlcdnumber_initpainter_callback = cb; }
    inline void setQLCDNumber_Redirected_Callback(QLCDNumber_Redirected_Callback cb) { qlcdnumber_redirected_callback = cb; }
    inline void setQLCDNumber_SharedPainter_Callback(QLCDNumber_SharedPainter_Callback cb) { qlcdnumber_sharedpainter_callback = cb; }
    inline void setQLCDNumber_InputMethodEvent_Callback(QLCDNumber_InputMethodEvent_Callback cb) { qlcdnumber_inputmethodevent_callback = cb; }
    inline void setQLCDNumber_InputMethodQuery_Callback(QLCDNumber_InputMethodQuery_Callback cb) { qlcdnumber_inputmethodquery_callback = cb; }
    inline void setQLCDNumber_FocusNextPrevChild_Callback(QLCDNumber_FocusNextPrevChild_Callback cb) { qlcdnumber_focusnextprevchild_callback = cb; }
    inline void setQLCDNumber_EventFilter_Callback(QLCDNumber_EventFilter_Callback cb) { qlcdnumber_eventfilter_callback = cb; }
    inline void setQLCDNumber_TimerEvent_Callback(QLCDNumber_TimerEvent_Callback cb) { qlcdnumber_timerevent_callback = cb; }
    inline void setQLCDNumber_ChildEvent_Callback(QLCDNumber_ChildEvent_Callback cb) { qlcdnumber_childevent_callback = cb; }
    inline void setQLCDNumber_CustomEvent_Callback(QLCDNumber_CustomEvent_Callback cb) { qlcdnumber_customevent_callback = cb; }
    inline void setQLCDNumber_ConnectNotify_Callback(QLCDNumber_ConnectNotify_Callback cb) { qlcdnumber_connectnotify_callback = cb; }
    inline void setQLCDNumber_DisconnectNotify_Callback(QLCDNumber_DisconnectNotify_Callback cb) { qlcdnumber_disconnectnotify_callback = cb; }
    inline void setQLCDNumber_DrawFrame_Callback(QLCDNumber_DrawFrame_Callback cb) { qlcdnumber_drawframe_callback = cb; }
    inline void setQLCDNumber_UpdateMicroFocus_Callback(QLCDNumber_UpdateMicroFocus_Callback cb) { qlcdnumber_updatemicrofocus_callback = cb; }
    inline void setQLCDNumber_Create_Callback(QLCDNumber_Create_Callback cb) { qlcdnumber_create_callback = cb; }
    inline void setQLCDNumber_Destroy_Callback(QLCDNumber_Destroy_Callback cb) { qlcdnumber_destroy_callback = cb; }
    inline void setQLCDNumber_FocusNextChild_Callback(QLCDNumber_FocusNextChild_Callback cb) { qlcdnumber_focusnextchild_callback = cb; }
    inline void setQLCDNumber_FocusPreviousChild_Callback(QLCDNumber_FocusPreviousChild_Callback cb) { qlcdnumber_focuspreviouschild_callback = cb; }
    inline void setQLCDNumber_Sender_Callback(QLCDNumber_Sender_Callback cb) { qlcdnumber_sender_callback = cb; }
    inline void setQLCDNumber_SenderSignalIndex_Callback(QLCDNumber_SenderSignalIndex_Callback cb) { qlcdnumber_sendersignalindex_callback = cb; }
    inline void setQLCDNumber_Receivers_Callback(QLCDNumber_Receivers_Callback cb) { qlcdnumber_receivers_callback = cb; }
    inline void setQLCDNumber_IsSignalConnected_Callback(QLCDNumber_IsSignalConnected_Callback cb) { qlcdnumber_issignalconnected_callback = cb; }
    inline void setQLCDNumber_GetDecodedMetricF_Callback(QLCDNumber_GetDecodedMetricF_Callback cb) { qlcdnumber_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQLCDNumber_Metacall_IsBase(bool value) const { qlcdnumber_metacall_isbase = value; }
    inline void setQLCDNumber_SizeHint_IsBase(bool value) const { qlcdnumber_sizehint_isbase = value; }
    inline void setQLCDNumber_Event_IsBase(bool value) const { qlcdnumber_event_isbase = value; }
    inline void setQLCDNumber_PaintEvent_IsBase(bool value) const { qlcdnumber_paintevent_isbase = value; }
    inline void setQLCDNumber_ChangeEvent_IsBase(bool value) const { qlcdnumber_changeevent_isbase = value; }
    inline void setQLCDNumber_InitStyleOption_IsBase(bool value) const { qlcdnumber_initstyleoption_isbase = value; }
    inline void setQLCDNumber_DevType_IsBase(bool value) const { qlcdnumber_devtype_isbase = value; }
    inline void setQLCDNumber_SetVisible_IsBase(bool value) const { qlcdnumber_setvisible_isbase = value; }
    inline void setQLCDNumber_MinimumSizeHint_IsBase(bool value) const { qlcdnumber_minimumsizehint_isbase = value; }
    inline void setQLCDNumber_HeightForWidth_IsBase(bool value) const { qlcdnumber_heightforwidth_isbase = value; }
    inline void setQLCDNumber_HasHeightForWidth_IsBase(bool value) const { qlcdnumber_hasheightforwidth_isbase = value; }
    inline void setQLCDNumber_PaintEngine_IsBase(bool value) const { qlcdnumber_paintengine_isbase = value; }
    inline void setQLCDNumber_MousePressEvent_IsBase(bool value) const { qlcdnumber_mousepressevent_isbase = value; }
    inline void setQLCDNumber_MouseReleaseEvent_IsBase(bool value) const { qlcdnumber_mousereleaseevent_isbase = value; }
    inline void setQLCDNumber_MouseDoubleClickEvent_IsBase(bool value) const { qlcdnumber_mousedoubleclickevent_isbase = value; }
    inline void setQLCDNumber_MouseMoveEvent_IsBase(bool value) const { qlcdnumber_mousemoveevent_isbase = value; }
    inline void setQLCDNumber_WheelEvent_IsBase(bool value) const { qlcdnumber_wheelevent_isbase = value; }
    inline void setQLCDNumber_KeyPressEvent_IsBase(bool value) const { qlcdnumber_keypressevent_isbase = value; }
    inline void setQLCDNumber_KeyReleaseEvent_IsBase(bool value) const { qlcdnumber_keyreleaseevent_isbase = value; }
    inline void setQLCDNumber_FocusInEvent_IsBase(bool value) const { qlcdnumber_focusinevent_isbase = value; }
    inline void setQLCDNumber_FocusOutEvent_IsBase(bool value) const { qlcdnumber_focusoutevent_isbase = value; }
    inline void setQLCDNumber_EnterEvent_IsBase(bool value) const { qlcdnumber_enterevent_isbase = value; }
    inline void setQLCDNumber_LeaveEvent_IsBase(bool value) const { qlcdnumber_leaveevent_isbase = value; }
    inline void setQLCDNumber_MoveEvent_IsBase(bool value) const { qlcdnumber_moveevent_isbase = value; }
    inline void setQLCDNumber_ResizeEvent_IsBase(bool value) const { qlcdnumber_resizeevent_isbase = value; }
    inline void setQLCDNumber_CloseEvent_IsBase(bool value) const { qlcdnumber_closeevent_isbase = value; }
    inline void setQLCDNumber_ContextMenuEvent_IsBase(bool value) const { qlcdnumber_contextmenuevent_isbase = value; }
    inline void setQLCDNumber_TabletEvent_IsBase(bool value) const { qlcdnumber_tabletevent_isbase = value; }
    inline void setQLCDNumber_ActionEvent_IsBase(bool value) const { qlcdnumber_actionevent_isbase = value; }
    inline void setQLCDNumber_DragEnterEvent_IsBase(bool value) const { qlcdnumber_dragenterevent_isbase = value; }
    inline void setQLCDNumber_DragMoveEvent_IsBase(bool value) const { qlcdnumber_dragmoveevent_isbase = value; }
    inline void setQLCDNumber_DragLeaveEvent_IsBase(bool value) const { qlcdnumber_dragleaveevent_isbase = value; }
    inline void setQLCDNumber_DropEvent_IsBase(bool value) const { qlcdnumber_dropevent_isbase = value; }
    inline void setQLCDNumber_ShowEvent_IsBase(bool value) const { qlcdnumber_showevent_isbase = value; }
    inline void setQLCDNumber_HideEvent_IsBase(bool value) const { qlcdnumber_hideevent_isbase = value; }
    inline void setQLCDNumber_NativeEvent_IsBase(bool value) const { qlcdnumber_nativeevent_isbase = value; }
    inline void setQLCDNumber_Metric_IsBase(bool value) const { qlcdnumber_metric_isbase = value; }
    inline void setQLCDNumber_InitPainter_IsBase(bool value) const { qlcdnumber_initpainter_isbase = value; }
    inline void setQLCDNumber_Redirected_IsBase(bool value) const { qlcdnumber_redirected_isbase = value; }
    inline void setQLCDNumber_SharedPainter_IsBase(bool value) const { qlcdnumber_sharedpainter_isbase = value; }
    inline void setQLCDNumber_InputMethodEvent_IsBase(bool value) const { qlcdnumber_inputmethodevent_isbase = value; }
    inline void setQLCDNumber_InputMethodQuery_IsBase(bool value) const { qlcdnumber_inputmethodquery_isbase = value; }
    inline void setQLCDNumber_FocusNextPrevChild_IsBase(bool value) const { qlcdnumber_focusnextprevchild_isbase = value; }
    inline void setQLCDNumber_EventFilter_IsBase(bool value) const { qlcdnumber_eventfilter_isbase = value; }
    inline void setQLCDNumber_TimerEvent_IsBase(bool value) const { qlcdnumber_timerevent_isbase = value; }
    inline void setQLCDNumber_ChildEvent_IsBase(bool value) const { qlcdnumber_childevent_isbase = value; }
    inline void setQLCDNumber_CustomEvent_IsBase(bool value) const { qlcdnumber_customevent_isbase = value; }
    inline void setQLCDNumber_ConnectNotify_IsBase(bool value) const { qlcdnumber_connectnotify_isbase = value; }
    inline void setQLCDNumber_DisconnectNotify_IsBase(bool value) const { qlcdnumber_disconnectnotify_isbase = value; }
    inline void setQLCDNumber_DrawFrame_IsBase(bool value) const { qlcdnumber_drawframe_isbase = value; }
    inline void setQLCDNumber_UpdateMicroFocus_IsBase(bool value) const { qlcdnumber_updatemicrofocus_isbase = value; }
    inline void setQLCDNumber_Create_IsBase(bool value) const { qlcdnumber_create_isbase = value; }
    inline void setQLCDNumber_Destroy_IsBase(bool value) const { qlcdnumber_destroy_isbase = value; }
    inline void setQLCDNumber_FocusNextChild_IsBase(bool value) const { qlcdnumber_focusnextchild_isbase = value; }
    inline void setQLCDNumber_FocusPreviousChild_IsBase(bool value) const { qlcdnumber_focuspreviouschild_isbase = value; }
    inline void setQLCDNumber_Sender_IsBase(bool value) const { qlcdnumber_sender_isbase = value; }
    inline void setQLCDNumber_SenderSignalIndex_IsBase(bool value) const { qlcdnumber_sendersignalindex_isbase = value; }
    inline void setQLCDNumber_Receivers_IsBase(bool value) const { qlcdnumber_receivers_isbase = value; }
    inline void setQLCDNumber_IsSignalConnected_IsBase(bool value) const { qlcdnumber_issignalconnected_isbase = value; }
    inline void setQLCDNumber_GetDecodedMetricF_IsBase(bool value) const { qlcdnumber_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlcdnumber_metacall_isbase) {
            qlcdnumber_metacall_isbase = false;
            return QLCDNumber::qt_metacall(param1, param2, param3);
        } else if (qlcdnumber_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qlcdnumber_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QLCDNumber::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qlcdnumber_sizehint_isbase) {
            qlcdnumber_sizehint_isbase = false;
            return QLCDNumber::sizeHint();
        } else if (qlcdnumber_sizehint_callback != nullptr) {
            QSize* callback_ret = qlcdnumber_sizehint_callback();
            return *callback_ret;
        } else {
            return QLCDNumber::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qlcdnumber_event_isbase) {
            qlcdnumber_event_isbase = false;
            return QLCDNumber::event(e);
        } else if (qlcdnumber_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qlcdnumber_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QLCDNumber::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qlcdnumber_paintevent_isbase) {
            qlcdnumber_paintevent_isbase = false;
            QLCDNumber::paintEvent(param1);
        } else if (qlcdnumber_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            qlcdnumber_paintevent_callback(this, cbval1);
        } else {
            QLCDNumber::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qlcdnumber_changeevent_isbase) {
            qlcdnumber_changeevent_isbase = false;
            QLCDNumber::changeEvent(param1);
        } else if (qlcdnumber_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qlcdnumber_changeevent_callback(this, cbval1);
        } else {
            QLCDNumber::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qlcdnumber_initstyleoption_isbase) {
            qlcdnumber_initstyleoption_isbase = false;
            QLCDNumber::initStyleOption(option);
        } else if (qlcdnumber_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            qlcdnumber_initstyleoption_callback(this, cbval1);
        } else {
            QLCDNumber::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qlcdnumber_devtype_isbase) {
            qlcdnumber_devtype_isbase = false;
            return QLCDNumber::devType();
        } else if (qlcdnumber_devtype_callback != nullptr) {
            int callback_ret = qlcdnumber_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QLCDNumber::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qlcdnumber_setvisible_isbase) {
            qlcdnumber_setvisible_isbase = false;
            QLCDNumber::setVisible(visible);
        } else if (qlcdnumber_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qlcdnumber_setvisible_callback(this, cbval1);
        } else {
            QLCDNumber::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qlcdnumber_minimumsizehint_isbase) {
            qlcdnumber_minimumsizehint_isbase = false;
            return QLCDNumber::minimumSizeHint();
        } else if (qlcdnumber_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qlcdnumber_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QLCDNumber::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qlcdnumber_heightforwidth_isbase) {
            qlcdnumber_heightforwidth_isbase = false;
            return QLCDNumber::heightForWidth(param1);
        } else if (qlcdnumber_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qlcdnumber_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QLCDNumber::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qlcdnumber_hasheightforwidth_isbase) {
            qlcdnumber_hasheightforwidth_isbase = false;
            return QLCDNumber::hasHeightForWidth();
        } else if (qlcdnumber_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qlcdnumber_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QLCDNumber::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qlcdnumber_paintengine_isbase) {
            qlcdnumber_paintengine_isbase = false;
            return QLCDNumber::paintEngine();
        } else if (qlcdnumber_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qlcdnumber_paintengine_callback();
            return callback_ret;
        } else {
            return QLCDNumber::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qlcdnumber_mousepressevent_isbase) {
            qlcdnumber_mousepressevent_isbase = false;
            QLCDNumber::mousePressEvent(event);
        } else if (qlcdnumber_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qlcdnumber_mousepressevent_callback(this, cbval1);
        } else {
            QLCDNumber::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qlcdnumber_mousereleaseevent_isbase) {
            qlcdnumber_mousereleaseevent_isbase = false;
            QLCDNumber::mouseReleaseEvent(event);
        } else if (qlcdnumber_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qlcdnumber_mousereleaseevent_callback(this, cbval1);
        } else {
            QLCDNumber::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qlcdnumber_mousedoubleclickevent_isbase) {
            qlcdnumber_mousedoubleclickevent_isbase = false;
            QLCDNumber::mouseDoubleClickEvent(event);
        } else if (qlcdnumber_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qlcdnumber_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QLCDNumber::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qlcdnumber_mousemoveevent_isbase) {
            qlcdnumber_mousemoveevent_isbase = false;
            QLCDNumber::mouseMoveEvent(event);
        } else if (qlcdnumber_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qlcdnumber_mousemoveevent_callback(this, cbval1);
        } else {
            QLCDNumber::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qlcdnumber_wheelevent_isbase) {
            qlcdnumber_wheelevent_isbase = false;
            QLCDNumber::wheelEvent(event);
        } else if (qlcdnumber_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qlcdnumber_wheelevent_callback(this, cbval1);
        } else {
            QLCDNumber::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qlcdnumber_keypressevent_isbase) {
            qlcdnumber_keypressevent_isbase = false;
            QLCDNumber::keyPressEvent(event);
        } else if (qlcdnumber_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qlcdnumber_keypressevent_callback(this, cbval1);
        } else {
            QLCDNumber::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qlcdnumber_keyreleaseevent_isbase) {
            qlcdnumber_keyreleaseevent_isbase = false;
            QLCDNumber::keyReleaseEvent(event);
        } else if (qlcdnumber_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qlcdnumber_keyreleaseevent_callback(this, cbval1);
        } else {
            QLCDNumber::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qlcdnumber_focusinevent_isbase) {
            qlcdnumber_focusinevent_isbase = false;
            QLCDNumber::focusInEvent(event);
        } else if (qlcdnumber_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qlcdnumber_focusinevent_callback(this, cbval1);
        } else {
            QLCDNumber::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qlcdnumber_focusoutevent_isbase) {
            qlcdnumber_focusoutevent_isbase = false;
            QLCDNumber::focusOutEvent(event);
        } else if (qlcdnumber_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qlcdnumber_focusoutevent_callback(this, cbval1);
        } else {
            QLCDNumber::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qlcdnumber_enterevent_isbase) {
            qlcdnumber_enterevent_isbase = false;
            QLCDNumber::enterEvent(event);
        } else if (qlcdnumber_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qlcdnumber_enterevent_callback(this, cbval1);
        } else {
            QLCDNumber::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qlcdnumber_leaveevent_isbase) {
            qlcdnumber_leaveevent_isbase = false;
            QLCDNumber::leaveEvent(event);
        } else if (qlcdnumber_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qlcdnumber_leaveevent_callback(this, cbval1);
        } else {
            QLCDNumber::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qlcdnumber_moveevent_isbase) {
            qlcdnumber_moveevent_isbase = false;
            QLCDNumber::moveEvent(event);
        } else if (qlcdnumber_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qlcdnumber_moveevent_callback(this, cbval1);
        } else {
            QLCDNumber::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qlcdnumber_resizeevent_isbase) {
            qlcdnumber_resizeevent_isbase = false;
            QLCDNumber::resizeEvent(event);
        } else if (qlcdnumber_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qlcdnumber_resizeevent_callback(this, cbval1);
        } else {
            QLCDNumber::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qlcdnumber_closeevent_isbase) {
            qlcdnumber_closeevent_isbase = false;
            QLCDNumber::closeEvent(event);
        } else if (qlcdnumber_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qlcdnumber_closeevent_callback(this, cbval1);
        } else {
            QLCDNumber::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qlcdnumber_contextmenuevent_isbase) {
            qlcdnumber_contextmenuevent_isbase = false;
            QLCDNumber::contextMenuEvent(event);
        } else if (qlcdnumber_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qlcdnumber_contextmenuevent_callback(this, cbval1);
        } else {
            QLCDNumber::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qlcdnumber_tabletevent_isbase) {
            qlcdnumber_tabletevent_isbase = false;
            QLCDNumber::tabletEvent(event);
        } else if (qlcdnumber_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qlcdnumber_tabletevent_callback(this, cbval1);
        } else {
            QLCDNumber::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qlcdnumber_actionevent_isbase) {
            qlcdnumber_actionevent_isbase = false;
            QLCDNumber::actionEvent(event);
        } else if (qlcdnumber_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qlcdnumber_actionevent_callback(this, cbval1);
        } else {
            QLCDNumber::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qlcdnumber_dragenterevent_isbase) {
            qlcdnumber_dragenterevent_isbase = false;
            QLCDNumber::dragEnterEvent(event);
        } else if (qlcdnumber_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qlcdnumber_dragenterevent_callback(this, cbval1);
        } else {
            QLCDNumber::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qlcdnumber_dragmoveevent_isbase) {
            qlcdnumber_dragmoveevent_isbase = false;
            QLCDNumber::dragMoveEvent(event);
        } else if (qlcdnumber_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qlcdnumber_dragmoveevent_callback(this, cbval1);
        } else {
            QLCDNumber::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qlcdnumber_dragleaveevent_isbase) {
            qlcdnumber_dragleaveevent_isbase = false;
            QLCDNumber::dragLeaveEvent(event);
        } else if (qlcdnumber_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qlcdnumber_dragleaveevent_callback(this, cbval1);
        } else {
            QLCDNumber::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qlcdnumber_dropevent_isbase) {
            qlcdnumber_dropevent_isbase = false;
            QLCDNumber::dropEvent(event);
        } else if (qlcdnumber_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qlcdnumber_dropevent_callback(this, cbval1);
        } else {
            QLCDNumber::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qlcdnumber_showevent_isbase) {
            qlcdnumber_showevent_isbase = false;
            QLCDNumber::showEvent(event);
        } else if (qlcdnumber_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qlcdnumber_showevent_callback(this, cbval1);
        } else {
            QLCDNumber::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qlcdnumber_hideevent_isbase) {
            qlcdnumber_hideevent_isbase = false;
            QLCDNumber::hideEvent(event);
        } else if (qlcdnumber_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qlcdnumber_hideevent_callback(this, cbval1);
        } else {
            QLCDNumber::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qlcdnumber_nativeevent_isbase) {
            qlcdnumber_nativeevent_isbase = false;
            return QLCDNumber::nativeEvent(eventType, message, result);
        } else if (qlcdnumber_nativeevent_callback != nullptr) {
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

            bool callback_ret = qlcdnumber_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QLCDNumber::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qlcdnumber_metric_isbase) {
            qlcdnumber_metric_isbase = false;
            return QLCDNumber::metric(param1);
        } else if (qlcdnumber_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qlcdnumber_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QLCDNumber::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qlcdnumber_initpainter_isbase) {
            qlcdnumber_initpainter_isbase = false;
            QLCDNumber::initPainter(painter);
        } else if (qlcdnumber_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qlcdnumber_initpainter_callback(this, cbval1);
        } else {
            QLCDNumber::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qlcdnumber_redirected_isbase) {
            qlcdnumber_redirected_isbase = false;
            return QLCDNumber::redirected(offset);
        } else if (qlcdnumber_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qlcdnumber_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QLCDNumber::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qlcdnumber_sharedpainter_isbase) {
            qlcdnumber_sharedpainter_isbase = false;
            return QLCDNumber::sharedPainter();
        } else if (qlcdnumber_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qlcdnumber_sharedpainter_callback();
            return callback_ret;
        } else {
            return QLCDNumber::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qlcdnumber_inputmethodevent_isbase) {
            qlcdnumber_inputmethodevent_isbase = false;
            QLCDNumber::inputMethodEvent(param1);
        } else if (qlcdnumber_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qlcdnumber_inputmethodevent_callback(this, cbval1);
        } else {
            QLCDNumber::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qlcdnumber_inputmethodquery_isbase) {
            qlcdnumber_inputmethodquery_isbase = false;
            return QLCDNumber::inputMethodQuery(param1);
        } else if (qlcdnumber_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qlcdnumber_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QLCDNumber::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qlcdnumber_focusnextprevchild_isbase) {
            qlcdnumber_focusnextprevchild_isbase = false;
            return QLCDNumber::focusNextPrevChild(next);
        } else if (qlcdnumber_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qlcdnumber_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QLCDNumber::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlcdnumber_eventfilter_isbase) {
            qlcdnumber_eventfilter_isbase = false;
            return QLCDNumber::eventFilter(watched, event);
        } else if (qlcdnumber_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qlcdnumber_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QLCDNumber::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlcdnumber_timerevent_isbase) {
            qlcdnumber_timerevent_isbase = false;
            QLCDNumber::timerEvent(event);
        } else if (qlcdnumber_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qlcdnumber_timerevent_callback(this, cbval1);
        } else {
            QLCDNumber::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlcdnumber_childevent_isbase) {
            qlcdnumber_childevent_isbase = false;
            QLCDNumber::childEvent(event);
        } else if (qlcdnumber_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qlcdnumber_childevent_callback(this, cbval1);
        } else {
            QLCDNumber::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlcdnumber_customevent_isbase) {
            qlcdnumber_customevent_isbase = false;
            QLCDNumber::customEvent(event);
        } else if (qlcdnumber_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qlcdnumber_customevent_callback(this, cbval1);
        } else {
            QLCDNumber::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlcdnumber_connectnotify_isbase) {
            qlcdnumber_connectnotify_isbase = false;
            QLCDNumber::connectNotify(signal);
        } else if (qlcdnumber_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qlcdnumber_connectnotify_callback(this, cbval1);
        } else {
            QLCDNumber::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlcdnumber_disconnectnotify_isbase) {
            qlcdnumber_disconnectnotify_isbase = false;
            QLCDNumber::disconnectNotify(signal);
        } else if (qlcdnumber_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qlcdnumber_disconnectnotify_callback(this, cbval1);
        } else {
            QLCDNumber::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qlcdnumber_drawframe_isbase) {
            qlcdnumber_drawframe_isbase = false;
            QLCDNumber::drawFrame(param1);
        } else if (qlcdnumber_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            qlcdnumber_drawframe_callback(this, cbval1);
        } else {
            QLCDNumber::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qlcdnumber_updatemicrofocus_isbase) {
            qlcdnumber_updatemicrofocus_isbase = false;
            QLCDNumber::updateMicroFocus();
        } else if (qlcdnumber_updatemicrofocus_callback != nullptr) {
            qlcdnumber_updatemicrofocus_callback();
        } else {
            QLCDNumber::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qlcdnumber_create_isbase) {
            qlcdnumber_create_isbase = false;
            QLCDNumber::create();
        } else if (qlcdnumber_create_callback != nullptr) {
            qlcdnumber_create_callback();
        } else {
            QLCDNumber::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qlcdnumber_destroy_isbase) {
            qlcdnumber_destroy_isbase = false;
            QLCDNumber::destroy();
        } else if (qlcdnumber_destroy_callback != nullptr) {
            qlcdnumber_destroy_callback();
        } else {
            QLCDNumber::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qlcdnumber_focusnextchild_isbase) {
            qlcdnumber_focusnextchild_isbase = false;
            return QLCDNumber::focusNextChild();
        } else if (qlcdnumber_focusnextchild_callback != nullptr) {
            bool callback_ret = qlcdnumber_focusnextchild_callback();
            return callback_ret;
        } else {
            return QLCDNumber::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qlcdnumber_focuspreviouschild_isbase) {
            qlcdnumber_focuspreviouschild_isbase = false;
            return QLCDNumber::focusPreviousChild();
        } else if (qlcdnumber_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qlcdnumber_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QLCDNumber::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qlcdnumber_sender_isbase) {
            qlcdnumber_sender_isbase = false;
            return QLCDNumber::sender();
        } else if (qlcdnumber_sender_callback != nullptr) {
            QObject* callback_ret = qlcdnumber_sender_callback();
            return callback_ret;
        } else {
            return QLCDNumber::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qlcdnumber_sendersignalindex_isbase) {
            qlcdnumber_sendersignalindex_isbase = false;
            return QLCDNumber::senderSignalIndex();
        } else if (qlcdnumber_sendersignalindex_callback != nullptr) {
            int callback_ret = qlcdnumber_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QLCDNumber::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qlcdnumber_receivers_isbase) {
            qlcdnumber_receivers_isbase = false;
            return QLCDNumber::receivers(signal);
        } else if (qlcdnumber_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qlcdnumber_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QLCDNumber::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qlcdnumber_issignalconnected_isbase) {
            qlcdnumber_issignalconnected_isbase = false;
            return QLCDNumber::isSignalConnected(signal);
        } else if (qlcdnumber_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qlcdnumber_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QLCDNumber::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qlcdnumber_getdecodedmetricf_isbase) {
            qlcdnumber_getdecodedmetricf_isbase = false;
            return QLCDNumber::getDecodedMetricF(metricA, metricB);
        } else if (qlcdnumber_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qlcdnumber_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QLCDNumber::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool QLCDNumber_Event(QLCDNumber* self, QEvent* e);
    friend bool QLCDNumber_QBaseEvent(QLCDNumber* self, QEvent* e);
    friend void QLCDNumber_PaintEvent(QLCDNumber* self, QPaintEvent* param1);
    friend void QLCDNumber_QBasePaintEvent(QLCDNumber* self, QPaintEvent* param1);
    friend void QLCDNumber_ChangeEvent(QLCDNumber* self, QEvent* param1);
    friend void QLCDNumber_QBaseChangeEvent(QLCDNumber* self, QEvent* param1);
    friend void QLCDNumber_InitStyleOption(const QLCDNumber* self, QStyleOptionFrame* option);
    friend void QLCDNumber_QBaseInitStyleOption(const QLCDNumber* self, QStyleOptionFrame* option);
    friend void QLCDNumber_MousePressEvent(QLCDNumber* self, QMouseEvent* event);
    friend void QLCDNumber_QBaseMousePressEvent(QLCDNumber* self, QMouseEvent* event);
    friend void QLCDNumber_MouseReleaseEvent(QLCDNumber* self, QMouseEvent* event);
    friend void QLCDNumber_QBaseMouseReleaseEvent(QLCDNumber* self, QMouseEvent* event);
    friend void QLCDNumber_MouseDoubleClickEvent(QLCDNumber* self, QMouseEvent* event);
    friend void QLCDNumber_QBaseMouseDoubleClickEvent(QLCDNumber* self, QMouseEvent* event);
    friend void QLCDNumber_MouseMoveEvent(QLCDNumber* self, QMouseEvent* event);
    friend void QLCDNumber_QBaseMouseMoveEvent(QLCDNumber* self, QMouseEvent* event);
    friend void QLCDNumber_WheelEvent(QLCDNumber* self, QWheelEvent* event);
    friend void QLCDNumber_QBaseWheelEvent(QLCDNumber* self, QWheelEvent* event);
    friend void QLCDNumber_KeyPressEvent(QLCDNumber* self, QKeyEvent* event);
    friend void QLCDNumber_QBaseKeyPressEvent(QLCDNumber* self, QKeyEvent* event);
    friend void QLCDNumber_KeyReleaseEvent(QLCDNumber* self, QKeyEvent* event);
    friend void QLCDNumber_QBaseKeyReleaseEvent(QLCDNumber* self, QKeyEvent* event);
    friend void QLCDNumber_FocusInEvent(QLCDNumber* self, QFocusEvent* event);
    friend void QLCDNumber_QBaseFocusInEvent(QLCDNumber* self, QFocusEvent* event);
    friend void QLCDNumber_FocusOutEvent(QLCDNumber* self, QFocusEvent* event);
    friend void QLCDNumber_QBaseFocusOutEvent(QLCDNumber* self, QFocusEvent* event);
    friend void QLCDNumber_EnterEvent(QLCDNumber* self, QEnterEvent* event);
    friend void QLCDNumber_QBaseEnterEvent(QLCDNumber* self, QEnterEvent* event);
    friend void QLCDNumber_LeaveEvent(QLCDNumber* self, QEvent* event);
    friend void QLCDNumber_QBaseLeaveEvent(QLCDNumber* self, QEvent* event);
    friend void QLCDNumber_MoveEvent(QLCDNumber* self, QMoveEvent* event);
    friend void QLCDNumber_QBaseMoveEvent(QLCDNumber* self, QMoveEvent* event);
    friend void QLCDNumber_ResizeEvent(QLCDNumber* self, QResizeEvent* event);
    friend void QLCDNumber_QBaseResizeEvent(QLCDNumber* self, QResizeEvent* event);
    friend void QLCDNumber_CloseEvent(QLCDNumber* self, QCloseEvent* event);
    friend void QLCDNumber_QBaseCloseEvent(QLCDNumber* self, QCloseEvent* event);
    friend void QLCDNumber_ContextMenuEvent(QLCDNumber* self, QContextMenuEvent* event);
    friend void QLCDNumber_QBaseContextMenuEvent(QLCDNumber* self, QContextMenuEvent* event);
    friend void QLCDNumber_TabletEvent(QLCDNumber* self, QTabletEvent* event);
    friend void QLCDNumber_QBaseTabletEvent(QLCDNumber* self, QTabletEvent* event);
    friend void QLCDNumber_ActionEvent(QLCDNumber* self, QActionEvent* event);
    friend void QLCDNumber_QBaseActionEvent(QLCDNumber* self, QActionEvent* event);
    friend void QLCDNumber_DragEnterEvent(QLCDNumber* self, QDragEnterEvent* event);
    friend void QLCDNumber_QBaseDragEnterEvent(QLCDNumber* self, QDragEnterEvent* event);
    friend void QLCDNumber_DragMoveEvent(QLCDNumber* self, QDragMoveEvent* event);
    friend void QLCDNumber_QBaseDragMoveEvent(QLCDNumber* self, QDragMoveEvent* event);
    friend void QLCDNumber_DragLeaveEvent(QLCDNumber* self, QDragLeaveEvent* event);
    friend void QLCDNumber_QBaseDragLeaveEvent(QLCDNumber* self, QDragLeaveEvent* event);
    friend void QLCDNumber_DropEvent(QLCDNumber* self, QDropEvent* event);
    friend void QLCDNumber_QBaseDropEvent(QLCDNumber* self, QDropEvent* event);
    friend void QLCDNumber_ShowEvent(QLCDNumber* self, QShowEvent* event);
    friend void QLCDNumber_QBaseShowEvent(QLCDNumber* self, QShowEvent* event);
    friend void QLCDNumber_HideEvent(QLCDNumber* self, QHideEvent* event);
    friend void QLCDNumber_QBaseHideEvent(QLCDNumber* self, QHideEvent* event);
    friend bool QLCDNumber_NativeEvent(QLCDNumber* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QLCDNumber_QBaseNativeEvent(QLCDNumber* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QLCDNumber_Metric(const QLCDNumber* self, int param1);
    friend int QLCDNumber_QBaseMetric(const QLCDNumber* self, int param1);
    friend void QLCDNumber_InitPainter(const QLCDNumber* self, QPainter* painter);
    friend void QLCDNumber_QBaseInitPainter(const QLCDNumber* self, QPainter* painter);
    friend QPaintDevice* QLCDNumber_Redirected(const QLCDNumber* self, QPoint* offset);
    friend QPaintDevice* QLCDNumber_QBaseRedirected(const QLCDNumber* self, QPoint* offset);
    friend QPainter* QLCDNumber_SharedPainter(const QLCDNumber* self);
    friend QPainter* QLCDNumber_QBaseSharedPainter(const QLCDNumber* self);
    friend void QLCDNumber_InputMethodEvent(QLCDNumber* self, QInputMethodEvent* param1);
    friend void QLCDNumber_QBaseInputMethodEvent(QLCDNumber* self, QInputMethodEvent* param1);
    friend bool QLCDNumber_FocusNextPrevChild(QLCDNumber* self, bool next);
    friend bool QLCDNumber_QBaseFocusNextPrevChild(QLCDNumber* self, bool next);
    friend void QLCDNumber_TimerEvent(QLCDNumber* self, QTimerEvent* event);
    friend void QLCDNumber_QBaseTimerEvent(QLCDNumber* self, QTimerEvent* event);
    friend void QLCDNumber_ChildEvent(QLCDNumber* self, QChildEvent* event);
    friend void QLCDNumber_QBaseChildEvent(QLCDNumber* self, QChildEvent* event);
    friend void QLCDNumber_CustomEvent(QLCDNumber* self, QEvent* event);
    friend void QLCDNumber_QBaseCustomEvent(QLCDNumber* self, QEvent* event);
    friend void QLCDNumber_ConnectNotify(QLCDNumber* self, const QMetaMethod* signal);
    friend void QLCDNumber_QBaseConnectNotify(QLCDNumber* self, const QMetaMethod* signal);
    friend void QLCDNumber_DisconnectNotify(QLCDNumber* self, const QMetaMethod* signal);
    friend void QLCDNumber_QBaseDisconnectNotify(QLCDNumber* self, const QMetaMethod* signal);
    friend void QLCDNumber_DrawFrame(QLCDNumber* self, QPainter* param1);
    friend void QLCDNumber_QBaseDrawFrame(QLCDNumber* self, QPainter* param1);
    friend void QLCDNumber_UpdateMicroFocus(QLCDNumber* self);
    friend void QLCDNumber_QBaseUpdateMicroFocus(QLCDNumber* self);
    friend void QLCDNumber_Create(QLCDNumber* self);
    friend void QLCDNumber_QBaseCreate(QLCDNumber* self);
    friend void QLCDNumber_Destroy(QLCDNumber* self);
    friend void QLCDNumber_QBaseDestroy(QLCDNumber* self);
    friend bool QLCDNumber_FocusNextChild(QLCDNumber* self);
    friend bool QLCDNumber_QBaseFocusNextChild(QLCDNumber* self);
    friend bool QLCDNumber_FocusPreviousChild(QLCDNumber* self);
    friend bool QLCDNumber_QBaseFocusPreviousChild(QLCDNumber* self);
    friend QObject* QLCDNumber_Sender(const QLCDNumber* self);
    friend QObject* QLCDNumber_QBaseSender(const QLCDNumber* self);
    friend int QLCDNumber_SenderSignalIndex(const QLCDNumber* self);
    friend int QLCDNumber_QBaseSenderSignalIndex(const QLCDNumber* self);
    friend int QLCDNumber_Receivers(const QLCDNumber* self, const char* signal);
    friend int QLCDNumber_QBaseReceivers(const QLCDNumber* self, const char* signal);
    friend bool QLCDNumber_IsSignalConnected(const QLCDNumber* self, const QMetaMethod* signal);
    friend bool QLCDNumber_QBaseIsSignalConnected(const QLCDNumber* self, const QMetaMethod* signal);
    friend double QLCDNumber_GetDecodedMetricF(const QLCDNumber* self, int metricA, int metricB);
    friend double QLCDNumber_QBaseGetDecodedMetricF(const QLCDNumber* self, int metricA, int metricB);
};

#endif
