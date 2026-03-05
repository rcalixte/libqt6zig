#pragma once
#ifndef SRCC_LIBVIRTUALQPUSHBUTTON_H
#define SRCC_LIBVIRTUALQPUSHBUTTON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPushButton so that we can call protected methods
class VirtualQPushButton final : public QPushButton {

  public:
    // Virtual class boolean flag
    bool isVirtualQPushButton = true;

    // Virtual class public types (including callbacks)
    using QPushButton_MetaObject_Callback = QMetaObject* (*)();
    using QPushButton_Metacast_Callback = void* (*)(QPushButton*, const char*);
    using QPushButton_Metacall_Callback = int (*)(QPushButton*, int, int, void**);
    using QPushButton_SizeHint_Callback = QSize* (*)();
    using QPushButton_MinimumSizeHint_Callback = QSize* (*)();
    using QPushButton_Event_Callback = bool (*)(QPushButton*, QEvent*);
    using QPushButton_PaintEvent_Callback = void (*)(QPushButton*, QPaintEvent*);
    using QPushButton_KeyPressEvent_Callback = void (*)(QPushButton*, QKeyEvent*);
    using QPushButton_FocusInEvent_Callback = void (*)(QPushButton*, QFocusEvent*);
    using QPushButton_FocusOutEvent_Callback = void (*)(QPushButton*, QFocusEvent*);
    using QPushButton_MouseMoveEvent_Callback = void (*)(QPushButton*, QMouseEvent*);
    using QPushButton_InitStyleOption_Callback = void (*)(const QPushButton*, QStyleOptionButton*);
    using QPushButton_HitButton_Callback = bool (*)(const QPushButton*, QPoint*);
    using QPushButton_CheckStateSet_Callback = void (*)();
    using QPushButton_NextCheckState_Callback = void (*)();
    using QPushButton_KeyReleaseEvent_Callback = void (*)(QPushButton*, QKeyEvent*);
    using QPushButton_MousePressEvent_Callback = void (*)(QPushButton*, QMouseEvent*);
    using QPushButton_MouseReleaseEvent_Callback = void (*)(QPushButton*, QMouseEvent*);
    using QPushButton_ChangeEvent_Callback = void (*)(QPushButton*, QEvent*);
    using QPushButton_TimerEvent_Callback = void (*)(QPushButton*, QTimerEvent*);
    using QPushButton_DevType_Callback = int (*)();
    using QPushButton_SetVisible_Callback = void (*)(QPushButton*, bool);
    using QPushButton_HeightForWidth_Callback = int (*)(const QPushButton*, int);
    using QPushButton_HasHeightForWidth_Callback = bool (*)();
    using QPushButton_PaintEngine_Callback = QPaintEngine* (*)();
    using QPushButton_MouseDoubleClickEvent_Callback = void (*)(QPushButton*, QMouseEvent*);
    using QPushButton_WheelEvent_Callback = void (*)(QPushButton*, QWheelEvent*);
    using QPushButton_EnterEvent_Callback = void (*)(QPushButton*, QEnterEvent*);
    using QPushButton_LeaveEvent_Callback = void (*)(QPushButton*, QEvent*);
    using QPushButton_MoveEvent_Callback = void (*)(QPushButton*, QMoveEvent*);
    using QPushButton_ResizeEvent_Callback = void (*)(QPushButton*, QResizeEvent*);
    using QPushButton_CloseEvent_Callback = void (*)(QPushButton*, QCloseEvent*);
    using QPushButton_ContextMenuEvent_Callback = void (*)(QPushButton*, QContextMenuEvent*);
    using QPushButton_TabletEvent_Callback = void (*)(QPushButton*, QTabletEvent*);
    using QPushButton_ActionEvent_Callback = void (*)(QPushButton*, QActionEvent*);
    using QPushButton_DragEnterEvent_Callback = void (*)(QPushButton*, QDragEnterEvent*);
    using QPushButton_DragMoveEvent_Callback = void (*)(QPushButton*, QDragMoveEvent*);
    using QPushButton_DragLeaveEvent_Callback = void (*)(QPushButton*, QDragLeaveEvent*);
    using QPushButton_DropEvent_Callback = void (*)(QPushButton*, QDropEvent*);
    using QPushButton_ShowEvent_Callback = void (*)(QPushButton*, QShowEvent*);
    using QPushButton_HideEvent_Callback = void (*)(QPushButton*, QHideEvent*);
    using QPushButton_NativeEvent_Callback = bool (*)(QPushButton*, libqt_string, void*, intptr_t*);
    using QPushButton_Metric_Callback = int (*)(const QPushButton*, int);
    using QPushButton_InitPainter_Callback = void (*)(const QPushButton*, QPainter*);
    using QPushButton_Redirected_Callback = QPaintDevice* (*)(const QPushButton*, QPoint*);
    using QPushButton_SharedPainter_Callback = QPainter* (*)();
    using QPushButton_InputMethodEvent_Callback = void (*)(QPushButton*, QInputMethodEvent*);
    using QPushButton_InputMethodQuery_Callback = QVariant* (*)(const QPushButton*, int);
    using QPushButton_FocusNextPrevChild_Callback = bool (*)(QPushButton*, bool);
    using QPushButton_EventFilter_Callback = bool (*)(QPushButton*, QObject*, QEvent*);
    using QPushButton_ChildEvent_Callback = void (*)(QPushButton*, QChildEvent*);
    using QPushButton_CustomEvent_Callback = void (*)(QPushButton*, QEvent*);
    using QPushButton_ConnectNotify_Callback = void (*)(QPushButton*, QMetaMethod*);
    using QPushButton_DisconnectNotify_Callback = void (*)(QPushButton*, QMetaMethod*);
    using QPushButton_UpdateMicroFocus_Callback = void (*)();
    using QPushButton_Create_Callback = void (*)();
    using QPushButton_Destroy_Callback = void (*)();
    using QPushButton_FocusNextChild_Callback = bool (*)();
    using QPushButton_FocusPreviousChild_Callback = bool (*)();
    using QPushButton_Sender_Callback = QObject* (*)();
    using QPushButton_SenderSignalIndex_Callback = int (*)();
    using QPushButton_Receivers_Callback = int (*)(const QPushButton*, const char*);
    using QPushButton_IsSignalConnected_Callback = bool (*)(const QPushButton*, QMetaMethod*);
    using QPushButton_GetDecodedMetricF_Callback = double (*)(const QPushButton*, int, int);

