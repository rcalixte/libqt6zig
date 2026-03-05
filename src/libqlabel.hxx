#pragma once
#ifndef SRCC_LIBVIRTUALQLABEL_H
#define SRCC_LIBVIRTUALQLABEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QLabel so that we can call protected methods
class VirtualQLabel final : public QLabel {

  public:
    // Virtual class boolean flag
    bool isVirtualQLabel = true;

    // Virtual class public types (including callbacks)
    using QLabel_MetaObject_Callback = QMetaObject* (*)();
    using QLabel_Metacast_Callback = void* (*)(QLabel*, const char*);
    using QLabel_Metacall_Callback = int (*)(QLabel*, int, int, void**);
    using QLabel_SizeHint_Callback = QSize* (*)();
    using QLabel_MinimumSizeHint_Callback = QSize* (*)();
    using QLabel_HeightForWidth_Callback = int (*)(const QLabel*, int);
    using QLabel_Event_Callback = bool (*)(QLabel*, QEvent*);
    using QLabel_KeyPressEvent_Callback = void (*)(QLabel*, QKeyEvent*);
    using QLabel_PaintEvent_Callback = void (*)(QLabel*, QPaintEvent*);
    using QLabel_ChangeEvent_Callback = void (*)(QLabel*, QEvent*);
    using QLabel_MousePressEvent_Callback = void (*)(QLabel*, QMouseEvent*);
    using QLabel_MouseMoveEvent_Callback = void (*)(QLabel*, QMouseEvent*);
    using QLabel_MouseReleaseEvent_Callback = void (*)(QLabel*, QMouseEvent*);
    using QLabel_ContextMenuEvent_Callback = void (*)(QLabel*, QContextMenuEvent*);
    using QLabel_FocusInEvent_Callback = void (*)(QLabel*, QFocusEvent*);
    using QLabel_FocusOutEvent_Callback = void (*)(QLabel*, QFocusEvent*);
    using QLabel_FocusNextPrevChild_Callback = bool (*)(QLabel*, bool);
    using QLabel_InitStyleOption_Callback = void (*)(const QLabel*, QStyleOptionFrame*);
    using QLabel_DevType_Callback = int (*)();
    using QLabel_SetVisible_Callback = void (*)(QLabel*, bool);
    using QLabel_HasHeightForWidth_Callback = bool (*)();
    using QLabel_PaintEngine_Callback = QPaintEngine* (*)();
    using QLabel_MouseDoubleClickEvent_Callback = void (*)(QLabel*, QMouseEvent*);
    using QLabel_WheelEvent_Callback = void (*)(QLabel*, QWheelEvent*);
    using QLabel_KeyReleaseEvent_Callback = void (*)(QLabel*, QKeyEvent*);
    using QLabel_EnterEvent_Callback = void (*)(QLabel*, QEnterEvent*);
    using QLabel_LeaveEvent_Callback = void (*)(QLabel*, QEvent*);
    using QLabel_MoveEvent_Callback = void (*)(QLabel*, QMoveEvent*);
    using QLabel_ResizeEvent_Callback = void (*)(QLabel*, QResizeEvent*);
    using QLabel_CloseEvent_Callback = void (*)(QLabel*, QCloseEvent*);
    using QLabel_TabletEvent_Callback = void (*)(QLabel*, QTabletEvent*);
    using QLabel_ActionEvent_Callback = void (*)(QLabel*, QActionEvent*);
    using QLabel_DragEnterEvent_Callback = void (*)(QLabel*, QDragEnterEvent*);
    using QLabel_DragMoveEvent_Callback = void (*)(QLabel*, QDragMoveEvent*);
    using QLabel_DragLeaveEvent_Callback = void (*)(QLabel*, QDragLeaveEvent*);
    using QLabel_DropEvent_Callback = void (*)(QLabel*, QDropEvent*);
    using QLabel_ShowEvent_Callback = void (*)(QLabel*, QShowEvent*);
    using QLabel_HideEvent_Callback = void (*)(QLabel*, QHideEvent*);
    using QLabel_NativeEvent_Callback = bool (*)(QLabel*, libqt_string, void*, intptr_t*);
    using QLabel_Metric_Callback = int (*)(const QLabel*, int);
    using QLabel_InitPainter_Callback = void (*)(const QLabel*, QPainter*);
    using QLabel_Redirected_Callback = QPaintDevice* (*)(const QLabel*, QPoint*);
    using QLabel_SharedPainter_Callback = QPainter* (*)();
    using QLabel_InputMethodEvent_Callback = void (*)(QLabel*, QInputMethodEvent*);
    using QLabel_InputMethodQuery_Callback = QVariant* (*)(const QLabel*, int);
    using QLabel_EventFilter_Callback = bool (*)(QLabel*, QObject*, QEvent*);
    using QLabel_TimerEvent_Callback = void (*)(QLabel*, QTimerEvent*);
    using QLabel_ChildEvent_Callback = void (*)(QLabel*, QChildEvent*);
    using QLabel_CustomEvent_Callback = void (*)(QLabel*, QEvent*);
    using QLabel_ConnectNotify_Callback = void (*)(QLabel*, QMetaMethod*);
    using QLabel_DisconnectNotify_Callback = void (*)(QLabel*, QMetaMethod*);
    using QLabel_DrawFrame_Callback = void (*)(QLabel*, QPainter*);
    using QLabel_UpdateMicroFocus_Callback = void (*)();
    using QLabel_Create_Callback = void (*)();
    using QLabel_Destroy_Callback = void (*)();
    using QLabel_FocusNextChild_Callback = bool (*)();
    using QLabel_FocusPreviousChild_Callback = bool (*)();
    using QLabel_Sender_Callback = QObject* (*)();
    using QLabel_SenderSignalIndex_Callback = int (*)();
    using QLabel_Receivers_Callback = int (*)(const QLabel*, const char*);
    using QLabel_IsSignalConnected_Callback = bool (*)(const QLabel*, QMetaMethod*);
    using QLabel_GetDecodedMetricF_Callback = double (*)(const QLabel*, int, int);

