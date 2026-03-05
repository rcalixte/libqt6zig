#pragma once
#ifndef SRCC_LIBVIRTUALQTOOLBAR_H
#define SRCC_LIBVIRTUALQTOOLBAR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QToolBar so that we can call protected methods
class VirtualQToolBar final : public QToolBar {

  public:
    // Virtual class boolean flag
    bool isVirtualQToolBar = true;

    // Virtual class public types (including callbacks)
    using QToolBar_MetaObject_Callback = QMetaObject* (*)();
    using QToolBar_Metacast_Callback = void* (*)(QToolBar*, const char*);
    using QToolBar_Metacall_Callback = int (*)(QToolBar*, int, int, void**);
    using QToolBar_ActionEvent_Callback = void (*)(QToolBar*, QActionEvent*);
    using QToolBar_ChangeEvent_Callback = void (*)(QToolBar*, QEvent*);
    using QToolBar_PaintEvent_Callback = void (*)(QToolBar*, QPaintEvent*);
    using QToolBar_Event_Callback = bool (*)(QToolBar*, QEvent*);
    using QToolBar_InitStyleOption_Callback = void (*)(const QToolBar*, QStyleOptionToolBar*);
    using QToolBar_DevType_Callback = int (*)();
    using QToolBar_SetVisible_Callback = void (*)(QToolBar*, bool);
    using QToolBar_SizeHint_Callback = QSize* (*)();
    using QToolBar_MinimumSizeHint_Callback = QSize* (*)();
    using QToolBar_HeightForWidth_Callback = int (*)(const QToolBar*, int);
    using QToolBar_HasHeightForWidth_Callback = bool (*)();
    using QToolBar_PaintEngine_Callback = QPaintEngine* (*)();
    using QToolBar_MousePressEvent_Callback = void (*)(QToolBar*, QMouseEvent*);
    using QToolBar_MouseReleaseEvent_Callback = void (*)(QToolBar*, QMouseEvent*);
    using QToolBar_MouseDoubleClickEvent_Callback = void (*)(QToolBar*, QMouseEvent*);
    using QToolBar_MouseMoveEvent_Callback = void (*)(QToolBar*, QMouseEvent*);
    using QToolBar_WheelEvent_Callback = void (*)(QToolBar*, QWheelEvent*);
    using QToolBar_KeyPressEvent_Callback = void (*)(QToolBar*, QKeyEvent*);
    using QToolBar_KeyReleaseEvent_Callback = void (*)(QToolBar*, QKeyEvent*);
    using QToolBar_FocusInEvent_Callback = void (*)(QToolBar*, QFocusEvent*);
    using QToolBar_FocusOutEvent_Callback = void (*)(QToolBar*, QFocusEvent*);
    using QToolBar_EnterEvent_Callback = void (*)(QToolBar*, QEnterEvent*);
    using QToolBar_LeaveEvent_Callback = void (*)(QToolBar*, QEvent*);
    using QToolBar_MoveEvent_Callback = void (*)(QToolBar*, QMoveEvent*);
    using QToolBar_ResizeEvent_Callback = void (*)(QToolBar*, QResizeEvent*);
    using QToolBar_CloseEvent_Callback = void (*)(QToolBar*, QCloseEvent*);
    using QToolBar_ContextMenuEvent_Callback = void (*)(QToolBar*, QContextMenuEvent*);
    using QToolBar_TabletEvent_Callback = void (*)(QToolBar*, QTabletEvent*);
    using QToolBar_DragEnterEvent_Callback = void (*)(QToolBar*, QDragEnterEvent*);
    using QToolBar_DragMoveEvent_Callback = void (*)(QToolBar*, QDragMoveEvent*);
    using QToolBar_DragLeaveEvent_Callback = void (*)(QToolBar*, QDragLeaveEvent*);
    using QToolBar_DropEvent_Callback = void (*)(QToolBar*, QDropEvent*);
    using QToolBar_ShowEvent_Callback = void (*)(QToolBar*, QShowEvent*);
    using QToolBar_HideEvent_Callback = void (*)(QToolBar*, QHideEvent*);
    using QToolBar_NativeEvent_Callback = bool (*)(QToolBar*, libqt_string, void*, intptr_t*);
    using QToolBar_Metric_Callback = int (*)(const QToolBar*, int);
    using QToolBar_InitPainter_Callback = void (*)(const QToolBar*, QPainter*);
    using QToolBar_Redirected_Callback = QPaintDevice* (*)(const QToolBar*, QPoint*);
    using QToolBar_SharedPainter_Callback = QPainter* (*)();
    using QToolBar_InputMethodEvent_Callback = void (*)(QToolBar*, QInputMethodEvent*);
    using QToolBar_InputMethodQuery_Callback = QVariant* (*)(const QToolBar*, int);
    using QToolBar_FocusNextPrevChild_Callback = bool (*)(QToolBar*, bool);
    using QToolBar_EventFilter_Callback = bool (*)(QToolBar*, QObject*, QEvent*);
    using QToolBar_TimerEvent_Callback = void (*)(QToolBar*, QTimerEvent*);
    using QToolBar_ChildEvent_Callback = void (*)(QToolBar*, QChildEvent*);
    using QToolBar_CustomEvent_Callback = void (*)(QToolBar*, QEvent*);
    using QToolBar_ConnectNotify_Callback = void (*)(QToolBar*, QMetaMethod*);
    using QToolBar_DisconnectNotify_Callback = void (*)(QToolBar*, QMetaMethod*);
    using QToolBar_UpdateMicroFocus_Callback = void (*)();
    using QToolBar_Create_Callback = void (*)();
    using QToolBar_Destroy_Callback = void (*)();
    using QToolBar_FocusNextChild_Callback = bool (*)();
    using QToolBar_FocusPreviousChild_Callback = bool (*)();
    using QToolBar_Sender_Callback = QObject* (*)();
    using QToolBar_SenderSignalIndex_Callback = int (*)();
    using QToolBar_Receivers_Callback = int (*)(const QToolBar*, const char*);
    using QToolBar_IsSignalConnected_Callback = bool (*)(const QToolBar*, QMetaMethod*);
    using QToolBar_GetDecodedMetricF_Callback = double (*)(const QToolBar*, int, int);

