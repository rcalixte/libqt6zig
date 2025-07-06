#pragma once
#ifndef SRCC_LIBVIRTUALQMDIAREA_H
#define SRCC_LIBVIRTUALQMDIAREA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QMdiArea so that we can call protected methods
class VirtualQMdiArea final : public QMdiArea {

  public:
    // Virtual class boolean flag
    bool isVirtualQMdiArea = true;

    // Virtual class public types (including callbacks)
    using QMdiArea_Metacall_Callback = int (*)(QMdiArea*, int, int, void**);
    using QMdiArea_SizeHint_Callback = QSize* (*)();
    using QMdiArea_MinimumSizeHint_Callback = QSize* (*)();
    using QMdiArea_SetupViewport_Callback = void (*)(QMdiArea*, QWidget*);
    using QMdiArea_Event_Callback = bool (*)(QMdiArea*, QEvent*);
    using QMdiArea_EventFilter_Callback = bool (*)(QMdiArea*, QObject*, QEvent*);
    using QMdiArea_PaintEvent_Callback = void (*)(QMdiArea*, QPaintEvent*);
    using QMdiArea_ChildEvent_Callback = void (*)(QMdiArea*, QChildEvent*);
    using QMdiArea_ResizeEvent_Callback = void (*)(QMdiArea*, QResizeEvent*);
    using QMdiArea_TimerEvent_Callback = void (*)(QMdiArea*, QTimerEvent*);
    using QMdiArea_ShowEvent_Callback = void (*)(QMdiArea*, QShowEvent*);
    using QMdiArea_ViewportEvent_Callback = bool (*)(QMdiArea*, QEvent*);
    using QMdiArea_ScrollContentsBy_Callback = void (*)(QMdiArea*, int, int);
    using QMdiArea_MousePressEvent_Callback = void (*)(QMdiArea*, QMouseEvent*);
    using QMdiArea_MouseReleaseEvent_Callback = void (*)(QMdiArea*, QMouseEvent*);
    using QMdiArea_MouseDoubleClickEvent_Callback = void (*)(QMdiArea*, QMouseEvent*);
    using QMdiArea_MouseMoveEvent_Callback = void (*)(QMdiArea*, QMouseEvent*);
    using QMdiArea_WheelEvent_Callback = void (*)(QMdiArea*, QWheelEvent*);
    using QMdiArea_ContextMenuEvent_Callback = void (*)(QMdiArea*, QContextMenuEvent*);
    using QMdiArea_DragEnterEvent_Callback = void (*)(QMdiArea*, QDragEnterEvent*);
    using QMdiArea_DragMoveEvent_Callback = void (*)(QMdiArea*, QDragMoveEvent*);
    using QMdiArea_DragLeaveEvent_Callback = void (*)(QMdiArea*, QDragLeaveEvent*);
    using QMdiArea_DropEvent_Callback = void (*)(QMdiArea*, QDropEvent*);
    using QMdiArea_KeyPressEvent_Callback = void (*)(QMdiArea*, QKeyEvent*);
    using QMdiArea_ViewportSizeHint_Callback = QSize* (*)();
    using QMdiArea_ChangeEvent_Callback = void (*)(QMdiArea*, QEvent*);
    using QMdiArea_InitStyleOption_Callback = void (*)(const QMdiArea*, QStyleOptionFrame*);
    using QMdiArea_DevType_Callback = int (*)();
    using QMdiArea_SetVisible_Callback = void (*)(QMdiArea*, bool);
    using QMdiArea_HeightForWidth_Callback = int (*)(const QMdiArea*, int);
    using QMdiArea_HasHeightForWidth_Callback = bool (*)();
    using QMdiArea_PaintEngine_Callback = QPaintEngine* (*)();
    using QMdiArea_KeyReleaseEvent_Callback = void (*)(QMdiArea*, QKeyEvent*);
    using QMdiArea_FocusInEvent_Callback = void (*)(QMdiArea*, QFocusEvent*);
    using QMdiArea_FocusOutEvent_Callback = void (*)(QMdiArea*, QFocusEvent*);
    using QMdiArea_EnterEvent_Callback = void (*)(QMdiArea*, QEnterEvent*);
    using QMdiArea_LeaveEvent_Callback = void (*)(QMdiArea*, QEvent*);
    using QMdiArea_MoveEvent_Callback = void (*)(QMdiArea*, QMoveEvent*);
    using QMdiArea_CloseEvent_Callback = void (*)(QMdiArea*, QCloseEvent*);
    using QMdiArea_TabletEvent_Callback = void (*)(QMdiArea*, QTabletEvent*);
    using QMdiArea_ActionEvent_Callback = void (*)(QMdiArea*, QActionEvent*);
    using QMdiArea_HideEvent_Callback = void (*)(QMdiArea*, QHideEvent*);
    using QMdiArea_NativeEvent_Callback = bool (*)(QMdiArea*, libqt_string, void*, intptr_t*);
    using QMdiArea_Metric_Callback = int (*)(const QMdiArea*, int);
    using QMdiArea_InitPainter_Callback = void (*)(const QMdiArea*, QPainter*);
    using QMdiArea_Redirected_Callback = QPaintDevice* (*)(const QMdiArea*, QPoint*);
    using QMdiArea_SharedPainter_Callback = QPainter* (*)();
    using QMdiArea_InputMethodEvent_Callback = void (*)(QMdiArea*, QInputMethodEvent*);
    using QMdiArea_InputMethodQuery_Callback = QVariant* (*)(const QMdiArea*, int);
    using QMdiArea_FocusNextPrevChild_Callback = bool (*)(QMdiArea*, bool);
    using QMdiArea_CustomEvent_Callback = void (*)(QMdiArea*, QEvent*);
    using QMdiArea_ConnectNotify_Callback = void (*)(QMdiArea*, QMetaMethod*);
    using QMdiArea_DisconnectNotify_Callback = void (*)(QMdiArea*, QMetaMethod*);
    using QMdiArea_SetViewportMargins_Callback = void (*)(QMdiArea*, int, int, int, int);
    using QMdiArea_ViewportMargins_Callback = QMargins* (*)();
    using QMdiArea_DrawFrame_Callback = void (*)(QMdiArea*, QPainter*);
    using QMdiArea_UpdateMicroFocus_Callback = void (*)();
    using QMdiArea_Create_Callback = void (*)();
    using QMdiArea_Destroy_Callback = void (*)();
    using QMdiArea_FocusNextChild_Callback = bool (*)();
    using QMdiArea_FocusPreviousChild_Callback = bool (*)();
    using QMdiArea_Sender_Callback = QObject* (*)();
    using QMdiArea_SenderSignalIndex_Callback = int (*)();
    using QMdiArea_Receivers_Callback = int (*)(const QMdiArea*, const char*);
    using QMdiArea_IsSignalConnected_Callback = bool (*)(const QMdiArea*, QMetaMethod*);
    using QMdiArea_GetDecodedMetricF_Callback = double (*)(const QMdiArea*, int, int);

