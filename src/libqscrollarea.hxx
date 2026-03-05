#pragma once
#ifndef SRCC_LIBVIRTUALQSCROLLAREA_H
#define SRCC_LIBVIRTUALQSCROLLAREA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QScrollArea so that we can call protected methods
class VirtualQScrollArea final : public QScrollArea {

  public:
    // Virtual class boolean flag
    bool isVirtualQScrollArea = true;

    // Virtual class public types (including callbacks)
    using QScrollArea_MetaObject_Callback = QMetaObject* (*)();
    using QScrollArea_Metacast_Callback = void* (*)(QScrollArea*, const char*);
    using QScrollArea_Metacall_Callback = int (*)(QScrollArea*, int, int, void**);
    using QScrollArea_SizeHint_Callback = QSize* (*)();
    using QScrollArea_FocusNextPrevChild_Callback = bool (*)(QScrollArea*, bool);
    using QScrollArea_Event_Callback = bool (*)(QScrollArea*, QEvent*);
    using QScrollArea_EventFilter_Callback = bool (*)(QScrollArea*, QObject*, QEvent*);
    using QScrollArea_ResizeEvent_Callback = void (*)(QScrollArea*, QResizeEvent*);
    using QScrollArea_ScrollContentsBy_Callback = void (*)(QScrollArea*, int, int);
    using QScrollArea_ViewportSizeHint_Callback = QSize* (*)();
    using QScrollArea_MinimumSizeHint_Callback = QSize* (*)();
    using QScrollArea_SetupViewport_Callback = void (*)(QScrollArea*, QWidget*);
    using QScrollArea_ViewportEvent_Callback = bool (*)(QScrollArea*, QEvent*);
    using QScrollArea_PaintEvent_Callback = void (*)(QScrollArea*, QPaintEvent*);
    using QScrollArea_MousePressEvent_Callback = void (*)(QScrollArea*, QMouseEvent*);
    using QScrollArea_MouseReleaseEvent_Callback = void (*)(QScrollArea*, QMouseEvent*);
    using QScrollArea_MouseDoubleClickEvent_Callback = void (*)(QScrollArea*, QMouseEvent*);
    using QScrollArea_MouseMoveEvent_Callback = void (*)(QScrollArea*, QMouseEvent*);
    using QScrollArea_WheelEvent_Callback = void (*)(QScrollArea*, QWheelEvent*);
    using QScrollArea_ContextMenuEvent_Callback = void (*)(QScrollArea*, QContextMenuEvent*);
    using QScrollArea_DragEnterEvent_Callback = void (*)(QScrollArea*, QDragEnterEvent*);
    using QScrollArea_DragMoveEvent_Callback = void (*)(QScrollArea*, QDragMoveEvent*);
    using QScrollArea_DragLeaveEvent_Callback = void (*)(QScrollArea*, QDragLeaveEvent*);
    using QScrollArea_DropEvent_Callback = void (*)(QScrollArea*, QDropEvent*);
    using QScrollArea_KeyPressEvent_Callback = void (*)(QScrollArea*, QKeyEvent*);
    using QScrollArea_ChangeEvent_Callback = void (*)(QScrollArea*, QEvent*);
    using QScrollArea_InitStyleOption_Callback = void (*)(const QScrollArea*, QStyleOptionFrame*);
    using QScrollArea_DevType_Callback = int (*)();
    using QScrollArea_SetVisible_Callback = void (*)(QScrollArea*, bool);
    using QScrollArea_HeightForWidth_Callback = int (*)(const QScrollArea*, int);
    using QScrollArea_HasHeightForWidth_Callback = bool (*)();
    using QScrollArea_PaintEngine_Callback = QPaintEngine* (*)();
    using QScrollArea_KeyReleaseEvent_Callback = void (*)(QScrollArea*, QKeyEvent*);
    using QScrollArea_FocusInEvent_Callback = void (*)(QScrollArea*, QFocusEvent*);
    using QScrollArea_FocusOutEvent_Callback = void (*)(QScrollArea*, QFocusEvent*);
    using QScrollArea_EnterEvent_Callback = void (*)(QScrollArea*, QEnterEvent*);
    using QScrollArea_LeaveEvent_Callback = void (*)(QScrollArea*, QEvent*);
    using QScrollArea_MoveEvent_Callback = void (*)(QScrollArea*, QMoveEvent*);
    using QScrollArea_CloseEvent_Callback = void (*)(QScrollArea*, QCloseEvent*);
    using QScrollArea_TabletEvent_Callback = void (*)(QScrollArea*, QTabletEvent*);
    using QScrollArea_ActionEvent_Callback = void (*)(QScrollArea*, QActionEvent*);
    using QScrollArea_ShowEvent_Callback = void (*)(QScrollArea*, QShowEvent*);
    using QScrollArea_HideEvent_Callback = void (*)(QScrollArea*, QHideEvent*);
    using QScrollArea_NativeEvent_Callback = bool (*)(QScrollArea*, libqt_string, void*, intptr_t*);
    using QScrollArea_Metric_Callback = int (*)(const QScrollArea*, int);
    using QScrollArea_InitPainter_Callback = void (*)(const QScrollArea*, QPainter*);
    using QScrollArea_Redirected_Callback = QPaintDevice* (*)(const QScrollArea*, QPoint*);
    using QScrollArea_SharedPainter_Callback = QPainter* (*)();
    using QScrollArea_InputMethodEvent_Callback = void (*)(QScrollArea*, QInputMethodEvent*);
    using QScrollArea_InputMethodQuery_Callback = QVariant* (*)(const QScrollArea*, int);
    using QScrollArea_TimerEvent_Callback = void (*)(QScrollArea*, QTimerEvent*);
    using QScrollArea_ChildEvent_Callback = void (*)(QScrollArea*, QChildEvent*);
    using QScrollArea_CustomEvent_Callback = void (*)(QScrollArea*, QEvent*);
    using QScrollArea_ConnectNotify_Callback = void (*)(QScrollArea*, QMetaMethod*);
    using QScrollArea_DisconnectNotify_Callback = void (*)(QScrollArea*, QMetaMethod*);
    using QScrollArea_SetViewportMargins_Callback = void (*)(QScrollArea*, int, int, int, int);
    using QScrollArea_ViewportMargins_Callback = QMargins* (*)();
    using QScrollArea_DrawFrame_Callback = void (*)(QScrollArea*, QPainter*);
    using QScrollArea_UpdateMicroFocus_Callback = void (*)();
    using QScrollArea_Create_Callback = void (*)();
    using QScrollArea_Destroy_Callback = void (*)();
    using QScrollArea_FocusNextChild_Callback = bool (*)();
    using QScrollArea_FocusPreviousChild_Callback = bool (*)();
    using QScrollArea_Sender_Callback = QObject* (*)();
    using QScrollArea_SenderSignalIndex_Callback = int (*)();
    using QScrollArea_Receivers_Callback = int (*)(const QScrollArea*, const char*);
    using QScrollArea_IsSignalConnected_Callback = bool (*)(const QScrollArea*, QMetaMethod*);
    using QScrollArea_GetDecodedMetricF_Callback = double (*)(const QScrollArea*, int, int);

