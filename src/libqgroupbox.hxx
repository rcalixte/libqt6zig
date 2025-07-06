#pragma once
#ifndef SRCC_LIBVIRTUALQGROUPBOX_H
#define SRCC_LIBVIRTUALQGROUPBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGroupBox so that we can call protected methods
class VirtualQGroupBox final : public QGroupBox {

  public:
    // Virtual class boolean flag
    bool isVirtualQGroupBox = true;

    // Virtual class public types (including callbacks)
    using QGroupBox_Metacall_Callback = int (*)(QGroupBox*, int, int, void**);
    using QGroupBox_MinimumSizeHint_Callback = QSize* (*)();
    using QGroupBox_Event_Callback = bool (*)(QGroupBox*, QEvent*);
    using QGroupBox_ChildEvent_Callback = void (*)(QGroupBox*, QChildEvent*);
    using QGroupBox_ResizeEvent_Callback = void (*)(QGroupBox*, QResizeEvent*);
    using QGroupBox_PaintEvent_Callback = void (*)(QGroupBox*, QPaintEvent*);
    using QGroupBox_FocusInEvent_Callback = void (*)(QGroupBox*, QFocusEvent*);
    using QGroupBox_ChangeEvent_Callback = void (*)(QGroupBox*, QEvent*);
    using QGroupBox_MousePressEvent_Callback = void (*)(QGroupBox*, QMouseEvent*);
    using QGroupBox_MouseMoveEvent_Callback = void (*)(QGroupBox*, QMouseEvent*);
    using QGroupBox_MouseReleaseEvent_Callback = void (*)(QGroupBox*, QMouseEvent*);
    using QGroupBox_InitStyleOption_Callback = void (*)(const QGroupBox*, QStyleOptionGroupBox*);
    using QGroupBox_DevType_Callback = int (*)();
    using QGroupBox_SetVisible_Callback = void (*)(QGroupBox*, bool);
    using QGroupBox_SizeHint_Callback = QSize* (*)();
    using QGroupBox_HeightForWidth_Callback = int (*)(const QGroupBox*, int);
    using QGroupBox_HasHeightForWidth_Callback = bool (*)();
    using QGroupBox_PaintEngine_Callback = QPaintEngine* (*)();
    using QGroupBox_MouseDoubleClickEvent_Callback = void (*)(QGroupBox*, QMouseEvent*);
    using QGroupBox_WheelEvent_Callback = void (*)(QGroupBox*, QWheelEvent*);
    using QGroupBox_KeyPressEvent_Callback = void (*)(QGroupBox*, QKeyEvent*);
    using QGroupBox_KeyReleaseEvent_Callback = void (*)(QGroupBox*, QKeyEvent*);
    using QGroupBox_FocusOutEvent_Callback = void (*)(QGroupBox*, QFocusEvent*);
    using QGroupBox_EnterEvent_Callback = void (*)(QGroupBox*, QEnterEvent*);
    using QGroupBox_LeaveEvent_Callback = void (*)(QGroupBox*, QEvent*);
    using QGroupBox_MoveEvent_Callback = void (*)(QGroupBox*, QMoveEvent*);
    using QGroupBox_CloseEvent_Callback = void (*)(QGroupBox*, QCloseEvent*);
    using QGroupBox_ContextMenuEvent_Callback = void (*)(QGroupBox*, QContextMenuEvent*);
    using QGroupBox_TabletEvent_Callback = void (*)(QGroupBox*, QTabletEvent*);
    using QGroupBox_ActionEvent_Callback = void (*)(QGroupBox*, QActionEvent*);
    using QGroupBox_DragEnterEvent_Callback = void (*)(QGroupBox*, QDragEnterEvent*);
    using QGroupBox_DragMoveEvent_Callback = void (*)(QGroupBox*, QDragMoveEvent*);
    using QGroupBox_DragLeaveEvent_Callback = void (*)(QGroupBox*, QDragLeaveEvent*);
    using QGroupBox_DropEvent_Callback = void (*)(QGroupBox*, QDropEvent*);
    using QGroupBox_ShowEvent_Callback = void (*)(QGroupBox*, QShowEvent*);
    using QGroupBox_HideEvent_Callback = void (*)(QGroupBox*, QHideEvent*);
    using QGroupBox_NativeEvent_Callback = bool (*)(QGroupBox*, libqt_string, void*, intptr_t*);
    using QGroupBox_Metric_Callback = int (*)(const QGroupBox*, int);
    using QGroupBox_InitPainter_Callback = void (*)(const QGroupBox*, QPainter*);
    using QGroupBox_Redirected_Callback = QPaintDevice* (*)(const QGroupBox*, QPoint*);
    using QGroupBox_SharedPainter_Callback = QPainter* (*)();
    using QGroupBox_InputMethodEvent_Callback = void (*)(QGroupBox*, QInputMethodEvent*);
    using QGroupBox_InputMethodQuery_Callback = QVariant* (*)(const QGroupBox*, int);
    using QGroupBox_FocusNextPrevChild_Callback = bool (*)(QGroupBox*, bool);
    using QGroupBox_EventFilter_Callback = bool (*)(QGroupBox*, QObject*, QEvent*);
    using QGroupBox_TimerEvent_Callback = void (*)(QGroupBox*, QTimerEvent*);
    using QGroupBox_CustomEvent_Callback = void (*)(QGroupBox*, QEvent*);
    using QGroupBox_ConnectNotify_Callback = void (*)(QGroupBox*, QMetaMethod*);
    using QGroupBox_DisconnectNotify_Callback = void (*)(QGroupBox*, QMetaMethod*);
    using QGroupBox_UpdateMicroFocus_Callback = void (*)();
    using QGroupBox_Create_Callback = void (*)();
    using QGroupBox_Destroy_Callback = void (*)();
    using QGroupBox_FocusNextChild_Callback = bool (*)();
    using QGroupBox_FocusPreviousChild_Callback = bool (*)();
    using QGroupBox_Sender_Callback = QObject* (*)();
    using QGroupBox_SenderSignalIndex_Callback = int (*)();
    using QGroupBox_Receivers_Callback = int (*)(const QGroupBox*, const char*);
    using QGroupBox_IsSignalConnected_Callback = bool (*)(const QGroupBox*, QMetaMethod*);
    using QGroupBox_GetDecodedMetricF_Callback = double (*)(const QGroupBox*, int, int);