  protected:
    // Instance callback storage
    QMdiArea_Metacall_Callback qmdiarea_metacall_callback = nullptr;
    QMdiArea_SizeHint_Callback qmdiarea_sizehint_callback = nullptr;
    QMdiArea_MinimumSizeHint_Callback qmdiarea_minimumsizehint_callback = nullptr;
    QMdiArea_SetupViewport_Callback qmdiarea_setupviewport_callback = nullptr;
    QMdiArea_Event_Callback qmdiarea_event_callback = nullptr;
    QMdiArea_EventFilter_Callback qmdiarea_eventfilter_callback = nullptr;
    QMdiArea_PaintEvent_Callback qmdiarea_paintevent_callback = nullptr;
    QMdiArea_ChildEvent_Callback qmdiarea_childevent_callback = nullptr;
    QMdiArea_ResizeEvent_Callback qmdiarea_resizeevent_callback = nullptr;
    QMdiArea_TimerEvent_Callback qmdiarea_timerevent_callback = nullptr;
    QMdiArea_ShowEvent_Callback qmdiarea_showevent_callback = nullptr;
    QMdiArea_ViewportEvent_Callback qmdiarea_viewportevent_callback = nullptr;
    QMdiArea_ScrollContentsBy_Callback qmdiarea_scrollcontentsby_callback = nullptr;
    QMdiArea_MousePressEvent_Callback qmdiarea_mousepressevent_callback = nullptr;
    QMdiArea_MouseReleaseEvent_Callback qmdiarea_mousereleaseevent_callback = nullptr;
    QMdiArea_MouseDoubleClickEvent_Callback qmdiarea_mousedoubleclickevent_callback = nullptr;
    QMdiArea_MouseMoveEvent_Callback qmdiarea_mousemoveevent_callback = nullptr;
    QMdiArea_WheelEvent_Callback qmdiarea_wheelevent_callback = nullptr;
    QMdiArea_ContextMenuEvent_Callback qmdiarea_contextmenuevent_callback = nullptr;
    QMdiArea_DragEnterEvent_Callback qmdiarea_dragenterevent_callback = nullptr;
    QMdiArea_DragMoveEvent_Callback qmdiarea_dragmoveevent_callback = nullptr;
    QMdiArea_DragLeaveEvent_Callback qmdiarea_dragleaveevent_callback = nullptr;
    QMdiArea_DropEvent_Callback qmdiarea_dropevent_callback = nullptr;
    QMdiArea_KeyPressEvent_Callback qmdiarea_keypressevent_callback = nullptr;
    QMdiArea_ViewportSizeHint_Callback qmdiarea_viewportsizehint_callback = nullptr;
    QMdiArea_ChangeEvent_Callback qmdiarea_changeevent_callback = nullptr;
    QMdiArea_InitStyleOption_Callback qmdiarea_initstyleoption_callback = nullptr;
    QMdiArea_DevType_Callback qmdiarea_devtype_callback = nullptr;
    QMdiArea_SetVisible_Callback qmdiarea_setvisible_callback = nullptr;
    QMdiArea_HeightForWidth_Callback qmdiarea_heightforwidth_callback = nullptr;
    QMdiArea_HasHeightForWidth_Callback qmdiarea_hasheightforwidth_callback = nullptr;
    QMdiArea_PaintEngine_Callback qmdiarea_paintengine_callback = nullptr;
    QMdiArea_KeyReleaseEvent_Callback qmdiarea_keyreleaseevent_callback = nullptr;
    QMdiArea_FocusInEvent_Callback qmdiarea_focusinevent_callback = nullptr;
    QMdiArea_FocusOutEvent_Callback qmdiarea_focusoutevent_callback = nullptr;
    QMdiArea_EnterEvent_Callback qmdiarea_enterevent_callback = nullptr;
    QMdiArea_LeaveEvent_Callback qmdiarea_leaveevent_callback = nullptr;
    QMdiArea_MoveEvent_Callback qmdiarea_moveevent_callback = nullptr;
    QMdiArea_CloseEvent_Callback qmdiarea_closeevent_callback = nullptr;
    QMdiArea_TabletEvent_Callback qmdiarea_tabletevent_callback = nullptr;
    QMdiArea_ActionEvent_Callback qmdiarea_actionevent_callback = nullptr;
    QMdiArea_HideEvent_Callback qmdiarea_hideevent_callback = nullptr;
    QMdiArea_NativeEvent_Callback qmdiarea_nativeevent_callback = nullptr;
    QMdiArea_Metric_Callback qmdiarea_metric_callback = nullptr;
    QMdiArea_InitPainter_Callback qmdiarea_initpainter_callback = nullptr;
    QMdiArea_Redirected_Callback qmdiarea_redirected_callback = nullptr;
    QMdiArea_SharedPainter_Callback qmdiarea_sharedpainter_callback = nullptr;
    QMdiArea_InputMethodEvent_Callback qmdiarea_inputmethodevent_callback = nullptr;
    QMdiArea_InputMethodQuery_Callback qmdiarea_inputmethodquery_callback = nullptr;
    QMdiArea_FocusNextPrevChild_Callback qmdiarea_focusnextprevchild_callback = nullptr;
    QMdiArea_CustomEvent_Callback qmdiarea_customevent_callback = nullptr;
    QMdiArea_ConnectNotify_Callback qmdiarea_connectnotify_callback = nullptr;
    QMdiArea_DisconnectNotify_Callback qmdiarea_disconnectnotify_callback = nullptr;
    QMdiArea_SetViewportMargins_Callback qmdiarea_setviewportmargins_callback = nullptr;
    QMdiArea_ViewportMargins_Callback qmdiarea_viewportmargins_callback = nullptr;
    QMdiArea_DrawFrame_Callback qmdiarea_drawframe_callback = nullptr;
    QMdiArea_UpdateMicroFocus_Callback qmdiarea_updatemicrofocus_callback = nullptr;
    QMdiArea_Create_Callback qmdiarea_create_callback = nullptr;
    QMdiArea_Destroy_Callback qmdiarea_destroy_callback = nullptr;
    QMdiArea_FocusNextChild_Callback qmdiarea_focusnextchild_callback = nullptr;
    QMdiArea_FocusPreviousChild_Callback qmdiarea_focuspreviouschild_callback = nullptr;
    QMdiArea_Sender_Callback qmdiarea_sender_callback = nullptr;
    QMdiArea_SenderSignalIndex_Callback qmdiarea_sendersignalindex_callback = nullptr;
    QMdiArea_Receivers_Callback qmdiarea_receivers_callback = nullptr;
    QMdiArea_IsSignalConnected_Callback qmdiarea_issignalconnected_callback = nullptr;
    QMdiArea_GetDecodedMetricF_Callback qmdiarea_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qmdiarea_metacall_isbase = false;
    mutable bool qmdiarea_sizehint_isbase = false;
    mutable bool qmdiarea_minimumsizehint_isbase = false;
    mutable bool qmdiarea_setupviewport_isbase = false;
    mutable bool qmdiarea_event_isbase = false;
    mutable bool qmdiarea_eventfilter_isbase = false;
    mutable bool qmdiarea_paintevent_isbase = false;
    mutable bool qmdiarea_childevent_isbase = false;
    mutable bool qmdiarea_resizeevent_isbase = false;
    mutable bool qmdiarea_timerevent_isbase = false;
    mutable bool qmdiarea_showevent_isbase = false;
    mutable bool qmdiarea_viewportevent_isbase = false;
    mutable bool qmdiarea_scrollcontentsby_isbase = false;
    mutable bool qmdiarea_mousepressevent_isbase = false;
    mutable bool qmdiarea_mousereleaseevent_isbase = false;
    mutable bool qmdiarea_mousedoubleclickevent_isbase = false;
    mutable bool qmdiarea_mousemoveevent_isbase = false;
    mutable bool qmdiarea_wheelevent_isbase = false;
    mutable bool qmdiarea_contextmenuevent_isbase = false;
    mutable bool qmdiarea_dragenterevent_isbase = false;
    mutable bool qmdiarea_dragmoveevent_isbase = false;
    mutable bool qmdiarea_dragleaveevent_isbase = false;
    mutable bool qmdiarea_dropevent_isbase = false;
    mutable bool qmdiarea_keypressevent_isbase = false;
    mutable bool qmdiarea_viewportsizehint_isbase = false;
    mutable bool qmdiarea_changeevent_isbase = false;
    mutable bool qmdiarea_initstyleoption_isbase = false;
    mutable bool qmdiarea_devtype_isbase = false;
    mutable bool qmdiarea_setvisible_isbase = false;
    mutable bool qmdiarea_heightforwidth_isbase = false;
    mutable bool qmdiarea_hasheightforwidth_isbase = false;
    mutable bool qmdiarea_paintengine_isbase = false;
    mutable bool qmdiarea_keyreleaseevent_isbase = false;
    mutable bool qmdiarea_focusinevent_isbase = false;
    mutable bool qmdiarea_focusoutevent_isbase = false;
    mutable bool qmdiarea_enterevent_isbase = false;
    mutable bool qmdiarea_leaveevent_isbase = false;
    mutable bool qmdiarea_moveevent_isbase = false;
    mutable bool qmdiarea_closeevent_isbase = false;
    mutable bool qmdiarea_tabletevent_isbase = false;
    mutable bool qmdiarea_actionevent_isbase = false;
    mutable bool qmdiarea_hideevent_isbase = false;
    mutable bool qmdiarea_nativeevent_isbase = false;
    mutable bool qmdiarea_metric_isbase = false;
    mutable bool qmdiarea_initpainter_isbase = false;
    mutable bool qmdiarea_redirected_isbase = false;
    mutable bool qmdiarea_sharedpainter_isbase = false;
    mutable bool qmdiarea_inputmethodevent_isbase = false;
    mutable bool qmdiarea_inputmethodquery_isbase = false;
    mutable bool qmdiarea_focusnextprevchild_isbase = false;
    mutable bool qmdiarea_customevent_isbase = false;
    mutable bool qmdiarea_connectnotify_isbase = false;
    mutable bool qmdiarea_disconnectnotify_isbase = false;
    mutable bool qmdiarea_setviewportmargins_isbase = false;
    mutable bool qmdiarea_viewportmargins_isbase = false;
    mutable bool qmdiarea_drawframe_isbase = false;
    mutable bool qmdiarea_updatemicrofocus_isbase = false;
    mutable bool qmdiarea_create_isbase = false;
    mutable bool qmdiarea_destroy_isbase = false;
    mutable bool qmdiarea_focusnextchild_isbase = false;
    mutable bool qmdiarea_focuspreviouschild_isbase = false;
    mutable bool qmdiarea_sender_isbase = false;
    mutable bool qmdiarea_sendersignalindex_isbase = false;
    mutable bool qmdiarea_receivers_isbase = false;
    mutable bool qmdiarea_issignalconnected_isbase = false;
    mutable bool qmdiarea_getdecodedmetricf_isbase = false;