  protected:
    // Instance callback storage
    QToolBar_MetaObject_Callback qtoolbar_metaobject_callback = nullptr;
    QToolBar_Metacast_Callback qtoolbar_metacast_callback = nullptr;
    QToolBar_Metacall_Callback qtoolbar_metacall_callback = nullptr;
    QToolBar_ActionEvent_Callback qtoolbar_actionevent_callback = nullptr;
    QToolBar_ChangeEvent_Callback qtoolbar_changeevent_callback = nullptr;
    QToolBar_PaintEvent_Callback qtoolbar_paintevent_callback = nullptr;
    QToolBar_Event_Callback qtoolbar_event_callback = nullptr;
    QToolBar_InitStyleOption_Callback qtoolbar_initstyleoption_callback = nullptr;
    QToolBar_DevType_Callback qtoolbar_devtype_callback = nullptr;
    QToolBar_SetVisible_Callback qtoolbar_setvisible_callback = nullptr;
    QToolBar_SizeHint_Callback qtoolbar_sizehint_callback = nullptr;
    QToolBar_MinimumSizeHint_Callback qtoolbar_minimumsizehint_callback = nullptr;
    QToolBar_HeightForWidth_Callback qtoolbar_heightforwidth_callback = nullptr;
    QToolBar_HasHeightForWidth_Callback qtoolbar_hasheightforwidth_callback = nullptr;
    QToolBar_PaintEngine_Callback qtoolbar_paintengine_callback = nullptr;
    QToolBar_MousePressEvent_Callback qtoolbar_mousepressevent_callback = nullptr;
    QToolBar_MouseReleaseEvent_Callback qtoolbar_mousereleaseevent_callback = nullptr;
    QToolBar_MouseDoubleClickEvent_Callback qtoolbar_mousedoubleclickevent_callback = nullptr;
    QToolBar_MouseMoveEvent_Callback qtoolbar_mousemoveevent_callback = nullptr;
    QToolBar_WheelEvent_Callback qtoolbar_wheelevent_callback = nullptr;
    QToolBar_KeyPressEvent_Callback qtoolbar_keypressevent_callback = nullptr;
    QToolBar_KeyReleaseEvent_Callback qtoolbar_keyreleaseevent_callback = nullptr;
    QToolBar_FocusInEvent_Callback qtoolbar_focusinevent_callback = nullptr;
    QToolBar_FocusOutEvent_Callback qtoolbar_focusoutevent_callback = nullptr;
    QToolBar_EnterEvent_Callback qtoolbar_enterevent_callback = nullptr;
    QToolBar_LeaveEvent_Callback qtoolbar_leaveevent_callback = nullptr;
    QToolBar_MoveEvent_Callback qtoolbar_moveevent_callback = nullptr;
    QToolBar_ResizeEvent_Callback qtoolbar_resizeevent_callback = nullptr;
    QToolBar_CloseEvent_Callback qtoolbar_closeevent_callback = nullptr;
    QToolBar_ContextMenuEvent_Callback qtoolbar_contextmenuevent_callback = nullptr;
    QToolBar_TabletEvent_Callback qtoolbar_tabletevent_callback = nullptr;
    QToolBar_DragEnterEvent_Callback qtoolbar_dragenterevent_callback = nullptr;
    QToolBar_DragMoveEvent_Callback qtoolbar_dragmoveevent_callback = nullptr;
    QToolBar_DragLeaveEvent_Callback qtoolbar_dragleaveevent_callback = nullptr;
    QToolBar_DropEvent_Callback qtoolbar_dropevent_callback = nullptr;
    QToolBar_ShowEvent_Callback qtoolbar_showevent_callback = nullptr;
    QToolBar_HideEvent_Callback qtoolbar_hideevent_callback = nullptr;
    QToolBar_NativeEvent_Callback qtoolbar_nativeevent_callback = nullptr;
    QToolBar_Metric_Callback qtoolbar_metric_callback = nullptr;
    QToolBar_InitPainter_Callback qtoolbar_initpainter_callback = nullptr;
    QToolBar_Redirected_Callback qtoolbar_redirected_callback = nullptr;
    QToolBar_SharedPainter_Callback qtoolbar_sharedpainter_callback = nullptr;
    QToolBar_InputMethodEvent_Callback qtoolbar_inputmethodevent_callback = nullptr;
    QToolBar_InputMethodQuery_Callback qtoolbar_inputmethodquery_callback = nullptr;
    QToolBar_FocusNextPrevChild_Callback qtoolbar_focusnextprevchild_callback = nullptr;
    QToolBar_EventFilter_Callback qtoolbar_eventfilter_callback = nullptr;
    QToolBar_TimerEvent_Callback qtoolbar_timerevent_callback = nullptr;
    QToolBar_ChildEvent_Callback qtoolbar_childevent_callback = nullptr;
    QToolBar_CustomEvent_Callback qtoolbar_customevent_callback = nullptr;
    QToolBar_ConnectNotify_Callback qtoolbar_connectnotify_callback = nullptr;
    QToolBar_DisconnectNotify_Callback qtoolbar_disconnectnotify_callback = nullptr;
    QToolBar_UpdateMicroFocus_Callback qtoolbar_updatemicrofocus_callback = nullptr;
    QToolBar_Create_Callback qtoolbar_create_callback = nullptr;
    QToolBar_Destroy_Callback qtoolbar_destroy_callback = nullptr;
    QToolBar_FocusNextChild_Callback qtoolbar_focusnextchild_callback = nullptr;
    QToolBar_FocusPreviousChild_Callback qtoolbar_focuspreviouschild_callback = nullptr;
    QToolBar_Sender_Callback qtoolbar_sender_callback = nullptr;
    QToolBar_SenderSignalIndex_Callback qtoolbar_sendersignalindex_callback = nullptr;
    QToolBar_Receivers_Callback qtoolbar_receivers_callback = nullptr;
    QToolBar_IsSignalConnected_Callback qtoolbar_issignalconnected_callback = nullptr;
    QToolBar_GetDecodedMetricF_Callback qtoolbar_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qtoolbar_metaobject_isbase = false;
    mutable bool qtoolbar_metacast_isbase = false;
    mutable bool qtoolbar_metacall_isbase = false;
    mutable bool qtoolbar_actionevent_isbase = false;
    mutable bool qtoolbar_changeevent_isbase = false;
    mutable bool qtoolbar_paintevent_isbase = false;
    mutable bool qtoolbar_event_isbase = false;
    mutable bool qtoolbar_initstyleoption_isbase = false;
    mutable bool qtoolbar_devtype_isbase = false;
    mutable bool qtoolbar_setvisible_isbase = false;
    mutable bool qtoolbar_sizehint_isbase = false;
    mutable bool qtoolbar_minimumsizehint_isbase = false;
    mutable bool qtoolbar_heightforwidth_isbase = false;
    mutable bool qtoolbar_hasheightforwidth_isbase = false;
    mutable bool qtoolbar_paintengine_isbase = false;
    mutable bool qtoolbar_mousepressevent_isbase = false;
    mutable bool qtoolbar_mousereleaseevent_isbase = false;
    mutable bool qtoolbar_mousedoubleclickevent_isbase = false;
    mutable bool qtoolbar_mousemoveevent_isbase = false;
    mutable bool qtoolbar_wheelevent_isbase = false;
    mutable bool qtoolbar_keypressevent_isbase = false;
    mutable bool qtoolbar_keyreleaseevent_isbase = false;
    mutable bool qtoolbar_focusinevent_isbase = false;
    mutable bool qtoolbar_focusoutevent_isbase = false;
    mutable bool qtoolbar_enterevent_isbase = false;
    mutable bool qtoolbar_leaveevent_isbase = false;
    mutable bool qtoolbar_moveevent_isbase = false;
    mutable bool qtoolbar_resizeevent_isbase = false;
    mutable bool qtoolbar_closeevent_isbase = false;
    mutable bool qtoolbar_contextmenuevent_isbase = false;
    mutable bool qtoolbar_tabletevent_isbase = false;
    mutable bool qtoolbar_dragenterevent_isbase = false;
    mutable bool qtoolbar_dragmoveevent_isbase = false;
    mutable bool qtoolbar_dragleaveevent_isbase = false;
    mutable bool qtoolbar_dropevent_isbase = false;
    mutable bool qtoolbar_showevent_isbase = false;
    mutable bool qtoolbar_hideevent_isbase = false;
    mutable bool qtoolbar_nativeevent_isbase = false;
    mutable bool qtoolbar_metric_isbase = false;
    mutable bool qtoolbar_initpainter_isbase = false;
    mutable bool qtoolbar_redirected_isbase = false;
    mutable bool qtoolbar_sharedpainter_isbase = false;
    mutable bool qtoolbar_inputmethodevent_isbase = false;
    mutable bool qtoolbar_inputmethodquery_isbase = false;
    mutable bool qtoolbar_focusnextprevchild_isbase = false;
    mutable bool qtoolbar_eventfilter_isbase = false;
    mutable bool qtoolbar_timerevent_isbase = false;
    mutable bool qtoolbar_childevent_isbase = false;
    mutable bool qtoolbar_customevent_isbase = false;
    mutable bool qtoolbar_connectnotify_isbase = false;
    mutable bool qtoolbar_disconnectnotify_isbase = false;
    mutable bool qtoolbar_updatemicrofocus_isbase = false;
    mutable bool qtoolbar_create_isbase = false;
    mutable bool qtoolbar_destroy_isbase = false;
    mutable bool qtoolbar_focusnextchild_isbase = false;
    mutable bool qtoolbar_focuspreviouschild_isbase = false;
    mutable bool qtoolbar_sender_isbase = false;
    mutable bool qtoolbar_sendersignalindex_isbase = false;
    mutable bool qtoolbar_receivers_isbase = false;
    mutable bool qtoolbar_issignalconnected_isbase = false;
    mutable bool qtoolbar_getdecodedmetricf_isbase = false;

