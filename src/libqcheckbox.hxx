#pragma once
#ifndef SRCC_LIBVIRTUALQCHECKBOX_H
#define SRCC_LIBVIRTUALQCHECKBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QCheckBox so that we can call protected methods
class VirtualQCheckBox final : public QCheckBox {

  public:
    // Virtual class boolean flag
    bool isVirtualQCheckBox = true;

    // Virtual class public types (including callbacks)
    using QCheckBox_Metacall_Callback = int (*)(QCheckBox*, int, int, void**);
    using QCheckBox_SizeHint_Callback = QSize* (*)();
    using QCheckBox_MinimumSizeHint_Callback = QSize* (*)();
    using QCheckBox_Event_Callback = bool (*)(QCheckBox*, QEvent*);
    using QCheckBox_HitButton_Callback = bool (*)(const QCheckBox*, QPoint*);
    using QCheckBox_CheckStateSet_Callback = void (*)();
    using QCheckBox_NextCheckState_Callback = void (*)();
    using QCheckBox_PaintEvent_Callback = void (*)(QCheckBox*, QPaintEvent*);
    using QCheckBox_MouseMoveEvent_Callback = void (*)(QCheckBox*, QMouseEvent*);
    using QCheckBox_InitStyleOption_Callback = void (*)(const QCheckBox*, QStyleOptionButton*);
    using QCheckBox_KeyPressEvent_Callback = void (*)(QCheckBox*, QKeyEvent*);
    using QCheckBox_KeyReleaseEvent_Callback = void (*)(QCheckBox*, QKeyEvent*);
    using QCheckBox_MousePressEvent_Callback = void (*)(QCheckBox*, QMouseEvent*);
    using QCheckBox_MouseReleaseEvent_Callback = void (*)(QCheckBox*, QMouseEvent*);
    using QCheckBox_FocusInEvent_Callback = void (*)(QCheckBox*, QFocusEvent*);
    using QCheckBox_FocusOutEvent_Callback = void (*)(QCheckBox*, QFocusEvent*);
    using QCheckBox_ChangeEvent_Callback = void (*)(QCheckBox*, QEvent*);
    using QCheckBox_TimerEvent_Callback = void (*)(QCheckBox*, QTimerEvent*);
    using QCheckBox_DevType_Callback = int (*)();
    using QCheckBox_SetVisible_Callback = void (*)(QCheckBox*, bool);
    using QCheckBox_HeightForWidth_Callback = int (*)(const QCheckBox*, int);
    using QCheckBox_HasHeightForWidth_Callback = bool (*)();
    using QCheckBox_PaintEngine_Callback = QPaintEngine* (*)();
    using QCheckBox_MouseDoubleClickEvent_Callback = void (*)(QCheckBox*, QMouseEvent*);
    using QCheckBox_WheelEvent_Callback = void (*)(QCheckBox*, QWheelEvent*);
    using QCheckBox_EnterEvent_Callback = void (*)(QCheckBox*, QEnterEvent*);
    using QCheckBox_LeaveEvent_Callback = void (*)(QCheckBox*, QEvent*);
    using QCheckBox_MoveEvent_Callback = void (*)(QCheckBox*, QMoveEvent*);
    using QCheckBox_ResizeEvent_Callback = void (*)(QCheckBox*, QResizeEvent*);
    using QCheckBox_CloseEvent_Callback = void (*)(QCheckBox*, QCloseEvent*);
    using QCheckBox_ContextMenuEvent_Callback = void (*)(QCheckBox*, QContextMenuEvent*);
    using QCheckBox_TabletEvent_Callback = void (*)(QCheckBox*, QTabletEvent*);
    using QCheckBox_ActionEvent_Callback = void (*)(QCheckBox*, QActionEvent*);
    using QCheckBox_DragEnterEvent_Callback = void (*)(QCheckBox*, QDragEnterEvent*);
    using QCheckBox_DragMoveEvent_Callback = void (*)(QCheckBox*, QDragMoveEvent*);
    using QCheckBox_DragLeaveEvent_Callback = void (*)(QCheckBox*, QDragLeaveEvent*);
    using QCheckBox_DropEvent_Callback = void (*)(QCheckBox*, QDropEvent*);
    using QCheckBox_ShowEvent_Callback = void (*)(QCheckBox*, QShowEvent*);
    using QCheckBox_HideEvent_Callback = void (*)(QCheckBox*, QHideEvent*);
    using QCheckBox_NativeEvent_Callback = bool (*)(QCheckBox*, libqt_string, void*, intptr_t*);
    using QCheckBox_Metric_Callback = int (*)(const QCheckBox*, int);
    using QCheckBox_InitPainter_Callback = void (*)(const QCheckBox*, QPainter*);
    using QCheckBox_Redirected_Callback = QPaintDevice* (*)(const QCheckBox*, QPoint*);
    using QCheckBox_SharedPainter_Callback = QPainter* (*)();
    using QCheckBox_InputMethodEvent_Callback = void (*)(QCheckBox*, QInputMethodEvent*);
    using QCheckBox_InputMethodQuery_Callback = QVariant* (*)(const QCheckBox*, int);
    using QCheckBox_FocusNextPrevChild_Callback = bool (*)(QCheckBox*, bool);
    using QCheckBox_EventFilter_Callback = bool (*)(QCheckBox*, QObject*, QEvent*);
    using QCheckBox_ChildEvent_Callback = void (*)(QCheckBox*, QChildEvent*);
    using QCheckBox_CustomEvent_Callback = void (*)(QCheckBox*, QEvent*);
    using QCheckBox_ConnectNotify_Callback = void (*)(QCheckBox*, QMetaMethod*);
    using QCheckBox_DisconnectNotify_Callback = void (*)(QCheckBox*, QMetaMethod*);
    using QCheckBox_UpdateMicroFocus_Callback = void (*)();
    using QCheckBox_Create_Callback = void (*)();
    using QCheckBox_Destroy_Callback = void (*)();
    using QCheckBox_FocusNextChild_Callback = bool (*)();
    using QCheckBox_FocusPreviousChild_Callback = bool (*)();
    using QCheckBox_Sender_Callback = QObject* (*)();
    using QCheckBox_SenderSignalIndex_Callback = int (*)();
    using QCheckBox_Receivers_Callback = int (*)(const QCheckBox*, const char*);
    using QCheckBox_IsSignalConnected_Callback = bool (*)(const QCheckBox*, QMetaMethod*);

