#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKSELECTOR_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKSELECTOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSelector so that we can call protected methods
class VirtualKSelector final : public KSelector {

  public:
    // Virtual class boolean flag
    bool isVirtualKSelector = true;

    // Virtual class public types (including callbacks)
    using QAbstractSlider::SliderChange;
    using KSelector_MetaObject_Callback = QMetaObject* (*)();
    using KSelector_Metacast_Callback = void* (*)(KSelector*, const char*);
    using KSelector_Metacall_Callback = int (*)(KSelector*, int, int, void**);
    using KSelector_DrawContents_Callback = void (*)(KSelector*, QPainter*);
    using KSelector_DrawArrow_Callback = void (*)(KSelector*, QPainter*, QPoint*);
    using KSelector_PaintEvent_Callback = void (*)(KSelector*, QPaintEvent*);
    using KSelector_MousePressEvent_Callback = void (*)(KSelector*, QMouseEvent*);
    using KSelector_MouseMoveEvent_Callback = void (*)(KSelector*, QMouseEvent*);
    using KSelector_MouseReleaseEvent_Callback = void (*)(KSelector*, QMouseEvent*);
    using KSelector_WheelEvent_Callback = void (*)(KSelector*, QWheelEvent*);
    using KSelector_Event_Callback = bool (*)(KSelector*, QEvent*);
    using KSelector_SliderChange_Callback = void (*)(KSelector*, int);
    using KSelector_KeyPressEvent_Callback = void (*)(KSelector*, QKeyEvent*);
    using KSelector_TimerEvent_Callback = void (*)(KSelector*, QTimerEvent*);
    using KSelector_ChangeEvent_Callback = void (*)(KSelector*, QEvent*);
    using KSelector_DevType_Callback = int (*)();
    using KSelector_SetVisible_Callback = void (*)(KSelector*, bool);
    using KSelector_SizeHint_Callback = QSize* (*)();
    using KSelector_MinimumSizeHint_Callback = QSize* (*)();
    using KSelector_HeightForWidth_Callback = int (*)(const KSelector*, int);
    using KSelector_HasHeightForWidth_Callback = bool (*)();
    using KSelector_PaintEngine_Callback = QPaintEngine* (*)();
    using KSelector_MouseDoubleClickEvent_Callback = void (*)(KSelector*, QMouseEvent*);
    using KSelector_KeyReleaseEvent_Callback = void (*)(KSelector*, QKeyEvent*);
    using KSelector_FocusInEvent_Callback = void (*)(KSelector*, QFocusEvent*);
    using KSelector_FocusOutEvent_Callback = void (*)(KSelector*, QFocusEvent*);
    using KSelector_EnterEvent_Callback = void (*)(KSelector*, QEnterEvent*);
    using KSelector_LeaveEvent_Callback = void (*)(KSelector*, QEvent*);
    using KSelector_MoveEvent_Callback = void (*)(KSelector*, QMoveEvent*);
    using KSelector_ResizeEvent_Callback = void (*)(KSelector*, QResizeEvent*);
    using KSelector_CloseEvent_Callback = void (*)(KSelector*, QCloseEvent*);
    using KSelector_ContextMenuEvent_Callback = void (*)(KSelector*, QContextMenuEvent*);
    using KSelector_TabletEvent_Callback = void (*)(KSelector*, QTabletEvent*);
    using KSelector_ActionEvent_Callback = void (*)(KSelector*, QActionEvent*);
    using KSelector_DragEnterEvent_Callback = void (*)(KSelector*, QDragEnterEvent*);
    using KSelector_DragMoveEvent_Callback = void (*)(KSelector*, QDragMoveEvent*);
    using KSelector_DragLeaveEvent_Callback = void (*)(KSelector*, QDragLeaveEvent*);
    using KSelector_DropEvent_Callback = void (*)(KSelector*, QDropEvent*);
    using KSelector_ShowEvent_Callback = void (*)(KSelector*, QShowEvent*);
    using KSelector_HideEvent_Callback = void (*)(KSelector*, QHideEvent*);
    using KSelector_NativeEvent_Callback = bool (*)(KSelector*, libqt_string, void*, intptr_t*);
    using KSelector_Metric_Callback = int (*)(const KSelector*, int);
    using KSelector_InitPainter_Callback = void (*)(const KSelector*, QPainter*);
    using KSelector_Redirected_Callback = QPaintDevice* (*)(const KSelector*, QPoint*);
    using KSelector_SharedPainter_Callback = QPainter* (*)();
    using KSelector_InputMethodEvent_Callback = void (*)(KSelector*, QInputMethodEvent*);
    using KSelector_InputMethodQuery_Callback = QVariant* (*)(const KSelector*, int);
    using KSelector_FocusNextPrevChild_Callback = bool (*)(KSelector*, bool);
    using KSelector_EventFilter_Callback = bool (*)(KSelector*, QObject*, QEvent*);
    using KSelector_ChildEvent_Callback = void (*)(KSelector*, QChildEvent*);
    using KSelector_CustomEvent_Callback = void (*)(KSelector*, QEvent*);
    using KSelector_ConnectNotify_Callback = void (*)(KSelector*, QMetaMethod*);
    using KSelector_DisconnectNotify_Callback = void (*)(KSelector*, QMetaMethod*);
    using KSelector_SetRepeatAction_Callback = void (*)(KSelector*, int);
    using KSelector_RepeatAction_Callback = int (*)();
    using KSelector_UpdateMicroFocus_Callback = void (*)();
    using KSelector_Create_Callback = void (*)();
    using KSelector_Destroy_Callback = void (*)();
    using KSelector_FocusNextChild_Callback = bool (*)();
    using KSelector_FocusPreviousChild_Callback = bool (*)();
    using KSelector_Sender_Callback = QObject* (*)();
    using KSelector_SenderSignalIndex_Callback = int (*)();
    using KSelector_Receivers_Callback = int (*)(const KSelector*, const char*);
    using KSelector_IsSignalConnected_Callback = bool (*)(const KSelector*, QMetaMethod*);
    using KSelector_GetDecodedMetricF_Callback = double (*)(const KSelector*, int, int);

  protected:
    // Instance callback storage
    KSelector_MetaObject_Callback kselector_metaobject_callback = nullptr;
    KSelector_Metacast_Callback kselector_metacast_callback = nullptr;
    KSelector_Metacall_Callback kselector_metacall_callback = nullptr;
    KSelector_DrawContents_Callback kselector_drawcontents_callback = nullptr;
    KSelector_DrawArrow_Callback kselector_drawarrow_callback = nullptr;
    KSelector_PaintEvent_Callback kselector_paintevent_callback = nullptr;
    KSelector_MousePressEvent_Callback kselector_mousepressevent_callback = nullptr;
    KSelector_MouseMoveEvent_Callback kselector_mousemoveevent_callback = nullptr;
    KSelector_MouseReleaseEvent_Callback kselector_mousereleaseevent_callback = nullptr;
    KSelector_WheelEvent_Callback kselector_wheelevent_callback = nullptr;
    KSelector_Event_Callback kselector_event_callback = nullptr;
    KSelector_SliderChange_Callback kselector_sliderchange_callback = nullptr;
    KSelector_KeyPressEvent_Callback kselector_keypressevent_callback = nullptr;
    KSelector_TimerEvent_Callback kselector_timerevent_callback = nullptr;
    KSelector_ChangeEvent_Callback kselector_changeevent_callback = nullptr;
    KSelector_DevType_Callback kselector_devtype_callback = nullptr;
    KSelector_SetVisible_Callback kselector_setvisible_callback = nullptr;
    KSelector_SizeHint_Callback kselector_sizehint_callback = nullptr;
    KSelector_MinimumSizeHint_Callback kselector_minimumsizehint_callback = nullptr;
    KSelector_HeightForWidth_Callback kselector_heightforwidth_callback = nullptr;
    KSelector_HasHeightForWidth_Callback kselector_hasheightforwidth_callback = nullptr;
    KSelector_PaintEngine_Callback kselector_paintengine_callback = nullptr;
    KSelector_MouseDoubleClickEvent_Callback kselector_mousedoubleclickevent_callback = nullptr;
    KSelector_KeyReleaseEvent_Callback kselector_keyreleaseevent_callback = nullptr;
    KSelector_FocusInEvent_Callback kselector_focusinevent_callback = nullptr;
    KSelector_FocusOutEvent_Callback kselector_focusoutevent_callback = nullptr;
    KSelector_EnterEvent_Callback kselector_enterevent_callback = nullptr;
    KSelector_LeaveEvent_Callback kselector_leaveevent_callback = nullptr;
    KSelector_MoveEvent_Callback kselector_moveevent_callback = nullptr;
    KSelector_ResizeEvent_Callback kselector_resizeevent_callback = nullptr;
    KSelector_CloseEvent_Callback kselector_closeevent_callback = nullptr;
    KSelector_ContextMenuEvent_Callback kselector_contextmenuevent_callback = nullptr;
    KSelector_TabletEvent_Callback kselector_tabletevent_callback = nullptr;
    KSelector_ActionEvent_Callback kselector_actionevent_callback = nullptr;
    KSelector_DragEnterEvent_Callback kselector_dragenterevent_callback = nullptr;
    KSelector_DragMoveEvent_Callback kselector_dragmoveevent_callback = nullptr;
    KSelector_DragLeaveEvent_Callback kselector_dragleaveevent_callback = nullptr;
    KSelector_DropEvent_Callback kselector_dropevent_callback = nullptr;
    KSelector_ShowEvent_Callback kselector_showevent_callback = nullptr;
    KSelector_HideEvent_Callback kselector_hideevent_callback = nullptr;
    KSelector_NativeEvent_Callback kselector_nativeevent_callback = nullptr;
    KSelector_Metric_Callback kselector_metric_callback = nullptr;
    KSelector_InitPainter_Callback kselector_initpainter_callback = nullptr;
    KSelector_Redirected_Callback kselector_redirected_callback = nullptr;
    KSelector_SharedPainter_Callback kselector_sharedpainter_callback = nullptr;
    KSelector_InputMethodEvent_Callback kselector_inputmethodevent_callback = nullptr;
    KSelector_InputMethodQuery_Callback kselector_inputmethodquery_callback = nullptr;
    KSelector_FocusNextPrevChild_Callback kselector_focusnextprevchild_callback = nullptr;
    KSelector_EventFilter_Callback kselector_eventfilter_callback = nullptr;
    KSelector_ChildEvent_Callback kselector_childevent_callback = nullptr;
    KSelector_CustomEvent_Callback kselector_customevent_callback = nullptr;
    KSelector_ConnectNotify_Callback kselector_connectnotify_callback = nullptr;
    KSelector_DisconnectNotify_Callback kselector_disconnectnotify_callback = nullptr;
    KSelector_SetRepeatAction_Callback kselector_setrepeataction_callback = nullptr;
    KSelector_RepeatAction_Callback kselector_repeataction_callback = nullptr;
    KSelector_UpdateMicroFocus_Callback kselector_updatemicrofocus_callback = nullptr;
    KSelector_Create_Callback kselector_create_callback = nullptr;
    KSelector_Destroy_Callback kselector_destroy_callback = nullptr;
    KSelector_FocusNextChild_Callback kselector_focusnextchild_callback = nullptr;
    KSelector_FocusPreviousChild_Callback kselector_focuspreviouschild_callback = nullptr;
    KSelector_Sender_Callback kselector_sender_callback = nullptr;
    KSelector_SenderSignalIndex_Callback kselector_sendersignalindex_callback = nullptr;
    KSelector_Receivers_Callback kselector_receivers_callback = nullptr;
    KSelector_IsSignalConnected_Callback kselector_issignalconnected_callback = nullptr;
    KSelector_GetDecodedMetricF_Callback kselector_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kselector_metaobject_isbase = false;
    mutable bool kselector_metacast_isbase = false;
    mutable bool kselector_metacall_isbase = false;
    mutable bool kselector_drawcontents_isbase = false;
    mutable bool kselector_drawarrow_isbase = false;
    mutable bool kselector_paintevent_isbase = false;
    mutable bool kselector_mousepressevent_isbase = false;
    mutable bool kselector_mousemoveevent_isbase = false;
    mutable bool kselector_mousereleaseevent_isbase = false;
    mutable bool kselector_wheelevent_isbase = false;
    mutable bool kselector_event_isbase = false;
    mutable bool kselector_sliderchange_isbase = false;
    mutable bool kselector_keypressevent_isbase = false;
    mutable bool kselector_timerevent_isbase = false;
    mutable bool kselector_changeevent_isbase = false;
    mutable bool kselector_devtype_isbase = false;
    mutable bool kselector_setvisible_isbase = false;
    mutable bool kselector_sizehint_isbase = false;
    mutable bool kselector_minimumsizehint_isbase = false;
    mutable bool kselector_heightforwidth_isbase = false;
    mutable bool kselector_hasheightforwidth_isbase = false;
    mutable bool kselector_paintengine_isbase = false;
    mutable bool kselector_mousedoubleclickevent_isbase = false;
    mutable bool kselector_keyreleaseevent_isbase = false;
    mutable bool kselector_focusinevent_isbase = false;
    mutable bool kselector_focusoutevent_isbase = false;
    mutable bool kselector_enterevent_isbase = false;
    mutable bool kselector_leaveevent_isbase = false;
    mutable bool kselector_moveevent_isbase = false;
    mutable bool kselector_resizeevent_isbase = false;
    mutable bool kselector_closeevent_isbase = false;
    mutable bool kselector_contextmenuevent_isbase = false;
    mutable bool kselector_tabletevent_isbase = false;
    mutable bool kselector_actionevent_isbase = false;
    mutable bool kselector_dragenterevent_isbase = false;
    mutable bool kselector_dragmoveevent_isbase = false;
    mutable bool kselector_dragleaveevent_isbase = false;
    mutable bool kselector_dropevent_isbase = false;
    mutable bool kselector_showevent_isbase = false;
    mutable bool kselector_hideevent_isbase = false;
    mutable bool kselector_nativeevent_isbase = false;
    mutable bool kselector_metric_isbase = false;
    mutable bool kselector_initpainter_isbase = false;
    mutable bool kselector_redirected_isbase = false;
    mutable bool kselector_sharedpainter_isbase = false;
    mutable bool kselector_inputmethodevent_isbase = false;
    mutable bool kselector_inputmethodquery_isbase = false;
    mutable bool kselector_focusnextprevchild_isbase = false;
    mutable bool kselector_eventfilter_isbase = false;
    mutable bool kselector_childevent_isbase = false;
    mutable bool kselector_customevent_isbase = false;
    mutable bool kselector_connectnotify_isbase = false;
    mutable bool kselector_disconnectnotify_isbase = false;
    mutable bool kselector_setrepeataction_isbase = false;
    mutable bool kselector_repeataction_isbase = false;
    mutable bool kselector_updatemicrofocus_isbase = false;
    mutable bool kselector_create_isbase = false;
    mutable bool kselector_destroy_isbase = false;
    mutable bool kselector_focusnextchild_isbase = false;
    mutable bool kselector_focuspreviouschild_isbase = false;
    mutable bool kselector_sender_isbase = false;
    mutable bool kselector_sendersignalindex_isbase = false;
    mutable bool kselector_receivers_isbase = false;
    mutable bool kselector_issignalconnected_isbase = false;
    mutable bool kselector_getdecodedmetricf_isbase = false;

