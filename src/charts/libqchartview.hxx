#pragma once
#ifndef SRC_CHARTSC_LIBVIRTUALQCHARTVIEW_H
#define SRC_CHARTSC_LIBVIRTUALQCHARTVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QChartView so that we can call protected methods
class VirtualQChartView : public QChartView {

  public:
    // Virtual class public types (including callbacks)
    using QChartView_Metacall_Callback = int (*)(QChartView*, QMetaObject::Call, int, void**);
    using QChartView_ResizeEvent_Callback = void (*)(QChartView*, QResizeEvent*);
    using QChartView_MousePressEvent_Callback = void (*)(QChartView*, QMouseEvent*);
    using QChartView_MouseMoveEvent_Callback = void (*)(QChartView*, QMouseEvent*);
    using QChartView_MouseReleaseEvent_Callback = void (*)(QChartView*, QMouseEvent*);
    using QChartView_SizeHint_Callback = QSize (*)();
    using QChartView_InputMethodQuery_Callback = QVariant (*)(const QChartView*, Qt::InputMethodQuery);
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
    using QChartView_DrawBackground_Callback = void (*)(QChartView*, QPainter*, const QRectF&);
    using QChartView_DrawForeground_Callback = void (*)(QChartView*, QPainter*, const QRectF&);
    using QChartView_MinimumSizeHint_Callback = QSize (*)();
    using QChartView_EventFilter_Callback = bool (*)(QChartView*, QObject*, QEvent*);
    using QChartView_ViewportSizeHint_Callback = QSize (*)();
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
    using QChartView_NativeEvent_Callback = bool (*)(QChartView*, const QByteArray&, void*, qintptr*);
    using QChartView_Metric_Callback = int (*)(const QChartView*, QPaintDevice::PaintDeviceMetric);
    using QChartView_InitPainter_Callback = void (*)(const QChartView*, QPainter*);
    using QChartView_Redirected_Callback = QPaintDevice* (*)(const QChartView*, QPoint*);
    using QChartView_SharedPainter_Callback = QPainter* (*)();
    using QChartView_TimerEvent_Callback = void (*)(QChartView*, QTimerEvent*);
    using QChartView_ChildEvent_Callback = void (*)(QChartView*, QChildEvent*);
    using QChartView_CustomEvent_Callback = void (*)(QChartView*, QEvent*);
    using QChartView_ConnectNotify_Callback = void (*)(QChartView*, const QMetaMethod&);
    using QChartView_DisconnectNotify_Callback = void (*)(QChartView*, const QMetaMethod&);
    using QChartView_SetViewportMargins_Callback = void (*)(QChartView*, int, int, int, int);
    using QChartView_ViewportMargins_Callback = QMargins (*)();
    using QChartView_DrawFrame_Callback = void (*)(QChartView*, QPainter*);
    using QChartView_UpdateMicroFocus_Callback = void (*)();
    using QChartView_Create_Callback = void (*)();
    using QChartView_Destroy_Callback = void (*)();
    using QChartView_FocusNextChild_Callback = bool (*)();
    using QChartView_FocusPreviousChild_Callback = bool (*)();
    using QChartView_Sender_Callback = QObject* (*)();
    using QChartView_SenderSignalIndex_Callback = int (*)();
    using QChartView_Receivers_Callback = int (*)(const QChartView*, const char*);
    using QChartView_IsSignalConnected_Callback = bool (*)(const QChartView*, const QMetaMethod&);

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