  protected:
    // Instance callback storage
    QCheckBox_Metacall_Callback qcheckbox_metacall_callback = nullptr;
    QCheckBox_SizeHint_Callback qcheckbox_sizehint_callback = nullptr;
    QCheckBox_MinimumSizeHint_Callback qcheckbox_minimumsizehint_callback = nullptr;
    QCheckBox_Event_Callback qcheckbox_event_callback = nullptr;
    QCheckBox_HitButton_Callback qcheckbox_hitbutton_callback = nullptr;
    QCheckBox_CheckStateSet_Callback qcheckbox_checkstateset_callback = nullptr;
    QCheckBox_NextCheckState_Callback qcheckbox_nextcheckstate_callback = nullptr;
    QCheckBox_PaintEvent_Callback qcheckbox_paintevent_callback = nullptr;
    QCheckBox_MouseMoveEvent_Callback qcheckbox_mousemoveevent_callback = nullptr;
    QCheckBox_InitStyleOption_Callback qcheckbox_initstyleoption_callback = nullptr;
    QCheckBox_KeyPressEvent_Callback qcheckbox_keypressevent_callback = nullptr;
    QCheckBox_KeyReleaseEvent_Callback qcheckbox_keyreleaseevent_callback = nullptr;
    QCheckBox_MousePressEvent_Callback qcheckbox_mousepressevent_callback = nullptr;
    QCheckBox_MouseReleaseEvent_Callback qcheckbox_mousereleaseevent_callback = nullptr;
    QCheckBox_FocusInEvent_Callback qcheckbox_focusinevent_callback = nullptr;
    QCheckBox_FocusOutEvent_Callback qcheckbox_focusoutevent_callback = nullptr;
    QCheckBox_ChangeEvent_Callback qcheckbox_changeevent_callback = nullptr;
    QCheckBox_TimerEvent_Callback qcheckbox_timerevent_callback = nullptr;
    QCheckBox_DevType_Callback qcheckbox_devtype_callback = nullptr;
    QCheckBox_SetVisible_Callback qcheckbox_setvisible_callback = nullptr;
    QCheckBox_HeightForWidth_Callback qcheckbox_heightforwidth_callback = nullptr;
    QCheckBox_HasHeightForWidth_Callback qcheckbox_hasheightforwidth_callback = nullptr;
    QCheckBox_PaintEngine_Callback qcheckbox_paintengine_callback = nullptr;
    QCheckBox_MouseDoubleClickEvent_Callback qcheckbox_mousedoubleclickevent_callback = nullptr;
    QCheckBox_WheelEvent_Callback qcheckbox_wheelevent_callback = nullptr;
    QCheckBox_EnterEvent_Callback qcheckbox_enterevent_callback = nullptr;
    QCheckBox_LeaveEvent_Callback qcheckbox_leaveevent_callback = nullptr;
    QCheckBox_MoveEvent_Callback qcheckbox_moveevent_callback = nullptr;
    QCheckBox_ResizeEvent_Callback qcheckbox_resizeevent_callback = nullptr;
    QCheckBox_CloseEvent_Callback qcheckbox_closeevent_callback = nullptr;
    QCheckBox_ContextMenuEvent_Callback qcheckbox_contextmenuevent_callback = nullptr;
    QCheckBox_TabletEvent_Callback qcheckbox_tabletevent_callback = nullptr;
    QCheckBox_ActionEvent_Callback qcheckbox_actionevent_callback = nullptr;
    QCheckBox_DragEnterEvent_Callback qcheckbox_dragenterevent_callback = nullptr;
    QCheckBox_DragMoveEvent_Callback qcheckbox_dragmoveevent_callback = nullptr;
    QCheckBox_DragLeaveEvent_Callback qcheckbox_dragleaveevent_callback = nullptr;
    QCheckBox_DropEvent_Callback qcheckbox_dropevent_callback = nullptr;
    QCheckBox_ShowEvent_Callback qcheckbox_showevent_callback = nullptr;
    QCheckBox_HideEvent_Callback qcheckbox_hideevent_callback = nullptr;
    QCheckBox_NativeEvent_Callback qcheckbox_nativeevent_callback = nullptr;
    QCheckBox_Metric_Callback qcheckbox_metric_callback = nullptr;
    QCheckBox_InitPainter_Callback qcheckbox_initpainter_callback = nullptr;
    QCheckBox_Redirected_Callback qcheckbox_redirected_callback = nullptr;
    QCheckBox_SharedPainter_Callback qcheckbox_sharedpainter_callback = nullptr;
    QCheckBox_InputMethodEvent_Callback qcheckbox_inputmethodevent_callback = nullptr;
    QCheckBox_InputMethodQuery_Callback qcheckbox_inputmethodquery_callback = nullptr;
    QCheckBox_FocusNextPrevChild_Callback qcheckbox_focusnextprevchild_callback = nullptr;
    QCheckBox_EventFilter_Callback qcheckbox_eventfilter_callback = nullptr;
    QCheckBox_ChildEvent_Callback qcheckbox_childevent_callback = nullptr;
    QCheckBox_CustomEvent_Callback qcheckbox_customevent_callback = nullptr;
    QCheckBox_ConnectNotify_Callback qcheckbox_connectnotify_callback = nullptr;
    QCheckBox_DisconnectNotify_Callback qcheckbox_disconnectnotify_callback = nullptr;
    QCheckBox_UpdateMicroFocus_Callback qcheckbox_updatemicrofocus_callback = nullptr;
    QCheckBox_Create_Callback qcheckbox_create_callback = nullptr;
    QCheckBox_Destroy_Callback qcheckbox_destroy_callback = nullptr;
    QCheckBox_FocusNextChild_Callback qcheckbox_focusnextchild_callback = nullptr;
    QCheckBox_FocusPreviousChild_Callback qcheckbox_focuspreviouschild_callback = nullptr;
    QCheckBox_Sender_Callback qcheckbox_sender_callback = nullptr;
    QCheckBox_SenderSignalIndex_Callback qcheckbox_sendersignalindex_callback = nullptr;
    QCheckBox_Receivers_Callback qcheckbox_receivers_callback = nullptr;
    QCheckBox_IsSignalConnected_Callback qcheckbox_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qcheckbox_metacall_isbase = false;
    mutable bool qcheckbox_sizehint_isbase = false;
    mutable bool qcheckbox_minimumsizehint_isbase = false;
    mutable bool qcheckbox_event_isbase = false;
    mutable bool qcheckbox_hitbutton_isbase = false;
    mutable bool qcheckbox_checkstateset_isbase = false;
    mutable bool qcheckbox_nextcheckstate_isbase = false;
    mutable bool qcheckbox_paintevent_isbase = false;
    mutable bool qcheckbox_mousemoveevent_isbase = false;
    mutable bool qcheckbox_initstyleoption_isbase = false;
    mutable bool qcheckbox_keypressevent_isbase = false;
    mutable bool qcheckbox_keyreleaseevent_isbase = false;
    mutable bool qcheckbox_mousepressevent_isbase = false;
    mutable bool qcheckbox_mousereleaseevent_isbase = false;
    mutable bool qcheckbox_focusinevent_isbase = false;
    mutable bool qcheckbox_focusoutevent_isbase = false;
    mutable bool qcheckbox_changeevent_isbase = false;
    mutable bool qcheckbox_timerevent_isbase = false;
    mutable bool qcheckbox_devtype_isbase = false;
    mutable bool qcheckbox_setvisible_isbase = false;
    mutable bool qcheckbox_heightforwidth_isbase = false;
    mutable bool qcheckbox_hasheightforwidth_isbase = false;
    mutable bool qcheckbox_paintengine_isbase = false;
    mutable bool qcheckbox_mousedoubleclickevent_isbase = false;
    mutable bool qcheckbox_wheelevent_isbase = false;
    mutable bool qcheckbox_enterevent_isbase = false;
    mutable bool qcheckbox_leaveevent_isbase = false;
    mutable bool qcheckbox_moveevent_isbase = false;
    mutable bool qcheckbox_resizeevent_isbase = false;
    mutable bool qcheckbox_closeevent_isbase = false;
    mutable bool qcheckbox_contextmenuevent_isbase = false;
    mutable bool qcheckbox_tabletevent_isbase = false;
    mutable bool qcheckbox_actionevent_isbase = false;
    mutable bool qcheckbox_dragenterevent_isbase = false;
    mutable bool qcheckbox_dragmoveevent_isbase = false;
    mutable bool qcheckbox_dragleaveevent_isbase = false;
    mutable bool qcheckbox_dropevent_isbase = false;
    mutable bool qcheckbox_showevent_isbase = false;
    mutable bool qcheckbox_hideevent_isbase = false;
    mutable bool qcheckbox_nativeevent_isbase = false;
    mutable bool qcheckbox_metric_isbase = false;
    mutable bool qcheckbox_initpainter_isbase = false;
    mutable bool qcheckbox_redirected_isbase = false;
    mutable bool qcheckbox_sharedpainter_isbase = false;
    mutable bool qcheckbox_inputmethodevent_isbase = false;
    mutable bool qcheckbox_inputmethodquery_isbase = false;
    mutable bool qcheckbox_focusnextprevchild_isbase = false;
    mutable bool qcheckbox_eventfilter_isbase = false;
    mutable bool qcheckbox_childevent_isbase = false;
    mutable bool qcheckbox_customevent_isbase = false;
    mutable bool qcheckbox_connectnotify_isbase = false;
    mutable bool qcheckbox_disconnectnotify_isbase = false;
    mutable bool qcheckbox_updatemicrofocus_isbase = false;
    mutable bool qcheckbox_create_isbase = false;
    mutable bool qcheckbox_destroy_isbase = false;
    mutable bool qcheckbox_focusnextchild_isbase = false;
    mutable bool qcheckbox_focuspreviouschild_isbase = false;
    mutable bool qcheckbox_sender_isbase = false;
    mutable bool qcheckbox_sendersignalindex_isbase = false;
    mutable bool qcheckbox_receivers_isbase = false;
    mutable bool qcheckbox_issignalconnected_isbase = false;