  protected:
    // Instance callback storage
    QLabel_MetaObject_Callback qlabel_metaobject_callback = nullptr;
    QLabel_Metacast_Callback qlabel_metacast_callback = nullptr;
    QLabel_Metacall_Callback qlabel_metacall_callback = nullptr;
    QLabel_SizeHint_Callback qlabel_sizehint_callback = nullptr;
    QLabel_MinimumSizeHint_Callback qlabel_minimumsizehint_callback = nullptr;
    QLabel_HeightForWidth_Callback qlabel_heightforwidth_callback = nullptr;
    QLabel_Event_Callback qlabel_event_callback = nullptr;
    QLabel_KeyPressEvent_Callback qlabel_keypressevent_callback = nullptr;
    QLabel_PaintEvent_Callback qlabel_paintevent_callback = nullptr;
    QLabel_ChangeEvent_Callback qlabel_changeevent_callback = nullptr;
    QLabel_MousePressEvent_Callback qlabel_mousepressevent_callback = nullptr;
    QLabel_MouseMoveEvent_Callback qlabel_mousemoveevent_callback = nullptr;
    QLabel_MouseReleaseEvent_Callback qlabel_mousereleaseevent_callback = nullptr;
    QLabel_ContextMenuEvent_Callback qlabel_contextmenuevent_callback = nullptr;
    QLabel_FocusInEvent_Callback qlabel_focusinevent_callback = nullptr;
    QLabel_FocusOutEvent_Callback qlabel_focusoutevent_callback = nullptr;
    QLabel_FocusNextPrevChild_Callback qlabel_focusnextprevchild_callback = nullptr;
    QLabel_InitStyleOption_Callback qlabel_initstyleoption_callback = nullptr;
    QLabel_DevType_Callback qlabel_devtype_callback = nullptr;
    QLabel_SetVisible_Callback qlabel_setvisible_callback = nullptr;
    QLabel_HasHeightForWidth_Callback qlabel_hasheightforwidth_callback = nullptr;
    QLabel_PaintEngine_Callback qlabel_paintengine_callback = nullptr;
    QLabel_MouseDoubleClickEvent_Callback qlabel_mousedoubleclickevent_callback = nullptr;
    QLabel_WheelEvent_Callback qlabel_wheelevent_callback = nullptr;
    QLabel_KeyReleaseEvent_Callback qlabel_keyreleaseevent_callback = nullptr;
    QLabel_EnterEvent_Callback qlabel_enterevent_callback = nullptr;
    QLabel_LeaveEvent_Callback qlabel_leaveevent_callback = nullptr;
    QLabel_MoveEvent_Callback qlabel_moveevent_callback = nullptr;
    QLabel_ResizeEvent_Callback qlabel_resizeevent_callback = nullptr;
    QLabel_CloseEvent_Callback qlabel_closeevent_callback = nullptr;
    QLabel_TabletEvent_Callback qlabel_tabletevent_callback = nullptr;
    QLabel_ActionEvent_Callback qlabel_actionevent_callback = nullptr;
    QLabel_DragEnterEvent_Callback qlabel_dragenterevent_callback = nullptr;
    QLabel_DragMoveEvent_Callback qlabel_dragmoveevent_callback = nullptr;
    QLabel_DragLeaveEvent_Callback qlabel_dragleaveevent_callback = nullptr;
    QLabel_DropEvent_Callback qlabel_dropevent_callback = nullptr;
    QLabel_ShowEvent_Callback qlabel_showevent_callback = nullptr;
    QLabel_HideEvent_Callback qlabel_hideevent_callback = nullptr;
    QLabel_NativeEvent_Callback qlabel_nativeevent_callback = nullptr;
    QLabel_Metric_Callback qlabel_metric_callback = nullptr;
    QLabel_InitPainter_Callback qlabel_initpainter_callback = nullptr;
    QLabel_Redirected_Callback qlabel_redirected_callback = nullptr;
    QLabel_SharedPainter_Callback qlabel_sharedpainter_callback = nullptr;
    QLabel_InputMethodEvent_Callback qlabel_inputmethodevent_callback = nullptr;
    QLabel_InputMethodQuery_Callback qlabel_inputmethodquery_callback = nullptr;
    QLabel_EventFilter_Callback qlabel_eventfilter_callback = nullptr;
    QLabel_TimerEvent_Callback qlabel_timerevent_callback = nullptr;
    QLabel_ChildEvent_Callback qlabel_childevent_callback = nullptr;
    QLabel_CustomEvent_Callback qlabel_customevent_callback = nullptr;
    QLabel_ConnectNotify_Callback qlabel_connectnotify_callback = nullptr;
    QLabel_DisconnectNotify_Callback qlabel_disconnectnotify_callback = nullptr;
    QLabel_DrawFrame_Callback qlabel_drawframe_callback = nullptr;
    QLabel_UpdateMicroFocus_Callback qlabel_updatemicrofocus_callback = nullptr;
    QLabel_Create_Callback qlabel_create_callback = nullptr;
    QLabel_Destroy_Callback qlabel_destroy_callback = nullptr;
    QLabel_FocusNextChild_Callback qlabel_focusnextchild_callback = nullptr;
    QLabel_FocusPreviousChild_Callback qlabel_focuspreviouschild_callback = nullptr;
    QLabel_Sender_Callback qlabel_sender_callback = nullptr;
    QLabel_SenderSignalIndex_Callback qlabel_sendersignalindex_callback = nullptr;
    QLabel_Receivers_Callback qlabel_receivers_callback = nullptr;
    QLabel_IsSignalConnected_Callback qlabel_issignalconnected_callback = nullptr;
    QLabel_GetDecodedMetricF_Callback qlabel_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qlabel_metaobject_isbase = false;
    mutable bool qlabel_metacast_isbase = false;
    mutable bool qlabel_metacall_isbase = false;
    mutable bool qlabel_sizehint_isbase = false;
    mutable bool qlabel_minimumsizehint_isbase = false;
    mutable bool qlabel_heightforwidth_isbase = false;
    mutable bool qlabel_event_isbase = false;
    mutable bool qlabel_keypressevent_isbase = false;
    mutable bool qlabel_paintevent_isbase = false;
    mutable bool qlabel_changeevent_isbase = false;
    mutable bool qlabel_mousepressevent_isbase = false;
    mutable bool qlabel_mousemoveevent_isbase = false;
    mutable bool qlabel_mousereleaseevent_isbase = false;
    mutable bool qlabel_contextmenuevent_isbase = false;
    mutable bool qlabel_focusinevent_isbase = false;
    mutable bool qlabel_focusoutevent_isbase = false;
    mutable bool qlabel_focusnextprevchild_isbase = false;
    mutable bool qlabel_initstyleoption_isbase = false;
    mutable bool qlabel_devtype_isbase = false;
    mutable bool qlabel_setvisible_isbase = false;
    mutable bool qlabel_hasheightforwidth_isbase = false;
    mutable bool qlabel_paintengine_isbase = false;
    mutable bool qlabel_mousedoubleclickevent_isbase = false;
    mutable bool qlabel_wheelevent_isbase = false;
    mutable bool qlabel_keyreleaseevent_isbase = false;
    mutable bool qlabel_enterevent_isbase = false;
    mutable bool qlabel_leaveevent_isbase = false;
    mutable bool qlabel_moveevent_isbase = false;
    mutable bool qlabel_resizeevent_isbase = false;
    mutable bool qlabel_closeevent_isbase = false;
    mutable bool qlabel_tabletevent_isbase = false;
    mutable bool qlabel_actionevent_isbase = false;
    mutable bool qlabel_dragenterevent_isbase = false;
    mutable bool qlabel_dragmoveevent_isbase = false;
    mutable bool qlabel_dragleaveevent_isbase = false;
    mutable bool qlabel_dropevent_isbase = false;
    mutable bool qlabel_showevent_isbase = false;
    mutable bool qlabel_hideevent_isbase = false;
    mutable bool qlabel_nativeevent_isbase = false;
    mutable bool qlabel_metric_isbase = false;
    mutable bool qlabel_initpainter_isbase = false;
    mutable bool qlabel_redirected_isbase = false;
    mutable bool qlabel_sharedpainter_isbase = false;
    mutable bool qlabel_inputmethodevent_isbase = false;
    mutable bool qlabel_inputmethodquery_isbase = false;
    mutable bool qlabel_eventfilter_isbase = false;
    mutable bool qlabel_timerevent_isbase = false;
    mutable bool qlabel_childevent_isbase = false;
    mutable bool qlabel_customevent_isbase = false;
    mutable bool qlabel_connectnotify_isbase = false;
    mutable bool qlabel_disconnectnotify_isbase = false;
    mutable bool qlabel_drawframe_isbase = false;
    mutable bool qlabel_updatemicrofocus_isbase = false;
    mutable bool qlabel_create_isbase = false;
    mutable bool qlabel_destroy_isbase = false;
    mutable bool qlabel_focusnextchild_isbase = false;
    mutable bool qlabel_focuspreviouschild_isbase = false;
    mutable bool qlabel_sender_isbase = false;
    mutable bool qlabel_sendersignalindex_isbase = false;
    mutable bool qlabel_receivers_isbase = false;
    mutable bool qlabel_issignalconnected_isbase = false;
    mutable bool qlabel_getdecodedmetricf_isbase = false;

