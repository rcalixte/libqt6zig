#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTOOLTIPWIDGET_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTOOLTIPWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KToolTipWidget so that we can call protected methods
class VirtualKToolTipWidget final : public KToolTipWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualKToolTipWidget = true;

    // Virtual class public types (including callbacks)
    using KToolTipWidget_MetaObject_Callback = QMetaObject* (*)();
    using KToolTipWidget_Metacast_Callback = void* (*)(KToolTipWidget*, const char*);
    using KToolTipWidget_Metacall_Callback = int (*)(KToolTipWidget*, int, int, void**);
    using KToolTipWidget_EnterEvent_Callback = void (*)(KToolTipWidget*, QEnterEvent*);
    using KToolTipWidget_HideEvent_Callback = void (*)(KToolTipWidget*, QHideEvent*);
    using KToolTipWidget_LeaveEvent_Callback = void (*)(KToolTipWidget*, QEvent*);
    using KToolTipWidget_PaintEvent_Callback = void (*)(KToolTipWidget*, QPaintEvent*);
    using KToolTipWidget_DevType_Callback = int (*)();
    using KToolTipWidget_SetVisible_Callback = void (*)(KToolTipWidget*, bool);
    using KToolTipWidget_SizeHint_Callback = QSize* (*)();
    using KToolTipWidget_MinimumSizeHint_Callback = QSize* (*)();
    using KToolTipWidget_HeightForWidth_Callback = int (*)(const KToolTipWidget*, int);
    using KToolTipWidget_HasHeightForWidth_Callback = bool (*)();
    using KToolTipWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using KToolTipWidget_Event_Callback = bool (*)(KToolTipWidget*, QEvent*);
    using KToolTipWidget_MousePressEvent_Callback = void (*)(KToolTipWidget*, QMouseEvent*);
    using KToolTipWidget_MouseReleaseEvent_Callback = void (*)(KToolTipWidget*, QMouseEvent*);
    using KToolTipWidget_MouseDoubleClickEvent_Callback = void (*)(KToolTipWidget*, QMouseEvent*);
    using KToolTipWidget_MouseMoveEvent_Callback = void (*)(KToolTipWidget*, QMouseEvent*);
    using KToolTipWidget_WheelEvent_Callback = void (*)(KToolTipWidget*, QWheelEvent*);
    using KToolTipWidget_KeyPressEvent_Callback = void (*)(KToolTipWidget*, QKeyEvent*);
    using KToolTipWidget_KeyReleaseEvent_Callback = void (*)(KToolTipWidget*, QKeyEvent*);
    using KToolTipWidget_FocusInEvent_Callback = void (*)(KToolTipWidget*, QFocusEvent*);
    using KToolTipWidget_FocusOutEvent_Callback = void (*)(KToolTipWidget*, QFocusEvent*);
    using KToolTipWidget_MoveEvent_Callback = void (*)(KToolTipWidget*, QMoveEvent*);
    using KToolTipWidget_ResizeEvent_Callback = void (*)(KToolTipWidget*, QResizeEvent*);
    using KToolTipWidget_CloseEvent_Callback = void (*)(KToolTipWidget*, QCloseEvent*);
    using KToolTipWidget_ContextMenuEvent_Callback = void (*)(KToolTipWidget*, QContextMenuEvent*);
    using KToolTipWidget_TabletEvent_Callback = void (*)(KToolTipWidget*, QTabletEvent*);
    using KToolTipWidget_ActionEvent_Callback = void (*)(KToolTipWidget*, QActionEvent*);
    using KToolTipWidget_DragEnterEvent_Callback = void (*)(KToolTipWidget*, QDragEnterEvent*);
    using KToolTipWidget_DragMoveEvent_Callback = void (*)(KToolTipWidget*, QDragMoveEvent*);
    using KToolTipWidget_DragLeaveEvent_Callback = void (*)(KToolTipWidget*, QDragLeaveEvent*);
    using KToolTipWidget_DropEvent_Callback = void (*)(KToolTipWidget*, QDropEvent*);
    using KToolTipWidget_ShowEvent_Callback = void (*)(KToolTipWidget*, QShowEvent*);
    using KToolTipWidget_NativeEvent_Callback = bool (*)(KToolTipWidget*, libqt_string, void*, intptr_t*);
    using KToolTipWidget_ChangeEvent_Callback = void (*)(KToolTipWidget*, QEvent*);
    using KToolTipWidget_Metric_Callback = int (*)(const KToolTipWidget*, int);
    using KToolTipWidget_InitPainter_Callback = void (*)(const KToolTipWidget*, QPainter*);
    using KToolTipWidget_Redirected_Callback = QPaintDevice* (*)(const KToolTipWidget*, QPoint*);
    using KToolTipWidget_SharedPainter_Callback = QPainter* (*)();
    using KToolTipWidget_InputMethodEvent_Callback = void (*)(KToolTipWidget*, QInputMethodEvent*);
    using KToolTipWidget_InputMethodQuery_Callback = QVariant* (*)(const KToolTipWidget*, int);
    using KToolTipWidget_FocusNextPrevChild_Callback = bool (*)(KToolTipWidget*, bool);
    using KToolTipWidget_EventFilter_Callback = bool (*)(KToolTipWidget*, QObject*, QEvent*);
    using KToolTipWidget_TimerEvent_Callback = void (*)(KToolTipWidget*, QTimerEvent*);
    using KToolTipWidget_ChildEvent_Callback = void (*)(KToolTipWidget*, QChildEvent*);
    using KToolTipWidget_CustomEvent_Callback = void (*)(KToolTipWidget*, QEvent*);
    using KToolTipWidget_ConnectNotify_Callback = void (*)(KToolTipWidget*, QMetaMethod*);
    using KToolTipWidget_DisconnectNotify_Callback = void (*)(KToolTipWidget*, QMetaMethod*);
    using KToolTipWidget_UpdateMicroFocus_Callback = void (*)();
    using KToolTipWidget_Create_Callback = void (*)();
    using KToolTipWidget_Destroy_Callback = void (*)();
    using KToolTipWidget_FocusNextChild_Callback = bool (*)();
    using KToolTipWidget_FocusPreviousChild_Callback = bool (*)();
    using KToolTipWidget_Sender_Callback = QObject* (*)();
    using KToolTipWidget_SenderSignalIndex_Callback = int (*)();
    using KToolTipWidget_Receivers_Callback = int (*)(const KToolTipWidget*, const char*);
    using KToolTipWidget_IsSignalConnected_Callback = bool (*)(const KToolTipWidget*, QMetaMethod*);
    using KToolTipWidget_GetDecodedMetricF_Callback = double (*)(const KToolTipWidget*, int, int);

  protected:
    // Instance callback storage
    KToolTipWidget_MetaObject_Callback ktooltipwidget_metaobject_callback = nullptr;
    KToolTipWidget_Metacast_Callback ktooltipwidget_metacast_callback = nullptr;
    KToolTipWidget_Metacall_Callback ktooltipwidget_metacall_callback = nullptr;
    KToolTipWidget_EnterEvent_Callback ktooltipwidget_enterevent_callback = nullptr;
    KToolTipWidget_HideEvent_Callback ktooltipwidget_hideevent_callback = nullptr;
    KToolTipWidget_LeaveEvent_Callback ktooltipwidget_leaveevent_callback = nullptr;
    KToolTipWidget_PaintEvent_Callback ktooltipwidget_paintevent_callback = nullptr;
    KToolTipWidget_DevType_Callback ktooltipwidget_devtype_callback = nullptr;
    KToolTipWidget_SetVisible_Callback ktooltipwidget_setvisible_callback = nullptr;
    KToolTipWidget_SizeHint_Callback ktooltipwidget_sizehint_callback = nullptr;
    KToolTipWidget_MinimumSizeHint_Callback ktooltipwidget_minimumsizehint_callback = nullptr;
    KToolTipWidget_HeightForWidth_Callback ktooltipwidget_heightforwidth_callback = nullptr;
    KToolTipWidget_HasHeightForWidth_Callback ktooltipwidget_hasheightforwidth_callback = nullptr;
    KToolTipWidget_PaintEngine_Callback ktooltipwidget_paintengine_callback = nullptr;
    KToolTipWidget_Event_Callback ktooltipwidget_event_callback = nullptr;
    KToolTipWidget_MousePressEvent_Callback ktooltipwidget_mousepressevent_callback = nullptr;
    KToolTipWidget_MouseReleaseEvent_Callback ktooltipwidget_mousereleaseevent_callback = nullptr;
    KToolTipWidget_MouseDoubleClickEvent_Callback ktooltipwidget_mousedoubleclickevent_callback = nullptr;
    KToolTipWidget_MouseMoveEvent_Callback ktooltipwidget_mousemoveevent_callback = nullptr;
    KToolTipWidget_WheelEvent_Callback ktooltipwidget_wheelevent_callback = nullptr;
    KToolTipWidget_KeyPressEvent_Callback ktooltipwidget_keypressevent_callback = nullptr;
    KToolTipWidget_KeyReleaseEvent_Callback ktooltipwidget_keyreleaseevent_callback = nullptr;
    KToolTipWidget_FocusInEvent_Callback ktooltipwidget_focusinevent_callback = nullptr;
    KToolTipWidget_FocusOutEvent_Callback ktooltipwidget_focusoutevent_callback = nullptr;
    KToolTipWidget_MoveEvent_Callback ktooltipwidget_moveevent_callback = nullptr;
    KToolTipWidget_ResizeEvent_Callback ktooltipwidget_resizeevent_callback = nullptr;
    KToolTipWidget_CloseEvent_Callback ktooltipwidget_closeevent_callback = nullptr;
    KToolTipWidget_ContextMenuEvent_Callback ktooltipwidget_contextmenuevent_callback = nullptr;
    KToolTipWidget_TabletEvent_Callback ktooltipwidget_tabletevent_callback = nullptr;
    KToolTipWidget_ActionEvent_Callback ktooltipwidget_actionevent_callback = nullptr;
    KToolTipWidget_DragEnterEvent_Callback ktooltipwidget_dragenterevent_callback = nullptr;
    KToolTipWidget_DragMoveEvent_Callback ktooltipwidget_dragmoveevent_callback = nullptr;
    KToolTipWidget_DragLeaveEvent_Callback ktooltipwidget_dragleaveevent_callback = nullptr;
    KToolTipWidget_DropEvent_Callback ktooltipwidget_dropevent_callback = nullptr;
    KToolTipWidget_ShowEvent_Callback ktooltipwidget_showevent_callback = nullptr;
    KToolTipWidget_NativeEvent_Callback ktooltipwidget_nativeevent_callback = nullptr;
    KToolTipWidget_ChangeEvent_Callback ktooltipwidget_changeevent_callback = nullptr;
    KToolTipWidget_Metric_Callback ktooltipwidget_metric_callback = nullptr;
    KToolTipWidget_InitPainter_Callback ktooltipwidget_initpainter_callback = nullptr;
    KToolTipWidget_Redirected_Callback ktooltipwidget_redirected_callback = nullptr;
    KToolTipWidget_SharedPainter_Callback ktooltipwidget_sharedpainter_callback = nullptr;
    KToolTipWidget_InputMethodEvent_Callback ktooltipwidget_inputmethodevent_callback = nullptr;
    KToolTipWidget_InputMethodQuery_Callback ktooltipwidget_inputmethodquery_callback = nullptr;
    KToolTipWidget_FocusNextPrevChild_Callback ktooltipwidget_focusnextprevchild_callback = nullptr;
    KToolTipWidget_EventFilter_Callback ktooltipwidget_eventfilter_callback = nullptr;
    KToolTipWidget_TimerEvent_Callback ktooltipwidget_timerevent_callback = nullptr;
    KToolTipWidget_ChildEvent_Callback ktooltipwidget_childevent_callback = nullptr;
    KToolTipWidget_CustomEvent_Callback ktooltipwidget_customevent_callback = nullptr;
    KToolTipWidget_ConnectNotify_Callback ktooltipwidget_connectnotify_callback = nullptr;
    KToolTipWidget_DisconnectNotify_Callback ktooltipwidget_disconnectnotify_callback = nullptr;
    KToolTipWidget_UpdateMicroFocus_Callback ktooltipwidget_updatemicrofocus_callback = nullptr;
    KToolTipWidget_Create_Callback ktooltipwidget_create_callback = nullptr;
    KToolTipWidget_Destroy_Callback ktooltipwidget_destroy_callback = nullptr;
    KToolTipWidget_FocusNextChild_Callback ktooltipwidget_focusnextchild_callback = nullptr;
    KToolTipWidget_FocusPreviousChild_Callback ktooltipwidget_focuspreviouschild_callback = nullptr;
    KToolTipWidget_Sender_Callback ktooltipwidget_sender_callback = nullptr;
    KToolTipWidget_SenderSignalIndex_Callback ktooltipwidget_sendersignalindex_callback = nullptr;
    KToolTipWidget_Receivers_Callback ktooltipwidget_receivers_callback = nullptr;
    KToolTipWidget_IsSignalConnected_Callback ktooltipwidget_issignalconnected_callback = nullptr;
    KToolTipWidget_GetDecodedMetricF_Callback ktooltipwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool ktooltipwidget_metaobject_isbase = false;
    mutable bool ktooltipwidget_metacast_isbase = false;
    mutable bool ktooltipwidget_metacall_isbase = false;
    mutable bool ktooltipwidget_enterevent_isbase = false;
    mutable bool ktooltipwidget_hideevent_isbase = false;
    mutable bool ktooltipwidget_leaveevent_isbase = false;
    mutable bool ktooltipwidget_paintevent_isbase = false;
    mutable bool ktooltipwidget_devtype_isbase = false;
    mutable bool ktooltipwidget_setvisible_isbase = false;
    mutable bool ktooltipwidget_sizehint_isbase = false;
    mutable bool ktooltipwidget_minimumsizehint_isbase = false;
    mutable bool ktooltipwidget_heightforwidth_isbase = false;
    mutable bool ktooltipwidget_hasheightforwidth_isbase = false;
    mutable bool ktooltipwidget_paintengine_isbase = false;
    mutable bool ktooltipwidget_event_isbase = false;
    mutable bool ktooltipwidget_mousepressevent_isbase = false;
    mutable bool ktooltipwidget_mousereleaseevent_isbase = false;
    mutable bool ktooltipwidget_mousedoubleclickevent_isbase = false;
    mutable bool ktooltipwidget_mousemoveevent_isbase = false;
    mutable bool ktooltipwidget_wheelevent_isbase = false;
    mutable bool ktooltipwidget_keypressevent_isbase = false;
    mutable bool ktooltipwidget_keyreleaseevent_isbase = false;
    mutable bool ktooltipwidget_focusinevent_isbase = false;
    mutable bool ktooltipwidget_focusoutevent_isbase = false;
    mutable bool ktooltipwidget_moveevent_isbase = false;
    mutable bool ktooltipwidget_resizeevent_isbase = false;
    mutable bool ktooltipwidget_closeevent_isbase = false;
    mutable bool ktooltipwidget_contextmenuevent_isbase = false;
    mutable bool ktooltipwidget_tabletevent_isbase = false;
    mutable bool ktooltipwidget_actionevent_isbase = false;
    mutable bool ktooltipwidget_dragenterevent_isbase = false;
    mutable bool ktooltipwidget_dragmoveevent_isbase = false;
    mutable bool ktooltipwidget_dragleaveevent_isbase = false;
    mutable bool ktooltipwidget_dropevent_isbase = false;
    mutable bool ktooltipwidget_showevent_isbase = false;
    mutable bool ktooltipwidget_nativeevent_isbase = false;
    mutable bool ktooltipwidget_changeevent_isbase = false;
    mutable bool ktooltipwidget_metric_isbase = false;
    mutable bool ktooltipwidget_initpainter_isbase = false;
    mutable bool ktooltipwidget_redirected_isbase = false;
    mutable bool ktooltipwidget_sharedpainter_isbase = false;
    mutable bool ktooltipwidget_inputmethodevent_isbase = false;
    mutable bool ktooltipwidget_inputmethodquery_isbase = false;
    mutable bool ktooltipwidget_focusnextprevchild_isbase = false;
    mutable bool ktooltipwidget_eventfilter_isbase = false;
    mutable bool ktooltipwidget_timerevent_isbase = false;
    mutable bool ktooltipwidget_childevent_isbase = false;
    mutable bool ktooltipwidget_customevent_isbase = false;
    mutable bool ktooltipwidget_connectnotify_isbase = false;
    mutable bool ktooltipwidget_disconnectnotify_isbase = false;
    mutable bool ktooltipwidget_updatemicrofocus_isbase = false;
    mutable bool ktooltipwidget_create_isbase = false;
    mutable bool ktooltipwidget_destroy_isbase = false;
    mutable bool ktooltipwidget_focusnextchild_isbase = false;
    mutable bool ktooltipwidget_focuspreviouschild_isbase = false;
    mutable bool ktooltipwidget_sender_isbase = false;
    mutable bool ktooltipwidget_sendersignalindex_isbase = false;
    mutable bool ktooltipwidget_receivers_isbase = false;
    mutable bool ktooltipwidget_issignalconnected_isbase = false;
    mutable bool ktooltipwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualKToolTipWidget(QWidget* parent) : KToolTipWidget(parent) {};
    VirtualKToolTipWidget() : KToolTipWidget() {};

    // Callback setters
    inline void setKToolTipWidget_MetaObject_Callback(KToolTipWidget_MetaObject_Callback cb) { ktooltipwidget_metaobject_callback = cb; }
    inline void setKToolTipWidget_Metacast_Callback(KToolTipWidget_Metacast_Callback cb) { ktooltipwidget_metacast_callback = cb; }
    inline void setKToolTipWidget_Metacall_Callback(KToolTipWidget_Metacall_Callback cb) { ktooltipwidget_metacall_callback = cb; }
    inline void setKToolTipWidget_EnterEvent_Callback(KToolTipWidget_EnterEvent_Callback cb) { ktooltipwidget_enterevent_callback = cb; }
    inline void setKToolTipWidget_HideEvent_Callback(KToolTipWidget_HideEvent_Callback cb) { ktooltipwidget_hideevent_callback = cb; }
    inline void setKToolTipWidget_LeaveEvent_Callback(KToolTipWidget_LeaveEvent_Callback cb) { ktooltipwidget_leaveevent_callback = cb; }
    inline void setKToolTipWidget_PaintEvent_Callback(KToolTipWidget_PaintEvent_Callback cb) { ktooltipwidget_paintevent_callback = cb; }
    inline void setKToolTipWidget_DevType_Callback(KToolTipWidget_DevType_Callback cb) { ktooltipwidget_devtype_callback = cb; }
    inline void setKToolTipWidget_SetVisible_Callback(KToolTipWidget_SetVisible_Callback cb) { ktooltipwidget_setvisible_callback = cb; }
    inline void setKToolTipWidget_SizeHint_Callback(KToolTipWidget_SizeHint_Callback cb) { ktooltipwidget_sizehint_callback = cb; }
    inline void setKToolTipWidget_MinimumSizeHint_Callback(KToolTipWidget_MinimumSizeHint_Callback cb) { ktooltipwidget_minimumsizehint_callback = cb; }
    inline void setKToolTipWidget_HeightForWidth_Callback(KToolTipWidget_HeightForWidth_Callback cb) { ktooltipwidget_heightforwidth_callback = cb; }
    inline void setKToolTipWidget_HasHeightForWidth_Callback(KToolTipWidget_HasHeightForWidth_Callback cb) { ktooltipwidget_hasheightforwidth_callback = cb; }
    inline void setKToolTipWidget_PaintEngine_Callback(KToolTipWidget_PaintEngine_Callback cb) { ktooltipwidget_paintengine_callback = cb; }
    inline void setKToolTipWidget_Event_Callback(KToolTipWidget_Event_Callback cb) { ktooltipwidget_event_callback = cb; }
    inline void setKToolTipWidget_MousePressEvent_Callback(KToolTipWidget_MousePressEvent_Callback cb) { ktooltipwidget_mousepressevent_callback = cb; }
    inline void setKToolTipWidget_MouseReleaseEvent_Callback(KToolTipWidget_MouseReleaseEvent_Callback cb) { ktooltipwidget_mousereleaseevent_callback = cb; }
    inline void setKToolTipWidget_MouseDoubleClickEvent_Callback(KToolTipWidget_MouseDoubleClickEvent_Callback cb) { ktooltipwidget_mousedoubleclickevent_callback = cb; }
    inline void setKToolTipWidget_MouseMoveEvent_Callback(KToolTipWidget_MouseMoveEvent_Callback cb) { ktooltipwidget_mousemoveevent_callback = cb; }
    inline void setKToolTipWidget_WheelEvent_Callback(KToolTipWidget_WheelEvent_Callback cb) { ktooltipwidget_wheelevent_callback = cb; }
    inline void setKToolTipWidget_KeyPressEvent_Callback(KToolTipWidget_KeyPressEvent_Callback cb) { ktooltipwidget_keypressevent_callback = cb; }
    inline void setKToolTipWidget_KeyReleaseEvent_Callback(KToolTipWidget_KeyReleaseEvent_Callback cb) { ktooltipwidget_keyreleaseevent_callback = cb; }
    inline void setKToolTipWidget_FocusInEvent_Callback(KToolTipWidget_FocusInEvent_Callback cb) { ktooltipwidget_focusinevent_callback = cb; }
    inline void setKToolTipWidget_FocusOutEvent_Callback(KToolTipWidget_FocusOutEvent_Callback cb) { ktooltipwidget_focusoutevent_callback = cb; }
    inline void setKToolTipWidget_MoveEvent_Callback(KToolTipWidget_MoveEvent_Callback cb) { ktooltipwidget_moveevent_callback = cb; }
    inline void setKToolTipWidget_ResizeEvent_Callback(KToolTipWidget_ResizeEvent_Callback cb) { ktooltipwidget_resizeevent_callback = cb; }
    inline void setKToolTipWidget_CloseEvent_Callback(KToolTipWidget_CloseEvent_Callback cb) { ktooltipwidget_closeevent_callback = cb; }
    inline void setKToolTipWidget_ContextMenuEvent_Callback(KToolTipWidget_ContextMenuEvent_Callback cb) { ktooltipwidget_contextmenuevent_callback = cb; }
    inline void setKToolTipWidget_TabletEvent_Callback(KToolTipWidget_TabletEvent_Callback cb) { ktooltipwidget_tabletevent_callback = cb; }
    inline void setKToolTipWidget_ActionEvent_Callback(KToolTipWidget_ActionEvent_Callback cb) { ktooltipwidget_actionevent_callback = cb; }
    inline void setKToolTipWidget_DragEnterEvent_Callback(KToolTipWidget_DragEnterEvent_Callback cb) { ktooltipwidget_dragenterevent_callback = cb; }
    inline void setKToolTipWidget_DragMoveEvent_Callback(KToolTipWidget_DragMoveEvent_Callback cb) { ktooltipwidget_dragmoveevent_callback = cb; }
    inline void setKToolTipWidget_DragLeaveEvent_Callback(KToolTipWidget_DragLeaveEvent_Callback cb) { ktooltipwidget_dragleaveevent_callback = cb; }
    inline void setKToolTipWidget_DropEvent_Callback(KToolTipWidget_DropEvent_Callback cb) { ktooltipwidget_dropevent_callback = cb; }
    inline void setKToolTipWidget_ShowEvent_Callback(KToolTipWidget_ShowEvent_Callback cb) { ktooltipwidget_showevent_callback = cb; }
    inline void setKToolTipWidget_NativeEvent_Callback(KToolTipWidget_NativeEvent_Callback cb) { ktooltipwidget_nativeevent_callback = cb; }
    inline void setKToolTipWidget_ChangeEvent_Callback(KToolTipWidget_ChangeEvent_Callback cb) { ktooltipwidget_changeevent_callback = cb; }
    inline void setKToolTipWidget_Metric_Callback(KToolTipWidget_Metric_Callback cb) { ktooltipwidget_metric_callback = cb; }
    inline void setKToolTipWidget_InitPainter_Callback(KToolTipWidget_InitPainter_Callback cb) { ktooltipwidget_initpainter_callback = cb; }
    inline void setKToolTipWidget_Redirected_Callback(KToolTipWidget_Redirected_Callback cb) { ktooltipwidget_redirected_callback = cb; }
    inline void setKToolTipWidget_SharedPainter_Callback(KToolTipWidget_SharedPainter_Callback cb) { ktooltipwidget_sharedpainter_callback = cb; }
    inline void setKToolTipWidget_InputMethodEvent_Callback(KToolTipWidget_InputMethodEvent_Callback cb) { ktooltipwidget_inputmethodevent_callback = cb; }
    inline void setKToolTipWidget_InputMethodQuery_Callback(KToolTipWidget_InputMethodQuery_Callback cb) { ktooltipwidget_inputmethodquery_callback = cb; }
    inline void setKToolTipWidget_FocusNextPrevChild_Callback(KToolTipWidget_FocusNextPrevChild_Callback cb) { ktooltipwidget_focusnextprevchild_callback = cb; }
    inline void setKToolTipWidget_EventFilter_Callback(KToolTipWidget_EventFilter_Callback cb) { ktooltipwidget_eventfilter_callback = cb; }
    inline void setKToolTipWidget_TimerEvent_Callback(KToolTipWidget_TimerEvent_Callback cb) { ktooltipwidget_timerevent_callback = cb; }
    inline void setKToolTipWidget_ChildEvent_Callback(KToolTipWidget_ChildEvent_Callback cb) { ktooltipwidget_childevent_callback = cb; }
    inline void setKToolTipWidget_CustomEvent_Callback(KToolTipWidget_CustomEvent_Callback cb) { ktooltipwidget_customevent_callback = cb; }
    inline void setKToolTipWidget_ConnectNotify_Callback(KToolTipWidget_ConnectNotify_Callback cb) { ktooltipwidget_connectnotify_callback = cb; }
    inline void setKToolTipWidget_DisconnectNotify_Callback(KToolTipWidget_DisconnectNotify_Callback cb) { ktooltipwidget_disconnectnotify_callback = cb; }
    inline void setKToolTipWidget_UpdateMicroFocus_Callback(KToolTipWidget_UpdateMicroFocus_Callback cb) { ktooltipwidget_updatemicrofocus_callback = cb; }
    inline void setKToolTipWidget_Create_Callback(KToolTipWidget_Create_Callback cb) { ktooltipwidget_create_callback = cb; }
    inline void setKToolTipWidget_Destroy_Callback(KToolTipWidget_Destroy_Callback cb) { ktooltipwidget_destroy_callback = cb; }
    inline void setKToolTipWidget_FocusNextChild_Callback(KToolTipWidget_FocusNextChild_Callback cb) { ktooltipwidget_focusnextchild_callback = cb; }
    inline void setKToolTipWidget_FocusPreviousChild_Callback(KToolTipWidget_FocusPreviousChild_Callback cb) { ktooltipwidget_focuspreviouschild_callback = cb; }
    inline void setKToolTipWidget_Sender_Callback(KToolTipWidget_Sender_Callback cb) { ktooltipwidget_sender_callback = cb; }
    inline void setKToolTipWidget_SenderSignalIndex_Callback(KToolTipWidget_SenderSignalIndex_Callback cb) { ktooltipwidget_sendersignalindex_callback = cb; }
    inline void setKToolTipWidget_Receivers_Callback(KToolTipWidget_Receivers_Callback cb) { ktooltipwidget_receivers_callback = cb; }
    inline void setKToolTipWidget_IsSignalConnected_Callback(KToolTipWidget_IsSignalConnected_Callback cb) { ktooltipwidget_issignalconnected_callback = cb; }
    inline void setKToolTipWidget_GetDecodedMetricF_Callback(KToolTipWidget_GetDecodedMetricF_Callback cb) { ktooltipwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKToolTipWidget_MetaObject_IsBase(bool value) const { ktooltipwidget_metaobject_isbase = value; }
    inline void setKToolTipWidget_Metacast_IsBase(bool value) const { ktooltipwidget_metacast_isbase = value; }
    inline void setKToolTipWidget_Metacall_IsBase(bool value) const { ktooltipwidget_metacall_isbase = value; }
    inline void setKToolTipWidget_EnterEvent_IsBase(bool value) const { ktooltipwidget_enterevent_isbase = value; }
    inline void setKToolTipWidget_HideEvent_IsBase(bool value) const { ktooltipwidget_hideevent_isbase = value; }
    inline void setKToolTipWidget_LeaveEvent_IsBase(bool value) const { ktooltipwidget_leaveevent_isbase = value; }
    inline void setKToolTipWidget_PaintEvent_IsBase(bool value) const { ktooltipwidget_paintevent_isbase = value; }
    inline void setKToolTipWidget_DevType_IsBase(bool value) const { ktooltipwidget_devtype_isbase = value; }
    inline void setKToolTipWidget_SetVisible_IsBase(bool value) const { ktooltipwidget_setvisible_isbase = value; }
    inline void setKToolTipWidget_SizeHint_IsBase(bool value) const { ktooltipwidget_sizehint_isbase = value; }
    inline void setKToolTipWidget_MinimumSizeHint_IsBase(bool value) const { ktooltipwidget_minimumsizehint_isbase = value; }
    inline void setKToolTipWidget_HeightForWidth_IsBase(bool value) const { ktooltipwidget_heightforwidth_isbase = value; }
    inline void setKToolTipWidget_HasHeightForWidth_IsBase(bool value) const { ktooltipwidget_hasheightforwidth_isbase = value; }
    inline void setKToolTipWidget_PaintEngine_IsBase(bool value) const { ktooltipwidget_paintengine_isbase = value; }
    inline void setKToolTipWidget_Event_IsBase(bool value) const { ktooltipwidget_event_isbase = value; }
    inline void setKToolTipWidget_MousePressEvent_IsBase(bool value) const { ktooltipwidget_mousepressevent_isbase = value; }
    inline void setKToolTipWidget_MouseReleaseEvent_IsBase(bool value) const { ktooltipwidget_mousereleaseevent_isbase = value; }
    inline void setKToolTipWidget_MouseDoubleClickEvent_IsBase(bool value) const { ktooltipwidget_mousedoubleclickevent_isbase = value; }
    inline void setKToolTipWidget_MouseMoveEvent_IsBase(bool value) const { ktooltipwidget_mousemoveevent_isbase = value; }
    inline void setKToolTipWidget_WheelEvent_IsBase(bool value) const { ktooltipwidget_wheelevent_isbase = value; }
    inline void setKToolTipWidget_KeyPressEvent_IsBase(bool value) const { ktooltipwidget_keypressevent_isbase = value; }
    inline void setKToolTipWidget_KeyReleaseEvent_IsBase(bool value) const { ktooltipwidget_keyreleaseevent_isbase = value; }
    inline void setKToolTipWidget_FocusInEvent_IsBase(bool value) const { ktooltipwidget_focusinevent_isbase = value; }
    inline void setKToolTipWidget_FocusOutEvent_IsBase(bool value) const { ktooltipwidget_focusoutevent_isbase = value; }
    inline void setKToolTipWidget_MoveEvent_IsBase(bool value) const { ktooltipwidget_moveevent_isbase = value; }
    inline void setKToolTipWidget_ResizeEvent_IsBase(bool value) const { ktooltipwidget_resizeevent_isbase = value; }
    inline void setKToolTipWidget_CloseEvent_IsBase(bool value) const { ktooltipwidget_closeevent_isbase = value; }
    inline void setKToolTipWidget_ContextMenuEvent_IsBase(bool value) const { ktooltipwidget_contextmenuevent_isbase = value; }
    inline void setKToolTipWidget_TabletEvent_IsBase(bool value) const { ktooltipwidget_tabletevent_isbase = value; }
    inline void setKToolTipWidget_ActionEvent_IsBase(bool value) const { ktooltipwidget_actionevent_isbase = value; }
    inline void setKToolTipWidget_DragEnterEvent_IsBase(bool value) const { ktooltipwidget_dragenterevent_isbase = value; }
    inline void setKToolTipWidget_DragMoveEvent_IsBase(bool value) const { ktooltipwidget_dragmoveevent_isbase = value; }
    inline void setKToolTipWidget_DragLeaveEvent_IsBase(bool value) const { ktooltipwidget_dragleaveevent_isbase = value; }
    inline void setKToolTipWidget_DropEvent_IsBase(bool value) const { ktooltipwidget_dropevent_isbase = value; }
    inline void setKToolTipWidget_ShowEvent_IsBase(bool value) const { ktooltipwidget_showevent_isbase = value; }
    inline void setKToolTipWidget_NativeEvent_IsBase(bool value) const { ktooltipwidget_nativeevent_isbase = value; }
    inline void setKToolTipWidget_ChangeEvent_IsBase(bool value) const { ktooltipwidget_changeevent_isbase = value; }
    inline void setKToolTipWidget_Metric_IsBase(bool value) const { ktooltipwidget_metric_isbase = value; }
    inline void setKToolTipWidget_InitPainter_IsBase(bool value) const { ktooltipwidget_initpainter_isbase = value; }
    inline void setKToolTipWidget_Redirected_IsBase(bool value) const { ktooltipwidget_redirected_isbase = value; }
    inline void setKToolTipWidget_SharedPainter_IsBase(bool value) const { ktooltipwidget_sharedpainter_isbase = value; }
    inline void setKToolTipWidget_InputMethodEvent_IsBase(bool value) const { ktooltipwidget_inputmethodevent_isbase = value; }
    inline void setKToolTipWidget_InputMethodQuery_IsBase(bool value) const { ktooltipwidget_inputmethodquery_isbase = value; }
    inline void setKToolTipWidget_FocusNextPrevChild_IsBase(bool value) const { ktooltipwidget_focusnextprevchild_isbase = value; }
    inline void setKToolTipWidget_EventFilter_IsBase(bool value) const { ktooltipwidget_eventfilter_isbase = value; }
    inline void setKToolTipWidget_TimerEvent_IsBase(bool value) const { ktooltipwidget_timerevent_isbase = value; }
    inline void setKToolTipWidget_ChildEvent_IsBase(bool value) const { ktooltipwidget_childevent_isbase = value; }
    inline void setKToolTipWidget_CustomEvent_IsBase(bool value) const { ktooltipwidget_customevent_isbase = value; }
    inline void setKToolTipWidget_ConnectNotify_IsBase(bool value) const { ktooltipwidget_connectnotify_isbase = value; }
    inline void setKToolTipWidget_DisconnectNotify_IsBase(bool value) const { ktooltipwidget_disconnectnotify_isbase = value; }
    inline void setKToolTipWidget_UpdateMicroFocus_IsBase(bool value) const { ktooltipwidget_updatemicrofocus_isbase = value; }
    inline void setKToolTipWidget_Create_IsBase(bool value) const { ktooltipwidget_create_isbase = value; }
    inline void setKToolTipWidget_Destroy_IsBase(bool value) const { ktooltipwidget_destroy_isbase = value; }
    inline void setKToolTipWidget_FocusNextChild_IsBase(bool value) const { ktooltipwidget_focusnextchild_isbase = value; }
    inline void setKToolTipWidget_FocusPreviousChild_IsBase(bool value) const { ktooltipwidget_focuspreviouschild_isbase = value; }
    inline void setKToolTipWidget_Sender_IsBase(bool value) const { ktooltipwidget_sender_isbase = value; }
    inline void setKToolTipWidget_SenderSignalIndex_IsBase(bool value) const { ktooltipwidget_sendersignalindex_isbase = value; }
    inline void setKToolTipWidget_Receivers_IsBase(bool value) const { ktooltipwidget_receivers_isbase = value; }
    inline void setKToolTipWidget_IsSignalConnected_IsBase(bool value) const { ktooltipwidget_issignalconnected_isbase = value; }
    inline void setKToolTipWidget_GetDecodedMetricF_IsBase(bool value) const { ktooltipwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktooltipwidget_metaobject_isbase) {
            ktooltipwidget_metaobject_isbase = false;
            return KToolTipWidget::metaObject();
        }
        auto metaobject_cb = ktooltipwidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KToolTipWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktooltipwidget_metacast_isbase) {
            ktooltipwidget_metacast_isbase = false;
            return KToolTipWidget::qt_metacast(param1);
        }
        auto metacast_cb = ktooltipwidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KToolTipWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktooltipwidget_metacall_isbase) {
            ktooltipwidget_metacall_isbase = false;
            return KToolTipWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = ktooltipwidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KToolTipWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ktooltipwidget_enterevent_isbase) {
            ktooltipwidget_enterevent_isbase = false;
            KToolTipWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = ktooltipwidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (ktooltipwidget_hideevent_isbase) {
            ktooltipwidget_hideevent_isbase = false;
            KToolTipWidget::hideEvent(param1);
            return;
        }
        auto hideevent_cb = ktooltipwidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = param1;

            hideevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (ktooltipwidget_leaveevent_isbase) {
            ktooltipwidget_leaveevent_isbase = false;
            KToolTipWidget::leaveEvent(param1);
            return;
        }
        auto leaveevent_cb = ktooltipwidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = param1;

            leaveevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::leaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (ktooltipwidget_paintevent_isbase) {
            ktooltipwidget_paintevent_isbase = false;
            KToolTipWidget::paintEvent(event);
            return;
        }
        auto paintevent_cb = ktooltipwidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ktooltipwidget_devtype_isbase) {
            ktooltipwidget_devtype_isbase = false;
            return KToolTipWidget::devType();
        }
        auto devtype_cb = ktooltipwidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KToolTipWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ktooltipwidget_setvisible_isbase) {
            ktooltipwidget_setvisible_isbase = false;
            KToolTipWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = ktooltipwidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KToolTipWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ktooltipwidget_sizehint_isbase) {
            ktooltipwidget_sizehint_isbase = false;
            return KToolTipWidget::sizeHint();
        }
        auto sizehint_cb = ktooltipwidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KToolTipWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ktooltipwidget_minimumsizehint_isbase) {
            ktooltipwidget_minimumsizehint_isbase = false;
            return KToolTipWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = ktooltipwidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KToolTipWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ktooltipwidget_heightforwidth_isbase) {
            ktooltipwidget_heightforwidth_isbase = false;
            return KToolTipWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = ktooltipwidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KToolTipWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ktooltipwidget_hasheightforwidth_isbase) {
            ktooltipwidget_hasheightforwidth_isbase = false;
            return KToolTipWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = ktooltipwidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KToolTipWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ktooltipwidget_paintengine_isbase) {
            ktooltipwidget_paintengine_isbase = false;
            return KToolTipWidget::paintEngine();
        }
        auto paintengine_cb = ktooltipwidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KToolTipWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktooltipwidget_event_isbase) {
            ktooltipwidget_event_isbase = false;
            return KToolTipWidget::event(event);
        }
        auto event_cb = ktooltipwidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KToolTipWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (ktooltipwidget_mousepressevent_isbase) {
            ktooltipwidget_mousepressevent_isbase = false;
            KToolTipWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = ktooltipwidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (ktooltipwidget_mousereleaseevent_isbase) {
            ktooltipwidget_mousereleaseevent_isbase = false;
            KToolTipWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = ktooltipwidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ktooltipwidget_mousedoubleclickevent_isbase) {
            ktooltipwidget_mousedoubleclickevent_isbase = false;
            KToolTipWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = ktooltipwidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (ktooltipwidget_mousemoveevent_isbase) {
            ktooltipwidget_mousemoveevent_isbase = false;
            KToolTipWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = ktooltipwidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ktooltipwidget_wheelevent_isbase) {
            ktooltipwidget_wheelevent_isbase = false;
            KToolTipWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = ktooltipwidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (ktooltipwidget_keypressevent_isbase) {
            ktooltipwidget_keypressevent_isbase = false;
            KToolTipWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = ktooltipwidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (ktooltipwidget_keyreleaseevent_isbase) {
            ktooltipwidget_keyreleaseevent_isbase = false;
            KToolTipWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = ktooltipwidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (ktooltipwidget_focusinevent_isbase) {
            ktooltipwidget_focusinevent_isbase = false;
            KToolTipWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = ktooltipwidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (ktooltipwidget_focusoutevent_isbase) {
            ktooltipwidget_focusoutevent_isbase = false;
            KToolTipWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = ktooltipwidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ktooltipwidget_moveevent_isbase) {
            ktooltipwidget_moveevent_isbase = false;
            KToolTipWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = ktooltipwidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ktooltipwidget_resizeevent_isbase) {
            ktooltipwidget_resizeevent_isbase = false;
            KToolTipWidget::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = ktooltipwidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ktooltipwidget_closeevent_isbase) {
            ktooltipwidget_closeevent_isbase = false;
            KToolTipWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = ktooltipwidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (ktooltipwidget_contextmenuevent_isbase) {
            ktooltipwidget_contextmenuevent_isbase = false;
            KToolTipWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = ktooltipwidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ktooltipwidget_tabletevent_isbase) {
            ktooltipwidget_tabletevent_isbase = false;
            KToolTipWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = ktooltipwidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ktooltipwidget_actionevent_isbase) {
            ktooltipwidget_actionevent_isbase = false;
            KToolTipWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = ktooltipwidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ktooltipwidget_dragenterevent_isbase) {
            ktooltipwidget_dragenterevent_isbase = false;
            KToolTipWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = ktooltipwidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ktooltipwidget_dragmoveevent_isbase) {
            ktooltipwidget_dragmoveevent_isbase = false;
            KToolTipWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = ktooltipwidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ktooltipwidget_dragleaveevent_isbase) {
            ktooltipwidget_dragleaveevent_isbase = false;
            KToolTipWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = ktooltipwidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ktooltipwidget_dropevent_isbase) {
            ktooltipwidget_dropevent_isbase = false;
            KToolTipWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = ktooltipwidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ktooltipwidget_showevent_isbase) {
            ktooltipwidget_showevent_isbase = false;
            KToolTipWidget::showEvent(event);
            return;
        }
        auto showevent_cb = ktooltipwidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ktooltipwidget_nativeevent_isbase) {
            ktooltipwidget_nativeevent_isbase = false;
            return KToolTipWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = ktooltipwidget_nativeevent_callback;
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
        return KToolTipWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (ktooltipwidget_changeevent_isbase) {
            ktooltipwidget_changeevent_isbase = false;
            KToolTipWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = ktooltipwidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ktooltipwidget_metric_isbase) {
            ktooltipwidget_metric_isbase = false;
            return KToolTipWidget::metric(param1);
        }
        auto metric_cb = ktooltipwidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KToolTipWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ktooltipwidget_initpainter_isbase) {
            ktooltipwidget_initpainter_isbase = false;
            KToolTipWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = ktooltipwidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KToolTipWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ktooltipwidget_redirected_isbase) {
            ktooltipwidget_redirected_isbase = false;
            return KToolTipWidget::redirected(offset);
        }
        auto redirected_cb = ktooltipwidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KToolTipWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ktooltipwidget_sharedpainter_isbase) {
            ktooltipwidget_sharedpainter_isbase = false;
            return KToolTipWidget::sharedPainter();
        }
        auto sharedpainter_cb = ktooltipwidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KToolTipWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ktooltipwidget_inputmethodevent_isbase) {
            ktooltipwidget_inputmethodevent_isbase = false;
            KToolTipWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = ktooltipwidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ktooltipwidget_inputmethodquery_isbase) {
            ktooltipwidget_inputmethodquery_isbase = false;
            return KToolTipWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = ktooltipwidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KToolTipWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ktooltipwidget_focusnextprevchild_isbase) {
            ktooltipwidget_focusnextprevchild_isbase = false;
            return KToolTipWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = ktooltipwidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KToolTipWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktooltipwidget_eventfilter_isbase) {
            ktooltipwidget_eventfilter_isbase = false;
            return KToolTipWidget::eventFilter(watched, event);
        }
        auto eventfilter_cb = ktooltipwidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KToolTipWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktooltipwidget_timerevent_isbase) {
            ktooltipwidget_timerevent_isbase = false;
            KToolTipWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = ktooltipwidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktooltipwidget_childevent_isbase) {
            ktooltipwidget_childevent_isbase = false;
            KToolTipWidget::childEvent(event);
            return;
        }
        auto childevent_cb = ktooltipwidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktooltipwidget_customevent_isbase) {
            ktooltipwidget_customevent_isbase = false;
            KToolTipWidget::customEvent(event);
            return;
        }
        auto customevent_cb = ktooltipwidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KToolTipWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktooltipwidget_connectnotify_isbase) {
            ktooltipwidget_connectnotify_isbase = false;
            KToolTipWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = ktooltipwidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KToolTipWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktooltipwidget_disconnectnotify_isbase) {
            ktooltipwidget_disconnectnotify_isbase = false;
            KToolTipWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = ktooltipwidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KToolTipWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (ktooltipwidget_updatemicrofocus_isbase) {
            ktooltipwidget_updatemicrofocus_isbase = false;
            KToolTipWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = ktooltipwidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KToolTipWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (ktooltipwidget_create_isbase) {
            ktooltipwidget_create_isbase = false;
            KToolTipWidget::create();
            return;
        }
        auto create_cb = ktooltipwidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KToolTipWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (ktooltipwidget_destroy_isbase) {
            ktooltipwidget_destroy_isbase = false;
            KToolTipWidget::destroy();
            return;
        }
        auto destroy_cb = ktooltipwidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KToolTipWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (ktooltipwidget_focusnextchild_isbase) {
            ktooltipwidget_focusnextchild_isbase = false;
            return KToolTipWidget::focusNextChild();
        }
        auto focusnextchild_cb = ktooltipwidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KToolTipWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (ktooltipwidget_focuspreviouschild_isbase) {
            ktooltipwidget_focuspreviouschild_isbase = false;
            return KToolTipWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = ktooltipwidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KToolTipWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktooltipwidget_sender_isbase) {
            ktooltipwidget_sender_isbase = false;
            return KToolTipWidget::sender();
        }
        auto sender_cb = ktooltipwidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KToolTipWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktooltipwidget_sendersignalindex_isbase) {
            ktooltipwidget_sendersignalindex_isbase = false;
            return KToolTipWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = ktooltipwidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KToolTipWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktooltipwidget_receivers_isbase) {
            ktooltipwidget_receivers_isbase = false;
            return KToolTipWidget::receivers(signal);
        }
        auto receivers_cb = ktooltipwidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KToolTipWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktooltipwidget_issignalconnected_isbase) {
            ktooltipwidget_issignalconnected_isbase = false;
            return KToolTipWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = ktooltipwidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KToolTipWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (ktooltipwidget_getdecodedmetricf_isbase) {
            ktooltipwidget_getdecodedmetricf_isbase = false;
            return KToolTipWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = ktooltipwidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KToolTipWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KToolTipWidget_EnterEvent(KToolTipWidget* self, QEnterEvent* event);
    friend void KToolTipWidget_SuperEnterEvent(KToolTipWidget* self, QEnterEvent* event);
    friend void KToolTipWidget_HideEvent(KToolTipWidget* self, QHideEvent* param1);
    friend void KToolTipWidget_SuperHideEvent(KToolTipWidget* self, QHideEvent* param1);
    friend void KToolTipWidget_LeaveEvent(KToolTipWidget* self, QEvent* param1);
    friend void KToolTipWidget_SuperLeaveEvent(KToolTipWidget* self, QEvent* param1);
    friend void KToolTipWidget_PaintEvent(KToolTipWidget* self, QPaintEvent* event);
    friend void KToolTipWidget_SuperPaintEvent(KToolTipWidget* self, QPaintEvent* event);
    friend bool KToolTipWidget_Event(KToolTipWidget* self, QEvent* event);
    friend bool KToolTipWidget_SuperEvent(KToolTipWidget* self, QEvent* event);
    friend void KToolTipWidget_MousePressEvent(KToolTipWidget* self, QMouseEvent* event);
    friend void KToolTipWidget_SuperMousePressEvent(KToolTipWidget* self, QMouseEvent* event);
    friend void KToolTipWidget_MouseReleaseEvent(KToolTipWidget* self, QMouseEvent* event);
    friend void KToolTipWidget_SuperMouseReleaseEvent(KToolTipWidget* self, QMouseEvent* event);
    friend void KToolTipWidget_MouseDoubleClickEvent(KToolTipWidget* self, QMouseEvent* event);
    friend void KToolTipWidget_SuperMouseDoubleClickEvent(KToolTipWidget* self, QMouseEvent* event);
    friend void KToolTipWidget_MouseMoveEvent(KToolTipWidget* self, QMouseEvent* event);
    friend void KToolTipWidget_SuperMouseMoveEvent(KToolTipWidget* self, QMouseEvent* event);
    friend void KToolTipWidget_WheelEvent(KToolTipWidget* self, QWheelEvent* event);
    friend void KToolTipWidget_SuperWheelEvent(KToolTipWidget* self, QWheelEvent* event);
    friend void KToolTipWidget_KeyPressEvent(KToolTipWidget* self, QKeyEvent* event);
    friend void KToolTipWidget_SuperKeyPressEvent(KToolTipWidget* self, QKeyEvent* event);
    friend void KToolTipWidget_KeyReleaseEvent(KToolTipWidget* self, QKeyEvent* event);
    friend void KToolTipWidget_SuperKeyReleaseEvent(KToolTipWidget* self, QKeyEvent* event);
    friend void KToolTipWidget_FocusInEvent(KToolTipWidget* self, QFocusEvent* event);
    friend void KToolTipWidget_SuperFocusInEvent(KToolTipWidget* self, QFocusEvent* event);
    friend void KToolTipWidget_FocusOutEvent(KToolTipWidget* self, QFocusEvent* event);
    friend void KToolTipWidget_SuperFocusOutEvent(KToolTipWidget* self, QFocusEvent* event);
    friend void KToolTipWidget_MoveEvent(KToolTipWidget* self, QMoveEvent* event);
    friend void KToolTipWidget_SuperMoveEvent(KToolTipWidget* self, QMoveEvent* event);
    friend void KToolTipWidget_ResizeEvent(KToolTipWidget* self, QResizeEvent* event);
    friend void KToolTipWidget_SuperResizeEvent(KToolTipWidget* self, QResizeEvent* event);
    friend void KToolTipWidget_CloseEvent(KToolTipWidget* self, QCloseEvent* event);
    friend void KToolTipWidget_SuperCloseEvent(KToolTipWidget* self, QCloseEvent* event);
    friend void KToolTipWidget_ContextMenuEvent(KToolTipWidget* self, QContextMenuEvent* event);
    friend void KToolTipWidget_SuperContextMenuEvent(KToolTipWidget* self, QContextMenuEvent* event);
    friend void KToolTipWidget_TabletEvent(KToolTipWidget* self, QTabletEvent* event);
    friend void KToolTipWidget_SuperTabletEvent(KToolTipWidget* self, QTabletEvent* event);
    friend void KToolTipWidget_ActionEvent(KToolTipWidget* self, QActionEvent* event);
    friend void KToolTipWidget_SuperActionEvent(KToolTipWidget* self, QActionEvent* event);
    friend void KToolTipWidget_DragEnterEvent(KToolTipWidget* self, QDragEnterEvent* event);
    friend void KToolTipWidget_SuperDragEnterEvent(KToolTipWidget* self, QDragEnterEvent* event);
    friend void KToolTipWidget_DragMoveEvent(KToolTipWidget* self, QDragMoveEvent* event);
    friend void KToolTipWidget_SuperDragMoveEvent(KToolTipWidget* self, QDragMoveEvent* event);
    friend void KToolTipWidget_DragLeaveEvent(KToolTipWidget* self, QDragLeaveEvent* event);
    friend void KToolTipWidget_SuperDragLeaveEvent(KToolTipWidget* self, QDragLeaveEvent* event);
    friend void KToolTipWidget_DropEvent(KToolTipWidget* self, QDropEvent* event);
    friend void KToolTipWidget_SuperDropEvent(KToolTipWidget* self, QDropEvent* event);
    friend void KToolTipWidget_ShowEvent(KToolTipWidget* self, QShowEvent* event);
    friend void KToolTipWidget_SuperShowEvent(KToolTipWidget* self, QShowEvent* event);
    friend bool KToolTipWidget_NativeEvent(KToolTipWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KToolTipWidget_SuperNativeEvent(KToolTipWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KToolTipWidget_ChangeEvent(KToolTipWidget* self, QEvent* param1);
    friend void KToolTipWidget_SuperChangeEvent(KToolTipWidget* self, QEvent* param1);
    friend int KToolTipWidget_Metric(const KToolTipWidget* self, int param1);
    friend int KToolTipWidget_SuperMetric(const KToolTipWidget* self, int param1);
    friend void KToolTipWidget_InitPainter(const KToolTipWidget* self, QPainter* painter);
    friend void KToolTipWidget_SuperInitPainter(const KToolTipWidget* self, QPainter* painter);
    friend QPaintDevice* KToolTipWidget_Redirected(const KToolTipWidget* self, QPoint* offset);
    friend QPaintDevice* KToolTipWidget_SuperRedirected(const KToolTipWidget* self, QPoint* offset);
    friend QPainter* KToolTipWidget_SharedPainter(const KToolTipWidget* self);
    friend QPainter* KToolTipWidget_SuperSharedPainter(const KToolTipWidget* self);
    friend void KToolTipWidget_InputMethodEvent(KToolTipWidget* self, QInputMethodEvent* param1);
    friend void KToolTipWidget_SuperInputMethodEvent(KToolTipWidget* self, QInputMethodEvent* param1);
    friend bool KToolTipWidget_FocusNextPrevChild(KToolTipWidget* self, bool next);
    friend bool KToolTipWidget_SuperFocusNextPrevChild(KToolTipWidget* self, bool next);
    friend void KToolTipWidget_TimerEvent(KToolTipWidget* self, QTimerEvent* event);
    friend void KToolTipWidget_SuperTimerEvent(KToolTipWidget* self, QTimerEvent* event);
    friend void KToolTipWidget_ChildEvent(KToolTipWidget* self, QChildEvent* event);
    friend void KToolTipWidget_SuperChildEvent(KToolTipWidget* self, QChildEvent* event);
    friend void KToolTipWidget_CustomEvent(KToolTipWidget* self, QEvent* event);
    friend void KToolTipWidget_SuperCustomEvent(KToolTipWidget* self, QEvent* event);
    friend void KToolTipWidget_ConnectNotify(KToolTipWidget* self, const QMetaMethod* signal);
    friend void KToolTipWidget_SuperConnectNotify(KToolTipWidget* self, const QMetaMethod* signal);
    friend void KToolTipWidget_DisconnectNotify(KToolTipWidget* self, const QMetaMethod* signal);
    friend void KToolTipWidget_SuperDisconnectNotify(KToolTipWidget* self, const QMetaMethod* signal);
    friend void KToolTipWidget_UpdateMicroFocus(KToolTipWidget* self);
    friend void KToolTipWidget_SuperUpdateMicroFocus(KToolTipWidget* self);
    friend void KToolTipWidget_Create(KToolTipWidget* self);
    friend void KToolTipWidget_SuperCreate(KToolTipWidget* self);
    friend void KToolTipWidget_Destroy(KToolTipWidget* self);
    friend void KToolTipWidget_SuperDestroy(KToolTipWidget* self);
    friend bool KToolTipWidget_FocusNextChild(KToolTipWidget* self);
    friend bool KToolTipWidget_SuperFocusNextChild(KToolTipWidget* self);
    friend bool KToolTipWidget_FocusPreviousChild(KToolTipWidget* self);
    friend bool KToolTipWidget_SuperFocusPreviousChild(KToolTipWidget* self);
    friend QObject* KToolTipWidget_Sender(const KToolTipWidget* self);
    friend QObject* KToolTipWidget_SuperSender(const KToolTipWidget* self);
    friend int KToolTipWidget_SenderSignalIndex(const KToolTipWidget* self);
    friend int KToolTipWidget_SuperSenderSignalIndex(const KToolTipWidget* self);
    friend int KToolTipWidget_Receivers(const KToolTipWidget* self, const char* signal);
    friend int KToolTipWidget_SuperReceivers(const KToolTipWidget* self, const char* signal);
    friend bool KToolTipWidget_IsSignalConnected(const KToolTipWidget* self, const QMetaMethod* signal);
    friend bool KToolTipWidget_SuperIsSignalConnected(const KToolTipWidget* self, const QMetaMethod* signal);
    friend double KToolTipWidget_GetDecodedMetricF(const KToolTipWidget* self, int metricA, int metricB);
    friend double KToolTipWidget_SuperGetDecodedMetricF(const KToolTipWidget* self, int metricA, int metricB);
};

#endif