  protected:
    // Instance callback storage
    QPushButton_MetaObject_Callback qpushbutton_metaobject_callback = nullptr;
    QPushButton_Metacast_Callback qpushbutton_metacast_callback = nullptr;
    QPushButton_Metacall_Callback qpushbutton_metacall_callback = nullptr;
    QPushButton_SizeHint_Callback qpushbutton_sizehint_callback = nullptr;
    QPushButton_MinimumSizeHint_Callback qpushbutton_minimumsizehint_callback = nullptr;
    QPushButton_Event_Callback qpushbutton_event_callback = nullptr;
    QPushButton_PaintEvent_Callback qpushbutton_paintevent_callback = nullptr;
    QPushButton_KeyPressEvent_Callback qpushbutton_keypressevent_callback = nullptr;
    QPushButton_FocusInEvent_Callback qpushbutton_focusinevent_callback = nullptr;
    QPushButton_FocusOutEvent_Callback qpushbutton_focusoutevent_callback = nullptr;
    QPushButton_MouseMoveEvent_Callback qpushbutton_mousemoveevent_callback = nullptr;
    QPushButton_InitStyleOption_Callback qpushbutton_initstyleoption_callback = nullptr;
    QPushButton_HitButton_Callback qpushbutton_hitbutton_callback = nullptr;
    QPushButton_CheckStateSet_Callback qpushbutton_checkstateset_callback = nullptr;
    QPushButton_NextCheckState_Callback qpushbutton_nextcheckstate_callback = nullptr;
    QPushButton_KeyReleaseEvent_Callback qpushbutton_keyreleaseevent_callback = nullptr;
    QPushButton_MousePressEvent_Callback qpushbutton_mousepressevent_callback = nullptr;
    QPushButton_MouseReleaseEvent_Callback qpushbutton_mousereleaseevent_callback = nullptr;
    QPushButton_ChangeEvent_Callback qpushbutton_changeevent_callback = nullptr;
    QPushButton_TimerEvent_Callback qpushbutton_timerevent_callback = nullptr;
    QPushButton_DevType_Callback qpushbutton_devtype_callback = nullptr;
    QPushButton_SetVisible_Callback qpushbutton_setvisible_callback = nullptr;
    QPushButton_HeightForWidth_Callback qpushbutton_heightforwidth_callback = nullptr;
    QPushButton_HasHeightForWidth_Callback qpushbutton_hasheightforwidth_callback = nullptr;
    QPushButton_PaintEngine_Callback qpushbutton_paintengine_callback = nullptr;
    QPushButton_MouseDoubleClickEvent_Callback qpushbutton_mousedoubleclickevent_callback = nullptr;
    QPushButton_WheelEvent_Callback qpushbutton_wheelevent_callback = nullptr;
    QPushButton_EnterEvent_Callback qpushbutton_enterevent_callback = nullptr;
    QPushButton_LeaveEvent_Callback qpushbutton_leaveevent_callback = nullptr;
    QPushButton_MoveEvent_Callback qpushbutton_moveevent_callback = nullptr;
    QPushButton_ResizeEvent_Callback qpushbutton_resizeevent_callback = nullptr;
    QPushButton_CloseEvent_Callback qpushbutton_closeevent_callback = nullptr;
    QPushButton_ContextMenuEvent_Callback qpushbutton_contextmenuevent_callback = nullptr;
    QPushButton_TabletEvent_Callback qpushbutton_tabletevent_callback = nullptr;
    QPushButton_ActionEvent_Callback qpushbutton_actionevent_callback = nullptr;
    QPushButton_DragEnterEvent_Callback qpushbutton_dragenterevent_callback = nullptr;
    QPushButton_DragMoveEvent_Callback qpushbutton_dragmoveevent_callback = nullptr;
    QPushButton_DragLeaveEvent_Callback qpushbutton_dragleaveevent_callback = nullptr;
    QPushButton_DropEvent_Callback qpushbutton_dropevent_callback = nullptr;
    QPushButton_ShowEvent_Callback qpushbutton_showevent_callback = nullptr;
    QPushButton_HideEvent_Callback qpushbutton_hideevent_callback = nullptr;
    QPushButton_NativeEvent_Callback qpushbutton_nativeevent_callback = nullptr;
    QPushButton_Metric_Callback qpushbutton_metric_callback = nullptr;
    QPushButton_InitPainter_Callback qpushbutton_initpainter_callback = nullptr;
    QPushButton_Redirected_Callback qpushbutton_redirected_callback = nullptr;
    QPushButton_SharedPainter_Callback qpushbutton_sharedpainter_callback = nullptr;
    QPushButton_InputMethodEvent_Callback qpushbutton_inputmethodevent_callback = nullptr;
    QPushButton_InputMethodQuery_Callback qpushbutton_inputmethodquery_callback = nullptr;
    QPushButton_FocusNextPrevChild_Callback qpushbutton_focusnextprevchild_callback = nullptr;
    QPushButton_EventFilter_Callback qpushbutton_eventfilter_callback = nullptr;
    QPushButton_ChildEvent_Callback qpushbutton_childevent_callback = nullptr;
    QPushButton_CustomEvent_Callback qpushbutton_customevent_callback = nullptr;
    QPushButton_ConnectNotify_Callback qpushbutton_connectnotify_callback = nullptr;
    QPushButton_DisconnectNotify_Callback qpushbutton_disconnectnotify_callback = nullptr;
    QPushButton_UpdateMicroFocus_Callback qpushbutton_updatemicrofocus_callback = nullptr;
    QPushButton_Create_Callback qpushbutton_create_callback = nullptr;
    QPushButton_Destroy_Callback qpushbutton_destroy_callback = nullptr;
    QPushButton_FocusNextChild_Callback qpushbutton_focusnextchild_callback = nullptr;
    QPushButton_FocusPreviousChild_Callback qpushbutton_focuspreviouschild_callback = nullptr;
    QPushButton_Sender_Callback qpushbutton_sender_callback = nullptr;
    QPushButton_SenderSignalIndex_Callback qpushbutton_sendersignalindex_callback = nullptr;
    QPushButton_Receivers_Callback qpushbutton_receivers_callback = nullptr;
    QPushButton_IsSignalConnected_Callback qpushbutton_issignalconnected_callback = nullptr;
    QPushButton_GetDecodedMetricF_Callback qpushbutton_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qpushbutton_metaobject_isbase = false;
    mutable bool qpushbutton_metacast_isbase = false;
    mutable bool qpushbutton_metacall_isbase = false;
    mutable bool qpushbutton_sizehint_isbase = false;
    mutable bool qpushbutton_minimumsizehint_isbase = false;
    mutable bool qpushbutton_event_isbase = false;
    mutable bool qpushbutton_paintevent_isbase = false;
    mutable bool qpushbutton_keypressevent_isbase = false;
    mutable bool qpushbutton_focusinevent_isbase = false;
    mutable bool qpushbutton_focusoutevent_isbase = false;
    mutable bool qpushbutton_mousemoveevent_isbase = false;
    mutable bool qpushbutton_initstyleoption_isbase = false;
    mutable bool qpushbutton_hitbutton_isbase = false;
    mutable bool qpushbutton_checkstateset_isbase = false;
    mutable bool qpushbutton_nextcheckstate_isbase = false;
    mutable bool qpushbutton_keyreleaseevent_isbase = false;
    mutable bool qpushbutton_mousepressevent_isbase = false;
    mutable bool qpushbutton_mousereleaseevent_isbase = false;
    mutable bool qpushbutton_changeevent_isbase = false;
    mutable bool qpushbutton_timerevent_isbase = false;
    mutable bool qpushbutton_devtype_isbase = false;
    mutable bool qpushbutton_setvisible_isbase = false;
    mutable bool qpushbutton_heightforwidth_isbase = false;
    mutable bool qpushbutton_hasheightforwidth_isbase = false;
    mutable bool qpushbutton_paintengine_isbase = false;
    mutable bool qpushbutton_mousedoubleclickevent_isbase = false;
    mutable bool qpushbutton_wheelevent_isbase = false;
    mutable bool qpushbutton_enterevent_isbase = false;
    mutable bool qpushbutton_leaveevent_isbase = false;
    mutable bool qpushbutton_moveevent_isbase = false;
    mutable bool qpushbutton_resizeevent_isbase = false;
    mutable bool qpushbutton_closeevent_isbase = false;
    mutable bool qpushbutton_contextmenuevent_isbase = false;
    mutable bool qpushbutton_tabletevent_isbase = false;
    mutable bool qpushbutton_actionevent_isbase = false;
    mutable bool qpushbutton_dragenterevent_isbase = false;
    mutable bool qpushbutton_dragmoveevent_isbase = false;
    mutable bool qpushbutton_dragleaveevent_isbase = false;
    mutable bool qpushbutton_dropevent_isbase = false;
    mutable bool qpushbutton_showevent_isbase = false;
    mutable bool qpushbutton_hideevent_isbase = false;
    mutable bool qpushbutton_nativeevent_isbase = false;
    mutable bool qpushbutton_metric_isbase = false;
    mutable bool qpushbutton_initpainter_isbase = false;
    mutable bool qpushbutton_redirected_isbase = false;
    mutable bool qpushbutton_sharedpainter_isbase = false;
    mutable bool qpushbutton_inputmethodevent_isbase = false;
    mutable bool qpushbutton_inputmethodquery_isbase = false;
    mutable bool qpushbutton_focusnextprevchild_isbase = false;
    mutable bool qpushbutton_eventfilter_isbase = false;
    mutable bool qpushbutton_childevent_isbase = false;
    mutable bool qpushbutton_customevent_isbase = false;
    mutable bool qpushbutton_connectnotify_isbase = false;
    mutable bool qpushbutton_disconnectnotify_isbase = false;
    mutable bool qpushbutton_updatemicrofocus_isbase = false;
    mutable bool qpushbutton_create_isbase = false;
    mutable bool qpushbutton_destroy_isbase = false;
    mutable bool qpushbutton_focusnextchild_isbase = false;
    mutable bool qpushbutton_focuspreviouschild_isbase = false;
    mutable bool qpushbutton_sender_isbase = false;
    mutable bool qpushbutton_sendersignalindex_isbase = false;
    mutable bool qpushbutton_receivers_isbase = false;
    mutable bool qpushbutton_issignalconnected_isbase = false;
    mutable bool qpushbutton_getdecodedmetricf_isbase = false;