  public:
    VirtualQCheckBox(QWidget* parent) : QCheckBox(parent){};
    VirtualQCheckBox() : QCheckBox(){};
    VirtualQCheckBox(const QString& text) : QCheckBox(text){};
    VirtualQCheckBox(const QString& text, QWidget* parent) : QCheckBox(text, parent){};

    ~VirtualQCheckBox() {
        qcheckbox_metacall_callback = nullptr;
        qcheckbox_sizehint_callback = nullptr;
        qcheckbox_minimumsizehint_callback = nullptr;
        qcheckbox_event_callback = nullptr;
        qcheckbox_hitbutton_callback = nullptr;
        qcheckbox_checkstateset_callback = nullptr;
        qcheckbox_nextcheckstate_callback = nullptr;
        qcheckbox_paintevent_callback = nullptr;
        qcheckbox_mousemoveevent_callback = nullptr;
        qcheckbox_initstyleoption_callback = nullptr;
        qcheckbox_keypressevent_callback = nullptr;
        qcheckbox_keyreleaseevent_callback = nullptr;
        qcheckbox_mousepressevent_callback = nullptr;
        qcheckbox_mousereleaseevent_callback = nullptr;
        qcheckbox_focusinevent_callback = nullptr;
        qcheckbox_focusoutevent_callback = nullptr;
        qcheckbox_changeevent_callback = nullptr;
        qcheckbox_timerevent_callback = nullptr;
        qcheckbox_devtype_callback = nullptr;
        qcheckbox_setvisible_callback = nullptr;
        qcheckbox_heightforwidth_callback = nullptr;
        qcheckbox_hasheightforwidth_callback = nullptr;
        qcheckbox_paintengine_callback = nullptr;
        qcheckbox_mousedoubleclickevent_callback = nullptr;
        qcheckbox_wheelevent_callback = nullptr;
        qcheckbox_enterevent_callback = nullptr;
        qcheckbox_leaveevent_callback = nullptr;
        qcheckbox_moveevent_callback = nullptr;
        qcheckbox_resizeevent_callback = nullptr;
        qcheckbox_closeevent_callback = nullptr;
        qcheckbox_contextmenuevent_callback = nullptr;
        qcheckbox_tabletevent_callback = nullptr;
        qcheckbox_actionevent_callback = nullptr;
        qcheckbox_dragenterevent_callback = nullptr;
        qcheckbox_dragmoveevent_callback = nullptr;
        qcheckbox_dragleaveevent_callback = nullptr;
        qcheckbox_dropevent_callback = nullptr;
        qcheckbox_showevent_callback = nullptr;
        qcheckbox_hideevent_callback = nullptr;
        qcheckbox_nativeevent_callback = nullptr;
        qcheckbox_metric_callback = nullptr;
        qcheckbox_initpainter_callback = nullptr;
        qcheckbox_redirected_callback = nullptr;
        qcheckbox_sharedpainter_callback = nullptr;
        qcheckbox_inputmethodevent_callback = nullptr;
        qcheckbox_inputmethodquery_callback = nullptr;
        qcheckbox_focusnextprevchild_callback = nullptr;
        qcheckbox_eventfilter_callback = nullptr;
        qcheckbox_childevent_callback = nullptr;
        qcheckbox_customevent_callback = nullptr;
        qcheckbox_connectnotify_callback = nullptr;
        qcheckbox_disconnectnotify_callback = nullptr;
        qcheckbox_updatemicrofocus_callback = nullptr;
        qcheckbox_create_callback = nullptr;
        qcheckbox_destroy_callback = nullptr;
        qcheckbox_focusnextchild_callback = nullptr;
        qcheckbox_focuspreviouschild_callback = nullptr;
        qcheckbox_sender_callback = nullptr;
        qcheckbox_sendersignalindex_callback = nullptr;
        qcheckbox_receivers_callback = nullptr;
        qcheckbox_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQCheckBox_Metacall_Callback(QCheckBox_Metacall_Callback cb) { qcheckbox_metacall_callback = cb; }
    inline void setQCheckBox_SizeHint_Callback(QCheckBox_SizeHint_Callback cb) { qcheckbox_sizehint_callback = cb; }
    inline void setQCheckBox_MinimumSizeHint_Callback(QCheckBox_MinimumSizeHint_Callback cb) { qcheckbox_minimumsizehint_callback = cb; }
    inline void setQCheckBox_Event_Callback(QCheckBox_Event_Callback cb) { qcheckbox_event_callback = cb; }
    inline void setQCheckBox_HitButton_Callback(QCheckBox_HitButton_Callback cb) { qcheckbox_hitbutton_callback = cb; }
    inline void setQCheckBox_CheckStateSet_Callback(QCheckBox_CheckStateSet_Callback cb) { qcheckbox_checkstateset_callback = cb; }
    inline void setQCheckBox_NextCheckState_Callback(QCheckBox_NextCheckState_Callback cb) { qcheckbox_nextcheckstate_callback = cb; }
    inline void setQCheckBox_PaintEvent_Callback(QCheckBox_PaintEvent_Callback cb) { qcheckbox_paintevent_callback = cb; }
    inline void setQCheckBox_MouseMoveEvent_Callback(QCheckBox_MouseMoveEvent_Callback cb) { qcheckbox_mousemoveevent_callback = cb; }
    inline void setQCheckBox_InitStyleOption_Callback(QCheckBox_InitStyleOption_Callback cb) { qcheckbox_initstyleoption_callback = cb; }
    inline void setQCheckBox_KeyPressEvent_Callback(QCheckBox_KeyPressEvent_Callback cb) { qcheckbox_keypressevent_callback = cb; }
    inline void setQCheckBox_KeyReleaseEvent_Callback(QCheckBox_KeyReleaseEvent_Callback cb) { qcheckbox_keyreleaseevent_callback = cb; }
    inline void setQCheckBox_MousePressEvent_Callback(QCheckBox_MousePressEvent_Callback cb) { qcheckbox_mousepressevent_callback = cb; }
    inline void setQCheckBox_MouseReleaseEvent_Callback(QCheckBox_MouseReleaseEvent_Callback cb) { qcheckbox_mousereleaseevent_callback = cb; }
    inline void setQCheckBox_FocusInEvent_Callback(QCheckBox_FocusInEvent_Callback cb) { qcheckbox_focusinevent_callback = cb; }
    inline void setQCheckBox_FocusOutEvent_Callback(QCheckBox_FocusOutEvent_Callback cb) { qcheckbox_focusoutevent_callback = cb; }
    inline void setQCheckBox_ChangeEvent_Callback(QCheckBox_ChangeEvent_Callback cb) { qcheckbox_changeevent_callback = cb; }
    inline void setQCheckBox_TimerEvent_Callback(QCheckBox_TimerEvent_Callback cb) { qcheckbox_timerevent_callback = cb; }
    inline void setQCheckBox_DevType_Callback(QCheckBox_DevType_Callback cb) { qcheckbox_devtype_callback = cb; }
    inline void setQCheckBox_SetVisible_Callback(QCheckBox_SetVisible_Callback cb) { qcheckbox_setvisible_callback = cb; }
    inline void setQCheckBox_HeightForWidth_Callback(QCheckBox_HeightForWidth_Callback cb) { qcheckbox_heightforwidth_callback = cb; }
    inline void setQCheckBox_HasHeightForWidth_Callback(QCheckBox_HasHeightForWidth_Callback cb) { qcheckbox_hasheightforwidth_callback = cb; }
    inline void setQCheckBox_PaintEngine_Callback(QCheckBox_PaintEngine_Callback cb) { qcheckbox_paintengine_callback = cb; }
    inline void setQCheckBox_MouseDoubleClickEvent_Callback(QCheckBox_MouseDoubleClickEvent_Callback cb) { qcheckbox_mousedoubleclickevent_callback = cb; }
    inline void setQCheckBox_WheelEvent_Callback(QCheckBox_WheelEvent_Callback cb) { qcheckbox_wheelevent_callback = cb; }
    inline void setQCheckBox_EnterEvent_Callback(QCheckBox_EnterEvent_Callback cb) { qcheckbox_enterevent_callback = cb; }
    inline void setQCheckBox_LeaveEvent_Callback(QCheckBox_LeaveEvent_Callback cb) { qcheckbox_leaveevent_callback = cb; }
    inline void setQCheckBox_MoveEvent_Callback(QCheckBox_MoveEvent_Callback cb) { qcheckbox_moveevent_callback = cb; }
    inline void setQCheckBox_ResizeEvent_Callback(QCheckBox_ResizeEvent_Callback cb) { qcheckbox_resizeevent_callback = cb; }
    inline void setQCheckBox_CloseEvent_Callback(QCheckBox_CloseEvent_Callback cb) { qcheckbox_closeevent_callback = cb; }
    inline void setQCheckBox_ContextMenuEvent_Callback(QCheckBox_ContextMenuEvent_Callback cb) { qcheckbox_contextmenuevent_callback = cb; }
    inline void setQCheckBox_TabletEvent_Callback(QCheckBox_TabletEvent_Callback cb) { qcheckbox_tabletevent_callback = cb; }
    inline void setQCheckBox_ActionEvent_Callback(QCheckBox_ActionEvent_Callback cb) { qcheckbox_actionevent_callback = cb; }
    inline void setQCheckBox_DragEnterEvent_Callback(QCheckBox_DragEnterEvent_Callback cb) { qcheckbox_dragenterevent_callback = cb; }
    inline void setQCheckBox_DragMoveEvent_Callback(QCheckBox_DragMoveEvent_Callback cb) { qcheckbox_dragmoveevent_callback = cb; }
    inline void setQCheckBox_DragLeaveEvent_Callback(QCheckBox_DragLeaveEvent_Callback cb) { qcheckbox_dragleaveevent_callback = cb; }
    inline void setQCheckBox_DropEvent_Callback(QCheckBox_DropEvent_Callback cb) { qcheckbox_dropevent_callback = cb; }
    inline void setQCheckBox_ShowEvent_Callback(QCheckBox_ShowEvent_Callback cb) { qcheckbox_showevent_callback = cb; }
    inline void setQCheckBox_HideEvent_Callback(QCheckBox_HideEvent_Callback cb) { qcheckbox_hideevent_callback = cb; }
    inline void setQCheckBox_NativeEvent_Callback(QCheckBox_NativeEvent_Callback cb) { qcheckbox_nativeevent_callback = cb; }
    inline void setQCheckBox_Metric_Callback(QCheckBox_Metric_Callback cb) { qcheckbox_metric_callback = cb; }
    inline void setQCheckBox_InitPainter_Callback(QCheckBox_InitPainter_Callback cb) { qcheckbox_initpainter_callback = cb; }
    inline void setQCheckBox_Redirected_Callback(QCheckBox_Redirected_Callback cb) { qcheckbox_redirected_callback = cb; }
    inline void setQCheckBox_SharedPainter_Callback(QCheckBox_SharedPainter_Callback cb) { qcheckbox_sharedpainter_callback = cb; }
    inline void setQCheckBox_InputMethodEvent_Callback(QCheckBox_InputMethodEvent_Callback cb) { qcheckbox_inputmethodevent_callback = cb; }
    inline void setQCheckBox_InputMethodQuery_Callback(QCheckBox_InputMethodQuery_Callback cb) { qcheckbox_inputmethodquery_callback = cb; }
    inline void setQCheckBox_FocusNextPrevChild_Callback(QCheckBox_FocusNextPrevChild_Callback cb) { qcheckbox_focusnextprevchild_callback = cb; }
    inline void setQCheckBox_EventFilter_Callback(QCheckBox_EventFilter_Callback cb) { qcheckbox_eventfilter_callback = cb; }
    inline void setQCheckBox_ChildEvent_Callback(QCheckBox_ChildEvent_Callback cb) { qcheckbox_childevent_callback = cb; }
    inline void setQCheckBox_CustomEvent_Callback(QCheckBox_CustomEvent_Callback cb) { qcheckbox_customevent_callback = cb; }
    inline void setQCheckBox_ConnectNotify_Callback(QCheckBox_ConnectNotify_Callback cb) { qcheckbox_connectnotify_callback = cb; }
    inline void setQCheckBox_DisconnectNotify_Callback(QCheckBox_DisconnectNotify_Callback cb) { qcheckbox_disconnectnotify_callback = cb; }
    inline void setQCheckBox_UpdateMicroFocus_Callback(QCheckBox_UpdateMicroFocus_Callback cb) { qcheckbox_updatemicrofocus_callback = cb; }
    inline void setQCheckBox_Create_Callback(QCheckBox_Create_Callback cb) { qcheckbox_create_callback = cb; }
    inline void setQCheckBox_Destroy_Callback(QCheckBox_Destroy_Callback cb) { qcheckbox_destroy_callback = cb; }
    inline void setQCheckBox_FocusNextChild_Callback(QCheckBox_FocusNextChild_Callback cb) { qcheckbox_focusnextchild_callback = cb; }
    inline void setQCheckBox_FocusPreviousChild_Callback(QCheckBox_FocusPreviousChild_Callback cb) { qcheckbox_focuspreviouschild_callback = cb; }
    inline void setQCheckBox_Sender_Callback(QCheckBox_Sender_Callback cb) { qcheckbox_sender_callback = cb; }
    inline void setQCheckBox_SenderSignalIndex_Callback(QCheckBox_SenderSignalIndex_Callback cb) { qcheckbox_sendersignalindex_callback = cb; }
    inline void setQCheckBox_Receivers_Callback(QCheckBox_Receivers_Callback cb) { qcheckbox_receivers_callback = cb; }
    inline void setQCheckBox_IsSignalConnected_Callback(QCheckBox_IsSignalConnected_Callback cb) { qcheckbox_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQCheckBox_Metacall_IsBase(bool value) const { qcheckbox_metacall_isbase = value; }
    inline void setQCheckBox_SizeHint_IsBase(bool value) const { qcheckbox_sizehint_isbase = value; }
    inline void setQCheckBox_MinimumSizeHint_IsBase(bool value) const { qcheckbox_minimumsizehint_isbase = value; }
    inline void setQCheckBox_Event_IsBase(bool value) const { qcheckbox_event_isbase = value; }
    inline void setQCheckBox_HitButton_IsBase(bool value) const { qcheckbox_hitbutton_isbase = value; }
    inline void setQCheckBox_CheckStateSet_IsBase(bool value) const { qcheckbox_checkstateset_isbase = value; }
    inline void setQCheckBox_NextCheckState_IsBase(bool value) const { qcheckbox_nextcheckstate_isbase = value; }
    inline void setQCheckBox_PaintEvent_IsBase(bool value) const { qcheckbox_paintevent_isbase = value; }
    inline void setQCheckBox_MouseMoveEvent_IsBase(bool value) const { qcheckbox_mousemoveevent_isbase = value; }
    inline void setQCheckBox_InitStyleOption_IsBase(bool value) const { qcheckbox_initstyleoption_isbase = value; }
    inline void setQCheckBox_KeyPressEvent_IsBase(bool value) const { qcheckbox_keypressevent_isbase = value; }
    inline void setQCheckBox_KeyReleaseEvent_IsBase(bool value) const { qcheckbox_keyreleaseevent_isbase = value; }
    inline void setQCheckBox_MousePressEvent_IsBase(bool value) const { qcheckbox_mousepressevent_isbase = value; }
    inline void setQCheckBox_MouseReleaseEvent_IsBase(bool value) const { qcheckbox_mousereleaseevent_isbase = value; }
    inline void setQCheckBox_FocusInEvent_IsBase(bool value) const { qcheckbox_focusinevent_isbase = value; }
    inline void setQCheckBox_FocusOutEvent_IsBase(bool value) const { qcheckbox_focusoutevent_isbase = value; }
    inline void setQCheckBox_ChangeEvent_IsBase(bool value) const { qcheckbox_changeevent_isbase = value; }
    inline void setQCheckBox_TimerEvent_IsBase(bool value) const { qcheckbox_timerevent_isbase = value; }
    inline void setQCheckBox_DevType_IsBase(bool value) const { qcheckbox_devtype_isbase = value; }
    inline void setQCheckBox_SetVisible_IsBase(bool value) const { qcheckbox_setvisible_isbase = value; }
    inline void setQCheckBox_HeightForWidth_IsBase(bool value) const { qcheckbox_heightforwidth_isbase = value; }
    inline void setQCheckBox_HasHeightForWidth_IsBase(bool value) const { qcheckbox_hasheightforwidth_isbase = value; }
    inline void setQCheckBox_PaintEngine_IsBase(bool value) const { qcheckbox_paintengine_isbase = value; }
    inline void setQCheckBox_MouseDoubleClickEvent_IsBase(bool value) const { qcheckbox_mousedoubleclickevent_isbase = value; }
    inline void setQCheckBox_WheelEvent_IsBase(bool value) const { qcheckbox_wheelevent_isbase = value; }
    inline void setQCheckBox_EnterEvent_IsBase(bool value) const { qcheckbox_enterevent_isbase = value; }
    inline void setQCheckBox_LeaveEvent_IsBase(bool value) const { qcheckbox_leaveevent_isbase = value; }
    inline void setQCheckBox_MoveEvent_IsBase(bool value) const { qcheckbox_moveevent_isbase = value; }
    inline void setQCheckBox_ResizeEvent_IsBase(bool value) const { qcheckbox_resizeevent_isbase = value; }
    inline void setQCheckBox_CloseEvent_IsBase(bool value) const { qcheckbox_closeevent_isbase = value; }
    inline void setQCheckBox_ContextMenuEvent_IsBase(bool value) const { qcheckbox_contextmenuevent_isbase = value; }
    inline void setQCheckBox_TabletEvent_IsBase(bool value) const { qcheckbox_tabletevent_isbase = value; }
    inline void setQCheckBox_ActionEvent_IsBase(bool value) const { qcheckbox_actionevent_isbase = value; }
    inline void setQCheckBox_DragEnterEvent_IsBase(bool value) const { qcheckbox_dragenterevent_isbase = value; }
    inline void setQCheckBox_DragMoveEvent_IsBase(bool value) const { qcheckbox_dragmoveevent_isbase = value; }
    inline void setQCheckBox_DragLeaveEvent_IsBase(bool value) const { qcheckbox_dragleaveevent_isbase = value; }
    inline void setQCheckBox_DropEvent_IsBase(bool value) const { qcheckbox_dropevent_isbase = value; }
    inline void setQCheckBox_ShowEvent_IsBase(bool value) const { qcheckbox_showevent_isbase = value; }
    inline void setQCheckBox_HideEvent_IsBase(bool value) const { qcheckbox_hideevent_isbase = value; }
    inline void setQCheckBox_NativeEvent_IsBase(bool value) const { qcheckbox_nativeevent_isbase = value; }
    inline void setQCheckBox_Metric_IsBase(bool value) const { qcheckbox_metric_isbase = value; }
    inline void setQCheckBox_InitPainter_IsBase(bool value) const { qcheckbox_initpainter_isbase = value; }
    inline void setQCheckBox_Redirected_IsBase(bool value) const { qcheckbox_redirected_isbase = value; }
    inline void setQCheckBox_SharedPainter_IsBase(bool value) const { qcheckbox_sharedpainter_isbase = value; }
    inline void setQCheckBox_InputMethodEvent_IsBase(bool value) const { qcheckbox_inputmethodevent_isbase = value; }
    inline void setQCheckBox_InputMethodQuery_IsBase(bool value) const { qcheckbox_inputmethodquery_isbase = value; }
    inline void setQCheckBox_FocusNextPrevChild_IsBase(bool value) const { qcheckbox_focusnextprevchild_isbase = value; }
    inline void setQCheckBox_EventFilter_IsBase(bool value) const { qcheckbox_eventfilter_isbase = value; }
    inline void setQCheckBox_ChildEvent_IsBase(bool value) const { qcheckbox_childevent_isbase = value; }
    inline void setQCheckBox_CustomEvent_IsBase(bool value) const { qcheckbox_customevent_isbase = value; }
    inline void setQCheckBox_ConnectNotify_IsBase(bool value) const { qcheckbox_connectnotify_isbase = value; }
    inline void setQCheckBox_DisconnectNotify_IsBase(bool value) const { qcheckbox_disconnectnotify_isbase = value; }
    inline void setQCheckBox_UpdateMicroFocus_IsBase(bool value) const { qcheckbox_updatemicrofocus_isbase = value; }
    inline void setQCheckBox_Create_IsBase(bool value) const { qcheckbox_create_isbase = value; }
    inline void setQCheckBox_Destroy_IsBase(bool value) const { qcheckbox_destroy_isbase = value; }
    inline void setQCheckBox_FocusNextChild_IsBase(bool value) const { qcheckbox_focusnextchild_isbase = value; }
    inline void setQCheckBox_FocusPreviousChild_IsBase(bool value) const { qcheckbox_focuspreviouschild_isbase = value; }
    inline void setQCheckBox_Sender_IsBase(bool value) const { qcheckbox_sender_isbase = value; }
    inline void setQCheckBox_SenderSignalIndex_IsBase(bool value) const { qcheckbox_sendersignalindex_isbase = value; }
    inline void setQCheckBox_Receivers_IsBase(bool value) const { qcheckbox_receivers_isbase = value; }
    inline void setQCheckBox_IsSignalConnected_IsBase(bool value) const { qcheckbox_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcheckbox_metacall_isbase) {
            qcheckbox_metacall_isbase = false;
            return QCheckBox::qt_metacall(param1, param2, param3);
        } else if (qcheckbox_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qcheckbox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QCheckBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qcheckbox_sizehint_isbase) {
            qcheckbox_sizehint_isbase = false;
            return QCheckBox::sizeHint();
        } else if (qcheckbox_sizehint_callback != nullptr) {
            QSize* callback_ret = qcheckbox_sizehint_callback();
            return *callback_ret;
        } else {
            return QCheckBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qcheckbox_minimumsizehint_isbase) {
            qcheckbox_minimumsizehint_isbase = false;
            return QCheckBox::minimumSizeHint();
        } else if (qcheckbox_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qcheckbox_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QCheckBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qcheckbox_event_isbase) {
            qcheckbox_event_isbase = false;
            return QCheckBox::event(e);
        } else if (qcheckbox_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qcheckbox_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCheckBox::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (qcheckbox_hitbutton_isbase) {
            qcheckbox_hitbutton_isbase = false;
            return QCheckBox::hitButton(pos);
        } else if (qcheckbox_hitbutton_callback != nullptr) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);

            bool callback_ret = qcheckbox_hitbutton_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCheckBox::hitButton(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (qcheckbox_checkstateset_isbase) {
            qcheckbox_checkstateset_isbase = false;
            QCheckBox::checkStateSet();
        } else if (qcheckbox_checkstateset_callback != nullptr) {
            qcheckbox_checkstateset_callback();
        } else {
            QCheckBox::checkStateSet();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (qcheckbox_nextcheckstate_isbase) {
            qcheckbox_nextcheckstate_isbase = false;
            QCheckBox::nextCheckState();
        } else if (qcheckbox_nextcheckstate_callback != nullptr) {
            qcheckbox_nextcheckstate_callback();
        } else {
            QCheckBox::nextCheckState();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qcheckbox_paintevent_isbase) {
            qcheckbox_paintevent_isbase = false;
            QCheckBox::paintEvent(param1);
        } else if (qcheckbox_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            qcheckbox_paintevent_callback(this, cbval1);
        } else {
            QCheckBox::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qcheckbox_mousemoveevent_isbase) {
            qcheckbox_mousemoveevent_isbase = false;
            QCheckBox::mouseMoveEvent(param1);
        } else if (qcheckbox_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qcheckbox_mousemoveevent_callback(this, cbval1);
        } else {
            QCheckBox::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionButton* option) const override {
        if (qcheckbox_initstyleoption_isbase) {
            qcheckbox_initstyleoption_isbase = false;
            QCheckBox::initStyleOption(option);
        } else if (qcheckbox_initstyleoption_callback != nullptr) {
            QStyleOptionButton* cbval1 = option;

            qcheckbox_initstyleoption_callback(this, cbval1);
        } else {
            QCheckBox::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qcheckbox_keypressevent_isbase) {
            qcheckbox_keypressevent_isbase = false;
            QCheckBox::keyPressEvent(e);
        } else if (qcheckbox_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            qcheckbox_keypressevent_callback(this, cbval1);
        } else {
            QCheckBox::keyPressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qcheckbox_keyreleaseevent_isbase) {
            qcheckbox_keyreleaseevent_isbase = false;
            QCheckBox::keyReleaseEvent(e);
        } else if (qcheckbox_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            qcheckbox_keyreleaseevent_callback(this, cbval1);
        } else {
            QCheckBox::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qcheckbox_mousepressevent_isbase) {
            qcheckbox_mousepressevent_isbase = false;
            QCheckBox::mousePressEvent(e);
        } else if (qcheckbox_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            qcheckbox_mousepressevent_callback(this, cbval1);
        } else {
            QCheckBox::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qcheckbox_mousereleaseevent_isbase) {
            qcheckbox_mousereleaseevent_isbase = false;
            QCheckBox::mouseReleaseEvent(e);
        } else if (qcheckbox_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            qcheckbox_mousereleaseevent_callback(this, cbval1);
        } else {
            QCheckBox::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qcheckbox_focusinevent_isbase) {
            qcheckbox_focusinevent_isbase = false;
            QCheckBox::focusInEvent(e);
        } else if (qcheckbox_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            qcheckbox_focusinevent_callback(this, cbval1);
        } else {
            QCheckBox::focusInEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qcheckbox_focusoutevent_isbase) {
            qcheckbox_focusoutevent_isbase = false;
            QCheckBox::focusOutEvent(e);
        } else if (qcheckbox_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            qcheckbox_focusoutevent_callback(this, cbval1);
        } else {
            QCheckBox::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qcheckbox_changeevent_isbase) {
            qcheckbox_changeevent_isbase = false;
            QCheckBox::changeEvent(e);
        } else if (qcheckbox_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            qcheckbox_changeevent_callback(this, cbval1);
        } else {
            QCheckBox::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qcheckbox_timerevent_isbase) {
            qcheckbox_timerevent_isbase = false;
            QCheckBox::timerEvent(e);
        } else if (qcheckbox_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = e;

            qcheckbox_timerevent_callback(this, cbval1);
        } else {
            QCheckBox::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qcheckbox_devtype_isbase) {
            qcheckbox_devtype_isbase = false;
            return QCheckBox::devType();
        } else if (qcheckbox_devtype_callback != nullptr) {
            int callback_ret = qcheckbox_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QCheckBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qcheckbox_setvisible_isbase) {
            qcheckbox_setvisible_isbase = false;
            QCheckBox::setVisible(visible);
        } else if (qcheckbox_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qcheckbox_setvisible_callback(this, cbval1);
        } else {
            QCheckBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qcheckbox_heightforwidth_isbase) {
            qcheckbox_heightforwidth_isbase = false;
            return QCheckBox::heightForWidth(param1);
        } else if (qcheckbox_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qcheckbox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QCheckBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qcheckbox_hasheightforwidth_isbase) {
            qcheckbox_hasheightforwidth_isbase = false;
            return QCheckBox::hasHeightForWidth();
        } else if (qcheckbox_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qcheckbox_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QCheckBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qcheckbox_paintengine_isbase) {
            qcheckbox_paintengine_isbase = false;
            return QCheckBox::paintEngine();
        } else if (qcheckbox_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qcheckbox_paintengine_callback();
            return callback_ret;
        } else {
            return QCheckBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qcheckbox_mousedoubleclickevent_isbase) {
            qcheckbox_mousedoubleclickevent_isbase = false;
            QCheckBox::mouseDoubleClickEvent(event);
        } else if (qcheckbox_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qcheckbox_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QCheckBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qcheckbox_wheelevent_isbase) {
            qcheckbox_wheelevent_isbase = false;
            QCheckBox::wheelEvent(event);
        } else if (qcheckbox_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qcheckbox_wheelevent_callback(this, cbval1);
        } else {
            QCheckBox::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qcheckbox_enterevent_isbase) {
            qcheckbox_enterevent_isbase = false;
            QCheckBox::enterEvent(event);
        } else if (qcheckbox_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qcheckbox_enterevent_callback(this, cbval1);
        } else {
            QCheckBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qcheckbox_leaveevent_isbase) {
            qcheckbox_leaveevent_isbase = false;
            QCheckBox::leaveEvent(event);
        } else if (qcheckbox_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qcheckbox_leaveevent_callback(this, cbval1);
        } else {
            QCheckBox::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qcheckbox_moveevent_isbase) {
            qcheckbox_moveevent_isbase = false;
            QCheckBox::moveEvent(event);
        } else if (qcheckbox_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qcheckbox_moveevent_callback(this, cbval1);
        } else {
            QCheckBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qcheckbox_resizeevent_isbase) {
            qcheckbox_resizeevent_isbase = false;
            QCheckBox::resizeEvent(event);
        } else if (qcheckbox_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qcheckbox_resizeevent_callback(this, cbval1);
        } else {
            QCheckBox::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qcheckbox_closeevent_isbase) {
            qcheckbox_closeevent_isbase = false;
            QCheckBox::closeEvent(event);
        } else if (qcheckbox_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qcheckbox_closeevent_callback(this, cbval1);
        } else {
            QCheckBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qcheckbox_contextmenuevent_isbase) {
            qcheckbox_contextmenuevent_isbase = false;
            QCheckBox::contextMenuEvent(event);
        } else if (qcheckbox_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qcheckbox_contextmenuevent_callback(this, cbval1);
        } else {
            QCheckBox::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qcheckbox_tabletevent_isbase) {
            qcheckbox_tabletevent_isbase = false;
            QCheckBox::tabletEvent(event);
        } else if (qcheckbox_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qcheckbox_tabletevent_callback(this, cbval1);
        } else {
            QCheckBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qcheckbox_actionevent_isbase) {
            qcheckbox_actionevent_isbase = false;
            QCheckBox::actionEvent(event);
        } else if (qcheckbox_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qcheckbox_actionevent_callback(this, cbval1);
        } else {
            QCheckBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qcheckbox_dragenterevent_isbase) {
            qcheckbox_dragenterevent_isbase = false;
            QCheckBox::dragEnterEvent(event);
        } else if (qcheckbox_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qcheckbox_dragenterevent_callback(this, cbval1);
        } else {
            QCheckBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qcheckbox_dragmoveevent_isbase) {
            qcheckbox_dragmoveevent_isbase = false;
            QCheckBox::dragMoveEvent(event);
        } else if (qcheckbox_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qcheckbox_dragmoveevent_callback(this, cbval1);
        } else {
            QCheckBox::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qcheckbox_dragleaveevent_isbase) {
            qcheckbox_dragleaveevent_isbase = false;
            QCheckBox::dragLeaveEvent(event);
        } else if (qcheckbox_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qcheckbox_dragleaveevent_callback(this, cbval1);
        } else {
            QCheckBox::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qcheckbox_dropevent_isbase) {
            qcheckbox_dropevent_isbase = false;
            QCheckBox::dropEvent(event);
        } else if (qcheckbox_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qcheckbox_dropevent_callback(this, cbval1);
        } else {
            QCheckBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qcheckbox_showevent_isbase) {
            qcheckbox_showevent_isbase = false;
            QCheckBox::showEvent(event);
        } else if (qcheckbox_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qcheckbox_showevent_callback(this, cbval1);
        } else {
            QCheckBox::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qcheckbox_hideevent_isbase) {
            qcheckbox_hideevent_isbase = false;
            QCheckBox::hideEvent(event);
        } else if (qcheckbox_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qcheckbox_hideevent_callback(this, cbval1);
        } else {
            QCheckBox::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qcheckbox_nativeevent_isbase) {
            qcheckbox_nativeevent_isbase = false;
            return QCheckBox::nativeEvent(eventType, message, result);
        } else if (qcheckbox_nativeevent_callback != nullptr) {
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

            bool callback_ret = qcheckbox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QCheckBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qcheckbox_metric_isbase) {
            qcheckbox_metric_isbase = false;
            return QCheckBox::metric(param1);
        } else if (qcheckbox_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qcheckbox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QCheckBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qcheckbox_initpainter_isbase) {
            qcheckbox_initpainter_isbase = false;
            QCheckBox::initPainter(painter);
        } else if (qcheckbox_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qcheckbox_initpainter_callback(this, cbval1);
        } else {
            QCheckBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qcheckbox_redirected_isbase) {
            qcheckbox_redirected_isbase = false;
            return QCheckBox::redirected(offset);
        } else if (qcheckbox_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qcheckbox_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCheckBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qcheckbox_sharedpainter_isbase) {
            qcheckbox_sharedpainter_isbase = false;
            return QCheckBox::sharedPainter();
        } else if (qcheckbox_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qcheckbox_sharedpainter_callback();
            return callback_ret;
        } else {
            return QCheckBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qcheckbox_inputmethodevent_isbase) {
            qcheckbox_inputmethodevent_isbase = false;
            QCheckBox::inputMethodEvent(param1);
        } else if (qcheckbox_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qcheckbox_inputmethodevent_callback(this, cbval1);
        } else {
            QCheckBox::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qcheckbox_inputmethodquery_isbase) {
            qcheckbox_inputmethodquery_isbase = false;
            return QCheckBox::inputMethodQuery(param1);
        } else if (qcheckbox_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qcheckbox_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QCheckBox::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qcheckbox_focusnextprevchild_isbase) {
            qcheckbox_focusnextprevchild_isbase = false;
            return QCheckBox::focusNextPrevChild(next);
        } else if (qcheckbox_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qcheckbox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCheckBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcheckbox_eventfilter_isbase) {
            qcheckbox_eventfilter_isbase = false;
            return QCheckBox::eventFilter(watched, event);
        } else if (qcheckbox_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qcheckbox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QCheckBox::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcheckbox_childevent_isbase) {
            qcheckbox_childevent_isbase = false;
            QCheckBox::childEvent(event);
        } else if (qcheckbox_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qcheckbox_childevent_callback(this, cbval1);
        } else {
            QCheckBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcheckbox_customevent_isbase) {
            qcheckbox_customevent_isbase = false;
            QCheckBox::customEvent(event);
        } else if (qcheckbox_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qcheckbox_customevent_callback(this, cbval1);
        } else {
            QCheckBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcheckbox_connectnotify_isbase) {
            qcheckbox_connectnotify_isbase = false;
            QCheckBox::connectNotify(signal);
        } else if (qcheckbox_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcheckbox_connectnotify_callback(this, cbval1);
        } else {
            QCheckBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcheckbox_disconnectnotify_isbase) {
            qcheckbox_disconnectnotify_isbase = false;
            QCheckBox::disconnectNotify(signal);
        } else if (qcheckbox_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcheckbox_disconnectnotify_callback(this, cbval1);
        } else {
            QCheckBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qcheckbox_updatemicrofocus_isbase) {
            qcheckbox_updatemicrofocus_isbase = false;
            QCheckBox::updateMicroFocus();
        } else if (qcheckbox_updatemicrofocus_callback != nullptr) {
            qcheckbox_updatemicrofocus_callback();
        } else {
            QCheckBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qcheckbox_create_isbase) {
            qcheckbox_create_isbase = false;
            QCheckBox::create();
        } else if (qcheckbox_create_callback != nullptr) {
            qcheckbox_create_callback();
        } else {
            QCheckBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qcheckbox_destroy_isbase) {
            qcheckbox_destroy_isbase = false;
            QCheckBox::destroy();
        } else if (qcheckbox_destroy_callback != nullptr) {
            qcheckbox_destroy_callback();
        } else {
            QCheckBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qcheckbox_focusnextchild_isbase) {
            qcheckbox_focusnextchild_isbase = false;
            return QCheckBox::focusNextChild();
        } else if (qcheckbox_focusnextchild_callback != nullptr) {
            bool callback_ret = qcheckbox_focusnextchild_callback();
            return callback_ret;
        } else {
            return QCheckBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qcheckbox_focuspreviouschild_isbase) {
            qcheckbox_focuspreviouschild_isbase = false;
            return QCheckBox::focusPreviousChild();
        } else if (qcheckbox_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qcheckbox_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QCheckBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcheckbox_sender_isbase) {
            qcheckbox_sender_isbase = false;
            return QCheckBox::sender();
        } else if (qcheckbox_sender_callback != nullptr) {
            QObject* callback_ret = qcheckbox_sender_callback();
            return callback_ret;
        } else {
            return QCheckBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcheckbox_sendersignalindex_isbase) {
            qcheckbox_sendersignalindex_isbase = false;
            return QCheckBox::senderSignalIndex();
        } else if (qcheckbox_sendersignalindex_callback != nullptr) {
            int callback_ret = qcheckbox_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QCheckBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcheckbox_receivers_isbase) {
            qcheckbox_receivers_isbase = false;
            return QCheckBox::receivers(signal);
        } else if (qcheckbox_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qcheckbox_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QCheckBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcheckbox_issignalconnected_isbase) {
            qcheckbox_issignalconnected_isbase = false;
            return QCheckBox::isSignalConnected(signal);
        } else if (qcheckbox_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qcheckbox_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCheckBox::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QCheckBox_Event(QCheckBox* self, QEvent* e);
    friend bool QCheckBox_QBaseEvent(QCheckBox* self, QEvent* e);
    friend bool QCheckBox_HitButton(const QCheckBox* self, const QPoint* pos);
    friend bool QCheckBox_QBaseHitButton(const QCheckBox* self, const QPoint* pos);
    friend void QCheckBox_CheckStateSet(QCheckBox* self);
    friend void QCheckBox_QBaseCheckStateSet(QCheckBox* self);
    friend void QCheckBox_NextCheckState(QCheckBox* self);
    friend void QCheckBox_QBaseNextCheckState(QCheckBox* self);
    friend void QCheckBox_PaintEvent(QCheckBox* self, QPaintEvent* param1);
    friend void QCheckBox_QBasePaintEvent(QCheckBox* self, QPaintEvent* param1);
    friend void QCheckBox_MouseMoveEvent(QCheckBox* self, QMouseEvent* param1);
    friend void QCheckBox_QBaseMouseMoveEvent(QCheckBox* self, QMouseEvent* param1);
    friend void QCheckBox_InitStyleOption(const QCheckBox* self, QStyleOptionButton* option);
    friend void QCheckBox_QBaseInitStyleOption(const QCheckBox* self, QStyleOptionButton* option);
    friend void QCheckBox_KeyPressEvent(QCheckBox* self, QKeyEvent* e);
    friend void QCheckBox_QBaseKeyPressEvent(QCheckBox* self, QKeyEvent* e);
    friend void QCheckBox_KeyReleaseEvent(QCheckBox* self, QKeyEvent* e);
    friend void QCheckBox_QBaseKeyReleaseEvent(QCheckBox* self, QKeyEvent* e);
    friend void QCheckBox_MousePressEvent(QCheckBox* self, QMouseEvent* e);
    friend void QCheckBox_QBaseMousePressEvent(QCheckBox* self, QMouseEvent* e);
    friend void QCheckBox_MouseReleaseEvent(QCheckBox* self, QMouseEvent* e);
    friend void QCheckBox_QBaseMouseReleaseEvent(QCheckBox* self, QMouseEvent* e);
    friend void QCheckBox_FocusInEvent(QCheckBox* self, QFocusEvent* e);
    friend void QCheckBox_QBaseFocusInEvent(QCheckBox* self, QFocusEvent* e);
    friend void QCheckBox_FocusOutEvent(QCheckBox* self, QFocusEvent* e);
    friend void QCheckBox_QBaseFocusOutEvent(QCheckBox* self, QFocusEvent* e);
    friend void QCheckBox_ChangeEvent(QCheckBox* self, QEvent* e);
    friend void QCheckBox_QBaseChangeEvent(QCheckBox* self, QEvent* e);
    friend void QCheckBox_TimerEvent(QCheckBox* self, QTimerEvent* e);
    friend void QCheckBox_QBaseTimerEvent(QCheckBox* self, QTimerEvent* e);
    friend void QCheckBox_MouseDoubleClickEvent(QCheckBox* self, QMouseEvent* event);
    friend void QCheckBox_QBaseMouseDoubleClickEvent(QCheckBox* self, QMouseEvent* event);
    friend void QCheckBox_WheelEvent(QCheckBox* self, QWheelEvent* event);
    friend void QCheckBox_QBaseWheelEvent(QCheckBox* self, QWheelEvent* event);
    friend void QCheckBox_EnterEvent(QCheckBox* self, QEnterEvent* event);
    friend void QCheckBox_QBaseEnterEvent(QCheckBox* self, QEnterEvent* event);
    friend void QCheckBox_LeaveEvent(QCheckBox* self, QEvent* event);
    friend void QCheckBox_QBaseLeaveEvent(QCheckBox* self, QEvent* event);
    friend void QCheckBox_MoveEvent(QCheckBox* self, QMoveEvent* event);
    friend void QCheckBox_QBaseMoveEvent(QCheckBox* self, QMoveEvent* event);
    friend void QCheckBox_ResizeEvent(QCheckBox* self, QResizeEvent* event);
    friend void QCheckBox_QBaseResizeEvent(QCheckBox* self, QResizeEvent* event);
    friend void QCheckBox_CloseEvent(QCheckBox* self, QCloseEvent* event);
    friend void QCheckBox_QBaseCloseEvent(QCheckBox* self, QCloseEvent* event);
    friend void QCheckBox_ContextMenuEvent(QCheckBox* self, QContextMenuEvent* event);
    friend void QCheckBox_QBaseContextMenuEvent(QCheckBox* self, QContextMenuEvent* event);
    friend void QCheckBox_TabletEvent(QCheckBox* self, QTabletEvent* event);
    friend void QCheckBox_QBaseTabletEvent(QCheckBox* self, QTabletEvent* event);
    friend void QCheckBox_ActionEvent(QCheckBox* self, QActionEvent* event);
    friend void QCheckBox_QBaseActionEvent(QCheckBox* self, QActionEvent* event);
    friend void QCheckBox_DragEnterEvent(QCheckBox* self, QDragEnterEvent* event);
    friend void QCheckBox_QBaseDragEnterEvent(QCheckBox* self, QDragEnterEvent* event);
    friend void QCheckBox_DragMoveEvent(QCheckBox* self, QDragMoveEvent* event);
    friend void QCheckBox_QBaseDragMoveEvent(QCheckBox* self, QDragMoveEvent* event);
    friend void QCheckBox_DragLeaveEvent(QCheckBox* self, QDragLeaveEvent* event);
    friend void QCheckBox_QBaseDragLeaveEvent(QCheckBox* self, QDragLeaveEvent* event);
    friend void QCheckBox_DropEvent(QCheckBox* self, QDropEvent* event);
    friend void QCheckBox_QBaseDropEvent(QCheckBox* self, QDropEvent* event);
    friend void QCheckBox_ShowEvent(QCheckBox* self, QShowEvent* event);
    friend void QCheckBox_QBaseShowEvent(QCheckBox* self, QShowEvent* event);
    friend void QCheckBox_HideEvent(QCheckBox* self, QHideEvent* event);
    friend void QCheckBox_QBaseHideEvent(QCheckBox* self, QHideEvent* event);
    friend bool QCheckBox_NativeEvent(QCheckBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QCheckBox_QBaseNativeEvent(QCheckBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QCheckBox_Metric(const QCheckBox* self, int param1);
    friend int QCheckBox_QBaseMetric(const QCheckBox* self, int param1);
    friend void QCheckBox_InitPainter(const QCheckBox* self, QPainter* painter);
    friend void QCheckBox_QBaseInitPainter(const QCheckBox* self, QPainter* painter);
    friend QPaintDevice* QCheckBox_Redirected(const QCheckBox* self, QPoint* offset);
    friend QPaintDevice* QCheckBox_QBaseRedirected(const QCheckBox* self, QPoint* offset);
    friend QPainter* QCheckBox_SharedPainter(const QCheckBox* self);
    friend QPainter* QCheckBox_QBaseSharedPainter(const QCheckBox* self);
    friend void QCheckBox_InputMethodEvent(QCheckBox* self, QInputMethodEvent* param1);
    friend void QCheckBox_QBaseInputMethodEvent(QCheckBox* self, QInputMethodEvent* param1);
    friend bool QCheckBox_FocusNextPrevChild(QCheckBox* self, bool next);
    friend bool QCheckBox_QBaseFocusNextPrevChild(QCheckBox* self, bool next);
    friend void QCheckBox_ChildEvent(QCheckBox* self, QChildEvent* event);
    friend void QCheckBox_QBaseChildEvent(QCheckBox* self, QChildEvent* event);
    friend void QCheckBox_CustomEvent(QCheckBox* self, QEvent* event);
    friend void QCheckBox_QBaseCustomEvent(QCheckBox* self, QEvent* event);
    friend void QCheckBox_ConnectNotify(QCheckBox* self, const QMetaMethod* signal);
    friend void QCheckBox_QBaseConnectNotify(QCheckBox* self, const QMetaMethod* signal);
    friend void QCheckBox_DisconnectNotify(QCheckBox* self, const QMetaMethod* signal);
    friend void QCheckBox_QBaseDisconnectNotify(QCheckBox* self, const QMetaMethod* signal);
    friend void QCheckBox_UpdateMicroFocus(QCheckBox* self);
    friend void QCheckBox_QBaseUpdateMicroFocus(QCheckBox* self);
    friend void QCheckBox_Create(QCheckBox* self);
    friend void QCheckBox_QBaseCreate(QCheckBox* self);
    friend void QCheckBox_Destroy(QCheckBox* self);
    friend void QCheckBox_QBaseDestroy(QCheckBox* self);
    friend bool QCheckBox_FocusNextChild(QCheckBox* self);
    friend bool QCheckBox_QBaseFocusNextChild(QCheckBox* self);
    friend bool QCheckBox_FocusPreviousChild(QCheckBox* self);
    friend bool QCheckBox_QBaseFocusPreviousChild(QCheckBox* self);
    friend QObject* QCheckBox_Sender(const QCheckBox* self);
    friend QObject* QCheckBox_QBaseSender(const QCheckBox* self);
    friend int QCheckBox_SenderSignalIndex(const QCheckBox* self);
    friend int QCheckBox_QBaseSenderSignalIndex(const QCheckBox* self);
    friend int QCheckBox_Receivers(const QCheckBox* self, const char* signal);
    friend int QCheckBox_QBaseReceivers(const QCheckBox* self, const char* signal);
    friend bool QCheckBox_IsSignalConnected(const QCheckBox* self, const QMetaMethod* signal);
    friend bool QCheckBox_QBaseIsSignalConnected(const QCheckBox* self, const QMetaMethod* signal);
};

#endif
