#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQCHARTVIEW_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQCHARTVIEW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QChartView so that we can call protected methods
class VirtualQChartView final : public QChartView {

  public:
    // Virtual class boolean flag
    bool isVirtualQChartView = true;

    // Virtual class public types (including callbacks)
    using QChartView_Metacall_Callback = int (*)(QChartView*, int, int, void**);
    using QChartView_ResizeEvent_Callback = void (*)(QChartView*, QResizeEvent*);
    using QChartView_MousePressEvent_Callback = void (*)(QChartView*, QMouseEvent*);
    using QChartView_MouseMoveEvent_Callback = void (*)(QChartView*, QMouseEvent*);
    using QChartView_MouseReleaseEvent_Callback = void (*)(QChartView*, QMouseEvent*);
    using QChartView_SizeHint_Callback = QSize* (*)();
    using QChartView_InputMethodQuery_Callback = QVariant* (*)(const QChartView*, int);
    using QChartView_SetupViewport_Callback = void (*)(QChartView*, QWidget*);
    using QChartView_Event_Callback = bool (*)(QChartView*, QEvent*);
    using QChartView_ViewportEvent_Callback = bool (*)(QChartView*, QEvent*);
    using QChartView_ContextMenuEvent_Callback = void (*)(QChartView*, QContextMenuEvent*);
    using QChartView_DragEnterEvent_Callback = void (*)(QChartView*, QDragEnterEvent*);
    using QChartView_DragLeaveEvent_Callback = void (*)(QChartView*, QDragLeaveEvent*);
    using QChartView_DragMoveEvent_Callback = void (*)(QChartView*, QDragMoveEvent*);
    using QChartView_DropEvent_Callback = void (*)(QChartView*, QDropEvent*);
    using QChartView_FocusInEvent_Callback = void (*)(QChartView*, QFocusEvent*);
    using QChartView_FocusNextPrevChild_Callback = bool (*)(QChartView*, bool);
    using QChartView_FocusOutEvent_Callback = void (*)(QChartView*, QFocusEvent*);
    using QChartView_KeyPressEvent_Callback = void (*)(QChartView*, QKeyEvent*);
    using QChartView_KeyReleaseEvent_Callback = void (*)(QChartView*, QKeyEvent*);
    using QChartView_MouseDoubleClickEvent_Callback = void (*)(QChartView*, QMouseEvent*);
    using QChartView_WheelEvent_Callback = void (*)(QChartView*, QWheelEvent*);
    using QChartView_PaintEvent_Callback = void (*)(QChartView*, QPaintEvent*);
    using QChartView_ScrollContentsBy_Callback = void (*)(QChartView*, int, int);
    using QChartView_ShowEvent_Callback = void (*)(QChartView*, QShowEvent*);
    using QChartView_InputMethodEvent_Callback = void (*)(QChartView*, QInputMethodEvent*);
    using QChartView_DrawBackground_Callback = void (*)(QChartView*, QPainter*, QRectF*);
    using QChartView_DrawForeground_Callback = void (*)(QChartView*, QPainter*, QRectF*);
    using QChartView_MinimumSizeHint_Callback = QSize* (*)();
    using QChartView_EventFilter_Callback = bool (*)(QChartView*, QObject*, QEvent*);
    using QChartView_ViewportSizeHint_Callback = QSize* (*)();
    using QChartView_ChangeEvent_Callback = void (*)(QChartView*, QEvent*);
    using QChartView_InitStyleOption_Callback = void (*)(const QChartView*, QStyleOptionFrame*);
    using QChartView_DevType_Callback = int (*)();
    using QChartView_SetVisible_Callback = void (*)(QChartView*, bool);
    using QChartView_HeightForWidth_Callback = int (*)(const QChartView*, int);
    using QChartView_HasHeightForWidth_Callback = bool (*)();
    using QChartView_PaintEngine_Callback = QPaintEngine* (*)();
    using QChartView_EnterEvent_Callback = void (*)(QChartView*, QEnterEvent*);
    using QChartView_LeaveEvent_Callback = void (*)(QChartView*, QEvent*);
    using QChartView_MoveEvent_Callback = void (*)(QChartView*, QMoveEvent*);
    using QChartView_CloseEvent_Callback = void (*)(QChartView*, QCloseEvent*);
    using QChartView_TabletEvent_Callback = void (*)(QChartView*, QTabletEvent*);
    using QChartView_ActionEvent_Callback = void (*)(QChartView*, QActionEvent*);
    using QChartView_HideEvent_Callback = void (*)(QChartView*, QHideEvent*);
    using QChartView_NativeEvent_Callback = bool (*)(QChartView*, libqt_string, void*, intptr_t*);
    using QChartView_Metric_Callback = int (*)(const QChartView*, int);
    using QChartView_InitPainter_Callback = void (*)(const QChartView*, QPainter*);
    using QChartView_Redirected_Callback = QPaintDevice* (*)(const QChartView*, QPoint*);
    using QChartView_SharedPainter_Callback = QPainter* (*)();
    using QChartView_TimerEvent_Callback = void (*)(QChartView*, QTimerEvent*);
    using QChartView_ChildEvent_Callback = void (*)(QChartView*, QChildEvent*);
    using QChartView_CustomEvent_Callback = void (*)(QChartView*, QEvent*);
    using QChartView_ConnectNotify_Callback = void (*)(QChartView*, QMetaMethod*);
    using QChartView_DisconnectNotify_Callback = void (*)(QChartView*, QMetaMethod*);
    using QChartView_SetViewportMargins_Callback = void (*)(QChartView*, int, int, int, int);
    using QChartView_ViewportMargins_Callback = QMargins* (*)();
    using QChartView_DrawFrame_Callback = void (*)(QChartView*, QPainter*);
    using QChartView_UpdateMicroFocus_Callback = void (*)();
    using QChartView_Create_Callback = void (*)();
    using QChartView_Destroy_Callback = void (*)();
    using QChartView_FocusNextChild_Callback = bool (*)();
    using QChartView_FocusPreviousChild_Callback = bool (*)();
    using QChartView_Sender_Callback = QObject* (*)();
    using QChartView_SenderSignalIndex_Callback = int (*)();
    using QChartView_Receivers_Callback = int (*)(const QChartView*, const char*);
    using QChartView_IsSignalConnected_Callback = bool (*)(const QChartView*, QMetaMethod*);
    using QChartView_GetDecodedMetricF_Callback = double (*)(const QChartView*, int, int);

