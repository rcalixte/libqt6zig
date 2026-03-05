#pragma once
#ifndef SRCC_LIBVIRTUALQDIALOGBUTTONBOX_H
#define SRCC_LIBVIRTUALQDIALOGBUTTONBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QDialogButtonBox so that we can call protected methods
class VirtualQDialogButtonBox final : public QDialogButtonBox {

  public:
    // Virtual class boolean flag
    bool isVirtualQDialogButtonBox = true;

    // Virtual class public types (including callbacks)
    using QDialogButtonBox_MetaObject_Callback = QMetaObject* (*)();
    using QDialogButtonBox_Metacast_Callback = void* (*)(QDialogButtonBox*, const char*);
    using QDialogButtonBox_Metacall_Callback = int (*)(QDialogButtonBox*, int, int, void**);
    using QDialogButtonBox_ChangeEvent_Callback = void (*)(QDialogButtonBox*, QEvent*);
    using QDialogButtonBox_Event_Callback = bool (*)(QDialogButtonBox*, QEvent*);
    using QDialogButtonBox_DevType_Callback = int (*)();
    using QDialogButtonBox_SetVisible_Callback = void (*)(QDialogButtonBox*, bool);
    using QDialogButtonBox_SizeHint_Callback = QSize* (*)();
    using QDialogButtonBox_MinimumSizeHint_Callback = QSize* (*)();
    using QDialogButtonBox_HeightForWidth_Callback = int (*)(const QDialogButtonBox*, int);
    using QDialogButtonBox_HasHeightForWidth_Callback = bool (*)();
    using QDialogButtonBox_PaintEngine_Callback = QPaintEngine* (*)();
    using QDialogButtonBox_MousePressEvent_Callback = void (*)(QDialogButtonBox*, QMouseEvent*);
    using QDialogButtonBox_MouseReleaseEvent_Callback = void (*)(QDialogButtonBox*, QMouseEvent*);
    using QDialogButtonBox_MouseDoubleClickEvent_Callback = void (*)(QDialogButtonBox*, QMouseEvent*);
    using QDialogButtonBox_MouseMoveEvent_Callback = void (*)(QDialogButtonBox*, QMouseEvent*);
    using QDialogButtonBox_WheelEvent_Callback = void (*)(QDialogButtonBox*, QWheelEvent*);
    using QDialogButtonBox_KeyPressEvent_Callback = void (*)(QDialogButtonBox*, QKeyEvent*);
    using QDialogButtonBox_KeyReleaseEvent_Callback = void (*)(QDialogButtonBox*, QKeyEvent*);
    using QDialogButtonBox_FocusInEvent_Callback = void (*)(QDialogButtonBox*, QFocusEvent*);
    using QDialogButtonBox_FocusOutEvent_Callback = void (*)(QDialogButtonBox*, QFocusEvent*);
    using QDialogButtonBox_EnterEvent_Callback = void (*)(QDialogButtonBox*, QEnterEvent*);
    using QDialogButtonBox_LeaveEvent_Callback = void (*)(QDialogButtonBox*, QEvent*);
    using QDialogButtonBox_PaintEvent_Callback = void (*)(QDialogButtonBox*, QPaintEvent*);
    using QDialogButtonBox_MoveEvent_Callback = void (*)(QDialogButtonBox*, QMoveEvent*);
    using QDialogButtonBox_ResizeEvent_Callback = void (*)(QDialogButtonBox*, QResizeEvent*);
    using QDialogButtonBox_CloseEvent_Callback = void (*)(QDialogButtonBox*, QCloseEvent*);
    using QDialogButtonBox_ContextMenuEvent_Callback = void (*)(QDialogButtonBox*, QContextMenuEvent*);
    using QDialogButtonBox_TabletEvent_Callback = void (*)(QDialogButtonBox*, QTabletEvent*);
    using QDialogButtonBox_ActionEvent_Callback = void (*)(QDialogButtonBox*, QActionEvent*);
    using QDialogButtonBox_DragEnterEvent_Callback = void (*)(QDialogButtonBox*, QDragEnterEvent*);
    using QDialogButtonBox_DragMoveEvent_Callback = void (*)(QDialogButtonBox*, QDragMoveEvent*);
    using QDialogButtonBox_DragLeaveEvent_Callback = void (*)(QDialogButtonBox*, QDragLeaveEvent*);
    using QDialogButtonBox_DropEvent_Callback = void (*)(QDialogButtonBox*, QDropEvent*);
    using QDialogButtonBox_ShowEvent_Callback = void (*)(QDialogButtonBox*, QShowEvent*);
    using QDialogButtonBox_HideEvent_Callback = void (*)(QDialogButtonBox*, QHideEvent*);
    using QDialogButtonBox_NativeEvent_Callback = bool (*)(QDialogButtonBox*, libqt_string, void*, intptr_t*);
    using QDialogButtonBox_Metric_Callback = int (*)(const QDialogButtonBox*, int);
    using QDialogButtonBox_InitPainter_Callback = void (*)(const QDialogButtonBox*, QPainter*);
    using QDialogButtonBox_Redirected_Callback = QPaintDevice* (*)(const QDialogButtonBox*, QPoint*);
    using QDialogButtonBox_SharedPainter_Callback = QPainter* (*)();
    using QDialogButtonBox_InputMethodEvent_Callback = void (*)(QDialogButtonBox*, QInputMethodEvent*);
    using QDialogButtonBox_InputMethodQuery_Callback = QVariant* (*)(const QDialogButtonBox*, int);
    using QDialogButtonBox_FocusNextPrevChild_Callback = bool (*)(QDialogButtonBox*, bool);
    using QDialogButtonBox_EventFilter_Callback = bool (*)(QDialogButtonBox*, QObject*, QEvent*);
    using QDialogButtonBox_TimerEvent_Callback = void (*)(QDialogButtonBox*, QTimerEvent*);
    using QDialogButtonBox_ChildEvent_Callback = void (*)(QDialogButtonBox*, QChildEvent*);
    using QDialogButtonBox_CustomEvent_Callback = void (*)(QDialogButtonBox*, QEvent*);
    using QDialogButtonBox_ConnectNotify_Callback = void (*)(QDialogButtonBox*, QMetaMethod*);
    using QDialogButtonBox_DisconnectNotify_Callback = void (*)(QDialogButtonBox*, QMetaMethod*);
    using QDialogButtonBox_UpdateMicroFocus_Callback = void (*)();
    using QDialogButtonBox_Create_Callback = void (*)();
    using QDialogButtonBox_Destroy_Callback = void (*)();
    using QDialogButtonBox_FocusNextChild_Callback = bool (*)();
    using QDialogButtonBox_FocusPreviousChild_Callback = bool (*)();
    using QDialogButtonBox_Sender_Callback = QObject* (*)();
    using QDialogButtonBox_SenderSignalIndex_Callback = int (*)();
    using QDialogButtonBox_Receivers_Callback = int (*)(const QDialogButtonBox*, const char*);
    using QDialogButtonBox_IsSignalConnected_Callback = bool (*)(const QDialogButtonBox*, QMetaMethod*);
    using QDialogButtonBox_GetDecodedMetricF_Callback = double (*)(const QDialogButtonBox*, int, int);

