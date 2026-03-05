#pragma once
#ifndef SRCC_LIBVIRTUALQMENUBAR_H
#define SRCC_LIBVIRTUALQMENUBAR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QMenuBar so that we can call protected methods
class VirtualQMenuBar final : public QMenuBar {

  public:
    // Virtual class boolean flag
    bool isVirtualQMenuBar = true;

    // Virtual class public types (including callbacks)
    using QMenuBar_MetaObject_Callback = QMetaObject* (*)();
    using QMenuBar_Metacast_Callback = void* (*)(QMenuBar*, const char*);
    using QMenuBar_Metacall_Callback = int (*)(QMenuBar*, int, int, void**);
    using QMenuBar_SizeHint_Callback = QSize* (*)();
    using QMenuBar_MinimumSizeHint_Callback = QSize* (*)();
    using QMenuBar_HeightForWidth_Callback = int (*)(const QMenuBar*, int);
    using QMenuBar_SetVisible_Callback = void (*)(QMenuBar*, bool);
    using QMenuBar_ChangeEvent_Callback = void (*)(QMenuBar*, QEvent*);
    using QMenuBar_KeyPressEvent_Callback = void (*)(QMenuBar*, QKeyEvent*);
    using QMenuBar_MouseReleaseEvent_Callback = void (*)(QMenuBar*, QMouseEvent*);
    using QMenuBar_MousePressEvent_Callback = void (*)(QMenuBar*, QMouseEvent*);
    using QMenuBar_MouseMoveEvent_Callback = void (*)(QMenuBar*, QMouseEvent*);
    using QMenuBar_LeaveEvent_Callback = void (*)(QMenuBar*, QEvent*);
    using QMenuBar_PaintEvent_Callback = void (*)(QMenuBar*, QPaintEvent*);
    using QMenuBar_ResizeEvent_Callback = void (*)(QMenuBar*, QResizeEvent*);
    using QMenuBar_ActionEvent_Callback = void (*)(QMenuBar*, QActionEvent*);
    using QMenuBar_FocusOutEvent_Callback = void (*)(QMenuBar*, QFocusEvent*);
    using QMenuBar_FocusInEvent_Callback = void (*)(QMenuBar*, QFocusEvent*);
    using QMenuBar_TimerEvent_Callback = void (*)(QMenuBar*, QTimerEvent*);
    using QMenuBar_EventFilter_Callback = bool (*)(QMenuBar*, QObject*, QEvent*);
    using QMenuBar_Event_Callback = bool (*)(QMenuBar*, QEvent*);
    using QMenuBar_InitStyleOption_Callback = void (*)(const QMenuBar*, QStyleOptionMenuItem*, QAction*);
    using QMenuBar_DevType_Callback = int (*)();
    using QMenuBar_HasHeightForWidth_Callback = bool (*)();
    using QMenuBar_PaintEngine_Callback = QPaintEngine* (*)();
    using QMenuBar_MouseDoubleClickEvent_Callback = void (*)(QMenuBar*, QMouseEvent*);
    using QMenuBar_WheelEvent_Callback = void (*)(QMenuBar*, QWheelEvent*);
    using QMenuBar_KeyReleaseEvent_Callback = void (*)(QMenuBar*, QKeyEvent*);
    using QMenuBar_EnterEvent_Callback = void (*)(QMenuBar*, QEnterEvent*);
    using QMenuBar_MoveEvent_Callback = void (*)(QMenuBar*, QMoveEvent*);
    using QMenuBar_CloseEvent_Callback = void (*)(QMenuBar*, QCloseEvent*);
    using QMenuBar_ContextMenuEvent_Callback = void (*)(QMenuBar*, QContextMenuEvent*);
    using QMenuBar_TabletEvent_Callback = void (*)(QMenuBar*, QTabletEvent*);
    using QMenuBar_DragEnterEvent_Callback = void (*)(QMenuBar*, QDragEnterEvent*);
    using QMenuBar_DragMoveEvent_Callback = void (*)(QMenuBar*, QDragMoveEvent*);
    using QMenuBar_DragLeaveEvent_Callback = void (*)(QMenuBar*, QDragLeaveEvent*);
    using QMenuBar_DropEvent_Callback = void (*)(QMenuBar*, QDropEvent*);
    using QMenuBar_ShowEvent_Callback = void (*)(QMenuBar*, QShowEvent*);
    using QMenuBar_HideEvent_Callback = void (*)(QMenuBar*, QHideEvent*);
    using QMenuBar_NativeEvent_Callback = bool (*)(QMenuBar*, libqt_string, void*, intptr_t*);
    using QMenuBar_Metric_Callback = int (*)(const QMenuBar*, int);
    using QMenuBar_InitPainter_Callback = void (*)(const QMenuBar*, QPainter*);
    using QMenuBar_Redirected_Callback = QPaintDevice* (*)(const QMenuBar*, QPoint*);
    using QMenuBar_SharedPainter_Callback = QPainter* (*)();
    using QMenuBar_InputMethodEvent_Callback = void (*)(QMenuBar*, QInputMethodEvent*);
    using QMenuBar_InputMethodQuery_Callback = QVariant* (*)(const QMenuBar*, int);
    using QMenuBar_FocusNextPrevChild_Callback = bool (*)(QMenuBar*, bool);
    using QMenuBar_ChildEvent_Callback = void (*)(QMenuBar*, QChildEvent*);
    using QMenuBar_CustomEvent_Callback = void (*)(QMenuBar*, QEvent*);
    using QMenuBar_ConnectNotify_Callback = void (*)(QMenuBar*, QMetaMethod*);
    using QMenuBar_DisconnectNotify_Callback = void (*)(QMenuBar*, QMetaMethod*);
    using QMenuBar_UpdateMicroFocus_Callback = void (*)();
    using QMenuBar_Create_Callback = void (*)();
    using QMenuBar_Destroy_Callback = void (*)();
    using QMenuBar_FocusNextChild_Callback = bool (*)();
    using QMenuBar_FocusPreviousChild_Callback = bool (*)();
    using QMenuBar_Sender_Callback = QObject* (*)();
    using QMenuBar_SenderSignalIndex_Callback = int (*)();
    using QMenuBar_Receivers_Callback = int (*)(const QMenuBar*, const char*);
    using QMenuBar_IsSignalConnected_Callback = bool (*)(const QMenuBar*, QMetaMethod*);
    using QMenuBar_GetDecodedMetricF_Callback = double (*)(const QMenuBar*, int, int);