  protected:
    // Instance callback storage
    QGroupBox_Metacall_Callback qgroupbox_metacall_callback = nullptr;
    QGroupBox_MinimumSizeHint_Callback qgroupbox_minimumsizehint_callback = nullptr;
    QGroupBox_Event_Callback qgroupbox_event_callback = nullptr;
    QGroupBox_ChildEvent_Callback qgroupbox_childevent_callback = nullptr;
    QGroupBox_ResizeEvent_Callback qgroupbox_resizeevent_callback = nullptr;
    QGroupBox_PaintEvent_Callback qgroupbox_paintevent_callback = nullptr;
    QGroupBox_FocusInEvent_Callback qgroupbox_focusinevent_callback = nullptr;
    QGroupBox_ChangeEvent_Callback qgroupbox_changeevent_callback = nullptr;
    QGroupBox_MousePressEvent_Callback qgroupbox_mousepressevent_callback = nullptr;
    QGroupBox_MouseMoveEvent_Callback qgroupbox_mousemoveevent_callback = nullptr;
    QGroupBox_MouseReleaseEvent_Callback qgroupbox_mousereleaseevent_callback = nullptr;
    QGroupBox_InitStyleOption_Callback qgroupbox_initstyleoption_callback = nullptr;
    QGroupBox_DevType_Callback qgroupbox_devtype_callback = nullptr;
    QGroupBox_SetVisible_Callback qgroupbox_setvisible_callback = nullptr;
    QGroupBox_SizeHint_Callback qgroupbox_sizehint_callback = nullptr;
    QGroupBox_HeightForWidth_Callback qgroupbox_heightforwidth_callback = nullptr;
    QGroupBox_HasHeightForWidth_Callback qgroupbox_hasheightforwidth_callback = nullptr;
    QGroupBox_PaintEngine_Callback qgroupbox_paintengine_callback = nullptr;
    QGroupBox_MouseDoubleClickEvent_Callback qgroupbox_mousedoubleclickevent_callback = nullptr;
    QGroupBox_WheelEvent_Callback qgroupbox_wheelevent_callback = nullptr;
    QGroupBox_KeyPressEvent_Callback qgroupbox_keypressevent_callback = nullptr;
    QGroupBox_KeyReleaseEvent_Callback qgroupbox_keyreleaseevent_callback = nullptr;
    QGroupBox_FocusOutEvent_Callback qgroupbox_focusoutevent_callback = nullptr;
    QGroupBox_EnterEvent_Callback qgroupbox_enterevent_callback = nullptr;
    QGroupBox_LeaveEvent_Callback qgroupbox_leaveevent_callback = nullptr;
    QGroupBox_MoveEvent_Callback qgroupbox_moveevent_callback = nullptr;
    QGroupBox_CloseEvent_Callback qgroupbox_closeevent_callback = nullptr;
    QGroupBox_ContextMenuEvent_Callback qgroupbox_contextmenuevent_callback = nullptr;
    QGroupBox_TabletEvent_Callback qgroupbox_tabletevent_callback = nullptr;
    QGroupBox_ActionEvent_Callback qgroupbox_actionevent_callback = nullptr;
    QGroupBox_DragEnterEvent_Callback qgroupbox_dragenterevent_callback = nullptr;
    QGroupBox_DragMoveEvent_Callback qgroupbox_dragmoveevent_callback = nullptr;
    QGroupBox_DragLeaveEvent_Callback qgroupbox_dragleaveevent_callback = nullptr;
    QGroupBox_DropEvent_Callback qgroupbox_dropevent_callback = nullptr;
    QGroupBox_ShowEvent_Callback qgroupbox_showevent_callback = nullptr;
    QGroupBox_HideEvent_Callback qgroupbox_hideevent_callback = nullptr;
    QGroupBox_NativeEvent_Callback qgroupbox_nativeevent_callback = nullptr;
    QGroupBox_Metric_Callback qgroupbox_metric_callback = nullptr;
    QGroupBox_InitPainter_Callback qgroupbox_initpainter_callback = nullptr;
    QGroupBox_Redirected_Callback qgroupbox_redirected_callback = nullptr;
    QGroupBox_SharedPainter_Callback qgroupbox_sharedpainter_callback = nullptr;
    QGroupBox_InputMethodEvent_Callback qgroupbox_inputmethodevent_callback = nullptr;
    QGroupBox_InputMethodQuery_Callback qgroupbox_inputmethodquery_callback = nullptr;
    QGroupBox_FocusNextPrevChild_Callback qgroupbox_focusnextprevchild_callback = nullptr;
    QGroupBox_EventFilter_Callback qgroupbox_eventfilter_callback = nullptr;
    QGroupBox_TimerEvent_Callback qgroupbox_timerevent_callback = nullptr;
    QGroupBox_CustomEvent_Callback qgroupbox_customevent_callback = nullptr;
    QGroupBox_ConnectNotify_Callback qgroupbox_connectnotify_callback = nullptr;
    QGroupBox_DisconnectNotify_Callback qgroupbox_disconnectnotify_callback = nullptr;
    QGroupBox_UpdateMicroFocus_Callback qgroupbox_updatemicrofocus_callback = nullptr;
    QGroupBox_Create_Callback qgroupbox_create_callback = nullptr;
    QGroupBox_Destroy_Callback qgroupbox_destroy_callback = nullptr;
    QGroupBox_FocusNextChild_Callback qgroupbox_focusnextchild_callback = nullptr;
    QGroupBox_FocusPreviousChild_Callback qgroupbox_focuspreviouschild_callback = nullptr;
    QGroupBox_Sender_Callback qgroupbox_sender_callback = nullptr;
    QGroupBox_SenderSignalIndex_Callback qgroupbox_sendersignalindex_callback = nullptr;
    QGroupBox_Receivers_Callback qgroupbox_receivers_callback = nullptr;
    QGroupBox_IsSignalConnected_Callback qgroupbox_issignalconnected_callback = nullptr;
    QGroupBox_GetDecodedMetricF_Callback qgroupbox_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qgroupbox_metacall_isbase = false;
    mutable bool qgroupbox_minimumsizehint_isbase = false;
    mutable bool qgroupbox_event_isbase = false;
    mutable bool qgroupbox_childevent_isbase = false;
    mutable bool qgroupbox_resizeevent_isbase = false;
    mutable bool qgroupbox_paintevent_isbase = false;
    mutable bool qgroupbox_focusinevent_isbase = false;
    mutable bool qgroupbox_changeevent_isbase = false;
    mutable bool qgroupbox_mousepressevent_isbase = false;
    mutable bool qgroupbox_mousemoveevent_isbase = false;
    mutable bool qgroupbox_mousereleaseevent_isbase = false;
    mutable bool qgroupbox_initstyleoption_isbase = false;
    mutable bool qgroupbox_devtype_isbase = false;
    mutable bool qgroupbox_setvisible_isbase = false;
    mutable bool qgroupbox_sizehint_isbase = false;
    mutable bool qgroupbox_heightforwidth_isbase = false;
    mutable bool qgroupbox_hasheightforwidth_isbase = false;
    mutable bool qgroupbox_paintengine_isbase = false;
    mutable bool qgroupbox_mousedoubleclickevent_isbase = false;
    mutable bool qgroupbox_wheelevent_isbase = false;
    mutable bool qgroupbox_keypressevent_isbase = false;
    mutable bool qgroupbox_keyreleaseevent_isbase = false;
    mutable bool qgroupbox_focusoutevent_isbase = false;
    mutable bool qgroupbox_enterevent_isbase = false;
    mutable bool qgroupbox_leaveevent_isbase = false;
    mutable bool qgroupbox_moveevent_isbase = false;
    mutable bool qgroupbox_closeevent_isbase = false;
    mutable bool qgroupbox_contextmenuevent_isbase = false;
    mutable bool qgroupbox_tabletevent_isbase = false;
    mutable bool qgroupbox_actionevent_isbase = false;
    mutable bool qgroupbox_dragenterevent_isbase = false;
    mutable bool qgroupbox_dragmoveevent_isbase = false;
    mutable bool qgroupbox_dragleaveevent_isbase = false;
    mutable bool qgroupbox_dropevent_isbase = false;
    mutable bool qgroupbox_showevent_isbase = false;
    mutable bool qgroupbox_hideevent_isbase = false;
    mutable bool qgroupbox_nativeevent_isbase = false;
    mutable bool qgroupbox_metric_isbase = false;
    mutable bool qgroupbox_initpainter_isbase = false;
    mutable bool qgroupbox_redirected_isbase = false;
    mutable bool qgroupbox_sharedpainter_isbase = false;
    mutable bool qgroupbox_inputmethodevent_isbase = false;
    mutable bool qgroupbox_inputmethodquery_isbase = false;
    mutable bool qgroupbox_focusnextprevchild_isbase = false;
    mutable bool qgroupbox_eventfilter_isbase = false;
    mutable bool qgroupbox_timerevent_isbase = false;
    mutable bool qgroupbox_customevent_isbase = false;
    mutable bool qgroupbox_connectnotify_isbase = false;
    mutable bool qgroupbox_disconnectnotify_isbase = false;
    mutable bool qgroupbox_updatemicrofocus_isbase = false;
    mutable bool qgroupbox_create_isbase = false;
    mutable bool qgroupbox_destroy_isbase = false;
    mutable bool qgroupbox_focusnextchild_isbase = false;
    mutable bool qgroupbox_focuspreviouschild_isbase = false;
    mutable bool qgroupbox_sender_isbase = false;
    mutable bool qgroupbox_sendersignalindex_isbase = false;
    mutable bool qgroupbox_receivers_isbase = false;
    mutable bool qgroupbox_issignalconnected_isbase = false;
    mutable bool qgroupbox_getdecodedmetricf_isbase = false;

