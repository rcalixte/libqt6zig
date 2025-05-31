#pragma once
#ifndef SRCC_LIBVIRTUALQPUSHBUTTON_H
#define SRCC_LIBVIRTUALQPUSHBUTTON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPushButton so that we can call protected methods
class VirtualQPushButton final : public QPushButton {

  public:
    // Virtual class boolean flag
    bool isVirtualQPushButton = true;

    // Virtual class public types (including callbacks)
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

  protected:
    // Instance callback storage
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

    // Instance base flags
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

  public:
    VirtualQPushButton(QWidget* parent) : QPushButton(parent){};
    VirtualQPushButton() : QPushButton(){};
    VirtualQPushButton(const QString& text) : QPushButton(text){};
    VirtualQPushButton(const QIcon& icon, const QString& text) : QPushButton(icon, text){};
    VirtualQPushButton(const QString& text, QWidget* parent) : QPushButton(text, parent){};
    VirtualQPushButton(const QIcon& icon, const QString& text, QWidget* parent) : QPushButton(icon, text, parent){};

    ~VirtualQPushButton() {
        qpushbutton_metacall_callback = nullptr;
        qpushbutton_sizehint_callback = nullptr;
        qpushbutton_minimumsizehint_callback = nullptr;
        qpushbutton_event_callback = nullptr;
        qpushbutton_paintevent_callback = nullptr;
        qpushbutton_keypressevent_callback = nullptr;
        qpushbutton_focusinevent_callback = nullptr;
        qpushbutton_focusoutevent_callback = nullptr;
        qpushbutton_mousemoveevent_callback = nullptr;
        qpushbutton_initstyleoption_callback = nullptr;
        qpushbutton_hitbutton_callback = nullptr;
        qpushbutton_checkstateset_callback = nullptr;
        qpushbutton_nextcheckstate_callback = nullptr;
        qpushbutton_keyreleaseevent_callback = nullptr;
        qpushbutton_mousepressevent_callback = nullptr;
        qpushbutton_mousereleaseevent_callback = nullptr;
        qpushbutton_changeevent_callback = nullptr;
        qpushbutton_timerevent_callback = nullptr;
        qpushbutton_devtype_callback = nullptr;
        qpushbutton_setvisible_callback = nullptr;
        qpushbutton_heightforwidth_callback = nullptr;
        qpushbutton_hasheightforwidth_callback = nullptr;
        qpushbutton_paintengine_callback = nullptr;
        qpushbutton_mousedoubleclickevent_callback = nullptr;
        qpushbutton_wheelevent_callback = nullptr;
        qpushbutton_enterevent_callback = nullptr;
        qpushbutton_leaveevent_callback = nullptr;
        qpushbutton_moveevent_callback = nullptr;
        qpushbutton_resizeevent_callback = nullptr;
        qpushbutton_closeevent_callback = nullptr;
        qpushbutton_contextmenuevent_callback = nullptr;
        qpushbutton_tabletevent_callback = nullptr;
        qpushbutton_actionevent_callback = nullptr;
        qpushbutton_dragenterevent_callback = nullptr;
        qpushbutton_dragmoveevent_callback = nullptr;
        qpushbutton_dragleaveevent_callback = nullptr;
        qpushbutton_dropevent_callback = nullptr;
        qpushbutton_showevent_callback = nullptr;
        qpushbutton_hideevent_callback = nullptr;
        qpushbutton_nativeevent_callback = nullptr;
        qpushbutton_metric_callback = nullptr;
        qpushbutton_initpainter_callback = nullptr;
        qpushbutton_redirected_callback = nullptr;
        qpushbutton_sharedpainter_callback = nullptr;
        qpushbutton_inputmethodevent_callback = nullptr;
        qpushbutton_inputmethodquery_callback = nullptr;
        qpushbutton_focusnextprevchild_callback = nullptr;
        qpushbutton_eventfilter_callback = nullptr;
        qpushbutton_childevent_callback = nullptr;
        qpushbutton_customevent_callback = nullptr;
        qpushbutton_connectnotify_callback = nullptr;
        qpushbutton_disconnectnotify_callback = nullptr;
        qpushbutton_updatemicrofocus_callback = nullptr;
        qpushbutton_create_callback = nullptr;
        qpushbutton_destroy_callback = nullptr;
        qpushbutton_focusnextchild_callback = nullptr;
        qpushbutton_focuspreviouschild_callback = nullptr;
        qpushbutton_sender_callback = nullptr;
        qpushbutton_sendersignalindex_callback = nullptr;
        qpushbutton_receivers_callback = nullptr;
        qpushbutton_issignalconnected_callback = nullptr;
    }

