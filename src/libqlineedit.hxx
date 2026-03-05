#pragma once
#ifndef SRCC_LIBVIRTUALQLINEEDIT_H
#define SRCC_LIBVIRTUALQLINEEDIT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QLineEdit so that we can call protected methods
class VirtualQLineEdit final : public QLineEdit {

  public:
    // Virtual class boolean flag
    bool isVirtualQLineEdit = true;

    // Virtual class public types (including callbacks)
    using QLineEdit_MetaObject_Callback = QMetaObject* (*)();
    using QLineEdit_Metacast_Callback = void* (*)(QLineEdit*, const char*);
    using QLineEdit_Metacall_Callback = int (*)(QLineEdit*, int, int, void**);
    using QLineEdit_SizeHint_Callback = QSize* (*)();
    using QLineEdit_MinimumSizeHint_Callback = QSize* (*)();
    using QLineEdit_MousePressEvent_Callback = void (*)(QLineEdit*, QMouseEvent*);
    using QLineEdit_MouseMoveEvent_Callback = void (*)(QLineEdit*, QMouseEvent*);
    using QLineEdit_MouseReleaseEvent_Callback = void (*)(QLineEdit*, QMouseEvent*);
    using QLineEdit_MouseDoubleClickEvent_Callback = void (*)(QLineEdit*, QMouseEvent*);
    using QLineEdit_KeyPressEvent_Callback = void (*)(QLineEdit*, QKeyEvent*);
    using QLineEdit_KeyReleaseEvent_Callback = void (*)(QLineEdit*, QKeyEvent*);
    using QLineEdit_FocusInEvent_Callback = void (*)(QLineEdit*, QFocusEvent*);
    using QLineEdit_FocusOutEvent_Callback = void (*)(QLineEdit*, QFocusEvent*);
    using QLineEdit_PaintEvent_Callback = void (*)(QLineEdit*, QPaintEvent*);
    using QLineEdit_DragEnterEvent_Callback = void (*)(QLineEdit*, QDragEnterEvent*);
    using QLineEdit_DragMoveEvent_Callback = void (*)(QLineEdit*, QDragMoveEvent*);
    using QLineEdit_DragLeaveEvent_Callback = void (*)(QLineEdit*, QDragLeaveEvent*);
    using QLineEdit_DropEvent_Callback = void (*)(QLineEdit*, QDropEvent*);
    using QLineEdit_ChangeEvent_Callback = void (*)(QLineEdit*, QEvent*);
    using QLineEdit_ContextMenuEvent_Callback = void (*)(QLineEdit*, QContextMenuEvent*);
    using QLineEdit_InputMethodEvent_Callback = void (*)(QLineEdit*, QInputMethodEvent*);
    using QLineEdit_InitStyleOption_Callback = void (*)(const QLineEdit*, QStyleOptionFrame*);
    using QLineEdit_InputMethodQuery_Callback = QVariant* (*)(const QLineEdit*, int);
    using QLineEdit_TimerEvent_Callback = void (*)(QLineEdit*, QTimerEvent*);
    using QLineEdit_Event_Callback = bool (*)(QLineEdit*, QEvent*);
    using QLineEdit_DevType_Callback = int (*)();
    using QLineEdit_SetVisible_Callback = void (*)(QLineEdit*, bool);
    using QLineEdit_HeightForWidth_Callback = int (*)(const QLineEdit*, int);
    using QLineEdit_HasHeightForWidth_Callback = bool (*)();
    using QLineEdit_PaintEngine_Callback = QPaintEngine* (*)();
    using QLineEdit_WheelEvent_Callback = void (*)(QLineEdit*, QWheelEvent*);
    using QLineEdit_EnterEvent_Callback = void (*)(QLineEdit*, QEnterEvent*);
    using QLineEdit_LeaveEvent_Callback = void (*)(QLineEdit*, QEvent*);
    using QLineEdit_MoveEvent_Callback = void (*)(QLineEdit*, QMoveEvent*);
    using QLineEdit_ResizeEvent_Callback = void (*)(QLineEdit*, QResizeEvent*);
    using QLineEdit_CloseEvent_Callback = void (*)(QLineEdit*, QCloseEvent*);
    using QLineEdit_TabletEvent_Callback = void (*)(QLineEdit*, QTabletEvent*);
    using QLineEdit_ActionEvent_Callback = void (*)(QLineEdit*, QActionEvent*);
    using QLineEdit_ShowEvent_Callback = void (*)(QLineEdit*, QShowEvent*);
    using QLineEdit_HideEvent_Callback = void (*)(QLineEdit*, QHideEvent*);
    using QLineEdit_NativeEvent_Callback = bool (*)(QLineEdit*, libqt_string, void*, intptr_t*);
    using QLineEdit_Metric_Callback = int (*)(const QLineEdit*, int);
    using QLineEdit_InitPainter_Callback = void (*)(const QLineEdit*, QPainter*);
    using QLineEdit_Redirected_Callback = QPaintDevice* (*)(const QLineEdit*, QPoint*);
    using QLineEdit_SharedPainter_Callback = QPainter* (*)();
    using QLineEdit_FocusNextPrevChild_Callback = bool (*)(QLineEdit*, bool);
    using QLineEdit_EventFilter_Callback = bool (*)(QLineEdit*, QObject*, QEvent*);
    using QLineEdit_ChildEvent_Callback = void (*)(QLineEdit*, QChildEvent*);
    using QLineEdit_CustomEvent_Callback = void (*)(QLineEdit*, QEvent*);
    using QLineEdit_ConnectNotify_Callback = void (*)(QLineEdit*, QMetaMethod*);
    using QLineEdit_DisconnectNotify_Callback = void (*)(QLineEdit*, QMetaMethod*);
    using QLineEdit_CursorRect_Callback = QRect* (*)();
    using QLineEdit_UpdateMicroFocus_Callback = void (*)();
    using QLineEdit_Create_Callback = void (*)();
    using QLineEdit_Destroy_Callback = void (*)();
    using QLineEdit_FocusNextChild_Callback = bool (*)();
    using QLineEdit_FocusPreviousChild_Callback = bool (*)();
    using QLineEdit_Sender_Callback = QObject* (*)();
    using QLineEdit_SenderSignalIndex_Callback = int (*)();
    using QLineEdit_Receivers_Callback = int (*)(const QLineEdit*, const char*);
    using QLineEdit_IsSignalConnected_Callback = bool (*)(const QLineEdit*, QMetaMethod*);
    using QLineEdit_GetDecodedMetricF_Callback = double (*)(const QLineEdit*, int, int);

