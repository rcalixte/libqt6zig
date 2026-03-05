#pragma once
#ifndef SRCC_LIBVIRTUALQLCDNUMBER_H
#define SRCC_LIBVIRTUALQLCDNUMBER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QLCDNumber so that we can call protected methods
class VirtualQLCDNumber final : public QLCDNumber {

  public:
    // Virtual class boolean flag
    bool isVirtualQLCDNumber = true;

    // Virtual class public types (including callbacks)
    using QLCDNumber_MetaObject_Callback = QMetaObject* (*)();
    using QLCDNumber_Metacast_Callback = void* (*)(QLCDNumber*, const char*);
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
    QLCDNumber_MetaObject_Callback qlcdnumber_metaobject_callback = nullptr;
    QLCDNumber_Metacast_Callback qlcdnumber_metacast_callback = nullptr;
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
    mutable bool qlcdnumber_metaobject_isbase = false;
    mutable bool qlcdnumber_metacast_isbase = false;
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

    // Callback setters
    inline void setQLCDNumber_MetaObject_Callback(QLCDNumber_MetaObject_Callback cb) { qlcdnumber_metaobject_callback = cb; }
    inline void setQLCDNumber_Metacast_Callback(QLCDNumber_Metacast_Callback cb) { qlcdnumber_metacast_callback = cb; }
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
    inline void setQLCDNumber_MetaObject_IsBase(bool value) const { qlcdnumber_metaobject_isbase = value; }
    inline void setQLCDNumber_Metacast_IsBase(bool value) const { qlcdnumber_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (qlcdnumber_metaobject_isbase) {
            qlcdnumber_metaobject_isbase = false;
            return QLCDNumber::metaObject();
        }
        auto metaobject_cb = qlcdnumber_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QLCDNumber::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qlcdnumber_metacast_isbase) {
            qlcdnumber_metacast_isbase = false;
            return QLCDNumber::qt_metacast(param1);
        }
        auto metacast_cb = qlcdnumber_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QLCDNumber::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlcdnumber_metacall_isbase) {
            qlcdnumber_metacall_isbase = false;
            return QLCDNumber::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qlcdnumber_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QLCDNumber::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qlcdnumber_sizehint_isbase) {
            qlcdnumber_sizehint_isbase = false;
            return QLCDNumber::sizeHint();
        }
        auto sizehint_cb = qlcdnumber_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QLCDNumber::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qlcdnumber_event_isbase) {
            qlcdnumber_event_isbase = false;
            return QLCDNumber::event(e);
        }
        auto event_cb = qlcdnumber_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QLCDNumber::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qlcdnumber_paintevent_isbase) {
            qlcdnumber_paintevent_isbase = false;
            QLCDNumber::paintEvent(param1);
            return;
        }
        auto paintevent_cb = qlcdnumber_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qlcdnumber_changeevent_isbase) {
            qlcdnumber_changeevent_isbase = false;
            QLCDNumber::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qlcdnumber_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qlcdnumber_initstyleoption_isbase) {
            qlcdnumber_initstyleoption_isbase = false;
            QLCDNumber::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qlcdnumber_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QLCDNumber::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qlcdnumber_devtype_isbase) {
            qlcdnumber_devtype_isbase = false;
            return QLCDNumber::devType();
        }
        auto devtype_cb = qlcdnumber_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QLCDNumber::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qlcdnumber_setvisible_isbase) {
            qlcdnumber_setvisible_isbase = false;
            QLCDNumber::setVisible(visible);
            return;
        }
        auto setvisible_cb = qlcdnumber_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QLCDNumber::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qlcdnumber_minimumsizehint_isbase) {
            qlcdnumber_minimumsizehint_isbase = false;
            return QLCDNumber::minimumSizeHint();
        }
        auto minimumsizehint_cb = qlcdnumber_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QLCDNumber::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qlcdnumber_heightforwidth_isbase) {
            qlcdnumber_heightforwidth_isbase = false;
            return QLCDNumber::heightForWidth(param1);
        }
        auto heightforwidth_cb = qlcdnumber_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLCDNumber::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qlcdnumber_hasheightforwidth_isbase) {
            qlcdnumber_hasheightforwidth_isbase = false;
            return QLCDNumber::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qlcdnumber_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QLCDNumber::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qlcdnumber_paintengine_isbase) {
            qlcdnumber_paintengine_isbase = false;
            return QLCDNumber::paintEngine();
        }
        auto paintengine_cb = qlcdnumber_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QLCDNumber::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qlcdnumber_mousepressevent_isbase) {
            qlcdnumber_mousepressevent_isbase = false;
            QLCDNumber::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qlcdnumber_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qlcdnumber_mousereleaseevent_isbase) {
            qlcdnumber_mousereleaseevent_isbase = false;
            QLCDNumber::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qlcdnumber_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qlcdnumber_mousedoubleclickevent_isbase) {
            qlcdnumber_mousedoubleclickevent_isbase = false;
            QLCDNumber::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qlcdnumber_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qlcdnumber_mousemoveevent_isbase) {
            qlcdnumber_mousemoveevent_isbase = false;
            QLCDNumber::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qlcdnumber_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qlcdnumber_wheelevent_isbase) {
            qlcdnumber_wheelevent_isbase = false;
            QLCDNumber::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qlcdnumber_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qlcdnumber_keypressevent_isbase) {
            qlcdnumber_keypressevent_isbase = false;
            QLCDNumber::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qlcdnumber_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qlcdnumber_keyreleaseevent_isbase) {
            qlcdnumber_keyreleaseevent_isbase = false;
            QLCDNumber::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qlcdnumber_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qlcdnumber_focusinevent_isbase) {
            qlcdnumber_focusinevent_isbase = false;
            QLCDNumber::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qlcdnumber_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qlcdnumber_focusoutevent_isbase) {
            qlcdnumber_focusoutevent_isbase = false;
            QLCDNumber::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qlcdnumber_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qlcdnumber_enterevent_isbase) {
            qlcdnumber_enterevent_isbase = false;
            QLCDNumber::enterEvent(event);
            return;
        }
        auto enterevent_cb = qlcdnumber_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qlcdnumber_leaveevent_isbase) {
            qlcdnumber_leaveevent_isbase = false;
            QLCDNumber::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qlcdnumber_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qlcdnumber_moveevent_isbase) {
            qlcdnumber_moveevent_isbase = false;
            QLCDNumber::moveEvent(event);
            return;
        }
        auto moveevent_cb = qlcdnumber_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qlcdnumber_resizeevent_isbase) {
            qlcdnumber_resizeevent_isbase = false;
            QLCDNumber::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qlcdnumber_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qlcdnumber_closeevent_isbase) {
            qlcdnumber_closeevent_isbase = false;
            QLCDNumber::closeEvent(event);
            return;
        }
        auto closeevent_cb = qlcdnumber_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qlcdnumber_contextmenuevent_isbase) {
            qlcdnumber_contextmenuevent_isbase = false;
            QLCDNumber::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qlcdnumber_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qlcdnumber_tabletevent_isbase) {
            qlcdnumber_tabletevent_isbase = false;
            QLCDNumber::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qlcdnumber_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qlcdnumber_actionevent_isbase) {
            qlcdnumber_actionevent_isbase = false;
            QLCDNumber::actionEvent(event);
            return;
        }
        auto actionevent_cb = qlcdnumber_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qlcdnumber_dragenterevent_isbase) {
            qlcdnumber_dragenterevent_isbase = false;
            QLCDNumber::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qlcdnumber_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qlcdnumber_dragmoveevent_isbase) {
            qlcdnumber_dragmoveevent_isbase = false;
            QLCDNumber::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qlcdnumber_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qlcdnumber_dragleaveevent_isbase) {
            qlcdnumber_dragleaveevent_isbase = false;
            QLCDNumber::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qlcdnumber_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qlcdnumber_dropevent_isbase) {
            qlcdnumber_dropevent_isbase = false;
            QLCDNumber::dropEvent(event);
            return;
        }
        auto dropevent_cb = qlcdnumber_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qlcdnumber_showevent_isbase) {
            qlcdnumber_showevent_isbase = false;
            QLCDNumber::showEvent(event);
            return;
        }
        auto showevent_cb = qlcdnumber_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qlcdnumber_hideevent_isbase) {
            qlcdnumber_hideevent_isbase = false;
            QLCDNumber::hideEvent(event);
            return;
        }
        auto hideevent_cb = qlcdnumber_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qlcdnumber_nativeevent_isbase) {
            qlcdnumber_nativeevent_isbase = false;
            return QLCDNumber::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qlcdnumber_nativeevent_callback;
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
        return QLCDNumber::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qlcdnumber_metric_isbase) {
            qlcdnumber_metric_isbase = false;
            return QLCDNumber::metric(param1);
        }
        auto metric_cb = qlcdnumber_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLCDNumber::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qlcdnumber_initpainter_isbase) {
            qlcdnumber_initpainter_isbase = false;
            QLCDNumber::initPainter(painter);
            return;
        }
        auto initpainter_cb = qlcdnumber_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QLCDNumber::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qlcdnumber_redirected_isbase) {
            qlcdnumber_redirected_isbase = false;
            return QLCDNumber::redirected(offset);
        }
        auto redirected_cb = qlcdnumber_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QLCDNumber::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qlcdnumber_sharedpainter_isbase) {
            qlcdnumber_sharedpainter_isbase = false;
            return QLCDNumber::sharedPainter();
        }
        auto sharedpainter_cb = qlcdnumber_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QLCDNumber::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qlcdnumber_inputmethodevent_isbase) {
            qlcdnumber_inputmethodevent_isbase = false;
            QLCDNumber::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qlcdnumber_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qlcdnumber_inputmethodquery_isbase) {
            qlcdnumber_inputmethodquery_isbase = false;
            return QLCDNumber::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qlcdnumber_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QLCDNumber::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qlcdnumber_focusnextprevchild_isbase) {
            qlcdnumber_focusnextprevchild_isbase = false;
            return QLCDNumber::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qlcdnumber_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QLCDNumber::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlcdnumber_eventfilter_isbase) {
            qlcdnumber_eventfilter_isbase = false;
            return QLCDNumber::eventFilter(watched, event);
        }
        auto eventfilter_cb = qlcdnumber_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QLCDNumber::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlcdnumber_timerevent_isbase) {
            qlcdnumber_timerevent_isbase = false;
            QLCDNumber::timerEvent(event);
            return;
        }
        auto timerevent_cb = qlcdnumber_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlcdnumber_childevent_isbase) {
            qlcdnumber_childevent_isbase = false;
            QLCDNumber::childEvent(event);
            return;
        }
        auto childevent_cb = qlcdnumber_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlcdnumber_customevent_isbase) {
            qlcdnumber_customevent_isbase = false;
            QLCDNumber::customEvent(event);
            return;
        }
        auto customevent_cb = qlcdnumber_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QLCDNumber::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlcdnumber_connectnotify_isbase) {
            qlcdnumber_connectnotify_isbase = false;
            QLCDNumber::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qlcdnumber_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QLCDNumber::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlcdnumber_disconnectnotify_isbase) {
            qlcdnumber_disconnectnotify_isbase = false;
            QLCDNumber::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qlcdnumber_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QLCDNumber::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qlcdnumber_drawframe_isbase) {
            qlcdnumber_drawframe_isbase = false;
            QLCDNumber::drawFrame(param1);
            return;
        }
        auto drawframe_cb = qlcdnumber_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;

            drawframe_cb(this, cbval1);
            return;
        }
        QLCDNumber::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qlcdnumber_updatemicrofocus_isbase) {
            qlcdnumber_updatemicrofocus_isbase = false;
            QLCDNumber::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qlcdnumber_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QLCDNumber::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qlcdnumber_create_isbase) {
            qlcdnumber_create_isbase = false;
            QLCDNumber::create();
            return;
        }
        auto create_cb = qlcdnumber_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QLCDNumber::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qlcdnumber_destroy_isbase) {
            qlcdnumber_destroy_isbase = false;
            QLCDNumber::destroy();
            return;
        }
        auto destroy_cb = qlcdnumber_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QLCDNumber::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qlcdnumber_focusnextchild_isbase) {
            qlcdnumber_focusnextchild_isbase = false;
            return QLCDNumber::focusNextChild();
        }
        auto focusnextchild_cb = qlcdnumber_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QLCDNumber::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qlcdnumber_focuspreviouschild_isbase) {
            qlcdnumber_focuspreviouschild_isbase = false;
            return QLCDNumber::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qlcdnumber_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QLCDNumber::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qlcdnumber_sender_isbase) {
            qlcdnumber_sender_isbase = false;
            return QLCDNumber::sender();
        }
        auto sender_cb = qlcdnumber_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QLCDNumber::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qlcdnumber_sendersignalindex_isbase) {
            qlcdnumber_sendersignalindex_isbase = false;
            return QLCDNumber::senderSignalIndex();
        }
        auto sendersignalindex_cb = qlcdnumber_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QLCDNumber::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qlcdnumber_receivers_isbase) {
            qlcdnumber_receivers_isbase = false;
            return QLCDNumber::receivers(signal);
        }
        auto receivers_cb = qlcdnumber_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLCDNumber::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qlcdnumber_issignalconnected_isbase) {
            qlcdnumber_issignalconnected_isbase = false;
            return QLCDNumber::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qlcdnumber_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QLCDNumber::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qlcdnumber_getdecodedmetricf_isbase) {
            qlcdnumber_getdecodedmetricf_isbase = false;
            return QLCDNumber::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qlcdnumber_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QLCDNumber::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool QLCDNumber_Event(QLCDNumber* self, QEvent* e);
    friend bool QLCDNumber_SuperEvent(QLCDNumber* self, QEvent* e);
    friend void QLCDNumber_PaintEvent(QLCDNumber* self, QPaintEvent* param1);
    friend void QLCDNumber_SuperPaintEvent(QLCDNumber* self, QPaintEvent* param1);
    friend void QLCDNumber_ChangeEvent(QLCDNumber* self, QEvent* param1);
    friend void QLCDNumber_SuperChangeEvent(QLCDNumber* self, QEvent* param1);
    friend void QLCDNumber_InitStyleOption(const QLCDNumber* self, QStyleOptionFrame* option);
    friend void QLCDNumber_SuperInitStyleOption(const QLCDNumber* self, QStyleOptionFrame* option);
    friend void QLCDNumber_MousePressEvent(QLCDNumber* self, QMouseEvent* event);
    friend void QLCDNumber_SuperMousePressEvent(QLCDNumber* self, QMouseEvent* event);
    friend void QLCDNumber_MouseReleaseEvent(QLCDNumber* self, QMouseEvent* event);
    friend void QLCDNumber_SuperMouseReleaseEvent(QLCDNumber* self, QMouseEvent* event);
    friend void QLCDNumber_MouseDoubleClickEvent(QLCDNumber* self, QMouseEvent* event);
    friend void QLCDNumber_SuperMouseDoubleClickEvent(QLCDNumber* self, QMouseEvent* event);
    friend void QLCDNumber_MouseMoveEvent(QLCDNumber* self, QMouseEvent* event);
    friend void QLCDNumber_SuperMouseMoveEvent(QLCDNumber* self, QMouseEvent* event);
    friend void QLCDNumber_WheelEvent(QLCDNumber* self, QWheelEvent* event);
    friend void QLCDNumber_SuperWheelEvent(QLCDNumber* self, QWheelEvent* event);
    friend void QLCDNumber_KeyPressEvent(QLCDNumber* self, QKeyEvent* event);
    friend void QLCDNumber_SuperKeyPressEvent(QLCDNumber* self, QKeyEvent* event);
    friend void QLCDNumber_KeyReleaseEvent(QLCDNumber* self, QKeyEvent* event);
    friend void QLCDNumber_SuperKeyReleaseEvent(QLCDNumber* self, QKeyEvent* event);
    friend void QLCDNumber_FocusInEvent(QLCDNumber* self, QFocusEvent* event);
    friend void QLCDNumber_SuperFocusInEvent(QLCDNumber* self, QFocusEvent* event);
    friend void QLCDNumber_FocusOutEvent(QLCDNumber* self, QFocusEvent* event);
    friend void QLCDNumber_SuperFocusOutEvent(QLCDNumber* self, QFocusEvent* event);
    friend void QLCDNumber_EnterEvent(QLCDNumber* self, QEnterEvent* event);
    friend void QLCDNumber_SuperEnterEvent(QLCDNumber* self, QEnterEvent* event);
    friend void QLCDNumber_LeaveEvent(QLCDNumber* self, QEvent* event);
    friend void QLCDNumber_SuperLeaveEvent(QLCDNumber* self, QEvent* event);
    friend void QLCDNumber_MoveEvent(QLCDNumber* self, QMoveEvent* event);
    friend void QLCDNumber_SuperMoveEvent(QLCDNumber* self, QMoveEvent* event);
    friend void QLCDNumber_ResizeEvent(QLCDNumber* self, QResizeEvent* event);
    friend void QLCDNumber_SuperResizeEvent(QLCDNumber* self, QResizeEvent* event);
    friend void QLCDNumber_CloseEvent(QLCDNumber* self, QCloseEvent* event);
    friend void QLCDNumber_SuperCloseEvent(QLCDNumber* self, QCloseEvent* event);
    friend void QLCDNumber_ContextMenuEvent(QLCDNumber* self, QContextMenuEvent* event);
    friend void QLCDNumber_SuperContextMenuEvent(QLCDNumber* self, QContextMenuEvent* event);
    friend void QLCDNumber_TabletEvent(QLCDNumber* self, QTabletEvent* event);
    friend void QLCDNumber_SuperTabletEvent(QLCDNumber* self, QTabletEvent* event);
    friend void QLCDNumber_ActionEvent(QLCDNumber* self, QActionEvent* event);
    friend void QLCDNumber_SuperActionEvent(QLCDNumber* self, QActionEvent* event);
    friend void QLCDNumber_DragEnterEvent(QLCDNumber* self, QDragEnterEvent* event);
    friend void QLCDNumber_SuperDragEnterEvent(QLCDNumber* self, QDragEnterEvent* event);
    friend void QLCDNumber_DragMoveEvent(QLCDNumber* self, QDragMoveEvent* event);
    friend void QLCDNumber_SuperDragMoveEvent(QLCDNumber* self, QDragMoveEvent* event);
    friend void QLCDNumber_DragLeaveEvent(QLCDNumber* self, QDragLeaveEvent* event);
    friend void QLCDNumber_SuperDragLeaveEvent(QLCDNumber* self, QDragLeaveEvent* event);
    friend void QLCDNumber_DropEvent(QLCDNumber* self, QDropEvent* event);
    friend void QLCDNumber_SuperDropEvent(QLCDNumber* self, QDropEvent* event);
    friend void QLCDNumber_ShowEvent(QLCDNumber* self, QShowEvent* event);
    friend void QLCDNumber_SuperShowEvent(QLCDNumber* self, QShowEvent* event);
    friend void QLCDNumber_HideEvent(QLCDNumber* self, QHideEvent* event);
    friend void QLCDNumber_SuperHideEvent(QLCDNumber* self, QHideEvent* event);
    friend bool QLCDNumber_NativeEvent(QLCDNumber* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QLCDNumber_SuperNativeEvent(QLCDNumber* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QLCDNumber_Metric(const QLCDNumber* self, int param1);
    friend int QLCDNumber_SuperMetric(const QLCDNumber* self, int param1);
    friend void QLCDNumber_InitPainter(const QLCDNumber* self, QPainter* painter);
    friend void QLCDNumber_SuperInitPainter(const QLCDNumber* self, QPainter* painter);
    friend QPaintDevice* QLCDNumber_Redirected(const QLCDNumber* self, QPoint* offset);
    friend QPaintDevice* QLCDNumber_SuperRedirected(const QLCDNumber* self, QPoint* offset);
    friend QPainter* QLCDNumber_SharedPainter(const QLCDNumber* self);
    friend QPainter* QLCDNumber_SuperSharedPainter(const QLCDNumber* self);
    friend void QLCDNumber_InputMethodEvent(QLCDNumber* self, QInputMethodEvent* param1);
    friend void QLCDNumber_SuperInputMethodEvent(QLCDNumber* self, QInputMethodEvent* param1);
    friend bool QLCDNumber_FocusNextPrevChild(QLCDNumber* self, bool next);
    friend bool QLCDNumber_SuperFocusNextPrevChild(QLCDNumber* self, bool next);
    friend void QLCDNumber_TimerEvent(QLCDNumber* self, QTimerEvent* event);
    friend void QLCDNumber_SuperTimerEvent(QLCDNumber* self, QTimerEvent* event);
    friend void QLCDNumber_ChildEvent(QLCDNumber* self, QChildEvent* event);
    friend void QLCDNumber_SuperChildEvent(QLCDNumber* self, QChildEvent* event);
    friend void QLCDNumber_CustomEvent(QLCDNumber* self, QEvent* event);
    friend void QLCDNumber_SuperCustomEvent(QLCDNumber* self, QEvent* event);
    friend void QLCDNumber_ConnectNotify(QLCDNumber* self, const QMetaMethod* signal);
    friend void QLCDNumber_SuperConnectNotify(QLCDNumber* self, const QMetaMethod* signal);
    friend void QLCDNumber_DisconnectNotify(QLCDNumber* self, const QMetaMethod* signal);
    friend void QLCDNumber_SuperDisconnectNotify(QLCDNumber* self, const QMetaMethod* signal);
    friend void QLCDNumber_DrawFrame(QLCDNumber* self, QPainter* param1);
    friend void QLCDNumber_SuperDrawFrame(QLCDNumber* self, QPainter* param1);
    friend void QLCDNumber_UpdateMicroFocus(QLCDNumber* self);
    friend void QLCDNumber_SuperUpdateMicroFocus(QLCDNumber* self);
    friend void QLCDNumber_Create(QLCDNumber* self);
    friend void QLCDNumber_SuperCreate(QLCDNumber* self);
    friend void QLCDNumber_Destroy(QLCDNumber* self);
    friend void QLCDNumber_SuperDestroy(QLCDNumber* self);
    friend bool QLCDNumber_FocusNextChild(QLCDNumber* self);
    friend bool QLCDNumber_SuperFocusNextChild(QLCDNumber* self);
    friend bool QLCDNumber_FocusPreviousChild(QLCDNumber* self);
    friend bool QLCDNumber_SuperFocusPreviousChild(QLCDNumber* self);
    friend QObject* QLCDNumber_Sender(const QLCDNumber* self);
    friend QObject* QLCDNumber_SuperSender(const QLCDNumber* self);
    friend int QLCDNumber_SenderSignalIndex(const QLCDNumber* self);
    friend int QLCDNumber_SuperSenderSignalIndex(const QLCDNumber* self);
    friend int QLCDNumber_Receivers(const QLCDNumber* self, const char* signal);
    friend int QLCDNumber_SuperReceivers(const QLCDNumber* self, const char* signal);
    friend bool QLCDNumber_IsSignalConnected(const QLCDNumber* self, const QMetaMethod* signal);
    friend bool QLCDNumber_SuperIsSignalConnected(const QLCDNumber* self, const QMetaMethod* signal);
    friend double QLCDNumber_GetDecodedMetricF(const QLCDNumber* self, int metricA, int metricB);
    friend double QLCDNumber_SuperGetDecodedMetricF(const QLCDNumber* self, int metricA, int metricB);
};

#endif
