#pragma once
#ifndef SRC_EXTRAS_KPLOTTINGC_LIBVIRTUALKPLOTWIDGET_H
#define SRC_EXTRAS_KPLOTTINGC_LIBVIRTUALKPLOTWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPlotWidget so that we can call protected methods
class VirtualKPlotWidget final : public KPlotWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualKPlotWidget = true;

    // Virtual class public types (including callbacks)
    using KPlotWidget_MetaObject_Callback = QMetaObject* (*)();
    using KPlotWidget_Metacast_Callback = void* (*)(KPlotWidget*, const char*);
    using KPlotWidget_Metacall_Callback = int (*)(KPlotWidget*, int, int, void**);
    using KPlotWidget_MinimumSizeHint_Callback = QSize* (*)();
    using KPlotWidget_SizeHint_Callback = QSize* (*)();
    using KPlotWidget_Event_Callback = bool (*)(KPlotWidget*, QEvent*);
    using KPlotWidget_PaintEvent_Callback = void (*)(KPlotWidget*, QPaintEvent*);
    using KPlotWidget_ResizeEvent_Callback = void (*)(KPlotWidget*, QResizeEvent*);
    using KPlotWidget_DrawAxes_Callback = void (*)(KPlotWidget*, QPainter*);
    using KPlotWidget_ChangeEvent_Callback = void (*)(KPlotWidget*, QEvent*);
    using KPlotWidget_InitStyleOption_Callback = void (*)(const KPlotWidget*, QStyleOptionFrame*);
    using KPlotWidget_DevType_Callback = int (*)();
    using KPlotWidget_SetVisible_Callback = void (*)(KPlotWidget*, bool);
    using KPlotWidget_HeightForWidth_Callback = int (*)(const KPlotWidget*, int);
    using KPlotWidget_HasHeightForWidth_Callback = bool (*)();
    using KPlotWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using KPlotWidget_MousePressEvent_Callback = void (*)(KPlotWidget*, QMouseEvent*);
    using KPlotWidget_MouseReleaseEvent_Callback = void (*)(KPlotWidget*, QMouseEvent*);
    using KPlotWidget_MouseDoubleClickEvent_Callback = void (*)(KPlotWidget*, QMouseEvent*);
    using KPlotWidget_MouseMoveEvent_Callback = void (*)(KPlotWidget*, QMouseEvent*);
    using KPlotWidget_WheelEvent_Callback = void (*)(KPlotWidget*, QWheelEvent*);
    using KPlotWidget_KeyPressEvent_Callback = void (*)(KPlotWidget*, QKeyEvent*);
    using KPlotWidget_KeyReleaseEvent_Callback = void (*)(KPlotWidget*, QKeyEvent*);
    using KPlotWidget_FocusInEvent_Callback = void (*)(KPlotWidget*, QFocusEvent*);
    using KPlotWidget_FocusOutEvent_Callback = void (*)(KPlotWidget*, QFocusEvent*);
    using KPlotWidget_EnterEvent_Callback = void (*)(KPlotWidget*, QEnterEvent*);
    using KPlotWidget_LeaveEvent_Callback = void (*)(KPlotWidget*, QEvent*);
    using KPlotWidget_MoveEvent_Callback = void (*)(KPlotWidget*, QMoveEvent*);
    using KPlotWidget_CloseEvent_Callback = void (*)(KPlotWidget*, QCloseEvent*);
    using KPlotWidget_ContextMenuEvent_Callback = void (*)(KPlotWidget*, QContextMenuEvent*);
    using KPlotWidget_TabletEvent_Callback = void (*)(KPlotWidget*, QTabletEvent*);
    using KPlotWidget_ActionEvent_Callback = void (*)(KPlotWidget*, QActionEvent*);
    using KPlotWidget_DragEnterEvent_Callback = void (*)(KPlotWidget*, QDragEnterEvent*);
    using KPlotWidget_DragMoveEvent_Callback = void (*)(KPlotWidget*, QDragMoveEvent*);
    using KPlotWidget_DragLeaveEvent_Callback = void (*)(KPlotWidget*, QDragLeaveEvent*);
    using KPlotWidget_DropEvent_Callback = void (*)(KPlotWidget*, QDropEvent*);
    using KPlotWidget_ShowEvent_Callback = void (*)(KPlotWidget*, QShowEvent*);
    using KPlotWidget_HideEvent_Callback = void (*)(KPlotWidget*, QHideEvent*);
    using KPlotWidget_NativeEvent_Callback = bool (*)(KPlotWidget*, libqt_string, void*, intptr_t*);
    using KPlotWidget_Metric_Callback = int (*)(const KPlotWidget*, int);
    using KPlotWidget_InitPainter_Callback = void (*)(const KPlotWidget*, QPainter*);
    using KPlotWidget_Redirected_Callback = QPaintDevice* (*)(const KPlotWidget*, QPoint*);
    using KPlotWidget_SharedPainter_Callback = QPainter* (*)();
    using KPlotWidget_InputMethodEvent_Callback = void (*)(KPlotWidget*, QInputMethodEvent*);
    using KPlotWidget_InputMethodQuery_Callback = QVariant* (*)(const KPlotWidget*, int);
    using KPlotWidget_FocusNextPrevChild_Callback = bool (*)(KPlotWidget*, bool);
    using KPlotWidget_EventFilter_Callback = bool (*)(KPlotWidget*, QObject*, QEvent*);
    using KPlotWidget_TimerEvent_Callback = void (*)(KPlotWidget*, QTimerEvent*);
    using KPlotWidget_ChildEvent_Callback = void (*)(KPlotWidget*, QChildEvent*);
    using KPlotWidget_CustomEvent_Callback = void (*)(KPlotWidget*, QEvent*);
    using KPlotWidget_ConnectNotify_Callback = void (*)(KPlotWidget*, QMetaMethod*);
    using KPlotWidget_DisconnectNotify_Callback = void (*)(KPlotWidget*, QMetaMethod*);
    using KPlotWidget_SetPixRect_Callback = void (*)();
    using KPlotWidget_PointsUnderPoint_Callback = libqt_list /* of KPlotPoint* */ (*)(const KPlotWidget*, QPoint*);
    using KPlotWidget_DrawFrame_Callback = void (*)(KPlotWidget*, QPainter*);
    using KPlotWidget_UpdateMicroFocus_Callback = void (*)();
    using KPlotWidget_Create_Callback = void (*)();
    using KPlotWidget_Destroy_Callback = void (*)();
    using KPlotWidget_FocusNextChild_Callback = bool (*)();
    using KPlotWidget_FocusPreviousChild_Callback = bool (*)();
    using KPlotWidget_Sender_Callback = QObject* (*)();
    using KPlotWidget_SenderSignalIndex_Callback = int (*)();
    using KPlotWidget_Receivers_Callback = int (*)(const KPlotWidget*, const char*);
    using KPlotWidget_IsSignalConnected_Callback = bool (*)(const KPlotWidget*, QMetaMethod*);
    using KPlotWidget_GetDecodedMetricF_Callback = double (*)(const KPlotWidget*, int, int);

  protected:
    // Instance callback storage
    KPlotWidget_MetaObject_Callback kplotwidget_metaobject_callback = nullptr;
    KPlotWidget_Metacast_Callback kplotwidget_metacast_callback = nullptr;
    KPlotWidget_Metacall_Callback kplotwidget_metacall_callback = nullptr;
    KPlotWidget_MinimumSizeHint_Callback kplotwidget_minimumsizehint_callback = nullptr;
    KPlotWidget_SizeHint_Callback kplotwidget_sizehint_callback = nullptr;
    KPlotWidget_Event_Callback kplotwidget_event_callback = nullptr;
    KPlotWidget_PaintEvent_Callback kplotwidget_paintevent_callback = nullptr;
    KPlotWidget_ResizeEvent_Callback kplotwidget_resizeevent_callback = nullptr;
    KPlotWidget_DrawAxes_Callback kplotwidget_drawaxes_callback = nullptr;
    KPlotWidget_ChangeEvent_Callback kplotwidget_changeevent_callback = nullptr;
    KPlotWidget_InitStyleOption_Callback kplotwidget_initstyleoption_callback = nullptr;
    KPlotWidget_DevType_Callback kplotwidget_devtype_callback = nullptr;
    KPlotWidget_SetVisible_Callback kplotwidget_setvisible_callback = nullptr;
    KPlotWidget_HeightForWidth_Callback kplotwidget_heightforwidth_callback = nullptr;
    KPlotWidget_HasHeightForWidth_Callback kplotwidget_hasheightforwidth_callback = nullptr;
    KPlotWidget_PaintEngine_Callback kplotwidget_paintengine_callback = nullptr;
    KPlotWidget_MousePressEvent_Callback kplotwidget_mousepressevent_callback = nullptr;
    KPlotWidget_MouseReleaseEvent_Callback kplotwidget_mousereleaseevent_callback = nullptr;
    KPlotWidget_MouseDoubleClickEvent_Callback kplotwidget_mousedoubleclickevent_callback = nullptr;
    KPlotWidget_MouseMoveEvent_Callback kplotwidget_mousemoveevent_callback = nullptr;
    KPlotWidget_WheelEvent_Callback kplotwidget_wheelevent_callback = nullptr;
    KPlotWidget_KeyPressEvent_Callback kplotwidget_keypressevent_callback = nullptr;
    KPlotWidget_KeyReleaseEvent_Callback kplotwidget_keyreleaseevent_callback = nullptr;
    KPlotWidget_FocusInEvent_Callback kplotwidget_focusinevent_callback = nullptr;
    KPlotWidget_FocusOutEvent_Callback kplotwidget_focusoutevent_callback = nullptr;
    KPlotWidget_EnterEvent_Callback kplotwidget_enterevent_callback = nullptr;
    KPlotWidget_LeaveEvent_Callback kplotwidget_leaveevent_callback = nullptr;
    KPlotWidget_MoveEvent_Callback kplotwidget_moveevent_callback = nullptr;
    KPlotWidget_CloseEvent_Callback kplotwidget_closeevent_callback = nullptr;
    KPlotWidget_ContextMenuEvent_Callback kplotwidget_contextmenuevent_callback = nullptr;
    KPlotWidget_TabletEvent_Callback kplotwidget_tabletevent_callback = nullptr;
    KPlotWidget_ActionEvent_Callback kplotwidget_actionevent_callback = nullptr;
    KPlotWidget_DragEnterEvent_Callback kplotwidget_dragenterevent_callback = nullptr;
    KPlotWidget_DragMoveEvent_Callback kplotwidget_dragmoveevent_callback = nullptr;
    KPlotWidget_DragLeaveEvent_Callback kplotwidget_dragleaveevent_callback = nullptr;
    KPlotWidget_DropEvent_Callback kplotwidget_dropevent_callback = nullptr;
    KPlotWidget_ShowEvent_Callback kplotwidget_showevent_callback = nullptr;
    KPlotWidget_HideEvent_Callback kplotwidget_hideevent_callback = nullptr;
    KPlotWidget_NativeEvent_Callback kplotwidget_nativeevent_callback = nullptr;
    KPlotWidget_Metric_Callback kplotwidget_metric_callback = nullptr;
    KPlotWidget_InitPainter_Callback kplotwidget_initpainter_callback = nullptr;
    KPlotWidget_Redirected_Callback kplotwidget_redirected_callback = nullptr;
    KPlotWidget_SharedPainter_Callback kplotwidget_sharedpainter_callback = nullptr;
    KPlotWidget_InputMethodEvent_Callback kplotwidget_inputmethodevent_callback = nullptr;
    KPlotWidget_InputMethodQuery_Callback kplotwidget_inputmethodquery_callback = nullptr;
    KPlotWidget_FocusNextPrevChild_Callback kplotwidget_focusnextprevchild_callback = nullptr;
    KPlotWidget_EventFilter_Callback kplotwidget_eventfilter_callback = nullptr;
    KPlotWidget_TimerEvent_Callback kplotwidget_timerevent_callback = nullptr;
    KPlotWidget_ChildEvent_Callback kplotwidget_childevent_callback = nullptr;
    KPlotWidget_CustomEvent_Callback kplotwidget_customevent_callback = nullptr;
    KPlotWidget_ConnectNotify_Callback kplotwidget_connectnotify_callback = nullptr;
    KPlotWidget_DisconnectNotify_Callback kplotwidget_disconnectnotify_callback = nullptr;
    KPlotWidget_SetPixRect_Callback kplotwidget_setpixrect_callback = nullptr;
    KPlotWidget_PointsUnderPoint_Callback kplotwidget_pointsunderpoint_callback = nullptr;
    KPlotWidget_DrawFrame_Callback kplotwidget_drawframe_callback = nullptr;
    KPlotWidget_UpdateMicroFocus_Callback kplotwidget_updatemicrofocus_callback = nullptr;
    KPlotWidget_Create_Callback kplotwidget_create_callback = nullptr;
    KPlotWidget_Destroy_Callback kplotwidget_destroy_callback = nullptr;
    KPlotWidget_FocusNextChild_Callback kplotwidget_focusnextchild_callback = nullptr;
    KPlotWidget_FocusPreviousChild_Callback kplotwidget_focuspreviouschild_callback = nullptr;
    KPlotWidget_Sender_Callback kplotwidget_sender_callback = nullptr;
    KPlotWidget_SenderSignalIndex_Callback kplotwidget_sendersignalindex_callback = nullptr;
    KPlotWidget_Receivers_Callback kplotwidget_receivers_callback = nullptr;
    KPlotWidget_IsSignalConnected_Callback kplotwidget_issignalconnected_callback = nullptr;
    KPlotWidget_GetDecodedMetricF_Callback kplotwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kplotwidget_metaobject_isbase = false;
    mutable bool kplotwidget_metacast_isbase = false;
    mutable bool kplotwidget_metacall_isbase = false;
    mutable bool kplotwidget_minimumsizehint_isbase = false;
    mutable bool kplotwidget_sizehint_isbase = false;
    mutable bool kplotwidget_event_isbase = false;
    mutable bool kplotwidget_paintevent_isbase = false;
    mutable bool kplotwidget_resizeevent_isbase = false;
    mutable bool kplotwidget_drawaxes_isbase = false;
    mutable bool kplotwidget_changeevent_isbase = false;
    mutable bool kplotwidget_initstyleoption_isbase = false;
    mutable bool kplotwidget_devtype_isbase = false;
    mutable bool kplotwidget_setvisible_isbase = false;
    mutable bool kplotwidget_heightforwidth_isbase = false;
    mutable bool kplotwidget_hasheightforwidth_isbase = false;
    mutable bool kplotwidget_paintengine_isbase = false;
    mutable bool kplotwidget_mousepressevent_isbase = false;
    mutable bool kplotwidget_mousereleaseevent_isbase = false;
    mutable bool kplotwidget_mousedoubleclickevent_isbase = false;
    mutable bool kplotwidget_mousemoveevent_isbase = false;
    mutable bool kplotwidget_wheelevent_isbase = false;
    mutable bool kplotwidget_keypressevent_isbase = false;
    mutable bool kplotwidget_keyreleaseevent_isbase = false;
    mutable bool kplotwidget_focusinevent_isbase = false;
    mutable bool kplotwidget_focusoutevent_isbase = false;
    mutable bool kplotwidget_enterevent_isbase = false;
    mutable bool kplotwidget_leaveevent_isbase = false;
    mutable bool kplotwidget_moveevent_isbase = false;
    mutable bool kplotwidget_closeevent_isbase = false;
    mutable bool kplotwidget_contextmenuevent_isbase = false;
    mutable bool kplotwidget_tabletevent_isbase = false;
    mutable bool kplotwidget_actionevent_isbase = false;
    mutable bool kplotwidget_dragenterevent_isbase = false;
    mutable bool kplotwidget_dragmoveevent_isbase = false;
    mutable bool kplotwidget_dragleaveevent_isbase = false;
    mutable bool kplotwidget_dropevent_isbase = false;
    mutable bool kplotwidget_showevent_isbase = false;
    mutable bool kplotwidget_hideevent_isbase = false;
    mutable bool kplotwidget_nativeevent_isbase = false;
    mutable bool kplotwidget_metric_isbase = false;
    mutable bool kplotwidget_initpainter_isbase = false;
    mutable bool kplotwidget_redirected_isbase = false;
    mutable bool kplotwidget_sharedpainter_isbase = false;
    mutable bool kplotwidget_inputmethodevent_isbase = false;
    mutable bool kplotwidget_inputmethodquery_isbase = false;
    mutable bool kplotwidget_focusnextprevchild_isbase = false;
    mutable bool kplotwidget_eventfilter_isbase = false;
    mutable bool kplotwidget_timerevent_isbase = false;
    mutable bool kplotwidget_childevent_isbase = false;
    mutable bool kplotwidget_customevent_isbase = false;
    mutable bool kplotwidget_connectnotify_isbase = false;
    mutable bool kplotwidget_disconnectnotify_isbase = false;
    mutable bool kplotwidget_setpixrect_isbase = false;
    mutable bool kplotwidget_pointsunderpoint_isbase = false;
    mutable bool kplotwidget_drawframe_isbase = false;
    mutable bool kplotwidget_updatemicrofocus_isbase = false;
    mutable bool kplotwidget_create_isbase = false;
    mutable bool kplotwidget_destroy_isbase = false;
    mutable bool kplotwidget_focusnextchild_isbase = false;
    mutable bool kplotwidget_focuspreviouschild_isbase = false;
    mutable bool kplotwidget_sender_isbase = false;
    mutable bool kplotwidget_sendersignalindex_isbase = false;
    mutable bool kplotwidget_receivers_isbase = false;
    mutable bool kplotwidget_issignalconnected_isbase = false;
    mutable bool kplotwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualKPlotWidget(QWidget* parent) : KPlotWidget(parent) {};
    VirtualKPlotWidget() : KPlotWidget() {};

    // Callback setters
    inline void setKPlotWidget_MetaObject_Callback(KPlotWidget_MetaObject_Callback cb) { kplotwidget_metaobject_callback = cb; }
    inline void setKPlotWidget_Metacast_Callback(KPlotWidget_Metacast_Callback cb) { kplotwidget_metacast_callback = cb; }
    inline void setKPlotWidget_Metacall_Callback(KPlotWidget_Metacall_Callback cb) { kplotwidget_metacall_callback = cb; }
    inline void setKPlotWidget_MinimumSizeHint_Callback(KPlotWidget_MinimumSizeHint_Callback cb) { kplotwidget_minimumsizehint_callback = cb; }
    inline void setKPlotWidget_SizeHint_Callback(KPlotWidget_SizeHint_Callback cb) { kplotwidget_sizehint_callback = cb; }
    inline void setKPlotWidget_Event_Callback(KPlotWidget_Event_Callback cb) { kplotwidget_event_callback = cb; }
    inline void setKPlotWidget_PaintEvent_Callback(KPlotWidget_PaintEvent_Callback cb) { kplotwidget_paintevent_callback = cb; }
    inline void setKPlotWidget_ResizeEvent_Callback(KPlotWidget_ResizeEvent_Callback cb) { kplotwidget_resizeevent_callback = cb; }
    inline void setKPlotWidget_DrawAxes_Callback(KPlotWidget_DrawAxes_Callback cb) { kplotwidget_drawaxes_callback = cb; }
    inline void setKPlotWidget_ChangeEvent_Callback(KPlotWidget_ChangeEvent_Callback cb) { kplotwidget_changeevent_callback = cb; }
    inline void setKPlotWidget_InitStyleOption_Callback(KPlotWidget_InitStyleOption_Callback cb) { kplotwidget_initstyleoption_callback = cb; }
    inline void setKPlotWidget_DevType_Callback(KPlotWidget_DevType_Callback cb) { kplotwidget_devtype_callback = cb; }
    inline void setKPlotWidget_SetVisible_Callback(KPlotWidget_SetVisible_Callback cb) { kplotwidget_setvisible_callback = cb; }
    inline void setKPlotWidget_HeightForWidth_Callback(KPlotWidget_HeightForWidth_Callback cb) { kplotwidget_heightforwidth_callback = cb; }
    inline void setKPlotWidget_HasHeightForWidth_Callback(KPlotWidget_HasHeightForWidth_Callback cb) { kplotwidget_hasheightforwidth_callback = cb; }
    inline void setKPlotWidget_PaintEngine_Callback(KPlotWidget_PaintEngine_Callback cb) { kplotwidget_paintengine_callback = cb; }
    inline void setKPlotWidget_MousePressEvent_Callback(KPlotWidget_MousePressEvent_Callback cb) { kplotwidget_mousepressevent_callback = cb; }
    inline void setKPlotWidget_MouseReleaseEvent_Callback(KPlotWidget_MouseReleaseEvent_Callback cb) { kplotwidget_mousereleaseevent_callback = cb; }
    inline void setKPlotWidget_MouseDoubleClickEvent_Callback(KPlotWidget_MouseDoubleClickEvent_Callback cb) { kplotwidget_mousedoubleclickevent_callback = cb; }
    inline void setKPlotWidget_MouseMoveEvent_Callback(KPlotWidget_MouseMoveEvent_Callback cb) { kplotwidget_mousemoveevent_callback = cb; }
    inline void setKPlotWidget_WheelEvent_Callback(KPlotWidget_WheelEvent_Callback cb) { kplotwidget_wheelevent_callback = cb; }
    inline void setKPlotWidget_KeyPressEvent_Callback(KPlotWidget_KeyPressEvent_Callback cb) { kplotwidget_keypressevent_callback = cb; }
    inline void setKPlotWidget_KeyReleaseEvent_Callback(KPlotWidget_KeyReleaseEvent_Callback cb) { kplotwidget_keyreleaseevent_callback = cb; }
    inline void setKPlotWidget_FocusInEvent_Callback(KPlotWidget_FocusInEvent_Callback cb) { kplotwidget_focusinevent_callback = cb; }
    inline void setKPlotWidget_FocusOutEvent_Callback(KPlotWidget_FocusOutEvent_Callback cb) { kplotwidget_focusoutevent_callback = cb; }
    inline void setKPlotWidget_EnterEvent_Callback(KPlotWidget_EnterEvent_Callback cb) { kplotwidget_enterevent_callback = cb; }
    inline void setKPlotWidget_LeaveEvent_Callback(KPlotWidget_LeaveEvent_Callback cb) { kplotwidget_leaveevent_callback = cb; }
    inline void setKPlotWidget_MoveEvent_Callback(KPlotWidget_MoveEvent_Callback cb) { kplotwidget_moveevent_callback = cb; }
    inline void setKPlotWidget_CloseEvent_Callback(KPlotWidget_CloseEvent_Callback cb) { kplotwidget_closeevent_callback = cb; }
    inline void setKPlotWidget_ContextMenuEvent_Callback(KPlotWidget_ContextMenuEvent_Callback cb) { kplotwidget_contextmenuevent_callback = cb; }
    inline void setKPlotWidget_TabletEvent_Callback(KPlotWidget_TabletEvent_Callback cb) { kplotwidget_tabletevent_callback = cb; }
    inline void setKPlotWidget_ActionEvent_Callback(KPlotWidget_ActionEvent_Callback cb) { kplotwidget_actionevent_callback = cb; }
    inline void setKPlotWidget_DragEnterEvent_Callback(KPlotWidget_DragEnterEvent_Callback cb) { kplotwidget_dragenterevent_callback = cb; }
    inline void setKPlotWidget_DragMoveEvent_Callback(KPlotWidget_DragMoveEvent_Callback cb) { kplotwidget_dragmoveevent_callback = cb; }
    inline void setKPlotWidget_DragLeaveEvent_Callback(KPlotWidget_DragLeaveEvent_Callback cb) { kplotwidget_dragleaveevent_callback = cb; }
    inline void setKPlotWidget_DropEvent_Callback(KPlotWidget_DropEvent_Callback cb) { kplotwidget_dropevent_callback = cb; }
    inline void setKPlotWidget_ShowEvent_Callback(KPlotWidget_ShowEvent_Callback cb) { kplotwidget_showevent_callback = cb; }
    inline void setKPlotWidget_HideEvent_Callback(KPlotWidget_HideEvent_Callback cb) { kplotwidget_hideevent_callback = cb; }
    inline void setKPlotWidget_NativeEvent_Callback(KPlotWidget_NativeEvent_Callback cb) { kplotwidget_nativeevent_callback = cb; }
    inline void setKPlotWidget_Metric_Callback(KPlotWidget_Metric_Callback cb) { kplotwidget_metric_callback = cb; }
    inline void setKPlotWidget_InitPainter_Callback(KPlotWidget_InitPainter_Callback cb) { kplotwidget_initpainter_callback = cb; }
    inline void setKPlotWidget_Redirected_Callback(KPlotWidget_Redirected_Callback cb) { kplotwidget_redirected_callback = cb; }
    inline void setKPlotWidget_SharedPainter_Callback(KPlotWidget_SharedPainter_Callback cb) { kplotwidget_sharedpainter_callback = cb; }
    inline void setKPlotWidget_InputMethodEvent_Callback(KPlotWidget_InputMethodEvent_Callback cb) { kplotwidget_inputmethodevent_callback = cb; }
    inline void setKPlotWidget_InputMethodQuery_Callback(KPlotWidget_InputMethodQuery_Callback cb) { kplotwidget_inputmethodquery_callback = cb; }
    inline void setKPlotWidget_FocusNextPrevChild_Callback(KPlotWidget_FocusNextPrevChild_Callback cb) { kplotwidget_focusnextprevchild_callback = cb; }
    inline void setKPlotWidget_EventFilter_Callback(KPlotWidget_EventFilter_Callback cb) { kplotwidget_eventfilter_callback = cb; }
    inline void setKPlotWidget_TimerEvent_Callback(KPlotWidget_TimerEvent_Callback cb) { kplotwidget_timerevent_callback = cb; }
    inline void setKPlotWidget_ChildEvent_Callback(KPlotWidget_ChildEvent_Callback cb) { kplotwidget_childevent_callback = cb; }
    inline void setKPlotWidget_CustomEvent_Callback(KPlotWidget_CustomEvent_Callback cb) { kplotwidget_customevent_callback = cb; }
    inline void setKPlotWidget_ConnectNotify_Callback(KPlotWidget_ConnectNotify_Callback cb) { kplotwidget_connectnotify_callback = cb; }
    inline void setKPlotWidget_DisconnectNotify_Callback(KPlotWidget_DisconnectNotify_Callback cb) { kplotwidget_disconnectnotify_callback = cb; }
    inline void setKPlotWidget_SetPixRect_Callback(KPlotWidget_SetPixRect_Callback cb) { kplotwidget_setpixrect_callback = cb; }
    inline void setKPlotWidget_PointsUnderPoint_Callback(KPlotWidget_PointsUnderPoint_Callback cb) { kplotwidget_pointsunderpoint_callback = cb; }
    inline void setKPlotWidget_DrawFrame_Callback(KPlotWidget_DrawFrame_Callback cb) { kplotwidget_drawframe_callback = cb; }
    inline void setKPlotWidget_UpdateMicroFocus_Callback(KPlotWidget_UpdateMicroFocus_Callback cb) { kplotwidget_updatemicrofocus_callback = cb; }
    inline void setKPlotWidget_Create_Callback(KPlotWidget_Create_Callback cb) { kplotwidget_create_callback = cb; }
    inline void setKPlotWidget_Destroy_Callback(KPlotWidget_Destroy_Callback cb) { kplotwidget_destroy_callback = cb; }
    inline void setKPlotWidget_FocusNextChild_Callback(KPlotWidget_FocusNextChild_Callback cb) { kplotwidget_focusnextchild_callback = cb; }
    inline void setKPlotWidget_FocusPreviousChild_Callback(KPlotWidget_FocusPreviousChild_Callback cb) { kplotwidget_focuspreviouschild_callback = cb; }
    inline void setKPlotWidget_Sender_Callback(KPlotWidget_Sender_Callback cb) { kplotwidget_sender_callback = cb; }
    inline void setKPlotWidget_SenderSignalIndex_Callback(KPlotWidget_SenderSignalIndex_Callback cb) { kplotwidget_sendersignalindex_callback = cb; }
    inline void setKPlotWidget_Receivers_Callback(KPlotWidget_Receivers_Callback cb) { kplotwidget_receivers_callback = cb; }
    inline void setKPlotWidget_IsSignalConnected_Callback(KPlotWidget_IsSignalConnected_Callback cb) { kplotwidget_issignalconnected_callback = cb; }
    inline void setKPlotWidget_GetDecodedMetricF_Callback(KPlotWidget_GetDecodedMetricF_Callback cb) { kplotwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKPlotWidget_MetaObject_IsBase(bool value) const { kplotwidget_metaobject_isbase = value; }
    inline void setKPlotWidget_Metacast_IsBase(bool value) const { kplotwidget_metacast_isbase = value; }
    inline void setKPlotWidget_Metacall_IsBase(bool value) const { kplotwidget_metacall_isbase = value; }
    inline void setKPlotWidget_MinimumSizeHint_IsBase(bool value) const { kplotwidget_minimumsizehint_isbase = value; }
    inline void setKPlotWidget_SizeHint_IsBase(bool value) const { kplotwidget_sizehint_isbase = value; }
    inline void setKPlotWidget_Event_IsBase(bool value) const { kplotwidget_event_isbase = value; }
    inline void setKPlotWidget_PaintEvent_IsBase(bool value) const { kplotwidget_paintevent_isbase = value; }
    inline void setKPlotWidget_ResizeEvent_IsBase(bool value) const { kplotwidget_resizeevent_isbase = value; }
    inline void setKPlotWidget_DrawAxes_IsBase(bool value) const { kplotwidget_drawaxes_isbase = value; }
    inline void setKPlotWidget_ChangeEvent_IsBase(bool value) const { kplotwidget_changeevent_isbase = value; }
    inline void setKPlotWidget_InitStyleOption_IsBase(bool value) const { kplotwidget_initstyleoption_isbase = value; }
    inline void setKPlotWidget_DevType_IsBase(bool value) const { kplotwidget_devtype_isbase = value; }
    inline void setKPlotWidget_SetVisible_IsBase(bool value) const { kplotwidget_setvisible_isbase = value; }
    inline void setKPlotWidget_HeightForWidth_IsBase(bool value) const { kplotwidget_heightforwidth_isbase = value; }
    inline void setKPlotWidget_HasHeightForWidth_IsBase(bool value) const { kplotwidget_hasheightforwidth_isbase = value; }
    inline void setKPlotWidget_PaintEngine_IsBase(bool value) const { kplotwidget_paintengine_isbase = value; }
    inline void setKPlotWidget_MousePressEvent_IsBase(bool value) const { kplotwidget_mousepressevent_isbase = value; }
    inline void setKPlotWidget_MouseReleaseEvent_IsBase(bool value) const { kplotwidget_mousereleaseevent_isbase = value; }
    inline void setKPlotWidget_MouseDoubleClickEvent_IsBase(bool value) const { kplotwidget_mousedoubleclickevent_isbase = value; }
    inline void setKPlotWidget_MouseMoveEvent_IsBase(bool value) const { kplotwidget_mousemoveevent_isbase = value; }
    inline void setKPlotWidget_WheelEvent_IsBase(bool value) const { kplotwidget_wheelevent_isbase = value; }
    inline void setKPlotWidget_KeyPressEvent_IsBase(bool value) const { kplotwidget_keypressevent_isbase = value; }
    inline void setKPlotWidget_KeyReleaseEvent_IsBase(bool value) const { kplotwidget_keyreleaseevent_isbase = value; }
    inline void setKPlotWidget_FocusInEvent_IsBase(bool value) const { kplotwidget_focusinevent_isbase = value; }
    inline void setKPlotWidget_FocusOutEvent_IsBase(bool value) const { kplotwidget_focusoutevent_isbase = value; }
    inline void setKPlotWidget_EnterEvent_IsBase(bool value) const { kplotwidget_enterevent_isbase = value; }
    inline void setKPlotWidget_LeaveEvent_IsBase(bool value) const { kplotwidget_leaveevent_isbase = value; }
    inline void setKPlotWidget_MoveEvent_IsBase(bool value) const { kplotwidget_moveevent_isbase = value; }
    inline void setKPlotWidget_CloseEvent_IsBase(bool value) const { kplotwidget_closeevent_isbase = value; }
    inline void setKPlotWidget_ContextMenuEvent_IsBase(bool value) const { kplotwidget_contextmenuevent_isbase = value; }
    inline void setKPlotWidget_TabletEvent_IsBase(bool value) const { kplotwidget_tabletevent_isbase = value; }
    inline void setKPlotWidget_ActionEvent_IsBase(bool value) const { kplotwidget_actionevent_isbase = value; }
    inline void setKPlotWidget_DragEnterEvent_IsBase(bool value) const { kplotwidget_dragenterevent_isbase = value; }
    inline void setKPlotWidget_DragMoveEvent_IsBase(bool value) const { kplotwidget_dragmoveevent_isbase = value; }
    inline void setKPlotWidget_DragLeaveEvent_IsBase(bool value) const { kplotwidget_dragleaveevent_isbase = value; }
    inline void setKPlotWidget_DropEvent_IsBase(bool value) const { kplotwidget_dropevent_isbase = value; }
    inline void setKPlotWidget_ShowEvent_IsBase(bool value) const { kplotwidget_showevent_isbase = value; }
    inline void setKPlotWidget_HideEvent_IsBase(bool value) const { kplotwidget_hideevent_isbase = value; }
    inline void setKPlotWidget_NativeEvent_IsBase(bool value) const { kplotwidget_nativeevent_isbase = value; }
    inline void setKPlotWidget_Metric_IsBase(bool value) const { kplotwidget_metric_isbase = value; }
    inline void setKPlotWidget_InitPainter_IsBase(bool value) const { kplotwidget_initpainter_isbase = value; }
    inline void setKPlotWidget_Redirected_IsBase(bool value) const { kplotwidget_redirected_isbase = value; }
    inline void setKPlotWidget_SharedPainter_IsBase(bool value) const { kplotwidget_sharedpainter_isbase = value; }
    inline void setKPlotWidget_InputMethodEvent_IsBase(bool value) const { kplotwidget_inputmethodevent_isbase = value; }
    inline void setKPlotWidget_InputMethodQuery_IsBase(bool value) const { kplotwidget_inputmethodquery_isbase = value; }
    inline void setKPlotWidget_FocusNextPrevChild_IsBase(bool value) const { kplotwidget_focusnextprevchild_isbase = value; }
    inline void setKPlotWidget_EventFilter_IsBase(bool value) const { kplotwidget_eventfilter_isbase = value; }
    inline void setKPlotWidget_TimerEvent_IsBase(bool value) const { kplotwidget_timerevent_isbase = value; }
    inline void setKPlotWidget_ChildEvent_IsBase(bool value) const { kplotwidget_childevent_isbase = value; }
    inline void setKPlotWidget_CustomEvent_IsBase(bool value) const { kplotwidget_customevent_isbase = value; }
    inline void setKPlotWidget_ConnectNotify_IsBase(bool value) const { kplotwidget_connectnotify_isbase = value; }
    inline void setKPlotWidget_DisconnectNotify_IsBase(bool value) const { kplotwidget_disconnectnotify_isbase = value; }
    inline void setKPlotWidget_SetPixRect_IsBase(bool value) const { kplotwidget_setpixrect_isbase = value; }
    inline void setKPlotWidget_PointsUnderPoint_IsBase(bool value) const { kplotwidget_pointsunderpoint_isbase = value; }
    inline void setKPlotWidget_DrawFrame_IsBase(bool value) const { kplotwidget_drawframe_isbase = value; }
    inline void setKPlotWidget_UpdateMicroFocus_IsBase(bool value) const { kplotwidget_updatemicrofocus_isbase = value; }
    inline void setKPlotWidget_Create_IsBase(bool value) const { kplotwidget_create_isbase = value; }
    inline void setKPlotWidget_Destroy_IsBase(bool value) const { kplotwidget_destroy_isbase = value; }
    inline void setKPlotWidget_FocusNextChild_IsBase(bool value) const { kplotwidget_focusnextchild_isbase = value; }
    inline void setKPlotWidget_FocusPreviousChild_IsBase(bool value) const { kplotwidget_focuspreviouschild_isbase = value; }
    inline void setKPlotWidget_Sender_IsBase(bool value) const { kplotwidget_sender_isbase = value; }
    inline void setKPlotWidget_SenderSignalIndex_IsBase(bool value) const { kplotwidget_sendersignalindex_isbase = value; }
    inline void setKPlotWidget_Receivers_IsBase(bool value) const { kplotwidget_receivers_isbase = value; }
    inline void setKPlotWidget_IsSignalConnected_IsBase(bool value) const { kplotwidget_issignalconnected_isbase = value; }
    inline void setKPlotWidget_GetDecodedMetricF_IsBase(bool value) const { kplotwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kplotwidget_metaobject_isbase) {
            kplotwidget_metaobject_isbase = false;
            return KPlotWidget::metaObject();
        }
        auto metaobject_cb = kplotwidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KPlotWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kplotwidget_metacast_isbase) {
            kplotwidget_metacast_isbase = false;
            return KPlotWidget::qt_metacast(param1);
        }
        auto metacast_cb = kplotwidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KPlotWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kplotwidget_metacall_isbase) {
            kplotwidget_metacall_isbase = false;
            return KPlotWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kplotwidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPlotWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kplotwidget_minimumsizehint_isbase) {
            kplotwidget_minimumsizehint_isbase = false;
            return KPlotWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = kplotwidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KPlotWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kplotwidget_sizehint_isbase) {
            kplotwidget_sizehint_isbase = false;
            return KPlotWidget::sizeHint();
        }
        auto sizehint_cb = kplotwidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KPlotWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kplotwidget_event_isbase) {
            kplotwidget_event_isbase = false;
            return KPlotWidget::event(param1);
        }
        auto event_cb = kplotwidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KPlotWidget::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kplotwidget_paintevent_isbase) {
            kplotwidget_paintevent_isbase = false;
            KPlotWidget::paintEvent(param1);
            return;
        }
        auto paintevent_cb = kplotwidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kplotwidget_resizeevent_isbase) {
            kplotwidget_resizeevent_isbase = false;
            KPlotWidget::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = kplotwidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawAxes(QPainter* p) override {
        if (kplotwidget_drawaxes_isbase) {
            kplotwidget_drawaxes_isbase = false;
            KPlotWidget::drawAxes(p);
            return;
        }
        auto drawaxes_cb = kplotwidget_drawaxes_callback;
        if (drawaxes_cb) {
            QPainter* cbval1 = p;

            drawaxes_cb(this, cbval1);
            return;
        }
        KPlotWidget::drawAxes(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kplotwidget_changeevent_isbase) {
            kplotwidget_changeevent_isbase = false;
            KPlotWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kplotwidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kplotwidget_initstyleoption_isbase) {
            kplotwidget_initstyleoption_isbase = false;
            KPlotWidget::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = kplotwidget_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        KPlotWidget::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kplotwidget_devtype_isbase) {
            kplotwidget_devtype_isbase = false;
            return KPlotWidget::devType();
        }
        auto devtype_cb = kplotwidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KPlotWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kplotwidget_setvisible_isbase) {
            kplotwidget_setvisible_isbase = false;
            KPlotWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = kplotwidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KPlotWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kplotwidget_heightforwidth_isbase) {
            kplotwidget_heightforwidth_isbase = false;
            return KPlotWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = kplotwidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPlotWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kplotwidget_hasheightforwidth_isbase) {
            kplotwidget_hasheightforwidth_isbase = false;
            return KPlotWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kplotwidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KPlotWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kplotwidget_paintengine_isbase) {
            kplotwidget_paintengine_isbase = false;
            return KPlotWidget::paintEngine();
        }
        auto paintengine_cb = kplotwidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KPlotWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kplotwidget_mousepressevent_isbase) {
            kplotwidget_mousepressevent_isbase = false;
            KPlotWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kplotwidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kplotwidget_mousereleaseevent_isbase) {
            kplotwidget_mousereleaseevent_isbase = false;
            KPlotWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kplotwidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kplotwidget_mousedoubleclickevent_isbase) {
            kplotwidget_mousedoubleclickevent_isbase = false;
            KPlotWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kplotwidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kplotwidget_mousemoveevent_isbase) {
            kplotwidget_mousemoveevent_isbase = false;
            KPlotWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kplotwidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kplotwidget_wheelevent_isbase) {
            kplotwidget_wheelevent_isbase = false;
            KPlotWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kplotwidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kplotwidget_keypressevent_isbase) {
            kplotwidget_keypressevent_isbase = false;
            KPlotWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = kplotwidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kplotwidget_keyreleaseevent_isbase) {
            kplotwidget_keyreleaseevent_isbase = false;
            KPlotWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kplotwidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kplotwidget_focusinevent_isbase) {
            kplotwidget_focusinevent_isbase = false;
            KPlotWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kplotwidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kplotwidget_focusoutevent_isbase) {
            kplotwidget_focusoutevent_isbase = false;
            KPlotWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kplotwidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kplotwidget_enterevent_isbase) {
            kplotwidget_enterevent_isbase = false;
            KPlotWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = kplotwidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kplotwidget_leaveevent_isbase) {
            kplotwidget_leaveevent_isbase = false;
            KPlotWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kplotwidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kplotwidget_moveevent_isbase) {
            kplotwidget_moveevent_isbase = false;
            KPlotWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = kplotwidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kplotwidget_closeevent_isbase) {
            kplotwidget_closeevent_isbase = false;
            KPlotWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = kplotwidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kplotwidget_contextmenuevent_isbase) {
            kplotwidget_contextmenuevent_isbase = false;
            KPlotWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = kplotwidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kplotwidget_tabletevent_isbase) {
            kplotwidget_tabletevent_isbase = false;
            KPlotWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kplotwidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kplotwidget_actionevent_isbase) {
            kplotwidget_actionevent_isbase = false;
            KPlotWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = kplotwidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kplotwidget_dragenterevent_isbase) {
            kplotwidget_dragenterevent_isbase = false;
            KPlotWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kplotwidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kplotwidget_dragmoveevent_isbase) {
            kplotwidget_dragmoveevent_isbase = false;
            KPlotWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kplotwidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kplotwidget_dragleaveevent_isbase) {
            kplotwidget_dragleaveevent_isbase = false;
            KPlotWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kplotwidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kplotwidget_dropevent_isbase) {
            kplotwidget_dropevent_isbase = false;
            KPlotWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = kplotwidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kplotwidget_showevent_isbase) {
            kplotwidget_showevent_isbase = false;
            KPlotWidget::showEvent(event);
            return;
        }
        auto showevent_cb = kplotwidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kplotwidget_hideevent_isbase) {
            kplotwidget_hideevent_isbase = false;
            KPlotWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = kplotwidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kplotwidget_nativeevent_isbase) {
            kplotwidget_nativeevent_isbase = false;
            return KPlotWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kplotwidget_nativeevent_callback;
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
        return KPlotWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kplotwidget_metric_isbase) {
            kplotwidget_metric_isbase = false;
            return KPlotWidget::metric(param1);
        }
        auto metric_cb = kplotwidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPlotWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kplotwidget_initpainter_isbase) {
            kplotwidget_initpainter_isbase = false;
            KPlotWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = kplotwidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KPlotWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kplotwidget_redirected_isbase) {
            kplotwidget_redirected_isbase = false;
            return KPlotWidget::redirected(offset);
        }
        auto redirected_cb = kplotwidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KPlotWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kplotwidget_sharedpainter_isbase) {
            kplotwidget_sharedpainter_isbase = false;
            return KPlotWidget::sharedPainter();
        }
        auto sharedpainter_cb = kplotwidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KPlotWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kplotwidget_inputmethodevent_isbase) {
            kplotwidget_inputmethodevent_isbase = false;
            KPlotWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kplotwidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kplotwidget_inputmethodquery_isbase) {
            kplotwidget_inputmethodquery_isbase = false;
            return KPlotWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kplotwidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KPlotWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kplotwidget_focusnextprevchild_isbase) {
            kplotwidget_focusnextprevchild_isbase = false;
            return KPlotWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kplotwidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KPlotWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kplotwidget_eventfilter_isbase) {
            kplotwidget_eventfilter_isbase = false;
            return KPlotWidget::eventFilter(watched, event);
        }
        auto eventfilter_cb = kplotwidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPlotWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kplotwidget_timerevent_isbase) {
            kplotwidget_timerevent_isbase = false;
            KPlotWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = kplotwidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kplotwidget_childevent_isbase) {
            kplotwidget_childevent_isbase = false;
            KPlotWidget::childEvent(event);
            return;
        }
        auto childevent_cb = kplotwidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kplotwidget_customevent_isbase) {
            kplotwidget_customevent_isbase = false;
            KPlotWidget::customEvent(event);
            return;
        }
        auto customevent_cb = kplotwidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KPlotWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kplotwidget_connectnotify_isbase) {
            kplotwidget_connectnotify_isbase = false;
            KPlotWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kplotwidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KPlotWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kplotwidget_disconnectnotify_isbase) {
            kplotwidget_disconnectnotify_isbase = false;
            KPlotWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kplotwidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KPlotWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setPixRect() {
        if (kplotwidget_setpixrect_isbase) {
            kplotwidget_setpixrect_isbase = false;
            KPlotWidget::setPixRect();
            return;
        }
        auto setpixrect_cb = kplotwidget_setpixrect_callback;
        if (setpixrect_cb) {
            setpixrect_cb();
            return;
        }
        KPlotWidget::setPixRect();
    }

    // Virtual method for C ABI access and custom callback
    QList<KPlotPoint*> pointsUnderPoint(const QPoint& p) const {
        if (kplotwidget_pointsunderpoint_isbase) {
            kplotwidget_pointsunderpoint_isbase = false;
            return KPlotWidget::pointsUnderPoint(p);
        }
        auto pointsunderpoint_cb = kplotwidget_pointsunderpoint_callback;
        if (pointsunderpoint_cb) {
            const QPoint& p_ret = p;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&p_ret);

            libqt_list /* of KPlotPoint* */ callback_ret = pointsunderpoint_cb(this, cbval1);
            QList<KPlotPoint*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            KPlotPoint** callback_ret_arr = static_cast<KPlotPoint**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KPlotWidget::pointsUnderPoint(p);
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (kplotwidget_drawframe_isbase) {
            kplotwidget_drawframe_isbase = false;
            KPlotWidget::drawFrame(param1);
            return;
        }
        auto drawframe_cb = kplotwidget_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;

            drawframe_cb(this, cbval1);
            return;
        }
        KPlotWidget::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kplotwidget_updatemicrofocus_isbase) {
            kplotwidget_updatemicrofocus_isbase = false;
            KPlotWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kplotwidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KPlotWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kplotwidget_create_isbase) {
            kplotwidget_create_isbase = false;
            KPlotWidget::create();
            return;
        }
        auto create_cb = kplotwidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KPlotWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kplotwidget_destroy_isbase) {
            kplotwidget_destroy_isbase = false;
            KPlotWidget::destroy();
            return;
        }
        auto destroy_cb = kplotwidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KPlotWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kplotwidget_focusnextchild_isbase) {
            kplotwidget_focusnextchild_isbase = false;
            return KPlotWidget::focusNextChild();
        }
        auto focusnextchild_cb = kplotwidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KPlotWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kplotwidget_focuspreviouschild_isbase) {
            kplotwidget_focuspreviouschild_isbase = false;
            return KPlotWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kplotwidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KPlotWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kplotwidget_sender_isbase) {
            kplotwidget_sender_isbase = false;
            return KPlotWidget::sender();
        }
        auto sender_cb = kplotwidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KPlotWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kplotwidget_sendersignalindex_isbase) {
            kplotwidget_sendersignalindex_isbase = false;
            return KPlotWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = kplotwidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KPlotWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kplotwidget_receivers_isbase) {
            kplotwidget_receivers_isbase = false;
            return KPlotWidget::receivers(signal);
        }
        auto receivers_cb = kplotwidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPlotWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kplotwidget_issignalconnected_isbase) {
            kplotwidget_issignalconnected_isbase = false;
            return KPlotWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kplotwidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KPlotWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kplotwidget_getdecodedmetricf_isbase) {
            kplotwidget_getdecodedmetricf_isbase = false;
            return KPlotWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kplotwidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KPlotWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool KPlotWidget_Event(KPlotWidget* self, QEvent* param1);
    friend bool KPlotWidget_SuperEvent(KPlotWidget* self, QEvent* param1);
    friend void KPlotWidget_PaintEvent(KPlotWidget* self, QPaintEvent* param1);
    friend void KPlotWidget_SuperPaintEvent(KPlotWidget* self, QPaintEvent* param1);
    friend void KPlotWidget_ResizeEvent(KPlotWidget* self, QResizeEvent* param1);
    friend void KPlotWidget_SuperResizeEvent(KPlotWidget* self, QResizeEvent* param1);
    friend void KPlotWidget_DrawAxes(KPlotWidget* self, QPainter* p);
    friend void KPlotWidget_SuperDrawAxes(KPlotWidget* self, QPainter* p);
    friend void KPlotWidget_ChangeEvent(KPlotWidget* self, QEvent* param1);
    friend void KPlotWidget_SuperChangeEvent(KPlotWidget* self, QEvent* param1);
    friend void KPlotWidget_InitStyleOption(const KPlotWidget* self, QStyleOptionFrame* option);
    friend void KPlotWidget_SuperInitStyleOption(const KPlotWidget* self, QStyleOptionFrame* option);
    friend void KPlotWidget_MousePressEvent(KPlotWidget* self, QMouseEvent* event);
    friend void KPlotWidget_SuperMousePressEvent(KPlotWidget* self, QMouseEvent* event);
    friend void KPlotWidget_MouseReleaseEvent(KPlotWidget* self, QMouseEvent* event);
    friend void KPlotWidget_SuperMouseReleaseEvent(KPlotWidget* self, QMouseEvent* event);
    friend void KPlotWidget_MouseDoubleClickEvent(KPlotWidget* self, QMouseEvent* event);
    friend void KPlotWidget_SuperMouseDoubleClickEvent(KPlotWidget* self, QMouseEvent* event);
    friend void KPlotWidget_MouseMoveEvent(KPlotWidget* self, QMouseEvent* event);
    friend void KPlotWidget_SuperMouseMoveEvent(KPlotWidget* self, QMouseEvent* event);
    friend void KPlotWidget_WheelEvent(KPlotWidget* self, QWheelEvent* event);
    friend void KPlotWidget_SuperWheelEvent(KPlotWidget* self, QWheelEvent* event);
    friend void KPlotWidget_KeyPressEvent(KPlotWidget* self, QKeyEvent* event);
    friend void KPlotWidget_SuperKeyPressEvent(KPlotWidget* self, QKeyEvent* event);
    friend void KPlotWidget_KeyReleaseEvent(KPlotWidget* self, QKeyEvent* event);
    friend void KPlotWidget_SuperKeyReleaseEvent(KPlotWidget* self, QKeyEvent* event);
    friend void KPlotWidget_FocusInEvent(KPlotWidget* self, QFocusEvent* event);
    friend void KPlotWidget_SuperFocusInEvent(KPlotWidget* self, QFocusEvent* event);
    friend void KPlotWidget_FocusOutEvent(KPlotWidget* self, QFocusEvent* event);
    friend void KPlotWidget_SuperFocusOutEvent(KPlotWidget* self, QFocusEvent* event);
    friend void KPlotWidget_EnterEvent(KPlotWidget* self, QEnterEvent* event);
    friend void KPlotWidget_SuperEnterEvent(KPlotWidget* self, QEnterEvent* event);
    friend void KPlotWidget_LeaveEvent(KPlotWidget* self, QEvent* event);
    friend void KPlotWidget_SuperLeaveEvent(KPlotWidget* self, QEvent* event);
    friend void KPlotWidget_MoveEvent(KPlotWidget* self, QMoveEvent* event);
    friend void KPlotWidget_SuperMoveEvent(KPlotWidget* self, QMoveEvent* event);
    friend void KPlotWidget_CloseEvent(KPlotWidget* self, QCloseEvent* event);
    friend void KPlotWidget_SuperCloseEvent(KPlotWidget* self, QCloseEvent* event);
    friend void KPlotWidget_ContextMenuEvent(KPlotWidget* self, QContextMenuEvent* event);
    friend void KPlotWidget_SuperContextMenuEvent(KPlotWidget* self, QContextMenuEvent* event);
    friend void KPlotWidget_TabletEvent(KPlotWidget* self, QTabletEvent* event);
    friend void KPlotWidget_SuperTabletEvent(KPlotWidget* self, QTabletEvent* event);
    friend void KPlotWidget_ActionEvent(KPlotWidget* self, QActionEvent* event);
    friend void KPlotWidget_SuperActionEvent(KPlotWidget* self, QActionEvent* event);
    friend void KPlotWidget_DragEnterEvent(KPlotWidget* self, QDragEnterEvent* event);
    friend void KPlotWidget_SuperDragEnterEvent(KPlotWidget* self, QDragEnterEvent* event);
    friend void KPlotWidget_DragMoveEvent(KPlotWidget* self, QDragMoveEvent* event);
    friend void KPlotWidget_SuperDragMoveEvent(KPlotWidget* self, QDragMoveEvent* event);
    friend void KPlotWidget_DragLeaveEvent(KPlotWidget* self, QDragLeaveEvent* event);
    friend void KPlotWidget_SuperDragLeaveEvent(KPlotWidget* self, QDragLeaveEvent* event);
    friend void KPlotWidget_DropEvent(KPlotWidget* self, QDropEvent* event);
    friend void KPlotWidget_SuperDropEvent(KPlotWidget* self, QDropEvent* event);
    friend void KPlotWidget_ShowEvent(KPlotWidget* self, QShowEvent* event);
    friend void KPlotWidget_SuperShowEvent(KPlotWidget* self, QShowEvent* event);
    friend void KPlotWidget_HideEvent(KPlotWidget* self, QHideEvent* event);
    friend void KPlotWidget_SuperHideEvent(KPlotWidget* self, QHideEvent* event);
    friend bool KPlotWidget_NativeEvent(KPlotWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KPlotWidget_SuperNativeEvent(KPlotWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KPlotWidget_Metric(const KPlotWidget* self, int param1);
    friend int KPlotWidget_SuperMetric(const KPlotWidget* self, int param1);
    friend void KPlotWidget_InitPainter(const KPlotWidget* self, QPainter* painter);
    friend void KPlotWidget_SuperInitPainter(const KPlotWidget* self, QPainter* painter);
    friend QPaintDevice* KPlotWidget_Redirected(const KPlotWidget* self, QPoint* offset);
    friend QPaintDevice* KPlotWidget_SuperRedirected(const KPlotWidget* self, QPoint* offset);
    friend QPainter* KPlotWidget_SharedPainter(const KPlotWidget* self);
    friend QPainter* KPlotWidget_SuperSharedPainter(const KPlotWidget* self);
    friend void KPlotWidget_InputMethodEvent(KPlotWidget* self, QInputMethodEvent* param1);
    friend void KPlotWidget_SuperInputMethodEvent(KPlotWidget* self, QInputMethodEvent* param1);
    friend bool KPlotWidget_FocusNextPrevChild(KPlotWidget* self, bool next);
    friend bool KPlotWidget_SuperFocusNextPrevChild(KPlotWidget* self, bool next);
    friend void KPlotWidget_TimerEvent(KPlotWidget* self, QTimerEvent* event);
    friend void KPlotWidget_SuperTimerEvent(KPlotWidget* self, QTimerEvent* event);
    friend void KPlotWidget_ChildEvent(KPlotWidget* self, QChildEvent* event);
    friend void KPlotWidget_SuperChildEvent(KPlotWidget* self, QChildEvent* event);
    friend void KPlotWidget_CustomEvent(KPlotWidget* self, QEvent* event);
    friend void KPlotWidget_SuperCustomEvent(KPlotWidget* self, QEvent* event);
    friend void KPlotWidget_ConnectNotify(KPlotWidget* self, const QMetaMethod* signal);
    friend void KPlotWidget_SuperConnectNotify(KPlotWidget* self, const QMetaMethod* signal);
    friend void KPlotWidget_DisconnectNotify(KPlotWidget* self, const QMetaMethod* signal);
    friend void KPlotWidget_SuperDisconnectNotify(KPlotWidget* self, const QMetaMethod* signal);
    friend void KPlotWidget_SetPixRect(KPlotWidget* self);
    friend void KPlotWidget_SuperSetPixRect(KPlotWidget* self);
    friend libqt_list /* of KPlotPoint* */ KPlotWidget_PointsUnderPoint(const KPlotWidget* self, const QPoint* p);
    friend libqt_list /* of KPlotPoint* */ KPlotWidget_SuperPointsUnderPoint(const KPlotWidget* self, const QPoint* p);
    friend void KPlotWidget_DrawFrame(KPlotWidget* self, QPainter* param1);
    friend void KPlotWidget_SuperDrawFrame(KPlotWidget* self, QPainter* param1);
    friend void KPlotWidget_UpdateMicroFocus(KPlotWidget* self);
    friend void KPlotWidget_SuperUpdateMicroFocus(KPlotWidget* self);
    friend void KPlotWidget_Create(KPlotWidget* self);
    friend void KPlotWidget_SuperCreate(KPlotWidget* self);
    friend void KPlotWidget_Destroy(KPlotWidget* self);
    friend void KPlotWidget_SuperDestroy(KPlotWidget* self);
    friend bool KPlotWidget_FocusNextChild(KPlotWidget* self);
    friend bool KPlotWidget_SuperFocusNextChild(KPlotWidget* self);
    friend bool KPlotWidget_FocusPreviousChild(KPlotWidget* self);
    friend bool KPlotWidget_SuperFocusPreviousChild(KPlotWidget* self);
    friend QObject* KPlotWidget_Sender(const KPlotWidget* self);
    friend QObject* KPlotWidget_SuperSender(const KPlotWidget* self);
    friend int KPlotWidget_SenderSignalIndex(const KPlotWidget* self);
    friend int KPlotWidget_SuperSenderSignalIndex(const KPlotWidget* self);
    friend int KPlotWidget_Receivers(const KPlotWidget* self, const char* signal);
    friend int KPlotWidget_SuperReceivers(const KPlotWidget* self, const char* signal);
    friend bool KPlotWidget_IsSignalConnected(const KPlotWidget* self, const QMetaMethod* signal);
    friend bool KPlotWidget_SuperIsSignalConnected(const KPlotWidget* self, const QMetaMethod* signal);
    friend double KPlotWidget_GetDecodedMetricF(const KPlotWidget* self, int metricA, int metricB);
    friend double KPlotWidget_SuperGetDecodedMetricF(const KPlotWidget* self, int metricA, int metricB);
};

#endif