  protected:
    // Instance callback storage
    QLineEdit_MetaObject_Callback qlineedit_metaobject_callback = nullptr;
    QLineEdit_Metacast_Callback qlineedit_metacast_callback = nullptr;
    QLineEdit_Metacall_Callback qlineedit_metacall_callback = nullptr;
    QLineEdit_SizeHint_Callback qlineedit_sizehint_callback = nullptr;
    QLineEdit_MinimumSizeHint_Callback qlineedit_minimumsizehint_callback = nullptr;
    QLineEdit_MousePressEvent_Callback qlineedit_mousepressevent_callback = nullptr;
    QLineEdit_MouseMoveEvent_Callback qlineedit_mousemoveevent_callback = nullptr;
    QLineEdit_MouseReleaseEvent_Callback qlineedit_mousereleaseevent_callback = nullptr;
    QLineEdit_MouseDoubleClickEvent_Callback qlineedit_mousedoubleclickevent_callback = nullptr;
    QLineEdit_KeyPressEvent_Callback qlineedit_keypressevent_callback = nullptr;
    QLineEdit_KeyReleaseEvent_Callback qlineedit_keyreleaseevent_callback = nullptr;
    QLineEdit_FocusInEvent_Callback qlineedit_focusinevent_callback = nullptr;
    QLineEdit_FocusOutEvent_Callback qlineedit_focusoutevent_callback = nullptr;
    QLineEdit_PaintEvent_Callback qlineedit_paintevent_callback = nullptr;
    QLineEdit_DragEnterEvent_Callback qlineedit_dragenterevent_callback = nullptr;
    QLineEdit_DragMoveEvent_Callback qlineedit_dragmoveevent_callback = nullptr;
    QLineEdit_DragLeaveEvent_Callback qlineedit_dragleaveevent_callback = nullptr;
    QLineEdit_DropEvent_Callback qlineedit_dropevent_callback = nullptr;
    QLineEdit_ChangeEvent_Callback qlineedit_changeevent_callback = nullptr;
    QLineEdit_ContextMenuEvent_Callback qlineedit_contextmenuevent_callback = nullptr;
    QLineEdit_InputMethodEvent_Callback qlineedit_inputmethodevent_callback = nullptr;
    QLineEdit_InitStyleOption_Callback qlineedit_initstyleoption_callback = nullptr;
    QLineEdit_InputMethodQuery_Callback qlineedit_inputmethodquery_callback = nullptr;
    QLineEdit_TimerEvent_Callback qlineedit_timerevent_callback = nullptr;
    QLineEdit_Event_Callback qlineedit_event_callback = nullptr;
    QLineEdit_DevType_Callback qlineedit_devtype_callback = nullptr;
    QLineEdit_SetVisible_Callback qlineedit_setvisible_callback = nullptr;
    QLineEdit_HeightForWidth_Callback qlineedit_heightforwidth_callback = nullptr;
    QLineEdit_HasHeightForWidth_Callback qlineedit_hasheightforwidth_callback = nullptr;
    QLineEdit_PaintEngine_Callback qlineedit_paintengine_callback = nullptr;
    QLineEdit_WheelEvent_Callback qlineedit_wheelevent_callback = nullptr;
    QLineEdit_EnterEvent_Callback qlineedit_enterevent_callback = nullptr;
    QLineEdit_LeaveEvent_Callback qlineedit_leaveevent_callback = nullptr;
    QLineEdit_MoveEvent_Callback qlineedit_moveevent_callback = nullptr;
    QLineEdit_ResizeEvent_Callback qlineedit_resizeevent_callback = nullptr;
    QLineEdit_CloseEvent_Callback qlineedit_closeevent_callback = nullptr;
    QLineEdit_TabletEvent_Callback qlineedit_tabletevent_callback = nullptr;
    QLineEdit_ActionEvent_Callback qlineedit_actionevent_callback = nullptr;
    QLineEdit_ShowEvent_Callback qlineedit_showevent_callback = nullptr;
    QLineEdit_HideEvent_Callback qlineedit_hideevent_callback = nullptr;
    QLineEdit_NativeEvent_Callback qlineedit_nativeevent_callback = nullptr;
    QLineEdit_Metric_Callback qlineedit_metric_callback = nullptr;
    QLineEdit_InitPainter_Callback qlineedit_initpainter_callback = nullptr;
    QLineEdit_Redirected_Callback qlineedit_redirected_callback = nullptr;
    QLineEdit_SharedPainter_Callback qlineedit_sharedpainter_callback = nullptr;
    QLineEdit_FocusNextPrevChild_Callback qlineedit_focusnextprevchild_callback = nullptr;
    QLineEdit_EventFilter_Callback qlineedit_eventfilter_callback = nullptr;
    QLineEdit_ChildEvent_Callback qlineedit_childevent_callback = nullptr;
    QLineEdit_CustomEvent_Callback qlineedit_customevent_callback = nullptr;
    QLineEdit_ConnectNotify_Callback qlineedit_connectnotify_callback = nullptr;
    QLineEdit_DisconnectNotify_Callback qlineedit_disconnectnotify_callback = nullptr;
    QLineEdit_CursorRect_Callback qlineedit_cursorrect_callback = nullptr;
    QLineEdit_UpdateMicroFocus_Callback qlineedit_updatemicrofocus_callback = nullptr;
    QLineEdit_Create_Callback qlineedit_create_callback = nullptr;
    QLineEdit_Destroy_Callback qlineedit_destroy_callback = nullptr;
    QLineEdit_FocusNextChild_Callback qlineedit_focusnextchild_callback = nullptr;
    QLineEdit_FocusPreviousChild_Callback qlineedit_focuspreviouschild_callback = nullptr;
    QLineEdit_Sender_Callback qlineedit_sender_callback = nullptr;
    QLineEdit_SenderSignalIndex_Callback qlineedit_sendersignalindex_callback = nullptr;
    QLineEdit_Receivers_Callback qlineedit_receivers_callback = nullptr;
    QLineEdit_IsSignalConnected_Callback qlineedit_issignalconnected_callback = nullptr;
    QLineEdit_GetDecodedMetricF_Callback qlineedit_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qlineedit_metaobject_isbase = false;
    mutable bool qlineedit_metacast_isbase = false;
    mutable bool qlineedit_metacall_isbase = false;
    mutable bool qlineedit_sizehint_isbase = false;
    mutable bool qlineedit_minimumsizehint_isbase = false;
    mutable bool qlineedit_mousepressevent_isbase = false;
    mutable bool qlineedit_mousemoveevent_isbase = false;
    mutable bool qlineedit_mousereleaseevent_isbase = false;
    mutable bool qlineedit_mousedoubleclickevent_isbase = false;
    mutable bool qlineedit_keypressevent_isbase = false;
    mutable bool qlineedit_keyreleaseevent_isbase = false;
    mutable bool qlineedit_focusinevent_isbase = false;
    mutable bool qlineedit_focusoutevent_isbase = false;
    mutable bool qlineedit_paintevent_isbase = false;
    mutable bool qlineedit_dragenterevent_isbase = false;
    mutable bool qlineedit_dragmoveevent_isbase = false;
    mutable bool qlineedit_dragleaveevent_isbase = false;
    mutable bool qlineedit_dropevent_isbase = false;
    mutable bool qlineedit_changeevent_isbase = false;
    mutable bool qlineedit_contextmenuevent_isbase = false;
    mutable bool qlineedit_inputmethodevent_isbase = false;
    mutable bool qlineedit_initstyleoption_isbase = false;
    mutable bool qlineedit_inputmethodquery_isbase = false;
    mutable bool qlineedit_timerevent_isbase = false;
    mutable bool qlineedit_event_isbase = false;
    mutable bool qlineedit_devtype_isbase = false;
    mutable bool qlineedit_setvisible_isbase = false;
    mutable bool qlineedit_heightforwidth_isbase = false;
    mutable bool qlineedit_hasheightforwidth_isbase = false;
    mutable bool qlineedit_paintengine_isbase = false;
    mutable bool qlineedit_wheelevent_isbase = false;
    mutable bool qlineedit_enterevent_isbase = false;
    mutable bool qlineedit_leaveevent_isbase = false;
    mutable bool qlineedit_moveevent_isbase = false;
    mutable bool qlineedit_resizeevent_isbase = false;
    mutable bool qlineedit_closeevent_isbase = false;
    mutable bool qlineedit_tabletevent_isbase = false;
    mutable bool qlineedit_actionevent_isbase = false;
    mutable bool qlineedit_showevent_isbase = false;
    mutable bool qlineedit_hideevent_isbase = false;
    mutable bool qlineedit_nativeevent_isbase = false;
    mutable bool qlineedit_metric_isbase = false;
    mutable bool qlineedit_initpainter_isbase = false;
    mutable bool qlineedit_redirected_isbase = false;
    mutable bool qlineedit_sharedpainter_isbase = false;
    mutable bool qlineedit_focusnextprevchild_isbase = false;
    mutable bool qlineedit_eventfilter_isbase = false;
    mutable bool qlineedit_childevent_isbase = false;
    mutable bool qlineedit_customevent_isbase = false;
    mutable bool qlineedit_connectnotify_isbase = false;
    mutable bool qlineedit_disconnectnotify_isbase = false;
    mutable bool qlineedit_cursorrect_isbase = false;
    mutable bool qlineedit_updatemicrofocus_isbase = false;
    mutable bool qlineedit_create_isbase = false;
    mutable bool qlineedit_destroy_isbase = false;
    mutable bool qlineedit_focusnextchild_isbase = false;
    mutable bool qlineedit_focuspreviouschild_isbase = false;
    mutable bool qlineedit_sender_isbase = false;
    mutable bool qlineedit_sendersignalindex_isbase = false;
    mutable bool qlineedit_receivers_isbase = false;
    mutable bool qlineedit_issignalconnected_isbase = false;
    mutable bool qlineedit_getdecodedmetricf_isbase = false;

