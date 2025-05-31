#pragma once
#ifndef SRCC_LIBVIRTUALQABSTRACTSCROLLAREA_H
#define SRCC_LIBVIRTUALQABSTRACTSCROLLAREA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractScrollArea so that we can call protected methods
class VirtualQAbstractScrollArea final : public QAbstractScrollArea {

  public:
    // Virtual class boolean flag
    bool isVirtualQAbstractScrollArea = true;

    // Virtual class public types (including callbacks)
    using QAbstractScrollArea_Metacall_Callback = int (*)(QAbstractScrollArea*, int, int, void**);
    using QAbstractScrollArea_MinimumSizeHint_Callback = QSize* (*)();
    using QAbstractScrollArea_SizeHint_Callback = QSize* (*)();
    using QAbstractScrollArea_SetupViewport_Callback = void (*)(QAbstractScrollArea*, QWidget*);
    using QAbstractScrollArea_EventFilter_Callback = bool (*)(QAbstractScrollArea*, QObject*, QEvent*);
    using QAbstractScrollArea_Event_Callback = bool (*)(QAbstractScrollArea*, QEvent*);
    using QAbstractScrollArea_ViewportEvent_Callback = bool (*)(QAbstractScrollArea*, QEvent*);
    using QAbstractScrollArea_ResizeEvent_Callback = void (*)(QAbstractScrollArea*, QResizeEvent*);
    using QAbstractScrollArea_PaintEvent_Callback = void (*)(QAbstractScrollArea*, QPaintEvent*);
    using QAbstractScrollArea_MousePressEvent_Callback = void (*)(QAbstractScrollArea*, QMouseEvent*);
    using QAbstractScrollArea_MouseReleaseEvent_Callback = void (*)(QAbstractScrollArea*, QMouseEvent*);
    using QAbstractScrollArea_MouseDoubleClickEvent_Callback = void (*)(QAbstractScrollArea*, QMouseEvent*);
    using QAbstractScrollArea_MouseMoveEvent_Callback = void (*)(QAbstractScrollArea*, QMouseEvent*);
    using QAbstractScrollArea_WheelEvent_Callback = void (*)(QAbstractScrollArea*, QWheelEvent*);
    using QAbstractScrollArea_ContextMenuEvent_Callback = void (*)(QAbstractScrollArea*, QContextMenuEvent*);
    using QAbstractScrollArea_DragEnterEvent_Callback = void (*)(QAbstractScrollArea*, QDragEnterEvent*);
    using QAbstractScrollArea_DragMoveEvent_Callback = void (*)(QAbstractScrollArea*, QDragMoveEvent*);
    using QAbstractScrollArea_DragLeaveEvent_Callback = void (*)(QAbstractScrollArea*, QDragLeaveEvent*);
    using QAbstractScrollArea_DropEvent_Callback = void (*)(QAbstractScrollArea*, QDropEvent*);
    using QAbstractScrollArea_KeyPressEvent_Callback = void (*)(QAbstractScrollArea*, QKeyEvent*);
    using QAbstractScrollArea_ScrollContentsBy_Callback = void (*)(QAbstractScrollArea*, int, int);
    using QAbstractScrollArea_ViewportSizeHint_Callback = QSize* (*)();
    using QAbstractScrollArea_ChangeEvent_Callback = void (*)(QAbstractScrollArea*, QEvent*);
    using QAbstractScrollArea_InitStyleOption_Callback = void (*)(const QAbstractScrollArea*, QStyleOptionFrame*);
    using QAbstractScrollArea_DevType_Callback = int (*)();
    using QAbstractScrollArea_SetVisible_Callback = void (*)(QAbstractScrollArea*, bool);
    using QAbstractScrollArea_HeightForWidth_Callback = int (*)(const QAbstractScrollArea*, int);
    using QAbstractScrollArea_HasHeightForWidth_Callback = bool (*)();
    using QAbstractScrollArea_PaintEngine_Callback = QPaintEngine* (*)();
    using QAbstractScrollArea_KeyReleaseEvent_Callback = void (*)(QAbstractScrollArea*, QKeyEvent*);
    using QAbstractScrollArea_FocusInEvent_Callback = void (*)(QAbstractScrollArea*, QFocusEvent*);
    using QAbstractScrollArea_FocusOutEvent_Callback = void (*)(QAbstractScrollArea*, QFocusEvent*);
    using QAbstractScrollArea_EnterEvent_Callback = void (*)(QAbstractScrollArea*, QEnterEvent*);
    using QAbstractScrollArea_LeaveEvent_Callback = void (*)(QAbstractScrollArea*, QEvent*);
    using QAbstractScrollArea_MoveEvent_Callback = void (*)(QAbstractScrollArea*, QMoveEvent*);
    using QAbstractScrollArea_CloseEvent_Callback = void (*)(QAbstractScrollArea*, QCloseEvent*);
    using QAbstractScrollArea_TabletEvent_Callback = void (*)(QAbstractScrollArea*, QTabletEvent*);
    using QAbstractScrollArea_ActionEvent_Callback = void (*)(QAbstractScrollArea*, QActionEvent*);
    using QAbstractScrollArea_ShowEvent_Callback = void (*)(QAbstractScrollArea*, QShowEvent*);
    using QAbstractScrollArea_HideEvent_Callback = void (*)(QAbstractScrollArea*, QHideEvent*);
    using QAbstractScrollArea_NativeEvent_Callback = bool (*)(QAbstractScrollArea*, libqt_string, void*, intptr_t*);
    using QAbstractScrollArea_Metric_Callback = int (*)(const QAbstractScrollArea*, int);
    using QAbstractScrollArea_InitPainter_Callback = void (*)(const QAbstractScrollArea*, QPainter*);
    using QAbstractScrollArea_Redirected_Callback = QPaintDevice* (*)(const QAbstractScrollArea*, QPoint*);
    using QAbstractScrollArea_SharedPainter_Callback = QPainter* (*)();
    using QAbstractScrollArea_InputMethodEvent_Callback = void (*)(QAbstractScrollArea*, QInputMethodEvent*);
    using QAbstractScrollArea_InputMethodQuery_Callback = QVariant* (*)(const QAbstractScrollArea*, int);
    using QAbstractScrollArea_FocusNextPrevChild_Callback = bool (*)(QAbstractScrollArea*, bool);
    using QAbstractScrollArea_TimerEvent_Callback = void (*)(QAbstractScrollArea*, QTimerEvent*);
    using QAbstractScrollArea_ChildEvent_Callback = void (*)(QAbstractScrollArea*, QChildEvent*);
    using QAbstractScrollArea_CustomEvent_Callback = void (*)(QAbstractScrollArea*, QEvent*);
    using QAbstractScrollArea_ConnectNotify_Callback = void (*)(QAbstractScrollArea*, QMetaMethod*);
    using QAbstractScrollArea_DisconnectNotify_Callback = void (*)(QAbstractScrollArea*, QMetaMethod*);
    using QAbstractScrollArea_SetViewportMargins_Callback = void (*)(QAbstractScrollArea*, int, int, int, int);
    using QAbstractScrollArea_SetViewportMarginsWithMargins_Callback = void (*)(QAbstractScrollArea*, QMargins*);
    using QAbstractScrollArea_ViewportMargins_Callback = QMargins* (*)();
    using QAbstractScrollArea_DrawFrame_Callback = void (*)(QAbstractScrollArea*, QPainter*);
    using QAbstractScrollArea_UpdateMicroFocus_Callback = void (*)();
    using QAbstractScrollArea_Create_Callback = void (*)();
    using QAbstractScrollArea_Destroy_Callback = void (*)();
    using QAbstractScrollArea_FocusNextChild_Callback = bool (*)();
    using QAbstractScrollArea_FocusPreviousChild_Callback = bool (*)();
    using QAbstractScrollArea_Sender_Callback = QObject* (*)();
    using QAbstractScrollArea_SenderSignalIndex_Callback = int (*)();
    using QAbstractScrollArea_Receivers_Callback = int (*)(const QAbstractScrollArea*, const char*);
    using QAbstractScrollArea_IsSignalConnected_Callback = bool (*)(const QAbstractScrollArea*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAbstractScrollArea_Metacall_Callback qabstractscrollarea_metacall_callback = nullptr;
    QAbstractScrollArea_MinimumSizeHint_Callback qabstractscrollarea_minimumsizehint_callback = nullptr;
    QAbstractScrollArea_SizeHint_Callback qabstractscrollarea_sizehint_callback = nullptr;
    QAbstractScrollArea_SetupViewport_Callback qabstractscrollarea_setupviewport_callback = nullptr;
    QAbstractScrollArea_EventFilter_Callback qabstractscrollarea_eventfilter_callback = nullptr;
    QAbstractScrollArea_Event_Callback qabstractscrollarea_event_callback = nullptr;
    QAbstractScrollArea_ViewportEvent_Callback qabstractscrollarea_viewportevent_callback = nullptr;
    QAbstractScrollArea_ResizeEvent_Callback qabstractscrollarea_resizeevent_callback = nullptr;
    QAbstractScrollArea_PaintEvent_Callback qabstractscrollarea_paintevent_callback = nullptr;
    QAbstractScrollArea_MousePressEvent_Callback qabstractscrollarea_mousepressevent_callback = nullptr;
    QAbstractScrollArea_MouseReleaseEvent_Callback qabstractscrollarea_mousereleaseevent_callback = nullptr;
    QAbstractScrollArea_MouseDoubleClickEvent_Callback qabstractscrollarea_mousedoubleclickevent_callback = nullptr;
    QAbstractScrollArea_MouseMoveEvent_Callback qabstractscrollarea_mousemoveevent_callback = nullptr;
    QAbstractScrollArea_WheelEvent_Callback qabstractscrollarea_wheelevent_callback = nullptr;
    QAbstractScrollArea_ContextMenuEvent_Callback qabstractscrollarea_contextmenuevent_callback = nullptr;
    QAbstractScrollArea_DragEnterEvent_Callback qabstractscrollarea_dragenterevent_callback = nullptr;
    QAbstractScrollArea_DragMoveEvent_Callback qabstractscrollarea_dragmoveevent_callback = nullptr;
    QAbstractScrollArea_DragLeaveEvent_Callback qabstractscrollarea_dragleaveevent_callback = nullptr;
    QAbstractScrollArea_DropEvent_Callback qabstractscrollarea_dropevent_callback = nullptr;
    QAbstractScrollArea_KeyPressEvent_Callback qabstractscrollarea_keypressevent_callback = nullptr;
    QAbstractScrollArea_ScrollContentsBy_Callback qabstractscrollarea_scrollcontentsby_callback = nullptr;
    QAbstractScrollArea_ViewportSizeHint_Callback qabstractscrollarea_viewportsizehint_callback = nullptr;
    QAbstractScrollArea_ChangeEvent_Callback qabstractscrollarea_changeevent_callback = nullptr;
    QAbstractScrollArea_InitStyleOption_Callback qabstractscrollarea_initstyleoption_callback = nullptr;
    QAbstractScrollArea_DevType_Callback qabstractscrollarea_devtype_callback = nullptr;
    QAbstractScrollArea_SetVisible_Callback qabstractscrollarea_setvisible_callback = nullptr;
    QAbstractScrollArea_HeightForWidth_Callback qabstractscrollarea_heightforwidth_callback = nullptr;
    QAbstractScrollArea_HasHeightForWidth_Callback qabstractscrollarea_hasheightforwidth_callback = nullptr;
    QAbstractScrollArea_PaintEngine_Callback qabstractscrollarea_paintengine_callback = nullptr;
    QAbstractScrollArea_KeyReleaseEvent_Callback qabstractscrollarea_keyreleaseevent_callback = nullptr;
    QAbstractScrollArea_FocusInEvent_Callback qabstractscrollarea_focusinevent_callback = nullptr;
    QAbstractScrollArea_FocusOutEvent_Callback qabstractscrollarea_focusoutevent_callback = nullptr;
    QAbstractScrollArea_EnterEvent_Callback qabstractscrollarea_enterevent_callback = nullptr;
    QAbstractScrollArea_LeaveEvent_Callback qabstractscrollarea_leaveevent_callback = nullptr;
    QAbstractScrollArea_MoveEvent_Callback qabstractscrollarea_moveevent_callback = nullptr;
    QAbstractScrollArea_CloseEvent_Callback qabstractscrollarea_closeevent_callback = nullptr;
    QAbstractScrollArea_TabletEvent_Callback qabstractscrollarea_tabletevent_callback = nullptr;
    QAbstractScrollArea_ActionEvent_Callback qabstractscrollarea_actionevent_callback = nullptr;
    QAbstractScrollArea_ShowEvent_Callback qabstractscrollarea_showevent_callback = nullptr;
    QAbstractScrollArea_HideEvent_Callback qabstractscrollarea_hideevent_callback = nullptr;
    QAbstractScrollArea_NativeEvent_Callback qabstractscrollarea_nativeevent_callback = nullptr;
    QAbstractScrollArea_Metric_Callback qabstractscrollarea_metric_callback = nullptr;
    QAbstractScrollArea_InitPainter_Callback qabstractscrollarea_initpainter_callback = nullptr;
    QAbstractScrollArea_Redirected_Callback qabstractscrollarea_redirected_callback = nullptr;
    QAbstractScrollArea_SharedPainter_Callback qabstractscrollarea_sharedpainter_callback = nullptr;
    QAbstractScrollArea_InputMethodEvent_Callback qabstractscrollarea_inputmethodevent_callback = nullptr;
    QAbstractScrollArea_InputMethodQuery_Callback qabstractscrollarea_inputmethodquery_callback = nullptr;
    QAbstractScrollArea_FocusNextPrevChild_Callback qabstractscrollarea_focusnextprevchild_callback = nullptr;
    QAbstractScrollArea_TimerEvent_Callback qabstractscrollarea_timerevent_callback = nullptr;
    QAbstractScrollArea_ChildEvent_Callback qabstractscrollarea_childevent_callback = nullptr;
    QAbstractScrollArea_CustomEvent_Callback qabstractscrollarea_customevent_callback = nullptr;
    QAbstractScrollArea_ConnectNotify_Callback qabstractscrollarea_connectnotify_callback = nullptr;
    QAbstractScrollArea_DisconnectNotify_Callback qabstractscrollarea_disconnectnotify_callback = nullptr;
    QAbstractScrollArea_SetViewportMargins_Callback qabstractscrollarea_setviewportmargins_callback = nullptr;
    QAbstractScrollArea_SetViewportMarginsWithMargins_Callback qabstractscrollarea_setviewportmarginswithmargins_callback = nullptr;
    QAbstractScrollArea_ViewportMargins_Callback qabstractscrollarea_viewportmargins_callback = nullptr;
    QAbstractScrollArea_DrawFrame_Callback qabstractscrollarea_drawframe_callback = nullptr;
    QAbstractScrollArea_UpdateMicroFocus_Callback qabstractscrollarea_updatemicrofocus_callback = nullptr;
    QAbstractScrollArea_Create_Callback qabstractscrollarea_create_callback = nullptr;
    QAbstractScrollArea_Destroy_Callback qabstractscrollarea_destroy_callback = nullptr;
    QAbstractScrollArea_FocusNextChild_Callback qabstractscrollarea_focusnextchild_callback = nullptr;
    QAbstractScrollArea_FocusPreviousChild_Callback qabstractscrollarea_focuspreviouschild_callback = nullptr;
    QAbstractScrollArea_Sender_Callback qabstractscrollarea_sender_callback = nullptr;
    QAbstractScrollArea_SenderSignalIndex_Callback qabstractscrollarea_sendersignalindex_callback = nullptr;
    QAbstractScrollArea_Receivers_Callback qabstractscrollarea_receivers_callback = nullptr;
    QAbstractScrollArea_IsSignalConnected_Callback qabstractscrollarea_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qabstractscrollarea_metacall_isbase = false;
    mutable bool qabstractscrollarea_minimumsizehint_isbase = false;
    mutable bool qabstractscrollarea_sizehint_isbase = false;
    mutable bool qabstractscrollarea_setupviewport_isbase = false;
    mutable bool qabstractscrollarea_eventfilter_isbase = false;
    mutable bool qabstractscrollarea_event_isbase = false;
    mutable bool qabstractscrollarea_viewportevent_isbase = false;
    mutable bool qabstractscrollarea_resizeevent_isbase = false;
    mutable bool qabstractscrollarea_paintevent_isbase = false;
    mutable bool qabstractscrollarea_mousepressevent_isbase = false;
    mutable bool qabstractscrollarea_mousereleaseevent_isbase = false;
    mutable bool qabstractscrollarea_mousedoubleclickevent_isbase = false;
    mutable bool qabstractscrollarea_mousemoveevent_isbase = false;
    mutable bool qabstractscrollarea_wheelevent_isbase = false;
    mutable bool qabstractscrollarea_contextmenuevent_isbase = false;
    mutable bool qabstractscrollarea_dragenterevent_isbase = false;
    mutable bool qabstractscrollarea_dragmoveevent_isbase = false;
    mutable bool qabstractscrollarea_dragleaveevent_isbase = false;
    mutable bool qabstractscrollarea_dropevent_isbase = false;
    mutable bool qabstractscrollarea_keypressevent_isbase = false;
    mutable bool qabstractscrollarea_scrollcontentsby_isbase = false;
    mutable bool qabstractscrollarea_viewportsizehint_isbase = false;
    mutable bool qabstractscrollarea_changeevent_isbase = false;
    mutable bool qabstractscrollarea_initstyleoption_isbase = false;
    mutable bool qabstractscrollarea_devtype_isbase = false;
    mutable bool qabstractscrollarea_setvisible_isbase = false;
    mutable bool qabstractscrollarea_heightforwidth_isbase = false;
    mutable bool qabstractscrollarea_hasheightforwidth_isbase = false;
    mutable bool qabstractscrollarea_paintengine_isbase = false;
    mutable bool qabstractscrollarea_keyreleaseevent_isbase = false;
    mutable bool qabstractscrollarea_focusinevent_isbase = false;
    mutable bool qabstractscrollarea_focusoutevent_isbase = false;
    mutable bool qabstractscrollarea_enterevent_isbase = false;
    mutable bool qabstractscrollarea_leaveevent_isbase = false;
    mutable bool qabstractscrollarea_moveevent_isbase = false;
    mutable bool qabstractscrollarea_closeevent_isbase = false;
    mutable bool qabstractscrollarea_tabletevent_isbase = false;
    mutable bool qabstractscrollarea_actionevent_isbase = false;
    mutable bool qabstractscrollarea_showevent_isbase = false;
    mutable bool qabstractscrollarea_hideevent_isbase = false;
    mutable bool qabstractscrollarea_nativeevent_isbase = false;
    mutable bool qabstractscrollarea_metric_isbase = false;
    mutable bool qabstractscrollarea_initpainter_isbase = false;
    mutable bool qabstractscrollarea_redirected_isbase = false;
    mutable bool qabstractscrollarea_sharedpainter_isbase = false;
    mutable bool qabstractscrollarea_inputmethodevent_isbase = false;
    mutable bool qabstractscrollarea_inputmethodquery_isbase = false;
    mutable bool qabstractscrollarea_focusnextprevchild_isbase = false;
    mutable bool qabstractscrollarea_timerevent_isbase = false;
    mutable bool qabstractscrollarea_childevent_isbase = false;
    mutable bool qabstractscrollarea_customevent_isbase = false;
    mutable bool qabstractscrollarea_connectnotify_isbase = false;
    mutable bool qabstractscrollarea_disconnectnotify_isbase = false;
    mutable bool qabstractscrollarea_setviewportmargins_isbase = false;
    mutable bool qabstractscrollarea_setviewportmarginswithmargins_isbase = false;
    mutable bool qabstractscrollarea_viewportmargins_isbase = false;
    mutable bool qabstractscrollarea_drawframe_isbase = false;
    mutable bool qabstractscrollarea_updatemicrofocus_isbase = false;
    mutable bool qabstractscrollarea_create_isbase = false;
    mutable bool qabstractscrollarea_destroy_isbase = false;
    mutable bool qabstractscrollarea_focusnextchild_isbase = false;
    mutable bool qabstractscrollarea_focuspreviouschild_isbase = false;
    mutable bool qabstractscrollarea_sender_isbase = false;
    mutable bool qabstractscrollarea_sendersignalindex_isbase = false;
    mutable bool qabstractscrollarea_receivers_isbase = false;
    mutable bool qabstractscrollarea_issignalconnected_isbase = false;

  public:
    VirtualQAbstractScrollArea(QWidget* parent) : QAbstractScrollArea(parent){};
    VirtualQAbstractScrollArea() : QAbstractScrollArea(){};

    ~VirtualQAbstractScrollArea() {
        qabstractscrollarea_metacall_callback = nullptr;
        qabstractscrollarea_minimumsizehint_callback = nullptr;
        qabstractscrollarea_sizehint_callback = nullptr;
        qabstractscrollarea_setupviewport_callback = nullptr;
        qabstractscrollarea_eventfilter_callback = nullptr;
        qabstractscrollarea_event_callback = nullptr;
        qabstractscrollarea_viewportevent_callback = nullptr;
        qabstractscrollarea_resizeevent_callback = nullptr;
        qabstractscrollarea_paintevent_callback = nullptr;
        qabstractscrollarea_mousepressevent_callback = nullptr;
        qabstractscrollarea_mousereleaseevent_callback = nullptr;
        qabstractscrollarea_mousedoubleclickevent_callback = nullptr;
        qabstractscrollarea_mousemoveevent_callback = nullptr;
        qabstractscrollarea_wheelevent_callback = nullptr;
        qabstractscrollarea_contextmenuevent_callback = nullptr;
        qabstractscrollarea_dragenterevent_callback = nullptr;
        qabstractscrollarea_dragmoveevent_callback = nullptr;
        qabstractscrollarea_dragleaveevent_callback = nullptr;
        qabstractscrollarea_dropevent_callback = nullptr;
        qabstractscrollarea_keypressevent_callback = nullptr;
        qabstractscrollarea_scrollcontentsby_callback = nullptr;
        qabstractscrollarea_viewportsizehint_callback = nullptr;
        qabstractscrollarea_changeevent_callback = nullptr;
        qabstractscrollarea_initstyleoption_callback = nullptr;
        qabstractscrollarea_devtype_callback = nullptr;
        qabstractscrollarea_setvisible_callback = nullptr;
        qabstractscrollarea_heightforwidth_callback = nullptr;
        qabstractscrollarea_hasheightforwidth_callback = nullptr;
        qabstractscrollarea_paintengine_callback = nullptr;
        qabstractscrollarea_keyreleaseevent_callback = nullptr;
        qabstractscrollarea_focusinevent_callback = nullptr;
        qabstractscrollarea_focusoutevent_callback = nullptr;
        qabstractscrollarea_enterevent_callback = nullptr;
        qabstractscrollarea_leaveevent_callback = nullptr;
        qabstractscrollarea_moveevent_callback = nullptr;
        qabstractscrollarea_closeevent_callback = nullptr;
        qabstractscrollarea_tabletevent_callback = nullptr;
        qabstractscrollarea_actionevent_callback = nullptr;
        qabstractscrollarea_showevent_callback = nullptr;
        qabstractscrollarea_hideevent_callback = nullptr;
        qabstractscrollarea_nativeevent_callback = nullptr;
        qabstractscrollarea_metric_callback = nullptr;
        qabstractscrollarea_initpainter_callback = nullptr;
        qabstractscrollarea_redirected_callback = nullptr;
        qabstractscrollarea_sharedpainter_callback = nullptr;
        qabstractscrollarea_inputmethodevent_callback = nullptr;
        qabstractscrollarea_inputmethodquery_callback = nullptr;
        qabstractscrollarea_focusnextprevchild_callback = nullptr;
        qabstractscrollarea_timerevent_callback = nullptr;
        qabstractscrollarea_childevent_callback = nullptr;
        qabstractscrollarea_customevent_callback = nullptr;
        qabstractscrollarea_connectnotify_callback = nullptr;
        qabstractscrollarea_disconnectnotify_callback = nullptr;
        qabstractscrollarea_setviewportmargins_callback = nullptr;
        qabstractscrollarea_setviewportmarginswithmargins_callback = nullptr;
        qabstractscrollarea_viewportmargins_callback = nullptr;
        qabstractscrollarea_drawframe_callback = nullptr;
        qabstractscrollarea_updatemicrofocus_callback = nullptr;
        qabstractscrollarea_create_callback = nullptr;
        qabstractscrollarea_destroy_callback = nullptr;
        qabstractscrollarea_focusnextchild_callback = nullptr;
        qabstractscrollarea_focuspreviouschild_callback = nullptr;
        qabstractscrollarea_sender_callback = nullptr;
        qabstractscrollarea_sendersignalindex_callback = nullptr;
        qabstractscrollarea_receivers_callback = nullptr;
        qabstractscrollarea_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQAbstractScrollArea_Metacall_Callback(QAbstractScrollArea_Metacall_Callback cb) { qabstractscrollarea_metacall_callback = cb; }
    inline void setQAbstractScrollArea_MinimumSizeHint_Callback(QAbstractScrollArea_MinimumSizeHint_Callback cb) { qabstractscrollarea_minimumsizehint_callback = cb; }
    inline void setQAbstractScrollArea_SizeHint_Callback(QAbstractScrollArea_SizeHint_Callback cb) { qabstractscrollarea_sizehint_callback = cb; }
    inline void setQAbstractScrollArea_SetupViewport_Callback(QAbstractScrollArea_SetupViewport_Callback cb) { qabstractscrollarea_setupviewport_callback = cb; }
    inline void setQAbstractScrollArea_EventFilter_Callback(QAbstractScrollArea_EventFilter_Callback cb) { qabstractscrollarea_eventfilter_callback = cb; }
    inline void setQAbstractScrollArea_Event_Callback(QAbstractScrollArea_Event_Callback cb) { qabstractscrollarea_event_callback = cb; }
    inline void setQAbstractScrollArea_ViewportEvent_Callback(QAbstractScrollArea_ViewportEvent_Callback cb) { qabstractscrollarea_viewportevent_callback = cb; }
    inline void setQAbstractScrollArea_ResizeEvent_Callback(QAbstractScrollArea_ResizeEvent_Callback cb) { qabstractscrollarea_resizeevent_callback = cb; }
    inline void setQAbstractScrollArea_PaintEvent_Callback(QAbstractScrollArea_PaintEvent_Callback cb) { qabstractscrollarea_paintevent_callback = cb; }
    inline void setQAbstractScrollArea_MousePressEvent_Callback(QAbstractScrollArea_MousePressEvent_Callback cb) { qabstractscrollarea_mousepressevent_callback = cb; }
    inline void setQAbstractScrollArea_MouseReleaseEvent_Callback(QAbstractScrollArea_MouseReleaseEvent_Callback cb) { qabstractscrollarea_mousereleaseevent_callback = cb; }
    inline void setQAbstractScrollArea_MouseDoubleClickEvent_Callback(QAbstractScrollArea_MouseDoubleClickEvent_Callback cb) { qabstractscrollarea_mousedoubleclickevent_callback = cb; }
    inline void setQAbstractScrollArea_MouseMoveEvent_Callback(QAbstractScrollArea_MouseMoveEvent_Callback cb) { qabstractscrollarea_mousemoveevent_callback = cb; }
    inline void setQAbstractScrollArea_WheelEvent_Callback(QAbstractScrollArea_WheelEvent_Callback cb) { qabstractscrollarea_wheelevent_callback = cb; }
    inline void setQAbstractScrollArea_ContextMenuEvent_Callback(QAbstractScrollArea_ContextMenuEvent_Callback cb) { qabstractscrollarea_contextmenuevent_callback = cb; }
    inline void setQAbstractScrollArea_DragEnterEvent_Callback(QAbstractScrollArea_DragEnterEvent_Callback cb) { qabstractscrollarea_dragenterevent_callback = cb; }
    inline void setQAbstractScrollArea_DragMoveEvent_Callback(QAbstractScrollArea_DragMoveEvent_Callback cb) { qabstractscrollarea_dragmoveevent_callback = cb; }
    inline void setQAbstractScrollArea_DragLeaveEvent_Callback(QAbstractScrollArea_DragLeaveEvent_Callback cb) { qabstractscrollarea_dragleaveevent_callback = cb; }
    inline void setQAbstractScrollArea_DropEvent_Callback(QAbstractScrollArea_DropEvent_Callback cb) { qabstractscrollarea_dropevent_callback = cb; }
    inline void setQAbstractScrollArea_KeyPressEvent_Callback(QAbstractScrollArea_KeyPressEvent_Callback cb) { qabstractscrollarea_keypressevent_callback = cb; }
    inline void setQAbstractScrollArea_ScrollContentsBy_Callback(QAbstractScrollArea_ScrollContentsBy_Callback cb) { qabstractscrollarea_scrollcontentsby_callback = cb; }
    inline void setQAbstractScrollArea_ViewportSizeHint_Callback(QAbstractScrollArea_ViewportSizeHint_Callback cb) { qabstractscrollarea_viewportsizehint_callback = cb; }
    inline void setQAbstractScrollArea_ChangeEvent_Callback(QAbstractScrollArea_ChangeEvent_Callback cb) { qabstractscrollarea_changeevent_callback = cb; }
    inline void setQAbstractScrollArea_InitStyleOption_Callback(QAbstractScrollArea_InitStyleOption_Callback cb) { qabstractscrollarea_initstyleoption_callback = cb; }
    inline void setQAbstractScrollArea_DevType_Callback(QAbstractScrollArea_DevType_Callback cb) { qabstractscrollarea_devtype_callback = cb; }
    inline void setQAbstractScrollArea_SetVisible_Callback(QAbstractScrollArea_SetVisible_Callback cb) { qabstractscrollarea_setvisible_callback = cb; }
    inline void setQAbstractScrollArea_HeightForWidth_Callback(QAbstractScrollArea_HeightForWidth_Callback cb) { qabstractscrollarea_heightforwidth_callback = cb; }
    inline void setQAbstractScrollArea_HasHeightForWidth_Callback(QAbstractScrollArea_HasHeightForWidth_Callback cb) { qabstractscrollarea_hasheightforwidth_callback = cb; }
    inline void setQAbstractScrollArea_PaintEngine_Callback(QAbstractScrollArea_PaintEngine_Callback cb) { qabstractscrollarea_paintengine_callback = cb; }
    inline void setQAbstractScrollArea_KeyReleaseEvent_Callback(QAbstractScrollArea_KeyReleaseEvent_Callback cb) { qabstractscrollarea_keyreleaseevent_callback = cb; }
    inline void setQAbstractScrollArea_FocusInEvent_Callback(QAbstractScrollArea_FocusInEvent_Callback cb) { qabstractscrollarea_focusinevent_callback = cb; }
    inline void setQAbstractScrollArea_FocusOutEvent_Callback(QAbstractScrollArea_FocusOutEvent_Callback cb) { qabstractscrollarea_focusoutevent_callback = cb; }
    inline void setQAbstractScrollArea_EnterEvent_Callback(QAbstractScrollArea_EnterEvent_Callback cb) { qabstractscrollarea_enterevent_callback = cb; }
    inline void setQAbstractScrollArea_LeaveEvent_Callback(QAbstractScrollArea_LeaveEvent_Callback cb) { qabstractscrollarea_leaveevent_callback = cb; }
    inline void setQAbstractScrollArea_MoveEvent_Callback(QAbstractScrollArea_MoveEvent_Callback cb) { qabstractscrollarea_moveevent_callback = cb; }
    inline void setQAbstractScrollArea_CloseEvent_Callback(QAbstractScrollArea_CloseEvent_Callback cb) { qabstractscrollarea_closeevent_callback = cb; }
    inline void setQAbstractScrollArea_TabletEvent_Callback(QAbstractScrollArea_TabletEvent_Callback cb) { qabstractscrollarea_tabletevent_callback = cb; }
    inline void setQAbstractScrollArea_ActionEvent_Callback(QAbstractScrollArea_ActionEvent_Callback cb) { qabstractscrollarea_actionevent_callback = cb; }
    inline void setQAbstractScrollArea_ShowEvent_Callback(QAbstractScrollArea_ShowEvent_Callback cb) { qabstractscrollarea_showevent_callback = cb; }
    inline void setQAbstractScrollArea_HideEvent_Callback(QAbstractScrollArea_HideEvent_Callback cb) { qabstractscrollarea_hideevent_callback = cb; }
    inline void setQAbstractScrollArea_NativeEvent_Callback(QAbstractScrollArea_NativeEvent_Callback cb) { qabstractscrollarea_nativeevent_callback = cb; }
    inline void setQAbstractScrollArea_Metric_Callback(QAbstractScrollArea_Metric_Callback cb) { qabstractscrollarea_metric_callback = cb; }
    inline void setQAbstractScrollArea_InitPainter_Callback(QAbstractScrollArea_InitPainter_Callback cb) { qabstractscrollarea_initpainter_callback = cb; }
    inline void setQAbstractScrollArea_Redirected_Callback(QAbstractScrollArea_Redirected_Callback cb) { qabstractscrollarea_redirected_callback = cb; }
    inline void setQAbstractScrollArea_SharedPainter_Callback(QAbstractScrollArea_SharedPainter_Callback cb) { qabstractscrollarea_sharedpainter_callback = cb; }
    inline void setQAbstractScrollArea_InputMethodEvent_Callback(QAbstractScrollArea_InputMethodEvent_Callback cb) { qabstractscrollarea_inputmethodevent_callback = cb; }
    inline void setQAbstractScrollArea_InputMethodQuery_Callback(QAbstractScrollArea_InputMethodQuery_Callback cb) { qabstractscrollarea_inputmethodquery_callback = cb; }
    inline void setQAbstractScrollArea_FocusNextPrevChild_Callback(QAbstractScrollArea_FocusNextPrevChild_Callback cb) { qabstractscrollarea_focusnextprevchild_callback = cb; }
    inline void setQAbstractScrollArea_TimerEvent_Callback(QAbstractScrollArea_TimerEvent_Callback cb) { qabstractscrollarea_timerevent_callback = cb; }
    inline void setQAbstractScrollArea_ChildEvent_Callback(QAbstractScrollArea_ChildEvent_Callback cb) { qabstractscrollarea_childevent_callback = cb; }
    inline void setQAbstractScrollArea_CustomEvent_Callback(QAbstractScrollArea_CustomEvent_Callback cb) { qabstractscrollarea_customevent_callback = cb; }
    inline void setQAbstractScrollArea_ConnectNotify_Callback(QAbstractScrollArea_ConnectNotify_Callback cb) { qabstractscrollarea_connectnotify_callback = cb; }
    inline void setQAbstractScrollArea_DisconnectNotify_Callback(QAbstractScrollArea_DisconnectNotify_Callback cb) { qabstractscrollarea_disconnectnotify_callback = cb; }
    inline void setQAbstractScrollArea_SetViewportMargins_Callback(QAbstractScrollArea_SetViewportMargins_Callback cb) { qabstractscrollarea_setviewportmargins_callback = cb; }
    inline void setQAbstractScrollArea_SetViewportMarginsWithMargins_Callback(QAbstractScrollArea_SetViewportMarginsWithMargins_Callback cb) { qabstractscrollarea_setviewportmarginswithmargins_callback = cb; }
    inline void setQAbstractScrollArea_ViewportMargins_Callback(QAbstractScrollArea_ViewportMargins_Callback cb) { qabstractscrollarea_viewportmargins_callback = cb; }
    inline void setQAbstractScrollArea_DrawFrame_Callback(QAbstractScrollArea_DrawFrame_Callback cb) { qabstractscrollarea_drawframe_callback = cb; }
    inline void setQAbstractScrollArea_UpdateMicroFocus_Callback(QAbstractScrollArea_UpdateMicroFocus_Callback cb) { qabstractscrollarea_updatemicrofocus_callback = cb; }
    inline void setQAbstractScrollArea_Create_Callback(QAbstractScrollArea_Create_Callback cb) { qabstractscrollarea_create_callback = cb; }
    inline void setQAbstractScrollArea_Destroy_Callback(QAbstractScrollArea_Destroy_Callback cb) { qabstractscrollarea_destroy_callback = cb; }
    inline void setQAbstractScrollArea_FocusNextChild_Callback(QAbstractScrollArea_FocusNextChild_Callback cb) { qabstractscrollarea_focusnextchild_callback = cb; }
    inline void setQAbstractScrollArea_FocusPreviousChild_Callback(QAbstractScrollArea_FocusPreviousChild_Callback cb) { qabstractscrollarea_focuspreviouschild_callback = cb; }
    inline void setQAbstractScrollArea_Sender_Callback(QAbstractScrollArea_Sender_Callback cb) { qabstractscrollarea_sender_callback = cb; }
    inline void setQAbstractScrollArea_SenderSignalIndex_Callback(QAbstractScrollArea_SenderSignalIndex_Callback cb) { qabstractscrollarea_sendersignalindex_callback = cb; }
    inline void setQAbstractScrollArea_Receivers_Callback(QAbstractScrollArea_Receivers_Callback cb) { qabstractscrollarea_receivers_callback = cb; }
    inline void setQAbstractScrollArea_IsSignalConnected_Callback(QAbstractScrollArea_IsSignalConnected_Callback cb) { qabstractscrollarea_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAbstractScrollArea_Metacall_IsBase(bool value) const { qabstractscrollarea_metacall_isbase = value; }
    inline void setQAbstractScrollArea_MinimumSizeHint_IsBase(bool value) const { qabstractscrollarea_minimumsizehint_isbase = value; }
    inline void setQAbstractScrollArea_SizeHint_IsBase(bool value) const { qabstractscrollarea_sizehint_isbase = value; }
    inline void setQAbstractScrollArea_SetupViewport_IsBase(bool value) const { qabstractscrollarea_setupviewport_isbase = value; }
    inline void setQAbstractScrollArea_EventFilter_IsBase(bool value) const { qabstractscrollarea_eventfilter_isbase = value; }
    inline void setQAbstractScrollArea_Event_IsBase(bool value) const { qabstractscrollarea_event_isbase = value; }
    inline void setQAbstractScrollArea_ViewportEvent_IsBase(bool value) const { qabstractscrollarea_viewportevent_isbase = value; }
    inline void setQAbstractScrollArea_ResizeEvent_IsBase(bool value) const { qabstractscrollarea_resizeevent_isbase = value; }
    inline void setQAbstractScrollArea_PaintEvent_IsBase(bool value) const { qabstractscrollarea_paintevent_isbase = value; }
    inline void setQAbstractScrollArea_MousePressEvent_IsBase(bool value) const { qabstractscrollarea_mousepressevent_isbase = value; }
    inline void setQAbstractScrollArea_MouseReleaseEvent_IsBase(bool value) const { qabstractscrollarea_mousereleaseevent_isbase = value; }
    inline void setQAbstractScrollArea_MouseDoubleClickEvent_IsBase(bool value) const { qabstractscrollarea_mousedoubleclickevent_isbase = value; }
    inline void setQAbstractScrollArea_MouseMoveEvent_IsBase(bool value) const { qabstractscrollarea_mousemoveevent_isbase = value; }
    inline void setQAbstractScrollArea_WheelEvent_IsBase(bool value) const { qabstractscrollarea_wheelevent_isbase = value; }
    inline void setQAbstractScrollArea_ContextMenuEvent_IsBase(bool value) const { qabstractscrollarea_contextmenuevent_isbase = value; }
    inline void setQAbstractScrollArea_DragEnterEvent_IsBase(bool value) const { qabstractscrollarea_dragenterevent_isbase = value; }
    inline void setQAbstractScrollArea_DragMoveEvent_IsBase(bool value) const { qabstractscrollarea_dragmoveevent_isbase = value; }
    inline void setQAbstractScrollArea_DragLeaveEvent_IsBase(bool value) const { qabstractscrollarea_dragleaveevent_isbase = value; }
    inline void setQAbstractScrollArea_DropEvent_IsBase(bool value) const { qabstractscrollarea_dropevent_isbase = value; }
    inline void setQAbstractScrollArea_KeyPressEvent_IsBase(bool value) const { qabstractscrollarea_keypressevent_isbase = value; }
    inline void setQAbstractScrollArea_ScrollContentsBy_IsBase(bool value) const { qabstractscrollarea_scrollcontentsby_isbase = value; }
    inline void setQAbstractScrollArea_ViewportSizeHint_IsBase(bool value) const { qabstractscrollarea_viewportsizehint_isbase = value; }
    inline void setQAbstractScrollArea_ChangeEvent_IsBase(bool value) const { qabstractscrollarea_changeevent_isbase = value; }
    inline void setQAbstractScrollArea_InitStyleOption_IsBase(bool value) const { qabstractscrollarea_initstyleoption_isbase = value; }
    inline void setQAbstractScrollArea_DevType_IsBase(bool value) const { qabstractscrollarea_devtype_isbase = value; }
    inline void setQAbstractScrollArea_SetVisible_IsBase(bool value) const { qabstractscrollarea_setvisible_isbase = value; }
    inline void setQAbstractScrollArea_HeightForWidth_IsBase(bool value) const { qabstractscrollarea_heightforwidth_isbase = value; }
    inline void setQAbstractScrollArea_HasHeightForWidth_IsBase(bool value) const { qabstractscrollarea_hasheightforwidth_isbase = value; }
    inline void setQAbstractScrollArea_PaintEngine_IsBase(bool value) const { qabstractscrollarea_paintengine_isbase = value; }
    inline void setQAbstractScrollArea_KeyReleaseEvent_IsBase(bool value) const { qabstractscrollarea_keyreleaseevent_isbase = value; }
    inline void setQAbstractScrollArea_FocusInEvent_IsBase(bool value) const { qabstractscrollarea_focusinevent_isbase = value; }
    inline void setQAbstractScrollArea_FocusOutEvent_IsBase(bool value) const { qabstractscrollarea_focusoutevent_isbase = value; }
    inline void setQAbstractScrollArea_EnterEvent_IsBase(bool value) const { qabstractscrollarea_enterevent_isbase = value; }
    inline void setQAbstractScrollArea_LeaveEvent_IsBase(bool value) const { qabstractscrollarea_leaveevent_isbase = value; }
    inline void setQAbstractScrollArea_MoveEvent_IsBase(bool value) const { qabstractscrollarea_moveevent_isbase = value; }
    inline void setQAbstractScrollArea_CloseEvent_IsBase(bool value) const { qabstractscrollarea_closeevent_isbase = value; }
    inline void setQAbstractScrollArea_TabletEvent_IsBase(bool value) const { qabstractscrollarea_tabletevent_isbase = value; }
    inline void setQAbstractScrollArea_ActionEvent_IsBase(bool value) const { qabstractscrollarea_actionevent_isbase = value; }
    inline void setQAbstractScrollArea_ShowEvent_IsBase(bool value) const { qabstractscrollarea_showevent_isbase = value; }
    inline void setQAbstractScrollArea_HideEvent_IsBase(bool value) const { qabstractscrollarea_hideevent_isbase = value; }
    inline void setQAbstractScrollArea_NativeEvent_IsBase(bool value) const { qabstractscrollarea_nativeevent_isbase = value; }
    inline void setQAbstractScrollArea_Metric_IsBase(bool value) const { qabstractscrollarea_metric_isbase = value; }
    inline void setQAbstractScrollArea_InitPainter_IsBase(bool value) const { qabstractscrollarea_initpainter_isbase = value; }
    inline void setQAbstractScrollArea_Redirected_IsBase(bool value) const { qabstractscrollarea_redirected_isbase = value; }
    inline void setQAbstractScrollArea_SharedPainter_IsBase(bool value) const { qabstractscrollarea_sharedpainter_isbase = value; }
    inline void setQAbstractScrollArea_InputMethodEvent_IsBase(bool value) const { qabstractscrollarea_inputmethodevent_isbase = value; }
    inline void setQAbstractScrollArea_InputMethodQuery_IsBase(bool value) const { qabstractscrollarea_inputmethodquery_isbase = value; }
    inline void setQAbstractScrollArea_FocusNextPrevChild_IsBase(bool value) const { qabstractscrollarea_focusnextprevchild_isbase = value; }
    inline void setQAbstractScrollArea_TimerEvent_IsBase(bool value) const { qabstractscrollarea_timerevent_isbase = value; }
    inline void setQAbstractScrollArea_ChildEvent_IsBase(bool value) const { qabstractscrollarea_childevent_isbase = value; }
    inline void setQAbstractScrollArea_CustomEvent_IsBase(bool value) const { qabstractscrollarea_customevent_isbase = value; }
    inline void setQAbstractScrollArea_ConnectNotify_IsBase(bool value) const { qabstractscrollarea_connectnotify_isbase = value; }
    inline void setQAbstractScrollArea_DisconnectNotify_IsBase(bool value) const { qabstractscrollarea_disconnectnotify_isbase = value; }
    inline void setQAbstractScrollArea_SetViewportMargins_IsBase(bool value) const { qabstractscrollarea_setviewportmargins_isbase = value; }
    inline void setQAbstractScrollArea_SetViewportMarginsWithMargins_IsBase(bool value) const { qabstractscrollarea_setviewportmarginswithmargins_isbase = value; }
    inline void setQAbstractScrollArea_ViewportMargins_IsBase(bool value) const { qabstractscrollarea_viewportmargins_isbase = value; }
    inline void setQAbstractScrollArea_DrawFrame_IsBase(bool value) const { qabstractscrollarea_drawframe_isbase = value; }
    inline void setQAbstractScrollArea_UpdateMicroFocus_IsBase(bool value) const { qabstractscrollarea_updatemicrofocus_isbase = value; }
    inline void setQAbstractScrollArea_Create_IsBase(bool value) const { qabstractscrollarea_create_isbase = value; }
    inline void setQAbstractScrollArea_Destroy_IsBase(bool value) const { qabstractscrollarea_destroy_isbase = value; }
    inline void setQAbstractScrollArea_FocusNextChild_IsBase(bool value) const { qabstractscrollarea_focusnextchild_isbase = value; }
    inline void setQAbstractScrollArea_FocusPreviousChild_IsBase(bool value) const { qabstractscrollarea_focuspreviouschild_isbase = value; }
    inline void setQAbstractScrollArea_Sender_IsBase(bool value) const { qabstractscrollarea_sender_isbase = value; }
    inline void setQAbstractScrollArea_SenderSignalIndex_IsBase(bool value) const { qabstractscrollarea_sendersignalindex_isbase = value; }
    inline void setQAbstractScrollArea_Receivers_IsBase(bool value) const { qabstractscrollarea_receivers_isbase = value; }
    inline void setQAbstractScrollArea_IsSignalConnected_IsBase(bool value) const { qabstractscrollarea_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractscrollarea_metacall_isbase) {
            qabstractscrollarea_metacall_isbase = false;
            return QAbstractScrollArea::qt_metacall(param1, param2, param3);
        } else if (qabstractscrollarea_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qabstractscrollarea_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractScrollArea::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qabstractscrollarea_minimumsizehint_isbase) {
            qabstractscrollarea_minimumsizehint_isbase = false;
            return QAbstractScrollArea::minimumSizeHint();
        } else if (qabstractscrollarea_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qabstractscrollarea_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QAbstractScrollArea::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qabstractscrollarea_sizehint_isbase) {
            qabstractscrollarea_sizehint_isbase = false;
            return QAbstractScrollArea::sizeHint();
        } else if (qabstractscrollarea_sizehint_callback != nullptr) {
            QSize* callback_ret = qabstractscrollarea_sizehint_callback();
            return *callback_ret;
        } else {
            return QAbstractScrollArea::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qabstractscrollarea_setupviewport_isbase) {
            qabstractscrollarea_setupviewport_isbase = false;
            QAbstractScrollArea::setupViewport(viewport);
        } else if (qabstractscrollarea_setupviewport_callback != nullptr) {
            QWidget* cbval1 = viewport;

            qabstractscrollarea_setupviewport_callback(this, cbval1);
        } else {
            QAbstractScrollArea::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qabstractscrollarea_eventfilter_isbase) {
            qabstractscrollarea_eventfilter_isbase = false;
            return QAbstractScrollArea::eventFilter(param1, param2);
        } else if (qabstractscrollarea_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = qabstractscrollarea_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAbstractScrollArea::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qabstractscrollarea_event_isbase) {
            qabstractscrollarea_event_isbase = false;
            return QAbstractScrollArea::event(param1);
        } else if (qabstractscrollarea_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = qabstractscrollarea_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractScrollArea::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (qabstractscrollarea_viewportevent_isbase) {
            qabstractscrollarea_viewportevent_isbase = false;
            return QAbstractScrollArea::viewportEvent(param1);
        } else if (qabstractscrollarea_viewportevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = qabstractscrollarea_viewportevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractScrollArea::viewportEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qabstractscrollarea_resizeevent_isbase) {
            qabstractscrollarea_resizeevent_isbase = false;
            QAbstractScrollArea::resizeEvent(param1);
        } else if (qabstractscrollarea_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            qabstractscrollarea_resizeevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qabstractscrollarea_paintevent_isbase) {
            qabstractscrollarea_paintevent_isbase = false;
            QAbstractScrollArea::paintEvent(param1);
        } else if (qabstractscrollarea_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            qabstractscrollarea_paintevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qabstractscrollarea_mousepressevent_isbase) {
            qabstractscrollarea_mousepressevent_isbase = false;
            QAbstractScrollArea::mousePressEvent(param1);
        } else if (qabstractscrollarea_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qabstractscrollarea_mousepressevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qabstractscrollarea_mousereleaseevent_isbase) {
            qabstractscrollarea_mousereleaseevent_isbase = false;
            QAbstractScrollArea::mouseReleaseEvent(param1);
        } else if (qabstractscrollarea_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qabstractscrollarea_mousereleaseevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qabstractscrollarea_mousedoubleclickevent_isbase) {
            qabstractscrollarea_mousedoubleclickevent_isbase = false;
            QAbstractScrollArea::mouseDoubleClickEvent(param1);
        } else if (qabstractscrollarea_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qabstractscrollarea_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::mouseDoubleClickEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qabstractscrollarea_mousemoveevent_isbase) {
            qabstractscrollarea_mousemoveevent_isbase = false;
            QAbstractScrollArea::mouseMoveEvent(param1);
        } else if (qabstractscrollarea_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qabstractscrollarea_mousemoveevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qabstractscrollarea_wheelevent_isbase) {
            qabstractscrollarea_wheelevent_isbase = false;
            QAbstractScrollArea::wheelEvent(param1);
        } else if (qabstractscrollarea_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = param1;

            qabstractscrollarea_wheelevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qabstractscrollarea_contextmenuevent_isbase) {
            qabstractscrollarea_contextmenuevent_isbase = false;
            QAbstractScrollArea::contextMenuEvent(param1);
        } else if (qabstractscrollarea_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            qabstractscrollarea_contextmenuevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qabstractscrollarea_dragenterevent_isbase) {
            qabstractscrollarea_dragenterevent_isbase = false;
            QAbstractScrollArea::dragEnterEvent(param1);
        } else if (qabstractscrollarea_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = param1;

            qabstractscrollarea_dragenterevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::dragEnterEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (qabstractscrollarea_dragmoveevent_isbase) {
            qabstractscrollarea_dragmoveevent_isbase = false;
            QAbstractScrollArea::dragMoveEvent(param1);
        } else if (qabstractscrollarea_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = param1;

            qabstractscrollarea_dragmoveevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::dragMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (qabstractscrollarea_dragleaveevent_isbase) {
            qabstractscrollarea_dragleaveevent_isbase = false;
            QAbstractScrollArea::dragLeaveEvent(param1);
        } else if (qabstractscrollarea_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = param1;

            qabstractscrollarea_dragleaveevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::dragLeaveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qabstractscrollarea_dropevent_isbase) {
            qabstractscrollarea_dropevent_isbase = false;
            QAbstractScrollArea::dropEvent(param1);
        } else if (qabstractscrollarea_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = param1;

            qabstractscrollarea_dropevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::dropEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qabstractscrollarea_keypressevent_isbase) {
            qabstractscrollarea_keypressevent_isbase = false;
            QAbstractScrollArea::keyPressEvent(param1);
        } else if (qabstractscrollarea_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qabstractscrollarea_keypressevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qabstractscrollarea_scrollcontentsby_isbase) {
            qabstractscrollarea_scrollcontentsby_isbase = false;
            QAbstractScrollArea::scrollContentsBy(dx, dy);
        } else if (qabstractscrollarea_scrollcontentsby_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            qabstractscrollarea_scrollcontentsby_callback(this, cbval1, cbval2);
        } else {
            QAbstractScrollArea::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qabstractscrollarea_viewportsizehint_isbase) {
            qabstractscrollarea_viewportsizehint_isbase = false;
            return QAbstractScrollArea::viewportSizeHint();
        } else if (qabstractscrollarea_viewportsizehint_callback != nullptr) {
            QSize* callback_ret = qabstractscrollarea_viewportsizehint_callback();
            return *callback_ret;
        } else {
            return QAbstractScrollArea::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qabstractscrollarea_changeevent_isbase) {
            qabstractscrollarea_changeevent_isbase = false;
            QAbstractScrollArea::changeEvent(param1);
        } else if (qabstractscrollarea_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qabstractscrollarea_changeevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qabstractscrollarea_initstyleoption_isbase) {
            qabstractscrollarea_initstyleoption_isbase = false;
            QAbstractScrollArea::initStyleOption(option);
        } else if (qabstractscrollarea_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            qabstractscrollarea_initstyleoption_callback(this, cbval1);
        } else {
            QAbstractScrollArea::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qabstractscrollarea_devtype_isbase) {
            qabstractscrollarea_devtype_isbase = false;
            return QAbstractScrollArea::devType();
        } else if (qabstractscrollarea_devtype_callback != nullptr) {
            int callback_ret = qabstractscrollarea_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractScrollArea::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qabstractscrollarea_setvisible_isbase) {
            qabstractscrollarea_setvisible_isbase = false;
            QAbstractScrollArea::setVisible(visible);
        } else if (qabstractscrollarea_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qabstractscrollarea_setvisible_callback(this, cbval1);
        } else {
            QAbstractScrollArea::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qabstractscrollarea_heightforwidth_isbase) {
            qabstractscrollarea_heightforwidth_isbase = false;
            return QAbstractScrollArea::heightForWidth(param1);
        } else if (qabstractscrollarea_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qabstractscrollarea_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractScrollArea::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qabstractscrollarea_hasheightforwidth_isbase) {
            qabstractscrollarea_hasheightforwidth_isbase = false;
            return QAbstractScrollArea::hasHeightForWidth();
        } else if (qabstractscrollarea_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qabstractscrollarea_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QAbstractScrollArea::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qabstractscrollarea_paintengine_isbase) {
            qabstractscrollarea_paintengine_isbase = false;
            return QAbstractScrollArea::paintEngine();
        } else if (qabstractscrollarea_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qabstractscrollarea_paintengine_callback();
            return callback_ret;
        } else {
            return QAbstractScrollArea::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qabstractscrollarea_keyreleaseevent_isbase) {
            qabstractscrollarea_keyreleaseevent_isbase = false;
            QAbstractScrollArea::keyReleaseEvent(event);
        } else if (qabstractscrollarea_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qabstractscrollarea_keyreleaseevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qabstractscrollarea_focusinevent_isbase) {
            qabstractscrollarea_focusinevent_isbase = false;
            QAbstractScrollArea::focusInEvent(event);
        } else if (qabstractscrollarea_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qabstractscrollarea_focusinevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qabstractscrollarea_focusoutevent_isbase) {
            qabstractscrollarea_focusoutevent_isbase = false;
            QAbstractScrollArea::focusOutEvent(event);
        } else if (qabstractscrollarea_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qabstractscrollarea_focusoutevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qabstractscrollarea_enterevent_isbase) {
            qabstractscrollarea_enterevent_isbase = false;
            QAbstractScrollArea::enterEvent(event);
        } else if (qabstractscrollarea_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qabstractscrollarea_enterevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qabstractscrollarea_leaveevent_isbase) {
            qabstractscrollarea_leaveevent_isbase = false;
            QAbstractScrollArea::leaveEvent(event);
        } else if (qabstractscrollarea_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qabstractscrollarea_leaveevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qabstractscrollarea_moveevent_isbase) {
            qabstractscrollarea_moveevent_isbase = false;
            QAbstractScrollArea::moveEvent(event);
        } else if (qabstractscrollarea_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qabstractscrollarea_moveevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qabstractscrollarea_closeevent_isbase) {
            qabstractscrollarea_closeevent_isbase = false;
            QAbstractScrollArea::closeEvent(event);
        } else if (qabstractscrollarea_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qabstractscrollarea_closeevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qabstractscrollarea_tabletevent_isbase) {
            qabstractscrollarea_tabletevent_isbase = false;
            QAbstractScrollArea::tabletEvent(event);
        } else if (qabstractscrollarea_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qabstractscrollarea_tabletevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qabstractscrollarea_actionevent_isbase) {
            qabstractscrollarea_actionevent_isbase = false;
            QAbstractScrollArea::actionEvent(event);
        } else if (qabstractscrollarea_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qabstractscrollarea_actionevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qabstractscrollarea_showevent_isbase) {
            qabstractscrollarea_showevent_isbase = false;
            QAbstractScrollArea::showEvent(event);
        } else if (qabstractscrollarea_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qabstractscrollarea_showevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qabstractscrollarea_hideevent_isbase) {
            qabstractscrollarea_hideevent_isbase = false;
            QAbstractScrollArea::hideEvent(event);
        } else if (qabstractscrollarea_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qabstractscrollarea_hideevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qabstractscrollarea_nativeevent_isbase) {
            qabstractscrollarea_nativeevent_isbase = false;
            return QAbstractScrollArea::nativeEvent(eventType, message, result);
        } else if (qabstractscrollarea_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc((eventType_str.len + 1) * sizeof(char)));
            memcpy(eventType_str.data, eventType_qb.data(), eventType_str.len);
            eventType_str.data[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qabstractscrollarea_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QAbstractScrollArea::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qabstractscrollarea_metric_isbase) {
            qabstractscrollarea_metric_isbase = false;
            return QAbstractScrollArea::metric(param1);
        } else if (qabstractscrollarea_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qabstractscrollarea_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractScrollArea::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qabstractscrollarea_initpainter_isbase) {
            qabstractscrollarea_initpainter_isbase = false;
            QAbstractScrollArea::initPainter(painter);
        } else if (qabstractscrollarea_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qabstractscrollarea_initpainter_callback(this, cbval1);
        } else {
            QAbstractScrollArea::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qabstractscrollarea_redirected_isbase) {
            qabstractscrollarea_redirected_isbase = false;
            return QAbstractScrollArea::redirected(offset);
        } else if (qabstractscrollarea_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qabstractscrollarea_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractScrollArea::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qabstractscrollarea_sharedpainter_isbase) {
            qabstractscrollarea_sharedpainter_isbase = false;
            return QAbstractScrollArea::sharedPainter();
        } else if (qabstractscrollarea_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qabstractscrollarea_sharedpainter_callback();
            return callback_ret;
        } else {
            return QAbstractScrollArea::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qabstractscrollarea_inputmethodevent_isbase) {
            qabstractscrollarea_inputmethodevent_isbase = false;
            QAbstractScrollArea::inputMethodEvent(param1);
        } else if (qabstractscrollarea_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qabstractscrollarea_inputmethodevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qabstractscrollarea_inputmethodquery_isbase) {
            qabstractscrollarea_inputmethodquery_isbase = false;
            return QAbstractScrollArea::inputMethodQuery(param1);
        } else if (qabstractscrollarea_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qabstractscrollarea_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QAbstractScrollArea::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qabstractscrollarea_focusnextprevchild_isbase) {
            qabstractscrollarea_focusnextprevchild_isbase = false;
            return QAbstractScrollArea::focusNextPrevChild(next);
        } else if (qabstractscrollarea_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qabstractscrollarea_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractScrollArea::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractscrollarea_timerevent_isbase) {
            qabstractscrollarea_timerevent_isbase = false;
            QAbstractScrollArea::timerEvent(event);
        } else if (qabstractscrollarea_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qabstractscrollarea_timerevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractscrollarea_childevent_isbase) {
            qabstractscrollarea_childevent_isbase = false;
            QAbstractScrollArea::childEvent(event);
        } else if (qabstractscrollarea_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qabstractscrollarea_childevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractscrollarea_customevent_isbase) {
            qabstractscrollarea_customevent_isbase = false;
            QAbstractScrollArea::customEvent(event);
        } else if (qabstractscrollarea_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qabstractscrollarea_customevent_callback(this, cbval1);
        } else {
            QAbstractScrollArea::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractscrollarea_connectnotify_isbase) {
            qabstractscrollarea_connectnotify_isbase = false;
            QAbstractScrollArea::connectNotify(signal);
        } else if (qabstractscrollarea_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qabstractscrollarea_connectnotify_callback(this, cbval1);
        } else {
            QAbstractScrollArea::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractscrollarea_disconnectnotify_isbase) {
            qabstractscrollarea_disconnectnotify_isbase = false;
            QAbstractScrollArea::disconnectNotify(signal);
        } else if (qabstractscrollarea_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qabstractscrollarea_disconnectnotify_callback(this, cbval1);
        } else {
            QAbstractScrollArea::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qabstractscrollarea_setviewportmargins_isbase) {
            qabstractscrollarea_setviewportmargins_isbase = false;
            QAbstractScrollArea::setViewportMargins(left, top, right, bottom);
        } else if (qabstractscrollarea_setviewportmargins_callback != nullptr) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            qabstractscrollarea_setviewportmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QAbstractScrollArea::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(const QMargins& margins) {
        if (qabstractscrollarea_setviewportmarginswithmargins_isbase) {
            qabstractscrollarea_setviewportmarginswithmargins_isbase = false;
            QAbstractScrollArea::setViewportMargins(margins);
        } else if (qabstractscrollarea_setviewportmarginswithmargins_callback != nullptr) {
            const QMargins& margins_ret = margins;
            // Cast returned reference into pointer
            QMargins* cbval1 = const_cast<QMargins*>(&margins_ret);

            qabstractscrollarea_setviewportmarginswithmargins_callback(this, cbval1);
        } else {
            QAbstractScrollArea::setViewportMargins(margins);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qabstractscrollarea_viewportmargins_isbase) {
            qabstractscrollarea_viewportmargins_isbase = false;
            return QAbstractScrollArea::viewportMargins();
        } else if (qabstractscrollarea_viewportmargins_callback != nullptr) {
            QMargins* callback_ret = qabstractscrollarea_viewportmargins_callback();
            return *callback_ret;
        } else {
            return QAbstractScrollArea::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qabstractscrollarea_drawframe_isbase) {
            qabstractscrollarea_drawframe_isbase = false;
            QAbstractScrollArea::drawFrame(param1);
        } else if (qabstractscrollarea_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            qabstractscrollarea_drawframe_callback(this, cbval1);
        } else {
            QAbstractScrollArea::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qabstractscrollarea_updatemicrofocus_isbase) {
            qabstractscrollarea_updatemicrofocus_isbase = false;
            QAbstractScrollArea::updateMicroFocus();
        } else if (qabstractscrollarea_updatemicrofocus_callback != nullptr) {
            qabstractscrollarea_updatemicrofocus_callback();
        } else {
            QAbstractScrollArea::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qabstractscrollarea_create_isbase) {
            qabstractscrollarea_create_isbase = false;
            QAbstractScrollArea::create();
        } else if (qabstractscrollarea_create_callback != nullptr) {
            qabstractscrollarea_create_callback();
        } else {
            QAbstractScrollArea::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qabstractscrollarea_destroy_isbase) {
            qabstractscrollarea_destroy_isbase = false;
            QAbstractScrollArea::destroy();
        } else if (qabstractscrollarea_destroy_callback != nullptr) {
            qabstractscrollarea_destroy_callback();
        } else {
            QAbstractScrollArea::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qabstractscrollarea_focusnextchild_isbase) {
            qabstractscrollarea_focusnextchild_isbase = false;
            return QAbstractScrollArea::focusNextChild();
        } else if (qabstractscrollarea_focusnextchild_callback != nullptr) {
            bool callback_ret = qabstractscrollarea_focusnextchild_callback();
            return callback_ret;
        } else {
            return QAbstractScrollArea::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qabstractscrollarea_focuspreviouschild_isbase) {
            qabstractscrollarea_focuspreviouschild_isbase = false;
            return QAbstractScrollArea::focusPreviousChild();
        } else if (qabstractscrollarea_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qabstractscrollarea_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QAbstractScrollArea::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstractscrollarea_sender_isbase) {
            qabstractscrollarea_sender_isbase = false;
            return QAbstractScrollArea::sender();
        } else if (qabstractscrollarea_sender_callback != nullptr) {
            QObject* callback_ret = qabstractscrollarea_sender_callback();
            return callback_ret;
        } else {
            return QAbstractScrollArea::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstractscrollarea_sendersignalindex_isbase) {
            qabstractscrollarea_sendersignalindex_isbase = false;
            return QAbstractScrollArea::senderSignalIndex();
        } else if (qabstractscrollarea_sendersignalindex_callback != nullptr) {
            int callback_ret = qabstractscrollarea_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractScrollArea::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstractscrollarea_receivers_isbase) {
            qabstractscrollarea_receivers_isbase = false;
            return QAbstractScrollArea::receivers(signal);
        } else if (qabstractscrollarea_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qabstractscrollarea_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractScrollArea::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstractscrollarea_issignalconnected_isbase) {
            qabstractscrollarea_issignalconnected_isbase = false;
            return QAbstractScrollArea::isSignalConnected(signal);
        } else if (qabstractscrollarea_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qabstractscrollarea_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractScrollArea::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QAbstractScrollArea_EventFilter(QAbstractScrollArea* self, QObject* param1, QEvent* param2);
    friend bool QAbstractScrollArea_QBaseEventFilter(QAbstractScrollArea* self, QObject* param1, QEvent* param2);
    friend bool QAbstractScrollArea_Event(QAbstractScrollArea* self, QEvent* param1);
    friend bool QAbstractScrollArea_QBaseEvent(QAbstractScrollArea* self, QEvent* param1);
    friend bool QAbstractScrollArea_ViewportEvent(QAbstractScrollArea* self, QEvent* param1);
    friend bool QAbstractScrollArea_QBaseViewportEvent(QAbstractScrollArea* self, QEvent* param1);
    friend void QAbstractScrollArea_ResizeEvent(QAbstractScrollArea* self, QResizeEvent* param1);
    friend void QAbstractScrollArea_QBaseResizeEvent(QAbstractScrollArea* self, QResizeEvent* param1);
    friend void QAbstractScrollArea_PaintEvent(QAbstractScrollArea* self, QPaintEvent* param1);
    friend void QAbstractScrollArea_QBasePaintEvent(QAbstractScrollArea* self, QPaintEvent* param1);
    friend void QAbstractScrollArea_MousePressEvent(QAbstractScrollArea* self, QMouseEvent* param1);
    friend void QAbstractScrollArea_QBaseMousePressEvent(QAbstractScrollArea* self, QMouseEvent* param1);
    friend void QAbstractScrollArea_MouseReleaseEvent(QAbstractScrollArea* self, QMouseEvent* param1);
    friend void QAbstractScrollArea_QBaseMouseReleaseEvent(QAbstractScrollArea* self, QMouseEvent* param1);
    friend void QAbstractScrollArea_MouseDoubleClickEvent(QAbstractScrollArea* self, QMouseEvent* param1);
    friend void QAbstractScrollArea_QBaseMouseDoubleClickEvent(QAbstractScrollArea* self, QMouseEvent* param1);
    friend void QAbstractScrollArea_MouseMoveEvent(QAbstractScrollArea* self, QMouseEvent* param1);
    friend void QAbstractScrollArea_QBaseMouseMoveEvent(QAbstractScrollArea* self, QMouseEvent* param1);
    friend void QAbstractScrollArea_WheelEvent(QAbstractScrollArea* self, QWheelEvent* param1);
    friend void QAbstractScrollArea_QBaseWheelEvent(QAbstractScrollArea* self, QWheelEvent* param1);
    friend void QAbstractScrollArea_ContextMenuEvent(QAbstractScrollArea* self, QContextMenuEvent* param1);
    friend void QAbstractScrollArea_QBaseContextMenuEvent(QAbstractScrollArea* self, QContextMenuEvent* param1);
    friend void QAbstractScrollArea_DragEnterEvent(QAbstractScrollArea* self, QDragEnterEvent* param1);
    friend void QAbstractScrollArea_QBaseDragEnterEvent(QAbstractScrollArea* self, QDragEnterEvent* param1);
    friend void QAbstractScrollArea_DragMoveEvent(QAbstractScrollArea* self, QDragMoveEvent* param1);
    friend void QAbstractScrollArea_QBaseDragMoveEvent(QAbstractScrollArea* self, QDragMoveEvent* param1);
    friend void QAbstractScrollArea_DragLeaveEvent(QAbstractScrollArea* self, QDragLeaveEvent* param1);
    friend void QAbstractScrollArea_QBaseDragLeaveEvent(QAbstractScrollArea* self, QDragLeaveEvent* param1);
    friend void QAbstractScrollArea_DropEvent(QAbstractScrollArea* self, QDropEvent* param1);
    friend void QAbstractScrollArea_QBaseDropEvent(QAbstractScrollArea* self, QDropEvent* param1);
    friend void QAbstractScrollArea_KeyPressEvent(QAbstractScrollArea* self, QKeyEvent* param1);
    friend void QAbstractScrollArea_QBaseKeyPressEvent(QAbstractScrollArea* self, QKeyEvent* param1);
    friend void QAbstractScrollArea_ScrollContentsBy(QAbstractScrollArea* self, int dx, int dy);
    friend void QAbstractScrollArea_QBaseScrollContentsBy(QAbstractScrollArea* self, int dx, int dy);
    friend QSize* QAbstractScrollArea_ViewportSizeHint(const QAbstractScrollArea* self);
    friend QSize* QAbstractScrollArea_QBaseViewportSizeHint(const QAbstractScrollArea* self);
    friend void QAbstractScrollArea_ChangeEvent(QAbstractScrollArea* self, QEvent* param1);
    friend void QAbstractScrollArea_QBaseChangeEvent(QAbstractScrollArea* self, QEvent* param1);
    friend void QAbstractScrollArea_InitStyleOption(const QAbstractScrollArea* self, QStyleOptionFrame* option);
    friend void QAbstractScrollArea_QBaseInitStyleOption(const QAbstractScrollArea* self, QStyleOptionFrame* option);
    friend void QAbstractScrollArea_KeyReleaseEvent(QAbstractScrollArea* self, QKeyEvent* event);
    friend void QAbstractScrollArea_QBaseKeyReleaseEvent(QAbstractScrollArea* self, QKeyEvent* event);
    friend void QAbstractScrollArea_FocusInEvent(QAbstractScrollArea* self, QFocusEvent* event);
    friend void QAbstractScrollArea_QBaseFocusInEvent(QAbstractScrollArea* self, QFocusEvent* event);
    friend void QAbstractScrollArea_FocusOutEvent(QAbstractScrollArea* self, QFocusEvent* event);
    friend void QAbstractScrollArea_QBaseFocusOutEvent(QAbstractScrollArea* self, QFocusEvent* event);
    friend void QAbstractScrollArea_EnterEvent(QAbstractScrollArea* self, QEnterEvent* event);
    friend void QAbstractScrollArea_QBaseEnterEvent(QAbstractScrollArea* self, QEnterEvent* event);
    friend void QAbstractScrollArea_LeaveEvent(QAbstractScrollArea* self, QEvent* event);
    friend void QAbstractScrollArea_QBaseLeaveEvent(QAbstractScrollArea* self, QEvent* event);
    friend void QAbstractScrollArea_MoveEvent(QAbstractScrollArea* self, QMoveEvent* event);
    friend void QAbstractScrollArea_QBaseMoveEvent(QAbstractScrollArea* self, QMoveEvent* event);
    friend void QAbstractScrollArea_CloseEvent(QAbstractScrollArea* self, QCloseEvent* event);
    friend void QAbstractScrollArea_QBaseCloseEvent(QAbstractScrollArea* self, QCloseEvent* event);
    friend void QAbstractScrollArea_TabletEvent(QAbstractScrollArea* self, QTabletEvent* event);
    friend void QAbstractScrollArea_QBaseTabletEvent(QAbstractScrollArea* self, QTabletEvent* event);
    friend void QAbstractScrollArea_ActionEvent(QAbstractScrollArea* self, QActionEvent* event);
    friend void QAbstractScrollArea_QBaseActionEvent(QAbstractScrollArea* self, QActionEvent* event);
    friend void QAbstractScrollArea_ShowEvent(QAbstractScrollArea* self, QShowEvent* event);
    friend void QAbstractScrollArea_QBaseShowEvent(QAbstractScrollArea* self, QShowEvent* event);
    friend void QAbstractScrollArea_HideEvent(QAbstractScrollArea* self, QHideEvent* event);
    friend void QAbstractScrollArea_QBaseHideEvent(QAbstractScrollArea* self, QHideEvent* event);
    friend bool QAbstractScrollArea_NativeEvent(QAbstractScrollArea* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QAbstractScrollArea_QBaseNativeEvent(QAbstractScrollArea* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QAbstractScrollArea_Metric(const QAbstractScrollArea* self, int param1);
    friend int QAbstractScrollArea_QBaseMetric(const QAbstractScrollArea* self, int param1);
    friend void QAbstractScrollArea_InitPainter(const QAbstractScrollArea* self, QPainter* painter);
    friend void QAbstractScrollArea_QBaseInitPainter(const QAbstractScrollArea* self, QPainter* painter);
    friend QPaintDevice* QAbstractScrollArea_Redirected(const QAbstractScrollArea* self, QPoint* offset);
    friend QPaintDevice* QAbstractScrollArea_QBaseRedirected(const QAbstractScrollArea* self, QPoint* offset);
    friend QPainter* QAbstractScrollArea_SharedPainter(const QAbstractScrollArea* self);
    friend QPainter* QAbstractScrollArea_QBaseSharedPainter(const QAbstractScrollArea* self);
    friend void QAbstractScrollArea_InputMethodEvent(QAbstractScrollArea* self, QInputMethodEvent* param1);
    friend void QAbstractScrollArea_QBaseInputMethodEvent(QAbstractScrollArea* self, QInputMethodEvent* param1);
    friend bool QAbstractScrollArea_FocusNextPrevChild(QAbstractScrollArea* self, bool next);
    friend bool QAbstractScrollArea_QBaseFocusNextPrevChild(QAbstractScrollArea* self, bool next);
    friend void QAbstractScrollArea_TimerEvent(QAbstractScrollArea* self, QTimerEvent* event);
    friend void QAbstractScrollArea_QBaseTimerEvent(QAbstractScrollArea* self, QTimerEvent* event);
    friend void QAbstractScrollArea_ChildEvent(QAbstractScrollArea* self, QChildEvent* event);
    friend void QAbstractScrollArea_QBaseChildEvent(QAbstractScrollArea* self, QChildEvent* event);
    friend void QAbstractScrollArea_CustomEvent(QAbstractScrollArea* self, QEvent* event);
    friend void QAbstractScrollArea_QBaseCustomEvent(QAbstractScrollArea* self, QEvent* event);
    friend void QAbstractScrollArea_ConnectNotify(QAbstractScrollArea* self, const QMetaMethod* signal);
    friend void QAbstractScrollArea_QBaseConnectNotify(QAbstractScrollArea* self, const QMetaMethod* signal);
    friend void QAbstractScrollArea_DisconnectNotify(QAbstractScrollArea* self, const QMetaMethod* signal);
    friend void QAbstractScrollArea_QBaseDisconnectNotify(QAbstractScrollArea* self, const QMetaMethod* signal);
    friend void QAbstractScrollArea_SetViewportMargins(QAbstractScrollArea* self, int left, int top, int right, int bottom);
    friend void QAbstractScrollArea_QBaseSetViewportMargins(QAbstractScrollArea* self, int left, int top, int right, int bottom);
    friend void QAbstractScrollArea_SetViewportMarginsWithMargins(QAbstractScrollArea* self, const QMargins* margins);
    friend void QAbstractScrollArea_QBaseSetViewportMarginsWithMargins(QAbstractScrollArea* self, const QMargins* margins);
    friend QMargins* QAbstractScrollArea_ViewportMargins(const QAbstractScrollArea* self);
    friend QMargins* QAbstractScrollArea_QBaseViewportMargins(const QAbstractScrollArea* self);
    friend void QAbstractScrollArea_DrawFrame(QAbstractScrollArea* self, QPainter* param1);
    friend void QAbstractScrollArea_QBaseDrawFrame(QAbstractScrollArea* self, QPainter* param1);
    friend void QAbstractScrollArea_UpdateMicroFocus(QAbstractScrollArea* self);
    friend void QAbstractScrollArea_QBaseUpdateMicroFocus(QAbstractScrollArea* self);
    friend void QAbstractScrollArea_Create(QAbstractScrollArea* self);
    friend void QAbstractScrollArea_QBaseCreate(QAbstractScrollArea* self);
    friend void QAbstractScrollArea_Destroy(QAbstractScrollArea* self);
    friend void QAbstractScrollArea_QBaseDestroy(QAbstractScrollArea* self);
    friend bool QAbstractScrollArea_FocusNextChild(QAbstractScrollArea* self);
    friend bool QAbstractScrollArea_QBaseFocusNextChild(QAbstractScrollArea* self);
    friend bool QAbstractScrollArea_FocusPreviousChild(QAbstractScrollArea* self);
    friend bool QAbstractScrollArea_QBaseFocusPreviousChild(QAbstractScrollArea* self);
    friend QObject* QAbstractScrollArea_Sender(const QAbstractScrollArea* self);
    friend QObject* QAbstractScrollArea_QBaseSender(const QAbstractScrollArea* self);
    friend int QAbstractScrollArea_SenderSignalIndex(const QAbstractScrollArea* self);
    friend int QAbstractScrollArea_QBaseSenderSignalIndex(const QAbstractScrollArea* self);
    friend int QAbstractScrollArea_Receivers(const QAbstractScrollArea* self, const char* signal);
    friend int QAbstractScrollArea_QBaseReceivers(const QAbstractScrollArea* self, const char* signal);
    friend bool QAbstractScrollArea_IsSignalConnected(const QAbstractScrollArea* self, const QMetaMethod* signal);
    friend bool QAbstractScrollArea_QBaseIsSignalConnected(const QAbstractScrollArea* self, const QMetaMethod* signal);
};

#endif