  public:
    VirtualQToolBar(QWidget* parent) : QToolBar(parent) {};
    VirtualQToolBar(const QString& title) : QToolBar(title) {};
    VirtualQToolBar() : QToolBar() {};
    VirtualQToolBar(const QString& title, QWidget* parent) : QToolBar(title, parent) {};

    // Callback setters
    inline void setQToolBar_MetaObject_Callback(QToolBar_MetaObject_Callback cb) { qtoolbar_metaobject_callback = cb; }
    inline void setQToolBar_Metacast_Callback(QToolBar_Metacast_Callback cb) { qtoolbar_metacast_callback = cb; }
    inline void setQToolBar_Metacall_Callback(QToolBar_Metacall_Callback cb) { qtoolbar_metacall_callback = cb; }
    inline void setQToolBar_ActionEvent_Callback(QToolBar_ActionEvent_Callback cb) { qtoolbar_actionevent_callback = cb; }
    inline void setQToolBar_ChangeEvent_Callback(QToolBar_ChangeEvent_Callback cb) { qtoolbar_changeevent_callback = cb; }
    inline void setQToolBar_PaintEvent_Callback(QToolBar_PaintEvent_Callback cb) { qtoolbar_paintevent_callback = cb; }
    inline void setQToolBar_Event_Callback(QToolBar_Event_Callback cb) { qtoolbar_event_callback = cb; }
    inline void setQToolBar_InitStyleOption_Callback(QToolBar_InitStyleOption_Callback cb) { qtoolbar_initstyleoption_callback = cb; }
    inline void setQToolBar_DevType_Callback(QToolBar_DevType_Callback cb) { qtoolbar_devtype_callback = cb; }
    inline void setQToolBar_SetVisible_Callback(QToolBar_SetVisible_Callback cb) { qtoolbar_setvisible_callback = cb; }
    inline void setQToolBar_SizeHint_Callback(QToolBar_SizeHint_Callback cb) { qtoolbar_sizehint_callback = cb; }
    inline void setQToolBar_MinimumSizeHint_Callback(QToolBar_MinimumSizeHint_Callback cb) { qtoolbar_minimumsizehint_callback = cb; }
    inline void setQToolBar_HeightForWidth_Callback(QToolBar_HeightForWidth_Callback cb) { qtoolbar_heightforwidth_callback = cb; }
    inline void setQToolBar_HasHeightForWidth_Callback(QToolBar_HasHeightForWidth_Callback cb) { qtoolbar_hasheightforwidth_callback = cb; }
    inline void setQToolBar_PaintEngine_Callback(QToolBar_PaintEngine_Callback cb) { qtoolbar_paintengine_callback = cb; }
    inline void setQToolBar_MousePressEvent_Callback(QToolBar_MousePressEvent_Callback cb) { qtoolbar_mousepressevent_callback = cb; }
    inline void setQToolBar_MouseReleaseEvent_Callback(QToolBar_MouseReleaseEvent_Callback cb) { qtoolbar_mousereleaseevent_callback = cb; }
    inline void setQToolBar_MouseDoubleClickEvent_Callback(QToolBar_MouseDoubleClickEvent_Callback cb) { qtoolbar_mousedoubleclickevent_callback = cb; }
    inline void setQToolBar_MouseMoveEvent_Callback(QToolBar_MouseMoveEvent_Callback cb) { qtoolbar_mousemoveevent_callback = cb; }
    inline void setQToolBar_WheelEvent_Callback(QToolBar_WheelEvent_Callback cb) { qtoolbar_wheelevent_callback = cb; }
    inline void setQToolBar_KeyPressEvent_Callback(QToolBar_KeyPressEvent_Callback cb) { qtoolbar_keypressevent_callback = cb; }
    inline void setQToolBar_KeyReleaseEvent_Callback(QToolBar_KeyReleaseEvent_Callback cb) { qtoolbar_keyreleaseevent_callback = cb; }
    inline void setQToolBar_FocusInEvent_Callback(QToolBar_FocusInEvent_Callback cb) { qtoolbar_focusinevent_callback = cb; }
    inline void setQToolBar_FocusOutEvent_Callback(QToolBar_FocusOutEvent_Callback cb) { qtoolbar_focusoutevent_callback = cb; }
    inline void setQToolBar_EnterEvent_Callback(QToolBar_EnterEvent_Callback cb) { qtoolbar_enterevent_callback = cb; }
    inline void setQToolBar_LeaveEvent_Callback(QToolBar_LeaveEvent_Callback cb) { qtoolbar_leaveevent_callback = cb; }
    inline void setQToolBar_MoveEvent_Callback(QToolBar_MoveEvent_Callback cb) { qtoolbar_moveevent_callback = cb; }
    inline void setQToolBar_ResizeEvent_Callback(QToolBar_ResizeEvent_Callback cb) { qtoolbar_resizeevent_callback = cb; }
    inline void setQToolBar_CloseEvent_Callback(QToolBar_CloseEvent_Callback cb) { qtoolbar_closeevent_callback = cb; }
    inline void setQToolBar_ContextMenuEvent_Callback(QToolBar_ContextMenuEvent_Callback cb) { qtoolbar_contextmenuevent_callback = cb; }
    inline void setQToolBar_TabletEvent_Callback(QToolBar_TabletEvent_Callback cb) { qtoolbar_tabletevent_callback = cb; }
    inline void setQToolBar_DragEnterEvent_Callback(QToolBar_DragEnterEvent_Callback cb) { qtoolbar_dragenterevent_callback = cb; }
    inline void setQToolBar_DragMoveEvent_Callback(QToolBar_DragMoveEvent_Callback cb) { qtoolbar_dragmoveevent_callback = cb; }
    inline void setQToolBar_DragLeaveEvent_Callback(QToolBar_DragLeaveEvent_Callback cb) { qtoolbar_dragleaveevent_callback = cb; }
    inline void setQToolBar_DropEvent_Callback(QToolBar_DropEvent_Callback cb) { qtoolbar_dropevent_callback = cb; }
    inline void setQToolBar_ShowEvent_Callback(QToolBar_ShowEvent_Callback cb) { qtoolbar_showevent_callback = cb; }
    inline void setQToolBar_HideEvent_Callback(QToolBar_HideEvent_Callback cb) { qtoolbar_hideevent_callback = cb; }
    inline void setQToolBar_NativeEvent_Callback(QToolBar_NativeEvent_Callback cb) { qtoolbar_nativeevent_callback = cb; }
    inline void setQToolBar_Metric_Callback(QToolBar_Metric_Callback cb) { qtoolbar_metric_callback = cb; }
    inline void setQToolBar_InitPainter_Callback(QToolBar_InitPainter_Callback cb) { qtoolbar_initpainter_callback = cb; }
    inline void setQToolBar_Redirected_Callback(QToolBar_Redirected_Callback cb) { qtoolbar_redirected_callback = cb; }
    inline void setQToolBar_SharedPainter_Callback(QToolBar_SharedPainter_Callback cb) { qtoolbar_sharedpainter_callback = cb; }
    inline void setQToolBar_InputMethodEvent_Callback(QToolBar_InputMethodEvent_Callback cb) { qtoolbar_inputmethodevent_callback = cb; }
    inline void setQToolBar_InputMethodQuery_Callback(QToolBar_InputMethodQuery_Callback cb) { qtoolbar_inputmethodquery_callback = cb; }
    inline void setQToolBar_FocusNextPrevChild_Callback(QToolBar_FocusNextPrevChild_Callback cb) { qtoolbar_focusnextprevchild_callback = cb; }
    inline void setQToolBar_EventFilter_Callback(QToolBar_EventFilter_Callback cb) { qtoolbar_eventfilter_callback = cb; }
    inline void setQToolBar_TimerEvent_Callback(QToolBar_TimerEvent_Callback cb) { qtoolbar_timerevent_callback = cb; }
    inline void setQToolBar_ChildEvent_Callback(QToolBar_ChildEvent_Callback cb) { qtoolbar_childevent_callback = cb; }
    inline void setQToolBar_CustomEvent_Callback(QToolBar_CustomEvent_Callback cb) { qtoolbar_customevent_callback = cb; }
    inline void setQToolBar_ConnectNotify_Callback(QToolBar_ConnectNotify_Callback cb) { qtoolbar_connectnotify_callback = cb; }
    inline void setQToolBar_DisconnectNotify_Callback(QToolBar_DisconnectNotify_Callback cb) { qtoolbar_disconnectnotify_callback = cb; }
    inline void setQToolBar_UpdateMicroFocus_Callback(QToolBar_UpdateMicroFocus_Callback cb) { qtoolbar_updatemicrofocus_callback = cb; }
    inline void setQToolBar_Create_Callback(QToolBar_Create_Callback cb) { qtoolbar_create_callback = cb; }
    inline void setQToolBar_Destroy_Callback(QToolBar_Destroy_Callback cb) { qtoolbar_destroy_callback = cb; }
    inline void setQToolBar_FocusNextChild_Callback(QToolBar_FocusNextChild_Callback cb) { qtoolbar_focusnextchild_callback = cb; }
    inline void setQToolBar_FocusPreviousChild_Callback(QToolBar_FocusPreviousChild_Callback cb) { qtoolbar_focuspreviouschild_callback = cb; }
    inline void setQToolBar_Sender_Callback(QToolBar_Sender_Callback cb) { qtoolbar_sender_callback = cb; }
    inline void setQToolBar_SenderSignalIndex_Callback(QToolBar_SenderSignalIndex_Callback cb) { qtoolbar_sendersignalindex_callback = cb; }
    inline void setQToolBar_Receivers_Callback(QToolBar_Receivers_Callback cb) { qtoolbar_receivers_callback = cb; }
    inline void setQToolBar_IsSignalConnected_Callback(QToolBar_IsSignalConnected_Callback cb) { qtoolbar_issignalconnected_callback = cb; }
    inline void setQToolBar_GetDecodedMetricF_Callback(QToolBar_GetDecodedMetricF_Callback cb) { qtoolbar_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQToolBar_MetaObject_IsBase(bool value) const { qtoolbar_metaobject_isbase = value; }
    inline void setQToolBar_Metacast_IsBase(bool value) const { qtoolbar_metacast_isbase = value; }
    inline void setQToolBar_Metacall_IsBase(bool value) const { qtoolbar_metacall_isbase = value; }
    inline void setQToolBar_ActionEvent_IsBase(bool value) const { qtoolbar_actionevent_isbase = value; }
    inline void setQToolBar_ChangeEvent_IsBase(bool value) const { qtoolbar_changeevent_isbase = value; }
    inline void setQToolBar_PaintEvent_IsBase(bool value) const { qtoolbar_paintevent_isbase = value; }
    inline void setQToolBar_Event_IsBase(bool value) const { qtoolbar_event_isbase = value; }
    inline void setQToolBar_InitStyleOption_IsBase(bool value) const { qtoolbar_initstyleoption_isbase = value; }
    inline void setQToolBar_DevType_IsBase(bool value) const { qtoolbar_devtype_isbase = value; }
    inline void setQToolBar_SetVisible_IsBase(bool value) const { qtoolbar_setvisible_isbase = value; }
    inline void setQToolBar_SizeHint_IsBase(bool value) const { qtoolbar_sizehint_isbase = value; }
    inline void setQToolBar_MinimumSizeHint_IsBase(bool value) const { qtoolbar_minimumsizehint_isbase = value; }
    inline void setQToolBar_HeightForWidth_IsBase(bool value) const { qtoolbar_heightforwidth_isbase = value; }
    inline void setQToolBar_HasHeightForWidth_IsBase(bool value) const { qtoolbar_hasheightforwidth_isbase = value; }
    inline void setQToolBar_PaintEngine_IsBase(bool value) const { qtoolbar_paintengine_isbase = value; }
    inline void setQToolBar_MousePressEvent_IsBase(bool value) const { qtoolbar_mousepressevent_isbase = value; }
    inline void setQToolBar_MouseReleaseEvent_IsBase(bool value) const { qtoolbar_mousereleaseevent_isbase = value; }
    inline void setQToolBar_MouseDoubleClickEvent_IsBase(bool value) const { qtoolbar_mousedoubleclickevent_isbase = value; }
    inline void setQToolBar_MouseMoveEvent_IsBase(bool value) const { qtoolbar_mousemoveevent_isbase = value; }
    inline void setQToolBar_WheelEvent_IsBase(bool value) const { qtoolbar_wheelevent_isbase = value; }
    inline void setQToolBar_KeyPressEvent_IsBase(bool value) const { qtoolbar_keypressevent_isbase = value; }
    inline void setQToolBar_KeyReleaseEvent_IsBase(bool value) const { qtoolbar_keyreleaseevent_isbase = value; }
    inline void setQToolBar_FocusInEvent_IsBase(bool value) const { qtoolbar_focusinevent_isbase = value; }
    inline void setQToolBar_FocusOutEvent_IsBase(bool value) const { qtoolbar_focusoutevent_isbase = value; }
    inline void setQToolBar_EnterEvent_IsBase(bool value) const { qtoolbar_enterevent_isbase = value; }
    inline void setQToolBar_LeaveEvent_IsBase(bool value) const { qtoolbar_leaveevent_isbase = value; }
    inline void setQToolBar_MoveEvent_IsBase(bool value) const { qtoolbar_moveevent_isbase = value; }
    inline void setQToolBar_ResizeEvent_IsBase(bool value) const { qtoolbar_resizeevent_isbase = value; }
    inline void setQToolBar_CloseEvent_IsBase(bool value) const { qtoolbar_closeevent_isbase = value; }
    inline void setQToolBar_ContextMenuEvent_IsBase(bool value) const { qtoolbar_contextmenuevent_isbase = value; }
    inline void setQToolBar_TabletEvent_IsBase(bool value) const { qtoolbar_tabletevent_isbase = value; }
    inline void setQToolBar_DragEnterEvent_IsBase(bool value) const { qtoolbar_dragenterevent_isbase = value; }
    inline void setQToolBar_DragMoveEvent_IsBase(bool value) const { qtoolbar_dragmoveevent_isbase = value; }
    inline void setQToolBar_DragLeaveEvent_IsBase(bool value) const { qtoolbar_dragleaveevent_isbase = value; }
    inline void setQToolBar_DropEvent_IsBase(bool value) const { qtoolbar_dropevent_isbase = value; }
    inline void setQToolBar_ShowEvent_IsBase(bool value) const { qtoolbar_showevent_isbase = value; }
    inline void setQToolBar_HideEvent_IsBase(bool value) const { qtoolbar_hideevent_isbase = value; }
    inline void setQToolBar_NativeEvent_IsBase(bool value) const { qtoolbar_nativeevent_isbase = value; }
    inline void setQToolBar_Metric_IsBase(bool value) const { qtoolbar_metric_isbase = value; }
    inline void setQToolBar_InitPainter_IsBase(bool value) const { qtoolbar_initpainter_isbase = value; }
    inline void setQToolBar_Redirected_IsBase(bool value) const { qtoolbar_redirected_isbase = value; }
    inline void setQToolBar_SharedPainter_IsBase(bool value) const { qtoolbar_sharedpainter_isbase = value; }
    inline void setQToolBar_InputMethodEvent_IsBase(bool value) const { qtoolbar_inputmethodevent_isbase = value; }
    inline void setQToolBar_InputMethodQuery_IsBase(bool value) const { qtoolbar_inputmethodquery_isbase = value; }
    inline void setQToolBar_FocusNextPrevChild_IsBase(bool value) const { qtoolbar_focusnextprevchild_isbase = value; }
    inline void setQToolBar_EventFilter_IsBase(bool value) const { qtoolbar_eventfilter_isbase = value; }
    inline void setQToolBar_TimerEvent_IsBase(bool value) const { qtoolbar_timerevent_isbase = value; }
    inline void setQToolBar_ChildEvent_IsBase(bool value) const { qtoolbar_childevent_isbase = value; }
    inline void setQToolBar_CustomEvent_IsBase(bool value) const { qtoolbar_customevent_isbase = value; }
    inline void setQToolBar_ConnectNotify_IsBase(bool value) const { qtoolbar_connectnotify_isbase = value; }
    inline void setQToolBar_DisconnectNotify_IsBase(bool value) const { qtoolbar_disconnectnotify_isbase = value; }
    inline void setQToolBar_UpdateMicroFocus_IsBase(bool value) const { qtoolbar_updatemicrofocus_isbase = value; }
    inline void setQToolBar_Create_IsBase(bool value) const { qtoolbar_create_isbase = value; }
    inline void setQToolBar_Destroy_IsBase(bool value) const { qtoolbar_destroy_isbase = value; }
    inline void setQToolBar_FocusNextChild_IsBase(bool value) const { qtoolbar_focusnextchild_isbase = value; }
    inline void setQToolBar_FocusPreviousChild_IsBase(bool value) const { qtoolbar_focuspreviouschild_isbase = value; }
    inline void setQToolBar_Sender_IsBase(bool value) const { qtoolbar_sender_isbase = value; }
    inline void setQToolBar_SenderSignalIndex_IsBase(bool value) const { qtoolbar_sendersignalindex_isbase = value; }
    inline void setQToolBar_Receivers_IsBase(bool value) const { qtoolbar_receivers_isbase = value; }
    inline void setQToolBar_IsSignalConnected_IsBase(bool value) const { qtoolbar_issignalconnected_isbase = value; }
    inline void setQToolBar_GetDecodedMetricF_IsBase(bool value) const { qtoolbar_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtoolbar_metaobject_isbase) {
            qtoolbar_metaobject_isbase = false;
            return QToolBar::metaObject();
        }
        auto metaobject_cb = qtoolbar_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QToolBar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtoolbar_metacast_isbase) {
            qtoolbar_metacast_isbase = false;
            return QToolBar::qt_metacast(param1);
        }
        auto metacast_cb = qtoolbar_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QToolBar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtoolbar_metacall_isbase) {
            qtoolbar_metacall_isbase = false;
            return QToolBar::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qtoolbar_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QToolBar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtoolbar_actionevent_isbase) {
            qtoolbar_actionevent_isbase = false;
            QToolBar::actionEvent(event);
            return;
        }
        auto actionevent_cb = qtoolbar_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QToolBar::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qtoolbar_changeevent_isbase) {
            qtoolbar_changeevent_isbase = false;
            QToolBar::changeEvent(event);
            return;
        }
        auto changeevent_cb = qtoolbar_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = event;

            changeevent_cb(this, cbval1);
            return;
        }
        QToolBar::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qtoolbar_paintevent_isbase) {
            qtoolbar_paintevent_isbase = false;
            QToolBar::paintEvent(event);
            return;
        }
        auto paintevent_cb = qtoolbar_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        QToolBar::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtoolbar_event_isbase) {
            qtoolbar_event_isbase = false;
            return QToolBar::event(event);
        }
        auto event_cb = qtoolbar_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QToolBar::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionToolBar* option) const override {
        if (qtoolbar_initstyleoption_isbase) {
            qtoolbar_initstyleoption_isbase = false;
            QToolBar::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qtoolbar_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionToolBar* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QToolBar::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtoolbar_devtype_isbase) {
            qtoolbar_devtype_isbase = false;
            return QToolBar::devType();
        }
        auto devtype_cb = qtoolbar_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QToolBar::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtoolbar_setvisible_isbase) {
            qtoolbar_setvisible_isbase = false;
            QToolBar::setVisible(visible);
            return;
        }
        auto setvisible_cb = qtoolbar_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QToolBar::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtoolbar_sizehint_isbase) {
            qtoolbar_sizehint_isbase = false;
            return QToolBar::sizeHint();
        }
        auto sizehint_cb = qtoolbar_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QToolBar::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtoolbar_minimumsizehint_isbase) {
            qtoolbar_minimumsizehint_isbase = false;
            return QToolBar::minimumSizeHint();
        }
        auto minimumsizehint_cb = qtoolbar_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QToolBar::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtoolbar_heightforwidth_isbase) {
            qtoolbar_heightforwidth_isbase = false;
            return QToolBar::heightForWidth(param1);
        }
        auto heightforwidth_cb = qtoolbar_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QToolBar::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtoolbar_hasheightforwidth_isbase) {
            qtoolbar_hasheightforwidth_isbase = false;
            return QToolBar::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qtoolbar_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QToolBar::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtoolbar_paintengine_isbase) {
            qtoolbar_paintengine_isbase = false;
            return QToolBar::paintEngine();
        }
        auto paintengine_cb = qtoolbar_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QToolBar::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtoolbar_mousepressevent_isbase) {
            qtoolbar_mousepressevent_isbase = false;
            QToolBar::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qtoolbar_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QToolBar::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtoolbar_mousereleaseevent_isbase) {
            qtoolbar_mousereleaseevent_isbase = false;
            QToolBar::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qtoolbar_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QToolBar::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtoolbar_mousedoubleclickevent_isbase) {
            qtoolbar_mousedoubleclickevent_isbase = false;
            QToolBar::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qtoolbar_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QToolBar::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtoolbar_mousemoveevent_isbase) {
            qtoolbar_mousemoveevent_isbase = false;
            QToolBar::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qtoolbar_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QToolBar::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qtoolbar_wheelevent_isbase) {
            qtoolbar_wheelevent_isbase = false;
            QToolBar::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qtoolbar_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QToolBar::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtoolbar_keypressevent_isbase) {
            qtoolbar_keypressevent_isbase = false;
            QToolBar::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qtoolbar_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QToolBar::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtoolbar_keyreleaseevent_isbase) {
            qtoolbar_keyreleaseevent_isbase = false;
            QToolBar::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qtoolbar_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QToolBar::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtoolbar_focusinevent_isbase) {
            qtoolbar_focusinevent_isbase = false;
            QToolBar::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qtoolbar_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QToolBar::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtoolbar_focusoutevent_isbase) {
            qtoolbar_focusoutevent_isbase = false;
            QToolBar::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qtoolbar_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QToolBar::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtoolbar_enterevent_isbase) {
            qtoolbar_enterevent_isbase = false;
            QToolBar::enterEvent(event);
            return;
        }
        auto enterevent_cb = qtoolbar_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QToolBar::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtoolbar_leaveevent_isbase) {
            qtoolbar_leaveevent_isbase = false;
            QToolBar::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qtoolbar_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QToolBar::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtoolbar_moveevent_isbase) {
            qtoolbar_moveevent_isbase = false;
            QToolBar::moveEvent(event);
            return;
        }
        auto moveevent_cb = qtoolbar_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QToolBar::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtoolbar_resizeevent_isbase) {
            qtoolbar_resizeevent_isbase = false;
            QToolBar::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qtoolbar_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QToolBar::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtoolbar_closeevent_isbase) {
            qtoolbar_closeevent_isbase = false;
            QToolBar::closeEvent(event);
            return;
        }
        auto closeevent_cb = qtoolbar_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QToolBar::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qtoolbar_contextmenuevent_isbase) {
            qtoolbar_contextmenuevent_isbase = false;
            QToolBar::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qtoolbar_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QToolBar::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtoolbar_tabletevent_isbase) {
            qtoolbar_tabletevent_isbase = false;
            QToolBar::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qtoolbar_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QToolBar::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtoolbar_dragenterevent_isbase) {
            qtoolbar_dragenterevent_isbase = false;
            QToolBar::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qtoolbar_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QToolBar::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtoolbar_dragmoveevent_isbase) {
            qtoolbar_dragmoveevent_isbase = false;
            QToolBar::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qtoolbar_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QToolBar::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtoolbar_dragleaveevent_isbase) {
            qtoolbar_dragleaveevent_isbase = false;
            QToolBar::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qtoolbar_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QToolBar::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtoolbar_dropevent_isbase) {
            qtoolbar_dropevent_isbase = false;
            QToolBar::dropEvent(event);
            return;
        }
        auto dropevent_cb = qtoolbar_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QToolBar::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtoolbar_showevent_isbase) {
            qtoolbar_showevent_isbase = false;
            QToolBar::showEvent(event);
            return;
        }
        auto showevent_cb = qtoolbar_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QToolBar::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtoolbar_hideevent_isbase) {
            qtoolbar_hideevent_isbase = false;
            QToolBar::hideEvent(event);
            return;
        }
        auto hideevent_cb = qtoolbar_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QToolBar::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtoolbar_nativeevent_isbase) {
            qtoolbar_nativeevent_isbase = false;
            return QToolBar::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qtoolbar_nativeevent_callback;
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
        return QToolBar::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtoolbar_metric_isbase) {
            qtoolbar_metric_isbase = false;
            return QToolBar::metric(param1);
        }
        auto metric_cb = qtoolbar_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QToolBar::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtoolbar_initpainter_isbase) {
            qtoolbar_initpainter_isbase = false;
            QToolBar::initPainter(painter);
            return;
        }
        auto initpainter_cb = qtoolbar_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QToolBar::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtoolbar_redirected_isbase) {
            qtoolbar_redirected_isbase = false;
            return QToolBar::redirected(offset);
        }
        auto redirected_cb = qtoolbar_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QToolBar::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtoolbar_sharedpainter_isbase) {
            qtoolbar_sharedpainter_isbase = false;
            return QToolBar::sharedPainter();
        }
        auto sharedpainter_cb = qtoolbar_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QToolBar::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtoolbar_inputmethodevent_isbase) {
            qtoolbar_inputmethodevent_isbase = false;
            QToolBar::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qtoolbar_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QToolBar::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qtoolbar_inputmethodquery_isbase) {
            qtoolbar_inputmethodquery_isbase = false;
            return QToolBar::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qtoolbar_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QToolBar::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtoolbar_focusnextprevchild_isbase) {
            qtoolbar_focusnextprevchild_isbase = false;
            return QToolBar::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qtoolbar_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QToolBar::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtoolbar_eventfilter_isbase) {
            qtoolbar_eventfilter_isbase = false;
            return QToolBar::eventFilter(watched, event);
        }
        auto eventfilter_cb = qtoolbar_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QToolBar::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtoolbar_timerevent_isbase) {
            qtoolbar_timerevent_isbase = false;
            QToolBar::timerEvent(event);
            return;
        }
        auto timerevent_cb = qtoolbar_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QToolBar::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtoolbar_childevent_isbase) {
            qtoolbar_childevent_isbase = false;
            QToolBar::childEvent(event);
            return;
        }
        auto childevent_cb = qtoolbar_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QToolBar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtoolbar_customevent_isbase) {
            qtoolbar_customevent_isbase = false;
            QToolBar::customEvent(event);
            return;
        }
        auto customevent_cb = qtoolbar_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QToolBar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtoolbar_connectnotify_isbase) {
            qtoolbar_connectnotify_isbase = false;
            QToolBar::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qtoolbar_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QToolBar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtoolbar_disconnectnotify_isbase) {
            qtoolbar_disconnectnotify_isbase = false;
            QToolBar::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qtoolbar_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QToolBar::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtoolbar_updatemicrofocus_isbase) {
            qtoolbar_updatemicrofocus_isbase = false;
            QToolBar::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qtoolbar_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QToolBar::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtoolbar_create_isbase) {
            qtoolbar_create_isbase = false;
            QToolBar::create();
            return;
        }
        auto create_cb = qtoolbar_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QToolBar::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtoolbar_destroy_isbase) {
            qtoolbar_destroy_isbase = false;
            QToolBar::destroy();
            return;
        }
        auto destroy_cb = qtoolbar_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QToolBar::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtoolbar_focusnextchild_isbase) {
            qtoolbar_focusnextchild_isbase = false;
            return QToolBar::focusNextChild();
        }
        auto focusnextchild_cb = qtoolbar_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QToolBar::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtoolbar_focuspreviouschild_isbase) {
            qtoolbar_focuspreviouschild_isbase = false;
            return QToolBar::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qtoolbar_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QToolBar::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtoolbar_sender_isbase) {
            qtoolbar_sender_isbase = false;
            return QToolBar::sender();
        }
        auto sender_cb = qtoolbar_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QToolBar::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtoolbar_sendersignalindex_isbase) {
            qtoolbar_sendersignalindex_isbase = false;
            return QToolBar::senderSignalIndex();
        }
        auto sendersignalindex_cb = qtoolbar_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QToolBar::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtoolbar_receivers_isbase) {
            qtoolbar_receivers_isbase = false;
            return QToolBar::receivers(signal);
        }
        auto receivers_cb = qtoolbar_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QToolBar::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtoolbar_issignalconnected_isbase) {
            qtoolbar_issignalconnected_isbase = false;
            return QToolBar::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qtoolbar_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QToolBar::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qtoolbar_getdecodedmetricf_isbase) {
            qtoolbar_getdecodedmetricf_isbase = false;
            return QToolBar::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qtoolbar_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QToolBar::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void QToolBar_ActionEvent(QToolBar* self, QActionEvent* event);
    friend void QToolBar_SuperActionEvent(QToolBar* self, QActionEvent* event);
    friend void QToolBar_ChangeEvent(QToolBar* self, QEvent* event);
    friend void QToolBar_SuperChangeEvent(QToolBar* self, QEvent* event);
    friend void QToolBar_PaintEvent(QToolBar* self, QPaintEvent* event);
    friend void QToolBar_SuperPaintEvent(QToolBar* self, QPaintEvent* event);
    friend bool QToolBar_Event(QToolBar* self, QEvent* event);
    friend bool QToolBar_SuperEvent(QToolBar* self, QEvent* event);
    friend void QToolBar_InitStyleOption(const QToolBar* self, QStyleOptionToolBar* option);
    friend void QToolBar_SuperInitStyleOption(const QToolBar* self, QStyleOptionToolBar* option);
    friend void QToolBar_MousePressEvent(QToolBar* self, QMouseEvent* event);
    friend void QToolBar_SuperMousePressEvent(QToolBar* self, QMouseEvent* event);
    friend void QToolBar_MouseReleaseEvent(QToolBar* self, QMouseEvent* event);
    friend void QToolBar_SuperMouseReleaseEvent(QToolBar* self, QMouseEvent* event);
    friend void QToolBar_MouseDoubleClickEvent(QToolBar* self, QMouseEvent* event);
    friend void QToolBar_SuperMouseDoubleClickEvent(QToolBar* self, QMouseEvent* event);
    friend void QToolBar_MouseMoveEvent(QToolBar* self, QMouseEvent* event);
    friend void QToolBar_SuperMouseMoveEvent(QToolBar* self, QMouseEvent* event);
    friend void QToolBar_WheelEvent(QToolBar* self, QWheelEvent* event);
    friend void QToolBar_SuperWheelEvent(QToolBar* self, QWheelEvent* event);
    friend void QToolBar_KeyPressEvent(QToolBar* self, QKeyEvent* event);
    friend void QToolBar_SuperKeyPressEvent(QToolBar* self, QKeyEvent* event);
    friend void QToolBar_KeyReleaseEvent(QToolBar* self, QKeyEvent* event);
    friend void QToolBar_SuperKeyReleaseEvent(QToolBar* self, QKeyEvent* event);
    friend void QToolBar_FocusInEvent(QToolBar* self, QFocusEvent* event);
    friend void QToolBar_SuperFocusInEvent(QToolBar* self, QFocusEvent* event);
    friend void QToolBar_FocusOutEvent(QToolBar* self, QFocusEvent* event);
    friend void QToolBar_SuperFocusOutEvent(QToolBar* self, QFocusEvent* event);
    friend void QToolBar_EnterEvent(QToolBar* self, QEnterEvent* event);
    friend void QToolBar_SuperEnterEvent(QToolBar* self, QEnterEvent* event);
    friend void QToolBar_LeaveEvent(QToolBar* self, QEvent* event);
    friend void QToolBar_SuperLeaveEvent(QToolBar* self, QEvent* event);
    friend void QToolBar_MoveEvent(QToolBar* self, QMoveEvent* event);
    friend void QToolBar_SuperMoveEvent(QToolBar* self, QMoveEvent* event);
    friend void QToolBar_ResizeEvent(QToolBar* self, QResizeEvent* event);
    friend void QToolBar_SuperResizeEvent(QToolBar* self, QResizeEvent* event);
    friend void QToolBar_CloseEvent(QToolBar* self, QCloseEvent* event);
    friend void QToolBar_SuperCloseEvent(QToolBar* self, QCloseEvent* event);
    friend void QToolBar_ContextMenuEvent(QToolBar* self, QContextMenuEvent* event);
    friend void QToolBar_SuperContextMenuEvent(QToolBar* self, QContextMenuEvent* event);
    friend void QToolBar_TabletEvent(QToolBar* self, QTabletEvent* event);
    friend void QToolBar_SuperTabletEvent(QToolBar* self, QTabletEvent* event);
    friend void QToolBar_DragEnterEvent(QToolBar* self, QDragEnterEvent* event);
    friend void QToolBar_SuperDragEnterEvent(QToolBar* self, QDragEnterEvent* event);
    friend void QToolBar_DragMoveEvent(QToolBar* self, QDragMoveEvent* event);
    friend void QToolBar_SuperDragMoveEvent(QToolBar* self, QDragMoveEvent* event);
    friend void QToolBar_DragLeaveEvent(QToolBar* self, QDragLeaveEvent* event);
    friend void QToolBar_SuperDragLeaveEvent(QToolBar* self, QDragLeaveEvent* event);
    friend void QToolBar_DropEvent(QToolBar* self, QDropEvent* event);
    friend void QToolBar_SuperDropEvent(QToolBar* self, QDropEvent* event);
    friend void QToolBar_ShowEvent(QToolBar* self, QShowEvent* event);
    friend void QToolBar_SuperShowEvent(QToolBar* self, QShowEvent* event);
    friend void QToolBar_HideEvent(QToolBar* self, QHideEvent* event);
    friend void QToolBar_SuperHideEvent(QToolBar* self, QHideEvent* event);
    friend bool QToolBar_NativeEvent(QToolBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QToolBar_SuperNativeEvent(QToolBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QToolBar_Metric(const QToolBar* self, int param1);
    friend int QToolBar_SuperMetric(const QToolBar* self, int param1);
    friend void QToolBar_InitPainter(const QToolBar* self, QPainter* painter);
    friend void QToolBar_SuperInitPainter(const QToolBar* self, QPainter* painter);
    friend QPaintDevice* QToolBar_Redirected(const QToolBar* self, QPoint* offset);
    friend QPaintDevice* QToolBar_SuperRedirected(const QToolBar* self, QPoint* offset);
    friend QPainter* QToolBar_SharedPainter(const QToolBar* self);
    friend QPainter* QToolBar_SuperSharedPainter(const QToolBar* self);
    friend void QToolBar_InputMethodEvent(QToolBar* self, QInputMethodEvent* param1);
    friend void QToolBar_SuperInputMethodEvent(QToolBar* self, QInputMethodEvent* param1);
    friend bool QToolBar_FocusNextPrevChild(QToolBar* self, bool next);
    friend bool QToolBar_SuperFocusNextPrevChild(QToolBar* self, bool next);
    friend void QToolBar_TimerEvent(QToolBar* self, QTimerEvent* event);
    friend void QToolBar_SuperTimerEvent(QToolBar* self, QTimerEvent* event);
    friend void QToolBar_ChildEvent(QToolBar* self, QChildEvent* event);
    friend void QToolBar_SuperChildEvent(QToolBar* self, QChildEvent* event);
    friend void QToolBar_CustomEvent(QToolBar* self, QEvent* event);
    friend void QToolBar_SuperCustomEvent(QToolBar* self, QEvent* event);
    friend void QToolBar_ConnectNotify(QToolBar* self, const QMetaMethod* signal);
    friend void QToolBar_SuperConnectNotify(QToolBar* self, const QMetaMethod* signal);
    friend void QToolBar_DisconnectNotify(QToolBar* self, const QMetaMethod* signal);
    friend void QToolBar_SuperDisconnectNotify(QToolBar* self, const QMetaMethod* signal);
    friend void QToolBar_UpdateMicroFocus(QToolBar* self);
    friend void QToolBar_SuperUpdateMicroFocus(QToolBar* self);
    friend void QToolBar_Create(QToolBar* self);
    friend void QToolBar_SuperCreate(QToolBar* self);
    friend void QToolBar_Destroy(QToolBar* self);
    friend void QToolBar_SuperDestroy(QToolBar* self);
    friend bool QToolBar_FocusNextChild(QToolBar* self);
    friend bool QToolBar_SuperFocusNextChild(QToolBar* self);
    friend bool QToolBar_FocusPreviousChild(QToolBar* self);
    friend bool QToolBar_SuperFocusPreviousChild(QToolBar* self);
    friend QObject* QToolBar_Sender(const QToolBar* self);
    friend QObject* QToolBar_SuperSender(const QToolBar* self);
    friend int QToolBar_SenderSignalIndex(const QToolBar* self);
    friend int QToolBar_SuperSenderSignalIndex(const QToolBar* self);
    friend int QToolBar_Receivers(const QToolBar* self, const char* signal);
    friend int QToolBar_SuperReceivers(const QToolBar* self, const char* signal);
    friend bool QToolBar_IsSignalConnected(const QToolBar* self, const QMetaMethod* signal);
    friend bool QToolBar_SuperIsSignalConnected(const QToolBar* self, const QMetaMethod* signal);
    friend double QToolBar_GetDecodedMetricF(const QToolBar* self, int metricA, int metricB);
    friend double QToolBar_SuperGetDecodedMetricF(const QToolBar* self, int metricA, int metricB);
};

#endif
