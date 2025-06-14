#pragma once
#ifndef SRCC_LIBVIRTUALQABSTRACTBUTTON_H
#define SRCC_LIBVIRTUALQABSTRACTBUTTON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractButton so that we can call protected methods
class VirtualQAbstractButton final : public QAbstractButton {

  public:
    // Virtual class boolean flag
    bool isVirtualQAbstractButton = true;

    // Virtual class public types (including callbacks)
    using QAbstractButton_Metacall_Callback = int (*)(QAbstractButton*, int, int, void**);
    using QAbstractButton_PaintEvent_Callback = void (*)(QAbstractButton*, QPaintEvent*);
    using QAbstractButton_HitButton_Callback = bool (*)(const QAbstractButton*, QPoint*);
    using QAbstractButton_CheckStateSet_Callback = void (*)();
    using QAbstractButton_NextCheckState_Callback = void (*)();
    using QAbstractButton_Event_Callback = bool (*)(QAbstractButton*, QEvent*);
    using QAbstractButton_KeyPressEvent_Callback = void (*)(QAbstractButton*, QKeyEvent*);
    using QAbstractButton_KeyReleaseEvent_Callback = void (*)(QAbstractButton*, QKeyEvent*);
    using QAbstractButton_MousePressEvent_Callback = void (*)(QAbstractButton*, QMouseEvent*);
    using QAbstractButton_MouseReleaseEvent_Callback = void (*)(QAbstractButton*, QMouseEvent*);
    using QAbstractButton_MouseMoveEvent_Callback = void (*)(QAbstractButton*, QMouseEvent*);
    using QAbstractButton_FocusInEvent_Callback = void (*)(QAbstractButton*, QFocusEvent*);
    using QAbstractButton_FocusOutEvent_Callback = void (*)(QAbstractButton*, QFocusEvent*);
    using QAbstractButton_ChangeEvent_Callback = void (*)(QAbstractButton*, QEvent*);
    using QAbstractButton_TimerEvent_Callback = void (*)(QAbstractButton*, QTimerEvent*);
    using QAbstractButton_DevType_Callback = int (*)();
    using QAbstractButton_SetVisible_Callback = void (*)(QAbstractButton*, bool);
    using QAbstractButton_SizeHint_Callback = QSize* (*)();
    using QAbstractButton_MinimumSizeHint_Callback = QSize* (*)();
    using QAbstractButton_HeightForWidth_Callback = int (*)(const QAbstractButton*, int);
    using QAbstractButton_HasHeightForWidth_Callback = bool (*)();
    using QAbstractButton_PaintEngine_Callback = QPaintEngine* (*)();
    using QAbstractButton_MouseDoubleClickEvent_Callback = void (*)(QAbstractButton*, QMouseEvent*);
    using QAbstractButton_WheelEvent_Callback = void (*)(QAbstractButton*, QWheelEvent*);
    using QAbstractButton_EnterEvent_Callback = void (*)(QAbstractButton*, QEnterEvent*);
    using QAbstractButton_LeaveEvent_Callback = void (*)(QAbstractButton*, QEvent*);
    using QAbstractButton_MoveEvent_Callback = void (*)(QAbstractButton*, QMoveEvent*);
    using QAbstractButton_ResizeEvent_Callback = void (*)(QAbstractButton*, QResizeEvent*);
    using QAbstractButton_CloseEvent_Callback = void (*)(QAbstractButton*, QCloseEvent*);
    using QAbstractButton_ContextMenuEvent_Callback = void (*)(QAbstractButton*, QContextMenuEvent*);
    using QAbstractButton_TabletEvent_Callback = void (*)(QAbstractButton*, QTabletEvent*);
    using QAbstractButton_ActionEvent_Callback = void (*)(QAbstractButton*, QActionEvent*);
    using QAbstractButton_DragEnterEvent_Callback = void (*)(QAbstractButton*, QDragEnterEvent*);
    using QAbstractButton_DragMoveEvent_Callback = void (*)(QAbstractButton*, QDragMoveEvent*);
    using QAbstractButton_DragLeaveEvent_Callback = void (*)(QAbstractButton*, QDragLeaveEvent*);
    using QAbstractButton_DropEvent_Callback = void (*)(QAbstractButton*, QDropEvent*);
    using QAbstractButton_ShowEvent_Callback = void (*)(QAbstractButton*, QShowEvent*);
    using QAbstractButton_HideEvent_Callback = void (*)(QAbstractButton*, QHideEvent*);
    using QAbstractButton_NativeEvent_Callback = bool (*)(QAbstractButton*, libqt_string, void*, intptr_t*);
    using QAbstractButton_Metric_Callback = int (*)(const QAbstractButton*, int);
    using QAbstractButton_InitPainter_Callback = void (*)(const QAbstractButton*, QPainter*);
    using QAbstractButton_Redirected_Callback = QPaintDevice* (*)(const QAbstractButton*, QPoint*);
    using QAbstractButton_SharedPainter_Callback = QPainter* (*)();
    using QAbstractButton_InputMethodEvent_Callback = void (*)(QAbstractButton*, QInputMethodEvent*);
    using QAbstractButton_InputMethodQuery_Callback = QVariant* (*)(const QAbstractButton*, int);
    using QAbstractButton_FocusNextPrevChild_Callback = bool (*)(QAbstractButton*, bool);
    using QAbstractButton_EventFilter_Callback = bool (*)(QAbstractButton*, QObject*, QEvent*);
    using QAbstractButton_ChildEvent_Callback = void (*)(QAbstractButton*, QChildEvent*);
    using QAbstractButton_CustomEvent_Callback = void (*)(QAbstractButton*, QEvent*);
    using QAbstractButton_ConnectNotify_Callback = void (*)(QAbstractButton*, QMetaMethod*);
    using QAbstractButton_DisconnectNotify_Callback = void (*)(QAbstractButton*, QMetaMethod*);
    using QAbstractButton_UpdateMicroFocus_Callback = void (*)();
    using QAbstractButton_Create_Callback = void (*)();
    using QAbstractButton_Destroy_Callback = void (*)();
    using QAbstractButton_FocusNextChild_Callback = bool (*)();
    using QAbstractButton_FocusPreviousChild_Callback = bool (*)();
    using QAbstractButton_Sender_Callback = QObject* (*)();
    using QAbstractButton_SenderSignalIndex_Callback = int (*)();
    using QAbstractButton_Receivers_Callback = int (*)(const QAbstractButton*, const char*);
    using QAbstractButton_IsSignalConnected_Callback = bool (*)(const QAbstractButton*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAbstractButton_Metacall_Callback qabstractbutton_metacall_callback = nullptr;
    QAbstractButton_PaintEvent_Callback qabstractbutton_paintevent_callback = nullptr;
    QAbstractButton_HitButton_Callback qabstractbutton_hitbutton_callback = nullptr;
    QAbstractButton_CheckStateSet_Callback qabstractbutton_checkstateset_callback = nullptr;
    QAbstractButton_NextCheckState_Callback qabstractbutton_nextcheckstate_callback = nullptr;
    QAbstractButton_Event_Callback qabstractbutton_event_callback = nullptr;
    QAbstractButton_KeyPressEvent_Callback qabstractbutton_keypressevent_callback = nullptr;
    QAbstractButton_KeyReleaseEvent_Callback qabstractbutton_keyreleaseevent_callback = nullptr;
    QAbstractButton_MousePressEvent_Callback qabstractbutton_mousepressevent_callback = nullptr;
    QAbstractButton_MouseReleaseEvent_Callback qabstractbutton_mousereleaseevent_callback = nullptr;
    QAbstractButton_MouseMoveEvent_Callback qabstractbutton_mousemoveevent_callback = nullptr;
    QAbstractButton_FocusInEvent_Callback qabstractbutton_focusinevent_callback = nullptr;
    QAbstractButton_FocusOutEvent_Callback qabstractbutton_focusoutevent_callback = nullptr;
    QAbstractButton_ChangeEvent_Callback qabstractbutton_changeevent_callback = nullptr;
    QAbstractButton_TimerEvent_Callback qabstractbutton_timerevent_callback = nullptr;
    QAbstractButton_DevType_Callback qabstractbutton_devtype_callback = nullptr;
    QAbstractButton_SetVisible_Callback qabstractbutton_setvisible_callback = nullptr;
    QAbstractButton_SizeHint_Callback qabstractbutton_sizehint_callback = nullptr;
    QAbstractButton_MinimumSizeHint_Callback qabstractbutton_minimumsizehint_callback = nullptr;
    QAbstractButton_HeightForWidth_Callback qabstractbutton_heightforwidth_callback = nullptr;
    QAbstractButton_HasHeightForWidth_Callback qabstractbutton_hasheightforwidth_callback = nullptr;
    QAbstractButton_PaintEngine_Callback qabstractbutton_paintengine_callback = nullptr;
    QAbstractButton_MouseDoubleClickEvent_Callback qabstractbutton_mousedoubleclickevent_callback = nullptr;
    QAbstractButton_WheelEvent_Callback qabstractbutton_wheelevent_callback = nullptr;
    QAbstractButton_EnterEvent_Callback qabstractbutton_enterevent_callback = nullptr;
    QAbstractButton_LeaveEvent_Callback qabstractbutton_leaveevent_callback = nullptr;
    QAbstractButton_MoveEvent_Callback qabstractbutton_moveevent_callback = nullptr;
    QAbstractButton_ResizeEvent_Callback qabstractbutton_resizeevent_callback = nullptr;
    QAbstractButton_CloseEvent_Callback qabstractbutton_closeevent_callback = nullptr;
    QAbstractButton_ContextMenuEvent_Callback qabstractbutton_contextmenuevent_callback = nullptr;
    QAbstractButton_TabletEvent_Callback qabstractbutton_tabletevent_callback = nullptr;
    QAbstractButton_ActionEvent_Callback qabstractbutton_actionevent_callback = nullptr;
    QAbstractButton_DragEnterEvent_Callback qabstractbutton_dragenterevent_callback = nullptr;
    QAbstractButton_DragMoveEvent_Callback qabstractbutton_dragmoveevent_callback = nullptr;
    QAbstractButton_DragLeaveEvent_Callback qabstractbutton_dragleaveevent_callback = nullptr;
    QAbstractButton_DropEvent_Callback qabstractbutton_dropevent_callback = nullptr;
    QAbstractButton_ShowEvent_Callback qabstractbutton_showevent_callback = nullptr;
    QAbstractButton_HideEvent_Callback qabstractbutton_hideevent_callback = nullptr;
    QAbstractButton_NativeEvent_Callback qabstractbutton_nativeevent_callback = nullptr;
    QAbstractButton_Metric_Callback qabstractbutton_metric_callback = nullptr;
    QAbstractButton_InitPainter_Callback qabstractbutton_initpainter_callback = nullptr;
    QAbstractButton_Redirected_Callback qabstractbutton_redirected_callback = nullptr;
    QAbstractButton_SharedPainter_Callback qabstractbutton_sharedpainter_callback = nullptr;
    QAbstractButton_InputMethodEvent_Callback qabstractbutton_inputmethodevent_callback = nullptr;
    QAbstractButton_InputMethodQuery_Callback qabstractbutton_inputmethodquery_callback = nullptr;
    QAbstractButton_FocusNextPrevChild_Callback qabstractbutton_focusnextprevchild_callback = nullptr;
    QAbstractButton_EventFilter_Callback qabstractbutton_eventfilter_callback = nullptr;
    QAbstractButton_ChildEvent_Callback qabstractbutton_childevent_callback = nullptr;
    QAbstractButton_CustomEvent_Callback qabstractbutton_customevent_callback = nullptr;
    QAbstractButton_ConnectNotify_Callback qabstractbutton_connectnotify_callback = nullptr;
    QAbstractButton_DisconnectNotify_Callback qabstractbutton_disconnectnotify_callback = nullptr;
    QAbstractButton_UpdateMicroFocus_Callback qabstractbutton_updatemicrofocus_callback = nullptr;
    QAbstractButton_Create_Callback qabstractbutton_create_callback = nullptr;
    QAbstractButton_Destroy_Callback qabstractbutton_destroy_callback = nullptr;
    QAbstractButton_FocusNextChild_Callback qabstractbutton_focusnextchild_callback = nullptr;
    QAbstractButton_FocusPreviousChild_Callback qabstractbutton_focuspreviouschild_callback = nullptr;
    QAbstractButton_Sender_Callback qabstractbutton_sender_callback = nullptr;
    QAbstractButton_SenderSignalIndex_Callback qabstractbutton_sendersignalindex_callback = nullptr;
    QAbstractButton_Receivers_Callback qabstractbutton_receivers_callback = nullptr;
    QAbstractButton_IsSignalConnected_Callback qabstractbutton_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qabstractbutton_metacall_isbase = false;
    mutable bool qabstractbutton_paintevent_isbase = false;
    mutable bool qabstractbutton_hitbutton_isbase = false;
    mutable bool qabstractbutton_checkstateset_isbase = false;
    mutable bool qabstractbutton_nextcheckstate_isbase = false;
    mutable bool qabstractbutton_event_isbase = false;
    mutable bool qabstractbutton_keypressevent_isbase = false;
    mutable bool qabstractbutton_keyreleaseevent_isbase = false;
    mutable bool qabstractbutton_mousepressevent_isbase = false;
    mutable bool qabstractbutton_mousereleaseevent_isbase = false;
    mutable bool qabstractbutton_mousemoveevent_isbase = false;
    mutable bool qabstractbutton_focusinevent_isbase = false;
    mutable bool qabstractbutton_focusoutevent_isbase = false;
    mutable bool qabstractbutton_changeevent_isbase = false;
    mutable bool qabstractbutton_timerevent_isbase = false;
    mutable bool qabstractbutton_devtype_isbase = false;
    mutable bool qabstractbutton_setvisible_isbase = false;
    mutable bool qabstractbutton_sizehint_isbase = false;
    mutable bool qabstractbutton_minimumsizehint_isbase = false;
    mutable bool qabstractbutton_heightforwidth_isbase = false;
    mutable bool qabstractbutton_hasheightforwidth_isbase = false;
    mutable bool qabstractbutton_paintengine_isbase = false;
    mutable bool qabstractbutton_mousedoubleclickevent_isbase = false;
    mutable bool qabstractbutton_wheelevent_isbase = false;
    mutable bool qabstractbutton_enterevent_isbase = false;
    mutable bool qabstractbutton_leaveevent_isbase = false;
    mutable bool qabstractbutton_moveevent_isbase = false;
    mutable bool qabstractbutton_resizeevent_isbase = false;
    mutable bool qabstractbutton_closeevent_isbase = false;
    mutable bool qabstractbutton_contextmenuevent_isbase = false;
    mutable bool qabstractbutton_tabletevent_isbase = false;
    mutable bool qabstractbutton_actionevent_isbase = false;
    mutable bool qabstractbutton_dragenterevent_isbase = false;
    mutable bool qabstractbutton_dragmoveevent_isbase = false;
    mutable bool qabstractbutton_dragleaveevent_isbase = false;
    mutable bool qabstractbutton_dropevent_isbase = false;
    mutable bool qabstractbutton_showevent_isbase = false;
    mutable bool qabstractbutton_hideevent_isbase = false;
    mutable bool qabstractbutton_nativeevent_isbase = false;
    mutable bool qabstractbutton_metric_isbase = false;
    mutable bool qabstractbutton_initpainter_isbase = false;
    mutable bool qabstractbutton_redirected_isbase = false;
    mutable bool qabstractbutton_sharedpainter_isbase = false;
    mutable bool qabstractbutton_inputmethodevent_isbase = false;
    mutable bool qabstractbutton_inputmethodquery_isbase = false;
    mutable bool qabstractbutton_focusnextprevchild_isbase = false;
    mutable bool qabstractbutton_eventfilter_isbase = false;
    mutable bool qabstractbutton_childevent_isbase = false;
    mutable bool qabstractbutton_customevent_isbase = false;
    mutable bool qabstractbutton_connectnotify_isbase = false;
    mutable bool qabstractbutton_disconnectnotify_isbase = false;
    mutable bool qabstractbutton_updatemicrofocus_isbase = false;
    mutable bool qabstractbutton_create_isbase = false;
    mutable bool qabstractbutton_destroy_isbase = false;
    mutable bool qabstractbutton_focusnextchild_isbase = false;
    mutable bool qabstractbutton_focuspreviouschild_isbase = false;
    mutable bool qabstractbutton_sender_isbase = false;
    mutable bool qabstractbutton_sendersignalindex_isbase = false;
    mutable bool qabstractbutton_receivers_isbase = false;
    mutable bool qabstractbutton_issignalconnected_isbase = false;

  public:
    VirtualQAbstractButton(QWidget* parent) : QAbstractButton(parent){};
    VirtualQAbstractButton() : QAbstractButton(){};

    ~VirtualQAbstractButton() {
        qabstractbutton_metacall_callback = nullptr;
        qabstractbutton_paintevent_callback = nullptr;
        qabstractbutton_hitbutton_callback = nullptr;
        qabstractbutton_checkstateset_callback = nullptr;
        qabstractbutton_nextcheckstate_callback = nullptr;
        qabstractbutton_event_callback = nullptr;
        qabstractbutton_keypressevent_callback = nullptr;
        qabstractbutton_keyreleaseevent_callback = nullptr;
        qabstractbutton_mousepressevent_callback = nullptr;
        qabstractbutton_mousereleaseevent_callback = nullptr;
        qabstractbutton_mousemoveevent_callback = nullptr;
        qabstractbutton_focusinevent_callback = nullptr;
        qabstractbutton_focusoutevent_callback = nullptr;
        qabstractbutton_changeevent_callback = nullptr;
        qabstractbutton_timerevent_callback = nullptr;
        qabstractbutton_devtype_callback = nullptr;
        qabstractbutton_setvisible_callback = nullptr;
        qabstractbutton_sizehint_callback = nullptr;
        qabstractbutton_minimumsizehint_callback = nullptr;
        qabstractbutton_heightforwidth_callback = nullptr;
        qabstractbutton_hasheightforwidth_callback = nullptr;
        qabstractbutton_paintengine_callback = nullptr;
        qabstractbutton_mousedoubleclickevent_callback = nullptr;
        qabstractbutton_wheelevent_callback = nullptr;
        qabstractbutton_enterevent_callback = nullptr;
        qabstractbutton_leaveevent_callback = nullptr;
        qabstractbutton_moveevent_callback = nullptr;
        qabstractbutton_resizeevent_callback = nullptr;
        qabstractbutton_closeevent_callback = nullptr;
        qabstractbutton_contextmenuevent_callback = nullptr;
        qabstractbutton_tabletevent_callback = nullptr;
        qabstractbutton_actionevent_callback = nullptr;
        qabstractbutton_dragenterevent_callback = nullptr;
        qabstractbutton_dragmoveevent_callback = nullptr;
        qabstractbutton_dragleaveevent_callback = nullptr;
        qabstractbutton_dropevent_callback = nullptr;
        qabstractbutton_showevent_callback = nullptr;
        qabstractbutton_hideevent_callback = nullptr;
        qabstractbutton_nativeevent_callback = nullptr;
        qabstractbutton_metric_callback = nullptr;
        qabstractbutton_initpainter_callback = nullptr;
        qabstractbutton_redirected_callback = nullptr;
        qabstractbutton_sharedpainter_callback = nullptr;
        qabstractbutton_inputmethodevent_callback = nullptr;
        qabstractbutton_inputmethodquery_callback = nullptr;
        qabstractbutton_focusnextprevchild_callback = nullptr;
        qabstractbutton_eventfilter_callback = nullptr;
        qabstractbutton_childevent_callback = nullptr;
        qabstractbutton_customevent_callback = nullptr;
        qabstractbutton_connectnotify_callback = nullptr;
        qabstractbutton_disconnectnotify_callback = nullptr;
        qabstractbutton_updatemicrofocus_callback = nullptr;
        qabstractbutton_create_callback = nullptr;
        qabstractbutton_destroy_callback = nullptr;
        qabstractbutton_focusnextchild_callback = nullptr;
        qabstractbutton_focuspreviouschild_callback = nullptr;
        qabstractbutton_sender_callback = nullptr;
        qabstractbutton_sendersignalindex_callback = nullptr;
        qabstractbutton_receivers_callback = nullptr;
        qabstractbutton_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQAbstractButton_Metacall_Callback(QAbstractButton_Metacall_Callback cb) { qabstractbutton_metacall_callback = cb; }
    inline void setQAbstractButton_PaintEvent_Callback(QAbstractButton_PaintEvent_Callback cb) { qabstractbutton_paintevent_callback = cb; }
    inline void setQAbstractButton_HitButton_Callback(QAbstractButton_HitButton_Callback cb) { qabstractbutton_hitbutton_callback = cb; }
    inline void setQAbstractButton_CheckStateSet_Callback(QAbstractButton_CheckStateSet_Callback cb) { qabstractbutton_checkstateset_callback = cb; }
    inline void setQAbstractButton_NextCheckState_Callback(QAbstractButton_NextCheckState_Callback cb) { qabstractbutton_nextcheckstate_callback = cb; }
    inline void setQAbstractButton_Event_Callback(QAbstractButton_Event_Callback cb) { qabstractbutton_event_callback = cb; }
    inline void setQAbstractButton_KeyPressEvent_Callback(QAbstractButton_KeyPressEvent_Callback cb) { qabstractbutton_keypressevent_callback = cb; }
    inline void setQAbstractButton_KeyReleaseEvent_Callback(QAbstractButton_KeyReleaseEvent_Callback cb) { qabstractbutton_keyreleaseevent_callback = cb; }
    inline void setQAbstractButton_MousePressEvent_Callback(QAbstractButton_MousePressEvent_Callback cb) { qabstractbutton_mousepressevent_callback = cb; }
    inline void setQAbstractButton_MouseReleaseEvent_Callback(QAbstractButton_MouseReleaseEvent_Callback cb) { qabstractbutton_mousereleaseevent_callback = cb; }
    inline void setQAbstractButton_MouseMoveEvent_Callback(QAbstractButton_MouseMoveEvent_Callback cb) { qabstractbutton_mousemoveevent_callback = cb; }
    inline void setQAbstractButton_FocusInEvent_Callback(QAbstractButton_FocusInEvent_Callback cb) { qabstractbutton_focusinevent_callback = cb; }
    inline void setQAbstractButton_FocusOutEvent_Callback(QAbstractButton_FocusOutEvent_Callback cb) { qabstractbutton_focusoutevent_callback = cb; }
    inline void setQAbstractButton_ChangeEvent_Callback(QAbstractButton_ChangeEvent_Callback cb) { qabstractbutton_changeevent_callback = cb; }
    inline void setQAbstractButton_TimerEvent_Callback(QAbstractButton_TimerEvent_Callback cb) { qabstractbutton_timerevent_callback = cb; }
    inline void setQAbstractButton_DevType_Callback(QAbstractButton_DevType_Callback cb) { qabstractbutton_devtype_callback = cb; }
    inline void setQAbstractButton_SetVisible_Callback(QAbstractButton_SetVisible_Callback cb) { qabstractbutton_setvisible_callback = cb; }
    inline void setQAbstractButton_SizeHint_Callback(QAbstractButton_SizeHint_Callback cb) { qabstractbutton_sizehint_callback = cb; }
    inline void setQAbstractButton_MinimumSizeHint_Callback(QAbstractButton_MinimumSizeHint_Callback cb) { qabstractbutton_minimumsizehint_callback = cb; }
    inline void setQAbstractButton_HeightForWidth_Callback(QAbstractButton_HeightForWidth_Callback cb) { qabstractbutton_heightforwidth_callback = cb; }
    inline void setQAbstractButton_HasHeightForWidth_Callback(QAbstractButton_HasHeightForWidth_Callback cb) { qabstractbutton_hasheightforwidth_callback = cb; }
    inline void setQAbstractButton_PaintEngine_Callback(QAbstractButton_PaintEngine_Callback cb) { qabstractbutton_paintengine_callback = cb; }
    inline void setQAbstractButton_MouseDoubleClickEvent_Callback(QAbstractButton_MouseDoubleClickEvent_Callback cb) { qabstractbutton_mousedoubleclickevent_callback = cb; }
    inline void setQAbstractButton_WheelEvent_Callback(QAbstractButton_WheelEvent_Callback cb) { qabstractbutton_wheelevent_callback = cb; }
    inline void setQAbstractButton_EnterEvent_Callback(QAbstractButton_EnterEvent_Callback cb) { qabstractbutton_enterevent_callback = cb; }
    inline void setQAbstractButton_LeaveEvent_Callback(QAbstractButton_LeaveEvent_Callback cb) { qabstractbutton_leaveevent_callback = cb; }
    inline void setQAbstractButton_MoveEvent_Callback(QAbstractButton_MoveEvent_Callback cb) { qabstractbutton_moveevent_callback = cb; }
    inline void setQAbstractButton_ResizeEvent_Callback(QAbstractButton_ResizeEvent_Callback cb) { qabstractbutton_resizeevent_callback = cb; }
    inline void setQAbstractButton_CloseEvent_Callback(QAbstractButton_CloseEvent_Callback cb) { qabstractbutton_closeevent_callback = cb; }
    inline void setQAbstractButton_ContextMenuEvent_Callback(QAbstractButton_ContextMenuEvent_Callback cb) { qabstractbutton_contextmenuevent_callback = cb; }
    inline void setQAbstractButton_TabletEvent_Callback(QAbstractButton_TabletEvent_Callback cb) { qabstractbutton_tabletevent_callback = cb; }
    inline void setQAbstractButton_ActionEvent_Callback(QAbstractButton_ActionEvent_Callback cb) { qabstractbutton_actionevent_callback = cb; }
    inline void setQAbstractButton_DragEnterEvent_Callback(QAbstractButton_DragEnterEvent_Callback cb) { qabstractbutton_dragenterevent_callback = cb; }
    inline void setQAbstractButton_DragMoveEvent_Callback(QAbstractButton_DragMoveEvent_Callback cb) { qabstractbutton_dragmoveevent_callback = cb; }
    inline void setQAbstractButton_DragLeaveEvent_Callback(QAbstractButton_DragLeaveEvent_Callback cb) { qabstractbutton_dragleaveevent_callback = cb; }
    inline void setQAbstractButton_DropEvent_Callback(QAbstractButton_DropEvent_Callback cb) { qabstractbutton_dropevent_callback = cb; }
    inline void setQAbstractButton_ShowEvent_Callback(QAbstractButton_ShowEvent_Callback cb) { qabstractbutton_showevent_callback = cb; }
    inline void setQAbstractButton_HideEvent_Callback(QAbstractButton_HideEvent_Callback cb) { qabstractbutton_hideevent_callback = cb; }
    inline void setQAbstractButton_NativeEvent_Callback(QAbstractButton_NativeEvent_Callback cb) { qabstractbutton_nativeevent_callback = cb; }
    inline void setQAbstractButton_Metric_Callback(QAbstractButton_Metric_Callback cb) { qabstractbutton_metric_callback = cb; }
    inline void setQAbstractButton_InitPainter_Callback(QAbstractButton_InitPainter_Callback cb) { qabstractbutton_initpainter_callback = cb; }
    inline void setQAbstractButton_Redirected_Callback(QAbstractButton_Redirected_Callback cb) { qabstractbutton_redirected_callback = cb; }
    inline void setQAbstractButton_SharedPainter_Callback(QAbstractButton_SharedPainter_Callback cb) { qabstractbutton_sharedpainter_callback = cb; }
    inline void setQAbstractButton_InputMethodEvent_Callback(QAbstractButton_InputMethodEvent_Callback cb) { qabstractbutton_inputmethodevent_callback = cb; }
    inline void setQAbstractButton_InputMethodQuery_Callback(QAbstractButton_InputMethodQuery_Callback cb) { qabstractbutton_inputmethodquery_callback = cb; }
    inline void setQAbstractButton_FocusNextPrevChild_Callback(QAbstractButton_FocusNextPrevChild_Callback cb) { qabstractbutton_focusnextprevchild_callback = cb; }
    inline void setQAbstractButton_EventFilter_Callback(QAbstractButton_EventFilter_Callback cb) { qabstractbutton_eventfilter_callback = cb; }
    inline void setQAbstractButton_ChildEvent_Callback(QAbstractButton_ChildEvent_Callback cb) { qabstractbutton_childevent_callback = cb; }
    inline void setQAbstractButton_CustomEvent_Callback(QAbstractButton_CustomEvent_Callback cb) { qabstractbutton_customevent_callback = cb; }
    inline void setQAbstractButton_ConnectNotify_Callback(QAbstractButton_ConnectNotify_Callback cb) { qabstractbutton_connectnotify_callback = cb; }
    inline void setQAbstractButton_DisconnectNotify_Callback(QAbstractButton_DisconnectNotify_Callback cb) { qabstractbutton_disconnectnotify_callback = cb; }
    inline void setQAbstractButton_UpdateMicroFocus_Callback(QAbstractButton_UpdateMicroFocus_Callback cb) { qabstractbutton_updatemicrofocus_callback = cb; }
    inline void setQAbstractButton_Create_Callback(QAbstractButton_Create_Callback cb) { qabstractbutton_create_callback = cb; }
    inline void setQAbstractButton_Destroy_Callback(QAbstractButton_Destroy_Callback cb) { qabstractbutton_destroy_callback = cb; }
    inline void setQAbstractButton_FocusNextChild_Callback(QAbstractButton_FocusNextChild_Callback cb) { qabstractbutton_focusnextchild_callback = cb; }
    inline void setQAbstractButton_FocusPreviousChild_Callback(QAbstractButton_FocusPreviousChild_Callback cb) { qabstractbutton_focuspreviouschild_callback = cb; }
    inline void setQAbstractButton_Sender_Callback(QAbstractButton_Sender_Callback cb) { qabstractbutton_sender_callback = cb; }
    inline void setQAbstractButton_SenderSignalIndex_Callback(QAbstractButton_SenderSignalIndex_Callback cb) { qabstractbutton_sendersignalindex_callback = cb; }
    inline void setQAbstractButton_Receivers_Callback(QAbstractButton_Receivers_Callback cb) { qabstractbutton_receivers_callback = cb; }
    inline void setQAbstractButton_IsSignalConnected_Callback(QAbstractButton_IsSignalConnected_Callback cb) { qabstractbutton_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAbstractButton_Metacall_IsBase(bool value) const { qabstractbutton_metacall_isbase = value; }
    inline void setQAbstractButton_PaintEvent_IsBase(bool value) const { qabstractbutton_paintevent_isbase = value; }
    inline void setQAbstractButton_HitButton_IsBase(bool value) const { qabstractbutton_hitbutton_isbase = value; }
    inline void setQAbstractButton_CheckStateSet_IsBase(bool value) const { qabstractbutton_checkstateset_isbase = value; }
    inline void setQAbstractButton_NextCheckState_IsBase(bool value) const { qabstractbutton_nextcheckstate_isbase = value; }
    inline void setQAbstractButton_Event_IsBase(bool value) const { qabstractbutton_event_isbase = value; }
    inline void setQAbstractButton_KeyPressEvent_IsBase(bool value) const { qabstractbutton_keypressevent_isbase = value; }
    inline void setQAbstractButton_KeyReleaseEvent_IsBase(bool value) const { qabstractbutton_keyreleaseevent_isbase = value; }
    inline void setQAbstractButton_MousePressEvent_IsBase(bool value) const { qabstractbutton_mousepressevent_isbase = value; }
    inline void setQAbstractButton_MouseReleaseEvent_IsBase(bool value) const { qabstractbutton_mousereleaseevent_isbase = value; }
    inline void setQAbstractButton_MouseMoveEvent_IsBase(bool value) const { qabstractbutton_mousemoveevent_isbase = value; }
    inline void setQAbstractButton_FocusInEvent_IsBase(bool value) const { qabstractbutton_focusinevent_isbase = value; }
    inline void setQAbstractButton_FocusOutEvent_IsBase(bool value) const { qabstractbutton_focusoutevent_isbase = value; }
    inline void setQAbstractButton_ChangeEvent_IsBase(bool value) const { qabstractbutton_changeevent_isbase = value; }
    inline void setQAbstractButton_TimerEvent_IsBase(bool value) const { qabstractbutton_timerevent_isbase = value; }
    inline void setQAbstractButton_DevType_IsBase(bool value) const { qabstractbutton_devtype_isbase = value; }
    inline void setQAbstractButton_SetVisible_IsBase(bool value) const { qabstractbutton_setvisible_isbase = value; }
    inline void setQAbstractButton_SizeHint_IsBase(bool value) const { qabstractbutton_sizehint_isbase = value; }
    inline void setQAbstractButton_MinimumSizeHint_IsBase(bool value) const { qabstractbutton_minimumsizehint_isbase = value; }
    inline void setQAbstractButton_HeightForWidth_IsBase(bool value) const { qabstractbutton_heightforwidth_isbase = value; }
    inline void setQAbstractButton_HasHeightForWidth_IsBase(bool value) const { qabstractbutton_hasheightforwidth_isbase = value; }
    inline void setQAbstractButton_PaintEngine_IsBase(bool value) const { qabstractbutton_paintengine_isbase = value; }
    inline void setQAbstractButton_MouseDoubleClickEvent_IsBase(bool value) const { qabstractbutton_mousedoubleclickevent_isbase = value; }
    inline void setQAbstractButton_WheelEvent_IsBase(bool value) const { qabstractbutton_wheelevent_isbase = value; }
    inline void setQAbstractButton_EnterEvent_IsBase(bool value) const { qabstractbutton_enterevent_isbase = value; }
    inline void setQAbstractButton_LeaveEvent_IsBase(bool value) const { qabstractbutton_leaveevent_isbase = value; }
    inline void setQAbstractButton_MoveEvent_IsBase(bool value) const { qabstractbutton_moveevent_isbase = value; }
    inline void setQAbstractButton_ResizeEvent_IsBase(bool value) const { qabstractbutton_resizeevent_isbase = value; }
    inline void setQAbstractButton_CloseEvent_IsBase(bool value) const { qabstractbutton_closeevent_isbase = value; }
    inline void setQAbstractButton_ContextMenuEvent_IsBase(bool value) const { qabstractbutton_contextmenuevent_isbase = value; }
    inline void setQAbstractButton_TabletEvent_IsBase(bool value) const { qabstractbutton_tabletevent_isbase = value; }
    inline void setQAbstractButton_ActionEvent_IsBase(bool value) const { qabstractbutton_actionevent_isbase = value; }
    inline void setQAbstractButton_DragEnterEvent_IsBase(bool value) const { qabstractbutton_dragenterevent_isbase = value; }
    inline void setQAbstractButton_DragMoveEvent_IsBase(bool value) const { qabstractbutton_dragmoveevent_isbase = value; }
    inline void setQAbstractButton_DragLeaveEvent_IsBase(bool value) const { qabstractbutton_dragleaveevent_isbase = value; }
    inline void setQAbstractButton_DropEvent_IsBase(bool value) const { qabstractbutton_dropevent_isbase = value; }
    inline void setQAbstractButton_ShowEvent_IsBase(bool value) const { qabstractbutton_showevent_isbase = value; }
    inline void setQAbstractButton_HideEvent_IsBase(bool value) const { qabstractbutton_hideevent_isbase = value; }
    inline void setQAbstractButton_NativeEvent_IsBase(bool value) const { qabstractbutton_nativeevent_isbase = value; }
    inline void setQAbstractButton_Metric_IsBase(bool value) const { qabstractbutton_metric_isbase = value; }
    inline void setQAbstractButton_InitPainter_IsBase(bool value) const { qabstractbutton_initpainter_isbase = value; }
    inline void setQAbstractButton_Redirected_IsBase(bool value) const { qabstractbutton_redirected_isbase = value; }
    inline void setQAbstractButton_SharedPainter_IsBase(bool value) const { qabstractbutton_sharedpainter_isbase = value; }
    inline void setQAbstractButton_InputMethodEvent_IsBase(bool value) const { qabstractbutton_inputmethodevent_isbase = value; }
    inline void setQAbstractButton_InputMethodQuery_IsBase(bool value) const { qabstractbutton_inputmethodquery_isbase = value; }
    inline void setQAbstractButton_FocusNextPrevChild_IsBase(bool value) const { qabstractbutton_focusnextprevchild_isbase = value; }
    inline void setQAbstractButton_EventFilter_IsBase(bool value) const { qabstractbutton_eventfilter_isbase = value; }
    inline void setQAbstractButton_ChildEvent_IsBase(bool value) const { qabstractbutton_childevent_isbase = value; }
    inline void setQAbstractButton_CustomEvent_IsBase(bool value) const { qabstractbutton_customevent_isbase = value; }
    inline void setQAbstractButton_ConnectNotify_IsBase(bool value) const { qabstractbutton_connectnotify_isbase = value; }
    inline void setQAbstractButton_DisconnectNotify_IsBase(bool value) const { qabstractbutton_disconnectnotify_isbase = value; }
    inline void setQAbstractButton_UpdateMicroFocus_IsBase(bool value) const { qabstractbutton_updatemicrofocus_isbase = value; }
    inline void setQAbstractButton_Create_IsBase(bool value) const { qabstractbutton_create_isbase = value; }
    inline void setQAbstractButton_Destroy_IsBase(bool value) const { qabstractbutton_destroy_isbase = value; }
    inline void setQAbstractButton_FocusNextChild_IsBase(bool value) const { qabstractbutton_focusnextchild_isbase = value; }
    inline void setQAbstractButton_FocusPreviousChild_IsBase(bool value) const { qabstractbutton_focuspreviouschild_isbase = value; }
    inline void setQAbstractButton_Sender_IsBase(bool value) const { qabstractbutton_sender_isbase = value; }
    inline void setQAbstractButton_SenderSignalIndex_IsBase(bool value) const { qabstractbutton_sendersignalindex_isbase = value; }
    inline void setQAbstractButton_Receivers_IsBase(bool value) const { qabstractbutton_receivers_isbase = value; }
    inline void setQAbstractButton_IsSignalConnected_IsBase(bool value) const { qabstractbutton_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractbutton_metacall_isbase) {
            qabstractbutton_metacall_isbase = false;
            return QAbstractButton::qt_metacall(param1, param2, param3);
        } else if (qabstractbutton_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qabstractbutton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractButton::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qabstractbutton_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = e;

            qabstractbutton_paintevent_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (qabstractbutton_hitbutton_isbase) {
            qabstractbutton_hitbutton_isbase = false;
            return QAbstractButton::hitButton(pos);
        } else if (qabstractbutton_hitbutton_callback != nullptr) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);

            bool callback_ret = qabstractbutton_hitbutton_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractButton::hitButton(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (qabstractbutton_checkstateset_isbase) {
            qabstractbutton_checkstateset_isbase = false;
            QAbstractButton::checkStateSet();
        } else if (qabstractbutton_checkstateset_callback != nullptr) {
            qabstractbutton_checkstateset_callback();
        } else {
            QAbstractButton::checkStateSet();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (qabstractbutton_nextcheckstate_isbase) {
            qabstractbutton_nextcheckstate_isbase = false;
            QAbstractButton::nextCheckState();
        } else if (qabstractbutton_nextcheckstate_callback != nullptr) {
            qabstractbutton_nextcheckstate_callback();
        } else {
            QAbstractButton::nextCheckState();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qabstractbutton_event_isbase) {
            qabstractbutton_event_isbase = false;
            return QAbstractButton::event(e);
        } else if (qabstractbutton_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qabstractbutton_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractButton::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qabstractbutton_keypressevent_isbase) {
            qabstractbutton_keypressevent_isbase = false;
            QAbstractButton::keyPressEvent(e);
        } else if (qabstractbutton_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            qabstractbutton_keypressevent_callback(this, cbval1);
        } else {
            QAbstractButton::keyPressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qabstractbutton_keyreleaseevent_isbase) {
            qabstractbutton_keyreleaseevent_isbase = false;
            QAbstractButton::keyReleaseEvent(e);
        } else if (qabstractbutton_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            qabstractbutton_keyreleaseevent_callback(this, cbval1);
        } else {
            QAbstractButton::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qabstractbutton_mousepressevent_isbase) {
            qabstractbutton_mousepressevent_isbase = false;
            QAbstractButton::mousePressEvent(e);
        } else if (qabstractbutton_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            qabstractbutton_mousepressevent_callback(this, cbval1);
        } else {
            QAbstractButton::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qabstractbutton_mousereleaseevent_isbase) {
            qabstractbutton_mousereleaseevent_isbase = false;
            QAbstractButton::mouseReleaseEvent(e);
        } else if (qabstractbutton_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            qabstractbutton_mousereleaseevent_callback(this, cbval1);
        } else {
            QAbstractButton::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qabstractbutton_mousemoveevent_isbase) {
            qabstractbutton_mousemoveevent_isbase = false;
            QAbstractButton::mouseMoveEvent(e);
        } else if (qabstractbutton_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            qabstractbutton_mousemoveevent_callback(this, cbval1);
        } else {
            QAbstractButton::mouseMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qabstractbutton_focusinevent_isbase) {
            qabstractbutton_focusinevent_isbase = false;
            QAbstractButton::focusInEvent(e);
        } else if (qabstractbutton_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            qabstractbutton_focusinevent_callback(this, cbval1);
        } else {
            QAbstractButton::focusInEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qabstractbutton_focusoutevent_isbase) {
            qabstractbutton_focusoutevent_isbase = false;
            QAbstractButton::focusOutEvent(e);
        } else if (qabstractbutton_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            qabstractbutton_focusoutevent_callback(this, cbval1);
        } else {
            QAbstractButton::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qabstractbutton_changeevent_isbase) {
            qabstractbutton_changeevent_isbase = false;
            QAbstractButton::changeEvent(e);
        } else if (qabstractbutton_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            qabstractbutton_changeevent_callback(this, cbval1);
        } else {
            QAbstractButton::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qabstractbutton_timerevent_isbase) {
            qabstractbutton_timerevent_isbase = false;
            QAbstractButton::timerEvent(e);
        } else if (qabstractbutton_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = e;

            qabstractbutton_timerevent_callback(this, cbval1);
        } else {
            QAbstractButton::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qabstractbutton_devtype_isbase) {
            qabstractbutton_devtype_isbase = false;
            return QAbstractButton::devType();
        } else if (qabstractbutton_devtype_callback != nullptr) {
            int callback_ret = qabstractbutton_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractButton::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qabstractbutton_setvisible_isbase) {
            qabstractbutton_setvisible_isbase = false;
            QAbstractButton::setVisible(visible);
        } else if (qabstractbutton_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qabstractbutton_setvisible_callback(this, cbval1);
        } else {
            QAbstractButton::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qabstractbutton_sizehint_isbase) {
            qabstractbutton_sizehint_isbase = false;
            return QAbstractButton::sizeHint();
        } else if (qabstractbutton_sizehint_callback != nullptr) {
            QSize* callback_ret = qabstractbutton_sizehint_callback();
            return *callback_ret;
        } else {
            return QAbstractButton::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qabstractbutton_minimumsizehint_isbase) {
            qabstractbutton_minimumsizehint_isbase = false;
            return QAbstractButton::minimumSizeHint();
        } else if (qabstractbutton_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qabstractbutton_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QAbstractButton::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qabstractbutton_heightforwidth_isbase) {
            qabstractbutton_heightforwidth_isbase = false;
            return QAbstractButton::heightForWidth(param1);
        } else if (qabstractbutton_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qabstractbutton_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractButton::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qabstractbutton_hasheightforwidth_isbase) {
            qabstractbutton_hasheightforwidth_isbase = false;
            return QAbstractButton::hasHeightForWidth();
        } else if (qabstractbutton_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qabstractbutton_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QAbstractButton::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qabstractbutton_paintengine_isbase) {
            qabstractbutton_paintengine_isbase = false;
            return QAbstractButton::paintEngine();
        } else if (qabstractbutton_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qabstractbutton_paintengine_callback();
            return callback_ret;
        } else {
            return QAbstractButton::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qabstractbutton_mousedoubleclickevent_isbase) {
            qabstractbutton_mousedoubleclickevent_isbase = false;
            QAbstractButton::mouseDoubleClickEvent(event);
        } else if (qabstractbutton_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qabstractbutton_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QAbstractButton::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qabstractbutton_wheelevent_isbase) {
            qabstractbutton_wheelevent_isbase = false;
            QAbstractButton::wheelEvent(event);
        } else if (qabstractbutton_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qabstractbutton_wheelevent_callback(this, cbval1);
        } else {
            QAbstractButton::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qabstractbutton_enterevent_isbase) {
            qabstractbutton_enterevent_isbase = false;
            QAbstractButton::enterEvent(event);
        } else if (qabstractbutton_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qabstractbutton_enterevent_callback(this, cbval1);
        } else {
            QAbstractButton::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qabstractbutton_leaveevent_isbase) {
            qabstractbutton_leaveevent_isbase = false;
            QAbstractButton::leaveEvent(event);
        } else if (qabstractbutton_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qabstractbutton_leaveevent_callback(this, cbval1);
        } else {
            QAbstractButton::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qabstractbutton_moveevent_isbase) {
            qabstractbutton_moveevent_isbase = false;
            QAbstractButton::moveEvent(event);
        } else if (qabstractbutton_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qabstractbutton_moveevent_callback(this, cbval1);
        } else {
            QAbstractButton::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qabstractbutton_resizeevent_isbase) {
            qabstractbutton_resizeevent_isbase = false;
            QAbstractButton::resizeEvent(event);
        } else if (qabstractbutton_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qabstractbutton_resizeevent_callback(this, cbval1);
        } else {
            QAbstractButton::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qabstractbutton_closeevent_isbase) {
            qabstractbutton_closeevent_isbase = false;
            QAbstractButton::closeEvent(event);
        } else if (qabstractbutton_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qabstractbutton_closeevent_callback(this, cbval1);
        } else {
            QAbstractButton::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qabstractbutton_contextmenuevent_isbase) {
            qabstractbutton_contextmenuevent_isbase = false;
            QAbstractButton::contextMenuEvent(event);
        } else if (qabstractbutton_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qabstractbutton_contextmenuevent_callback(this, cbval1);
        } else {
            QAbstractButton::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qabstractbutton_tabletevent_isbase) {
            qabstractbutton_tabletevent_isbase = false;
            QAbstractButton::tabletEvent(event);
        } else if (qabstractbutton_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qabstractbutton_tabletevent_callback(this, cbval1);
        } else {
            QAbstractButton::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qabstractbutton_actionevent_isbase) {
            qabstractbutton_actionevent_isbase = false;
            QAbstractButton::actionEvent(event);
        } else if (qabstractbutton_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qabstractbutton_actionevent_callback(this, cbval1);
        } else {
            QAbstractButton::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qabstractbutton_dragenterevent_isbase) {
            qabstractbutton_dragenterevent_isbase = false;
            QAbstractButton::dragEnterEvent(event);
        } else if (qabstractbutton_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qabstractbutton_dragenterevent_callback(this, cbval1);
        } else {
            QAbstractButton::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qabstractbutton_dragmoveevent_isbase) {
            qabstractbutton_dragmoveevent_isbase = false;
            QAbstractButton::dragMoveEvent(event);
        } else if (qabstractbutton_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qabstractbutton_dragmoveevent_callback(this, cbval1);
        } else {
            QAbstractButton::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qabstractbutton_dragleaveevent_isbase) {
            qabstractbutton_dragleaveevent_isbase = false;
            QAbstractButton::dragLeaveEvent(event);
        } else if (qabstractbutton_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qabstractbutton_dragleaveevent_callback(this, cbval1);
        } else {
            QAbstractButton::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qabstractbutton_dropevent_isbase) {
            qabstractbutton_dropevent_isbase = false;
            QAbstractButton::dropEvent(event);
        } else if (qabstractbutton_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qabstractbutton_dropevent_callback(this, cbval1);
        } else {
            QAbstractButton::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qabstractbutton_showevent_isbase) {
            qabstractbutton_showevent_isbase = false;
            QAbstractButton::showEvent(event);
        } else if (qabstractbutton_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qabstractbutton_showevent_callback(this, cbval1);
        } else {
            QAbstractButton::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qabstractbutton_hideevent_isbase) {
            qabstractbutton_hideevent_isbase = false;
            QAbstractButton::hideEvent(event);
        } else if (qabstractbutton_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qabstractbutton_hideevent_callback(this, cbval1);
        } else {
            QAbstractButton::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qabstractbutton_nativeevent_isbase) {
            qabstractbutton_nativeevent_isbase = false;
            return QAbstractButton::nativeEvent(eventType, message, result);
        } else if (qabstractbutton_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<const char*>(malloc((eventType_str.len + 1) * sizeof(char)));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            ((char*)eventType_str.data)[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qabstractbutton_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QAbstractButton::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qabstractbutton_metric_isbase) {
            qabstractbutton_metric_isbase = false;
            return QAbstractButton::metric(param1);
        } else if (qabstractbutton_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qabstractbutton_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractButton::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qabstractbutton_initpainter_isbase) {
            qabstractbutton_initpainter_isbase = false;
            QAbstractButton::initPainter(painter);
        } else if (qabstractbutton_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qabstractbutton_initpainter_callback(this, cbval1);
        } else {
            QAbstractButton::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qabstractbutton_redirected_isbase) {
            qabstractbutton_redirected_isbase = false;
            return QAbstractButton::redirected(offset);
        } else if (qabstractbutton_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qabstractbutton_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractButton::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qabstractbutton_sharedpainter_isbase) {
            qabstractbutton_sharedpainter_isbase = false;
            return QAbstractButton::sharedPainter();
        } else if (qabstractbutton_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qabstractbutton_sharedpainter_callback();
            return callback_ret;
        } else {
            return QAbstractButton::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qabstractbutton_inputmethodevent_isbase) {
            qabstractbutton_inputmethodevent_isbase = false;
            QAbstractButton::inputMethodEvent(param1);
        } else if (qabstractbutton_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qabstractbutton_inputmethodevent_callback(this, cbval1);
        } else {
            QAbstractButton::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qabstractbutton_inputmethodquery_isbase) {
            qabstractbutton_inputmethodquery_isbase = false;
            return QAbstractButton::inputMethodQuery(param1);
        } else if (qabstractbutton_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qabstractbutton_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QAbstractButton::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qabstractbutton_focusnextprevchild_isbase) {
            qabstractbutton_focusnextprevchild_isbase = false;
            return QAbstractButton::focusNextPrevChild(next);
        } else if (qabstractbutton_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qabstractbutton_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractButton::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractbutton_eventfilter_isbase) {
            qabstractbutton_eventfilter_isbase = false;
            return QAbstractButton::eventFilter(watched, event);
        } else if (qabstractbutton_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qabstractbutton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAbstractButton::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractbutton_childevent_isbase) {
            qabstractbutton_childevent_isbase = false;
            QAbstractButton::childEvent(event);
        } else if (qabstractbutton_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qabstractbutton_childevent_callback(this, cbval1);
        } else {
            QAbstractButton::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractbutton_customevent_isbase) {
            qabstractbutton_customevent_isbase = false;
            QAbstractButton::customEvent(event);
        } else if (qabstractbutton_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qabstractbutton_customevent_callback(this, cbval1);
        } else {
            QAbstractButton::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractbutton_connectnotify_isbase) {
            qabstractbutton_connectnotify_isbase = false;
            QAbstractButton::connectNotify(signal);
        } else if (qabstractbutton_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qabstractbutton_connectnotify_callback(this, cbval1);
        } else {
            QAbstractButton::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractbutton_disconnectnotify_isbase) {
            qabstractbutton_disconnectnotify_isbase = false;
            QAbstractButton::disconnectNotify(signal);
        } else if (qabstractbutton_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qabstractbutton_disconnectnotify_callback(this, cbval1);
        } else {
            QAbstractButton::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qabstractbutton_updatemicrofocus_isbase) {
            qabstractbutton_updatemicrofocus_isbase = false;
            QAbstractButton::updateMicroFocus();
        } else if (qabstractbutton_updatemicrofocus_callback != nullptr) {
            qabstractbutton_updatemicrofocus_callback();
        } else {
            QAbstractButton::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qabstractbutton_create_isbase) {
            qabstractbutton_create_isbase = false;
            QAbstractButton::create();
        } else if (qabstractbutton_create_callback != nullptr) {
            qabstractbutton_create_callback();
        } else {
            QAbstractButton::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qabstractbutton_destroy_isbase) {
            qabstractbutton_destroy_isbase = false;
            QAbstractButton::destroy();
        } else if (qabstractbutton_destroy_callback != nullptr) {
            qabstractbutton_destroy_callback();
        } else {
            QAbstractButton::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qabstractbutton_focusnextchild_isbase) {
            qabstractbutton_focusnextchild_isbase = false;
            return QAbstractButton::focusNextChild();
        } else if (qabstractbutton_focusnextchild_callback != nullptr) {
            bool callback_ret = qabstractbutton_focusnextchild_callback();
            return callback_ret;
        } else {
            return QAbstractButton::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qabstractbutton_focuspreviouschild_isbase) {
            qabstractbutton_focuspreviouschild_isbase = false;
            return QAbstractButton::focusPreviousChild();
        } else if (qabstractbutton_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qabstractbutton_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QAbstractButton::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstractbutton_sender_isbase) {
            qabstractbutton_sender_isbase = false;
            return QAbstractButton::sender();
        } else if (qabstractbutton_sender_callback != nullptr) {
            QObject* callback_ret = qabstractbutton_sender_callback();
            return callback_ret;
        } else {
            return QAbstractButton::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstractbutton_sendersignalindex_isbase) {
            qabstractbutton_sendersignalindex_isbase = false;
            return QAbstractButton::senderSignalIndex();
        } else if (qabstractbutton_sendersignalindex_callback != nullptr) {
            int callback_ret = qabstractbutton_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractButton::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstractbutton_receivers_isbase) {
            qabstractbutton_receivers_isbase = false;
            return QAbstractButton::receivers(signal);
        } else if (qabstractbutton_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qabstractbutton_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractButton::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstractbutton_issignalconnected_isbase) {
            qabstractbutton_issignalconnected_isbase = false;
            return QAbstractButton::isSignalConnected(signal);
        } else if (qabstractbutton_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qabstractbutton_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractButton::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QAbstractButton_PaintEvent(QAbstractButton* self, QPaintEvent* e);
    friend void QAbstractButton_QBasePaintEvent(QAbstractButton* self, QPaintEvent* e);
    friend bool QAbstractButton_HitButton(const QAbstractButton* self, const QPoint* pos);
    friend bool QAbstractButton_QBaseHitButton(const QAbstractButton* self, const QPoint* pos);
    friend void QAbstractButton_CheckStateSet(QAbstractButton* self);
    friend void QAbstractButton_QBaseCheckStateSet(QAbstractButton* self);
    friend void QAbstractButton_NextCheckState(QAbstractButton* self);
    friend void QAbstractButton_QBaseNextCheckState(QAbstractButton* self);
    friend bool QAbstractButton_Event(QAbstractButton* self, QEvent* e);
    friend bool QAbstractButton_QBaseEvent(QAbstractButton* self, QEvent* e);
    friend void QAbstractButton_KeyPressEvent(QAbstractButton* self, QKeyEvent* e);
    friend void QAbstractButton_QBaseKeyPressEvent(QAbstractButton* self, QKeyEvent* e);
    friend void QAbstractButton_KeyReleaseEvent(QAbstractButton* self, QKeyEvent* e);
    friend void QAbstractButton_QBaseKeyReleaseEvent(QAbstractButton* self, QKeyEvent* e);
    friend void QAbstractButton_MousePressEvent(QAbstractButton* self, QMouseEvent* e);
    friend void QAbstractButton_QBaseMousePressEvent(QAbstractButton* self, QMouseEvent* e);
    friend void QAbstractButton_MouseReleaseEvent(QAbstractButton* self, QMouseEvent* e);
    friend void QAbstractButton_QBaseMouseReleaseEvent(QAbstractButton* self, QMouseEvent* e);
    friend void QAbstractButton_MouseMoveEvent(QAbstractButton* self, QMouseEvent* e);
    friend void QAbstractButton_QBaseMouseMoveEvent(QAbstractButton* self, QMouseEvent* e);
    friend void QAbstractButton_FocusInEvent(QAbstractButton* self, QFocusEvent* e);
    friend void QAbstractButton_QBaseFocusInEvent(QAbstractButton* self, QFocusEvent* e);
    friend void QAbstractButton_FocusOutEvent(QAbstractButton* self, QFocusEvent* e);
    friend void QAbstractButton_QBaseFocusOutEvent(QAbstractButton* self, QFocusEvent* e);
    friend void QAbstractButton_ChangeEvent(QAbstractButton* self, QEvent* e);
    friend void QAbstractButton_QBaseChangeEvent(QAbstractButton* self, QEvent* e);
    friend void QAbstractButton_TimerEvent(QAbstractButton* self, QTimerEvent* e);
    friend void QAbstractButton_QBaseTimerEvent(QAbstractButton* self, QTimerEvent* e);
    friend void QAbstractButton_MouseDoubleClickEvent(QAbstractButton* self, QMouseEvent* event);
    friend void QAbstractButton_QBaseMouseDoubleClickEvent(QAbstractButton* self, QMouseEvent* event);
    friend void QAbstractButton_WheelEvent(QAbstractButton* self, QWheelEvent* event);
    friend void QAbstractButton_QBaseWheelEvent(QAbstractButton* self, QWheelEvent* event);
    friend void QAbstractButton_EnterEvent(QAbstractButton* self, QEnterEvent* event);
    friend void QAbstractButton_QBaseEnterEvent(QAbstractButton* self, QEnterEvent* event);
    friend void QAbstractButton_LeaveEvent(QAbstractButton* self, QEvent* event);
    friend void QAbstractButton_QBaseLeaveEvent(QAbstractButton* self, QEvent* event);
    friend void QAbstractButton_MoveEvent(QAbstractButton* self, QMoveEvent* event);
    friend void QAbstractButton_QBaseMoveEvent(QAbstractButton* self, QMoveEvent* event);
    friend void QAbstractButton_ResizeEvent(QAbstractButton* self, QResizeEvent* event);
    friend void QAbstractButton_QBaseResizeEvent(QAbstractButton* self, QResizeEvent* event);
    friend void QAbstractButton_CloseEvent(QAbstractButton* self, QCloseEvent* event);
    friend void QAbstractButton_QBaseCloseEvent(QAbstractButton* self, QCloseEvent* event);
    friend void QAbstractButton_ContextMenuEvent(QAbstractButton* self, QContextMenuEvent* event);
    friend void QAbstractButton_QBaseContextMenuEvent(QAbstractButton* self, QContextMenuEvent* event);
    friend void QAbstractButton_TabletEvent(QAbstractButton* self, QTabletEvent* event);
    friend void QAbstractButton_QBaseTabletEvent(QAbstractButton* self, QTabletEvent* event);
    friend void QAbstractButton_ActionEvent(QAbstractButton* self, QActionEvent* event);
    friend void QAbstractButton_QBaseActionEvent(QAbstractButton* self, QActionEvent* event);
    friend void QAbstractButton_DragEnterEvent(QAbstractButton* self, QDragEnterEvent* event);
    friend void QAbstractButton_QBaseDragEnterEvent(QAbstractButton* self, QDragEnterEvent* event);
    friend void QAbstractButton_DragMoveEvent(QAbstractButton* self, QDragMoveEvent* event);
    friend void QAbstractButton_QBaseDragMoveEvent(QAbstractButton* self, QDragMoveEvent* event);
    friend void QAbstractButton_DragLeaveEvent(QAbstractButton* self, QDragLeaveEvent* event);
    friend void QAbstractButton_QBaseDragLeaveEvent(QAbstractButton* self, QDragLeaveEvent* event);
    friend void QAbstractButton_DropEvent(QAbstractButton* self, QDropEvent* event);
    friend void QAbstractButton_QBaseDropEvent(QAbstractButton* self, QDropEvent* event);
    friend void QAbstractButton_ShowEvent(QAbstractButton* self, QShowEvent* event);
    friend void QAbstractButton_QBaseShowEvent(QAbstractButton* self, QShowEvent* event);
    friend void QAbstractButton_HideEvent(QAbstractButton* self, QHideEvent* event);
    friend void QAbstractButton_QBaseHideEvent(QAbstractButton* self, QHideEvent* event);
    friend bool QAbstractButton_NativeEvent(QAbstractButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QAbstractButton_QBaseNativeEvent(QAbstractButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QAbstractButton_Metric(const QAbstractButton* self, int param1);
    friend int QAbstractButton_QBaseMetric(const QAbstractButton* self, int param1);
    friend void QAbstractButton_InitPainter(const QAbstractButton* self, QPainter* painter);
    friend void QAbstractButton_QBaseInitPainter(const QAbstractButton* self, QPainter* painter);
    friend QPaintDevice* QAbstractButton_Redirected(const QAbstractButton* self, QPoint* offset);
    friend QPaintDevice* QAbstractButton_QBaseRedirected(const QAbstractButton* self, QPoint* offset);
    friend QPainter* QAbstractButton_SharedPainter(const QAbstractButton* self);
    friend QPainter* QAbstractButton_QBaseSharedPainter(const QAbstractButton* self);
    friend void QAbstractButton_InputMethodEvent(QAbstractButton* self, QInputMethodEvent* param1);
    friend void QAbstractButton_QBaseInputMethodEvent(QAbstractButton* self, QInputMethodEvent* param1);
    friend bool QAbstractButton_FocusNextPrevChild(QAbstractButton* self, bool next);
    friend bool QAbstractButton_QBaseFocusNextPrevChild(QAbstractButton* self, bool next);
    friend void QAbstractButton_ChildEvent(QAbstractButton* self, QChildEvent* event);
    friend void QAbstractButton_QBaseChildEvent(QAbstractButton* self, QChildEvent* event);
    friend void QAbstractButton_CustomEvent(QAbstractButton* self, QEvent* event);
    friend void QAbstractButton_QBaseCustomEvent(QAbstractButton* self, QEvent* event);
    friend void QAbstractButton_ConnectNotify(QAbstractButton* self, const QMetaMethod* signal);
    friend void QAbstractButton_QBaseConnectNotify(QAbstractButton* self, const QMetaMethod* signal);
    friend void QAbstractButton_DisconnectNotify(QAbstractButton* self, const QMetaMethod* signal);
    friend void QAbstractButton_QBaseDisconnectNotify(QAbstractButton* self, const QMetaMethod* signal);
    friend void QAbstractButton_UpdateMicroFocus(QAbstractButton* self);
    friend void QAbstractButton_QBaseUpdateMicroFocus(QAbstractButton* self);
    friend void QAbstractButton_Create(QAbstractButton* self);
    friend void QAbstractButton_QBaseCreate(QAbstractButton* self);
    friend void QAbstractButton_Destroy(QAbstractButton* self);
    friend void QAbstractButton_QBaseDestroy(QAbstractButton* self);
    friend bool QAbstractButton_FocusNextChild(QAbstractButton* self);
    friend bool QAbstractButton_QBaseFocusNextChild(QAbstractButton* self);
    friend bool QAbstractButton_FocusPreviousChild(QAbstractButton* self);
    friend bool QAbstractButton_QBaseFocusPreviousChild(QAbstractButton* self);
    friend QObject* QAbstractButton_Sender(const QAbstractButton* self);
    friend QObject* QAbstractButton_QBaseSender(const QAbstractButton* self);
    friend int QAbstractButton_SenderSignalIndex(const QAbstractButton* self);
    friend int QAbstractButton_QBaseSenderSignalIndex(const QAbstractButton* self);
    friend int QAbstractButton_Receivers(const QAbstractButton* self, const char* signal);
    friend int QAbstractButton_QBaseReceivers(const QAbstractButton* self, const char* signal);
    friend bool QAbstractButton_IsSignalConnected(const QAbstractButton* self, const QMetaMethod* signal);
    friend bool QAbstractButton_QBaseIsSignalConnected(const QAbstractButton* self, const QMetaMethod* signal);
};

#endif