  public:
    VirtualKSelector(QWidget* parent) : KSelector(parent) {};
    VirtualKSelector() : KSelector() {};
    VirtualKSelector(Qt::Orientation o) : KSelector(o) {};
    VirtualKSelector(Qt::Orientation o, QWidget* parent) : KSelector(o, parent) {};

    // Callback setters
    inline void setKSelector_MetaObject_Callback(KSelector_MetaObject_Callback cb) { kselector_metaobject_callback = cb; }
    inline void setKSelector_Metacast_Callback(KSelector_Metacast_Callback cb) { kselector_metacast_callback = cb; }
    inline void setKSelector_Metacall_Callback(KSelector_Metacall_Callback cb) { kselector_metacall_callback = cb; }
    inline void setKSelector_DrawContents_Callback(KSelector_DrawContents_Callback cb) { kselector_drawcontents_callback = cb; }
    inline void setKSelector_DrawArrow_Callback(KSelector_DrawArrow_Callback cb) { kselector_drawarrow_callback = cb; }
    inline void setKSelector_PaintEvent_Callback(KSelector_PaintEvent_Callback cb) { kselector_paintevent_callback = cb; }
    inline void setKSelector_MousePressEvent_Callback(KSelector_MousePressEvent_Callback cb) { kselector_mousepressevent_callback = cb; }
    inline void setKSelector_MouseMoveEvent_Callback(KSelector_MouseMoveEvent_Callback cb) { kselector_mousemoveevent_callback = cb; }
    inline void setKSelector_MouseReleaseEvent_Callback(KSelector_MouseReleaseEvent_Callback cb) { kselector_mousereleaseevent_callback = cb; }
    inline void setKSelector_WheelEvent_Callback(KSelector_WheelEvent_Callback cb) { kselector_wheelevent_callback = cb; }
    inline void setKSelector_Event_Callback(KSelector_Event_Callback cb) { kselector_event_callback = cb; }
    inline void setKSelector_SliderChange_Callback(KSelector_SliderChange_Callback cb) { kselector_sliderchange_callback = cb; }
    inline void setKSelector_KeyPressEvent_Callback(KSelector_KeyPressEvent_Callback cb) { kselector_keypressevent_callback = cb; }
    inline void setKSelector_TimerEvent_Callback(KSelector_TimerEvent_Callback cb) { kselector_timerevent_callback = cb; }
    inline void setKSelector_ChangeEvent_Callback(KSelector_ChangeEvent_Callback cb) { kselector_changeevent_callback = cb; }
    inline void setKSelector_DevType_Callback(KSelector_DevType_Callback cb) { kselector_devtype_callback = cb; }
    inline void setKSelector_SetVisible_Callback(KSelector_SetVisible_Callback cb) { kselector_setvisible_callback = cb; }
    inline void setKSelector_SizeHint_Callback(KSelector_SizeHint_Callback cb) { kselector_sizehint_callback = cb; }
    inline void setKSelector_MinimumSizeHint_Callback(KSelector_MinimumSizeHint_Callback cb) { kselector_minimumsizehint_callback = cb; }
    inline void setKSelector_HeightForWidth_Callback(KSelector_HeightForWidth_Callback cb) { kselector_heightforwidth_callback = cb; }
    inline void setKSelector_HasHeightForWidth_Callback(KSelector_HasHeightForWidth_Callback cb) { kselector_hasheightforwidth_callback = cb; }
    inline void setKSelector_PaintEngine_Callback(KSelector_PaintEngine_Callback cb) { kselector_paintengine_callback = cb; }
    inline void setKSelector_MouseDoubleClickEvent_Callback(KSelector_MouseDoubleClickEvent_Callback cb) { kselector_mousedoubleclickevent_callback = cb; }
    inline void setKSelector_KeyReleaseEvent_Callback(KSelector_KeyReleaseEvent_Callback cb) { kselector_keyreleaseevent_callback = cb; }
    inline void setKSelector_FocusInEvent_Callback(KSelector_FocusInEvent_Callback cb) { kselector_focusinevent_callback = cb; }
    inline void setKSelector_FocusOutEvent_Callback(KSelector_FocusOutEvent_Callback cb) { kselector_focusoutevent_callback = cb; }
    inline void setKSelector_EnterEvent_Callback(KSelector_EnterEvent_Callback cb) { kselector_enterevent_callback = cb; }
    inline void setKSelector_LeaveEvent_Callback(KSelector_LeaveEvent_Callback cb) { kselector_leaveevent_callback = cb; }
    inline void setKSelector_MoveEvent_Callback(KSelector_MoveEvent_Callback cb) { kselector_moveevent_callback = cb; }
    inline void setKSelector_ResizeEvent_Callback(KSelector_ResizeEvent_Callback cb) { kselector_resizeevent_callback = cb; }
    inline void setKSelector_CloseEvent_Callback(KSelector_CloseEvent_Callback cb) { kselector_closeevent_callback = cb; }
    inline void setKSelector_ContextMenuEvent_Callback(KSelector_ContextMenuEvent_Callback cb) { kselector_contextmenuevent_callback = cb; }
    inline void setKSelector_TabletEvent_Callback(KSelector_TabletEvent_Callback cb) { kselector_tabletevent_callback = cb; }
    inline void setKSelector_ActionEvent_Callback(KSelector_ActionEvent_Callback cb) { kselector_actionevent_callback = cb; }
    inline void setKSelector_DragEnterEvent_Callback(KSelector_DragEnterEvent_Callback cb) { kselector_dragenterevent_callback = cb; }
    inline void setKSelector_DragMoveEvent_Callback(KSelector_DragMoveEvent_Callback cb) { kselector_dragmoveevent_callback = cb; }
    inline void setKSelector_DragLeaveEvent_Callback(KSelector_DragLeaveEvent_Callback cb) { kselector_dragleaveevent_callback = cb; }
    inline void setKSelector_DropEvent_Callback(KSelector_DropEvent_Callback cb) { kselector_dropevent_callback = cb; }
    inline void setKSelector_ShowEvent_Callback(KSelector_ShowEvent_Callback cb) { kselector_showevent_callback = cb; }
    inline void setKSelector_HideEvent_Callback(KSelector_HideEvent_Callback cb) { kselector_hideevent_callback = cb; }
    inline void setKSelector_NativeEvent_Callback(KSelector_NativeEvent_Callback cb) { kselector_nativeevent_callback = cb; }
    inline void setKSelector_Metric_Callback(KSelector_Metric_Callback cb) { kselector_metric_callback = cb; }
    inline void setKSelector_InitPainter_Callback(KSelector_InitPainter_Callback cb) { kselector_initpainter_callback = cb; }
    inline void setKSelector_Redirected_Callback(KSelector_Redirected_Callback cb) { kselector_redirected_callback = cb; }
    inline void setKSelector_SharedPainter_Callback(KSelector_SharedPainter_Callback cb) { kselector_sharedpainter_callback = cb; }
    inline void setKSelector_InputMethodEvent_Callback(KSelector_InputMethodEvent_Callback cb) { kselector_inputmethodevent_callback = cb; }
    inline void setKSelector_InputMethodQuery_Callback(KSelector_InputMethodQuery_Callback cb) { kselector_inputmethodquery_callback = cb; }
    inline void setKSelector_FocusNextPrevChild_Callback(KSelector_FocusNextPrevChild_Callback cb) { kselector_focusnextprevchild_callback = cb; }
    inline void setKSelector_EventFilter_Callback(KSelector_EventFilter_Callback cb) { kselector_eventfilter_callback = cb; }
    inline void setKSelector_ChildEvent_Callback(KSelector_ChildEvent_Callback cb) { kselector_childevent_callback = cb; }
    inline void setKSelector_CustomEvent_Callback(KSelector_CustomEvent_Callback cb) { kselector_customevent_callback = cb; }
    inline void setKSelector_ConnectNotify_Callback(KSelector_ConnectNotify_Callback cb) { kselector_connectnotify_callback = cb; }
    inline void setKSelector_DisconnectNotify_Callback(KSelector_DisconnectNotify_Callback cb) { kselector_disconnectnotify_callback = cb; }
    inline void setKSelector_SetRepeatAction_Callback(KSelector_SetRepeatAction_Callback cb) { kselector_setrepeataction_callback = cb; }
    inline void setKSelector_RepeatAction_Callback(KSelector_RepeatAction_Callback cb) { kselector_repeataction_callback = cb; }
    inline void setKSelector_UpdateMicroFocus_Callback(KSelector_UpdateMicroFocus_Callback cb) { kselector_updatemicrofocus_callback = cb; }
    inline void setKSelector_Create_Callback(KSelector_Create_Callback cb) { kselector_create_callback = cb; }
    inline void setKSelector_Destroy_Callback(KSelector_Destroy_Callback cb) { kselector_destroy_callback = cb; }
    inline void setKSelector_FocusNextChild_Callback(KSelector_FocusNextChild_Callback cb) { kselector_focusnextchild_callback = cb; }
    inline void setKSelector_FocusPreviousChild_Callback(KSelector_FocusPreviousChild_Callback cb) { kselector_focuspreviouschild_callback = cb; }
    inline void setKSelector_Sender_Callback(KSelector_Sender_Callback cb) { kselector_sender_callback = cb; }
    inline void setKSelector_SenderSignalIndex_Callback(KSelector_SenderSignalIndex_Callback cb) { kselector_sendersignalindex_callback = cb; }
    inline void setKSelector_Receivers_Callback(KSelector_Receivers_Callback cb) { kselector_receivers_callback = cb; }
    inline void setKSelector_IsSignalConnected_Callback(KSelector_IsSignalConnected_Callback cb) { kselector_issignalconnected_callback = cb; }
    inline void setKSelector_GetDecodedMetricF_Callback(KSelector_GetDecodedMetricF_Callback cb) { kselector_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKSelector_MetaObject_IsBase(bool value) const { kselector_metaobject_isbase = value; }
    inline void setKSelector_Metacast_IsBase(bool value) const { kselector_metacast_isbase = value; }
    inline void setKSelector_Metacall_IsBase(bool value) const { kselector_metacall_isbase = value; }
    inline void setKSelector_DrawContents_IsBase(bool value) const { kselector_drawcontents_isbase = value; }
    inline void setKSelector_DrawArrow_IsBase(bool value) const { kselector_drawarrow_isbase = value; }
    inline void setKSelector_PaintEvent_IsBase(bool value) const { kselector_paintevent_isbase = value; }
    inline void setKSelector_MousePressEvent_IsBase(bool value) const { kselector_mousepressevent_isbase = value; }
    inline void setKSelector_MouseMoveEvent_IsBase(bool value) const { kselector_mousemoveevent_isbase = value; }
    inline void setKSelector_MouseReleaseEvent_IsBase(bool value) const { kselector_mousereleaseevent_isbase = value; }
    inline void setKSelector_WheelEvent_IsBase(bool value) const { kselector_wheelevent_isbase = value; }
    inline void setKSelector_Event_IsBase(bool value) const { kselector_event_isbase = value; }
    inline void setKSelector_SliderChange_IsBase(bool value) const { kselector_sliderchange_isbase = value; }
    inline void setKSelector_KeyPressEvent_IsBase(bool value) const { kselector_keypressevent_isbase = value; }
    inline void setKSelector_TimerEvent_IsBase(bool value) const { kselector_timerevent_isbase = value; }
    inline void setKSelector_ChangeEvent_IsBase(bool value) const { kselector_changeevent_isbase = value; }
    inline void setKSelector_DevType_IsBase(bool value) const { kselector_devtype_isbase = value; }
    inline void setKSelector_SetVisible_IsBase(bool value) const { kselector_setvisible_isbase = value; }
    inline void setKSelector_SizeHint_IsBase(bool value) const { kselector_sizehint_isbase = value; }
    inline void setKSelector_MinimumSizeHint_IsBase(bool value) const { kselector_minimumsizehint_isbase = value; }
    inline void setKSelector_HeightForWidth_IsBase(bool value) const { kselector_heightforwidth_isbase = value; }
    inline void setKSelector_HasHeightForWidth_IsBase(bool value) const { kselector_hasheightforwidth_isbase = value; }
    inline void setKSelector_PaintEngine_IsBase(bool value) const { kselector_paintengine_isbase = value; }
    inline void setKSelector_MouseDoubleClickEvent_IsBase(bool value) const { kselector_mousedoubleclickevent_isbase = value; }
    inline void setKSelector_KeyReleaseEvent_IsBase(bool value) const { kselector_keyreleaseevent_isbase = value; }
    inline void setKSelector_FocusInEvent_IsBase(bool value) const { kselector_focusinevent_isbase = value; }
    inline void setKSelector_FocusOutEvent_IsBase(bool value) const { kselector_focusoutevent_isbase = value; }
    inline void setKSelector_EnterEvent_IsBase(bool value) const { kselector_enterevent_isbase = value; }
    inline void setKSelector_LeaveEvent_IsBase(bool value) const { kselector_leaveevent_isbase = value; }
    inline void setKSelector_MoveEvent_IsBase(bool value) const { kselector_moveevent_isbase = value; }
    inline void setKSelector_ResizeEvent_IsBase(bool value) const { kselector_resizeevent_isbase = value; }
    inline void setKSelector_CloseEvent_IsBase(bool value) const { kselector_closeevent_isbase = value; }
    inline void setKSelector_ContextMenuEvent_IsBase(bool value) const { kselector_contextmenuevent_isbase = value; }
    inline void setKSelector_TabletEvent_IsBase(bool value) const { kselector_tabletevent_isbase = value; }
    inline void setKSelector_ActionEvent_IsBase(bool value) const { kselector_actionevent_isbase = value; }
    inline void setKSelector_DragEnterEvent_IsBase(bool value) const { kselector_dragenterevent_isbase = value; }
    inline void setKSelector_DragMoveEvent_IsBase(bool value) const { kselector_dragmoveevent_isbase = value; }
    inline void setKSelector_DragLeaveEvent_IsBase(bool value) const { kselector_dragleaveevent_isbase = value; }
    inline void setKSelector_DropEvent_IsBase(bool value) const { kselector_dropevent_isbase = value; }
    inline void setKSelector_ShowEvent_IsBase(bool value) const { kselector_showevent_isbase = value; }
    inline void setKSelector_HideEvent_IsBase(bool value) const { kselector_hideevent_isbase = value; }
    inline void setKSelector_NativeEvent_IsBase(bool value) const { kselector_nativeevent_isbase = value; }
    inline void setKSelector_Metric_IsBase(bool value) const { kselector_metric_isbase = value; }
    inline void setKSelector_InitPainter_IsBase(bool value) const { kselector_initpainter_isbase = value; }
    inline void setKSelector_Redirected_IsBase(bool value) const { kselector_redirected_isbase = value; }
    inline void setKSelector_SharedPainter_IsBase(bool value) const { kselector_sharedpainter_isbase = value; }
    inline void setKSelector_InputMethodEvent_IsBase(bool value) const { kselector_inputmethodevent_isbase = value; }
    inline void setKSelector_InputMethodQuery_IsBase(bool value) const { kselector_inputmethodquery_isbase = value; }
    inline void setKSelector_FocusNextPrevChild_IsBase(bool value) const { kselector_focusnextprevchild_isbase = value; }
    inline void setKSelector_EventFilter_IsBase(bool value) const { kselector_eventfilter_isbase = value; }
    inline void setKSelector_ChildEvent_IsBase(bool value) const { kselector_childevent_isbase = value; }
    inline void setKSelector_CustomEvent_IsBase(bool value) const { kselector_customevent_isbase = value; }
    inline void setKSelector_ConnectNotify_IsBase(bool value) const { kselector_connectnotify_isbase = value; }
    inline void setKSelector_DisconnectNotify_IsBase(bool value) const { kselector_disconnectnotify_isbase = value; }
    inline void setKSelector_SetRepeatAction_IsBase(bool value) const { kselector_setrepeataction_isbase = value; }
    inline void setKSelector_RepeatAction_IsBase(bool value) const { kselector_repeataction_isbase = value; }
    inline void setKSelector_UpdateMicroFocus_IsBase(bool value) const { kselector_updatemicrofocus_isbase = value; }
    inline void setKSelector_Create_IsBase(bool value) const { kselector_create_isbase = value; }
    inline void setKSelector_Destroy_IsBase(bool value) const { kselector_destroy_isbase = value; }
    inline void setKSelector_FocusNextChild_IsBase(bool value) const { kselector_focusnextchild_isbase = value; }
    inline void setKSelector_FocusPreviousChild_IsBase(bool value) const { kselector_focuspreviouschild_isbase = value; }
    inline void setKSelector_Sender_IsBase(bool value) const { kselector_sender_isbase = value; }
    inline void setKSelector_SenderSignalIndex_IsBase(bool value) const { kselector_sendersignalindex_isbase = value; }
    inline void setKSelector_Receivers_IsBase(bool value) const { kselector_receivers_isbase = value; }
    inline void setKSelector_IsSignalConnected_IsBase(bool value) const { kselector_issignalconnected_isbase = value; }
    inline void setKSelector_GetDecodedMetricF_IsBase(bool value) const { kselector_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kselector_metaobject_isbase) {
            kselector_metaobject_isbase = false;
            return KSelector::metaObject();
        }
        auto metaobject_cb = kselector_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KSelector::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kselector_metacast_isbase) {
            kselector_metacast_isbase = false;
            return KSelector::qt_metacast(param1);
        }
        auto metacast_cb = kselector_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KSelector::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kselector_metacall_isbase) {
            kselector_metacall_isbase = false;
            return KSelector::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kselector_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSelector::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawContents(QPainter* param1) override {
        if (kselector_drawcontents_isbase) {
            kselector_drawcontents_isbase = false;
            KSelector::drawContents(param1);
            return;
        }
        auto drawcontents_cb = kselector_drawcontents_callback;
        if (drawcontents_cb) {
            QPainter* cbval1 = param1;

            drawcontents_cb(this, cbval1);
            return;
        }
        KSelector::drawContents(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawArrow(QPainter* painter, const QPoint& pos) override {
        if (kselector_drawarrow_isbase) {
            kselector_drawarrow_isbase = false;
            KSelector::drawArrow(painter, pos);
            return;
        }
        auto drawarrow_cb = kselector_drawarrow_callback;
        if (drawarrow_cb) {
            QPainter* cbval1 = painter;
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&pos_ret);

            drawarrow_cb(this, cbval1, cbval2);
            return;
        }
        KSelector::drawArrow(painter, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kselector_paintevent_isbase) {
            kselector_paintevent_isbase = false;
            KSelector::paintEvent(param1);
            return;
        }
        auto paintevent_cb = kselector_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        KSelector::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (kselector_mousepressevent_isbase) {
            kselector_mousepressevent_isbase = false;
            KSelector::mousePressEvent(e);
            return;
        }
        auto mousepressevent_cb = kselector_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = e;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KSelector::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kselector_mousemoveevent_isbase) {
            kselector_mousemoveevent_isbase = false;
            KSelector::mouseMoveEvent(e);
            return;
        }
        auto mousemoveevent_cb = kselector_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = e;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KSelector::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kselector_mousereleaseevent_isbase) {
            kselector_mousereleaseevent_isbase = false;
            KSelector::mouseReleaseEvent(e);
            return;
        }
        auto mousereleaseevent_cb = kselector_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = e;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KSelector::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (kselector_wheelevent_isbase) {
            kselector_wheelevent_isbase = false;
            KSelector::wheelEvent(param1);
            return;
        }
        auto wheelevent_cb = kselector_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = param1;

            wheelevent_cb(this, cbval1);
            return;
        }
        KSelector::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kselector_event_isbase) {
            kselector_event_isbase = false;
            return KSelector::event(e);
        }
        auto event_cb = kselector_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KSelector::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sliderChange(QAbstractSlider::SliderChange change) override {
        if (kselector_sliderchange_isbase) {
            kselector_sliderchange_isbase = false;
            KSelector::sliderChange(change);
            return;
        }
        auto sliderchange_cb = kselector_sliderchange_callback;
        if (sliderchange_cb) {
            int cbval1 = static_cast<int>(change);

            sliderchange_cb(this, cbval1);
            return;
        }
        KSelector::sliderChange(change);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (kselector_keypressevent_isbase) {
            kselector_keypressevent_isbase = false;
            KSelector::keyPressEvent(ev);
            return;
        }
        auto keypressevent_cb = kselector_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = ev;

            keypressevent_cb(this, cbval1);
            return;
        }
        KSelector::keyPressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (kselector_timerevent_isbase) {
            kselector_timerevent_isbase = false;
            KSelector::timerEvent(param1);
            return;
        }
        auto timerevent_cb = kselector_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = param1;

            timerevent_cb(this, cbval1);
            return;
        }
        KSelector::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kselector_changeevent_isbase) {
            kselector_changeevent_isbase = false;
            KSelector::changeEvent(e);
            return;
        }
        auto changeevent_cb = kselector_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = e;

            changeevent_cb(this, cbval1);
            return;
        }
        KSelector::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kselector_devtype_isbase) {
            kselector_devtype_isbase = false;
            return KSelector::devType();
        }
        auto devtype_cb = kselector_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KSelector::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kselector_setvisible_isbase) {
            kselector_setvisible_isbase = false;
            KSelector::setVisible(visible);
            return;
        }
        auto setvisible_cb = kselector_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KSelector::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kselector_sizehint_isbase) {
            kselector_sizehint_isbase = false;
            return KSelector::sizeHint();
        }
        auto sizehint_cb = kselector_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KSelector::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kselector_minimumsizehint_isbase) {
            kselector_minimumsizehint_isbase = false;
            return KSelector::minimumSizeHint();
        }
        auto minimumsizehint_cb = kselector_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KSelector::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kselector_heightforwidth_isbase) {
            kselector_heightforwidth_isbase = false;
            return KSelector::heightForWidth(param1);
        }
        auto heightforwidth_cb = kselector_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSelector::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kselector_hasheightforwidth_isbase) {
            kselector_hasheightforwidth_isbase = false;
            return KSelector::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kselector_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KSelector::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kselector_paintengine_isbase) {
            kselector_paintengine_isbase = false;
            return KSelector::paintEngine();
        }
        auto paintengine_cb = kselector_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KSelector::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kselector_mousedoubleclickevent_isbase) {
            kselector_mousedoubleclickevent_isbase = false;
            KSelector::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kselector_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KSelector::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kselector_keyreleaseevent_isbase) {
            kselector_keyreleaseevent_isbase = false;
            KSelector::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kselector_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KSelector::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kselector_focusinevent_isbase) {
            kselector_focusinevent_isbase = false;
            KSelector::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kselector_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KSelector::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kselector_focusoutevent_isbase) {
            kselector_focusoutevent_isbase = false;
            KSelector::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kselector_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KSelector::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kselector_enterevent_isbase) {
            kselector_enterevent_isbase = false;
            KSelector::enterEvent(event);
            return;
        }
        auto enterevent_cb = kselector_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KSelector::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kselector_leaveevent_isbase) {
            kselector_leaveevent_isbase = false;
            KSelector::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kselector_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KSelector::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kselector_moveevent_isbase) {
            kselector_moveevent_isbase = false;
            KSelector::moveEvent(event);
            return;
        }
        auto moveevent_cb = kselector_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KSelector::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kselector_resizeevent_isbase) {
            kselector_resizeevent_isbase = false;
            KSelector::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = kselector_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KSelector::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kselector_closeevent_isbase) {
            kselector_closeevent_isbase = false;
            KSelector::closeEvent(event);
            return;
        }
        auto closeevent_cb = kselector_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KSelector::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kselector_contextmenuevent_isbase) {
            kselector_contextmenuevent_isbase = false;
            KSelector::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = kselector_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KSelector::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kselector_tabletevent_isbase) {
            kselector_tabletevent_isbase = false;
            KSelector::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kselector_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KSelector::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kselector_actionevent_isbase) {
            kselector_actionevent_isbase = false;
            KSelector::actionEvent(event);
            return;
        }
        auto actionevent_cb = kselector_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KSelector::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kselector_dragenterevent_isbase) {
            kselector_dragenterevent_isbase = false;
            KSelector::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kselector_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KSelector::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kselector_dragmoveevent_isbase) {
            kselector_dragmoveevent_isbase = false;
            KSelector::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kselector_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KSelector::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kselector_dragleaveevent_isbase) {
            kselector_dragleaveevent_isbase = false;
            KSelector::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kselector_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KSelector::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kselector_dropevent_isbase) {
            kselector_dropevent_isbase = false;
            KSelector::dropEvent(event);
            return;
        }
        auto dropevent_cb = kselector_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KSelector::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kselector_showevent_isbase) {
            kselector_showevent_isbase = false;
            KSelector::showEvent(event);
            return;
        }
        auto showevent_cb = kselector_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KSelector::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kselector_hideevent_isbase) {
            kselector_hideevent_isbase = false;
            KSelector::hideEvent(event);
            return;
        }
        auto hideevent_cb = kselector_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KSelector::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kselector_nativeevent_isbase) {
            kselector_nativeevent_isbase = false;
            return KSelector::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kselector_nativeevent_callback;
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
        return KSelector::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kselector_metric_isbase) {
            kselector_metric_isbase = false;
            return KSelector::metric(param1);
        }
        auto metric_cb = kselector_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSelector::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kselector_initpainter_isbase) {
            kselector_initpainter_isbase = false;
            KSelector::initPainter(painter);
            return;
        }
        auto initpainter_cb = kselector_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KSelector::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kselector_redirected_isbase) {
            kselector_redirected_isbase = false;
            return KSelector::redirected(offset);
        }
        auto redirected_cb = kselector_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KSelector::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kselector_sharedpainter_isbase) {
            kselector_sharedpainter_isbase = false;
            return KSelector::sharedPainter();
        }
        auto sharedpainter_cb = kselector_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KSelector::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kselector_inputmethodevent_isbase) {
            kselector_inputmethodevent_isbase = false;
            KSelector::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kselector_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KSelector::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kselector_inputmethodquery_isbase) {
            kselector_inputmethodquery_isbase = false;
            return KSelector::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kselector_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KSelector::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kselector_focusnextprevchild_isbase) {
            kselector_focusnextprevchild_isbase = false;
            return KSelector::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kselector_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KSelector::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kselector_eventfilter_isbase) {
            kselector_eventfilter_isbase = false;
            return KSelector::eventFilter(watched, event);
        }
        auto eventfilter_cb = kselector_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSelector::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kselector_childevent_isbase) {
            kselector_childevent_isbase = false;
            KSelector::childEvent(event);
            return;
        }
        auto childevent_cb = kselector_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KSelector::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kselector_customevent_isbase) {
            kselector_customevent_isbase = false;
            KSelector::customEvent(event);
            return;
        }
        auto customevent_cb = kselector_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KSelector::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kselector_connectnotify_isbase) {
            kselector_connectnotify_isbase = false;
            KSelector::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kselector_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KSelector::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kselector_disconnectnotify_isbase) {
            kselector_disconnectnotify_isbase = false;
            KSelector::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kselector_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KSelector::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setRepeatAction(QAbstractSlider::SliderAction action) {
        if (kselector_setrepeataction_isbase) {
            kselector_setrepeataction_isbase = false;
            KSelector::setRepeatAction(action);
            return;
        }
        auto setrepeataction_cb = kselector_setrepeataction_callback;
        if (setrepeataction_cb) {
            int cbval1 = static_cast<int>(action);

            setrepeataction_cb(this, cbval1);
            return;
        }
        KSelector::setRepeatAction(action);
    }

    // Virtual method for C ABI access and custom callback
    QAbstractSlider::SliderAction repeatAction() const {
        if (kselector_repeataction_isbase) {
            kselector_repeataction_isbase = false;
            return KSelector::repeatAction();
        }
        auto repeataction_cb = kselector_repeataction_callback;
        if (repeataction_cb) {
            int callback_ret = repeataction_cb();
            return static_cast<QAbstractSlider::SliderAction>(callback_ret);
        }
        return KSelector::repeatAction();
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kselector_updatemicrofocus_isbase) {
            kselector_updatemicrofocus_isbase = false;
            KSelector::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kselector_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KSelector::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kselector_create_isbase) {
            kselector_create_isbase = false;
            KSelector::create();
            return;
        }
        auto create_cb = kselector_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KSelector::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kselector_destroy_isbase) {
            kselector_destroy_isbase = false;
            KSelector::destroy();
            return;
        }
        auto destroy_cb = kselector_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KSelector::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kselector_focusnextchild_isbase) {
            kselector_focusnextchild_isbase = false;
            return KSelector::focusNextChild();
        }
        auto focusnextchild_cb = kselector_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KSelector::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kselector_focuspreviouschild_isbase) {
            kselector_focuspreviouschild_isbase = false;
            return KSelector::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kselector_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KSelector::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kselector_sender_isbase) {
            kselector_sender_isbase = false;
            return KSelector::sender();
        }
        auto sender_cb = kselector_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KSelector::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kselector_sendersignalindex_isbase) {
            kselector_sendersignalindex_isbase = false;
            return KSelector::senderSignalIndex();
        }
        auto sendersignalindex_cb = kselector_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KSelector::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kselector_receivers_isbase) {
            kselector_receivers_isbase = false;
            return KSelector::receivers(signal);
        }
        auto receivers_cb = kselector_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSelector::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kselector_issignalconnected_isbase) {
            kselector_issignalconnected_isbase = false;
            return KSelector::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kselector_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KSelector::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kselector_getdecodedmetricf_isbase) {
            kselector_getdecodedmetricf_isbase = false;
            return KSelector::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kselector_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KSelector::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KSelector_DrawContents(KSelector* self, QPainter* param1);
    friend void KSelector_SuperDrawContents(KSelector* self, QPainter* param1);
    friend void KSelector_DrawArrow(KSelector* self, QPainter* painter, const QPoint* pos);
    friend void KSelector_SuperDrawArrow(KSelector* self, QPainter* painter, const QPoint* pos);
    friend void KSelector_PaintEvent(KSelector* self, QPaintEvent* param1);
    friend void KSelector_SuperPaintEvent(KSelector* self, QPaintEvent* param1);
    friend void KSelector_MousePressEvent(KSelector* self, QMouseEvent* e);
    friend void KSelector_SuperMousePressEvent(KSelector* self, QMouseEvent* e);
    friend void KSelector_MouseMoveEvent(KSelector* self, QMouseEvent* e);
    friend void KSelector_SuperMouseMoveEvent(KSelector* self, QMouseEvent* e);
    friend void KSelector_MouseReleaseEvent(KSelector* self, QMouseEvent* e);
    friend void KSelector_SuperMouseReleaseEvent(KSelector* self, QMouseEvent* e);
    friend void KSelector_WheelEvent(KSelector* self, QWheelEvent* param1);
    friend void KSelector_SuperWheelEvent(KSelector* self, QWheelEvent* param1);
    friend bool KSelector_Event(KSelector* self, QEvent* e);
    friend bool KSelector_SuperEvent(KSelector* self, QEvent* e);
    friend void KSelector_SliderChange(KSelector* self, int change);
    friend void KSelector_SuperSliderChange(KSelector* self, int change);
    friend void KSelector_KeyPressEvent(KSelector* self, QKeyEvent* ev);
    friend void KSelector_SuperKeyPressEvent(KSelector* self, QKeyEvent* ev);
    friend void KSelector_TimerEvent(KSelector* self, QTimerEvent* param1);
    friend void KSelector_SuperTimerEvent(KSelector* self, QTimerEvent* param1);
    friend void KSelector_ChangeEvent(KSelector* self, QEvent* e);
    friend void KSelector_SuperChangeEvent(KSelector* self, QEvent* e);
    friend void KSelector_MouseDoubleClickEvent(KSelector* self, QMouseEvent* event);
    friend void KSelector_SuperMouseDoubleClickEvent(KSelector* self, QMouseEvent* event);
    friend void KSelector_KeyReleaseEvent(KSelector* self, QKeyEvent* event);
    friend void KSelector_SuperKeyReleaseEvent(KSelector* self, QKeyEvent* event);
    friend void KSelector_FocusInEvent(KSelector* self, QFocusEvent* event);
    friend void KSelector_SuperFocusInEvent(KSelector* self, QFocusEvent* event);
    friend void KSelector_FocusOutEvent(KSelector* self, QFocusEvent* event);
    friend void KSelector_SuperFocusOutEvent(KSelector* self, QFocusEvent* event);
    friend void KSelector_EnterEvent(KSelector* self, QEnterEvent* event);
    friend void KSelector_SuperEnterEvent(KSelector* self, QEnterEvent* event);
    friend void KSelector_LeaveEvent(KSelector* self, QEvent* event);
    friend void KSelector_SuperLeaveEvent(KSelector* self, QEvent* event);
    friend void KSelector_MoveEvent(KSelector* self, QMoveEvent* event);
    friend void KSelector_SuperMoveEvent(KSelector* self, QMoveEvent* event);
    friend void KSelector_ResizeEvent(KSelector* self, QResizeEvent* event);
    friend void KSelector_SuperResizeEvent(KSelector* self, QResizeEvent* event);
    friend void KSelector_CloseEvent(KSelector* self, QCloseEvent* event);
    friend void KSelector_SuperCloseEvent(KSelector* self, QCloseEvent* event);
    friend void KSelector_ContextMenuEvent(KSelector* self, QContextMenuEvent* event);
    friend void KSelector_SuperContextMenuEvent(KSelector* self, QContextMenuEvent* event);
    friend void KSelector_TabletEvent(KSelector* self, QTabletEvent* event);
    friend void KSelector_SuperTabletEvent(KSelector* self, QTabletEvent* event);
    friend void KSelector_ActionEvent(KSelector* self, QActionEvent* event);
    friend void KSelector_SuperActionEvent(KSelector* self, QActionEvent* event);
    friend void KSelector_DragEnterEvent(KSelector* self, QDragEnterEvent* event);
    friend void KSelector_SuperDragEnterEvent(KSelector* self, QDragEnterEvent* event);
    friend void KSelector_DragMoveEvent(KSelector* self, QDragMoveEvent* event);
    friend void KSelector_SuperDragMoveEvent(KSelector* self, QDragMoveEvent* event);
    friend void KSelector_DragLeaveEvent(KSelector* self, QDragLeaveEvent* event);
    friend void KSelector_SuperDragLeaveEvent(KSelector* self, QDragLeaveEvent* event);
    friend void KSelector_DropEvent(KSelector* self, QDropEvent* event);
    friend void KSelector_SuperDropEvent(KSelector* self, QDropEvent* event);
    friend void KSelector_ShowEvent(KSelector* self, QShowEvent* event);
    friend void KSelector_SuperShowEvent(KSelector* self, QShowEvent* event);
    friend void KSelector_HideEvent(KSelector* self, QHideEvent* event);
    friend void KSelector_SuperHideEvent(KSelector* self, QHideEvent* event);
    friend bool KSelector_NativeEvent(KSelector* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KSelector_SuperNativeEvent(KSelector* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KSelector_Metric(const KSelector* self, int param1);
    friend int KSelector_SuperMetric(const KSelector* self, int param1);
    friend void KSelector_InitPainter(const KSelector* self, QPainter* painter);
    friend void KSelector_SuperInitPainter(const KSelector* self, QPainter* painter);
    friend QPaintDevice* KSelector_Redirected(const KSelector* self, QPoint* offset);
    friend QPaintDevice* KSelector_SuperRedirected(const KSelector* self, QPoint* offset);
    friend QPainter* KSelector_SharedPainter(const KSelector* self);
    friend QPainter* KSelector_SuperSharedPainter(const KSelector* self);
    friend void KSelector_InputMethodEvent(KSelector* self, QInputMethodEvent* param1);
    friend void KSelector_SuperInputMethodEvent(KSelector* self, QInputMethodEvent* param1);
    friend bool KSelector_FocusNextPrevChild(KSelector* self, bool next);
    friend bool KSelector_SuperFocusNextPrevChild(KSelector* self, bool next);
    friend void KSelector_ChildEvent(KSelector* self, QChildEvent* event);
    friend void KSelector_SuperChildEvent(KSelector* self, QChildEvent* event);
    friend void KSelector_CustomEvent(KSelector* self, QEvent* event);
    friend void KSelector_SuperCustomEvent(KSelector* self, QEvent* event);
    friend void KSelector_ConnectNotify(KSelector* self, const QMetaMethod* signal);
    friend void KSelector_SuperConnectNotify(KSelector* self, const QMetaMethod* signal);
    friend void KSelector_DisconnectNotify(KSelector* self, const QMetaMethod* signal);
    friend void KSelector_SuperDisconnectNotify(KSelector* self, const QMetaMethod* signal);
    friend void KSelector_SetRepeatAction(KSelector* self, int action);
    friend void KSelector_SuperSetRepeatAction(KSelector* self, int action);
    friend int KSelector_RepeatAction(const KSelector* self);
    friend int KSelector_SuperRepeatAction(const KSelector* self);
    friend void KSelector_UpdateMicroFocus(KSelector* self);
    friend void KSelector_SuperUpdateMicroFocus(KSelector* self);
    friend void KSelector_Create(KSelector* self);
    friend void KSelector_SuperCreate(KSelector* self);
    friend void KSelector_Destroy(KSelector* self);
    friend void KSelector_SuperDestroy(KSelector* self);
    friend bool KSelector_FocusNextChild(KSelector* self);
    friend bool KSelector_SuperFocusNextChild(KSelector* self);
    friend bool KSelector_FocusPreviousChild(KSelector* self);
    friend bool KSelector_SuperFocusPreviousChild(KSelector* self);
    friend QObject* KSelector_Sender(const KSelector* self);
    friend QObject* KSelector_SuperSender(const KSelector* self);
    friend int KSelector_SenderSignalIndex(const KSelector* self);
    friend int KSelector_SuperSenderSignalIndex(const KSelector* self);
    friend int KSelector_Receivers(const KSelector* self, const char* signal);
    friend int KSelector_SuperReceivers(const KSelector* self, const char* signal);
    friend bool KSelector_IsSignalConnected(const KSelector* self, const QMetaMethod* signal);
    friend bool KSelector_SuperIsSignalConnected(const KSelector* self, const QMetaMethod* signal);
    friend double KSelector_GetDecodedMetricF(const KSelector* self, int metricA, int metricB);
    friend double KSelector_SuperGetDecodedMetricF(const KSelector* self, int metricA, int metricB);
};

// This class is a subclass of KGradientSelector so that we can call protected methods
class VirtualKGradientSelector final : public KGradientSelector {

  public:
    // Virtual class boolean flag
    bool isVirtualKGradientSelector = true;

    // Virtual class public types (including callbacks)
    using QAbstractSlider::SliderChange;
    using KGradientSelector_MetaObject_Callback = QMetaObject* (*)();
    using KGradientSelector_Metacast_Callback = void* (*)(KGradientSelector*, const char*);
    using KGradientSelector_Metacall_Callback = int (*)(KGradientSelector*, int, int, void**);
    using KGradientSelector_DrawContents_Callback = void (*)(KGradientSelector*, QPainter*);
    using KGradientSelector_MinimumSize_Callback = QSize* (*)();
    using KGradientSelector_DrawArrow_Callback = void (*)(KGradientSelector*, QPainter*, QPoint*);
    using KGradientSelector_PaintEvent_Callback = void (*)(KGradientSelector*, QPaintEvent*);
    using KGradientSelector_MousePressEvent_Callback = void (*)(KGradientSelector*, QMouseEvent*);
    using KGradientSelector_MouseMoveEvent_Callback = void (*)(KGradientSelector*, QMouseEvent*);
    using KGradientSelector_MouseReleaseEvent_Callback = void (*)(KGradientSelector*, QMouseEvent*);
    using KGradientSelector_WheelEvent_Callback = void (*)(KGradientSelector*, QWheelEvent*);
    using KGradientSelector_Event_Callback = bool (*)(KGradientSelector*, QEvent*);
    using KGradientSelector_SliderChange_Callback = void (*)(KGradientSelector*, int);
    using KGradientSelector_KeyPressEvent_Callback = void (*)(KGradientSelector*, QKeyEvent*);
    using KGradientSelector_TimerEvent_Callback = void (*)(KGradientSelector*, QTimerEvent*);
    using KGradientSelector_ChangeEvent_Callback = void (*)(KGradientSelector*, QEvent*);
    using KGradientSelector_DevType_Callback = int (*)();
    using KGradientSelector_SetVisible_Callback = void (*)(KGradientSelector*, bool);
    using KGradientSelector_SizeHint_Callback = QSize* (*)();
    using KGradientSelector_MinimumSizeHint_Callback = QSize* (*)();
    using KGradientSelector_HeightForWidth_Callback = int (*)(const KGradientSelector*, int);
    using KGradientSelector_HasHeightForWidth_Callback = bool (*)();
    using KGradientSelector_PaintEngine_Callback = QPaintEngine* (*)();
    using KGradientSelector_MouseDoubleClickEvent_Callback = void (*)(KGradientSelector*, QMouseEvent*);
    using KGradientSelector_KeyReleaseEvent_Callback = void (*)(KGradientSelector*, QKeyEvent*);
    using KGradientSelector_FocusInEvent_Callback = void (*)(KGradientSelector*, QFocusEvent*);
    using KGradientSelector_FocusOutEvent_Callback = void (*)(KGradientSelector*, QFocusEvent*);
    using KGradientSelector_EnterEvent_Callback = void (*)(KGradientSelector*, QEnterEvent*);
    using KGradientSelector_LeaveEvent_Callback = void (*)(KGradientSelector*, QEvent*);
    using KGradientSelector_MoveEvent_Callback = void (*)(KGradientSelector*, QMoveEvent*);
    using KGradientSelector_ResizeEvent_Callback = void (*)(KGradientSelector*, QResizeEvent*);
    using KGradientSelector_CloseEvent_Callback = void (*)(KGradientSelector*, QCloseEvent*);
    using KGradientSelector_ContextMenuEvent_Callback = void (*)(KGradientSelector*, QContextMenuEvent*);
    using KGradientSelector_TabletEvent_Callback = void (*)(KGradientSelector*, QTabletEvent*);
    using KGradientSelector_ActionEvent_Callback = void (*)(KGradientSelector*, QActionEvent*);
    using KGradientSelector_DragEnterEvent_Callback = void (*)(KGradientSelector*, QDragEnterEvent*);
    using KGradientSelector_DragMoveEvent_Callback = void (*)(KGradientSelector*, QDragMoveEvent*);
    using KGradientSelector_DragLeaveEvent_Callback = void (*)(KGradientSelector*, QDragLeaveEvent*);
    using KGradientSelector_DropEvent_Callback = void (*)(KGradientSelector*, QDropEvent*);
    using KGradientSelector_ShowEvent_Callback = void (*)(KGradientSelector*, QShowEvent*);
    using KGradientSelector_HideEvent_Callback = void (*)(KGradientSelector*, QHideEvent*);
    using KGradientSelector_NativeEvent_Callback = bool (*)(KGradientSelector*, libqt_string, void*, intptr_t*);
    using KGradientSelector_Metric_Callback = int (*)(const KGradientSelector*, int);
    using KGradientSelector_InitPainter_Callback = void (*)(const KGradientSelector*, QPainter*);
    using KGradientSelector_Redirected_Callback = QPaintDevice* (*)(const KGradientSelector*, QPoint*);
    using KGradientSelector_SharedPainter_Callback = QPainter* (*)();
    using KGradientSelector_InputMethodEvent_Callback = void (*)(KGradientSelector*, QInputMethodEvent*);
    using KGradientSelector_InputMethodQuery_Callback = QVariant* (*)(const KGradientSelector*, int);
    using KGradientSelector_FocusNextPrevChild_Callback = bool (*)(KGradientSelector*, bool);
    using KGradientSelector_EventFilter_Callback = bool (*)(KGradientSelector*, QObject*, QEvent*);
    using KGradientSelector_ChildEvent_Callback = void (*)(KGradientSelector*, QChildEvent*);
    using KGradientSelector_CustomEvent_Callback = void (*)(KGradientSelector*, QEvent*);
    using KGradientSelector_ConnectNotify_Callback = void (*)(KGradientSelector*, QMetaMethod*);
    using KGradientSelector_DisconnectNotify_Callback = void (*)(KGradientSelector*, QMetaMethod*);
    using KGradientSelector_SetRepeatAction_Callback = void (*)(KGradientSelector*, int);
    using KGradientSelector_RepeatAction_Callback = int (*)();
    using KGradientSelector_UpdateMicroFocus_Callback = void (*)();
    using KGradientSelector_Create_Callback = void (*)();
    using KGradientSelector_Destroy_Callback = void (*)();
    using KGradientSelector_FocusNextChild_Callback = bool (*)();
    using KGradientSelector_FocusPreviousChild_Callback = bool (*)();
    using KGradientSelector_Sender_Callback = QObject* (*)();
    using KGradientSelector_SenderSignalIndex_Callback = int (*)();
    using KGradientSelector_Receivers_Callback = int (*)(const KGradientSelector*, const char*);
    using KGradientSelector_IsSignalConnected_Callback = bool (*)(const KGradientSelector*, QMetaMethod*);
    using KGradientSelector_GetDecodedMetricF_Callback = double (*)(const KGradientSelector*, int, int);

  protected:
    // Instance callback storage
    KGradientSelector_MetaObject_Callback kgradientselector_metaobject_callback = nullptr;
    KGradientSelector_Metacast_Callback kgradientselector_metacast_callback = nullptr;
    KGradientSelector_Metacall_Callback kgradientselector_metacall_callback = nullptr;
    KGradientSelector_DrawContents_Callback kgradientselector_drawcontents_callback = nullptr;
    KGradientSelector_MinimumSize_Callback kgradientselector_minimumsize_callback = nullptr;
    KGradientSelector_DrawArrow_Callback kgradientselector_drawarrow_callback = nullptr;
    KGradientSelector_PaintEvent_Callback kgradientselector_paintevent_callback = nullptr;
    KGradientSelector_MousePressEvent_Callback kgradientselector_mousepressevent_callback = nullptr;
    KGradientSelector_MouseMoveEvent_Callback kgradientselector_mousemoveevent_callback = nullptr;
    KGradientSelector_MouseReleaseEvent_Callback kgradientselector_mousereleaseevent_callback = nullptr;
    KGradientSelector_WheelEvent_Callback kgradientselector_wheelevent_callback = nullptr;
    KGradientSelector_Event_Callback kgradientselector_event_callback = nullptr;
    KGradientSelector_SliderChange_Callback kgradientselector_sliderchange_callback = nullptr;
    KGradientSelector_KeyPressEvent_Callback kgradientselector_keypressevent_callback = nullptr;
    KGradientSelector_TimerEvent_Callback kgradientselector_timerevent_callback = nullptr;
    KGradientSelector_ChangeEvent_Callback kgradientselector_changeevent_callback = nullptr;
    KGradientSelector_DevType_Callback kgradientselector_devtype_callback = nullptr;
    KGradientSelector_SetVisible_Callback kgradientselector_setvisible_callback = nullptr;
    KGradientSelector_SizeHint_Callback kgradientselector_sizehint_callback = nullptr;
    KGradientSelector_MinimumSizeHint_Callback kgradientselector_minimumsizehint_callback = nullptr;
    KGradientSelector_HeightForWidth_Callback kgradientselector_heightforwidth_callback = nullptr;
    KGradientSelector_HasHeightForWidth_Callback kgradientselector_hasheightforwidth_callback = nullptr;
    KGradientSelector_PaintEngine_Callback kgradientselector_paintengine_callback = nullptr;
    KGradientSelector_MouseDoubleClickEvent_Callback kgradientselector_mousedoubleclickevent_callback = nullptr;
    KGradientSelector_KeyReleaseEvent_Callback kgradientselector_keyreleaseevent_callback = nullptr;
    KGradientSelector_FocusInEvent_Callback kgradientselector_focusinevent_callback = nullptr;
    KGradientSelector_FocusOutEvent_Callback kgradientselector_focusoutevent_callback = nullptr;
    KGradientSelector_EnterEvent_Callback kgradientselector_enterevent_callback = nullptr;
    KGradientSelector_LeaveEvent_Callback kgradientselector_leaveevent_callback = nullptr;
    KGradientSelector_MoveEvent_Callback kgradientselector_moveevent_callback = nullptr;
    KGradientSelector_ResizeEvent_Callback kgradientselector_resizeevent_callback = nullptr;
    KGradientSelector_CloseEvent_Callback kgradientselector_closeevent_callback = nullptr;
    KGradientSelector_ContextMenuEvent_Callback kgradientselector_contextmenuevent_callback = nullptr;
    KGradientSelector_TabletEvent_Callback kgradientselector_tabletevent_callback = nullptr;
    KGradientSelector_ActionEvent_Callback kgradientselector_actionevent_callback = nullptr;
    KGradientSelector_DragEnterEvent_Callback kgradientselector_dragenterevent_callback = nullptr;
    KGradientSelector_DragMoveEvent_Callback kgradientselector_dragmoveevent_callback = nullptr;
    KGradientSelector_DragLeaveEvent_Callback kgradientselector_dragleaveevent_callback = nullptr;
    KGradientSelector_DropEvent_Callback kgradientselector_dropevent_callback = nullptr;
    KGradientSelector_ShowEvent_Callback kgradientselector_showevent_callback = nullptr;
    KGradientSelector_HideEvent_Callback kgradientselector_hideevent_callback = nullptr;
    KGradientSelector_NativeEvent_Callback kgradientselector_nativeevent_callback = nullptr;
    KGradientSelector_Metric_Callback kgradientselector_metric_callback = nullptr;
    KGradientSelector_InitPainter_Callback kgradientselector_initpainter_callback = nullptr;
    KGradientSelector_Redirected_Callback kgradientselector_redirected_callback = nullptr;
    KGradientSelector_SharedPainter_Callback kgradientselector_sharedpainter_callback = nullptr;
    KGradientSelector_InputMethodEvent_Callback kgradientselector_inputmethodevent_callback = nullptr;
    KGradientSelector_InputMethodQuery_Callback kgradientselector_inputmethodquery_callback = nullptr;
    KGradientSelector_FocusNextPrevChild_Callback kgradientselector_focusnextprevchild_callback = nullptr;
    KGradientSelector_EventFilter_Callback kgradientselector_eventfilter_callback = nullptr;
    KGradientSelector_ChildEvent_Callback kgradientselector_childevent_callback = nullptr;
    KGradientSelector_CustomEvent_Callback kgradientselector_customevent_callback = nullptr;
    KGradientSelector_ConnectNotify_Callback kgradientselector_connectnotify_callback = nullptr;
    KGradientSelector_DisconnectNotify_Callback kgradientselector_disconnectnotify_callback = nullptr;
    KGradientSelector_SetRepeatAction_Callback kgradientselector_setrepeataction_callback = nullptr;
    KGradientSelector_RepeatAction_Callback kgradientselector_repeataction_callback = nullptr;
    KGradientSelector_UpdateMicroFocus_Callback kgradientselector_updatemicrofocus_callback = nullptr;
    KGradientSelector_Create_Callback kgradientselector_create_callback = nullptr;
    KGradientSelector_Destroy_Callback kgradientselector_destroy_callback = nullptr;
    KGradientSelector_FocusNextChild_Callback kgradientselector_focusnextchild_callback = nullptr;
    KGradientSelector_FocusPreviousChild_Callback kgradientselector_focuspreviouschild_callback = nullptr;
    KGradientSelector_Sender_Callback kgradientselector_sender_callback = nullptr;
    KGradientSelector_SenderSignalIndex_Callback kgradientselector_sendersignalindex_callback = nullptr;
    KGradientSelector_Receivers_Callback kgradientselector_receivers_callback = nullptr;
    KGradientSelector_IsSignalConnected_Callback kgradientselector_issignalconnected_callback = nullptr;
    KGradientSelector_GetDecodedMetricF_Callback kgradientselector_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kgradientselector_metaobject_isbase = false;
    mutable bool kgradientselector_metacast_isbase = false;
    mutable bool kgradientselector_metacall_isbase = false;
    mutable bool kgradientselector_drawcontents_isbase = false;
    mutable bool kgradientselector_minimumsize_isbase = false;
    mutable bool kgradientselector_drawarrow_isbase = false;
    mutable bool kgradientselector_paintevent_isbase = false;
    mutable bool kgradientselector_mousepressevent_isbase = false;
    mutable bool kgradientselector_mousemoveevent_isbase = false;
    mutable bool kgradientselector_mousereleaseevent_isbase = false;
    mutable bool kgradientselector_wheelevent_isbase = false;
    mutable bool kgradientselector_event_isbase = false;
    mutable bool kgradientselector_sliderchange_isbase = false;
    mutable bool kgradientselector_keypressevent_isbase = false;
    mutable bool kgradientselector_timerevent_isbase = false;
    mutable bool kgradientselector_changeevent_isbase = false;
    mutable bool kgradientselector_devtype_isbase = false;
    mutable bool kgradientselector_setvisible_isbase = false;
    mutable bool kgradientselector_sizehint_isbase = false;
    mutable bool kgradientselector_minimumsizehint_isbase = false;
    mutable bool kgradientselector_heightforwidth_isbase = false;
    mutable bool kgradientselector_hasheightforwidth_isbase = false;
    mutable bool kgradientselector_paintengine_isbase = false;
    mutable bool kgradientselector_mousedoubleclickevent_isbase = false;
    mutable bool kgradientselector_keyreleaseevent_isbase = false;
    mutable bool kgradientselector_focusinevent_isbase = false;
    mutable bool kgradientselector_focusoutevent_isbase = false;
    mutable bool kgradientselector_enterevent_isbase = false;
    mutable bool kgradientselector_leaveevent_isbase = false;
    mutable bool kgradientselector_moveevent_isbase = false;
    mutable bool kgradientselector_resizeevent_isbase = false;
    mutable bool kgradientselector_closeevent_isbase = false;
    mutable bool kgradientselector_contextmenuevent_isbase = false;
    mutable bool kgradientselector_tabletevent_isbase = false;
    mutable bool kgradientselector_actionevent_isbase = false;
    mutable bool kgradientselector_dragenterevent_isbase = false;
    mutable bool kgradientselector_dragmoveevent_isbase = false;
    mutable bool kgradientselector_dragleaveevent_isbase = false;
    mutable bool kgradientselector_dropevent_isbase = false;
    mutable bool kgradientselector_showevent_isbase = false;
    mutable bool kgradientselector_hideevent_isbase = false;
    mutable bool kgradientselector_nativeevent_isbase = false;
    mutable bool kgradientselector_metric_isbase = false;
    mutable bool kgradientselector_initpainter_isbase = false;
    mutable bool kgradientselector_redirected_isbase = false;
    mutable bool kgradientselector_sharedpainter_isbase = false;
    mutable bool kgradientselector_inputmethodevent_isbase = false;
    mutable bool kgradientselector_inputmethodquery_isbase = false;
    mutable bool kgradientselector_focusnextprevchild_isbase = false;
    mutable bool kgradientselector_eventfilter_isbase = false;
    mutable bool kgradientselector_childevent_isbase = false;
    mutable bool kgradientselector_customevent_isbase = false;
    mutable bool kgradientselector_connectnotify_isbase = false;
    mutable bool kgradientselector_disconnectnotify_isbase = false;
    mutable bool kgradientselector_setrepeataction_isbase = false;
    mutable bool kgradientselector_repeataction_isbase = false;
    mutable bool kgradientselector_updatemicrofocus_isbase = false;
    mutable bool kgradientselector_create_isbase = false;
    mutable bool kgradientselector_destroy_isbase = false;
    mutable bool kgradientselector_focusnextchild_isbase = false;
    mutable bool kgradientselector_focuspreviouschild_isbase = false;
    mutable bool kgradientselector_sender_isbase = false;
    mutable bool kgradientselector_sendersignalindex_isbase = false;
    mutable bool kgradientselector_receivers_isbase = false;
    mutable bool kgradientselector_issignalconnected_isbase = false;
    mutable bool kgradientselector_getdecodedmetricf_isbase = false;

  public:
    VirtualKGradientSelector(QWidget* parent) : KGradientSelector(parent) {};
    VirtualKGradientSelector() : KGradientSelector() {};
    VirtualKGradientSelector(Qt::Orientation o) : KGradientSelector(o) {};
    VirtualKGradientSelector(Qt::Orientation o, QWidget* parent) : KGradientSelector(o, parent) {};

    // Callback setters
    inline void setKGradientSelector_MetaObject_Callback(KGradientSelector_MetaObject_Callback cb) { kgradientselector_metaobject_callback = cb; }
    inline void setKGradientSelector_Metacast_Callback(KGradientSelector_Metacast_Callback cb) { kgradientselector_metacast_callback = cb; }
    inline void setKGradientSelector_Metacall_Callback(KGradientSelector_Metacall_Callback cb) { kgradientselector_metacall_callback = cb; }
    inline void setKGradientSelector_DrawContents_Callback(KGradientSelector_DrawContents_Callback cb) { kgradientselector_drawcontents_callback = cb; }
    inline void setKGradientSelector_MinimumSize_Callback(KGradientSelector_MinimumSize_Callback cb) { kgradientselector_minimumsize_callback = cb; }
    inline void setKGradientSelector_DrawArrow_Callback(KGradientSelector_DrawArrow_Callback cb) { kgradientselector_drawarrow_callback = cb; }
    inline void setKGradientSelector_PaintEvent_Callback(KGradientSelector_PaintEvent_Callback cb) { kgradientselector_paintevent_callback = cb; }
    inline void setKGradientSelector_MousePressEvent_Callback(KGradientSelector_MousePressEvent_Callback cb) { kgradientselector_mousepressevent_callback = cb; }
    inline void setKGradientSelector_MouseMoveEvent_Callback(KGradientSelector_MouseMoveEvent_Callback cb) { kgradientselector_mousemoveevent_callback = cb; }
    inline void setKGradientSelector_MouseReleaseEvent_Callback(KGradientSelector_MouseReleaseEvent_Callback cb) { kgradientselector_mousereleaseevent_callback = cb; }
    inline void setKGradientSelector_WheelEvent_Callback(KGradientSelector_WheelEvent_Callback cb) { kgradientselector_wheelevent_callback = cb; }
    inline void setKGradientSelector_Event_Callback(KGradientSelector_Event_Callback cb) { kgradientselector_event_callback = cb; }
    inline void setKGradientSelector_SliderChange_Callback(KGradientSelector_SliderChange_Callback cb) { kgradientselector_sliderchange_callback = cb; }
    inline void setKGradientSelector_KeyPressEvent_Callback(KGradientSelector_KeyPressEvent_Callback cb) { kgradientselector_keypressevent_callback = cb; }
    inline void setKGradientSelector_TimerEvent_Callback(KGradientSelector_TimerEvent_Callback cb) { kgradientselector_timerevent_callback = cb; }
    inline void setKGradientSelector_ChangeEvent_Callback(KGradientSelector_ChangeEvent_Callback cb) { kgradientselector_changeevent_callback = cb; }
    inline void setKGradientSelector_DevType_Callback(KGradientSelector_DevType_Callback cb) { kgradientselector_devtype_callback = cb; }
    inline void setKGradientSelector_SetVisible_Callback(KGradientSelector_SetVisible_Callback cb) { kgradientselector_setvisible_callback = cb; }
    inline void setKGradientSelector_SizeHint_Callback(KGradientSelector_SizeHint_Callback cb) { kgradientselector_sizehint_callback = cb; }
    inline void setKGradientSelector_MinimumSizeHint_Callback(KGradientSelector_MinimumSizeHint_Callback cb) { kgradientselector_minimumsizehint_callback = cb; }
    inline void setKGradientSelector_HeightForWidth_Callback(KGradientSelector_HeightForWidth_Callback cb) { kgradientselector_heightforwidth_callback = cb; }
    inline void setKGradientSelector_HasHeightForWidth_Callback(KGradientSelector_HasHeightForWidth_Callback cb) { kgradientselector_hasheightforwidth_callback = cb; }
    inline void setKGradientSelector_PaintEngine_Callback(KGradientSelector_PaintEngine_Callback cb) { kgradientselector_paintengine_callback = cb; }
    inline void setKGradientSelector_MouseDoubleClickEvent_Callback(KGradientSelector_MouseDoubleClickEvent_Callback cb) { kgradientselector_mousedoubleclickevent_callback = cb; }
    inline void setKGradientSelector_KeyReleaseEvent_Callback(KGradientSelector_KeyReleaseEvent_Callback cb) { kgradientselector_keyreleaseevent_callback = cb; }
    inline void setKGradientSelector_FocusInEvent_Callback(KGradientSelector_FocusInEvent_Callback cb) { kgradientselector_focusinevent_callback = cb; }
    inline void setKGradientSelector_FocusOutEvent_Callback(KGradientSelector_FocusOutEvent_Callback cb) { kgradientselector_focusoutevent_callback = cb; }
    inline void setKGradientSelector_EnterEvent_Callback(KGradientSelector_EnterEvent_Callback cb) { kgradientselector_enterevent_callback = cb; }
    inline void setKGradientSelector_LeaveEvent_Callback(KGradientSelector_LeaveEvent_Callback cb) { kgradientselector_leaveevent_callback = cb; }
    inline void setKGradientSelector_MoveEvent_Callback(KGradientSelector_MoveEvent_Callback cb) { kgradientselector_moveevent_callback = cb; }
    inline void setKGradientSelector_ResizeEvent_Callback(KGradientSelector_ResizeEvent_Callback cb) { kgradientselector_resizeevent_callback = cb; }
    inline void setKGradientSelector_CloseEvent_Callback(KGradientSelector_CloseEvent_Callback cb) { kgradientselector_closeevent_callback = cb; }
    inline void setKGradientSelector_ContextMenuEvent_Callback(KGradientSelector_ContextMenuEvent_Callback cb) { kgradientselector_contextmenuevent_callback = cb; }
    inline void setKGradientSelector_TabletEvent_Callback(KGradientSelector_TabletEvent_Callback cb) { kgradientselector_tabletevent_callback = cb; }
    inline void setKGradientSelector_ActionEvent_Callback(KGradientSelector_ActionEvent_Callback cb) { kgradientselector_actionevent_callback = cb; }
    inline void setKGradientSelector_DragEnterEvent_Callback(KGradientSelector_DragEnterEvent_Callback cb) { kgradientselector_dragenterevent_callback = cb; }
    inline void setKGradientSelector_DragMoveEvent_Callback(KGradientSelector_DragMoveEvent_Callback cb) { kgradientselector_dragmoveevent_callback = cb; }
    inline void setKGradientSelector_DragLeaveEvent_Callback(KGradientSelector_DragLeaveEvent_Callback cb) { kgradientselector_dragleaveevent_callback = cb; }
    inline void setKGradientSelector_DropEvent_Callback(KGradientSelector_DropEvent_Callback cb) { kgradientselector_dropevent_callback = cb; }
    inline void setKGradientSelector_ShowEvent_Callback(KGradientSelector_ShowEvent_Callback cb) { kgradientselector_showevent_callback = cb; }
    inline void setKGradientSelector_HideEvent_Callback(KGradientSelector_HideEvent_Callback cb) { kgradientselector_hideevent_callback = cb; }
    inline void setKGradientSelector_NativeEvent_Callback(KGradientSelector_NativeEvent_Callback cb) { kgradientselector_nativeevent_callback = cb; }
    inline void setKGradientSelector_Metric_Callback(KGradientSelector_Metric_Callback cb) { kgradientselector_metric_callback = cb; }
    inline void setKGradientSelector_InitPainter_Callback(KGradientSelector_InitPainter_Callback cb) { kgradientselector_initpainter_callback = cb; }
    inline void setKGradientSelector_Redirected_Callback(KGradientSelector_Redirected_Callback cb) { kgradientselector_redirected_callback = cb; }
    inline void setKGradientSelector_SharedPainter_Callback(KGradientSelector_SharedPainter_Callback cb) { kgradientselector_sharedpainter_callback = cb; }
    inline void setKGradientSelector_InputMethodEvent_Callback(KGradientSelector_InputMethodEvent_Callback cb) { kgradientselector_inputmethodevent_callback = cb; }
    inline void setKGradientSelector_InputMethodQuery_Callback(KGradientSelector_InputMethodQuery_Callback cb) { kgradientselector_inputmethodquery_callback = cb; }
    inline void setKGradientSelector_FocusNextPrevChild_Callback(KGradientSelector_FocusNextPrevChild_Callback cb) { kgradientselector_focusnextprevchild_callback = cb; }
    inline void setKGradientSelector_EventFilter_Callback(KGradientSelector_EventFilter_Callback cb) { kgradientselector_eventfilter_callback = cb; }
    inline void setKGradientSelector_ChildEvent_Callback(KGradientSelector_ChildEvent_Callback cb) { kgradientselector_childevent_callback = cb; }
    inline void setKGradientSelector_CustomEvent_Callback(KGradientSelector_CustomEvent_Callback cb) { kgradientselector_customevent_callback = cb; }
    inline void setKGradientSelector_ConnectNotify_Callback(KGradientSelector_ConnectNotify_Callback cb) { kgradientselector_connectnotify_callback = cb; }
    inline void setKGradientSelector_DisconnectNotify_Callback(KGradientSelector_DisconnectNotify_Callback cb) { kgradientselector_disconnectnotify_callback = cb; }
    inline void setKGradientSelector_SetRepeatAction_Callback(KGradientSelector_SetRepeatAction_Callback cb) { kgradientselector_setrepeataction_callback = cb; }
    inline void setKGradientSelector_RepeatAction_Callback(KGradientSelector_RepeatAction_Callback cb) { kgradientselector_repeataction_callback = cb; }
    inline void setKGradientSelector_UpdateMicroFocus_Callback(KGradientSelector_UpdateMicroFocus_Callback cb) { kgradientselector_updatemicrofocus_callback = cb; }
    inline void setKGradientSelector_Create_Callback(KGradientSelector_Create_Callback cb) { kgradientselector_create_callback = cb; }
    inline void setKGradientSelector_Destroy_Callback(KGradientSelector_Destroy_Callback cb) { kgradientselector_destroy_callback = cb; }
    inline void setKGradientSelector_FocusNextChild_Callback(KGradientSelector_FocusNextChild_Callback cb) { kgradientselector_focusnextchild_callback = cb; }
    inline void setKGradientSelector_FocusPreviousChild_Callback(KGradientSelector_FocusPreviousChild_Callback cb) { kgradientselector_focuspreviouschild_callback = cb; }
    inline void setKGradientSelector_Sender_Callback(KGradientSelector_Sender_Callback cb) { kgradientselector_sender_callback = cb; }
    inline void setKGradientSelector_SenderSignalIndex_Callback(KGradientSelector_SenderSignalIndex_Callback cb) { kgradientselector_sendersignalindex_callback = cb; }
    inline void setKGradientSelector_Receivers_Callback(KGradientSelector_Receivers_Callback cb) { kgradientselector_receivers_callback = cb; }
    inline void setKGradientSelector_IsSignalConnected_Callback(KGradientSelector_IsSignalConnected_Callback cb) { kgradientselector_issignalconnected_callback = cb; }
    inline void setKGradientSelector_GetDecodedMetricF_Callback(KGradientSelector_GetDecodedMetricF_Callback cb) { kgradientselector_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKGradientSelector_MetaObject_IsBase(bool value) const { kgradientselector_metaobject_isbase = value; }
    inline void setKGradientSelector_Metacast_IsBase(bool value) const { kgradientselector_metacast_isbase = value; }
    inline void setKGradientSelector_Metacall_IsBase(bool value) const { kgradientselector_metacall_isbase = value; }
    inline void setKGradientSelector_DrawContents_IsBase(bool value) const { kgradientselector_drawcontents_isbase = value; }
    inline void setKGradientSelector_MinimumSize_IsBase(bool value) const { kgradientselector_minimumsize_isbase = value; }
    inline void setKGradientSelector_DrawArrow_IsBase(bool value) const { kgradientselector_drawarrow_isbase = value; }
    inline void setKGradientSelector_PaintEvent_IsBase(bool value) const { kgradientselector_paintevent_isbase = value; }
    inline void setKGradientSelector_MousePressEvent_IsBase(bool value) const { kgradientselector_mousepressevent_isbase = value; }
    inline void setKGradientSelector_MouseMoveEvent_IsBase(bool value) const { kgradientselector_mousemoveevent_isbase = value; }
    inline void setKGradientSelector_MouseReleaseEvent_IsBase(bool value) const { kgradientselector_mousereleaseevent_isbase = value; }
    inline void setKGradientSelector_WheelEvent_IsBase(bool value) const { kgradientselector_wheelevent_isbase = value; }
    inline void setKGradientSelector_Event_IsBase(bool value) const { kgradientselector_event_isbase = value; }
    inline void setKGradientSelector_SliderChange_IsBase(bool value) const { kgradientselector_sliderchange_isbase = value; }
    inline void setKGradientSelector_KeyPressEvent_IsBase(bool value) const { kgradientselector_keypressevent_isbase = value; }
    inline void setKGradientSelector_TimerEvent_IsBase(bool value) const { kgradientselector_timerevent_isbase = value; }
    inline void setKGradientSelector_ChangeEvent_IsBase(bool value) const { kgradientselector_changeevent_isbase = value; }
    inline void setKGradientSelector_DevType_IsBase(bool value) const { kgradientselector_devtype_isbase = value; }
    inline void setKGradientSelector_SetVisible_IsBase(bool value) const { kgradientselector_setvisible_isbase = value; }
    inline void setKGradientSelector_SizeHint_IsBase(bool value) const { kgradientselector_sizehint_isbase = value; }
    inline void setKGradientSelector_MinimumSizeHint_IsBase(bool value) const { kgradientselector_minimumsizehint_isbase = value; }
    inline void setKGradientSelector_HeightForWidth_IsBase(bool value) const { kgradientselector_heightforwidth_isbase = value; }
    inline void setKGradientSelector_HasHeightForWidth_IsBase(bool value) const { kgradientselector_hasheightforwidth_isbase = value; }
    inline void setKGradientSelector_PaintEngine_IsBase(bool value) const { kgradientselector_paintengine_isbase = value; }
    inline void setKGradientSelector_MouseDoubleClickEvent_IsBase(bool value) const { kgradientselector_mousedoubleclickevent_isbase = value; }
    inline void setKGradientSelector_KeyReleaseEvent_IsBase(bool value) const { kgradientselector_keyreleaseevent_isbase = value; }
    inline void setKGradientSelector_FocusInEvent_IsBase(bool value) const { kgradientselector_focusinevent_isbase = value; }
    inline void setKGradientSelector_FocusOutEvent_IsBase(bool value) const { kgradientselector_focusoutevent_isbase = value; }
    inline void setKGradientSelector_EnterEvent_IsBase(bool value) const { kgradientselector_enterevent_isbase = value; }
    inline void setKGradientSelector_LeaveEvent_IsBase(bool value) const { kgradientselector_leaveevent_isbase = value; }
    inline void setKGradientSelector_MoveEvent_IsBase(bool value) const { kgradientselector_moveevent_isbase = value; }
    inline void setKGradientSelector_ResizeEvent_IsBase(bool value) const { kgradientselector_resizeevent_isbase = value; }
    inline void setKGradientSelector_CloseEvent_IsBase(bool value) const { kgradientselector_closeevent_isbase = value; }
    inline void setKGradientSelector_ContextMenuEvent_IsBase(bool value) const { kgradientselector_contextmenuevent_isbase = value; }
    inline void setKGradientSelector_TabletEvent_IsBase(bool value) const { kgradientselector_tabletevent_isbase = value; }
    inline void setKGradientSelector_ActionEvent_IsBase(bool value) const { kgradientselector_actionevent_isbase = value; }
    inline void setKGradientSelector_DragEnterEvent_IsBase(bool value) const { kgradientselector_dragenterevent_isbase = value; }
    inline void setKGradientSelector_DragMoveEvent_IsBase(bool value) const { kgradientselector_dragmoveevent_isbase = value; }
    inline void setKGradientSelector_DragLeaveEvent_IsBase(bool value) const { kgradientselector_dragleaveevent_isbase = value; }
    inline void setKGradientSelector_DropEvent_IsBase(bool value) const { kgradientselector_dropevent_isbase = value; }
    inline void setKGradientSelector_ShowEvent_IsBase(bool value) const { kgradientselector_showevent_isbase = value; }
    inline void setKGradientSelector_HideEvent_IsBase(bool value) const { kgradientselector_hideevent_isbase = value; }
    inline void setKGradientSelector_NativeEvent_IsBase(bool value) const { kgradientselector_nativeevent_isbase = value; }
    inline void setKGradientSelector_Metric_IsBase(bool value) const { kgradientselector_metric_isbase = value; }
    inline void setKGradientSelector_InitPainter_IsBase(bool value) const { kgradientselector_initpainter_isbase = value; }
    inline void setKGradientSelector_Redirected_IsBase(bool value) const { kgradientselector_redirected_isbase = value; }
    inline void setKGradientSelector_SharedPainter_IsBase(bool value) const { kgradientselector_sharedpainter_isbase = value; }
    inline void setKGradientSelector_InputMethodEvent_IsBase(bool value) const { kgradientselector_inputmethodevent_isbase = value; }
    inline void setKGradientSelector_InputMethodQuery_IsBase(bool value) const { kgradientselector_inputmethodquery_isbase = value; }
    inline void setKGradientSelector_FocusNextPrevChild_IsBase(bool value) const { kgradientselector_focusnextprevchild_isbase = value; }
    inline void setKGradientSelector_EventFilter_IsBase(bool value) const { kgradientselector_eventfilter_isbase = value; }
    inline void setKGradientSelector_ChildEvent_IsBase(bool value) const { kgradientselector_childevent_isbase = value; }
    inline void setKGradientSelector_CustomEvent_IsBase(bool value) const { kgradientselector_customevent_isbase = value; }
    inline void setKGradientSelector_ConnectNotify_IsBase(bool value) const { kgradientselector_connectnotify_isbase = value; }
    inline void setKGradientSelector_DisconnectNotify_IsBase(bool value) const { kgradientselector_disconnectnotify_isbase = value; }
    inline void setKGradientSelector_SetRepeatAction_IsBase(bool value) const { kgradientselector_setrepeataction_isbase = value; }
    inline void setKGradientSelector_RepeatAction_IsBase(bool value) const { kgradientselector_repeataction_isbase = value; }
    inline void setKGradientSelector_UpdateMicroFocus_IsBase(bool value) const { kgradientselector_updatemicrofocus_isbase = value; }
    inline void setKGradientSelector_Create_IsBase(bool value) const { kgradientselector_create_isbase = value; }
    inline void setKGradientSelector_Destroy_IsBase(bool value) const { kgradientselector_destroy_isbase = value; }
    inline void setKGradientSelector_FocusNextChild_IsBase(bool value) const { kgradientselector_focusnextchild_isbase = value; }
    inline void setKGradientSelector_FocusPreviousChild_IsBase(bool value) const { kgradientselector_focuspreviouschild_isbase = value; }
    inline void setKGradientSelector_Sender_IsBase(bool value) const { kgradientselector_sender_isbase = value; }
    inline void setKGradientSelector_SenderSignalIndex_IsBase(bool value) const { kgradientselector_sendersignalindex_isbase = value; }
    inline void setKGradientSelector_Receivers_IsBase(bool value) const { kgradientselector_receivers_isbase = value; }
    inline void setKGradientSelector_IsSignalConnected_IsBase(bool value) const { kgradientselector_issignalconnected_isbase = value; }
    inline void setKGradientSelector_GetDecodedMetricF_IsBase(bool value) const { kgradientselector_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kgradientselector_metaobject_isbase) {
            kgradientselector_metaobject_isbase = false;
            return KGradientSelector::metaObject();
        }
        auto metaobject_cb = kgradientselector_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KGradientSelector::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kgradientselector_metacast_isbase) {
            kgradientselector_metacast_isbase = false;
            return KGradientSelector::qt_metacast(param1);
        }
        auto metacast_cb = kgradientselector_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KGradientSelector::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kgradientselector_metacall_isbase) {
            kgradientselector_metacall_isbase = false;
            return KGradientSelector::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kgradientselector_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KGradientSelector::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawContents(QPainter* param1) override {
        if (kgradientselector_drawcontents_isbase) {
            kgradientselector_drawcontents_isbase = false;
            KGradientSelector::drawContents(param1);
            return;
        }
        auto drawcontents_cb = kgradientselector_drawcontents_callback;
        if (drawcontents_cb) {
            QPainter* cbval1 = param1;

            drawcontents_cb(this, cbval1);
            return;
        }
        KGradientSelector::drawContents(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (kgradientselector_minimumsize_isbase) {
            kgradientselector_minimumsize_isbase = false;
            return KGradientSelector::minimumSize();
        }
        auto minimumsize_cb = kgradientselector_minimumsize_callback;
        if (minimumsize_cb) {
            QSize* callback_ret = minimumsize_cb();
            return *callback_ret;
        }
        return KGradientSelector::minimumSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawArrow(QPainter* painter, const QPoint& pos) override {
        if (kgradientselector_drawarrow_isbase) {
            kgradientselector_drawarrow_isbase = false;
            KGradientSelector::drawArrow(painter, pos);
            return;
        }
        auto drawarrow_cb = kgradientselector_drawarrow_callback;
        if (drawarrow_cb) {
            QPainter* cbval1 = painter;
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&pos_ret);

            drawarrow_cb(this, cbval1, cbval2);
            return;
        }
        KGradientSelector::drawArrow(painter, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kgradientselector_paintevent_isbase) {
            kgradientselector_paintevent_isbase = false;
            KGradientSelector::paintEvent(param1);
            return;
        }
        auto paintevent_cb = kgradientselector_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (kgradientselector_mousepressevent_isbase) {
            kgradientselector_mousepressevent_isbase = false;
            KGradientSelector::mousePressEvent(e);
            return;
        }
        auto mousepressevent_cb = kgradientselector_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = e;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kgradientselector_mousemoveevent_isbase) {
            kgradientselector_mousemoveevent_isbase = false;
            KGradientSelector::mouseMoveEvent(e);
            return;
        }
        auto mousemoveevent_cb = kgradientselector_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = e;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kgradientselector_mousereleaseevent_isbase) {
            kgradientselector_mousereleaseevent_isbase = false;
            KGradientSelector::mouseReleaseEvent(e);
            return;
        }
        auto mousereleaseevent_cb = kgradientselector_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = e;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (kgradientselector_wheelevent_isbase) {
            kgradientselector_wheelevent_isbase = false;
            KGradientSelector::wheelEvent(param1);
            return;
        }
        auto wheelevent_cb = kgradientselector_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = param1;

            wheelevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kgradientselector_event_isbase) {
            kgradientselector_event_isbase = false;
            return KGradientSelector::event(e);
        }
        auto event_cb = kgradientselector_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KGradientSelector::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sliderChange(QAbstractSlider::SliderChange change) override {
        if (kgradientselector_sliderchange_isbase) {
            kgradientselector_sliderchange_isbase = false;
            KGradientSelector::sliderChange(change);
            return;
        }
        auto sliderchange_cb = kgradientselector_sliderchange_callback;
        if (sliderchange_cb) {
            int cbval1 = static_cast<int>(change);

            sliderchange_cb(this, cbval1);
            return;
        }
        KGradientSelector::sliderChange(change);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (kgradientselector_keypressevent_isbase) {
            kgradientselector_keypressevent_isbase = false;
            KGradientSelector::keyPressEvent(ev);
            return;
        }
        auto keypressevent_cb = kgradientselector_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = ev;

            keypressevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::keyPressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (kgradientselector_timerevent_isbase) {
            kgradientselector_timerevent_isbase = false;
            KGradientSelector::timerEvent(param1);
            return;
        }
        auto timerevent_cb = kgradientselector_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = param1;

            timerevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kgradientselector_changeevent_isbase) {
            kgradientselector_changeevent_isbase = false;
            KGradientSelector::changeEvent(e);
            return;
        }
        auto changeevent_cb = kgradientselector_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = e;

            changeevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kgradientselector_devtype_isbase) {
            kgradientselector_devtype_isbase = false;
            return KGradientSelector::devType();
        }
        auto devtype_cb = kgradientselector_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KGradientSelector::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kgradientselector_setvisible_isbase) {
            kgradientselector_setvisible_isbase = false;
            KGradientSelector::setVisible(visible);
            return;
        }
        auto setvisible_cb = kgradientselector_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KGradientSelector::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kgradientselector_sizehint_isbase) {
            kgradientselector_sizehint_isbase = false;
            return KGradientSelector::sizeHint();
        }
        auto sizehint_cb = kgradientselector_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KGradientSelector::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kgradientselector_minimumsizehint_isbase) {
            kgradientselector_minimumsizehint_isbase = false;
            return KGradientSelector::minimumSizeHint();
        }
        auto minimumsizehint_cb = kgradientselector_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KGradientSelector::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kgradientselector_heightforwidth_isbase) {
            kgradientselector_heightforwidth_isbase = false;
            return KGradientSelector::heightForWidth(param1);
        }
        auto heightforwidth_cb = kgradientselector_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KGradientSelector::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kgradientselector_hasheightforwidth_isbase) {
            kgradientselector_hasheightforwidth_isbase = false;
            return KGradientSelector::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kgradientselector_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KGradientSelector::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kgradientselector_paintengine_isbase) {
            kgradientselector_paintengine_isbase = false;
            return KGradientSelector::paintEngine();
        }
        auto paintengine_cb = kgradientselector_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KGradientSelector::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kgradientselector_mousedoubleclickevent_isbase) {
            kgradientselector_mousedoubleclickevent_isbase = false;
            KGradientSelector::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kgradientselector_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kgradientselector_keyreleaseevent_isbase) {
            kgradientselector_keyreleaseevent_isbase = false;
            KGradientSelector::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kgradientselector_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kgradientselector_focusinevent_isbase) {
            kgradientselector_focusinevent_isbase = false;
            KGradientSelector::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kgradientselector_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kgradientselector_focusoutevent_isbase) {
            kgradientselector_focusoutevent_isbase = false;
            KGradientSelector::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kgradientselector_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kgradientselector_enterevent_isbase) {
            kgradientselector_enterevent_isbase = false;
            KGradientSelector::enterEvent(event);
            return;
        }
        auto enterevent_cb = kgradientselector_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kgradientselector_leaveevent_isbase) {
            kgradientselector_leaveevent_isbase = false;
            KGradientSelector::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kgradientselector_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kgradientselector_moveevent_isbase) {
            kgradientselector_moveevent_isbase = false;
            KGradientSelector::moveEvent(event);
            return;
        }
        auto moveevent_cb = kgradientselector_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kgradientselector_resizeevent_isbase) {
            kgradientselector_resizeevent_isbase = false;
            KGradientSelector::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = kgradientselector_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kgradientselector_closeevent_isbase) {
            kgradientselector_closeevent_isbase = false;
            KGradientSelector::closeEvent(event);
            return;
        }
        auto closeevent_cb = kgradientselector_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kgradientselector_contextmenuevent_isbase) {
            kgradientselector_contextmenuevent_isbase = false;
            KGradientSelector::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = kgradientselector_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kgradientselector_tabletevent_isbase) {
            kgradientselector_tabletevent_isbase = false;
            KGradientSelector::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kgradientselector_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kgradientselector_actionevent_isbase) {
            kgradientselector_actionevent_isbase = false;
            KGradientSelector::actionEvent(event);
            return;
        }
        auto actionevent_cb = kgradientselector_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kgradientselector_dragenterevent_isbase) {
            kgradientselector_dragenterevent_isbase = false;
            KGradientSelector::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kgradientselector_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kgradientselector_dragmoveevent_isbase) {
            kgradientselector_dragmoveevent_isbase = false;
            KGradientSelector::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kgradientselector_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kgradientselector_dragleaveevent_isbase) {
            kgradientselector_dragleaveevent_isbase = false;
            KGradientSelector::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kgradientselector_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kgradientselector_dropevent_isbase) {
            kgradientselector_dropevent_isbase = false;
            KGradientSelector::dropEvent(event);
            return;
        }
        auto dropevent_cb = kgradientselector_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kgradientselector_showevent_isbase) {
            kgradientselector_showevent_isbase = false;
            KGradientSelector::showEvent(event);
            return;
        }
        auto showevent_cb = kgradientselector_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kgradientselector_hideevent_isbase) {
            kgradientselector_hideevent_isbase = false;
            KGradientSelector::hideEvent(event);
            return;
        }
        auto hideevent_cb = kgradientselector_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kgradientselector_nativeevent_isbase) {
            kgradientselector_nativeevent_isbase = false;
            return KGradientSelector::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kgradientselector_nativeevent_callback;
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
        return KGradientSelector::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kgradientselector_metric_isbase) {
            kgradientselector_metric_isbase = false;
            return KGradientSelector::metric(param1);
        }
        auto metric_cb = kgradientselector_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KGradientSelector::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kgradientselector_initpainter_isbase) {
            kgradientselector_initpainter_isbase = false;
            KGradientSelector::initPainter(painter);
            return;
        }
        auto initpainter_cb = kgradientselector_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KGradientSelector::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kgradientselector_redirected_isbase) {
            kgradientselector_redirected_isbase = false;
            return KGradientSelector::redirected(offset);
        }
        auto redirected_cb = kgradientselector_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KGradientSelector::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kgradientselector_sharedpainter_isbase) {
            kgradientselector_sharedpainter_isbase = false;
            return KGradientSelector::sharedPainter();
        }
        auto sharedpainter_cb = kgradientselector_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KGradientSelector::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kgradientselector_inputmethodevent_isbase) {
            kgradientselector_inputmethodevent_isbase = false;
            KGradientSelector::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kgradientselector_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kgradientselector_inputmethodquery_isbase) {
            kgradientselector_inputmethodquery_isbase = false;
            return KGradientSelector::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kgradientselector_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KGradientSelector::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kgradientselector_focusnextprevchild_isbase) {
            kgradientselector_focusnextprevchild_isbase = false;
            return KGradientSelector::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kgradientselector_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KGradientSelector::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kgradientselector_eventfilter_isbase) {
            kgradientselector_eventfilter_isbase = false;
            return KGradientSelector::eventFilter(watched, event);
        }
        auto eventfilter_cb = kgradientselector_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KGradientSelector::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kgradientselector_childevent_isbase) {
            kgradientselector_childevent_isbase = false;
            KGradientSelector::childEvent(event);
            return;
        }
        auto childevent_cb = kgradientselector_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kgradientselector_customevent_isbase) {
            kgradientselector_customevent_isbase = false;
            KGradientSelector::customEvent(event);
            return;
        }
        auto customevent_cb = kgradientselector_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KGradientSelector::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kgradientselector_connectnotify_isbase) {
            kgradientselector_connectnotify_isbase = false;
            KGradientSelector::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kgradientselector_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KGradientSelector::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kgradientselector_disconnectnotify_isbase) {
            kgradientselector_disconnectnotify_isbase = false;
            KGradientSelector::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kgradientselector_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KGradientSelector::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setRepeatAction(QAbstractSlider::SliderAction action) {
        if (kgradientselector_setrepeataction_isbase) {
            kgradientselector_setrepeataction_isbase = false;
            KGradientSelector::setRepeatAction(action);
            return;
        }
        auto setrepeataction_cb = kgradientselector_setrepeataction_callback;
        if (setrepeataction_cb) {
            int cbval1 = static_cast<int>(action);

            setrepeataction_cb(this, cbval1);
            return;
        }
        KGradientSelector::setRepeatAction(action);
    }

    // Virtual method for C ABI access and custom callback
    QAbstractSlider::SliderAction repeatAction() const {
        if (kgradientselector_repeataction_isbase) {
            kgradientselector_repeataction_isbase = false;
            return KGradientSelector::repeatAction();
        }
        auto repeataction_cb = kgradientselector_repeataction_callback;
        if (repeataction_cb) {
            int callback_ret = repeataction_cb();
            return static_cast<QAbstractSlider::SliderAction>(callback_ret);
        }
        return KGradientSelector::repeatAction();
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kgradientselector_updatemicrofocus_isbase) {
            kgradientselector_updatemicrofocus_isbase = false;
            KGradientSelector::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kgradientselector_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KGradientSelector::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kgradientselector_create_isbase) {
            kgradientselector_create_isbase = false;
            KGradientSelector::create();
            return;
        }
        auto create_cb = kgradientselector_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KGradientSelector::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kgradientselector_destroy_isbase) {
            kgradientselector_destroy_isbase = false;
            KGradientSelector::destroy();
            return;
        }
        auto destroy_cb = kgradientselector_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KGradientSelector::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kgradientselector_focusnextchild_isbase) {
            kgradientselector_focusnextchild_isbase = false;
            return KGradientSelector::focusNextChild();
        }
        auto focusnextchild_cb = kgradientselector_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KGradientSelector::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kgradientselector_focuspreviouschild_isbase) {
            kgradientselector_focuspreviouschild_isbase = false;
            return KGradientSelector::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kgradientselector_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KGradientSelector::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kgradientselector_sender_isbase) {
            kgradientselector_sender_isbase = false;
            return KGradientSelector::sender();
        }
        auto sender_cb = kgradientselector_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KGradientSelector::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kgradientselector_sendersignalindex_isbase) {
            kgradientselector_sendersignalindex_isbase = false;
            return KGradientSelector::senderSignalIndex();
        }
        auto sendersignalindex_cb = kgradientselector_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KGradientSelector::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kgradientselector_receivers_isbase) {
            kgradientselector_receivers_isbase = false;
            return KGradientSelector::receivers(signal);
        }
        auto receivers_cb = kgradientselector_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KGradientSelector::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kgradientselector_issignalconnected_isbase) {
            kgradientselector_issignalconnected_isbase = false;
            return KGradientSelector::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kgradientselector_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KGradientSelector::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kgradientselector_getdecodedmetricf_isbase) {
            kgradientselector_getdecodedmetricf_isbase = false;
            return KGradientSelector::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kgradientselector_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KGradientSelector::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KGradientSelector_DrawContents(KGradientSelector* self, QPainter* param1);
    friend void KGradientSelector_SuperDrawContents(KGradientSelector* self, QPainter* param1);
    friend QSize* KGradientSelector_MinimumSize(const KGradientSelector* self);
    friend QSize* KGradientSelector_SuperMinimumSize(const KGradientSelector* self);
    friend void KGradientSelector_DrawArrow(KGradientSelector* self, QPainter* painter, const QPoint* pos);
    friend void KGradientSelector_SuperDrawArrow(KGradientSelector* self, QPainter* painter, const QPoint* pos);
    friend void KGradientSelector_PaintEvent(KGradientSelector* self, QPaintEvent* param1);
    friend void KGradientSelector_SuperPaintEvent(KGradientSelector* self, QPaintEvent* param1);
    friend void KGradientSelector_MousePressEvent(KGradientSelector* self, QMouseEvent* e);
    friend void KGradientSelector_SuperMousePressEvent(KGradientSelector* self, QMouseEvent* e);
    friend void KGradientSelector_MouseMoveEvent(KGradientSelector* self, QMouseEvent* e);
    friend void KGradientSelector_SuperMouseMoveEvent(KGradientSelector* self, QMouseEvent* e);
    friend void KGradientSelector_MouseReleaseEvent(KGradientSelector* self, QMouseEvent* e);
    friend void KGradientSelector_SuperMouseReleaseEvent(KGradientSelector* self, QMouseEvent* e);
    friend void KGradientSelector_WheelEvent(KGradientSelector* self, QWheelEvent* param1);
    friend void KGradientSelector_SuperWheelEvent(KGradientSelector* self, QWheelEvent* param1);
    friend bool KGradientSelector_Event(KGradientSelector* self, QEvent* e);
    friend bool KGradientSelector_SuperEvent(KGradientSelector* self, QEvent* e);
    friend void KGradientSelector_SliderChange(KGradientSelector* self, int change);
    friend void KGradientSelector_SuperSliderChange(KGradientSelector* self, int change);
    friend void KGradientSelector_KeyPressEvent(KGradientSelector* self, QKeyEvent* ev);
    friend void KGradientSelector_SuperKeyPressEvent(KGradientSelector* self, QKeyEvent* ev);
    friend void KGradientSelector_TimerEvent(KGradientSelector* self, QTimerEvent* param1);
    friend void KGradientSelector_SuperTimerEvent(KGradientSelector* self, QTimerEvent* param1);
    friend void KGradientSelector_ChangeEvent(KGradientSelector* self, QEvent* e);
    friend void KGradientSelector_SuperChangeEvent(KGradientSelector* self, QEvent* e);
    friend void KGradientSelector_MouseDoubleClickEvent(KGradientSelector* self, QMouseEvent* event);
    friend void KGradientSelector_SuperMouseDoubleClickEvent(KGradientSelector* self, QMouseEvent* event);
    friend void KGradientSelector_KeyReleaseEvent(KGradientSelector* self, QKeyEvent* event);
    friend void KGradientSelector_SuperKeyReleaseEvent(KGradientSelector* self, QKeyEvent* event);
    friend void KGradientSelector_FocusInEvent(KGradientSelector* self, QFocusEvent* event);
    friend void KGradientSelector_SuperFocusInEvent(KGradientSelector* self, QFocusEvent* event);
    friend void KGradientSelector_FocusOutEvent(KGradientSelector* self, QFocusEvent* event);
    friend void KGradientSelector_SuperFocusOutEvent(KGradientSelector* self, QFocusEvent* event);
    friend void KGradientSelector_EnterEvent(KGradientSelector* self, QEnterEvent* event);
    friend void KGradientSelector_SuperEnterEvent(KGradientSelector* self, QEnterEvent* event);
    friend void KGradientSelector_LeaveEvent(KGradientSelector* self, QEvent* event);
    friend void KGradientSelector_SuperLeaveEvent(KGradientSelector* self, QEvent* event);
    friend void KGradientSelector_MoveEvent(KGradientSelector* self, QMoveEvent* event);
    friend void KGradientSelector_SuperMoveEvent(KGradientSelector* self, QMoveEvent* event);
    friend void KGradientSelector_ResizeEvent(KGradientSelector* self, QResizeEvent* event);
    friend void KGradientSelector_SuperResizeEvent(KGradientSelector* self, QResizeEvent* event);
    friend void KGradientSelector_CloseEvent(KGradientSelector* self, QCloseEvent* event);
    friend void KGradientSelector_SuperCloseEvent(KGradientSelector* self, QCloseEvent* event);
    friend void KGradientSelector_ContextMenuEvent(KGradientSelector* self, QContextMenuEvent* event);
    friend void KGradientSelector_SuperContextMenuEvent(KGradientSelector* self, QContextMenuEvent* event);
    friend void KGradientSelector_TabletEvent(KGradientSelector* self, QTabletEvent* event);
    friend void KGradientSelector_SuperTabletEvent(KGradientSelector* self, QTabletEvent* event);
    friend void KGradientSelector_ActionEvent(KGradientSelector* self, QActionEvent* event);
    friend void KGradientSelector_SuperActionEvent(KGradientSelector* self, QActionEvent* event);
    friend void KGradientSelector_DragEnterEvent(KGradientSelector* self, QDragEnterEvent* event);
    friend void KGradientSelector_SuperDragEnterEvent(KGradientSelector* self, QDragEnterEvent* event);
    friend void KGradientSelector_DragMoveEvent(KGradientSelector* self, QDragMoveEvent* event);
    friend void KGradientSelector_SuperDragMoveEvent(KGradientSelector* self, QDragMoveEvent* event);
    friend void KGradientSelector_DragLeaveEvent(KGradientSelector* self, QDragLeaveEvent* event);
    friend void KGradientSelector_SuperDragLeaveEvent(KGradientSelector* self, QDragLeaveEvent* event);
    friend void KGradientSelector_DropEvent(KGradientSelector* self, QDropEvent* event);
    friend void KGradientSelector_SuperDropEvent(KGradientSelector* self, QDropEvent* event);
    friend void KGradientSelector_ShowEvent(KGradientSelector* self, QShowEvent* event);
    friend void KGradientSelector_SuperShowEvent(KGradientSelector* self, QShowEvent* event);
    friend void KGradientSelector_HideEvent(KGradientSelector* self, QHideEvent* event);
    friend void KGradientSelector_SuperHideEvent(KGradientSelector* self, QHideEvent* event);
    friend bool KGradientSelector_NativeEvent(KGradientSelector* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KGradientSelector_SuperNativeEvent(KGradientSelector* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KGradientSelector_Metric(const KGradientSelector* self, int param1);
    friend int KGradientSelector_SuperMetric(const KGradientSelector* self, int param1);
    friend void KGradientSelector_InitPainter(const KGradientSelector* self, QPainter* painter);
    friend void KGradientSelector_SuperInitPainter(const KGradientSelector* self, QPainter* painter);
    friend QPaintDevice* KGradientSelector_Redirected(const KGradientSelector* self, QPoint* offset);
    friend QPaintDevice* KGradientSelector_SuperRedirected(const KGradientSelector* self, QPoint* offset);
    friend QPainter* KGradientSelector_SharedPainter(const KGradientSelector* self);
    friend QPainter* KGradientSelector_SuperSharedPainter(const KGradientSelector* self);
    friend void KGradientSelector_InputMethodEvent(KGradientSelector* self, QInputMethodEvent* param1);
    friend void KGradientSelector_SuperInputMethodEvent(KGradientSelector* self, QInputMethodEvent* param1);
    friend bool KGradientSelector_FocusNextPrevChild(KGradientSelector* self, bool next);
    friend bool KGradientSelector_SuperFocusNextPrevChild(KGradientSelector* self, bool next);
    friend void KGradientSelector_ChildEvent(KGradientSelector* self, QChildEvent* event);
    friend void KGradientSelector_SuperChildEvent(KGradientSelector* self, QChildEvent* event);
    friend void KGradientSelector_CustomEvent(KGradientSelector* self, QEvent* event);
    friend void KGradientSelector_SuperCustomEvent(KGradientSelector* self, QEvent* event);
    friend void KGradientSelector_ConnectNotify(KGradientSelector* self, const QMetaMethod* signal);
    friend void KGradientSelector_SuperConnectNotify(KGradientSelector* self, const QMetaMethod* signal);
    friend void KGradientSelector_DisconnectNotify(KGradientSelector* self, const QMetaMethod* signal);
    friend void KGradientSelector_SuperDisconnectNotify(KGradientSelector* self, const QMetaMethod* signal);
    friend void KGradientSelector_SetRepeatAction(KGradientSelector* self, int action);
    friend void KGradientSelector_SuperSetRepeatAction(KGradientSelector* self, int action);
    friend int KGradientSelector_RepeatAction(const KGradientSelector* self);
    friend int KGradientSelector_SuperRepeatAction(const KGradientSelector* self);
    friend void KGradientSelector_UpdateMicroFocus(KGradientSelector* self);
    friend void KGradientSelector_SuperUpdateMicroFocus(KGradientSelector* self);
    friend void KGradientSelector_Create(KGradientSelector* self);
    friend void KGradientSelector_SuperCreate(KGradientSelector* self);
    friend void KGradientSelector_Destroy(KGradientSelector* self);
    friend void KGradientSelector_SuperDestroy(KGradientSelector* self);
    friend bool KGradientSelector_FocusNextChild(KGradientSelector* self);
    friend bool KGradientSelector_SuperFocusNextChild(KGradientSelector* self);
    friend bool KGradientSelector_FocusPreviousChild(KGradientSelector* self);
    friend bool KGradientSelector_SuperFocusPreviousChild(KGradientSelector* self);
    friend QObject* KGradientSelector_Sender(const KGradientSelector* self);
    friend QObject* KGradientSelector_SuperSender(const KGradientSelector* self);
    friend int KGradientSelector_SenderSignalIndex(const KGradientSelector* self);
    friend int KGradientSelector_SuperSenderSignalIndex(const KGradientSelector* self);
    friend int KGradientSelector_Receivers(const KGradientSelector* self, const char* signal);
    friend int KGradientSelector_SuperReceivers(const KGradientSelector* self, const char* signal);
    friend bool KGradientSelector_IsSignalConnected(const KGradientSelector* self, const QMetaMethod* signal);
    friend bool KGradientSelector_SuperIsSignalConnected(const KGradientSelector* self, const QMetaMethod* signal);
    friend double KGradientSelector_GetDecodedMetricF(const KGradientSelector* self, int metricA, int metricB);
    friend double KGradientSelector_SuperGetDecodedMetricF(const KGradientSelector* self, int metricA, int metricB);
};

#endif
