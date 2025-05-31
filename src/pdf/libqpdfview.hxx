#pragma once
#ifndef SRC_PDFC_LIBVIRTUALQPDFVIEW_H
#define SRC_PDFC_LIBVIRTUALQPDFVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPdfView so that we can call protected methods
class VirtualQPdfView final : public QPdfView {

  public:
    // Virtual class boolean flag
    bool isVirtualQPdfView = true;

    // Virtual class public types (including callbacks)
    using QPdfView_Metacall_Callback = int (*)(QPdfView*, int, int, void**);
    using QPdfView_PaintEvent_Callback = void (*)(QPdfView*, QPaintEvent*);
    using QPdfView_ResizeEvent_Callback = void (*)(QPdfView*, QResizeEvent*);
    using QPdfView_ScrollContentsBy_Callback = void (*)(QPdfView*, int, int);
    using QPdfView_MinimumSizeHint_Callback = QSize* (*)();
    using QPdfView_SizeHint_Callback = QSize* (*)();
    using QPdfView_SetupViewport_Callback = void (*)(QPdfView*, QWidget*);
    using QPdfView_EventFilter_Callback = bool (*)(QPdfView*, QObject*, QEvent*);
    using QPdfView_Event_Callback = bool (*)(QPdfView*, QEvent*);
    using QPdfView_ViewportEvent_Callback = bool (*)(QPdfView*, QEvent*);
    using QPdfView_MousePressEvent_Callback = void (*)(QPdfView*, QMouseEvent*);
    using QPdfView_MouseReleaseEvent_Callback = void (*)(QPdfView*, QMouseEvent*);
    using QPdfView_MouseDoubleClickEvent_Callback = void (*)(QPdfView*, QMouseEvent*);
    using QPdfView_MouseMoveEvent_Callback = void (*)(QPdfView*, QMouseEvent*);
    using QPdfView_WheelEvent_Callback = void (*)(QPdfView*, QWheelEvent*);
    using QPdfView_ContextMenuEvent_Callback = void (*)(QPdfView*, QContextMenuEvent*);
    using QPdfView_DragEnterEvent_Callback = void (*)(QPdfView*, QDragEnterEvent*);
    using QPdfView_DragMoveEvent_Callback = void (*)(QPdfView*, QDragMoveEvent*);
    using QPdfView_DragLeaveEvent_Callback = void (*)(QPdfView*, QDragLeaveEvent*);
    using QPdfView_DropEvent_Callback = void (*)(QPdfView*, QDropEvent*);
    using QPdfView_KeyPressEvent_Callback = void (*)(QPdfView*, QKeyEvent*);
    using QPdfView_ViewportSizeHint_Callback = QSize* (*)();
    using QPdfView_ChangeEvent_Callback = void (*)(QPdfView*, QEvent*);
    using QPdfView_InitStyleOption_Callback = void (*)(const QPdfView*, QStyleOptionFrame*);
    using QPdfView_DevType_Callback = int (*)();
    using QPdfView_SetVisible_Callback = void (*)(QPdfView*, bool);
    using QPdfView_HeightForWidth_Callback = int (*)(const QPdfView*, int);
    using QPdfView_HasHeightForWidth_Callback = bool (*)();
    using QPdfView_PaintEngine_Callback = QPaintEngine* (*)();
    using QPdfView_KeyReleaseEvent_Callback = void (*)(QPdfView*, QKeyEvent*);
    using QPdfView_FocusInEvent_Callback = void (*)(QPdfView*, QFocusEvent*);
    using QPdfView_FocusOutEvent_Callback = void (*)(QPdfView*, QFocusEvent*);
    using QPdfView_EnterEvent_Callback = void (*)(QPdfView*, QEnterEvent*);
    using QPdfView_LeaveEvent_Callback = void (*)(QPdfView*, QEvent*);
    using QPdfView_MoveEvent_Callback = void (*)(QPdfView*, QMoveEvent*);
    using QPdfView_CloseEvent_Callback = void (*)(QPdfView*, QCloseEvent*);
    using QPdfView_TabletEvent_Callback = void (*)(QPdfView*, QTabletEvent*);
    using QPdfView_ActionEvent_Callback = void (*)(QPdfView*, QActionEvent*);
    using QPdfView_ShowEvent_Callback = void (*)(QPdfView*, QShowEvent*);
    using QPdfView_HideEvent_Callback = void (*)(QPdfView*, QHideEvent*);
    using QPdfView_NativeEvent_Callback = bool (*)(QPdfView*, libqt_string, void*, intptr_t*);
    using QPdfView_Metric_Callback = int (*)(const QPdfView*, int);
    using QPdfView_InitPainter_Callback = void (*)(const QPdfView*, QPainter*);
    using QPdfView_Redirected_Callback = QPaintDevice* (*)(const QPdfView*, QPoint*);
    using QPdfView_SharedPainter_Callback = QPainter* (*)();
    using QPdfView_InputMethodEvent_Callback = void (*)(QPdfView*, QInputMethodEvent*);
    using QPdfView_InputMethodQuery_Callback = QVariant* (*)(const QPdfView*, int);
    using QPdfView_FocusNextPrevChild_Callback = bool (*)(QPdfView*, bool);
    using QPdfView_TimerEvent_Callback = void (*)(QPdfView*, QTimerEvent*);
    using QPdfView_ChildEvent_Callback = void (*)(QPdfView*, QChildEvent*);
    using QPdfView_CustomEvent_Callback = void (*)(QPdfView*, QEvent*);
    using QPdfView_ConnectNotify_Callback = void (*)(QPdfView*, QMetaMethod*);
    using QPdfView_DisconnectNotify_Callback = void (*)(QPdfView*, QMetaMethod*);
    using QPdfView_SetViewportMargins_Callback = void (*)(QPdfView*, int, int, int, int);
    using QPdfView_ViewportMargins_Callback = QMargins* (*)();
    using QPdfView_DrawFrame_Callback = void (*)(QPdfView*, QPainter*);
    using QPdfView_UpdateMicroFocus_Callback = void (*)();
    using QPdfView_Create_Callback = void (*)();
    using QPdfView_Destroy_Callback = void (*)();
    using QPdfView_FocusNextChild_Callback = bool (*)();
    using QPdfView_FocusPreviousChild_Callback = bool (*)();
    using QPdfView_Sender_Callback = QObject* (*)();
    using QPdfView_SenderSignalIndex_Callback = int (*)();
    using QPdfView_Receivers_Callback = int (*)(const QPdfView*, const char*);
    using QPdfView_IsSignalConnected_Callback = bool (*)(const QPdfView*, QMetaMethod*);

