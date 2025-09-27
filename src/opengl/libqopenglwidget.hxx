#pragma once
#ifndef SRC_OPENGLC_LIBVIRTUALQOPENGLWIDGET_H
#define SRC_OPENGLC_LIBVIRTUALQOPENGLWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLWidget so that we can call protected methods
class VirtualQOpenGLWidget final : public QOpenGLWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualQOpenGLWidget = true;

    // Virtual class public types (including callbacks)
    using QOpenGLWidget_Metacall_Callback = int (*)(QOpenGLWidget*, int, int, void**);
    using QOpenGLWidget_InitializeGL_Callback = void (*)();
    using QOpenGLWidget_ResizeGL_Callback = void (*)(QOpenGLWidget*, int, int);
    using QOpenGLWidget_PaintGL_Callback = void (*)();
    using QOpenGLWidget_PaintEvent_Callback = void (*)(QOpenGLWidget*, QPaintEvent*);
    using QOpenGLWidget_ResizeEvent_Callback = void (*)(QOpenGLWidget*, QResizeEvent*);
    using QOpenGLWidget_Event_Callback = bool (*)(QOpenGLWidget*, QEvent*);
    using QOpenGLWidget_Metric_Callback = int (*)(const QOpenGLWidget*, int);
    using QOpenGLWidget_Redirected_Callback = QPaintDevice* (*)(const QOpenGLWidget*, QPoint*);
    using QOpenGLWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using QOpenGLWidget_DevType_Callback = int (*)();
    using QOpenGLWidget_SetVisible_Callback = void (*)(QOpenGLWidget*, bool);
    using QOpenGLWidget_SizeHint_Callback = QSize* (*)();
    using QOpenGLWidget_MinimumSizeHint_Callback = QSize* (*)();
    using QOpenGLWidget_HeightForWidth_Callback = int (*)(const QOpenGLWidget*, int);
    using QOpenGLWidget_HasHeightForWidth_Callback = bool (*)();
    using QOpenGLWidget_MousePressEvent_Callback = void (*)(QOpenGLWidget*, QMouseEvent*);
    using QOpenGLWidget_MouseReleaseEvent_Callback = void (*)(QOpenGLWidget*, QMouseEvent*);
    using QOpenGLWidget_MouseDoubleClickEvent_Callback = void (*)(QOpenGLWidget*, QMouseEvent*);
    using QOpenGLWidget_MouseMoveEvent_Callback = void (*)(QOpenGLWidget*, QMouseEvent*);
    using QOpenGLWidget_WheelEvent_Callback = void (*)(QOpenGLWidget*, QWheelEvent*);
    using QOpenGLWidget_KeyPressEvent_Callback = void (*)(QOpenGLWidget*, QKeyEvent*);
    using QOpenGLWidget_KeyReleaseEvent_Callback = void (*)(QOpenGLWidget*, QKeyEvent*);
    using QOpenGLWidget_FocusInEvent_Callback = void (*)(QOpenGLWidget*, QFocusEvent*);
    using QOpenGLWidget_FocusOutEvent_Callback = void (*)(QOpenGLWidget*, QFocusEvent*);
    using QOpenGLWidget_EnterEvent_Callback = void (*)(QOpenGLWidget*, QEnterEvent*);
    using QOpenGLWidget_LeaveEvent_Callback = void (*)(QOpenGLWidget*, QEvent*);
    using QOpenGLWidget_MoveEvent_Callback = void (*)(QOpenGLWidget*, QMoveEvent*);
    using QOpenGLWidget_CloseEvent_Callback = void (*)(QOpenGLWidget*, QCloseEvent*);
    using QOpenGLWidget_ContextMenuEvent_Callback = void (*)(QOpenGLWidget*, QContextMenuEvent*);
    using QOpenGLWidget_TabletEvent_Callback = void (*)(QOpenGLWidget*, QTabletEvent*);
    using QOpenGLWidget_ActionEvent_Callback = void (*)(QOpenGLWidget*, QActionEvent*);
    using QOpenGLWidget_DragEnterEvent_Callback = void (*)(QOpenGLWidget*, QDragEnterEvent*);
    using QOpenGLWidget_DragMoveEvent_Callback = void (*)(QOpenGLWidget*, QDragMoveEvent*);
    using QOpenGLWidget_DragLeaveEvent_Callback = void (*)(QOpenGLWidget*, QDragLeaveEvent*);
    using QOpenGLWidget_DropEvent_Callback = void (*)(QOpenGLWidget*, QDropEvent*);
    using QOpenGLWidget_ShowEvent_Callback = void (*)(QOpenGLWidget*, QShowEvent*);
    using QOpenGLWidget_HideEvent_Callback = void (*)(QOpenGLWidget*, QHideEvent*);
    using QOpenGLWidget_NativeEvent_Callback = bool (*)(QOpenGLWidget*, libqt_string, void*, intptr_t*);
    using QOpenGLWidget_ChangeEvent_Callback = void (*)(QOpenGLWidget*, QEvent*);
    using QOpenGLWidget_InitPainter_Callback = void (*)(const QOpenGLWidget*, QPainter*);
    using QOpenGLWidget_SharedPainter_Callback = QPainter* (*)();
    using QOpenGLWidget_InputMethodEvent_Callback = void (*)(QOpenGLWidget*, QInputMethodEvent*);
    using QOpenGLWidget_InputMethodQuery_Callback = QVariant* (*)(const QOpenGLWidget*, int);
    using QOpenGLWidget_FocusNextPrevChild_Callback = bool (*)(QOpenGLWidget*, bool);
    using QOpenGLWidget_EventFilter_Callback = bool (*)(QOpenGLWidget*, QObject*, QEvent*);
    using QOpenGLWidget_TimerEvent_Callback = void (*)(QOpenGLWidget*, QTimerEvent*);
    using QOpenGLWidget_ChildEvent_Callback = void (*)(QOpenGLWidget*, QChildEvent*);
    using QOpenGLWidget_CustomEvent_Callback = void (*)(QOpenGLWidget*, QEvent*);
    using QOpenGLWidget_ConnectNotify_Callback = void (*)(QOpenGLWidget*, QMetaMethod*);
    using QOpenGLWidget_DisconnectNotify_Callback = void (*)(QOpenGLWidget*, QMetaMethod*);
    using QOpenGLWidget_UpdateMicroFocus_Callback = void (*)();
    using QOpenGLWidget_Create_Callback = void (*)();
    using QOpenGLWidget_Destroy_Callback = void (*)();
    using QOpenGLWidget_FocusNextChild_Callback = bool (*)();
    using QOpenGLWidget_FocusPreviousChild_Callback = bool (*)();
    using QOpenGLWidget_Sender_Callback = QObject* (*)();
    using QOpenGLWidget_SenderSignalIndex_Callback = int (*)();
    using QOpenGLWidget_Receivers_Callback = int (*)(const QOpenGLWidget*, const char*);
    using QOpenGLWidget_IsSignalConnected_Callback = bool (*)(const QOpenGLWidget*, QMetaMethod*);
    using QOpenGLWidget_GetDecodedMetricF_Callback = double (*)(const QOpenGLWidget*, int, int);

  protected:
    // Instance callback storage
    QOpenGLWidget_Metacall_Callback qopenglwidget_metacall_callback = nullptr;
    QOpenGLWidget_InitializeGL_Callback qopenglwidget_initializegl_callback = nullptr;
    QOpenGLWidget_ResizeGL_Callback qopenglwidget_resizegl_callback = nullptr;
    QOpenGLWidget_PaintGL_Callback qopenglwidget_paintgl_callback = nullptr;
    QOpenGLWidget_PaintEvent_Callback qopenglwidget_paintevent_callback = nullptr;
    QOpenGLWidget_ResizeEvent_Callback qopenglwidget_resizeevent_callback = nullptr;
    QOpenGLWidget_Event_Callback qopenglwidget_event_callback = nullptr;
    QOpenGLWidget_Metric_Callback qopenglwidget_metric_callback = nullptr;
    QOpenGLWidget_Redirected_Callback qopenglwidget_redirected_callback = nullptr;
    QOpenGLWidget_PaintEngine_Callback qopenglwidget_paintengine_callback = nullptr;
    QOpenGLWidget_DevType_Callback qopenglwidget_devtype_callback = nullptr;
    QOpenGLWidget_SetVisible_Callback qopenglwidget_setvisible_callback = nullptr;
    QOpenGLWidget_SizeHint_Callback qopenglwidget_sizehint_callback = nullptr;
    QOpenGLWidget_MinimumSizeHint_Callback qopenglwidget_minimumsizehint_callback = nullptr;
    QOpenGLWidget_HeightForWidth_Callback qopenglwidget_heightforwidth_callback = nullptr;
    QOpenGLWidget_HasHeightForWidth_Callback qopenglwidget_hasheightforwidth_callback = nullptr;
    QOpenGLWidget_MousePressEvent_Callback qopenglwidget_mousepressevent_callback = nullptr;
    QOpenGLWidget_MouseReleaseEvent_Callback qopenglwidget_mousereleaseevent_callback = nullptr;
    QOpenGLWidget_MouseDoubleClickEvent_Callback qopenglwidget_mousedoubleclickevent_callback = nullptr;
    QOpenGLWidget_MouseMoveEvent_Callback qopenglwidget_mousemoveevent_callback = nullptr;
    QOpenGLWidget_WheelEvent_Callback qopenglwidget_wheelevent_callback = nullptr;
    QOpenGLWidget_KeyPressEvent_Callback qopenglwidget_keypressevent_callback = nullptr;
    QOpenGLWidget_KeyReleaseEvent_Callback qopenglwidget_keyreleaseevent_callback = nullptr;
    QOpenGLWidget_FocusInEvent_Callback qopenglwidget_focusinevent_callback = nullptr;
    QOpenGLWidget_FocusOutEvent_Callback qopenglwidget_focusoutevent_callback = nullptr;
    QOpenGLWidget_EnterEvent_Callback qopenglwidget_enterevent_callback = nullptr;
    QOpenGLWidget_LeaveEvent_Callback qopenglwidget_leaveevent_callback = nullptr;
    QOpenGLWidget_MoveEvent_Callback qopenglwidget_moveevent_callback = nullptr;
    QOpenGLWidget_CloseEvent_Callback qopenglwidget_closeevent_callback = nullptr;
    QOpenGLWidget_ContextMenuEvent_Callback qopenglwidget_contextmenuevent_callback = nullptr;
    QOpenGLWidget_TabletEvent_Callback qopenglwidget_tabletevent_callback = nullptr;
    QOpenGLWidget_ActionEvent_Callback qopenglwidget_actionevent_callback = nullptr;
    QOpenGLWidget_DragEnterEvent_Callback qopenglwidget_dragenterevent_callback = nullptr;
    QOpenGLWidget_DragMoveEvent_Callback qopenglwidget_dragmoveevent_callback = nullptr;
    QOpenGLWidget_DragLeaveEvent_Callback qopenglwidget_dragleaveevent_callback = nullptr;
    QOpenGLWidget_DropEvent_Callback qopenglwidget_dropevent_callback = nullptr;
    QOpenGLWidget_ShowEvent_Callback qopenglwidget_showevent_callback = nullptr;
    QOpenGLWidget_HideEvent_Callback qopenglwidget_hideevent_callback = nullptr;
    QOpenGLWidget_NativeEvent_Callback qopenglwidget_nativeevent_callback = nullptr;
    QOpenGLWidget_ChangeEvent_Callback qopenglwidget_changeevent_callback = nullptr;
    QOpenGLWidget_InitPainter_Callback qopenglwidget_initpainter_callback = nullptr;
    QOpenGLWidget_SharedPainter_Callback qopenglwidget_sharedpainter_callback = nullptr;
    QOpenGLWidget_InputMethodEvent_Callback qopenglwidget_inputmethodevent_callback = nullptr;
    QOpenGLWidget_InputMethodQuery_Callback qopenglwidget_inputmethodquery_callback = nullptr;
    QOpenGLWidget_FocusNextPrevChild_Callback qopenglwidget_focusnextprevchild_callback = nullptr;
    QOpenGLWidget_EventFilter_Callback qopenglwidget_eventfilter_callback = nullptr;
    QOpenGLWidget_TimerEvent_Callback qopenglwidget_timerevent_callback = nullptr;
    QOpenGLWidget_ChildEvent_Callback qopenglwidget_childevent_callback = nullptr;
    QOpenGLWidget_CustomEvent_Callback qopenglwidget_customevent_callback = nullptr;
    QOpenGLWidget_ConnectNotify_Callback qopenglwidget_connectnotify_callback = nullptr;
    QOpenGLWidget_DisconnectNotify_Callback qopenglwidget_disconnectnotify_callback = nullptr;
    QOpenGLWidget_UpdateMicroFocus_Callback qopenglwidget_updatemicrofocus_callback = nullptr;
    QOpenGLWidget_Create_Callback qopenglwidget_create_callback = nullptr;
    QOpenGLWidget_Destroy_Callback qopenglwidget_destroy_callback = nullptr;
    QOpenGLWidget_FocusNextChild_Callback qopenglwidget_focusnextchild_callback = nullptr;
    QOpenGLWidget_FocusPreviousChild_Callback qopenglwidget_focuspreviouschild_callback = nullptr;
    QOpenGLWidget_Sender_Callback qopenglwidget_sender_callback = nullptr;
    QOpenGLWidget_SenderSignalIndex_Callback qopenglwidget_sendersignalindex_callback = nullptr;
    QOpenGLWidget_Receivers_Callback qopenglwidget_receivers_callback = nullptr;
    QOpenGLWidget_IsSignalConnected_Callback qopenglwidget_issignalconnected_callback = nullptr;
    QOpenGLWidget_GetDecodedMetricF_Callback qopenglwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qopenglwidget_metacall_isbase = false;
    mutable bool qopenglwidget_initializegl_isbase = false;
    mutable bool qopenglwidget_resizegl_isbase = false;
    mutable bool qopenglwidget_paintgl_isbase = false;
    mutable bool qopenglwidget_paintevent_isbase = false;
    mutable bool qopenglwidget_resizeevent_isbase = false;
    mutable bool qopenglwidget_event_isbase = false;
    mutable bool qopenglwidget_metric_isbase = false;
    mutable bool qopenglwidget_redirected_isbase = false;
    mutable bool qopenglwidget_paintengine_isbase = false;
    mutable bool qopenglwidget_devtype_isbase = false;
    mutable bool qopenglwidget_setvisible_isbase = false;
    mutable bool qopenglwidget_sizehint_isbase = false;
    mutable bool qopenglwidget_minimumsizehint_isbase = false;
    mutable bool qopenglwidget_heightforwidth_isbase = false;
    mutable bool qopenglwidget_hasheightforwidth_isbase = false;
    mutable bool qopenglwidget_mousepressevent_isbase = false;
    mutable bool qopenglwidget_mousereleaseevent_isbase = false;
    mutable bool qopenglwidget_mousedoubleclickevent_isbase = false;
    mutable bool qopenglwidget_mousemoveevent_isbase = false;
    mutable bool qopenglwidget_wheelevent_isbase = false;
    mutable bool qopenglwidget_keypressevent_isbase = false;
    mutable bool qopenglwidget_keyreleaseevent_isbase = false;
    mutable bool qopenglwidget_focusinevent_isbase = false;
    mutable bool qopenglwidget_focusoutevent_isbase = false;
    mutable bool qopenglwidget_enterevent_isbase = false;
    mutable bool qopenglwidget_leaveevent_isbase = false;
    mutable bool qopenglwidget_moveevent_isbase = false;
    mutable bool qopenglwidget_closeevent_isbase = false;
    mutable bool qopenglwidget_contextmenuevent_isbase = false;
    mutable bool qopenglwidget_tabletevent_isbase = false;
    mutable bool qopenglwidget_actionevent_isbase = false;
    mutable bool qopenglwidget_dragenterevent_isbase = false;
    mutable bool qopenglwidget_dragmoveevent_isbase = false;
    mutable bool qopenglwidget_dragleaveevent_isbase = false;
    mutable bool qopenglwidget_dropevent_isbase = false;
    mutable bool qopenglwidget_showevent_isbase = false;
    mutable bool qopenglwidget_hideevent_isbase = false;
    mutable bool qopenglwidget_nativeevent_isbase = false;
    mutable bool qopenglwidget_changeevent_isbase = false;
    mutable bool qopenglwidget_initpainter_isbase = false;
    mutable bool qopenglwidget_sharedpainter_isbase = false;
    mutable bool qopenglwidget_inputmethodevent_isbase = false;
    mutable bool qopenglwidget_inputmethodquery_isbase = false;
    mutable bool qopenglwidget_focusnextprevchild_isbase = false;
    mutable bool qopenglwidget_eventfilter_isbase = false;
    mutable bool qopenglwidget_timerevent_isbase = false;
    mutable bool qopenglwidget_childevent_isbase = false;
    mutable bool qopenglwidget_customevent_isbase = false;
    mutable bool qopenglwidget_connectnotify_isbase = false;
    mutable bool qopenglwidget_disconnectnotify_isbase = false;
    mutable bool qopenglwidget_updatemicrofocus_isbase = false;
    mutable bool qopenglwidget_create_isbase = false;
    mutable bool qopenglwidget_destroy_isbase = false;
    mutable bool qopenglwidget_focusnextchild_isbase = false;
    mutable bool qopenglwidget_focuspreviouschild_isbase = false;
    mutable bool qopenglwidget_sender_isbase = false;
    mutable bool qopenglwidget_sendersignalindex_isbase = false;
    mutable bool qopenglwidget_receivers_isbase = false;
    mutable bool qopenglwidget_issignalconnected_isbase = false;
    mutable bool qopenglwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualQOpenGLWidget(QWidget* parent) : QOpenGLWidget(parent) {};
    VirtualQOpenGLWidget() : QOpenGLWidget() {};
    VirtualQOpenGLWidget(QWidget* parent, Qt::WindowFlags f) : QOpenGLWidget(parent, f) {};

    ~VirtualQOpenGLWidget() {
        qopenglwidget_metacall_callback = nullptr;
        qopenglwidget_initializegl_callback = nullptr;
        qopenglwidget_resizegl_callback = nullptr;
        qopenglwidget_paintgl_callback = nullptr;
        qopenglwidget_paintevent_callback = nullptr;
        qopenglwidget_resizeevent_callback = nullptr;
        qopenglwidget_event_callback = nullptr;
        qopenglwidget_metric_callback = nullptr;
        qopenglwidget_redirected_callback = nullptr;
        qopenglwidget_paintengine_callback = nullptr;
        qopenglwidget_devtype_callback = nullptr;
        qopenglwidget_setvisible_callback = nullptr;
        qopenglwidget_sizehint_callback = nullptr;
        qopenglwidget_minimumsizehint_callback = nullptr;
        qopenglwidget_heightforwidth_callback = nullptr;
        qopenglwidget_hasheightforwidth_callback = nullptr;
        qopenglwidget_mousepressevent_callback = nullptr;
        qopenglwidget_mousereleaseevent_callback = nullptr;
        qopenglwidget_mousedoubleclickevent_callback = nullptr;
        qopenglwidget_mousemoveevent_callback = nullptr;
        qopenglwidget_wheelevent_callback = nullptr;
        qopenglwidget_keypressevent_callback = nullptr;
        qopenglwidget_keyreleaseevent_callback = nullptr;
        qopenglwidget_focusinevent_callback = nullptr;
        qopenglwidget_focusoutevent_callback = nullptr;
        qopenglwidget_enterevent_callback = nullptr;
        qopenglwidget_leaveevent_callback = nullptr;
        qopenglwidget_moveevent_callback = nullptr;
        qopenglwidget_closeevent_callback = nullptr;
        qopenglwidget_contextmenuevent_callback = nullptr;
        qopenglwidget_tabletevent_callback = nullptr;
        qopenglwidget_actionevent_callback = nullptr;
        qopenglwidget_dragenterevent_callback = nullptr;
        qopenglwidget_dragmoveevent_callback = nullptr;
        qopenglwidget_dragleaveevent_callback = nullptr;
        qopenglwidget_dropevent_callback = nullptr;
        qopenglwidget_showevent_callback = nullptr;
        qopenglwidget_hideevent_callback = nullptr;
        qopenglwidget_nativeevent_callback = nullptr;
        qopenglwidget_changeevent_callback = nullptr;
        qopenglwidget_initpainter_callback = nullptr;
        qopenglwidget_sharedpainter_callback = nullptr;
        qopenglwidget_inputmethodevent_callback = nullptr;
        qopenglwidget_inputmethodquery_callback = nullptr;
        qopenglwidget_focusnextprevchild_callback = nullptr;
        qopenglwidget_eventfilter_callback = nullptr;
        qopenglwidget_timerevent_callback = nullptr;
        qopenglwidget_childevent_callback = nullptr;
        qopenglwidget_customevent_callback = nullptr;
        qopenglwidget_connectnotify_callback = nullptr;
        qopenglwidget_disconnectnotify_callback = nullptr;
        qopenglwidget_updatemicrofocus_callback = nullptr;
        qopenglwidget_create_callback = nullptr;
        qopenglwidget_destroy_callback = nullptr;
        qopenglwidget_focusnextchild_callback = nullptr;
        qopenglwidget_focuspreviouschild_callback = nullptr;
        qopenglwidget_sender_callback = nullptr;
        qopenglwidget_sendersignalindex_callback = nullptr;
        qopenglwidget_receivers_callback = nullptr;
        qopenglwidget_issignalconnected_callback = nullptr;
        qopenglwidget_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQOpenGLWidget_Metacall_Callback(QOpenGLWidget_Metacall_Callback cb) { qopenglwidget_metacall_callback = cb; }
    inline void setQOpenGLWidget_InitializeGL_Callback(QOpenGLWidget_InitializeGL_Callback cb) { qopenglwidget_initializegl_callback = cb; }
    inline void setQOpenGLWidget_ResizeGL_Callback(QOpenGLWidget_ResizeGL_Callback cb) { qopenglwidget_resizegl_callback = cb; }
    inline void setQOpenGLWidget_PaintGL_Callback(QOpenGLWidget_PaintGL_Callback cb) { qopenglwidget_paintgl_callback = cb; }
    inline void setQOpenGLWidget_PaintEvent_Callback(QOpenGLWidget_PaintEvent_Callback cb) { qopenglwidget_paintevent_callback = cb; }
    inline void setQOpenGLWidget_ResizeEvent_Callback(QOpenGLWidget_ResizeEvent_Callback cb) { qopenglwidget_resizeevent_callback = cb; }
    inline void setQOpenGLWidget_Event_Callback(QOpenGLWidget_Event_Callback cb) { qopenglwidget_event_callback = cb; }
    inline void setQOpenGLWidget_Metric_Callback(QOpenGLWidget_Metric_Callback cb) { qopenglwidget_metric_callback = cb; }
    inline void setQOpenGLWidget_Redirected_Callback(QOpenGLWidget_Redirected_Callback cb) { qopenglwidget_redirected_callback = cb; }
    inline void setQOpenGLWidget_PaintEngine_Callback(QOpenGLWidget_PaintEngine_Callback cb) { qopenglwidget_paintengine_callback = cb; }
    inline void setQOpenGLWidget_DevType_Callback(QOpenGLWidget_DevType_Callback cb) { qopenglwidget_devtype_callback = cb; }
    inline void setQOpenGLWidget_SetVisible_Callback(QOpenGLWidget_SetVisible_Callback cb) { qopenglwidget_setvisible_callback = cb; }
    inline void setQOpenGLWidget_SizeHint_Callback(QOpenGLWidget_SizeHint_Callback cb) { qopenglwidget_sizehint_callback = cb; }
    inline void setQOpenGLWidget_MinimumSizeHint_Callback(QOpenGLWidget_MinimumSizeHint_Callback cb) { qopenglwidget_minimumsizehint_callback = cb; }
    inline void setQOpenGLWidget_HeightForWidth_Callback(QOpenGLWidget_HeightForWidth_Callback cb) { qopenglwidget_heightforwidth_callback = cb; }
    inline void setQOpenGLWidget_HasHeightForWidth_Callback(QOpenGLWidget_HasHeightForWidth_Callback cb) { qopenglwidget_hasheightforwidth_callback = cb; }
    inline void setQOpenGLWidget_MousePressEvent_Callback(QOpenGLWidget_MousePressEvent_Callback cb) { qopenglwidget_mousepressevent_callback = cb; }
    inline void setQOpenGLWidget_MouseReleaseEvent_Callback(QOpenGLWidget_MouseReleaseEvent_Callback cb) { qopenglwidget_mousereleaseevent_callback = cb; }
    inline void setQOpenGLWidget_MouseDoubleClickEvent_Callback(QOpenGLWidget_MouseDoubleClickEvent_Callback cb) { qopenglwidget_mousedoubleclickevent_callback = cb; }
    inline void setQOpenGLWidget_MouseMoveEvent_Callback(QOpenGLWidget_MouseMoveEvent_Callback cb) { qopenglwidget_mousemoveevent_callback = cb; }
    inline void setQOpenGLWidget_WheelEvent_Callback(QOpenGLWidget_WheelEvent_Callback cb) { qopenglwidget_wheelevent_callback = cb; }
    inline void setQOpenGLWidget_KeyPressEvent_Callback(QOpenGLWidget_KeyPressEvent_Callback cb) { qopenglwidget_keypressevent_callback = cb; }
    inline void setQOpenGLWidget_KeyReleaseEvent_Callback(QOpenGLWidget_KeyReleaseEvent_Callback cb) { qopenglwidget_keyreleaseevent_callback = cb; }
    inline void setQOpenGLWidget_FocusInEvent_Callback(QOpenGLWidget_FocusInEvent_Callback cb) { qopenglwidget_focusinevent_callback = cb; }
    inline void setQOpenGLWidget_FocusOutEvent_Callback(QOpenGLWidget_FocusOutEvent_Callback cb) { qopenglwidget_focusoutevent_callback = cb; }
    inline void setQOpenGLWidget_EnterEvent_Callback(QOpenGLWidget_EnterEvent_Callback cb) { qopenglwidget_enterevent_callback = cb; }
    inline void setQOpenGLWidget_LeaveEvent_Callback(QOpenGLWidget_LeaveEvent_Callback cb) { qopenglwidget_leaveevent_callback = cb; }
    inline void setQOpenGLWidget_MoveEvent_Callback(QOpenGLWidget_MoveEvent_Callback cb) { qopenglwidget_moveevent_callback = cb; }
    inline void setQOpenGLWidget_CloseEvent_Callback(QOpenGLWidget_CloseEvent_Callback cb) { qopenglwidget_closeevent_callback = cb; }
    inline void setQOpenGLWidget_ContextMenuEvent_Callback(QOpenGLWidget_ContextMenuEvent_Callback cb) { qopenglwidget_contextmenuevent_callback = cb; }
    inline void setQOpenGLWidget_TabletEvent_Callback(QOpenGLWidget_TabletEvent_Callback cb) { qopenglwidget_tabletevent_callback = cb; }
    inline void setQOpenGLWidget_ActionEvent_Callback(QOpenGLWidget_ActionEvent_Callback cb) { qopenglwidget_actionevent_callback = cb; }
    inline void setQOpenGLWidget_DragEnterEvent_Callback(QOpenGLWidget_DragEnterEvent_Callback cb) { qopenglwidget_dragenterevent_callback = cb; }
    inline void setQOpenGLWidget_DragMoveEvent_Callback(QOpenGLWidget_DragMoveEvent_Callback cb) { qopenglwidget_dragmoveevent_callback = cb; }
    inline void setQOpenGLWidget_DragLeaveEvent_Callback(QOpenGLWidget_DragLeaveEvent_Callback cb) { qopenglwidget_dragleaveevent_callback = cb; }
    inline void setQOpenGLWidget_DropEvent_Callback(QOpenGLWidget_DropEvent_Callback cb) { qopenglwidget_dropevent_callback = cb; }
    inline void setQOpenGLWidget_ShowEvent_Callback(QOpenGLWidget_ShowEvent_Callback cb) { qopenglwidget_showevent_callback = cb; }
    inline void setQOpenGLWidget_HideEvent_Callback(QOpenGLWidget_HideEvent_Callback cb) { qopenglwidget_hideevent_callback = cb; }
    inline void setQOpenGLWidget_NativeEvent_Callback(QOpenGLWidget_NativeEvent_Callback cb) { qopenglwidget_nativeevent_callback = cb; }
    inline void setQOpenGLWidget_ChangeEvent_Callback(QOpenGLWidget_ChangeEvent_Callback cb) { qopenglwidget_changeevent_callback = cb; }
    inline void setQOpenGLWidget_InitPainter_Callback(QOpenGLWidget_InitPainter_Callback cb) { qopenglwidget_initpainter_callback = cb; }
    inline void setQOpenGLWidget_SharedPainter_Callback(QOpenGLWidget_SharedPainter_Callback cb) { qopenglwidget_sharedpainter_callback = cb; }
    inline void setQOpenGLWidget_InputMethodEvent_Callback(QOpenGLWidget_InputMethodEvent_Callback cb) { qopenglwidget_inputmethodevent_callback = cb; }
    inline void setQOpenGLWidget_InputMethodQuery_Callback(QOpenGLWidget_InputMethodQuery_Callback cb) { qopenglwidget_inputmethodquery_callback = cb; }
    inline void setQOpenGLWidget_FocusNextPrevChild_Callback(QOpenGLWidget_FocusNextPrevChild_Callback cb) { qopenglwidget_focusnextprevchild_callback = cb; }
    inline void setQOpenGLWidget_EventFilter_Callback(QOpenGLWidget_EventFilter_Callback cb) { qopenglwidget_eventfilter_callback = cb; }
    inline void setQOpenGLWidget_TimerEvent_Callback(QOpenGLWidget_TimerEvent_Callback cb) { qopenglwidget_timerevent_callback = cb; }
    inline void setQOpenGLWidget_ChildEvent_Callback(QOpenGLWidget_ChildEvent_Callback cb) { qopenglwidget_childevent_callback = cb; }
    inline void setQOpenGLWidget_CustomEvent_Callback(QOpenGLWidget_CustomEvent_Callback cb) { qopenglwidget_customevent_callback = cb; }
    inline void setQOpenGLWidget_ConnectNotify_Callback(QOpenGLWidget_ConnectNotify_Callback cb) { qopenglwidget_connectnotify_callback = cb; }
    inline void setQOpenGLWidget_DisconnectNotify_Callback(QOpenGLWidget_DisconnectNotify_Callback cb) { qopenglwidget_disconnectnotify_callback = cb; }
    inline void setQOpenGLWidget_UpdateMicroFocus_Callback(QOpenGLWidget_UpdateMicroFocus_Callback cb) { qopenglwidget_updatemicrofocus_callback = cb; }
    inline void setQOpenGLWidget_Create_Callback(QOpenGLWidget_Create_Callback cb) { qopenglwidget_create_callback = cb; }
    inline void setQOpenGLWidget_Destroy_Callback(QOpenGLWidget_Destroy_Callback cb) { qopenglwidget_destroy_callback = cb; }
    inline void setQOpenGLWidget_FocusNextChild_Callback(QOpenGLWidget_FocusNextChild_Callback cb) { qopenglwidget_focusnextchild_callback = cb; }
    inline void setQOpenGLWidget_FocusPreviousChild_Callback(QOpenGLWidget_FocusPreviousChild_Callback cb) { qopenglwidget_focuspreviouschild_callback = cb; }
    inline void setQOpenGLWidget_Sender_Callback(QOpenGLWidget_Sender_Callback cb) { qopenglwidget_sender_callback = cb; }
    inline void setQOpenGLWidget_SenderSignalIndex_Callback(QOpenGLWidget_SenderSignalIndex_Callback cb) { qopenglwidget_sendersignalindex_callback = cb; }
    inline void setQOpenGLWidget_Receivers_Callback(QOpenGLWidget_Receivers_Callback cb) { qopenglwidget_receivers_callback = cb; }
    inline void setQOpenGLWidget_IsSignalConnected_Callback(QOpenGLWidget_IsSignalConnected_Callback cb) { qopenglwidget_issignalconnected_callback = cb; }
    inline void setQOpenGLWidget_GetDecodedMetricF_Callback(QOpenGLWidget_GetDecodedMetricF_Callback cb) { qopenglwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQOpenGLWidget_Metacall_IsBase(bool value) const { qopenglwidget_metacall_isbase = value; }
    inline void setQOpenGLWidget_InitializeGL_IsBase(bool value) const { qopenglwidget_initializegl_isbase = value; }
    inline void setQOpenGLWidget_ResizeGL_IsBase(bool value) const { qopenglwidget_resizegl_isbase = value; }
    inline void setQOpenGLWidget_PaintGL_IsBase(bool value) const { qopenglwidget_paintgl_isbase = value; }
    inline void setQOpenGLWidget_PaintEvent_IsBase(bool value) const { qopenglwidget_paintevent_isbase = value; }
    inline void setQOpenGLWidget_ResizeEvent_IsBase(bool value) const { qopenglwidget_resizeevent_isbase = value; }
    inline void setQOpenGLWidget_Event_IsBase(bool value) const { qopenglwidget_event_isbase = value; }
    inline void setQOpenGLWidget_Metric_IsBase(bool value) const { qopenglwidget_metric_isbase = value; }
    inline void setQOpenGLWidget_Redirected_IsBase(bool value) const { qopenglwidget_redirected_isbase = value; }
    inline void setQOpenGLWidget_PaintEngine_IsBase(bool value) const { qopenglwidget_paintengine_isbase = value; }
    inline void setQOpenGLWidget_DevType_IsBase(bool value) const { qopenglwidget_devtype_isbase = value; }
    inline void setQOpenGLWidget_SetVisible_IsBase(bool value) const { qopenglwidget_setvisible_isbase = value; }
    inline void setQOpenGLWidget_SizeHint_IsBase(bool value) const { qopenglwidget_sizehint_isbase = value; }
    inline void setQOpenGLWidget_MinimumSizeHint_IsBase(bool value) const { qopenglwidget_minimumsizehint_isbase = value; }
    inline void setQOpenGLWidget_HeightForWidth_IsBase(bool value) const { qopenglwidget_heightforwidth_isbase = value; }
    inline void setQOpenGLWidget_HasHeightForWidth_IsBase(bool value) const { qopenglwidget_hasheightforwidth_isbase = value; }
    inline void setQOpenGLWidget_MousePressEvent_IsBase(bool value) const { qopenglwidget_mousepressevent_isbase = value; }
    inline void setQOpenGLWidget_MouseReleaseEvent_IsBase(bool value) const { qopenglwidget_mousereleaseevent_isbase = value; }
    inline void setQOpenGLWidget_MouseDoubleClickEvent_IsBase(bool value) const { qopenglwidget_mousedoubleclickevent_isbase = value; }
    inline void setQOpenGLWidget_MouseMoveEvent_IsBase(bool value) const { qopenglwidget_mousemoveevent_isbase = value; }
    inline void setQOpenGLWidget_WheelEvent_IsBase(bool value) const { qopenglwidget_wheelevent_isbase = value; }
    inline void setQOpenGLWidget_KeyPressEvent_IsBase(bool value) const { qopenglwidget_keypressevent_isbase = value; }
    inline void setQOpenGLWidget_KeyReleaseEvent_IsBase(bool value) const { qopenglwidget_keyreleaseevent_isbase = value; }
    inline void setQOpenGLWidget_FocusInEvent_IsBase(bool value) const { qopenglwidget_focusinevent_isbase = value; }
    inline void setQOpenGLWidget_FocusOutEvent_IsBase(bool value) const { qopenglwidget_focusoutevent_isbase = value; }
    inline void setQOpenGLWidget_EnterEvent_IsBase(bool value) const { qopenglwidget_enterevent_isbase = value; }
    inline void setQOpenGLWidget_LeaveEvent_IsBase(bool value) const { qopenglwidget_leaveevent_isbase = value; }
    inline void setQOpenGLWidget_MoveEvent_IsBase(bool value) const { qopenglwidget_moveevent_isbase = value; }
    inline void setQOpenGLWidget_CloseEvent_IsBase(bool value) const { qopenglwidget_closeevent_isbase = value; }
    inline void setQOpenGLWidget_ContextMenuEvent_IsBase(bool value) const { qopenglwidget_contextmenuevent_isbase = value; }
    inline void setQOpenGLWidget_TabletEvent_IsBase(bool value) const { qopenglwidget_tabletevent_isbase = value; }
    inline void setQOpenGLWidget_ActionEvent_IsBase(bool value) const { qopenglwidget_actionevent_isbase = value; }
    inline void setQOpenGLWidget_DragEnterEvent_IsBase(bool value) const { qopenglwidget_dragenterevent_isbase = value; }
    inline void setQOpenGLWidget_DragMoveEvent_IsBase(bool value) const { qopenglwidget_dragmoveevent_isbase = value; }
    inline void setQOpenGLWidget_DragLeaveEvent_IsBase(bool value) const { qopenglwidget_dragleaveevent_isbase = value; }
    inline void setQOpenGLWidget_DropEvent_IsBase(bool value) const { qopenglwidget_dropevent_isbase = value; }
    inline void setQOpenGLWidget_ShowEvent_IsBase(bool value) const { qopenglwidget_showevent_isbase = value; }
    inline void setQOpenGLWidget_HideEvent_IsBase(bool value) const { qopenglwidget_hideevent_isbase = value; }
    inline void setQOpenGLWidget_NativeEvent_IsBase(bool value) const { qopenglwidget_nativeevent_isbase = value; }
    inline void setQOpenGLWidget_ChangeEvent_IsBase(bool value) const { qopenglwidget_changeevent_isbase = value; }
    inline void setQOpenGLWidget_InitPainter_IsBase(bool value) const { qopenglwidget_initpainter_isbase = value; }
    inline void setQOpenGLWidget_SharedPainter_IsBase(bool value) const { qopenglwidget_sharedpainter_isbase = value; }
    inline void setQOpenGLWidget_InputMethodEvent_IsBase(bool value) const { qopenglwidget_inputmethodevent_isbase = value; }
    inline void setQOpenGLWidget_InputMethodQuery_IsBase(bool value) const { qopenglwidget_inputmethodquery_isbase = value; }
    inline void setQOpenGLWidget_FocusNextPrevChild_IsBase(bool value) const { qopenglwidget_focusnextprevchild_isbase = value; }
    inline void setQOpenGLWidget_EventFilter_IsBase(bool value) const { qopenglwidget_eventfilter_isbase = value; }
    inline void setQOpenGLWidget_TimerEvent_IsBase(bool value) const { qopenglwidget_timerevent_isbase = value; }
    inline void setQOpenGLWidget_ChildEvent_IsBase(bool value) const { qopenglwidget_childevent_isbase = value; }
    inline void setQOpenGLWidget_CustomEvent_IsBase(bool value) const { qopenglwidget_customevent_isbase = value; }
    inline void setQOpenGLWidget_ConnectNotify_IsBase(bool value) const { qopenglwidget_connectnotify_isbase = value; }
    inline void setQOpenGLWidget_DisconnectNotify_IsBase(bool value) const { qopenglwidget_disconnectnotify_isbase = value; }
    inline void setQOpenGLWidget_UpdateMicroFocus_IsBase(bool value) const { qopenglwidget_updatemicrofocus_isbase = value; }
    inline void setQOpenGLWidget_Create_IsBase(bool value) const { qopenglwidget_create_isbase = value; }
    inline void setQOpenGLWidget_Destroy_IsBase(bool value) const { qopenglwidget_destroy_isbase = value; }
    inline void setQOpenGLWidget_FocusNextChild_IsBase(bool value) const { qopenglwidget_focusnextchild_isbase = value; }
    inline void setQOpenGLWidget_FocusPreviousChild_IsBase(bool value) const { qopenglwidget_focuspreviouschild_isbase = value; }
    inline void setQOpenGLWidget_Sender_IsBase(bool value) const { qopenglwidget_sender_isbase = value; }
    inline void setQOpenGLWidget_SenderSignalIndex_IsBase(bool value) const { qopenglwidget_sendersignalindex_isbase = value; }
    inline void setQOpenGLWidget_Receivers_IsBase(bool value) const { qopenglwidget_receivers_isbase = value; }
    inline void setQOpenGLWidget_IsSignalConnected_IsBase(bool value) const { qopenglwidget_issignalconnected_isbase = value; }
    inline void setQOpenGLWidget_GetDecodedMetricF_IsBase(bool value) const { qopenglwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qopenglwidget_metacall_isbase) {
            qopenglwidget_metacall_isbase = false;
            return QOpenGLWidget::qt_metacall(param1, param2, param3);
        } else if (qopenglwidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qopenglwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initializeGL() override {
        if (qopenglwidget_initializegl_isbase) {
            qopenglwidget_initializegl_isbase = false;
            QOpenGLWidget::initializeGL();
        } else if (qopenglwidget_initializegl_callback != nullptr) {
            qopenglwidget_initializegl_callback();
        } else {
            QOpenGLWidget::initializeGL();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeGL(int w, int h) override {
        if (qopenglwidget_resizegl_isbase) {
            qopenglwidget_resizegl_isbase = false;
            QOpenGLWidget::resizeGL(w, h);
        } else if (qopenglwidget_resizegl_callback != nullptr) {
            int cbval1 = w;
            int cbval2 = h;

            qopenglwidget_resizegl_callback(this, cbval1, cbval2);
        } else {
            QOpenGLWidget::resizeGL(w, h);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintGL() override {
        if (qopenglwidget_paintgl_isbase) {
            qopenglwidget_paintgl_isbase = false;
            QOpenGLWidget::paintGL();
        } else if (qopenglwidget_paintgl_callback != nullptr) {
            qopenglwidget_paintgl_callback();
        } else {
            QOpenGLWidget::paintGL();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qopenglwidget_paintevent_isbase) {
            qopenglwidget_paintevent_isbase = false;
            QOpenGLWidget::paintEvent(e);
        } else if (qopenglwidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = e;

            qopenglwidget_paintevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qopenglwidget_resizeevent_isbase) {
            qopenglwidget_resizeevent_isbase = false;
            QOpenGLWidget::resizeEvent(e);
        } else if (qopenglwidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = e;

            qopenglwidget_resizeevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qopenglwidget_event_isbase) {
            qopenglwidget_event_isbase = false;
            return QOpenGLWidget::event(e);
        } else if (qopenglwidget_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qopenglwidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLWidget::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
        if (qopenglwidget_metric_isbase) {
            qopenglwidget_metric_isbase = false;
            return QOpenGLWidget::metric(metric);
        } else if (qopenglwidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(metric);

            int callback_ret = qopenglwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLWidget::metric(metric);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* p) const override {
        if (qopenglwidget_redirected_isbase) {
            qopenglwidget_redirected_isbase = false;
            return QOpenGLWidget::redirected(p);
        } else if (qopenglwidget_redirected_callback != nullptr) {
            QPoint* cbval1 = p;

            QPaintDevice* callback_ret = qopenglwidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLWidget::redirected(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qopenglwidget_paintengine_isbase) {
            qopenglwidget_paintengine_isbase = false;
            return QOpenGLWidget::paintEngine();
        } else if (qopenglwidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qopenglwidget_paintengine_callback();
            return callback_ret;
        } else {
            return QOpenGLWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qopenglwidget_devtype_isbase) {
            qopenglwidget_devtype_isbase = false;
            return QOpenGLWidget::devType();
        } else if (qopenglwidget_devtype_callback != nullptr) {
            int callback_ret = qopenglwidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qopenglwidget_setvisible_isbase) {
            qopenglwidget_setvisible_isbase = false;
            QOpenGLWidget::setVisible(visible);
        } else if (qopenglwidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qopenglwidget_setvisible_callback(this, cbval1);
        } else {
            QOpenGLWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qopenglwidget_sizehint_isbase) {
            qopenglwidget_sizehint_isbase = false;
            return QOpenGLWidget::sizeHint();
        } else if (qopenglwidget_sizehint_callback != nullptr) {
            QSize* callback_ret = qopenglwidget_sizehint_callback();
            return *callback_ret;
        } else {
            return QOpenGLWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qopenglwidget_minimumsizehint_isbase) {
            qopenglwidget_minimumsizehint_isbase = false;
            return QOpenGLWidget::minimumSizeHint();
        } else if (qopenglwidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qopenglwidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QOpenGLWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qopenglwidget_heightforwidth_isbase) {
            qopenglwidget_heightforwidth_isbase = false;
            return QOpenGLWidget::heightForWidth(param1);
        } else if (qopenglwidget_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qopenglwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qopenglwidget_hasheightforwidth_isbase) {
            qopenglwidget_hasheightforwidth_isbase = false;
            return QOpenGLWidget::hasHeightForWidth();
        } else if (qopenglwidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qopenglwidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QOpenGLWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qopenglwidget_mousepressevent_isbase) {
            qopenglwidget_mousepressevent_isbase = false;
            QOpenGLWidget::mousePressEvent(event);
        } else if (qopenglwidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qopenglwidget_mousepressevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qopenglwidget_mousereleaseevent_isbase) {
            qopenglwidget_mousereleaseevent_isbase = false;
            QOpenGLWidget::mouseReleaseEvent(event);
        } else if (qopenglwidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qopenglwidget_mousereleaseevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qopenglwidget_mousedoubleclickevent_isbase) {
            qopenglwidget_mousedoubleclickevent_isbase = false;
            QOpenGLWidget::mouseDoubleClickEvent(event);
        } else if (qopenglwidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qopenglwidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qopenglwidget_mousemoveevent_isbase) {
            qopenglwidget_mousemoveevent_isbase = false;
            QOpenGLWidget::mouseMoveEvent(event);
        } else if (qopenglwidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qopenglwidget_mousemoveevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qopenglwidget_wheelevent_isbase) {
            qopenglwidget_wheelevent_isbase = false;
            QOpenGLWidget::wheelEvent(event);
        } else if (qopenglwidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qopenglwidget_wheelevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qopenglwidget_keypressevent_isbase) {
            qopenglwidget_keypressevent_isbase = false;
            QOpenGLWidget::keyPressEvent(event);
        } else if (qopenglwidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qopenglwidget_keypressevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qopenglwidget_keyreleaseevent_isbase) {
            qopenglwidget_keyreleaseevent_isbase = false;
            QOpenGLWidget::keyReleaseEvent(event);
        } else if (qopenglwidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qopenglwidget_keyreleaseevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qopenglwidget_focusinevent_isbase) {
            qopenglwidget_focusinevent_isbase = false;
            QOpenGLWidget::focusInEvent(event);
        } else if (qopenglwidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qopenglwidget_focusinevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qopenglwidget_focusoutevent_isbase) {
            qopenglwidget_focusoutevent_isbase = false;
            QOpenGLWidget::focusOutEvent(event);
        } else if (qopenglwidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qopenglwidget_focusoutevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qopenglwidget_enterevent_isbase) {
            qopenglwidget_enterevent_isbase = false;
            QOpenGLWidget::enterEvent(event);
        } else if (qopenglwidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qopenglwidget_enterevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qopenglwidget_leaveevent_isbase) {
            qopenglwidget_leaveevent_isbase = false;
            QOpenGLWidget::leaveEvent(event);
        } else if (qopenglwidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qopenglwidget_leaveevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qopenglwidget_moveevent_isbase) {
            qopenglwidget_moveevent_isbase = false;
            QOpenGLWidget::moveEvent(event);
        } else if (qopenglwidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qopenglwidget_moveevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qopenglwidget_closeevent_isbase) {
            qopenglwidget_closeevent_isbase = false;
            QOpenGLWidget::closeEvent(event);
        } else if (qopenglwidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qopenglwidget_closeevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qopenglwidget_contextmenuevent_isbase) {
            qopenglwidget_contextmenuevent_isbase = false;
            QOpenGLWidget::contextMenuEvent(event);
        } else if (qopenglwidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qopenglwidget_contextmenuevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qopenglwidget_tabletevent_isbase) {
            qopenglwidget_tabletevent_isbase = false;
            QOpenGLWidget::tabletEvent(event);
        } else if (qopenglwidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qopenglwidget_tabletevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qopenglwidget_actionevent_isbase) {
            qopenglwidget_actionevent_isbase = false;
            QOpenGLWidget::actionEvent(event);
        } else if (qopenglwidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qopenglwidget_actionevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qopenglwidget_dragenterevent_isbase) {
            qopenglwidget_dragenterevent_isbase = false;
            QOpenGLWidget::dragEnterEvent(event);
        } else if (qopenglwidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qopenglwidget_dragenterevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qopenglwidget_dragmoveevent_isbase) {
            qopenglwidget_dragmoveevent_isbase = false;
            QOpenGLWidget::dragMoveEvent(event);
        } else if (qopenglwidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qopenglwidget_dragmoveevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qopenglwidget_dragleaveevent_isbase) {
            qopenglwidget_dragleaveevent_isbase = false;
            QOpenGLWidget::dragLeaveEvent(event);
        } else if (qopenglwidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qopenglwidget_dragleaveevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qopenglwidget_dropevent_isbase) {
            qopenglwidget_dropevent_isbase = false;
            QOpenGLWidget::dropEvent(event);
        } else if (qopenglwidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qopenglwidget_dropevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qopenglwidget_showevent_isbase) {
            qopenglwidget_showevent_isbase = false;
            QOpenGLWidget::showEvent(event);
        } else if (qopenglwidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qopenglwidget_showevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qopenglwidget_hideevent_isbase) {
            qopenglwidget_hideevent_isbase = false;
            QOpenGLWidget::hideEvent(event);
        } else if (qopenglwidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qopenglwidget_hideevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qopenglwidget_nativeevent_isbase) {
            qopenglwidget_nativeevent_isbase = false;
            return QOpenGLWidget::nativeEvent(eventType, message, result);
        } else if (qopenglwidget_nativeevent_callback != nullptr) {
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

            bool callback_ret = qopenglwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QOpenGLWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qopenglwidget_changeevent_isbase) {
            qopenglwidget_changeevent_isbase = false;
            QOpenGLWidget::changeEvent(param1);
        } else if (qopenglwidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qopenglwidget_changeevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qopenglwidget_initpainter_isbase) {
            qopenglwidget_initpainter_isbase = false;
            QOpenGLWidget::initPainter(painter);
        } else if (qopenglwidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qopenglwidget_initpainter_callback(this, cbval1);
        } else {
            QOpenGLWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qopenglwidget_sharedpainter_isbase) {
            qopenglwidget_sharedpainter_isbase = false;
            return QOpenGLWidget::sharedPainter();
        } else if (qopenglwidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qopenglwidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return QOpenGLWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qopenglwidget_inputmethodevent_isbase) {
            qopenglwidget_inputmethodevent_isbase = false;
            QOpenGLWidget::inputMethodEvent(param1);
        } else if (qopenglwidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qopenglwidget_inputmethodevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qopenglwidget_inputmethodquery_isbase) {
            qopenglwidget_inputmethodquery_isbase = false;
            return QOpenGLWidget::inputMethodQuery(param1);
        } else if (qopenglwidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qopenglwidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QOpenGLWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qopenglwidget_focusnextprevchild_isbase) {
            qopenglwidget_focusnextprevchild_isbase = false;
            return QOpenGLWidget::focusNextPrevChild(next);
        } else if (qopenglwidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qopenglwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qopenglwidget_eventfilter_isbase) {
            qopenglwidget_eventfilter_isbase = false;
            return QOpenGLWidget::eventFilter(watched, event);
        } else if (qopenglwidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qopenglwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QOpenGLWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qopenglwidget_timerevent_isbase) {
            qopenglwidget_timerevent_isbase = false;
            QOpenGLWidget::timerEvent(event);
        } else if (qopenglwidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qopenglwidget_timerevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qopenglwidget_childevent_isbase) {
            qopenglwidget_childevent_isbase = false;
            QOpenGLWidget::childEvent(event);
        } else if (qopenglwidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qopenglwidget_childevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qopenglwidget_customevent_isbase) {
            qopenglwidget_customevent_isbase = false;
            QOpenGLWidget::customEvent(event);
        } else if (qopenglwidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qopenglwidget_customevent_callback(this, cbval1);
        } else {
            QOpenGLWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qopenglwidget_connectnotify_isbase) {
            qopenglwidget_connectnotify_isbase = false;
            QOpenGLWidget::connectNotify(signal);
        } else if (qopenglwidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qopenglwidget_connectnotify_callback(this, cbval1);
        } else {
            QOpenGLWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qopenglwidget_disconnectnotify_isbase) {
            qopenglwidget_disconnectnotify_isbase = false;
            QOpenGLWidget::disconnectNotify(signal);
        } else if (qopenglwidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qopenglwidget_disconnectnotify_callback(this, cbval1);
        } else {
            QOpenGLWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qopenglwidget_updatemicrofocus_isbase) {
            qopenglwidget_updatemicrofocus_isbase = false;
            QOpenGLWidget::updateMicroFocus();
        } else if (qopenglwidget_updatemicrofocus_callback != nullptr) {
            qopenglwidget_updatemicrofocus_callback();
        } else {
            QOpenGLWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qopenglwidget_create_isbase) {
            qopenglwidget_create_isbase = false;
            QOpenGLWidget::create();
        } else if (qopenglwidget_create_callback != nullptr) {
            qopenglwidget_create_callback();
        } else {
            QOpenGLWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qopenglwidget_destroy_isbase) {
            qopenglwidget_destroy_isbase = false;
            QOpenGLWidget::destroy();
        } else if (qopenglwidget_destroy_callback != nullptr) {
            qopenglwidget_destroy_callback();
        } else {
            QOpenGLWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qopenglwidget_focusnextchild_isbase) {
            qopenglwidget_focusnextchild_isbase = false;
            return QOpenGLWidget::focusNextChild();
        } else if (qopenglwidget_focusnextchild_callback != nullptr) {
            bool callback_ret = qopenglwidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return QOpenGLWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qopenglwidget_focuspreviouschild_isbase) {
            qopenglwidget_focuspreviouschild_isbase = false;
            return QOpenGLWidget::focusPreviousChild();
        } else if (qopenglwidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qopenglwidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QOpenGLWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qopenglwidget_sender_isbase) {
            qopenglwidget_sender_isbase = false;
            return QOpenGLWidget::sender();
        } else if (qopenglwidget_sender_callback != nullptr) {
            QObject* callback_ret = qopenglwidget_sender_callback();
            return callback_ret;
        } else {
            return QOpenGLWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qopenglwidget_sendersignalindex_isbase) {
            qopenglwidget_sendersignalindex_isbase = false;
            return QOpenGLWidget::senderSignalIndex();
        } else if (qopenglwidget_sendersignalindex_callback != nullptr) {
            int callback_ret = qopenglwidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qopenglwidget_receivers_isbase) {
            qopenglwidget_receivers_isbase = false;
            return QOpenGLWidget::receivers(signal);
        } else if (qopenglwidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qopenglwidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qopenglwidget_issignalconnected_isbase) {
            qopenglwidget_issignalconnected_isbase = false;
            return QOpenGLWidget::isSignalConnected(signal);
        } else if (qopenglwidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qopenglwidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLWidget::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qopenglwidget_getdecodedmetricf_isbase) {
            qopenglwidget_getdecodedmetricf_isbase = false;
            return QOpenGLWidget::getDecodedMetricF(metricA, metricB);
        } else if (qopenglwidget_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qopenglwidget_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QOpenGLWidget::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void QOpenGLWidget_InitializeGL(QOpenGLWidget* self);
    friend void QOpenGLWidget_QBaseInitializeGL(QOpenGLWidget* self);
    friend void QOpenGLWidget_ResizeGL(QOpenGLWidget* self, int w, int h);
    friend void QOpenGLWidget_QBaseResizeGL(QOpenGLWidget* self, int w, int h);
    friend void QOpenGLWidget_PaintGL(QOpenGLWidget* self);
    friend void QOpenGLWidget_QBasePaintGL(QOpenGLWidget* self);
    friend void QOpenGLWidget_PaintEvent(QOpenGLWidget* self, QPaintEvent* e);
    friend void QOpenGLWidget_QBasePaintEvent(QOpenGLWidget* self, QPaintEvent* e);
    friend void QOpenGLWidget_ResizeEvent(QOpenGLWidget* self, QResizeEvent* e);
    friend void QOpenGLWidget_QBaseResizeEvent(QOpenGLWidget* self, QResizeEvent* e);
    friend bool QOpenGLWidget_Event(QOpenGLWidget* self, QEvent* e);
    friend bool QOpenGLWidget_QBaseEvent(QOpenGLWidget* self, QEvent* e);
    friend int QOpenGLWidget_Metric(const QOpenGLWidget* self, int metric);
    friend int QOpenGLWidget_QBaseMetric(const QOpenGLWidget* self, int metric);
    friend QPaintDevice* QOpenGLWidget_Redirected(const QOpenGLWidget* self, QPoint* p);
    friend QPaintDevice* QOpenGLWidget_QBaseRedirected(const QOpenGLWidget* self, QPoint* p);
    friend QPaintEngine* QOpenGLWidget_PaintEngine(const QOpenGLWidget* self);
    friend QPaintEngine* QOpenGLWidget_QBasePaintEngine(const QOpenGLWidget* self);
    friend void QOpenGLWidget_MousePressEvent(QOpenGLWidget* self, QMouseEvent* event);
    friend void QOpenGLWidget_QBaseMousePressEvent(QOpenGLWidget* self, QMouseEvent* event);
    friend void QOpenGLWidget_MouseReleaseEvent(QOpenGLWidget* self, QMouseEvent* event);
    friend void QOpenGLWidget_QBaseMouseReleaseEvent(QOpenGLWidget* self, QMouseEvent* event);
    friend void QOpenGLWidget_MouseDoubleClickEvent(QOpenGLWidget* self, QMouseEvent* event);
    friend void QOpenGLWidget_QBaseMouseDoubleClickEvent(QOpenGLWidget* self, QMouseEvent* event);
    friend void QOpenGLWidget_MouseMoveEvent(QOpenGLWidget* self, QMouseEvent* event);
    friend void QOpenGLWidget_QBaseMouseMoveEvent(QOpenGLWidget* self, QMouseEvent* event);
    friend void QOpenGLWidget_WheelEvent(QOpenGLWidget* self, QWheelEvent* event);
    friend void QOpenGLWidget_QBaseWheelEvent(QOpenGLWidget* self, QWheelEvent* event);
    friend void QOpenGLWidget_KeyPressEvent(QOpenGLWidget* self, QKeyEvent* event);
    friend void QOpenGLWidget_QBaseKeyPressEvent(QOpenGLWidget* self, QKeyEvent* event);
    friend void QOpenGLWidget_KeyReleaseEvent(QOpenGLWidget* self, QKeyEvent* event);
    friend void QOpenGLWidget_QBaseKeyReleaseEvent(QOpenGLWidget* self, QKeyEvent* event);
    friend void QOpenGLWidget_FocusInEvent(QOpenGLWidget* self, QFocusEvent* event);
    friend void QOpenGLWidget_QBaseFocusInEvent(QOpenGLWidget* self, QFocusEvent* event);
    friend void QOpenGLWidget_FocusOutEvent(QOpenGLWidget* self, QFocusEvent* event);
    friend void QOpenGLWidget_QBaseFocusOutEvent(QOpenGLWidget* self, QFocusEvent* event);
    friend void QOpenGLWidget_EnterEvent(QOpenGLWidget* self, QEnterEvent* event);
    friend void QOpenGLWidget_QBaseEnterEvent(QOpenGLWidget* self, QEnterEvent* event);
    friend void QOpenGLWidget_LeaveEvent(QOpenGLWidget* self, QEvent* event);
    friend void QOpenGLWidget_QBaseLeaveEvent(QOpenGLWidget* self, QEvent* event);
    friend void QOpenGLWidget_MoveEvent(QOpenGLWidget* self, QMoveEvent* event);
    friend void QOpenGLWidget_QBaseMoveEvent(QOpenGLWidget* self, QMoveEvent* event);
    friend void QOpenGLWidget_CloseEvent(QOpenGLWidget* self, QCloseEvent* event);
    friend void QOpenGLWidget_QBaseCloseEvent(QOpenGLWidget* self, QCloseEvent* event);
    friend void QOpenGLWidget_ContextMenuEvent(QOpenGLWidget* self, QContextMenuEvent* event);
    friend void QOpenGLWidget_QBaseContextMenuEvent(QOpenGLWidget* self, QContextMenuEvent* event);
    friend void QOpenGLWidget_TabletEvent(QOpenGLWidget* self, QTabletEvent* event);
    friend void QOpenGLWidget_QBaseTabletEvent(QOpenGLWidget* self, QTabletEvent* event);
    friend void QOpenGLWidget_ActionEvent(QOpenGLWidget* self, QActionEvent* event);
    friend void QOpenGLWidget_QBaseActionEvent(QOpenGLWidget* self, QActionEvent* event);
    friend void QOpenGLWidget_DragEnterEvent(QOpenGLWidget* self, QDragEnterEvent* event);
    friend void QOpenGLWidget_QBaseDragEnterEvent(QOpenGLWidget* self, QDragEnterEvent* event);
    friend void QOpenGLWidget_DragMoveEvent(QOpenGLWidget* self, QDragMoveEvent* event);
    friend void QOpenGLWidget_QBaseDragMoveEvent(QOpenGLWidget* self, QDragMoveEvent* event);
    friend void QOpenGLWidget_DragLeaveEvent(QOpenGLWidget* self, QDragLeaveEvent* event);
    friend void QOpenGLWidget_QBaseDragLeaveEvent(QOpenGLWidget* self, QDragLeaveEvent* event);
    friend void QOpenGLWidget_DropEvent(QOpenGLWidget* self, QDropEvent* event);
    friend void QOpenGLWidget_QBaseDropEvent(QOpenGLWidget* self, QDropEvent* event);
    friend void QOpenGLWidget_ShowEvent(QOpenGLWidget* self, QShowEvent* event);
    friend void QOpenGLWidget_QBaseShowEvent(QOpenGLWidget* self, QShowEvent* event);
    friend void QOpenGLWidget_HideEvent(QOpenGLWidget* self, QHideEvent* event);
    friend void QOpenGLWidget_QBaseHideEvent(QOpenGLWidget* self, QHideEvent* event);
    friend bool QOpenGLWidget_NativeEvent(QOpenGLWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QOpenGLWidget_QBaseNativeEvent(QOpenGLWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QOpenGLWidget_ChangeEvent(QOpenGLWidget* self, QEvent* param1);
    friend void QOpenGLWidget_QBaseChangeEvent(QOpenGLWidget* self, QEvent* param1);
    friend void QOpenGLWidget_InitPainter(const QOpenGLWidget* self, QPainter* painter);
    friend void QOpenGLWidget_QBaseInitPainter(const QOpenGLWidget* self, QPainter* painter);
    friend QPainter* QOpenGLWidget_SharedPainter(const QOpenGLWidget* self);
    friend QPainter* QOpenGLWidget_QBaseSharedPainter(const QOpenGLWidget* self);
    friend void QOpenGLWidget_InputMethodEvent(QOpenGLWidget* self, QInputMethodEvent* param1);
    friend void QOpenGLWidget_QBaseInputMethodEvent(QOpenGLWidget* self, QInputMethodEvent* param1);
    friend bool QOpenGLWidget_FocusNextPrevChild(QOpenGLWidget* self, bool next);
    friend bool QOpenGLWidget_QBaseFocusNextPrevChild(QOpenGLWidget* self, bool next);
    friend void QOpenGLWidget_TimerEvent(QOpenGLWidget* self, QTimerEvent* event);
    friend void QOpenGLWidget_QBaseTimerEvent(QOpenGLWidget* self, QTimerEvent* event);
    friend void QOpenGLWidget_ChildEvent(QOpenGLWidget* self, QChildEvent* event);
    friend void QOpenGLWidget_QBaseChildEvent(QOpenGLWidget* self, QChildEvent* event);
    friend void QOpenGLWidget_CustomEvent(QOpenGLWidget* self, QEvent* event);
    friend void QOpenGLWidget_QBaseCustomEvent(QOpenGLWidget* self, QEvent* event);
    friend void QOpenGLWidget_ConnectNotify(QOpenGLWidget* self, const QMetaMethod* signal);
    friend void QOpenGLWidget_QBaseConnectNotify(QOpenGLWidget* self, const QMetaMethod* signal);
    friend void QOpenGLWidget_DisconnectNotify(QOpenGLWidget* self, const QMetaMethod* signal);
    friend void QOpenGLWidget_QBaseDisconnectNotify(QOpenGLWidget* self, const QMetaMethod* signal);
    friend void QOpenGLWidget_UpdateMicroFocus(QOpenGLWidget* self);
    friend void QOpenGLWidget_QBaseUpdateMicroFocus(QOpenGLWidget* self);
    friend void QOpenGLWidget_Create(QOpenGLWidget* self);
    friend void QOpenGLWidget_QBaseCreate(QOpenGLWidget* self);
    friend void QOpenGLWidget_Destroy(QOpenGLWidget* self);
    friend void QOpenGLWidget_QBaseDestroy(QOpenGLWidget* self);
    friend bool QOpenGLWidget_FocusNextChild(QOpenGLWidget* self);
    friend bool QOpenGLWidget_QBaseFocusNextChild(QOpenGLWidget* self);
    friend bool QOpenGLWidget_FocusPreviousChild(QOpenGLWidget* self);
    friend bool QOpenGLWidget_QBaseFocusPreviousChild(QOpenGLWidget* self);
    friend QObject* QOpenGLWidget_Sender(const QOpenGLWidget* self);
    friend QObject* QOpenGLWidget_QBaseSender(const QOpenGLWidget* self);
    friend int QOpenGLWidget_SenderSignalIndex(const QOpenGLWidget* self);
    friend int QOpenGLWidget_QBaseSenderSignalIndex(const QOpenGLWidget* self);
    friend int QOpenGLWidget_Receivers(const QOpenGLWidget* self, const char* signal);
    friend int QOpenGLWidget_QBaseReceivers(const QOpenGLWidget* self, const char* signal);
    friend bool QOpenGLWidget_IsSignalConnected(const QOpenGLWidget* self, const QMetaMethod* signal);
    friend bool QOpenGLWidget_QBaseIsSignalConnected(const QOpenGLWidget* self, const QMetaMethod* signal);
    friend double QOpenGLWidget_GetDecodedMetricF(const QOpenGLWidget* self, int metricA, int metricB);
    friend double QOpenGLWidget_QBaseGetDecodedMetricF(const QOpenGLWidget* self, int metricA, int metricB);
};

#endif
