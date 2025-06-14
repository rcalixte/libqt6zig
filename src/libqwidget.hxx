#pragma once
#ifndef SRCC_LIBVIRTUALQWIDGET_H
#define SRCC_LIBVIRTUALQWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QWidget so that we can call protected methods
class VirtualQWidget final : public QWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualQWidget = true;

    // Virtual class public types (including callbacks)
    using QWidget_Metacall_Callback = int (*)(QWidget*, int, int, void**);
    using QWidget_DevType_Callback = int (*)();
    using QWidget_SetVisible_Callback = void (*)(QWidget*, bool);
    using QWidget_SizeHint_Callback = QSize* (*)();
    using QWidget_MinimumSizeHint_Callback = QSize* (*)();
    using QWidget_HeightForWidth_Callback = int (*)(const QWidget*, int);
    using QWidget_HasHeightForWidth_Callback = bool (*)();
    using QWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using QWidget_Event_Callback = bool (*)(QWidget*, QEvent*);
    using QWidget_MousePressEvent_Callback = void (*)(QWidget*, QMouseEvent*);
    using QWidget_MouseReleaseEvent_Callback = void (*)(QWidget*, QMouseEvent*);
    using QWidget_MouseDoubleClickEvent_Callback = void (*)(QWidget*, QMouseEvent*);
    using QWidget_MouseMoveEvent_Callback = void (*)(QWidget*, QMouseEvent*);
    using QWidget_WheelEvent_Callback = void (*)(QWidget*, QWheelEvent*);
    using QWidget_KeyPressEvent_Callback = void (*)(QWidget*, QKeyEvent*);
    using QWidget_KeyReleaseEvent_Callback = void (*)(QWidget*, QKeyEvent*);
    using QWidget_FocusInEvent_Callback = void (*)(QWidget*, QFocusEvent*);
    using QWidget_FocusOutEvent_Callback = void (*)(QWidget*, QFocusEvent*);
    using QWidget_EnterEvent_Callback = void (*)(QWidget*, QEnterEvent*);
    using QWidget_LeaveEvent_Callback = void (*)(QWidget*, QEvent*);
    using QWidget_PaintEvent_Callback = void (*)(QWidget*, QPaintEvent*);
    using QWidget_MoveEvent_Callback = void (*)(QWidget*, QMoveEvent*);
    using QWidget_ResizeEvent_Callback = void (*)(QWidget*, QResizeEvent*);
    using QWidget_CloseEvent_Callback = void (*)(QWidget*, QCloseEvent*);
    using QWidget_ContextMenuEvent_Callback = void (*)(QWidget*, QContextMenuEvent*);
    using QWidget_TabletEvent_Callback = void (*)(QWidget*, QTabletEvent*);
    using QWidget_ActionEvent_Callback = void (*)(QWidget*, QActionEvent*);
    using QWidget_DragEnterEvent_Callback = void (*)(QWidget*, QDragEnterEvent*);
    using QWidget_DragMoveEvent_Callback = void (*)(QWidget*, QDragMoveEvent*);
    using QWidget_DragLeaveEvent_Callback = void (*)(QWidget*, QDragLeaveEvent*);
    using QWidget_DropEvent_Callback = void (*)(QWidget*, QDropEvent*);
    using QWidget_ShowEvent_Callback = void (*)(QWidget*, QShowEvent*);
    using QWidget_HideEvent_Callback = void (*)(QWidget*, QHideEvent*);
    using QWidget_NativeEvent_Callback = bool (*)(QWidget*, libqt_string, void*, intptr_t*);
    using QWidget_ChangeEvent_Callback = void (*)(QWidget*, QEvent*);
    using QWidget_Metric_Callback = int (*)(const QWidget*, int);
    using QWidget_InitPainter_Callback = void (*)(const QWidget*, QPainter*);
    using QWidget_Redirected_Callback = QPaintDevice* (*)(const QWidget*, QPoint*);
    using QWidget_SharedPainter_Callback = QPainter* (*)();
    using QWidget_InputMethodEvent_Callback = void (*)(QWidget*, QInputMethodEvent*);
    using QWidget_InputMethodQuery_Callback = QVariant* (*)(const QWidget*, int);
    using QWidget_FocusNextPrevChild_Callback = bool (*)(QWidget*, bool);
    using QWidget_EventFilter_Callback = bool (*)(QWidget*, QObject*, QEvent*);
    using QWidget_TimerEvent_Callback = void (*)(QWidget*, QTimerEvent*);
    using QWidget_ChildEvent_Callback = void (*)(QWidget*, QChildEvent*);
    using QWidget_CustomEvent_Callback = void (*)(QWidget*, QEvent*);
    using QWidget_ConnectNotify_Callback = void (*)(QWidget*, QMetaMethod*);
    using QWidget_DisconnectNotify_Callback = void (*)(QWidget*, QMetaMethod*);
    using QWidget_UpdateMicroFocus_Callback = void (*)();
    using QWidget_Create_Callback = void (*)();
    using QWidget_Destroy_Callback = void (*)();
    using QWidget_FocusNextChild_Callback = bool (*)();
    using QWidget_FocusPreviousChild_Callback = bool (*)();
    using QWidget_UpdateMicroFocus1_Callback = void (*)(QWidget*, int);
    using QWidget_Create1_Callback = void (*)(QWidget*, unsigned long long);
    using QWidget_Create2_Callback = void (*)(QWidget*, unsigned long long, bool);
    using QWidget_Create3_Callback = void (*)(QWidget*, unsigned long long, bool, bool);
    using QWidget_Destroy1_Callback = void (*)(QWidget*, bool);
    using QWidget_Destroy2_Callback = void (*)(QWidget*, bool, bool);
    using QWidget_Sender_Callback = QObject* (*)();
    using QWidget_SenderSignalIndex_Callback = int (*)();
    using QWidget_Receivers_Callback = int (*)(const QWidget*, const char*);
    using QWidget_IsSignalConnected_Callback = bool (*)(const QWidget*, QMetaMethod*);

  protected:
    // Instance callback storage
    QWidget_Metacall_Callback qwidget_metacall_callback = nullptr;
    QWidget_DevType_Callback qwidget_devtype_callback = nullptr;
    QWidget_SetVisible_Callback qwidget_setvisible_callback = nullptr;
    QWidget_SizeHint_Callback qwidget_sizehint_callback = nullptr;
    QWidget_MinimumSizeHint_Callback qwidget_minimumsizehint_callback = nullptr;
    QWidget_HeightForWidth_Callback qwidget_heightforwidth_callback = nullptr;
    QWidget_HasHeightForWidth_Callback qwidget_hasheightforwidth_callback = nullptr;
    QWidget_PaintEngine_Callback qwidget_paintengine_callback = nullptr;
    QWidget_Event_Callback qwidget_event_callback = nullptr;
    QWidget_MousePressEvent_Callback qwidget_mousepressevent_callback = nullptr;
    QWidget_MouseReleaseEvent_Callback qwidget_mousereleaseevent_callback = nullptr;
    QWidget_MouseDoubleClickEvent_Callback qwidget_mousedoubleclickevent_callback = nullptr;
    QWidget_MouseMoveEvent_Callback qwidget_mousemoveevent_callback = nullptr;
    QWidget_WheelEvent_Callback qwidget_wheelevent_callback = nullptr;
    QWidget_KeyPressEvent_Callback qwidget_keypressevent_callback = nullptr;
    QWidget_KeyReleaseEvent_Callback qwidget_keyreleaseevent_callback = nullptr;
    QWidget_FocusInEvent_Callback qwidget_focusinevent_callback = nullptr;
    QWidget_FocusOutEvent_Callback qwidget_focusoutevent_callback = nullptr;
    QWidget_EnterEvent_Callback qwidget_enterevent_callback = nullptr;
    QWidget_LeaveEvent_Callback qwidget_leaveevent_callback = nullptr;
    QWidget_PaintEvent_Callback qwidget_paintevent_callback = nullptr;
    QWidget_MoveEvent_Callback qwidget_moveevent_callback = nullptr;
    QWidget_ResizeEvent_Callback qwidget_resizeevent_callback = nullptr;
    QWidget_CloseEvent_Callback qwidget_closeevent_callback = nullptr;
    QWidget_ContextMenuEvent_Callback qwidget_contextmenuevent_callback = nullptr;
    QWidget_TabletEvent_Callback qwidget_tabletevent_callback = nullptr;
    QWidget_ActionEvent_Callback qwidget_actionevent_callback = nullptr;
    QWidget_DragEnterEvent_Callback qwidget_dragenterevent_callback = nullptr;
    QWidget_DragMoveEvent_Callback qwidget_dragmoveevent_callback = nullptr;
    QWidget_DragLeaveEvent_Callback qwidget_dragleaveevent_callback = nullptr;
    QWidget_DropEvent_Callback qwidget_dropevent_callback = nullptr;
    QWidget_ShowEvent_Callback qwidget_showevent_callback = nullptr;
    QWidget_HideEvent_Callback qwidget_hideevent_callback = nullptr;
    QWidget_NativeEvent_Callback qwidget_nativeevent_callback = nullptr;
    QWidget_ChangeEvent_Callback qwidget_changeevent_callback = nullptr;
    QWidget_Metric_Callback qwidget_metric_callback = nullptr;
    QWidget_InitPainter_Callback qwidget_initpainter_callback = nullptr;
    QWidget_Redirected_Callback qwidget_redirected_callback = nullptr;
    QWidget_SharedPainter_Callback qwidget_sharedpainter_callback = nullptr;
    QWidget_InputMethodEvent_Callback qwidget_inputmethodevent_callback = nullptr;
    QWidget_InputMethodQuery_Callback qwidget_inputmethodquery_callback = nullptr;
    QWidget_FocusNextPrevChild_Callback qwidget_focusnextprevchild_callback = nullptr;
    QWidget_EventFilter_Callback qwidget_eventfilter_callback = nullptr;
    QWidget_TimerEvent_Callback qwidget_timerevent_callback = nullptr;
    QWidget_ChildEvent_Callback qwidget_childevent_callback = nullptr;
    QWidget_CustomEvent_Callback qwidget_customevent_callback = nullptr;
    QWidget_ConnectNotify_Callback qwidget_connectnotify_callback = nullptr;
    QWidget_DisconnectNotify_Callback qwidget_disconnectnotify_callback = nullptr;
    QWidget_UpdateMicroFocus_Callback qwidget_updatemicrofocus_callback = nullptr;
    QWidget_Create_Callback qwidget_create_callback = nullptr;
    QWidget_Destroy_Callback qwidget_destroy_callback = nullptr;
    QWidget_FocusNextChild_Callback qwidget_focusnextchild_callback = nullptr;
    QWidget_FocusPreviousChild_Callback qwidget_focuspreviouschild_callback = nullptr;
    QWidget_UpdateMicroFocus1_Callback qwidget_updatemicrofocus1_callback = nullptr;
    QWidget_Create1_Callback qwidget_create1_callback = nullptr;
    QWidget_Create2_Callback qwidget_create2_callback = nullptr;
    QWidget_Create3_Callback qwidget_create3_callback = nullptr;
    QWidget_Destroy1_Callback qwidget_destroy1_callback = nullptr;
    QWidget_Destroy2_Callback qwidget_destroy2_callback = nullptr;
    QWidget_Sender_Callback qwidget_sender_callback = nullptr;
    QWidget_SenderSignalIndex_Callback qwidget_sendersignalindex_callback = nullptr;
    QWidget_Receivers_Callback qwidget_receivers_callback = nullptr;
    QWidget_IsSignalConnected_Callback qwidget_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qwidget_metacall_isbase = false;
    mutable bool qwidget_devtype_isbase = false;
    mutable bool qwidget_setvisible_isbase = false;
    mutable bool qwidget_sizehint_isbase = false;
    mutable bool qwidget_minimumsizehint_isbase = false;
    mutable bool qwidget_heightforwidth_isbase = false;
    mutable bool qwidget_hasheightforwidth_isbase = false;
    mutable bool qwidget_paintengine_isbase = false;
    mutable bool qwidget_event_isbase = false;
    mutable bool qwidget_mousepressevent_isbase = false;
    mutable bool qwidget_mousereleaseevent_isbase = false;
    mutable bool qwidget_mousedoubleclickevent_isbase = false;
    mutable bool qwidget_mousemoveevent_isbase = false;
    mutable bool qwidget_wheelevent_isbase = false;
    mutable bool qwidget_keypressevent_isbase = false;
    mutable bool qwidget_keyreleaseevent_isbase = false;
    mutable bool qwidget_focusinevent_isbase = false;
    mutable bool qwidget_focusoutevent_isbase = false;
    mutable bool qwidget_enterevent_isbase = false;
    mutable bool qwidget_leaveevent_isbase = false;
    mutable bool qwidget_paintevent_isbase = false;
    mutable bool qwidget_moveevent_isbase = false;
    mutable bool qwidget_resizeevent_isbase = false;
    mutable bool qwidget_closeevent_isbase = false;
    mutable bool qwidget_contextmenuevent_isbase = false;
    mutable bool qwidget_tabletevent_isbase = false;
    mutable bool qwidget_actionevent_isbase = false;
    mutable bool qwidget_dragenterevent_isbase = false;
    mutable bool qwidget_dragmoveevent_isbase = false;
    mutable bool qwidget_dragleaveevent_isbase = false;
    mutable bool qwidget_dropevent_isbase = false;
    mutable bool qwidget_showevent_isbase = false;
    mutable bool qwidget_hideevent_isbase = false;
    mutable bool qwidget_nativeevent_isbase = false;
    mutable bool qwidget_changeevent_isbase = false;
    mutable bool qwidget_metric_isbase = false;
    mutable bool qwidget_initpainter_isbase = false;
    mutable bool qwidget_redirected_isbase = false;
    mutable bool qwidget_sharedpainter_isbase = false;
    mutable bool qwidget_inputmethodevent_isbase = false;
    mutable bool qwidget_inputmethodquery_isbase = false;
    mutable bool qwidget_focusnextprevchild_isbase = false;
    mutable bool qwidget_eventfilter_isbase = false;
    mutable bool qwidget_timerevent_isbase = false;
    mutable bool qwidget_childevent_isbase = false;
    mutable bool qwidget_customevent_isbase = false;
    mutable bool qwidget_connectnotify_isbase = false;
    mutable bool qwidget_disconnectnotify_isbase = false;
    mutable bool qwidget_updatemicrofocus_isbase = false;
    mutable bool qwidget_create_isbase = false;
    mutable bool qwidget_destroy_isbase = false;
    mutable bool qwidget_focusnextchild_isbase = false;
    mutable bool qwidget_focuspreviouschild_isbase = false;
    mutable bool qwidget_updatemicrofocus1_isbase = false;
    mutable bool qwidget_create1_isbase = false;
    mutable bool qwidget_create2_isbase = false;
    mutable bool qwidget_create3_isbase = false;
    mutable bool qwidget_destroy1_isbase = false;
    mutable bool qwidget_destroy2_isbase = false;
    mutable bool qwidget_sender_isbase = false;
    mutable bool qwidget_sendersignalindex_isbase = false;
    mutable bool qwidget_receivers_isbase = false;
    mutable bool qwidget_issignalconnected_isbase = false;

  public:
    VirtualQWidget(QWidget* parent) : QWidget(parent){};
    VirtualQWidget() : QWidget(){};
    VirtualQWidget(QWidget* parent, Qt::WindowFlags f) : QWidget(parent, f){};

    ~VirtualQWidget() {
        qwidget_metacall_callback = nullptr;
        qwidget_devtype_callback = nullptr;
        qwidget_setvisible_callback = nullptr;
        qwidget_sizehint_callback = nullptr;
        qwidget_minimumsizehint_callback = nullptr;
        qwidget_heightforwidth_callback = nullptr;
        qwidget_hasheightforwidth_callback = nullptr;
        qwidget_paintengine_callback = nullptr;
        qwidget_event_callback = nullptr;
        qwidget_mousepressevent_callback = nullptr;
        qwidget_mousereleaseevent_callback = nullptr;
        qwidget_mousedoubleclickevent_callback = nullptr;
        qwidget_mousemoveevent_callback = nullptr;
        qwidget_wheelevent_callback = nullptr;
        qwidget_keypressevent_callback = nullptr;
        qwidget_keyreleaseevent_callback = nullptr;
        qwidget_focusinevent_callback = nullptr;
        qwidget_focusoutevent_callback = nullptr;
        qwidget_enterevent_callback = nullptr;
        qwidget_leaveevent_callback = nullptr;
        qwidget_paintevent_callback = nullptr;
        qwidget_moveevent_callback = nullptr;
        qwidget_resizeevent_callback = nullptr;
        qwidget_closeevent_callback = nullptr;
        qwidget_contextmenuevent_callback = nullptr;
        qwidget_tabletevent_callback = nullptr;
        qwidget_actionevent_callback = nullptr;
        qwidget_dragenterevent_callback = nullptr;
        qwidget_dragmoveevent_callback = nullptr;
        qwidget_dragleaveevent_callback = nullptr;
        qwidget_dropevent_callback = nullptr;
        qwidget_showevent_callback = nullptr;
        qwidget_hideevent_callback = nullptr;
        qwidget_nativeevent_callback = nullptr;
        qwidget_changeevent_callback = nullptr;
        qwidget_metric_callback = nullptr;
        qwidget_initpainter_callback = nullptr;
        qwidget_redirected_callback = nullptr;
        qwidget_sharedpainter_callback = nullptr;
        qwidget_inputmethodevent_callback = nullptr;
        qwidget_inputmethodquery_callback = nullptr;
        qwidget_focusnextprevchild_callback = nullptr;
        qwidget_eventfilter_callback = nullptr;
        qwidget_timerevent_callback = nullptr;
        qwidget_childevent_callback = nullptr;
        qwidget_customevent_callback = nullptr;
        qwidget_connectnotify_callback = nullptr;
        qwidget_disconnectnotify_callback = nullptr;
        qwidget_updatemicrofocus_callback = nullptr;
        qwidget_create_callback = nullptr;
        qwidget_destroy_callback = nullptr;
        qwidget_focusnextchild_callback = nullptr;
        qwidget_focuspreviouschild_callback = nullptr;
        qwidget_updatemicrofocus1_callback = nullptr;
        qwidget_create1_callback = nullptr;
        qwidget_create2_callback = nullptr;
        qwidget_create3_callback = nullptr;
        qwidget_destroy1_callback = nullptr;
        qwidget_destroy2_callback = nullptr;
        qwidget_sender_callback = nullptr;
        qwidget_sendersignalindex_callback = nullptr;
        qwidget_receivers_callback = nullptr;
        qwidget_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQWidget_Metacall_Callback(QWidget_Metacall_Callback cb) { qwidget_metacall_callback = cb; }
    inline void setQWidget_DevType_Callback(QWidget_DevType_Callback cb) { qwidget_devtype_callback = cb; }
    inline void setQWidget_SetVisible_Callback(QWidget_SetVisible_Callback cb) { qwidget_setvisible_callback = cb; }
    inline void setQWidget_SizeHint_Callback(QWidget_SizeHint_Callback cb) { qwidget_sizehint_callback = cb; }
    inline void setQWidget_MinimumSizeHint_Callback(QWidget_MinimumSizeHint_Callback cb) { qwidget_minimumsizehint_callback = cb; }
    inline void setQWidget_HeightForWidth_Callback(QWidget_HeightForWidth_Callback cb) { qwidget_heightforwidth_callback = cb; }
    inline void setQWidget_HasHeightForWidth_Callback(QWidget_HasHeightForWidth_Callback cb) { qwidget_hasheightforwidth_callback = cb; }
    inline void setQWidget_PaintEngine_Callback(QWidget_PaintEngine_Callback cb) { qwidget_paintengine_callback = cb; }
    inline void setQWidget_Event_Callback(QWidget_Event_Callback cb) { qwidget_event_callback = cb; }
    inline void setQWidget_MousePressEvent_Callback(QWidget_MousePressEvent_Callback cb) { qwidget_mousepressevent_callback = cb; }
    inline void setQWidget_MouseReleaseEvent_Callback(QWidget_MouseReleaseEvent_Callback cb) { qwidget_mousereleaseevent_callback = cb; }
    inline void setQWidget_MouseDoubleClickEvent_Callback(QWidget_MouseDoubleClickEvent_Callback cb) { qwidget_mousedoubleclickevent_callback = cb; }
    inline void setQWidget_MouseMoveEvent_Callback(QWidget_MouseMoveEvent_Callback cb) { qwidget_mousemoveevent_callback = cb; }
    inline void setQWidget_WheelEvent_Callback(QWidget_WheelEvent_Callback cb) { qwidget_wheelevent_callback = cb; }
    inline void setQWidget_KeyPressEvent_Callback(QWidget_KeyPressEvent_Callback cb) { qwidget_keypressevent_callback = cb; }
    inline void setQWidget_KeyReleaseEvent_Callback(QWidget_KeyReleaseEvent_Callback cb) { qwidget_keyreleaseevent_callback = cb; }
    inline void setQWidget_FocusInEvent_Callback(QWidget_FocusInEvent_Callback cb) { qwidget_focusinevent_callback = cb; }
    inline void setQWidget_FocusOutEvent_Callback(QWidget_FocusOutEvent_Callback cb) { qwidget_focusoutevent_callback = cb; }
    inline void setQWidget_EnterEvent_Callback(QWidget_EnterEvent_Callback cb) { qwidget_enterevent_callback = cb; }
    inline void setQWidget_LeaveEvent_Callback(QWidget_LeaveEvent_Callback cb) { qwidget_leaveevent_callback = cb; }
    inline void setQWidget_PaintEvent_Callback(QWidget_PaintEvent_Callback cb) { qwidget_paintevent_callback = cb; }
    inline void setQWidget_MoveEvent_Callback(QWidget_MoveEvent_Callback cb) { qwidget_moveevent_callback = cb; }
    inline void setQWidget_ResizeEvent_Callback(QWidget_ResizeEvent_Callback cb) { qwidget_resizeevent_callback = cb; }
    inline void setQWidget_CloseEvent_Callback(QWidget_CloseEvent_Callback cb) { qwidget_closeevent_callback = cb; }
    inline void setQWidget_ContextMenuEvent_Callback(QWidget_ContextMenuEvent_Callback cb) { qwidget_contextmenuevent_callback = cb; }
    inline void setQWidget_TabletEvent_Callback(QWidget_TabletEvent_Callback cb) { qwidget_tabletevent_callback = cb; }
    inline void setQWidget_ActionEvent_Callback(QWidget_ActionEvent_Callback cb) { qwidget_actionevent_callback = cb; }
    inline void setQWidget_DragEnterEvent_Callback(QWidget_DragEnterEvent_Callback cb) { qwidget_dragenterevent_callback = cb; }
    inline void setQWidget_DragMoveEvent_Callback(QWidget_DragMoveEvent_Callback cb) { qwidget_dragmoveevent_callback = cb; }
    inline void setQWidget_DragLeaveEvent_Callback(QWidget_DragLeaveEvent_Callback cb) { qwidget_dragleaveevent_callback = cb; }
    inline void setQWidget_DropEvent_Callback(QWidget_DropEvent_Callback cb) { qwidget_dropevent_callback = cb; }
    inline void setQWidget_ShowEvent_Callback(QWidget_ShowEvent_Callback cb) { qwidget_showevent_callback = cb; }
    inline void setQWidget_HideEvent_Callback(QWidget_HideEvent_Callback cb) { qwidget_hideevent_callback = cb; }
    inline void setQWidget_NativeEvent_Callback(QWidget_NativeEvent_Callback cb) { qwidget_nativeevent_callback = cb; }
    inline void setQWidget_ChangeEvent_Callback(QWidget_ChangeEvent_Callback cb) { qwidget_changeevent_callback = cb; }
    inline void setQWidget_Metric_Callback(QWidget_Metric_Callback cb) { qwidget_metric_callback = cb; }
    inline void setQWidget_InitPainter_Callback(QWidget_InitPainter_Callback cb) { qwidget_initpainter_callback = cb; }
    inline void setQWidget_Redirected_Callback(QWidget_Redirected_Callback cb) { qwidget_redirected_callback = cb; }
    inline void setQWidget_SharedPainter_Callback(QWidget_SharedPainter_Callback cb) { qwidget_sharedpainter_callback = cb; }
    inline void setQWidget_InputMethodEvent_Callback(QWidget_InputMethodEvent_Callback cb) { qwidget_inputmethodevent_callback = cb; }
    inline void setQWidget_InputMethodQuery_Callback(QWidget_InputMethodQuery_Callback cb) { qwidget_inputmethodquery_callback = cb; }
    inline void setQWidget_FocusNextPrevChild_Callback(QWidget_FocusNextPrevChild_Callback cb) { qwidget_focusnextprevchild_callback = cb; }
    inline void setQWidget_EventFilter_Callback(QWidget_EventFilter_Callback cb) { qwidget_eventfilter_callback = cb; }
    inline void setQWidget_TimerEvent_Callback(QWidget_TimerEvent_Callback cb) { qwidget_timerevent_callback = cb; }
    inline void setQWidget_ChildEvent_Callback(QWidget_ChildEvent_Callback cb) { qwidget_childevent_callback = cb; }
    inline void setQWidget_CustomEvent_Callback(QWidget_CustomEvent_Callback cb) { qwidget_customevent_callback = cb; }
    inline void setQWidget_ConnectNotify_Callback(QWidget_ConnectNotify_Callback cb) { qwidget_connectnotify_callback = cb; }
    inline void setQWidget_DisconnectNotify_Callback(QWidget_DisconnectNotify_Callback cb) { qwidget_disconnectnotify_callback = cb; }
    inline void setQWidget_UpdateMicroFocus_Callback(QWidget_UpdateMicroFocus_Callback cb) { qwidget_updatemicrofocus_callback = cb; }
    inline void setQWidget_Create_Callback(QWidget_Create_Callback cb) { qwidget_create_callback = cb; }
    inline void setQWidget_Destroy_Callback(QWidget_Destroy_Callback cb) { qwidget_destroy_callback = cb; }
    inline void setQWidget_FocusNextChild_Callback(QWidget_FocusNextChild_Callback cb) { qwidget_focusnextchild_callback = cb; }
    inline void setQWidget_FocusPreviousChild_Callback(QWidget_FocusPreviousChild_Callback cb) { qwidget_focuspreviouschild_callback = cb; }
    inline void setQWidget_UpdateMicroFocus1_Callback(QWidget_UpdateMicroFocus1_Callback cb) { qwidget_updatemicrofocus1_callback = cb; }
    inline void setQWidget_Create1_Callback(QWidget_Create1_Callback cb) { qwidget_create1_callback = cb; }
    inline void setQWidget_Create2_Callback(QWidget_Create2_Callback cb) { qwidget_create2_callback = cb; }
    inline void setQWidget_Create3_Callback(QWidget_Create3_Callback cb) { qwidget_create3_callback = cb; }
    inline void setQWidget_Destroy1_Callback(QWidget_Destroy1_Callback cb) { qwidget_destroy1_callback = cb; }
    inline void setQWidget_Destroy2_Callback(QWidget_Destroy2_Callback cb) { qwidget_destroy2_callback = cb; }
    inline void setQWidget_Sender_Callback(QWidget_Sender_Callback cb) { qwidget_sender_callback = cb; }
    inline void setQWidget_SenderSignalIndex_Callback(QWidget_SenderSignalIndex_Callback cb) { qwidget_sendersignalindex_callback = cb; }
    inline void setQWidget_Receivers_Callback(QWidget_Receivers_Callback cb) { qwidget_receivers_callback = cb; }
    inline void setQWidget_IsSignalConnected_Callback(QWidget_IsSignalConnected_Callback cb) { qwidget_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQWidget_Metacall_IsBase(bool value) const { qwidget_metacall_isbase = value; }
    inline void setQWidget_DevType_IsBase(bool value) const { qwidget_devtype_isbase = value; }
    inline void setQWidget_SetVisible_IsBase(bool value) const { qwidget_setvisible_isbase = value; }
    inline void setQWidget_SizeHint_IsBase(bool value) const { qwidget_sizehint_isbase = value; }
    inline void setQWidget_MinimumSizeHint_IsBase(bool value) const { qwidget_minimumsizehint_isbase = value; }
    inline void setQWidget_HeightForWidth_IsBase(bool value) const { qwidget_heightforwidth_isbase = value; }
    inline void setQWidget_HasHeightForWidth_IsBase(bool value) const { qwidget_hasheightforwidth_isbase = value; }
    inline void setQWidget_PaintEngine_IsBase(bool value) const { qwidget_paintengine_isbase = value; }
    inline void setQWidget_Event_IsBase(bool value) const { qwidget_event_isbase = value; }
    inline void setQWidget_MousePressEvent_IsBase(bool value) const { qwidget_mousepressevent_isbase = value; }
    inline void setQWidget_MouseReleaseEvent_IsBase(bool value) const { qwidget_mousereleaseevent_isbase = value; }
    inline void setQWidget_MouseDoubleClickEvent_IsBase(bool value) const { qwidget_mousedoubleclickevent_isbase = value; }
    inline void setQWidget_MouseMoveEvent_IsBase(bool value) const { qwidget_mousemoveevent_isbase = value; }
    inline void setQWidget_WheelEvent_IsBase(bool value) const { qwidget_wheelevent_isbase = value; }
    inline void setQWidget_KeyPressEvent_IsBase(bool value) const { qwidget_keypressevent_isbase = value; }
    inline void setQWidget_KeyReleaseEvent_IsBase(bool value) const { qwidget_keyreleaseevent_isbase = value; }
    inline void setQWidget_FocusInEvent_IsBase(bool value) const { qwidget_focusinevent_isbase = value; }
    inline void setQWidget_FocusOutEvent_IsBase(bool value) const { qwidget_focusoutevent_isbase = value; }
    inline void setQWidget_EnterEvent_IsBase(bool value) const { qwidget_enterevent_isbase = value; }
    inline void setQWidget_LeaveEvent_IsBase(bool value) const { qwidget_leaveevent_isbase = value; }
    inline void setQWidget_PaintEvent_IsBase(bool value) const { qwidget_paintevent_isbase = value; }
    inline void setQWidget_MoveEvent_IsBase(bool value) const { qwidget_moveevent_isbase = value; }
    inline void setQWidget_ResizeEvent_IsBase(bool value) const { qwidget_resizeevent_isbase = value; }
    inline void setQWidget_CloseEvent_IsBase(bool value) const { qwidget_closeevent_isbase = value; }
    inline void setQWidget_ContextMenuEvent_IsBase(bool value) const { qwidget_contextmenuevent_isbase = value; }
    inline void setQWidget_TabletEvent_IsBase(bool value) const { qwidget_tabletevent_isbase = value; }
    inline void setQWidget_ActionEvent_IsBase(bool value) const { qwidget_actionevent_isbase = value; }
    inline void setQWidget_DragEnterEvent_IsBase(bool value) const { qwidget_dragenterevent_isbase = value; }
    inline void setQWidget_DragMoveEvent_IsBase(bool value) const { qwidget_dragmoveevent_isbase = value; }
    inline void setQWidget_DragLeaveEvent_IsBase(bool value) const { qwidget_dragleaveevent_isbase = value; }
    inline void setQWidget_DropEvent_IsBase(bool value) const { qwidget_dropevent_isbase = value; }
    inline void setQWidget_ShowEvent_IsBase(bool value) const { qwidget_showevent_isbase = value; }
    inline void setQWidget_HideEvent_IsBase(bool value) const { qwidget_hideevent_isbase = value; }
    inline void setQWidget_NativeEvent_IsBase(bool value) const { qwidget_nativeevent_isbase = value; }
    inline void setQWidget_ChangeEvent_IsBase(bool value) const { qwidget_changeevent_isbase = value; }
    inline void setQWidget_Metric_IsBase(bool value) const { qwidget_metric_isbase = value; }
    inline void setQWidget_InitPainter_IsBase(bool value) const { qwidget_initpainter_isbase = value; }
    inline void setQWidget_Redirected_IsBase(bool value) const { qwidget_redirected_isbase = value; }
    inline void setQWidget_SharedPainter_IsBase(bool value) const { qwidget_sharedpainter_isbase = value; }
    inline void setQWidget_InputMethodEvent_IsBase(bool value) const { qwidget_inputmethodevent_isbase = value; }
    inline void setQWidget_InputMethodQuery_IsBase(bool value) const { qwidget_inputmethodquery_isbase = value; }
    inline void setQWidget_FocusNextPrevChild_IsBase(bool value) const { qwidget_focusnextprevchild_isbase = value; }
    inline void setQWidget_EventFilter_IsBase(bool value) const { qwidget_eventfilter_isbase = value; }
    inline void setQWidget_TimerEvent_IsBase(bool value) const { qwidget_timerevent_isbase = value; }
    inline void setQWidget_ChildEvent_IsBase(bool value) const { qwidget_childevent_isbase = value; }
    inline void setQWidget_CustomEvent_IsBase(bool value) const { qwidget_customevent_isbase = value; }
    inline void setQWidget_ConnectNotify_IsBase(bool value) const { qwidget_connectnotify_isbase = value; }
    inline void setQWidget_DisconnectNotify_IsBase(bool value) const { qwidget_disconnectnotify_isbase = value; }
    inline void setQWidget_UpdateMicroFocus_IsBase(bool value) const { qwidget_updatemicrofocus_isbase = value; }
    inline void setQWidget_Create_IsBase(bool value) const { qwidget_create_isbase = value; }
    inline void setQWidget_Destroy_IsBase(bool value) const { qwidget_destroy_isbase = value; }
    inline void setQWidget_FocusNextChild_IsBase(bool value) const { qwidget_focusnextchild_isbase = value; }
    inline void setQWidget_FocusPreviousChild_IsBase(bool value) const { qwidget_focuspreviouschild_isbase = value; }
    inline void setQWidget_UpdateMicroFocus1_IsBase(bool value) const { qwidget_updatemicrofocus1_isbase = value; }
    inline void setQWidget_Create1_IsBase(bool value) const { qwidget_create1_isbase = value; }
    inline void setQWidget_Create2_IsBase(bool value) const { qwidget_create2_isbase = value; }
    inline void setQWidget_Create3_IsBase(bool value) const { qwidget_create3_isbase = value; }
    inline void setQWidget_Destroy1_IsBase(bool value) const { qwidget_destroy1_isbase = value; }
    inline void setQWidget_Destroy2_IsBase(bool value) const { qwidget_destroy2_isbase = value; }
    inline void setQWidget_Sender_IsBase(bool value) const { qwidget_sender_isbase = value; }
    inline void setQWidget_SenderSignalIndex_IsBase(bool value) const { qwidget_sendersignalindex_isbase = value; }
    inline void setQWidget_Receivers_IsBase(bool value) const { qwidget_receivers_isbase = value; }
    inline void setQWidget_IsSignalConnected_IsBase(bool value) const { qwidget_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwidget_metacall_isbase) {
            qwidget_metacall_isbase = false;
            return QWidget::qt_metacall(param1, param2, param3);
        } else if (qwidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qwidget_devtype_isbase) {
            qwidget_devtype_isbase = false;
            return QWidget::devType();
        } else if (qwidget_devtype_callback != nullptr) {
            int callback_ret = qwidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qwidget_setvisible_isbase) {
            qwidget_setvisible_isbase = false;
            QWidget::setVisible(visible);
        } else if (qwidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qwidget_setvisible_callback(this, cbval1);
        } else {
            QWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qwidget_sizehint_isbase) {
            qwidget_sizehint_isbase = false;
            return QWidget::sizeHint();
        } else if (qwidget_sizehint_callback != nullptr) {
            QSize* callback_ret = qwidget_sizehint_callback();
            return *callback_ret;
        } else {
            return QWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qwidget_minimumsizehint_isbase) {
            qwidget_minimumsizehint_isbase = false;
            return QWidget::minimumSizeHint();
        } else if (qwidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qwidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qwidget_heightforwidth_isbase) {
            qwidget_heightforwidth_isbase = false;
            return QWidget::heightForWidth(param1);
        } else if (qwidget_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qwidget_hasheightforwidth_isbase) {
            qwidget_hasheightforwidth_isbase = false;
            return QWidget::hasHeightForWidth();
        } else if (qwidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qwidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qwidget_paintengine_isbase) {
            qwidget_paintengine_isbase = false;
            return QWidget::paintEngine();
        } else if (qwidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qwidget_paintengine_callback();
            return callback_ret;
        } else {
            return QWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwidget_event_isbase) {
            qwidget_event_isbase = false;
            return QWidget::event(event);
        } else if (qwidget_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qwidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qwidget_mousepressevent_isbase) {
            qwidget_mousepressevent_isbase = false;
            QWidget::mousePressEvent(event);
        } else if (qwidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qwidget_mousepressevent_callback(this, cbval1);
        } else {
            QWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qwidget_mousereleaseevent_isbase) {
            qwidget_mousereleaseevent_isbase = false;
            QWidget::mouseReleaseEvent(event);
        } else if (qwidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qwidget_mousereleaseevent_callback(this, cbval1);
        } else {
            QWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qwidget_mousedoubleclickevent_isbase) {
            qwidget_mousedoubleclickevent_isbase = false;
            QWidget::mouseDoubleClickEvent(event);
        } else if (qwidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qwidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qwidget_mousemoveevent_isbase) {
            qwidget_mousemoveevent_isbase = false;
            QWidget::mouseMoveEvent(event);
        } else if (qwidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qwidget_mousemoveevent_callback(this, cbval1);
        } else {
            QWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qwidget_wheelevent_isbase) {
            qwidget_wheelevent_isbase = false;
            QWidget::wheelEvent(event);
        } else if (qwidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qwidget_wheelevent_callback(this, cbval1);
        } else {
            QWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qwidget_keypressevent_isbase) {
            qwidget_keypressevent_isbase = false;
            QWidget::keyPressEvent(event);
        } else if (qwidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qwidget_keypressevent_callback(this, cbval1);
        } else {
            QWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qwidget_keyreleaseevent_isbase) {
            qwidget_keyreleaseevent_isbase = false;
            QWidget::keyReleaseEvent(event);
        } else if (qwidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qwidget_keyreleaseevent_callback(this, cbval1);
        } else {
            QWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qwidget_focusinevent_isbase) {
            qwidget_focusinevent_isbase = false;
            QWidget::focusInEvent(event);
        } else if (qwidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qwidget_focusinevent_callback(this, cbval1);
        } else {
            QWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qwidget_focusoutevent_isbase) {
            qwidget_focusoutevent_isbase = false;
            QWidget::focusOutEvent(event);
        } else if (qwidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qwidget_focusoutevent_callback(this, cbval1);
        } else {
            QWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qwidget_enterevent_isbase) {
            qwidget_enterevent_isbase = false;
            QWidget::enterEvent(event);
        } else if (qwidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qwidget_enterevent_callback(this, cbval1);
        } else {
            QWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qwidget_leaveevent_isbase) {
            qwidget_leaveevent_isbase = false;
            QWidget::leaveEvent(event);
        } else if (qwidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qwidget_leaveevent_callback(this, cbval1);
        } else {
            QWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qwidget_paintevent_isbase) {
            qwidget_paintevent_isbase = false;
            QWidget::paintEvent(event);
        } else if (qwidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qwidget_paintevent_callback(this, cbval1);
        } else {
            QWidget::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qwidget_moveevent_isbase) {
            qwidget_moveevent_isbase = false;
            QWidget::moveEvent(event);
        } else if (qwidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qwidget_moveevent_callback(this, cbval1);
        } else {
            QWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qwidget_resizeevent_isbase) {
            qwidget_resizeevent_isbase = false;
            QWidget::resizeEvent(event);
        } else if (qwidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qwidget_resizeevent_callback(this, cbval1);
        } else {
            QWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qwidget_closeevent_isbase) {
            qwidget_closeevent_isbase = false;
            QWidget::closeEvent(event);
        } else if (qwidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qwidget_closeevent_callback(this, cbval1);
        } else {
            QWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qwidget_contextmenuevent_isbase) {
            qwidget_contextmenuevent_isbase = false;
            QWidget::contextMenuEvent(event);
        } else if (qwidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qwidget_contextmenuevent_callback(this, cbval1);
        } else {
            QWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qwidget_tabletevent_isbase) {
            qwidget_tabletevent_isbase = false;
            QWidget::tabletEvent(event);
        } else if (qwidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qwidget_tabletevent_callback(this, cbval1);
        } else {
            QWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qwidget_actionevent_isbase) {
            qwidget_actionevent_isbase = false;
            QWidget::actionEvent(event);
        } else if (qwidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qwidget_actionevent_callback(this, cbval1);
        } else {
            QWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qwidget_dragenterevent_isbase) {
            qwidget_dragenterevent_isbase = false;
            QWidget::dragEnterEvent(event);
        } else if (qwidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qwidget_dragenterevent_callback(this, cbval1);
        } else {
            QWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qwidget_dragmoveevent_isbase) {
            qwidget_dragmoveevent_isbase = false;
            QWidget::dragMoveEvent(event);
        } else if (qwidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qwidget_dragmoveevent_callback(this, cbval1);
        } else {
            QWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qwidget_dragleaveevent_isbase) {
            qwidget_dragleaveevent_isbase = false;
            QWidget::dragLeaveEvent(event);
        } else if (qwidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qwidget_dragleaveevent_callback(this, cbval1);
        } else {
            QWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qwidget_dropevent_isbase) {
            qwidget_dropevent_isbase = false;
            QWidget::dropEvent(event);
        } else if (qwidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qwidget_dropevent_callback(this, cbval1);
        } else {
            QWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qwidget_showevent_isbase) {
            qwidget_showevent_isbase = false;
            QWidget::showEvent(event);
        } else if (qwidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qwidget_showevent_callback(this, cbval1);
        } else {
            QWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qwidget_hideevent_isbase) {
            qwidget_hideevent_isbase = false;
            QWidget::hideEvent(event);
        } else if (qwidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qwidget_hideevent_callback(this, cbval1);
        } else {
            QWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qwidget_nativeevent_isbase) {
            qwidget_nativeevent_isbase = false;
            return QWidget::nativeEvent(eventType, message, result);
        } else if (qwidget_nativeevent_callback != nullptr) {
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

            bool callback_ret = qwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qwidget_changeevent_isbase) {
            qwidget_changeevent_isbase = false;
            QWidget::changeEvent(param1);
        } else if (qwidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qwidget_changeevent_callback(this, cbval1);
        } else {
            QWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qwidget_metric_isbase) {
            qwidget_metric_isbase = false;
            return QWidget::metric(param1);
        } else if (qwidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qwidget_initpainter_isbase) {
            qwidget_initpainter_isbase = false;
            QWidget::initPainter(painter);
        } else if (qwidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qwidget_initpainter_callback(this, cbval1);
        } else {
            QWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qwidget_redirected_isbase) {
            qwidget_redirected_isbase = false;
            return QWidget::redirected(offset);
        } else if (qwidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qwidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qwidget_sharedpainter_isbase) {
            qwidget_sharedpainter_isbase = false;
            return QWidget::sharedPainter();
        } else if (qwidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qwidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return QWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qwidget_inputmethodevent_isbase) {
            qwidget_inputmethodevent_isbase = false;
            QWidget::inputMethodEvent(param1);
        } else if (qwidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qwidget_inputmethodevent_callback(this, cbval1);
        } else {
            QWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qwidget_inputmethodquery_isbase) {
            qwidget_inputmethodquery_isbase = false;
            return QWidget::inputMethodQuery(param1);
        } else if (qwidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qwidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qwidget_focusnextprevchild_isbase) {
            qwidget_focusnextprevchild_isbase = false;
            return QWidget::focusNextPrevChild(next);
        } else if (qwidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwidget_eventfilter_isbase) {
            qwidget_eventfilter_isbase = false;
            return QWidget::eventFilter(watched, event);
        } else if (qwidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwidget_timerevent_isbase) {
            qwidget_timerevent_isbase = false;
            QWidget::timerEvent(event);
        } else if (qwidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qwidget_timerevent_callback(this, cbval1);
        } else {
            QWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwidget_childevent_isbase) {
            qwidget_childevent_isbase = false;
            QWidget::childEvent(event);
        } else if (qwidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qwidget_childevent_callback(this, cbval1);
        } else {
            QWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwidget_customevent_isbase) {
            qwidget_customevent_isbase = false;
            QWidget::customEvent(event);
        } else if (qwidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qwidget_customevent_callback(this, cbval1);
        } else {
            QWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwidget_connectnotify_isbase) {
            qwidget_connectnotify_isbase = false;
            QWidget::connectNotify(signal);
        } else if (qwidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qwidget_connectnotify_callback(this, cbval1);
        } else {
            QWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwidget_disconnectnotify_isbase) {
            qwidget_disconnectnotify_isbase = false;
            QWidget::disconnectNotify(signal);
        } else if (qwidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qwidget_disconnectnotify_callback(this, cbval1);
        } else {
            QWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qwidget_updatemicrofocus_isbase) {
            qwidget_updatemicrofocus_isbase = false;
            QWidget::updateMicroFocus();
        } else if (qwidget_updatemicrofocus_callback != nullptr) {
            qwidget_updatemicrofocus_callback();
        } else {
            QWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qwidget_create_isbase) {
            qwidget_create_isbase = false;
            QWidget::create();
        } else if (qwidget_create_callback != nullptr) {
            qwidget_create_callback();
        } else {
            QWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qwidget_destroy_isbase) {
            qwidget_destroy_isbase = false;
            QWidget::destroy();
        } else if (qwidget_destroy_callback != nullptr) {
            qwidget_destroy_callback();
        } else {
            QWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qwidget_focusnextchild_isbase) {
            qwidget_focusnextchild_isbase = false;
            return QWidget::focusNextChild();
        } else if (qwidget_focusnextchild_callback != nullptr) {
            bool callback_ret = qwidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return QWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qwidget_focuspreviouschild_isbase) {
            qwidget_focuspreviouschild_isbase = false;
            return QWidget::focusPreviousChild();
        } else if (qwidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qwidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus(Qt::InputMethodQuery query) {
        if (qwidget_updatemicrofocus1_isbase) {
            qwidget_updatemicrofocus1_isbase = false;
            QWidget::updateMicroFocus(query);
        } else if (qwidget_updatemicrofocus1_callback != nullptr) {
            int cbval1 = static_cast<int>(query);

            qwidget_updatemicrofocus1_callback(this, cbval1);
        } else {
            QWidget::updateMicroFocus(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    void create(unsigned long long param1) {
        if (qwidget_create1_isbase) {
            qwidget_create1_isbase = false;
            QWidget::create(param1);
        } else if (qwidget_create1_callback != nullptr) {
            unsigned long long cbval1 = param1;

            qwidget_create1_callback(this, cbval1);
        } else {
            QWidget::create(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void create(unsigned long long param1, bool initializeWindow) {
        if (qwidget_create2_isbase) {
            qwidget_create2_isbase = false;
            QWidget::create(param1, initializeWindow);
        } else if (qwidget_create2_callback != nullptr) {
            unsigned long long cbval1 = param1;
            bool cbval2 = initializeWindow;

            qwidget_create2_callback(this, cbval1, cbval2);
        } else {
            QWidget::create(param1, initializeWindow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void create(unsigned long long param1, bool initializeWindow, bool destroyOldWindow) {
        if (qwidget_create3_isbase) {
            qwidget_create3_isbase = false;
            QWidget::create(param1, initializeWindow, destroyOldWindow);
        } else if (qwidget_create3_callback != nullptr) {
            unsigned long long cbval1 = param1;
            bool cbval2 = initializeWindow;
            bool cbval3 = destroyOldWindow;

            qwidget_create3_callback(this, cbval1, cbval2, cbval3);
        } else {
            QWidget::create(param1, initializeWindow, destroyOldWindow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy(bool destroyWindow) {
        if (qwidget_destroy1_isbase) {
            qwidget_destroy1_isbase = false;
            QWidget::destroy(destroyWindow);
        } else if (qwidget_destroy1_callback != nullptr) {
            bool cbval1 = destroyWindow;

            qwidget_destroy1_callback(this, cbval1);
        } else {
            QWidget::destroy(destroyWindow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy(bool destroyWindow, bool destroySubWindows) {
        if (qwidget_destroy2_isbase) {
            qwidget_destroy2_isbase = false;
            QWidget::destroy(destroyWindow, destroySubWindows);
        } else if (qwidget_destroy2_callback != nullptr) {
            bool cbval1 = destroyWindow;
            bool cbval2 = destroySubWindows;

            qwidget_destroy2_callback(this, cbval1, cbval2);
        } else {
            QWidget::destroy(destroyWindow, destroySubWindows);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwidget_sender_isbase) {
            qwidget_sender_isbase = false;
            return QWidget::sender();
        } else if (qwidget_sender_callback != nullptr) {
            QObject* callback_ret = qwidget_sender_callback();
            return callback_ret;
        } else {
            return QWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwidget_sendersignalindex_isbase) {
            qwidget_sendersignalindex_isbase = false;
            return QWidget::senderSignalIndex();
        } else if (qwidget_sendersignalindex_callback != nullptr) {
            int callback_ret = qwidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwidget_receivers_isbase) {
            qwidget_receivers_isbase = false;
            return QWidget::receivers(signal);
        } else if (qwidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qwidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwidget_issignalconnected_isbase) {
            qwidget_issignalconnected_isbase = false;
            return QWidget::isSignalConnected(signal);
        } else if (qwidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qwidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QWidget::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QWidget_Event(QWidget* self, QEvent* event);
    friend bool QWidget_QBaseEvent(QWidget* self, QEvent* event);
    friend void QWidget_MousePressEvent(QWidget* self, QMouseEvent* event);
    friend void QWidget_QBaseMousePressEvent(QWidget* self, QMouseEvent* event);
    friend void QWidget_MouseReleaseEvent(QWidget* self, QMouseEvent* event);
    friend void QWidget_QBaseMouseReleaseEvent(QWidget* self, QMouseEvent* event);
    friend void QWidget_MouseDoubleClickEvent(QWidget* self, QMouseEvent* event);
    friend void QWidget_QBaseMouseDoubleClickEvent(QWidget* self, QMouseEvent* event);
    friend void QWidget_MouseMoveEvent(QWidget* self, QMouseEvent* event);
    friend void QWidget_QBaseMouseMoveEvent(QWidget* self, QMouseEvent* event);
    friend void QWidget_WheelEvent(QWidget* self, QWheelEvent* event);
    friend void QWidget_QBaseWheelEvent(QWidget* self, QWheelEvent* event);
    friend void QWidget_KeyPressEvent(QWidget* self, QKeyEvent* event);
    friend void QWidget_QBaseKeyPressEvent(QWidget* self, QKeyEvent* event);
    friend void QWidget_KeyReleaseEvent(QWidget* self, QKeyEvent* event);
    friend void QWidget_QBaseKeyReleaseEvent(QWidget* self, QKeyEvent* event);
    friend void QWidget_FocusInEvent(QWidget* self, QFocusEvent* event);
    friend void QWidget_QBaseFocusInEvent(QWidget* self, QFocusEvent* event);
    friend void QWidget_FocusOutEvent(QWidget* self, QFocusEvent* event);
    friend void QWidget_QBaseFocusOutEvent(QWidget* self, QFocusEvent* event);
    friend void QWidget_EnterEvent(QWidget* self, QEnterEvent* event);
    friend void QWidget_QBaseEnterEvent(QWidget* self, QEnterEvent* event);
    friend void QWidget_LeaveEvent(QWidget* self, QEvent* event);
    friend void QWidget_QBaseLeaveEvent(QWidget* self, QEvent* event);
    friend void QWidget_PaintEvent(QWidget* self, QPaintEvent* event);
    friend void QWidget_QBasePaintEvent(QWidget* self, QPaintEvent* event);
    friend void QWidget_MoveEvent(QWidget* self, QMoveEvent* event);
    friend void QWidget_QBaseMoveEvent(QWidget* self, QMoveEvent* event);
    friend void QWidget_ResizeEvent(QWidget* self, QResizeEvent* event);
    friend void QWidget_QBaseResizeEvent(QWidget* self, QResizeEvent* event);
    friend void QWidget_CloseEvent(QWidget* self, QCloseEvent* event);
    friend void QWidget_QBaseCloseEvent(QWidget* self, QCloseEvent* event);
    friend void QWidget_ContextMenuEvent(QWidget* self, QContextMenuEvent* event);
    friend void QWidget_QBaseContextMenuEvent(QWidget* self, QContextMenuEvent* event);
    friend void QWidget_TabletEvent(QWidget* self, QTabletEvent* event);
    friend void QWidget_QBaseTabletEvent(QWidget* self, QTabletEvent* event);
    friend void QWidget_ActionEvent(QWidget* self, QActionEvent* event);
    friend void QWidget_QBaseActionEvent(QWidget* self, QActionEvent* event);
    friend void QWidget_DragEnterEvent(QWidget* self, QDragEnterEvent* event);
    friend void QWidget_QBaseDragEnterEvent(QWidget* self, QDragEnterEvent* event);
    friend void QWidget_DragMoveEvent(QWidget* self, QDragMoveEvent* event);
    friend void QWidget_QBaseDragMoveEvent(QWidget* self, QDragMoveEvent* event);
    friend void QWidget_DragLeaveEvent(QWidget* self, QDragLeaveEvent* event);
    friend void QWidget_QBaseDragLeaveEvent(QWidget* self, QDragLeaveEvent* event);
    friend void QWidget_DropEvent(QWidget* self, QDropEvent* event);
    friend void QWidget_QBaseDropEvent(QWidget* self, QDropEvent* event);
    friend void QWidget_ShowEvent(QWidget* self, QShowEvent* event);
    friend void QWidget_QBaseShowEvent(QWidget* self, QShowEvent* event);
    friend void QWidget_HideEvent(QWidget* self, QHideEvent* event);
    friend void QWidget_QBaseHideEvent(QWidget* self, QHideEvent* event);
    friend bool QWidget_NativeEvent(QWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QWidget_QBaseNativeEvent(QWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QWidget_ChangeEvent(QWidget* self, QEvent* param1);
    friend void QWidget_QBaseChangeEvent(QWidget* self, QEvent* param1);
    friend int QWidget_Metric(const QWidget* self, int param1);
    friend int QWidget_QBaseMetric(const QWidget* self, int param1);
    friend void QWidget_InitPainter(const QWidget* self, QPainter* painter);
    friend void QWidget_QBaseInitPainter(const QWidget* self, QPainter* painter);
    friend QPaintDevice* QWidget_Redirected(const QWidget* self, QPoint* offset);
    friend QPaintDevice* QWidget_QBaseRedirected(const QWidget* self, QPoint* offset);
    friend QPainter* QWidget_SharedPainter(const QWidget* self);
    friend QPainter* QWidget_QBaseSharedPainter(const QWidget* self);
    friend void QWidget_InputMethodEvent(QWidget* self, QInputMethodEvent* param1);
    friend void QWidget_QBaseInputMethodEvent(QWidget* self, QInputMethodEvent* param1);
    friend bool QWidget_FocusNextPrevChild(QWidget* self, bool next);
    friend bool QWidget_QBaseFocusNextPrevChild(QWidget* self, bool next);
    friend void QWidget_TimerEvent(QWidget* self, QTimerEvent* event);
    friend void QWidget_QBaseTimerEvent(QWidget* self, QTimerEvent* event);
    friend void QWidget_ChildEvent(QWidget* self, QChildEvent* event);
    friend void QWidget_QBaseChildEvent(QWidget* self, QChildEvent* event);
    friend void QWidget_CustomEvent(QWidget* self, QEvent* event);
    friend void QWidget_QBaseCustomEvent(QWidget* self, QEvent* event);
    friend void QWidget_ConnectNotify(QWidget* self, const QMetaMethod* signal);
    friend void QWidget_QBaseConnectNotify(QWidget* self, const QMetaMethod* signal);
    friend void QWidget_DisconnectNotify(QWidget* self, const QMetaMethod* signal);
    friend void QWidget_QBaseDisconnectNotify(QWidget* self, const QMetaMethod* signal);
    friend void QWidget_UpdateMicroFocus(QWidget* self);
    friend void QWidget_QBaseUpdateMicroFocus(QWidget* self);
    friend void QWidget_Create(QWidget* self);
    friend void QWidget_QBaseCreate(QWidget* self);
    friend void QWidget_Destroy(QWidget* self);
    friend void QWidget_QBaseDestroy(QWidget* self);
    friend bool QWidget_FocusNextChild(QWidget* self);
    friend bool QWidget_QBaseFocusNextChild(QWidget* self);
    friend bool QWidget_FocusPreviousChild(QWidget* self);
    friend bool QWidget_QBaseFocusPreviousChild(QWidget* self);
    friend void QWidget_UpdateMicroFocus1(QWidget* self, int query);
    friend void QWidget_QBaseUpdateMicroFocus1(QWidget* self, int query);
    friend void QWidget_Create1(QWidget* self, unsigned long long param1);
    friend void QWidget_QBaseCreate1(QWidget* self, unsigned long long param1);
    friend void QWidget_Create2(QWidget* self, unsigned long long param1, bool initializeWindow);
    friend void QWidget_QBaseCreate2(QWidget* self, unsigned long long param1, bool initializeWindow);
    friend void QWidget_Create3(QWidget* self, unsigned long long param1, bool initializeWindow, bool destroyOldWindow);
    friend void QWidget_QBaseCreate3(QWidget* self, unsigned long long param1, bool initializeWindow, bool destroyOldWindow);
    friend void QWidget_Destroy1(QWidget* self, bool destroyWindow);
    friend void QWidget_QBaseDestroy1(QWidget* self, bool destroyWindow);
    friend void QWidget_Destroy2(QWidget* self, bool destroyWindow, bool destroySubWindows);
    friend void QWidget_QBaseDestroy2(QWidget* self, bool destroyWindow, bool destroySubWindows);
    friend QObject* QWidget_Sender(const QWidget* self);
    friend QObject* QWidget_QBaseSender(const QWidget* self);
    friend int QWidget_SenderSignalIndex(const QWidget* self);
    friend int QWidget_QBaseSenderSignalIndex(const QWidget* self);
    friend int QWidget_Receivers(const QWidget* self, const char* signal);
    friend int QWidget_QBaseReceivers(const QWidget* self, const char* signal);
    friend bool QWidget_IsSignalConnected(const QWidget* self, const QMetaMethod* signal);
    friend bool QWidget_QBaseIsSignalConnected(const QWidget* self, const QMetaMethod* signal);
};

#endif
