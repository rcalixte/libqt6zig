#pragma once
#ifndef SRCC_LIBVIRTUALQSTACKEDWIDGET_H
#define SRCC_LIBVIRTUALQSTACKEDWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QStackedWidget so that we can call protected methods
class VirtualQStackedWidget final : public QStackedWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualQStackedWidget = true;

    // Virtual class public types (including callbacks)
    using QStackedWidget_MetaObject_Callback = QMetaObject* (*)();
    using QStackedWidget_Metacast_Callback = void* (*)(QStackedWidget*, const char*);
    using QStackedWidget_Metacall_Callback = int (*)(QStackedWidget*, int, int, void**);
    using QStackedWidget_Event_Callback = bool (*)(QStackedWidget*, QEvent*);
    using QStackedWidget_SizeHint_Callback = QSize* (*)();
    using QStackedWidget_PaintEvent_Callback = void (*)(QStackedWidget*, QPaintEvent*);
    using QStackedWidget_ChangeEvent_Callback = void (*)(QStackedWidget*, QEvent*);
    using QStackedWidget_InitStyleOption_Callback = void (*)(const QStackedWidget*, QStyleOptionFrame*);
    using QStackedWidget_DevType_Callback = int (*)();
    using QStackedWidget_SetVisible_Callback = void (*)(QStackedWidget*, bool);
    using QStackedWidget_MinimumSizeHint_Callback = QSize* (*)();
    using QStackedWidget_HeightForWidth_Callback = int (*)(const QStackedWidget*, int);
    using QStackedWidget_HasHeightForWidth_Callback = bool (*)();
    using QStackedWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using QStackedWidget_MousePressEvent_Callback = void (*)(QStackedWidget*, QMouseEvent*);
    using QStackedWidget_MouseReleaseEvent_Callback = void (*)(QStackedWidget*, QMouseEvent*);
    using QStackedWidget_MouseDoubleClickEvent_Callback = void (*)(QStackedWidget*, QMouseEvent*);
    using QStackedWidget_MouseMoveEvent_Callback = void (*)(QStackedWidget*, QMouseEvent*);
    using QStackedWidget_WheelEvent_Callback = void (*)(QStackedWidget*, QWheelEvent*);
    using QStackedWidget_KeyPressEvent_Callback = void (*)(QStackedWidget*, QKeyEvent*);
    using QStackedWidget_KeyReleaseEvent_Callback = void (*)(QStackedWidget*, QKeyEvent*);
    using QStackedWidget_FocusInEvent_Callback = void (*)(QStackedWidget*, QFocusEvent*);
    using QStackedWidget_FocusOutEvent_Callback = void (*)(QStackedWidget*, QFocusEvent*);
    using QStackedWidget_EnterEvent_Callback = void (*)(QStackedWidget*, QEnterEvent*);
    using QStackedWidget_LeaveEvent_Callback = void (*)(QStackedWidget*, QEvent*);
    using QStackedWidget_MoveEvent_Callback = void (*)(QStackedWidget*, QMoveEvent*);
    using QStackedWidget_ResizeEvent_Callback = void (*)(QStackedWidget*, QResizeEvent*);
    using QStackedWidget_CloseEvent_Callback = void (*)(QStackedWidget*, QCloseEvent*);
    using QStackedWidget_ContextMenuEvent_Callback = void (*)(QStackedWidget*, QContextMenuEvent*);
    using QStackedWidget_TabletEvent_Callback = void (*)(QStackedWidget*, QTabletEvent*);
    using QStackedWidget_ActionEvent_Callback = void (*)(QStackedWidget*, QActionEvent*);
    using QStackedWidget_DragEnterEvent_Callback = void (*)(QStackedWidget*, QDragEnterEvent*);
    using QStackedWidget_DragMoveEvent_Callback = void (*)(QStackedWidget*, QDragMoveEvent*);
    using QStackedWidget_DragLeaveEvent_Callback = void (*)(QStackedWidget*, QDragLeaveEvent*);
    using QStackedWidget_DropEvent_Callback = void (*)(QStackedWidget*, QDropEvent*);
    using QStackedWidget_ShowEvent_Callback = void (*)(QStackedWidget*, QShowEvent*);
    using QStackedWidget_HideEvent_Callback = void (*)(QStackedWidget*, QHideEvent*);
    using QStackedWidget_NativeEvent_Callback = bool (*)(QStackedWidget*, libqt_string, void*, intptr_t*);
    using QStackedWidget_Metric_Callback = int (*)(const QStackedWidget*, int);
    using QStackedWidget_InitPainter_Callback = void (*)(const QStackedWidget*, QPainter*);
    using QStackedWidget_Redirected_Callback = QPaintDevice* (*)(const QStackedWidget*, QPoint*);
    using QStackedWidget_SharedPainter_Callback = QPainter* (*)();
    using QStackedWidget_InputMethodEvent_Callback = void (*)(QStackedWidget*, QInputMethodEvent*);
    using QStackedWidget_InputMethodQuery_Callback = QVariant* (*)(const QStackedWidget*, int);
    using QStackedWidget_FocusNextPrevChild_Callback = bool (*)(QStackedWidget*, bool);
    using QStackedWidget_EventFilter_Callback = bool (*)(QStackedWidget*, QObject*, QEvent*);
    using QStackedWidget_TimerEvent_Callback = void (*)(QStackedWidget*, QTimerEvent*);
    using QStackedWidget_ChildEvent_Callback = void (*)(QStackedWidget*, QChildEvent*);
    using QStackedWidget_CustomEvent_Callback = void (*)(QStackedWidget*, QEvent*);
    using QStackedWidget_ConnectNotify_Callback = void (*)(QStackedWidget*, QMetaMethod*);
    using QStackedWidget_DisconnectNotify_Callback = void (*)(QStackedWidget*, QMetaMethod*);
    using QStackedWidget_DrawFrame_Callback = void (*)(QStackedWidget*, QPainter*);
    using QStackedWidget_UpdateMicroFocus_Callback = void (*)();
    using QStackedWidget_Create_Callback = void (*)();
    using QStackedWidget_Destroy_Callback = void (*)();
    using QStackedWidget_FocusNextChild_Callback = bool (*)();
    using QStackedWidget_FocusPreviousChild_Callback = bool (*)();
    using QStackedWidget_Sender_Callback = QObject* (*)();
    using QStackedWidget_SenderSignalIndex_Callback = int (*)();
    using QStackedWidget_Receivers_Callback = int (*)(const QStackedWidget*, const char*);
    using QStackedWidget_IsSignalConnected_Callback = bool (*)(const QStackedWidget*, QMetaMethod*);
    using QStackedWidget_GetDecodedMetricF_Callback = double (*)(const QStackedWidget*, int, int);

  protected:
    // Instance callback storage
    QStackedWidget_MetaObject_Callback qstackedwidget_metaobject_callback = nullptr;
    QStackedWidget_Metacast_Callback qstackedwidget_metacast_callback = nullptr;
    QStackedWidget_Metacall_Callback qstackedwidget_metacall_callback = nullptr;
    QStackedWidget_Event_Callback qstackedwidget_event_callback = nullptr;
    QStackedWidget_SizeHint_Callback qstackedwidget_sizehint_callback = nullptr;
    QStackedWidget_PaintEvent_Callback qstackedwidget_paintevent_callback = nullptr;
    QStackedWidget_ChangeEvent_Callback qstackedwidget_changeevent_callback = nullptr;
    QStackedWidget_InitStyleOption_Callback qstackedwidget_initstyleoption_callback = nullptr;
    QStackedWidget_DevType_Callback qstackedwidget_devtype_callback = nullptr;
    QStackedWidget_SetVisible_Callback qstackedwidget_setvisible_callback = nullptr;
    QStackedWidget_MinimumSizeHint_Callback qstackedwidget_minimumsizehint_callback = nullptr;
    QStackedWidget_HeightForWidth_Callback qstackedwidget_heightforwidth_callback = nullptr;
    QStackedWidget_HasHeightForWidth_Callback qstackedwidget_hasheightforwidth_callback = nullptr;
    QStackedWidget_PaintEngine_Callback qstackedwidget_paintengine_callback = nullptr;
    QStackedWidget_MousePressEvent_Callback qstackedwidget_mousepressevent_callback = nullptr;
    QStackedWidget_MouseReleaseEvent_Callback qstackedwidget_mousereleaseevent_callback = nullptr;
    QStackedWidget_MouseDoubleClickEvent_Callback qstackedwidget_mousedoubleclickevent_callback = nullptr;
    QStackedWidget_MouseMoveEvent_Callback qstackedwidget_mousemoveevent_callback = nullptr;
    QStackedWidget_WheelEvent_Callback qstackedwidget_wheelevent_callback = nullptr;
    QStackedWidget_KeyPressEvent_Callback qstackedwidget_keypressevent_callback = nullptr;
    QStackedWidget_KeyReleaseEvent_Callback qstackedwidget_keyreleaseevent_callback = nullptr;
    QStackedWidget_FocusInEvent_Callback qstackedwidget_focusinevent_callback = nullptr;
    QStackedWidget_FocusOutEvent_Callback qstackedwidget_focusoutevent_callback = nullptr;
    QStackedWidget_EnterEvent_Callback qstackedwidget_enterevent_callback = nullptr;
    QStackedWidget_LeaveEvent_Callback qstackedwidget_leaveevent_callback = nullptr;
    QStackedWidget_MoveEvent_Callback qstackedwidget_moveevent_callback = nullptr;
    QStackedWidget_ResizeEvent_Callback qstackedwidget_resizeevent_callback = nullptr;
    QStackedWidget_CloseEvent_Callback qstackedwidget_closeevent_callback = nullptr;
    QStackedWidget_ContextMenuEvent_Callback qstackedwidget_contextmenuevent_callback = nullptr;
    QStackedWidget_TabletEvent_Callback qstackedwidget_tabletevent_callback = nullptr;
    QStackedWidget_ActionEvent_Callback qstackedwidget_actionevent_callback = nullptr;
    QStackedWidget_DragEnterEvent_Callback qstackedwidget_dragenterevent_callback = nullptr;
    QStackedWidget_DragMoveEvent_Callback qstackedwidget_dragmoveevent_callback = nullptr;
    QStackedWidget_DragLeaveEvent_Callback qstackedwidget_dragleaveevent_callback = nullptr;
    QStackedWidget_DropEvent_Callback qstackedwidget_dropevent_callback = nullptr;
    QStackedWidget_ShowEvent_Callback qstackedwidget_showevent_callback = nullptr;
    QStackedWidget_HideEvent_Callback qstackedwidget_hideevent_callback = nullptr;
    QStackedWidget_NativeEvent_Callback qstackedwidget_nativeevent_callback = nullptr;
    QStackedWidget_Metric_Callback qstackedwidget_metric_callback = nullptr;
    QStackedWidget_InitPainter_Callback qstackedwidget_initpainter_callback = nullptr;
    QStackedWidget_Redirected_Callback qstackedwidget_redirected_callback = nullptr;
    QStackedWidget_SharedPainter_Callback qstackedwidget_sharedpainter_callback = nullptr;
    QStackedWidget_InputMethodEvent_Callback qstackedwidget_inputmethodevent_callback = nullptr;
    QStackedWidget_InputMethodQuery_Callback qstackedwidget_inputmethodquery_callback = nullptr;
    QStackedWidget_FocusNextPrevChild_Callback qstackedwidget_focusnextprevchild_callback = nullptr;
    QStackedWidget_EventFilter_Callback qstackedwidget_eventfilter_callback = nullptr;
    QStackedWidget_TimerEvent_Callback qstackedwidget_timerevent_callback = nullptr;
    QStackedWidget_ChildEvent_Callback qstackedwidget_childevent_callback = nullptr;
    QStackedWidget_CustomEvent_Callback qstackedwidget_customevent_callback = nullptr;
    QStackedWidget_ConnectNotify_Callback qstackedwidget_connectnotify_callback = nullptr;
    QStackedWidget_DisconnectNotify_Callback qstackedwidget_disconnectnotify_callback = nullptr;
    QStackedWidget_DrawFrame_Callback qstackedwidget_drawframe_callback = nullptr;
    QStackedWidget_UpdateMicroFocus_Callback qstackedwidget_updatemicrofocus_callback = nullptr;
    QStackedWidget_Create_Callback qstackedwidget_create_callback = nullptr;
    QStackedWidget_Destroy_Callback qstackedwidget_destroy_callback = nullptr;
    QStackedWidget_FocusNextChild_Callback qstackedwidget_focusnextchild_callback = nullptr;
    QStackedWidget_FocusPreviousChild_Callback qstackedwidget_focuspreviouschild_callback = nullptr;
    QStackedWidget_Sender_Callback qstackedwidget_sender_callback = nullptr;
    QStackedWidget_SenderSignalIndex_Callback qstackedwidget_sendersignalindex_callback = nullptr;
    QStackedWidget_Receivers_Callback qstackedwidget_receivers_callback = nullptr;
    QStackedWidget_IsSignalConnected_Callback qstackedwidget_issignalconnected_callback = nullptr;
    QStackedWidget_GetDecodedMetricF_Callback qstackedwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qstackedwidget_metaobject_isbase = false;
    mutable bool qstackedwidget_metacast_isbase = false;
    mutable bool qstackedwidget_metacall_isbase = false;
    mutable bool qstackedwidget_event_isbase = false;
    mutable bool qstackedwidget_sizehint_isbase = false;
    mutable bool qstackedwidget_paintevent_isbase = false;
    mutable bool qstackedwidget_changeevent_isbase = false;
    mutable bool qstackedwidget_initstyleoption_isbase = false;
    mutable bool qstackedwidget_devtype_isbase = false;
    mutable bool qstackedwidget_setvisible_isbase = false;
    mutable bool qstackedwidget_minimumsizehint_isbase = false;
    mutable bool qstackedwidget_heightforwidth_isbase = false;
    mutable bool qstackedwidget_hasheightforwidth_isbase = false;
    mutable bool qstackedwidget_paintengine_isbase = false;
    mutable bool qstackedwidget_mousepressevent_isbase = false;
    mutable bool qstackedwidget_mousereleaseevent_isbase = false;
    mutable bool qstackedwidget_mousedoubleclickevent_isbase = false;
    mutable bool qstackedwidget_mousemoveevent_isbase = false;
    mutable bool qstackedwidget_wheelevent_isbase = false;
    mutable bool qstackedwidget_keypressevent_isbase = false;
    mutable bool qstackedwidget_keyreleaseevent_isbase = false;
    mutable bool qstackedwidget_focusinevent_isbase = false;
    mutable bool qstackedwidget_focusoutevent_isbase = false;
    mutable bool qstackedwidget_enterevent_isbase = false;
    mutable bool qstackedwidget_leaveevent_isbase = false;
    mutable bool qstackedwidget_moveevent_isbase = false;
    mutable bool qstackedwidget_resizeevent_isbase = false;
    mutable bool qstackedwidget_closeevent_isbase = false;
    mutable bool qstackedwidget_contextmenuevent_isbase = false;
    mutable bool qstackedwidget_tabletevent_isbase = false;
    mutable bool qstackedwidget_actionevent_isbase = false;
    mutable bool qstackedwidget_dragenterevent_isbase = false;
    mutable bool qstackedwidget_dragmoveevent_isbase = false;
    mutable bool qstackedwidget_dragleaveevent_isbase = false;
    mutable bool qstackedwidget_dropevent_isbase = false;
    mutable bool qstackedwidget_showevent_isbase = false;
    mutable bool qstackedwidget_hideevent_isbase = false;
    mutable bool qstackedwidget_nativeevent_isbase = false;
    mutable bool qstackedwidget_metric_isbase = false;
    mutable bool qstackedwidget_initpainter_isbase = false;
    mutable bool qstackedwidget_redirected_isbase = false;
    mutable bool qstackedwidget_sharedpainter_isbase = false;
    mutable bool qstackedwidget_inputmethodevent_isbase = false;
    mutable bool qstackedwidget_inputmethodquery_isbase = false;
    mutable bool qstackedwidget_focusnextprevchild_isbase = false;
    mutable bool qstackedwidget_eventfilter_isbase = false;
    mutable bool qstackedwidget_timerevent_isbase = false;
    mutable bool qstackedwidget_childevent_isbase = false;
    mutable bool qstackedwidget_customevent_isbase = false;
    mutable bool qstackedwidget_connectnotify_isbase = false;
    mutable bool qstackedwidget_disconnectnotify_isbase = false;
    mutable bool qstackedwidget_drawframe_isbase = false;
    mutable bool qstackedwidget_updatemicrofocus_isbase = false;
    mutable bool qstackedwidget_create_isbase = false;
    mutable bool qstackedwidget_destroy_isbase = false;
    mutable bool qstackedwidget_focusnextchild_isbase = false;
    mutable bool qstackedwidget_focuspreviouschild_isbase = false;
    mutable bool qstackedwidget_sender_isbase = false;
    mutable bool qstackedwidget_sendersignalindex_isbase = false;
    mutable bool qstackedwidget_receivers_isbase = false;
    mutable bool qstackedwidget_issignalconnected_isbase = false;
    mutable bool qstackedwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualQStackedWidget(QWidget* parent) : QStackedWidget(parent) {};
    VirtualQStackedWidget() : QStackedWidget() {};

    // Callback setters
    inline void setQStackedWidget_MetaObject_Callback(QStackedWidget_MetaObject_Callback cb) { qstackedwidget_metaobject_callback = cb; }
    inline void setQStackedWidget_Metacast_Callback(QStackedWidget_Metacast_Callback cb) { qstackedwidget_metacast_callback = cb; }
    inline void setQStackedWidget_Metacall_Callback(QStackedWidget_Metacall_Callback cb) { qstackedwidget_metacall_callback = cb; }
    inline void setQStackedWidget_Event_Callback(QStackedWidget_Event_Callback cb) { qstackedwidget_event_callback = cb; }
    inline void setQStackedWidget_SizeHint_Callback(QStackedWidget_SizeHint_Callback cb) { qstackedwidget_sizehint_callback = cb; }
    inline void setQStackedWidget_PaintEvent_Callback(QStackedWidget_PaintEvent_Callback cb) { qstackedwidget_paintevent_callback = cb; }
    inline void setQStackedWidget_ChangeEvent_Callback(QStackedWidget_ChangeEvent_Callback cb) { qstackedwidget_changeevent_callback = cb; }
    inline void setQStackedWidget_InitStyleOption_Callback(QStackedWidget_InitStyleOption_Callback cb) { qstackedwidget_initstyleoption_callback = cb; }
    inline void setQStackedWidget_DevType_Callback(QStackedWidget_DevType_Callback cb) { qstackedwidget_devtype_callback = cb; }
    inline void setQStackedWidget_SetVisible_Callback(QStackedWidget_SetVisible_Callback cb) { qstackedwidget_setvisible_callback = cb; }
    inline void setQStackedWidget_MinimumSizeHint_Callback(QStackedWidget_MinimumSizeHint_Callback cb) { qstackedwidget_minimumsizehint_callback = cb; }
    inline void setQStackedWidget_HeightForWidth_Callback(QStackedWidget_HeightForWidth_Callback cb) { qstackedwidget_heightforwidth_callback = cb; }
    inline void setQStackedWidget_HasHeightForWidth_Callback(QStackedWidget_HasHeightForWidth_Callback cb) { qstackedwidget_hasheightforwidth_callback = cb; }
    inline void setQStackedWidget_PaintEngine_Callback(QStackedWidget_PaintEngine_Callback cb) { qstackedwidget_paintengine_callback = cb; }
    inline void setQStackedWidget_MousePressEvent_Callback(QStackedWidget_MousePressEvent_Callback cb) { qstackedwidget_mousepressevent_callback = cb; }
    inline void setQStackedWidget_MouseReleaseEvent_Callback(QStackedWidget_MouseReleaseEvent_Callback cb) { qstackedwidget_mousereleaseevent_callback = cb; }
    inline void setQStackedWidget_MouseDoubleClickEvent_Callback(QStackedWidget_MouseDoubleClickEvent_Callback cb) { qstackedwidget_mousedoubleclickevent_callback = cb; }
    inline void setQStackedWidget_MouseMoveEvent_Callback(QStackedWidget_MouseMoveEvent_Callback cb) { qstackedwidget_mousemoveevent_callback = cb; }
    inline void setQStackedWidget_WheelEvent_Callback(QStackedWidget_WheelEvent_Callback cb) { qstackedwidget_wheelevent_callback = cb; }
    inline void setQStackedWidget_KeyPressEvent_Callback(QStackedWidget_KeyPressEvent_Callback cb) { qstackedwidget_keypressevent_callback = cb; }
    inline void setQStackedWidget_KeyReleaseEvent_Callback(QStackedWidget_KeyReleaseEvent_Callback cb) { qstackedwidget_keyreleaseevent_callback = cb; }
    inline void setQStackedWidget_FocusInEvent_Callback(QStackedWidget_FocusInEvent_Callback cb) { qstackedwidget_focusinevent_callback = cb; }
    inline void setQStackedWidget_FocusOutEvent_Callback(QStackedWidget_FocusOutEvent_Callback cb) { qstackedwidget_focusoutevent_callback = cb; }
    inline void setQStackedWidget_EnterEvent_Callback(QStackedWidget_EnterEvent_Callback cb) { qstackedwidget_enterevent_callback = cb; }
    inline void setQStackedWidget_LeaveEvent_Callback(QStackedWidget_LeaveEvent_Callback cb) { qstackedwidget_leaveevent_callback = cb; }
    inline void setQStackedWidget_MoveEvent_Callback(QStackedWidget_MoveEvent_Callback cb) { qstackedwidget_moveevent_callback = cb; }
    inline void setQStackedWidget_ResizeEvent_Callback(QStackedWidget_ResizeEvent_Callback cb) { qstackedwidget_resizeevent_callback = cb; }
    inline void setQStackedWidget_CloseEvent_Callback(QStackedWidget_CloseEvent_Callback cb) { qstackedwidget_closeevent_callback = cb; }
    inline void setQStackedWidget_ContextMenuEvent_Callback(QStackedWidget_ContextMenuEvent_Callback cb) { qstackedwidget_contextmenuevent_callback = cb; }
    inline void setQStackedWidget_TabletEvent_Callback(QStackedWidget_TabletEvent_Callback cb) { qstackedwidget_tabletevent_callback = cb; }
    inline void setQStackedWidget_ActionEvent_Callback(QStackedWidget_ActionEvent_Callback cb) { qstackedwidget_actionevent_callback = cb; }
    inline void setQStackedWidget_DragEnterEvent_Callback(QStackedWidget_DragEnterEvent_Callback cb) { qstackedwidget_dragenterevent_callback = cb; }
    inline void setQStackedWidget_DragMoveEvent_Callback(QStackedWidget_DragMoveEvent_Callback cb) { qstackedwidget_dragmoveevent_callback = cb; }
    inline void setQStackedWidget_DragLeaveEvent_Callback(QStackedWidget_DragLeaveEvent_Callback cb) { qstackedwidget_dragleaveevent_callback = cb; }
    inline void setQStackedWidget_DropEvent_Callback(QStackedWidget_DropEvent_Callback cb) { qstackedwidget_dropevent_callback = cb; }
    inline void setQStackedWidget_ShowEvent_Callback(QStackedWidget_ShowEvent_Callback cb) { qstackedwidget_showevent_callback = cb; }
    inline void setQStackedWidget_HideEvent_Callback(QStackedWidget_HideEvent_Callback cb) { qstackedwidget_hideevent_callback = cb; }
    inline void setQStackedWidget_NativeEvent_Callback(QStackedWidget_NativeEvent_Callback cb) { qstackedwidget_nativeevent_callback = cb; }
    inline void setQStackedWidget_Metric_Callback(QStackedWidget_Metric_Callback cb) { qstackedwidget_metric_callback = cb; }
    inline void setQStackedWidget_InitPainter_Callback(QStackedWidget_InitPainter_Callback cb) { qstackedwidget_initpainter_callback = cb; }
    inline void setQStackedWidget_Redirected_Callback(QStackedWidget_Redirected_Callback cb) { qstackedwidget_redirected_callback = cb; }
    inline void setQStackedWidget_SharedPainter_Callback(QStackedWidget_SharedPainter_Callback cb) { qstackedwidget_sharedpainter_callback = cb; }
    inline void setQStackedWidget_InputMethodEvent_Callback(QStackedWidget_InputMethodEvent_Callback cb) { qstackedwidget_inputmethodevent_callback = cb; }
    inline void setQStackedWidget_InputMethodQuery_Callback(QStackedWidget_InputMethodQuery_Callback cb) { qstackedwidget_inputmethodquery_callback = cb; }
    inline void setQStackedWidget_FocusNextPrevChild_Callback(QStackedWidget_FocusNextPrevChild_Callback cb) { qstackedwidget_focusnextprevchild_callback = cb; }
    inline void setQStackedWidget_EventFilter_Callback(QStackedWidget_EventFilter_Callback cb) { qstackedwidget_eventfilter_callback = cb; }
    inline void setQStackedWidget_TimerEvent_Callback(QStackedWidget_TimerEvent_Callback cb) { qstackedwidget_timerevent_callback = cb; }
    inline void setQStackedWidget_ChildEvent_Callback(QStackedWidget_ChildEvent_Callback cb) { qstackedwidget_childevent_callback = cb; }
    inline void setQStackedWidget_CustomEvent_Callback(QStackedWidget_CustomEvent_Callback cb) { qstackedwidget_customevent_callback = cb; }
    inline void setQStackedWidget_ConnectNotify_Callback(QStackedWidget_ConnectNotify_Callback cb) { qstackedwidget_connectnotify_callback = cb; }
    inline void setQStackedWidget_DisconnectNotify_Callback(QStackedWidget_DisconnectNotify_Callback cb) { qstackedwidget_disconnectnotify_callback = cb; }
    inline void setQStackedWidget_DrawFrame_Callback(QStackedWidget_DrawFrame_Callback cb) { qstackedwidget_drawframe_callback = cb; }
    inline void setQStackedWidget_UpdateMicroFocus_Callback(QStackedWidget_UpdateMicroFocus_Callback cb) { qstackedwidget_updatemicrofocus_callback = cb; }
    inline void setQStackedWidget_Create_Callback(QStackedWidget_Create_Callback cb) { qstackedwidget_create_callback = cb; }
    inline void setQStackedWidget_Destroy_Callback(QStackedWidget_Destroy_Callback cb) { qstackedwidget_destroy_callback = cb; }
    inline void setQStackedWidget_FocusNextChild_Callback(QStackedWidget_FocusNextChild_Callback cb) { qstackedwidget_focusnextchild_callback = cb; }
    inline void setQStackedWidget_FocusPreviousChild_Callback(QStackedWidget_FocusPreviousChild_Callback cb) { qstackedwidget_focuspreviouschild_callback = cb; }
    inline void setQStackedWidget_Sender_Callback(QStackedWidget_Sender_Callback cb) { qstackedwidget_sender_callback = cb; }
    inline void setQStackedWidget_SenderSignalIndex_Callback(QStackedWidget_SenderSignalIndex_Callback cb) { qstackedwidget_sendersignalindex_callback = cb; }
    inline void setQStackedWidget_Receivers_Callback(QStackedWidget_Receivers_Callback cb) { qstackedwidget_receivers_callback = cb; }
    inline void setQStackedWidget_IsSignalConnected_Callback(QStackedWidget_IsSignalConnected_Callback cb) { qstackedwidget_issignalconnected_callback = cb; }
    inline void setQStackedWidget_GetDecodedMetricF_Callback(QStackedWidget_GetDecodedMetricF_Callback cb) { qstackedwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQStackedWidget_MetaObject_IsBase(bool value) const { qstackedwidget_metaobject_isbase = value; }
    inline void setQStackedWidget_Metacast_IsBase(bool value) const { qstackedwidget_metacast_isbase = value; }
    inline void setQStackedWidget_Metacall_IsBase(bool value) const { qstackedwidget_metacall_isbase = value; }
    inline void setQStackedWidget_Event_IsBase(bool value) const { qstackedwidget_event_isbase = value; }
    inline void setQStackedWidget_SizeHint_IsBase(bool value) const { qstackedwidget_sizehint_isbase = value; }
    inline void setQStackedWidget_PaintEvent_IsBase(bool value) const { qstackedwidget_paintevent_isbase = value; }
    inline void setQStackedWidget_ChangeEvent_IsBase(bool value) const { qstackedwidget_changeevent_isbase = value; }
    inline void setQStackedWidget_InitStyleOption_IsBase(bool value) const { qstackedwidget_initstyleoption_isbase = value; }
    inline void setQStackedWidget_DevType_IsBase(bool value) const { qstackedwidget_devtype_isbase = value; }
    inline void setQStackedWidget_SetVisible_IsBase(bool value) const { qstackedwidget_setvisible_isbase = value; }
    inline void setQStackedWidget_MinimumSizeHint_IsBase(bool value) const { qstackedwidget_minimumsizehint_isbase = value; }
    inline void setQStackedWidget_HeightForWidth_IsBase(bool value) const { qstackedwidget_heightforwidth_isbase = value; }
    inline void setQStackedWidget_HasHeightForWidth_IsBase(bool value) const { qstackedwidget_hasheightforwidth_isbase = value; }
    inline void setQStackedWidget_PaintEngine_IsBase(bool value) const { qstackedwidget_paintengine_isbase = value; }
    inline void setQStackedWidget_MousePressEvent_IsBase(bool value) const { qstackedwidget_mousepressevent_isbase = value; }
    inline void setQStackedWidget_MouseReleaseEvent_IsBase(bool value) const { qstackedwidget_mousereleaseevent_isbase = value; }
    inline void setQStackedWidget_MouseDoubleClickEvent_IsBase(bool value) const { qstackedwidget_mousedoubleclickevent_isbase = value; }
    inline void setQStackedWidget_MouseMoveEvent_IsBase(bool value) const { qstackedwidget_mousemoveevent_isbase = value; }
    inline void setQStackedWidget_WheelEvent_IsBase(bool value) const { qstackedwidget_wheelevent_isbase = value; }
    inline void setQStackedWidget_KeyPressEvent_IsBase(bool value) const { qstackedwidget_keypressevent_isbase = value; }
    inline void setQStackedWidget_KeyReleaseEvent_IsBase(bool value) const { qstackedwidget_keyreleaseevent_isbase = value; }
    inline void setQStackedWidget_FocusInEvent_IsBase(bool value) const { qstackedwidget_focusinevent_isbase = value; }
    inline void setQStackedWidget_FocusOutEvent_IsBase(bool value) const { qstackedwidget_focusoutevent_isbase = value; }
    inline void setQStackedWidget_EnterEvent_IsBase(bool value) const { qstackedwidget_enterevent_isbase = value; }
    inline void setQStackedWidget_LeaveEvent_IsBase(bool value) const { qstackedwidget_leaveevent_isbase = value; }
    inline void setQStackedWidget_MoveEvent_IsBase(bool value) const { qstackedwidget_moveevent_isbase = value; }
    inline void setQStackedWidget_ResizeEvent_IsBase(bool value) const { qstackedwidget_resizeevent_isbase = value; }
    inline void setQStackedWidget_CloseEvent_IsBase(bool value) const { qstackedwidget_closeevent_isbase = value; }
    inline void setQStackedWidget_ContextMenuEvent_IsBase(bool value) const { qstackedwidget_contextmenuevent_isbase = value; }
    inline void setQStackedWidget_TabletEvent_IsBase(bool value) const { qstackedwidget_tabletevent_isbase = value; }
    inline void setQStackedWidget_ActionEvent_IsBase(bool value) const { qstackedwidget_actionevent_isbase = value; }
    inline void setQStackedWidget_DragEnterEvent_IsBase(bool value) const { qstackedwidget_dragenterevent_isbase = value; }
    inline void setQStackedWidget_DragMoveEvent_IsBase(bool value) const { qstackedwidget_dragmoveevent_isbase = value; }
    inline void setQStackedWidget_DragLeaveEvent_IsBase(bool value) const { qstackedwidget_dragleaveevent_isbase = value; }
    inline void setQStackedWidget_DropEvent_IsBase(bool value) const { qstackedwidget_dropevent_isbase = value; }
    inline void setQStackedWidget_ShowEvent_IsBase(bool value) const { qstackedwidget_showevent_isbase = value; }
    inline void setQStackedWidget_HideEvent_IsBase(bool value) const { qstackedwidget_hideevent_isbase = value; }
    inline void setQStackedWidget_NativeEvent_IsBase(bool value) const { qstackedwidget_nativeevent_isbase = value; }
    inline void setQStackedWidget_Metric_IsBase(bool value) const { qstackedwidget_metric_isbase = value; }
    inline void setQStackedWidget_InitPainter_IsBase(bool value) const { qstackedwidget_initpainter_isbase = value; }
    inline void setQStackedWidget_Redirected_IsBase(bool value) const { qstackedwidget_redirected_isbase = value; }
    inline void setQStackedWidget_SharedPainter_IsBase(bool value) const { qstackedwidget_sharedpainter_isbase = value; }
    inline void setQStackedWidget_InputMethodEvent_IsBase(bool value) const { qstackedwidget_inputmethodevent_isbase = value; }
    inline void setQStackedWidget_InputMethodQuery_IsBase(bool value) const { qstackedwidget_inputmethodquery_isbase = value; }
    inline void setQStackedWidget_FocusNextPrevChild_IsBase(bool value) const { qstackedwidget_focusnextprevchild_isbase = value; }
    inline void setQStackedWidget_EventFilter_IsBase(bool value) const { qstackedwidget_eventfilter_isbase = value; }
    inline void setQStackedWidget_TimerEvent_IsBase(bool value) const { qstackedwidget_timerevent_isbase = value; }
    inline void setQStackedWidget_ChildEvent_IsBase(bool value) const { qstackedwidget_childevent_isbase = value; }
    inline void setQStackedWidget_CustomEvent_IsBase(bool value) const { qstackedwidget_customevent_isbase = value; }
    inline void setQStackedWidget_ConnectNotify_IsBase(bool value) const { qstackedwidget_connectnotify_isbase = value; }
    inline void setQStackedWidget_DisconnectNotify_IsBase(bool value) const { qstackedwidget_disconnectnotify_isbase = value; }
    inline void setQStackedWidget_DrawFrame_IsBase(bool value) const { qstackedwidget_drawframe_isbase = value; }
    inline void setQStackedWidget_UpdateMicroFocus_IsBase(bool value) const { qstackedwidget_updatemicrofocus_isbase = value; }
    inline void setQStackedWidget_Create_IsBase(bool value) const { qstackedwidget_create_isbase = value; }
    inline void setQStackedWidget_Destroy_IsBase(bool value) const { qstackedwidget_destroy_isbase = value; }
    inline void setQStackedWidget_FocusNextChild_IsBase(bool value) const { qstackedwidget_focusnextchild_isbase = value; }
    inline void setQStackedWidget_FocusPreviousChild_IsBase(bool value) const { qstackedwidget_focuspreviouschild_isbase = value; }
    inline void setQStackedWidget_Sender_IsBase(bool value) const { qstackedwidget_sender_isbase = value; }
    inline void setQStackedWidget_SenderSignalIndex_IsBase(bool value) const { qstackedwidget_sendersignalindex_isbase = value; }
    inline void setQStackedWidget_Receivers_IsBase(bool value) const { qstackedwidget_receivers_isbase = value; }
    inline void setQStackedWidget_IsSignalConnected_IsBase(bool value) const { qstackedwidget_issignalconnected_isbase = value; }
    inline void setQStackedWidget_GetDecodedMetricF_IsBase(bool value) const { qstackedwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qstackedwidget_metaobject_isbase) {
            qstackedwidget_metaobject_isbase = false;
            return QStackedWidget::metaObject();
        }
        auto metaobject_cb = qstackedwidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QStackedWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qstackedwidget_metacast_isbase) {
            qstackedwidget_metacast_isbase = false;
            return QStackedWidget::qt_metacast(param1);
        }
        auto metacast_cb = qstackedwidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QStackedWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstackedwidget_metacall_isbase) {
            qstackedwidget_metacall_isbase = false;
            return QStackedWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qstackedwidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QStackedWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qstackedwidget_event_isbase) {
            qstackedwidget_event_isbase = false;
            return QStackedWidget::event(e);
        }
        auto event_cb = qstackedwidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QStackedWidget::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qstackedwidget_sizehint_isbase) {
            qstackedwidget_sizehint_isbase = false;
            return QStackedWidget::sizeHint();
        }
        auto sizehint_cb = qstackedwidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QStackedWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qstackedwidget_paintevent_isbase) {
            qstackedwidget_paintevent_isbase = false;
            QStackedWidget::paintEvent(param1);
            return;
        }
        auto paintevent_cb = qstackedwidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qstackedwidget_changeevent_isbase) {
            qstackedwidget_changeevent_isbase = false;
            QStackedWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qstackedwidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qstackedwidget_initstyleoption_isbase) {
            qstackedwidget_initstyleoption_isbase = false;
            QStackedWidget::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qstackedwidget_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QStackedWidget::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qstackedwidget_devtype_isbase) {
            qstackedwidget_devtype_isbase = false;
            return QStackedWidget::devType();
        }
        auto devtype_cb = qstackedwidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QStackedWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qstackedwidget_setvisible_isbase) {
            qstackedwidget_setvisible_isbase = false;
            QStackedWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = qstackedwidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QStackedWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qstackedwidget_minimumsizehint_isbase) {
            qstackedwidget_minimumsizehint_isbase = false;
            return QStackedWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = qstackedwidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QStackedWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qstackedwidget_heightforwidth_isbase) {
            qstackedwidget_heightforwidth_isbase = false;
            return QStackedWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = qstackedwidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStackedWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qstackedwidget_hasheightforwidth_isbase) {
            qstackedwidget_hasheightforwidth_isbase = false;
            return QStackedWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qstackedwidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QStackedWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qstackedwidget_paintengine_isbase) {
            qstackedwidget_paintengine_isbase = false;
            return QStackedWidget::paintEngine();
        }
        auto paintengine_cb = qstackedwidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QStackedWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qstackedwidget_mousepressevent_isbase) {
            qstackedwidget_mousepressevent_isbase = false;
            QStackedWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qstackedwidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qstackedwidget_mousereleaseevent_isbase) {
            qstackedwidget_mousereleaseevent_isbase = false;
            QStackedWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qstackedwidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qstackedwidget_mousedoubleclickevent_isbase) {
            qstackedwidget_mousedoubleclickevent_isbase = false;
            QStackedWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qstackedwidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qstackedwidget_mousemoveevent_isbase) {
            qstackedwidget_mousemoveevent_isbase = false;
            QStackedWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qstackedwidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qstackedwidget_wheelevent_isbase) {
            qstackedwidget_wheelevent_isbase = false;
            QStackedWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qstackedwidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qstackedwidget_keypressevent_isbase) {
            qstackedwidget_keypressevent_isbase = false;
            QStackedWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qstackedwidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qstackedwidget_keyreleaseevent_isbase) {
            qstackedwidget_keyreleaseevent_isbase = false;
            QStackedWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qstackedwidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qstackedwidget_focusinevent_isbase) {
            qstackedwidget_focusinevent_isbase = false;
            QStackedWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qstackedwidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qstackedwidget_focusoutevent_isbase) {
            qstackedwidget_focusoutevent_isbase = false;
            QStackedWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qstackedwidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qstackedwidget_enterevent_isbase) {
            qstackedwidget_enterevent_isbase = false;
            QStackedWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = qstackedwidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qstackedwidget_leaveevent_isbase) {
            qstackedwidget_leaveevent_isbase = false;
            QStackedWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qstackedwidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qstackedwidget_moveevent_isbase) {
            qstackedwidget_moveevent_isbase = false;
            QStackedWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = qstackedwidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qstackedwidget_resizeevent_isbase) {
            qstackedwidget_resizeevent_isbase = false;
            QStackedWidget::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qstackedwidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qstackedwidget_closeevent_isbase) {
            qstackedwidget_closeevent_isbase = false;
            QStackedWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = qstackedwidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qstackedwidget_contextmenuevent_isbase) {
            qstackedwidget_contextmenuevent_isbase = false;
            QStackedWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qstackedwidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qstackedwidget_tabletevent_isbase) {
            qstackedwidget_tabletevent_isbase = false;
            QStackedWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qstackedwidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qstackedwidget_actionevent_isbase) {
            qstackedwidget_actionevent_isbase = false;
            QStackedWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = qstackedwidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qstackedwidget_dragenterevent_isbase) {
            qstackedwidget_dragenterevent_isbase = false;
            QStackedWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qstackedwidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qstackedwidget_dragmoveevent_isbase) {
            qstackedwidget_dragmoveevent_isbase = false;
            QStackedWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qstackedwidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qstackedwidget_dragleaveevent_isbase) {
            qstackedwidget_dragleaveevent_isbase = false;
            QStackedWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qstackedwidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qstackedwidget_dropevent_isbase) {
            qstackedwidget_dropevent_isbase = false;
            QStackedWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = qstackedwidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qstackedwidget_showevent_isbase) {
            qstackedwidget_showevent_isbase = false;
            QStackedWidget::showEvent(event);
            return;
        }
        auto showevent_cb = qstackedwidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qstackedwidget_hideevent_isbase) {
            qstackedwidget_hideevent_isbase = false;
            QStackedWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = qstackedwidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qstackedwidget_nativeevent_isbase) {
            qstackedwidget_nativeevent_isbase = false;
            return QStackedWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qstackedwidget_nativeevent_callback;
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
        return QStackedWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qstackedwidget_metric_isbase) {
            qstackedwidget_metric_isbase = false;
            return QStackedWidget::metric(param1);
        }
        auto metric_cb = qstackedwidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStackedWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qstackedwidget_initpainter_isbase) {
            qstackedwidget_initpainter_isbase = false;
            QStackedWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = qstackedwidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QStackedWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qstackedwidget_redirected_isbase) {
            qstackedwidget_redirected_isbase = false;
            return QStackedWidget::redirected(offset);
        }
        auto redirected_cb = qstackedwidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QStackedWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qstackedwidget_sharedpainter_isbase) {
            qstackedwidget_sharedpainter_isbase = false;
            return QStackedWidget::sharedPainter();
        }
        auto sharedpainter_cb = qstackedwidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QStackedWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qstackedwidget_inputmethodevent_isbase) {
            qstackedwidget_inputmethodevent_isbase = false;
            QStackedWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qstackedwidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qstackedwidget_inputmethodquery_isbase) {
            qstackedwidget_inputmethodquery_isbase = false;
            return QStackedWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qstackedwidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QStackedWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qstackedwidget_focusnextprevchild_isbase) {
            qstackedwidget_focusnextprevchild_isbase = false;
            return QStackedWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qstackedwidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QStackedWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstackedwidget_eventfilter_isbase) {
            qstackedwidget_eventfilter_isbase = false;
            return QStackedWidget::eventFilter(watched, event);
        }
        auto eventfilter_cb = qstackedwidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QStackedWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstackedwidget_timerevent_isbase) {
            qstackedwidget_timerevent_isbase = false;
            QStackedWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = qstackedwidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstackedwidget_childevent_isbase) {
            qstackedwidget_childevent_isbase = false;
            QStackedWidget::childEvent(event);
            return;
        }
        auto childevent_cb = qstackedwidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstackedwidget_customevent_isbase) {
            qstackedwidget_customevent_isbase = false;
            QStackedWidget::customEvent(event);
            return;
        }
        auto customevent_cb = qstackedwidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QStackedWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstackedwidget_connectnotify_isbase) {
            qstackedwidget_connectnotify_isbase = false;
            QStackedWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qstackedwidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QStackedWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstackedwidget_disconnectnotify_isbase) {
            qstackedwidget_disconnectnotify_isbase = false;
            QStackedWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qstackedwidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QStackedWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qstackedwidget_drawframe_isbase) {
            qstackedwidget_drawframe_isbase = false;
            QStackedWidget::drawFrame(param1);
            return;
        }
        auto drawframe_cb = qstackedwidget_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;

            drawframe_cb(this, cbval1);
            return;
        }
        QStackedWidget::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qstackedwidget_updatemicrofocus_isbase) {
            qstackedwidget_updatemicrofocus_isbase = false;
            QStackedWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qstackedwidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QStackedWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qstackedwidget_create_isbase) {
            qstackedwidget_create_isbase = false;
            QStackedWidget::create();
            return;
        }
        auto create_cb = qstackedwidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QStackedWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qstackedwidget_destroy_isbase) {
            qstackedwidget_destroy_isbase = false;
            QStackedWidget::destroy();
            return;
        }
        auto destroy_cb = qstackedwidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QStackedWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qstackedwidget_focusnextchild_isbase) {
            qstackedwidget_focusnextchild_isbase = false;
            return QStackedWidget::focusNextChild();
        }
        auto focusnextchild_cb = qstackedwidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QStackedWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qstackedwidget_focuspreviouschild_isbase) {
            qstackedwidget_focuspreviouschild_isbase = false;
            return QStackedWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qstackedwidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QStackedWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qstackedwidget_sender_isbase) {
            qstackedwidget_sender_isbase = false;
            return QStackedWidget::sender();
        }
        auto sender_cb = qstackedwidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QStackedWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qstackedwidget_sendersignalindex_isbase) {
            qstackedwidget_sendersignalindex_isbase = false;
            return QStackedWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = qstackedwidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QStackedWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qstackedwidget_receivers_isbase) {
            qstackedwidget_receivers_isbase = false;
            return QStackedWidget::receivers(signal);
        }
        auto receivers_cb = qstackedwidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStackedWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qstackedwidget_issignalconnected_isbase) {
            qstackedwidget_issignalconnected_isbase = false;
            return QStackedWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qstackedwidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QStackedWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qstackedwidget_getdecodedmetricf_isbase) {
            qstackedwidget_getdecodedmetricf_isbase = false;
            return QStackedWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qstackedwidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QStackedWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool QStackedWidget_Event(QStackedWidget* self, QEvent* e);
    friend bool QStackedWidget_SuperEvent(QStackedWidget* self, QEvent* e);
    friend void QStackedWidget_PaintEvent(QStackedWidget* self, QPaintEvent* param1);
    friend void QStackedWidget_SuperPaintEvent(QStackedWidget* self, QPaintEvent* param1);
    friend void QStackedWidget_ChangeEvent(QStackedWidget* self, QEvent* param1);
    friend void QStackedWidget_SuperChangeEvent(QStackedWidget* self, QEvent* param1);
    friend void QStackedWidget_InitStyleOption(const QStackedWidget* self, QStyleOptionFrame* option);
    friend void QStackedWidget_SuperInitStyleOption(const QStackedWidget* self, QStyleOptionFrame* option);
    friend void QStackedWidget_MousePressEvent(QStackedWidget* self, QMouseEvent* event);
    friend void QStackedWidget_SuperMousePressEvent(QStackedWidget* self, QMouseEvent* event);
    friend void QStackedWidget_MouseReleaseEvent(QStackedWidget* self, QMouseEvent* event);
    friend void QStackedWidget_SuperMouseReleaseEvent(QStackedWidget* self, QMouseEvent* event);
    friend void QStackedWidget_MouseDoubleClickEvent(QStackedWidget* self, QMouseEvent* event);
    friend void QStackedWidget_SuperMouseDoubleClickEvent(QStackedWidget* self, QMouseEvent* event);
    friend void QStackedWidget_MouseMoveEvent(QStackedWidget* self, QMouseEvent* event);
    friend void QStackedWidget_SuperMouseMoveEvent(QStackedWidget* self, QMouseEvent* event);
    friend void QStackedWidget_WheelEvent(QStackedWidget* self, QWheelEvent* event);
    friend void QStackedWidget_SuperWheelEvent(QStackedWidget* self, QWheelEvent* event);
    friend void QStackedWidget_KeyPressEvent(QStackedWidget* self, QKeyEvent* event);
    friend void QStackedWidget_SuperKeyPressEvent(QStackedWidget* self, QKeyEvent* event);
    friend void QStackedWidget_KeyReleaseEvent(QStackedWidget* self, QKeyEvent* event);
    friend void QStackedWidget_SuperKeyReleaseEvent(QStackedWidget* self, QKeyEvent* event);
    friend void QStackedWidget_FocusInEvent(QStackedWidget* self, QFocusEvent* event);
    friend void QStackedWidget_SuperFocusInEvent(QStackedWidget* self, QFocusEvent* event);
    friend void QStackedWidget_FocusOutEvent(QStackedWidget* self, QFocusEvent* event);
    friend void QStackedWidget_SuperFocusOutEvent(QStackedWidget* self, QFocusEvent* event);
    friend void QStackedWidget_EnterEvent(QStackedWidget* self, QEnterEvent* event);
    friend void QStackedWidget_SuperEnterEvent(QStackedWidget* self, QEnterEvent* event);
    friend void QStackedWidget_LeaveEvent(QStackedWidget* self, QEvent* event);
    friend void QStackedWidget_SuperLeaveEvent(QStackedWidget* self, QEvent* event);
    friend void QStackedWidget_MoveEvent(QStackedWidget* self, QMoveEvent* event);
    friend void QStackedWidget_SuperMoveEvent(QStackedWidget* self, QMoveEvent* event);
    friend void QStackedWidget_ResizeEvent(QStackedWidget* self, QResizeEvent* event);
    friend void QStackedWidget_SuperResizeEvent(QStackedWidget* self, QResizeEvent* event);
    friend void QStackedWidget_CloseEvent(QStackedWidget* self, QCloseEvent* event);
    friend void QStackedWidget_SuperCloseEvent(QStackedWidget* self, QCloseEvent* event);
    friend void QStackedWidget_ContextMenuEvent(QStackedWidget* self, QContextMenuEvent* event);
    friend void QStackedWidget_SuperContextMenuEvent(QStackedWidget* self, QContextMenuEvent* event);
    friend void QStackedWidget_TabletEvent(QStackedWidget* self, QTabletEvent* event);
    friend void QStackedWidget_SuperTabletEvent(QStackedWidget* self, QTabletEvent* event);
    friend void QStackedWidget_ActionEvent(QStackedWidget* self, QActionEvent* event);
    friend void QStackedWidget_SuperActionEvent(QStackedWidget* self, QActionEvent* event);
    friend void QStackedWidget_DragEnterEvent(QStackedWidget* self, QDragEnterEvent* event);
    friend void QStackedWidget_SuperDragEnterEvent(QStackedWidget* self, QDragEnterEvent* event);
    friend void QStackedWidget_DragMoveEvent(QStackedWidget* self, QDragMoveEvent* event);
    friend void QStackedWidget_SuperDragMoveEvent(QStackedWidget* self, QDragMoveEvent* event);
    friend void QStackedWidget_DragLeaveEvent(QStackedWidget* self, QDragLeaveEvent* event);
    friend void QStackedWidget_SuperDragLeaveEvent(QStackedWidget* self, QDragLeaveEvent* event);
    friend void QStackedWidget_DropEvent(QStackedWidget* self, QDropEvent* event);
    friend void QStackedWidget_SuperDropEvent(QStackedWidget* self, QDropEvent* event);
    friend void QStackedWidget_ShowEvent(QStackedWidget* self, QShowEvent* event);
    friend void QStackedWidget_SuperShowEvent(QStackedWidget* self, QShowEvent* event);
    friend void QStackedWidget_HideEvent(QStackedWidget* self, QHideEvent* event);
    friend void QStackedWidget_SuperHideEvent(QStackedWidget* self, QHideEvent* event);
    friend bool QStackedWidget_NativeEvent(QStackedWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QStackedWidget_SuperNativeEvent(QStackedWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QStackedWidget_Metric(const QStackedWidget* self, int param1);
    friend int QStackedWidget_SuperMetric(const QStackedWidget* self, int param1);
    friend void QStackedWidget_InitPainter(const QStackedWidget* self, QPainter* painter);
    friend void QStackedWidget_SuperInitPainter(const QStackedWidget* self, QPainter* painter);
    friend QPaintDevice* QStackedWidget_Redirected(const QStackedWidget* self, QPoint* offset);
    friend QPaintDevice* QStackedWidget_SuperRedirected(const QStackedWidget* self, QPoint* offset);
    friend QPainter* QStackedWidget_SharedPainter(const QStackedWidget* self);
    friend QPainter* QStackedWidget_SuperSharedPainter(const QStackedWidget* self);
    friend void QStackedWidget_InputMethodEvent(QStackedWidget* self, QInputMethodEvent* param1);
    friend void QStackedWidget_SuperInputMethodEvent(QStackedWidget* self, QInputMethodEvent* param1);
    friend bool QStackedWidget_FocusNextPrevChild(QStackedWidget* self, bool next);
    friend bool QStackedWidget_SuperFocusNextPrevChild(QStackedWidget* self, bool next);
    friend void QStackedWidget_TimerEvent(QStackedWidget* self, QTimerEvent* event);
    friend void QStackedWidget_SuperTimerEvent(QStackedWidget* self, QTimerEvent* event);
    friend void QStackedWidget_ChildEvent(QStackedWidget* self, QChildEvent* event);
    friend void QStackedWidget_SuperChildEvent(QStackedWidget* self, QChildEvent* event);
    friend void QStackedWidget_CustomEvent(QStackedWidget* self, QEvent* event);
    friend void QStackedWidget_SuperCustomEvent(QStackedWidget* self, QEvent* event);
    friend void QStackedWidget_ConnectNotify(QStackedWidget* self, const QMetaMethod* signal);
    friend void QStackedWidget_SuperConnectNotify(QStackedWidget* self, const QMetaMethod* signal);
    friend void QStackedWidget_DisconnectNotify(QStackedWidget* self, const QMetaMethod* signal);
    friend void QStackedWidget_SuperDisconnectNotify(QStackedWidget* self, const QMetaMethod* signal);
    friend void QStackedWidget_DrawFrame(QStackedWidget* self, QPainter* param1);
    friend void QStackedWidget_SuperDrawFrame(QStackedWidget* self, QPainter* param1);
    friend void QStackedWidget_UpdateMicroFocus(QStackedWidget* self);
    friend void QStackedWidget_SuperUpdateMicroFocus(QStackedWidget* self);
    friend void QStackedWidget_Create(QStackedWidget* self);
    friend void QStackedWidget_SuperCreate(QStackedWidget* self);
    friend void QStackedWidget_Destroy(QStackedWidget* self);
    friend void QStackedWidget_SuperDestroy(QStackedWidget* self);
    friend bool QStackedWidget_FocusNextChild(QStackedWidget* self);
    friend bool QStackedWidget_SuperFocusNextChild(QStackedWidget* self);
    friend bool QStackedWidget_FocusPreviousChild(QStackedWidget* self);
    friend bool QStackedWidget_SuperFocusPreviousChild(QStackedWidget* self);
    friend QObject* QStackedWidget_Sender(const QStackedWidget* self);
    friend QObject* QStackedWidget_SuperSender(const QStackedWidget* self);
    friend int QStackedWidget_SenderSignalIndex(const QStackedWidget* self);
    friend int QStackedWidget_SuperSenderSignalIndex(const QStackedWidget* self);
    friend int QStackedWidget_Receivers(const QStackedWidget* self, const char* signal);
    friend int QStackedWidget_SuperReceivers(const QStackedWidget* self, const char* signal);
    friend bool QStackedWidget_IsSignalConnected(const QStackedWidget* self, const QMetaMethod* signal);
    friend bool QStackedWidget_SuperIsSignalConnected(const QStackedWidget* self, const QMetaMethod* signal);
    friend double QStackedWidget_GetDecodedMetricF(const QStackedWidget* self, int metricA, int metricB);
    friend double QStackedWidget_SuperGetDecodedMetricF(const QStackedWidget* self, int metricA, int metricB);
};

#endif