  public:
    VirtualQMdiArea(QWidget* parent) : QMdiArea(parent) {};
    VirtualQMdiArea() : QMdiArea() {};

    ~VirtualQMdiArea() {
        qmdiarea_metacall_callback = nullptr;
        qmdiarea_sizehint_callback = nullptr;
        qmdiarea_minimumsizehint_callback = nullptr;
        qmdiarea_setupviewport_callback = nullptr;
        qmdiarea_event_callback = nullptr;
        qmdiarea_eventfilter_callback = nullptr;
        qmdiarea_paintevent_callback = nullptr;
        qmdiarea_childevent_callback = nullptr;
        qmdiarea_resizeevent_callback = nullptr;
        qmdiarea_timerevent_callback = nullptr;
        qmdiarea_showevent_callback = nullptr;
        qmdiarea_viewportevent_callback = nullptr;
        qmdiarea_scrollcontentsby_callback = nullptr;
        qmdiarea_mousepressevent_callback = nullptr;
        qmdiarea_mousereleaseevent_callback = nullptr;
        qmdiarea_mousedoubleclickevent_callback = nullptr;
        qmdiarea_mousemoveevent_callback = nullptr;
        qmdiarea_wheelevent_callback = nullptr;
        qmdiarea_contextmenuevent_callback = nullptr;
        qmdiarea_dragenterevent_callback = nullptr;
        qmdiarea_dragmoveevent_callback = nullptr;
        qmdiarea_dragleaveevent_callback = nullptr;
        qmdiarea_dropevent_callback = nullptr;
        qmdiarea_keypressevent_callback = nullptr;
        qmdiarea_viewportsizehint_callback = nullptr;
        qmdiarea_changeevent_callback = nullptr;
        qmdiarea_initstyleoption_callback = nullptr;
        qmdiarea_devtype_callback = nullptr;
        qmdiarea_setvisible_callback = nullptr;
        qmdiarea_heightforwidth_callback = nullptr;
        qmdiarea_hasheightforwidth_callback = nullptr;
        qmdiarea_paintengine_callback = nullptr;
        qmdiarea_keyreleaseevent_callback = nullptr;
        qmdiarea_focusinevent_callback = nullptr;
        qmdiarea_focusoutevent_callback = nullptr;
        qmdiarea_enterevent_callback = nullptr;
        qmdiarea_leaveevent_callback = nullptr;
        qmdiarea_moveevent_callback = nullptr;
        qmdiarea_closeevent_callback = nullptr;
        qmdiarea_tabletevent_callback = nullptr;
        qmdiarea_actionevent_callback = nullptr;
        qmdiarea_hideevent_callback = nullptr;
        qmdiarea_nativeevent_callback = nullptr;
        qmdiarea_metric_callback = nullptr;
        qmdiarea_initpainter_callback = nullptr;
        qmdiarea_redirected_callback = nullptr;
        qmdiarea_sharedpainter_callback = nullptr;
        qmdiarea_inputmethodevent_callback = nullptr;
        qmdiarea_inputmethodquery_callback = nullptr;
        qmdiarea_focusnextprevchild_callback = nullptr;
        qmdiarea_customevent_callback = nullptr;
        qmdiarea_connectnotify_callback = nullptr;
        qmdiarea_disconnectnotify_callback = nullptr;
        qmdiarea_setviewportmargins_callback = nullptr;
        qmdiarea_viewportmargins_callback = nullptr;
        qmdiarea_drawframe_callback = nullptr;
        qmdiarea_updatemicrofocus_callback = nullptr;
        qmdiarea_create_callback = nullptr;
        qmdiarea_destroy_callback = nullptr;
        qmdiarea_focusnextchild_callback = nullptr;
        qmdiarea_focuspreviouschild_callback = nullptr;
        qmdiarea_sender_callback = nullptr;
        qmdiarea_sendersignalindex_callback = nullptr;
        qmdiarea_receivers_callback = nullptr;
        qmdiarea_issignalconnected_callback = nullptr;
        qmdiarea_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQMdiArea_Metacall_Callback(QMdiArea_Metacall_Callback cb) { qmdiarea_metacall_callback = cb; }
    inline void setQMdiArea_SizeHint_Callback(QMdiArea_SizeHint_Callback cb) { qmdiarea_sizehint_callback = cb; }
    inline void setQMdiArea_MinimumSizeHint_Callback(QMdiArea_MinimumSizeHint_Callback cb) { qmdiarea_minimumsizehint_callback = cb; }
    inline void setQMdiArea_SetupViewport_Callback(QMdiArea_SetupViewport_Callback cb) { qmdiarea_setupviewport_callback = cb; }
    inline void setQMdiArea_Event_Callback(QMdiArea_Event_Callback cb) { qmdiarea_event_callback = cb; }
    inline void setQMdiArea_EventFilter_Callback(QMdiArea_EventFilter_Callback cb) { qmdiarea_eventfilter_callback = cb; }
    inline void setQMdiArea_PaintEvent_Callback(QMdiArea_PaintEvent_Callback cb) { qmdiarea_paintevent_callback = cb; }
    inline void setQMdiArea_ChildEvent_Callback(QMdiArea_ChildEvent_Callback cb) { qmdiarea_childevent_callback = cb; }
    inline void setQMdiArea_ResizeEvent_Callback(QMdiArea_ResizeEvent_Callback cb) { qmdiarea_resizeevent_callback = cb; }
    inline void setQMdiArea_TimerEvent_Callback(QMdiArea_TimerEvent_Callback cb) { qmdiarea_timerevent_callback = cb; }
    inline void setQMdiArea_ShowEvent_Callback(QMdiArea_ShowEvent_Callback cb) { qmdiarea_showevent_callback = cb; }
    inline void setQMdiArea_ViewportEvent_Callback(QMdiArea_ViewportEvent_Callback cb) { qmdiarea_viewportevent_callback = cb; }
    inline void setQMdiArea_ScrollContentsBy_Callback(QMdiArea_ScrollContentsBy_Callback cb) { qmdiarea_scrollcontentsby_callback = cb; }
    inline void setQMdiArea_MousePressEvent_Callback(QMdiArea_MousePressEvent_Callback cb) { qmdiarea_mousepressevent_callback = cb; }
    inline void setQMdiArea_MouseReleaseEvent_Callback(QMdiArea_MouseReleaseEvent_Callback cb) { qmdiarea_mousereleaseevent_callback = cb; }
    inline void setQMdiArea_MouseDoubleClickEvent_Callback(QMdiArea_MouseDoubleClickEvent_Callback cb) { qmdiarea_mousedoubleclickevent_callback = cb; }
    inline void setQMdiArea_MouseMoveEvent_Callback(QMdiArea_MouseMoveEvent_Callback cb) { qmdiarea_mousemoveevent_callback = cb; }
    inline void setQMdiArea_WheelEvent_Callback(QMdiArea_WheelEvent_Callback cb) { qmdiarea_wheelevent_callback = cb; }
    inline void setQMdiArea_ContextMenuEvent_Callback(QMdiArea_ContextMenuEvent_Callback cb) { qmdiarea_contextmenuevent_callback = cb; }
    inline void setQMdiArea_DragEnterEvent_Callback(QMdiArea_DragEnterEvent_Callback cb) { qmdiarea_dragenterevent_callback = cb; }
    inline void setQMdiArea_DragMoveEvent_Callback(QMdiArea_DragMoveEvent_Callback cb) { qmdiarea_dragmoveevent_callback = cb; }
    inline void setQMdiArea_DragLeaveEvent_Callback(QMdiArea_DragLeaveEvent_Callback cb) { qmdiarea_dragleaveevent_callback = cb; }
    inline void setQMdiArea_DropEvent_Callback(QMdiArea_DropEvent_Callback cb) { qmdiarea_dropevent_callback = cb; }
    inline void setQMdiArea_KeyPressEvent_Callback(QMdiArea_KeyPressEvent_Callback cb) { qmdiarea_keypressevent_callback = cb; }
    inline void setQMdiArea_ViewportSizeHint_Callback(QMdiArea_ViewportSizeHint_Callback cb) { qmdiarea_viewportsizehint_callback = cb; }
    inline void setQMdiArea_ChangeEvent_Callback(QMdiArea_ChangeEvent_Callback cb) { qmdiarea_changeevent_callback = cb; }
    inline void setQMdiArea_InitStyleOption_Callback(QMdiArea_InitStyleOption_Callback cb) { qmdiarea_initstyleoption_callback = cb; }
    inline void setQMdiArea_DevType_Callback(QMdiArea_DevType_Callback cb) { qmdiarea_devtype_callback = cb; }
    inline void setQMdiArea_SetVisible_Callback(QMdiArea_SetVisible_Callback cb) { qmdiarea_setvisible_callback = cb; }
    inline void setQMdiArea_HeightForWidth_Callback(QMdiArea_HeightForWidth_Callback cb) { qmdiarea_heightforwidth_callback = cb; }
    inline void setQMdiArea_HasHeightForWidth_Callback(QMdiArea_HasHeightForWidth_Callback cb) { qmdiarea_hasheightforwidth_callback = cb; }
    inline void setQMdiArea_PaintEngine_Callback(QMdiArea_PaintEngine_Callback cb) { qmdiarea_paintengine_callback = cb; }
    inline void setQMdiArea_KeyReleaseEvent_Callback(QMdiArea_KeyReleaseEvent_Callback cb) { qmdiarea_keyreleaseevent_callback = cb; }
    inline void setQMdiArea_FocusInEvent_Callback(QMdiArea_FocusInEvent_Callback cb) { qmdiarea_focusinevent_callback = cb; }
    inline void setQMdiArea_FocusOutEvent_Callback(QMdiArea_FocusOutEvent_Callback cb) { qmdiarea_focusoutevent_callback = cb; }
    inline void setQMdiArea_EnterEvent_Callback(QMdiArea_EnterEvent_Callback cb) { qmdiarea_enterevent_callback = cb; }
    inline void setQMdiArea_LeaveEvent_Callback(QMdiArea_LeaveEvent_Callback cb) { qmdiarea_leaveevent_callback = cb; }
    inline void setQMdiArea_MoveEvent_Callback(QMdiArea_MoveEvent_Callback cb) { qmdiarea_moveevent_callback = cb; }
    inline void setQMdiArea_CloseEvent_Callback(QMdiArea_CloseEvent_Callback cb) { qmdiarea_closeevent_callback = cb; }
    inline void setQMdiArea_TabletEvent_Callback(QMdiArea_TabletEvent_Callback cb) { qmdiarea_tabletevent_callback = cb; }
    inline void setQMdiArea_ActionEvent_Callback(QMdiArea_ActionEvent_Callback cb) { qmdiarea_actionevent_callback = cb; }
    inline void setQMdiArea_HideEvent_Callback(QMdiArea_HideEvent_Callback cb) { qmdiarea_hideevent_callback = cb; }
    inline void setQMdiArea_NativeEvent_Callback(QMdiArea_NativeEvent_Callback cb) { qmdiarea_nativeevent_callback = cb; }
    inline void setQMdiArea_Metric_Callback(QMdiArea_Metric_Callback cb) { qmdiarea_metric_callback = cb; }
    inline void setQMdiArea_InitPainter_Callback(QMdiArea_InitPainter_Callback cb) { qmdiarea_initpainter_callback = cb; }
    inline void setQMdiArea_Redirected_Callback(QMdiArea_Redirected_Callback cb) { qmdiarea_redirected_callback = cb; }
    inline void setQMdiArea_SharedPainter_Callback(QMdiArea_SharedPainter_Callback cb) { qmdiarea_sharedpainter_callback = cb; }
    inline void setQMdiArea_InputMethodEvent_Callback(QMdiArea_InputMethodEvent_Callback cb) { qmdiarea_inputmethodevent_callback = cb; }
    inline void setQMdiArea_InputMethodQuery_Callback(QMdiArea_InputMethodQuery_Callback cb) { qmdiarea_inputmethodquery_callback = cb; }
    inline void setQMdiArea_FocusNextPrevChild_Callback(QMdiArea_FocusNextPrevChild_Callback cb) { qmdiarea_focusnextprevchild_callback = cb; }
    inline void setQMdiArea_CustomEvent_Callback(QMdiArea_CustomEvent_Callback cb) { qmdiarea_customevent_callback = cb; }
    inline void setQMdiArea_ConnectNotify_Callback(QMdiArea_ConnectNotify_Callback cb) { qmdiarea_connectnotify_callback = cb; }
    inline void setQMdiArea_DisconnectNotify_Callback(QMdiArea_DisconnectNotify_Callback cb) { qmdiarea_disconnectnotify_callback = cb; }
    inline void setQMdiArea_SetViewportMargins_Callback(QMdiArea_SetViewportMargins_Callback cb) { qmdiarea_setviewportmargins_callback = cb; }
    inline void setQMdiArea_ViewportMargins_Callback(QMdiArea_ViewportMargins_Callback cb) { qmdiarea_viewportmargins_callback = cb; }
    inline void setQMdiArea_DrawFrame_Callback(QMdiArea_DrawFrame_Callback cb) { qmdiarea_drawframe_callback = cb; }
    inline void setQMdiArea_UpdateMicroFocus_Callback(QMdiArea_UpdateMicroFocus_Callback cb) { qmdiarea_updatemicrofocus_callback = cb; }
    inline void setQMdiArea_Create_Callback(QMdiArea_Create_Callback cb) { qmdiarea_create_callback = cb; }
    inline void setQMdiArea_Destroy_Callback(QMdiArea_Destroy_Callback cb) { qmdiarea_destroy_callback = cb; }
    inline void setQMdiArea_FocusNextChild_Callback(QMdiArea_FocusNextChild_Callback cb) { qmdiarea_focusnextchild_callback = cb; }
    inline void setQMdiArea_FocusPreviousChild_Callback(QMdiArea_FocusPreviousChild_Callback cb) { qmdiarea_focuspreviouschild_callback = cb; }
    inline void setQMdiArea_Sender_Callback(QMdiArea_Sender_Callback cb) { qmdiarea_sender_callback = cb; }
    inline void setQMdiArea_SenderSignalIndex_Callback(QMdiArea_SenderSignalIndex_Callback cb) { qmdiarea_sendersignalindex_callback = cb; }
    inline void setQMdiArea_Receivers_Callback(QMdiArea_Receivers_Callback cb) { qmdiarea_receivers_callback = cb; }
    inline void setQMdiArea_IsSignalConnected_Callback(QMdiArea_IsSignalConnected_Callback cb) { qmdiarea_issignalconnected_callback = cb; }
    inline void setQMdiArea_GetDecodedMetricF_Callback(QMdiArea_GetDecodedMetricF_Callback cb) { qmdiarea_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQMdiArea_Metacall_IsBase(bool value) const { qmdiarea_metacall_isbase = value; }
    inline void setQMdiArea_SizeHint_IsBase(bool value) const { qmdiarea_sizehint_isbase = value; }
    inline void setQMdiArea_MinimumSizeHint_IsBase(bool value) const { qmdiarea_minimumsizehint_isbase = value; }
    inline void setQMdiArea_SetupViewport_IsBase(bool value) const { qmdiarea_setupviewport_isbase = value; }
    inline void setQMdiArea_Event_IsBase(bool value) const { qmdiarea_event_isbase = value; }
    inline void setQMdiArea_EventFilter_IsBase(bool value) const { qmdiarea_eventfilter_isbase = value; }
    inline void setQMdiArea_PaintEvent_IsBase(bool value) const { qmdiarea_paintevent_isbase = value; }
    inline void setQMdiArea_ChildEvent_IsBase(bool value) const { qmdiarea_childevent_isbase = value; }
    inline void setQMdiArea_ResizeEvent_IsBase(bool value) const { qmdiarea_resizeevent_isbase = value; }
    inline void setQMdiArea_TimerEvent_IsBase(bool value) const { qmdiarea_timerevent_isbase = value; }
    inline void setQMdiArea_ShowEvent_IsBase(bool value) const { qmdiarea_showevent_isbase = value; }
    inline void setQMdiArea_ViewportEvent_IsBase(bool value) const { qmdiarea_viewportevent_isbase = value; }
    inline void setQMdiArea_ScrollContentsBy_IsBase(bool value) const { qmdiarea_scrollcontentsby_isbase = value; }
    inline void setQMdiArea_MousePressEvent_IsBase(bool value) const { qmdiarea_mousepressevent_isbase = value; }
    inline void setQMdiArea_MouseReleaseEvent_IsBase(bool value) const { qmdiarea_mousereleaseevent_isbase = value; }
    inline void setQMdiArea_MouseDoubleClickEvent_IsBase(bool value) const { qmdiarea_mousedoubleclickevent_isbase = value; }
    inline void setQMdiArea_MouseMoveEvent_IsBase(bool value) const { qmdiarea_mousemoveevent_isbase = value; }
    inline void setQMdiArea_WheelEvent_IsBase(bool value) const { qmdiarea_wheelevent_isbase = value; }
    inline void setQMdiArea_ContextMenuEvent_IsBase(bool value) const { qmdiarea_contextmenuevent_isbase = value; }
    inline void setQMdiArea_DragEnterEvent_IsBase(bool value) const { qmdiarea_dragenterevent_isbase = value; }
    inline void setQMdiArea_DragMoveEvent_IsBase(bool value) const { qmdiarea_dragmoveevent_isbase = value; }
    inline void setQMdiArea_DragLeaveEvent_IsBase(bool value) const { qmdiarea_dragleaveevent_isbase = value; }
    inline void setQMdiArea_DropEvent_IsBase(bool value) const { qmdiarea_dropevent_isbase = value; }
    inline void setQMdiArea_KeyPressEvent_IsBase(bool value) const { qmdiarea_keypressevent_isbase = value; }
    inline void setQMdiArea_ViewportSizeHint_IsBase(bool value) const { qmdiarea_viewportsizehint_isbase = value; }
    inline void setQMdiArea_ChangeEvent_IsBase(bool value) const { qmdiarea_changeevent_isbase = value; }
    inline void setQMdiArea_InitStyleOption_IsBase(bool value) const { qmdiarea_initstyleoption_isbase = value; }
    inline void setQMdiArea_DevType_IsBase(bool value) const { qmdiarea_devtype_isbase = value; }
    inline void setQMdiArea_SetVisible_IsBase(bool value) const { qmdiarea_setvisible_isbase = value; }
    inline void setQMdiArea_HeightForWidth_IsBase(bool value) const { qmdiarea_heightforwidth_isbase = value; }
    inline void setQMdiArea_HasHeightForWidth_IsBase(bool value) const { qmdiarea_hasheightforwidth_isbase = value; }
    inline void setQMdiArea_PaintEngine_IsBase(bool value) const { qmdiarea_paintengine_isbase = value; }
    inline void setQMdiArea_KeyReleaseEvent_IsBase(bool value) const { qmdiarea_keyreleaseevent_isbase = value; }
    inline void setQMdiArea_FocusInEvent_IsBase(bool value) const { qmdiarea_focusinevent_isbase = value; }
    inline void setQMdiArea_FocusOutEvent_IsBase(bool value) const { qmdiarea_focusoutevent_isbase = value; }
    inline void setQMdiArea_EnterEvent_IsBase(bool value) const { qmdiarea_enterevent_isbase = value; }
    inline void setQMdiArea_LeaveEvent_IsBase(bool value) const { qmdiarea_leaveevent_isbase = value; }
    inline void setQMdiArea_MoveEvent_IsBase(bool value) const { qmdiarea_moveevent_isbase = value; }
    inline void setQMdiArea_CloseEvent_IsBase(bool value) const { qmdiarea_closeevent_isbase = value; }
    inline void setQMdiArea_TabletEvent_IsBase(bool value) const { qmdiarea_tabletevent_isbase = value; }
    inline void setQMdiArea_ActionEvent_IsBase(bool value) const { qmdiarea_actionevent_isbase = value; }
    inline void setQMdiArea_HideEvent_IsBase(bool value) const { qmdiarea_hideevent_isbase = value; }
    inline void setQMdiArea_NativeEvent_IsBase(bool value) const { qmdiarea_nativeevent_isbase = value; }
    inline void setQMdiArea_Metric_IsBase(bool value) const { qmdiarea_metric_isbase = value; }
    inline void setQMdiArea_InitPainter_IsBase(bool value) const { qmdiarea_initpainter_isbase = value; }
    inline void setQMdiArea_Redirected_IsBase(bool value) const { qmdiarea_redirected_isbase = value; }
    inline void setQMdiArea_SharedPainter_IsBase(bool value) const { qmdiarea_sharedpainter_isbase = value; }
    inline void setQMdiArea_InputMethodEvent_IsBase(bool value) const { qmdiarea_inputmethodevent_isbase = value; }
    inline void setQMdiArea_InputMethodQuery_IsBase(bool value) const { qmdiarea_inputmethodquery_isbase = value; }
    inline void setQMdiArea_FocusNextPrevChild_IsBase(bool value) const { qmdiarea_focusnextprevchild_isbase = value; }
    inline void setQMdiArea_CustomEvent_IsBase(bool value) const { qmdiarea_customevent_isbase = value; }
    inline void setQMdiArea_ConnectNotify_IsBase(bool value) const { qmdiarea_connectnotify_isbase = value; }
    inline void setQMdiArea_DisconnectNotify_IsBase(bool value) const { qmdiarea_disconnectnotify_isbase = value; }
    inline void setQMdiArea_SetViewportMargins_IsBase(bool value) const { qmdiarea_setviewportmargins_isbase = value; }
    inline void setQMdiArea_ViewportMargins_IsBase(bool value) const { qmdiarea_viewportmargins_isbase = value; }
    inline void setQMdiArea_DrawFrame_IsBase(bool value) const { qmdiarea_drawframe_isbase = value; }
    inline void setQMdiArea_UpdateMicroFocus_IsBase(bool value) const { qmdiarea_updatemicrofocus_isbase = value; }
    inline void setQMdiArea_Create_IsBase(bool value) const { qmdiarea_create_isbase = value; }
    inline void setQMdiArea_Destroy_IsBase(bool value) const { qmdiarea_destroy_isbase = value; }
    inline void setQMdiArea_FocusNextChild_IsBase(bool value) const { qmdiarea_focusnextchild_isbase = value; }
    inline void setQMdiArea_FocusPreviousChild_IsBase(bool value) const { qmdiarea_focuspreviouschild_isbase = value; }
    inline void setQMdiArea_Sender_IsBase(bool value) const { qmdiarea_sender_isbase = value; }
    inline void setQMdiArea_SenderSignalIndex_IsBase(bool value) const { qmdiarea_sendersignalindex_isbase = value; }
    inline void setQMdiArea_Receivers_IsBase(bool value) const { qmdiarea_receivers_isbase = value; }
    inline void setQMdiArea_IsSignalConnected_IsBase(bool value) const { qmdiarea_issignalconnected_isbase = value; }
    inline void setQMdiArea_GetDecodedMetricF_IsBase(bool value) const { qmdiarea_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmdiarea_metacall_isbase) {
            qmdiarea_metacall_isbase = false;
            return QMdiArea::qt_metacall(param1, param2, param3);
        } else if (qmdiarea_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qmdiarea_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QMdiArea::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qmdiarea_sizehint_isbase) {
            qmdiarea_sizehint_isbase = false;
            return QMdiArea::sizeHint();
        } else if (qmdiarea_sizehint_callback != nullptr) {
            QSize* callback_ret = qmdiarea_sizehint_callback();
            return *callback_ret;
        } else {
            return QMdiArea::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qmdiarea_minimumsizehint_isbase) {
            qmdiarea_minimumsizehint_isbase = false;
            return QMdiArea::minimumSizeHint();
        } else if (qmdiarea_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qmdiarea_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QMdiArea::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qmdiarea_setupviewport_isbase) {
            qmdiarea_setupviewport_isbase = false;
            QMdiArea::setupViewport(viewport);
        } else if (qmdiarea_setupviewport_callback != nullptr) {
            QWidget* cbval1 = viewport;

            qmdiarea_setupviewport_callback(this, cbval1);
        } else {
            QMdiArea::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmdiarea_event_isbase) {
            qmdiarea_event_isbase = false;
            return QMdiArea::event(event);
        } else if (qmdiarea_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qmdiarea_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMdiArea::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qmdiarea_eventfilter_isbase) {
            qmdiarea_eventfilter_isbase = false;
            return QMdiArea::eventFilter(object, event);
        } else if (qmdiarea_eventfilter_callback != nullptr) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = qmdiarea_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QMdiArea::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* paintEvent) override {
        if (qmdiarea_paintevent_isbase) {
            qmdiarea_paintevent_isbase = false;
            QMdiArea::paintEvent(paintEvent);
        } else if (qmdiarea_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = paintEvent;

            qmdiarea_paintevent_callback(this, cbval1);
        } else {
            QMdiArea::paintEvent(paintEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* childEvent) override {
        if (qmdiarea_childevent_isbase) {
            qmdiarea_childevent_isbase = false;
            QMdiArea::childEvent(childEvent);
        } else if (qmdiarea_childevent_callback != nullptr) {
            QChildEvent* cbval1 = childEvent;

            qmdiarea_childevent_callback(this, cbval1);
        } else {
            QMdiArea::childEvent(childEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* resizeEvent) override {
        if (qmdiarea_resizeevent_isbase) {
            qmdiarea_resizeevent_isbase = false;
            QMdiArea::resizeEvent(resizeEvent);
        } else if (qmdiarea_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = resizeEvent;

            qmdiarea_resizeevent_callback(this, cbval1);
        } else {
            QMdiArea::resizeEvent(resizeEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* timerEvent) override {
        if (qmdiarea_timerevent_isbase) {
            qmdiarea_timerevent_isbase = false;
            QMdiArea::timerEvent(timerEvent);
        } else if (qmdiarea_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = timerEvent;

            qmdiarea_timerevent_callback(this, cbval1);
        } else {
            QMdiArea::timerEvent(timerEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* showEvent) override {
        if (qmdiarea_showevent_isbase) {
            qmdiarea_showevent_isbase = false;
            QMdiArea::showEvent(showEvent);
        } else if (qmdiarea_showevent_callback != nullptr) {
            QShowEvent* cbval1 = showEvent;

            qmdiarea_showevent_callback(this, cbval1);
        } else {
            QMdiArea::showEvent(showEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qmdiarea_viewportevent_isbase) {
            qmdiarea_viewportevent_isbase = false;
            return QMdiArea::viewportEvent(event);
        } else if (qmdiarea_viewportevent_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qmdiarea_viewportevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMdiArea::viewportEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qmdiarea_scrollcontentsby_isbase) {
            qmdiarea_scrollcontentsby_isbase = false;
            QMdiArea::scrollContentsBy(dx, dy);
        } else if (qmdiarea_scrollcontentsby_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            qmdiarea_scrollcontentsby_callback(this, cbval1, cbval2);
        } else {
            QMdiArea::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qmdiarea_mousepressevent_isbase) {
            qmdiarea_mousepressevent_isbase = false;
            QMdiArea::mousePressEvent(param1);
        } else if (qmdiarea_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qmdiarea_mousepressevent_callback(this, cbval1);
        } else {
            QMdiArea::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qmdiarea_mousereleaseevent_isbase) {
            qmdiarea_mousereleaseevent_isbase = false;
            QMdiArea::mouseReleaseEvent(param1);
        } else if (qmdiarea_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qmdiarea_mousereleaseevent_callback(this, cbval1);
        } else {
            QMdiArea::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qmdiarea_mousedoubleclickevent_isbase) {
            qmdiarea_mousedoubleclickevent_isbase = false;
            QMdiArea::mouseDoubleClickEvent(param1);
        } else if (qmdiarea_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qmdiarea_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QMdiArea::mouseDoubleClickEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qmdiarea_mousemoveevent_isbase) {
            qmdiarea_mousemoveevent_isbase = false;
            QMdiArea::mouseMoveEvent(param1);
        } else if (qmdiarea_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qmdiarea_mousemoveevent_callback(this, cbval1);
        } else {
            QMdiArea::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qmdiarea_wheelevent_isbase) {
            qmdiarea_wheelevent_isbase = false;
            QMdiArea::wheelEvent(param1);
        } else if (qmdiarea_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = param1;

            qmdiarea_wheelevent_callback(this, cbval1);
        } else {
            QMdiArea::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qmdiarea_contextmenuevent_isbase) {
            qmdiarea_contextmenuevent_isbase = false;
            QMdiArea::contextMenuEvent(param1);
        } else if (qmdiarea_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            qmdiarea_contextmenuevent_callback(this, cbval1);
        } else {
            QMdiArea::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qmdiarea_dragenterevent_isbase) {
            qmdiarea_dragenterevent_isbase = false;
            QMdiArea::dragEnterEvent(param1);
        } else if (qmdiarea_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = param1;

            qmdiarea_dragenterevent_callback(this, cbval1);
        } else {
            QMdiArea::dragEnterEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (qmdiarea_dragmoveevent_isbase) {
            qmdiarea_dragmoveevent_isbase = false;
            QMdiArea::dragMoveEvent(param1);
        } else if (qmdiarea_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = param1;

            qmdiarea_dragmoveevent_callback(this, cbval1);
        } else {
            QMdiArea::dragMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (qmdiarea_dragleaveevent_isbase) {
            qmdiarea_dragleaveevent_isbase = false;
            QMdiArea::dragLeaveEvent(param1);
        } else if (qmdiarea_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = param1;

            qmdiarea_dragleaveevent_callback(this, cbval1);
        } else {
            QMdiArea::dragLeaveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qmdiarea_dropevent_isbase) {
            qmdiarea_dropevent_isbase = false;
            QMdiArea::dropEvent(param1);
        } else if (qmdiarea_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = param1;

            qmdiarea_dropevent_callback(this, cbval1);
        } else {
            QMdiArea::dropEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qmdiarea_keypressevent_isbase) {
            qmdiarea_keypressevent_isbase = false;
            QMdiArea::keyPressEvent(param1);
        } else if (qmdiarea_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qmdiarea_keypressevent_callback(this, cbval1);
        } else {
            QMdiArea::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qmdiarea_viewportsizehint_isbase) {
            qmdiarea_viewportsizehint_isbase = false;
            return QMdiArea::viewportSizeHint();
        } else if (qmdiarea_viewportsizehint_callback != nullptr) {
            QSize* callback_ret = qmdiarea_viewportsizehint_callback();
            return *callback_ret;
        } else {
            return QMdiArea::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qmdiarea_changeevent_isbase) {
            qmdiarea_changeevent_isbase = false;
            QMdiArea::changeEvent(param1);
        } else if (qmdiarea_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qmdiarea_changeevent_callback(this, cbval1);
        } else {
            QMdiArea::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qmdiarea_initstyleoption_isbase) {
            qmdiarea_initstyleoption_isbase = false;
            QMdiArea::initStyleOption(option);
        } else if (qmdiarea_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            qmdiarea_initstyleoption_callback(this, cbval1);
        } else {
            QMdiArea::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qmdiarea_devtype_isbase) {
            qmdiarea_devtype_isbase = false;
            return QMdiArea::devType();
        } else if (qmdiarea_devtype_callback != nullptr) {
            int callback_ret = qmdiarea_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QMdiArea::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qmdiarea_setvisible_isbase) {
            qmdiarea_setvisible_isbase = false;
            QMdiArea::setVisible(visible);
        } else if (qmdiarea_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qmdiarea_setvisible_callback(this, cbval1);
        } else {
            QMdiArea::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qmdiarea_heightforwidth_isbase) {
            qmdiarea_heightforwidth_isbase = false;
            return QMdiArea::heightForWidth(param1);
        } else if (qmdiarea_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qmdiarea_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QMdiArea::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qmdiarea_hasheightforwidth_isbase) {
            qmdiarea_hasheightforwidth_isbase = false;
            return QMdiArea::hasHeightForWidth();
        } else if (qmdiarea_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qmdiarea_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QMdiArea::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qmdiarea_paintengine_isbase) {
            qmdiarea_paintengine_isbase = false;
            return QMdiArea::paintEngine();
        } else if (qmdiarea_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qmdiarea_paintengine_callback();
            return callback_ret;
        } else {
            return QMdiArea::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qmdiarea_keyreleaseevent_isbase) {
            qmdiarea_keyreleaseevent_isbase = false;
            QMdiArea::keyReleaseEvent(event);
        } else if (qmdiarea_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qmdiarea_keyreleaseevent_callback(this, cbval1);
        } else {
            QMdiArea::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qmdiarea_focusinevent_isbase) {
            qmdiarea_focusinevent_isbase = false;
            QMdiArea::focusInEvent(event);
        } else if (qmdiarea_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qmdiarea_focusinevent_callback(this, cbval1);
        } else {
            QMdiArea::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qmdiarea_focusoutevent_isbase) {
            qmdiarea_focusoutevent_isbase = false;
            QMdiArea::focusOutEvent(event);
        } else if (qmdiarea_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qmdiarea_focusoutevent_callback(this, cbval1);
        } else {
            QMdiArea::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qmdiarea_enterevent_isbase) {
            qmdiarea_enterevent_isbase = false;
            QMdiArea::enterEvent(event);
        } else if (qmdiarea_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qmdiarea_enterevent_callback(this, cbval1);
        } else {
            QMdiArea::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qmdiarea_leaveevent_isbase) {
            qmdiarea_leaveevent_isbase = false;
            QMdiArea::leaveEvent(event);
        } else if (qmdiarea_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qmdiarea_leaveevent_callback(this, cbval1);
        } else {
            QMdiArea::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qmdiarea_moveevent_isbase) {
            qmdiarea_moveevent_isbase = false;
            QMdiArea::moveEvent(event);
        } else if (qmdiarea_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qmdiarea_moveevent_callback(this, cbval1);
        } else {
            QMdiArea::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qmdiarea_closeevent_isbase) {
            qmdiarea_closeevent_isbase = false;
            QMdiArea::closeEvent(event);
        } else if (qmdiarea_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qmdiarea_closeevent_callback(this, cbval1);
        } else {
            QMdiArea::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qmdiarea_tabletevent_isbase) {
            qmdiarea_tabletevent_isbase = false;
            QMdiArea::tabletEvent(event);
        } else if (qmdiarea_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qmdiarea_tabletevent_callback(this, cbval1);
        } else {
            QMdiArea::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qmdiarea_actionevent_isbase) {
            qmdiarea_actionevent_isbase = false;
            QMdiArea::actionEvent(event);
        } else if (qmdiarea_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qmdiarea_actionevent_callback(this, cbval1);
        } else {
            QMdiArea::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qmdiarea_hideevent_isbase) {
            qmdiarea_hideevent_isbase = false;
            QMdiArea::hideEvent(event);
        } else if (qmdiarea_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qmdiarea_hideevent_callback(this, cbval1);
        } else {
            QMdiArea::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qmdiarea_nativeevent_isbase) {
            qmdiarea_nativeevent_isbase = false;
            return QMdiArea::nativeEvent(eventType, message, result);
        } else if (qmdiarea_nativeevent_callback != nullptr) {
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

            bool callback_ret = qmdiarea_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QMdiArea::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qmdiarea_metric_isbase) {
            qmdiarea_metric_isbase = false;
            return QMdiArea::metric(param1);
        } else if (qmdiarea_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qmdiarea_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QMdiArea::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qmdiarea_initpainter_isbase) {
            qmdiarea_initpainter_isbase = false;
            QMdiArea::initPainter(painter);
        } else if (qmdiarea_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qmdiarea_initpainter_callback(this, cbval1);
        } else {
            QMdiArea::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qmdiarea_redirected_isbase) {
            qmdiarea_redirected_isbase = false;
            return QMdiArea::redirected(offset);
        } else if (qmdiarea_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qmdiarea_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMdiArea::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qmdiarea_sharedpainter_isbase) {
            qmdiarea_sharedpainter_isbase = false;
            return QMdiArea::sharedPainter();
        } else if (qmdiarea_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qmdiarea_sharedpainter_callback();
            return callback_ret;
        } else {
            return QMdiArea::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qmdiarea_inputmethodevent_isbase) {
            qmdiarea_inputmethodevent_isbase = false;
            QMdiArea::inputMethodEvent(param1);
        } else if (qmdiarea_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qmdiarea_inputmethodevent_callback(this, cbval1);
        } else {
            QMdiArea::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qmdiarea_inputmethodquery_isbase) {
            qmdiarea_inputmethodquery_isbase = false;
            return QMdiArea::inputMethodQuery(param1);
        } else if (qmdiarea_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qmdiarea_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QMdiArea::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qmdiarea_focusnextprevchild_isbase) {
            qmdiarea_focusnextprevchild_isbase = false;
            return QMdiArea::focusNextPrevChild(next);
        } else if (qmdiarea_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qmdiarea_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMdiArea::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmdiarea_customevent_isbase) {
            qmdiarea_customevent_isbase = false;
            QMdiArea::customEvent(event);
        } else if (qmdiarea_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qmdiarea_customevent_callback(this, cbval1);
        } else {
            QMdiArea::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmdiarea_connectnotify_isbase) {
            qmdiarea_connectnotify_isbase = false;
            QMdiArea::connectNotify(signal);
        } else if (qmdiarea_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qmdiarea_connectnotify_callback(this, cbval1);
        } else {
            QMdiArea::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmdiarea_disconnectnotify_isbase) {
            qmdiarea_disconnectnotify_isbase = false;
            QMdiArea::disconnectNotify(signal);
        } else if (qmdiarea_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qmdiarea_disconnectnotify_callback(this, cbval1);
        } else {
            QMdiArea::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qmdiarea_setviewportmargins_isbase) {
            qmdiarea_setviewportmargins_isbase = false;
            QMdiArea::setViewportMargins(left, top, right, bottom);
        } else if (qmdiarea_setviewportmargins_callback != nullptr) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            qmdiarea_setviewportmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QMdiArea::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qmdiarea_viewportmargins_isbase) {
            qmdiarea_viewportmargins_isbase = false;
            return QMdiArea::viewportMargins();
        } else if (qmdiarea_viewportmargins_callback != nullptr) {
            QMargins* callback_ret = qmdiarea_viewportmargins_callback();
            return *callback_ret;
        } else {
            return QMdiArea::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qmdiarea_drawframe_isbase) {
            qmdiarea_drawframe_isbase = false;
            QMdiArea::drawFrame(param1);
        } else if (qmdiarea_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            qmdiarea_drawframe_callback(this, cbval1);
        } else {
            QMdiArea::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qmdiarea_updatemicrofocus_isbase) {
            qmdiarea_updatemicrofocus_isbase = false;
            QMdiArea::updateMicroFocus();
        } else if (qmdiarea_updatemicrofocus_callback != nullptr) {
            qmdiarea_updatemicrofocus_callback();
        } else {
            QMdiArea::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qmdiarea_create_isbase) {
            qmdiarea_create_isbase = false;
            QMdiArea::create();
        } else if (qmdiarea_create_callback != nullptr) {
            qmdiarea_create_callback();
        } else {
            QMdiArea::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qmdiarea_destroy_isbase) {
            qmdiarea_destroy_isbase = false;
            QMdiArea::destroy();
        } else if (qmdiarea_destroy_callback != nullptr) {
            qmdiarea_destroy_callback();
        } else {
            QMdiArea::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qmdiarea_focusnextchild_isbase) {
            qmdiarea_focusnextchild_isbase = false;
            return QMdiArea::focusNextChild();
        } else if (qmdiarea_focusnextchild_callback != nullptr) {
            bool callback_ret = qmdiarea_focusnextchild_callback();
            return callback_ret;
        } else {
            return QMdiArea::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qmdiarea_focuspreviouschild_isbase) {
            qmdiarea_focuspreviouschild_isbase = false;
            return QMdiArea::focusPreviousChild();
        } else if (qmdiarea_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qmdiarea_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QMdiArea::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qmdiarea_sender_isbase) {
            qmdiarea_sender_isbase = false;
            return QMdiArea::sender();
        } else if (qmdiarea_sender_callback != nullptr) {
            QObject* callback_ret = qmdiarea_sender_callback();
            return callback_ret;
        } else {
            return QMdiArea::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qmdiarea_sendersignalindex_isbase) {
            qmdiarea_sendersignalindex_isbase = false;
            return QMdiArea::senderSignalIndex();
        } else if (qmdiarea_sendersignalindex_callback != nullptr) {
            int callback_ret = qmdiarea_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QMdiArea::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qmdiarea_receivers_isbase) {
            qmdiarea_receivers_isbase = false;
            return QMdiArea::receivers(signal);
        } else if (qmdiarea_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qmdiarea_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QMdiArea::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qmdiarea_issignalconnected_isbase) {
            qmdiarea_issignalconnected_isbase = false;
            return QMdiArea::isSignalConnected(signal);
        } else if (qmdiarea_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qmdiarea_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMdiArea::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qmdiarea_getdecodedmetricf_isbase) {
            qmdiarea_getdecodedmetricf_isbase = false;
            return QMdiArea::getDecodedMetricF(metricA, metricB);
        } else if (qmdiarea_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qmdiarea_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QMdiArea::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void QMdiArea_SetupViewport(QMdiArea* self, QWidget* viewport);
    friend void QMdiArea_QBaseSetupViewport(QMdiArea* self, QWidget* viewport);
    friend bool QMdiArea_Event(QMdiArea* self, QEvent* event);
    friend bool QMdiArea_QBaseEvent(QMdiArea* self, QEvent* event);
    friend bool QMdiArea_EventFilter(QMdiArea* self, QObject* object, QEvent* event);
    friend bool QMdiArea_QBaseEventFilter(QMdiArea* self, QObject* object, QEvent* event);
    friend void QMdiArea_PaintEvent(QMdiArea* self, QPaintEvent* paintEvent);
    friend void QMdiArea_QBasePaintEvent(QMdiArea* self, QPaintEvent* paintEvent);
    friend void QMdiArea_ChildEvent(QMdiArea* self, QChildEvent* childEvent);
    friend void QMdiArea_QBaseChildEvent(QMdiArea* self, QChildEvent* childEvent);
    friend void QMdiArea_ResizeEvent(QMdiArea* self, QResizeEvent* resizeEvent);
    friend void QMdiArea_QBaseResizeEvent(QMdiArea* self, QResizeEvent* resizeEvent);
    friend void QMdiArea_TimerEvent(QMdiArea* self, QTimerEvent* timerEvent);
    friend void QMdiArea_QBaseTimerEvent(QMdiArea* self, QTimerEvent* timerEvent);
    friend void QMdiArea_ShowEvent(QMdiArea* self, QShowEvent* showEvent);
    friend void QMdiArea_QBaseShowEvent(QMdiArea* self, QShowEvent* showEvent);
    friend bool QMdiArea_ViewportEvent(QMdiArea* self, QEvent* event);
    friend bool QMdiArea_QBaseViewportEvent(QMdiArea* self, QEvent* event);
    friend void QMdiArea_ScrollContentsBy(QMdiArea* self, int dx, int dy);
    friend void QMdiArea_QBaseScrollContentsBy(QMdiArea* self, int dx, int dy);
    friend void QMdiArea_MousePressEvent(QMdiArea* self, QMouseEvent* param1);
    friend void QMdiArea_QBaseMousePressEvent(QMdiArea* self, QMouseEvent* param1);
    friend void QMdiArea_MouseReleaseEvent(QMdiArea* self, QMouseEvent* param1);
    friend void QMdiArea_QBaseMouseReleaseEvent(QMdiArea* self, QMouseEvent* param1);
    friend void QMdiArea_MouseDoubleClickEvent(QMdiArea* self, QMouseEvent* param1);
    friend void QMdiArea_QBaseMouseDoubleClickEvent(QMdiArea* self, QMouseEvent* param1);
    friend void QMdiArea_MouseMoveEvent(QMdiArea* self, QMouseEvent* param1);
    friend void QMdiArea_QBaseMouseMoveEvent(QMdiArea* self, QMouseEvent* param1);
    friend void QMdiArea_WheelEvent(QMdiArea* self, QWheelEvent* param1);
    friend void QMdiArea_QBaseWheelEvent(QMdiArea* self, QWheelEvent* param1);
    friend void QMdiArea_ContextMenuEvent(QMdiArea* self, QContextMenuEvent* param1);
    friend void QMdiArea_QBaseContextMenuEvent(QMdiArea* self, QContextMenuEvent* param1);
    friend void QMdiArea_DragEnterEvent(QMdiArea* self, QDragEnterEvent* param1);
    friend void QMdiArea_QBaseDragEnterEvent(QMdiArea* self, QDragEnterEvent* param1);
    friend void QMdiArea_DragMoveEvent(QMdiArea* self, QDragMoveEvent* param1);
    friend void QMdiArea_QBaseDragMoveEvent(QMdiArea* self, QDragMoveEvent* param1);
    friend void QMdiArea_DragLeaveEvent(QMdiArea* self, QDragLeaveEvent* param1);
    friend void QMdiArea_QBaseDragLeaveEvent(QMdiArea* self, QDragLeaveEvent* param1);
    friend void QMdiArea_DropEvent(QMdiArea* self, QDropEvent* param1);
    friend void QMdiArea_QBaseDropEvent(QMdiArea* self, QDropEvent* param1);
    friend void QMdiArea_KeyPressEvent(QMdiArea* self, QKeyEvent* param1);
    friend void QMdiArea_QBaseKeyPressEvent(QMdiArea* self, QKeyEvent* param1);
    friend QSize* QMdiArea_ViewportSizeHint(const QMdiArea* self);
    friend QSize* QMdiArea_QBaseViewportSizeHint(const QMdiArea* self);
    friend void QMdiArea_ChangeEvent(QMdiArea* self, QEvent* param1);
    friend void QMdiArea_QBaseChangeEvent(QMdiArea* self, QEvent* param1);
    friend void QMdiArea_InitStyleOption(const QMdiArea* self, QStyleOptionFrame* option);
    friend void QMdiArea_QBaseInitStyleOption(const QMdiArea* self, QStyleOptionFrame* option);
    friend void QMdiArea_KeyReleaseEvent(QMdiArea* self, QKeyEvent* event);
    friend void QMdiArea_QBaseKeyReleaseEvent(QMdiArea* self, QKeyEvent* event);
    friend void QMdiArea_FocusInEvent(QMdiArea* self, QFocusEvent* event);
    friend void QMdiArea_QBaseFocusInEvent(QMdiArea* self, QFocusEvent* event);
    friend void QMdiArea_FocusOutEvent(QMdiArea* self, QFocusEvent* event);
    friend void QMdiArea_QBaseFocusOutEvent(QMdiArea* self, QFocusEvent* event);
    friend void QMdiArea_EnterEvent(QMdiArea* self, QEnterEvent* event);
    friend void QMdiArea_QBaseEnterEvent(QMdiArea* self, QEnterEvent* event);
    friend void QMdiArea_LeaveEvent(QMdiArea* self, QEvent* event);
    friend void QMdiArea_QBaseLeaveEvent(QMdiArea* self, QEvent* event);
    friend void QMdiArea_MoveEvent(QMdiArea* self, QMoveEvent* event);
    friend void QMdiArea_QBaseMoveEvent(QMdiArea* self, QMoveEvent* event);
    friend void QMdiArea_CloseEvent(QMdiArea* self, QCloseEvent* event);
    friend void QMdiArea_QBaseCloseEvent(QMdiArea* self, QCloseEvent* event);
    friend void QMdiArea_TabletEvent(QMdiArea* self, QTabletEvent* event);
    friend void QMdiArea_QBaseTabletEvent(QMdiArea* self, QTabletEvent* event);
    friend void QMdiArea_ActionEvent(QMdiArea* self, QActionEvent* event);
    friend void QMdiArea_QBaseActionEvent(QMdiArea* self, QActionEvent* event);
    friend void QMdiArea_HideEvent(QMdiArea* self, QHideEvent* event);
    friend void QMdiArea_QBaseHideEvent(QMdiArea* self, QHideEvent* event);
    friend bool QMdiArea_NativeEvent(QMdiArea* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QMdiArea_QBaseNativeEvent(QMdiArea* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QMdiArea_Metric(const QMdiArea* self, int param1);
    friend int QMdiArea_QBaseMetric(const QMdiArea* self, int param1);
    friend void QMdiArea_InitPainter(const QMdiArea* self, QPainter* painter);
    friend void QMdiArea_QBaseInitPainter(const QMdiArea* self, QPainter* painter);
    friend QPaintDevice* QMdiArea_Redirected(const QMdiArea* self, QPoint* offset);
    friend QPaintDevice* QMdiArea_QBaseRedirected(const QMdiArea* self, QPoint* offset);
    friend QPainter* QMdiArea_SharedPainter(const QMdiArea* self);
    friend QPainter* QMdiArea_QBaseSharedPainter(const QMdiArea* self);
    friend void QMdiArea_InputMethodEvent(QMdiArea* self, QInputMethodEvent* param1);
    friend void QMdiArea_QBaseInputMethodEvent(QMdiArea* self, QInputMethodEvent* param1);
    friend bool QMdiArea_FocusNextPrevChild(QMdiArea* self, bool next);
    friend bool QMdiArea_QBaseFocusNextPrevChild(QMdiArea* self, bool next);
    friend void QMdiArea_CustomEvent(QMdiArea* self, QEvent* event);
    friend void QMdiArea_QBaseCustomEvent(QMdiArea* self, QEvent* event);
    friend void QMdiArea_ConnectNotify(QMdiArea* self, const QMetaMethod* signal);
    friend void QMdiArea_QBaseConnectNotify(QMdiArea* self, const QMetaMethod* signal);
    friend void QMdiArea_DisconnectNotify(QMdiArea* self, const QMetaMethod* signal);
    friend void QMdiArea_QBaseDisconnectNotify(QMdiArea* self, const QMetaMethod* signal);
    friend void QMdiArea_SetViewportMargins(QMdiArea* self, int left, int top, int right, int bottom);
    friend void QMdiArea_QBaseSetViewportMargins(QMdiArea* self, int left, int top, int right, int bottom);
    friend QMargins* QMdiArea_ViewportMargins(const QMdiArea* self);
    friend QMargins* QMdiArea_QBaseViewportMargins(const QMdiArea* self);
    friend void QMdiArea_DrawFrame(QMdiArea* self, QPainter* param1);
    friend void QMdiArea_QBaseDrawFrame(QMdiArea* self, QPainter* param1);
    friend void QMdiArea_UpdateMicroFocus(QMdiArea* self);
    friend void QMdiArea_QBaseUpdateMicroFocus(QMdiArea* self);
    friend void QMdiArea_Create(QMdiArea* self);
    friend void QMdiArea_QBaseCreate(QMdiArea* self);
    friend void QMdiArea_Destroy(QMdiArea* self);
    friend void QMdiArea_QBaseDestroy(QMdiArea* self);
    friend bool QMdiArea_FocusNextChild(QMdiArea* self);
    friend bool QMdiArea_QBaseFocusNextChild(QMdiArea* self);
    friend bool QMdiArea_FocusPreviousChild(QMdiArea* self);
    friend bool QMdiArea_QBaseFocusPreviousChild(QMdiArea* self);
    friend QObject* QMdiArea_Sender(const QMdiArea* self);
    friend QObject* QMdiArea_QBaseSender(const QMdiArea* self);
    friend int QMdiArea_SenderSignalIndex(const QMdiArea* self);
    friend int QMdiArea_QBaseSenderSignalIndex(const QMdiArea* self);
    friend int QMdiArea_Receivers(const QMdiArea* self, const char* signal);
    friend int QMdiArea_QBaseReceivers(const QMdiArea* self, const char* signal);
    friend bool QMdiArea_IsSignalConnected(const QMdiArea* self, const QMetaMethod* signal);
    friend bool QMdiArea_QBaseIsSignalConnected(const QMdiArea* self, const QMetaMethod* signal);
    friend double QMdiArea_GetDecodedMetricF(const QMdiArea* self, int metricA, int metricB);
    friend double QMdiArea_QBaseGetDecodedMetricF(const QMdiArea* self, int metricA, int metricB);
};

#endif