  public:
    VirtualQLineEdit(QWidget* parent) : QLineEdit(parent) {};
    VirtualQLineEdit() : QLineEdit() {};
    VirtualQLineEdit(const QString& param1) : QLineEdit(param1) {};
    VirtualQLineEdit(const QString& param1, QWidget* parent) : QLineEdit(param1, parent) {};

    // Callback setters
    inline void setQLineEdit_MetaObject_Callback(QLineEdit_MetaObject_Callback cb) { qlineedit_metaobject_callback = cb; }
    inline void setQLineEdit_Metacast_Callback(QLineEdit_Metacast_Callback cb) { qlineedit_metacast_callback = cb; }
    inline void setQLineEdit_Metacall_Callback(QLineEdit_Metacall_Callback cb) { qlineedit_metacall_callback = cb; }
    inline void setQLineEdit_SizeHint_Callback(QLineEdit_SizeHint_Callback cb) { qlineedit_sizehint_callback = cb; }
    inline void setQLineEdit_MinimumSizeHint_Callback(QLineEdit_MinimumSizeHint_Callback cb) { qlineedit_minimumsizehint_callback = cb; }
    inline void setQLineEdit_MousePressEvent_Callback(QLineEdit_MousePressEvent_Callback cb) { qlineedit_mousepressevent_callback = cb; }
    inline void setQLineEdit_MouseMoveEvent_Callback(QLineEdit_MouseMoveEvent_Callback cb) { qlineedit_mousemoveevent_callback = cb; }
    inline void setQLineEdit_MouseReleaseEvent_Callback(QLineEdit_MouseReleaseEvent_Callback cb) { qlineedit_mousereleaseevent_callback = cb; }
    inline void setQLineEdit_MouseDoubleClickEvent_Callback(QLineEdit_MouseDoubleClickEvent_Callback cb) { qlineedit_mousedoubleclickevent_callback = cb; }
    inline void setQLineEdit_KeyPressEvent_Callback(QLineEdit_KeyPressEvent_Callback cb) { qlineedit_keypressevent_callback = cb; }
    inline void setQLineEdit_KeyReleaseEvent_Callback(QLineEdit_KeyReleaseEvent_Callback cb) { qlineedit_keyreleaseevent_callback = cb; }
    inline void setQLineEdit_FocusInEvent_Callback(QLineEdit_FocusInEvent_Callback cb) { qlineedit_focusinevent_callback = cb; }
    inline void setQLineEdit_FocusOutEvent_Callback(QLineEdit_FocusOutEvent_Callback cb) { qlineedit_focusoutevent_callback = cb; }
    inline void setQLineEdit_PaintEvent_Callback(QLineEdit_PaintEvent_Callback cb) { qlineedit_paintevent_callback = cb; }
    inline void setQLineEdit_DragEnterEvent_Callback(QLineEdit_DragEnterEvent_Callback cb) { qlineedit_dragenterevent_callback = cb; }
    inline void setQLineEdit_DragMoveEvent_Callback(QLineEdit_DragMoveEvent_Callback cb) { qlineedit_dragmoveevent_callback = cb; }
    inline void setQLineEdit_DragLeaveEvent_Callback(QLineEdit_DragLeaveEvent_Callback cb) { qlineedit_dragleaveevent_callback = cb; }
    inline void setQLineEdit_DropEvent_Callback(QLineEdit_DropEvent_Callback cb) { qlineedit_dropevent_callback = cb; }
    inline void setQLineEdit_ChangeEvent_Callback(QLineEdit_ChangeEvent_Callback cb) { qlineedit_changeevent_callback = cb; }
    inline void setQLineEdit_ContextMenuEvent_Callback(QLineEdit_ContextMenuEvent_Callback cb) { qlineedit_contextmenuevent_callback = cb; }
    inline void setQLineEdit_InputMethodEvent_Callback(QLineEdit_InputMethodEvent_Callback cb) { qlineedit_inputmethodevent_callback = cb; }
    inline void setQLineEdit_InitStyleOption_Callback(QLineEdit_InitStyleOption_Callback cb) { qlineedit_initstyleoption_callback = cb; }
    inline void setQLineEdit_InputMethodQuery_Callback(QLineEdit_InputMethodQuery_Callback cb) { qlineedit_inputmethodquery_callback = cb; }
    inline void setQLineEdit_TimerEvent_Callback(QLineEdit_TimerEvent_Callback cb) { qlineedit_timerevent_callback = cb; }
    inline void setQLineEdit_Event_Callback(QLineEdit_Event_Callback cb) { qlineedit_event_callback = cb; }
    inline void setQLineEdit_DevType_Callback(QLineEdit_DevType_Callback cb) { qlineedit_devtype_callback = cb; }
    inline void setQLineEdit_SetVisible_Callback(QLineEdit_SetVisible_Callback cb) { qlineedit_setvisible_callback = cb; }
    inline void setQLineEdit_HeightForWidth_Callback(QLineEdit_HeightForWidth_Callback cb) { qlineedit_heightforwidth_callback = cb; }
    inline void setQLineEdit_HasHeightForWidth_Callback(QLineEdit_HasHeightForWidth_Callback cb) { qlineedit_hasheightforwidth_callback = cb; }
    inline void setQLineEdit_PaintEngine_Callback(QLineEdit_PaintEngine_Callback cb) { qlineedit_paintengine_callback = cb; }
    inline void setQLineEdit_WheelEvent_Callback(QLineEdit_WheelEvent_Callback cb) { qlineedit_wheelevent_callback = cb; }
    inline void setQLineEdit_EnterEvent_Callback(QLineEdit_EnterEvent_Callback cb) { qlineedit_enterevent_callback = cb; }
    inline void setQLineEdit_LeaveEvent_Callback(QLineEdit_LeaveEvent_Callback cb) { qlineedit_leaveevent_callback = cb; }
    inline void setQLineEdit_MoveEvent_Callback(QLineEdit_MoveEvent_Callback cb) { qlineedit_moveevent_callback = cb; }
    inline void setQLineEdit_ResizeEvent_Callback(QLineEdit_ResizeEvent_Callback cb) { qlineedit_resizeevent_callback = cb; }
    inline void setQLineEdit_CloseEvent_Callback(QLineEdit_CloseEvent_Callback cb) { qlineedit_closeevent_callback = cb; }
    inline void setQLineEdit_TabletEvent_Callback(QLineEdit_TabletEvent_Callback cb) { qlineedit_tabletevent_callback = cb; }
    inline void setQLineEdit_ActionEvent_Callback(QLineEdit_ActionEvent_Callback cb) { qlineedit_actionevent_callback = cb; }
    inline void setQLineEdit_ShowEvent_Callback(QLineEdit_ShowEvent_Callback cb) { qlineedit_showevent_callback = cb; }
    inline void setQLineEdit_HideEvent_Callback(QLineEdit_HideEvent_Callback cb) { qlineedit_hideevent_callback = cb; }
    inline void setQLineEdit_NativeEvent_Callback(QLineEdit_NativeEvent_Callback cb) { qlineedit_nativeevent_callback = cb; }
    inline void setQLineEdit_Metric_Callback(QLineEdit_Metric_Callback cb) { qlineedit_metric_callback = cb; }
    inline void setQLineEdit_InitPainter_Callback(QLineEdit_InitPainter_Callback cb) { qlineedit_initpainter_callback = cb; }
    inline void setQLineEdit_Redirected_Callback(QLineEdit_Redirected_Callback cb) { qlineedit_redirected_callback = cb; }
    inline void setQLineEdit_SharedPainter_Callback(QLineEdit_SharedPainter_Callback cb) { qlineedit_sharedpainter_callback = cb; }
    inline void setQLineEdit_FocusNextPrevChild_Callback(QLineEdit_FocusNextPrevChild_Callback cb) { qlineedit_focusnextprevchild_callback = cb; }
    inline void setQLineEdit_EventFilter_Callback(QLineEdit_EventFilter_Callback cb) { qlineedit_eventfilter_callback = cb; }
    inline void setQLineEdit_ChildEvent_Callback(QLineEdit_ChildEvent_Callback cb) { qlineedit_childevent_callback = cb; }
    inline void setQLineEdit_CustomEvent_Callback(QLineEdit_CustomEvent_Callback cb) { qlineedit_customevent_callback = cb; }
    inline void setQLineEdit_ConnectNotify_Callback(QLineEdit_ConnectNotify_Callback cb) { qlineedit_connectnotify_callback = cb; }
    inline void setQLineEdit_DisconnectNotify_Callback(QLineEdit_DisconnectNotify_Callback cb) { qlineedit_disconnectnotify_callback = cb; }
    inline void setQLineEdit_CursorRect_Callback(QLineEdit_CursorRect_Callback cb) { qlineedit_cursorrect_callback = cb; }
    inline void setQLineEdit_UpdateMicroFocus_Callback(QLineEdit_UpdateMicroFocus_Callback cb) { qlineedit_updatemicrofocus_callback = cb; }
    inline void setQLineEdit_Create_Callback(QLineEdit_Create_Callback cb) { qlineedit_create_callback = cb; }
    inline void setQLineEdit_Destroy_Callback(QLineEdit_Destroy_Callback cb) { qlineedit_destroy_callback = cb; }
    inline void setQLineEdit_FocusNextChild_Callback(QLineEdit_FocusNextChild_Callback cb) { qlineedit_focusnextchild_callback = cb; }
    inline void setQLineEdit_FocusPreviousChild_Callback(QLineEdit_FocusPreviousChild_Callback cb) { qlineedit_focuspreviouschild_callback = cb; }
    inline void setQLineEdit_Sender_Callback(QLineEdit_Sender_Callback cb) { qlineedit_sender_callback = cb; }
    inline void setQLineEdit_SenderSignalIndex_Callback(QLineEdit_SenderSignalIndex_Callback cb) { qlineedit_sendersignalindex_callback = cb; }
    inline void setQLineEdit_Receivers_Callback(QLineEdit_Receivers_Callback cb) { qlineedit_receivers_callback = cb; }
    inline void setQLineEdit_IsSignalConnected_Callback(QLineEdit_IsSignalConnected_Callback cb) { qlineedit_issignalconnected_callback = cb; }
    inline void setQLineEdit_GetDecodedMetricF_Callback(QLineEdit_GetDecodedMetricF_Callback cb) { qlineedit_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQLineEdit_MetaObject_IsBase(bool value) const { qlineedit_metaobject_isbase = value; }
    inline void setQLineEdit_Metacast_IsBase(bool value) const { qlineedit_metacast_isbase = value; }
    inline void setQLineEdit_Metacall_IsBase(bool value) const { qlineedit_metacall_isbase = value; }
    inline void setQLineEdit_SizeHint_IsBase(bool value) const { qlineedit_sizehint_isbase = value; }
    inline void setQLineEdit_MinimumSizeHint_IsBase(bool value) const { qlineedit_minimumsizehint_isbase = value; }
    inline void setQLineEdit_MousePressEvent_IsBase(bool value) const { qlineedit_mousepressevent_isbase = value; }
    inline void setQLineEdit_MouseMoveEvent_IsBase(bool value) const { qlineedit_mousemoveevent_isbase = value; }
    inline void setQLineEdit_MouseReleaseEvent_IsBase(bool value) const { qlineedit_mousereleaseevent_isbase = value; }
    inline void setQLineEdit_MouseDoubleClickEvent_IsBase(bool value) const { qlineedit_mousedoubleclickevent_isbase = value; }
    inline void setQLineEdit_KeyPressEvent_IsBase(bool value) const { qlineedit_keypressevent_isbase = value; }
    inline void setQLineEdit_KeyReleaseEvent_IsBase(bool value) const { qlineedit_keyreleaseevent_isbase = value; }
    inline void setQLineEdit_FocusInEvent_IsBase(bool value) const { qlineedit_focusinevent_isbase = value; }
    inline void setQLineEdit_FocusOutEvent_IsBase(bool value) const { qlineedit_focusoutevent_isbase = value; }
    inline void setQLineEdit_PaintEvent_IsBase(bool value) const { qlineedit_paintevent_isbase = value; }
    inline void setQLineEdit_DragEnterEvent_IsBase(bool value) const { qlineedit_dragenterevent_isbase = value; }
    inline void setQLineEdit_DragMoveEvent_IsBase(bool value) const { qlineedit_dragmoveevent_isbase = value; }
    inline void setQLineEdit_DragLeaveEvent_IsBase(bool value) const { qlineedit_dragleaveevent_isbase = value; }
    inline void setQLineEdit_DropEvent_IsBase(bool value) const { qlineedit_dropevent_isbase = value; }
    inline void setQLineEdit_ChangeEvent_IsBase(bool value) const { qlineedit_changeevent_isbase = value; }
    inline void setQLineEdit_ContextMenuEvent_IsBase(bool value) const { qlineedit_contextmenuevent_isbase = value; }
    inline void setQLineEdit_InputMethodEvent_IsBase(bool value) const { qlineedit_inputmethodevent_isbase = value; }
    inline void setQLineEdit_InitStyleOption_IsBase(bool value) const { qlineedit_initstyleoption_isbase = value; }
    inline void setQLineEdit_InputMethodQuery_IsBase(bool value) const { qlineedit_inputmethodquery_isbase = value; }
    inline void setQLineEdit_TimerEvent_IsBase(bool value) const { qlineedit_timerevent_isbase = value; }
    inline void setQLineEdit_Event_IsBase(bool value) const { qlineedit_event_isbase = value; }
    inline void setQLineEdit_DevType_IsBase(bool value) const { qlineedit_devtype_isbase = value; }
    inline void setQLineEdit_SetVisible_IsBase(bool value) const { qlineedit_setvisible_isbase = value; }
    inline void setQLineEdit_HeightForWidth_IsBase(bool value) const { qlineedit_heightforwidth_isbase = value; }
    inline void setQLineEdit_HasHeightForWidth_IsBase(bool value) const { qlineedit_hasheightforwidth_isbase = value; }
    inline void setQLineEdit_PaintEngine_IsBase(bool value) const { qlineedit_paintengine_isbase = value; }
    inline void setQLineEdit_WheelEvent_IsBase(bool value) const { qlineedit_wheelevent_isbase = value; }
    inline void setQLineEdit_EnterEvent_IsBase(bool value) const { qlineedit_enterevent_isbase = value; }
    inline void setQLineEdit_LeaveEvent_IsBase(bool value) const { qlineedit_leaveevent_isbase = value; }
    inline void setQLineEdit_MoveEvent_IsBase(bool value) const { qlineedit_moveevent_isbase = value; }
    inline void setQLineEdit_ResizeEvent_IsBase(bool value) const { qlineedit_resizeevent_isbase = value; }
    inline void setQLineEdit_CloseEvent_IsBase(bool value) const { qlineedit_closeevent_isbase = value; }
    inline void setQLineEdit_TabletEvent_IsBase(bool value) const { qlineedit_tabletevent_isbase = value; }
    inline void setQLineEdit_ActionEvent_IsBase(bool value) const { qlineedit_actionevent_isbase = value; }
    inline void setQLineEdit_ShowEvent_IsBase(bool value) const { qlineedit_showevent_isbase = value; }
    inline void setQLineEdit_HideEvent_IsBase(bool value) const { qlineedit_hideevent_isbase = value; }
    inline void setQLineEdit_NativeEvent_IsBase(bool value) const { qlineedit_nativeevent_isbase = value; }
    inline void setQLineEdit_Metric_IsBase(bool value) const { qlineedit_metric_isbase = value; }
    inline void setQLineEdit_InitPainter_IsBase(bool value) const { qlineedit_initpainter_isbase = value; }
    inline void setQLineEdit_Redirected_IsBase(bool value) const { qlineedit_redirected_isbase = value; }
    inline void setQLineEdit_SharedPainter_IsBase(bool value) const { qlineedit_sharedpainter_isbase = value; }
    inline void setQLineEdit_FocusNextPrevChild_IsBase(bool value) const { qlineedit_focusnextprevchild_isbase = value; }
    inline void setQLineEdit_EventFilter_IsBase(bool value) const { qlineedit_eventfilter_isbase = value; }
    inline void setQLineEdit_ChildEvent_IsBase(bool value) const { qlineedit_childevent_isbase = value; }
    inline void setQLineEdit_CustomEvent_IsBase(bool value) const { qlineedit_customevent_isbase = value; }
    inline void setQLineEdit_ConnectNotify_IsBase(bool value) const { qlineedit_connectnotify_isbase = value; }
    inline void setQLineEdit_DisconnectNotify_IsBase(bool value) const { qlineedit_disconnectnotify_isbase = value; }
    inline void setQLineEdit_CursorRect_IsBase(bool value) const { qlineedit_cursorrect_isbase = value; }
    inline void setQLineEdit_UpdateMicroFocus_IsBase(bool value) const { qlineedit_updatemicrofocus_isbase = value; }
    inline void setQLineEdit_Create_IsBase(bool value) const { qlineedit_create_isbase = value; }
    inline void setQLineEdit_Destroy_IsBase(bool value) const { qlineedit_destroy_isbase = value; }
    inline void setQLineEdit_FocusNextChild_IsBase(bool value) const { qlineedit_focusnextchild_isbase = value; }
    inline void setQLineEdit_FocusPreviousChild_IsBase(bool value) const { qlineedit_focuspreviouschild_isbase = value; }
    inline void setQLineEdit_Sender_IsBase(bool value) const { qlineedit_sender_isbase = value; }
    inline void setQLineEdit_SenderSignalIndex_IsBase(bool value) const { qlineedit_sendersignalindex_isbase = value; }
    inline void setQLineEdit_Receivers_IsBase(bool value) const { qlineedit_receivers_isbase = value; }
    inline void setQLineEdit_IsSignalConnected_IsBase(bool value) const { qlineedit_issignalconnected_isbase = value; }
    inline void setQLineEdit_GetDecodedMetricF_IsBase(bool value) const { qlineedit_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qlineedit_metaobject_isbase) {
            qlineedit_metaobject_isbase = false;
            return QLineEdit::metaObject();
        }
        auto metaobject_cb = qlineedit_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QLineEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qlineedit_metacast_isbase) {
            qlineedit_metacast_isbase = false;
            return QLineEdit::qt_metacast(param1);
        }
        auto metacast_cb = qlineedit_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QLineEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlineedit_metacall_isbase) {
            qlineedit_metacall_isbase = false;
            return QLineEdit::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qlineedit_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QLineEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qlineedit_sizehint_isbase) {
            qlineedit_sizehint_isbase = false;
            return QLineEdit::sizeHint();
        }
        auto sizehint_cb = qlineedit_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QLineEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qlineedit_minimumsizehint_isbase) {
            qlineedit_minimumsizehint_isbase = false;
            return QLineEdit::minimumSizeHint();
        }
        auto minimumsizehint_cb = qlineedit_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QLineEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qlineedit_mousepressevent_isbase) {
            qlineedit_mousepressevent_isbase = false;
            QLineEdit::mousePressEvent(param1);
            return;
        }
        auto mousepressevent_cb = qlineedit_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QLineEdit::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qlineedit_mousemoveevent_isbase) {
            qlineedit_mousemoveevent_isbase = false;
            QLineEdit::mouseMoveEvent(param1);
            return;
        }
        auto mousemoveevent_cb = qlineedit_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QLineEdit::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qlineedit_mousereleaseevent_isbase) {
            qlineedit_mousereleaseevent_isbase = false;
            QLineEdit::mouseReleaseEvent(param1);
            return;
        }
        auto mousereleaseevent_cb = qlineedit_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QLineEdit::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qlineedit_mousedoubleclickevent_isbase) {
            qlineedit_mousedoubleclickevent_isbase = false;
            QLineEdit::mouseDoubleClickEvent(param1);
            return;
        }
        auto mousedoubleclickevent_cb = qlineedit_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QLineEdit::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qlineedit_keypressevent_isbase) {
            qlineedit_keypressevent_isbase = false;
            QLineEdit::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = qlineedit_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        QLineEdit::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (qlineedit_keyreleaseevent_isbase) {
            qlineedit_keyreleaseevent_isbase = false;
            QLineEdit::keyReleaseEvent(param1);
            return;
        }
        auto keyreleaseevent_cb = qlineedit_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = param1;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QLineEdit::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qlineedit_focusinevent_isbase) {
            qlineedit_focusinevent_isbase = false;
            QLineEdit::focusInEvent(param1);
            return;
        }
        auto focusinevent_cb = qlineedit_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = param1;

            focusinevent_cb(this, cbval1);
            return;
        }
        QLineEdit::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qlineedit_focusoutevent_isbase) {
            qlineedit_focusoutevent_isbase = false;
            QLineEdit::focusOutEvent(param1);
            return;
        }
        auto focusoutevent_cb = qlineedit_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = param1;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QLineEdit::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qlineedit_paintevent_isbase) {
            qlineedit_paintevent_isbase = false;
            QLineEdit::paintEvent(param1);
            return;
        }
        auto paintevent_cb = qlineedit_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        QLineEdit::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qlineedit_dragenterevent_isbase) {
            qlineedit_dragenterevent_isbase = false;
            QLineEdit::dragEnterEvent(param1);
            return;
        }
        auto dragenterevent_cb = qlineedit_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = param1;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QLineEdit::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qlineedit_dragmoveevent_isbase) {
            qlineedit_dragmoveevent_isbase = false;
            QLineEdit::dragMoveEvent(e);
            return;
        }
        auto dragmoveevent_cb = qlineedit_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = e;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QLineEdit::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qlineedit_dragleaveevent_isbase) {
            qlineedit_dragleaveevent_isbase = false;
            QLineEdit::dragLeaveEvent(e);
            return;
        }
        auto dragleaveevent_cb = qlineedit_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = e;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QLineEdit::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qlineedit_dropevent_isbase) {
            qlineedit_dropevent_isbase = false;
            QLineEdit::dropEvent(param1);
            return;
        }
        auto dropevent_cb = qlineedit_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = param1;

            dropevent_cb(this, cbval1);
            return;
        }
        QLineEdit::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qlineedit_changeevent_isbase) {
            qlineedit_changeevent_isbase = false;
            QLineEdit::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qlineedit_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QLineEdit::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qlineedit_contextmenuevent_isbase) {
            qlineedit_contextmenuevent_isbase = false;
            QLineEdit::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = qlineedit_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QLineEdit::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qlineedit_inputmethodevent_isbase) {
            qlineedit_inputmethodevent_isbase = false;
            QLineEdit::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qlineedit_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QLineEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qlineedit_initstyleoption_isbase) {
            qlineedit_initstyleoption_isbase = false;
            QLineEdit::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qlineedit_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QLineEdit::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qlineedit_inputmethodquery_isbase) {
            qlineedit_inputmethodquery_isbase = false;
            return QLineEdit::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qlineedit_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QLineEdit::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qlineedit_timerevent_isbase) {
            qlineedit_timerevent_isbase = false;
            QLineEdit::timerEvent(param1);
            return;
        }
        auto timerevent_cb = qlineedit_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = param1;

            timerevent_cb(this, cbval1);
            return;
        }
        QLineEdit::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qlineedit_event_isbase) {
            qlineedit_event_isbase = false;
            return QLineEdit::event(param1);
        }
        auto event_cb = qlineedit_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QLineEdit::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qlineedit_devtype_isbase) {
            qlineedit_devtype_isbase = false;
            return QLineEdit::devType();
        }
        auto devtype_cb = qlineedit_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QLineEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qlineedit_setvisible_isbase) {
            qlineedit_setvisible_isbase = false;
            QLineEdit::setVisible(visible);
            return;
        }
        auto setvisible_cb = qlineedit_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QLineEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qlineedit_heightforwidth_isbase) {
            qlineedit_heightforwidth_isbase = false;
            return QLineEdit::heightForWidth(param1);
        }
        auto heightforwidth_cb = qlineedit_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLineEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qlineedit_hasheightforwidth_isbase) {
            qlineedit_hasheightforwidth_isbase = false;
            return QLineEdit::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qlineedit_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QLineEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qlineedit_paintengine_isbase) {
            qlineedit_paintengine_isbase = false;
            return QLineEdit::paintEngine();
        }
        auto paintengine_cb = qlineedit_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QLineEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qlineedit_wheelevent_isbase) {
            qlineedit_wheelevent_isbase = false;
            QLineEdit::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qlineedit_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QLineEdit::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qlineedit_enterevent_isbase) {
            qlineedit_enterevent_isbase = false;
            QLineEdit::enterEvent(event);
            return;
        }
        auto enterevent_cb = qlineedit_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QLineEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qlineedit_leaveevent_isbase) {
            qlineedit_leaveevent_isbase = false;
            QLineEdit::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qlineedit_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QLineEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qlineedit_moveevent_isbase) {
            qlineedit_moveevent_isbase = false;
            QLineEdit::moveEvent(event);
            return;
        }
        auto moveevent_cb = qlineedit_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QLineEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qlineedit_resizeevent_isbase) {
            qlineedit_resizeevent_isbase = false;
            QLineEdit::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qlineedit_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QLineEdit::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qlineedit_closeevent_isbase) {
            qlineedit_closeevent_isbase = false;
            QLineEdit::closeEvent(event);
            return;
        }
        auto closeevent_cb = qlineedit_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QLineEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qlineedit_tabletevent_isbase) {
            qlineedit_tabletevent_isbase = false;
            QLineEdit::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qlineedit_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QLineEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qlineedit_actionevent_isbase) {
            qlineedit_actionevent_isbase = false;
            QLineEdit::actionEvent(event);
            return;
        }
        auto actionevent_cb = qlineedit_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QLineEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qlineedit_showevent_isbase) {
            qlineedit_showevent_isbase = false;
            QLineEdit::showEvent(event);
            return;
        }
        auto showevent_cb = qlineedit_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QLineEdit::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qlineedit_hideevent_isbase) {
            qlineedit_hideevent_isbase = false;
            QLineEdit::hideEvent(event);
            return;
        }
        auto hideevent_cb = qlineedit_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QLineEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qlineedit_nativeevent_isbase) {
            qlineedit_nativeevent_isbase = false;
            return QLineEdit::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qlineedit_nativeevent_callback;
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
        return QLineEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qlineedit_metric_isbase) {
            qlineedit_metric_isbase = false;
            return QLineEdit::metric(param1);
        }
        auto metric_cb = qlineedit_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLineEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qlineedit_initpainter_isbase) {
            qlineedit_initpainter_isbase = false;
            QLineEdit::initPainter(painter);
            return;
        }
        auto initpainter_cb = qlineedit_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QLineEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qlineedit_redirected_isbase) {
            qlineedit_redirected_isbase = false;
            return QLineEdit::redirected(offset);
        }
        auto redirected_cb = qlineedit_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QLineEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qlineedit_sharedpainter_isbase) {
            qlineedit_sharedpainter_isbase = false;
            return QLineEdit::sharedPainter();
        }
        auto sharedpainter_cb = qlineedit_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QLineEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qlineedit_focusnextprevchild_isbase) {
            qlineedit_focusnextprevchild_isbase = false;
            return QLineEdit::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qlineedit_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QLineEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlineedit_eventfilter_isbase) {
            qlineedit_eventfilter_isbase = false;
            return QLineEdit::eventFilter(watched, event);
        }
        auto eventfilter_cb = qlineedit_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QLineEdit::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlineedit_childevent_isbase) {
            qlineedit_childevent_isbase = false;
            QLineEdit::childEvent(event);
            return;
        }
        auto childevent_cb = qlineedit_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QLineEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlineedit_customevent_isbase) {
            qlineedit_customevent_isbase = false;
            QLineEdit::customEvent(event);
            return;
        }
        auto customevent_cb = qlineedit_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QLineEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlineedit_connectnotify_isbase) {
            qlineedit_connectnotify_isbase = false;
            QLineEdit::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qlineedit_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QLineEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlineedit_disconnectnotify_isbase) {
            qlineedit_disconnectnotify_isbase = false;
            QLineEdit::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qlineedit_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QLineEdit::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QRect cursorRect() const {
        if (qlineedit_cursorrect_isbase) {
            qlineedit_cursorrect_isbase = false;
            return QLineEdit::cursorRect();
        }
        auto cursorrect_cb = qlineedit_cursorrect_callback;
        if (cursorrect_cb) {
            QRect* callback_ret = cursorrect_cb();
            return *callback_ret;
        }
        return QLineEdit::cursorRect();
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qlineedit_updatemicrofocus_isbase) {
            qlineedit_updatemicrofocus_isbase = false;
            QLineEdit::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qlineedit_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QLineEdit::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qlineedit_create_isbase) {
            qlineedit_create_isbase = false;
            QLineEdit::create();
            return;
        }
        auto create_cb = qlineedit_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QLineEdit::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qlineedit_destroy_isbase) {
            qlineedit_destroy_isbase = false;
            QLineEdit::destroy();
            return;
        }
        auto destroy_cb = qlineedit_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QLineEdit::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qlineedit_focusnextchild_isbase) {
            qlineedit_focusnextchild_isbase = false;
            return QLineEdit::focusNextChild();
        }
        auto focusnextchild_cb = qlineedit_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QLineEdit::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qlineedit_focuspreviouschild_isbase) {
            qlineedit_focuspreviouschild_isbase = false;
            return QLineEdit::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qlineedit_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QLineEdit::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qlineedit_sender_isbase) {
            qlineedit_sender_isbase = false;
            return QLineEdit::sender();
        }
        auto sender_cb = qlineedit_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QLineEdit::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qlineedit_sendersignalindex_isbase) {
            qlineedit_sendersignalindex_isbase = false;
            return QLineEdit::senderSignalIndex();
        }
        auto sendersignalindex_cb = qlineedit_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QLineEdit::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qlineedit_receivers_isbase) {
            qlineedit_receivers_isbase = false;
            return QLineEdit::receivers(signal);
        }
        auto receivers_cb = qlineedit_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QLineEdit::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qlineedit_issignalconnected_isbase) {
            qlineedit_issignalconnected_isbase = false;
            return QLineEdit::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qlineedit_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QLineEdit::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qlineedit_getdecodedmetricf_isbase) {
            qlineedit_getdecodedmetricf_isbase = false;
            return QLineEdit::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qlineedit_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QLineEdit::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void QLineEdit_MousePressEvent(QLineEdit* self, QMouseEvent* param1);
    friend void QLineEdit_SuperMousePressEvent(QLineEdit* self, QMouseEvent* param1);
    friend void QLineEdit_MouseMoveEvent(QLineEdit* self, QMouseEvent* param1);
    friend void QLineEdit_SuperMouseMoveEvent(QLineEdit* self, QMouseEvent* param1);
    friend void QLineEdit_MouseReleaseEvent(QLineEdit* self, QMouseEvent* param1);
    friend void QLineEdit_SuperMouseReleaseEvent(QLineEdit* self, QMouseEvent* param1);
    friend void QLineEdit_MouseDoubleClickEvent(QLineEdit* self, QMouseEvent* param1);
    friend void QLineEdit_SuperMouseDoubleClickEvent(QLineEdit* self, QMouseEvent* param1);
    friend void QLineEdit_KeyPressEvent(QLineEdit* self, QKeyEvent* param1);
    friend void QLineEdit_SuperKeyPressEvent(QLineEdit* self, QKeyEvent* param1);
    friend void QLineEdit_KeyReleaseEvent(QLineEdit* self, QKeyEvent* param1);
    friend void QLineEdit_SuperKeyReleaseEvent(QLineEdit* self, QKeyEvent* param1);
    friend void QLineEdit_FocusInEvent(QLineEdit* self, QFocusEvent* param1);
    friend void QLineEdit_SuperFocusInEvent(QLineEdit* self, QFocusEvent* param1);
    friend void QLineEdit_FocusOutEvent(QLineEdit* self, QFocusEvent* param1);
    friend void QLineEdit_SuperFocusOutEvent(QLineEdit* self, QFocusEvent* param1);
    friend void QLineEdit_PaintEvent(QLineEdit* self, QPaintEvent* param1);
    friend void QLineEdit_SuperPaintEvent(QLineEdit* self, QPaintEvent* param1);
    friend void QLineEdit_DragEnterEvent(QLineEdit* self, QDragEnterEvent* param1);
    friend void QLineEdit_SuperDragEnterEvent(QLineEdit* self, QDragEnterEvent* param1);
    friend void QLineEdit_DragMoveEvent(QLineEdit* self, QDragMoveEvent* e);
    friend void QLineEdit_SuperDragMoveEvent(QLineEdit* self, QDragMoveEvent* e);
    friend void QLineEdit_DragLeaveEvent(QLineEdit* self, QDragLeaveEvent* e);
    friend void QLineEdit_SuperDragLeaveEvent(QLineEdit* self, QDragLeaveEvent* e);
    friend void QLineEdit_DropEvent(QLineEdit* self, QDropEvent* param1);
    friend void QLineEdit_SuperDropEvent(QLineEdit* self, QDropEvent* param1);
    friend void QLineEdit_ChangeEvent(QLineEdit* self, QEvent* param1);
    friend void QLineEdit_SuperChangeEvent(QLineEdit* self, QEvent* param1);
    friend void QLineEdit_ContextMenuEvent(QLineEdit* self, QContextMenuEvent* param1);
    friend void QLineEdit_SuperContextMenuEvent(QLineEdit* self, QContextMenuEvent* param1);
    friend void QLineEdit_InputMethodEvent(QLineEdit* self, QInputMethodEvent* param1);
    friend void QLineEdit_SuperInputMethodEvent(QLineEdit* self, QInputMethodEvent* param1);
    friend void QLineEdit_InitStyleOption(const QLineEdit* self, QStyleOptionFrame* option);
    friend void QLineEdit_SuperInitStyleOption(const QLineEdit* self, QStyleOptionFrame* option);
    friend void QLineEdit_WheelEvent(QLineEdit* self, QWheelEvent* event);
    friend void QLineEdit_SuperWheelEvent(QLineEdit* self, QWheelEvent* event);
    friend void QLineEdit_EnterEvent(QLineEdit* self, QEnterEvent* event);
    friend void QLineEdit_SuperEnterEvent(QLineEdit* self, QEnterEvent* event);
    friend void QLineEdit_LeaveEvent(QLineEdit* self, QEvent* event);
    friend void QLineEdit_SuperLeaveEvent(QLineEdit* self, QEvent* event);
    friend void QLineEdit_MoveEvent(QLineEdit* self, QMoveEvent* event);
    friend void QLineEdit_SuperMoveEvent(QLineEdit* self, QMoveEvent* event);
    friend void QLineEdit_ResizeEvent(QLineEdit* self, QResizeEvent* event);
    friend void QLineEdit_SuperResizeEvent(QLineEdit* self, QResizeEvent* event);
    friend void QLineEdit_CloseEvent(QLineEdit* self, QCloseEvent* event);
    friend void QLineEdit_SuperCloseEvent(QLineEdit* self, QCloseEvent* event);
    friend void QLineEdit_TabletEvent(QLineEdit* self, QTabletEvent* event);
    friend void QLineEdit_SuperTabletEvent(QLineEdit* self, QTabletEvent* event);
    friend void QLineEdit_ActionEvent(QLineEdit* self, QActionEvent* event);
    friend void QLineEdit_SuperActionEvent(QLineEdit* self, QActionEvent* event);
    friend void QLineEdit_ShowEvent(QLineEdit* self, QShowEvent* event);
    friend void QLineEdit_SuperShowEvent(QLineEdit* self, QShowEvent* event);
    friend void QLineEdit_HideEvent(QLineEdit* self, QHideEvent* event);
    friend void QLineEdit_SuperHideEvent(QLineEdit* self, QHideEvent* event);
    friend bool QLineEdit_NativeEvent(QLineEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QLineEdit_SuperNativeEvent(QLineEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QLineEdit_Metric(const QLineEdit* self, int param1);
    friend int QLineEdit_SuperMetric(const QLineEdit* self, int param1);
    friend void QLineEdit_InitPainter(const QLineEdit* self, QPainter* painter);
    friend void QLineEdit_SuperInitPainter(const QLineEdit* self, QPainter* painter);
    friend QPaintDevice* QLineEdit_Redirected(const QLineEdit* self, QPoint* offset);
    friend QPaintDevice* QLineEdit_SuperRedirected(const QLineEdit* self, QPoint* offset);
    friend QPainter* QLineEdit_SharedPainter(const QLineEdit* self);
    friend QPainter* QLineEdit_SuperSharedPainter(const QLineEdit* self);
    friend bool QLineEdit_FocusNextPrevChild(QLineEdit* self, bool next);
    friend bool QLineEdit_SuperFocusNextPrevChild(QLineEdit* self, bool next);
    friend void QLineEdit_ChildEvent(QLineEdit* self, QChildEvent* event);
    friend void QLineEdit_SuperChildEvent(QLineEdit* self, QChildEvent* event);
    friend void QLineEdit_CustomEvent(QLineEdit* self, QEvent* event);
    friend void QLineEdit_SuperCustomEvent(QLineEdit* self, QEvent* event);
    friend void QLineEdit_ConnectNotify(QLineEdit* self, const QMetaMethod* signal);
    friend void QLineEdit_SuperConnectNotify(QLineEdit* self, const QMetaMethod* signal);
    friend void QLineEdit_DisconnectNotify(QLineEdit* self, const QMetaMethod* signal);
    friend void QLineEdit_SuperDisconnectNotify(QLineEdit* self, const QMetaMethod* signal);
    friend QRect* QLineEdit_CursorRect(const QLineEdit* self);
    friend QRect* QLineEdit_SuperCursorRect(const QLineEdit* self);
    friend void QLineEdit_UpdateMicroFocus(QLineEdit* self);
    friend void QLineEdit_SuperUpdateMicroFocus(QLineEdit* self);
    friend void QLineEdit_Create(QLineEdit* self);
    friend void QLineEdit_SuperCreate(QLineEdit* self);
    friend void QLineEdit_Destroy(QLineEdit* self);
    friend void QLineEdit_SuperDestroy(QLineEdit* self);
    friend bool QLineEdit_FocusNextChild(QLineEdit* self);
    friend bool QLineEdit_SuperFocusNextChild(QLineEdit* self);
    friend bool QLineEdit_FocusPreviousChild(QLineEdit* self);
    friend bool QLineEdit_SuperFocusPreviousChild(QLineEdit* self);
    friend QObject* QLineEdit_Sender(const QLineEdit* self);
    friend QObject* QLineEdit_SuperSender(const QLineEdit* self);
    friend int QLineEdit_SenderSignalIndex(const QLineEdit* self);
    friend int QLineEdit_SuperSenderSignalIndex(const QLineEdit* self);
    friend int QLineEdit_Receivers(const QLineEdit* self, const char* signal);
    friend int QLineEdit_SuperReceivers(const QLineEdit* self, const char* signal);
    friend bool QLineEdit_IsSignalConnected(const QLineEdit* self, const QMetaMethod* signal);
    friend bool QLineEdit_SuperIsSignalConnected(const QLineEdit* self, const QMetaMethod* signal);
    friend double QLineEdit_GetDecodedMetricF(const QLineEdit* self, int metricA, int metricB);
    friend double QLineEdit_SuperGetDecodedMetricF(const QLineEdit* self, int metricA, int metricB);
};

#endif