  protected:
    // Instance callback storage
    QDialogButtonBox_MetaObject_Callback qdialogbuttonbox_metaobject_callback = nullptr;
    QDialogButtonBox_Metacast_Callback qdialogbuttonbox_metacast_callback = nullptr;
    QDialogButtonBox_Metacall_Callback qdialogbuttonbox_metacall_callback = nullptr;
    QDialogButtonBox_ChangeEvent_Callback qdialogbuttonbox_changeevent_callback = nullptr;
    QDialogButtonBox_Event_Callback qdialogbuttonbox_event_callback = nullptr;
    QDialogButtonBox_DevType_Callback qdialogbuttonbox_devtype_callback = nullptr;
    QDialogButtonBox_SetVisible_Callback qdialogbuttonbox_setvisible_callback = nullptr;
    QDialogButtonBox_SizeHint_Callback qdialogbuttonbox_sizehint_callback = nullptr;
    QDialogButtonBox_MinimumSizeHint_Callback qdialogbuttonbox_minimumsizehint_callback = nullptr;
    QDialogButtonBox_HeightForWidth_Callback qdialogbuttonbox_heightforwidth_callback = nullptr;
    QDialogButtonBox_HasHeightForWidth_Callback qdialogbuttonbox_hasheightforwidth_callback = nullptr;
    QDialogButtonBox_PaintEngine_Callback qdialogbuttonbox_paintengine_callback = nullptr;
    QDialogButtonBox_MousePressEvent_Callback qdialogbuttonbox_mousepressevent_callback = nullptr;
    QDialogButtonBox_MouseReleaseEvent_Callback qdialogbuttonbox_mousereleaseevent_callback = nullptr;
    QDialogButtonBox_MouseDoubleClickEvent_Callback qdialogbuttonbox_mousedoubleclickevent_callback = nullptr;
    QDialogButtonBox_MouseMoveEvent_Callback qdialogbuttonbox_mousemoveevent_callback = nullptr;
    QDialogButtonBox_WheelEvent_Callback qdialogbuttonbox_wheelevent_callback = nullptr;
    QDialogButtonBox_KeyPressEvent_Callback qdialogbuttonbox_keypressevent_callback = nullptr;
    QDialogButtonBox_KeyReleaseEvent_Callback qdialogbuttonbox_keyreleaseevent_callback = nullptr;
    QDialogButtonBox_FocusInEvent_Callback qdialogbuttonbox_focusinevent_callback = nullptr;
    QDialogButtonBox_FocusOutEvent_Callback qdialogbuttonbox_focusoutevent_callback = nullptr;
    QDialogButtonBox_EnterEvent_Callback qdialogbuttonbox_enterevent_callback = nullptr;
    QDialogButtonBox_LeaveEvent_Callback qdialogbuttonbox_leaveevent_callback = nullptr;
    QDialogButtonBox_PaintEvent_Callback qdialogbuttonbox_paintevent_callback = nullptr;
    QDialogButtonBox_MoveEvent_Callback qdialogbuttonbox_moveevent_callback = nullptr;
    QDialogButtonBox_ResizeEvent_Callback qdialogbuttonbox_resizeevent_callback = nullptr;
    QDialogButtonBox_CloseEvent_Callback qdialogbuttonbox_closeevent_callback = nullptr;
    QDialogButtonBox_ContextMenuEvent_Callback qdialogbuttonbox_contextmenuevent_callback = nullptr;
    QDialogButtonBox_TabletEvent_Callback qdialogbuttonbox_tabletevent_callback = nullptr;
    QDialogButtonBox_ActionEvent_Callback qdialogbuttonbox_actionevent_callback = nullptr;
    QDialogButtonBox_DragEnterEvent_Callback qdialogbuttonbox_dragenterevent_callback = nullptr;
    QDialogButtonBox_DragMoveEvent_Callback qdialogbuttonbox_dragmoveevent_callback = nullptr;
    QDialogButtonBox_DragLeaveEvent_Callback qdialogbuttonbox_dragleaveevent_callback = nullptr;
    QDialogButtonBox_DropEvent_Callback qdialogbuttonbox_dropevent_callback = nullptr;
    QDialogButtonBox_ShowEvent_Callback qdialogbuttonbox_showevent_callback = nullptr;
    QDialogButtonBox_HideEvent_Callback qdialogbuttonbox_hideevent_callback = nullptr;
    QDialogButtonBox_NativeEvent_Callback qdialogbuttonbox_nativeevent_callback = nullptr;
    QDialogButtonBox_Metric_Callback qdialogbuttonbox_metric_callback = nullptr;
    QDialogButtonBox_InitPainter_Callback qdialogbuttonbox_initpainter_callback = nullptr;
    QDialogButtonBox_Redirected_Callback qdialogbuttonbox_redirected_callback = nullptr;
    QDialogButtonBox_SharedPainter_Callback qdialogbuttonbox_sharedpainter_callback = nullptr;
    QDialogButtonBox_InputMethodEvent_Callback qdialogbuttonbox_inputmethodevent_callback = nullptr;
    QDialogButtonBox_InputMethodQuery_Callback qdialogbuttonbox_inputmethodquery_callback = nullptr;
    QDialogButtonBox_FocusNextPrevChild_Callback qdialogbuttonbox_focusnextprevchild_callback = nullptr;
    QDialogButtonBox_EventFilter_Callback qdialogbuttonbox_eventfilter_callback = nullptr;
    QDialogButtonBox_TimerEvent_Callback qdialogbuttonbox_timerevent_callback = nullptr;
    QDialogButtonBox_ChildEvent_Callback qdialogbuttonbox_childevent_callback = nullptr;
    QDialogButtonBox_CustomEvent_Callback qdialogbuttonbox_customevent_callback = nullptr;
    QDialogButtonBox_ConnectNotify_Callback qdialogbuttonbox_connectnotify_callback = nullptr;
    QDialogButtonBox_DisconnectNotify_Callback qdialogbuttonbox_disconnectnotify_callback = nullptr;
    QDialogButtonBox_UpdateMicroFocus_Callback qdialogbuttonbox_updatemicrofocus_callback = nullptr;
    QDialogButtonBox_Create_Callback qdialogbuttonbox_create_callback = nullptr;
    QDialogButtonBox_Destroy_Callback qdialogbuttonbox_destroy_callback = nullptr;
    QDialogButtonBox_FocusNextChild_Callback qdialogbuttonbox_focusnextchild_callback = nullptr;
    QDialogButtonBox_FocusPreviousChild_Callback qdialogbuttonbox_focuspreviouschild_callback = nullptr;
    QDialogButtonBox_Sender_Callback qdialogbuttonbox_sender_callback = nullptr;
    QDialogButtonBox_SenderSignalIndex_Callback qdialogbuttonbox_sendersignalindex_callback = nullptr;
    QDialogButtonBox_Receivers_Callback qdialogbuttonbox_receivers_callback = nullptr;
    QDialogButtonBox_IsSignalConnected_Callback qdialogbuttonbox_issignalconnected_callback = nullptr;
    QDialogButtonBox_GetDecodedMetricF_Callback qdialogbuttonbox_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qdialogbuttonbox_metaobject_isbase = false;
    mutable bool qdialogbuttonbox_metacast_isbase = false;
    mutable bool qdialogbuttonbox_metacall_isbase = false;
    mutable bool qdialogbuttonbox_changeevent_isbase = false;
    mutable bool qdialogbuttonbox_event_isbase = false;
    mutable bool qdialogbuttonbox_devtype_isbase = false;
    mutable bool qdialogbuttonbox_setvisible_isbase = false;
    mutable bool qdialogbuttonbox_sizehint_isbase = false;
    mutable bool qdialogbuttonbox_minimumsizehint_isbase = false;
    mutable bool qdialogbuttonbox_heightforwidth_isbase = false;
    mutable bool qdialogbuttonbox_hasheightforwidth_isbase = false;
    mutable bool qdialogbuttonbox_paintengine_isbase = false;
    mutable bool qdialogbuttonbox_mousepressevent_isbase = false;
    mutable bool qdialogbuttonbox_mousereleaseevent_isbase = false;
    mutable bool qdialogbuttonbox_mousedoubleclickevent_isbase = false;
    mutable bool qdialogbuttonbox_mousemoveevent_isbase = false;
    mutable bool qdialogbuttonbox_wheelevent_isbase = false;
    mutable bool qdialogbuttonbox_keypressevent_isbase = false;
    mutable bool qdialogbuttonbox_keyreleaseevent_isbase = false;
    mutable bool qdialogbuttonbox_focusinevent_isbase = false;
    mutable bool qdialogbuttonbox_focusoutevent_isbase = false;
    mutable bool qdialogbuttonbox_enterevent_isbase = false;
    mutable bool qdialogbuttonbox_leaveevent_isbase = false;
    mutable bool qdialogbuttonbox_paintevent_isbase = false;
    mutable bool qdialogbuttonbox_moveevent_isbase = false;
    mutable bool qdialogbuttonbox_resizeevent_isbase = false;
    mutable bool qdialogbuttonbox_closeevent_isbase = false;
    mutable bool qdialogbuttonbox_contextmenuevent_isbase = false;
    mutable bool qdialogbuttonbox_tabletevent_isbase = false;
    mutable bool qdialogbuttonbox_actionevent_isbase = false;
    mutable bool qdialogbuttonbox_dragenterevent_isbase = false;
    mutable bool qdialogbuttonbox_dragmoveevent_isbase = false;
    mutable bool qdialogbuttonbox_dragleaveevent_isbase = false;
    mutable bool qdialogbuttonbox_dropevent_isbase = false;
    mutable bool qdialogbuttonbox_showevent_isbase = false;
    mutable bool qdialogbuttonbox_hideevent_isbase = false;
    mutable bool qdialogbuttonbox_nativeevent_isbase = false;
    mutable bool qdialogbuttonbox_metric_isbase = false;
    mutable bool qdialogbuttonbox_initpainter_isbase = false;
    mutable bool qdialogbuttonbox_redirected_isbase = false;
    mutable bool qdialogbuttonbox_sharedpainter_isbase = false;
    mutable bool qdialogbuttonbox_inputmethodevent_isbase = false;
    mutable bool qdialogbuttonbox_inputmethodquery_isbase = false;
    mutable bool qdialogbuttonbox_focusnextprevchild_isbase = false;
    mutable bool qdialogbuttonbox_eventfilter_isbase = false;
    mutable bool qdialogbuttonbox_timerevent_isbase = false;
    mutable bool qdialogbuttonbox_childevent_isbase = false;
    mutable bool qdialogbuttonbox_customevent_isbase = false;
    mutable bool qdialogbuttonbox_connectnotify_isbase = false;
    mutable bool qdialogbuttonbox_disconnectnotify_isbase = false;
    mutable bool qdialogbuttonbox_updatemicrofocus_isbase = false;
    mutable bool qdialogbuttonbox_create_isbase = false;
    mutable bool qdialogbuttonbox_destroy_isbase = false;
    mutable bool qdialogbuttonbox_focusnextchild_isbase = false;
    mutable bool qdialogbuttonbox_focuspreviouschild_isbase = false;
    mutable bool qdialogbuttonbox_sender_isbase = false;
    mutable bool qdialogbuttonbox_sendersignalindex_isbase = false;
    mutable bool qdialogbuttonbox_receivers_isbase = false;
    mutable bool qdialogbuttonbox_issignalconnected_isbase = false;
    mutable bool qdialogbuttonbox_getdecodedmetricf_isbase = false;

