#pragma once
#ifndef QUICK_LIBQQUICKWIDGET_HXX
#define QUICK_LIBQQUICKWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickWidget so that we can call protected methods
class VirtualQQuickWidget final : public QQuickWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualQQuickWidget = true;

    // Virtual class public types (including callbacks)
    using QQuickWidget_MetaObject_Callback = QMetaObject* (*)();
    using QQuickWidget_Metacast_Callback = void* (*)(QQuickWidget*, const char*);
    using QQuickWidget_Metacall_Callback = int (*)(QQuickWidget*, int, int, void**);
    using QQuickWidget_SizeHint_Callback = QSize* (*)();
    using QQuickWidget_ResizeEvent_Callback = void (*)(QQuickWidget*, QResizeEvent*);
    using QQuickWidget_TimerEvent_Callback = void (*)(QQuickWidget*, QTimerEvent*);
    using QQuickWidget_KeyPressEvent_Callback = void (*)(QQuickWidget*, QKeyEvent*);
    using QQuickWidget_KeyReleaseEvent_Callback = void (*)(QQuickWidget*, QKeyEvent*);
    using QQuickWidget_MousePressEvent_Callback = void (*)(QQuickWidget*, QMouseEvent*);
    using QQuickWidget_MouseReleaseEvent_Callback = void (*)(QQuickWidget*, QMouseEvent*);
    using QQuickWidget_MouseMoveEvent_Callback = void (*)(QQuickWidget*, QMouseEvent*);
    using QQuickWidget_MouseDoubleClickEvent_Callback = void (*)(QQuickWidget*, QMouseEvent*);
    using QQuickWidget_ShowEvent_Callback = void (*)(QQuickWidget*, QShowEvent*);
    using QQuickWidget_HideEvent_Callback = void (*)(QQuickWidget*, QHideEvent*);
    using QQuickWidget_FocusInEvent_Callback = void (*)(QQuickWidget*, QFocusEvent*);
    using QQuickWidget_FocusOutEvent_Callback = void (*)(QQuickWidget*, QFocusEvent*);
    using QQuickWidget_WheelEvent_Callback = void (*)(QQuickWidget*, QWheelEvent*);
    using QQuickWidget_DragEnterEvent_Callback = void (*)(QQuickWidget*, QDragEnterEvent*);
    using QQuickWidget_DragMoveEvent_Callback = void (*)(QQuickWidget*, QDragMoveEvent*);
    using QQuickWidget_DragLeaveEvent_Callback = void (*)(QQuickWidget*, QDragLeaveEvent*);
    using QQuickWidget_DropEvent_Callback = void (*)(QQuickWidget*, QDropEvent*);
    using QQuickWidget_Event_Callback = bool (*)(QQuickWidget*, QEvent*);
    using QQuickWidget_PaintEvent_Callback = void (*)(QQuickWidget*, QPaintEvent*);
    using QQuickWidget_FocusNextPrevChild_Callback = bool (*)(QQuickWidget*, bool);
    using QQuickWidget_DevType_Callback = int (*)();
    using QQuickWidget_SetVisible_Callback = void (*)(QQuickWidget*, bool);
    using QQuickWidget_MinimumSizeHint_Callback = QSize* (*)();
    using QQuickWidget_HeightForWidth_Callback = int (*)(const QQuickWidget*, int);
    using QQuickWidget_HasHeightForWidth_Callback = bool (*)();
    using QQuickWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using QQuickWidget_EnterEvent_Callback = void (*)(QQuickWidget*, QEnterEvent*);
    using QQuickWidget_LeaveEvent_Callback = void (*)(QQuickWidget*, QEvent*);
    using QQuickWidget_MoveEvent_Callback = void (*)(QQuickWidget*, QMoveEvent*);
    using QQuickWidget_CloseEvent_Callback = void (*)(QQuickWidget*, QCloseEvent*);
    using QQuickWidget_ContextMenuEvent_Callback = void (*)(QQuickWidget*, QContextMenuEvent*);
    using QQuickWidget_TabletEvent_Callback = void (*)(QQuickWidget*, QTabletEvent*);
    using QQuickWidget_ActionEvent_Callback = void (*)(QQuickWidget*, QActionEvent*);
    using QQuickWidget_NativeEvent_Callback = bool (*)(QQuickWidget*, libqt_string, void*, intptr_t*);
    using QQuickWidget_ChangeEvent_Callback = void (*)(QQuickWidget*, QEvent*);
    using QQuickWidget_Metric_Callback = int (*)(const QQuickWidget*, int);
    using QQuickWidget_InitPainter_Callback = void (*)(const QQuickWidget*, QPainter*);
    using QQuickWidget_Redirected_Callback = QPaintDevice* (*)(const QQuickWidget*, QPoint*);
    using QQuickWidget_SharedPainter_Callback = QPainter* (*)();
    using QQuickWidget_InputMethodEvent_Callback = void (*)(QQuickWidget*, QInputMethodEvent*);
    using QQuickWidget_InputMethodQuery_Callback = QVariant* (*)(const QQuickWidget*, int);
    using QQuickWidget_EventFilter_Callback = bool (*)(QQuickWidget*, QObject*, QEvent*);
    using QQuickWidget_ChildEvent_Callback = void (*)(QQuickWidget*, QChildEvent*);
    using QQuickWidget_CustomEvent_Callback = void (*)(QQuickWidget*, QEvent*);
    using QQuickWidget_ConnectNotify_Callback = void (*)(QQuickWidget*, QMetaMethod*);
    using QQuickWidget_DisconnectNotify_Callback = void (*)(QQuickWidget*, QMetaMethod*);
    using QQuickWidget_UpdateMicroFocus_Callback = void (*)();
    using QQuickWidget_Create_Callback = void (*)();
    using QQuickWidget_Destroy_Callback = void (*)();
    using QQuickWidget_FocusNextChild_Callback = bool (*)();
    using QQuickWidget_FocusPreviousChild_Callback = bool (*)();
    using QQuickWidget_Sender_Callback = QObject* (*)();
    using QQuickWidget_SenderSignalIndex_Callback = int (*)();
    using QQuickWidget_Receivers_Callback = int (*)(const QQuickWidget*, const char*);
    using QQuickWidget_IsSignalConnected_Callback = bool (*)(const QQuickWidget*, QMetaMethod*);
    using QQuickWidget_GetDecodedMetricF_Callback = double (*)(const QQuickWidget*, int, int);

  protected:
    // Instance callback storage
    QQuickWidget_MetaObject_Callback qquickwidget_metaobject_callback = nullptr;
    QQuickWidget_Metacast_Callback qquickwidget_metacast_callback = nullptr;
    QQuickWidget_Metacall_Callback qquickwidget_metacall_callback = nullptr;
    QQuickWidget_SizeHint_Callback qquickwidget_sizehint_callback = nullptr;
    QQuickWidget_ResizeEvent_Callback qquickwidget_resizeevent_callback = nullptr;
    QQuickWidget_TimerEvent_Callback qquickwidget_timerevent_callback = nullptr;
    QQuickWidget_KeyPressEvent_Callback qquickwidget_keypressevent_callback = nullptr;
    QQuickWidget_KeyReleaseEvent_Callback qquickwidget_keyreleaseevent_callback = nullptr;
    QQuickWidget_MousePressEvent_Callback qquickwidget_mousepressevent_callback = nullptr;
    QQuickWidget_MouseReleaseEvent_Callback qquickwidget_mousereleaseevent_callback = nullptr;
    QQuickWidget_MouseMoveEvent_Callback qquickwidget_mousemoveevent_callback = nullptr;
    QQuickWidget_MouseDoubleClickEvent_Callback qquickwidget_mousedoubleclickevent_callback = nullptr;
    QQuickWidget_ShowEvent_Callback qquickwidget_showevent_callback = nullptr;
    QQuickWidget_HideEvent_Callback qquickwidget_hideevent_callback = nullptr;
    QQuickWidget_FocusInEvent_Callback qquickwidget_focusinevent_callback = nullptr;
    QQuickWidget_FocusOutEvent_Callback qquickwidget_focusoutevent_callback = nullptr;
    QQuickWidget_WheelEvent_Callback qquickwidget_wheelevent_callback = nullptr;
    QQuickWidget_DragEnterEvent_Callback qquickwidget_dragenterevent_callback = nullptr;
    QQuickWidget_DragMoveEvent_Callback qquickwidget_dragmoveevent_callback = nullptr;
    QQuickWidget_DragLeaveEvent_Callback qquickwidget_dragleaveevent_callback = nullptr;
    QQuickWidget_DropEvent_Callback qquickwidget_dropevent_callback = nullptr;
    QQuickWidget_Event_Callback qquickwidget_event_callback = nullptr;
    QQuickWidget_PaintEvent_Callback qquickwidget_paintevent_callback = nullptr;
    QQuickWidget_FocusNextPrevChild_Callback qquickwidget_focusnextprevchild_callback = nullptr;
    QQuickWidget_DevType_Callback qquickwidget_devtype_callback = nullptr;
    QQuickWidget_SetVisible_Callback qquickwidget_setvisible_callback = nullptr;
    QQuickWidget_MinimumSizeHint_Callback qquickwidget_minimumsizehint_callback = nullptr;
    QQuickWidget_HeightForWidth_Callback qquickwidget_heightforwidth_callback = nullptr;
    QQuickWidget_HasHeightForWidth_Callback qquickwidget_hasheightforwidth_callback = nullptr;
    QQuickWidget_PaintEngine_Callback qquickwidget_paintengine_callback = nullptr;
    QQuickWidget_EnterEvent_Callback qquickwidget_enterevent_callback = nullptr;
    QQuickWidget_LeaveEvent_Callback qquickwidget_leaveevent_callback = nullptr;
    QQuickWidget_MoveEvent_Callback qquickwidget_moveevent_callback = nullptr;
    QQuickWidget_CloseEvent_Callback qquickwidget_closeevent_callback = nullptr;
    QQuickWidget_ContextMenuEvent_Callback qquickwidget_contextmenuevent_callback = nullptr;
    QQuickWidget_TabletEvent_Callback qquickwidget_tabletevent_callback = nullptr;
    QQuickWidget_ActionEvent_Callback qquickwidget_actionevent_callback = nullptr;
    QQuickWidget_NativeEvent_Callback qquickwidget_nativeevent_callback = nullptr;
    QQuickWidget_ChangeEvent_Callback qquickwidget_changeevent_callback = nullptr;
    QQuickWidget_Metric_Callback qquickwidget_metric_callback = nullptr;
    QQuickWidget_InitPainter_Callback qquickwidget_initpainter_callback = nullptr;
    QQuickWidget_Redirected_Callback qquickwidget_redirected_callback = nullptr;
    QQuickWidget_SharedPainter_Callback qquickwidget_sharedpainter_callback = nullptr;
    QQuickWidget_InputMethodEvent_Callback qquickwidget_inputmethodevent_callback = nullptr;
    QQuickWidget_InputMethodQuery_Callback qquickwidget_inputmethodquery_callback = nullptr;
    QQuickWidget_EventFilter_Callback qquickwidget_eventfilter_callback = nullptr;
    QQuickWidget_ChildEvent_Callback qquickwidget_childevent_callback = nullptr;
    QQuickWidget_CustomEvent_Callback qquickwidget_customevent_callback = nullptr;
    QQuickWidget_ConnectNotify_Callback qquickwidget_connectnotify_callback = nullptr;
    QQuickWidget_DisconnectNotify_Callback qquickwidget_disconnectnotify_callback = nullptr;
    QQuickWidget_UpdateMicroFocus_Callback qquickwidget_updatemicrofocus_callback = nullptr;
    QQuickWidget_Create_Callback qquickwidget_create_callback = nullptr;
    QQuickWidget_Destroy_Callback qquickwidget_destroy_callback = nullptr;
    QQuickWidget_FocusNextChild_Callback qquickwidget_focusnextchild_callback = nullptr;
    QQuickWidget_FocusPreviousChild_Callback qquickwidget_focuspreviouschild_callback = nullptr;
    QQuickWidget_Sender_Callback qquickwidget_sender_callback = nullptr;
    QQuickWidget_SenderSignalIndex_Callback qquickwidget_sendersignalindex_callback = nullptr;
    QQuickWidget_Receivers_Callback qquickwidget_receivers_callback = nullptr;
    QQuickWidget_IsSignalConnected_Callback qquickwidget_issignalconnected_callback = nullptr;
    QQuickWidget_GetDecodedMetricF_Callback qquickwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qquickwidget_metaobject_isbase = false;
    mutable bool qquickwidget_metacast_isbase = false;
    mutable bool qquickwidget_metacall_isbase = false;
    mutable bool qquickwidget_sizehint_isbase = false;
    mutable bool qquickwidget_resizeevent_isbase = false;
    mutable bool qquickwidget_timerevent_isbase = false;
    mutable bool qquickwidget_keypressevent_isbase = false;
    mutable bool qquickwidget_keyreleaseevent_isbase = false;
    mutable bool qquickwidget_mousepressevent_isbase = false;
    mutable bool qquickwidget_mousereleaseevent_isbase = false;
    mutable bool qquickwidget_mousemoveevent_isbase = false;
    mutable bool qquickwidget_mousedoubleclickevent_isbase = false;
    mutable bool qquickwidget_showevent_isbase = false;
    mutable bool qquickwidget_hideevent_isbase = false;
    mutable bool qquickwidget_focusinevent_isbase = false;
    mutable bool qquickwidget_focusoutevent_isbase = false;
    mutable bool qquickwidget_wheelevent_isbase = false;
    mutable bool qquickwidget_dragenterevent_isbase = false;
    mutable bool qquickwidget_dragmoveevent_isbase = false;
    mutable bool qquickwidget_dragleaveevent_isbase = false;
    mutable bool qquickwidget_dropevent_isbase = false;
    mutable bool qquickwidget_event_isbase = false;
    mutable bool qquickwidget_paintevent_isbase = false;
    mutable bool qquickwidget_focusnextprevchild_isbase = false;
    mutable bool qquickwidget_devtype_isbase = false;
    mutable bool qquickwidget_setvisible_isbase = false;
    mutable bool qquickwidget_minimumsizehint_isbase = false;
    mutable bool qquickwidget_heightforwidth_isbase = false;
    mutable bool qquickwidget_hasheightforwidth_isbase = false;
    mutable bool qquickwidget_paintengine_isbase = false;
    mutable bool qquickwidget_enterevent_isbase = false;
    mutable bool qquickwidget_leaveevent_isbase = false;
    mutable bool qquickwidget_moveevent_isbase = false;
    mutable bool qquickwidget_closeevent_isbase = false;
    mutable bool qquickwidget_contextmenuevent_isbase = false;
    mutable bool qquickwidget_tabletevent_isbase = false;
    mutable bool qquickwidget_actionevent_isbase = false;
    mutable bool qquickwidget_nativeevent_isbase = false;
    mutable bool qquickwidget_changeevent_isbase = false;
    mutable bool qquickwidget_metric_isbase = false;
    mutable bool qquickwidget_initpainter_isbase = false;
    mutable bool qquickwidget_redirected_isbase = false;
    mutable bool qquickwidget_sharedpainter_isbase = false;
    mutable bool qquickwidget_inputmethodevent_isbase = false;
    mutable bool qquickwidget_inputmethodquery_isbase = false;
    mutable bool qquickwidget_eventfilter_isbase = false;
    mutable bool qquickwidget_childevent_isbase = false;
    mutable bool qquickwidget_customevent_isbase = false;
    mutable bool qquickwidget_connectnotify_isbase = false;
    mutable bool qquickwidget_disconnectnotify_isbase = false;
    mutable bool qquickwidget_updatemicrofocus_isbase = false;
    mutable bool qquickwidget_create_isbase = false;
    mutable bool qquickwidget_destroy_isbase = false;
    mutable bool qquickwidget_focusnextchild_isbase = false;
    mutable bool qquickwidget_focuspreviouschild_isbase = false;
    mutable bool qquickwidget_sender_isbase = false;
    mutable bool qquickwidget_sendersignalindex_isbase = false;
    mutable bool qquickwidget_receivers_isbase = false;
    mutable bool qquickwidget_issignalconnected_isbase = false;
    mutable bool qquickwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualQQuickWidget(QWidget* parent) : QQuickWidget(parent) {};
    VirtualQQuickWidget() : QQuickWidget() {};
    VirtualQQuickWidget(QQmlEngine* engine, QWidget* parent) : QQuickWidget(engine, parent) {};
    VirtualQQuickWidget(const QUrl& source) : QQuickWidget(source) {};
    VirtualQQuickWidget(const QUrl& source, QWidget* parent) : QQuickWidget(source, parent) {};

    // Callback setters
    inline void setQQuickWidget_MetaObject_Callback(QQuickWidget_MetaObject_Callback cb) { qquickwidget_metaobject_callback = cb; }
    inline void setQQuickWidget_Metacast_Callback(QQuickWidget_Metacast_Callback cb) { qquickwidget_metacast_callback = cb; }
    inline void setQQuickWidget_Metacall_Callback(QQuickWidget_Metacall_Callback cb) { qquickwidget_metacall_callback = cb; }
    inline void setQQuickWidget_SizeHint_Callback(QQuickWidget_SizeHint_Callback cb) { qquickwidget_sizehint_callback = cb; }
    inline void setQQuickWidget_ResizeEvent_Callback(QQuickWidget_ResizeEvent_Callback cb) { qquickwidget_resizeevent_callback = cb; }
    inline void setQQuickWidget_TimerEvent_Callback(QQuickWidget_TimerEvent_Callback cb) { qquickwidget_timerevent_callback = cb; }
    inline void setQQuickWidget_KeyPressEvent_Callback(QQuickWidget_KeyPressEvent_Callback cb) { qquickwidget_keypressevent_callback = cb; }
    inline void setQQuickWidget_KeyReleaseEvent_Callback(QQuickWidget_KeyReleaseEvent_Callback cb) { qquickwidget_keyreleaseevent_callback = cb; }
    inline void setQQuickWidget_MousePressEvent_Callback(QQuickWidget_MousePressEvent_Callback cb) { qquickwidget_mousepressevent_callback = cb; }
    inline void setQQuickWidget_MouseReleaseEvent_Callback(QQuickWidget_MouseReleaseEvent_Callback cb) { qquickwidget_mousereleaseevent_callback = cb; }
    inline void setQQuickWidget_MouseMoveEvent_Callback(QQuickWidget_MouseMoveEvent_Callback cb) { qquickwidget_mousemoveevent_callback = cb; }
    inline void setQQuickWidget_MouseDoubleClickEvent_Callback(QQuickWidget_MouseDoubleClickEvent_Callback cb) { qquickwidget_mousedoubleclickevent_callback = cb; }
    inline void setQQuickWidget_ShowEvent_Callback(QQuickWidget_ShowEvent_Callback cb) { qquickwidget_showevent_callback = cb; }
    inline void setQQuickWidget_HideEvent_Callback(QQuickWidget_HideEvent_Callback cb) { qquickwidget_hideevent_callback = cb; }
    inline void setQQuickWidget_FocusInEvent_Callback(QQuickWidget_FocusInEvent_Callback cb) { qquickwidget_focusinevent_callback = cb; }
    inline void setQQuickWidget_FocusOutEvent_Callback(QQuickWidget_FocusOutEvent_Callback cb) { qquickwidget_focusoutevent_callback = cb; }
    inline void setQQuickWidget_WheelEvent_Callback(QQuickWidget_WheelEvent_Callback cb) { qquickwidget_wheelevent_callback = cb; }
    inline void setQQuickWidget_DragEnterEvent_Callback(QQuickWidget_DragEnterEvent_Callback cb) { qquickwidget_dragenterevent_callback = cb; }
    inline void setQQuickWidget_DragMoveEvent_Callback(QQuickWidget_DragMoveEvent_Callback cb) { qquickwidget_dragmoveevent_callback = cb; }
    inline void setQQuickWidget_DragLeaveEvent_Callback(QQuickWidget_DragLeaveEvent_Callback cb) { qquickwidget_dragleaveevent_callback = cb; }
    inline void setQQuickWidget_DropEvent_Callback(QQuickWidget_DropEvent_Callback cb) { qquickwidget_dropevent_callback = cb; }
    inline void setQQuickWidget_Event_Callback(QQuickWidget_Event_Callback cb) { qquickwidget_event_callback = cb; }
    inline void setQQuickWidget_PaintEvent_Callback(QQuickWidget_PaintEvent_Callback cb) { qquickwidget_paintevent_callback = cb; }
    inline void setQQuickWidget_FocusNextPrevChild_Callback(QQuickWidget_FocusNextPrevChild_Callback cb) { qquickwidget_focusnextprevchild_callback = cb; }
    inline void setQQuickWidget_DevType_Callback(QQuickWidget_DevType_Callback cb) { qquickwidget_devtype_callback = cb; }
    inline void setQQuickWidget_SetVisible_Callback(QQuickWidget_SetVisible_Callback cb) { qquickwidget_setvisible_callback = cb; }
    inline void setQQuickWidget_MinimumSizeHint_Callback(QQuickWidget_MinimumSizeHint_Callback cb) { qquickwidget_minimumsizehint_callback = cb; }
    inline void setQQuickWidget_HeightForWidth_Callback(QQuickWidget_HeightForWidth_Callback cb) { qquickwidget_heightforwidth_callback = cb; }
    inline void setQQuickWidget_HasHeightForWidth_Callback(QQuickWidget_HasHeightForWidth_Callback cb) { qquickwidget_hasheightforwidth_callback = cb; }
    inline void setQQuickWidget_PaintEngine_Callback(QQuickWidget_PaintEngine_Callback cb) { qquickwidget_paintengine_callback = cb; }
    inline void setQQuickWidget_EnterEvent_Callback(QQuickWidget_EnterEvent_Callback cb) { qquickwidget_enterevent_callback = cb; }
    inline void setQQuickWidget_LeaveEvent_Callback(QQuickWidget_LeaveEvent_Callback cb) { qquickwidget_leaveevent_callback = cb; }
    inline void setQQuickWidget_MoveEvent_Callback(QQuickWidget_MoveEvent_Callback cb) { qquickwidget_moveevent_callback = cb; }
    inline void setQQuickWidget_CloseEvent_Callback(QQuickWidget_CloseEvent_Callback cb) { qquickwidget_closeevent_callback = cb; }
    inline void setQQuickWidget_ContextMenuEvent_Callback(QQuickWidget_ContextMenuEvent_Callback cb) { qquickwidget_contextmenuevent_callback = cb; }
    inline void setQQuickWidget_TabletEvent_Callback(QQuickWidget_TabletEvent_Callback cb) { qquickwidget_tabletevent_callback = cb; }
    inline void setQQuickWidget_ActionEvent_Callback(QQuickWidget_ActionEvent_Callback cb) { qquickwidget_actionevent_callback = cb; }
    inline void setQQuickWidget_NativeEvent_Callback(QQuickWidget_NativeEvent_Callback cb) { qquickwidget_nativeevent_callback = cb; }
    inline void setQQuickWidget_ChangeEvent_Callback(QQuickWidget_ChangeEvent_Callback cb) { qquickwidget_changeevent_callback = cb; }
    inline void setQQuickWidget_Metric_Callback(QQuickWidget_Metric_Callback cb) { qquickwidget_metric_callback = cb; }
    inline void setQQuickWidget_InitPainter_Callback(QQuickWidget_InitPainter_Callback cb) { qquickwidget_initpainter_callback = cb; }
    inline void setQQuickWidget_Redirected_Callback(QQuickWidget_Redirected_Callback cb) { qquickwidget_redirected_callback = cb; }
    inline void setQQuickWidget_SharedPainter_Callback(QQuickWidget_SharedPainter_Callback cb) { qquickwidget_sharedpainter_callback = cb; }
    inline void setQQuickWidget_InputMethodEvent_Callback(QQuickWidget_InputMethodEvent_Callback cb) { qquickwidget_inputmethodevent_callback = cb; }
    inline void setQQuickWidget_InputMethodQuery_Callback(QQuickWidget_InputMethodQuery_Callback cb) { qquickwidget_inputmethodquery_callback = cb; }
    inline void setQQuickWidget_EventFilter_Callback(QQuickWidget_EventFilter_Callback cb) { qquickwidget_eventfilter_callback = cb; }
    inline void setQQuickWidget_ChildEvent_Callback(QQuickWidget_ChildEvent_Callback cb) { qquickwidget_childevent_callback = cb; }
    inline void setQQuickWidget_CustomEvent_Callback(QQuickWidget_CustomEvent_Callback cb) { qquickwidget_customevent_callback = cb; }
    inline void setQQuickWidget_ConnectNotify_Callback(QQuickWidget_ConnectNotify_Callback cb) { qquickwidget_connectnotify_callback = cb; }
    inline void setQQuickWidget_DisconnectNotify_Callback(QQuickWidget_DisconnectNotify_Callback cb) { qquickwidget_disconnectnotify_callback = cb; }
    inline void setQQuickWidget_UpdateMicroFocus_Callback(QQuickWidget_UpdateMicroFocus_Callback cb) { qquickwidget_updatemicrofocus_callback = cb; }
    inline void setQQuickWidget_Create_Callback(QQuickWidget_Create_Callback cb) { qquickwidget_create_callback = cb; }
    inline void setQQuickWidget_Destroy_Callback(QQuickWidget_Destroy_Callback cb) { qquickwidget_destroy_callback = cb; }
    inline void setQQuickWidget_FocusNextChild_Callback(QQuickWidget_FocusNextChild_Callback cb) { qquickwidget_focusnextchild_callback = cb; }
    inline void setQQuickWidget_FocusPreviousChild_Callback(QQuickWidget_FocusPreviousChild_Callback cb) { qquickwidget_focuspreviouschild_callback = cb; }
    inline void setQQuickWidget_Sender_Callback(QQuickWidget_Sender_Callback cb) { qquickwidget_sender_callback = cb; }
    inline void setQQuickWidget_SenderSignalIndex_Callback(QQuickWidget_SenderSignalIndex_Callback cb) { qquickwidget_sendersignalindex_callback = cb; }
    inline void setQQuickWidget_Receivers_Callback(QQuickWidget_Receivers_Callback cb) { qquickwidget_receivers_callback = cb; }
    inline void setQQuickWidget_IsSignalConnected_Callback(QQuickWidget_IsSignalConnected_Callback cb) { qquickwidget_issignalconnected_callback = cb; }
    inline void setQQuickWidget_GetDecodedMetricF_Callback(QQuickWidget_GetDecodedMetricF_Callback cb) { qquickwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQQuickWidget_MetaObject_IsBase(bool value) const { qquickwidget_metaobject_isbase = value; }
    inline void setQQuickWidget_Metacast_IsBase(bool value) const { qquickwidget_metacast_isbase = value; }
    inline void setQQuickWidget_Metacall_IsBase(bool value) const { qquickwidget_metacall_isbase = value; }
    inline void setQQuickWidget_SizeHint_IsBase(bool value) const { qquickwidget_sizehint_isbase = value; }
    inline void setQQuickWidget_ResizeEvent_IsBase(bool value) const { qquickwidget_resizeevent_isbase = value; }
    inline void setQQuickWidget_TimerEvent_IsBase(bool value) const { qquickwidget_timerevent_isbase = value; }
    inline void setQQuickWidget_KeyPressEvent_IsBase(bool value) const { qquickwidget_keypressevent_isbase = value; }
    inline void setQQuickWidget_KeyReleaseEvent_IsBase(bool value) const { qquickwidget_keyreleaseevent_isbase = value; }
    inline void setQQuickWidget_MousePressEvent_IsBase(bool value) const { qquickwidget_mousepressevent_isbase = value; }
    inline void setQQuickWidget_MouseReleaseEvent_IsBase(bool value) const { qquickwidget_mousereleaseevent_isbase = value; }
    inline void setQQuickWidget_MouseMoveEvent_IsBase(bool value) const { qquickwidget_mousemoveevent_isbase = value; }
    inline void setQQuickWidget_MouseDoubleClickEvent_IsBase(bool value) const { qquickwidget_mousedoubleclickevent_isbase = value; }
    inline void setQQuickWidget_ShowEvent_IsBase(bool value) const { qquickwidget_showevent_isbase = value; }
    inline void setQQuickWidget_HideEvent_IsBase(bool value) const { qquickwidget_hideevent_isbase = value; }
    inline void setQQuickWidget_FocusInEvent_IsBase(bool value) const { qquickwidget_focusinevent_isbase = value; }
    inline void setQQuickWidget_FocusOutEvent_IsBase(bool value) const { qquickwidget_focusoutevent_isbase = value; }
    inline void setQQuickWidget_WheelEvent_IsBase(bool value) const { qquickwidget_wheelevent_isbase = value; }
    inline void setQQuickWidget_DragEnterEvent_IsBase(bool value) const { qquickwidget_dragenterevent_isbase = value; }
    inline void setQQuickWidget_DragMoveEvent_IsBase(bool value) const { qquickwidget_dragmoveevent_isbase = value; }
    inline void setQQuickWidget_DragLeaveEvent_IsBase(bool value) const { qquickwidget_dragleaveevent_isbase = value; }
    inline void setQQuickWidget_DropEvent_IsBase(bool value) const { qquickwidget_dropevent_isbase = value; }
    inline void setQQuickWidget_Event_IsBase(bool value) const { qquickwidget_event_isbase = value; }
    inline void setQQuickWidget_PaintEvent_IsBase(bool value) const { qquickwidget_paintevent_isbase = value; }
    inline void setQQuickWidget_FocusNextPrevChild_IsBase(bool value) const { qquickwidget_focusnextprevchild_isbase = value; }
    inline void setQQuickWidget_DevType_IsBase(bool value) const { qquickwidget_devtype_isbase = value; }
    inline void setQQuickWidget_SetVisible_IsBase(bool value) const { qquickwidget_setvisible_isbase = value; }
    inline void setQQuickWidget_MinimumSizeHint_IsBase(bool value) const { qquickwidget_minimumsizehint_isbase = value; }
    inline void setQQuickWidget_HeightForWidth_IsBase(bool value) const { qquickwidget_heightforwidth_isbase = value; }
    inline void setQQuickWidget_HasHeightForWidth_IsBase(bool value) const { qquickwidget_hasheightforwidth_isbase = value; }
    inline void setQQuickWidget_PaintEngine_IsBase(bool value) const { qquickwidget_paintengine_isbase = value; }
    inline void setQQuickWidget_EnterEvent_IsBase(bool value) const { qquickwidget_enterevent_isbase = value; }
    inline void setQQuickWidget_LeaveEvent_IsBase(bool value) const { qquickwidget_leaveevent_isbase = value; }
    inline void setQQuickWidget_MoveEvent_IsBase(bool value) const { qquickwidget_moveevent_isbase = value; }
    inline void setQQuickWidget_CloseEvent_IsBase(bool value) const { qquickwidget_closeevent_isbase = value; }
    inline void setQQuickWidget_ContextMenuEvent_IsBase(bool value) const { qquickwidget_contextmenuevent_isbase = value; }
    inline void setQQuickWidget_TabletEvent_IsBase(bool value) const { qquickwidget_tabletevent_isbase = value; }
    inline void setQQuickWidget_ActionEvent_IsBase(bool value) const { qquickwidget_actionevent_isbase = value; }
    inline void setQQuickWidget_NativeEvent_IsBase(bool value) const { qquickwidget_nativeevent_isbase = value; }
    inline void setQQuickWidget_ChangeEvent_IsBase(bool value) const { qquickwidget_changeevent_isbase = value; }
    inline void setQQuickWidget_Metric_IsBase(bool value) const { qquickwidget_metric_isbase = value; }
    inline void setQQuickWidget_InitPainter_IsBase(bool value) const { qquickwidget_initpainter_isbase = value; }
    inline void setQQuickWidget_Redirected_IsBase(bool value) const { qquickwidget_redirected_isbase = value; }
    inline void setQQuickWidget_SharedPainter_IsBase(bool value) const { qquickwidget_sharedpainter_isbase = value; }
    inline void setQQuickWidget_InputMethodEvent_IsBase(bool value) const { qquickwidget_inputmethodevent_isbase = value; }
    inline void setQQuickWidget_InputMethodQuery_IsBase(bool value) const { qquickwidget_inputmethodquery_isbase = value; }
    inline void setQQuickWidget_EventFilter_IsBase(bool value) const { qquickwidget_eventfilter_isbase = value; }
    inline void setQQuickWidget_ChildEvent_IsBase(bool value) const { qquickwidget_childevent_isbase = value; }
    inline void setQQuickWidget_CustomEvent_IsBase(bool value) const { qquickwidget_customevent_isbase = value; }
    inline void setQQuickWidget_ConnectNotify_IsBase(bool value) const { qquickwidget_connectnotify_isbase = value; }
    inline void setQQuickWidget_DisconnectNotify_IsBase(bool value) const { qquickwidget_disconnectnotify_isbase = value; }
    inline void setQQuickWidget_UpdateMicroFocus_IsBase(bool value) const { qquickwidget_updatemicrofocus_isbase = value; }
    inline void setQQuickWidget_Create_IsBase(bool value) const { qquickwidget_create_isbase = value; }
    inline void setQQuickWidget_Destroy_IsBase(bool value) const { qquickwidget_destroy_isbase = value; }
    inline void setQQuickWidget_FocusNextChild_IsBase(bool value) const { qquickwidget_focusnextchild_isbase = value; }
    inline void setQQuickWidget_FocusPreviousChild_IsBase(bool value) const { qquickwidget_focuspreviouschild_isbase = value; }
    inline void setQQuickWidget_Sender_IsBase(bool value) const { qquickwidget_sender_isbase = value; }
    inline void setQQuickWidget_SenderSignalIndex_IsBase(bool value) const { qquickwidget_sendersignalindex_isbase = value; }
    inline void setQQuickWidget_Receivers_IsBase(bool value) const { qquickwidget_receivers_isbase = value; }
    inline void setQQuickWidget_IsSignalConnected_IsBase(bool value) const { qquickwidget_issignalconnected_isbase = value; }
    inline void setQQuickWidget_GetDecodedMetricF_IsBase(bool value) const { qquickwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickwidget_metaobject_isbase) {
            qquickwidget_metaobject_isbase = false;
            return QQuickWidget::metaObject();
        }
        auto metaobject_cb = qquickwidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQuickWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickwidget_metacast_isbase) {
            qquickwidget_metacast_isbase = false;
            return QQuickWidget::qt_metacast(param1);
        }
        auto metacast_cb = qquickwidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickwidget_metacall_isbase) {
            qquickwidget_metacall_isbase = false;
            return QQuickWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qquickwidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qquickwidget_sizehint_isbase) {
            qquickwidget_sizehint_isbase = false;
            return QQuickWidget::sizeHint();
        }
        auto sizehint_cb = qquickwidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qquickwidget_resizeevent_isbase) {
            qquickwidget_resizeevent_isbase = false;
            QQuickWidget::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = qquickwidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;
            resizeevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qquickwidget_timerevent_isbase) {
            qquickwidget_timerevent_isbase = false;
            QQuickWidget::timerEvent(param1);
            return;
        }
        auto timerevent_cb = qquickwidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = param1;
            timerevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qquickwidget_keypressevent_isbase) {
            qquickwidget_keypressevent_isbase = false;
            QQuickWidget::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = qquickwidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;
            keypressevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (qquickwidget_keyreleaseevent_isbase) {
            qquickwidget_keyreleaseevent_isbase = false;
            QQuickWidget::keyReleaseEvent(param1);
            return;
        }
        auto keyreleaseevent_cb = qquickwidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = param1;
            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qquickwidget_mousepressevent_isbase) {
            qquickwidget_mousepressevent_isbase = false;
            QQuickWidget::mousePressEvent(param1);
            return;
        }
        auto mousepressevent_cb = qquickwidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = param1;
            mousepressevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qquickwidget_mousereleaseevent_isbase) {
            qquickwidget_mousereleaseevent_isbase = false;
            QQuickWidget::mouseReleaseEvent(param1);
            return;
        }
        auto mousereleaseevent_cb = qquickwidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = param1;
            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qquickwidget_mousemoveevent_isbase) {
            qquickwidget_mousemoveevent_isbase = false;
            QQuickWidget::mouseMoveEvent(param1);
            return;
        }
        auto mousemoveevent_cb = qquickwidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = param1;
            mousemoveevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qquickwidget_mousedoubleclickevent_isbase) {
            qquickwidget_mousedoubleclickevent_isbase = false;
            QQuickWidget::mouseDoubleClickEvent(param1);
            return;
        }
        auto mousedoubleclickevent_cb = qquickwidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = param1;
            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qquickwidget_showevent_isbase) {
            qquickwidget_showevent_isbase = false;
            QQuickWidget::showEvent(param1);
            return;
        }
        auto showevent_cb = qquickwidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;
            showevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qquickwidget_hideevent_isbase) {
            qquickwidget_hideevent_isbase = false;
            QQuickWidget::hideEvent(param1);
            return;
        }
        auto hideevent_cb = qquickwidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = param1;
            hideevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qquickwidget_focusinevent_isbase) {
            qquickwidget_focusinevent_isbase = false;
            QQuickWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qquickwidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;
            focusinevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qquickwidget_focusoutevent_isbase) {
            qquickwidget_focusoutevent_isbase = false;
            QQuickWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qquickwidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;
            focusoutevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qquickwidget_wheelevent_isbase) {
            qquickwidget_wheelevent_isbase = false;
            QQuickWidget::wheelEvent(param1);
            return;
        }
        auto wheelevent_cb = qquickwidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = param1;
            wheelevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qquickwidget_dragenterevent_isbase) {
            qquickwidget_dragenterevent_isbase = false;
            QQuickWidget::dragEnterEvent(param1);
            return;
        }
        auto dragenterevent_cb = qquickwidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = param1;
            dragenterevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (qquickwidget_dragmoveevent_isbase) {
            qquickwidget_dragmoveevent_isbase = false;
            QQuickWidget::dragMoveEvent(param1);
            return;
        }
        auto dragmoveevent_cb = qquickwidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = param1;
            dragmoveevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::dragMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (qquickwidget_dragleaveevent_isbase) {
            qquickwidget_dragleaveevent_isbase = false;
            QQuickWidget::dragLeaveEvent(param1);
            return;
        }
        auto dragleaveevent_cb = qquickwidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = param1;
            dragleaveevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::dragLeaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qquickwidget_dropevent_isbase) {
            qquickwidget_dropevent_isbase = false;
            QQuickWidget::dropEvent(param1);
            return;
        }
        auto dropevent_cb = qquickwidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = param1;
            dropevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qquickwidget_event_isbase) {
            qquickwidget_event_isbase = false;
            return QQuickWidget::event(param1);
        }
        auto event_cb = qquickwidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickWidget::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qquickwidget_paintevent_isbase) {
            qquickwidget_paintevent_isbase = false;
            QQuickWidget::paintEvent(event);
            return;
        }
        auto paintevent_cb = qquickwidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;
            paintevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qquickwidget_focusnextprevchild_isbase) {
            qquickwidget_focusnextprevchild_isbase = false;
            return QQuickWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qquickwidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;
            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qquickwidget_devtype_isbase) {
            qquickwidget_devtype_isbase = false;
            return QQuickWidget::devType();
        }
        auto devtype_cb = qquickwidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QQuickWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qquickwidget_setvisible_isbase) {
            qquickwidget_setvisible_isbase = false;
            QQuickWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = qquickwidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;
            setvisible_cb(this, cbval1);
            return;
        }
        QQuickWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qquickwidget_minimumsizehint_isbase) {
            qquickwidget_minimumsizehint_isbase = false;
            return QQuickWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = qquickwidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qquickwidget_heightforwidth_isbase) {
            qquickwidget_heightforwidth_isbase = false;
            return QQuickWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = qquickwidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;
            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuickWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qquickwidget_hasheightforwidth_isbase) {
            qquickwidget_hasheightforwidth_isbase = false;
            return QQuickWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qquickwidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QQuickWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qquickwidget_paintengine_isbase) {
            qquickwidget_paintengine_isbase = false;
            return QQuickWidget::paintEngine();
        }
        auto paintengine_cb = qquickwidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QQuickWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qquickwidget_enterevent_isbase) {
            qquickwidget_enterevent_isbase = false;
            QQuickWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = qquickwidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;
            enterevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qquickwidget_leaveevent_isbase) {
            qquickwidget_leaveevent_isbase = false;
            QQuickWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qquickwidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;
            leaveevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qquickwidget_moveevent_isbase) {
            qquickwidget_moveevent_isbase = false;
            QQuickWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = qquickwidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;
            moveevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qquickwidget_closeevent_isbase) {
            qquickwidget_closeevent_isbase = false;
            QQuickWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = qquickwidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;
            closeevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qquickwidget_contextmenuevent_isbase) {
            qquickwidget_contextmenuevent_isbase = false;
            QQuickWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qquickwidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;
            contextmenuevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qquickwidget_tabletevent_isbase) {
            qquickwidget_tabletevent_isbase = false;
            QQuickWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qquickwidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;
            tabletevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qquickwidget_actionevent_isbase) {
            qquickwidget_actionevent_isbase = false;
            QQuickWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = qquickwidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;
            actionevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qquickwidget_nativeevent_isbase) {
            qquickwidget_nativeevent_isbase = false;
            return QQuickWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qquickwidget_nativeevent_callback;
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
        return QQuickWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qquickwidget_changeevent_isbase) {
            qquickwidget_changeevent_isbase = false;
            QQuickWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qquickwidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;
            changeevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qquickwidget_metric_isbase) {
            qquickwidget_metric_isbase = false;
            return QQuickWidget::metric(param1);
        }
        auto metric_cb = qquickwidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuickWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qquickwidget_initpainter_isbase) {
            qquickwidget_initpainter_isbase = false;
            QQuickWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = qquickwidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;
            initpainter_cb(this, cbval1);
            return;
        }
        QQuickWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qquickwidget_redirected_isbase) {
            qquickwidget_redirected_isbase = false;
            return QQuickWidget::redirected(offset);
        }
        auto redirected_cb = qquickwidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qquickwidget_sharedpainter_isbase) {
            qquickwidget_sharedpainter_isbase = false;
            return QQuickWidget::sharedPainter();
        }
        auto sharedpainter_cb = qquickwidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QQuickWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qquickwidget_inputmethodevent_isbase) {
            qquickwidget_inputmethodevent_isbase = false;
            QQuickWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qquickwidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;
            inputmethodevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qquickwidget_inputmethodquery_isbase) {
            qquickwidget_inputmethodquery_isbase = false;
            return QQuickWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qquickwidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickwidget_eventfilter_isbase) {
            qquickwidget_eventfilter_isbase = false;
            return QQuickWidget::eventFilter(watched, event);
        }
        auto eventfilter_cb = qquickwidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickwidget_childevent_isbase) {
            qquickwidget_childevent_isbase = false;
            QQuickWidget::childEvent(event);
            return;
        }
        auto childevent_cb = qquickwidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickwidget_customevent_isbase) {
            qquickwidget_customevent_isbase = false;
            QQuickWidget::customEvent(event);
            return;
        }
        auto customevent_cb = qquickwidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQuickWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickwidget_connectnotify_isbase) {
            qquickwidget_connectnotify_isbase = false;
            QQuickWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qquickwidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQuickWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickwidget_disconnectnotify_isbase) {
            qquickwidget_disconnectnotify_isbase = false;
            QQuickWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qquickwidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQuickWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qquickwidget_updatemicrofocus_isbase) {
            qquickwidget_updatemicrofocus_isbase = false;
            QQuickWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qquickwidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QQuickWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qquickwidget_create_isbase) {
            qquickwidget_create_isbase = false;
            QQuickWidget::create();
            return;
        }
        auto create_cb = qquickwidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QQuickWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qquickwidget_destroy_isbase) {
            qquickwidget_destroy_isbase = false;
            QQuickWidget::destroy();
            return;
        }
        auto destroy_cb = qquickwidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QQuickWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qquickwidget_focusnextchild_isbase) {
            qquickwidget_focusnextchild_isbase = false;
            return QQuickWidget::focusNextChild();
        }
        auto focusnextchild_cb = qquickwidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QQuickWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qquickwidget_focuspreviouschild_isbase) {
            qquickwidget_focuspreviouschild_isbase = false;
            return QQuickWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qquickwidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QQuickWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qquickwidget_sender_isbase) {
            qquickwidget_sender_isbase = false;
            return QQuickWidget::sender();
        }
        auto sender_cb = qquickwidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQuickWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qquickwidget_sendersignalindex_isbase) {
            qquickwidget_sendersignalindex_isbase = false;
            return QQuickWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = qquickwidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQuickWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qquickwidget_receivers_isbase) {
            qquickwidget_receivers_isbase = false;
            return QQuickWidget::receivers(signal);
        }
        auto receivers_cb = qquickwidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuickWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qquickwidget_issignalconnected_isbase) {
            qquickwidget_issignalconnected_isbase = false;
            return QQuickWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qquickwidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qquickwidget_getdecodedmetricf_isbase) {
            qquickwidget_getdecodedmetricf_isbase = false;
            return QQuickWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qquickwidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);
            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QQuickWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void QQuickWidget_ResizeEvent(QQuickWidget* self, QResizeEvent* param1);
    friend void QQuickWidget_SuperResizeEvent(QQuickWidget* self, QResizeEvent* param1);
    friend void QQuickWidget_TimerEvent(QQuickWidget* self, QTimerEvent* param1);
    friend void QQuickWidget_SuperTimerEvent(QQuickWidget* self, QTimerEvent* param1);
    friend void QQuickWidget_KeyPressEvent(QQuickWidget* self, QKeyEvent* param1);
    friend void QQuickWidget_SuperKeyPressEvent(QQuickWidget* self, QKeyEvent* param1);
    friend void QQuickWidget_KeyReleaseEvent(QQuickWidget* self, QKeyEvent* param1);
    friend void QQuickWidget_SuperKeyReleaseEvent(QQuickWidget* self, QKeyEvent* param1);
    friend void QQuickWidget_MousePressEvent(QQuickWidget* self, QMouseEvent* param1);
    friend void QQuickWidget_SuperMousePressEvent(QQuickWidget* self, QMouseEvent* param1);
    friend void QQuickWidget_MouseReleaseEvent(QQuickWidget* self, QMouseEvent* param1);
    friend void QQuickWidget_SuperMouseReleaseEvent(QQuickWidget* self, QMouseEvent* param1);
    friend void QQuickWidget_MouseMoveEvent(QQuickWidget* self, QMouseEvent* param1);
    friend void QQuickWidget_SuperMouseMoveEvent(QQuickWidget* self, QMouseEvent* param1);
    friend void QQuickWidget_MouseDoubleClickEvent(QQuickWidget* self, QMouseEvent* param1);
    friend void QQuickWidget_SuperMouseDoubleClickEvent(QQuickWidget* self, QMouseEvent* param1);
    friend void QQuickWidget_ShowEvent(QQuickWidget* self, QShowEvent* param1);
    friend void QQuickWidget_SuperShowEvent(QQuickWidget* self, QShowEvent* param1);
    friend void QQuickWidget_HideEvent(QQuickWidget* self, QHideEvent* param1);
    friend void QQuickWidget_SuperHideEvent(QQuickWidget* self, QHideEvent* param1);
    friend void QQuickWidget_FocusInEvent(QQuickWidget* self, QFocusEvent* event);
    friend void QQuickWidget_SuperFocusInEvent(QQuickWidget* self, QFocusEvent* event);
    friend void QQuickWidget_FocusOutEvent(QQuickWidget* self, QFocusEvent* event);
    friend void QQuickWidget_SuperFocusOutEvent(QQuickWidget* self, QFocusEvent* event);
    friend void QQuickWidget_WheelEvent(QQuickWidget* self, QWheelEvent* param1);
    friend void QQuickWidget_SuperWheelEvent(QQuickWidget* self, QWheelEvent* param1);
    friend void QQuickWidget_DragEnterEvent(QQuickWidget* self, QDragEnterEvent* param1);
    friend void QQuickWidget_SuperDragEnterEvent(QQuickWidget* self, QDragEnterEvent* param1);
    friend void QQuickWidget_DragMoveEvent(QQuickWidget* self, QDragMoveEvent* param1);
    friend void QQuickWidget_SuperDragMoveEvent(QQuickWidget* self, QDragMoveEvent* param1);
    friend void QQuickWidget_DragLeaveEvent(QQuickWidget* self, QDragLeaveEvent* param1);
    friend void QQuickWidget_SuperDragLeaveEvent(QQuickWidget* self, QDragLeaveEvent* param1);
    friend void QQuickWidget_DropEvent(QQuickWidget* self, QDropEvent* param1);
    friend void QQuickWidget_SuperDropEvent(QQuickWidget* self, QDropEvent* param1);
    friend bool QQuickWidget_Event(QQuickWidget* self, QEvent* param1);
    friend bool QQuickWidget_SuperEvent(QQuickWidget* self, QEvent* param1);
    friend void QQuickWidget_PaintEvent(QQuickWidget* self, QPaintEvent* event);
    friend void QQuickWidget_SuperPaintEvent(QQuickWidget* self, QPaintEvent* event);
    friend bool QQuickWidget_FocusNextPrevChild(QQuickWidget* self, bool next);
    friend bool QQuickWidget_SuperFocusNextPrevChild(QQuickWidget* self, bool next);
    friend void QQuickWidget_EnterEvent(QQuickWidget* self, QEnterEvent* event);
    friend void QQuickWidget_SuperEnterEvent(QQuickWidget* self, QEnterEvent* event);
    friend void QQuickWidget_LeaveEvent(QQuickWidget* self, QEvent* event);
    friend void QQuickWidget_SuperLeaveEvent(QQuickWidget* self, QEvent* event);
    friend void QQuickWidget_MoveEvent(QQuickWidget* self, QMoveEvent* event);
    friend void QQuickWidget_SuperMoveEvent(QQuickWidget* self, QMoveEvent* event);
    friend void QQuickWidget_CloseEvent(QQuickWidget* self, QCloseEvent* event);
    friend void QQuickWidget_SuperCloseEvent(QQuickWidget* self, QCloseEvent* event);
    friend void QQuickWidget_ContextMenuEvent(QQuickWidget* self, QContextMenuEvent* event);
    friend void QQuickWidget_SuperContextMenuEvent(QQuickWidget* self, QContextMenuEvent* event);
    friend void QQuickWidget_TabletEvent(QQuickWidget* self, QTabletEvent* event);
    friend void QQuickWidget_SuperTabletEvent(QQuickWidget* self, QTabletEvent* event);
    friend void QQuickWidget_ActionEvent(QQuickWidget* self, QActionEvent* event);
    friend void QQuickWidget_SuperActionEvent(QQuickWidget* self, QActionEvent* event);
    friend bool QQuickWidget_NativeEvent(QQuickWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QQuickWidget_SuperNativeEvent(QQuickWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QQuickWidget_ChangeEvent(QQuickWidget* self, QEvent* param1);
    friend void QQuickWidget_SuperChangeEvent(QQuickWidget* self, QEvent* param1);
    friend int QQuickWidget_Metric(const QQuickWidget* self, int param1);
    friend int QQuickWidget_SuperMetric(const QQuickWidget* self, int param1);
    friend void QQuickWidget_InitPainter(const QQuickWidget* self, QPainter* painter);
    friend void QQuickWidget_SuperInitPainter(const QQuickWidget* self, QPainter* painter);
    friend QPaintDevice* QQuickWidget_Redirected(const QQuickWidget* self, QPoint* offset);
    friend QPaintDevice* QQuickWidget_SuperRedirected(const QQuickWidget* self, QPoint* offset);
    friend QPainter* QQuickWidget_SharedPainter(const QQuickWidget* self);
    friend QPainter* QQuickWidget_SuperSharedPainter(const QQuickWidget* self);
    friend void QQuickWidget_InputMethodEvent(QQuickWidget* self, QInputMethodEvent* param1);
    friend void QQuickWidget_SuperInputMethodEvent(QQuickWidget* self, QInputMethodEvent* param1);
    friend void QQuickWidget_ChildEvent(QQuickWidget* self, QChildEvent* event);
    friend void QQuickWidget_SuperChildEvent(QQuickWidget* self, QChildEvent* event);
    friend void QQuickWidget_CustomEvent(QQuickWidget* self, QEvent* event);
    friend void QQuickWidget_SuperCustomEvent(QQuickWidget* self, QEvent* event);
    friend void QQuickWidget_ConnectNotify(QQuickWidget* self, const QMetaMethod* signal);
    friend void QQuickWidget_SuperConnectNotify(QQuickWidget* self, const QMetaMethod* signal);
    friend void QQuickWidget_DisconnectNotify(QQuickWidget* self, const QMetaMethod* signal);
    friend void QQuickWidget_SuperDisconnectNotify(QQuickWidget* self, const QMetaMethod* signal);
    friend void QQuickWidget_UpdateMicroFocus(QQuickWidget* self);
    friend void QQuickWidget_SuperUpdateMicroFocus(QQuickWidget* self);
    friend void QQuickWidget_Create(QQuickWidget* self);
    friend void QQuickWidget_SuperCreate(QQuickWidget* self);
    friend void QQuickWidget_Destroy(QQuickWidget* self);
    friend void QQuickWidget_SuperDestroy(QQuickWidget* self);
    friend bool QQuickWidget_FocusNextChild(QQuickWidget* self);
    friend bool QQuickWidget_SuperFocusNextChild(QQuickWidget* self);
    friend bool QQuickWidget_FocusPreviousChild(QQuickWidget* self);
    friend bool QQuickWidget_SuperFocusPreviousChild(QQuickWidget* self);
    friend QObject* QQuickWidget_Sender(const QQuickWidget* self);
    friend QObject* QQuickWidget_SuperSender(const QQuickWidget* self);
    friend int QQuickWidget_SenderSignalIndex(const QQuickWidget* self);
    friend int QQuickWidget_SuperSenderSignalIndex(const QQuickWidget* self);
    friend int QQuickWidget_Receivers(const QQuickWidget* self, const char* signal);
    friend int QQuickWidget_SuperReceivers(const QQuickWidget* self, const char* signal);
    friend bool QQuickWidget_IsSignalConnected(const QQuickWidget* self, const QMetaMethod* signal);
    friend bool QQuickWidget_SuperIsSignalConnected(const QQuickWidget* self, const QMetaMethod* signal);
    friend double QQuickWidget_GetDecodedMetricF(const QQuickWidget* self, int metricA, int metricB);
    friend double QQuickWidget_SuperGetDecodedMetricF(const QQuickWidget* self, int metricA, int metricB);
};

#endif