  protected:
    // Instance callback storage
    QPdfView_Metacall_Callback qpdfview_metacall_callback = nullptr;
    QPdfView_PaintEvent_Callback qpdfview_paintevent_callback = nullptr;
    QPdfView_ResizeEvent_Callback qpdfview_resizeevent_callback = nullptr;
    QPdfView_ScrollContentsBy_Callback qpdfview_scrollcontentsby_callback = nullptr;
    QPdfView_MinimumSizeHint_Callback qpdfview_minimumsizehint_callback = nullptr;
    QPdfView_SizeHint_Callback qpdfview_sizehint_callback = nullptr;
    QPdfView_SetupViewport_Callback qpdfview_setupviewport_callback = nullptr;
    QPdfView_EventFilter_Callback qpdfview_eventfilter_callback = nullptr;
    QPdfView_Event_Callback qpdfview_event_callback = nullptr;
    QPdfView_ViewportEvent_Callback qpdfview_viewportevent_callback = nullptr;
    QPdfView_MousePressEvent_Callback qpdfview_mousepressevent_callback = nullptr;
    QPdfView_MouseReleaseEvent_Callback qpdfview_mousereleaseevent_callback = nullptr;
    QPdfView_MouseDoubleClickEvent_Callback qpdfview_mousedoubleclickevent_callback = nullptr;
    QPdfView_MouseMoveEvent_Callback qpdfview_mousemoveevent_callback = nullptr;
    QPdfView_WheelEvent_Callback qpdfview_wheelevent_callback = nullptr;
    QPdfView_ContextMenuEvent_Callback qpdfview_contextmenuevent_callback = nullptr;
    QPdfView_DragEnterEvent_Callback qpdfview_dragenterevent_callback = nullptr;
    QPdfView_DragMoveEvent_Callback qpdfview_dragmoveevent_callback = nullptr;
    QPdfView_DragLeaveEvent_Callback qpdfview_dragleaveevent_callback = nullptr;
    QPdfView_DropEvent_Callback qpdfview_dropevent_callback = nullptr;
    QPdfView_KeyPressEvent_Callback qpdfview_keypressevent_callback = nullptr;
    QPdfView_ViewportSizeHint_Callback qpdfview_viewportsizehint_callback = nullptr;
    QPdfView_ChangeEvent_Callback qpdfview_changeevent_callback = nullptr;
    QPdfView_InitStyleOption_Callback qpdfview_initstyleoption_callback = nullptr;
    QPdfView_DevType_Callback qpdfview_devtype_callback = nullptr;
    QPdfView_SetVisible_Callback qpdfview_setvisible_callback = nullptr;
    QPdfView_HeightForWidth_Callback qpdfview_heightforwidth_callback = nullptr;
    QPdfView_HasHeightForWidth_Callback qpdfview_hasheightforwidth_callback = nullptr;
    QPdfView_PaintEngine_Callback qpdfview_paintengine_callback = nullptr;
    QPdfView_KeyReleaseEvent_Callback qpdfview_keyreleaseevent_callback = nullptr;
    QPdfView_FocusInEvent_Callback qpdfview_focusinevent_callback = nullptr;
    QPdfView_FocusOutEvent_Callback qpdfview_focusoutevent_callback = nullptr;
    QPdfView_EnterEvent_Callback qpdfview_enterevent_callback = nullptr;
    QPdfView_LeaveEvent_Callback qpdfview_leaveevent_callback = nullptr;
    QPdfView_MoveEvent_Callback qpdfview_moveevent_callback = nullptr;
    QPdfView_CloseEvent_Callback qpdfview_closeevent_callback = nullptr;
    QPdfView_TabletEvent_Callback qpdfview_tabletevent_callback = nullptr;
    QPdfView_ActionEvent_Callback qpdfview_actionevent_callback = nullptr;
    QPdfView_ShowEvent_Callback qpdfview_showevent_callback = nullptr;
    QPdfView_HideEvent_Callback qpdfview_hideevent_callback = nullptr;
    QPdfView_NativeEvent_Callback qpdfview_nativeevent_callback = nullptr;
    QPdfView_Metric_Callback qpdfview_metric_callback = nullptr;
    QPdfView_InitPainter_Callback qpdfview_initpainter_callback = nullptr;
    QPdfView_Redirected_Callback qpdfview_redirected_callback = nullptr;
    QPdfView_SharedPainter_Callback qpdfview_sharedpainter_callback = nullptr;
    QPdfView_InputMethodEvent_Callback qpdfview_inputmethodevent_callback = nullptr;
    QPdfView_InputMethodQuery_Callback qpdfview_inputmethodquery_callback = nullptr;
    QPdfView_FocusNextPrevChild_Callback qpdfview_focusnextprevchild_callback = nullptr;
    QPdfView_TimerEvent_Callback qpdfview_timerevent_callback = nullptr;
    QPdfView_ChildEvent_Callback qpdfview_childevent_callback = nullptr;
    QPdfView_CustomEvent_Callback qpdfview_customevent_callback = nullptr;
    QPdfView_ConnectNotify_Callback qpdfview_connectnotify_callback = nullptr;
    QPdfView_DisconnectNotify_Callback qpdfview_disconnectnotify_callback = nullptr;
    QPdfView_SetViewportMargins_Callback qpdfview_setviewportmargins_callback = nullptr;
    QPdfView_ViewportMargins_Callback qpdfview_viewportmargins_callback = nullptr;
    QPdfView_DrawFrame_Callback qpdfview_drawframe_callback = nullptr;
    QPdfView_UpdateMicroFocus_Callback qpdfview_updatemicrofocus_callback = nullptr;
    QPdfView_Create_Callback qpdfview_create_callback = nullptr;
    QPdfView_Destroy_Callback qpdfview_destroy_callback = nullptr;
    QPdfView_FocusNextChild_Callback qpdfview_focusnextchild_callback = nullptr;
    QPdfView_FocusPreviousChild_Callback qpdfview_focuspreviouschild_callback = nullptr;
    QPdfView_Sender_Callback qpdfview_sender_callback = nullptr;
    QPdfView_SenderSignalIndex_Callback qpdfview_sendersignalindex_callback = nullptr;
    QPdfView_Receivers_Callback qpdfview_receivers_callback = nullptr;
    QPdfView_IsSignalConnected_Callback qpdfview_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpdfview_metacall_isbase = false;
    mutable bool qpdfview_paintevent_isbase = false;
    mutable bool qpdfview_resizeevent_isbase = false;
    mutable bool qpdfview_scrollcontentsby_isbase = false;
    mutable bool qpdfview_minimumsizehint_isbase = false;
    mutable bool qpdfview_sizehint_isbase = false;
    mutable bool qpdfview_setupviewport_isbase = false;
    mutable bool qpdfview_eventfilter_isbase = false;
    mutable bool qpdfview_event_isbase = false;
    mutable bool qpdfview_viewportevent_isbase = false;
    mutable bool qpdfview_mousepressevent_isbase = false;
    mutable bool qpdfview_mousereleaseevent_isbase = false;
    mutable bool qpdfview_mousedoubleclickevent_isbase = false;
    mutable bool qpdfview_mousemoveevent_isbase = false;
    mutable bool qpdfview_wheelevent_isbase = false;
    mutable bool qpdfview_contextmenuevent_isbase = false;
    mutable bool qpdfview_dragenterevent_isbase = false;
    mutable bool qpdfview_dragmoveevent_isbase = false;
    mutable bool qpdfview_dragleaveevent_isbase = false;
    mutable bool qpdfview_dropevent_isbase = false;
    mutable bool qpdfview_keypressevent_isbase = false;
    mutable bool qpdfview_viewportsizehint_isbase = false;
    mutable bool qpdfview_changeevent_isbase = false;
    mutable bool qpdfview_initstyleoption_isbase = false;
    mutable bool qpdfview_devtype_isbase = false;
    mutable bool qpdfview_setvisible_isbase = false;
    mutable bool qpdfview_heightforwidth_isbase = false;
    mutable bool qpdfview_hasheightforwidth_isbase = false;
    mutable bool qpdfview_paintengine_isbase = false;
    mutable bool qpdfview_keyreleaseevent_isbase = false;
    mutable bool qpdfview_focusinevent_isbase = false;
    mutable bool qpdfview_focusoutevent_isbase = false;
    mutable bool qpdfview_enterevent_isbase = false;
    mutable bool qpdfview_leaveevent_isbase = false;
    mutable bool qpdfview_moveevent_isbase = false;
    mutable bool qpdfview_closeevent_isbase = false;
    mutable bool qpdfview_tabletevent_isbase = false;
    mutable bool qpdfview_actionevent_isbase = false;
    mutable bool qpdfview_showevent_isbase = false;
    mutable bool qpdfview_hideevent_isbase = false;
    mutable bool qpdfview_nativeevent_isbase = false;
    mutable bool qpdfview_metric_isbase = false;
    mutable bool qpdfview_initpainter_isbase = false;
    mutable bool qpdfview_redirected_isbase = false;
    mutable bool qpdfview_sharedpainter_isbase = false;
    mutable bool qpdfview_inputmethodevent_isbase = false;
    mutable bool qpdfview_inputmethodquery_isbase = false;
    mutable bool qpdfview_focusnextprevchild_isbase = false;
    mutable bool qpdfview_timerevent_isbase = false;
    mutable bool qpdfview_childevent_isbase = false;
    mutable bool qpdfview_customevent_isbase = false;
    mutable bool qpdfview_connectnotify_isbase = false;
    mutable bool qpdfview_disconnectnotify_isbase = false;
    mutable bool qpdfview_setviewportmargins_isbase = false;
    mutable bool qpdfview_viewportmargins_isbase = false;
    mutable bool qpdfview_drawframe_isbase = false;
    mutable bool qpdfview_updatemicrofocus_isbase = false;
    mutable bool qpdfview_create_isbase = false;
    mutable bool qpdfview_destroy_isbase = false;
    mutable bool qpdfview_focusnextchild_isbase = false;
    mutable bool qpdfview_focuspreviouschild_isbase = false;
    mutable bool qpdfview_sender_isbase = false;
    mutable bool qpdfview_sendersignalindex_isbase = false;
    mutable bool qpdfview_receivers_isbase = false;
    mutable bool qpdfview_issignalconnected_isbase = false;