  public:
    VirtualQDialogButtonBox(QWidget* parent) : QDialogButtonBox(parent) {};
    VirtualQDialogButtonBox() : QDialogButtonBox() {};
    VirtualQDialogButtonBox(Qt::Orientation orientation) : QDialogButtonBox(orientation) {};
    VirtualQDialogButtonBox(QDialogButtonBox::StandardButtons buttons) : QDialogButtonBox(buttons) {};
    VirtualQDialogButtonBox(QDialogButtonBox::StandardButtons buttons, Qt::Orientation orientation) : QDialogButtonBox(buttons, orientation) {};
    VirtualQDialogButtonBox(Qt::Orientation orientation, QWidget* parent) : QDialogButtonBox(orientation, parent) {};
    VirtualQDialogButtonBox(QDialogButtonBox::StandardButtons buttons, QWidget* parent) : QDialogButtonBox(buttons, parent) {};
    VirtualQDialogButtonBox(QDialogButtonBox::StandardButtons buttons, Qt::Orientation orientation, QWidget* parent) : QDialogButtonBox(buttons, orientation, parent) {};

    // Callback setters
    inline void setQDialogButtonBox_MetaObject_Callback(QDialogButtonBox_MetaObject_Callback cb) { qdialogbuttonbox_metaobject_callback = cb; }
    inline void setQDialogButtonBox_Metacast_Callback(QDialogButtonBox_Metacast_Callback cb) { qdialogbuttonbox_metacast_callback = cb; }
    inline void setQDialogButtonBox_Metacall_Callback(QDialogButtonBox_Metacall_Callback cb) { qdialogbuttonbox_metacall_callback = cb; }
    inline void setQDialogButtonBox_ChangeEvent_Callback(QDialogButtonBox_ChangeEvent_Callback cb) { qdialogbuttonbox_changeevent_callback = cb; }
    inline void setQDialogButtonBox_Event_Callback(QDialogButtonBox_Event_Callback cb) { qdialogbuttonbox_event_callback = cb; }
    inline void setQDialogButtonBox_DevType_Callback(QDialogButtonBox_DevType_Callback cb) { qdialogbuttonbox_devtype_callback = cb; }
    inline void setQDialogButtonBox_SetVisible_Callback(QDialogButtonBox_SetVisible_Callback cb) { qdialogbuttonbox_setvisible_callback = cb; }
    inline void setQDialogButtonBox_SizeHint_Callback(QDialogButtonBox_SizeHint_Callback cb) { qdialogbuttonbox_sizehint_callback = cb; }
    inline void setQDialogButtonBox_MinimumSizeHint_Callback(QDialogButtonBox_MinimumSizeHint_Callback cb) { qdialogbuttonbox_minimumsizehint_callback = cb; }
    inline void setQDialogButtonBox_HeightForWidth_Callback(QDialogButtonBox_HeightForWidth_Callback cb) { qdialogbuttonbox_heightforwidth_callback = cb; }
    inline void setQDialogButtonBox_HasHeightForWidth_Callback(QDialogButtonBox_HasHeightForWidth_Callback cb) { qdialogbuttonbox_hasheightforwidth_callback = cb; }
    inline void setQDialogButtonBox_PaintEngine_Callback(QDialogButtonBox_PaintEngine_Callback cb) { qdialogbuttonbox_paintengine_callback = cb; }
    inline void setQDialogButtonBox_MousePressEvent_Callback(QDialogButtonBox_MousePressEvent_Callback cb) { qdialogbuttonbox_mousepressevent_callback = cb; }
    inline void setQDialogButtonBox_MouseReleaseEvent_Callback(QDialogButtonBox_MouseReleaseEvent_Callback cb) { qdialogbuttonbox_mousereleaseevent_callback = cb; }
    inline void setQDialogButtonBox_MouseDoubleClickEvent_Callback(QDialogButtonBox_MouseDoubleClickEvent_Callback cb) { qdialogbuttonbox_mousedoubleclickevent_callback = cb; }
    inline void setQDialogButtonBox_MouseMoveEvent_Callback(QDialogButtonBox_MouseMoveEvent_Callback cb) { qdialogbuttonbox_mousemoveevent_callback = cb; }
    inline void setQDialogButtonBox_WheelEvent_Callback(QDialogButtonBox_WheelEvent_Callback cb) { qdialogbuttonbox_wheelevent_callback = cb; }
    inline void setQDialogButtonBox_KeyPressEvent_Callback(QDialogButtonBox_KeyPressEvent_Callback cb) { qdialogbuttonbox_keypressevent_callback = cb; }
    inline void setQDialogButtonBox_KeyReleaseEvent_Callback(QDialogButtonBox_KeyReleaseEvent_Callback cb) { qdialogbuttonbox_keyreleaseevent_callback = cb; }
    inline void setQDialogButtonBox_FocusInEvent_Callback(QDialogButtonBox_FocusInEvent_Callback cb) { qdialogbuttonbox_focusinevent_callback = cb; }
    inline void setQDialogButtonBox_FocusOutEvent_Callback(QDialogButtonBox_FocusOutEvent_Callback cb) { qdialogbuttonbox_focusoutevent_callback = cb; }
    inline void setQDialogButtonBox_EnterEvent_Callback(QDialogButtonBox_EnterEvent_Callback cb) { qdialogbuttonbox_enterevent_callback = cb; }
    inline void setQDialogButtonBox_LeaveEvent_Callback(QDialogButtonBox_LeaveEvent_Callback cb) { qdialogbuttonbox_leaveevent_callback = cb; }
    inline void setQDialogButtonBox_PaintEvent_Callback(QDialogButtonBox_PaintEvent_Callback cb) { qdialogbuttonbox_paintevent_callback = cb; }
    inline void setQDialogButtonBox_MoveEvent_Callback(QDialogButtonBox_MoveEvent_Callback cb) { qdialogbuttonbox_moveevent_callback = cb; }
    inline void setQDialogButtonBox_ResizeEvent_Callback(QDialogButtonBox_ResizeEvent_Callback cb) { qdialogbuttonbox_resizeevent_callback = cb; }
    inline void setQDialogButtonBox_CloseEvent_Callback(QDialogButtonBox_CloseEvent_Callback cb) { qdialogbuttonbox_closeevent_callback = cb; }
    inline void setQDialogButtonBox_ContextMenuEvent_Callback(QDialogButtonBox_ContextMenuEvent_Callback cb) { qdialogbuttonbox_contextmenuevent_callback = cb; }
    inline void setQDialogButtonBox_TabletEvent_Callback(QDialogButtonBox_TabletEvent_Callback cb) { qdialogbuttonbox_tabletevent_callback = cb; }
    inline void setQDialogButtonBox_ActionEvent_Callback(QDialogButtonBox_ActionEvent_Callback cb) { qdialogbuttonbox_actionevent_callback = cb; }
    inline void setQDialogButtonBox_DragEnterEvent_Callback(QDialogButtonBox_DragEnterEvent_Callback cb) { qdialogbuttonbox_dragenterevent_callback = cb; }
    inline void setQDialogButtonBox_DragMoveEvent_Callback(QDialogButtonBox_DragMoveEvent_Callback cb) { qdialogbuttonbox_dragmoveevent_callback = cb; }
    inline void setQDialogButtonBox_DragLeaveEvent_Callback(QDialogButtonBox_DragLeaveEvent_Callback cb) { qdialogbuttonbox_dragleaveevent_callback = cb; }
    inline void setQDialogButtonBox_DropEvent_Callback(QDialogButtonBox_DropEvent_Callback cb) { qdialogbuttonbox_dropevent_callback = cb; }
    inline void setQDialogButtonBox_ShowEvent_Callback(QDialogButtonBox_ShowEvent_Callback cb) { qdialogbuttonbox_showevent_callback = cb; }
    inline void setQDialogButtonBox_HideEvent_Callback(QDialogButtonBox_HideEvent_Callback cb) { qdialogbuttonbox_hideevent_callback = cb; }
    inline void setQDialogButtonBox_NativeEvent_Callback(QDialogButtonBox_NativeEvent_Callback cb) { qdialogbuttonbox_nativeevent_callback = cb; }
    inline void setQDialogButtonBox_Metric_Callback(QDialogButtonBox_Metric_Callback cb) { qdialogbuttonbox_metric_callback = cb; }
    inline void setQDialogButtonBox_InitPainter_Callback(QDialogButtonBox_InitPainter_Callback cb) { qdialogbuttonbox_initpainter_callback = cb; }
    inline void setQDialogButtonBox_Redirected_Callback(QDialogButtonBox_Redirected_Callback cb) { qdialogbuttonbox_redirected_callback = cb; }
    inline void setQDialogButtonBox_SharedPainter_Callback(QDialogButtonBox_SharedPainter_Callback cb) { qdialogbuttonbox_sharedpainter_callback = cb; }
    inline void setQDialogButtonBox_InputMethodEvent_Callback(QDialogButtonBox_InputMethodEvent_Callback cb) { qdialogbuttonbox_inputmethodevent_callback = cb; }
    inline void setQDialogButtonBox_InputMethodQuery_Callback(QDialogButtonBox_InputMethodQuery_Callback cb) { qdialogbuttonbox_inputmethodquery_callback = cb; }
    inline void setQDialogButtonBox_FocusNextPrevChild_Callback(QDialogButtonBox_FocusNextPrevChild_Callback cb) { qdialogbuttonbox_focusnextprevchild_callback = cb; }
    inline void setQDialogButtonBox_EventFilter_Callback(QDialogButtonBox_EventFilter_Callback cb) { qdialogbuttonbox_eventfilter_callback = cb; }
    inline void setQDialogButtonBox_TimerEvent_Callback(QDialogButtonBox_TimerEvent_Callback cb) { qdialogbuttonbox_timerevent_callback = cb; }
    inline void setQDialogButtonBox_ChildEvent_Callback(QDialogButtonBox_ChildEvent_Callback cb) { qdialogbuttonbox_childevent_callback = cb; }
    inline void setQDialogButtonBox_CustomEvent_Callback(QDialogButtonBox_CustomEvent_Callback cb) { qdialogbuttonbox_customevent_callback = cb; }
    inline void setQDialogButtonBox_ConnectNotify_Callback(QDialogButtonBox_ConnectNotify_Callback cb) { qdialogbuttonbox_connectnotify_callback = cb; }
    inline void setQDialogButtonBox_DisconnectNotify_Callback(QDialogButtonBox_DisconnectNotify_Callback cb) { qdialogbuttonbox_disconnectnotify_callback = cb; }
    inline void setQDialogButtonBox_UpdateMicroFocus_Callback(QDialogButtonBox_UpdateMicroFocus_Callback cb) { qdialogbuttonbox_updatemicrofocus_callback = cb; }
    inline void setQDialogButtonBox_Create_Callback(QDialogButtonBox_Create_Callback cb) { qdialogbuttonbox_create_callback = cb; }
    inline void setQDialogButtonBox_Destroy_Callback(QDialogButtonBox_Destroy_Callback cb) { qdialogbuttonbox_destroy_callback = cb; }
    inline void setQDialogButtonBox_FocusNextChild_Callback(QDialogButtonBox_FocusNextChild_Callback cb) { qdialogbuttonbox_focusnextchild_callback = cb; }
    inline void setQDialogButtonBox_FocusPreviousChild_Callback(QDialogButtonBox_FocusPreviousChild_Callback cb) { qdialogbuttonbox_focuspreviouschild_callback = cb; }
    inline void setQDialogButtonBox_Sender_Callback(QDialogButtonBox_Sender_Callback cb) { qdialogbuttonbox_sender_callback = cb; }
    inline void setQDialogButtonBox_SenderSignalIndex_Callback(QDialogButtonBox_SenderSignalIndex_Callback cb) { qdialogbuttonbox_sendersignalindex_callback = cb; }
    inline void setQDialogButtonBox_Receivers_Callback(QDialogButtonBox_Receivers_Callback cb) { qdialogbuttonbox_receivers_callback = cb; }
    inline void setQDialogButtonBox_IsSignalConnected_Callback(QDialogButtonBox_IsSignalConnected_Callback cb) { qdialogbuttonbox_issignalconnected_callback = cb; }
    inline void setQDialogButtonBox_GetDecodedMetricF_Callback(QDialogButtonBox_GetDecodedMetricF_Callback cb) { qdialogbuttonbox_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQDialogButtonBox_MetaObject_IsBase(bool value) const { qdialogbuttonbox_metaobject_isbase = value; }
    inline void setQDialogButtonBox_Metacast_IsBase(bool value) const { qdialogbuttonbox_metacast_isbase = value; }
    inline void setQDialogButtonBox_Metacall_IsBase(bool value) const { qdialogbuttonbox_metacall_isbase = value; }
    inline void setQDialogButtonBox_ChangeEvent_IsBase(bool value) const { qdialogbuttonbox_changeevent_isbase = value; }
    inline void setQDialogButtonBox_Event_IsBase(bool value) const { qdialogbuttonbox_event_isbase = value; }
    inline void setQDialogButtonBox_DevType_IsBase(bool value) const { qdialogbuttonbox_devtype_isbase = value; }
    inline void setQDialogButtonBox_SetVisible_IsBase(bool value) const { qdialogbuttonbox_setvisible_isbase = value; }
    inline void setQDialogButtonBox_SizeHint_IsBase(bool value) const { qdialogbuttonbox_sizehint_isbase = value; }
    inline void setQDialogButtonBox_MinimumSizeHint_IsBase(bool value) const { qdialogbuttonbox_minimumsizehint_isbase = value; }
    inline void setQDialogButtonBox_HeightForWidth_IsBase(bool value) const { qdialogbuttonbox_heightforwidth_isbase = value; }
    inline void setQDialogButtonBox_HasHeightForWidth_IsBase(bool value) const { qdialogbuttonbox_hasheightforwidth_isbase = value; }
    inline void setQDialogButtonBox_PaintEngine_IsBase(bool value) const { qdialogbuttonbox_paintengine_isbase = value; }
    inline void setQDialogButtonBox_MousePressEvent_IsBase(bool value) const { qdialogbuttonbox_mousepressevent_isbase = value; }
    inline void setQDialogButtonBox_MouseReleaseEvent_IsBase(bool value) const { qdialogbuttonbox_mousereleaseevent_isbase = value; }
    inline void setQDialogButtonBox_MouseDoubleClickEvent_IsBase(bool value) const { qdialogbuttonbox_mousedoubleclickevent_isbase = value; }
    inline void setQDialogButtonBox_MouseMoveEvent_IsBase(bool value) const { qdialogbuttonbox_mousemoveevent_isbase = value; }
    inline void setQDialogButtonBox_WheelEvent_IsBase(bool value) const { qdialogbuttonbox_wheelevent_isbase = value; }
    inline void setQDialogButtonBox_KeyPressEvent_IsBase(bool value) const { qdialogbuttonbox_keypressevent_isbase = value; }
    inline void setQDialogButtonBox_KeyReleaseEvent_IsBase(bool value) const { qdialogbuttonbox_keyreleaseevent_isbase = value; }
    inline void setQDialogButtonBox_FocusInEvent_IsBase(bool value) const { qdialogbuttonbox_focusinevent_isbase = value; }
    inline void setQDialogButtonBox_FocusOutEvent_IsBase(bool value) const { qdialogbuttonbox_focusoutevent_isbase = value; }
    inline void setQDialogButtonBox_EnterEvent_IsBase(bool value) const { qdialogbuttonbox_enterevent_isbase = value; }
    inline void setQDialogButtonBox_LeaveEvent_IsBase(bool value) const { qdialogbuttonbox_leaveevent_isbase = value; }
    inline void setQDialogButtonBox_PaintEvent_IsBase(bool value) const { qdialogbuttonbox_paintevent_isbase = value; }
    inline void setQDialogButtonBox_MoveEvent_IsBase(bool value) const { qdialogbuttonbox_moveevent_isbase = value; }
    inline void setQDialogButtonBox_ResizeEvent_IsBase(bool value) const { qdialogbuttonbox_resizeevent_isbase = value; }
    inline void setQDialogButtonBox_CloseEvent_IsBase(bool value) const { qdialogbuttonbox_closeevent_isbase = value; }
    inline void setQDialogButtonBox_ContextMenuEvent_IsBase(bool value) const { qdialogbuttonbox_contextmenuevent_isbase = value; }
    inline void setQDialogButtonBox_TabletEvent_IsBase(bool value) const { qdialogbuttonbox_tabletevent_isbase = value; }
    inline void setQDialogButtonBox_ActionEvent_IsBase(bool value) const { qdialogbuttonbox_actionevent_isbase = value; }
    inline void setQDialogButtonBox_DragEnterEvent_IsBase(bool value) const { qdialogbuttonbox_dragenterevent_isbase = value; }
    inline void setQDialogButtonBox_DragMoveEvent_IsBase(bool value) const { qdialogbuttonbox_dragmoveevent_isbase = value; }
    inline void setQDialogButtonBox_DragLeaveEvent_IsBase(bool value) const { qdialogbuttonbox_dragleaveevent_isbase = value; }
    inline void setQDialogButtonBox_DropEvent_IsBase(bool value) const { qdialogbuttonbox_dropevent_isbase = value; }
    inline void setQDialogButtonBox_ShowEvent_IsBase(bool value) const { qdialogbuttonbox_showevent_isbase = value; }
    inline void setQDialogButtonBox_HideEvent_IsBase(bool value) const { qdialogbuttonbox_hideevent_isbase = value; }
    inline void setQDialogButtonBox_NativeEvent_IsBase(bool value) const { qdialogbuttonbox_nativeevent_isbase = value; }
    inline void setQDialogButtonBox_Metric_IsBase(bool value) const { qdialogbuttonbox_metric_isbase = value; }
    inline void setQDialogButtonBox_InitPainter_IsBase(bool value) const { qdialogbuttonbox_initpainter_isbase = value; }
    inline void setQDialogButtonBox_Redirected_IsBase(bool value) const { qdialogbuttonbox_redirected_isbase = value; }
    inline void setQDialogButtonBox_SharedPainter_IsBase(bool value) const { qdialogbuttonbox_sharedpainter_isbase = value; }
    inline void setQDialogButtonBox_InputMethodEvent_IsBase(bool value) const { qdialogbuttonbox_inputmethodevent_isbase = value; }
    inline void setQDialogButtonBox_InputMethodQuery_IsBase(bool value) const { qdialogbuttonbox_inputmethodquery_isbase = value; }
    inline void setQDialogButtonBox_FocusNextPrevChild_IsBase(bool value) const { qdialogbuttonbox_focusnextprevchild_isbase = value; }
    inline void setQDialogButtonBox_EventFilter_IsBase(bool value) const { qdialogbuttonbox_eventfilter_isbase = value; }
    inline void setQDialogButtonBox_TimerEvent_IsBase(bool value) const { qdialogbuttonbox_timerevent_isbase = value; }
    inline void setQDialogButtonBox_ChildEvent_IsBase(bool value) const { qdialogbuttonbox_childevent_isbase = value; }
    inline void setQDialogButtonBox_CustomEvent_IsBase(bool value) const { qdialogbuttonbox_customevent_isbase = value; }
    inline void setQDialogButtonBox_ConnectNotify_IsBase(bool value) const { qdialogbuttonbox_connectnotify_isbase = value; }
    inline void setQDialogButtonBox_DisconnectNotify_IsBase(bool value) const { qdialogbuttonbox_disconnectnotify_isbase = value; }
    inline void setQDialogButtonBox_UpdateMicroFocus_IsBase(bool value) const { qdialogbuttonbox_updatemicrofocus_isbase = value; }
    inline void setQDialogButtonBox_Create_IsBase(bool value) const { qdialogbuttonbox_create_isbase = value; }
    inline void setQDialogButtonBox_Destroy_IsBase(bool value) const { qdialogbuttonbox_destroy_isbase = value; }
    inline void setQDialogButtonBox_FocusNextChild_IsBase(bool value) const { qdialogbuttonbox_focusnextchild_isbase = value; }
    inline void setQDialogButtonBox_FocusPreviousChild_IsBase(bool value) const { qdialogbuttonbox_focuspreviouschild_isbase = value; }
    inline void setQDialogButtonBox_Sender_IsBase(bool value) const { qdialogbuttonbox_sender_isbase = value; }
    inline void setQDialogButtonBox_SenderSignalIndex_IsBase(bool value) const { qdialogbuttonbox_sendersignalindex_isbase = value; }
    inline void setQDialogButtonBox_Receivers_IsBase(bool value) const { qdialogbuttonbox_receivers_isbase = value; }
    inline void setQDialogButtonBox_IsSignalConnected_IsBase(bool value) const { qdialogbuttonbox_issignalconnected_isbase = value; }
    inline void setQDialogButtonBox_GetDecodedMetricF_IsBase(bool value) const { qdialogbuttonbox_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdialogbuttonbox_metaobject_isbase) {
            qdialogbuttonbox_metaobject_isbase = false;
            return QDialogButtonBox::metaObject();
        }
        auto metaobject_cb = qdialogbuttonbox_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QDialogButtonBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdialogbuttonbox_metacast_isbase) {
            qdialogbuttonbox_metacast_isbase = false;
            return QDialogButtonBox::qt_metacast(param1);
        }
        auto metacast_cb = qdialogbuttonbox_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QDialogButtonBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdialogbuttonbox_metacall_isbase) {
            qdialogbuttonbox_metacall_isbase = false;
            return QDialogButtonBox::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qdialogbuttonbox_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDialogButtonBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qdialogbuttonbox_changeevent_isbase) {
            qdialogbuttonbox_changeevent_isbase = false;
            QDialogButtonBox::changeEvent(event);
            return;
        }
        auto changeevent_cb = qdialogbuttonbox_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = event;

            changeevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdialogbuttonbox_event_isbase) {
            qdialogbuttonbox_event_isbase = false;
            return QDialogButtonBox::event(event);
        }
        auto event_cb = qdialogbuttonbox_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QDialogButtonBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdialogbuttonbox_devtype_isbase) {
            qdialogbuttonbox_devtype_isbase = false;
            return QDialogButtonBox::devType();
        }
        auto devtype_cb = qdialogbuttonbox_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QDialogButtonBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdialogbuttonbox_setvisible_isbase) {
            qdialogbuttonbox_setvisible_isbase = false;
            QDialogButtonBox::setVisible(visible);
            return;
        }
        auto setvisible_cb = qdialogbuttonbox_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdialogbuttonbox_sizehint_isbase) {
            qdialogbuttonbox_sizehint_isbase = false;
            return QDialogButtonBox::sizeHint();
        }
        auto sizehint_cb = qdialogbuttonbox_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QDialogButtonBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdialogbuttonbox_minimumsizehint_isbase) {
            qdialogbuttonbox_minimumsizehint_isbase = false;
            return QDialogButtonBox::minimumSizeHint();
        }
        auto minimumsizehint_cb = qdialogbuttonbox_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QDialogButtonBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdialogbuttonbox_heightforwidth_isbase) {
            qdialogbuttonbox_heightforwidth_isbase = false;
            return QDialogButtonBox::heightForWidth(param1);
        }
        auto heightforwidth_cb = qdialogbuttonbox_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDialogButtonBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdialogbuttonbox_hasheightforwidth_isbase) {
            qdialogbuttonbox_hasheightforwidth_isbase = false;
            return QDialogButtonBox::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qdialogbuttonbox_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QDialogButtonBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdialogbuttonbox_paintengine_isbase) {
            qdialogbuttonbox_paintengine_isbase = false;
            return QDialogButtonBox::paintEngine();
        }
        auto paintengine_cb = qdialogbuttonbox_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QDialogButtonBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdialogbuttonbox_mousepressevent_isbase) {
            qdialogbuttonbox_mousepressevent_isbase = false;
            QDialogButtonBox::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qdialogbuttonbox_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdialogbuttonbox_mousereleaseevent_isbase) {
            qdialogbuttonbox_mousereleaseevent_isbase = false;
            QDialogButtonBox::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qdialogbuttonbox_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdialogbuttonbox_mousedoubleclickevent_isbase) {
            qdialogbuttonbox_mousedoubleclickevent_isbase = false;
            QDialogButtonBox::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qdialogbuttonbox_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdialogbuttonbox_mousemoveevent_isbase) {
            qdialogbuttonbox_mousemoveevent_isbase = false;
            QDialogButtonBox::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qdialogbuttonbox_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdialogbuttonbox_wheelevent_isbase) {
            qdialogbuttonbox_wheelevent_isbase = false;
            QDialogButtonBox::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qdialogbuttonbox_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdialogbuttonbox_keypressevent_isbase) {
            qdialogbuttonbox_keypressevent_isbase = false;
            QDialogButtonBox::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qdialogbuttonbox_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdialogbuttonbox_keyreleaseevent_isbase) {
            qdialogbuttonbox_keyreleaseevent_isbase = false;
            QDialogButtonBox::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qdialogbuttonbox_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdialogbuttonbox_focusinevent_isbase) {
            qdialogbuttonbox_focusinevent_isbase = false;
            QDialogButtonBox::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qdialogbuttonbox_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdialogbuttonbox_focusoutevent_isbase) {
            qdialogbuttonbox_focusoutevent_isbase = false;
            QDialogButtonBox::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qdialogbuttonbox_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdialogbuttonbox_enterevent_isbase) {
            qdialogbuttonbox_enterevent_isbase = false;
            QDialogButtonBox::enterEvent(event);
            return;
        }
        auto enterevent_cb = qdialogbuttonbox_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdialogbuttonbox_leaveevent_isbase) {
            qdialogbuttonbox_leaveevent_isbase = false;
            QDialogButtonBox::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qdialogbuttonbox_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdialogbuttonbox_paintevent_isbase) {
            qdialogbuttonbox_paintevent_isbase = false;
            QDialogButtonBox::paintEvent(event);
            return;
        }
        auto paintevent_cb = qdialogbuttonbox_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdialogbuttonbox_moveevent_isbase) {
            qdialogbuttonbox_moveevent_isbase = false;
            QDialogButtonBox::moveEvent(event);
            return;
        }
        auto moveevent_cb = qdialogbuttonbox_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdialogbuttonbox_resizeevent_isbase) {
            qdialogbuttonbox_resizeevent_isbase = false;
            QDialogButtonBox::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qdialogbuttonbox_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdialogbuttonbox_closeevent_isbase) {
            qdialogbuttonbox_closeevent_isbase = false;
            QDialogButtonBox::closeEvent(event);
            return;
        }
        auto closeevent_cb = qdialogbuttonbox_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdialogbuttonbox_contextmenuevent_isbase) {
            qdialogbuttonbox_contextmenuevent_isbase = false;
            QDialogButtonBox::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qdialogbuttonbox_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdialogbuttonbox_tabletevent_isbase) {
            qdialogbuttonbox_tabletevent_isbase = false;
            QDialogButtonBox::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qdialogbuttonbox_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdialogbuttonbox_actionevent_isbase) {
            qdialogbuttonbox_actionevent_isbase = false;
            QDialogButtonBox::actionEvent(event);
            return;
        }
        auto actionevent_cb = qdialogbuttonbox_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdialogbuttonbox_dragenterevent_isbase) {
            qdialogbuttonbox_dragenterevent_isbase = false;
            QDialogButtonBox::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qdialogbuttonbox_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdialogbuttonbox_dragmoveevent_isbase) {
            qdialogbuttonbox_dragmoveevent_isbase = false;
            QDialogButtonBox::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qdialogbuttonbox_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdialogbuttonbox_dragleaveevent_isbase) {
            qdialogbuttonbox_dragleaveevent_isbase = false;
            QDialogButtonBox::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qdialogbuttonbox_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdialogbuttonbox_dropevent_isbase) {
            qdialogbuttonbox_dropevent_isbase = false;
            QDialogButtonBox::dropEvent(event);
            return;
        }
        auto dropevent_cb = qdialogbuttonbox_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdialogbuttonbox_showevent_isbase) {
            qdialogbuttonbox_showevent_isbase = false;
            QDialogButtonBox::showEvent(event);
            return;
        }
        auto showevent_cb = qdialogbuttonbox_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdialogbuttonbox_hideevent_isbase) {
            qdialogbuttonbox_hideevent_isbase = false;
            QDialogButtonBox::hideEvent(event);
            return;
        }
        auto hideevent_cb = qdialogbuttonbox_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdialogbuttonbox_nativeevent_isbase) {
            qdialogbuttonbox_nativeevent_isbase = false;
            return QDialogButtonBox::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qdialogbuttonbox_nativeevent_callback;
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
        return QDialogButtonBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdialogbuttonbox_metric_isbase) {
            qdialogbuttonbox_metric_isbase = false;
            return QDialogButtonBox::metric(param1);
        }
        auto metric_cb = qdialogbuttonbox_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDialogButtonBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdialogbuttonbox_initpainter_isbase) {
            qdialogbuttonbox_initpainter_isbase = false;
            QDialogButtonBox::initPainter(painter);
            return;
        }
        auto initpainter_cb = qdialogbuttonbox_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdialogbuttonbox_redirected_isbase) {
            qdialogbuttonbox_redirected_isbase = false;
            return QDialogButtonBox::redirected(offset);
        }
        auto redirected_cb = qdialogbuttonbox_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QDialogButtonBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdialogbuttonbox_sharedpainter_isbase) {
            qdialogbuttonbox_sharedpainter_isbase = false;
            return QDialogButtonBox::sharedPainter();
        }
        auto sharedpainter_cb = qdialogbuttonbox_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QDialogButtonBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdialogbuttonbox_inputmethodevent_isbase) {
            qdialogbuttonbox_inputmethodevent_isbase = false;
            QDialogButtonBox::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qdialogbuttonbox_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdialogbuttonbox_inputmethodquery_isbase) {
            qdialogbuttonbox_inputmethodquery_isbase = false;
            return QDialogButtonBox::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qdialogbuttonbox_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QDialogButtonBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdialogbuttonbox_focusnextprevchild_isbase) {
            qdialogbuttonbox_focusnextprevchild_isbase = false;
            return QDialogButtonBox::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qdialogbuttonbox_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QDialogButtonBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdialogbuttonbox_eventfilter_isbase) {
            qdialogbuttonbox_eventfilter_isbase = false;
            return QDialogButtonBox::eventFilter(watched, event);
        }
        auto eventfilter_cb = qdialogbuttonbox_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDialogButtonBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdialogbuttonbox_timerevent_isbase) {
            qdialogbuttonbox_timerevent_isbase = false;
            QDialogButtonBox::timerEvent(event);
            return;
        }
        auto timerevent_cb = qdialogbuttonbox_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdialogbuttonbox_childevent_isbase) {
            qdialogbuttonbox_childevent_isbase = false;
            QDialogButtonBox::childEvent(event);
            return;
        }
        auto childevent_cb = qdialogbuttonbox_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdialogbuttonbox_customevent_isbase) {
            qdialogbuttonbox_customevent_isbase = false;
            QDialogButtonBox::customEvent(event);
            return;
        }
        auto customevent_cb = qdialogbuttonbox_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdialogbuttonbox_connectnotify_isbase) {
            qdialogbuttonbox_connectnotify_isbase = false;
            QDialogButtonBox::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qdialogbuttonbox_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdialogbuttonbox_disconnectnotify_isbase) {
            qdialogbuttonbox_disconnectnotify_isbase = false;
            QDialogButtonBox::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qdialogbuttonbox_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QDialogButtonBox::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qdialogbuttonbox_updatemicrofocus_isbase) {
            qdialogbuttonbox_updatemicrofocus_isbase = false;
            QDialogButtonBox::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qdialogbuttonbox_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QDialogButtonBox::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qdialogbuttonbox_create_isbase) {
            qdialogbuttonbox_create_isbase = false;
            QDialogButtonBox::create();
            return;
        }
        auto create_cb = qdialogbuttonbox_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QDialogButtonBox::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qdialogbuttonbox_destroy_isbase) {
            qdialogbuttonbox_destroy_isbase = false;
            QDialogButtonBox::destroy();
            return;
        }
        auto destroy_cb = qdialogbuttonbox_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QDialogButtonBox::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qdialogbuttonbox_focusnextchild_isbase) {
            qdialogbuttonbox_focusnextchild_isbase = false;
            return QDialogButtonBox::focusNextChild();
        }
        auto focusnextchild_cb = qdialogbuttonbox_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QDialogButtonBox::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qdialogbuttonbox_focuspreviouschild_isbase) {
            qdialogbuttonbox_focuspreviouschild_isbase = false;
            return QDialogButtonBox::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qdialogbuttonbox_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QDialogButtonBox::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdialogbuttonbox_sender_isbase) {
            qdialogbuttonbox_sender_isbase = false;
            return QDialogButtonBox::sender();
        }
        auto sender_cb = qdialogbuttonbox_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QDialogButtonBox::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdialogbuttonbox_sendersignalindex_isbase) {
            qdialogbuttonbox_sendersignalindex_isbase = false;
            return QDialogButtonBox::senderSignalIndex();
        }
        auto sendersignalindex_cb = qdialogbuttonbox_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QDialogButtonBox::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdialogbuttonbox_receivers_isbase) {
            qdialogbuttonbox_receivers_isbase = false;
            return QDialogButtonBox::receivers(signal);
        }
        auto receivers_cb = qdialogbuttonbox_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDialogButtonBox::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdialogbuttonbox_issignalconnected_isbase) {
            qdialogbuttonbox_issignalconnected_isbase = false;
            return QDialogButtonBox::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qdialogbuttonbox_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QDialogButtonBox::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qdialogbuttonbox_getdecodedmetricf_isbase) {
            qdialogbuttonbox_getdecodedmetricf_isbase = false;
            return QDialogButtonBox::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qdialogbuttonbox_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QDialogButtonBox::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void QDialogButtonBox_ChangeEvent(QDialogButtonBox* self, QEvent* event);
    friend void QDialogButtonBox_SuperChangeEvent(QDialogButtonBox* self, QEvent* event);
    friend bool QDialogButtonBox_Event(QDialogButtonBox* self, QEvent* event);
    friend bool QDialogButtonBox_SuperEvent(QDialogButtonBox* self, QEvent* event);
    friend void QDialogButtonBox_MousePressEvent(QDialogButtonBox* self, QMouseEvent* event);
    friend void QDialogButtonBox_SuperMousePressEvent(QDialogButtonBox* self, QMouseEvent* event);
    friend void QDialogButtonBox_MouseReleaseEvent(QDialogButtonBox* self, QMouseEvent* event);
    friend void QDialogButtonBox_SuperMouseReleaseEvent(QDialogButtonBox* self, QMouseEvent* event);
    friend void QDialogButtonBox_MouseDoubleClickEvent(QDialogButtonBox* self, QMouseEvent* event);
    friend void QDialogButtonBox_SuperMouseDoubleClickEvent(QDialogButtonBox* self, QMouseEvent* event);
    friend void QDialogButtonBox_MouseMoveEvent(QDialogButtonBox* self, QMouseEvent* event);
    friend void QDialogButtonBox_SuperMouseMoveEvent(QDialogButtonBox* self, QMouseEvent* event);
    friend void QDialogButtonBox_WheelEvent(QDialogButtonBox* self, QWheelEvent* event);
    friend void QDialogButtonBox_SuperWheelEvent(QDialogButtonBox* self, QWheelEvent* event);
    friend void QDialogButtonBox_KeyPressEvent(QDialogButtonBox* self, QKeyEvent* event);
    friend void QDialogButtonBox_SuperKeyPressEvent(QDialogButtonBox* self, QKeyEvent* event);
    friend void QDialogButtonBox_KeyReleaseEvent(QDialogButtonBox* self, QKeyEvent* event);
    friend void QDialogButtonBox_SuperKeyReleaseEvent(QDialogButtonBox* self, QKeyEvent* event);
    friend void QDialogButtonBox_FocusInEvent(QDialogButtonBox* self, QFocusEvent* event);
    friend void QDialogButtonBox_SuperFocusInEvent(QDialogButtonBox* self, QFocusEvent* event);
    friend void QDialogButtonBox_FocusOutEvent(QDialogButtonBox* self, QFocusEvent* event);
    friend void QDialogButtonBox_SuperFocusOutEvent(QDialogButtonBox* self, QFocusEvent* event);
    friend void QDialogButtonBox_EnterEvent(QDialogButtonBox* self, QEnterEvent* event);
    friend void QDialogButtonBox_SuperEnterEvent(QDialogButtonBox* self, QEnterEvent* event);
    friend void QDialogButtonBox_LeaveEvent(QDialogButtonBox* self, QEvent* event);
    friend void QDialogButtonBox_SuperLeaveEvent(QDialogButtonBox* self, QEvent* event);
    friend void QDialogButtonBox_PaintEvent(QDialogButtonBox* self, QPaintEvent* event);
    friend void QDialogButtonBox_SuperPaintEvent(QDialogButtonBox* self, QPaintEvent* event);
    friend void QDialogButtonBox_MoveEvent(QDialogButtonBox* self, QMoveEvent* event);
    friend void QDialogButtonBox_SuperMoveEvent(QDialogButtonBox* self, QMoveEvent* event);
    friend void QDialogButtonBox_ResizeEvent(QDialogButtonBox* self, QResizeEvent* event);
    friend void QDialogButtonBox_SuperResizeEvent(QDialogButtonBox* self, QResizeEvent* event);
    friend void QDialogButtonBox_CloseEvent(QDialogButtonBox* self, QCloseEvent* event);
    friend void QDialogButtonBox_SuperCloseEvent(QDialogButtonBox* self, QCloseEvent* event);
    friend void QDialogButtonBox_ContextMenuEvent(QDialogButtonBox* self, QContextMenuEvent* event);
    friend void QDialogButtonBox_SuperContextMenuEvent(QDialogButtonBox* self, QContextMenuEvent* event);
    friend void QDialogButtonBox_TabletEvent(QDialogButtonBox* self, QTabletEvent* event);
    friend void QDialogButtonBox_SuperTabletEvent(QDialogButtonBox* self, QTabletEvent* event);
    friend void QDialogButtonBox_ActionEvent(QDialogButtonBox* self, QActionEvent* event);
    friend void QDialogButtonBox_SuperActionEvent(QDialogButtonBox* self, QActionEvent* event);
    friend void QDialogButtonBox_DragEnterEvent(QDialogButtonBox* self, QDragEnterEvent* event);
    friend void QDialogButtonBox_SuperDragEnterEvent(QDialogButtonBox* self, QDragEnterEvent* event);
    friend void QDialogButtonBox_DragMoveEvent(QDialogButtonBox* self, QDragMoveEvent* event);
    friend void QDialogButtonBox_SuperDragMoveEvent(QDialogButtonBox* self, QDragMoveEvent* event);
    friend void QDialogButtonBox_DragLeaveEvent(QDialogButtonBox* self, QDragLeaveEvent* event);
    friend void QDialogButtonBox_SuperDragLeaveEvent(QDialogButtonBox* self, QDragLeaveEvent* event);
    friend void QDialogButtonBox_DropEvent(QDialogButtonBox* self, QDropEvent* event);
    friend void QDialogButtonBox_SuperDropEvent(QDialogButtonBox* self, QDropEvent* event);
    friend void QDialogButtonBox_ShowEvent(QDialogButtonBox* self, QShowEvent* event);
    friend void QDialogButtonBox_SuperShowEvent(QDialogButtonBox* self, QShowEvent* event);
    friend void QDialogButtonBox_HideEvent(QDialogButtonBox* self, QHideEvent* event);
    friend void QDialogButtonBox_SuperHideEvent(QDialogButtonBox* self, QHideEvent* event);
    friend bool QDialogButtonBox_NativeEvent(QDialogButtonBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QDialogButtonBox_SuperNativeEvent(QDialogButtonBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QDialogButtonBox_Metric(const QDialogButtonBox* self, int param1);
    friend int QDialogButtonBox_SuperMetric(const QDialogButtonBox* self, int param1);
    friend void QDialogButtonBox_InitPainter(const QDialogButtonBox* self, QPainter* painter);
    friend void QDialogButtonBox_SuperInitPainter(const QDialogButtonBox* self, QPainter* painter);
    friend QPaintDevice* QDialogButtonBox_Redirected(const QDialogButtonBox* self, QPoint* offset);
    friend QPaintDevice* QDialogButtonBox_SuperRedirected(const QDialogButtonBox* self, QPoint* offset);
    friend QPainter* QDialogButtonBox_SharedPainter(const QDialogButtonBox* self);
    friend QPainter* QDialogButtonBox_SuperSharedPainter(const QDialogButtonBox* self);
    friend void QDialogButtonBox_InputMethodEvent(QDialogButtonBox* self, QInputMethodEvent* param1);
    friend void QDialogButtonBox_SuperInputMethodEvent(QDialogButtonBox* self, QInputMethodEvent* param1);
    friend bool QDialogButtonBox_FocusNextPrevChild(QDialogButtonBox* self, bool next);
    friend bool QDialogButtonBox_SuperFocusNextPrevChild(QDialogButtonBox* self, bool next);
    friend void QDialogButtonBox_TimerEvent(QDialogButtonBox* self, QTimerEvent* event);
    friend void QDialogButtonBox_SuperTimerEvent(QDialogButtonBox* self, QTimerEvent* event);
    friend void QDialogButtonBox_ChildEvent(QDialogButtonBox* self, QChildEvent* event);
    friend void QDialogButtonBox_SuperChildEvent(QDialogButtonBox* self, QChildEvent* event);
    friend void QDialogButtonBox_CustomEvent(QDialogButtonBox* self, QEvent* event);
    friend void QDialogButtonBox_SuperCustomEvent(QDialogButtonBox* self, QEvent* event);
    friend void QDialogButtonBox_ConnectNotify(QDialogButtonBox* self, const QMetaMethod* signal);
    friend void QDialogButtonBox_SuperConnectNotify(QDialogButtonBox* self, const QMetaMethod* signal);
    friend void QDialogButtonBox_DisconnectNotify(QDialogButtonBox* self, const QMetaMethod* signal);
    friend void QDialogButtonBox_SuperDisconnectNotify(QDialogButtonBox* self, const QMetaMethod* signal);
    friend void QDialogButtonBox_UpdateMicroFocus(QDialogButtonBox* self);
    friend void QDialogButtonBox_SuperUpdateMicroFocus(QDialogButtonBox* self);
    friend void QDialogButtonBox_Create(QDialogButtonBox* self);
    friend void QDialogButtonBox_SuperCreate(QDialogButtonBox* self);
    friend void QDialogButtonBox_Destroy(QDialogButtonBox* self);
    friend void QDialogButtonBox_SuperDestroy(QDialogButtonBox* self);
    friend bool QDialogButtonBox_FocusNextChild(QDialogButtonBox* self);
    friend bool QDialogButtonBox_SuperFocusNextChild(QDialogButtonBox* self);
    friend bool QDialogButtonBox_FocusPreviousChild(QDialogButtonBox* self);
    friend bool QDialogButtonBox_SuperFocusPreviousChild(QDialogButtonBox* self);
    friend QObject* QDialogButtonBox_Sender(const QDialogButtonBox* self);
    friend QObject* QDialogButtonBox_SuperSender(const QDialogButtonBox* self);
    friend int QDialogButtonBox_SenderSignalIndex(const QDialogButtonBox* self);
    friend int QDialogButtonBox_SuperSenderSignalIndex(const QDialogButtonBox* self);
    friend int QDialogButtonBox_Receivers(const QDialogButtonBox* self, const char* signal);
    friend int QDialogButtonBox_SuperReceivers(const QDialogButtonBox* self, const char* signal);
    friend bool QDialogButtonBox_IsSignalConnected(const QDialogButtonBox* self, const QMetaMethod* signal);
    friend bool QDialogButtonBox_SuperIsSignalConnected(const QDialogButtonBox* self, const QMetaMethod* signal);
    friend double QDialogButtonBox_GetDecodedMetricF(const QDialogButtonBox* self, int metricA, int metricB);
    friend double QDialogButtonBox_SuperGetDecodedMetricF(const QDialogButtonBox* self, int metricA, int metricB);
};

#endif