  public:
    VirtualQGroupBox(QWidget* parent) : QGroupBox(parent) {};
    VirtualQGroupBox() : QGroupBox() {};
    VirtualQGroupBox(const QString& title) : QGroupBox(title) {};
    VirtualQGroupBox(const QString& title, QWidget* parent) : QGroupBox(title, parent) {};

    ~VirtualQGroupBox() {
        qgroupbox_metacall_callback = nullptr;
        qgroupbox_minimumsizehint_callback = nullptr;
        qgroupbox_event_callback = nullptr;
        qgroupbox_childevent_callback = nullptr;
        qgroupbox_resizeevent_callback = nullptr;
        qgroupbox_paintevent_callback = nullptr;
        qgroupbox_focusinevent_callback = nullptr;
        qgroupbox_changeevent_callback = nullptr;
        qgroupbox_mousepressevent_callback = nullptr;
        qgroupbox_mousemoveevent_callback = nullptr;
        qgroupbox_mousereleaseevent_callback = nullptr;
        qgroupbox_initstyleoption_callback = nullptr;
        qgroupbox_devtype_callback = nullptr;
        qgroupbox_setvisible_callback = nullptr;
        qgroupbox_sizehint_callback = nullptr;
        qgroupbox_heightforwidth_callback = nullptr;
        qgroupbox_hasheightforwidth_callback = nullptr;
        qgroupbox_paintengine_callback = nullptr;
        qgroupbox_mousedoubleclickevent_callback = nullptr;
        qgroupbox_wheelevent_callback = nullptr;
        qgroupbox_keypressevent_callback = nullptr;
        qgroupbox_keyreleaseevent_callback = nullptr;
        qgroupbox_focusoutevent_callback = nullptr;
        qgroupbox_enterevent_callback = nullptr;
        qgroupbox_leaveevent_callback = nullptr;
        qgroupbox_moveevent_callback = nullptr;
        qgroupbox_closeevent_callback = nullptr;
        qgroupbox_contextmenuevent_callback = nullptr;
        qgroupbox_tabletevent_callback = nullptr;
        qgroupbox_actionevent_callback = nullptr;
        qgroupbox_dragenterevent_callback = nullptr;
        qgroupbox_dragmoveevent_callback = nullptr;
        qgroupbox_dragleaveevent_callback = nullptr;
        qgroupbox_dropevent_callback = nullptr;
        qgroupbox_showevent_callback = nullptr;
        qgroupbox_hideevent_callback = nullptr;
        qgroupbox_nativeevent_callback = nullptr;
        qgroupbox_metric_callback = nullptr;
        qgroupbox_initpainter_callback = nullptr;
        qgroupbox_redirected_callback = nullptr;
        qgroupbox_sharedpainter_callback = nullptr;
        qgroupbox_inputmethodevent_callback = nullptr;
        qgroupbox_inputmethodquery_callback = nullptr;
        qgroupbox_focusnextprevchild_callback = nullptr;
        qgroupbox_eventfilter_callback = nullptr;
        qgroupbox_timerevent_callback = nullptr;
        qgroupbox_customevent_callback = nullptr;
        qgroupbox_connectnotify_callback = nullptr;
        qgroupbox_disconnectnotify_callback = nullptr;
        qgroupbox_updatemicrofocus_callback = nullptr;
        qgroupbox_create_callback = nullptr;
        qgroupbox_destroy_callback = nullptr;
        qgroupbox_focusnextchild_callback = nullptr;
        qgroupbox_focuspreviouschild_callback = nullptr;
        qgroupbox_sender_callback = nullptr;
        qgroupbox_sendersignalindex_callback = nullptr;
        qgroupbox_receivers_callback = nullptr;
        qgroupbox_issignalconnected_callback = nullptr;
        qgroupbox_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQGroupBox_Metacall_Callback(QGroupBox_Metacall_Callback cb) { qgroupbox_metacall_callback = cb; }
    inline void setQGroupBox_MinimumSizeHint_Callback(QGroupBox_MinimumSizeHint_Callback cb) { qgroupbox_minimumsizehint_callback = cb; }
    inline void setQGroupBox_Event_Callback(QGroupBox_Event_Callback cb) { qgroupbox_event_callback = cb; }
    inline void setQGroupBox_ChildEvent_Callback(QGroupBox_ChildEvent_Callback cb) { qgroupbox_childevent_callback = cb; }
    inline void setQGroupBox_ResizeEvent_Callback(QGroupBox_ResizeEvent_Callback cb) { qgroupbox_resizeevent_callback = cb; }
    inline void setQGroupBox_PaintEvent_Callback(QGroupBox_PaintEvent_Callback cb) { qgroupbox_paintevent_callback = cb; }
    inline void setQGroupBox_FocusInEvent_Callback(QGroupBox_FocusInEvent_Callback cb) { qgroupbox_focusinevent_callback = cb; }
    inline void setQGroupBox_ChangeEvent_Callback(QGroupBox_ChangeEvent_Callback cb) { qgroupbox_changeevent_callback = cb; }
    inline void setQGroupBox_MousePressEvent_Callback(QGroupBox_MousePressEvent_Callback cb) { qgroupbox_mousepressevent_callback = cb; }
    inline void setQGroupBox_MouseMoveEvent_Callback(QGroupBox_MouseMoveEvent_Callback cb) { qgroupbox_mousemoveevent_callback = cb; }
    inline void setQGroupBox_MouseReleaseEvent_Callback(QGroupBox_MouseReleaseEvent_Callback cb) { qgroupbox_mousereleaseevent_callback = cb; }
    inline void setQGroupBox_InitStyleOption_Callback(QGroupBox_InitStyleOption_Callback cb) { qgroupbox_initstyleoption_callback = cb; }
    inline void setQGroupBox_DevType_Callback(QGroupBox_DevType_Callback cb) { qgroupbox_devtype_callback = cb; }
    inline void setQGroupBox_SetVisible_Callback(QGroupBox_SetVisible_Callback cb) { qgroupbox_setvisible_callback = cb; }
    inline void setQGroupBox_SizeHint_Callback(QGroupBox_SizeHint_Callback cb) { qgroupbox_sizehint_callback = cb; }
    inline void setQGroupBox_HeightForWidth_Callback(QGroupBox_HeightForWidth_Callback cb) { qgroupbox_heightforwidth_callback = cb; }
    inline void setQGroupBox_HasHeightForWidth_Callback(QGroupBox_HasHeightForWidth_Callback cb) { qgroupbox_hasheightforwidth_callback = cb; }
    inline void setQGroupBox_PaintEngine_Callback(QGroupBox_PaintEngine_Callback cb) { qgroupbox_paintengine_callback = cb; }
    inline void setQGroupBox_MouseDoubleClickEvent_Callback(QGroupBox_MouseDoubleClickEvent_Callback cb) { qgroupbox_mousedoubleclickevent_callback = cb; }
    inline void setQGroupBox_WheelEvent_Callback(QGroupBox_WheelEvent_Callback cb) { qgroupbox_wheelevent_callback = cb; }
    inline void setQGroupBox_KeyPressEvent_Callback(QGroupBox_KeyPressEvent_Callback cb) { qgroupbox_keypressevent_callback = cb; }
    inline void setQGroupBox_KeyReleaseEvent_Callback(QGroupBox_KeyReleaseEvent_Callback cb) { qgroupbox_keyreleaseevent_callback = cb; }
    inline void setQGroupBox_FocusOutEvent_Callback(QGroupBox_FocusOutEvent_Callback cb) { qgroupbox_focusoutevent_callback = cb; }
    inline void setQGroupBox_EnterEvent_Callback(QGroupBox_EnterEvent_Callback cb) { qgroupbox_enterevent_callback = cb; }
    inline void setQGroupBox_LeaveEvent_Callback(QGroupBox_LeaveEvent_Callback cb) { qgroupbox_leaveevent_callback = cb; }
    inline void setQGroupBox_MoveEvent_Callback(QGroupBox_MoveEvent_Callback cb) { qgroupbox_moveevent_callback = cb; }
    inline void setQGroupBox_CloseEvent_Callback(QGroupBox_CloseEvent_Callback cb) { qgroupbox_closeevent_callback = cb; }
    inline void setQGroupBox_ContextMenuEvent_Callback(QGroupBox_ContextMenuEvent_Callback cb) { qgroupbox_contextmenuevent_callback = cb; }
    inline void setQGroupBox_TabletEvent_Callback(QGroupBox_TabletEvent_Callback cb) { qgroupbox_tabletevent_callback = cb; }
    inline void setQGroupBox_ActionEvent_Callback(QGroupBox_ActionEvent_Callback cb) { qgroupbox_actionevent_callback = cb; }
    inline void setQGroupBox_DragEnterEvent_Callback(QGroupBox_DragEnterEvent_Callback cb) { qgroupbox_dragenterevent_callback = cb; }
    inline void setQGroupBox_DragMoveEvent_Callback(QGroupBox_DragMoveEvent_Callback cb) { qgroupbox_dragmoveevent_callback = cb; }
    inline void setQGroupBox_DragLeaveEvent_Callback(QGroupBox_DragLeaveEvent_Callback cb) { qgroupbox_dragleaveevent_callback = cb; }
    inline void setQGroupBox_DropEvent_Callback(QGroupBox_DropEvent_Callback cb) { qgroupbox_dropevent_callback = cb; }
    inline void setQGroupBox_ShowEvent_Callback(QGroupBox_ShowEvent_Callback cb) { qgroupbox_showevent_callback = cb; }
    inline void setQGroupBox_HideEvent_Callback(QGroupBox_HideEvent_Callback cb) { qgroupbox_hideevent_callback = cb; }
    inline void setQGroupBox_NativeEvent_Callback(QGroupBox_NativeEvent_Callback cb) { qgroupbox_nativeevent_callback = cb; }
    inline void setQGroupBox_Metric_Callback(QGroupBox_Metric_Callback cb) { qgroupbox_metric_callback = cb; }
    inline void setQGroupBox_InitPainter_Callback(QGroupBox_InitPainter_Callback cb) { qgroupbox_initpainter_callback = cb; }
    inline void setQGroupBox_Redirected_Callback(QGroupBox_Redirected_Callback cb) { qgroupbox_redirected_callback = cb; }
    inline void setQGroupBox_SharedPainter_Callback(QGroupBox_SharedPainter_Callback cb) { qgroupbox_sharedpainter_callback = cb; }
    inline void setQGroupBox_InputMethodEvent_Callback(QGroupBox_InputMethodEvent_Callback cb) { qgroupbox_inputmethodevent_callback = cb; }
    inline void setQGroupBox_InputMethodQuery_Callback(QGroupBox_InputMethodQuery_Callback cb) { qgroupbox_inputmethodquery_callback = cb; }
    inline void setQGroupBox_FocusNextPrevChild_Callback(QGroupBox_FocusNextPrevChild_Callback cb) { qgroupbox_focusnextprevchild_callback = cb; }
    inline void setQGroupBox_EventFilter_Callback(QGroupBox_EventFilter_Callback cb) { qgroupbox_eventfilter_callback = cb; }
    inline void setQGroupBox_TimerEvent_Callback(QGroupBox_TimerEvent_Callback cb) { qgroupbox_timerevent_callback = cb; }
    inline void setQGroupBox_CustomEvent_Callback(QGroupBox_CustomEvent_Callback cb) { qgroupbox_customevent_callback = cb; }
    inline void setQGroupBox_ConnectNotify_Callback(QGroupBox_ConnectNotify_Callback cb) { qgroupbox_connectnotify_callback = cb; }
    inline void setQGroupBox_DisconnectNotify_Callback(QGroupBox_DisconnectNotify_Callback cb) { qgroupbox_disconnectnotify_callback = cb; }
    inline void setQGroupBox_UpdateMicroFocus_Callback(QGroupBox_UpdateMicroFocus_Callback cb) { qgroupbox_updatemicrofocus_callback = cb; }
    inline void setQGroupBox_Create_Callback(QGroupBox_Create_Callback cb) { qgroupbox_create_callback = cb; }
    inline void setQGroupBox_Destroy_Callback(QGroupBox_Destroy_Callback cb) { qgroupbox_destroy_callback = cb; }
    inline void setQGroupBox_FocusNextChild_Callback(QGroupBox_FocusNextChild_Callback cb) { qgroupbox_focusnextchild_callback = cb; }
    inline void setQGroupBox_FocusPreviousChild_Callback(QGroupBox_FocusPreviousChild_Callback cb) { qgroupbox_focuspreviouschild_callback = cb; }
    inline void setQGroupBox_Sender_Callback(QGroupBox_Sender_Callback cb) { qgroupbox_sender_callback = cb; }
    inline void setQGroupBox_SenderSignalIndex_Callback(QGroupBox_SenderSignalIndex_Callback cb) { qgroupbox_sendersignalindex_callback = cb; }
    inline void setQGroupBox_Receivers_Callback(QGroupBox_Receivers_Callback cb) { qgroupbox_receivers_callback = cb; }
    inline void setQGroupBox_IsSignalConnected_Callback(QGroupBox_IsSignalConnected_Callback cb) { qgroupbox_issignalconnected_callback = cb; }
    inline void setQGroupBox_GetDecodedMetricF_Callback(QGroupBox_GetDecodedMetricF_Callback cb) { qgroupbox_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQGroupBox_Metacall_IsBase(bool value) const { qgroupbox_metacall_isbase = value; }
    inline void setQGroupBox_MinimumSizeHint_IsBase(bool value) const { qgroupbox_minimumsizehint_isbase = value; }
    inline void setQGroupBox_Event_IsBase(bool value) const { qgroupbox_event_isbase = value; }
    inline void setQGroupBox_ChildEvent_IsBase(bool value) const { qgroupbox_childevent_isbase = value; }
    inline void setQGroupBox_ResizeEvent_IsBase(bool value) const { qgroupbox_resizeevent_isbase = value; }
    inline void setQGroupBox_PaintEvent_IsBase(bool value) const { qgroupbox_paintevent_isbase = value; }
    inline void setQGroupBox_FocusInEvent_IsBase(bool value) const { qgroupbox_focusinevent_isbase = value; }
    inline void setQGroupBox_ChangeEvent_IsBase(bool value) const { qgroupbox_changeevent_isbase = value; }
    inline void setQGroupBox_MousePressEvent_IsBase(bool value) const { qgroupbox_mousepressevent_isbase = value; }
    inline void setQGroupBox_MouseMoveEvent_IsBase(bool value) const { qgroupbox_mousemoveevent_isbase = value; }
    inline void setQGroupBox_MouseReleaseEvent_IsBase(bool value) const { qgroupbox_mousereleaseevent_isbase = value; }
    inline void setQGroupBox_InitStyleOption_IsBase(bool value) const { qgroupbox_initstyleoption_isbase = value; }
    inline void setQGroupBox_DevType_IsBase(bool value) const { qgroupbox_devtype_isbase = value; }
    inline void setQGroupBox_SetVisible_IsBase(bool value) const { qgroupbox_setvisible_isbase = value; }
    inline void setQGroupBox_SizeHint_IsBase(bool value) const { qgroupbox_sizehint_isbase = value; }
    inline void setQGroupBox_HeightForWidth_IsBase(bool value) const { qgroupbox_heightforwidth_isbase = value; }
    inline void setQGroupBox_HasHeightForWidth_IsBase(bool value) const { qgroupbox_hasheightforwidth_isbase = value; }
    inline void setQGroupBox_PaintEngine_IsBase(bool value) const { qgroupbox_paintengine_isbase = value; }
    inline void setQGroupBox_MouseDoubleClickEvent_IsBase(bool value) const { qgroupbox_mousedoubleclickevent_isbase = value; }
    inline void setQGroupBox_WheelEvent_IsBase(bool value) const { qgroupbox_wheelevent_isbase = value; }
    inline void setQGroupBox_KeyPressEvent_IsBase(bool value) const { qgroupbox_keypressevent_isbase = value; }
    inline void setQGroupBox_KeyReleaseEvent_IsBase(bool value) const { qgroupbox_keyreleaseevent_isbase = value; }
    inline void setQGroupBox_FocusOutEvent_IsBase(bool value) const { qgroupbox_focusoutevent_isbase = value; }
    inline void setQGroupBox_EnterEvent_IsBase(bool value) const { qgroupbox_enterevent_isbase = value; }
    inline void setQGroupBox_LeaveEvent_IsBase(bool value) const { qgroupbox_leaveevent_isbase = value; }
    inline void setQGroupBox_MoveEvent_IsBase(bool value) const { qgroupbox_moveevent_isbase = value; }
    inline void setQGroupBox_CloseEvent_IsBase(bool value) const { qgroupbox_closeevent_isbase = value; }
    inline void setQGroupBox_ContextMenuEvent_IsBase(bool value) const { qgroupbox_contextmenuevent_isbase = value; }
    inline void setQGroupBox_TabletEvent_IsBase(bool value) const { qgroupbox_tabletevent_isbase = value; }
    inline void setQGroupBox_ActionEvent_IsBase(bool value) const { qgroupbox_actionevent_isbase = value; }
    inline void setQGroupBox_DragEnterEvent_IsBase(bool value) const { qgroupbox_dragenterevent_isbase = value; }
    inline void setQGroupBox_DragMoveEvent_IsBase(bool value) const { qgroupbox_dragmoveevent_isbase = value; }
    inline void setQGroupBox_DragLeaveEvent_IsBase(bool value) const { qgroupbox_dragleaveevent_isbase = value; }
    inline void setQGroupBox_DropEvent_IsBase(bool value) const { qgroupbox_dropevent_isbase = value; }
    inline void setQGroupBox_ShowEvent_IsBase(bool value) const { qgroupbox_showevent_isbase = value; }
    inline void setQGroupBox_HideEvent_IsBase(bool value) const { qgroupbox_hideevent_isbase = value; }
    inline void setQGroupBox_NativeEvent_IsBase(bool value) const { qgroupbox_nativeevent_isbase = value; }
    inline void setQGroupBox_Metric_IsBase(bool value) const { qgroupbox_metric_isbase = value; }
    inline void setQGroupBox_InitPainter_IsBase(bool value) const { qgroupbox_initpainter_isbase = value; }
    inline void setQGroupBox_Redirected_IsBase(bool value) const { qgroupbox_redirected_isbase = value; }
    inline void setQGroupBox_SharedPainter_IsBase(bool value) const { qgroupbox_sharedpainter_isbase = value; }
    inline void setQGroupBox_InputMethodEvent_IsBase(bool value) const { qgroupbox_inputmethodevent_isbase = value; }
    inline void setQGroupBox_InputMethodQuery_IsBase(bool value) const { qgroupbox_inputmethodquery_isbase = value; }
    inline void setQGroupBox_FocusNextPrevChild_IsBase(bool value) const { qgroupbox_focusnextprevchild_isbase = value; }
    inline void setQGroupBox_EventFilter_IsBase(bool value) const { qgroupbox_eventfilter_isbase = value; }
    inline void setQGroupBox_TimerEvent_IsBase(bool value) const { qgroupbox_timerevent_isbase = value; }
    inline void setQGroupBox_CustomEvent_IsBase(bool value) const { qgroupbox_customevent_isbase = value; }
    inline void setQGroupBox_ConnectNotify_IsBase(bool value) const { qgroupbox_connectnotify_isbase = value; }
    inline void setQGroupBox_DisconnectNotify_IsBase(bool value) const { qgroupbox_disconnectnotify_isbase = value; }
    inline void setQGroupBox_UpdateMicroFocus_IsBase(bool value) const { qgroupbox_updatemicrofocus_isbase = value; }
    inline void setQGroupBox_Create_IsBase(bool value) const { qgroupbox_create_isbase = value; }
    inline void setQGroupBox_Destroy_IsBase(bool value) const { qgroupbox_destroy_isbase = value; }
    inline void setQGroupBox_FocusNextChild_IsBase(bool value) const { qgroupbox_focusnextchild_isbase = value; }
    inline void setQGroupBox_FocusPreviousChild_IsBase(bool value) const { qgroupbox_focuspreviouschild_isbase = value; }
    inline void setQGroupBox_Sender_IsBase(bool value) const { qgroupbox_sender_isbase = value; }
    inline void setQGroupBox_SenderSignalIndex_IsBase(bool value) const { qgroupbox_sendersignalindex_isbase = value; }
    inline void setQGroupBox_Receivers_IsBase(bool value) const { qgroupbox_receivers_isbase = value; }
    inline void setQGroupBox_IsSignalConnected_IsBase(bool value) const { qgroupbox_issignalconnected_isbase = value; }
    inline void setQGroupBox_GetDecodedMetricF_IsBase(bool value) const { qgroupbox_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgroupbox_metacall_isbase) {
            qgroupbox_metacall_isbase = false;
            return QGroupBox::qt_metacall(param1, param2, param3);
        } else if (qgroupbox_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qgroupbox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QGroupBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qgroupbox_minimumsizehint_isbase) {
            qgroupbox_minimumsizehint_isbase = false;
            return QGroupBox::minimumSizeHint();
        } else if (qgroupbox_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qgroupbox_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QGroupBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgroupbox_event_isbase) {
            qgroupbox_event_isbase = false;
            return QGroupBox::event(event);
        } else if (qgroupbox_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qgroupbox_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGroupBox::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgroupbox_childevent_isbase) {
            qgroupbox_childevent_isbase = false;
            QGroupBox::childEvent(event);
        } else if (qgroupbox_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qgroupbox_childevent_callback(this, cbval1);
        } else {
            QGroupBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qgroupbox_resizeevent_isbase) {
            qgroupbox_resizeevent_isbase = false;
            QGroupBox::resizeEvent(event);
        } else if (qgroupbox_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qgroupbox_resizeevent_callback(this, cbval1);
        } else {
            QGroupBox::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qgroupbox_paintevent_isbase) {
            qgroupbox_paintevent_isbase = false;
            QGroupBox::paintEvent(event);
        } else if (qgroupbox_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qgroupbox_paintevent_callback(this, cbval1);
        } else {
            QGroupBox::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgroupbox_focusinevent_isbase) {
            qgroupbox_focusinevent_isbase = false;
            QGroupBox::focusInEvent(event);
        } else if (qgroupbox_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qgroupbox_focusinevent_callback(this, cbval1);
        } else {
            QGroupBox::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qgroupbox_changeevent_isbase) {
            qgroupbox_changeevent_isbase = false;
            QGroupBox::changeEvent(event);
        } else if (qgroupbox_changeevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgroupbox_changeevent_callback(this, cbval1);
        } else {
            QGroupBox::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qgroupbox_mousepressevent_isbase) {
            qgroupbox_mousepressevent_isbase = false;
            QGroupBox::mousePressEvent(event);
        } else if (qgroupbox_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qgroupbox_mousepressevent_callback(this, cbval1);
        } else {
            QGroupBox::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qgroupbox_mousemoveevent_isbase) {
            qgroupbox_mousemoveevent_isbase = false;
            QGroupBox::mouseMoveEvent(event);
        } else if (qgroupbox_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qgroupbox_mousemoveevent_callback(this, cbval1);
        } else {
            QGroupBox::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qgroupbox_mousereleaseevent_isbase) {
            qgroupbox_mousereleaseevent_isbase = false;
            QGroupBox::mouseReleaseEvent(event);
        } else if (qgroupbox_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qgroupbox_mousereleaseevent_callback(this, cbval1);
        } else {
            QGroupBox::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionGroupBox* option) const override {
        if (qgroupbox_initstyleoption_isbase) {
            qgroupbox_initstyleoption_isbase = false;
            QGroupBox::initStyleOption(option);
        } else if (qgroupbox_initstyleoption_callback != nullptr) {
            QStyleOptionGroupBox* cbval1 = option;

            qgroupbox_initstyleoption_callback(this, cbval1);
        } else {
            QGroupBox::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qgroupbox_devtype_isbase) {
            qgroupbox_devtype_isbase = false;
            return QGroupBox::devType();
        } else if (qgroupbox_devtype_callback != nullptr) {
            int callback_ret = qgroupbox_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGroupBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qgroupbox_setvisible_isbase) {
            qgroupbox_setvisible_isbase = false;
            QGroupBox::setVisible(visible);
        } else if (qgroupbox_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qgroupbox_setvisible_callback(this, cbval1);
        } else {
            QGroupBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qgroupbox_sizehint_isbase) {
            qgroupbox_sizehint_isbase = false;
            return QGroupBox::sizeHint();
        } else if (qgroupbox_sizehint_callback != nullptr) {
            QSize* callback_ret = qgroupbox_sizehint_callback();
            return *callback_ret;
        } else {
            return QGroupBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qgroupbox_heightforwidth_isbase) {
            qgroupbox_heightforwidth_isbase = false;
            return QGroupBox::heightForWidth(param1);
        } else if (qgroupbox_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qgroupbox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGroupBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qgroupbox_hasheightforwidth_isbase) {
            qgroupbox_hasheightforwidth_isbase = false;
            return QGroupBox::hasHeightForWidth();
        } else if (qgroupbox_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qgroupbox_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QGroupBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qgroupbox_paintengine_isbase) {
            qgroupbox_paintengine_isbase = false;
            return QGroupBox::paintEngine();
        } else if (qgroupbox_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qgroupbox_paintengine_callback();
            return callback_ret;
        } else {
            return QGroupBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qgroupbox_mousedoubleclickevent_isbase) {
            qgroupbox_mousedoubleclickevent_isbase = false;
            QGroupBox::mouseDoubleClickEvent(event);
        } else if (qgroupbox_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qgroupbox_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QGroupBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qgroupbox_wheelevent_isbase) {
            qgroupbox_wheelevent_isbase = false;
            QGroupBox::wheelEvent(event);
        } else if (qgroupbox_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qgroupbox_wheelevent_callback(this, cbval1);
        } else {
            QGroupBox::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgroupbox_keypressevent_isbase) {
            qgroupbox_keypressevent_isbase = false;
            QGroupBox::keyPressEvent(event);
        } else if (qgroupbox_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qgroupbox_keypressevent_callback(this, cbval1);
        } else {
            QGroupBox::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgroupbox_keyreleaseevent_isbase) {
            qgroupbox_keyreleaseevent_isbase = false;
            QGroupBox::keyReleaseEvent(event);
        } else if (qgroupbox_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qgroupbox_keyreleaseevent_callback(this, cbval1);
        } else {
            QGroupBox::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgroupbox_focusoutevent_isbase) {
            qgroupbox_focusoutevent_isbase = false;
            QGroupBox::focusOutEvent(event);
        } else if (qgroupbox_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qgroupbox_focusoutevent_callback(this, cbval1);
        } else {
            QGroupBox::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qgroupbox_enterevent_isbase) {
            qgroupbox_enterevent_isbase = false;
            QGroupBox::enterEvent(event);
        } else if (qgroupbox_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qgroupbox_enterevent_callback(this, cbval1);
        } else {
            QGroupBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qgroupbox_leaveevent_isbase) {
            qgroupbox_leaveevent_isbase = false;
            QGroupBox::leaveEvent(event);
        } else if (qgroupbox_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgroupbox_leaveevent_callback(this, cbval1);
        } else {
            QGroupBox::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qgroupbox_moveevent_isbase) {
            qgroupbox_moveevent_isbase = false;
            QGroupBox::moveEvent(event);
        } else if (qgroupbox_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qgroupbox_moveevent_callback(this, cbval1);
        } else {
            QGroupBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qgroupbox_closeevent_isbase) {
            qgroupbox_closeevent_isbase = false;
            QGroupBox::closeEvent(event);
        } else if (qgroupbox_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qgroupbox_closeevent_callback(this, cbval1);
        } else {
            QGroupBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qgroupbox_contextmenuevent_isbase) {
            qgroupbox_contextmenuevent_isbase = false;
            QGroupBox::contextMenuEvent(event);
        } else if (qgroupbox_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qgroupbox_contextmenuevent_callback(this, cbval1);
        } else {
            QGroupBox::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qgroupbox_tabletevent_isbase) {
            qgroupbox_tabletevent_isbase = false;
            QGroupBox::tabletEvent(event);
        } else if (qgroupbox_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qgroupbox_tabletevent_callback(this, cbval1);
        } else {
            QGroupBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qgroupbox_actionevent_isbase) {
            qgroupbox_actionevent_isbase = false;
            QGroupBox::actionEvent(event);
        } else if (qgroupbox_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qgroupbox_actionevent_callback(this, cbval1);
        } else {
            QGroupBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qgroupbox_dragenterevent_isbase) {
            qgroupbox_dragenterevent_isbase = false;
            QGroupBox::dragEnterEvent(event);
        } else if (qgroupbox_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qgroupbox_dragenterevent_callback(this, cbval1);
        } else {
            QGroupBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qgroupbox_dragmoveevent_isbase) {
            qgroupbox_dragmoveevent_isbase = false;
            QGroupBox::dragMoveEvent(event);
        } else if (qgroupbox_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qgroupbox_dragmoveevent_callback(this, cbval1);
        } else {
            QGroupBox::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qgroupbox_dragleaveevent_isbase) {
            qgroupbox_dragleaveevent_isbase = false;
            QGroupBox::dragLeaveEvent(event);
        } else if (qgroupbox_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qgroupbox_dragleaveevent_callback(this, cbval1);
        } else {
            QGroupBox::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qgroupbox_dropevent_isbase) {
            qgroupbox_dropevent_isbase = false;
            QGroupBox::dropEvent(event);
        } else if (qgroupbox_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qgroupbox_dropevent_callback(this, cbval1);
        } else {
            QGroupBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qgroupbox_showevent_isbase) {
            qgroupbox_showevent_isbase = false;
            QGroupBox::showEvent(event);
        } else if (qgroupbox_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qgroupbox_showevent_callback(this, cbval1);
        } else {
            QGroupBox::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qgroupbox_hideevent_isbase) {
            qgroupbox_hideevent_isbase = false;
            QGroupBox::hideEvent(event);
        } else if (qgroupbox_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qgroupbox_hideevent_callback(this, cbval1);
        } else {
            QGroupBox::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qgroupbox_nativeevent_isbase) {
            qgroupbox_nativeevent_isbase = false;
            return QGroupBox::nativeEvent(eventType, message, result);
        } else if (qgroupbox_nativeevent_callback != nullptr) {
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

            bool callback_ret = qgroupbox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QGroupBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qgroupbox_metric_isbase) {
            qgroupbox_metric_isbase = false;
            return QGroupBox::metric(param1);
        } else if (qgroupbox_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qgroupbox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGroupBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qgroupbox_initpainter_isbase) {
            qgroupbox_initpainter_isbase = false;
            QGroupBox::initPainter(painter);
        } else if (qgroupbox_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qgroupbox_initpainter_callback(this, cbval1);
        } else {
            QGroupBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qgroupbox_redirected_isbase) {
            qgroupbox_redirected_isbase = false;
            return QGroupBox::redirected(offset);
        } else if (qgroupbox_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qgroupbox_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGroupBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qgroupbox_sharedpainter_isbase) {
            qgroupbox_sharedpainter_isbase = false;
            return QGroupBox::sharedPainter();
        } else if (qgroupbox_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qgroupbox_sharedpainter_callback();
            return callback_ret;
        } else {
            return QGroupBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qgroupbox_inputmethodevent_isbase) {
            qgroupbox_inputmethodevent_isbase = false;
            QGroupBox::inputMethodEvent(param1);
        } else if (qgroupbox_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qgroupbox_inputmethodevent_callback(this, cbval1);
        } else {
            QGroupBox::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qgroupbox_inputmethodquery_isbase) {
            qgroupbox_inputmethodquery_isbase = false;
            return QGroupBox::inputMethodQuery(param1);
        } else if (qgroupbox_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qgroupbox_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QGroupBox::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qgroupbox_focusnextprevchild_isbase) {
            qgroupbox_focusnextprevchild_isbase = false;
            return QGroupBox::focusNextPrevChild(next);
        } else if (qgroupbox_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qgroupbox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGroupBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgroupbox_eventfilter_isbase) {
            qgroupbox_eventfilter_isbase = false;
            return QGroupBox::eventFilter(watched, event);
        } else if (qgroupbox_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qgroupbox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGroupBox::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgroupbox_timerevent_isbase) {
            qgroupbox_timerevent_isbase = false;
            QGroupBox::timerEvent(event);
        } else if (qgroupbox_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qgroupbox_timerevent_callback(this, cbval1);
        } else {
            QGroupBox::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgroupbox_customevent_isbase) {
            qgroupbox_customevent_isbase = false;
            QGroupBox::customEvent(event);
        } else if (qgroupbox_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgroupbox_customevent_callback(this, cbval1);
        } else {
            QGroupBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgroupbox_connectnotify_isbase) {
            qgroupbox_connectnotify_isbase = false;
            QGroupBox::connectNotify(signal);
        } else if (qgroupbox_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgroupbox_connectnotify_callback(this, cbval1);
        } else {
            QGroupBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgroupbox_disconnectnotify_isbase) {
            qgroupbox_disconnectnotify_isbase = false;
            QGroupBox::disconnectNotify(signal);
        } else if (qgroupbox_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgroupbox_disconnectnotify_callback(this, cbval1);
        } else {
            QGroupBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qgroupbox_updatemicrofocus_isbase) {
            qgroupbox_updatemicrofocus_isbase = false;
            QGroupBox::updateMicroFocus();
        } else if (qgroupbox_updatemicrofocus_callback != nullptr) {
            qgroupbox_updatemicrofocus_callback();
        } else {
            QGroupBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qgroupbox_create_isbase) {
            qgroupbox_create_isbase = false;
            QGroupBox::create();
        } else if (qgroupbox_create_callback != nullptr) {
            qgroupbox_create_callback();
        } else {
            QGroupBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qgroupbox_destroy_isbase) {
            qgroupbox_destroy_isbase = false;
            QGroupBox::destroy();
        } else if (qgroupbox_destroy_callback != nullptr) {
            qgroupbox_destroy_callback();
        } else {
            QGroupBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qgroupbox_focusnextchild_isbase) {
            qgroupbox_focusnextchild_isbase = false;
            return QGroupBox::focusNextChild();
        } else if (qgroupbox_focusnextchild_callback != nullptr) {
            bool callback_ret = qgroupbox_focusnextchild_callback();
            return callback_ret;
        } else {
            return QGroupBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qgroupbox_focuspreviouschild_isbase) {
            qgroupbox_focuspreviouschild_isbase = false;
            return QGroupBox::focusPreviousChild();
        } else if (qgroupbox_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qgroupbox_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QGroupBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgroupbox_sender_isbase) {
            qgroupbox_sender_isbase = false;
            return QGroupBox::sender();
        } else if (qgroupbox_sender_callback != nullptr) {
            QObject* callback_ret = qgroupbox_sender_callback();
            return callback_ret;
        } else {
            return QGroupBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgroupbox_sendersignalindex_isbase) {
            qgroupbox_sendersignalindex_isbase = false;
            return QGroupBox::senderSignalIndex();
        } else if (qgroupbox_sendersignalindex_callback != nullptr) {
            int callback_ret = qgroupbox_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGroupBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgroupbox_receivers_isbase) {
            qgroupbox_receivers_isbase = false;
            return QGroupBox::receivers(signal);
        } else if (qgroupbox_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qgroupbox_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGroupBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgroupbox_issignalconnected_isbase) {
            qgroupbox_issignalconnected_isbase = false;
            return QGroupBox::isSignalConnected(signal);
        } else if (qgroupbox_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qgroupbox_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGroupBox::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qgroupbox_getdecodedmetricf_isbase) {
            qgroupbox_getdecodedmetricf_isbase = false;
            return QGroupBox::getDecodedMetricF(metricA, metricB);
        } else if (qgroupbox_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qgroupbox_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QGroupBox::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool QGroupBox_Event(QGroupBox* self, QEvent* event);
    friend bool QGroupBox_QBaseEvent(QGroupBox* self, QEvent* event);
    friend void QGroupBox_ChildEvent(QGroupBox* self, QChildEvent* event);
    friend void QGroupBox_QBaseChildEvent(QGroupBox* self, QChildEvent* event);
    friend void QGroupBox_ResizeEvent(QGroupBox* self, QResizeEvent* event);
    friend void QGroupBox_QBaseResizeEvent(QGroupBox* self, QResizeEvent* event);
    friend void QGroupBox_PaintEvent(QGroupBox* self, QPaintEvent* event);
    friend void QGroupBox_QBasePaintEvent(QGroupBox* self, QPaintEvent* event);
    friend void QGroupBox_FocusInEvent(QGroupBox* self, QFocusEvent* event);
    friend void QGroupBox_QBaseFocusInEvent(QGroupBox* self, QFocusEvent* event);
    friend void QGroupBox_ChangeEvent(QGroupBox* self, QEvent* event);
    friend void QGroupBox_QBaseChangeEvent(QGroupBox* self, QEvent* event);
    friend void QGroupBox_MousePressEvent(QGroupBox* self, QMouseEvent* event);
    friend void QGroupBox_QBaseMousePressEvent(QGroupBox* self, QMouseEvent* event);
    friend void QGroupBox_MouseMoveEvent(QGroupBox* self, QMouseEvent* event);
    friend void QGroupBox_QBaseMouseMoveEvent(QGroupBox* self, QMouseEvent* event);
    friend void QGroupBox_MouseReleaseEvent(QGroupBox* self, QMouseEvent* event);
    friend void QGroupBox_QBaseMouseReleaseEvent(QGroupBox* self, QMouseEvent* event);
    friend void QGroupBox_InitStyleOption(const QGroupBox* self, QStyleOptionGroupBox* option);
    friend void QGroupBox_QBaseInitStyleOption(const QGroupBox* self, QStyleOptionGroupBox* option);
    friend void QGroupBox_MouseDoubleClickEvent(QGroupBox* self, QMouseEvent* event);
    friend void QGroupBox_QBaseMouseDoubleClickEvent(QGroupBox* self, QMouseEvent* event);
    friend void QGroupBox_WheelEvent(QGroupBox* self, QWheelEvent* event);
    friend void QGroupBox_QBaseWheelEvent(QGroupBox* self, QWheelEvent* event);
    friend void QGroupBox_KeyPressEvent(QGroupBox* self, QKeyEvent* event);
    friend void QGroupBox_QBaseKeyPressEvent(QGroupBox* self, QKeyEvent* event);
    friend void QGroupBox_KeyReleaseEvent(QGroupBox* self, QKeyEvent* event);
    friend void QGroupBox_QBaseKeyReleaseEvent(QGroupBox* self, QKeyEvent* event);
    friend void QGroupBox_FocusOutEvent(QGroupBox* self, QFocusEvent* event);
    friend void QGroupBox_QBaseFocusOutEvent(QGroupBox* self, QFocusEvent* event);
    friend void QGroupBox_EnterEvent(QGroupBox* self, QEnterEvent* event);
    friend void QGroupBox_QBaseEnterEvent(QGroupBox* self, QEnterEvent* event);
    friend void QGroupBox_LeaveEvent(QGroupBox* self, QEvent* event);
    friend void QGroupBox_QBaseLeaveEvent(QGroupBox* self, QEvent* event);
    friend void QGroupBox_MoveEvent(QGroupBox* self, QMoveEvent* event);
    friend void QGroupBox_QBaseMoveEvent(QGroupBox* self, QMoveEvent* event);
    friend void QGroupBox_CloseEvent(QGroupBox* self, QCloseEvent* event);
    friend void QGroupBox_QBaseCloseEvent(QGroupBox* self, QCloseEvent* event);
    friend void QGroupBox_ContextMenuEvent(QGroupBox* self, QContextMenuEvent* event);
    friend void QGroupBox_QBaseContextMenuEvent(QGroupBox* self, QContextMenuEvent* event);
    friend void QGroupBox_TabletEvent(QGroupBox* self, QTabletEvent* event);
    friend void QGroupBox_QBaseTabletEvent(QGroupBox* self, QTabletEvent* event);
    friend void QGroupBox_ActionEvent(QGroupBox* self, QActionEvent* event);
    friend void QGroupBox_QBaseActionEvent(QGroupBox* self, QActionEvent* event);
    friend void QGroupBox_DragEnterEvent(QGroupBox* self, QDragEnterEvent* event);
    friend void QGroupBox_QBaseDragEnterEvent(QGroupBox* self, QDragEnterEvent* event);
    friend void QGroupBox_DragMoveEvent(QGroupBox* self, QDragMoveEvent* event);
    friend void QGroupBox_QBaseDragMoveEvent(QGroupBox* self, QDragMoveEvent* event);
    friend void QGroupBox_DragLeaveEvent(QGroupBox* self, QDragLeaveEvent* event);
    friend void QGroupBox_QBaseDragLeaveEvent(QGroupBox* self, QDragLeaveEvent* event);
    friend void QGroupBox_DropEvent(QGroupBox* self, QDropEvent* event);
    friend void QGroupBox_QBaseDropEvent(QGroupBox* self, QDropEvent* event);
    friend void QGroupBox_ShowEvent(QGroupBox* self, QShowEvent* event);
    friend void QGroupBox_QBaseShowEvent(QGroupBox* self, QShowEvent* event);
    friend void QGroupBox_HideEvent(QGroupBox* self, QHideEvent* event);
    friend void QGroupBox_QBaseHideEvent(QGroupBox* self, QHideEvent* event);
    friend bool QGroupBox_NativeEvent(QGroupBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QGroupBox_QBaseNativeEvent(QGroupBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QGroupBox_Metric(const QGroupBox* self, int param1);
    friend int QGroupBox_QBaseMetric(const QGroupBox* self, int param1);
    friend void QGroupBox_InitPainter(const QGroupBox* self, QPainter* painter);
    friend void QGroupBox_QBaseInitPainter(const QGroupBox* self, QPainter* painter);
    friend QPaintDevice* QGroupBox_Redirected(const QGroupBox* self, QPoint* offset);
    friend QPaintDevice* QGroupBox_QBaseRedirected(const QGroupBox* self, QPoint* offset);
    friend QPainter* QGroupBox_SharedPainter(const QGroupBox* self);
    friend QPainter* QGroupBox_QBaseSharedPainter(const QGroupBox* self);
    friend void QGroupBox_InputMethodEvent(QGroupBox* self, QInputMethodEvent* param1);
    friend void QGroupBox_QBaseInputMethodEvent(QGroupBox* self, QInputMethodEvent* param1);
    friend bool QGroupBox_FocusNextPrevChild(QGroupBox* self, bool next);
    friend bool QGroupBox_QBaseFocusNextPrevChild(QGroupBox* self, bool next);
    friend void QGroupBox_TimerEvent(QGroupBox* self, QTimerEvent* event);
    friend void QGroupBox_QBaseTimerEvent(QGroupBox* self, QTimerEvent* event);
    friend void QGroupBox_CustomEvent(QGroupBox* self, QEvent* event);
    friend void QGroupBox_QBaseCustomEvent(QGroupBox* self, QEvent* event);
    friend void QGroupBox_ConnectNotify(QGroupBox* self, const QMetaMethod* signal);
    friend void QGroupBox_QBaseConnectNotify(QGroupBox* self, const QMetaMethod* signal);
    friend void QGroupBox_DisconnectNotify(QGroupBox* self, const QMetaMethod* signal);
    friend void QGroupBox_QBaseDisconnectNotify(QGroupBox* self, const QMetaMethod* signal);
    friend void QGroupBox_UpdateMicroFocus(QGroupBox* self);
    friend void QGroupBox_QBaseUpdateMicroFocus(QGroupBox* self);
    friend void QGroupBox_Create(QGroupBox* self);
    friend void QGroupBox_QBaseCreate(QGroupBox* self);
    friend void QGroupBox_Destroy(QGroupBox* self);
    friend void QGroupBox_QBaseDestroy(QGroupBox* self);
    friend bool QGroupBox_FocusNextChild(QGroupBox* self);
    friend bool QGroupBox_QBaseFocusNextChild(QGroupBox* self);
    friend bool QGroupBox_FocusPreviousChild(QGroupBox* self);
    friend bool QGroupBox_QBaseFocusPreviousChild(QGroupBox* self);
    friend QObject* QGroupBox_Sender(const QGroupBox* self);
    friend QObject* QGroupBox_QBaseSender(const QGroupBox* self);
    friend int QGroupBox_SenderSignalIndex(const QGroupBox* self);
    friend int QGroupBox_QBaseSenderSignalIndex(const QGroupBox* self);
    friend int QGroupBox_Receivers(const QGroupBox* self, const char* signal);
    friend int QGroupBox_QBaseReceivers(const QGroupBox* self, const char* signal);
    friend bool QGroupBox_IsSignalConnected(const QGroupBox* self, const QMetaMethod* signal);
    friend bool QGroupBox_QBaseIsSignalConnected(const QGroupBox* self, const QMetaMethod* signal);
    friend double QGroupBox_GetDecodedMetricF(const QGroupBox* self, int metricA, int metricB);
    friend double QGroupBox_QBaseGetDecodedMetricF(const QGroupBox* self, int metricA, int metricB);
};

#endif