  public:
    VirtualQPdfView(QWidget* parent) : QPdfView(parent){};
    VirtualQPdfView() : QPdfView(){};

    ~VirtualQPdfView() {
        qpdfview_metacall_callback = nullptr;
        qpdfview_paintevent_callback = nullptr;
        qpdfview_resizeevent_callback = nullptr;
        qpdfview_scrollcontentsby_callback = nullptr;
        qpdfview_minimumsizehint_callback = nullptr;
        qpdfview_sizehint_callback = nullptr;
        qpdfview_setupviewport_callback = nullptr;
        qpdfview_eventfilter_callback = nullptr;
        qpdfview_event_callback = nullptr;
        qpdfview_viewportevent_callback = nullptr;
        qpdfview_mousepressevent_callback = nullptr;
        qpdfview_mousereleaseevent_callback = nullptr;
        qpdfview_mousedoubleclickevent_callback = nullptr;
        qpdfview_mousemoveevent_callback = nullptr;
        qpdfview_wheelevent_callback = nullptr;
        qpdfview_contextmenuevent_callback = nullptr;
        qpdfview_dragenterevent_callback = nullptr;
        qpdfview_dragmoveevent_callback = nullptr;
        qpdfview_dragleaveevent_callback = nullptr;
        qpdfview_dropevent_callback = nullptr;
        qpdfview_keypressevent_callback = nullptr;
        qpdfview_viewportsizehint_callback = nullptr;
        qpdfview_changeevent_callback = nullptr;
        qpdfview_initstyleoption_callback = nullptr;
        qpdfview_devtype_callback = nullptr;
        qpdfview_setvisible_callback = nullptr;
        qpdfview_heightforwidth_callback = nullptr;
        qpdfview_hasheightforwidth_callback = nullptr;
        qpdfview_paintengine_callback = nullptr;
        qpdfview_keyreleaseevent_callback = nullptr;
        qpdfview_focusinevent_callback = nullptr;
        qpdfview_focusoutevent_callback = nullptr;
        qpdfview_enterevent_callback = nullptr;
        qpdfview_leaveevent_callback = nullptr;
        qpdfview_moveevent_callback = nullptr;
        qpdfview_closeevent_callback = nullptr;
        qpdfview_tabletevent_callback = nullptr;
        qpdfview_actionevent_callback = nullptr;
        qpdfview_showevent_callback = nullptr;
        qpdfview_hideevent_callback = nullptr;
        qpdfview_nativeevent_callback = nullptr;
        qpdfview_metric_callback = nullptr;
        qpdfview_initpainter_callback = nullptr;
        qpdfview_redirected_callback = nullptr;
        qpdfview_sharedpainter_callback = nullptr;
        qpdfview_inputmethodevent_callback = nullptr;
        qpdfview_inputmethodquery_callback = nullptr;
        qpdfview_focusnextprevchild_callback = nullptr;
        qpdfview_timerevent_callback = nullptr;
        qpdfview_childevent_callback = nullptr;
        qpdfview_customevent_callback = nullptr;
        qpdfview_connectnotify_callback = nullptr;
        qpdfview_disconnectnotify_callback = nullptr;
        qpdfview_setviewportmargins_callback = nullptr;
        qpdfview_viewportmargins_callback = nullptr;
        qpdfview_drawframe_callback = nullptr;
        qpdfview_updatemicrofocus_callback = nullptr;
        qpdfview_create_callback = nullptr;
        qpdfview_destroy_callback = nullptr;
        qpdfview_focusnextchild_callback = nullptr;
        qpdfview_focuspreviouschild_callback = nullptr;
        qpdfview_sender_callback = nullptr;
        qpdfview_sendersignalindex_callback = nullptr;
        qpdfview_receivers_callback = nullptr;
        qpdfview_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQPdfView_Metacall_Callback(QPdfView_Metacall_Callback cb) { qpdfview_metacall_callback = cb; }
    inline void setQPdfView_PaintEvent_Callback(QPdfView_PaintEvent_Callback cb) { qpdfview_paintevent_callback = cb; }
    inline void setQPdfView_ResizeEvent_Callback(QPdfView_ResizeEvent_Callback cb) { qpdfview_resizeevent_callback = cb; }
    inline void setQPdfView_ScrollContentsBy_Callback(QPdfView_ScrollContentsBy_Callback cb) { qpdfview_scrollcontentsby_callback = cb; }
    inline void setQPdfView_MinimumSizeHint_Callback(QPdfView_MinimumSizeHint_Callback cb) { qpdfview_minimumsizehint_callback = cb; }
    inline void setQPdfView_SizeHint_Callback(QPdfView_SizeHint_Callback cb) { qpdfview_sizehint_callback = cb; }
    inline void setQPdfView_SetupViewport_Callback(QPdfView_SetupViewport_Callback cb) { qpdfview_setupviewport_callback = cb; }
    inline void setQPdfView_EventFilter_Callback(QPdfView_EventFilter_Callback cb) { qpdfview_eventfilter_callback = cb; }
    inline void setQPdfView_Event_Callback(QPdfView_Event_Callback cb) { qpdfview_event_callback = cb; }
    inline void setQPdfView_ViewportEvent_Callback(QPdfView_ViewportEvent_Callback cb) { qpdfview_viewportevent_callback = cb; }
    inline void setQPdfView_MousePressEvent_Callback(QPdfView_MousePressEvent_Callback cb) { qpdfview_mousepressevent_callback = cb; }
    inline void setQPdfView_MouseReleaseEvent_Callback(QPdfView_MouseReleaseEvent_Callback cb) { qpdfview_mousereleaseevent_callback = cb; }
    inline void setQPdfView_MouseDoubleClickEvent_Callback(QPdfView_MouseDoubleClickEvent_Callback cb) { qpdfview_mousedoubleclickevent_callback = cb; }
    inline void setQPdfView_MouseMoveEvent_Callback(QPdfView_MouseMoveEvent_Callback cb) { qpdfview_mousemoveevent_callback = cb; }
    inline void setQPdfView_WheelEvent_Callback(QPdfView_WheelEvent_Callback cb) { qpdfview_wheelevent_callback = cb; }
    inline void setQPdfView_ContextMenuEvent_Callback(QPdfView_ContextMenuEvent_Callback cb) { qpdfview_contextmenuevent_callback = cb; }
    inline void setQPdfView_DragEnterEvent_Callback(QPdfView_DragEnterEvent_Callback cb) { qpdfview_dragenterevent_callback = cb; }
    inline void setQPdfView_DragMoveEvent_Callback(QPdfView_DragMoveEvent_Callback cb) { qpdfview_dragmoveevent_callback = cb; }
    inline void setQPdfView_DragLeaveEvent_Callback(QPdfView_DragLeaveEvent_Callback cb) { qpdfview_dragleaveevent_callback = cb; }
    inline void setQPdfView_DropEvent_Callback(QPdfView_DropEvent_Callback cb) { qpdfview_dropevent_callback = cb; }
    inline void setQPdfView_KeyPressEvent_Callback(QPdfView_KeyPressEvent_Callback cb) { qpdfview_keypressevent_callback = cb; }
    inline void setQPdfView_ViewportSizeHint_Callback(QPdfView_ViewportSizeHint_Callback cb) { qpdfview_viewportsizehint_callback = cb; }
    inline void setQPdfView_ChangeEvent_Callback(QPdfView_ChangeEvent_Callback cb) { qpdfview_changeevent_callback = cb; }
    inline void setQPdfView_InitStyleOption_Callback(QPdfView_InitStyleOption_Callback cb) { qpdfview_initstyleoption_callback = cb; }
    inline void setQPdfView_DevType_Callback(QPdfView_DevType_Callback cb) { qpdfview_devtype_callback = cb; }
    inline void setQPdfView_SetVisible_Callback(QPdfView_SetVisible_Callback cb) { qpdfview_setvisible_callback = cb; }
    inline void setQPdfView_HeightForWidth_Callback(QPdfView_HeightForWidth_Callback cb) { qpdfview_heightforwidth_callback = cb; }
    inline void setQPdfView_HasHeightForWidth_Callback(QPdfView_HasHeightForWidth_Callback cb) { qpdfview_hasheightforwidth_callback = cb; }
    inline void setQPdfView_PaintEngine_Callback(QPdfView_PaintEngine_Callback cb) { qpdfview_paintengine_callback = cb; }
    inline void setQPdfView_KeyReleaseEvent_Callback(QPdfView_KeyReleaseEvent_Callback cb) { qpdfview_keyreleaseevent_callback = cb; }
    inline void setQPdfView_FocusInEvent_Callback(QPdfView_FocusInEvent_Callback cb) { qpdfview_focusinevent_callback = cb; }
    inline void setQPdfView_FocusOutEvent_Callback(QPdfView_FocusOutEvent_Callback cb) { qpdfview_focusoutevent_callback = cb; }
    inline void setQPdfView_EnterEvent_Callback(QPdfView_EnterEvent_Callback cb) { qpdfview_enterevent_callback = cb; }
    inline void setQPdfView_LeaveEvent_Callback(QPdfView_LeaveEvent_Callback cb) { qpdfview_leaveevent_callback = cb; }
    inline void setQPdfView_MoveEvent_Callback(QPdfView_MoveEvent_Callback cb) { qpdfview_moveevent_callback = cb; }
    inline void setQPdfView_CloseEvent_Callback(QPdfView_CloseEvent_Callback cb) { qpdfview_closeevent_callback = cb; }
    inline void setQPdfView_TabletEvent_Callback(QPdfView_TabletEvent_Callback cb) { qpdfview_tabletevent_callback = cb; }
    inline void setQPdfView_ActionEvent_Callback(QPdfView_ActionEvent_Callback cb) { qpdfview_actionevent_callback = cb; }
    inline void setQPdfView_ShowEvent_Callback(QPdfView_ShowEvent_Callback cb) { qpdfview_showevent_callback = cb; }
    inline void setQPdfView_HideEvent_Callback(QPdfView_HideEvent_Callback cb) { qpdfview_hideevent_callback = cb; }
    inline void setQPdfView_NativeEvent_Callback(QPdfView_NativeEvent_Callback cb) { qpdfview_nativeevent_callback = cb; }
    inline void setQPdfView_Metric_Callback(QPdfView_Metric_Callback cb) { qpdfview_metric_callback = cb; }
    inline void setQPdfView_InitPainter_Callback(QPdfView_InitPainter_Callback cb) { qpdfview_initpainter_callback = cb; }
    inline void setQPdfView_Redirected_Callback(QPdfView_Redirected_Callback cb) { qpdfview_redirected_callback = cb; }
    inline void setQPdfView_SharedPainter_Callback(QPdfView_SharedPainter_Callback cb) { qpdfview_sharedpainter_callback = cb; }
    inline void setQPdfView_InputMethodEvent_Callback(QPdfView_InputMethodEvent_Callback cb) { qpdfview_inputmethodevent_callback = cb; }
    inline void setQPdfView_InputMethodQuery_Callback(QPdfView_InputMethodQuery_Callback cb) { qpdfview_inputmethodquery_callback = cb; }
    inline void setQPdfView_FocusNextPrevChild_Callback(QPdfView_FocusNextPrevChild_Callback cb) { qpdfview_focusnextprevchild_callback = cb; }
    inline void setQPdfView_TimerEvent_Callback(QPdfView_TimerEvent_Callback cb) { qpdfview_timerevent_callback = cb; }
    inline void setQPdfView_ChildEvent_Callback(QPdfView_ChildEvent_Callback cb) { qpdfview_childevent_callback = cb; }
    inline void setQPdfView_CustomEvent_Callback(QPdfView_CustomEvent_Callback cb) { qpdfview_customevent_callback = cb; }
    inline void setQPdfView_ConnectNotify_Callback(QPdfView_ConnectNotify_Callback cb) { qpdfview_connectnotify_callback = cb; }
    inline void setQPdfView_DisconnectNotify_Callback(QPdfView_DisconnectNotify_Callback cb) { qpdfview_disconnectnotify_callback = cb; }
    inline void setQPdfView_SetViewportMargins_Callback(QPdfView_SetViewportMargins_Callback cb) { qpdfview_setviewportmargins_callback = cb; }
    inline void setQPdfView_ViewportMargins_Callback(QPdfView_ViewportMargins_Callback cb) { qpdfview_viewportmargins_callback = cb; }
    inline void setQPdfView_DrawFrame_Callback(QPdfView_DrawFrame_Callback cb) { qpdfview_drawframe_callback = cb; }
    inline void setQPdfView_UpdateMicroFocus_Callback(QPdfView_UpdateMicroFocus_Callback cb) { qpdfview_updatemicrofocus_callback = cb; }
    inline void setQPdfView_Create_Callback(QPdfView_Create_Callback cb) { qpdfview_create_callback = cb; }
    inline void setQPdfView_Destroy_Callback(QPdfView_Destroy_Callback cb) { qpdfview_destroy_callback = cb; }
    inline void setQPdfView_FocusNextChild_Callback(QPdfView_FocusNextChild_Callback cb) { qpdfview_focusnextchild_callback = cb; }
    inline void setQPdfView_FocusPreviousChild_Callback(QPdfView_FocusPreviousChild_Callback cb) { qpdfview_focuspreviouschild_callback = cb; }
    inline void setQPdfView_Sender_Callback(QPdfView_Sender_Callback cb) { qpdfview_sender_callback = cb; }
    inline void setQPdfView_SenderSignalIndex_Callback(QPdfView_SenderSignalIndex_Callback cb) { qpdfview_sendersignalindex_callback = cb; }
    inline void setQPdfView_Receivers_Callback(QPdfView_Receivers_Callback cb) { qpdfview_receivers_callback = cb; }
    inline void setQPdfView_IsSignalConnected_Callback(QPdfView_IsSignalConnected_Callback cb) { qpdfview_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQPdfView_Metacall_IsBase(bool value) const { qpdfview_metacall_isbase = value; }
    inline void setQPdfView_PaintEvent_IsBase(bool value) const { qpdfview_paintevent_isbase = value; }
    inline void setQPdfView_ResizeEvent_IsBase(bool value) const { qpdfview_resizeevent_isbase = value; }
    inline void setQPdfView_ScrollContentsBy_IsBase(bool value) const { qpdfview_scrollcontentsby_isbase = value; }
    inline void setQPdfView_MinimumSizeHint_IsBase(bool value) const { qpdfview_minimumsizehint_isbase = value; }
    inline void setQPdfView_SizeHint_IsBase(bool value) const { qpdfview_sizehint_isbase = value; }
    inline void setQPdfView_SetupViewport_IsBase(bool value) const { qpdfview_setupviewport_isbase = value; }
    inline void setQPdfView_EventFilter_IsBase(bool value) const { qpdfview_eventfilter_isbase = value; }
    inline void setQPdfView_Event_IsBase(bool value) const { qpdfview_event_isbase = value; }
    inline void setQPdfView_ViewportEvent_IsBase(bool value) const { qpdfview_viewportevent_isbase = value; }
    inline void setQPdfView_MousePressEvent_IsBase(bool value) const { qpdfview_mousepressevent_isbase = value; }
    inline void setQPdfView_MouseReleaseEvent_IsBase(bool value) const { qpdfview_mousereleaseevent_isbase = value; }
    inline void setQPdfView_MouseDoubleClickEvent_IsBase(bool value) const { qpdfview_mousedoubleclickevent_isbase = value; }
    inline void setQPdfView_MouseMoveEvent_IsBase(bool value) const { qpdfview_mousemoveevent_isbase = value; }
    inline void setQPdfView_WheelEvent_IsBase(bool value) const { qpdfview_wheelevent_isbase = value; }
    inline void setQPdfView_ContextMenuEvent_IsBase(bool value) const { qpdfview_contextmenuevent_isbase = value; }
    inline void setQPdfView_DragEnterEvent_IsBase(bool value) const { qpdfview_dragenterevent_isbase = value; }
    inline void setQPdfView_DragMoveEvent_IsBase(bool value) const { qpdfview_dragmoveevent_isbase = value; }
    inline void setQPdfView_DragLeaveEvent_IsBase(bool value) const { qpdfview_dragleaveevent_isbase = value; }
    inline void setQPdfView_DropEvent_IsBase(bool value) const { qpdfview_dropevent_isbase = value; }
    inline void setQPdfView_KeyPressEvent_IsBase(bool value) const { qpdfview_keypressevent_isbase = value; }
    inline void setQPdfView_ViewportSizeHint_IsBase(bool value) const { qpdfview_viewportsizehint_isbase = value; }
    inline void setQPdfView_ChangeEvent_IsBase(bool value) const { qpdfview_changeevent_isbase = value; }
    inline void setQPdfView_InitStyleOption_IsBase(bool value) const { qpdfview_initstyleoption_isbase = value; }
    inline void setQPdfView_DevType_IsBase(bool value) const { qpdfview_devtype_isbase = value; }
    inline void setQPdfView_SetVisible_IsBase(bool value) const { qpdfview_setvisible_isbase = value; }
    inline void setQPdfView_HeightForWidth_IsBase(bool value) const { qpdfview_heightforwidth_isbase = value; }
    inline void setQPdfView_HasHeightForWidth_IsBase(bool value) const { qpdfview_hasheightforwidth_isbase = value; }
    inline void setQPdfView_PaintEngine_IsBase(bool value) const { qpdfview_paintengine_isbase = value; }
    inline void setQPdfView_KeyReleaseEvent_IsBase(bool value) const { qpdfview_keyreleaseevent_isbase = value; }
    inline void setQPdfView_FocusInEvent_IsBase(bool value) const { qpdfview_focusinevent_isbase = value; }
    inline void setQPdfView_FocusOutEvent_IsBase(bool value) const { qpdfview_focusoutevent_isbase = value; }
    inline void setQPdfView_EnterEvent_IsBase(bool value) const { qpdfview_enterevent_isbase = value; }
    inline void setQPdfView_LeaveEvent_IsBase(bool value) const { qpdfview_leaveevent_isbase = value; }
    inline void setQPdfView_MoveEvent_IsBase(bool value) const { qpdfview_moveevent_isbase = value; }
    inline void setQPdfView_CloseEvent_IsBase(bool value) const { qpdfview_closeevent_isbase = value; }
    inline void setQPdfView_TabletEvent_IsBase(bool value) const { qpdfview_tabletevent_isbase = value; }
    inline void setQPdfView_ActionEvent_IsBase(bool value) const { qpdfview_actionevent_isbase = value; }
    inline void setQPdfView_ShowEvent_IsBase(bool value) const { qpdfview_showevent_isbase = value; }
    inline void setQPdfView_HideEvent_IsBase(bool value) const { qpdfview_hideevent_isbase = value; }
    inline void setQPdfView_NativeEvent_IsBase(bool value) const { qpdfview_nativeevent_isbase = value; }
    inline void setQPdfView_Metric_IsBase(bool value) const { qpdfview_metric_isbase = value; }
    inline void setQPdfView_InitPainter_IsBase(bool value) const { qpdfview_initpainter_isbase = value; }
    inline void setQPdfView_Redirected_IsBase(bool value) const { qpdfview_redirected_isbase = value; }
    inline void setQPdfView_SharedPainter_IsBase(bool value) const { qpdfview_sharedpainter_isbase = value; }
    inline void setQPdfView_InputMethodEvent_IsBase(bool value) const { qpdfview_inputmethodevent_isbase = value; }
    inline void setQPdfView_InputMethodQuery_IsBase(bool value) const { qpdfview_inputmethodquery_isbase = value; }
    inline void setQPdfView_FocusNextPrevChild_IsBase(bool value) const { qpdfview_focusnextprevchild_isbase = value; }
    inline void setQPdfView_TimerEvent_IsBase(bool value) const { qpdfview_timerevent_isbase = value; }
    inline void setQPdfView_ChildEvent_IsBase(bool value) const { qpdfview_childevent_isbase = value; }
    inline void setQPdfView_CustomEvent_IsBase(bool value) const { qpdfview_customevent_isbase = value; }
    inline void setQPdfView_ConnectNotify_IsBase(bool value) const { qpdfview_connectnotify_isbase = value; }
    inline void setQPdfView_DisconnectNotify_IsBase(bool value) const { qpdfview_disconnectnotify_isbase = value; }
    inline void setQPdfView_SetViewportMargins_IsBase(bool value) const { qpdfview_setviewportmargins_isbase = value; }
    inline void setQPdfView_ViewportMargins_IsBase(bool value) const { qpdfview_viewportmargins_isbase = value; }
    inline void setQPdfView_DrawFrame_IsBase(bool value) const { qpdfview_drawframe_isbase = value; }
    inline void setQPdfView_UpdateMicroFocus_IsBase(bool value) const { qpdfview_updatemicrofocus_isbase = value; }
    inline void setQPdfView_Create_IsBase(bool value) const { qpdfview_create_isbase = value; }
    inline void setQPdfView_Destroy_IsBase(bool value) const { qpdfview_destroy_isbase = value; }
    inline void setQPdfView_FocusNextChild_IsBase(bool value) const { qpdfview_focusnextchild_isbase = value; }
    inline void setQPdfView_FocusPreviousChild_IsBase(bool value) const { qpdfview_focuspreviouschild_isbase = value; }
    inline void setQPdfView_Sender_IsBase(bool value) const { qpdfview_sender_isbase = value; }
    inline void setQPdfView_SenderSignalIndex_IsBase(bool value) const { qpdfview_sendersignalindex_isbase = value; }
    inline void setQPdfView_Receivers_IsBase(bool value) const { qpdfview_receivers_isbase = value; }
    inline void setQPdfView_IsSignalConnected_IsBase(bool value) const { qpdfview_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpdfview_metacall_isbase) {
            qpdfview_metacall_isbase = false;
            return QPdfView::qt_metacall(param1, param2, param3);
        } else if (qpdfview_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qpdfview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPdfView::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qpdfview_paintevent_isbase) {
            qpdfview_paintevent_isbase = false;
            QPdfView::paintEvent(event);
        } else if (qpdfview_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qpdfview_paintevent_callback(this, cbval1);
        } else {
            QPdfView::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qpdfview_resizeevent_isbase) {
            qpdfview_resizeevent_isbase = false;
            QPdfView::resizeEvent(event);
        } else if (qpdfview_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qpdfview_resizeevent_callback(this, cbval1);
        } else {
            QPdfView::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qpdfview_scrollcontentsby_isbase) {
            qpdfview_scrollcontentsby_isbase = false;
            QPdfView::scrollContentsBy(dx, dy);
        } else if (qpdfview_scrollcontentsby_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            qpdfview_scrollcontentsby_callback(this, cbval1, cbval2);
        } else {
            QPdfView::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qpdfview_minimumsizehint_isbase) {
            qpdfview_minimumsizehint_isbase = false;
            return QPdfView::minimumSizeHint();
        } else if (qpdfview_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qpdfview_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QPdfView::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qpdfview_sizehint_isbase) {
            qpdfview_sizehint_isbase = false;
            return QPdfView::sizeHint();
        } else if (qpdfview_sizehint_callback != nullptr) {
            QSize* callback_ret = qpdfview_sizehint_callback();
            return *callback_ret;
        } else {
            return QPdfView::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qpdfview_setupviewport_isbase) {
            qpdfview_setupviewport_isbase = false;
            QPdfView::setupViewport(viewport);
        } else if (qpdfview_setupviewport_callback != nullptr) {
            QWidget* cbval1 = viewport;

            qpdfview_setupviewport_callback(this, cbval1);
        } else {
            QPdfView::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qpdfview_eventfilter_isbase) {
            qpdfview_eventfilter_isbase = false;
            return QPdfView::eventFilter(param1, param2);
        } else if (qpdfview_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = qpdfview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPdfView::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qpdfview_event_isbase) {
            qpdfview_event_isbase = false;
            return QPdfView::event(param1);
        } else if (qpdfview_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = qpdfview_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfView::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (qpdfview_viewportevent_isbase) {
            qpdfview_viewportevent_isbase = false;
            return QPdfView::viewportEvent(param1);
        } else if (qpdfview_viewportevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = qpdfview_viewportevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfView::viewportEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qpdfview_mousepressevent_isbase) {
            qpdfview_mousepressevent_isbase = false;
            QPdfView::mousePressEvent(param1);
        } else if (qpdfview_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qpdfview_mousepressevent_callback(this, cbval1);
        } else {
            QPdfView::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qpdfview_mousereleaseevent_isbase) {
            qpdfview_mousereleaseevent_isbase = false;
            QPdfView::mouseReleaseEvent(param1);
        } else if (qpdfview_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qpdfview_mousereleaseevent_callback(this, cbval1);
        } else {
            QPdfView::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qpdfview_mousedoubleclickevent_isbase) {
            qpdfview_mousedoubleclickevent_isbase = false;
            QPdfView::mouseDoubleClickEvent(param1);
        } else if (qpdfview_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qpdfview_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QPdfView::mouseDoubleClickEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qpdfview_mousemoveevent_isbase) {
            qpdfview_mousemoveevent_isbase = false;
            QPdfView::mouseMoveEvent(param1);
        } else if (qpdfview_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qpdfview_mousemoveevent_callback(this, cbval1);
        } else {
            QPdfView::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qpdfview_wheelevent_isbase) {
            qpdfview_wheelevent_isbase = false;
            QPdfView::wheelEvent(param1);
        } else if (qpdfview_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = param1;

            qpdfview_wheelevent_callback(this, cbval1);
        } else {
            QPdfView::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qpdfview_contextmenuevent_isbase) {
            qpdfview_contextmenuevent_isbase = false;
            QPdfView::contextMenuEvent(param1);
        } else if (qpdfview_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            qpdfview_contextmenuevent_callback(this, cbval1);
        } else {
            QPdfView::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qpdfview_dragenterevent_isbase) {
            qpdfview_dragenterevent_isbase = false;
            QPdfView::dragEnterEvent(param1);
        } else if (qpdfview_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = param1;

            qpdfview_dragenterevent_callback(this, cbval1);
        } else {
            QPdfView::dragEnterEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (qpdfview_dragmoveevent_isbase) {
            qpdfview_dragmoveevent_isbase = false;
            QPdfView::dragMoveEvent(param1);
        } else if (qpdfview_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = param1;

            qpdfview_dragmoveevent_callback(this, cbval1);
        } else {
            QPdfView::dragMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (qpdfview_dragleaveevent_isbase) {
            qpdfview_dragleaveevent_isbase = false;
            QPdfView::dragLeaveEvent(param1);
        } else if (qpdfview_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = param1;

            qpdfview_dragleaveevent_callback(this, cbval1);
        } else {
            QPdfView::dragLeaveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qpdfview_dropevent_isbase) {
            qpdfview_dropevent_isbase = false;
            QPdfView::dropEvent(param1);
        } else if (qpdfview_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = param1;

            qpdfview_dropevent_callback(this, cbval1);
        } else {
            QPdfView::dropEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qpdfview_keypressevent_isbase) {
            qpdfview_keypressevent_isbase = false;
            QPdfView::keyPressEvent(param1);
        } else if (qpdfview_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qpdfview_keypressevent_callback(this, cbval1);
        } else {
            QPdfView::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qpdfview_viewportsizehint_isbase) {
            qpdfview_viewportsizehint_isbase = false;
            return QPdfView::viewportSizeHint();
        } else if (qpdfview_viewportsizehint_callback != nullptr) {
            QSize* callback_ret = qpdfview_viewportsizehint_callback();
            return *callback_ret;
        } else {
            return QPdfView::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qpdfview_changeevent_isbase) {
            qpdfview_changeevent_isbase = false;
            QPdfView::changeEvent(param1);
        } else if (qpdfview_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qpdfview_changeevent_callback(this, cbval1);
        } else {
            QPdfView::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qpdfview_initstyleoption_isbase) {
            qpdfview_initstyleoption_isbase = false;
            QPdfView::initStyleOption(option);
        } else if (qpdfview_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            qpdfview_initstyleoption_callback(this, cbval1);
        } else {
            QPdfView::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qpdfview_devtype_isbase) {
            qpdfview_devtype_isbase = false;
            return QPdfView::devType();
        } else if (qpdfview_devtype_callback != nullptr) {
            int callback_ret = qpdfview_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPdfView::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qpdfview_setvisible_isbase) {
            qpdfview_setvisible_isbase = false;
            QPdfView::setVisible(visible);
        } else if (qpdfview_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qpdfview_setvisible_callback(this, cbval1);
        } else {
            QPdfView::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qpdfview_heightforwidth_isbase) {
            qpdfview_heightforwidth_isbase = false;
            return QPdfView::heightForWidth(param1);
        } else if (qpdfview_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qpdfview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPdfView::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qpdfview_hasheightforwidth_isbase) {
            qpdfview_hasheightforwidth_isbase = false;
            return QPdfView::hasHeightForWidth();
        } else if (qpdfview_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qpdfview_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QPdfView::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qpdfview_paintengine_isbase) {
            qpdfview_paintengine_isbase = false;
            return QPdfView::paintEngine();
        } else if (qpdfview_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qpdfview_paintengine_callback();
            return callback_ret;
        } else {
            return QPdfView::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qpdfview_keyreleaseevent_isbase) {
            qpdfview_keyreleaseevent_isbase = false;
            QPdfView::keyReleaseEvent(event);
        } else if (qpdfview_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qpdfview_keyreleaseevent_callback(this, cbval1);
        } else {
            QPdfView::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qpdfview_focusinevent_isbase) {
            qpdfview_focusinevent_isbase = false;
            QPdfView::focusInEvent(event);
        } else if (qpdfview_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qpdfview_focusinevent_callback(this, cbval1);
        } else {
            QPdfView::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qpdfview_focusoutevent_isbase) {
            qpdfview_focusoutevent_isbase = false;
            QPdfView::focusOutEvent(event);
        } else if (qpdfview_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qpdfview_focusoutevent_callback(this, cbval1);
        } else {
            QPdfView::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qpdfview_enterevent_isbase) {
            qpdfview_enterevent_isbase = false;
            QPdfView::enterEvent(event);
        } else if (qpdfview_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qpdfview_enterevent_callback(this, cbval1);
        } else {
            QPdfView::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qpdfview_leaveevent_isbase) {
            qpdfview_leaveevent_isbase = false;
            QPdfView::leaveEvent(event);
        } else if (qpdfview_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qpdfview_leaveevent_callback(this, cbval1);
        } else {
            QPdfView::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qpdfview_moveevent_isbase) {
            qpdfview_moveevent_isbase = false;
            QPdfView::moveEvent(event);
        } else if (qpdfview_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qpdfview_moveevent_callback(this, cbval1);
        } else {
            QPdfView::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qpdfview_closeevent_isbase) {
            qpdfview_closeevent_isbase = false;
            QPdfView::closeEvent(event);
        } else if (qpdfview_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qpdfview_closeevent_callback(this, cbval1);
        } else {
            QPdfView::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qpdfview_tabletevent_isbase) {
            qpdfview_tabletevent_isbase = false;
            QPdfView::tabletEvent(event);
        } else if (qpdfview_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qpdfview_tabletevent_callback(this, cbval1);
        } else {
            QPdfView::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qpdfview_actionevent_isbase) {
            qpdfview_actionevent_isbase = false;
            QPdfView::actionEvent(event);
        } else if (qpdfview_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qpdfview_actionevent_callback(this, cbval1);
        } else {
            QPdfView::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qpdfview_showevent_isbase) {
            qpdfview_showevent_isbase = false;
            QPdfView::showEvent(event);
        } else if (qpdfview_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qpdfview_showevent_callback(this, cbval1);
        } else {
            QPdfView::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qpdfview_hideevent_isbase) {
            qpdfview_hideevent_isbase = false;
            QPdfView::hideEvent(event);
        } else if (qpdfview_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qpdfview_hideevent_callback(this, cbval1);
        } else {
            QPdfView::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qpdfview_nativeevent_isbase) {
            qpdfview_nativeevent_isbase = false;
            return QPdfView::nativeEvent(eventType, message, result);
        } else if (qpdfview_nativeevent_callback != nullptr) {
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

            bool callback_ret = qpdfview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QPdfView::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qpdfview_metric_isbase) {
            qpdfview_metric_isbase = false;
            return QPdfView::metric(param1);
        } else if (qpdfview_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qpdfview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPdfView::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qpdfview_initpainter_isbase) {
            qpdfview_initpainter_isbase = false;
            QPdfView::initPainter(painter);
        } else if (qpdfview_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qpdfview_initpainter_callback(this, cbval1);
        } else {
            QPdfView::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qpdfview_redirected_isbase) {
            qpdfview_redirected_isbase = false;
            return QPdfView::redirected(offset);
        } else if (qpdfview_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qpdfview_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfView::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qpdfview_sharedpainter_isbase) {
            qpdfview_sharedpainter_isbase = false;
            return QPdfView::sharedPainter();
        } else if (qpdfview_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qpdfview_sharedpainter_callback();
            return callback_ret;
        } else {
            return QPdfView::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qpdfview_inputmethodevent_isbase) {
            qpdfview_inputmethodevent_isbase = false;
            QPdfView::inputMethodEvent(param1);
        } else if (qpdfview_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qpdfview_inputmethodevent_callback(this, cbval1);
        } else {
            QPdfView::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qpdfview_inputmethodquery_isbase) {
            qpdfview_inputmethodquery_isbase = false;
            return QPdfView::inputMethodQuery(param1);
        } else if (qpdfview_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qpdfview_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QPdfView::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qpdfview_focusnextprevchild_isbase) {
            qpdfview_focusnextprevchild_isbase = false;
            return QPdfView::focusNextPrevChild(next);
        } else if (qpdfview_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qpdfview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfView::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpdfview_timerevent_isbase) {
            qpdfview_timerevent_isbase = false;
            QPdfView::timerEvent(event);
        } else if (qpdfview_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qpdfview_timerevent_callback(this, cbval1);
        } else {
            QPdfView::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpdfview_childevent_isbase) {
            qpdfview_childevent_isbase = false;
            QPdfView::childEvent(event);
        } else if (qpdfview_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qpdfview_childevent_callback(this, cbval1);
        } else {
            QPdfView::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpdfview_customevent_isbase) {
            qpdfview_customevent_isbase = false;
            QPdfView::customEvent(event);
        } else if (qpdfview_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qpdfview_customevent_callback(this, cbval1);
        } else {
            QPdfView::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpdfview_connectnotify_isbase) {
            qpdfview_connectnotify_isbase = false;
            QPdfView::connectNotify(signal);
        } else if (qpdfview_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpdfview_connectnotify_callback(this, cbval1);
        } else {
            QPdfView::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpdfview_disconnectnotify_isbase) {
            qpdfview_disconnectnotify_isbase = false;
            QPdfView::disconnectNotify(signal);
        } else if (qpdfview_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpdfview_disconnectnotify_callback(this, cbval1);
        } else {
            QPdfView::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qpdfview_setviewportmargins_isbase) {
            qpdfview_setviewportmargins_isbase = false;
            QPdfView::setViewportMargins(left, top, right, bottom);
        } else if (qpdfview_setviewportmargins_callback != nullptr) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            qpdfview_setviewportmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QPdfView::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qpdfview_viewportmargins_isbase) {
            qpdfview_viewportmargins_isbase = false;
            return QPdfView::viewportMargins();
        } else if (qpdfview_viewportmargins_callback != nullptr) {
            QMargins* callback_ret = qpdfview_viewportmargins_callback();
            return *callback_ret;
        } else {
            return QPdfView::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qpdfview_drawframe_isbase) {
            qpdfview_drawframe_isbase = false;
            QPdfView::drawFrame(param1);
        } else if (qpdfview_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            qpdfview_drawframe_callback(this, cbval1);
        } else {
            QPdfView::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qpdfview_updatemicrofocus_isbase) {
            qpdfview_updatemicrofocus_isbase = false;
            QPdfView::updateMicroFocus();
        } else if (qpdfview_updatemicrofocus_callback != nullptr) {
            qpdfview_updatemicrofocus_callback();
        } else {
            QPdfView::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qpdfview_create_isbase) {
            qpdfview_create_isbase = false;
            QPdfView::create();
        } else if (qpdfview_create_callback != nullptr) {
            qpdfview_create_callback();
        } else {
            QPdfView::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qpdfview_destroy_isbase) {
            qpdfview_destroy_isbase = false;
            QPdfView::destroy();
        } else if (qpdfview_destroy_callback != nullptr) {
            qpdfview_destroy_callback();
        } else {
            QPdfView::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qpdfview_focusnextchild_isbase) {
            qpdfview_focusnextchild_isbase = false;
            return QPdfView::focusNextChild();
        } else if (qpdfview_focusnextchild_callback != nullptr) {
            bool callback_ret = qpdfview_focusnextchild_callback();
            return callback_ret;
        } else {
            return QPdfView::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qpdfview_focuspreviouschild_isbase) {
            qpdfview_focuspreviouschild_isbase = false;
            return QPdfView::focusPreviousChild();
        } else if (qpdfview_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qpdfview_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QPdfView::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpdfview_sender_isbase) {
            qpdfview_sender_isbase = false;
            return QPdfView::sender();
        } else if (qpdfview_sender_callback != nullptr) {
            QObject* callback_ret = qpdfview_sender_callback();
            return callback_ret;
        } else {
            return QPdfView::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpdfview_sendersignalindex_isbase) {
            qpdfview_sendersignalindex_isbase = false;
            return QPdfView::senderSignalIndex();
        } else if (qpdfview_sendersignalindex_callback != nullptr) {
            int callback_ret = qpdfview_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPdfView::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpdfview_receivers_isbase) {
            qpdfview_receivers_isbase = false;
            return QPdfView::receivers(signal);
        } else if (qpdfview_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qpdfview_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPdfView::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpdfview_issignalconnected_isbase) {
            qpdfview_issignalconnected_isbase = false;
            return QPdfView::isSignalConnected(signal);
        } else if (qpdfview_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qpdfview_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPdfView::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QPdfView_PaintEvent(QPdfView* self, QPaintEvent* event);
    friend void QPdfView_QBasePaintEvent(QPdfView* self, QPaintEvent* event);
    friend void QPdfView_ResizeEvent(QPdfView* self, QResizeEvent* event);
    friend void QPdfView_QBaseResizeEvent(QPdfView* self, QResizeEvent* event);
    friend void QPdfView_ScrollContentsBy(QPdfView* self, int dx, int dy);
    friend void QPdfView_QBaseScrollContentsBy(QPdfView* self, int dx, int dy);
    friend bool QPdfView_EventFilter(QPdfView* self, QObject* param1, QEvent* param2);
    friend bool QPdfView_QBaseEventFilter(QPdfView* self, QObject* param1, QEvent* param2);
    friend bool QPdfView_Event(QPdfView* self, QEvent* param1);
    friend bool QPdfView_QBaseEvent(QPdfView* self, QEvent* param1);
    friend bool QPdfView_ViewportEvent(QPdfView* self, QEvent* param1);
    friend bool QPdfView_QBaseViewportEvent(QPdfView* self, QEvent* param1);
    friend void QPdfView_MousePressEvent(QPdfView* self, QMouseEvent* param1);
    friend void QPdfView_QBaseMousePressEvent(QPdfView* self, QMouseEvent* param1);
    friend void QPdfView_MouseReleaseEvent(QPdfView* self, QMouseEvent* param1);
    friend void QPdfView_QBaseMouseReleaseEvent(QPdfView* self, QMouseEvent* param1);
    friend void QPdfView_MouseDoubleClickEvent(QPdfView* self, QMouseEvent* param1);
    friend void QPdfView_QBaseMouseDoubleClickEvent(QPdfView* self, QMouseEvent* param1);
    friend void QPdfView_MouseMoveEvent(QPdfView* self, QMouseEvent* param1);
    friend void QPdfView_QBaseMouseMoveEvent(QPdfView* self, QMouseEvent* param1);
    friend void QPdfView_WheelEvent(QPdfView* self, QWheelEvent* param1);
    friend void QPdfView_QBaseWheelEvent(QPdfView* self, QWheelEvent* param1);
    friend void QPdfView_ContextMenuEvent(QPdfView* self, QContextMenuEvent* param1);
    friend void QPdfView_QBaseContextMenuEvent(QPdfView* self, QContextMenuEvent* param1);
    friend void QPdfView_DragEnterEvent(QPdfView* self, QDragEnterEvent* param1);
    friend void QPdfView_QBaseDragEnterEvent(QPdfView* self, QDragEnterEvent* param1);
    friend void QPdfView_DragMoveEvent(QPdfView* self, QDragMoveEvent* param1);
    friend void QPdfView_QBaseDragMoveEvent(QPdfView* self, QDragMoveEvent* param1);
    friend void QPdfView_DragLeaveEvent(QPdfView* self, QDragLeaveEvent* param1);
    friend void QPdfView_QBaseDragLeaveEvent(QPdfView* self, QDragLeaveEvent* param1);
    friend void QPdfView_DropEvent(QPdfView* self, QDropEvent* param1);
    friend void QPdfView_QBaseDropEvent(QPdfView* self, QDropEvent* param1);
    friend void QPdfView_KeyPressEvent(QPdfView* self, QKeyEvent* param1);
    friend void QPdfView_QBaseKeyPressEvent(QPdfView* self, QKeyEvent* param1);
    friend QSize* QPdfView_ViewportSizeHint(const QPdfView* self);
    friend QSize* QPdfView_QBaseViewportSizeHint(const QPdfView* self);
    friend void QPdfView_ChangeEvent(QPdfView* self, QEvent* param1);
    friend void QPdfView_QBaseChangeEvent(QPdfView* self, QEvent* param1);
    friend void QPdfView_InitStyleOption(const QPdfView* self, QStyleOptionFrame* option);
    friend void QPdfView_QBaseInitStyleOption(const QPdfView* self, QStyleOptionFrame* option);
    friend void QPdfView_KeyReleaseEvent(QPdfView* self, QKeyEvent* event);
    friend void QPdfView_QBaseKeyReleaseEvent(QPdfView* self, QKeyEvent* event);
    friend void QPdfView_FocusInEvent(QPdfView* self, QFocusEvent* event);
    friend void QPdfView_QBaseFocusInEvent(QPdfView* self, QFocusEvent* event);
    friend void QPdfView_FocusOutEvent(QPdfView* self, QFocusEvent* event);
    friend void QPdfView_QBaseFocusOutEvent(QPdfView* self, QFocusEvent* event);
    friend void QPdfView_EnterEvent(QPdfView* self, QEnterEvent* event);
    friend void QPdfView_QBaseEnterEvent(QPdfView* self, QEnterEvent* event);
    friend void QPdfView_LeaveEvent(QPdfView* self, QEvent* event);
    friend void QPdfView_QBaseLeaveEvent(QPdfView* self, QEvent* event);
    friend void QPdfView_MoveEvent(QPdfView* self, QMoveEvent* event);
    friend void QPdfView_QBaseMoveEvent(QPdfView* self, QMoveEvent* event);
    friend void QPdfView_CloseEvent(QPdfView* self, QCloseEvent* event);
    friend void QPdfView_QBaseCloseEvent(QPdfView* self, QCloseEvent* event);
    friend void QPdfView_TabletEvent(QPdfView* self, QTabletEvent* event);
    friend void QPdfView_QBaseTabletEvent(QPdfView* self, QTabletEvent* event);
    friend void QPdfView_ActionEvent(QPdfView* self, QActionEvent* event);
    friend void QPdfView_QBaseActionEvent(QPdfView* self, QActionEvent* event);
    friend void QPdfView_ShowEvent(QPdfView* self, QShowEvent* event);
    friend void QPdfView_QBaseShowEvent(QPdfView* self, QShowEvent* event);
    friend void QPdfView_HideEvent(QPdfView* self, QHideEvent* event);
    friend void QPdfView_QBaseHideEvent(QPdfView* self, QHideEvent* event);
    friend bool QPdfView_NativeEvent(QPdfView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QPdfView_QBaseNativeEvent(QPdfView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QPdfView_Metric(const QPdfView* self, int param1);
    friend int QPdfView_QBaseMetric(const QPdfView* self, int param1);
    friend void QPdfView_InitPainter(const QPdfView* self, QPainter* painter);
    friend void QPdfView_QBaseInitPainter(const QPdfView* self, QPainter* painter);
    friend QPaintDevice* QPdfView_Redirected(const QPdfView* self, QPoint* offset);
    friend QPaintDevice* QPdfView_QBaseRedirected(const QPdfView* self, QPoint* offset);
    friend QPainter* QPdfView_SharedPainter(const QPdfView* self);
    friend QPainter* QPdfView_QBaseSharedPainter(const QPdfView* self);
    friend void QPdfView_InputMethodEvent(QPdfView* self, QInputMethodEvent* param1);
    friend void QPdfView_QBaseInputMethodEvent(QPdfView* self, QInputMethodEvent* param1);
    friend bool QPdfView_FocusNextPrevChild(QPdfView* self, bool next);
    friend bool QPdfView_QBaseFocusNextPrevChild(QPdfView* self, bool next);
    friend void QPdfView_TimerEvent(QPdfView* self, QTimerEvent* event);
    friend void QPdfView_QBaseTimerEvent(QPdfView* self, QTimerEvent* event);
    friend void QPdfView_ChildEvent(QPdfView* self, QChildEvent* event);
    friend void QPdfView_QBaseChildEvent(QPdfView* self, QChildEvent* event);
    friend void QPdfView_CustomEvent(QPdfView* self, QEvent* event);
    friend void QPdfView_QBaseCustomEvent(QPdfView* self, QEvent* event);
    friend void QPdfView_ConnectNotify(QPdfView* self, const QMetaMethod* signal);
    friend void QPdfView_QBaseConnectNotify(QPdfView* self, const QMetaMethod* signal);
    friend void QPdfView_DisconnectNotify(QPdfView* self, const QMetaMethod* signal);
    friend void QPdfView_QBaseDisconnectNotify(QPdfView* self, const QMetaMethod* signal);
    friend void QPdfView_SetViewportMargins(QPdfView* self, int left, int top, int right, int bottom);
    friend void QPdfView_QBaseSetViewportMargins(QPdfView* self, int left, int top, int right, int bottom);
    friend QMargins* QPdfView_ViewportMargins(const QPdfView* self);
    friend QMargins* QPdfView_QBaseViewportMargins(const QPdfView* self);
    friend void QPdfView_DrawFrame(QPdfView* self, QPainter* param1);
    friend void QPdfView_QBaseDrawFrame(QPdfView* self, QPainter* param1);
    friend void QPdfView_UpdateMicroFocus(QPdfView* self);
    friend void QPdfView_QBaseUpdateMicroFocus(QPdfView* self);
    friend void QPdfView_Create(QPdfView* self);
    friend void QPdfView_QBaseCreate(QPdfView* self);
    friend void QPdfView_Destroy(QPdfView* self);
    friend void QPdfView_QBaseDestroy(QPdfView* self);
    friend bool QPdfView_FocusNextChild(QPdfView* self);
    friend bool QPdfView_QBaseFocusNextChild(QPdfView* self);
    friend bool QPdfView_FocusPreviousChild(QPdfView* self);
    friend bool QPdfView_QBaseFocusPreviousChild(QPdfView* self);
    friend QObject* QPdfView_Sender(const QPdfView* self);
    friend QObject* QPdfView_QBaseSender(const QPdfView* self);
    friend int QPdfView_SenderSignalIndex(const QPdfView* self);
    friend int QPdfView_QBaseSenderSignalIndex(const QPdfView* self);
    friend int QPdfView_Receivers(const QPdfView* self, const char* signal);
    friend int QPdfView_QBaseReceivers(const QPdfView* self, const char* signal);
    friend bool QPdfView_IsSignalConnected(const QPdfView* self, const QMetaMethod* signal);
    friend bool QPdfView_QBaseIsSignalConnected(const QPdfView* self, const QMetaMethod* signal);
};

#endif