  protected:
    // Instance callback storage
    QScrollArea_MetaObject_Callback qscrollarea_metaobject_callback = nullptr;
    QScrollArea_Metacast_Callback qscrollarea_metacast_callback = nullptr;
    QScrollArea_Metacall_Callback qscrollarea_metacall_callback = nullptr;
    QScrollArea_SizeHint_Callback qscrollarea_sizehint_callback = nullptr;
    QScrollArea_FocusNextPrevChild_Callback qscrollarea_focusnextprevchild_callback = nullptr;
    QScrollArea_Event_Callback qscrollarea_event_callback = nullptr;
    QScrollArea_EventFilter_Callback qscrollarea_eventfilter_callback = nullptr;
    QScrollArea_ResizeEvent_Callback qscrollarea_resizeevent_callback = nullptr;
    QScrollArea_ScrollContentsBy_Callback qscrollarea_scrollcontentsby_callback = nullptr;
    QScrollArea_ViewportSizeHint_Callback qscrollarea_viewportsizehint_callback = nullptr;
    QScrollArea_MinimumSizeHint_Callback qscrollarea_minimumsizehint_callback = nullptr;
    QScrollArea_SetupViewport_Callback qscrollarea_setupviewport_callback = nullptr;
    QScrollArea_ViewportEvent_Callback qscrollarea_viewportevent_callback = nullptr;
    QScrollArea_PaintEvent_Callback qscrollarea_paintevent_callback = nullptr;
    QScrollArea_MousePressEvent_Callback qscrollarea_mousepressevent_callback = nullptr;
    QScrollArea_MouseReleaseEvent_Callback qscrollarea_mousereleaseevent_callback = nullptr;
    QScrollArea_MouseDoubleClickEvent_Callback qscrollarea_mousedoubleclickevent_callback = nullptr;
    QScrollArea_MouseMoveEvent_Callback qscrollarea_mousemoveevent_callback = nullptr;
    QScrollArea_WheelEvent_Callback qscrollarea_wheelevent_callback = nullptr;
    QScrollArea_ContextMenuEvent_Callback qscrollarea_contextmenuevent_callback = nullptr;
    QScrollArea_DragEnterEvent_Callback qscrollarea_dragenterevent_callback = nullptr;
    QScrollArea_DragMoveEvent_Callback qscrollarea_dragmoveevent_callback = nullptr;
    QScrollArea_DragLeaveEvent_Callback qscrollarea_dragleaveevent_callback = nullptr;
    QScrollArea_DropEvent_Callback qscrollarea_dropevent_callback = nullptr;
    QScrollArea_KeyPressEvent_Callback qscrollarea_keypressevent_callback = nullptr;
    QScrollArea_ChangeEvent_Callback qscrollarea_changeevent_callback = nullptr;
    QScrollArea_InitStyleOption_Callback qscrollarea_initstyleoption_callback = nullptr;
    QScrollArea_DevType_Callback qscrollarea_devtype_callback = nullptr;
    QScrollArea_SetVisible_Callback qscrollarea_setvisible_callback = nullptr;
    QScrollArea_HeightForWidth_Callback qscrollarea_heightforwidth_callback = nullptr;
    QScrollArea_HasHeightForWidth_Callback qscrollarea_hasheightforwidth_callback = nullptr;
    QScrollArea_PaintEngine_Callback qscrollarea_paintengine_callback = nullptr;
    QScrollArea_KeyReleaseEvent_Callback qscrollarea_keyreleaseevent_callback = nullptr;
    QScrollArea_FocusInEvent_Callback qscrollarea_focusinevent_callback = nullptr;
    QScrollArea_FocusOutEvent_Callback qscrollarea_focusoutevent_callback = nullptr;
    QScrollArea_EnterEvent_Callback qscrollarea_enterevent_callback = nullptr;
    QScrollArea_LeaveEvent_Callback qscrollarea_leaveevent_callback = nullptr;
    QScrollArea_MoveEvent_Callback qscrollarea_moveevent_callback = nullptr;
    QScrollArea_CloseEvent_Callback qscrollarea_closeevent_callback = nullptr;
    QScrollArea_TabletEvent_Callback qscrollarea_tabletevent_callback = nullptr;
    QScrollArea_ActionEvent_Callback qscrollarea_actionevent_callback = nullptr;
    QScrollArea_ShowEvent_Callback qscrollarea_showevent_callback = nullptr;
    QScrollArea_HideEvent_Callback qscrollarea_hideevent_callback = nullptr;
    QScrollArea_NativeEvent_Callback qscrollarea_nativeevent_callback = nullptr;
    QScrollArea_Metric_Callback qscrollarea_metric_callback = nullptr;
    QScrollArea_InitPainter_Callback qscrollarea_initpainter_callback = nullptr;
    QScrollArea_Redirected_Callback qscrollarea_redirected_callback = nullptr;
    QScrollArea_SharedPainter_Callback qscrollarea_sharedpainter_callback = nullptr;
    QScrollArea_InputMethodEvent_Callback qscrollarea_inputmethodevent_callback = nullptr;
    QScrollArea_InputMethodQuery_Callback qscrollarea_inputmethodquery_callback = nullptr;
    QScrollArea_TimerEvent_Callback qscrollarea_timerevent_callback = nullptr;
    QScrollArea_ChildEvent_Callback qscrollarea_childevent_callback = nullptr;
    QScrollArea_CustomEvent_Callback qscrollarea_customevent_callback = nullptr;
    QScrollArea_ConnectNotify_Callback qscrollarea_connectnotify_callback = nullptr;
    QScrollArea_DisconnectNotify_Callback qscrollarea_disconnectnotify_callback = nullptr;
    QScrollArea_SetViewportMargins_Callback qscrollarea_setviewportmargins_callback = nullptr;
    QScrollArea_ViewportMargins_Callback qscrollarea_viewportmargins_callback = nullptr;
    QScrollArea_DrawFrame_Callback qscrollarea_drawframe_callback = nullptr;
    QScrollArea_UpdateMicroFocus_Callback qscrollarea_updatemicrofocus_callback = nullptr;
    QScrollArea_Create_Callback qscrollarea_create_callback = nullptr;
    QScrollArea_Destroy_Callback qscrollarea_destroy_callback = nullptr;
    QScrollArea_FocusNextChild_Callback qscrollarea_focusnextchild_callback = nullptr;
    QScrollArea_FocusPreviousChild_Callback qscrollarea_focuspreviouschild_callback = nullptr;
    QScrollArea_Sender_Callback qscrollarea_sender_callback = nullptr;
    QScrollArea_SenderSignalIndex_Callback qscrollarea_sendersignalindex_callback = nullptr;
    QScrollArea_Receivers_Callback qscrollarea_receivers_callback = nullptr;
    QScrollArea_IsSignalConnected_Callback qscrollarea_issignalconnected_callback = nullptr;
    QScrollArea_GetDecodedMetricF_Callback qscrollarea_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qscrollarea_metaobject_isbase = false;
    mutable bool qscrollarea_metacast_isbase = false;
    mutable bool qscrollarea_metacall_isbase = false;
    mutable bool qscrollarea_sizehint_isbase = false;
    mutable bool qscrollarea_focusnextprevchild_isbase = false;
    mutable bool qscrollarea_event_isbase = false;
    mutable bool qscrollarea_eventfilter_isbase = false;
    mutable bool qscrollarea_resizeevent_isbase = false;
    mutable bool qscrollarea_scrollcontentsby_isbase = false;
    mutable bool qscrollarea_viewportsizehint_isbase = false;
    mutable bool qscrollarea_minimumsizehint_isbase = false;
    mutable bool qscrollarea_setupviewport_isbase = false;
    mutable bool qscrollarea_viewportevent_isbase = false;
    mutable bool qscrollarea_paintevent_isbase = false;
    mutable bool qscrollarea_mousepressevent_isbase = false;
    mutable bool qscrollarea_mousereleaseevent_isbase = false;
    mutable bool qscrollarea_mousedoubleclickevent_isbase = false;
    mutable bool qscrollarea_mousemoveevent_isbase = false;
    mutable bool qscrollarea_wheelevent_isbase = false;
    mutable bool qscrollarea_contextmenuevent_isbase = false;
    mutable bool qscrollarea_dragenterevent_isbase = false;
    mutable bool qscrollarea_dragmoveevent_isbase = false;
    mutable bool qscrollarea_dragleaveevent_isbase = false;
    mutable bool qscrollarea_dropevent_isbase = false;
    mutable bool qscrollarea_keypressevent_isbase = false;
    mutable bool qscrollarea_changeevent_isbase = false;
    mutable bool qscrollarea_initstyleoption_isbase = false;
    mutable bool qscrollarea_devtype_isbase = false;
    mutable bool qscrollarea_setvisible_isbase = false;
    mutable bool qscrollarea_heightforwidth_isbase = false;
    mutable bool qscrollarea_hasheightforwidth_isbase = false;
    mutable bool qscrollarea_paintengine_isbase = false;
    mutable bool qscrollarea_keyreleaseevent_isbase = false;
    mutable bool qscrollarea_focusinevent_isbase = false;
    mutable bool qscrollarea_focusoutevent_isbase = false;
    mutable bool qscrollarea_enterevent_isbase = false;
    mutable bool qscrollarea_leaveevent_isbase = false;
    mutable bool qscrollarea_moveevent_isbase = false;
    mutable bool qscrollarea_closeevent_isbase = false;
    mutable bool qscrollarea_tabletevent_isbase = false;
    mutable bool qscrollarea_actionevent_isbase = false;
    mutable bool qscrollarea_showevent_isbase = false;
    mutable bool qscrollarea_hideevent_isbase = false;
    mutable bool qscrollarea_nativeevent_isbase = false;
    mutable bool qscrollarea_metric_isbase = false;
    mutable bool qscrollarea_initpainter_isbase = false;
    mutable bool qscrollarea_redirected_isbase = false;
    mutable bool qscrollarea_sharedpainter_isbase = false;
    mutable bool qscrollarea_inputmethodevent_isbase = false;
    mutable bool qscrollarea_inputmethodquery_isbase = false;
    mutable bool qscrollarea_timerevent_isbase = false;
    mutable bool qscrollarea_childevent_isbase = false;
    mutable bool qscrollarea_customevent_isbase = false;
    mutable bool qscrollarea_connectnotify_isbase = false;
    mutable bool qscrollarea_disconnectnotify_isbase = false;
    mutable bool qscrollarea_setviewportmargins_isbase = false;
    mutable bool qscrollarea_viewportmargins_isbase = false;
    mutable bool qscrollarea_drawframe_isbase = false;
    mutable bool qscrollarea_updatemicrofocus_isbase = false;
    mutable bool qscrollarea_create_isbase = false;
    mutable bool qscrollarea_destroy_isbase = false;
    mutable bool qscrollarea_focusnextchild_isbase = false;
    mutable bool qscrollarea_focuspreviouschild_isbase = false;
    mutable bool qscrollarea_sender_isbase = false;
    mutable bool qscrollarea_sendersignalindex_isbase = false;
    mutable bool qscrollarea_receivers_isbase = false;
    mutable bool qscrollarea_issignalconnected_isbase = false;
    mutable bool qscrollarea_getdecodedmetricf_isbase = false;