  protected:
    // Instance callback storage
    QMenuBar_MetaObject_Callback qmenubar_metaobject_callback = nullptr;
    QMenuBar_Metacast_Callback qmenubar_metacast_callback = nullptr;
    QMenuBar_Metacall_Callback qmenubar_metacall_callback = nullptr;
    QMenuBar_SizeHint_Callback qmenubar_sizehint_callback = nullptr;
    QMenuBar_MinimumSizeHint_Callback qmenubar_minimumsizehint_callback = nullptr;
    QMenuBar_HeightForWidth_Callback qmenubar_heightforwidth_callback = nullptr;
    QMenuBar_SetVisible_Callback qmenubar_setvisible_callback = nullptr;
    QMenuBar_ChangeEvent_Callback qmenubar_changeevent_callback = nullptr;
    QMenuBar_KeyPressEvent_Callback qmenubar_keypressevent_callback = nullptr;
    QMenuBar_MouseReleaseEvent_Callback qmenubar_mousereleaseevent_callback = nullptr;
    QMenuBar_MousePressEvent_Callback qmenubar_mousepressevent_callback = nullptr;
    QMenuBar_MouseMoveEvent_Callback qmenubar_mousemoveevent_callback = nullptr;
    QMenuBar_LeaveEvent_Callback qmenubar_leaveevent_callback = nullptr;
    QMenuBar_PaintEvent_Callback qmenubar_paintevent_callback = nullptr;
    QMenuBar_ResizeEvent_Callback qmenubar_resizeevent_callback = nullptr;
    QMenuBar_ActionEvent_Callback qmenubar_actionevent_callback = nullptr;
    QMenuBar_FocusOutEvent_Callback qmenubar_focusoutevent_callback = nullptr;
    QMenuBar_FocusInEvent_Callback qmenubar_focusinevent_callback = nullptr;
    QMenuBar_TimerEvent_Callback qmenubar_timerevent_callback = nullptr;
    QMenuBar_EventFilter_Callback qmenubar_eventfilter_callback = nullptr;
    QMenuBar_Event_Callback qmenubar_event_callback = nullptr;
    QMenuBar_InitStyleOption_Callback qmenubar_initstyleoption_callback = nullptr;
    QMenuBar_DevType_Callback qmenubar_devtype_callback = nullptr;
    QMenuBar_HasHeightForWidth_Callback qmenubar_hasheightforwidth_callback = nullptr;
    QMenuBar_PaintEngine_Callback qmenubar_paintengine_callback = nullptr;
    QMenuBar_MouseDoubleClickEvent_Callback qmenubar_mousedoubleclickevent_callback = nullptr;
    QMenuBar_WheelEvent_Callback qmenubar_wheelevent_callback = nullptr;
    QMenuBar_KeyReleaseEvent_Callback qmenubar_keyreleaseevent_callback = nullptr;
    QMenuBar_EnterEvent_Callback qmenubar_enterevent_callback = nullptr;
    QMenuBar_MoveEvent_Callback qmenubar_moveevent_callback = nullptr;
    QMenuBar_CloseEvent_Callback qmenubar_closeevent_callback = nullptr;
    QMenuBar_ContextMenuEvent_Callback qmenubar_contextmenuevent_callback = nullptr;
    QMenuBar_TabletEvent_Callback qmenubar_tabletevent_callback = nullptr;
    QMenuBar_DragEnterEvent_Callback qmenubar_dragenterevent_callback = nullptr;
    QMenuBar_DragMoveEvent_Callback qmenubar_dragmoveevent_callback = nullptr;
    QMenuBar_DragLeaveEvent_Callback qmenubar_dragleaveevent_callback = nullptr;
    QMenuBar_DropEvent_Callback qmenubar_dropevent_callback = nullptr;
    QMenuBar_ShowEvent_Callback qmenubar_showevent_callback = nullptr;
    QMenuBar_HideEvent_Callback qmenubar_hideevent_callback = nullptr;
    QMenuBar_NativeEvent_Callback qmenubar_nativeevent_callback = nullptr;
    QMenuBar_Metric_Callback qmenubar_metric_callback = nullptr;
    QMenuBar_InitPainter_Callback qmenubar_initpainter_callback = nullptr;
    QMenuBar_Redirected_Callback qmenubar_redirected_callback = nullptr;
    QMenuBar_SharedPainter_Callback qmenubar_sharedpainter_callback = nullptr;
    QMenuBar_InputMethodEvent_Callback qmenubar_inputmethodevent_callback = nullptr;
    QMenuBar_InputMethodQuery_Callback qmenubar_inputmethodquery_callback = nullptr;
    QMenuBar_FocusNextPrevChild_Callback qmenubar_focusnextprevchild_callback = nullptr;
    QMenuBar_ChildEvent_Callback qmenubar_childevent_callback = nullptr;
    QMenuBar_CustomEvent_Callback qmenubar_customevent_callback = nullptr;
    QMenuBar_ConnectNotify_Callback qmenubar_connectnotify_callback = nullptr;
    QMenuBar_DisconnectNotify_Callback qmenubar_disconnectnotify_callback = nullptr;
    QMenuBar_UpdateMicroFocus_Callback qmenubar_updatemicrofocus_callback = nullptr;
    QMenuBar_Create_Callback qmenubar_create_callback = nullptr;
    QMenuBar_Destroy_Callback qmenubar_destroy_callback = nullptr;
    QMenuBar_FocusNextChild_Callback qmenubar_focusnextchild_callback = nullptr;
    QMenuBar_FocusPreviousChild_Callback qmenubar_focuspreviouschild_callback = nullptr;
    QMenuBar_Sender_Callback qmenubar_sender_callback = nullptr;
    QMenuBar_SenderSignalIndex_Callback qmenubar_sendersignalindex_callback = nullptr;
    QMenuBar_Receivers_Callback qmenubar_receivers_callback = nullptr;
    QMenuBar_IsSignalConnected_Callback qmenubar_issignalconnected_callback = nullptr;
    QMenuBar_GetDecodedMetricF_Callback qmenubar_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qmenubar_metaobject_isbase = false;
    mutable bool qmenubar_metacast_isbase = false;
    mutable bool qmenubar_metacall_isbase = false;
    mutable bool qmenubar_sizehint_isbase = false;
    mutable bool qmenubar_minimumsizehint_isbase = false;
    mutable bool qmenubar_heightforwidth_isbase = false;
    mutable bool qmenubar_setvisible_isbase = false;
    mutable bool qmenubar_changeevent_isbase = false;
    mutable bool qmenubar_keypressevent_isbase = false;
    mutable bool qmenubar_mousereleaseevent_isbase = false;
    mutable bool qmenubar_mousepressevent_isbase = false;
    mutable bool qmenubar_mousemoveevent_isbase = false;
    mutable bool qmenubar_leaveevent_isbase = false;
    mutable bool qmenubar_paintevent_isbase = false;
    mutable bool qmenubar_resizeevent_isbase = false;
    mutable bool qmenubar_actionevent_isbase = false;
    mutable bool qmenubar_focusoutevent_isbase = false;
    mutable bool qmenubar_focusinevent_isbase = false;
    mutable bool qmenubar_timerevent_isbase = false;
    mutable bool qmenubar_eventfilter_isbase = false;
    mutable bool qmenubar_event_isbase = false;
    mutable bool qmenubar_initstyleoption_isbase = false;
    mutable bool qmenubar_devtype_isbase = false;
    mutable bool qmenubar_hasheightforwidth_isbase = false;
    mutable bool qmenubar_paintengine_isbase = false;
    mutable bool qmenubar_mousedoubleclickevent_isbase = false;
    mutable bool qmenubar_wheelevent_isbase = false;
    mutable bool qmenubar_keyreleaseevent_isbase = false;
    mutable bool qmenubar_enterevent_isbase = false;
    mutable bool qmenubar_moveevent_isbase = false;
    mutable bool qmenubar_closeevent_isbase = false;
    mutable bool qmenubar_contextmenuevent_isbase = false;
    mutable bool qmenubar_tabletevent_isbase = false;
    mutable bool qmenubar_dragenterevent_isbase = false;
    mutable bool qmenubar_dragmoveevent_isbase = false;
    mutable bool qmenubar_dragleaveevent_isbase = false;
    mutable bool qmenubar_dropevent_isbase = false;
    mutable bool qmenubar_showevent_isbase = false;
    mutable bool qmenubar_hideevent_isbase = false;
    mutable bool qmenubar_nativeevent_isbase = false;
    mutable bool qmenubar_metric_isbase = false;
    mutable bool qmenubar_initpainter_isbase = false;
    mutable bool qmenubar_redirected_isbase = false;
    mutable bool qmenubar_sharedpainter_isbase = false;
    mutable bool qmenubar_inputmethodevent_isbase = false;
    mutable bool qmenubar_inputmethodquery_isbase = false;
    mutable bool qmenubar_focusnextprevchild_isbase = false;
    mutable bool qmenubar_childevent_isbase = false;
    mutable bool qmenubar_customevent_isbase = false;
    mutable bool qmenubar_connectnotify_isbase = false;
    mutable bool qmenubar_disconnectnotify_isbase = false;
    mutable bool qmenubar_updatemicrofocus_isbase = false;
    mutable bool qmenubar_create_isbase = false;
    mutable bool qmenubar_destroy_isbase = false;
    mutable bool qmenubar_focusnextchild_isbase = false;
    mutable bool qmenubar_focuspreviouschild_isbase = false;
    mutable bool qmenubar_sender_isbase = false;
    mutable bool qmenubar_sendersignalindex_isbase = false;
    mutable bool qmenubar_receivers_isbase = false;
    mutable bool qmenubar_issignalconnected_isbase = false;
    mutable bool qmenubar_getdecodedmetricf_isbase = false;