  protected:
    // Instance callback storage
    QChartView_Metacall_Callback qchartview_metacall_callback = nullptr;
    QChartView_ResizeEvent_Callback qchartview_resizeevent_callback = nullptr;
    QChartView_MousePressEvent_Callback qchartview_mousepressevent_callback = nullptr;
    QChartView_MouseMoveEvent_Callback qchartview_mousemoveevent_callback = nullptr;
    QChartView_MouseReleaseEvent_Callback qchartview_mousereleaseevent_callback = nullptr;
    QChartView_SizeHint_Callback qchartview_sizehint_callback = nullptr;
    QChartView_InputMethodQuery_Callback qchartview_inputmethodquery_callback = nullptr;
    QChartView_SetupViewport_Callback qchartview_setupviewport_callback = nullptr;
    QChartView_Event_Callback qchartview_event_callback = nullptr;
    QChartView_ViewportEvent_Callback qchartview_viewportevent_callback = nullptr;
    QChartView_ContextMenuEvent_Callback qchartview_contextmenuevent_callback = nullptr;
    QChartView_DragEnterEvent_Callback qchartview_dragenterevent_callback = nullptr;
    QChartView_DragLeaveEvent_Callback qchartview_dragleaveevent_callback = nullptr;
    QChartView_DragMoveEvent_Callback qchartview_dragmoveevent_callback = nullptr;
    QChartView_DropEvent_Callback qchartview_dropevent_callback = nullptr;
    QChartView_FocusInEvent_Callback qchartview_focusinevent_callback = nullptr;
    QChartView_FocusNextPrevChild_Callback qchartview_focusnextprevchild_callback = nullptr;
    QChartView_FocusOutEvent_Callback qchartview_focusoutevent_callback = nullptr;
    QChartView_KeyPressEvent_Callback qchartview_keypressevent_callback = nullptr;
    QChartView_KeyReleaseEvent_Callback qchartview_keyreleaseevent_callback = nullptr;
    QChartView_MouseDoubleClickEvent_Callback qchartview_mousedoubleclickevent_callback = nullptr;
    QChartView_WheelEvent_Callback qchartview_wheelevent_callback = nullptr;
    QChartView_PaintEvent_Callback qchartview_paintevent_callback = nullptr;
    QChartView_ScrollContentsBy_Callback qchartview_scrollcontentsby_callback = nullptr;
    QChartView_ShowEvent_Callback qchartview_showevent_callback = nullptr;
    QChartView_InputMethodEvent_Callback qchartview_inputmethodevent_callback = nullptr;
    QChartView_DrawBackground_Callback qchartview_drawbackground_callback = nullptr;
    QChartView_DrawForeground_Callback qchartview_drawforeground_callback = nullptr;
    QChartView_MinimumSizeHint_Callback qchartview_minimumsizehint_callback = nullptr;
    QChartView_EventFilter_Callback qchartview_eventfilter_callback = nullptr;
    QChartView_ViewportSizeHint_Callback qchartview_viewportsizehint_callback = nullptr;
    QChartView_ChangeEvent_Callback qchartview_changeevent_callback = nullptr;
    QChartView_InitStyleOption_Callback qchartview_initstyleoption_callback = nullptr;
    QChartView_DevType_Callback qchartview_devtype_callback = nullptr;
    QChartView_SetVisible_Callback qchartview_setvisible_callback = nullptr;
    QChartView_HeightForWidth_Callback qchartview_heightforwidth_callback = nullptr;
    QChartView_HasHeightForWidth_Callback qchartview_hasheightforwidth_callback = nullptr;
    QChartView_PaintEngine_Callback qchartview_paintengine_callback = nullptr;
    QChartView_EnterEvent_Callback qchartview_enterevent_callback = nullptr;
    QChartView_LeaveEvent_Callback qchartview_leaveevent_callback = nullptr;
    QChartView_MoveEvent_Callback qchartview_moveevent_callback = nullptr;
    QChartView_CloseEvent_Callback qchartview_closeevent_callback = nullptr;
    QChartView_TabletEvent_Callback qchartview_tabletevent_callback = nullptr;
    QChartView_ActionEvent_Callback qchartview_actionevent_callback = nullptr;
    QChartView_HideEvent_Callback qchartview_hideevent_callback = nullptr;
    QChartView_NativeEvent_Callback qchartview_nativeevent_callback = nullptr;
    QChartView_Metric_Callback qchartview_metric_callback = nullptr;
    QChartView_InitPainter_Callback qchartview_initpainter_callback = nullptr;
    QChartView_Redirected_Callback qchartview_redirected_callback = nullptr;
    QChartView_SharedPainter_Callback qchartview_sharedpainter_callback = nullptr;
    QChartView_TimerEvent_Callback qchartview_timerevent_callback = nullptr;
    QChartView_ChildEvent_Callback qchartview_childevent_callback = nullptr;
    QChartView_CustomEvent_Callback qchartview_customevent_callback = nullptr;
    QChartView_ConnectNotify_Callback qchartview_connectnotify_callback = nullptr;
    QChartView_DisconnectNotify_Callback qchartview_disconnectnotify_callback = nullptr;
    QChartView_SetViewportMargins_Callback qchartview_setviewportmargins_callback = nullptr;
    QChartView_ViewportMargins_Callback qchartview_viewportmargins_callback = nullptr;
    QChartView_DrawFrame_Callback qchartview_drawframe_callback = nullptr;
    QChartView_UpdateMicroFocus_Callback qchartview_updatemicrofocus_callback = nullptr;
    QChartView_Create_Callback qchartview_create_callback = nullptr;
    QChartView_Destroy_Callback qchartview_destroy_callback = nullptr;
    QChartView_FocusNextChild_Callback qchartview_focusnextchild_callback = nullptr;
    QChartView_FocusPreviousChild_Callback qchartview_focuspreviouschild_callback = nullptr;
    QChartView_Sender_Callback qchartview_sender_callback = nullptr;
    QChartView_SenderSignalIndex_Callback qchartview_sendersignalindex_callback = nullptr;
    QChartView_Receivers_Callback qchartview_receivers_callback = nullptr;
    QChartView_IsSignalConnected_Callback qchartview_issignalconnected_callback = nullptr;
    QChartView_GetDecodedMetricF_Callback qchartview_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qchartview_metacall_isbase = false;
    mutable bool qchartview_resizeevent_isbase = false;
    mutable bool qchartview_mousepressevent_isbase = false;
    mutable bool qchartview_mousemoveevent_isbase = false;
    mutable bool qchartview_mousereleaseevent_isbase = false;
    mutable bool qchartview_sizehint_isbase = false;
    mutable bool qchartview_inputmethodquery_isbase = false;
    mutable bool qchartview_setupviewport_isbase = false;
    mutable bool qchartview_event_isbase = false;
    mutable bool qchartview_viewportevent_isbase = false;
    mutable bool qchartview_contextmenuevent_isbase = false;
    mutable bool qchartview_dragenterevent_isbase = false;
    mutable bool qchartview_dragleaveevent_isbase = false;
    mutable bool qchartview_dragmoveevent_isbase = false;
    mutable bool qchartview_dropevent_isbase = false;
    mutable bool qchartview_focusinevent_isbase = false;
    mutable bool qchartview_focusnextprevchild_isbase = false;
    mutable bool qchartview_focusoutevent_isbase = false;
    mutable bool qchartview_keypressevent_isbase = false;
    mutable bool qchartview_keyreleaseevent_isbase = false;
    mutable bool qchartview_mousedoubleclickevent_isbase = false;
    mutable bool qchartview_wheelevent_isbase = false;
    mutable bool qchartview_paintevent_isbase = false;
    mutable bool qchartview_scrollcontentsby_isbase = false;
    mutable bool qchartview_showevent_isbase = false;
    mutable bool qchartview_inputmethodevent_isbase = false;
    mutable bool qchartview_drawbackground_isbase = false;
    mutable bool qchartview_drawforeground_isbase = false;
    mutable bool qchartview_minimumsizehint_isbase = false;
    mutable bool qchartview_eventfilter_isbase = false;
    mutable bool qchartview_viewportsizehint_isbase = false;
    mutable bool qchartview_changeevent_isbase = false;
    mutable bool qchartview_initstyleoption_isbase = false;
    mutable bool qchartview_devtype_isbase = false;
    mutable bool qchartview_setvisible_isbase = false;
    mutable bool qchartview_heightforwidth_isbase = false;
    mutable bool qchartview_hasheightforwidth_isbase = false;
    mutable bool qchartview_paintengine_isbase = false;
    mutable bool qchartview_enterevent_isbase = false;
    mutable bool qchartview_leaveevent_isbase = false;
    mutable bool qchartview_moveevent_isbase = false;
    mutable bool qchartview_closeevent_isbase = false;
    mutable bool qchartview_tabletevent_isbase = false;
    mutable bool qchartview_actionevent_isbase = false;
    mutable bool qchartview_hideevent_isbase = false;
    mutable bool qchartview_nativeevent_isbase = false;
    mutable bool qchartview_metric_isbase = false;
    mutable bool qchartview_initpainter_isbase = false;
    mutable bool qchartview_redirected_isbase = false;
    mutable bool qchartview_sharedpainter_isbase = false;
    mutable bool qchartview_timerevent_isbase = false;
    mutable bool qchartview_childevent_isbase = false;
    mutable bool qchartview_customevent_isbase = false;
    mutable bool qchartview_connectnotify_isbase = false;
    mutable bool qchartview_disconnectnotify_isbase = false;
    mutable bool qchartview_setviewportmargins_isbase = false;
    mutable bool qchartview_viewportmargins_isbase = false;
    mutable bool qchartview_drawframe_isbase = false;
    mutable bool qchartview_updatemicrofocus_isbase = false;
    mutable bool qchartview_create_isbase = false;
    mutable bool qchartview_destroy_isbase = false;
    mutable bool qchartview_focusnextchild_isbase = false;
    mutable bool qchartview_focuspreviouschild_isbase = false;
    mutable bool qchartview_sender_isbase = false;
    mutable bool qchartview_sendersignalindex_isbase = false;
    mutable bool qchartview_receivers_isbase = false;
    mutable bool qchartview_issignalconnected_isbase = false;
    mutable bool qchartview_getdecodedmetricf_isbase = false;