  public:
    VirtualQScrollArea(QWidget* parent) : QScrollArea(parent) {};
    VirtualQScrollArea() : QScrollArea() {};

    // Callback setters
    inline void setQScrollArea_MetaObject_Callback(QScrollArea_MetaObject_Callback cb) { qscrollarea_metaobject_callback = cb; }
    inline void setQScrollArea_Metacast_Callback(QScrollArea_Metacast_Callback cb) { qscrollarea_metacast_callback = cb; }
    inline void setQScrollArea_Metacall_Callback(QScrollArea_Metacall_Callback cb) { qscrollarea_metacall_callback = cb; }
    inline void setQScrollArea_SizeHint_Callback(QScrollArea_SizeHint_Callback cb) { qscrollarea_sizehint_callback = cb; }
    inline void setQScrollArea_FocusNextPrevChild_Callback(QScrollArea_FocusNextPrevChild_Callback cb) { qscrollarea_focusnextprevchild_callback = cb; }
    inline void setQScrollArea_Event_Callback(QScrollArea_Event_Callback cb) { qscrollarea_event_callback = cb; }
    inline void setQScrollArea_EventFilter_Callback(QScrollArea_EventFilter_Callback cb) { qscrollarea_eventfilter_callback = cb; }
    inline void setQScrollArea_ResizeEvent_Callback(QScrollArea_ResizeEvent_Callback cb) { qscrollarea_resizeevent_callback = cb; }
    inline void setQScrollArea_ScrollContentsBy_Callback(QScrollArea_ScrollContentsBy_Callback cb) { qscrollarea_scrollcontentsby_callback = cb; }
    inline void setQScrollArea_ViewportSizeHint_Callback(QScrollArea_ViewportSizeHint_Callback cb) { qscrollarea_viewportsizehint_callback = cb; }
    inline void setQScrollArea_MinimumSizeHint_Callback(QScrollArea_MinimumSizeHint_Callback cb) { qscrollarea_minimumsizehint_callback = cb; }
    inline void setQScrollArea_SetupViewport_Callback(QScrollArea_SetupViewport_Callback cb) { qscrollarea_setupviewport_callback = cb; }
    inline void setQScrollArea_ViewportEvent_Callback(QScrollArea_ViewportEvent_Callback cb) { qscrollarea_viewportevent_callback = cb; }
    inline void setQScrollArea_PaintEvent_Callback(QScrollArea_PaintEvent_Callback cb) { qscrollarea_paintevent_callback = cb; }
    inline void setQScrollArea_MousePressEvent_Callback(QScrollArea_MousePressEvent_Callback cb) { qscrollarea_mousepressevent_callback = cb; }
    inline void setQScrollArea_MouseReleaseEvent_Callback(QScrollArea_MouseReleaseEvent_Callback cb) { qscrollarea_mousereleaseevent_callback = cb; }
    inline void setQScrollArea_MouseDoubleClickEvent_Callback(QScrollArea_MouseDoubleClickEvent_Callback cb) { qscrollarea_mousedoubleclickevent_callback = cb; }
    inline void setQScrollArea_MouseMoveEvent_Callback(QScrollArea_MouseMoveEvent_Callback cb) { qscrollarea_mousemoveevent_callback = cb; }
    inline void setQScrollArea_WheelEvent_Callback(QScrollArea_WheelEvent_Callback cb) { qscrollarea_wheelevent_callback = cb; }
    inline void setQScrollArea_ContextMenuEvent_Callback(QScrollArea_ContextMenuEvent_Callback cb) { qscrollarea_contextmenuevent_callback = cb; }
    inline void setQScrollArea_DragEnterEvent_Callback(QScrollArea_DragEnterEvent_Callback cb) { qscrollarea_dragenterevent_callback = cb; }
    inline void setQScrollArea_DragMoveEvent_Callback(QScrollArea_DragMoveEvent_Callback cb) { qscrollarea_dragmoveevent_callback = cb; }
    inline void setQScrollArea_DragLeaveEvent_Callback(QScrollArea_DragLeaveEvent_Callback cb) { qscrollarea_dragleaveevent_callback = cb; }
    inline void setQScrollArea_DropEvent_Callback(QScrollArea_DropEvent_Callback cb) { qscrollarea_dropevent_callback = cb; }
    inline void setQScrollArea_KeyPressEvent_Callback(QScrollArea_KeyPressEvent_Callback cb) { qscrollarea_keypressevent_callback = cb; }
    inline void setQScrollArea_ChangeEvent_Callback(QScrollArea_ChangeEvent_Callback cb) { qscrollarea_changeevent_callback = cb; }
    inline void setQScrollArea_InitStyleOption_Callback(QScrollArea_InitStyleOption_Callback cb) { qscrollarea_initstyleoption_callback = cb; }
    inline void setQScrollArea_DevType_Callback(QScrollArea_DevType_Callback cb) { qscrollarea_devtype_callback = cb; }
    inline void setQScrollArea_SetVisible_Callback(QScrollArea_SetVisible_Callback cb) { qscrollarea_setvisible_callback = cb; }
    inline void setQScrollArea_HeightForWidth_Callback(QScrollArea_HeightForWidth_Callback cb) { qscrollarea_heightforwidth_callback = cb; }
    inline void setQScrollArea_HasHeightForWidth_Callback(QScrollArea_HasHeightForWidth_Callback cb) { qscrollarea_hasheightforwidth_callback = cb; }
    inline void setQScrollArea_PaintEngine_Callback(QScrollArea_PaintEngine_Callback cb) { qscrollarea_paintengine_callback = cb; }
    inline void setQScrollArea_KeyReleaseEvent_Callback(QScrollArea_KeyReleaseEvent_Callback cb) { qscrollarea_keyreleaseevent_callback = cb; }
    inline void setQScrollArea_FocusInEvent_Callback(QScrollArea_FocusInEvent_Callback cb) { qscrollarea_focusinevent_callback = cb; }
    inline void setQScrollArea_FocusOutEvent_Callback(QScrollArea_FocusOutEvent_Callback cb) { qscrollarea_focusoutevent_callback = cb; }
    inline void setQScrollArea_EnterEvent_Callback(QScrollArea_EnterEvent_Callback cb) { qscrollarea_enterevent_callback = cb; }
    inline void setQScrollArea_LeaveEvent_Callback(QScrollArea_LeaveEvent_Callback cb) { qscrollarea_leaveevent_callback = cb; }
    inline void setQScrollArea_MoveEvent_Callback(QScrollArea_MoveEvent_Callback cb) { qscrollarea_moveevent_callback = cb; }
    inline void setQScrollArea_CloseEvent_Callback(QScrollArea_CloseEvent_Callback cb) { qscrollarea_closeevent_callback = cb; }
    inline void setQScrollArea_TabletEvent_Callback(QScrollArea_TabletEvent_Callback cb) { qscrollarea_tabletevent_callback = cb; }
    inline void setQScrollArea_ActionEvent_Callback(QScrollArea_ActionEvent_Callback cb) { qscrollarea_actionevent_callback = cb; }
    inline void setQScrollArea_ShowEvent_Callback(QScrollArea_ShowEvent_Callback cb) { qscrollarea_showevent_callback = cb; }
    inline void setQScrollArea_HideEvent_Callback(QScrollArea_HideEvent_Callback cb) { qscrollarea_hideevent_callback = cb; }
    inline void setQScrollArea_NativeEvent_Callback(QScrollArea_NativeEvent_Callback cb) { qscrollarea_nativeevent_callback = cb; }
    inline void setQScrollArea_Metric_Callback(QScrollArea_Metric_Callback cb) { qscrollarea_metric_callback = cb; }
    inline void setQScrollArea_InitPainter_Callback(QScrollArea_InitPainter_Callback cb) { qscrollarea_initpainter_callback = cb; }
    inline void setQScrollArea_Redirected_Callback(QScrollArea_Redirected_Callback cb) { qscrollarea_redirected_callback = cb; }
    inline void setQScrollArea_SharedPainter_Callback(QScrollArea_SharedPainter_Callback cb) { qscrollarea_sharedpainter_callback = cb; }
    inline void setQScrollArea_InputMethodEvent_Callback(QScrollArea_InputMethodEvent_Callback cb) { qscrollarea_inputmethodevent_callback = cb; }
    inline void setQScrollArea_InputMethodQuery_Callback(QScrollArea_InputMethodQuery_Callback cb) { qscrollarea_inputmethodquery_callback = cb; }
    inline void setQScrollArea_TimerEvent_Callback(QScrollArea_TimerEvent_Callback cb) { qscrollarea_timerevent_callback = cb; }
    inline void setQScrollArea_ChildEvent_Callback(QScrollArea_ChildEvent_Callback cb) { qscrollarea_childevent_callback = cb; }
    inline void setQScrollArea_CustomEvent_Callback(QScrollArea_CustomEvent_Callback cb) { qscrollarea_customevent_callback = cb; }
    inline void setQScrollArea_ConnectNotify_Callback(QScrollArea_ConnectNotify_Callback cb) { qscrollarea_connectnotify_callback = cb; }
    inline void setQScrollArea_DisconnectNotify_Callback(QScrollArea_DisconnectNotify_Callback cb) { qscrollarea_disconnectnotify_callback = cb; }
    inline void setQScrollArea_SetViewportMargins_Callback(QScrollArea_SetViewportMargins_Callback cb) { qscrollarea_setviewportmargins_callback = cb; }
    inline void setQScrollArea_ViewportMargins_Callback(QScrollArea_ViewportMargins_Callback cb) { qscrollarea_viewportmargins_callback = cb; }
    inline void setQScrollArea_DrawFrame_Callback(QScrollArea_DrawFrame_Callback cb) { qscrollarea_drawframe_callback = cb; }
    inline void setQScrollArea_UpdateMicroFocus_Callback(QScrollArea_UpdateMicroFocus_Callback cb) { qscrollarea_updatemicrofocus_callback = cb; }
    inline void setQScrollArea_Create_Callback(QScrollArea_Create_Callback cb) { qscrollarea_create_callback = cb; }
    inline void setQScrollArea_Destroy_Callback(QScrollArea_Destroy_Callback cb) { qscrollarea_destroy_callback = cb; }
    inline void setQScrollArea_FocusNextChild_Callback(QScrollArea_FocusNextChild_Callback cb) { qscrollarea_focusnextchild_callback = cb; }
    inline void setQScrollArea_FocusPreviousChild_Callback(QScrollArea_FocusPreviousChild_Callback cb) { qscrollarea_focuspreviouschild_callback = cb; }
    inline void setQScrollArea_Sender_Callback(QScrollArea_Sender_Callback cb) { qscrollarea_sender_callback = cb; }
    inline void setQScrollArea_SenderSignalIndex_Callback(QScrollArea_SenderSignalIndex_Callback cb) { qscrollarea_sendersignalindex_callback = cb; }
    inline void setQScrollArea_Receivers_Callback(QScrollArea_Receivers_Callback cb) { qscrollarea_receivers_callback = cb; }
    inline void setQScrollArea_IsSignalConnected_Callback(QScrollArea_IsSignalConnected_Callback cb) { qscrollarea_issignalconnected_callback = cb; }
    inline void setQScrollArea_GetDecodedMetricF_Callback(QScrollArea_GetDecodedMetricF_Callback cb) { qscrollarea_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQScrollArea_MetaObject_IsBase(bool value) const { qscrollarea_metaobject_isbase = value; }
    inline void setQScrollArea_Metacast_IsBase(bool value) const { qscrollarea_metacast_isbase = value; }
    inline void setQScrollArea_Metacall_IsBase(bool value) const { qscrollarea_metacall_isbase = value; }
    inline void setQScrollArea_SizeHint_IsBase(bool value) const { qscrollarea_sizehint_isbase = value; }
    inline void setQScrollArea_FocusNextPrevChild_IsBase(bool value) const { qscrollarea_focusnextprevchild_isbase = value; }
    inline void setQScrollArea_Event_IsBase(bool value) const { qscrollarea_event_isbase = value; }
    inline void setQScrollArea_EventFilter_IsBase(bool value) const { qscrollarea_eventfilter_isbase = value; }
    inline void setQScrollArea_ResizeEvent_IsBase(bool value) const { qscrollarea_resizeevent_isbase = value; }
    inline void setQScrollArea_ScrollContentsBy_IsBase(bool value) const { qscrollarea_scrollcontentsby_isbase = value; }
    inline void setQScrollArea_ViewportSizeHint_IsBase(bool value) const { qscrollarea_viewportsizehint_isbase = value; }
    inline void setQScrollArea_MinimumSizeHint_IsBase(bool value) const { qscrollarea_minimumsizehint_isbase = value; }
    inline void setQScrollArea_SetupViewport_IsBase(bool value) const { qscrollarea_setupviewport_isbase = value; }
    inline void setQScrollArea_ViewportEvent_IsBase(bool value) const { qscrollarea_viewportevent_isbase = value; }
    inline void setQScrollArea_PaintEvent_IsBase(bool value) const { qscrollarea_paintevent_isbase = value; }
    inline void setQScrollArea_MousePressEvent_IsBase(bool value) const { qscrollarea_mousepressevent_isbase = value; }
    inline void setQScrollArea_MouseReleaseEvent_IsBase(bool value) const { qscrollarea_mousereleaseevent_isbase = value; }
    inline void setQScrollArea_MouseDoubleClickEvent_IsBase(bool value) const { qscrollarea_mousedoubleclickevent_isbase = value; }
    inline void setQScrollArea_MouseMoveEvent_IsBase(bool value) const { qscrollarea_mousemoveevent_isbase = value; }
    inline void setQScrollArea_WheelEvent_IsBase(bool value) const { qscrollarea_wheelevent_isbase = value; }
    inline void setQScrollArea_ContextMenuEvent_IsBase(bool value) const { qscrollarea_contextmenuevent_isbase = value; }
    inline void setQScrollArea_DragEnterEvent_IsBase(bool value) const { qscrollarea_dragenterevent_isbase = value; }
    inline void setQScrollArea_DragMoveEvent_IsBase(bool value) const { qscrollarea_dragmoveevent_isbase = value; }
    inline void setQScrollArea_DragLeaveEvent_IsBase(bool value) const { qscrollarea_dragleaveevent_isbase = value; }
    inline void setQScrollArea_DropEvent_IsBase(bool value) const { qscrollarea_dropevent_isbase = value; }
    inline void setQScrollArea_KeyPressEvent_IsBase(bool value) const { qscrollarea_keypressevent_isbase = value; }
    inline void setQScrollArea_ChangeEvent_IsBase(bool value) const { qscrollarea_changeevent_isbase = value; }
    inline void setQScrollArea_InitStyleOption_IsBase(bool value) const { qscrollarea_initstyleoption_isbase = value; }
    inline void setQScrollArea_DevType_IsBase(bool value) const { qscrollarea_devtype_isbase = value; }
    inline void setQScrollArea_SetVisible_IsBase(bool value) const { qscrollarea_setvisible_isbase = value; }
    inline void setQScrollArea_HeightForWidth_IsBase(bool value) const { qscrollarea_heightforwidth_isbase = value; }
    inline void setQScrollArea_HasHeightForWidth_IsBase(bool value) const { qscrollarea_hasheightforwidth_isbase = value; }
    inline void setQScrollArea_PaintEngine_IsBase(bool value) const { qscrollarea_paintengine_isbase = value; }
    inline void setQScrollArea_KeyReleaseEvent_IsBase(bool value) const { qscrollarea_keyreleaseevent_isbase = value; }
    inline void setQScrollArea_FocusInEvent_IsBase(bool value) const { qscrollarea_focusinevent_isbase = value; }
    inline void setQScrollArea_FocusOutEvent_IsBase(bool value) const { qscrollarea_focusoutevent_isbase = value; }
    inline void setQScrollArea_EnterEvent_IsBase(bool value) const { qscrollarea_enterevent_isbase = value; }
    inline void setQScrollArea_LeaveEvent_IsBase(bool value) const { qscrollarea_leaveevent_isbase = value; }
    inline void setQScrollArea_MoveEvent_IsBase(bool value) const { qscrollarea_moveevent_isbase = value; }
    inline void setQScrollArea_CloseEvent_IsBase(bool value) const { qscrollarea_closeevent_isbase = value; }
    inline void setQScrollArea_TabletEvent_IsBase(bool value) const { qscrollarea_tabletevent_isbase = value; }
    inline void setQScrollArea_ActionEvent_IsBase(bool value) const { qscrollarea_actionevent_isbase = value; }
    inline void setQScrollArea_ShowEvent_IsBase(bool value) const { qscrollarea_showevent_isbase = value; }
    inline void setQScrollArea_HideEvent_IsBase(bool value) const { qscrollarea_hideevent_isbase = value; }
    inline void setQScrollArea_NativeEvent_IsBase(bool value) const { qscrollarea_nativeevent_isbase = value; }
    inline void setQScrollArea_Metric_IsBase(bool value) const { qscrollarea_metric_isbase = value; }
    inline void setQScrollArea_InitPainter_IsBase(bool value) const { qscrollarea_initpainter_isbase = value; }
    inline void setQScrollArea_Redirected_IsBase(bool value) const { qscrollarea_redirected_isbase = value; }
    inline void setQScrollArea_SharedPainter_IsBase(bool value) const { qscrollarea_sharedpainter_isbase = value; }
    inline void setQScrollArea_InputMethodEvent_IsBase(bool value) const { qscrollarea_inputmethodevent_isbase = value; }
    inline void setQScrollArea_InputMethodQuery_IsBase(bool value) const { qscrollarea_inputmethodquery_isbase = value; }
    inline void setQScrollArea_TimerEvent_IsBase(bool value) const { qscrollarea_timerevent_isbase = value; }
    inline void setQScrollArea_ChildEvent_IsBase(bool value) const { qscrollarea_childevent_isbase = value; }
    inline void setQScrollArea_CustomEvent_IsBase(bool value) const { qscrollarea_customevent_isbase = value; }
    inline void setQScrollArea_ConnectNotify_IsBase(bool value) const { qscrollarea_connectnotify_isbase = value; }
    inline void setQScrollArea_DisconnectNotify_IsBase(bool value) const { qscrollarea_disconnectnotify_isbase = value; }
    inline void setQScrollArea_SetViewportMargins_IsBase(bool value) const { qscrollarea_setviewportmargins_isbase = value; }
    inline void setQScrollArea_ViewportMargins_IsBase(bool value) const { qscrollarea_viewportmargins_isbase = value; }
    inline void setQScrollArea_DrawFrame_IsBase(bool value) const { qscrollarea_drawframe_isbase = value; }
    inline void setQScrollArea_UpdateMicroFocus_IsBase(bool value) const { qscrollarea_updatemicrofocus_isbase = value; }
    inline void setQScrollArea_Create_IsBase(bool value) const { qscrollarea_create_isbase = value; }
    inline void setQScrollArea_Destroy_IsBase(bool value) const { qscrollarea_destroy_isbase = value; }
    inline void setQScrollArea_FocusNextChild_IsBase(bool value) const { qscrollarea_focusnextchild_isbase = value; }
    inline void setQScrollArea_FocusPreviousChild_IsBase(bool value) const { qscrollarea_focuspreviouschild_isbase = value; }
    inline void setQScrollArea_Sender_IsBase(bool value) const { qscrollarea_sender_isbase = value; }
    inline void setQScrollArea_SenderSignalIndex_IsBase(bool value) const { qscrollarea_sendersignalindex_isbase = value; }
    inline void setQScrollArea_Receivers_IsBase(bool value) const { qscrollarea_receivers_isbase = value; }
    inline void setQScrollArea_IsSignalConnected_IsBase(bool value) const { qscrollarea_issignalconnected_isbase = value; }
    inline void setQScrollArea_GetDecodedMetricF_IsBase(bool value) const { qscrollarea_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscrollarea_metaobject_isbase) {
            qscrollarea_metaobject_isbase = false;
            return QScrollArea::metaObject();
        }
        auto metaobject_cb = qscrollarea_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QScrollArea::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscrollarea_metacast_isbase) {
            qscrollarea_metacast_isbase = false;
            return QScrollArea::qt_metacast(param1);
        }
        auto metacast_cb = qscrollarea_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QScrollArea::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscrollarea_metacall_isbase) {
            qscrollarea_metacall_isbase = false;
            return QScrollArea::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscrollarea_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QScrollArea::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qscrollarea_sizehint_isbase) {
            qscrollarea_sizehint_isbase = false;
            return QScrollArea::sizeHint();
        }
        auto sizehint_cb = qscrollarea_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QScrollArea::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qscrollarea_focusnextprevchild_isbase) {
            qscrollarea_focusnextprevchild_isbase = false;
            return QScrollArea::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qscrollarea_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QScrollArea::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qscrollarea_event_isbase) {
            qscrollarea_event_isbase = false;
            return QScrollArea::event(param1);
        }
        auto event_cb = qscrollarea_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QScrollArea::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qscrollarea_eventfilter_isbase) {
            qscrollarea_eventfilter_isbase = false;
            return QScrollArea::eventFilter(param1, param2);
        }
        auto eventfilter_cb = qscrollarea_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QScrollArea::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qscrollarea_resizeevent_isbase) {
            qscrollarea_resizeevent_isbase = false;
            QScrollArea::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = qscrollarea_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        QScrollArea::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qscrollarea_scrollcontentsby_isbase) {
            qscrollarea_scrollcontentsby_isbase = false;
            QScrollArea::scrollContentsBy(dx, dy);
            return;
        }
        auto scrollcontentsby_cb = qscrollarea_scrollcontentsby_callback;
        if (scrollcontentsby_cb) {
            int cbval1 = dx;
            int cbval2 = dy;

            scrollcontentsby_cb(this, cbval1, cbval2);
            return;
        }
        QScrollArea::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qscrollarea_viewportsizehint_isbase) {
            qscrollarea_viewportsizehint_isbase = false;
            return QScrollArea::viewportSizeHint();
        }
        auto viewportsizehint_cb = qscrollarea_viewportsizehint_callback;
        if (viewportsizehint_cb) {
            QSize* callback_ret = viewportsizehint_cb();
            return *callback_ret;
        }
        return QScrollArea::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qscrollarea_minimumsizehint_isbase) {
            qscrollarea_minimumsizehint_isbase = false;
            return QScrollArea::minimumSizeHint();
        }
        auto minimumsizehint_cb = qscrollarea_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QScrollArea::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qscrollarea_setupviewport_isbase) {
            qscrollarea_setupviewport_isbase = false;
            QScrollArea::setupViewport(viewport);
            return;
        }
        auto setupviewport_cb = qscrollarea_setupviewport_callback;
        if (setupviewport_cb) {
            QWidget* cbval1 = viewport;

            setupviewport_cb(this, cbval1);
            return;
        }
        QScrollArea::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (qscrollarea_viewportevent_isbase) {
            qscrollarea_viewportevent_isbase = false;
            return QScrollArea::viewportEvent(param1);
        }
        auto viewportevent_cb = qscrollarea_viewportevent_callback;
        if (viewportevent_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = viewportevent_cb(this, cbval1);
            return callback_ret;
        }
        return QScrollArea::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qscrollarea_paintevent_isbase) {
            qscrollarea_paintevent_isbase = false;
            QScrollArea::paintEvent(param1);
            return;
        }
        auto paintevent_cb = qscrollarea_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        QScrollArea::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qscrollarea_mousepressevent_isbase) {
            qscrollarea_mousepressevent_isbase = false;
            QScrollArea::mousePressEvent(param1);
            return;
        }
        auto mousepressevent_cb = qscrollarea_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QScrollArea::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qscrollarea_mousereleaseevent_isbase) {
            qscrollarea_mousereleaseevent_isbase = false;
            QScrollArea::mouseReleaseEvent(param1);
            return;
        }
        auto mousereleaseevent_cb = qscrollarea_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QScrollArea::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qscrollarea_mousedoubleclickevent_isbase) {
            qscrollarea_mousedoubleclickevent_isbase = false;
            QScrollArea::mouseDoubleClickEvent(param1);
            return;
        }
        auto mousedoubleclickevent_cb = qscrollarea_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QScrollArea::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qscrollarea_mousemoveevent_isbase) {
            qscrollarea_mousemoveevent_isbase = false;
            QScrollArea::mouseMoveEvent(param1);
            return;
        }
        auto mousemoveevent_cb = qscrollarea_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QScrollArea::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qscrollarea_wheelevent_isbase) {
            qscrollarea_wheelevent_isbase = false;
            QScrollArea::wheelEvent(param1);
            return;
        }
        auto wheelevent_cb = qscrollarea_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = param1;

            wheelevent_cb(this, cbval1);
            return;
        }
        QScrollArea::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qscrollarea_contextmenuevent_isbase) {
            qscrollarea_contextmenuevent_isbase = false;
            QScrollArea::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = qscrollarea_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QScrollArea::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qscrollarea_dragenterevent_isbase) {
            qscrollarea_dragenterevent_isbase = false;
            QScrollArea::dragEnterEvent(param1);
            return;
        }
        auto dragenterevent_cb = qscrollarea_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = param1;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QScrollArea::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (qscrollarea_dragmoveevent_isbase) {
            qscrollarea_dragmoveevent_isbase = false;
            QScrollArea::dragMoveEvent(param1);
            return;
        }
        auto dragmoveevent_cb = qscrollarea_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = param1;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QScrollArea::dragMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (qscrollarea_dragleaveevent_isbase) {
            qscrollarea_dragleaveevent_isbase = false;
            QScrollArea::dragLeaveEvent(param1);
            return;
        }
        auto dragleaveevent_cb = qscrollarea_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = param1;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QScrollArea::dragLeaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qscrollarea_dropevent_isbase) {
            qscrollarea_dropevent_isbase = false;
            QScrollArea::dropEvent(param1);
            return;
        }
        auto dropevent_cb = qscrollarea_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = param1;

            dropevent_cb(this, cbval1);
            return;
        }
        QScrollArea::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qscrollarea_keypressevent_isbase) {
            qscrollarea_keypressevent_isbase = false;
            QScrollArea::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = qscrollarea_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        QScrollArea::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qscrollarea_changeevent_isbase) {
            qscrollarea_changeevent_isbase = false;
            QScrollArea::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qscrollarea_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QScrollArea::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qscrollarea_initstyleoption_isbase) {
            qscrollarea_initstyleoption_isbase = false;
            QScrollArea::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qscrollarea_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QScrollArea::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qscrollarea_devtype_isbase) {
            qscrollarea_devtype_isbase = false;
            return QScrollArea::devType();
        }
        auto devtype_cb = qscrollarea_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QScrollArea::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qscrollarea_setvisible_isbase) {
            qscrollarea_setvisible_isbase = false;
            QScrollArea::setVisible(visible);
            return;
        }
        auto setvisible_cb = qscrollarea_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QScrollArea::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qscrollarea_heightforwidth_isbase) {
            qscrollarea_heightforwidth_isbase = false;
            return QScrollArea::heightForWidth(param1);
        }
        auto heightforwidth_cb = qscrollarea_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QScrollArea::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qscrollarea_hasheightforwidth_isbase) {
            qscrollarea_hasheightforwidth_isbase = false;
            return QScrollArea::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qscrollarea_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QScrollArea::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qscrollarea_paintengine_isbase) {
            qscrollarea_paintengine_isbase = false;
            return QScrollArea::paintEngine();
        }
        auto paintengine_cb = qscrollarea_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QScrollArea::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qscrollarea_keyreleaseevent_isbase) {
            qscrollarea_keyreleaseevent_isbase = false;
            QScrollArea::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qscrollarea_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QScrollArea::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qscrollarea_focusinevent_isbase) {
            qscrollarea_focusinevent_isbase = false;
            QScrollArea::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qscrollarea_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QScrollArea::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qscrollarea_focusoutevent_isbase) {
            qscrollarea_focusoutevent_isbase = false;
            QScrollArea::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qscrollarea_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QScrollArea::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qscrollarea_enterevent_isbase) {
            qscrollarea_enterevent_isbase = false;
            QScrollArea::enterEvent(event);
            return;
        }
        auto enterevent_cb = qscrollarea_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QScrollArea::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qscrollarea_leaveevent_isbase) {
            qscrollarea_leaveevent_isbase = false;
            QScrollArea::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qscrollarea_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QScrollArea::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qscrollarea_moveevent_isbase) {
            qscrollarea_moveevent_isbase = false;
            QScrollArea::moveEvent(event);
            return;
        }
        auto moveevent_cb = qscrollarea_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QScrollArea::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qscrollarea_closeevent_isbase) {
            qscrollarea_closeevent_isbase = false;
            QScrollArea::closeEvent(event);
            return;
        }
        auto closeevent_cb = qscrollarea_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QScrollArea::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qscrollarea_tabletevent_isbase) {
            qscrollarea_tabletevent_isbase = false;
            QScrollArea::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qscrollarea_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QScrollArea::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qscrollarea_actionevent_isbase) {
            qscrollarea_actionevent_isbase = false;
            QScrollArea::actionEvent(event);
            return;
        }
        auto actionevent_cb = qscrollarea_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QScrollArea::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qscrollarea_showevent_isbase) {
            qscrollarea_showevent_isbase = false;
            QScrollArea::showEvent(event);
            return;
        }
        auto showevent_cb = qscrollarea_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QScrollArea::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qscrollarea_hideevent_isbase) {
            qscrollarea_hideevent_isbase = false;
            QScrollArea::hideEvent(event);
            return;
        }
        auto hideevent_cb = qscrollarea_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QScrollArea::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qscrollarea_nativeevent_isbase) {
            qscrollarea_nativeevent_isbase = false;
            return QScrollArea::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qscrollarea_nativeevent_callback;
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
        return QScrollArea::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qscrollarea_metric_isbase) {
            qscrollarea_metric_isbase = false;
            return QScrollArea::metric(param1);
        }
        auto metric_cb = qscrollarea_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QScrollArea::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qscrollarea_initpainter_isbase) {
            qscrollarea_initpainter_isbase = false;
            QScrollArea::initPainter(painter);
            return;
        }
        auto initpainter_cb = qscrollarea_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QScrollArea::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qscrollarea_redirected_isbase) {
            qscrollarea_redirected_isbase = false;
            return QScrollArea::redirected(offset);
        }
        auto redirected_cb = qscrollarea_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QScrollArea::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qscrollarea_sharedpainter_isbase) {
            qscrollarea_sharedpainter_isbase = false;
            return QScrollArea::sharedPainter();
        }
        auto sharedpainter_cb = qscrollarea_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QScrollArea::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qscrollarea_inputmethodevent_isbase) {
            qscrollarea_inputmethodevent_isbase = false;
            QScrollArea::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qscrollarea_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QScrollArea::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qscrollarea_inputmethodquery_isbase) {
            qscrollarea_inputmethodquery_isbase = false;
            return QScrollArea::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qscrollarea_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QScrollArea::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscrollarea_timerevent_isbase) {
            qscrollarea_timerevent_isbase = false;
            QScrollArea::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscrollarea_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QScrollArea::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscrollarea_childevent_isbase) {
            qscrollarea_childevent_isbase = false;
            QScrollArea::childEvent(event);
            return;
        }
        auto childevent_cb = qscrollarea_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QScrollArea::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscrollarea_customevent_isbase) {
            qscrollarea_customevent_isbase = false;
            QScrollArea::customEvent(event);
            return;
        }
        auto customevent_cb = qscrollarea_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QScrollArea::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscrollarea_connectnotify_isbase) {
            qscrollarea_connectnotify_isbase = false;
            QScrollArea::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscrollarea_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QScrollArea::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscrollarea_disconnectnotify_isbase) {
            qscrollarea_disconnectnotify_isbase = false;
            QScrollArea::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscrollarea_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QScrollArea::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qscrollarea_setviewportmargins_isbase) {
            qscrollarea_setviewportmargins_isbase = false;
            QScrollArea::setViewportMargins(left, top, right, bottom);
            return;
        }
        auto setviewportmargins_cb = qscrollarea_setviewportmargins_callback;
        if (setviewportmargins_cb) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            setviewportmargins_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QScrollArea::setViewportMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qscrollarea_viewportmargins_isbase) {
            qscrollarea_viewportmargins_isbase = false;
            return QScrollArea::viewportMargins();
        }
        auto viewportmargins_cb = qscrollarea_viewportmargins_callback;
        if (viewportmargins_cb) {
            QMargins* callback_ret = viewportmargins_cb();
            return *callback_ret;
        }
        return QScrollArea::viewportMargins();
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qscrollarea_drawframe_isbase) {
            qscrollarea_drawframe_isbase = false;
            QScrollArea::drawFrame(param1);
            return;
        }
        auto drawframe_cb = qscrollarea_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;

            drawframe_cb(this, cbval1);
            return;
        }
        QScrollArea::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qscrollarea_updatemicrofocus_isbase) {
            qscrollarea_updatemicrofocus_isbase = false;
            QScrollArea::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qscrollarea_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QScrollArea::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qscrollarea_create_isbase) {
            qscrollarea_create_isbase = false;
            QScrollArea::create();
            return;
        }
        auto create_cb = qscrollarea_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QScrollArea::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qscrollarea_destroy_isbase) {
            qscrollarea_destroy_isbase = false;
            QScrollArea::destroy();
            return;
        }
        auto destroy_cb = qscrollarea_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QScrollArea::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qscrollarea_focusnextchild_isbase) {
            qscrollarea_focusnextchild_isbase = false;
            return QScrollArea::focusNextChild();
        }
        auto focusnextchild_cb = qscrollarea_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QScrollArea::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qscrollarea_focuspreviouschild_isbase) {
            qscrollarea_focuspreviouschild_isbase = false;
            return QScrollArea::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qscrollarea_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QScrollArea::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscrollarea_sender_isbase) {
            qscrollarea_sender_isbase = false;
            return QScrollArea::sender();
        }
        auto sender_cb = qscrollarea_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QScrollArea::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscrollarea_sendersignalindex_isbase) {
            qscrollarea_sendersignalindex_isbase = false;
            return QScrollArea::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscrollarea_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QScrollArea::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscrollarea_receivers_isbase) {
            qscrollarea_receivers_isbase = false;
            return QScrollArea::receivers(signal);
        }
        auto receivers_cb = qscrollarea_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QScrollArea::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscrollarea_issignalconnected_isbase) {
            qscrollarea_issignalconnected_isbase = false;
            return QScrollArea::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscrollarea_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QScrollArea::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qscrollarea_getdecodedmetricf_isbase) {
            qscrollarea_getdecodedmetricf_isbase = false;
            return QScrollArea::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qscrollarea_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QScrollArea::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool QScrollArea_Event(QScrollArea* self, QEvent* param1);
    friend bool QScrollArea_SuperEvent(QScrollArea* self, QEvent* param1);
    friend bool QScrollArea_EventFilter(QScrollArea* self, QObject* param1, QEvent* param2);
    friend bool QScrollArea_SuperEventFilter(QScrollArea* self, QObject* param1, QEvent* param2);
    friend void QScrollArea_ResizeEvent(QScrollArea* self, QResizeEvent* param1);
    friend void QScrollArea_SuperResizeEvent(QScrollArea* self, QResizeEvent* param1);
    friend void QScrollArea_ScrollContentsBy(QScrollArea* self, int dx, int dy);
    friend void QScrollArea_SuperScrollContentsBy(QScrollArea* self, int dx, int dy);
    friend QSize* QScrollArea_ViewportSizeHint(const QScrollArea* self);
    friend QSize* QScrollArea_SuperViewportSizeHint(const QScrollArea* self);
    friend bool QScrollArea_ViewportEvent(QScrollArea* self, QEvent* param1);
    friend bool QScrollArea_SuperViewportEvent(QScrollArea* self, QEvent* param1);
    friend void QScrollArea_PaintEvent(QScrollArea* self, QPaintEvent* param1);
    friend void QScrollArea_SuperPaintEvent(QScrollArea* self, QPaintEvent* param1);
    friend void QScrollArea_MousePressEvent(QScrollArea* self, QMouseEvent* param1);
    friend void QScrollArea_SuperMousePressEvent(QScrollArea* self, QMouseEvent* param1);
    friend void QScrollArea_MouseReleaseEvent(QScrollArea* self, QMouseEvent* param1);
    friend void QScrollArea_SuperMouseReleaseEvent(QScrollArea* self, QMouseEvent* param1);
    friend void QScrollArea_MouseDoubleClickEvent(QScrollArea* self, QMouseEvent* param1);
    friend void QScrollArea_SuperMouseDoubleClickEvent(QScrollArea* self, QMouseEvent* param1);
    friend void QScrollArea_MouseMoveEvent(QScrollArea* self, QMouseEvent* param1);
    friend void QScrollArea_SuperMouseMoveEvent(QScrollArea* self, QMouseEvent* param1);
    friend void QScrollArea_WheelEvent(QScrollArea* self, QWheelEvent* param1);
    friend void QScrollArea_SuperWheelEvent(QScrollArea* self, QWheelEvent* param1);
    friend void QScrollArea_ContextMenuEvent(QScrollArea* self, QContextMenuEvent* param1);
    friend void QScrollArea_SuperContextMenuEvent(QScrollArea* self, QContextMenuEvent* param1);
    friend void QScrollArea_DragEnterEvent(QScrollArea* self, QDragEnterEvent* param1);
    friend void QScrollArea_SuperDragEnterEvent(QScrollArea* self, QDragEnterEvent* param1);
    friend void QScrollArea_DragMoveEvent(QScrollArea* self, QDragMoveEvent* param1);
    friend void QScrollArea_SuperDragMoveEvent(QScrollArea* self, QDragMoveEvent* param1);
    friend void QScrollArea_DragLeaveEvent(QScrollArea* self, QDragLeaveEvent* param1);
    friend void QScrollArea_SuperDragLeaveEvent(QScrollArea* self, QDragLeaveEvent* param1);
    friend void QScrollArea_DropEvent(QScrollArea* self, QDropEvent* param1);
    friend void QScrollArea_SuperDropEvent(QScrollArea* self, QDropEvent* param1);
    friend void QScrollArea_KeyPressEvent(QScrollArea* self, QKeyEvent* param1);
    friend void QScrollArea_SuperKeyPressEvent(QScrollArea* self, QKeyEvent* param1);
    friend void QScrollArea_ChangeEvent(QScrollArea* self, QEvent* param1);
    friend void QScrollArea_SuperChangeEvent(QScrollArea* self, QEvent* param1);
    friend void QScrollArea_InitStyleOption(const QScrollArea* self, QStyleOptionFrame* option);
    friend void QScrollArea_SuperInitStyleOption(const QScrollArea* self, QStyleOptionFrame* option);
    friend void QScrollArea_KeyReleaseEvent(QScrollArea* self, QKeyEvent* event);
    friend void QScrollArea_SuperKeyReleaseEvent(QScrollArea* self, QKeyEvent* event);
    friend void QScrollArea_FocusInEvent(QScrollArea* self, QFocusEvent* event);
    friend void QScrollArea_SuperFocusInEvent(QScrollArea* self, QFocusEvent* event);
    friend void QScrollArea_FocusOutEvent(QScrollArea* self, QFocusEvent* event);
    friend void QScrollArea_SuperFocusOutEvent(QScrollArea* self, QFocusEvent* event);
    friend void QScrollArea_EnterEvent(QScrollArea* self, QEnterEvent* event);
    friend void QScrollArea_SuperEnterEvent(QScrollArea* self, QEnterEvent* event);
    friend void QScrollArea_LeaveEvent(QScrollArea* self, QEvent* event);
    friend void QScrollArea_SuperLeaveEvent(QScrollArea* self, QEvent* event);
    friend void QScrollArea_MoveEvent(QScrollArea* self, QMoveEvent* event);
    friend void QScrollArea_SuperMoveEvent(QScrollArea* self, QMoveEvent* event);
    friend void QScrollArea_CloseEvent(QScrollArea* self, QCloseEvent* event);
    friend void QScrollArea_SuperCloseEvent(QScrollArea* self, QCloseEvent* event);
    friend void QScrollArea_TabletEvent(QScrollArea* self, QTabletEvent* event);
    friend void QScrollArea_SuperTabletEvent(QScrollArea* self, QTabletEvent* event);
    friend void QScrollArea_ActionEvent(QScrollArea* self, QActionEvent* event);
    friend void QScrollArea_SuperActionEvent(QScrollArea* self, QActionEvent* event);
    friend void QScrollArea_ShowEvent(QScrollArea* self, QShowEvent* event);
    friend void QScrollArea_SuperShowEvent(QScrollArea* self, QShowEvent* event);
    friend void QScrollArea_HideEvent(QScrollArea* self, QHideEvent* event);
    friend void QScrollArea_SuperHideEvent(QScrollArea* self, QHideEvent* event);
    friend bool QScrollArea_NativeEvent(QScrollArea* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QScrollArea_SuperNativeEvent(QScrollArea* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QScrollArea_Metric(const QScrollArea* self, int param1);
    friend int QScrollArea_SuperMetric(const QScrollArea* self, int param1);
    friend void QScrollArea_InitPainter(const QScrollArea* self, QPainter* painter);
    friend void QScrollArea_SuperInitPainter(const QScrollArea* self, QPainter* painter);
    friend QPaintDevice* QScrollArea_Redirected(const QScrollArea* self, QPoint* offset);
    friend QPaintDevice* QScrollArea_SuperRedirected(const QScrollArea* self, QPoint* offset);
    friend QPainter* QScrollArea_SharedPainter(const QScrollArea* self);
    friend QPainter* QScrollArea_SuperSharedPainter(const QScrollArea* self);
    friend void QScrollArea_InputMethodEvent(QScrollArea* self, QInputMethodEvent* param1);
    friend void QScrollArea_SuperInputMethodEvent(QScrollArea* self, QInputMethodEvent* param1);
    friend void QScrollArea_TimerEvent(QScrollArea* self, QTimerEvent* event);
    friend void QScrollArea_SuperTimerEvent(QScrollArea* self, QTimerEvent* event);
    friend void QScrollArea_ChildEvent(QScrollArea* self, QChildEvent* event);
    friend void QScrollArea_SuperChildEvent(QScrollArea* self, QChildEvent* event);
    friend void QScrollArea_CustomEvent(QScrollArea* self, QEvent* event);
    friend void QScrollArea_SuperCustomEvent(QScrollArea* self, QEvent* event);
    friend void QScrollArea_ConnectNotify(QScrollArea* self, const QMetaMethod* signal);
    friend void QScrollArea_SuperConnectNotify(QScrollArea* self, const QMetaMethod* signal);
    friend void QScrollArea_DisconnectNotify(QScrollArea* self, const QMetaMethod* signal);
    friend void QScrollArea_SuperDisconnectNotify(QScrollArea* self, const QMetaMethod* signal);
    friend void QScrollArea_SetViewportMargins(QScrollArea* self, int left, int top, int right, int bottom);
    friend void QScrollArea_SuperSetViewportMargins(QScrollArea* self, int left, int top, int right, int bottom);
    friend QMargins* QScrollArea_ViewportMargins(const QScrollArea* self);
    friend QMargins* QScrollArea_SuperViewportMargins(const QScrollArea* self);
    friend void QScrollArea_DrawFrame(QScrollArea* self, QPainter* param1);
    friend void QScrollArea_SuperDrawFrame(QScrollArea* self, QPainter* param1);
    friend void QScrollArea_UpdateMicroFocus(QScrollArea* self);
    friend void QScrollArea_SuperUpdateMicroFocus(QScrollArea* self);
    friend void QScrollArea_Create(QScrollArea* self);
    friend void QScrollArea_SuperCreate(QScrollArea* self);
    friend void QScrollArea_Destroy(QScrollArea* self);
    friend void QScrollArea_SuperDestroy(QScrollArea* self);
    friend bool QScrollArea_FocusNextChild(QScrollArea* self);
    friend bool QScrollArea_SuperFocusNextChild(QScrollArea* self);
    friend bool QScrollArea_FocusPreviousChild(QScrollArea* self);
    friend bool QScrollArea_SuperFocusPreviousChild(QScrollArea* self);
    friend QObject* QScrollArea_Sender(const QScrollArea* self);
    friend QObject* QScrollArea_SuperSender(const QScrollArea* self);
    friend int QScrollArea_SenderSignalIndex(const QScrollArea* self);
    friend int QScrollArea_SuperSenderSignalIndex(const QScrollArea* self);
    friend int QScrollArea_Receivers(const QScrollArea* self, const char* signal);
    friend int QScrollArea_SuperReceivers(const QScrollArea* self, const char* signal);
    friend bool QScrollArea_IsSignalConnected(const QScrollArea* self, const QMetaMethod* signal);
    friend bool QScrollArea_SuperIsSignalConnected(const QScrollArea* self, const QMetaMethod* signal);
    friend double QScrollArea_GetDecodedMetricF(const QScrollArea* self, int metricA, int metricB);
    friend double QScrollArea_SuperGetDecodedMetricF(const QScrollArea* self, int metricA, int metricB);
};

#endif