  public:
    VirtualQLabel(QWidget* parent) : QLabel(parent) {};
    VirtualQLabel() : QLabel() {};
    VirtualQLabel(const QString& text) : QLabel(text) {};
    VirtualQLabel(QWidget* parent, Qt::WindowFlags f) : QLabel(parent, f) {};
    VirtualQLabel(const QString& text, QWidget* parent) : QLabel(text, parent) {};
    VirtualQLabel(const QString& text, QWidget* parent, Qt::WindowFlags f) : QLabel(text, parent, f) {};

    // Callback setters
    inline void setQLabel_MetaObject_Callback(QLabel_MetaObject_Callback cb) { qlabel_metaobject_callback = cb; }
    inline void setQLabel_Metacast_Callback(QLabel_Metacast_Callback cb) { qlabel_metacast_callback = cb; }
    inline void setQLabel_Metacall_Callback(QLabel_Metacall_Callback cb) { qlabel_metacall_callback = cb; }
    inline void setQLabel_SizeHint_Callback(QLabel_SizeHint_Callback cb) { qlabel_sizehint_callback = cb; }
    inline void setQLabel_MinimumSizeHint_Callback(QLabel_MinimumSizeHint_Callback cb) { qlabel_minimumsizehint_callback = cb; }
    inline void setQLabel_HeightForWidth_Callback(QLabel_HeightForWidth_Callback cb) { qlabel_heightforwidth_callback = cb; }
    inline void setQLabel_Event_Callback(QLabel_Event_Callback cb) { qlabel_event_callback = cb; }
    inline void setQLabel_KeyPressEvent_Callback(QLabel_KeyPressEvent_Callback cb) { qlabel_keypressevent_callback = cb; }
    inline void setQLabel_PaintEvent_Callback(QLabel_PaintEvent_Callback cb) { qlabel_paintevent_callback = cb; }
    inline void setQLabel_ChangeEvent_Callback(QLabel_ChangeEvent_Callback cb) { qlabel_changeevent_callback = cb; }
    inline void setQLabel_MousePressEvent_Callback(QLabel_MousePressEvent_Callback cb) { qlabel_mousepressevent_callback = cb; }
    inline void setQLabel_MouseMoveEvent_Callback(QLabel_MouseMoveEvent_Callback cb) { qlabel_mousemoveevent_callback = cb; }
    inline void setQLabel_MouseReleaseEvent_Callback(QLabel_MouseReleaseEvent_Callback cb) { qlabel_mousereleaseevent_callback = cb; }
    inline void setQLabel_ContextMenuEvent_Callback(QLabel_ContextMenuEvent_Callback cb) { qlabel_contextmenuevent_callback = cb; }
    inline void setQLabel_FocusInEvent_Callback(QLabel_FocusInEvent_Callback cb) { qlabel_focusinevent_callback = cb; }
    inline void setQLabel_FocusOutEvent_Callback(QLabel_FocusOutEvent_Callback cb) { qlabel_focusoutevent_callback = cb; }
    inline void setQLabel_FocusNextPrevChild_Callback(QLabel_FocusNextPrevChild_Callback cb) { qlabel_focusnextprevchild_callback = cb; }
    inline void setQLabel_InitStyleOption_Callback(QLabel_InitStyleOption_Callback cb) { qlabel_initstyleoption_callback = cb; }
    inline void setQLabel_DevType_Callback(QLabel_DevType_Callback cb) { qlabel_devtype_callback = cb; }
    inline void setQLabel_SetVisible_Callback(QLabel_SetVisible_Callback cb) { qlabel_setvisible_callback = cb; }
    inline void setQLabel_HasHeightForWidth_Callback(QLabel_HasHeightForWidth_Callback cb) { qlabel_hasheightforwidth_callback = cb; }
    inline void setQLabel_PaintEngine_Callback(QLabel_PaintEngine_Callback cb) { qlabel_paintengine_callback = cb; }
    inline void setQLabel_MouseDoubleClickEvent_Callback(QLabel_MouseDoubleClickEvent_Callback cb) { qlabel_mousedoubleclickevent_callback = cb; }
    inline void setQLabel_WheelEvent_Callback(QLabel_WheelEvent_Callback cb) { qlabel_wheelevent_callback = cb; }
    inline void setQLabel_KeyReleaseEvent_Callback(QLabel_KeyReleaseEvent_Callback cb) { qlabel_keyreleaseevent_callback = cb; }
    inline void setQLabel_EnterEvent_Callback(QLabel_EnterEvent_Callback cb) { qlabel_enterevent_callback = cb; }
    inline void setQLabel_LeaveEvent_Callback(QLabel_LeaveEvent_Callback cb) { qlabel_leaveevent_callback = cb; }
    inline void setQLabel_MoveEvent_Callback(QLabel_MoveEvent_Callback cb) { qlabel_moveevent_callback = cb; }
    inline void setQLabel_ResizeEvent_Callback(QLabel_ResizeEvent_Callback cb) { qlabel_resizeevent_callback = cb; }
    inline void setQLabel_CloseEvent_Callback(QLabel_CloseEvent_Callback cb) { qlabel_closeevent_callback = cb; }
    inline void setQLabel_TabletEvent_Callback(QLabel_TabletEvent_Callback cb) { qlabel_tabletevent_callback = cb; }
    inline void setQLabel_ActionEvent_Callback(QLabel_ActionEvent_Callback cb) { qlabel_actionevent_callback = cb; }
    inline void setQLabel_DragEnterEvent_Callback(QLabel_DragEnterEvent_Callback cb) { qlabel_dragenterevent_callback = cb; }
    inline void setQLabel_DragMoveEvent_Callback(QLabel_DragMoveEvent_Callback cb) { qlabel_dragmoveevent_callback = cb; }
    inline void setQLabel_DragLeaveEvent_Callback(QLabel_DragLeaveEvent_Callback cb) { qlabel_dragleaveevent_callback = cb; }
    inline void setQLabel_DropEvent_Callback(QLabel_DropEvent_Callback cb) { qlabel_dropevent_callback = cb; }
    inline void setQLabel_ShowEvent_Callback(QLabel_ShowEvent_Callback cb) { qlabel_showevent_callback = cb; }
    inline void setQLabel_HideEvent_Callback(QLabel_HideEvent_Callback cb) { qlabel_hideevent_callback = cb; }
    inline void setQLabel_NativeEvent_Callback(QLabel_NativeEvent_Callback cb) { qlabel_nativeevent_callback = cb; }
    inline void setQLabel_Metric_Callback(QLabel_Metric_Callback cb) { qlabel_metric_callback = cb; }
    inline void setQLabel_InitPainter_Callback(QLabel_InitPainter_Callback cb) { qlabel_initpainter_callback = cb; }
    inline void setQLabel_Redirected_Callback(QLabel_Redirected_Callback cb) { qlabel_redirected_callback = cb; }
    inline void setQLabel_SharedPainter_Callback(QLabel_SharedPainter_Callback cb) { qlabel_sharedpainter_callback = cb; }
    inline void setQLabel_InputMethodEvent_Callback(QLabel_InputMethodEvent_Callback cb) { qlabel_inputmethodevent_callback = cb; }
    inline void setQLabel_InputMethodQuery_Callback(QLabel_InputMethodQuery_Callback cb) { qlabel_inputmethodquery_callback = cb; }
    inline void setQLabel_EventFilter_Callback(QLabel_EventFilter_Callback cb) { qlabel_eventfilter_callback = cb; }
    inline void setQLabel_TimerEvent_Callback(QLabel_TimerEvent_Callback cb) { qlabel_timerevent_callback = cb; }
    inline void setQLabel_ChildEvent_Callback(QLabel_ChildEvent_Callback cb) { qlabel_childevent_callback = cb; }
    inline void setQLabel_CustomEvent_Callback(QLabel_CustomEvent_Callback cb) { qlabel_customevent_callback = cb; }
    inline void setQLabel_ConnectNotify_Callback(QLabel_ConnectNotify_Callback cb) { qlabel_connectnotify_callback = cb; }
    inline void setQLabel_DisconnectNotify_Callback(QLabel_DisconnectNotify_Callback cb) { qlabel_disconnectnotify_callback = cb; }
    inline void setQLabel_DrawFrame_Callback(QLabel_DrawFrame_Callback cb) { qlabel_drawframe_callback = cb; }
    inline void setQLabel_UpdateMicroFocus_Callback(QLabel_UpdateMicroFocus_Callback cb) { qlabel_updatemicrofocus_callback = cb; }
    inline void setQLabel_Create_Callback(QLabel_Create_Callback cb) { qlabel_create_callback = cb; }
    inline void setQLabel_Destroy_Callback(QLabel_Destroy_Callback cb) { qlabel_destroy_callback = cb; }
    inline void setQLabel_FocusNextChild_Callback(QLabel_FocusNextChild_Callback cb) { qlabel_focusnextchild_callback = cb; }
    inline void setQLabel_FocusPreviousChild_Callback(QLabel_FocusPreviousChild_Callback cb) { qlabel_focuspreviouschild_callback = cb; }
    inline void setQLabel_Sender_Callback(QLabel_Sender_Callback cb) { qlabel_sender_callback = cb; }
    inline void setQLabel_SenderSignalIndex_Callback(QLabel_SenderSignalIndex_Callback cb) { qlabel_sendersignalindex_callback = cb; }
    inline void setQLabel_Receivers_Callback(QLabel_Receivers_Callback cb) { qlabel_receivers_callback = cb; }
    inline void setQLabel_IsSignalConnected_Callback(QLabel_IsSignalConnected_Callback cb) { qlabel_issignalconnected_callback = cb; }
    inline void setQLabel_GetDecodedMetricF_Callback(QLabel_GetDecodedMetricF_Callback cb) { qlabel_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQLabel_MetaObject_IsBase(bool value) const { qlabel_metaobject_isbase = value; }
    inline void setQLabel_Metacast_IsBase(bool value) const { qlabel_metacast_isbase = value; }
    inline void setQLabel_Metacall_IsBase(bool value) const { qlabel_metacall_isbase = value; }
    inline void setQLabel_SizeHint_IsBase(bool value) const { qlabel_sizehint_isbase = value; }
    inline void setQLabel_MinimumSizeHint_IsBase(bool value) const { qlabel_minimumsizehint_isbase = value; }
    inline void setQLabel_HeightForWidth_IsBase(bool value) const { qlabel_heightforwidth_isbase = value; }
    inline void setQLabel_Event_IsBase(bool value) const { qlabel_event_isbase = value; }
    inline void setQLabel_KeyPressEvent_IsBase(bool value) const { qlabel_keypressevent_isbase = value; }
    inline void setQLabel_PaintEvent_IsBase(bool value) const { qlabel_paintevent_isbase = value; }
    inline void setQLabel_ChangeEvent_IsBase(bool value) const { qlabel_changeevent_isbase = value; }
    inline void setQLabel_MousePressEvent_IsBase(bool value) const { qlabel_mousepressevent_isbase = value; }
    inline void setQLabel_MouseMoveEvent_IsBase(bool value) const { qlabel_mousemoveevent_isbase = value; }
    inline void setQLabel_MouseReleaseEvent_IsBase(bool value) const { qlabel_mousereleaseevent_isbase = value; }
    inline void setQLabel_ContextMenuEvent_IsBase(bool value) const { qlabel_contextmenuevent_isbase = value; }
    inline void setQLabel_FocusInEvent_IsBase(bool value) const { qlabel_focusinevent_isbase = value; }
    inline void setQLabel_FocusOutEvent_IsBase(bool value) const { qlabel_focusoutevent_isbase = value; }
    inline void setQLabel_FocusNextPrevChild_IsBase(bool value) const { qlabel_focusnextprevchild_isbase = value; }
    inline void setQLabel_InitStyleOption_IsBase(bool value) const { qlabel_initstyleoption_isbase = value; }
    inline void setQLabel_DevType_IsBase(bool value) const { qlabel_devtype_isbase = value; }
    inline void setQLabel_SetVisible_IsBase(bool value) const { qlabel_setvisible_isbase = value; }
    inline void setQLabel_HasHeightForWidth_IsBase(bool value) const { qlabel_hasheightforwidth_isbase = value; }
    inline void setQLabel_PaintEngine_IsBase(bool value) const { qlabel_paintengine_isbase = value; }
    inline void setQLabel_MouseDoubleClickEvent_IsBase(bool value) const { qlabel_mousedoubleclickevent_isbase = value; }
    inline void setQLabel_WheelEvent_IsBase(bool value) const { qlabel_wheelevent_isbase = value; }
    inline void setQLabel_KeyReleaseEvent_IsBase(bool value) const { qlabel_keyreleaseevent_isbase = value; }
    inline void setQLabel_EnterEvent_IsBase(bool value) const { qlabel_enterevent_isbase = value; }
    inline void setQLabel_LeaveEvent_IsBase(bool value) const { qlabel_leaveevent_isbase = value; }
    inline void setQLabel_MoveEvent_IsBase(bool value) const { qlabel_moveevent_isbase = value; }
    inline void setQLabel_ResizeEvent_IsBase(bool value) const { qlabel_resizeevent_isbase = value; }
    inline void setQLabel_CloseEvent_IsBase(bool value) const { qlabel_closeevent_isbase = value; }
    inline void setQLabel_TabletEvent_IsBase(bool value) const { qlabel_tabletevent_isbase = value; }
    inline void setQLabel_ActionEvent_IsBase(bool value) const { qlabel_actionevent_isbase = value; }
    inline void setQLabel_DragEnterEvent_IsBase(bool value) const { qlabel_dragenterevent_isbase = value; }
    inline void setQLabel_DragMoveEvent_IsBase(bool value) const { qlabel_dragmoveevent_isbase = value; }
    inline void setQLabel_DragLeaveEvent_IsBase(bool value) const { qlabel_dragleaveevent_isbase = value; }
    inline void setQLabel_DropEvent_IsBase(bool value) const { qlabel_dropevent_isbase = value; }
    inline void setQLabel_ShowEvent_IsBase(bool value) const { qlabel_showevent_isbase = value; }
    inline void setQLabel_HideEvent_IsBase(bool value) const { qlabel_hideevent_isbase = value; }
    inline void setQLabel_NativeEvent_IsBase(bool value) const { qlabel_nativeevent_isbase = value; }
    inline void setQLabel_Metric_IsBase(bool value) const { qlabel_metric_isbase = value; }
    inline void setQLabel_InitPainter_IsBase(bool value) const { qlabel_initpainter_isbase = value; }
    inline void setQLabel_Redirected_IsBase(bool value) const { qlabel_redirected_isbase = value; }
    inline void setQLabel_SharedPainter_IsBase(bool value) const { qlabel_sharedpainter_isbase = value; }
    inline void setQLabel_InputMethodEvent_IsBase(bool value) const { qlabel_inputmethodevent_isbase = value; }
    inline void setQLabel_InputMethodQuery_IsBase(bool value) const { qlabel_inputmethodquery_isbase = value; }
    inline void setQLabel_EventFilter_IsBase(bool value) const { qlabel_eventfilter_isbase = value; }
    inline void setQLabel_TimerEvent_IsBase(bool value) const { qlabel_timerevent_isbase = value; }
    inline void setQLabel_ChildEvent_IsBase(bool value) const { qlabel_childevent_isbase = value; }
    inline void setQLabel_CustomEvent_IsBase(bool value) const { qlabel_customevent_isbase = value; }
    inline void setQLabel_ConnectNotify_IsBase(bool value) const { qlabel_connectnotify_isbase = value; }
    inline void setQLabel_DisconnectNotify_IsBase(bool value) const { qlabel_disconnectnotify_isbase = value; }
    inline void setQLabel_DrawFrame_IsBase(bool value) const { qlabel_drawframe_isbase = value; }
    inline void setQLabel_UpdateMicroFocus_IsBase(bool value) const { qlabel_updatemicrofocus_isbase = value; }
    inline void setQLabel_Create_IsBase(bool value) const { qlabel_create_isbase = value; }
    inline void setQLabel_Destroy_IsBase(bool value) const { qlabel_destroy_isbase = value; }
    inline void setQLabel_FocusNextChild_IsBase(bool value) const { qlabel_focusnextchild_isbase = value; }
    inline void setQLabel_FocusPreviousChild_IsBase(bool value) const { qlabel_focuspreviouschild_isbase = value; }
    inline void setQLabel_Sender_IsBase(bool value) const { qlabel_sender_isbase = value; }
    inline void setQLabel_SenderSignalIndex_IsBase(bool value) const { qlabel_sendersignalindex_isbase = value; }
    inline void setQLabel_Receivers_IsBase(bool value) const { qlabel_receivers_isbase = value; }
    inline void setQLabel_IsSignalConnected_IsBase(bool value) const { qlabel_issignalconnected_isbase = value; }
    inline void setQLabel_GetDecodedMetricF_IsBase(bool value) const { qlabel_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qlabel_metaobject_isbase) {
            qlabel_metaobject_isbase = false;
            return QLabel::metaObject();
        }
        auto metaobject_cb = qlabel_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QLabel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qlabel_metacast_isbase) {
            qlabel_metacast_isbase = false;
            return QLabel::qt_metacast(param1);
        }
        auto metacast_cb = qlabel_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QLabel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlabel_metacall_isbase) {
            qlabel_metacall_isbase = false;
            return QLabel::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qlabel_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QLabel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qlabel_sizehint_isbase) {
            qlabel_sizehint_isbase = false;
            return QLabel::sizeHint();
        }
        auto sizehint_cb = qlabel_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QLabel::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qlabel_minimumsizehint_isbase) {
            qlabel_minimumsizehint_isbase = false;
            return QLabel::minimumSizeHint();
        }
        auto minimumsizehint_cb = qlabel_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QLabel::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qlabel_heightforwidth_isbase) {
            qlabel_heightforwidth_isbase = false;
            return QLabel::heightForWidth(param1);
        }
        auto heightforwidth_cb = qlabel_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLabel::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qlabel_event_isbase) {
            qlabel_event_isbase = false;
            return QLabel::event(e);
        }
        auto event_cb = qlabel_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QLabel::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (qlabel_keypressevent_isbase) {
            qlabel_keypressevent_isbase = false;
            QLabel::keyPressEvent(ev);
            return;
        }
        auto keypressevent_cb = qlabel_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = ev;

            keypressevent_cb(this, cbval1);
            return;
        }
        QLabel::keyPressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qlabel_paintevent_isbase) {
            qlabel_paintevent_isbase = false;
            QLabel::paintEvent(param1);
            return;
        }
        auto paintevent_cb = qlabel_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        QLabel::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qlabel_changeevent_isbase) {
            qlabel_changeevent_isbase = false;
            QLabel::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qlabel_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QLabel::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* ev) override {
        if (qlabel_mousepressevent_isbase) {
            qlabel_mousepressevent_isbase = false;
            QLabel::mousePressEvent(ev);
            return;
        }
        auto mousepressevent_cb = qlabel_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = ev;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QLabel::mousePressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* ev) override {
        if (qlabel_mousemoveevent_isbase) {
            qlabel_mousemoveevent_isbase = false;
            QLabel::mouseMoveEvent(ev);
            return;
        }
        auto mousemoveevent_cb = qlabel_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = ev;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QLabel::mouseMoveEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* ev) override {
        if (qlabel_mousereleaseevent_isbase) {
            qlabel_mousereleaseevent_isbase = false;
            QLabel::mouseReleaseEvent(ev);
            return;
        }
        auto mousereleaseevent_cb = qlabel_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = ev;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QLabel::mouseReleaseEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* ev) override {
        if (qlabel_contextmenuevent_isbase) {
            qlabel_contextmenuevent_isbase = false;
            QLabel::contextMenuEvent(ev);
            return;
        }
        auto contextmenuevent_cb = qlabel_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = ev;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QLabel::contextMenuEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* ev) override {
        if (qlabel_focusinevent_isbase) {
            qlabel_focusinevent_isbase = false;
            QLabel::focusInEvent(ev);
            return;
        }
        auto focusinevent_cb = qlabel_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = ev;

            focusinevent_cb(this, cbval1);
            return;
        }
        QLabel::focusInEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* ev) override {
        if (qlabel_focusoutevent_isbase) {
            qlabel_focusoutevent_isbase = false;
            QLabel::focusOutEvent(ev);
            return;
        }
        auto focusoutevent_cb = qlabel_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = ev;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QLabel::focusOutEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qlabel_focusnextprevchild_isbase) {
            qlabel_focusnextprevchild_isbase = false;
            return QLabel::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qlabel_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QLabel::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qlabel_initstyleoption_isbase) {
            qlabel_initstyleoption_isbase = false;
            QLabel::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qlabel_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QLabel::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qlabel_devtype_isbase) {
            qlabel_devtype_isbase = false;
            return QLabel::devType();
        }
        auto devtype_cb = qlabel_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QLabel::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qlabel_setvisible_isbase) {
            qlabel_setvisible_isbase = false;
            QLabel::setVisible(visible);
            return;
        }
        auto setvisible_cb = qlabel_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QLabel::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qlabel_hasheightforwidth_isbase) {
            qlabel_hasheightforwidth_isbase = false;
            return QLabel::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qlabel_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QLabel::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qlabel_paintengine_isbase) {
            qlabel_paintengine_isbase = false;
            return QLabel::paintEngine();
        }
        auto paintengine_cb = qlabel_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QLabel::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qlabel_mousedoubleclickevent_isbase) {
            qlabel_mousedoubleclickevent_isbase = false;
            QLabel::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qlabel_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QLabel::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qlabel_wheelevent_isbase) {
            qlabel_wheelevent_isbase = false;
            QLabel::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qlabel_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QLabel::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qlabel_keyreleaseevent_isbase) {
            qlabel_keyreleaseevent_isbase = false;
            QLabel::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qlabel_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QLabel::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qlabel_enterevent_isbase) {
            qlabel_enterevent_isbase = false;
            QLabel::enterEvent(event);
            return;
        }
        auto enterevent_cb = qlabel_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QLabel::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qlabel_leaveevent_isbase) {
            qlabel_leaveevent_isbase = false;
            QLabel::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qlabel_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QLabel::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qlabel_moveevent_isbase) {
            qlabel_moveevent_isbase = false;
            QLabel::moveEvent(event);
            return;
        }
        auto moveevent_cb = qlabel_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QLabel::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qlabel_resizeevent_isbase) {
            qlabel_resizeevent_isbase = false;
            QLabel::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qlabel_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QLabel::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qlabel_closeevent_isbase) {
            qlabel_closeevent_isbase = false;
            QLabel::closeEvent(event);
            return;
        }
        auto closeevent_cb = qlabel_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QLabel::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qlabel_tabletevent_isbase) {
            qlabel_tabletevent_isbase = false;
            QLabel::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qlabel_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QLabel::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qlabel_actionevent_isbase) {
            qlabel_actionevent_isbase = false;
            QLabel::actionEvent(event);
            return;
        }
        auto actionevent_cb = qlabel_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QLabel::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qlabel_dragenterevent_isbase) {
            qlabel_dragenterevent_isbase = false;
            QLabel::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qlabel_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QLabel::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qlabel_dragmoveevent_isbase) {
            qlabel_dragmoveevent_isbase = false;
            QLabel::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qlabel_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QLabel::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qlabel_dragleaveevent_isbase) {
            qlabel_dragleaveevent_isbase = false;
            QLabel::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qlabel_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QLabel::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qlabel_dropevent_isbase) {
            qlabel_dropevent_isbase = false;
            QLabel::dropEvent(event);
            return;
        }
        auto dropevent_cb = qlabel_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QLabel::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qlabel_showevent_isbase) {
            qlabel_showevent_isbase = false;
            QLabel::showEvent(event);
            return;
        }
        auto showevent_cb = qlabel_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QLabel::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qlabel_hideevent_isbase) {
            qlabel_hideevent_isbase = false;
            QLabel::hideEvent(event);
            return;
        }
        auto hideevent_cb = qlabel_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QLabel::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qlabel_nativeevent_isbase) {
            qlabel_nativeevent_isbase = false;
            return QLabel::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qlabel_nativeevent_callback;
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
        return QLabel::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qlabel_metric_isbase) {
            qlabel_metric_isbase = false;
            return QLabel::metric(param1);
        }
        auto metric_cb = qlabel_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLabel::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qlabel_initpainter_isbase) {
            qlabel_initpainter_isbase = false;
            QLabel::initPainter(painter);
            return;
        }
        auto initpainter_cb = qlabel_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QLabel::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qlabel_redirected_isbase) {
            qlabel_redirected_isbase = false;
            return QLabel::redirected(offset);
        }
        auto redirected_cb = qlabel_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QLabel::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qlabel_sharedpainter_isbase) {
            qlabel_sharedpainter_isbase = false;
            return QLabel::sharedPainter();
        }
        auto sharedpainter_cb = qlabel_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QLabel::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qlabel_inputmethodevent_isbase) {
            qlabel_inputmethodevent_isbase = false;
            QLabel::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qlabel_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QLabel::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qlabel_inputmethodquery_isbase) {
            qlabel_inputmethodquery_isbase = false;
            return QLabel::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qlabel_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QLabel::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlabel_eventfilter_isbase) {
            qlabel_eventfilter_isbase = false;
            return QLabel::eventFilter(watched, event);
        }
        auto eventfilter_cb = qlabel_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QLabel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlabel_timerevent_isbase) {
            qlabel_timerevent_isbase = false;
            QLabel::timerEvent(event);
            return;
        }
        auto timerevent_cb = qlabel_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QLabel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlabel_childevent_isbase) {
            qlabel_childevent_isbase = false;
            QLabel::childEvent(event);
            return;
        }
        auto childevent_cb = qlabel_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QLabel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlabel_customevent_isbase) {
            qlabel_customevent_isbase = false;
            QLabel::customEvent(event);
            return;
        }
        auto customevent_cb = qlabel_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QLabel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlabel_connectnotify_isbase) {
            qlabel_connectnotify_isbase = false;
            QLabel::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qlabel_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QLabel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlabel_disconnectnotify_isbase) {
            qlabel_disconnectnotify_isbase = false;
            QLabel::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qlabel_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QLabel::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qlabel_drawframe_isbase) {
            qlabel_drawframe_isbase = false;
            QLabel::drawFrame(param1);
            return;
        }
        auto drawframe_cb = qlabel_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;

            drawframe_cb(this, cbval1);
            return;
        }
        QLabel::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qlabel_updatemicrofocus_isbase) {
            qlabel_updatemicrofocus_isbase = false;
            QLabel::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qlabel_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QLabel::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qlabel_create_isbase) {
            qlabel_create_isbase = false;
            QLabel::create();
            return;
        }
        auto create_cb = qlabel_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QLabel::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qlabel_destroy_isbase) {
            qlabel_destroy_isbase = false;
            QLabel::destroy();
            return;
        }
        auto destroy_cb = qlabel_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QLabel::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qlabel_focusnextchild_isbase) {
            qlabel_focusnextchild_isbase = false;
            return QLabel::focusNextChild();
        }
        auto focusnextchild_cb = qlabel_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QLabel::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qlabel_focuspreviouschild_isbase) {
            qlabel_focuspreviouschild_isbase = false;
            return QLabel::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qlabel_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QLabel::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qlabel_sender_isbase) {
            qlabel_sender_isbase = false;
            return QLabel::sender();
        }
        auto sender_cb = qlabel_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QLabel::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qlabel_sendersignalindex_isbase) {
            qlabel_sendersignalindex_isbase = false;
            return QLabel::senderSignalIndex();
        }
        auto sendersignalindex_cb = qlabel_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QLabel::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qlabel_receivers_isbase) {
            qlabel_receivers_isbase = false;
            return QLabel::receivers(signal);
        }
        auto receivers_cb = qlabel_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLabel::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qlabel_issignalconnected_isbase) {
            qlabel_issignalconnected_isbase = false;
            return QLabel::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qlabel_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QLabel::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qlabel_getdecodedmetricf_isbase) {
            qlabel_getdecodedmetricf_isbase = false;
            return QLabel::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qlabel_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QLabel::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool QLabel_Event(QLabel* self, QEvent* e);
    friend bool QLabel_SuperEvent(QLabel* self, QEvent* e);
    friend void QLabel_KeyPressEvent(QLabel* self, QKeyEvent* ev);
    friend void QLabel_SuperKeyPressEvent(QLabel* self, QKeyEvent* ev);
    friend void QLabel_PaintEvent(QLabel* self, QPaintEvent* param1);
    friend void QLabel_SuperPaintEvent(QLabel* self, QPaintEvent* param1);
    friend void QLabel_ChangeEvent(QLabel* self, QEvent* param1);
    friend void QLabel_SuperChangeEvent(QLabel* self, QEvent* param1);
    friend void QLabel_MousePressEvent(QLabel* self, QMouseEvent* ev);
    friend void QLabel_SuperMousePressEvent(QLabel* self, QMouseEvent* ev);
    friend void QLabel_MouseMoveEvent(QLabel* self, QMouseEvent* ev);
    friend void QLabel_SuperMouseMoveEvent(QLabel* self, QMouseEvent* ev);
    friend void QLabel_MouseReleaseEvent(QLabel* self, QMouseEvent* ev);
    friend void QLabel_SuperMouseReleaseEvent(QLabel* self, QMouseEvent* ev);
    friend void QLabel_ContextMenuEvent(QLabel* self, QContextMenuEvent* ev);
    friend void QLabel_SuperContextMenuEvent(QLabel* self, QContextMenuEvent* ev);
    friend void QLabel_FocusInEvent(QLabel* self, QFocusEvent* ev);
    friend void QLabel_SuperFocusInEvent(QLabel* self, QFocusEvent* ev);
    friend void QLabel_FocusOutEvent(QLabel* self, QFocusEvent* ev);
    friend void QLabel_SuperFocusOutEvent(QLabel* self, QFocusEvent* ev);
    friend bool QLabel_FocusNextPrevChild(QLabel* self, bool next);
    friend bool QLabel_SuperFocusNextPrevChild(QLabel* self, bool next);
    friend void QLabel_InitStyleOption(const QLabel* self, QStyleOptionFrame* option);
    friend void QLabel_SuperInitStyleOption(const QLabel* self, QStyleOptionFrame* option);
    friend void QLabel_MouseDoubleClickEvent(QLabel* self, QMouseEvent* event);
    friend void QLabel_SuperMouseDoubleClickEvent(QLabel* self, QMouseEvent* event);
    friend void QLabel_WheelEvent(QLabel* self, QWheelEvent* event);
    friend void QLabel_SuperWheelEvent(QLabel* self, QWheelEvent* event);
    friend void QLabel_KeyReleaseEvent(QLabel* self, QKeyEvent* event);
    friend void QLabel_SuperKeyReleaseEvent(QLabel* self, QKeyEvent* event);
    friend void QLabel_EnterEvent(QLabel* self, QEnterEvent* event);
    friend void QLabel_SuperEnterEvent(QLabel* self, QEnterEvent* event);
    friend void QLabel_LeaveEvent(QLabel* self, QEvent* event);
    friend void QLabel_SuperLeaveEvent(QLabel* self, QEvent* event);
    friend void QLabel_MoveEvent(QLabel* self, QMoveEvent* event);
    friend void QLabel_SuperMoveEvent(QLabel* self, QMoveEvent* event);
    friend void QLabel_ResizeEvent(QLabel* self, QResizeEvent* event);
    friend void QLabel_SuperResizeEvent(QLabel* self, QResizeEvent* event);
    friend void QLabel_CloseEvent(QLabel* self, QCloseEvent* event);
    friend void QLabel_SuperCloseEvent(QLabel* self, QCloseEvent* event);
    friend void QLabel_TabletEvent(QLabel* self, QTabletEvent* event);
    friend void QLabel_SuperTabletEvent(QLabel* self, QTabletEvent* event);
    friend void QLabel_ActionEvent(QLabel* self, QActionEvent* event);
    friend void QLabel_SuperActionEvent(QLabel* self, QActionEvent* event);
    friend void QLabel_DragEnterEvent(QLabel* self, QDragEnterEvent* event);
    friend void QLabel_SuperDragEnterEvent(QLabel* self, QDragEnterEvent* event);
    friend void QLabel_DragMoveEvent(QLabel* self, QDragMoveEvent* event);
    friend void QLabel_SuperDragMoveEvent(QLabel* self, QDragMoveEvent* event);
    friend void QLabel_DragLeaveEvent(QLabel* self, QDragLeaveEvent* event);
    friend void QLabel_SuperDragLeaveEvent(QLabel* self, QDragLeaveEvent* event);
    friend void QLabel_DropEvent(QLabel* self, QDropEvent* event);
    friend void QLabel_SuperDropEvent(QLabel* self, QDropEvent* event);
    friend void QLabel_ShowEvent(QLabel* self, QShowEvent* event);
    friend void QLabel_SuperShowEvent(QLabel* self, QShowEvent* event);
    friend void QLabel_HideEvent(QLabel* self, QHideEvent* event);
    friend void QLabel_SuperHideEvent(QLabel* self, QHideEvent* event);
    friend bool QLabel_NativeEvent(QLabel* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QLabel_SuperNativeEvent(QLabel* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QLabel_Metric(const QLabel* self, int param1);
    friend int QLabel_SuperMetric(const QLabel* self, int param1);
    friend void QLabel_InitPainter(const QLabel* self, QPainter* painter);
    friend void QLabel_SuperInitPainter(const QLabel* self, QPainter* painter);
    friend QPaintDevice* QLabel_Redirected(const QLabel* self, QPoint* offset);
    friend QPaintDevice* QLabel_SuperRedirected(const QLabel* self, QPoint* offset);
    friend QPainter* QLabel_SharedPainter(const QLabel* self);
    friend QPainter* QLabel_SuperSharedPainter(const QLabel* self);
    friend void QLabel_InputMethodEvent(QLabel* self, QInputMethodEvent* param1);
    friend void QLabel_SuperInputMethodEvent(QLabel* self, QInputMethodEvent* param1);
    friend void QLabel_TimerEvent(QLabel* self, QTimerEvent* event);
    friend void QLabel_SuperTimerEvent(QLabel* self, QTimerEvent* event);
    friend void QLabel_ChildEvent(QLabel* self, QChildEvent* event);
    friend void QLabel_SuperChildEvent(QLabel* self, QChildEvent* event);
    friend void QLabel_CustomEvent(QLabel* self, QEvent* event);
    friend void QLabel_SuperCustomEvent(QLabel* self, QEvent* event);
    friend void QLabel_ConnectNotify(QLabel* self, const QMetaMethod* signal);
    friend void QLabel_SuperConnectNotify(QLabel* self, const QMetaMethod* signal);
    friend void QLabel_DisconnectNotify(QLabel* self, const QMetaMethod* signal);
    friend void QLabel_SuperDisconnectNotify(QLabel* self, const QMetaMethod* signal);
    friend void QLabel_DrawFrame(QLabel* self, QPainter* param1);
    friend void QLabel_SuperDrawFrame(QLabel* self, QPainter* param1);
    friend void QLabel_UpdateMicroFocus(QLabel* self);
    friend void QLabel_SuperUpdateMicroFocus(QLabel* self);
    friend void QLabel_Create(QLabel* self);
    friend void QLabel_SuperCreate(QLabel* self);
    friend void QLabel_Destroy(QLabel* self);
    friend void QLabel_SuperDestroy(QLabel* self);
    friend bool QLabel_FocusNextChild(QLabel* self);
    friend bool QLabel_SuperFocusNextChild(QLabel* self);
    friend bool QLabel_FocusPreviousChild(QLabel* self);
    friend bool QLabel_SuperFocusPreviousChild(QLabel* self);
    friend QObject* QLabel_Sender(const QLabel* self);
    friend QObject* QLabel_SuperSender(const QLabel* self);
    friend int QLabel_SenderSignalIndex(const QLabel* self);
    friend int QLabel_SuperSenderSignalIndex(const QLabel* self);
    friend int QLabel_Receivers(const QLabel* self, const char* signal);
    friend int QLabel_SuperReceivers(const QLabel* self, const char* signal);
    friend bool QLabel_IsSignalConnected(const QLabel* self, const QMetaMethod* signal);
    friend bool QLabel_SuperIsSignalConnected(const QLabel* self, const QMetaMethod* signal);
    friend double QLabel_GetDecodedMetricF(const QLabel* self, int metricA, int metricB);
    friend double QLabel_SuperGetDecodedMetricF(const QLabel* self, int metricA, int metricB);
};

#endif