  public:
    VirtualQChartView(QWidget* parent) : QChartView(parent) {};
    VirtualQChartView() : QChartView() {};
    VirtualQChartView(QChart* chart) : QChartView(chart) {};
    VirtualQChartView(QChart* chart, QWidget* parent) : QChartView(chart, parent) {};

    ~VirtualQChartView() {
        qchartview_metacall_callback = nullptr;
        qchartview_resizeevent_callback = nullptr;
        qchartview_mousepressevent_callback = nullptr;
        qchartview_mousemoveevent_callback = nullptr;
        qchartview_mousereleaseevent_callback = nullptr;
        qchartview_sizehint_callback = nullptr;
        qchartview_inputmethodquery_callback = nullptr;
        qchartview_setupviewport_callback = nullptr;
        qchartview_event_callback = nullptr;
        qchartview_viewportevent_callback = nullptr;
        qchartview_contextmenuevent_callback = nullptr;
        qchartview_dragenterevent_callback = nullptr;
        qchartview_dragleaveevent_callback = nullptr;
        qchartview_dragmoveevent_callback = nullptr;
        qchartview_dropevent_callback = nullptr;
        qchartview_focusinevent_callback = nullptr;
        qchartview_focusnextprevchild_callback = nullptr;
        qchartview_focusoutevent_callback = nullptr;
        qchartview_keypressevent_callback = nullptr;
        qchartview_keyreleaseevent_callback = nullptr;
        qchartview_mousedoubleclickevent_callback = nullptr;
        qchartview_wheelevent_callback = nullptr;
        qchartview_paintevent_callback = nullptr;
        qchartview_scrollcontentsby_callback = nullptr;
        qchartview_showevent_callback = nullptr;
        qchartview_inputmethodevent_callback = nullptr;
        qchartview_drawbackground_callback = nullptr;
        qchartview_drawforeground_callback = nullptr;
        qchartview_minimumsizehint_callback = nullptr;
        qchartview_eventfilter_callback = nullptr;
        qchartview_viewportsizehint_callback = nullptr;
        qchartview_changeevent_callback = nullptr;
        qchartview_initstyleoption_callback = nullptr;
        qchartview_devtype_callback = nullptr;
        qchartview_setvisible_callback = nullptr;
        qchartview_heightforwidth_callback = nullptr;
        qchartview_hasheightforwidth_callback = nullptr;
        qchartview_paintengine_callback = nullptr;
        qchartview_enterevent_callback = nullptr;
        qchartview_leaveevent_callback = nullptr;
        qchartview_moveevent_callback = nullptr;
        qchartview_closeevent_callback = nullptr;
        qchartview_tabletevent_callback = nullptr;
        qchartview_actionevent_callback = nullptr;
        qchartview_hideevent_callback = nullptr;
        qchartview_nativeevent_callback = nullptr;
        qchartview_metric_callback = nullptr;
        qchartview_initpainter_callback = nullptr;
        qchartview_redirected_callback = nullptr;
        qchartview_sharedpainter_callback = nullptr;
        qchartview_timerevent_callback = nullptr;
        qchartview_childevent_callback = nullptr;
        qchartview_customevent_callback = nullptr;
        qchartview_connectnotify_callback = nullptr;
        qchartview_disconnectnotify_callback = nullptr;
        qchartview_setviewportmargins_callback = nullptr;
        qchartview_viewportmargins_callback = nullptr;
        qchartview_drawframe_callback = nullptr;
        qchartview_updatemicrofocus_callback = nullptr;
        qchartview_create_callback = nullptr;
        qchartview_destroy_callback = nullptr;
        qchartview_focusnextchild_callback = nullptr;
        qchartview_focuspreviouschild_callback = nullptr;
        qchartview_sender_callback = nullptr;
        qchartview_sendersignalindex_callback = nullptr;
        qchartview_receivers_callback = nullptr;
        qchartview_issignalconnected_callback = nullptr;
        qchartview_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQChartView_Metacall_Callback(QChartView_Metacall_Callback cb) { qchartview_metacall_callback = cb; }
    inline void setQChartView_ResizeEvent_Callback(QChartView_ResizeEvent_Callback cb) { qchartview_resizeevent_callback = cb; }
    inline void setQChartView_MousePressEvent_Callback(QChartView_MousePressEvent_Callback cb) { qchartview_mousepressevent_callback = cb; }
    inline void setQChartView_MouseMoveEvent_Callback(QChartView_MouseMoveEvent_Callback cb) { qchartview_mousemoveevent_callback = cb; }
    inline void setQChartView_MouseReleaseEvent_Callback(QChartView_MouseReleaseEvent_Callback cb) { qchartview_mousereleaseevent_callback = cb; }
    inline void setQChartView_SizeHint_Callback(QChartView_SizeHint_Callback cb) { qchartview_sizehint_callback = cb; }
    inline void setQChartView_InputMethodQuery_Callback(QChartView_InputMethodQuery_Callback cb) { qchartview_inputmethodquery_callback = cb; }
    inline void setQChartView_SetupViewport_Callback(QChartView_SetupViewport_Callback cb) { qchartview_setupviewport_callback = cb; }
    inline void setQChartView_Event_Callback(QChartView_Event_Callback cb) { qchartview_event_callback = cb; }
    inline void setQChartView_ViewportEvent_Callback(QChartView_ViewportEvent_Callback cb) { qchartview_viewportevent_callback = cb; }
    inline void setQChartView_ContextMenuEvent_Callback(QChartView_ContextMenuEvent_Callback cb) { qchartview_contextmenuevent_callback = cb; }
    inline void setQChartView_DragEnterEvent_Callback(QChartView_DragEnterEvent_Callback cb) { qchartview_dragenterevent_callback = cb; }
    inline void setQChartView_DragLeaveEvent_Callback(QChartView_DragLeaveEvent_Callback cb) { qchartview_dragleaveevent_callback = cb; }
    inline void setQChartView_DragMoveEvent_Callback(QChartView_DragMoveEvent_Callback cb) { qchartview_dragmoveevent_callback = cb; }
    inline void setQChartView_DropEvent_Callback(QChartView_DropEvent_Callback cb) { qchartview_dropevent_callback = cb; }
    inline void setQChartView_FocusInEvent_Callback(QChartView_FocusInEvent_Callback cb) { qchartview_focusinevent_callback = cb; }
    inline void setQChartView_FocusNextPrevChild_Callback(QChartView_FocusNextPrevChild_Callback cb) { qchartview_focusnextprevchild_callback = cb; }
    inline void setQChartView_FocusOutEvent_Callback(QChartView_FocusOutEvent_Callback cb) { qchartview_focusoutevent_callback = cb; }
    inline void setQChartView_KeyPressEvent_Callback(QChartView_KeyPressEvent_Callback cb) { qchartview_keypressevent_callback = cb; }
    inline void setQChartView_KeyReleaseEvent_Callback(QChartView_KeyReleaseEvent_Callback cb) { qchartview_keyreleaseevent_callback = cb; }
    inline void setQChartView_MouseDoubleClickEvent_Callback(QChartView_MouseDoubleClickEvent_Callback cb) { qchartview_mousedoubleclickevent_callback = cb; }
    inline void setQChartView_WheelEvent_Callback(QChartView_WheelEvent_Callback cb) { qchartview_wheelevent_callback = cb; }
    inline void setQChartView_PaintEvent_Callback(QChartView_PaintEvent_Callback cb) { qchartview_paintevent_callback = cb; }
    inline void setQChartView_ScrollContentsBy_Callback(QChartView_ScrollContentsBy_Callback cb) { qchartview_scrollcontentsby_callback = cb; }
    inline void setQChartView_ShowEvent_Callback(QChartView_ShowEvent_Callback cb) { qchartview_showevent_callback = cb; }
    inline void setQChartView_InputMethodEvent_Callback(QChartView_InputMethodEvent_Callback cb) { qchartview_inputmethodevent_callback = cb; }
    inline void setQChartView_DrawBackground_Callback(QChartView_DrawBackground_Callback cb) { qchartview_drawbackground_callback = cb; }
    inline void setQChartView_DrawForeground_Callback(QChartView_DrawForeground_Callback cb) { qchartview_drawforeground_callback = cb; }
    inline void setQChartView_MinimumSizeHint_Callback(QChartView_MinimumSizeHint_Callback cb) { qchartview_minimumsizehint_callback = cb; }
    inline void setQChartView_EventFilter_Callback(QChartView_EventFilter_Callback cb) { qchartview_eventfilter_callback = cb; }
    inline void setQChartView_ViewportSizeHint_Callback(QChartView_ViewportSizeHint_Callback cb) { qchartview_viewportsizehint_callback = cb; }
    inline void setQChartView_ChangeEvent_Callback(QChartView_ChangeEvent_Callback cb) { qchartview_changeevent_callback = cb; }
    inline void setQChartView_InitStyleOption_Callback(QChartView_InitStyleOption_Callback cb) { qchartview_initstyleoption_callback = cb; }
    inline void setQChartView_DevType_Callback(QChartView_DevType_Callback cb) { qchartview_devtype_callback = cb; }
    inline void setQChartView_SetVisible_Callback(QChartView_SetVisible_Callback cb) { qchartview_setvisible_callback = cb; }
    inline void setQChartView_HeightForWidth_Callback(QChartView_HeightForWidth_Callback cb) { qchartview_heightforwidth_callback = cb; }
    inline void setQChartView_HasHeightForWidth_Callback(QChartView_HasHeightForWidth_Callback cb) { qchartview_hasheightforwidth_callback = cb; }
    inline void setQChartView_PaintEngine_Callback(QChartView_PaintEngine_Callback cb) { qchartview_paintengine_callback = cb; }
    inline void setQChartView_EnterEvent_Callback(QChartView_EnterEvent_Callback cb) { qchartview_enterevent_callback = cb; }
    inline void setQChartView_LeaveEvent_Callback(QChartView_LeaveEvent_Callback cb) { qchartview_leaveevent_callback = cb; }
    inline void setQChartView_MoveEvent_Callback(QChartView_MoveEvent_Callback cb) { qchartview_moveevent_callback = cb; }
    inline void setQChartView_CloseEvent_Callback(QChartView_CloseEvent_Callback cb) { qchartview_closeevent_callback = cb; }
    inline void setQChartView_TabletEvent_Callback(QChartView_TabletEvent_Callback cb) { qchartview_tabletevent_callback = cb; }
    inline void setQChartView_ActionEvent_Callback(QChartView_ActionEvent_Callback cb) { qchartview_actionevent_callback = cb; }
    inline void setQChartView_HideEvent_Callback(QChartView_HideEvent_Callback cb) { qchartview_hideevent_callback = cb; }
    inline void setQChartView_NativeEvent_Callback(QChartView_NativeEvent_Callback cb) { qchartview_nativeevent_callback = cb; }
    inline void setQChartView_Metric_Callback(QChartView_Metric_Callback cb) { qchartview_metric_callback = cb; }
    inline void setQChartView_InitPainter_Callback(QChartView_InitPainter_Callback cb) { qchartview_initpainter_callback = cb; }
    inline void setQChartView_Redirected_Callback(QChartView_Redirected_Callback cb) { qchartview_redirected_callback = cb; }
    inline void setQChartView_SharedPainter_Callback(QChartView_SharedPainter_Callback cb) { qchartview_sharedpainter_callback = cb; }
    inline void setQChartView_TimerEvent_Callback(QChartView_TimerEvent_Callback cb) { qchartview_timerevent_callback = cb; }
    inline void setQChartView_ChildEvent_Callback(QChartView_ChildEvent_Callback cb) { qchartview_childevent_callback = cb; }
    inline void setQChartView_CustomEvent_Callback(QChartView_CustomEvent_Callback cb) { qchartview_customevent_callback = cb; }
    inline void setQChartView_ConnectNotify_Callback(QChartView_ConnectNotify_Callback cb) { qchartview_connectnotify_callback = cb; }
    inline void setQChartView_DisconnectNotify_Callback(QChartView_DisconnectNotify_Callback cb) { qchartview_disconnectnotify_callback = cb; }
    inline void setQChartView_SetViewportMargins_Callback(QChartView_SetViewportMargins_Callback cb) { qchartview_setviewportmargins_callback = cb; }
    inline void setQChartView_ViewportMargins_Callback(QChartView_ViewportMargins_Callback cb) { qchartview_viewportmargins_callback = cb; }
    inline void setQChartView_DrawFrame_Callback(QChartView_DrawFrame_Callback cb) { qchartview_drawframe_callback = cb; }
    inline void setQChartView_UpdateMicroFocus_Callback(QChartView_UpdateMicroFocus_Callback cb) { qchartview_updatemicrofocus_callback = cb; }
    inline void setQChartView_Create_Callback(QChartView_Create_Callback cb) { qchartview_create_callback = cb; }
    inline void setQChartView_Destroy_Callback(QChartView_Destroy_Callback cb) { qchartview_destroy_callback = cb; }
    inline void setQChartView_FocusNextChild_Callback(QChartView_FocusNextChild_Callback cb) { qchartview_focusnextchild_callback = cb; }
    inline void setQChartView_FocusPreviousChild_Callback(QChartView_FocusPreviousChild_Callback cb) { qchartview_focuspreviouschild_callback = cb; }
    inline void setQChartView_Sender_Callback(QChartView_Sender_Callback cb) { qchartview_sender_callback = cb; }
    inline void setQChartView_SenderSignalIndex_Callback(QChartView_SenderSignalIndex_Callback cb) { qchartview_sendersignalindex_callback = cb; }
    inline void setQChartView_Receivers_Callback(QChartView_Receivers_Callback cb) { qchartview_receivers_callback = cb; }
    inline void setQChartView_IsSignalConnected_Callback(QChartView_IsSignalConnected_Callback cb) { qchartview_issignalconnected_callback = cb; }
    inline void setQChartView_GetDecodedMetricF_Callback(QChartView_GetDecodedMetricF_Callback cb) { qchartview_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQChartView_Metacall_IsBase(bool value) const { qchartview_metacall_isbase = value; }
    inline void setQChartView_ResizeEvent_IsBase(bool value) const { qchartview_resizeevent_isbase = value; }
    inline void setQChartView_MousePressEvent_IsBase(bool value) const { qchartview_mousepressevent_isbase = value; }
    inline void setQChartView_MouseMoveEvent_IsBase(bool value) const { qchartview_mousemoveevent_isbase = value; }
    inline void setQChartView_MouseReleaseEvent_IsBase(bool value) const { qchartview_mousereleaseevent_isbase = value; }
    inline void setQChartView_SizeHint_IsBase(bool value) const { qchartview_sizehint_isbase = value; }
    inline void setQChartView_InputMethodQuery_IsBase(bool value) const { qchartview_inputmethodquery_isbase = value; }
    inline void setQChartView_SetupViewport_IsBase(bool value) const { qchartview_setupviewport_isbase = value; }
    inline void setQChartView_Event_IsBase(bool value) const { qchartview_event_isbase = value; }
    inline void setQChartView_ViewportEvent_IsBase(bool value) const { qchartview_viewportevent_isbase = value; }
    inline void setQChartView_ContextMenuEvent_IsBase(bool value) const { qchartview_contextmenuevent_isbase = value; }
    inline void setQChartView_DragEnterEvent_IsBase(bool value) const { qchartview_dragenterevent_isbase = value; }
    inline void setQChartView_DragLeaveEvent_IsBase(bool value) const { qchartview_dragleaveevent_isbase = value; }
    inline void setQChartView_DragMoveEvent_IsBase(bool value) const { qchartview_dragmoveevent_isbase = value; }
    inline void setQChartView_DropEvent_IsBase(bool value) const { qchartview_dropevent_isbase = value; }
    inline void setQChartView_FocusInEvent_IsBase(bool value) const { qchartview_focusinevent_isbase = value; }
    inline void setQChartView_FocusNextPrevChild_IsBase(bool value) const { qchartview_focusnextprevchild_isbase = value; }
    inline void setQChartView_FocusOutEvent_IsBase(bool value) const { qchartview_focusoutevent_isbase = value; }
    inline void setQChartView_KeyPressEvent_IsBase(bool value) const { qchartview_keypressevent_isbase = value; }
    inline void setQChartView_KeyReleaseEvent_IsBase(bool value) const { qchartview_keyreleaseevent_isbase = value; }
    inline void setQChartView_MouseDoubleClickEvent_IsBase(bool value) const { qchartview_mousedoubleclickevent_isbase = value; }
    inline void setQChartView_WheelEvent_IsBase(bool value) const { qchartview_wheelevent_isbase = value; }
    inline void setQChartView_PaintEvent_IsBase(bool value) const { qchartview_paintevent_isbase = value; }
    inline void setQChartView_ScrollContentsBy_IsBase(bool value) const { qchartview_scrollcontentsby_isbase = value; }
    inline void setQChartView_ShowEvent_IsBase(bool value) const { qchartview_showevent_isbase = value; }
    inline void setQChartView_InputMethodEvent_IsBase(bool value) const { qchartview_inputmethodevent_isbase = value; }
    inline void setQChartView_DrawBackground_IsBase(bool value) const { qchartview_drawbackground_isbase = value; }
    inline void setQChartView_DrawForeground_IsBase(bool value) const { qchartview_drawforeground_isbase = value; }
    inline void setQChartView_MinimumSizeHint_IsBase(bool value) const { qchartview_minimumsizehint_isbase = value; }
    inline void setQChartView_EventFilter_IsBase(bool value) const { qchartview_eventfilter_isbase = value; }
    inline void setQChartView_ViewportSizeHint_IsBase(bool value) const { qchartview_viewportsizehint_isbase = value; }
    inline void setQChartView_ChangeEvent_IsBase(bool value) const { qchartview_changeevent_isbase = value; }
    inline void setQChartView_InitStyleOption_IsBase(bool value) const { qchartview_initstyleoption_isbase = value; }
    inline void setQChartView_DevType_IsBase(bool value) const { qchartview_devtype_isbase = value; }
    inline void setQChartView_SetVisible_IsBase(bool value) const { qchartview_setvisible_isbase = value; }
    inline void setQChartView_HeightForWidth_IsBase(bool value) const { qchartview_heightforwidth_isbase = value; }
    inline void setQChartView_HasHeightForWidth_IsBase(bool value) const { qchartview_hasheightforwidth_isbase = value; }
    inline void setQChartView_PaintEngine_IsBase(bool value) const { qchartview_paintengine_isbase = value; }
    inline void setQChartView_EnterEvent_IsBase(bool value) const { qchartview_enterevent_isbase = value; }
    inline void setQChartView_LeaveEvent_IsBase(bool value) const { qchartview_leaveevent_isbase = value; }
    inline void setQChartView_MoveEvent_IsBase(bool value) const { qchartview_moveevent_isbase = value; }
    inline void setQChartView_CloseEvent_IsBase(bool value) const { qchartview_closeevent_isbase = value; }
    inline void setQChartView_TabletEvent_IsBase(bool value) const { qchartview_tabletevent_isbase = value; }
    inline void setQChartView_ActionEvent_IsBase(bool value) const { qchartview_actionevent_isbase = value; }
    inline void setQChartView_HideEvent_IsBase(bool value) const { qchartview_hideevent_isbase = value; }
    inline void setQChartView_NativeEvent_IsBase(bool value) const { qchartview_nativeevent_isbase = value; }
    inline void setQChartView_Metric_IsBase(bool value) const { qchartview_metric_isbase = value; }
    inline void setQChartView_InitPainter_IsBase(bool value) const { qchartview_initpainter_isbase = value; }
    inline void setQChartView_Redirected_IsBase(bool value) const { qchartview_redirected_isbase = value; }
    inline void setQChartView_SharedPainter_IsBase(bool value) const { qchartview_sharedpainter_isbase = value; }
    inline void setQChartView_TimerEvent_IsBase(bool value) const { qchartview_timerevent_isbase = value; }
    inline void setQChartView_ChildEvent_IsBase(bool value) const { qchartview_childevent_isbase = value; }
    inline void setQChartView_CustomEvent_IsBase(bool value) const { qchartview_customevent_isbase = value; }
    inline void setQChartView_ConnectNotify_IsBase(bool value) const { qchartview_connectnotify_isbase = value; }
    inline void setQChartView_DisconnectNotify_IsBase(bool value) const { qchartview_disconnectnotify_isbase = value; }
    inline void setQChartView_SetViewportMargins_IsBase(bool value) const { qchartview_setviewportmargins_isbase = value; }
    inline void setQChartView_ViewportMargins_IsBase(bool value) const { qchartview_viewportmargins_isbase = value; }
    inline void setQChartView_DrawFrame_IsBase(bool value) const { qchartview_drawframe_isbase = value; }
    inline void setQChartView_UpdateMicroFocus_IsBase(bool value) const { qchartview_updatemicrofocus_isbase = value; }
    inline void setQChartView_Create_IsBase(bool value) const { qchartview_create_isbase = value; }
    inline void setQChartView_Destroy_IsBase(bool value) const { qchartview_destroy_isbase = value; }
    inline void setQChartView_FocusNextChild_IsBase(bool value) const { qchartview_focusnextchild_isbase = value; }
    inline void setQChartView_FocusPreviousChild_IsBase(bool value) const { qchartview_focuspreviouschild_isbase = value; }
    inline void setQChartView_Sender_IsBase(bool value) const { qchartview_sender_isbase = value; }
    inline void setQChartView_SenderSignalIndex_IsBase(bool value) const { qchartview_sendersignalindex_isbase = value; }
    inline void setQChartView_Receivers_IsBase(bool value) const { qchartview_receivers_isbase = value; }
    inline void setQChartView_IsSignalConnected_IsBase(bool value) const { qchartview_issignalconnected_isbase = value; }
    inline void setQChartView_GetDecodedMetricF_IsBase(bool value) const { qchartview_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qchartview_metacall_isbase) {
            qchartview_metacall_isbase = false;
            return QChartView::qt_metacall(param1, param2, param3);
        } else if (qchartview_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qchartview_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QChartView::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qchartview_resizeevent_isbase) {
            qchartview_resizeevent_isbase = false;
            QChartView::resizeEvent(event);
        } else if (qchartview_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qchartview_resizeevent_callback(this, cbval1);
        } else {
            QChartView::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qchartview_mousepressevent_isbase) {
            qchartview_mousepressevent_isbase = false;
            QChartView::mousePressEvent(event);
        } else if (qchartview_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qchartview_mousepressevent_callback(this, cbval1);
        } else {
            QChartView::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qchartview_mousemoveevent_isbase) {
            qchartview_mousemoveevent_isbase = false;
            QChartView::mouseMoveEvent(event);
        } else if (qchartview_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qchartview_mousemoveevent_callback(this, cbval1);
        } else {
            QChartView::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qchartview_mousereleaseevent_isbase) {
            qchartview_mousereleaseevent_isbase = false;
            QChartView::mouseReleaseEvent(event);
        } else if (qchartview_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qchartview_mousereleaseevent_callback(this, cbval1);
        } else {
            QChartView::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qchartview_sizehint_isbase) {
            qchartview_sizehint_isbase = false;
            return QChartView::sizeHint();
        } else if (qchartview_sizehint_callback != nullptr) {
            QSize* callback_ret = qchartview_sizehint_callback();
            return *callback_ret;
        } else {
            return QChartView::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qchartview_inputmethodquery_isbase) {
            qchartview_inputmethodquery_isbase = false;
            return QChartView::inputMethodQuery(query);
        } else if (qchartview_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = qchartview_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QChartView::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* widget) override {
        if (qchartview_setupviewport_isbase) {
            qchartview_setupviewport_isbase = false;
            QChartView::setupViewport(widget);
        } else if (qchartview_setupviewport_callback != nullptr) {
            QWidget* cbval1 = widget;

            qchartview_setupviewport_callback(this, cbval1);
        } else {
            QChartView::setupViewport(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qchartview_event_isbase) {
            qchartview_event_isbase = false;
            return QChartView::event(event);
        } else if (qchartview_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qchartview_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QChartView::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qchartview_viewportevent_isbase) {
            qchartview_viewportevent_isbase = false;
            return QChartView::viewportEvent(event);
        } else if (qchartview_viewportevent_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qchartview_viewportevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return QChartView::viewportEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qchartview_contextmenuevent_isbase) {
            qchartview_contextmenuevent_isbase = false;
            QChartView::contextMenuEvent(event);
        } else if (qchartview_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qchartview_contextmenuevent_callback(this, cbval1);
        } else {
            QChartView::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qchartview_dragenterevent_isbase) {
            qchartview_dragenterevent_isbase = false;
            QChartView::dragEnterEvent(event);
        } else if (qchartview_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qchartview_dragenterevent_callback(this, cbval1);
        } else {
            QChartView::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qchartview_dragleaveevent_isbase) {
            qchartview_dragleaveevent_isbase = false;
            QChartView::dragLeaveEvent(event);
        } else if (qchartview_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qchartview_dragleaveevent_callback(this, cbval1);
        } else {
            QChartView::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qchartview_dragmoveevent_isbase) {
            qchartview_dragmoveevent_isbase = false;
            QChartView::dragMoveEvent(event);
        } else if (qchartview_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qchartview_dragmoveevent_callback(this, cbval1);
        } else {
            QChartView::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qchartview_dropevent_isbase) {
            qchartview_dropevent_isbase = false;
            QChartView::dropEvent(event);
        } else if (qchartview_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qchartview_dropevent_callback(this, cbval1);
        } else {
            QChartView::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qchartview_focusinevent_isbase) {
            qchartview_focusinevent_isbase = false;
            QChartView::focusInEvent(event);
        } else if (qchartview_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qchartview_focusinevent_callback(this, cbval1);
        } else {
            QChartView::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qchartview_focusnextprevchild_isbase) {
            qchartview_focusnextprevchild_isbase = false;
            return QChartView::focusNextPrevChild(next);
        } else if (qchartview_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qchartview_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QChartView::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qchartview_focusoutevent_isbase) {
            qchartview_focusoutevent_isbase = false;
            QChartView::focusOutEvent(event);
        } else if (qchartview_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qchartview_focusoutevent_callback(this, cbval1);
        } else {
            QChartView::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qchartview_keypressevent_isbase) {
            qchartview_keypressevent_isbase = false;
            QChartView::keyPressEvent(event);
        } else if (qchartview_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qchartview_keypressevent_callback(this, cbval1);
        } else {
            QChartView::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qchartview_keyreleaseevent_isbase) {
            qchartview_keyreleaseevent_isbase = false;
            QChartView::keyReleaseEvent(event);
        } else if (qchartview_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qchartview_keyreleaseevent_callback(this, cbval1);
        } else {
            QChartView::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qchartview_mousedoubleclickevent_isbase) {
            qchartview_mousedoubleclickevent_isbase = false;
            QChartView::mouseDoubleClickEvent(event);
        } else if (qchartview_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qchartview_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QChartView::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qchartview_wheelevent_isbase) {
            qchartview_wheelevent_isbase = false;
            QChartView::wheelEvent(event);
        } else if (qchartview_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qchartview_wheelevent_callback(this, cbval1);
        } else {
            QChartView::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qchartview_paintevent_isbase) {
            qchartview_paintevent_isbase = false;
            QChartView::paintEvent(event);
        } else if (qchartview_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qchartview_paintevent_callback(this, cbval1);
        } else {
            QChartView::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qchartview_scrollcontentsby_isbase) {
            qchartview_scrollcontentsby_isbase = false;
            QChartView::scrollContentsBy(dx, dy);
        } else if (qchartview_scrollcontentsby_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            qchartview_scrollcontentsby_callback(this, cbval1, cbval2);
        } else {
            QChartView::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qchartview_showevent_isbase) {
            qchartview_showevent_isbase = false;
            QChartView::showEvent(event);
        } else if (qchartview_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qchartview_showevent_callback(this, cbval1);
        } else {
            QChartView::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qchartview_inputmethodevent_isbase) {
            qchartview_inputmethodevent_isbase = false;
            QChartView::inputMethodEvent(event);
        } else if (qchartview_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = event;

            qchartview_inputmethodevent_callback(this, cbval1);
        } else {
            QChartView::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawBackground(QPainter* painter, const QRectF& rect) override {
        if (qchartview_drawbackground_isbase) {
            qchartview_drawbackground_isbase = false;
            QChartView::drawBackground(painter, rect);
        } else if (qchartview_drawbackground_callback != nullptr) {
            QPainter* cbval1 = painter;
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval2 = const_cast<QRectF*>(&rect_ret);

            qchartview_drawbackground_callback(this, cbval1, cbval2);
        } else {
            QChartView::drawBackground(painter, rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawForeground(QPainter* painter, const QRectF& rect) override {
        if (qchartview_drawforeground_isbase) {
            qchartview_drawforeground_isbase = false;
            QChartView::drawForeground(painter, rect);
        } else if (qchartview_drawforeground_callback != nullptr) {
            QPainter* cbval1 = painter;
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval2 = const_cast<QRectF*>(&rect_ret);

            qchartview_drawforeground_callback(this, cbval1, cbval2);
        } else {
            QChartView::drawForeground(painter, rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qchartview_minimumsizehint_isbase) {
            qchartview_minimumsizehint_isbase = false;
            return QChartView::minimumSizeHint();
        } else if (qchartview_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qchartview_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QChartView::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qchartview_eventfilter_isbase) {
            qchartview_eventfilter_isbase = false;
            return QChartView::eventFilter(param1, param2);
        } else if (qchartview_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = qchartview_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QChartView::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qchartview_viewportsizehint_isbase) {
            qchartview_viewportsizehint_isbase = false;
            return QChartView::viewportSizeHint();
        } else if (qchartview_viewportsizehint_callback != nullptr) {
            QSize* callback_ret = qchartview_viewportsizehint_callback();
            return *callback_ret;
        } else {
            return QChartView::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qchartview_changeevent_isbase) {
            qchartview_changeevent_isbase = false;
            QChartView::changeEvent(param1);
        } else if (qchartview_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qchartview_changeevent_callback(this, cbval1);
        } else {
            QChartView::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qchartview_initstyleoption_isbase) {
            qchartview_initstyleoption_isbase = false;
            QChartView::initStyleOption(option);
        } else if (qchartview_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            qchartview_initstyleoption_callback(this, cbval1);
        } else {
            QChartView::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qchartview_devtype_isbase) {
            qchartview_devtype_isbase = false;
            return QChartView::devType();
        } else if (qchartview_devtype_callback != nullptr) {
            int callback_ret = qchartview_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QChartView::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qchartview_setvisible_isbase) {
            qchartview_setvisible_isbase = false;
            QChartView::setVisible(visible);
        } else if (qchartview_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qchartview_setvisible_callback(this, cbval1);
        } else {
            QChartView::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qchartview_heightforwidth_isbase) {
            qchartview_heightforwidth_isbase = false;
            return QChartView::heightForWidth(param1);
        } else if (qchartview_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qchartview_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QChartView::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qchartview_hasheightforwidth_isbase) {
            qchartview_hasheightforwidth_isbase = false;
            return QChartView::hasHeightForWidth();
        } else if (qchartview_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qchartview_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QChartView::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qchartview_paintengine_isbase) {
            qchartview_paintengine_isbase = false;
            return QChartView::paintEngine();
        } else if (qchartview_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qchartview_paintengine_callback();
            return callback_ret;
        } else {
            return QChartView::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qchartview_enterevent_isbase) {
            qchartview_enterevent_isbase = false;
            QChartView::enterEvent(event);
        } else if (qchartview_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qchartview_enterevent_callback(this, cbval1);
        } else {
            QChartView::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qchartview_leaveevent_isbase) {
            qchartview_leaveevent_isbase = false;
            QChartView::leaveEvent(event);
        } else if (qchartview_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qchartview_leaveevent_callback(this, cbval1);
        } else {
            QChartView::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qchartview_moveevent_isbase) {
            qchartview_moveevent_isbase = false;
            QChartView::moveEvent(event);
        } else if (qchartview_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qchartview_moveevent_callback(this, cbval1);
        } else {
            QChartView::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qchartview_closeevent_isbase) {
            qchartview_closeevent_isbase = false;
            QChartView::closeEvent(event);
        } else if (qchartview_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qchartview_closeevent_callback(this, cbval1);
        } else {
            QChartView::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qchartview_tabletevent_isbase) {
            qchartview_tabletevent_isbase = false;
            QChartView::tabletEvent(event);
        } else if (qchartview_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qchartview_tabletevent_callback(this, cbval1);
        } else {
            QChartView::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qchartview_actionevent_isbase) {
            qchartview_actionevent_isbase = false;
            QChartView::actionEvent(event);
        } else if (qchartview_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qchartview_actionevent_callback(this, cbval1);
        } else {
            QChartView::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qchartview_hideevent_isbase) {
            qchartview_hideevent_isbase = false;
            QChartView::hideEvent(event);
        } else if (qchartview_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qchartview_hideevent_callback(this, cbval1);
        } else {
            QChartView::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qchartview_nativeevent_isbase) {
            qchartview_nativeevent_isbase = false;
            return QChartView::nativeEvent(eventType, message, result);
        } else if (qchartview_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<const char*>(malloc(eventType_str.len + 1));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            ((char*)eventType_str.data)[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qchartview_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QChartView::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qchartview_metric_isbase) {
            qchartview_metric_isbase = false;
            return QChartView::metric(param1);
        } else if (qchartview_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qchartview_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QChartView::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qchartview_initpainter_isbase) {
            qchartview_initpainter_isbase = false;
            QChartView::initPainter(painter);
        } else if (qchartview_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qchartview_initpainter_callback(this, cbval1);
        } else {
            QChartView::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qchartview_redirected_isbase) {
            qchartview_redirected_isbase = false;
            return QChartView::redirected(offset);
        } else if (qchartview_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qchartview_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QChartView::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qchartview_sharedpainter_isbase) {
            qchartview_sharedpainter_isbase = false;
            return QChartView::sharedPainter();
        } else if (qchartview_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qchartview_sharedpainter_callback();
            return callback_ret;
        } else {
            return QChartView::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qchartview_timerevent_isbase) {
            qchartview_timerevent_isbase = false;
            QChartView::timerEvent(event);
        } else if (qchartview_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qchartview_timerevent_callback(this, cbval1);
        } else {
            QChartView::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qchartview_childevent_isbase) {
            qchartview_childevent_isbase = false;
            QChartView::childEvent(event);
        } else if (qchartview_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qchartview_childevent_callback(this, cbval1);
        } else {
            QChartView::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qchartview_customevent_isbase) {
            qchartview_customevent_isbase = false;
            QChartView::customEvent(event);
        } else if (qchartview_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qchartview_customevent_callback(this, cbval1);
        } else {
            QChartView::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qchartview_connectnotify_isbase) {
            qchartview_connectnotify_isbase = false;
            QChartView::connectNotify(signal);
        } else if (qchartview_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qchartview_connectnotify_callback(this, cbval1);
        } else {
            QChartView::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qchartview_disconnectnotify_isbase) {
            qchartview_disconnectnotify_isbase = false;
            QChartView::disconnectNotify(signal);
        } else if (qchartview_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qchartview_disconnectnotify_callback(this, cbval1);
        } else {
            QChartView::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qchartview_setviewportmargins_isbase) {
            qchartview_setviewportmargins_isbase = false;
            QChartView::setViewportMargins(left, top, right, bottom);
        } else if (qchartview_setviewportmargins_callback != nullptr) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            qchartview_setviewportmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QChartView::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qchartview_viewportmargins_isbase) {
            qchartview_viewportmargins_isbase = false;
            return QChartView::viewportMargins();
        } else if (qchartview_viewportmargins_callback != nullptr) {
            QMargins* callback_ret = qchartview_viewportmargins_callback();
            return *callback_ret;
        } else {
            return QChartView::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qchartview_drawframe_isbase) {
            qchartview_drawframe_isbase = false;
            QChartView::drawFrame(param1);
        } else if (qchartview_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            qchartview_drawframe_callback(this, cbval1);
        } else {
            QChartView::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qchartview_updatemicrofocus_isbase) {
            qchartview_updatemicrofocus_isbase = false;
            QChartView::updateMicroFocus();
        } else if (qchartview_updatemicrofocus_callback != nullptr) {
            qchartview_updatemicrofocus_callback();
        } else {
            QChartView::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qchartview_create_isbase) {
            qchartview_create_isbase = false;
            QChartView::create();
        } else if (qchartview_create_callback != nullptr) {
            qchartview_create_callback();
        } else {
            QChartView::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qchartview_destroy_isbase) {
            qchartview_destroy_isbase = false;
            QChartView::destroy();
        } else if (qchartview_destroy_callback != nullptr) {
            qchartview_destroy_callback();
        } else {
            QChartView::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qchartview_focusnextchild_isbase) {
            qchartview_focusnextchild_isbase = false;
            return QChartView::focusNextChild();
        } else if (qchartview_focusnextchild_callback != nullptr) {
            bool callback_ret = qchartview_focusnextchild_callback();
            return callback_ret;
        } else {
            return QChartView::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qchartview_focuspreviouschild_isbase) {
            qchartview_focuspreviouschild_isbase = false;
            return QChartView::focusPreviousChild();
        } else if (qchartview_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qchartview_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QChartView::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qchartview_sender_isbase) {
            qchartview_sender_isbase = false;
            return QChartView::sender();
        } else if (qchartview_sender_callback != nullptr) {
            QObject* callback_ret = qchartview_sender_callback();
            return callback_ret;
        } else {
            return QChartView::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qchartview_sendersignalindex_isbase) {
            qchartview_sendersignalindex_isbase = false;
            return QChartView::senderSignalIndex();
        } else if (qchartview_sendersignalindex_callback != nullptr) {
            int callback_ret = qchartview_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QChartView::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qchartview_receivers_isbase) {
            qchartview_receivers_isbase = false;
            return QChartView::receivers(signal);
        } else if (qchartview_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qchartview_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QChartView::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qchartview_issignalconnected_isbase) {
            qchartview_issignalconnected_isbase = false;
            return QChartView::isSignalConnected(signal);
        } else if (qchartview_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qchartview_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QChartView::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qchartview_getdecodedmetricf_isbase) {
            qchartview_getdecodedmetricf_isbase = false;
            return QChartView::getDecodedMetricF(metricA, metricB);
        } else if (qchartview_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qchartview_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QChartView::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void QChartView_ResizeEvent(QChartView* self, QResizeEvent* event);
    friend void QChartView_QBaseResizeEvent(QChartView* self, QResizeEvent* event);
    friend void QChartView_MousePressEvent(QChartView* self, QMouseEvent* event);
    friend void QChartView_QBaseMousePressEvent(QChartView* self, QMouseEvent* event);
    friend void QChartView_MouseMoveEvent(QChartView* self, QMouseEvent* event);
    friend void QChartView_QBaseMouseMoveEvent(QChartView* self, QMouseEvent* event);
    friend void QChartView_MouseReleaseEvent(QChartView* self, QMouseEvent* event);
    friend void QChartView_QBaseMouseReleaseEvent(QChartView* self, QMouseEvent* event);
    friend void QChartView_SetupViewport(QChartView* self, QWidget* widget);
    friend void QChartView_QBaseSetupViewport(QChartView* self, QWidget* widget);
    friend bool QChartView_Event(QChartView* self, QEvent* event);
    friend bool QChartView_QBaseEvent(QChartView* self, QEvent* event);
    friend bool QChartView_ViewportEvent(QChartView* self, QEvent* event);
    friend bool QChartView_QBaseViewportEvent(QChartView* self, QEvent* event);
    friend void QChartView_ContextMenuEvent(QChartView* self, QContextMenuEvent* event);
    friend void QChartView_QBaseContextMenuEvent(QChartView* self, QContextMenuEvent* event);
    friend void QChartView_DragEnterEvent(QChartView* self, QDragEnterEvent* event);
    friend void QChartView_QBaseDragEnterEvent(QChartView* self, QDragEnterEvent* event);
    friend void QChartView_DragLeaveEvent(QChartView* self, QDragLeaveEvent* event);
    friend void QChartView_QBaseDragLeaveEvent(QChartView* self, QDragLeaveEvent* event);
    friend void QChartView_DragMoveEvent(QChartView* self, QDragMoveEvent* event);
    friend void QChartView_QBaseDragMoveEvent(QChartView* self, QDragMoveEvent* event);
    friend void QChartView_DropEvent(QChartView* self, QDropEvent* event);
    friend void QChartView_QBaseDropEvent(QChartView* self, QDropEvent* event);
    friend void QChartView_FocusInEvent(QChartView* self, QFocusEvent* event);
    friend void QChartView_QBaseFocusInEvent(QChartView* self, QFocusEvent* event);
    friend bool QChartView_FocusNextPrevChild(QChartView* self, bool next);
    friend bool QChartView_QBaseFocusNextPrevChild(QChartView* self, bool next);
    friend void QChartView_FocusOutEvent(QChartView* self, QFocusEvent* event);
    friend void QChartView_QBaseFocusOutEvent(QChartView* self, QFocusEvent* event);
    friend void QChartView_KeyPressEvent(QChartView* self, QKeyEvent* event);
    friend void QChartView_QBaseKeyPressEvent(QChartView* self, QKeyEvent* event);
    friend void QChartView_KeyReleaseEvent(QChartView* self, QKeyEvent* event);
    friend void QChartView_QBaseKeyReleaseEvent(QChartView* self, QKeyEvent* event);
    friend void QChartView_MouseDoubleClickEvent(QChartView* self, QMouseEvent* event);
    friend void QChartView_QBaseMouseDoubleClickEvent(QChartView* self, QMouseEvent* event);
    friend void QChartView_WheelEvent(QChartView* self, QWheelEvent* event);
    friend void QChartView_QBaseWheelEvent(QChartView* self, QWheelEvent* event);
    friend void QChartView_PaintEvent(QChartView* self, QPaintEvent* event);
    friend void QChartView_QBasePaintEvent(QChartView* self, QPaintEvent* event);
    friend void QChartView_ScrollContentsBy(QChartView* self, int dx, int dy);
    friend void QChartView_QBaseScrollContentsBy(QChartView* self, int dx, int dy);
    friend void QChartView_ShowEvent(QChartView* self, QShowEvent* event);
    friend void QChartView_QBaseShowEvent(QChartView* self, QShowEvent* event);
    friend void QChartView_InputMethodEvent(QChartView* self, QInputMethodEvent* event);
    friend void QChartView_QBaseInputMethodEvent(QChartView* self, QInputMethodEvent* event);
    friend void QChartView_DrawBackground(QChartView* self, QPainter* painter, const QRectF* rect);
    friend void QChartView_QBaseDrawBackground(QChartView* self, QPainter* painter, const QRectF* rect);
    friend void QChartView_DrawForeground(QChartView* self, QPainter* painter, const QRectF* rect);
    friend void QChartView_QBaseDrawForeground(QChartView* self, QPainter* painter, const QRectF* rect);
    friend bool QChartView_EventFilter(QChartView* self, QObject* param1, QEvent* param2);
    friend bool QChartView_QBaseEventFilter(QChartView* self, QObject* param1, QEvent* param2);
    friend QSize* QChartView_ViewportSizeHint(const QChartView* self);
    friend QSize* QChartView_QBaseViewportSizeHint(const QChartView* self);
    friend void QChartView_ChangeEvent(QChartView* self, QEvent* param1);
    friend void QChartView_QBaseChangeEvent(QChartView* self, QEvent* param1);
    friend void QChartView_InitStyleOption(const QChartView* self, QStyleOptionFrame* option);
    friend void QChartView_QBaseInitStyleOption(const QChartView* self, QStyleOptionFrame* option);
    friend void QChartView_EnterEvent(QChartView* self, QEnterEvent* event);
    friend void QChartView_QBaseEnterEvent(QChartView* self, QEnterEvent* event);
    friend void QChartView_LeaveEvent(QChartView* self, QEvent* event);
    friend void QChartView_QBaseLeaveEvent(QChartView* self, QEvent* event);
    friend void QChartView_MoveEvent(QChartView* self, QMoveEvent* event);
    friend void QChartView_QBaseMoveEvent(QChartView* self, QMoveEvent* event);
    friend void QChartView_CloseEvent(QChartView* self, QCloseEvent* event);
    friend void QChartView_QBaseCloseEvent(QChartView* self, QCloseEvent* event);
    friend void QChartView_TabletEvent(QChartView* self, QTabletEvent* event);
    friend void QChartView_QBaseTabletEvent(QChartView* self, QTabletEvent* event);
    friend void QChartView_ActionEvent(QChartView* self, QActionEvent* event);
    friend void QChartView_QBaseActionEvent(QChartView* self, QActionEvent* event);
    friend void QChartView_HideEvent(QChartView* self, QHideEvent* event);
    friend void QChartView_QBaseHideEvent(QChartView* self, QHideEvent* event);
    friend bool QChartView_NativeEvent(QChartView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QChartView_QBaseNativeEvent(QChartView* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QChartView_Metric(const QChartView* self, int param1);
    friend int QChartView_QBaseMetric(const QChartView* self, int param1);
    friend void QChartView_InitPainter(const QChartView* self, QPainter* painter);
    friend void QChartView_QBaseInitPainter(const QChartView* self, QPainter* painter);
    friend QPaintDevice* QChartView_Redirected(const QChartView* self, QPoint* offset);
    friend QPaintDevice* QChartView_QBaseRedirected(const QChartView* self, QPoint* offset);
    friend QPainter* QChartView_SharedPainter(const QChartView* self);
    friend QPainter* QChartView_QBaseSharedPainter(const QChartView* self);
    friend void QChartView_TimerEvent(QChartView* self, QTimerEvent* event);
    friend void QChartView_QBaseTimerEvent(QChartView* self, QTimerEvent* event);
    friend void QChartView_ChildEvent(QChartView* self, QChildEvent* event);
    friend void QChartView_QBaseChildEvent(QChartView* self, QChildEvent* event);
    friend void QChartView_CustomEvent(QChartView* self, QEvent* event);
    friend void QChartView_QBaseCustomEvent(QChartView* self, QEvent* event);
    friend void QChartView_ConnectNotify(QChartView* self, const QMetaMethod* signal);
    friend void QChartView_QBaseConnectNotify(QChartView* self, const QMetaMethod* signal);
    friend void QChartView_DisconnectNotify(QChartView* self, const QMetaMethod* signal);
    friend void QChartView_QBaseDisconnectNotify(QChartView* self, const QMetaMethod* signal);
    friend void QChartView_SetViewportMargins(QChartView* self, int left, int top, int right, int bottom);
    friend void QChartView_QBaseSetViewportMargins(QChartView* self, int left, int top, int right, int bottom);
    friend QMargins* QChartView_ViewportMargins(const QChartView* self);
    friend QMargins* QChartView_QBaseViewportMargins(const QChartView* self);
    friend void QChartView_DrawFrame(QChartView* self, QPainter* param1);
    friend void QChartView_QBaseDrawFrame(QChartView* self, QPainter* param1);
    friend void QChartView_UpdateMicroFocus(QChartView* self);
    friend void QChartView_QBaseUpdateMicroFocus(QChartView* self);
    friend void QChartView_Create(QChartView* self);
    friend void QChartView_QBaseCreate(QChartView* self);
    friend void QChartView_Destroy(QChartView* self);
    friend void QChartView_QBaseDestroy(QChartView* self);
    friend bool QChartView_FocusNextChild(QChartView* self);
    friend bool QChartView_QBaseFocusNextChild(QChartView* self);
    friend bool QChartView_FocusPreviousChild(QChartView* self);
    friend bool QChartView_QBaseFocusPreviousChild(QChartView* self);
    friend QObject* QChartView_Sender(const QChartView* self);
    friend QObject* QChartView_QBaseSender(const QChartView* self);
    friend int QChartView_SenderSignalIndex(const QChartView* self);
    friend int QChartView_QBaseSenderSignalIndex(const QChartView* self);
    friend int QChartView_Receivers(const QChartView* self, const char* signal);
    friend int QChartView_QBaseReceivers(const QChartView* self, const char* signal);
    friend bool QChartView_IsSignalConnected(const QChartView* self, const QMetaMethod* signal);
    friend bool QChartView_QBaseIsSignalConnected(const QChartView* self, const QMetaMethod* signal);
    friend double QChartView_GetDecodedMetricF(const QChartView* self, int metricA, int metricB);
    friend double QChartView_QBaseGetDecodedMetricF(const QChartView* self, int metricA, int metricB);
};

#endif