  public:
    VirtualQChartView(QWidget* parent) : QChartView(parent){};
    VirtualQChartView() : QChartView(){};
    VirtualQChartView(QChart* chart) : QChartView(chart){};
    VirtualQChartView(QChart* chart, QWidget* parent) : QChartView(chart, parent){};

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
    }

    // Callback setters
    void setQChartView_Metacall_Callback(QChartView_Metacall_Callback cb) { qchartview_metacall_callback = cb; }
    void setQChartView_ResizeEvent_Callback(QChartView_ResizeEvent_Callback cb) { qchartview_resizeevent_callback = cb; }
    void setQChartView_MousePressEvent_Callback(QChartView_MousePressEvent_Callback cb) { qchartview_mousepressevent_callback = cb; }
    void setQChartView_MouseMoveEvent_Callback(QChartView_MouseMoveEvent_Callback cb) { qchartview_mousemoveevent_callback = cb; }
    void setQChartView_MouseReleaseEvent_Callback(QChartView_MouseReleaseEvent_Callback cb) { qchartview_mousereleaseevent_callback = cb; }
    void setQChartView_SizeHint_Callback(QChartView_SizeHint_Callback cb) { qchartview_sizehint_callback = cb; }
    void setQChartView_InputMethodQuery_Callback(QChartView_InputMethodQuery_Callback cb) { qchartview_inputmethodquery_callback = cb; }
    void setQChartView_SetupViewport_Callback(QChartView_SetupViewport_Callback cb) { qchartview_setupviewport_callback = cb; }
    void setQChartView_Event_Callback(QChartView_Event_Callback cb) { qchartview_event_callback = cb; }
    void setQChartView_ViewportEvent_Callback(QChartView_ViewportEvent_Callback cb) { qchartview_viewportevent_callback = cb; }
    void setQChartView_ContextMenuEvent_Callback(QChartView_ContextMenuEvent_Callback cb) { qchartview_contextmenuevent_callback = cb; }
    void setQChartView_DragEnterEvent_Callback(QChartView_DragEnterEvent_Callback cb) { qchartview_dragenterevent_callback = cb; }
    void setQChartView_DragLeaveEvent_Callback(QChartView_DragLeaveEvent_Callback cb) { qchartview_dragleaveevent_callback = cb; }
    void setQChartView_DragMoveEvent_Callback(QChartView_DragMoveEvent_Callback cb) { qchartview_dragmoveevent_callback = cb; }
    void setQChartView_DropEvent_Callback(QChartView_DropEvent_Callback cb) { qchartview_dropevent_callback = cb; }
    void setQChartView_FocusInEvent_Callback(QChartView_FocusInEvent_Callback cb) { qchartview_focusinevent_callback = cb; }
    void setQChartView_FocusNextPrevChild_Callback(QChartView_FocusNextPrevChild_Callback cb) { qchartview_focusnextprevchild_callback = cb; }
    void setQChartView_FocusOutEvent_Callback(QChartView_FocusOutEvent_Callback cb) { qchartview_focusoutevent_callback = cb; }
    void setQChartView_KeyPressEvent_Callback(QChartView_KeyPressEvent_Callback cb) { qchartview_keypressevent_callback = cb; }
    void setQChartView_KeyReleaseEvent_Callback(QChartView_KeyReleaseEvent_Callback cb) { qchartview_keyreleaseevent_callback = cb; }
    void setQChartView_MouseDoubleClickEvent_Callback(QChartView_MouseDoubleClickEvent_Callback cb) { qchartview_mousedoubleclickevent_callback = cb; }
    void setQChartView_WheelEvent_Callback(QChartView_WheelEvent_Callback cb) { qchartview_wheelevent_callback = cb; }
    void setQChartView_PaintEvent_Callback(QChartView_PaintEvent_Callback cb) { qchartview_paintevent_callback = cb; }
    void setQChartView_ScrollContentsBy_Callback(QChartView_ScrollContentsBy_Callback cb) { qchartview_scrollcontentsby_callback = cb; }
    void setQChartView_ShowEvent_Callback(QChartView_ShowEvent_Callback cb) { qchartview_showevent_callback = cb; }
    void setQChartView_InputMethodEvent_Callback(QChartView_InputMethodEvent_Callback cb) { qchartview_inputmethodevent_callback = cb; }
    void setQChartView_DrawBackground_Callback(QChartView_DrawBackground_Callback cb) { qchartview_drawbackground_callback = cb; }
    void setQChartView_DrawForeground_Callback(QChartView_DrawForeground_Callback cb) { qchartview_drawforeground_callback = cb; }
    void setQChartView_MinimumSizeHint_Callback(QChartView_MinimumSizeHint_Callback cb) { qchartview_minimumsizehint_callback = cb; }
    void setQChartView_EventFilter_Callback(QChartView_EventFilter_Callback cb) { qchartview_eventfilter_callback = cb; }
    void setQChartView_ViewportSizeHint_Callback(QChartView_ViewportSizeHint_Callback cb) { qchartview_viewportsizehint_callback = cb; }
    void setQChartView_ChangeEvent_Callback(QChartView_ChangeEvent_Callback cb) { qchartview_changeevent_callback = cb; }
    void setQChartView_InitStyleOption_Callback(QChartView_InitStyleOption_Callback cb) { qchartview_initstyleoption_callback = cb; }
    void setQChartView_DevType_Callback(QChartView_DevType_Callback cb) { qchartview_devtype_callback = cb; }
    void setQChartView_SetVisible_Callback(QChartView_SetVisible_Callback cb) { qchartview_setvisible_callback = cb; }
    void setQChartView_HeightForWidth_Callback(QChartView_HeightForWidth_Callback cb) { qchartview_heightforwidth_callback = cb; }
    void setQChartView_HasHeightForWidth_Callback(QChartView_HasHeightForWidth_Callback cb) { qchartview_hasheightforwidth_callback = cb; }
    void setQChartView_PaintEngine_Callback(QChartView_PaintEngine_Callback cb) { qchartview_paintengine_callback = cb; }
    void setQChartView_EnterEvent_Callback(QChartView_EnterEvent_Callback cb) { qchartview_enterevent_callback = cb; }
    void setQChartView_LeaveEvent_Callback(QChartView_LeaveEvent_Callback cb) { qchartview_leaveevent_callback = cb; }
    void setQChartView_MoveEvent_Callback(QChartView_MoveEvent_Callback cb) { qchartview_moveevent_callback = cb; }
    void setQChartView_CloseEvent_Callback(QChartView_CloseEvent_Callback cb) { qchartview_closeevent_callback = cb; }
    void setQChartView_TabletEvent_Callback(QChartView_TabletEvent_Callback cb) { qchartview_tabletevent_callback = cb; }
    void setQChartView_ActionEvent_Callback(QChartView_ActionEvent_Callback cb) { qchartview_actionevent_callback = cb; }
    void setQChartView_HideEvent_Callback(QChartView_HideEvent_Callback cb) { qchartview_hideevent_callback = cb; }
    void setQChartView_NativeEvent_Callback(QChartView_NativeEvent_Callback cb) { qchartview_nativeevent_callback = cb; }
    void setQChartView_Metric_Callback(QChartView_Metric_Callback cb) { qchartview_metric_callback = cb; }
    void setQChartView_InitPainter_Callback(QChartView_InitPainter_Callback cb) { qchartview_initpainter_callback = cb; }
    void setQChartView_Redirected_Callback(QChartView_Redirected_Callback cb) { qchartview_redirected_callback = cb; }
    void setQChartView_SharedPainter_Callback(QChartView_SharedPainter_Callback cb) { qchartview_sharedpainter_callback = cb; }
    void setQChartView_TimerEvent_Callback(QChartView_TimerEvent_Callback cb) { qchartview_timerevent_callback = cb; }
    void setQChartView_ChildEvent_Callback(QChartView_ChildEvent_Callback cb) { qchartview_childevent_callback = cb; }
    void setQChartView_CustomEvent_Callback(QChartView_CustomEvent_Callback cb) { qchartview_customevent_callback = cb; }
    void setQChartView_ConnectNotify_Callback(QChartView_ConnectNotify_Callback cb) { qchartview_connectnotify_callback = cb; }
    void setQChartView_DisconnectNotify_Callback(QChartView_DisconnectNotify_Callback cb) { qchartview_disconnectnotify_callback = cb; }
    void setQChartView_SetViewportMargins_Callback(QChartView_SetViewportMargins_Callback cb) { qchartview_setviewportmargins_callback = cb; }
    void setQChartView_ViewportMargins_Callback(QChartView_ViewportMargins_Callback cb) { qchartview_viewportmargins_callback = cb; }
    void setQChartView_DrawFrame_Callback(QChartView_DrawFrame_Callback cb) { qchartview_drawframe_callback = cb; }
    void setQChartView_UpdateMicroFocus_Callback(QChartView_UpdateMicroFocus_Callback cb) { qchartview_updatemicrofocus_callback = cb; }
    void setQChartView_Create_Callback(QChartView_Create_Callback cb) { qchartview_create_callback = cb; }
    void setQChartView_Destroy_Callback(QChartView_Destroy_Callback cb) { qchartview_destroy_callback = cb; }
    void setQChartView_FocusNextChild_Callback(QChartView_FocusNextChild_Callback cb) { qchartview_focusnextchild_callback = cb; }
    void setQChartView_FocusPreviousChild_Callback(QChartView_FocusPreviousChild_Callback cb) { qchartview_focuspreviouschild_callback = cb; }
    void setQChartView_Sender_Callback(QChartView_Sender_Callback cb) { qchartview_sender_callback = cb; }
    void setQChartView_SenderSignalIndex_Callback(QChartView_SenderSignalIndex_Callback cb) { qchartview_sendersignalindex_callback = cb; }
    void setQChartView_Receivers_Callback(QChartView_Receivers_Callback cb) { qchartview_receivers_callback = cb; }
    void setQChartView_IsSignalConnected_Callback(QChartView_IsSignalConnected_Callback cb) { qchartview_issignalconnected_callback = cb; }

    // Base flag setters
    void setQChartView_Metacall_IsBase(bool value) const { qchartview_metacall_isbase = value; }
    void setQChartView_ResizeEvent_IsBase(bool value) const { qchartview_resizeevent_isbase = value; }
    void setQChartView_MousePressEvent_IsBase(bool value) const { qchartview_mousepressevent_isbase = value; }
    void setQChartView_MouseMoveEvent_IsBase(bool value) const { qchartview_mousemoveevent_isbase = value; }
    void setQChartView_MouseReleaseEvent_IsBase(bool value) const { qchartview_mousereleaseevent_isbase = value; }
    void setQChartView_SizeHint_IsBase(bool value) const { qchartview_sizehint_isbase = value; }
    void setQChartView_InputMethodQuery_IsBase(bool value) const { qchartview_inputmethodquery_isbase = value; }
    void setQChartView_SetupViewport_IsBase(bool value) const { qchartview_setupviewport_isbase = value; }
    void setQChartView_Event_IsBase(bool value) const { qchartview_event_isbase = value; }
    void setQChartView_ViewportEvent_IsBase(bool value) const { qchartview_viewportevent_isbase = value; }
    void setQChartView_ContextMenuEvent_IsBase(bool value) const { qchartview_contextmenuevent_isbase = value; }
    void setQChartView_DragEnterEvent_IsBase(bool value) const { qchartview_dragenterevent_isbase = value; }
    void setQChartView_DragLeaveEvent_IsBase(bool value) const { qchartview_dragleaveevent_isbase = value; }
    void setQChartView_DragMoveEvent_IsBase(bool value) const { qchartview_dragmoveevent_isbase = value; }
    void setQChartView_DropEvent_IsBase(bool value) const { qchartview_dropevent_isbase = value; }
    void setQChartView_FocusInEvent_IsBase(bool value) const { qchartview_focusinevent_isbase = value; }
    void setQChartView_FocusNextPrevChild_IsBase(bool value) const { qchartview_focusnextprevchild_isbase = value; }
    void setQChartView_FocusOutEvent_IsBase(bool value) const { qchartview_focusoutevent_isbase = value; }
    void setQChartView_KeyPressEvent_IsBase(bool value) const { qchartview_keypressevent_isbase = value; }
    void setQChartView_KeyReleaseEvent_IsBase(bool value) const { qchartview_keyreleaseevent_isbase = value; }
    void setQChartView_MouseDoubleClickEvent_IsBase(bool value) const { qchartview_mousedoubleclickevent_isbase = value; }
    void setQChartView_WheelEvent_IsBase(bool value) const { qchartview_wheelevent_isbase = value; }
    void setQChartView_PaintEvent_IsBase(bool value) const { qchartview_paintevent_isbase = value; }
    void setQChartView_ScrollContentsBy_IsBase(bool value) const { qchartview_scrollcontentsby_isbase = value; }
    void setQChartView_ShowEvent_IsBase(bool value) const { qchartview_showevent_isbase = value; }
    void setQChartView_InputMethodEvent_IsBase(bool value) const { qchartview_inputmethodevent_isbase = value; }
    void setQChartView_DrawBackground_IsBase(bool value) const { qchartview_drawbackground_isbase = value; }
    void setQChartView_DrawForeground_IsBase(bool value) const { qchartview_drawforeground_isbase = value; }
    void setQChartView_MinimumSizeHint_IsBase(bool value) const { qchartview_minimumsizehint_isbase = value; }
    void setQChartView_EventFilter_IsBase(bool value) const { qchartview_eventfilter_isbase = value; }
    void setQChartView_ViewportSizeHint_IsBase(bool value) const { qchartview_viewportsizehint_isbase = value; }
    void setQChartView_ChangeEvent_IsBase(bool value) const { qchartview_changeevent_isbase = value; }
    void setQChartView_InitStyleOption_IsBase(bool value) const { qchartview_initstyleoption_isbase = value; }
    void setQChartView_DevType_IsBase(bool value) const { qchartview_devtype_isbase = value; }
    void setQChartView_SetVisible_IsBase(bool value) const { qchartview_setvisible_isbase = value; }
    void setQChartView_HeightForWidth_IsBase(bool value) const { qchartview_heightforwidth_isbase = value; }
    void setQChartView_HasHeightForWidth_IsBase(bool value) const { qchartview_hasheightforwidth_isbase = value; }
    void setQChartView_PaintEngine_IsBase(bool value) const { qchartview_paintengine_isbase = value; }
    void setQChartView_EnterEvent_IsBase(bool value) const { qchartview_enterevent_isbase = value; }
    void setQChartView_LeaveEvent_IsBase(bool value) const { qchartview_leaveevent_isbase = value; }
    void setQChartView_MoveEvent_IsBase(bool value) const { qchartview_moveevent_isbase = value; }
    void setQChartView_CloseEvent_IsBase(bool value) const { qchartview_closeevent_isbase = value; }
    void setQChartView_TabletEvent_IsBase(bool value) const { qchartview_tabletevent_isbase = value; }
    void setQChartView_ActionEvent_IsBase(bool value) const { qchartview_actionevent_isbase = value; }
    void setQChartView_HideEvent_IsBase(bool value) const { qchartview_hideevent_isbase = value; }
    void setQChartView_NativeEvent_IsBase(bool value) const { qchartview_nativeevent_isbase = value; }
    void setQChartView_Metric_IsBase(bool value) const { qchartview_metric_isbase = value; }
    void setQChartView_InitPainter_IsBase(bool value) const { qchartview_initpainter_isbase = value; }
    void setQChartView_Redirected_IsBase(bool value) const { qchartview_redirected_isbase = value; }
    void setQChartView_SharedPainter_IsBase(bool value) const { qchartview_sharedpainter_isbase = value; }
    void setQChartView_TimerEvent_IsBase(bool value) const { qchartview_timerevent_isbase = value; }
    void setQChartView_ChildEvent_IsBase(bool value) const { qchartview_childevent_isbase = value; }
    void setQChartView_CustomEvent_IsBase(bool value) const { qchartview_customevent_isbase = value; }
    void setQChartView_ConnectNotify_IsBase(bool value) const { qchartview_connectnotify_isbase = value; }
    void setQChartView_DisconnectNotify_IsBase(bool value) const { qchartview_disconnectnotify_isbase = value; }
    void setQChartView_SetViewportMargins_IsBase(bool value) const { qchartview_setviewportmargins_isbase = value; }
    void setQChartView_ViewportMargins_IsBase(bool value) const { qchartview_viewportmargins_isbase = value; }
    void setQChartView_DrawFrame_IsBase(bool value) const { qchartview_drawframe_isbase = value; }
    void setQChartView_UpdateMicroFocus_IsBase(bool value) const { qchartview_updatemicrofocus_isbase = value; }
    void setQChartView_Create_IsBase(bool value) const { qchartview_create_isbase = value; }
    void setQChartView_Destroy_IsBase(bool value) const { qchartview_destroy_isbase = value; }
    void setQChartView_FocusNextChild_IsBase(bool value) const { qchartview_focusnextchild_isbase = value; }
    void setQChartView_FocusPreviousChild_IsBase(bool value) const { qchartview_focuspreviouschild_isbase = value; }
    void setQChartView_Sender_IsBase(bool value) const { qchartview_sender_isbase = value; }
    void setQChartView_SenderSignalIndex_IsBase(bool value) const { qchartview_sendersignalindex_isbase = value; }
    void setQChartView_Receivers_IsBase(bool value) const { qchartview_receivers_isbase = value; }
    void setQChartView_IsSignalConnected_IsBase(bool value) const { qchartview_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qchartview_metacall_isbase) {
            qchartview_metacall_isbase = false;
            return QChartView::qt_metacall(param1, param2, param3);
        } else if (qchartview_metacall_callback != nullptr) {
            return qchartview_metacall_callback(this, param1, param2, param3);
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
            qchartview_resizeevent_callback(this, event);
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
            qchartview_mousepressevent_callback(this, event);
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
            qchartview_mousemoveevent_callback(this, event);
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
            qchartview_mousereleaseevent_callback(this, event);
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
            return qchartview_sizehint_callback();
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
            return qchartview_inputmethodquery_callback(this, query);
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
            qchartview_setupviewport_callback(this, widget);
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
            return qchartview_event_callback(this, event);
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
            return qchartview_viewportevent_callback(this, event);
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
            qchartview_contextmenuevent_callback(this, event);
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
            qchartview_dragenterevent_callback(this, event);
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
            qchartview_dragleaveevent_callback(this, event);
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
            qchartview_dragmoveevent_callback(this, event);
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
            qchartview_dropevent_callback(this, event);
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
            qchartview_focusinevent_callback(this, event);
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
            return qchartview_focusnextprevchild_callback(this, next);
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
            qchartview_focusoutevent_callback(this, event);
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
            qchartview_keypressevent_callback(this, event);
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
            qchartview_keyreleaseevent_callback(this, event);
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
            qchartview_mousedoubleclickevent_callback(this, event);
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
            qchartview_wheelevent_callback(this, event);
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
            qchartview_paintevent_callback(this, event);
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
            qchartview_scrollcontentsby_callback(this, dx, dy);
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
            qchartview_showevent_callback(this, event);
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
            qchartview_inputmethodevent_callback(this, event);
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
            qchartview_drawbackground_callback(this, painter, rect);
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
            qchartview_drawforeground_callback(this, painter, rect);
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
            return qchartview_minimumsizehint_callback();
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
            return qchartview_eventfilter_callback(this, param1, param2);
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
            return qchartview_viewportsizehint_callback();
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
            qchartview_changeevent_callback(this, param1);
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
            qchartview_initstyleoption_callback(this, option);
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
            return qchartview_devtype_callback();
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
            qchartview_setvisible_callback(this, visible);
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
            return qchartview_heightforwidth_callback(this, param1);
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
            return qchartview_hasheightforwidth_callback();
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
            return qchartview_paintengine_callback();
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
            qchartview_enterevent_callback(this, event);
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
            qchartview_leaveevent_callback(this, event);
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
            qchartview_moveevent_callback(this, event);
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
            qchartview_closeevent_callback(this, event);
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
            qchartview_tabletevent_callback(this, event);
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
            qchartview_actionevent_callback(this, event);
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
            qchartview_hideevent_callback(this, event);
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
            return qchartview_nativeevent_callback(this, eventType, message, result);
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
            return qchartview_metric_callback(this, param1);
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
            qchartview_initpainter_callback(this, painter);
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
            return qchartview_redirected_callback(this, offset);
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
            return qchartview_sharedpainter_callback();
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
            qchartview_timerevent_callback(this, event);
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
            qchartview_childevent_callback(this, event);
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
            qchartview_customevent_callback(this, event);
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
            qchartview_connectnotify_callback(this, signal);
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
            qchartview_disconnectnotify_callback(this, signal);
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
            qchartview_setviewportmargins_callback(this, left, top, right, bottom);
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
            return qchartview_viewportmargins_callback();
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
            qchartview_drawframe_callback(this, param1);
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
            return qchartview_focusnextchild_callback();
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
            return qchartview_focuspreviouschild_callback();
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
            return qchartview_sender_callback();
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
            return qchartview_sendersignalindex_callback();
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
            return qchartview_receivers_callback(this, signal);
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
            return qchartview_issignalconnected_callback(this, signal);
        } else {
            return QChartView::isSignalConnected(signal);
        }
    }
};

#endif