  public:
    VirtualQMenuBar(QWidget* parent) : QMenuBar(parent) {};
    VirtualQMenuBar() : QMenuBar() {};

    // Callback setters
    inline void setQMenuBar_MetaObject_Callback(QMenuBar_MetaObject_Callback cb) { qmenubar_metaobject_callback = cb; }
    inline void setQMenuBar_Metacast_Callback(QMenuBar_Metacast_Callback cb) { qmenubar_metacast_callback = cb; }
    inline void setQMenuBar_Metacall_Callback(QMenuBar_Metacall_Callback cb) { qmenubar_metacall_callback = cb; }
    inline void setQMenuBar_SizeHint_Callback(QMenuBar_SizeHint_Callback cb) { qmenubar_sizehint_callback = cb; }
    inline void setQMenuBar_MinimumSizeHint_Callback(QMenuBar_MinimumSizeHint_Callback cb) { qmenubar_minimumsizehint_callback = cb; }
    inline void setQMenuBar_HeightForWidth_Callback(QMenuBar_HeightForWidth_Callback cb) { qmenubar_heightforwidth_callback = cb; }
    inline void setQMenuBar_SetVisible_Callback(QMenuBar_SetVisible_Callback cb) { qmenubar_setvisible_callback = cb; }
    inline void setQMenuBar_ChangeEvent_Callback(QMenuBar_ChangeEvent_Callback cb) { qmenubar_changeevent_callback = cb; }
    inline void setQMenuBar_KeyPressEvent_Callback(QMenuBar_KeyPressEvent_Callback cb) { qmenubar_keypressevent_callback = cb; }
    inline void setQMenuBar_MouseReleaseEvent_Callback(QMenuBar_MouseReleaseEvent_Callback cb) { qmenubar_mousereleaseevent_callback = cb; }
    inline void setQMenuBar_MousePressEvent_Callback(QMenuBar_MousePressEvent_Callback cb) { qmenubar_mousepressevent_callback = cb; }
    inline void setQMenuBar_MouseMoveEvent_Callback(QMenuBar_MouseMoveEvent_Callback cb) { qmenubar_mousemoveevent_callback = cb; }
    inline void setQMenuBar_LeaveEvent_Callback(QMenuBar_LeaveEvent_Callback cb) { qmenubar_leaveevent_callback = cb; }
    inline void setQMenuBar_PaintEvent_Callback(QMenuBar_PaintEvent_Callback cb) { qmenubar_paintevent_callback = cb; }
    inline void setQMenuBar_ResizeEvent_Callback(QMenuBar_ResizeEvent_Callback cb) { qmenubar_resizeevent_callback = cb; }
    inline void setQMenuBar_ActionEvent_Callback(QMenuBar_ActionEvent_Callback cb) { qmenubar_actionevent_callback = cb; }
    inline void setQMenuBar_FocusOutEvent_Callback(QMenuBar_FocusOutEvent_Callback cb) { qmenubar_focusoutevent_callback = cb; }
    inline void setQMenuBar_FocusInEvent_Callback(QMenuBar_FocusInEvent_Callback cb) { qmenubar_focusinevent_callback = cb; }
    inline void setQMenuBar_TimerEvent_Callback(QMenuBar_TimerEvent_Callback cb) { qmenubar_timerevent_callback = cb; }
    inline void setQMenuBar_EventFilter_Callback(QMenuBar_EventFilter_Callback cb) { qmenubar_eventfilter_callback = cb; }
    inline void setQMenuBar_Event_Callback(QMenuBar_Event_Callback cb) { qmenubar_event_callback = cb; }
    inline void setQMenuBar_InitStyleOption_Callback(QMenuBar_InitStyleOption_Callback cb) { qmenubar_initstyleoption_callback = cb; }
    inline void setQMenuBar_DevType_Callback(QMenuBar_DevType_Callback cb) { qmenubar_devtype_callback = cb; }
    inline void setQMenuBar_HasHeightForWidth_Callback(QMenuBar_HasHeightForWidth_Callback cb) { qmenubar_hasheightforwidth_callback = cb; }
    inline void setQMenuBar_PaintEngine_Callback(QMenuBar_PaintEngine_Callback cb) { qmenubar_paintengine_callback = cb; }
    inline void setQMenuBar_MouseDoubleClickEvent_Callback(QMenuBar_MouseDoubleClickEvent_Callback cb) { qmenubar_mousedoubleclickevent_callback = cb; }
    inline void setQMenuBar_WheelEvent_Callback(QMenuBar_WheelEvent_Callback cb) { qmenubar_wheelevent_callback = cb; }
    inline void setQMenuBar_KeyReleaseEvent_Callback(QMenuBar_KeyReleaseEvent_Callback cb) { qmenubar_keyreleaseevent_callback = cb; }
    inline void setQMenuBar_EnterEvent_Callback(QMenuBar_EnterEvent_Callback cb) { qmenubar_enterevent_callback = cb; }
    inline void setQMenuBar_MoveEvent_Callback(QMenuBar_MoveEvent_Callback cb) { qmenubar_moveevent_callback = cb; }
    inline void setQMenuBar_CloseEvent_Callback(QMenuBar_CloseEvent_Callback cb) { qmenubar_closeevent_callback = cb; }
    inline void setQMenuBar_ContextMenuEvent_Callback(QMenuBar_ContextMenuEvent_Callback cb) { qmenubar_contextmenuevent_callback = cb; }
    inline void setQMenuBar_TabletEvent_Callback(QMenuBar_TabletEvent_Callback cb) { qmenubar_tabletevent_callback = cb; }
    inline void setQMenuBar_DragEnterEvent_Callback(QMenuBar_DragEnterEvent_Callback cb) { qmenubar_dragenterevent_callback = cb; }
    inline void setQMenuBar_DragMoveEvent_Callback(QMenuBar_DragMoveEvent_Callback cb) { qmenubar_dragmoveevent_callback = cb; }
    inline void setQMenuBar_DragLeaveEvent_Callback(QMenuBar_DragLeaveEvent_Callback cb) { qmenubar_dragleaveevent_callback = cb; }
    inline void setQMenuBar_DropEvent_Callback(QMenuBar_DropEvent_Callback cb) { qmenubar_dropevent_callback = cb; }
    inline void setQMenuBar_ShowEvent_Callback(QMenuBar_ShowEvent_Callback cb) { qmenubar_showevent_callback = cb; }
    inline void setQMenuBar_HideEvent_Callback(QMenuBar_HideEvent_Callback cb) { qmenubar_hideevent_callback = cb; }
    inline void setQMenuBar_NativeEvent_Callback(QMenuBar_NativeEvent_Callback cb) { qmenubar_nativeevent_callback = cb; }
    inline void setQMenuBar_Metric_Callback(QMenuBar_Metric_Callback cb) { qmenubar_metric_callback = cb; }
    inline void setQMenuBar_InitPainter_Callback(QMenuBar_InitPainter_Callback cb) { qmenubar_initpainter_callback = cb; }
    inline void setQMenuBar_Redirected_Callback(QMenuBar_Redirected_Callback cb) { qmenubar_redirected_callback = cb; }
    inline void setQMenuBar_SharedPainter_Callback(QMenuBar_SharedPainter_Callback cb) { qmenubar_sharedpainter_callback = cb; }
    inline void setQMenuBar_InputMethodEvent_Callback(QMenuBar_InputMethodEvent_Callback cb) { qmenubar_inputmethodevent_callback = cb; }
    inline void setQMenuBar_InputMethodQuery_Callback(QMenuBar_InputMethodQuery_Callback cb) { qmenubar_inputmethodquery_callback = cb; }
    inline void setQMenuBar_FocusNextPrevChild_Callback(QMenuBar_FocusNextPrevChild_Callback cb) { qmenubar_focusnextprevchild_callback = cb; }
    inline void setQMenuBar_ChildEvent_Callback(QMenuBar_ChildEvent_Callback cb) { qmenubar_childevent_callback = cb; }
    inline void setQMenuBar_CustomEvent_Callback(QMenuBar_CustomEvent_Callback cb) { qmenubar_customevent_callback = cb; }
    inline void setQMenuBar_ConnectNotify_Callback(QMenuBar_ConnectNotify_Callback cb) { qmenubar_connectnotify_callback = cb; }
    inline void setQMenuBar_DisconnectNotify_Callback(QMenuBar_DisconnectNotify_Callback cb) { qmenubar_disconnectnotify_callback = cb; }
    inline void setQMenuBar_UpdateMicroFocus_Callback(QMenuBar_UpdateMicroFocus_Callback cb) { qmenubar_updatemicrofocus_callback = cb; }
    inline void setQMenuBar_Create_Callback(QMenuBar_Create_Callback cb) { qmenubar_create_callback = cb; }
    inline void setQMenuBar_Destroy_Callback(QMenuBar_Destroy_Callback cb) { qmenubar_destroy_callback = cb; }
    inline void setQMenuBar_FocusNextChild_Callback(QMenuBar_FocusNextChild_Callback cb) { qmenubar_focusnextchild_callback = cb; }
    inline void setQMenuBar_FocusPreviousChild_Callback(QMenuBar_FocusPreviousChild_Callback cb) { qmenubar_focuspreviouschild_callback = cb; }
    inline void setQMenuBar_Sender_Callback(QMenuBar_Sender_Callback cb) { qmenubar_sender_callback = cb; }
    inline void setQMenuBar_SenderSignalIndex_Callback(QMenuBar_SenderSignalIndex_Callback cb) { qmenubar_sendersignalindex_callback = cb; }
    inline void setQMenuBar_Receivers_Callback(QMenuBar_Receivers_Callback cb) { qmenubar_receivers_callback = cb; }
    inline void setQMenuBar_IsSignalConnected_Callback(QMenuBar_IsSignalConnected_Callback cb) { qmenubar_issignalconnected_callback = cb; }
    inline void setQMenuBar_GetDecodedMetricF_Callback(QMenuBar_GetDecodedMetricF_Callback cb) { qmenubar_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQMenuBar_MetaObject_IsBase(bool value) const { qmenubar_metaobject_isbase = value; }
    inline void setQMenuBar_Metacast_IsBase(bool value) const { qmenubar_metacast_isbase = value; }
    inline void setQMenuBar_Metacall_IsBase(bool value) const { qmenubar_metacall_isbase = value; }
    inline void setQMenuBar_SizeHint_IsBase(bool value) const { qmenubar_sizehint_isbase = value; }
    inline void setQMenuBar_MinimumSizeHint_IsBase(bool value) const { qmenubar_minimumsizehint_isbase = value; }
    inline void setQMenuBar_HeightForWidth_IsBase(bool value) const { qmenubar_heightforwidth_isbase = value; }
    inline void setQMenuBar_SetVisible_IsBase(bool value) const { qmenubar_setvisible_isbase = value; }
    inline void setQMenuBar_ChangeEvent_IsBase(bool value) const { qmenubar_changeevent_isbase = value; }
    inline void setQMenuBar_KeyPressEvent_IsBase(bool value) const { qmenubar_keypressevent_isbase = value; }
    inline void setQMenuBar_MouseReleaseEvent_IsBase(bool value) const { qmenubar_mousereleaseevent_isbase = value; }
    inline void setQMenuBar_MousePressEvent_IsBase(bool value) const { qmenubar_mousepressevent_isbase = value; }
    inline void setQMenuBar_MouseMoveEvent_IsBase(bool value) const { qmenubar_mousemoveevent_isbase = value; }
    inline void setQMenuBar_LeaveEvent_IsBase(bool value) const { qmenubar_leaveevent_isbase = value; }
    inline void setQMenuBar_PaintEvent_IsBase(bool value) const { qmenubar_paintevent_isbase = value; }
    inline void setQMenuBar_ResizeEvent_IsBase(bool value) const { qmenubar_resizeevent_isbase = value; }
    inline void setQMenuBar_ActionEvent_IsBase(bool value) const { qmenubar_actionevent_isbase = value; }
    inline void setQMenuBar_FocusOutEvent_IsBase(bool value) const { qmenubar_focusoutevent_isbase = value; }
    inline void setQMenuBar_FocusInEvent_IsBase(bool value) const { qmenubar_focusinevent_isbase = value; }
    inline void setQMenuBar_TimerEvent_IsBase(bool value) const { qmenubar_timerevent_isbase = value; }
    inline void setQMenuBar_EventFilter_IsBase(bool value) const { qmenubar_eventfilter_isbase = value; }
    inline void setQMenuBar_Event_IsBase(bool value) const { qmenubar_event_isbase = value; }
    inline void setQMenuBar_InitStyleOption_IsBase(bool value) const { qmenubar_initstyleoption_isbase = value; }
    inline void setQMenuBar_DevType_IsBase(bool value) const { qmenubar_devtype_isbase = value; }
    inline void setQMenuBar_HasHeightForWidth_IsBase(bool value) const { qmenubar_hasheightforwidth_isbase = value; }
    inline void setQMenuBar_PaintEngine_IsBase(bool value) const { qmenubar_paintengine_isbase = value; }
    inline void setQMenuBar_MouseDoubleClickEvent_IsBase(bool value) const { qmenubar_mousedoubleclickevent_isbase = value; }
    inline void setQMenuBar_WheelEvent_IsBase(bool value) const { qmenubar_wheelevent_isbase = value; }
    inline void setQMenuBar_KeyReleaseEvent_IsBase(bool value) const { qmenubar_keyreleaseevent_isbase = value; }
    inline void setQMenuBar_EnterEvent_IsBase(bool value) const { qmenubar_enterevent_isbase = value; }
    inline void setQMenuBar_MoveEvent_IsBase(bool value) const { qmenubar_moveevent_isbase = value; }
    inline void setQMenuBar_CloseEvent_IsBase(bool value) const { qmenubar_closeevent_isbase = value; }
    inline void setQMenuBar_ContextMenuEvent_IsBase(bool value) const { qmenubar_contextmenuevent_isbase = value; }
    inline void setQMenuBar_TabletEvent_IsBase(bool value) const { qmenubar_tabletevent_isbase = value; }
    inline void setQMenuBar_DragEnterEvent_IsBase(bool value) const { qmenubar_dragenterevent_isbase = value; }
    inline void setQMenuBar_DragMoveEvent_IsBase(bool value) const { qmenubar_dragmoveevent_isbase = value; }
    inline void setQMenuBar_DragLeaveEvent_IsBase(bool value) const { qmenubar_dragleaveevent_isbase = value; }
    inline void setQMenuBar_DropEvent_IsBase(bool value) const { qmenubar_dropevent_isbase = value; }
    inline void setQMenuBar_ShowEvent_IsBase(bool value) const { qmenubar_showevent_isbase = value; }
    inline void setQMenuBar_HideEvent_IsBase(bool value) const { qmenubar_hideevent_isbase = value; }
    inline void setQMenuBar_NativeEvent_IsBase(bool value) const { qmenubar_nativeevent_isbase = value; }
    inline void setQMenuBar_Metric_IsBase(bool value) const { qmenubar_metric_isbase = value; }
    inline void setQMenuBar_InitPainter_IsBase(bool value) const { qmenubar_initpainter_isbase = value; }
    inline void setQMenuBar_Redirected_IsBase(bool value) const { qmenubar_redirected_isbase = value; }
    inline void setQMenuBar_SharedPainter_IsBase(bool value) const { qmenubar_sharedpainter_isbase = value; }
    inline void setQMenuBar_InputMethodEvent_IsBase(bool value) const { qmenubar_inputmethodevent_isbase = value; }
    inline void setQMenuBar_InputMethodQuery_IsBase(bool value) const { qmenubar_inputmethodquery_isbase = value; }
    inline void setQMenuBar_FocusNextPrevChild_IsBase(bool value) const { qmenubar_focusnextprevchild_isbase = value; }
    inline void setQMenuBar_ChildEvent_IsBase(bool value) const { qmenubar_childevent_isbase = value; }
    inline void setQMenuBar_CustomEvent_IsBase(bool value) const { qmenubar_customevent_isbase = value; }
    inline void setQMenuBar_ConnectNotify_IsBase(bool value) const { qmenubar_connectnotify_isbase = value; }
    inline void setQMenuBar_DisconnectNotify_IsBase(bool value) const { qmenubar_disconnectnotify_isbase = value; }
    inline void setQMenuBar_UpdateMicroFocus_IsBase(bool value) const { qmenubar_updatemicrofocus_isbase = value; }
    inline void setQMenuBar_Create_IsBase(bool value) const { qmenubar_create_isbase = value; }
    inline void setQMenuBar_Destroy_IsBase(bool value) const { qmenubar_destroy_isbase = value; }
    inline void setQMenuBar_FocusNextChild_IsBase(bool value) const { qmenubar_focusnextchild_isbase = value; }
    inline void setQMenuBar_FocusPreviousChild_IsBase(bool value) const { qmenubar_focuspreviouschild_isbase = value; }
    inline void setQMenuBar_Sender_IsBase(bool value) const { qmenubar_sender_isbase = value; }
    inline void setQMenuBar_SenderSignalIndex_IsBase(bool value) const { qmenubar_sendersignalindex_isbase = value; }
    inline void setQMenuBar_Receivers_IsBase(bool value) const { qmenubar_receivers_isbase = value; }
    inline void setQMenuBar_IsSignalConnected_IsBase(bool value) const { qmenubar_issignalconnected_isbase = value; }
    inline void setQMenuBar_GetDecodedMetricF_IsBase(bool value) const { qmenubar_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qmenubar_metaobject_isbase) {
            qmenubar_metaobject_isbase = false;
            return QMenuBar::metaObject();
        }
        auto metaobject_cb = qmenubar_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QMenuBar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qmenubar_metacast_isbase) {
            qmenubar_metacast_isbase = false;
            return QMenuBar::qt_metacast(param1);
        }
        auto metacast_cb = qmenubar_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QMenuBar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmenubar_metacall_isbase) {
            qmenubar_metacall_isbase = false;
            return QMenuBar::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qmenubar_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QMenuBar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qmenubar_sizehint_isbase) {
            qmenubar_sizehint_isbase = false;
            return QMenuBar::sizeHint();
        }
        auto sizehint_cb = qmenubar_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QMenuBar::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qmenubar_minimumsizehint_isbase) {
            qmenubar_minimumsizehint_isbase = false;
            return QMenuBar::minimumSizeHint();
        }
        auto minimumsizehint_cb = qmenubar_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QMenuBar::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qmenubar_heightforwidth_isbase) {
            qmenubar_heightforwidth_isbase = false;
            return QMenuBar::heightForWidth(param1);
        }
        auto heightforwidth_cb = qmenubar_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMenuBar::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qmenubar_setvisible_isbase) {
            qmenubar_setvisible_isbase = false;
            QMenuBar::setVisible(visible);
            return;
        }
        auto setvisible_cb = qmenubar_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QMenuBar::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qmenubar_changeevent_isbase) {
            qmenubar_changeevent_isbase = false;
            QMenuBar::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qmenubar_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QMenuBar::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qmenubar_keypressevent_isbase) {
            qmenubar_keypressevent_isbase = false;
            QMenuBar::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = qmenubar_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        QMenuBar::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qmenubar_mousereleaseevent_isbase) {
            qmenubar_mousereleaseevent_isbase = false;
            QMenuBar::mouseReleaseEvent(param1);
            return;
        }
        auto mousereleaseevent_cb = qmenubar_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QMenuBar::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qmenubar_mousepressevent_isbase) {
            qmenubar_mousepressevent_isbase = false;
            QMenuBar::mousePressEvent(param1);
            return;
        }
        auto mousepressevent_cb = qmenubar_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QMenuBar::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qmenubar_mousemoveevent_isbase) {
            qmenubar_mousemoveevent_isbase = false;
            QMenuBar::mouseMoveEvent(param1);
            return;
        }
        auto mousemoveevent_cb = qmenubar_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QMenuBar::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (qmenubar_leaveevent_isbase) {
            qmenubar_leaveevent_isbase = false;
            QMenuBar::leaveEvent(param1);
            return;
        }
        auto leaveevent_cb = qmenubar_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = param1;

            leaveevent_cb(this, cbval1);
            return;
        }
        QMenuBar::leaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qmenubar_paintevent_isbase) {
            qmenubar_paintevent_isbase = false;
            QMenuBar::paintEvent(param1);
            return;
        }
        auto paintevent_cb = qmenubar_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        QMenuBar::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qmenubar_resizeevent_isbase) {
            qmenubar_resizeevent_isbase = false;
            QMenuBar::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = qmenubar_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        QMenuBar::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (qmenubar_actionevent_isbase) {
            qmenubar_actionevent_isbase = false;
            QMenuBar::actionEvent(param1);
            return;
        }
        auto actionevent_cb = qmenubar_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = param1;

            actionevent_cb(this, cbval1);
            return;
        }
        QMenuBar::actionEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qmenubar_focusoutevent_isbase) {
            qmenubar_focusoutevent_isbase = false;
            QMenuBar::focusOutEvent(param1);
            return;
        }
        auto focusoutevent_cb = qmenubar_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = param1;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QMenuBar::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qmenubar_focusinevent_isbase) {
            qmenubar_focusinevent_isbase = false;
            QMenuBar::focusInEvent(param1);
            return;
        }
        auto focusinevent_cb = qmenubar_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = param1;

            focusinevent_cb(this, cbval1);
            return;
        }
        QMenuBar::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qmenubar_timerevent_isbase) {
            qmenubar_timerevent_isbase = false;
            QMenuBar::timerEvent(param1);
            return;
        }
        auto timerevent_cb = qmenubar_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = param1;

            timerevent_cb(this, cbval1);
            return;
        }
        QMenuBar::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qmenubar_eventfilter_isbase) {
            qmenubar_eventfilter_isbase = false;
            return QMenuBar::eventFilter(param1, param2);
        }
        auto eventfilter_cb = qmenubar_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QMenuBar::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qmenubar_event_isbase) {
            qmenubar_event_isbase = false;
            return QMenuBar::event(param1);
        }
        auto event_cb = qmenubar_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QMenuBar::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionMenuItem* option, const QAction* action) const override {
        if (qmenubar_initstyleoption_isbase) {
            qmenubar_initstyleoption_isbase = false;
            QMenuBar::initStyleOption(option, action);
            return;
        }
        auto initstyleoption_cb = qmenubar_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionMenuItem* cbval1 = option;
            QAction* cbval2 = (QAction*)action;

            initstyleoption_cb(this, cbval1, cbval2);
            return;
        }
        QMenuBar::initStyleOption(option, action);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qmenubar_devtype_isbase) {
            qmenubar_devtype_isbase = false;
            return QMenuBar::devType();
        }
        auto devtype_cb = qmenubar_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QMenuBar::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qmenubar_hasheightforwidth_isbase) {
            qmenubar_hasheightforwidth_isbase = false;
            return QMenuBar::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qmenubar_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QMenuBar::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qmenubar_paintengine_isbase) {
            qmenubar_paintengine_isbase = false;
            return QMenuBar::paintEngine();
        }
        auto paintengine_cb = qmenubar_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QMenuBar::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qmenubar_mousedoubleclickevent_isbase) {
            qmenubar_mousedoubleclickevent_isbase = false;
            QMenuBar::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qmenubar_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QMenuBar::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qmenubar_wheelevent_isbase) {
            qmenubar_wheelevent_isbase = false;
            QMenuBar::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qmenubar_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QMenuBar::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qmenubar_keyreleaseevent_isbase) {
            qmenubar_keyreleaseevent_isbase = false;
            QMenuBar::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qmenubar_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QMenuBar::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qmenubar_enterevent_isbase) {
            qmenubar_enterevent_isbase = false;
            QMenuBar::enterEvent(event);
            return;
        }
        auto enterevent_cb = qmenubar_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QMenuBar::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qmenubar_moveevent_isbase) {
            qmenubar_moveevent_isbase = false;
            QMenuBar::moveEvent(event);
            return;
        }
        auto moveevent_cb = qmenubar_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QMenuBar::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qmenubar_closeevent_isbase) {
            qmenubar_closeevent_isbase = false;
            QMenuBar::closeEvent(event);
            return;
        }
        auto closeevent_cb = qmenubar_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QMenuBar::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qmenubar_contextmenuevent_isbase) {
            qmenubar_contextmenuevent_isbase = false;
            QMenuBar::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qmenubar_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QMenuBar::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qmenubar_tabletevent_isbase) {
            qmenubar_tabletevent_isbase = false;
            QMenuBar::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qmenubar_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QMenuBar::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qmenubar_dragenterevent_isbase) {
            qmenubar_dragenterevent_isbase = false;
            QMenuBar::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qmenubar_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QMenuBar::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qmenubar_dragmoveevent_isbase) {
            qmenubar_dragmoveevent_isbase = false;
            QMenuBar::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qmenubar_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QMenuBar::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qmenubar_dragleaveevent_isbase) {
            qmenubar_dragleaveevent_isbase = false;
            QMenuBar::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qmenubar_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QMenuBar::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qmenubar_dropevent_isbase) {
            qmenubar_dropevent_isbase = false;
            QMenuBar::dropEvent(event);
            return;
        }
        auto dropevent_cb = qmenubar_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QMenuBar::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qmenubar_showevent_isbase) {
            qmenubar_showevent_isbase = false;
            QMenuBar::showEvent(event);
            return;
        }
        auto showevent_cb = qmenubar_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QMenuBar::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qmenubar_hideevent_isbase) {
            qmenubar_hideevent_isbase = false;
            QMenuBar::hideEvent(event);
            return;
        }
        auto hideevent_cb = qmenubar_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QMenuBar::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qmenubar_nativeevent_isbase) {
            qmenubar_nativeevent_isbase = false;
            return QMenuBar::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qmenubar_nativeevent_callback;
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
        return QMenuBar::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qmenubar_metric_isbase) {
            qmenubar_metric_isbase = false;
            return QMenuBar::metric(param1);
        }
        auto metric_cb = qmenubar_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMenuBar::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qmenubar_initpainter_isbase) {
            qmenubar_initpainter_isbase = false;
            QMenuBar::initPainter(painter);
            return;
        }
        auto initpainter_cb = qmenubar_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QMenuBar::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qmenubar_redirected_isbase) {
            qmenubar_redirected_isbase = false;
            return QMenuBar::redirected(offset);
        }
        auto redirected_cb = qmenubar_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QMenuBar::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qmenubar_sharedpainter_isbase) {
            qmenubar_sharedpainter_isbase = false;
            return QMenuBar::sharedPainter();
        }
        auto sharedpainter_cb = qmenubar_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QMenuBar::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qmenubar_inputmethodevent_isbase) {
            qmenubar_inputmethodevent_isbase = false;
            QMenuBar::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qmenubar_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QMenuBar::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qmenubar_inputmethodquery_isbase) {
            qmenubar_inputmethodquery_isbase = false;
            return QMenuBar::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qmenubar_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QMenuBar::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qmenubar_focusnextprevchild_isbase) {
            qmenubar_focusnextprevchild_isbase = false;
            return QMenuBar::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qmenubar_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QMenuBar::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmenubar_childevent_isbase) {
            qmenubar_childevent_isbase = false;
            QMenuBar::childEvent(event);
            return;
        }
        auto childevent_cb = qmenubar_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QMenuBar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmenubar_customevent_isbase) {
            qmenubar_customevent_isbase = false;
            QMenuBar::customEvent(event);
            return;
        }
        auto customevent_cb = qmenubar_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QMenuBar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmenubar_connectnotify_isbase) {
            qmenubar_connectnotify_isbase = false;
            QMenuBar::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qmenubar_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QMenuBar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmenubar_disconnectnotify_isbase) {
            qmenubar_disconnectnotify_isbase = false;
            QMenuBar::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qmenubar_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QMenuBar::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qmenubar_updatemicrofocus_isbase) {
            qmenubar_updatemicrofocus_isbase = false;
            QMenuBar::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qmenubar_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QMenuBar::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qmenubar_create_isbase) {
            qmenubar_create_isbase = false;
            QMenuBar::create();
            return;
        }
        auto create_cb = qmenubar_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QMenuBar::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qmenubar_destroy_isbase) {
            qmenubar_destroy_isbase = false;
            QMenuBar::destroy();
            return;
        }
        auto destroy_cb = qmenubar_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QMenuBar::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qmenubar_focusnextchild_isbase) {
            qmenubar_focusnextchild_isbase = false;
            return QMenuBar::focusNextChild();
        }
        auto focusnextchild_cb = qmenubar_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QMenuBar::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qmenubar_focuspreviouschild_isbase) {
            qmenubar_focuspreviouschild_isbase = false;
            return QMenuBar::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qmenubar_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QMenuBar::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qmenubar_sender_isbase) {
            qmenubar_sender_isbase = false;
            return QMenuBar::sender();
        }
        auto sender_cb = qmenubar_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QMenuBar::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qmenubar_sendersignalindex_isbase) {
            qmenubar_sendersignalindex_isbase = false;
            return QMenuBar::senderSignalIndex();
        }
        auto sendersignalindex_cb = qmenubar_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QMenuBar::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qmenubar_receivers_isbase) {
            qmenubar_receivers_isbase = false;
            return QMenuBar::receivers(signal);
        }
        auto receivers_cb = qmenubar_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMenuBar::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qmenubar_issignalconnected_isbase) {
            qmenubar_issignalconnected_isbase = false;
            return QMenuBar::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qmenubar_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QMenuBar::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qmenubar_getdecodedmetricf_isbase) {
            qmenubar_getdecodedmetricf_isbase = false;
            return QMenuBar::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qmenubar_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QMenuBar::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void QMenuBar_ChangeEvent(QMenuBar* self, QEvent* param1);
    friend void QMenuBar_SuperChangeEvent(QMenuBar* self, QEvent* param1);
    friend void QMenuBar_KeyPressEvent(QMenuBar* self, QKeyEvent* param1);
    friend void QMenuBar_SuperKeyPressEvent(QMenuBar* self, QKeyEvent* param1);
    friend void QMenuBar_MouseReleaseEvent(QMenuBar* self, QMouseEvent* param1);
    friend void QMenuBar_SuperMouseReleaseEvent(QMenuBar* self, QMouseEvent* param1);
    friend void QMenuBar_MousePressEvent(QMenuBar* self, QMouseEvent* param1);
    friend void QMenuBar_SuperMousePressEvent(QMenuBar* self, QMouseEvent* param1);
    friend void QMenuBar_MouseMoveEvent(QMenuBar* self, QMouseEvent* param1);
    friend void QMenuBar_SuperMouseMoveEvent(QMenuBar* self, QMouseEvent* param1);
    friend void QMenuBar_LeaveEvent(QMenuBar* self, QEvent* param1);
    friend void QMenuBar_SuperLeaveEvent(QMenuBar* self, QEvent* param1);
    friend void QMenuBar_PaintEvent(QMenuBar* self, QPaintEvent* param1);
    friend void QMenuBar_SuperPaintEvent(QMenuBar* self, QPaintEvent* param1);
    friend void QMenuBar_ResizeEvent(QMenuBar* self, QResizeEvent* param1);
    friend void QMenuBar_SuperResizeEvent(QMenuBar* self, QResizeEvent* param1);
    friend void QMenuBar_ActionEvent(QMenuBar* self, QActionEvent* param1);
    friend void QMenuBar_SuperActionEvent(QMenuBar* self, QActionEvent* param1);
    friend void QMenuBar_FocusOutEvent(QMenuBar* self, QFocusEvent* param1);
    friend void QMenuBar_SuperFocusOutEvent(QMenuBar* self, QFocusEvent* param1);
    friend void QMenuBar_FocusInEvent(QMenuBar* self, QFocusEvent* param1);
    friend void QMenuBar_SuperFocusInEvent(QMenuBar* self, QFocusEvent* param1);
    friend void QMenuBar_TimerEvent(QMenuBar* self, QTimerEvent* param1);
    friend void QMenuBar_SuperTimerEvent(QMenuBar* self, QTimerEvent* param1);
    friend bool QMenuBar_EventFilter(QMenuBar* self, QObject* param1, QEvent* param2);
    friend bool QMenuBar_SuperEventFilter(QMenuBar* self, QObject* param1, QEvent* param2);
    friend bool QMenuBar_Event(QMenuBar* self, QEvent* param1);
    friend bool QMenuBar_SuperEvent(QMenuBar* self, QEvent* param1);
    friend void QMenuBar_InitStyleOption(const QMenuBar* self, QStyleOptionMenuItem* option, const QAction* action);
    friend void QMenuBar_SuperInitStyleOption(const QMenuBar* self, QStyleOptionMenuItem* option, const QAction* action);
    friend void QMenuBar_MouseDoubleClickEvent(QMenuBar* self, QMouseEvent* event);
    friend void QMenuBar_SuperMouseDoubleClickEvent(QMenuBar* self, QMouseEvent* event);
    friend void QMenuBar_WheelEvent(QMenuBar* self, QWheelEvent* event);
    friend void QMenuBar_SuperWheelEvent(QMenuBar* self, QWheelEvent* event);
    friend void QMenuBar_KeyReleaseEvent(QMenuBar* self, QKeyEvent* event);
    friend void QMenuBar_SuperKeyReleaseEvent(QMenuBar* self, QKeyEvent* event);
    friend void QMenuBar_EnterEvent(QMenuBar* self, QEnterEvent* event);
    friend void QMenuBar_SuperEnterEvent(QMenuBar* self, QEnterEvent* event);
    friend void QMenuBar_MoveEvent(QMenuBar* self, QMoveEvent* event);
    friend void QMenuBar_SuperMoveEvent(QMenuBar* self, QMoveEvent* event);
    friend void QMenuBar_CloseEvent(QMenuBar* self, QCloseEvent* event);
    friend void QMenuBar_SuperCloseEvent(QMenuBar* self, QCloseEvent* event);
    friend void QMenuBar_ContextMenuEvent(QMenuBar* self, QContextMenuEvent* event);
    friend void QMenuBar_SuperContextMenuEvent(QMenuBar* self, QContextMenuEvent* event);
    friend void QMenuBar_TabletEvent(QMenuBar* self, QTabletEvent* event);
    friend void QMenuBar_SuperTabletEvent(QMenuBar* self, QTabletEvent* event);
    friend void QMenuBar_DragEnterEvent(QMenuBar* self, QDragEnterEvent* event);
    friend void QMenuBar_SuperDragEnterEvent(QMenuBar* self, QDragEnterEvent* event);
    friend void QMenuBar_DragMoveEvent(QMenuBar* self, QDragMoveEvent* event);
    friend void QMenuBar_SuperDragMoveEvent(QMenuBar* self, QDragMoveEvent* event);
    friend void QMenuBar_DragLeaveEvent(QMenuBar* self, QDragLeaveEvent* event);
    friend void QMenuBar_SuperDragLeaveEvent(QMenuBar* self, QDragLeaveEvent* event);
    friend void QMenuBar_DropEvent(QMenuBar* self, QDropEvent* event);
    friend void QMenuBar_SuperDropEvent(QMenuBar* self, QDropEvent* event);
    friend void QMenuBar_ShowEvent(QMenuBar* self, QShowEvent* event);
    friend void QMenuBar_SuperShowEvent(QMenuBar* self, QShowEvent* event);
    friend void QMenuBar_HideEvent(QMenuBar* self, QHideEvent* event);
    friend void QMenuBar_SuperHideEvent(QMenuBar* self, QHideEvent* event);
    friend bool QMenuBar_NativeEvent(QMenuBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QMenuBar_SuperNativeEvent(QMenuBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QMenuBar_Metric(const QMenuBar* self, int param1);
    friend int QMenuBar_SuperMetric(const QMenuBar* self, int param1);
    friend void QMenuBar_InitPainter(const QMenuBar* self, QPainter* painter);
    friend void QMenuBar_SuperInitPainter(const QMenuBar* self, QPainter* painter);
    friend QPaintDevice* QMenuBar_Redirected(const QMenuBar* self, QPoint* offset);
    friend QPaintDevice* QMenuBar_SuperRedirected(const QMenuBar* self, QPoint* offset);
    friend QPainter* QMenuBar_SharedPainter(const QMenuBar* self);
    friend QPainter* QMenuBar_SuperSharedPainter(const QMenuBar* self);
    friend void QMenuBar_InputMethodEvent(QMenuBar* self, QInputMethodEvent* param1);
    friend void QMenuBar_SuperInputMethodEvent(QMenuBar* self, QInputMethodEvent* param1);
    friend bool QMenuBar_FocusNextPrevChild(QMenuBar* self, bool next);
    friend bool QMenuBar_SuperFocusNextPrevChild(QMenuBar* self, bool next);
    friend void QMenuBar_ChildEvent(QMenuBar* self, QChildEvent* event);
    friend void QMenuBar_SuperChildEvent(QMenuBar* self, QChildEvent* event);
    friend void QMenuBar_CustomEvent(QMenuBar* self, QEvent* event);
    friend void QMenuBar_SuperCustomEvent(QMenuBar* self, QEvent* event);
    friend void QMenuBar_ConnectNotify(QMenuBar* self, const QMetaMethod* signal);
    friend void QMenuBar_SuperConnectNotify(QMenuBar* self, const QMetaMethod* signal);
    friend void QMenuBar_DisconnectNotify(QMenuBar* self, const QMetaMethod* signal);
    friend void QMenuBar_SuperDisconnectNotify(QMenuBar* self, const QMetaMethod* signal);
    friend void QMenuBar_UpdateMicroFocus(QMenuBar* self);
    friend void QMenuBar_SuperUpdateMicroFocus(QMenuBar* self);
    friend void QMenuBar_Create(QMenuBar* self);
    friend void QMenuBar_SuperCreate(QMenuBar* self);
    friend void QMenuBar_Destroy(QMenuBar* self);
    friend void QMenuBar_SuperDestroy(QMenuBar* self);
    friend bool QMenuBar_FocusNextChild(QMenuBar* self);
    friend bool QMenuBar_SuperFocusNextChild(QMenuBar* self);
    friend bool QMenuBar_FocusPreviousChild(QMenuBar* self);
    friend bool QMenuBar_SuperFocusPreviousChild(QMenuBar* self);
    friend QObject* QMenuBar_Sender(const QMenuBar* self);
    friend QObject* QMenuBar_SuperSender(const QMenuBar* self);
    friend int QMenuBar_SenderSignalIndex(const QMenuBar* self);
    friend int QMenuBar_SuperSenderSignalIndex(const QMenuBar* self);
    friend int QMenuBar_Receivers(const QMenuBar* self, const char* signal);
    friend int QMenuBar_SuperReceivers(const QMenuBar* self, const char* signal);
    friend bool QMenuBar_IsSignalConnected(const QMenuBar* self, const QMetaMethod* signal);
    friend bool QMenuBar_SuperIsSignalConnected(const QMenuBar* self, const QMetaMethod* signal);
    friend double QMenuBar_GetDecodedMetricF(const QMenuBar* self, int metricA, int metricB);
    friend double QMenuBar_SuperGetDecodedMetricF(const QMenuBar* self, int metricA, int metricB);
};

#endif