    // Callback setters
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

    // Base flag setters
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

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpushbutton_metacall_isbase) {
            qpushbutton_metacall_isbase = false;
            return QPushButton::qt_metacall(param1, param2, param3);
        } else if (qpushbutton_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qpushbutton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPushButton::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qpushbutton_sizehint_isbase) {
            qpushbutton_sizehint_isbase = false;
            return QPushButton::sizeHint();
        } else if (qpushbutton_sizehint_callback != nullptr) {
            QSize* callback_ret = qpushbutton_sizehint_callback();
            return *callback_ret;
        } else {
            return QPushButton::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qpushbutton_minimumsizehint_isbase) {
            qpushbutton_minimumsizehint_isbase = false;
            return QPushButton::minimumSizeHint();
        } else if (qpushbutton_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qpushbutton_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QPushButton::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qpushbutton_event_isbase) {
            qpushbutton_event_isbase = false;
            return QPushButton::event(e);
        } else if (qpushbutton_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qpushbutton_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPushButton::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qpushbutton_paintevent_isbase) {
            qpushbutton_paintevent_isbase = false;
            QPushButton::paintEvent(param1);
        } else if (qpushbutton_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            qpushbutton_paintevent_callback(this, cbval1);
        } else {
            QPushButton::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qpushbutton_keypressevent_isbase) {
            qpushbutton_keypressevent_isbase = false;
            QPushButton::keyPressEvent(param1);
        } else if (qpushbutton_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qpushbutton_keypressevent_callback(this, cbval1);
        } else {
            QPushButton::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qpushbutton_focusinevent_isbase) {
            qpushbutton_focusinevent_isbase = false;
            QPushButton::focusInEvent(param1);
        } else if (qpushbutton_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            qpushbutton_focusinevent_callback(this, cbval1);
        } else {
            QPushButton::focusInEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qpushbutton_focusoutevent_isbase) {
            qpushbutton_focusoutevent_isbase = false;
            QPushButton::focusOutEvent(param1);
        } else if (qpushbutton_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            qpushbutton_focusoutevent_callback(this, cbval1);
        } else {
            QPushButton::focusOutEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qpushbutton_mousemoveevent_isbase) {
            qpushbutton_mousemoveevent_isbase = false;
            QPushButton::mouseMoveEvent(param1);
        } else if (qpushbutton_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qpushbutton_mousemoveevent_callback(this, cbval1);
        } else {
            QPushButton::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionButton* option) const override {
        if (qpushbutton_initstyleoption_isbase) {
            qpushbutton_initstyleoption_isbase = false;
            QPushButton::initStyleOption(option);
        } else if (qpushbutton_initstyleoption_callback != nullptr) {
            QStyleOptionButton* cbval1 = option;

            qpushbutton_initstyleoption_callback(this, cbval1);
        } else {
            QPushButton::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (qpushbutton_hitbutton_isbase) {
            qpushbutton_hitbutton_isbase = false;
            return QPushButton::hitButton(pos);
        } else if (qpushbutton_hitbutton_callback != nullptr) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);

            bool callback_ret = qpushbutton_hitbutton_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPushButton::hitButton(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (qpushbutton_checkstateset_isbase) {
            qpushbutton_checkstateset_isbase = false;
            QPushButton::checkStateSet();
        } else if (qpushbutton_checkstateset_callback != nullptr) {
            qpushbutton_checkstateset_callback();
        } else {
            QPushButton::checkStateSet();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (qpushbutton_nextcheckstate_isbase) {
            qpushbutton_nextcheckstate_isbase = false;
            QPushButton::nextCheckState();
        } else if (qpushbutton_nextcheckstate_callback != nullptr) {
            qpushbutton_nextcheckstate_callback();
        } else {
            QPushButton::nextCheckState();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qpushbutton_keyreleaseevent_isbase) {
            qpushbutton_keyreleaseevent_isbase = false;
            QPushButton::keyReleaseEvent(e);
        } else if (qpushbutton_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            qpushbutton_keyreleaseevent_callback(this, cbval1);
        } else {
            QPushButton::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qpushbutton_mousepressevent_isbase) {
            qpushbutton_mousepressevent_isbase = false;
            QPushButton::mousePressEvent(e);
        } else if (qpushbutton_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            qpushbutton_mousepressevent_callback(this, cbval1);
        } else {
            QPushButton::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qpushbutton_mousereleaseevent_isbase) {
            qpushbutton_mousereleaseevent_isbase = false;
            QPushButton::mouseReleaseEvent(e);
        } else if (qpushbutton_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            qpushbutton_mousereleaseevent_callback(this, cbval1);
        } else {
            QPushButton::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qpushbutton_changeevent_isbase) {
            qpushbutton_changeevent_isbase = false;
            QPushButton::changeEvent(e);
        } else if (qpushbutton_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            qpushbutton_changeevent_callback(this, cbval1);
        } else {
            QPushButton::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qpushbutton_timerevent_isbase) {
            qpushbutton_timerevent_isbase = false;
            QPushButton::timerEvent(e);
        } else if (qpushbutton_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = e;

            qpushbutton_timerevent_callback(this, cbval1);
        } else {
            QPushButton::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qpushbutton_devtype_isbase) {
            qpushbutton_devtype_isbase = false;
            return QPushButton::devType();
        } else if (qpushbutton_devtype_callback != nullptr) {
            int callback_ret = qpushbutton_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPushButton::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qpushbutton_setvisible_isbase) {
            qpushbutton_setvisible_isbase = false;
            QPushButton::setVisible(visible);
        } else if (qpushbutton_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qpushbutton_setvisible_callback(this, cbval1);
        } else {
            QPushButton::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qpushbutton_heightforwidth_isbase) {
            qpushbutton_heightforwidth_isbase = false;
            return QPushButton::heightForWidth(param1);
        } else if (qpushbutton_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qpushbutton_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPushButton::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qpushbutton_hasheightforwidth_isbase) {
            qpushbutton_hasheightforwidth_isbase = false;
            return QPushButton::hasHeightForWidth();
        } else if (qpushbutton_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qpushbutton_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QPushButton::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qpushbutton_paintengine_isbase) {
            qpushbutton_paintengine_isbase = false;
            return QPushButton::paintEngine();
        } else if (qpushbutton_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qpushbutton_paintengine_callback();
            return callback_ret;
        } else {
            return QPushButton::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qpushbutton_mousedoubleclickevent_isbase) {
            qpushbutton_mousedoubleclickevent_isbase = false;
            QPushButton::mouseDoubleClickEvent(event);
        } else if (qpushbutton_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qpushbutton_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QPushButton::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qpushbutton_wheelevent_isbase) {
            qpushbutton_wheelevent_isbase = false;
            QPushButton::wheelEvent(event);
        } else if (qpushbutton_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qpushbutton_wheelevent_callback(this, cbval1);
        } else {
            QPushButton::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qpushbutton_enterevent_isbase) {
            qpushbutton_enterevent_isbase = false;
            QPushButton::enterEvent(event);
        } else if (qpushbutton_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qpushbutton_enterevent_callback(this, cbval1);
        } else {
            QPushButton::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qpushbutton_leaveevent_isbase) {
            qpushbutton_leaveevent_isbase = false;
            QPushButton::leaveEvent(event);
        } else if (qpushbutton_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qpushbutton_leaveevent_callback(this, cbval1);
        } else {
            QPushButton::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qpushbutton_moveevent_isbase) {
            qpushbutton_moveevent_isbase = false;
            QPushButton::moveEvent(event);
        } else if (qpushbutton_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qpushbutton_moveevent_callback(this, cbval1);
        } else {
            QPushButton::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qpushbutton_resizeevent_isbase) {
            qpushbutton_resizeevent_isbase = false;
            QPushButton::resizeEvent(event);
        } else if (qpushbutton_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qpushbutton_resizeevent_callback(this, cbval1);
        } else {
            QPushButton::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qpushbutton_closeevent_isbase) {
            qpushbutton_closeevent_isbase = false;
            QPushButton::closeEvent(event);
        } else if (qpushbutton_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qpushbutton_closeevent_callback(this, cbval1);
        } else {
            QPushButton::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qpushbutton_contextmenuevent_isbase) {
            qpushbutton_contextmenuevent_isbase = false;
            QPushButton::contextMenuEvent(event);
        } else if (qpushbutton_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qpushbutton_contextmenuevent_callback(this, cbval1);
        } else {
            QPushButton::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qpushbutton_tabletevent_isbase) {
            qpushbutton_tabletevent_isbase = false;
            QPushButton::tabletEvent(event);
        } else if (qpushbutton_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qpushbutton_tabletevent_callback(this, cbval1);
        } else {
            QPushButton::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qpushbutton_actionevent_isbase) {
            qpushbutton_actionevent_isbase = false;
            QPushButton::actionEvent(event);
        } else if (qpushbutton_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qpushbutton_actionevent_callback(this, cbval1);
        } else {
            QPushButton::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qpushbutton_dragenterevent_isbase) {
            qpushbutton_dragenterevent_isbase = false;
            QPushButton::dragEnterEvent(event);
        } else if (qpushbutton_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qpushbutton_dragenterevent_callback(this, cbval1);
        } else {
            QPushButton::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qpushbutton_dragmoveevent_isbase) {
            qpushbutton_dragmoveevent_isbase = false;
            QPushButton::dragMoveEvent(event);
        } else if (qpushbutton_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qpushbutton_dragmoveevent_callback(this, cbval1);
        } else {
            QPushButton::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qpushbutton_dragleaveevent_isbase) {
            qpushbutton_dragleaveevent_isbase = false;
            QPushButton::dragLeaveEvent(event);
        } else if (qpushbutton_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qpushbutton_dragleaveevent_callback(this, cbval1);
        } else {
            QPushButton::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qpushbutton_dropevent_isbase) {
            qpushbutton_dropevent_isbase = false;
            QPushButton::dropEvent(event);
        } else if (qpushbutton_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qpushbutton_dropevent_callback(this, cbval1);
        } else {
            QPushButton::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qpushbutton_showevent_isbase) {
            qpushbutton_showevent_isbase = false;
            QPushButton::showEvent(event);
        } else if (qpushbutton_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qpushbutton_showevent_callback(this, cbval1);
        } else {
            QPushButton::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qpushbutton_hideevent_isbase) {
            qpushbutton_hideevent_isbase = false;
            QPushButton::hideEvent(event);
        } else if (qpushbutton_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qpushbutton_hideevent_callback(this, cbval1);
        } else {
            QPushButton::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qpushbutton_nativeevent_isbase) {
            qpushbutton_nativeevent_isbase = false;
            return QPushButton::nativeEvent(eventType, message, result);
        } else if (qpushbutton_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc((eventType_str.len + 1) * sizeof(char)));
            memcpy(eventType_str.data, eventType_qb.data(), eventType_str.len);
            eventType_str.data[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qpushbutton_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QPushButton::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qpushbutton_metric_isbase) {
            qpushbutton_metric_isbase = false;
            return QPushButton::metric(param1);
        } else if (qpushbutton_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qpushbutton_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPushButton::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qpushbutton_initpainter_isbase) {
            qpushbutton_initpainter_isbase = false;
            QPushButton::initPainter(painter);
        } else if (qpushbutton_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qpushbutton_initpainter_callback(this, cbval1);
        } else {
            QPushButton::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qpushbutton_redirected_isbase) {
            qpushbutton_redirected_isbase = false;
            return QPushButton::redirected(offset);
        } else if (qpushbutton_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qpushbutton_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPushButton::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qpushbutton_sharedpainter_isbase) {
            qpushbutton_sharedpainter_isbase = false;
            return QPushButton::sharedPainter();
        } else if (qpushbutton_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qpushbutton_sharedpainter_callback();
            return callback_ret;
        } else {
            return QPushButton::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qpushbutton_inputmethodevent_isbase) {
            qpushbutton_inputmethodevent_isbase = false;
            QPushButton::inputMethodEvent(param1);
        } else if (qpushbutton_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qpushbutton_inputmethodevent_callback(this, cbval1);
        } else {
            QPushButton::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qpushbutton_inputmethodquery_isbase) {
            qpushbutton_inputmethodquery_isbase = false;
            return QPushButton::inputMethodQuery(param1);
        } else if (qpushbutton_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qpushbutton_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QPushButton::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qpushbutton_focusnextprevchild_isbase) {
            qpushbutton_focusnextprevchild_isbase = false;
            return QPushButton::focusNextPrevChild(next);
        } else if (qpushbutton_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qpushbutton_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPushButton::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpushbutton_eventfilter_isbase) {
            qpushbutton_eventfilter_isbase = false;
            return QPushButton::eventFilter(watched, event);
        } else if (qpushbutton_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qpushbutton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPushButton::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpushbutton_childevent_isbase) {
            qpushbutton_childevent_isbase = false;
            QPushButton::childEvent(event);
        } else if (qpushbutton_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qpushbutton_childevent_callback(this, cbval1);
        } else {
            QPushButton::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpushbutton_customevent_isbase) {
            qpushbutton_customevent_isbase = false;
            QPushButton::customEvent(event);
        } else if (qpushbutton_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qpushbutton_customevent_callback(this, cbval1);
        } else {
            QPushButton::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpushbutton_connectnotify_isbase) {
            qpushbutton_connectnotify_isbase = false;
            QPushButton::connectNotify(signal);
        } else if (qpushbutton_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpushbutton_connectnotify_callback(this, cbval1);
        } else {
            QPushButton::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpushbutton_disconnectnotify_isbase) {
            qpushbutton_disconnectnotify_isbase = false;
            QPushButton::disconnectNotify(signal);
        } else if (qpushbutton_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qpushbutton_disconnectnotify_callback(this, cbval1);
        } else {
            QPushButton::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qpushbutton_updatemicrofocus_isbase) {
            qpushbutton_updatemicrofocus_isbase = false;
            QPushButton::updateMicroFocus();
        } else if (qpushbutton_updatemicrofocus_callback != nullptr) {
            qpushbutton_updatemicrofocus_callback();
        } else {
            QPushButton::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qpushbutton_create_isbase) {
            qpushbutton_create_isbase = false;
            QPushButton::create();
        } else if (qpushbutton_create_callback != nullptr) {
            qpushbutton_create_callback();
        } else {
            QPushButton::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qpushbutton_destroy_isbase) {
            qpushbutton_destroy_isbase = false;
            QPushButton::destroy();
        } else if (qpushbutton_destroy_callback != nullptr) {
            qpushbutton_destroy_callback();
        } else {
            QPushButton::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qpushbutton_focusnextchild_isbase) {
            qpushbutton_focusnextchild_isbase = false;
            return QPushButton::focusNextChild();
        } else if (qpushbutton_focusnextchild_callback != nullptr) {
            bool callback_ret = qpushbutton_focusnextchild_callback();
            return callback_ret;
        } else {
            return QPushButton::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qpushbutton_focuspreviouschild_isbase) {
            qpushbutton_focuspreviouschild_isbase = false;
            return QPushButton::focusPreviousChild();
        } else if (qpushbutton_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qpushbutton_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QPushButton::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpushbutton_sender_isbase) {
            qpushbutton_sender_isbase = false;
            return QPushButton::sender();
        } else if (qpushbutton_sender_callback != nullptr) {
            QObject* callback_ret = qpushbutton_sender_callback();
            return callback_ret;
        } else {
            return QPushButton::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpushbutton_sendersignalindex_isbase) {
            qpushbutton_sendersignalindex_isbase = false;
            return QPushButton::senderSignalIndex();
        } else if (qpushbutton_sendersignalindex_callback != nullptr) {
            int callback_ret = qpushbutton_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPushButton::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpushbutton_receivers_isbase) {
            qpushbutton_receivers_isbase = false;
            return QPushButton::receivers(signal);
        } else if (qpushbutton_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qpushbutton_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPushButton::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpushbutton_issignalconnected_isbase) {
            qpushbutton_issignalconnected_isbase = false;
            return QPushButton::isSignalConnected(signal);
        } else if (qpushbutton_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qpushbutton_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPushButton::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QPushButton_Event(QPushButton* self, QEvent* e);
    friend bool QPushButton_QBaseEvent(QPushButton* self, QEvent* e);
    friend void QPushButton_PaintEvent(QPushButton* self, QPaintEvent* param1);
    friend void QPushButton_QBasePaintEvent(QPushButton* self, QPaintEvent* param1);
    friend void QPushButton_KeyPressEvent(QPushButton* self, QKeyEvent* param1);
    friend void QPushButton_QBaseKeyPressEvent(QPushButton* self, QKeyEvent* param1);
    friend void QPushButton_FocusInEvent(QPushButton* self, QFocusEvent* param1);
    friend void QPushButton_QBaseFocusInEvent(QPushButton* self, QFocusEvent* param1);
    friend void QPushButton_FocusOutEvent(QPushButton* self, QFocusEvent* param1);
    friend void QPushButton_QBaseFocusOutEvent(QPushButton* self, QFocusEvent* param1);
    friend void QPushButton_MouseMoveEvent(QPushButton* self, QMouseEvent* param1);
    friend void QPushButton_QBaseMouseMoveEvent(QPushButton* self, QMouseEvent* param1);
    friend void QPushButton_InitStyleOption(const QPushButton* self, QStyleOptionButton* option);
    friend void QPushButton_QBaseInitStyleOption(const QPushButton* self, QStyleOptionButton* option);
    friend bool QPushButton_HitButton(const QPushButton* self, const QPoint* pos);
    friend bool QPushButton_QBaseHitButton(const QPushButton* self, const QPoint* pos);
    friend void QPushButton_CheckStateSet(QPushButton* self);
    friend void QPushButton_QBaseCheckStateSet(QPushButton* self);
    friend void QPushButton_NextCheckState(QPushButton* self);
    friend void QPushButton_QBaseNextCheckState(QPushButton* self);
    friend void QPushButton_KeyReleaseEvent(QPushButton* self, QKeyEvent* e);
    friend void QPushButton_QBaseKeyReleaseEvent(QPushButton* self, QKeyEvent* e);
    friend void QPushButton_MousePressEvent(QPushButton* self, QMouseEvent* e);
    friend void QPushButton_QBaseMousePressEvent(QPushButton* self, QMouseEvent* e);
    friend void QPushButton_MouseReleaseEvent(QPushButton* self, QMouseEvent* e);
    friend void QPushButton_QBaseMouseReleaseEvent(QPushButton* self, QMouseEvent* e);
    friend void QPushButton_ChangeEvent(QPushButton* self, QEvent* e);
    friend void QPushButton_QBaseChangeEvent(QPushButton* self, QEvent* e);
    friend void QPushButton_TimerEvent(QPushButton* self, QTimerEvent* e);
    friend void QPushButton_QBaseTimerEvent(QPushButton* self, QTimerEvent* e);
    friend void QPushButton_MouseDoubleClickEvent(QPushButton* self, QMouseEvent* event);
    friend void QPushButton_QBaseMouseDoubleClickEvent(QPushButton* self, QMouseEvent* event);
    friend void QPushButton_WheelEvent(QPushButton* self, QWheelEvent* event);
    friend void QPushButton_QBaseWheelEvent(QPushButton* self, QWheelEvent* event);
    friend void QPushButton_EnterEvent(QPushButton* self, QEnterEvent* event);
    friend void QPushButton_QBaseEnterEvent(QPushButton* self, QEnterEvent* event);
    friend void QPushButton_LeaveEvent(QPushButton* self, QEvent* event);
    friend void QPushButton_QBaseLeaveEvent(QPushButton* self, QEvent* event);
    friend void QPushButton_MoveEvent(QPushButton* self, QMoveEvent* event);
    friend void QPushButton_QBaseMoveEvent(QPushButton* self, QMoveEvent* event);
    friend void QPushButton_ResizeEvent(QPushButton* self, QResizeEvent* event);
    friend void QPushButton_QBaseResizeEvent(QPushButton* self, QResizeEvent* event);
    friend void QPushButton_CloseEvent(QPushButton* self, QCloseEvent* event);
    friend void QPushButton_QBaseCloseEvent(QPushButton* self, QCloseEvent* event);
    friend void QPushButton_ContextMenuEvent(QPushButton* self, QContextMenuEvent* event);
    friend void QPushButton_QBaseContextMenuEvent(QPushButton* self, QContextMenuEvent* event);
    friend void QPushButton_TabletEvent(QPushButton* self, QTabletEvent* event);
    friend void QPushButton_QBaseTabletEvent(QPushButton* self, QTabletEvent* event);
    friend void QPushButton_ActionEvent(QPushButton* self, QActionEvent* event);
    friend void QPushButton_QBaseActionEvent(QPushButton* self, QActionEvent* event);
    friend void QPushButton_DragEnterEvent(QPushButton* self, QDragEnterEvent* event);
    friend void QPushButton_QBaseDragEnterEvent(QPushButton* self, QDragEnterEvent* event);
    friend void QPushButton_DragMoveEvent(QPushButton* self, QDragMoveEvent* event);
    friend void QPushButton_QBaseDragMoveEvent(QPushButton* self, QDragMoveEvent* event);
    friend void QPushButton_DragLeaveEvent(QPushButton* self, QDragLeaveEvent* event);
    friend void QPushButton_QBaseDragLeaveEvent(QPushButton* self, QDragLeaveEvent* event);
    friend void QPushButton_DropEvent(QPushButton* self, QDropEvent* event);
    friend void QPushButton_QBaseDropEvent(QPushButton* self, QDropEvent* event);
    friend void QPushButton_ShowEvent(QPushButton* self, QShowEvent* event);
    friend void QPushButton_QBaseShowEvent(QPushButton* self, QShowEvent* event);
    friend void QPushButton_HideEvent(QPushButton* self, QHideEvent* event);
    friend void QPushButton_QBaseHideEvent(QPushButton* self, QHideEvent* event);
    friend bool QPushButton_NativeEvent(QPushButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QPushButton_QBaseNativeEvent(QPushButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QPushButton_Metric(const QPushButton* self, int param1);
    friend int QPushButton_QBaseMetric(const QPushButton* self, int param1);
    friend void QPushButton_InitPainter(const QPushButton* self, QPainter* painter);
    friend void QPushButton_QBaseInitPainter(const QPushButton* self, QPainter* painter);
    friend QPaintDevice* QPushButton_Redirected(const QPushButton* self, QPoint* offset);
    friend QPaintDevice* QPushButton_QBaseRedirected(const QPushButton* self, QPoint* offset);
    friend QPainter* QPushButton_SharedPainter(const QPushButton* self);
    friend QPainter* QPushButton_QBaseSharedPainter(const QPushButton* self);
    friend void QPushButton_InputMethodEvent(QPushButton* self, QInputMethodEvent* param1);
    friend void QPushButton_QBaseInputMethodEvent(QPushButton* self, QInputMethodEvent* param1);
    friend bool QPushButton_FocusNextPrevChild(QPushButton* self, bool next);
    friend bool QPushButton_QBaseFocusNextPrevChild(QPushButton* self, bool next);
    friend void QPushButton_ChildEvent(QPushButton* self, QChildEvent* event);
    friend void QPushButton_QBaseChildEvent(QPushButton* self, QChildEvent* event);
    friend void QPushButton_CustomEvent(QPushButton* self, QEvent* event);
    friend void QPushButton_QBaseCustomEvent(QPushButton* self, QEvent* event);
    friend void QPushButton_ConnectNotify(QPushButton* self, const QMetaMethod* signal);
    friend void QPushButton_QBaseConnectNotify(QPushButton* self, const QMetaMethod* signal);
    friend void QPushButton_DisconnectNotify(QPushButton* self, const QMetaMethod* signal);
    friend void QPushButton_QBaseDisconnectNotify(QPushButton* self, const QMetaMethod* signal);
    friend void QPushButton_UpdateMicroFocus(QPushButton* self);
    friend void QPushButton_QBaseUpdateMicroFocus(QPushButton* self);
    friend void QPushButton_Create(QPushButton* self);
    friend void QPushButton_QBaseCreate(QPushButton* self);
    friend void QPushButton_Destroy(QPushButton* self);
    friend void QPushButton_QBaseDestroy(QPushButton* self);
    friend bool QPushButton_FocusNextChild(QPushButton* self);
    friend bool QPushButton_QBaseFocusNextChild(QPushButton* self);
    friend bool QPushButton_FocusPreviousChild(QPushButton* self);
    friend bool QPushButton_QBaseFocusPreviousChild(QPushButton* self);
    friend QObject* QPushButton_Sender(const QPushButton* self);
    friend QObject* QPushButton_QBaseSender(const QPushButton* self);
    friend int QPushButton_SenderSignalIndex(const QPushButton* self);
    friend int QPushButton_QBaseSenderSignalIndex(const QPushButton* self);
    friend int QPushButton_Receivers(const QPushButton* self, const char* signal);
    friend int QPushButton_QBaseReceivers(const QPushButton* self, const char* signal);
    friend bool QPushButton_IsSignalConnected(const QPushButton* self, const QMetaMethod* signal);
    friend bool QPushButton_QBaseIsSignalConnected(const QPushButton* self, const QMetaMethod* signal);
};

#endif
