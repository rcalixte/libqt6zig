#pragma once
#ifndef SRC_SVGC_LIBVIRTUALQSVGWIDGET_H
#define SRC_SVGC_LIBVIRTUALQSVGWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSvgWidget so that we can call protected methods
class VirtualQSvgWidget final : public QSvgWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualQSvgWidget = true;

    // Virtual class public types (including callbacks)
    using QSvgWidget_Metacall_Callback = int (*)(QSvgWidget*, int, int, void**);
    using QSvgWidget_SizeHint_Callback = QSize* (*)();
    using QSvgWidget_PaintEvent_Callback = void (*)(QSvgWidget*, QPaintEvent*);
    using QSvgWidget_DevType_Callback = int (*)();
    using QSvgWidget_SetVisible_Callback = void (*)(QSvgWidget*, bool);
    using QSvgWidget_MinimumSizeHint_Callback = QSize* (*)();
    using QSvgWidget_HeightForWidth_Callback = int (*)(const QSvgWidget*, int);
    using QSvgWidget_HasHeightForWidth_Callback = bool (*)();
    using QSvgWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using QSvgWidget_Event_Callback = bool (*)(QSvgWidget*, QEvent*);
    using QSvgWidget_MousePressEvent_Callback = void (*)(QSvgWidget*, QMouseEvent*);
    using QSvgWidget_MouseReleaseEvent_Callback = void (*)(QSvgWidget*, QMouseEvent*);
    using QSvgWidget_MouseDoubleClickEvent_Callback = void (*)(QSvgWidget*, QMouseEvent*);
    using QSvgWidget_MouseMoveEvent_Callback = void (*)(QSvgWidget*, QMouseEvent*);
    using QSvgWidget_WheelEvent_Callback = void (*)(QSvgWidget*, QWheelEvent*);
    using QSvgWidget_KeyPressEvent_Callback = void (*)(QSvgWidget*, QKeyEvent*);
    using QSvgWidget_KeyReleaseEvent_Callback = void (*)(QSvgWidget*, QKeyEvent*);
    using QSvgWidget_FocusInEvent_Callback = void (*)(QSvgWidget*, QFocusEvent*);
    using QSvgWidget_FocusOutEvent_Callback = void (*)(QSvgWidget*, QFocusEvent*);
    using QSvgWidget_EnterEvent_Callback = void (*)(QSvgWidget*, QEnterEvent*);
    using QSvgWidget_LeaveEvent_Callback = void (*)(QSvgWidget*, QEvent*);
    using QSvgWidget_MoveEvent_Callback = void (*)(QSvgWidget*, QMoveEvent*);
    using QSvgWidget_ResizeEvent_Callback = void (*)(QSvgWidget*, QResizeEvent*);
    using QSvgWidget_CloseEvent_Callback = void (*)(QSvgWidget*, QCloseEvent*);
    using QSvgWidget_ContextMenuEvent_Callback = void (*)(QSvgWidget*, QContextMenuEvent*);
    using QSvgWidget_TabletEvent_Callback = void (*)(QSvgWidget*, QTabletEvent*);
    using QSvgWidget_ActionEvent_Callback = void (*)(QSvgWidget*, QActionEvent*);
    using QSvgWidget_DragEnterEvent_Callback = void (*)(QSvgWidget*, QDragEnterEvent*);
    using QSvgWidget_DragMoveEvent_Callback = void (*)(QSvgWidget*, QDragMoveEvent*);
    using QSvgWidget_DragLeaveEvent_Callback = void (*)(QSvgWidget*, QDragLeaveEvent*);
    using QSvgWidget_DropEvent_Callback = void (*)(QSvgWidget*, QDropEvent*);
    using QSvgWidget_ShowEvent_Callback = void (*)(QSvgWidget*, QShowEvent*);
    using QSvgWidget_HideEvent_Callback = void (*)(QSvgWidget*, QHideEvent*);
    using QSvgWidget_NativeEvent_Callback = bool (*)(QSvgWidget*, libqt_string, void*, intptr_t*);
    using QSvgWidget_ChangeEvent_Callback = void (*)(QSvgWidget*, QEvent*);
    using QSvgWidget_Metric_Callback = int (*)(const QSvgWidget*, int);
    using QSvgWidget_InitPainter_Callback = void (*)(const QSvgWidget*, QPainter*);
    using QSvgWidget_Redirected_Callback = QPaintDevice* (*)(const QSvgWidget*, QPoint*);
    using QSvgWidget_SharedPainter_Callback = QPainter* (*)();
    using QSvgWidget_InputMethodEvent_Callback = void (*)(QSvgWidget*, QInputMethodEvent*);
    using QSvgWidget_InputMethodQuery_Callback = QVariant* (*)(const QSvgWidget*, int);
    using QSvgWidget_FocusNextPrevChild_Callback = bool (*)(QSvgWidget*, bool);
    using QSvgWidget_EventFilter_Callback = bool (*)(QSvgWidget*, QObject*, QEvent*);
    using QSvgWidget_TimerEvent_Callback = void (*)(QSvgWidget*, QTimerEvent*);
    using QSvgWidget_ChildEvent_Callback = void (*)(QSvgWidget*, QChildEvent*);
    using QSvgWidget_CustomEvent_Callback = void (*)(QSvgWidget*, QEvent*);
    using QSvgWidget_ConnectNotify_Callback = void (*)(QSvgWidget*, QMetaMethod*);
    using QSvgWidget_DisconnectNotify_Callback = void (*)(QSvgWidget*, QMetaMethod*);
    using QSvgWidget_UpdateMicroFocus_Callback = void (*)();
    using QSvgWidget_Create_Callback = void (*)();
    using QSvgWidget_Destroy_Callback = void (*)();
    using QSvgWidget_FocusNextChild_Callback = bool (*)();
    using QSvgWidget_FocusPreviousChild_Callback = bool (*)();
    using QSvgWidget_Sender_Callback = QObject* (*)();
    using QSvgWidget_SenderSignalIndex_Callback = int (*)();
    using QSvgWidget_Receivers_Callback = int (*)(const QSvgWidget*, const char*);
    using QSvgWidget_IsSignalConnected_Callback = bool (*)(const QSvgWidget*, QMetaMethod*);
    using QSvgWidget_GetDecodedMetricF_Callback = double (*)(const QSvgWidget*, int, int);

  protected:
    // Instance callback storage
    QSvgWidget_Metacall_Callback qsvgwidget_metacall_callback = nullptr;
    QSvgWidget_SizeHint_Callback qsvgwidget_sizehint_callback = nullptr;
    QSvgWidget_PaintEvent_Callback qsvgwidget_paintevent_callback = nullptr;
    QSvgWidget_DevType_Callback qsvgwidget_devtype_callback = nullptr;
    QSvgWidget_SetVisible_Callback qsvgwidget_setvisible_callback = nullptr;
    QSvgWidget_MinimumSizeHint_Callback qsvgwidget_minimumsizehint_callback = nullptr;
    QSvgWidget_HeightForWidth_Callback qsvgwidget_heightforwidth_callback = nullptr;
    QSvgWidget_HasHeightForWidth_Callback qsvgwidget_hasheightforwidth_callback = nullptr;
    QSvgWidget_PaintEngine_Callback qsvgwidget_paintengine_callback = nullptr;
    QSvgWidget_Event_Callback qsvgwidget_event_callback = nullptr;
    QSvgWidget_MousePressEvent_Callback qsvgwidget_mousepressevent_callback = nullptr;
    QSvgWidget_MouseReleaseEvent_Callback qsvgwidget_mousereleaseevent_callback = nullptr;
    QSvgWidget_MouseDoubleClickEvent_Callback qsvgwidget_mousedoubleclickevent_callback = nullptr;
    QSvgWidget_MouseMoveEvent_Callback qsvgwidget_mousemoveevent_callback = nullptr;
    QSvgWidget_WheelEvent_Callback qsvgwidget_wheelevent_callback = nullptr;
    QSvgWidget_KeyPressEvent_Callback qsvgwidget_keypressevent_callback = nullptr;
    QSvgWidget_KeyReleaseEvent_Callback qsvgwidget_keyreleaseevent_callback = nullptr;
    QSvgWidget_FocusInEvent_Callback qsvgwidget_focusinevent_callback = nullptr;
    QSvgWidget_FocusOutEvent_Callback qsvgwidget_focusoutevent_callback = nullptr;
    QSvgWidget_EnterEvent_Callback qsvgwidget_enterevent_callback = nullptr;
    QSvgWidget_LeaveEvent_Callback qsvgwidget_leaveevent_callback = nullptr;
    QSvgWidget_MoveEvent_Callback qsvgwidget_moveevent_callback = nullptr;
    QSvgWidget_ResizeEvent_Callback qsvgwidget_resizeevent_callback = nullptr;
    QSvgWidget_CloseEvent_Callback qsvgwidget_closeevent_callback = nullptr;
    QSvgWidget_ContextMenuEvent_Callback qsvgwidget_contextmenuevent_callback = nullptr;
    QSvgWidget_TabletEvent_Callback qsvgwidget_tabletevent_callback = nullptr;
    QSvgWidget_ActionEvent_Callback qsvgwidget_actionevent_callback = nullptr;
    QSvgWidget_DragEnterEvent_Callback qsvgwidget_dragenterevent_callback = nullptr;
    QSvgWidget_DragMoveEvent_Callback qsvgwidget_dragmoveevent_callback = nullptr;
    QSvgWidget_DragLeaveEvent_Callback qsvgwidget_dragleaveevent_callback = nullptr;
    QSvgWidget_DropEvent_Callback qsvgwidget_dropevent_callback = nullptr;
    QSvgWidget_ShowEvent_Callback qsvgwidget_showevent_callback = nullptr;
    QSvgWidget_HideEvent_Callback qsvgwidget_hideevent_callback = nullptr;
    QSvgWidget_NativeEvent_Callback qsvgwidget_nativeevent_callback = nullptr;
    QSvgWidget_ChangeEvent_Callback qsvgwidget_changeevent_callback = nullptr;
    QSvgWidget_Metric_Callback qsvgwidget_metric_callback = nullptr;
    QSvgWidget_InitPainter_Callback qsvgwidget_initpainter_callback = nullptr;
    QSvgWidget_Redirected_Callback qsvgwidget_redirected_callback = nullptr;
    QSvgWidget_SharedPainter_Callback qsvgwidget_sharedpainter_callback = nullptr;
    QSvgWidget_InputMethodEvent_Callback qsvgwidget_inputmethodevent_callback = nullptr;
    QSvgWidget_InputMethodQuery_Callback qsvgwidget_inputmethodquery_callback = nullptr;
    QSvgWidget_FocusNextPrevChild_Callback qsvgwidget_focusnextprevchild_callback = nullptr;
    QSvgWidget_EventFilter_Callback qsvgwidget_eventfilter_callback = nullptr;
    QSvgWidget_TimerEvent_Callback qsvgwidget_timerevent_callback = nullptr;
    QSvgWidget_ChildEvent_Callback qsvgwidget_childevent_callback = nullptr;
    QSvgWidget_CustomEvent_Callback qsvgwidget_customevent_callback = nullptr;
    QSvgWidget_ConnectNotify_Callback qsvgwidget_connectnotify_callback = nullptr;
    QSvgWidget_DisconnectNotify_Callback qsvgwidget_disconnectnotify_callback = nullptr;
    QSvgWidget_UpdateMicroFocus_Callback qsvgwidget_updatemicrofocus_callback = nullptr;
    QSvgWidget_Create_Callback qsvgwidget_create_callback = nullptr;
    QSvgWidget_Destroy_Callback qsvgwidget_destroy_callback = nullptr;
    QSvgWidget_FocusNextChild_Callback qsvgwidget_focusnextchild_callback = nullptr;
    QSvgWidget_FocusPreviousChild_Callback qsvgwidget_focuspreviouschild_callback = nullptr;
    QSvgWidget_Sender_Callback qsvgwidget_sender_callback = nullptr;
    QSvgWidget_SenderSignalIndex_Callback qsvgwidget_sendersignalindex_callback = nullptr;
    QSvgWidget_Receivers_Callback qsvgwidget_receivers_callback = nullptr;
    QSvgWidget_IsSignalConnected_Callback qsvgwidget_issignalconnected_callback = nullptr;
    QSvgWidget_GetDecodedMetricF_Callback qsvgwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qsvgwidget_metacall_isbase = false;
    mutable bool qsvgwidget_sizehint_isbase = false;
    mutable bool qsvgwidget_paintevent_isbase = false;
    mutable bool qsvgwidget_devtype_isbase = false;
    mutable bool qsvgwidget_setvisible_isbase = false;
    mutable bool qsvgwidget_minimumsizehint_isbase = false;
    mutable bool qsvgwidget_heightforwidth_isbase = false;
    mutable bool qsvgwidget_hasheightforwidth_isbase = false;
    mutable bool qsvgwidget_paintengine_isbase = false;
    mutable bool qsvgwidget_event_isbase = false;
    mutable bool qsvgwidget_mousepressevent_isbase = false;
    mutable bool qsvgwidget_mousereleaseevent_isbase = false;
    mutable bool qsvgwidget_mousedoubleclickevent_isbase = false;
    mutable bool qsvgwidget_mousemoveevent_isbase = false;
    mutable bool qsvgwidget_wheelevent_isbase = false;
    mutable bool qsvgwidget_keypressevent_isbase = false;
    mutable bool qsvgwidget_keyreleaseevent_isbase = false;
    mutable bool qsvgwidget_focusinevent_isbase = false;
    mutable bool qsvgwidget_focusoutevent_isbase = false;
    mutable bool qsvgwidget_enterevent_isbase = false;
    mutable bool qsvgwidget_leaveevent_isbase = false;
    mutable bool qsvgwidget_moveevent_isbase = false;
    mutable bool qsvgwidget_resizeevent_isbase = false;
    mutable bool qsvgwidget_closeevent_isbase = false;
    mutable bool qsvgwidget_contextmenuevent_isbase = false;
    mutable bool qsvgwidget_tabletevent_isbase = false;
    mutable bool qsvgwidget_actionevent_isbase = false;
    mutable bool qsvgwidget_dragenterevent_isbase = false;
    mutable bool qsvgwidget_dragmoveevent_isbase = false;
    mutable bool qsvgwidget_dragleaveevent_isbase = false;
    mutable bool qsvgwidget_dropevent_isbase = false;
    mutable bool qsvgwidget_showevent_isbase = false;
    mutable bool qsvgwidget_hideevent_isbase = false;
    mutable bool qsvgwidget_nativeevent_isbase = false;
    mutable bool qsvgwidget_changeevent_isbase = false;
    mutable bool qsvgwidget_metric_isbase = false;
    mutable bool qsvgwidget_initpainter_isbase = false;
    mutable bool qsvgwidget_redirected_isbase = false;
    mutable bool qsvgwidget_sharedpainter_isbase = false;
    mutable bool qsvgwidget_inputmethodevent_isbase = false;
    mutable bool qsvgwidget_inputmethodquery_isbase = false;
    mutable bool qsvgwidget_focusnextprevchild_isbase = false;
    mutable bool qsvgwidget_eventfilter_isbase = false;
    mutable bool qsvgwidget_timerevent_isbase = false;
    mutable bool qsvgwidget_childevent_isbase = false;
    mutable bool qsvgwidget_customevent_isbase = false;
    mutable bool qsvgwidget_connectnotify_isbase = false;
    mutable bool qsvgwidget_disconnectnotify_isbase = false;
    mutable bool qsvgwidget_updatemicrofocus_isbase = false;
    mutable bool qsvgwidget_create_isbase = false;
    mutable bool qsvgwidget_destroy_isbase = false;
    mutable bool qsvgwidget_focusnextchild_isbase = false;
    mutable bool qsvgwidget_focuspreviouschild_isbase = false;
    mutable bool qsvgwidget_sender_isbase = false;
    mutable bool qsvgwidget_sendersignalindex_isbase = false;
    mutable bool qsvgwidget_receivers_isbase = false;
    mutable bool qsvgwidget_issignalconnected_isbase = false;
    mutable bool qsvgwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualQSvgWidget(QWidget* parent) : QSvgWidget(parent) {};
    VirtualQSvgWidget() : QSvgWidget() {};
    VirtualQSvgWidget(const QString& file) : QSvgWidget(file) {};
    VirtualQSvgWidget(const QString& file, QWidget* parent) : QSvgWidget(file, parent) {};

    ~VirtualQSvgWidget() {
        qsvgwidget_metacall_callback = nullptr;
        qsvgwidget_sizehint_callback = nullptr;
        qsvgwidget_paintevent_callback = nullptr;
        qsvgwidget_devtype_callback = nullptr;
        qsvgwidget_setvisible_callback = nullptr;
        qsvgwidget_minimumsizehint_callback = nullptr;
        qsvgwidget_heightforwidth_callback = nullptr;
        qsvgwidget_hasheightforwidth_callback = nullptr;
        qsvgwidget_paintengine_callback = nullptr;
        qsvgwidget_event_callback = nullptr;
        qsvgwidget_mousepressevent_callback = nullptr;
        qsvgwidget_mousereleaseevent_callback = nullptr;
        qsvgwidget_mousedoubleclickevent_callback = nullptr;
        qsvgwidget_mousemoveevent_callback = nullptr;
        qsvgwidget_wheelevent_callback = nullptr;
        qsvgwidget_keypressevent_callback = nullptr;
        qsvgwidget_keyreleaseevent_callback = nullptr;
        qsvgwidget_focusinevent_callback = nullptr;
        qsvgwidget_focusoutevent_callback = nullptr;
        qsvgwidget_enterevent_callback = nullptr;
        qsvgwidget_leaveevent_callback = nullptr;
        qsvgwidget_moveevent_callback = nullptr;
        qsvgwidget_resizeevent_callback = nullptr;
        qsvgwidget_closeevent_callback = nullptr;
        qsvgwidget_contextmenuevent_callback = nullptr;
        qsvgwidget_tabletevent_callback = nullptr;
        qsvgwidget_actionevent_callback = nullptr;
        qsvgwidget_dragenterevent_callback = nullptr;
        qsvgwidget_dragmoveevent_callback = nullptr;
        qsvgwidget_dragleaveevent_callback = nullptr;
        qsvgwidget_dropevent_callback = nullptr;
        qsvgwidget_showevent_callback = nullptr;
        qsvgwidget_hideevent_callback = nullptr;
        qsvgwidget_nativeevent_callback = nullptr;
        qsvgwidget_changeevent_callback = nullptr;
        qsvgwidget_metric_callback = nullptr;
        qsvgwidget_initpainter_callback = nullptr;
        qsvgwidget_redirected_callback = nullptr;
        qsvgwidget_sharedpainter_callback = nullptr;
        qsvgwidget_inputmethodevent_callback = nullptr;
        qsvgwidget_inputmethodquery_callback = nullptr;
        qsvgwidget_focusnextprevchild_callback = nullptr;
        qsvgwidget_eventfilter_callback = nullptr;
        qsvgwidget_timerevent_callback = nullptr;
        qsvgwidget_childevent_callback = nullptr;
        qsvgwidget_customevent_callback = nullptr;
        qsvgwidget_connectnotify_callback = nullptr;
        qsvgwidget_disconnectnotify_callback = nullptr;
        qsvgwidget_updatemicrofocus_callback = nullptr;
        qsvgwidget_create_callback = nullptr;
        qsvgwidget_destroy_callback = nullptr;
        qsvgwidget_focusnextchild_callback = nullptr;
        qsvgwidget_focuspreviouschild_callback = nullptr;
        qsvgwidget_sender_callback = nullptr;
        qsvgwidget_sendersignalindex_callback = nullptr;
        qsvgwidget_receivers_callback = nullptr;
        qsvgwidget_issignalconnected_callback = nullptr;
        qsvgwidget_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQSvgWidget_Metacall_Callback(QSvgWidget_Metacall_Callback cb) { qsvgwidget_metacall_callback = cb; }
    inline void setQSvgWidget_SizeHint_Callback(QSvgWidget_SizeHint_Callback cb) { qsvgwidget_sizehint_callback = cb; }
    inline void setQSvgWidget_PaintEvent_Callback(QSvgWidget_PaintEvent_Callback cb) { qsvgwidget_paintevent_callback = cb; }
    inline void setQSvgWidget_DevType_Callback(QSvgWidget_DevType_Callback cb) { qsvgwidget_devtype_callback = cb; }
    inline void setQSvgWidget_SetVisible_Callback(QSvgWidget_SetVisible_Callback cb) { qsvgwidget_setvisible_callback = cb; }
    inline void setQSvgWidget_MinimumSizeHint_Callback(QSvgWidget_MinimumSizeHint_Callback cb) { qsvgwidget_minimumsizehint_callback = cb; }
    inline void setQSvgWidget_HeightForWidth_Callback(QSvgWidget_HeightForWidth_Callback cb) { qsvgwidget_heightforwidth_callback = cb; }
    inline void setQSvgWidget_HasHeightForWidth_Callback(QSvgWidget_HasHeightForWidth_Callback cb) { qsvgwidget_hasheightforwidth_callback = cb; }
    inline void setQSvgWidget_PaintEngine_Callback(QSvgWidget_PaintEngine_Callback cb) { qsvgwidget_paintengine_callback = cb; }
    inline void setQSvgWidget_Event_Callback(QSvgWidget_Event_Callback cb) { qsvgwidget_event_callback = cb; }
    inline void setQSvgWidget_MousePressEvent_Callback(QSvgWidget_MousePressEvent_Callback cb) { qsvgwidget_mousepressevent_callback = cb; }
    inline void setQSvgWidget_MouseReleaseEvent_Callback(QSvgWidget_MouseReleaseEvent_Callback cb) { qsvgwidget_mousereleaseevent_callback = cb; }
    inline void setQSvgWidget_MouseDoubleClickEvent_Callback(QSvgWidget_MouseDoubleClickEvent_Callback cb) { qsvgwidget_mousedoubleclickevent_callback = cb; }
    inline void setQSvgWidget_MouseMoveEvent_Callback(QSvgWidget_MouseMoveEvent_Callback cb) { qsvgwidget_mousemoveevent_callback = cb; }
    inline void setQSvgWidget_WheelEvent_Callback(QSvgWidget_WheelEvent_Callback cb) { qsvgwidget_wheelevent_callback = cb; }
    inline void setQSvgWidget_KeyPressEvent_Callback(QSvgWidget_KeyPressEvent_Callback cb) { qsvgwidget_keypressevent_callback = cb; }
    inline void setQSvgWidget_KeyReleaseEvent_Callback(QSvgWidget_KeyReleaseEvent_Callback cb) { qsvgwidget_keyreleaseevent_callback = cb; }
    inline void setQSvgWidget_FocusInEvent_Callback(QSvgWidget_FocusInEvent_Callback cb) { qsvgwidget_focusinevent_callback = cb; }
    inline void setQSvgWidget_FocusOutEvent_Callback(QSvgWidget_FocusOutEvent_Callback cb) { qsvgwidget_focusoutevent_callback = cb; }
    inline void setQSvgWidget_EnterEvent_Callback(QSvgWidget_EnterEvent_Callback cb) { qsvgwidget_enterevent_callback = cb; }
    inline void setQSvgWidget_LeaveEvent_Callback(QSvgWidget_LeaveEvent_Callback cb) { qsvgwidget_leaveevent_callback = cb; }
    inline void setQSvgWidget_MoveEvent_Callback(QSvgWidget_MoveEvent_Callback cb) { qsvgwidget_moveevent_callback = cb; }
    inline void setQSvgWidget_ResizeEvent_Callback(QSvgWidget_ResizeEvent_Callback cb) { qsvgwidget_resizeevent_callback = cb; }
    inline void setQSvgWidget_CloseEvent_Callback(QSvgWidget_CloseEvent_Callback cb) { qsvgwidget_closeevent_callback = cb; }
    inline void setQSvgWidget_ContextMenuEvent_Callback(QSvgWidget_ContextMenuEvent_Callback cb) { qsvgwidget_contextmenuevent_callback = cb; }
    inline void setQSvgWidget_TabletEvent_Callback(QSvgWidget_TabletEvent_Callback cb) { qsvgwidget_tabletevent_callback = cb; }
    inline void setQSvgWidget_ActionEvent_Callback(QSvgWidget_ActionEvent_Callback cb) { qsvgwidget_actionevent_callback = cb; }
    inline void setQSvgWidget_DragEnterEvent_Callback(QSvgWidget_DragEnterEvent_Callback cb) { qsvgwidget_dragenterevent_callback = cb; }
    inline void setQSvgWidget_DragMoveEvent_Callback(QSvgWidget_DragMoveEvent_Callback cb) { qsvgwidget_dragmoveevent_callback = cb; }
    inline void setQSvgWidget_DragLeaveEvent_Callback(QSvgWidget_DragLeaveEvent_Callback cb) { qsvgwidget_dragleaveevent_callback = cb; }
    inline void setQSvgWidget_DropEvent_Callback(QSvgWidget_DropEvent_Callback cb) { qsvgwidget_dropevent_callback = cb; }
    inline void setQSvgWidget_ShowEvent_Callback(QSvgWidget_ShowEvent_Callback cb) { qsvgwidget_showevent_callback = cb; }
    inline void setQSvgWidget_HideEvent_Callback(QSvgWidget_HideEvent_Callback cb) { qsvgwidget_hideevent_callback = cb; }
    inline void setQSvgWidget_NativeEvent_Callback(QSvgWidget_NativeEvent_Callback cb) { qsvgwidget_nativeevent_callback = cb; }
    inline void setQSvgWidget_ChangeEvent_Callback(QSvgWidget_ChangeEvent_Callback cb) { qsvgwidget_changeevent_callback = cb; }
    inline void setQSvgWidget_Metric_Callback(QSvgWidget_Metric_Callback cb) { qsvgwidget_metric_callback = cb; }
    inline void setQSvgWidget_InitPainter_Callback(QSvgWidget_InitPainter_Callback cb) { qsvgwidget_initpainter_callback = cb; }
    inline void setQSvgWidget_Redirected_Callback(QSvgWidget_Redirected_Callback cb) { qsvgwidget_redirected_callback = cb; }
    inline void setQSvgWidget_SharedPainter_Callback(QSvgWidget_SharedPainter_Callback cb) { qsvgwidget_sharedpainter_callback = cb; }
    inline void setQSvgWidget_InputMethodEvent_Callback(QSvgWidget_InputMethodEvent_Callback cb) { qsvgwidget_inputmethodevent_callback = cb; }
    inline void setQSvgWidget_InputMethodQuery_Callback(QSvgWidget_InputMethodQuery_Callback cb) { qsvgwidget_inputmethodquery_callback = cb; }
    inline void setQSvgWidget_FocusNextPrevChild_Callback(QSvgWidget_FocusNextPrevChild_Callback cb) { qsvgwidget_focusnextprevchild_callback = cb; }
    inline void setQSvgWidget_EventFilter_Callback(QSvgWidget_EventFilter_Callback cb) { qsvgwidget_eventfilter_callback = cb; }
    inline void setQSvgWidget_TimerEvent_Callback(QSvgWidget_TimerEvent_Callback cb) { qsvgwidget_timerevent_callback = cb; }
    inline void setQSvgWidget_ChildEvent_Callback(QSvgWidget_ChildEvent_Callback cb) { qsvgwidget_childevent_callback = cb; }
    inline void setQSvgWidget_CustomEvent_Callback(QSvgWidget_CustomEvent_Callback cb) { qsvgwidget_customevent_callback = cb; }
    inline void setQSvgWidget_ConnectNotify_Callback(QSvgWidget_ConnectNotify_Callback cb) { qsvgwidget_connectnotify_callback = cb; }
    inline void setQSvgWidget_DisconnectNotify_Callback(QSvgWidget_DisconnectNotify_Callback cb) { qsvgwidget_disconnectnotify_callback = cb; }
    inline void setQSvgWidget_UpdateMicroFocus_Callback(QSvgWidget_UpdateMicroFocus_Callback cb) { qsvgwidget_updatemicrofocus_callback = cb; }
    inline void setQSvgWidget_Create_Callback(QSvgWidget_Create_Callback cb) { qsvgwidget_create_callback = cb; }
    inline void setQSvgWidget_Destroy_Callback(QSvgWidget_Destroy_Callback cb) { qsvgwidget_destroy_callback = cb; }
    inline void setQSvgWidget_FocusNextChild_Callback(QSvgWidget_FocusNextChild_Callback cb) { qsvgwidget_focusnextchild_callback = cb; }
    inline void setQSvgWidget_FocusPreviousChild_Callback(QSvgWidget_FocusPreviousChild_Callback cb) { qsvgwidget_focuspreviouschild_callback = cb; }
    inline void setQSvgWidget_Sender_Callback(QSvgWidget_Sender_Callback cb) { qsvgwidget_sender_callback = cb; }
    inline void setQSvgWidget_SenderSignalIndex_Callback(QSvgWidget_SenderSignalIndex_Callback cb) { qsvgwidget_sendersignalindex_callback = cb; }
    inline void setQSvgWidget_Receivers_Callback(QSvgWidget_Receivers_Callback cb) { qsvgwidget_receivers_callback = cb; }
    inline void setQSvgWidget_IsSignalConnected_Callback(QSvgWidget_IsSignalConnected_Callback cb) { qsvgwidget_issignalconnected_callback = cb; }
    inline void setQSvgWidget_GetDecodedMetricF_Callback(QSvgWidget_GetDecodedMetricF_Callback cb) { qsvgwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQSvgWidget_Metacall_IsBase(bool value) const { qsvgwidget_metacall_isbase = value; }
    inline void setQSvgWidget_SizeHint_IsBase(bool value) const { qsvgwidget_sizehint_isbase = value; }
    inline void setQSvgWidget_PaintEvent_IsBase(bool value) const { qsvgwidget_paintevent_isbase = value; }
    inline void setQSvgWidget_DevType_IsBase(bool value) const { qsvgwidget_devtype_isbase = value; }
    inline void setQSvgWidget_SetVisible_IsBase(bool value) const { qsvgwidget_setvisible_isbase = value; }
    inline void setQSvgWidget_MinimumSizeHint_IsBase(bool value) const { qsvgwidget_minimumsizehint_isbase = value; }
    inline void setQSvgWidget_HeightForWidth_IsBase(bool value) const { qsvgwidget_heightforwidth_isbase = value; }
    inline void setQSvgWidget_HasHeightForWidth_IsBase(bool value) const { qsvgwidget_hasheightforwidth_isbase = value; }
    inline void setQSvgWidget_PaintEngine_IsBase(bool value) const { qsvgwidget_paintengine_isbase = value; }
    inline void setQSvgWidget_Event_IsBase(bool value) const { qsvgwidget_event_isbase = value; }
    inline void setQSvgWidget_MousePressEvent_IsBase(bool value) const { qsvgwidget_mousepressevent_isbase = value; }
    inline void setQSvgWidget_MouseReleaseEvent_IsBase(bool value) const { qsvgwidget_mousereleaseevent_isbase = value; }
    inline void setQSvgWidget_MouseDoubleClickEvent_IsBase(bool value) const { qsvgwidget_mousedoubleclickevent_isbase = value; }
    inline void setQSvgWidget_MouseMoveEvent_IsBase(bool value) const { qsvgwidget_mousemoveevent_isbase = value; }
    inline void setQSvgWidget_WheelEvent_IsBase(bool value) const { qsvgwidget_wheelevent_isbase = value; }
    inline void setQSvgWidget_KeyPressEvent_IsBase(bool value) const { qsvgwidget_keypressevent_isbase = value; }
    inline void setQSvgWidget_KeyReleaseEvent_IsBase(bool value) const { qsvgwidget_keyreleaseevent_isbase = value; }
    inline void setQSvgWidget_FocusInEvent_IsBase(bool value) const { qsvgwidget_focusinevent_isbase = value; }
    inline void setQSvgWidget_FocusOutEvent_IsBase(bool value) const { qsvgwidget_focusoutevent_isbase = value; }
    inline void setQSvgWidget_EnterEvent_IsBase(bool value) const { qsvgwidget_enterevent_isbase = value; }
    inline void setQSvgWidget_LeaveEvent_IsBase(bool value) const { qsvgwidget_leaveevent_isbase = value; }
    inline void setQSvgWidget_MoveEvent_IsBase(bool value) const { qsvgwidget_moveevent_isbase = value; }
    inline void setQSvgWidget_ResizeEvent_IsBase(bool value) const { qsvgwidget_resizeevent_isbase = value; }
    inline void setQSvgWidget_CloseEvent_IsBase(bool value) const { qsvgwidget_closeevent_isbase = value; }
    inline void setQSvgWidget_ContextMenuEvent_IsBase(bool value) const { qsvgwidget_contextmenuevent_isbase = value; }
    inline void setQSvgWidget_TabletEvent_IsBase(bool value) const { qsvgwidget_tabletevent_isbase = value; }
    inline void setQSvgWidget_ActionEvent_IsBase(bool value) const { qsvgwidget_actionevent_isbase = value; }
    inline void setQSvgWidget_DragEnterEvent_IsBase(bool value) const { qsvgwidget_dragenterevent_isbase = value; }
    inline void setQSvgWidget_DragMoveEvent_IsBase(bool value) const { qsvgwidget_dragmoveevent_isbase = value; }
    inline void setQSvgWidget_DragLeaveEvent_IsBase(bool value) const { qsvgwidget_dragleaveevent_isbase = value; }
    inline void setQSvgWidget_DropEvent_IsBase(bool value) const { qsvgwidget_dropevent_isbase = value; }
    inline void setQSvgWidget_ShowEvent_IsBase(bool value) const { qsvgwidget_showevent_isbase = value; }
    inline void setQSvgWidget_HideEvent_IsBase(bool value) const { qsvgwidget_hideevent_isbase = value; }
    inline void setQSvgWidget_NativeEvent_IsBase(bool value) const { qsvgwidget_nativeevent_isbase = value; }
    inline void setQSvgWidget_ChangeEvent_IsBase(bool value) const { qsvgwidget_changeevent_isbase = value; }
    inline void setQSvgWidget_Metric_IsBase(bool value) const { qsvgwidget_metric_isbase = value; }
    inline void setQSvgWidget_InitPainter_IsBase(bool value) const { qsvgwidget_initpainter_isbase = value; }
    inline void setQSvgWidget_Redirected_IsBase(bool value) const { qsvgwidget_redirected_isbase = value; }
    inline void setQSvgWidget_SharedPainter_IsBase(bool value) const { qsvgwidget_sharedpainter_isbase = value; }
    inline void setQSvgWidget_InputMethodEvent_IsBase(bool value) const { qsvgwidget_inputmethodevent_isbase = value; }
    inline void setQSvgWidget_InputMethodQuery_IsBase(bool value) const { qsvgwidget_inputmethodquery_isbase = value; }
    inline void setQSvgWidget_FocusNextPrevChild_IsBase(bool value) const { qsvgwidget_focusnextprevchild_isbase = value; }
    inline void setQSvgWidget_EventFilter_IsBase(bool value) const { qsvgwidget_eventfilter_isbase = value; }
    inline void setQSvgWidget_TimerEvent_IsBase(bool value) const { qsvgwidget_timerevent_isbase = value; }
    inline void setQSvgWidget_ChildEvent_IsBase(bool value) const { qsvgwidget_childevent_isbase = value; }
    inline void setQSvgWidget_CustomEvent_IsBase(bool value) const { qsvgwidget_customevent_isbase = value; }
    inline void setQSvgWidget_ConnectNotify_IsBase(bool value) const { qsvgwidget_connectnotify_isbase = value; }
    inline void setQSvgWidget_DisconnectNotify_IsBase(bool value) const { qsvgwidget_disconnectnotify_isbase = value; }
    inline void setQSvgWidget_UpdateMicroFocus_IsBase(bool value) const { qsvgwidget_updatemicrofocus_isbase = value; }
    inline void setQSvgWidget_Create_IsBase(bool value) const { qsvgwidget_create_isbase = value; }
    inline void setQSvgWidget_Destroy_IsBase(bool value) const { qsvgwidget_destroy_isbase = value; }
    inline void setQSvgWidget_FocusNextChild_IsBase(bool value) const { qsvgwidget_focusnextchild_isbase = value; }
    inline void setQSvgWidget_FocusPreviousChild_IsBase(bool value) const { qsvgwidget_focuspreviouschild_isbase = value; }
    inline void setQSvgWidget_Sender_IsBase(bool value) const { qsvgwidget_sender_isbase = value; }
    inline void setQSvgWidget_SenderSignalIndex_IsBase(bool value) const { qsvgwidget_sendersignalindex_isbase = value; }
    inline void setQSvgWidget_Receivers_IsBase(bool value) const { qsvgwidget_receivers_isbase = value; }
    inline void setQSvgWidget_IsSignalConnected_IsBase(bool value) const { qsvgwidget_issignalconnected_isbase = value; }
    inline void setQSvgWidget_GetDecodedMetricF_IsBase(bool value) const { qsvgwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsvgwidget_metacall_isbase) {
            qsvgwidget_metacall_isbase = false;
            return QSvgWidget::qt_metacall(param1, param2, param3);
        } else if (qsvgwidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qsvgwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QSvgWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qsvgwidget_sizehint_isbase) {
            qsvgwidget_sizehint_isbase = false;
            return QSvgWidget::sizeHint();
        } else if (qsvgwidget_sizehint_callback != nullptr) {
            QSize* callback_ret = qsvgwidget_sizehint_callback();
            return *callback_ret;
        } else {
            return QSvgWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qsvgwidget_paintevent_isbase) {
            qsvgwidget_paintevent_isbase = false;
            QSvgWidget::paintEvent(event);
        } else if (qsvgwidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qsvgwidget_paintevent_callback(this, cbval1);
        } else {
            QSvgWidget::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsvgwidget_devtype_isbase) {
            qsvgwidget_devtype_isbase = false;
            return QSvgWidget::devType();
        } else if (qsvgwidget_devtype_callback != nullptr) {
            int callback_ret = qsvgwidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSvgWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qsvgwidget_setvisible_isbase) {
            qsvgwidget_setvisible_isbase = false;
            QSvgWidget::setVisible(visible);
        } else if (qsvgwidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qsvgwidget_setvisible_callback(this, cbval1);
        } else {
            QSvgWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qsvgwidget_minimumsizehint_isbase) {
            qsvgwidget_minimumsizehint_isbase = false;
            return QSvgWidget::minimumSizeHint();
        } else if (qsvgwidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qsvgwidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QSvgWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qsvgwidget_heightforwidth_isbase) {
            qsvgwidget_heightforwidth_isbase = false;
            return QSvgWidget::heightForWidth(param1);
        } else if (qsvgwidget_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qsvgwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSvgWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qsvgwidget_hasheightforwidth_isbase) {
            qsvgwidget_hasheightforwidth_isbase = false;
            return QSvgWidget::hasHeightForWidth();
        } else if (qsvgwidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qsvgwidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QSvgWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsvgwidget_paintengine_isbase) {
            qsvgwidget_paintengine_isbase = false;
            return QSvgWidget::paintEngine();
        } else if (qsvgwidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qsvgwidget_paintengine_callback();
            return callback_ret;
        } else {
            return QSvgWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsvgwidget_event_isbase) {
            qsvgwidget_event_isbase = false;
            return QSvgWidget::event(event);
        } else if (qsvgwidget_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qsvgwidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSvgWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qsvgwidget_mousepressevent_isbase) {
            qsvgwidget_mousepressevent_isbase = false;
            QSvgWidget::mousePressEvent(event);
        } else if (qsvgwidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qsvgwidget_mousepressevent_callback(this, cbval1);
        } else {
            QSvgWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qsvgwidget_mousereleaseevent_isbase) {
            qsvgwidget_mousereleaseevent_isbase = false;
            QSvgWidget::mouseReleaseEvent(event);
        } else if (qsvgwidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qsvgwidget_mousereleaseevent_callback(this, cbval1);
        } else {
            QSvgWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qsvgwidget_mousedoubleclickevent_isbase) {
            qsvgwidget_mousedoubleclickevent_isbase = false;
            QSvgWidget::mouseDoubleClickEvent(event);
        } else if (qsvgwidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qsvgwidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QSvgWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qsvgwidget_mousemoveevent_isbase) {
            qsvgwidget_mousemoveevent_isbase = false;
            QSvgWidget::mouseMoveEvent(event);
        } else if (qsvgwidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qsvgwidget_mousemoveevent_callback(this, cbval1);
        } else {
            QSvgWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qsvgwidget_wheelevent_isbase) {
            qsvgwidget_wheelevent_isbase = false;
            QSvgWidget::wheelEvent(event);
        } else if (qsvgwidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qsvgwidget_wheelevent_callback(this, cbval1);
        } else {
            QSvgWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qsvgwidget_keypressevent_isbase) {
            qsvgwidget_keypressevent_isbase = false;
            QSvgWidget::keyPressEvent(event);
        } else if (qsvgwidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qsvgwidget_keypressevent_callback(this, cbval1);
        } else {
            QSvgWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qsvgwidget_keyreleaseevent_isbase) {
            qsvgwidget_keyreleaseevent_isbase = false;
            QSvgWidget::keyReleaseEvent(event);
        } else if (qsvgwidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qsvgwidget_keyreleaseevent_callback(this, cbval1);
        } else {
            QSvgWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qsvgwidget_focusinevent_isbase) {
            qsvgwidget_focusinevent_isbase = false;
            QSvgWidget::focusInEvent(event);
        } else if (qsvgwidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qsvgwidget_focusinevent_callback(this, cbval1);
        } else {
            QSvgWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qsvgwidget_focusoutevent_isbase) {
            qsvgwidget_focusoutevent_isbase = false;
            QSvgWidget::focusOutEvent(event);
        } else if (qsvgwidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qsvgwidget_focusoutevent_callback(this, cbval1);
        } else {
            QSvgWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qsvgwidget_enterevent_isbase) {
            qsvgwidget_enterevent_isbase = false;
            QSvgWidget::enterEvent(event);
        } else if (qsvgwidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qsvgwidget_enterevent_callback(this, cbval1);
        } else {
            QSvgWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qsvgwidget_leaveevent_isbase) {
            qsvgwidget_leaveevent_isbase = false;
            QSvgWidget::leaveEvent(event);
        } else if (qsvgwidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qsvgwidget_leaveevent_callback(this, cbval1);
        } else {
            QSvgWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qsvgwidget_moveevent_isbase) {
            qsvgwidget_moveevent_isbase = false;
            QSvgWidget::moveEvent(event);
        } else if (qsvgwidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qsvgwidget_moveevent_callback(this, cbval1);
        } else {
            QSvgWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qsvgwidget_resizeevent_isbase) {
            qsvgwidget_resizeevent_isbase = false;
            QSvgWidget::resizeEvent(event);
        } else if (qsvgwidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qsvgwidget_resizeevent_callback(this, cbval1);
        } else {
            QSvgWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qsvgwidget_closeevent_isbase) {
            qsvgwidget_closeevent_isbase = false;
            QSvgWidget::closeEvent(event);
        } else if (qsvgwidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qsvgwidget_closeevent_callback(this, cbval1);
        } else {
            QSvgWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qsvgwidget_contextmenuevent_isbase) {
            qsvgwidget_contextmenuevent_isbase = false;
            QSvgWidget::contextMenuEvent(event);
        } else if (qsvgwidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qsvgwidget_contextmenuevent_callback(this, cbval1);
        } else {
            QSvgWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qsvgwidget_tabletevent_isbase) {
            qsvgwidget_tabletevent_isbase = false;
            QSvgWidget::tabletEvent(event);
        } else if (qsvgwidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qsvgwidget_tabletevent_callback(this, cbval1);
        } else {
            QSvgWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qsvgwidget_actionevent_isbase) {
            qsvgwidget_actionevent_isbase = false;
            QSvgWidget::actionEvent(event);
        } else if (qsvgwidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qsvgwidget_actionevent_callback(this, cbval1);
        } else {
            QSvgWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qsvgwidget_dragenterevent_isbase) {
            qsvgwidget_dragenterevent_isbase = false;
            QSvgWidget::dragEnterEvent(event);
        } else if (qsvgwidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qsvgwidget_dragenterevent_callback(this, cbval1);
        } else {
            QSvgWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qsvgwidget_dragmoveevent_isbase) {
            qsvgwidget_dragmoveevent_isbase = false;
            QSvgWidget::dragMoveEvent(event);
        } else if (qsvgwidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qsvgwidget_dragmoveevent_callback(this, cbval1);
        } else {
            QSvgWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qsvgwidget_dragleaveevent_isbase) {
            qsvgwidget_dragleaveevent_isbase = false;
            QSvgWidget::dragLeaveEvent(event);
        } else if (qsvgwidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qsvgwidget_dragleaveevent_callback(this, cbval1);
        } else {
            QSvgWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qsvgwidget_dropevent_isbase) {
            qsvgwidget_dropevent_isbase = false;
            QSvgWidget::dropEvent(event);
        } else if (qsvgwidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qsvgwidget_dropevent_callback(this, cbval1);
        } else {
            QSvgWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qsvgwidget_showevent_isbase) {
            qsvgwidget_showevent_isbase = false;
            QSvgWidget::showEvent(event);
        } else if (qsvgwidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qsvgwidget_showevent_callback(this, cbval1);
        } else {
            QSvgWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qsvgwidget_hideevent_isbase) {
            qsvgwidget_hideevent_isbase = false;
            QSvgWidget::hideEvent(event);
        } else if (qsvgwidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qsvgwidget_hideevent_callback(this, cbval1);
        } else {
            QSvgWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qsvgwidget_nativeevent_isbase) {
            qsvgwidget_nativeevent_isbase = false;
            return QSvgWidget::nativeEvent(eventType, message, result);
        } else if (qsvgwidget_nativeevent_callback != nullptr) {
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

            bool callback_ret = qsvgwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSvgWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qsvgwidget_changeevent_isbase) {
            qsvgwidget_changeevent_isbase = false;
            QSvgWidget::changeEvent(param1);
        } else if (qsvgwidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qsvgwidget_changeevent_callback(this, cbval1);
        } else {
            QSvgWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qsvgwidget_metric_isbase) {
            qsvgwidget_metric_isbase = false;
            return QSvgWidget::metric(param1);
        } else if (qsvgwidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qsvgwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSvgWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsvgwidget_initpainter_isbase) {
            qsvgwidget_initpainter_isbase = false;
            QSvgWidget::initPainter(painter);
        } else if (qsvgwidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qsvgwidget_initpainter_callback(this, cbval1);
        } else {
            QSvgWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsvgwidget_redirected_isbase) {
            qsvgwidget_redirected_isbase = false;
            return QSvgWidget::redirected(offset);
        } else if (qsvgwidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qsvgwidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSvgWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsvgwidget_sharedpainter_isbase) {
            qsvgwidget_sharedpainter_isbase = false;
            return QSvgWidget::sharedPainter();
        } else if (qsvgwidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qsvgwidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return QSvgWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qsvgwidget_inputmethodevent_isbase) {
            qsvgwidget_inputmethodevent_isbase = false;
            QSvgWidget::inputMethodEvent(param1);
        } else if (qsvgwidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qsvgwidget_inputmethodevent_callback(this, cbval1);
        } else {
            QSvgWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qsvgwidget_inputmethodquery_isbase) {
            qsvgwidget_inputmethodquery_isbase = false;
            return QSvgWidget::inputMethodQuery(param1);
        } else if (qsvgwidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qsvgwidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSvgWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qsvgwidget_focusnextprevchild_isbase) {
            qsvgwidget_focusnextprevchild_isbase = false;
            return QSvgWidget::focusNextPrevChild(next);
        } else if (qsvgwidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qsvgwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSvgWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsvgwidget_eventfilter_isbase) {
            qsvgwidget_eventfilter_isbase = false;
            return QSvgWidget::eventFilter(watched, event);
        } else if (qsvgwidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qsvgwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSvgWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsvgwidget_timerevent_isbase) {
            qsvgwidget_timerevent_isbase = false;
            QSvgWidget::timerEvent(event);
        } else if (qsvgwidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qsvgwidget_timerevent_callback(this, cbval1);
        } else {
            QSvgWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsvgwidget_childevent_isbase) {
            qsvgwidget_childevent_isbase = false;
            QSvgWidget::childEvent(event);
        } else if (qsvgwidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qsvgwidget_childevent_callback(this, cbval1);
        } else {
            QSvgWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsvgwidget_customevent_isbase) {
            qsvgwidget_customevent_isbase = false;
            QSvgWidget::customEvent(event);
        } else if (qsvgwidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qsvgwidget_customevent_callback(this, cbval1);
        } else {
            QSvgWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsvgwidget_connectnotify_isbase) {
            qsvgwidget_connectnotify_isbase = false;
            QSvgWidget::connectNotify(signal);
        } else if (qsvgwidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsvgwidget_connectnotify_callback(this, cbval1);
        } else {
            QSvgWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsvgwidget_disconnectnotify_isbase) {
            qsvgwidget_disconnectnotify_isbase = false;
            QSvgWidget::disconnectNotify(signal);
        } else if (qsvgwidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsvgwidget_disconnectnotify_callback(this, cbval1);
        } else {
            QSvgWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qsvgwidget_updatemicrofocus_isbase) {
            qsvgwidget_updatemicrofocus_isbase = false;
            QSvgWidget::updateMicroFocus();
        } else if (qsvgwidget_updatemicrofocus_callback != nullptr) {
            qsvgwidget_updatemicrofocus_callback();
        } else {
            QSvgWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qsvgwidget_create_isbase) {
            qsvgwidget_create_isbase = false;
            QSvgWidget::create();
        } else if (qsvgwidget_create_callback != nullptr) {
            qsvgwidget_create_callback();
        } else {
            QSvgWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qsvgwidget_destroy_isbase) {
            qsvgwidget_destroy_isbase = false;
            QSvgWidget::destroy();
        } else if (qsvgwidget_destroy_callback != nullptr) {
            qsvgwidget_destroy_callback();
        } else {
            QSvgWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qsvgwidget_focusnextchild_isbase) {
            qsvgwidget_focusnextchild_isbase = false;
            return QSvgWidget::focusNextChild();
        } else if (qsvgwidget_focusnextchild_callback != nullptr) {
            bool callback_ret = qsvgwidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return QSvgWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qsvgwidget_focuspreviouschild_isbase) {
            qsvgwidget_focuspreviouschild_isbase = false;
            return QSvgWidget::focusPreviousChild();
        } else if (qsvgwidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qsvgwidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QSvgWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsvgwidget_sender_isbase) {
            qsvgwidget_sender_isbase = false;
            return QSvgWidget::sender();
        } else if (qsvgwidget_sender_callback != nullptr) {
            QObject* callback_ret = qsvgwidget_sender_callback();
            return callback_ret;
        } else {
            return QSvgWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsvgwidget_sendersignalindex_isbase) {
            qsvgwidget_sendersignalindex_isbase = false;
            return QSvgWidget::senderSignalIndex();
        } else if (qsvgwidget_sendersignalindex_callback != nullptr) {
            int callback_ret = qsvgwidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSvgWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsvgwidget_receivers_isbase) {
            qsvgwidget_receivers_isbase = false;
            return QSvgWidget::receivers(signal);
        } else if (qsvgwidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qsvgwidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSvgWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsvgwidget_issignalconnected_isbase) {
            qsvgwidget_issignalconnected_isbase = false;
            return QSvgWidget::isSignalConnected(signal);
        } else if (qsvgwidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qsvgwidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSvgWidget::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qsvgwidget_getdecodedmetricf_isbase) {
            qsvgwidget_getdecodedmetricf_isbase = false;
            return QSvgWidget::getDecodedMetricF(metricA, metricB);
        } else if (qsvgwidget_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qsvgwidget_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QSvgWidget::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void QSvgWidget_PaintEvent(QSvgWidget* self, QPaintEvent* event);
    friend void QSvgWidget_QBasePaintEvent(QSvgWidget* self, QPaintEvent* event);
    friend bool QSvgWidget_Event(QSvgWidget* self, QEvent* event);
    friend bool QSvgWidget_QBaseEvent(QSvgWidget* self, QEvent* event);
    friend void QSvgWidget_MousePressEvent(QSvgWidget* self, QMouseEvent* event);
    friend void QSvgWidget_QBaseMousePressEvent(QSvgWidget* self, QMouseEvent* event);
    friend void QSvgWidget_MouseReleaseEvent(QSvgWidget* self, QMouseEvent* event);
    friend void QSvgWidget_QBaseMouseReleaseEvent(QSvgWidget* self, QMouseEvent* event);
    friend void QSvgWidget_MouseDoubleClickEvent(QSvgWidget* self, QMouseEvent* event);
    friend void QSvgWidget_QBaseMouseDoubleClickEvent(QSvgWidget* self, QMouseEvent* event);
    friend void QSvgWidget_MouseMoveEvent(QSvgWidget* self, QMouseEvent* event);
    friend void QSvgWidget_QBaseMouseMoveEvent(QSvgWidget* self, QMouseEvent* event);
    friend void QSvgWidget_WheelEvent(QSvgWidget* self, QWheelEvent* event);
    friend void QSvgWidget_QBaseWheelEvent(QSvgWidget* self, QWheelEvent* event);
    friend void QSvgWidget_KeyPressEvent(QSvgWidget* self, QKeyEvent* event);
    friend void QSvgWidget_QBaseKeyPressEvent(QSvgWidget* self, QKeyEvent* event);
    friend void QSvgWidget_KeyReleaseEvent(QSvgWidget* self, QKeyEvent* event);
    friend void QSvgWidget_QBaseKeyReleaseEvent(QSvgWidget* self, QKeyEvent* event);
    friend void QSvgWidget_FocusInEvent(QSvgWidget* self, QFocusEvent* event);
    friend void QSvgWidget_QBaseFocusInEvent(QSvgWidget* self, QFocusEvent* event);
    friend void QSvgWidget_FocusOutEvent(QSvgWidget* self, QFocusEvent* event);
    friend void QSvgWidget_QBaseFocusOutEvent(QSvgWidget* self, QFocusEvent* event);
    friend void QSvgWidget_EnterEvent(QSvgWidget* self, QEnterEvent* event);
    friend void QSvgWidget_QBaseEnterEvent(QSvgWidget* self, QEnterEvent* event);
    friend void QSvgWidget_LeaveEvent(QSvgWidget* self, QEvent* event);
    friend void QSvgWidget_QBaseLeaveEvent(QSvgWidget* self, QEvent* event);
    friend void QSvgWidget_MoveEvent(QSvgWidget* self, QMoveEvent* event);
    friend void QSvgWidget_QBaseMoveEvent(QSvgWidget* self, QMoveEvent* event);
    friend void QSvgWidget_ResizeEvent(QSvgWidget* self, QResizeEvent* event);
    friend void QSvgWidget_QBaseResizeEvent(QSvgWidget* self, QResizeEvent* event);
    friend void QSvgWidget_CloseEvent(QSvgWidget* self, QCloseEvent* event);
    friend void QSvgWidget_QBaseCloseEvent(QSvgWidget* self, QCloseEvent* event);
    friend void QSvgWidget_ContextMenuEvent(QSvgWidget* self, QContextMenuEvent* event);
    friend void QSvgWidget_QBaseContextMenuEvent(QSvgWidget* self, QContextMenuEvent* event);
    friend void QSvgWidget_TabletEvent(QSvgWidget* self, QTabletEvent* event);
    friend void QSvgWidget_QBaseTabletEvent(QSvgWidget* self, QTabletEvent* event);
    friend void QSvgWidget_ActionEvent(QSvgWidget* self, QActionEvent* event);
    friend void QSvgWidget_QBaseActionEvent(QSvgWidget* self, QActionEvent* event);
    friend void QSvgWidget_DragEnterEvent(QSvgWidget* self, QDragEnterEvent* event);
    friend void QSvgWidget_QBaseDragEnterEvent(QSvgWidget* self, QDragEnterEvent* event);
    friend void QSvgWidget_DragMoveEvent(QSvgWidget* self, QDragMoveEvent* event);
    friend void QSvgWidget_QBaseDragMoveEvent(QSvgWidget* self, QDragMoveEvent* event);
    friend void QSvgWidget_DragLeaveEvent(QSvgWidget* self, QDragLeaveEvent* event);
    friend void QSvgWidget_QBaseDragLeaveEvent(QSvgWidget* self, QDragLeaveEvent* event);
    friend void QSvgWidget_DropEvent(QSvgWidget* self, QDropEvent* event);
    friend void QSvgWidget_QBaseDropEvent(QSvgWidget* self, QDropEvent* event);
    friend void QSvgWidget_ShowEvent(QSvgWidget* self, QShowEvent* event);
    friend void QSvgWidget_QBaseShowEvent(QSvgWidget* self, QShowEvent* event);
    friend void QSvgWidget_HideEvent(QSvgWidget* self, QHideEvent* event);
    friend void QSvgWidget_QBaseHideEvent(QSvgWidget* self, QHideEvent* event);
    friend bool QSvgWidget_NativeEvent(QSvgWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QSvgWidget_QBaseNativeEvent(QSvgWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QSvgWidget_ChangeEvent(QSvgWidget* self, QEvent* param1);
    friend void QSvgWidget_QBaseChangeEvent(QSvgWidget* self, QEvent* param1);
    friend int QSvgWidget_Metric(const QSvgWidget* self, int param1);
    friend int QSvgWidget_QBaseMetric(const QSvgWidget* self, int param1);
    friend void QSvgWidget_InitPainter(const QSvgWidget* self, QPainter* painter);
    friend void QSvgWidget_QBaseInitPainter(const QSvgWidget* self, QPainter* painter);
    friend QPaintDevice* QSvgWidget_Redirected(const QSvgWidget* self, QPoint* offset);
    friend QPaintDevice* QSvgWidget_QBaseRedirected(const QSvgWidget* self, QPoint* offset);
    friend QPainter* QSvgWidget_SharedPainter(const QSvgWidget* self);
    friend QPainter* QSvgWidget_QBaseSharedPainter(const QSvgWidget* self);
    friend void QSvgWidget_InputMethodEvent(QSvgWidget* self, QInputMethodEvent* param1);
    friend void QSvgWidget_QBaseInputMethodEvent(QSvgWidget* self, QInputMethodEvent* param1);
    friend bool QSvgWidget_FocusNextPrevChild(QSvgWidget* self, bool next);
    friend bool QSvgWidget_QBaseFocusNextPrevChild(QSvgWidget* self, bool next);
    friend void QSvgWidget_TimerEvent(QSvgWidget* self, QTimerEvent* event);
    friend void QSvgWidget_QBaseTimerEvent(QSvgWidget* self, QTimerEvent* event);
    friend void QSvgWidget_ChildEvent(QSvgWidget* self, QChildEvent* event);
    friend void QSvgWidget_QBaseChildEvent(QSvgWidget* self, QChildEvent* event);
    friend void QSvgWidget_CustomEvent(QSvgWidget* self, QEvent* event);
    friend void QSvgWidget_QBaseCustomEvent(QSvgWidget* self, QEvent* event);
    friend void QSvgWidget_ConnectNotify(QSvgWidget* self, const QMetaMethod* signal);
    friend void QSvgWidget_QBaseConnectNotify(QSvgWidget* self, const QMetaMethod* signal);
    friend void QSvgWidget_DisconnectNotify(QSvgWidget* self, const QMetaMethod* signal);
    friend void QSvgWidget_QBaseDisconnectNotify(QSvgWidget* self, const QMetaMethod* signal);
    friend void QSvgWidget_UpdateMicroFocus(QSvgWidget* self);
    friend void QSvgWidget_QBaseUpdateMicroFocus(QSvgWidget* self);
    friend void QSvgWidget_Create(QSvgWidget* self);
    friend void QSvgWidget_QBaseCreate(QSvgWidget* self);
    friend void QSvgWidget_Destroy(QSvgWidget* self);
    friend void QSvgWidget_QBaseDestroy(QSvgWidget* self);
    friend bool QSvgWidget_FocusNextChild(QSvgWidget* self);
    friend bool QSvgWidget_QBaseFocusNextChild(QSvgWidget* self);
    friend bool QSvgWidget_FocusPreviousChild(QSvgWidget* self);
    friend bool QSvgWidget_QBaseFocusPreviousChild(QSvgWidget* self);
    friend QObject* QSvgWidget_Sender(const QSvgWidget* self);
    friend QObject* QSvgWidget_QBaseSender(const QSvgWidget* self);
    friend int QSvgWidget_SenderSignalIndex(const QSvgWidget* self);
    friend int QSvgWidget_QBaseSenderSignalIndex(const QSvgWidget* self);
    friend int QSvgWidget_Receivers(const QSvgWidget* self, const char* signal);
    friend int QSvgWidget_QBaseReceivers(const QSvgWidget* self, const char* signal);
    friend bool QSvgWidget_IsSignalConnected(const QSvgWidget* self, const QMetaMethod* signal);
    friend bool QSvgWidget_QBaseIsSignalConnected(const QSvgWidget* self, const QMetaMethod* signal);
    friend double QSvgWidget_GetDecodedMetricF(const QSvgWidget* self, int metricA, int metricB);
    friend double QSvgWidget_QBaseGetDecodedMetricF(const QSvgWidget* self, int metricA, int metricB);
};

#endif