  public:
    VirtualQPushButton(QWidget* parent) : QPushButton(parent) {};
    VirtualQPushButton() : QPushButton() {};
    VirtualQPushButton(const QString& text) : QPushButton(text) {};
    VirtualQPushButton(const QIcon& icon, const QString& text) : QPushButton(icon, text) {};
    VirtualQPushButton(const QString& text, QWidget* parent) : QPushButton(text, parent) {};
    VirtualQPushButton(const QIcon& icon, const QString& text, QWidget* parent) : QPushButton(icon, text, parent) {};

    // Callback setters
    inline void setQPushButton_MetaObject_Callback(QPushButton_MetaObject_Callback cb) { qpushbutton_metaobject_callback = cb; }
    inline void setQPushButton_Metacast_Callback(QPushButton_Metacast_Callback cb) { qpushbutton_metacast_callback = cb; }
    inline void setQPushButton_Metacall_Callback(QPushButton_Metacall_Callback cb) { qpushbutton_metacall_callback = cb; }
    inline void setQPushButton_SizeHint_Callback(QPushButton_SizeHint_Callback cb) { qpushbutton_sizehint_callback = cb; }
    inline void setQPushButton_MinimumSizeHint_Callback(QPushButton_MinimumSizeHint_Callback cb) { qpushbutton_minimumsizehint_callback = cb; }
    inline void setQPushButton_Event_Callback(QPushButton_Event_Callback cb) { qpushbutton_event_callback = cb; }
    inline void setQPushButton_PaintEvent_Callback(QPushButton_PaintEvent_Callback cb) { qpushbutton_paintevent_callback = cb; }
    inline void setQPushButton_KeyPressEvent_Callback(QPushButton_KeyPressEvent_Callback cb) { qpushbutton_keypressevent_callback = cb; }
    inline void setQPushButton_FocusInEvent_Callback(QPushButton_FocusInEvent_Callback cb) { qpushbutton_focusinevent_callback = cb; }
    inline void setQPushButton_FocusOutEvent_Callback(QPushButton_FocusOutEvent_Callback cb) { qpushbutton_focusoutevent_callback = cb; }
    inline void setQPushButton_MouseMoveEvent_Callback(QPushButton_MouseMoveEvent_Callback cb) { qpushbutton_mousemoveevent_callback = cb; }
    inline void setQPushButton_InitStyleOption_Callback(QPushButton_InitStyleOption_Callback cb) { qpushbutton_initstyleoption_callback = cb; }
    inline void setQPushButton_HitButton_Callback(QPushButton_HitButton_Callback cb) { qpushbutton_hitbutton_callback = cb; }
    inline void setQPushButton_CheckStateSet_Callback(QPushButton_CheckStateSet_Callback cb) { qpushbutton_checkstateset_callback = cb; }
    inline void setQPushButton_NextCheckState_Callback(QPushButton_NextCheckState_Callback cb) { qpushbutton_nextcheckstate_callback = cb; }
    inline void setQPushButton_KeyReleaseEvent_Callback(QPushButton_KeyReleaseEvent_Callback cb) { qpushbutton_keyreleaseevent_callback = cb; }
    inline void setQPushButton_MousePressEvent_Callback(QPushButton_MousePressEvent_Callback cb) { qpushbutton_mousepressevent_callback = cb; }
    inline void setQPushButton_MouseReleaseEvent_Callback(QPushButton_MouseReleaseEvent_Callback cb) { qpushbutton_mousereleaseevent_callback = cb; }
    inline void setQPushButton_ChangeEvent_Callback(QPushButton_ChangeEvent_Callback cb) { qpushbutton_changeevent_callback = cb; }
    inline void setQPushButton_TimerEvent_Callback(QPushButton_TimerEvent_Callback cb) { qpushbutton_timerevent_callback = cb; }
    inline void setQPushButton_DevType_Callback(QPushButton_DevType_Callback cb) { qpushbutton_devtype_callback = cb; }
    inline void setQPushButton_SetVisible_Callback(QPushButton_SetVisible_Callback cb) { qpushbutton_setvisible_callback = cb; }
    inline void setQPushButton_HeightForWidth_Callback(QPushButton_HeightForWidth_Callback cb) { qpushbutton_heightforwidth_callback = cb; }
    inline void setQPushButton_HasHeightForWidth_Callback(QPushButton_HasHeightForWidth_Callback cb) { qpushbutton_hasheightforwidth_callback = cb; }
    inline void setQPushButton_PaintEngine_Callback(QPushButton_PaintEngine_Callback cb) { qpushbutton_paintengine_callback = cb; }
    inline void setQPushButton_MouseDoubleClickEvent_Callback(QPushButton_MouseDoubleClickEvent_Callback cb) { qpushbutton_mousedoubleclickevent_callback = cb; }
    inline void setQPushButton_WheelEvent_Callback(QPushButton_WheelEvent_Callback cb) { qpushbutton_wheelevent_callback = cb; }
    inline void setQPushButton_EnterEvent_Callback(QPushButton_EnterEvent_Callback cb) { qpushbutton_enterevent_callback = cb; }
    inline void setQPushButton_LeaveEvent_Callback(QPushButton_LeaveEvent_Callback cb) { qpushbutton_leaveevent_callback = cb; }
    inline void setQPushButton_MoveEvent_Callback(QPushButton_MoveEvent_Callback cb) { qpushbutton_moveevent_callback = cb; }
    inline void setQPushButton_ResizeEvent_Callback(QPushButton_ResizeEvent_Callback cb) { qpushbutton_resizeevent_callback = cb; }
    inline void setQPushButton_CloseEvent_Callback(QPushButton_CloseEvent_Callback cb) { qpushbutton_closeevent_callback = cb; }
    inline void setQPushButton_ContextMenuEvent_Callback(QPushButton_ContextMenuEvent_Callback cb) { qpushbutton_contextmenuevent_callback = cb; }
    inline void setQPushButton_TabletEvent_Callback(QPushButton_TabletEvent_Callback cb) { qpushbutton_tabletevent_callback = cb; }
    inline void setQPushButton_ActionEvent_Callback(QPushButton_ActionEvent_Callback cb) { qpushbutton_actionevent_callback = cb; }
    inline void setQPushButton_DragEnterEvent_Callback(QPushButton_DragEnterEvent_Callback cb) { qpushbutton_dragenterevent_callback = cb; }
    inline void setQPushButton_DragMoveEvent_Callback(QPushButton_DragMoveEvent_Callback cb) { qpushbutton_dragmoveevent_callback = cb; }
    inline void setQPushButton_DragLeaveEvent_Callback(QPushButton_DragLeaveEvent_Callback cb) { qpushbutton_dragleaveevent_callback = cb; }
    inline void setQPushButton_DropEvent_Callback(QPushButton_DropEvent_Callback cb) { qpushbutton_dropevent_callback = cb; }
    inline void setQPushButton_ShowEvent_Callback(QPushButton_ShowEvent_Callback cb) { qpushbutton_showevent_callback = cb; }
    inline void setQPushButton_HideEvent_Callback(QPushButton_HideEvent_Callback cb) { qpushbutton_hideevent_callback = cb; }
    inline void setQPushButton_NativeEvent_Callback(QPushButton_NativeEvent_Callback cb) { qpushbutton_nativeevent_callback = cb; }
    inline void setQPushButton_Metric_Callback(QPushButton_Metric_Callback cb) { qpushbutton_metric_callback = cb; }
    inline void setQPushButton_InitPainter_Callback(QPushButton_InitPainter_Callback cb) { qpushbutton_initpainter_callback = cb; }
    inline void setQPushButton_Redirected_Callback(QPushButton_Redirected_Callback cb) { qpushbutton_redirected_callback = cb; }
    inline void setQPushButton_SharedPainter_Callback(QPushButton_SharedPainter_Callback cb) { qpushbutton_sharedpainter_callback = cb; }
    inline void setQPushButton_InputMethodEvent_Callback(QPushButton_InputMethodEvent_Callback cb) { qpushbutton_inputmethodevent_callback = cb; }
    inline void setQPushButton_InputMethodQuery_Callback(QPushButton_InputMethodQuery_Callback cb) { qpushbutton_inputmethodquery_callback = cb; }
    inline void setQPushButton_FocusNextPrevChild_Callback(QPushButton_FocusNextPrevChild_Callback cb) { qpushbutton_focusnextprevchild_callback = cb; }
    inline void setQPushButton_EventFilter_Callback(QPushButton_EventFilter_Callback cb) { qpushbutton_eventfilter_callback = cb; }
    inline void setQPushButton_ChildEvent_Callback(QPushButton_ChildEvent_Callback cb) { qpushbutton_childevent_callback = cb; }
    inline void setQPushButton_CustomEvent_Callback(QPushButton_CustomEvent_Callback cb) { qpushbutton_customevent_callback = cb; }
    inline void setQPushButton_ConnectNotify_Callback(QPushButton_ConnectNotify_Callback cb) { qpushbutton_connectnotify_callback = cb; }
    inline void setQPushButton_DisconnectNotify_Callback(QPushButton_DisconnectNotify_Callback cb) { qpushbutton_disconnectnotify_callback = cb; }
    inline void setQPushButton_UpdateMicroFocus_Callback(QPushButton_UpdateMicroFocus_Callback cb) { qpushbutton_updatemicrofocus_callback = cb; }
    inline void setQPushButton_Create_Callback(QPushButton_Create_Callback cb) { qpushbutton_create_callback = cb; }
    inline void setQPushButton_Destroy_Callback(QPushButton_Destroy_Callback cb) { qpushbutton_destroy_callback = cb; }
    inline void setQPushButton_FocusNextChild_Callback(QPushButton_FocusNextChild_Callback cb) { qpushbutton_focusnextchild_callback = cb; }
    inline void setQPushButton_FocusPreviousChild_Callback(QPushButton_FocusPreviousChild_Callback cb) { qpushbutton_focuspreviouschild_callback = cb; }
    inline void setQPushButton_Sender_Callback(QPushButton_Sender_Callback cb) { qpushbutton_sender_callback = cb; }
    inline void setQPushButton_SenderSignalIndex_Callback(QPushButton_SenderSignalIndex_Callback cb) { qpushbutton_sendersignalindex_callback = cb; }
    inline void setQPushButton_Receivers_Callback(QPushButton_Receivers_Callback cb) { qpushbutton_receivers_callback = cb; }
    inline void setQPushButton_IsSignalConnected_Callback(QPushButton_IsSignalConnected_Callback cb) { qpushbutton_issignalconnected_callback = cb; }
    inline void setQPushButton_GetDecodedMetricF_Callback(QPushButton_GetDecodedMetricF_Callback cb) { qpushbutton_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQPushButton_MetaObject_IsBase(bool value) const { qpushbutton_metaobject_isbase = value; }
    inline void setQPushButton_Metacast_IsBase(bool value) const { qpushbutton_metacast_isbase = value; }
    inline void setQPushButton_Metacall_IsBase(bool value) const { qpushbutton_metacall_isbase = value; }
    inline void setQPushButton_SizeHint_IsBase(bool value) const { qpushbutton_sizehint_isbase = value; }
    inline void setQPushButton_MinimumSizeHint_IsBase(bool value) const { qpushbutton_minimumsizehint_isbase = value; }
    inline void setQPushButton_Event_IsBase(bool value) const { qpushbutton_event_isbase = value; }
    inline void setQPushButton_PaintEvent_IsBase(bool value) const { qpushbutton_paintevent_isbase = value; }
    inline void setQPushButton_KeyPressEvent_IsBase(bool value) const { qpushbutton_keypressevent_isbase = value; }
    inline void setQPushButton_FocusInEvent_IsBase(bool value) const { qpushbutton_focusinevent_isbase = value; }
    inline void setQPushButton_FocusOutEvent_IsBase(bool value) const { qpushbutton_focusoutevent_isbase = value; }
    inline void setQPushButton_MouseMoveEvent_IsBase(bool value) const { qpushbutton_mousemoveevent_isbase = value; }
    inline void setQPushButton_InitStyleOption_IsBase(bool value) const { qpushbutton_initstyleoption_isbase = value; }
    inline void setQPushButton_HitButton_IsBase(bool value) const { qpushbutton_hitbutton_isbase = value; }
    inline void setQPushButton_CheckStateSet_IsBase(bool value) const { qpushbutton_checkstateset_isbase = value; }
    inline void setQPushButton_NextCheckState_IsBase(bool value) const { qpushbutton_nextcheckstate_isbase = value; }
    inline void setQPushButton_KeyReleaseEvent_IsBase(bool value) const { qpushbutton_keyreleaseevent_isbase = value; }
    inline void setQPushButton_MousePressEvent_IsBase(bool value) const { qpushbutton_mousepressevent_isbase = value; }
    inline void setQPushButton_MouseReleaseEvent_IsBase(bool value) const { qpushbutton_mousereleaseevent_isbase = value; }
    inline void setQPushButton_ChangeEvent_IsBase(bool value) const { qpushbutton_changeevent_isbase = value; }
    inline void setQPushButton_TimerEvent_IsBase(bool value) const { qpushbutton_timerevent_isbase = value; }
    inline void setQPushButton_DevType_IsBase(bool value) const { qpushbutton_devtype_isbase = value; }
    inline void setQPushButton_SetVisible_IsBase(bool value) const { qpushbutton_setvisible_isbase = value; }
    inline void setQPushButton_HeightForWidth_IsBase(bool value) const { qpushbutton_heightforwidth_isbase = value; }
    inline void setQPushButton_HasHeightForWidth_IsBase(bool value) const { qpushbutton_hasheightforwidth_isbase = value; }
    inline void setQPushButton_PaintEngine_IsBase(bool value) const { qpushbutton_paintengine_isbase = value; }
    inline void setQPushButton_MouseDoubleClickEvent_IsBase(bool value) const { qpushbutton_mousedoubleclickevent_isbase = value; }
    inline void setQPushButton_WheelEvent_IsBase(bool value) const { qpushbutton_wheelevent_isbase = value; }
    inline void setQPushButton_EnterEvent_IsBase(bool value) const { qpushbutton_enterevent_isbase = value; }
    inline void setQPushButton_LeaveEvent_IsBase(bool value) const { qpushbutton_leaveevent_isbase = value; }
    inline void setQPushButton_MoveEvent_IsBase(bool value) const { qpushbutton_moveevent_isbase = value; }
    inline void setQPushButton_ResizeEvent_IsBase(bool value) const { qpushbutton_resizeevent_isbase = value; }
    inline void setQPushButton_CloseEvent_IsBase(bool value) const { qpushbutton_closeevent_isbase = value; }
    inline void setQPushButton_ContextMenuEvent_IsBase(bool value) const { qpushbutton_contextmenuevent_isbase = value; }
    inline void setQPushButton_TabletEvent_IsBase(bool value) const { qpushbutton_tabletevent_isbase = value; }
    inline void setQPushButton_ActionEvent_IsBase(bool value) const { qpushbutton_actionevent_isbase = value; }
    inline void setQPushButton_DragEnterEvent_IsBase(bool value) const { qpushbutton_dragenterevent_isbase = value; }
    inline void setQPushButton_DragMoveEvent_IsBase(bool value) const { qpushbutton_dragmoveevent_isbase = value; }
    inline void setQPushButton_DragLeaveEvent_IsBase(bool value) const { qpushbutton_dragleaveevent_isbase = value; }
    inline void setQPushButton_DropEvent_IsBase(bool value) const { qpushbutton_dropevent_isbase = value; }
    inline void setQPushButton_ShowEvent_IsBase(bool value) const { qpushbutton_showevent_isbase = value; }
    inline void setQPushButton_HideEvent_IsBase(bool value) const { qpushbutton_hideevent_isbase = value; }
    inline void setQPushButton_NativeEvent_IsBase(bool value) const { qpushbutton_nativeevent_isbase = value; }
    inline void setQPushButton_Metric_IsBase(bool value) const { qpushbutton_metric_isbase = value; }
    inline void setQPushButton_InitPainter_IsBase(bool value) const { qpushbutton_initpainter_isbase = value; }
    inline void setQPushButton_Redirected_IsBase(bool value) const { qpushbutton_redirected_isbase = value; }
    inline void setQPushButton_SharedPainter_IsBase(bool value) const { qpushbutton_sharedpainter_isbase = value; }
    inline void setQPushButton_InputMethodEvent_IsBase(bool value) const { qpushbutton_inputmethodevent_isbase = value; }
    inline void setQPushButton_InputMethodQuery_IsBase(bool value) const { qpushbutton_inputmethodquery_isbase = value; }
    inline void setQPushButton_FocusNextPrevChild_IsBase(bool value) const { qpushbutton_focusnextprevchild_isbase = value; }
    inline void setQPushButton_EventFilter_IsBase(bool value) const { qpushbutton_eventfilter_isbase = value; }
    inline void setQPushButton_ChildEvent_IsBase(bool value) const { qpushbutton_childevent_isbase = value; }
    inline void setQPushButton_CustomEvent_IsBase(bool value) const { qpushbutton_customevent_isbase = value; }
    inline void setQPushButton_ConnectNotify_IsBase(bool value) const { qpushbutton_connectnotify_isbase = value; }
    inline void setQPushButton_DisconnectNotify_IsBase(bool value) const { qpushbutton_disconnectnotify_isbase = value; }
    inline void setQPushButton_UpdateMicroFocus_IsBase(bool value) const { qpushbutton_updatemicrofocus_isbase = value; }
    inline void setQPushButton_Create_IsBase(bool value) const { qpushbutton_create_isbase = value; }
    inline void setQPushButton_Destroy_IsBase(bool value) const { qpushbutton_destroy_isbase = value; }
    inline void setQPushButton_FocusNextChild_IsBase(bool value) const { qpushbutton_focusnextchild_isbase = value; }
    inline void setQPushButton_FocusPreviousChild_IsBase(bool value) const { qpushbutton_focuspreviouschild_isbase = value; }
    inline void setQPushButton_Sender_IsBase(bool value) const { qpushbutton_sender_isbase = value; }
    inline void setQPushButton_SenderSignalIndex_IsBase(bool value) const { qpushbutton_sendersignalindex_isbase = value; }
    inline void setQPushButton_Receivers_IsBase(bool value) const { qpushbutton_receivers_isbase = value; }
    inline void setQPushButton_IsSignalConnected_IsBase(bool value) const { qpushbutton_issignalconnected_isbase = value; }
    inline void setQPushButton_GetDecodedMetricF_IsBase(bool value) const { qpushbutton_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpushbutton_metaobject_isbase) {
            qpushbutton_metaobject_isbase = false;
            return QPushButton::metaObject();
        }
        auto metaobject_cb = qpushbutton_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QPushButton::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpushbutton_metacast_isbase) {
            qpushbutton_metacast_isbase = false;
            return QPushButton::qt_metacast(param1);
        }
        auto metacast_cb = qpushbutton_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QPushButton::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpushbutton_metacall_isbase) {
            qpushbutton_metacall_isbase = false;
            return QPushButton::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qpushbutton_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPushButton::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qpushbutton_sizehint_isbase) {
            qpushbutton_sizehint_isbase = false;
            return QPushButton::sizeHint();
        }
        auto sizehint_cb = qpushbutton_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QPushButton::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qpushbutton_minimumsizehint_isbase) {
            qpushbutton_minimumsizehint_isbase = false;
            return QPushButton::minimumSizeHint();
        }
        auto minimumsizehint_cb = qpushbutton_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QPushButton::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qpushbutton_event_isbase) {
            qpushbutton_event_isbase = false;
            return QPushButton::event(e);
        }
        auto event_cb = qpushbutton_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QPushButton::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qpushbutton_paintevent_isbase) {
            qpushbutton_paintevent_isbase = false;
            QPushButton::paintEvent(param1);
            return;
        }
        auto paintevent_cb = qpushbutton_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        QPushButton::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qpushbutton_keypressevent_isbase) {
            qpushbutton_keypressevent_isbase = false;
            QPushButton::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = qpushbutton_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        QPushButton::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qpushbutton_focusinevent_isbase) {
            qpushbutton_focusinevent_isbase = false;
            QPushButton::focusInEvent(param1);
            return;
        }
        auto focusinevent_cb = qpushbutton_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = param1;

            focusinevent_cb(this, cbval1);
            return;
        }
        QPushButton::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qpushbutton_focusoutevent_isbase) {
            qpushbutton_focusoutevent_isbase = false;
            QPushButton::focusOutEvent(param1);
            return;
        }
        auto focusoutevent_cb = qpushbutton_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = param1;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QPushButton::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qpushbutton_mousemoveevent_isbase) {
            qpushbutton_mousemoveevent_isbase = false;
            QPushButton::mouseMoveEvent(param1);
            return;
        }
        auto mousemoveevent_cb = qpushbutton_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QPushButton::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionButton* option) const override {
        if (qpushbutton_initstyleoption_isbase) {
            qpushbutton_initstyleoption_isbase = false;
            QPushButton::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qpushbutton_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionButton* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QPushButton::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (qpushbutton_hitbutton_isbase) {
            qpushbutton_hitbutton_isbase = false;
            return QPushButton::hitButton(pos);
        }
        auto hitbutton_cb = qpushbutton_hitbutton_callback;
        if (hitbutton_cb) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);

            bool callback_ret = hitbutton_cb(this, cbval1);
            return callback_ret;
        }
        return QPushButton::hitButton(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (qpushbutton_checkstateset_isbase) {
            qpushbutton_checkstateset_isbase = false;
            QPushButton::checkStateSet();
            return;
        }
        auto checkstateset_cb = qpushbutton_checkstateset_callback;
        if (checkstateset_cb) {
            checkstateset_cb();
            return;
        }
        QPushButton::checkStateSet();
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (qpushbutton_nextcheckstate_isbase) {
            qpushbutton_nextcheckstate_isbase = false;
            QPushButton::nextCheckState();
            return;
        }
        auto nextcheckstate_cb = qpushbutton_nextcheckstate_callback;
        if (nextcheckstate_cb) {
            nextcheckstate_cb();
            return;
        }
        QPushButton::nextCheckState();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qpushbutton_keyreleaseevent_isbase) {
            qpushbutton_keyreleaseevent_isbase = false;
            QPushButton::keyReleaseEvent(e);
            return;
        }
        auto keyreleaseevent_cb = qpushbutton_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = e;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QPushButton::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qpushbutton_mousepressevent_isbase) {
            qpushbutton_mousepressevent_isbase = false;
            QPushButton::mousePressEvent(e);
            return;
        }
        auto mousepressevent_cb = qpushbutton_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = e;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QPushButton::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qpushbutton_mousereleaseevent_isbase) {
            qpushbutton_mousereleaseevent_isbase = false;
            QPushButton::mouseReleaseEvent(e);
            return;
        }
        auto mousereleaseevent_cb = qpushbutton_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = e;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QPushButton::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qpushbutton_changeevent_isbase) {
            qpushbutton_changeevent_isbase = false;
            QPushButton::changeEvent(e);
            return;
        }
        auto changeevent_cb = qpushbutton_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = e;

            changeevent_cb(this, cbval1);
            return;
        }
        QPushButton::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qpushbutton_timerevent_isbase) {
            qpushbutton_timerevent_isbase = false;
            QPushButton::timerEvent(e);
            return;
        }
        auto timerevent_cb = qpushbutton_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = e;

            timerevent_cb(this, cbval1);
            return;
        }
        QPushButton::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qpushbutton_devtype_isbase) {
            qpushbutton_devtype_isbase = false;
            return QPushButton::devType();
        }
        auto devtype_cb = qpushbutton_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QPushButton::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qpushbutton_setvisible_isbase) {
            qpushbutton_setvisible_isbase = false;
            QPushButton::setVisible(visible);
            return;
        }
        auto setvisible_cb = qpushbutton_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QPushButton::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qpushbutton_heightforwidth_isbase) {
            qpushbutton_heightforwidth_isbase = false;
            return QPushButton::heightForWidth(param1);
        }
        auto heightforwidth_cb = qpushbutton_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPushButton::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qpushbutton_hasheightforwidth_isbase) {
            qpushbutton_hasheightforwidth_isbase = false;
            return QPushButton::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qpushbutton_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QPushButton::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qpushbutton_paintengine_isbase) {
            qpushbutton_paintengine_isbase = false;
            return QPushButton::paintEngine();
        }
        auto paintengine_cb = qpushbutton_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QPushButton::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qpushbutton_mousedoubleclickevent_isbase) {
            qpushbutton_mousedoubleclickevent_isbase = false;
            QPushButton::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qpushbutton_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QPushButton::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qpushbutton_wheelevent_isbase) {
            qpushbutton_wheelevent_isbase = false;
            QPushButton::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qpushbutton_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QPushButton::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qpushbutton_enterevent_isbase) {
            qpushbutton_enterevent_isbase = false;
            QPushButton::enterEvent(event);
            return;
        }
        auto enterevent_cb = qpushbutton_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QPushButton::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qpushbutton_leaveevent_isbase) {
            qpushbutton_leaveevent_isbase = false;
            QPushButton::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qpushbutton_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QPushButton::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qpushbutton_moveevent_isbase) {
            qpushbutton_moveevent_isbase = false;
            QPushButton::moveEvent(event);
            return;
        }
        auto moveevent_cb = qpushbutton_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QPushButton::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qpushbutton_resizeevent_isbase) {
            qpushbutton_resizeevent_isbase = false;
            QPushButton::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qpushbutton_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QPushButton::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qpushbutton_closeevent_isbase) {
            qpushbutton_closeevent_isbase = false;
            QPushButton::closeEvent(event);
            return;
        }
        auto closeevent_cb = qpushbutton_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QPushButton::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qpushbutton_contextmenuevent_isbase) {
            qpushbutton_contextmenuevent_isbase = false;
            QPushButton::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qpushbutton_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QPushButton::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qpushbutton_tabletevent_isbase) {
            qpushbutton_tabletevent_isbase = false;
            QPushButton::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qpushbutton_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QPushButton::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qpushbutton_actionevent_isbase) {
            qpushbutton_actionevent_isbase = false;
            QPushButton::actionEvent(event);
            return;
        }
        auto actionevent_cb = qpushbutton_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QPushButton::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qpushbutton_dragenterevent_isbase) {
            qpushbutton_dragenterevent_isbase = false;
            QPushButton::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qpushbutton_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QPushButton::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qpushbutton_dragmoveevent_isbase) {
            qpushbutton_dragmoveevent_isbase = false;
            QPushButton::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qpushbutton_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QPushButton::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qpushbutton_dragleaveevent_isbase) {
            qpushbutton_dragleaveevent_isbase = false;
            QPushButton::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qpushbutton_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QPushButton::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qpushbutton_dropevent_isbase) {
            qpushbutton_dropevent_isbase = false;
            QPushButton::dropEvent(event);
            return;
        }
        auto dropevent_cb = qpushbutton_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QPushButton::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qpushbutton_showevent_isbase) {
            qpushbutton_showevent_isbase = false;
            QPushButton::showEvent(event);
            return;
        }
        auto showevent_cb = qpushbutton_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QPushButton::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qpushbutton_hideevent_isbase) {
            qpushbutton_hideevent_isbase = false;
            QPushButton::hideEvent(event);
            return;
        }
        auto hideevent_cb = qpushbutton_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QPushButton::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qpushbutton_nativeevent_isbase) {
            qpushbutton_nativeevent_isbase = false;
            return QPushButton::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qpushbutton_nativeevent_callback;
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
        return QPushButton::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qpushbutton_metric_isbase) {
            qpushbutton_metric_isbase = false;
            return QPushButton::metric(param1);
        }
        auto metric_cb = qpushbutton_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPushButton::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qpushbutton_initpainter_isbase) {
            qpushbutton_initpainter_isbase = false;
            QPushButton::initPainter(painter);
            return;
        }
        auto initpainter_cb = qpushbutton_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QPushButton::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qpushbutton_redirected_isbase) {
            qpushbutton_redirected_isbase = false;
            return QPushButton::redirected(offset);
        }
        auto redirected_cb = qpushbutton_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QPushButton::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qpushbutton_sharedpainter_isbase) {
            qpushbutton_sharedpainter_isbase = false;
            return QPushButton::sharedPainter();
        }
        auto sharedpainter_cb = qpushbutton_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QPushButton::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qpushbutton_inputmethodevent_isbase) {
            qpushbutton_inputmethodevent_isbase = false;
            QPushButton::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qpushbutton_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QPushButton::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qpushbutton_inputmethodquery_isbase) {
            qpushbutton_inputmethodquery_isbase = false;
            return QPushButton::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qpushbutton_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QPushButton::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qpushbutton_focusnextprevchild_isbase) {
            qpushbutton_focusnextprevchild_isbase = false;
            return QPushButton::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qpushbutton_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QPushButton::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpushbutton_eventfilter_isbase) {
            qpushbutton_eventfilter_isbase = false;
            return QPushButton::eventFilter(watched, event);
        }
        auto eventfilter_cb = qpushbutton_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPushButton::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpushbutton_childevent_isbase) {
            qpushbutton_childevent_isbase = false;
            QPushButton::childEvent(event);
            return;
        }
        auto childevent_cb = qpushbutton_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QPushButton::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpushbutton_customevent_isbase) {
            qpushbutton_customevent_isbase = false;
            QPushButton::customEvent(event);
            return;
        }
        auto customevent_cb = qpushbutton_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QPushButton::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpushbutton_connectnotify_isbase) {
            qpushbutton_connectnotify_isbase = false;
            QPushButton::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qpushbutton_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QPushButton::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpushbutton_disconnectnotify_isbase) {
            qpushbutton_disconnectnotify_isbase = false;
            QPushButton::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qpushbutton_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QPushButton::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qpushbutton_updatemicrofocus_isbase) {
            qpushbutton_updatemicrofocus_isbase = false;
            QPushButton::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qpushbutton_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QPushButton::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qpushbutton_create_isbase) {
            qpushbutton_create_isbase = false;
            QPushButton::create();
            return;
        }
        auto create_cb = qpushbutton_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QPushButton::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qpushbutton_destroy_isbase) {
            qpushbutton_destroy_isbase = false;
            QPushButton::destroy();
            return;
        }
        auto destroy_cb = qpushbutton_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QPushButton::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qpushbutton_focusnextchild_isbase) {
            qpushbutton_focusnextchild_isbase = false;
            return QPushButton::focusNextChild();
        }
        auto focusnextchild_cb = qpushbutton_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QPushButton::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qpushbutton_focuspreviouschild_isbase) {
            qpushbutton_focuspreviouschild_isbase = false;
            return QPushButton::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qpushbutton_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QPushButton::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpushbutton_sender_isbase) {
            qpushbutton_sender_isbase = false;
            return QPushButton::sender();
        }
        auto sender_cb = qpushbutton_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QPushButton::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpushbutton_sendersignalindex_isbase) {
            qpushbutton_sendersignalindex_isbase = false;
            return QPushButton::senderSignalIndex();
        }
        auto sendersignalindex_cb = qpushbutton_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QPushButton::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpushbutton_receivers_isbase) {
            qpushbutton_receivers_isbase = false;
            return QPushButton::receivers(signal);
        }
        auto receivers_cb = qpushbutton_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPushButton::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpushbutton_issignalconnected_isbase) {
            qpushbutton_issignalconnected_isbase = false;
            return QPushButton::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qpushbutton_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QPushButton::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qpushbutton_getdecodedmetricf_isbase) {
            qpushbutton_getdecodedmetricf_isbase = false;
            return QPushButton::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qpushbutton_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QPushButton::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool QPushButton_Event(QPushButton* self, QEvent* e);
    friend bool QPushButton_SuperEvent(QPushButton* self, QEvent* e);
    friend void QPushButton_PaintEvent(QPushButton* self, QPaintEvent* param1);
    friend void QPushButton_SuperPaintEvent(QPushButton* self, QPaintEvent* param1);
    friend void QPushButton_KeyPressEvent(QPushButton* self, QKeyEvent* param1);
    friend void QPushButton_SuperKeyPressEvent(QPushButton* self, QKeyEvent* param1);
    friend void QPushButton_FocusInEvent(QPushButton* self, QFocusEvent* param1);
    friend void QPushButton_SuperFocusInEvent(QPushButton* self, QFocusEvent* param1);
    friend void QPushButton_FocusOutEvent(QPushButton* self, QFocusEvent* param1);
    friend void QPushButton_SuperFocusOutEvent(QPushButton* self, QFocusEvent* param1);
    friend void QPushButton_MouseMoveEvent(QPushButton* self, QMouseEvent* param1);
    friend void QPushButton_SuperMouseMoveEvent(QPushButton* self, QMouseEvent* param1);
    friend void QPushButton_InitStyleOption(const QPushButton* self, QStyleOptionButton* option);
    friend void QPushButton_SuperInitStyleOption(const QPushButton* self, QStyleOptionButton* option);
    friend bool QPushButton_HitButton(const QPushButton* self, const QPoint* pos);
    friend bool QPushButton_SuperHitButton(const QPushButton* self, const QPoint* pos);
    friend void QPushButton_CheckStateSet(QPushButton* self);
    friend void QPushButton_SuperCheckStateSet(QPushButton* self);
    friend void QPushButton_NextCheckState(QPushButton* self);
    friend void QPushButton_SuperNextCheckState(QPushButton* self);
    friend void QPushButton_KeyReleaseEvent(QPushButton* self, QKeyEvent* e);
    friend void QPushButton_SuperKeyReleaseEvent(QPushButton* self, QKeyEvent* e);
    friend void QPushButton_MousePressEvent(QPushButton* self, QMouseEvent* e);
    friend void QPushButton_SuperMousePressEvent(QPushButton* self, QMouseEvent* e);
    friend void QPushButton_MouseReleaseEvent(QPushButton* self, QMouseEvent* e);
    friend void QPushButton_SuperMouseReleaseEvent(QPushButton* self, QMouseEvent* e);
    friend void QPushButton_ChangeEvent(QPushButton* self, QEvent* e);
    friend void QPushButton_SuperChangeEvent(QPushButton* self, QEvent* e);
    friend void QPushButton_TimerEvent(QPushButton* self, QTimerEvent* e);
    friend void QPushButton_SuperTimerEvent(QPushButton* self, QTimerEvent* e);
    friend void QPushButton_MouseDoubleClickEvent(QPushButton* self, QMouseEvent* event);
    friend void QPushButton_SuperMouseDoubleClickEvent(QPushButton* self, QMouseEvent* event);
    friend void QPushButton_WheelEvent(QPushButton* self, QWheelEvent* event);
    friend void QPushButton_SuperWheelEvent(QPushButton* self, QWheelEvent* event);
    friend void QPushButton_EnterEvent(QPushButton* self, QEnterEvent* event);
    friend void QPushButton_SuperEnterEvent(QPushButton* self, QEnterEvent* event);
    friend void QPushButton_LeaveEvent(QPushButton* self, QEvent* event);
    friend void QPushButton_SuperLeaveEvent(QPushButton* self, QEvent* event);
    friend void QPushButton_MoveEvent(QPushButton* self, QMoveEvent* event);
    friend void QPushButton_SuperMoveEvent(QPushButton* self, QMoveEvent* event);
    friend void QPushButton_ResizeEvent(QPushButton* self, QResizeEvent* event);
    friend void QPushButton_SuperResizeEvent(QPushButton* self, QResizeEvent* event);
    friend void QPushButton_CloseEvent(QPushButton* self, QCloseEvent* event);
    friend void QPushButton_SuperCloseEvent(QPushButton* self, QCloseEvent* event);
    friend void QPushButton_ContextMenuEvent(QPushButton* self, QContextMenuEvent* event);
    friend void QPushButton_SuperContextMenuEvent(QPushButton* self, QContextMenuEvent* event);
    friend void QPushButton_TabletEvent(QPushButton* self, QTabletEvent* event);
    friend void QPushButton_SuperTabletEvent(QPushButton* self, QTabletEvent* event);
    friend void QPushButton_ActionEvent(QPushButton* self, QActionEvent* event);
    friend void QPushButton_SuperActionEvent(QPushButton* self, QActionEvent* event);
    friend void QPushButton_DragEnterEvent(QPushButton* self, QDragEnterEvent* event);
    friend void QPushButton_SuperDragEnterEvent(QPushButton* self, QDragEnterEvent* event);
    friend void QPushButton_DragMoveEvent(QPushButton* self, QDragMoveEvent* event);
    friend void QPushButton_SuperDragMoveEvent(QPushButton* self, QDragMoveEvent* event);
    friend void QPushButton_DragLeaveEvent(QPushButton* self, QDragLeaveEvent* event);
    friend void QPushButton_SuperDragLeaveEvent(QPushButton* self, QDragLeaveEvent* event);
    friend void QPushButton_DropEvent(QPushButton* self, QDropEvent* event);
    friend void QPushButton_SuperDropEvent(QPushButton* self, QDropEvent* event);
    friend void QPushButton_ShowEvent(QPushButton* self, QShowEvent* event);
    friend void QPushButton_SuperShowEvent(QPushButton* self, QShowEvent* event);
    friend void QPushButton_HideEvent(QPushButton* self, QHideEvent* event);
    friend void QPushButton_SuperHideEvent(QPushButton* self, QHideEvent* event);
    friend bool QPushButton_NativeEvent(QPushButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QPushButton_SuperNativeEvent(QPushButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QPushButton_Metric(const QPushButton* self, int param1);
    friend int QPushButton_SuperMetric(const QPushButton* self, int param1);
    friend void QPushButton_InitPainter(const QPushButton* self, QPainter* painter);
    friend void QPushButton_SuperInitPainter(const QPushButton* self, QPainter* painter);
    friend QPaintDevice* QPushButton_Redirected(const QPushButton* self, QPoint* offset);
    friend QPaintDevice* QPushButton_SuperRedirected(const QPushButton* self, QPoint* offset);
    friend QPainter* QPushButton_SharedPainter(const QPushButton* self);
    friend QPainter* QPushButton_SuperSharedPainter(const QPushButton* self);
    friend void QPushButton_InputMethodEvent(QPushButton* self, QInputMethodEvent* param1);
    friend void QPushButton_SuperInputMethodEvent(QPushButton* self, QInputMethodEvent* param1);
    friend bool QPushButton_FocusNextPrevChild(QPushButton* self, bool next);
    friend bool QPushButton_SuperFocusNextPrevChild(QPushButton* self, bool next);
    friend void QPushButton_ChildEvent(QPushButton* self, QChildEvent* event);
    friend void QPushButton_SuperChildEvent(QPushButton* self, QChildEvent* event);
    friend void QPushButton_CustomEvent(QPushButton* self, QEvent* event);
    friend void QPushButton_SuperCustomEvent(QPushButton* self, QEvent* event);
    friend void QPushButton_ConnectNotify(QPushButton* self, const QMetaMethod* signal);
    friend void QPushButton_SuperConnectNotify(QPushButton* self, const QMetaMethod* signal);
    friend void QPushButton_DisconnectNotify(QPushButton* self, const QMetaMethod* signal);
    friend void QPushButton_SuperDisconnectNotify(QPushButton* self, const QMetaMethod* signal);
    friend void QPushButton_UpdateMicroFocus(QPushButton* self);
    friend void QPushButton_SuperUpdateMicroFocus(QPushButton* self);
    friend void QPushButton_Create(QPushButton* self);
    friend void QPushButton_SuperCreate(QPushButton* self);
    friend void QPushButton_Destroy(QPushButton* self);
    friend void QPushButton_SuperDestroy(QPushButton* self);
    friend bool QPushButton_FocusNextChild(QPushButton* self);
    friend bool QPushButton_SuperFocusNextChild(QPushButton* self);
    friend bool QPushButton_FocusPreviousChild(QPushButton* self);
    friend bool QPushButton_SuperFocusPreviousChild(QPushButton* self);
    friend QObject* QPushButton_Sender(const QPushButton* self);
    friend QObject* QPushButton_SuperSender(const QPushButton* self);
    friend int QPushButton_SenderSignalIndex(const QPushButton* self);
    friend int QPushButton_SuperSenderSignalIndex(const QPushButton* self);
    friend int QPushButton_Receivers(const QPushButton* self, const char* signal);
    friend int QPushButton_SuperReceivers(const QPushButton* self, const char* signal);
    friend bool QPushButton_IsSignalConnected(const QPushButton* self, const QMetaMethod* signal);
    friend bool QPushButton_SuperIsSignalConnected(const QPushButton* self, const QMetaMethod* signal);
    friend double QPushButton_GetDecodedMetricF(const QPushButton* self, int metricA, int metricB);
    friend double QPushButton_SuperGetDecodedMetricF(const QPushButton* self, int metricA, int metricB);
};

#endif
