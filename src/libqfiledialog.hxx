#pragma once
#ifndef SRCC_LIBVIRTUALQFILEDIALOG_H
#define SRCC_LIBVIRTUALQFILEDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFileDialog so that we can call protected methods
class VirtualQFileDialog final : public QFileDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualQFileDialog = true;

    // Virtual class public types (including callbacks)
    using QFileDialog_MetaObject_Callback = QMetaObject* (*)();
    using QFileDialog_Metacast_Callback = void* (*)(QFileDialog*, const char*);
    using QFileDialog_Metacall_Callback = int (*)(QFileDialog*, int, int, void**);
    using QFileDialog_SetVisible_Callback = void (*)(QFileDialog*, bool);
    using QFileDialog_Done_Callback = void (*)(QFileDialog*, int);
    using QFileDialog_Accept_Callback = void (*)();
    using QFileDialog_ChangeEvent_Callback = void (*)(QFileDialog*, QEvent*);
    using QFileDialog_SizeHint_Callback = QSize* (*)();
    using QFileDialog_MinimumSizeHint_Callback = QSize* (*)();
    using QFileDialog_Open_Callback = void (*)();
    using QFileDialog_Exec_Callback = int (*)();
    using QFileDialog_Reject_Callback = void (*)();
    using QFileDialog_KeyPressEvent_Callback = void (*)(QFileDialog*, QKeyEvent*);
    using QFileDialog_CloseEvent_Callback = void (*)(QFileDialog*, QCloseEvent*);
    using QFileDialog_ShowEvent_Callback = void (*)(QFileDialog*, QShowEvent*);
    using QFileDialog_ResizeEvent_Callback = void (*)(QFileDialog*, QResizeEvent*);
    using QFileDialog_ContextMenuEvent_Callback = void (*)(QFileDialog*, QContextMenuEvent*);
    using QFileDialog_EventFilter_Callback = bool (*)(QFileDialog*, QObject*, QEvent*);
    using QFileDialog_DevType_Callback = int (*)();
    using QFileDialog_HeightForWidth_Callback = int (*)(const QFileDialog*, int);
    using QFileDialog_HasHeightForWidth_Callback = bool (*)();
    using QFileDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using QFileDialog_Event_Callback = bool (*)(QFileDialog*, QEvent*);
    using QFileDialog_MousePressEvent_Callback = void (*)(QFileDialog*, QMouseEvent*);
    using QFileDialog_MouseReleaseEvent_Callback = void (*)(QFileDialog*, QMouseEvent*);
    using QFileDialog_MouseDoubleClickEvent_Callback = void (*)(QFileDialog*, QMouseEvent*);
    using QFileDialog_MouseMoveEvent_Callback = void (*)(QFileDialog*, QMouseEvent*);
    using QFileDialog_WheelEvent_Callback = void (*)(QFileDialog*, QWheelEvent*);
    using QFileDialog_KeyReleaseEvent_Callback = void (*)(QFileDialog*, QKeyEvent*);
    using QFileDialog_FocusInEvent_Callback = void (*)(QFileDialog*, QFocusEvent*);
    using QFileDialog_FocusOutEvent_Callback = void (*)(QFileDialog*, QFocusEvent*);
    using QFileDialog_EnterEvent_Callback = void (*)(QFileDialog*, QEnterEvent*);
    using QFileDialog_LeaveEvent_Callback = void (*)(QFileDialog*, QEvent*);
    using QFileDialog_PaintEvent_Callback = void (*)(QFileDialog*, QPaintEvent*);
    using QFileDialog_MoveEvent_Callback = void (*)(QFileDialog*, QMoveEvent*);
    using QFileDialog_TabletEvent_Callback = void (*)(QFileDialog*, QTabletEvent*);
    using QFileDialog_ActionEvent_Callback = void (*)(QFileDialog*, QActionEvent*);
    using QFileDialog_DragEnterEvent_Callback = void (*)(QFileDialog*, QDragEnterEvent*);
    using QFileDialog_DragMoveEvent_Callback = void (*)(QFileDialog*, QDragMoveEvent*);
    using QFileDialog_DragLeaveEvent_Callback = void (*)(QFileDialog*, QDragLeaveEvent*);
    using QFileDialog_DropEvent_Callback = void (*)(QFileDialog*, QDropEvent*);
    using QFileDialog_HideEvent_Callback = void (*)(QFileDialog*, QHideEvent*);
    using QFileDialog_NativeEvent_Callback = bool (*)(QFileDialog*, libqt_string, void*, intptr_t*);
    using QFileDialog_Metric_Callback = int (*)(const QFileDialog*, int);
    using QFileDialog_InitPainter_Callback = void (*)(const QFileDialog*, QPainter*);
    using QFileDialog_Redirected_Callback = QPaintDevice* (*)(const QFileDialog*, QPoint*);
    using QFileDialog_SharedPainter_Callback = QPainter* (*)();
    using QFileDialog_InputMethodEvent_Callback = void (*)(QFileDialog*, QInputMethodEvent*);
    using QFileDialog_InputMethodQuery_Callback = QVariant* (*)(const QFileDialog*, int);
    using QFileDialog_FocusNextPrevChild_Callback = bool (*)(QFileDialog*, bool);
    using QFileDialog_TimerEvent_Callback = void (*)(QFileDialog*, QTimerEvent*);
    using QFileDialog_ChildEvent_Callback = void (*)(QFileDialog*, QChildEvent*);
    using QFileDialog_CustomEvent_Callback = void (*)(QFileDialog*, QEvent*);
    using QFileDialog_ConnectNotify_Callback = void (*)(QFileDialog*, QMetaMethod*);
    using QFileDialog_DisconnectNotify_Callback = void (*)(QFileDialog*, QMetaMethod*);
    using QFileDialog_AdjustPosition_Callback = void (*)(QFileDialog*, QWidget*);
    using QFileDialog_UpdateMicroFocus_Callback = void (*)();
    using QFileDialog_Create_Callback = void (*)();
    using QFileDialog_Destroy_Callback = void (*)();
    using QFileDialog_FocusNextChild_Callback = bool (*)();
    using QFileDialog_FocusPreviousChild_Callback = bool (*)();
    using QFileDialog_Sender_Callback = QObject* (*)();
    using QFileDialog_SenderSignalIndex_Callback = int (*)();
    using QFileDialog_Receivers_Callback = int (*)(const QFileDialog*, const char*);
    using QFileDialog_IsSignalConnected_Callback = bool (*)(const QFileDialog*, QMetaMethod*);
    using QFileDialog_GetDecodedMetricF_Callback = double (*)(const QFileDialog*, int, int);

  protected:
    // Instance callback storage
    QFileDialog_MetaObject_Callback qfiledialog_metaobject_callback = nullptr;
    QFileDialog_Metacast_Callback qfiledialog_metacast_callback = nullptr;
    QFileDialog_Metacall_Callback qfiledialog_metacall_callback = nullptr;
    QFileDialog_SetVisible_Callback qfiledialog_setvisible_callback = nullptr;
    QFileDialog_Done_Callback qfiledialog_done_callback = nullptr;
    QFileDialog_Accept_Callback qfiledialog_accept_callback = nullptr;
    QFileDialog_ChangeEvent_Callback qfiledialog_changeevent_callback = nullptr;
    QFileDialog_SizeHint_Callback qfiledialog_sizehint_callback = nullptr;
    QFileDialog_MinimumSizeHint_Callback qfiledialog_minimumsizehint_callback = nullptr;
    QFileDialog_Open_Callback qfiledialog_open_callback = nullptr;
    QFileDialog_Exec_Callback qfiledialog_exec_callback = nullptr;
    QFileDialog_Reject_Callback qfiledialog_reject_callback = nullptr;
    QFileDialog_KeyPressEvent_Callback qfiledialog_keypressevent_callback = nullptr;
    QFileDialog_CloseEvent_Callback qfiledialog_closeevent_callback = nullptr;
    QFileDialog_ShowEvent_Callback qfiledialog_showevent_callback = nullptr;
    QFileDialog_ResizeEvent_Callback qfiledialog_resizeevent_callback = nullptr;
    QFileDialog_ContextMenuEvent_Callback qfiledialog_contextmenuevent_callback = nullptr;
    QFileDialog_EventFilter_Callback qfiledialog_eventfilter_callback = nullptr;
    QFileDialog_DevType_Callback qfiledialog_devtype_callback = nullptr;
    QFileDialog_HeightForWidth_Callback qfiledialog_heightforwidth_callback = nullptr;
    QFileDialog_HasHeightForWidth_Callback qfiledialog_hasheightforwidth_callback = nullptr;
    QFileDialog_PaintEngine_Callback qfiledialog_paintengine_callback = nullptr;
    QFileDialog_Event_Callback qfiledialog_event_callback = nullptr;
    QFileDialog_MousePressEvent_Callback qfiledialog_mousepressevent_callback = nullptr;
    QFileDialog_MouseReleaseEvent_Callback qfiledialog_mousereleaseevent_callback = nullptr;
    QFileDialog_MouseDoubleClickEvent_Callback qfiledialog_mousedoubleclickevent_callback = nullptr;
    QFileDialog_MouseMoveEvent_Callback qfiledialog_mousemoveevent_callback = nullptr;
    QFileDialog_WheelEvent_Callback qfiledialog_wheelevent_callback = nullptr;
    QFileDialog_KeyReleaseEvent_Callback qfiledialog_keyreleaseevent_callback = nullptr;
    QFileDialog_FocusInEvent_Callback qfiledialog_focusinevent_callback = nullptr;
    QFileDialog_FocusOutEvent_Callback qfiledialog_focusoutevent_callback = nullptr;
    QFileDialog_EnterEvent_Callback qfiledialog_enterevent_callback = nullptr;
    QFileDialog_LeaveEvent_Callback qfiledialog_leaveevent_callback = nullptr;
    QFileDialog_PaintEvent_Callback qfiledialog_paintevent_callback = nullptr;
    QFileDialog_MoveEvent_Callback qfiledialog_moveevent_callback = nullptr;
    QFileDialog_TabletEvent_Callback qfiledialog_tabletevent_callback = nullptr;
    QFileDialog_ActionEvent_Callback qfiledialog_actionevent_callback = nullptr;
    QFileDialog_DragEnterEvent_Callback qfiledialog_dragenterevent_callback = nullptr;
    QFileDialog_DragMoveEvent_Callback qfiledialog_dragmoveevent_callback = nullptr;
    QFileDialog_DragLeaveEvent_Callback qfiledialog_dragleaveevent_callback = nullptr;
    QFileDialog_DropEvent_Callback qfiledialog_dropevent_callback = nullptr;
    QFileDialog_HideEvent_Callback qfiledialog_hideevent_callback = nullptr;
    QFileDialog_NativeEvent_Callback qfiledialog_nativeevent_callback = nullptr;
    QFileDialog_Metric_Callback qfiledialog_metric_callback = nullptr;
    QFileDialog_InitPainter_Callback qfiledialog_initpainter_callback = nullptr;
    QFileDialog_Redirected_Callback qfiledialog_redirected_callback = nullptr;
    QFileDialog_SharedPainter_Callback qfiledialog_sharedpainter_callback = nullptr;
    QFileDialog_InputMethodEvent_Callback qfiledialog_inputmethodevent_callback = nullptr;
    QFileDialog_InputMethodQuery_Callback qfiledialog_inputmethodquery_callback = nullptr;
    QFileDialog_FocusNextPrevChild_Callback qfiledialog_focusnextprevchild_callback = nullptr;
    QFileDialog_TimerEvent_Callback qfiledialog_timerevent_callback = nullptr;
    QFileDialog_ChildEvent_Callback qfiledialog_childevent_callback = nullptr;
    QFileDialog_CustomEvent_Callback qfiledialog_customevent_callback = nullptr;
    QFileDialog_ConnectNotify_Callback qfiledialog_connectnotify_callback = nullptr;
    QFileDialog_DisconnectNotify_Callback qfiledialog_disconnectnotify_callback = nullptr;
    QFileDialog_AdjustPosition_Callback qfiledialog_adjustposition_callback = nullptr;
    QFileDialog_UpdateMicroFocus_Callback qfiledialog_updatemicrofocus_callback = nullptr;
    QFileDialog_Create_Callback qfiledialog_create_callback = nullptr;
    QFileDialog_Destroy_Callback qfiledialog_destroy_callback = nullptr;
    QFileDialog_FocusNextChild_Callback qfiledialog_focusnextchild_callback = nullptr;
    QFileDialog_FocusPreviousChild_Callback qfiledialog_focuspreviouschild_callback = nullptr;
    QFileDialog_Sender_Callback qfiledialog_sender_callback = nullptr;
    QFileDialog_SenderSignalIndex_Callback qfiledialog_sendersignalindex_callback = nullptr;
    QFileDialog_Receivers_Callback qfiledialog_receivers_callback = nullptr;
    QFileDialog_IsSignalConnected_Callback qfiledialog_issignalconnected_callback = nullptr;
    QFileDialog_GetDecodedMetricF_Callback qfiledialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qfiledialog_metaobject_isbase = false;
    mutable bool qfiledialog_metacast_isbase = false;
    mutable bool qfiledialog_metacall_isbase = false;
    mutable bool qfiledialog_setvisible_isbase = false;
    mutable bool qfiledialog_done_isbase = false;
    mutable bool qfiledialog_accept_isbase = false;
    mutable bool qfiledialog_changeevent_isbase = false;
    mutable bool qfiledialog_sizehint_isbase = false;
    mutable bool qfiledialog_minimumsizehint_isbase = false;
    mutable bool qfiledialog_open_isbase = false;
    mutable bool qfiledialog_exec_isbase = false;
    mutable bool qfiledialog_reject_isbase = false;
    mutable bool qfiledialog_keypressevent_isbase = false;
    mutable bool qfiledialog_closeevent_isbase = false;
    mutable bool qfiledialog_showevent_isbase = false;
    mutable bool qfiledialog_resizeevent_isbase = false;
    mutable bool qfiledialog_contextmenuevent_isbase = false;
    mutable bool qfiledialog_eventfilter_isbase = false;
    mutable bool qfiledialog_devtype_isbase = false;
    mutable bool qfiledialog_heightforwidth_isbase = false;
    mutable bool qfiledialog_hasheightforwidth_isbase = false;
    mutable bool qfiledialog_paintengine_isbase = false;
    mutable bool qfiledialog_event_isbase = false;
    mutable bool qfiledialog_mousepressevent_isbase = false;
    mutable bool qfiledialog_mousereleaseevent_isbase = false;
    mutable bool qfiledialog_mousedoubleclickevent_isbase = false;
    mutable bool qfiledialog_mousemoveevent_isbase = false;
    mutable bool qfiledialog_wheelevent_isbase = false;
    mutable bool qfiledialog_keyreleaseevent_isbase = false;
    mutable bool qfiledialog_focusinevent_isbase = false;
    mutable bool qfiledialog_focusoutevent_isbase = false;
    mutable bool qfiledialog_enterevent_isbase = false;
    mutable bool qfiledialog_leaveevent_isbase = false;
    mutable bool qfiledialog_paintevent_isbase = false;
    mutable bool qfiledialog_moveevent_isbase = false;
    mutable bool qfiledialog_tabletevent_isbase = false;
    mutable bool qfiledialog_actionevent_isbase = false;
    mutable bool qfiledialog_dragenterevent_isbase = false;
    mutable bool qfiledialog_dragmoveevent_isbase = false;
    mutable bool qfiledialog_dragleaveevent_isbase = false;
    mutable bool qfiledialog_dropevent_isbase = false;
    mutable bool qfiledialog_hideevent_isbase = false;
    mutable bool qfiledialog_nativeevent_isbase = false;
    mutable bool qfiledialog_metric_isbase = false;
    mutable bool qfiledialog_initpainter_isbase = false;
    mutable bool qfiledialog_redirected_isbase = false;
    mutable bool qfiledialog_sharedpainter_isbase = false;
    mutable bool qfiledialog_inputmethodevent_isbase = false;
    mutable bool qfiledialog_inputmethodquery_isbase = false;
    mutable bool qfiledialog_focusnextprevchild_isbase = false;
    mutable bool qfiledialog_timerevent_isbase = false;
    mutable bool qfiledialog_childevent_isbase = false;
    mutable bool qfiledialog_customevent_isbase = false;
    mutable bool qfiledialog_connectnotify_isbase = false;
    mutable bool qfiledialog_disconnectnotify_isbase = false;
    mutable bool qfiledialog_adjustposition_isbase = false;
    mutable bool qfiledialog_updatemicrofocus_isbase = false;
    mutable bool qfiledialog_create_isbase = false;
    mutable bool qfiledialog_destroy_isbase = false;
    mutable bool qfiledialog_focusnextchild_isbase = false;
    mutable bool qfiledialog_focuspreviouschild_isbase = false;
    mutable bool qfiledialog_sender_isbase = false;
    mutable bool qfiledialog_sendersignalindex_isbase = false;
    mutable bool qfiledialog_receivers_isbase = false;
    mutable bool qfiledialog_issignalconnected_isbase = false;
    mutable bool qfiledialog_getdecodedmetricf_isbase = false;

  public:
    VirtualQFileDialog(QWidget* parent) : QFileDialog(parent) {};
    VirtualQFileDialog(QWidget* parent, Qt::WindowFlags f) : QFileDialog(parent, f) {};
    VirtualQFileDialog() : QFileDialog() {};
    VirtualQFileDialog(QWidget* parent, const QString& caption) : QFileDialog(parent, caption) {};
    VirtualQFileDialog(QWidget* parent, const QString& caption, const QString& directory) : QFileDialog(parent, caption, directory) {};
    VirtualQFileDialog(QWidget* parent, const QString& caption, const QString& directory, const QString& filter) : QFileDialog(parent, caption, directory, filter) {};

    // Callback setters
    inline void setQFileDialog_MetaObject_Callback(QFileDialog_MetaObject_Callback cb) { qfiledialog_metaobject_callback = cb; }
    inline void setQFileDialog_Metacast_Callback(QFileDialog_Metacast_Callback cb) { qfiledialog_metacast_callback = cb; }
    inline void setQFileDialog_Metacall_Callback(QFileDialog_Metacall_Callback cb) { qfiledialog_metacall_callback = cb; }
    inline void setQFileDialog_SetVisible_Callback(QFileDialog_SetVisible_Callback cb) { qfiledialog_setvisible_callback = cb; }
    inline void setQFileDialog_Done_Callback(QFileDialog_Done_Callback cb) { qfiledialog_done_callback = cb; }
    inline void setQFileDialog_Accept_Callback(QFileDialog_Accept_Callback cb) { qfiledialog_accept_callback = cb; }
    inline void setQFileDialog_ChangeEvent_Callback(QFileDialog_ChangeEvent_Callback cb) { qfiledialog_changeevent_callback = cb; }
    inline void setQFileDialog_SizeHint_Callback(QFileDialog_SizeHint_Callback cb) { qfiledialog_sizehint_callback = cb; }
    inline void setQFileDialog_MinimumSizeHint_Callback(QFileDialog_MinimumSizeHint_Callback cb) { qfiledialog_minimumsizehint_callback = cb; }
    inline void setQFileDialog_Open_Callback(QFileDialog_Open_Callback cb) { qfiledialog_open_callback = cb; }
    inline void setQFileDialog_Exec_Callback(QFileDialog_Exec_Callback cb) { qfiledialog_exec_callback = cb; }
    inline void setQFileDialog_Reject_Callback(QFileDialog_Reject_Callback cb) { qfiledialog_reject_callback = cb; }
    inline void setQFileDialog_KeyPressEvent_Callback(QFileDialog_KeyPressEvent_Callback cb) { qfiledialog_keypressevent_callback = cb; }
    inline void setQFileDialog_CloseEvent_Callback(QFileDialog_CloseEvent_Callback cb) { qfiledialog_closeevent_callback = cb; }
    inline void setQFileDialog_ShowEvent_Callback(QFileDialog_ShowEvent_Callback cb) { qfiledialog_showevent_callback = cb; }
    inline void setQFileDialog_ResizeEvent_Callback(QFileDialog_ResizeEvent_Callback cb) { qfiledialog_resizeevent_callback = cb; }
    inline void setQFileDialog_ContextMenuEvent_Callback(QFileDialog_ContextMenuEvent_Callback cb) { qfiledialog_contextmenuevent_callback = cb; }
    inline void setQFileDialog_EventFilter_Callback(QFileDialog_EventFilter_Callback cb) { qfiledialog_eventfilter_callback = cb; }
    inline void setQFileDialog_DevType_Callback(QFileDialog_DevType_Callback cb) { qfiledialog_devtype_callback = cb; }
    inline void setQFileDialog_HeightForWidth_Callback(QFileDialog_HeightForWidth_Callback cb) { qfiledialog_heightforwidth_callback = cb; }
    inline void setQFileDialog_HasHeightForWidth_Callback(QFileDialog_HasHeightForWidth_Callback cb) { qfiledialog_hasheightforwidth_callback = cb; }
    inline void setQFileDialog_PaintEngine_Callback(QFileDialog_PaintEngine_Callback cb) { qfiledialog_paintengine_callback = cb; }
    inline void setQFileDialog_Event_Callback(QFileDialog_Event_Callback cb) { qfiledialog_event_callback = cb; }
    inline void setQFileDialog_MousePressEvent_Callback(QFileDialog_MousePressEvent_Callback cb) { qfiledialog_mousepressevent_callback = cb; }
    inline void setQFileDialog_MouseReleaseEvent_Callback(QFileDialog_MouseReleaseEvent_Callback cb) { qfiledialog_mousereleaseevent_callback = cb; }
    inline void setQFileDialog_MouseDoubleClickEvent_Callback(QFileDialog_MouseDoubleClickEvent_Callback cb) { qfiledialog_mousedoubleclickevent_callback = cb; }
    inline void setQFileDialog_MouseMoveEvent_Callback(QFileDialog_MouseMoveEvent_Callback cb) { qfiledialog_mousemoveevent_callback = cb; }
    inline void setQFileDialog_WheelEvent_Callback(QFileDialog_WheelEvent_Callback cb) { qfiledialog_wheelevent_callback = cb; }
    inline void setQFileDialog_KeyReleaseEvent_Callback(QFileDialog_KeyReleaseEvent_Callback cb) { qfiledialog_keyreleaseevent_callback = cb; }
    inline void setQFileDialog_FocusInEvent_Callback(QFileDialog_FocusInEvent_Callback cb) { qfiledialog_focusinevent_callback = cb; }
    inline void setQFileDialog_FocusOutEvent_Callback(QFileDialog_FocusOutEvent_Callback cb) { qfiledialog_focusoutevent_callback = cb; }
    inline void setQFileDialog_EnterEvent_Callback(QFileDialog_EnterEvent_Callback cb) { qfiledialog_enterevent_callback = cb; }
    inline void setQFileDialog_LeaveEvent_Callback(QFileDialog_LeaveEvent_Callback cb) { qfiledialog_leaveevent_callback = cb; }
    inline void setQFileDialog_PaintEvent_Callback(QFileDialog_PaintEvent_Callback cb) { qfiledialog_paintevent_callback = cb; }
    inline void setQFileDialog_MoveEvent_Callback(QFileDialog_MoveEvent_Callback cb) { qfiledialog_moveevent_callback = cb; }
    inline void setQFileDialog_TabletEvent_Callback(QFileDialog_TabletEvent_Callback cb) { qfiledialog_tabletevent_callback = cb; }
    inline void setQFileDialog_ActionEvent_Callback(QFileDialog_ActionEvent_Callback cb) { qfiledialog_actionevent_callback = cb; }
    inline void setQFileDialog_DragEnterEvent_Callback(QFileDialog_DragEnterEvent_Callback cb) { qfiledialog_dragenterevent_callback = cb; }
    inline void setQFileDialog_DragMoveEvent_Callback(QFileDialog_DragMoveEvent_Callback cb) { qfiledialog_dragmoveevent_callback = cb; }
    inline void setQFileDialog_DragLeaveEvent_Callback(QFileDialog_DragLeaveEvent_Callback cb) { qfiledialog_dragleaveevent_callback = cb; }
    inline void setQFileDialog_DropEvent_Callback(QFileDialog_DropEvent_Callback cb) { qfiledialog_dropevent_callback = cb; }
    inline void setQFileDialog_HideEvent_Callback(QFileDialog_HideEvent_Callback cb) { qfiledialog_hideevent_callback = cb; }
    inline void setQFileDialog_NativeEvent_Callback(QFileDialog_NativeEvent_Callback cb) { qfiledialog_nativeevent_callback = cb; }
    inline void setQFileDialog_Metric_Callback(QFileDialog_Metric_Callback cb) { qfiledialog_metric_callback = cb; }
    inline void setQFileDialog_InitPainter_Callback(QFileDialog_InitPainter_Callback cb) { qfiledialog_initpainter_callback = cb; }
    inline void setQFileDialog_Redirected_Callback(QFileDialog_Redirected_Callback cb) { qfiledialog_redirected_callback = cb; }
    inline void setQFileDialog_SharedPainter_Callback(QFileDialog_SharedPainter_Callback cb) { qfiledialog_sharedpainter_callback = cb; }
    inline void setQFileDialog_InputMethodEvent_Callback(QFileDialog_InputMethodEvent_Callback cb) { qfiledialog_inputmethodevent_callback = cb; }
    inline void setQFileDialog_InputMethodQuery_Callback(QFileDialog_InputMethodQuery_Callback cb) { qfiledialog_inputmethodquery_callback = cb; }
    inline void setQFileDialog_FocusNextPrevChild_Callback(QFileDialog_FocusNextPrevChild_Callback cb) { qfiledialog_focusnextprevchild_callback = cb; }
    inline void setQFileDialog_TimerEvent_Callback(QFileDialog_TimerEvent_Callback cb) { qfiledialog_timerevent_callback = cb; }
    inline void setQFileDialog_ChildEvent_Callback(QFileDialog_ChildEvent_Callback cb) { qfiledialog_childevent_callback = cb; }
    inline void setQFileDialog_CustomEvent_Callback(QFileDialog_CustomEvent_Callback cb) { qfiledialog_customevent_callback = cb; }
    inline void setQFileDialog_ConnectNotify_Callback(QFileDialog_ConnectNotify_Callback cb) { qfiledialog_connectnotify_callback = cb; }
    inline void setQFileDialog_DisconnectNotify_Callback(QFileDialog_DisconnectNotify_Callback cb) { qfiledialog_disconnectnotify_callback = cb; }
    inline void setQFileDialog_AdjustPosition_Callback(QFileDialog_AdjustPosition_Callback cb) { qfiledialog_adjustposition_callback = cb; }
    inline void setQFileDialog_UpdateMicroFocus_Callback(QFileDialog_UpdateMicroFocus_Callback cb) { qfiledialog_updatemicrofocus_callback = cb; }
    inline void setQFileDialog_Create_Callback(QFileDialog_Create_Callback cb) { qfiledialog_create_callback = cb; }
    inline void setQFileDialog_Destroy_Callback(QFileDialog_Destroy_Callback cb) { qfiledialog_destroy_callback = cb; }
    inline void setQFileDialog_FocusNextChild_Callback(QFileDialog_FocusNextChild_Callback cb) { qfiledialog_focusnextchild_callback = cb; }
    inline void setQFileDialog_FocusPreviousChild_Callback(QFileDialog_FocusPreviousChild_Callback cb) { qfiledialog_focuspreviouschild_callback = cb; }
    inline void setQFileDialog_Sender_Callback(QFileDialog_Sender_Callback cb) { qfiledialog_sender_callback = cb; }
    inline void setQFileDialog_SenderSignalIndex_Callback(QFileDialog_SenderSignalIndex_Callback cb) { qfiledialog_sendersignalindex_callback = cb; }
    inline void setQFileDialog_Receivers_Callback(QFileDialog_Receivers_Callback cb) { qfiledialog_receivers_callback = cb; }
    inline void setQFileDialog_IsSignalConnected_Callback(QFileDialog_IsSignalConnected_Callback cb) { qfiledialog_issignalconnected_callback = cb; }
    inline void setQFileDialog_GetDecodedMetricF_Callback(QFileDialog_GetDecodedMetricF_Callback cb) { qfiledialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQFileDialog_MetaObject_IsBase(bool value) const { qfiledialog_metaobject_isbase = value; }
    inline void setQFileDialog_Metacast_IsBase(bool value) const { qfiledialog_metacast_isbase = value; }
    inline void setQFileDialog_Metacall_IsBase(bool value) const { qfiledialog_metacall_isbase = value; }
    inline void setQFileDialog_SetVisible_IsBase(bool value) const { qfiledialog_setvisible_isbase = value; }
    inline void setQFileDialog_Done_IsBase(bool value) const { qfiledialog_done_isbase = value; }
    inline void setQFileDialog_Accept_IsBase(bool value) const { qfiledialog_accept_isbase = value; }
    inline void setQFileDialog_ChangeEvent_IsBase(bool value) const { qfiledialog_changeevent_isbase = value; }
    inline void setQFileDialog_SizeHint_IsBase(bool value) const { qfiledialog_sizehint_isbase = value; }
    inline void setQFileDialog_MinimumSizeHint_IsBase(bool value) const { qfiledialog_minimumsizehint_isbase = value; }
    inline void setQFileDialog_Open_IsBase(bool value) const { qfiledialog_open_isbase = value; }
    inline void setQFileDialog_Exec_IsBase(bool value) const { qfiledialog_exec_isbase = value; }
    inline void setQFileDialog_Reject_IsBase(bool value) const { qfiledialog_reject_isbase = value; }
    inline void setQFileDialog_KeyPressEvent_IsBase(bool value) const { qfiledialog_keypressevent_isbase = value; }
    inline void setQFileDialog_CloseEvent_IsBase(bool value) const { qfiledialog_closeevent_isbase = value; }
    inline void setQFileDialog_ShowEvent_IsBase(bool value) const { qfiledialog_showevent_isbase = value; }
    inline void setQFileDialog_ResizeEvent_IsBase(bool value) const { qfiledialog_resizeevent_isbase = value; }
    inline void setQFileDialog_ContextMenuEvent_IsBase(bool value) const { qfiledialog_contextmenuevent_isbase = value; }
    inline void setQFileDialog_EventFilter_IsBase(bool value) const { qfiledialog_eventfilter_isbase = value; }
    inline void setQFileDialog_DevType_IsBase(bool value) const { qfiledialog_devtype_isbase = value; }
    inline void setQFileDialog_HeightForWidth_IsBase(bool value) const { qfiledialog_heightforwidth_isbase = value; }
    inline void setQFileDialog_HasHeightForWidth_IsBase(bool value) const { qfiledialog_hasheightforwidth_isbase = value; }
    inline void setQFileDialog_PaintEngine_IsBase(bool value) const { qfiledialog_paintengine_isbase = value; }
    inline void setQFileDialog_Event_IsBase(bool value) const { qfiledialog_event_isbase = value; }
    inline void setQFileDialog_MousePressEvent_IsBase(bool value) const { qfiledialog_mousepressevent_isbase = value; }
    inline void setQFileDialog_MouseReleaseEvent_IsBase(bool value) const { qfiledialog_mousereleaseevent_isbase = value; }
    inline void setQFileDialog_MouseDoubleClickEvent_IsBase(bool value) const { qfiledialog_mousedoubleclickevent_isbase = value; }
    inline void setQFileDialog_MouseMoveEvent_IsBase(bool value) const { qfiledialog_mousemoveevent_isbase = value; }
    inline void setQFileDialog_WheelEvent_IsBase(bool value) const { qfiledialog_wheelevent_isbase = value; }
    inline void setQFileDialog_KeyReleaseEvent_IsBase(bool value) const { qfiledialog_keyreleaseevent_isbase = value; }
    inline void setQFileDialog_FocusInEvent_IsBase(bool value) const { qfiledialog_focusinevent_isbase = value; }
    inline void setQFileDialog_FocusOutEvent_IsBase(bool value) const { qfiledialog_focusoutevent_isbase = value; }
    inline void setQFileDialog_EnterEvent_IsBase(bool value) const { qfiledialog_enterevent_isbase = value; }
    inline void setQFileDialog_LeaveEvent_IsBase(bool value) const { qfiledialog_leaveevent_isbase = value; }
    inline void setQFileDialog_PaintEvent_IsBase(bool value) const { qfiledialog_paintevent_isbase = value; }
    inline void setQFileDialog_MoveEvent_IsBase(bool value) const { qfiledialog_moveevent_isbase = value; }
    inline void setQFileDialog_TabletEvent_IsBase(bool value) const { qfiledialog_tabletevent_isbase = value; }
    inline void setQFileDialog_ActionEvent_IsBase(bool value) const { qfiledialog_actionevent_isbase = value; }
    inline void setQFileDialog_DragEnterEvent_IsBase(bool value) const { qfiledialog_dragenterevent_isbase = value; }
    inline void setQFileDialog_DragMoveEvent_IsBase(bool value) const { qfiledialog_dragmoveevent_isbase = value; }
    inline void setQFileDialog_DragLeaveEvent_IsBase(bool value) const { qfiledialog_dragleaveevent_isbase = value; }
    inline void setQFileDialog_DropEvent_IsBase(bool value) const { qfiledialog_dropevent_isbase = value; }
    inline void setQFileDialog_HideEvent_IsBase(bool value) const { qfiledialog_hideevent_isbase = value; }
    inline void setQFileDialog_NativeEvent_IsBase(bool value) const { qfiledialog_nativeevent_isbase = value; }
    inline void setQFileDialog_Metric_IsBase(bool value) const { qfiledialog_metric_isbase = value; }
    inline void setQFileDialog_InitPainter_IsBase(bool value) const { qfiledialog_initpainter_isbase = value; }
    inline void setQFileDialog_Redirected_IsBase(bool value) const { qfiledialog_redirected_isbase = value; }
    inline void setQFileDialog_SharedPainter_IsBase(bool value) const { qfiledialog_sharedpainter_isbase = value; }
    inline void setQFileDialog_InputMethodEvent_IsBase(bool value) const { qfiledialog_inputmethodevent_isbase = value; }
    inline void setQFileDialog_InputMethodQuery_IsBase(bool value) const { qfiledialog_inputmethodquery_isbase = value; }
    inline void setQFileDialog_FocusNextPrevChild_IsBase(bool value) const { qfiledialog_focusnextprevchild_isbase = value; }
    inline void setQFileDialog_TimerEvent_IsBase(bool value) const { qfiledialog_timerevent_isbase = value; }
    inline void setQFileDialog_ChildEvent_IsBase(bool value) const { qfiledialog_childevent_isbase = value; }
    inline void setQFileDialog_CustomEvent_IsBase(bool value) const { qfiledialog_customevent_isbase = value; }
    inline void setQFileDialog_ConnectNotify_IsBase(bool value) const { qfiledialog_connectnotify_isbase = value; }
    inline void setQFileDialog_DisconnectNotify_IsBase(bool value) const { qfiledialog_disconnectnotify_isbase = value; }
    inline void setQFileDialog_AdjustPosition_IsBase(bool value) const { qfiledialog_adjustposition_isbase = value; }
    inline void setQFileDialog_UpdateMicroFocus_IsBase(bool value) const { qfiledialog_updatemicrofocus_isbase = value; }
    inline void setQFileDialog_Create_IsBase(bool value) const { qfiledialog_create_isbase = value; }
    inline void setQFileDialog_Destroy_IsBase(bool value) const { qfiledialog_destroy_isbase = value; }
    inline void setQFileDialog_FocusNextChild_IsBase(bool value) const { qfiledialog_focusnextchild_isbase = value; }
    inline void setQFileDialog_FocusPreviousChild_IsBase(bool value) const { qfiledialog_focuspreviouschild_isbase = value; }
    inline void setQFileDialog_Sender_IsBase(bool value) const { qfiledialog_sender_isbase = value; }
    inline void setQFileDialog_SenderSignalIndex_IsBase(bool value) const { qfiledialog_sendersignalindex_isbase = value; }
    inline void setQFileDialog_Receivers_IsBase(bool value) const { qfiledialog_receivers_isbase = value; }
    inline void setQFileDialog_IsSignalConnected_IsBase(bool value) const { qfiledialog_issignalconnected_isbase = value; }
    inline void setQFileDialog_GetDecodedMetricF_IsBase(bool value) const { qfiledialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qfiledialog_metaobject_isbase) {
            qfiledialog_metaobject_isbase = false;
            return QFileDialog::metaObject();
        }
        auto metaobject_cb = qfiledialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QFileDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qfiledialog_metacast_isbase) {
            qfiledialog_metacast_isbase = false;
            return QFileDialog::qt_metacast(param1);
        }
        auto metacast_cb = qfiledialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QFileDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfiledialog_metacall_isbase) {
            qfiledialog_metacall_isbase = false;
            return QFileDialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qfiledialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QFileDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qfiledialog_setvisible_isbase) {
            qfiledialog_setvisible_isbase = false;
            QFileDialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = qfiledialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QFileDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qfiledialog_done_isbase) {
            qfiledialog_done_isbase = false;
            QFileDialog::done(result);
            return;
        }
        auto done_cb = qfiledialog_done_callback;
        if (done_cb) {
            int cbval1 = result;

            done_cb(this, cbval1);
            return;
        }
        QFileDialog::done(result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qfiledialog_accept_isbase) {
            qfiledialog_accept_isbase = false;
            QFileDialog::accept();
            return;
        }
        auto accept_cb = qfiledialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        QFileDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qfiledialog_changeevent_isbase) {
            qfiledialog_changeevent_isbase = false;
            QFileDialog::changeEvent(e);
            return;
        }
        auto changeevent_cb = qfiledialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = e;

            changeevent_cb(this, cbval1);
            return;
        }
        QFileDialog::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qfiledialog_sizehint_isbase) {
            qfiledialog_sizehint_isbase = false;
            return QFileDialog::sizeHint();
        }
        auto sizehint_cb = qfiledialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QFileDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qfiledialog_minimumsizehint_isbase) {
            qfiledialog_minimumsizehint_isbase = false;
            return QFileDialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = qfiledialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QFileDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qfiledialog_open_isbase) {
            qfiledialog_open_isbase = false;
            QFileDialog::open();
            return;
        }
        auto open_cb = qfiledialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        QFileDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qfiledialog_exec_isbase) {
            qfiledialog_exec_isbase = false;
            return QFileDialog::exec();
        }
        auto exec_cb = qfiledialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return QFileDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qfiledialog_reject_isbase) {
            qfiledialog_reject_isbase = false;
            QFileDialog::reject();
            return;
        }
        auto reject_cb = qfiledialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        QFileDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qfiledialog_keypressevent_isbase) {
            qfiledialog_keypressevent_isbase = false;
            QFileDialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = qfiledialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        QFileDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qfiledialog_closeevent_isbase) {
            qfiledialog_closeevent_isbase = false;
            QFileDialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = qfiledialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        QFileDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qfiledialog_showevent_isbase) {
            qfiledialog_showevent_isbase = false;
            QFileDialog::showEvent(param1);
            return;
        }
        auto showevent_cb = qfiledialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        QFileDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qfiledialog_resizeevent_isbase) {
            qfiledialog_resizeevent_isbase = false;
            QFileDialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = qfiledialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        QFileDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qfiledialog_contextmenuevent_isbase) {
            qfiledialog_contextmenuevent_isbase = false;
            QFileDialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = qfiledialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QFileDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qfiledialog_eventfilter_isbase) {
            qfiledialog_eventfilter_isbase = false;
            return QFileDialog::eventFilter(param1, param2);
        }
        auto eventfilter_cb = qfiledialog_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QFileDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qfiledialog_devtype_isbase) {
            qfiledialog_devtype_isbase = false;
            return QFileDialog::devType();
        }
        auto devtype_cb = qfiledialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QFileDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qfiledialog_heightforwidth_isbase) {
            qfiledialog_heightforwidth_isbase = false;
            return QFileDialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = qfiledialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFileDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qfiledialog_hasheightforwidth_isbase) {
            qfiledialog_hasheightforwidth_isbase = false;
            return QFileDialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qfiledialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QFileDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qfiledialog_paintengine_isbase) {
            qfiledialog_paintengine_isbase = false;
            return QFileDialog::paintEngine();
        }
        auto paintengine_cb = qfiledialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QFileDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qfiledialog_event_isbase) {
            qfiledialog_event_isbase = false;
            return QFileDialog::event(event);
        }
        auto event_cb = qfiledialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QFileDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qfiledialog_mousepressevent_isbase) {
            qfiledialog_mousepressevent_isbase = false;
            QFileDialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qfiledialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QFileDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qfiledialog_mousereleaseevent_isbase) {
            qfiledialog_mousereleaseevent_isbase = false;
            QFileDialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qfiledialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QFileDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qfiledialog_mousedoubleclickevent_isbase) {
            qfiledialog_mousedoubleclickevent_isbase = false;
            QFileDialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qfiledialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QFileDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qfiledialog_mousemoveevent_isbase) {
            qfiledialog_mousemoveevent_isbase = false;
            QFileDialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qfiledialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QFileDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qfiledialog_wheelevent_isbase) {
            qfiledialog_wheelevent_isbase = false;
            QFileDialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qfiledialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QFileDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qfiledialog_keyreleaseevent_isbase) {
            qfiledialog_keyreleaseevent_isbase = false;
            QFileDialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qfiledialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QFileDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qfiledialog_focusinevent_isbase) {
            qfiledialog_focusinevent_isbase = false;
            QFileDialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qfiledialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QFileDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qfiledialog_focusoutevent_isbase) {
            qfiledialog_focusoutevent_isbase = false;
            QFileDialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qfiledialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QFileDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qfiledialog_enterevent_isbase) {
            qfiledialog_enterevent_isbase = false;
            QFileDialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = qfiledialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QFileDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qfiledialog_leaveevent_isbase) {
            qfiledialog_leaveevent_isbase = false;
            QFileDialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qfiledialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QFileDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qfiledialog_paintevent_isbase) {
            qfiledialog_paintevent_isbase = false;
            QFileDialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = qfiledialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        QFileDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qfiledialog_moveevent_isbase) {
            qfiledialog_moveevent_isbase = false;
            QFileDialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = qfiledialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QFileDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qfiledialog_tabletevent_isbase) {
            qfiledialog_tabletevent_isbase = false;
            QFileDialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qfiledialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QFileDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qfiledialog_actionevent_isbase) {
            qfiledialog_actionevent_isbase = false;
            QFileDialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = qfiledialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QFileDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qfiledialog_dragenterevent_isbase) {
            qfiledialog_dragenterevent_isbase = false;
            QFileDialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qfiledialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QFileDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qfiledialog_dragmoveevent_isbase) {
            qfiledialog_dragmoveevent_isbase = false;
            QFileDialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qfiledialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QFileDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qfiledialog_dragleaveevent_isbase) {
            qfiledialog_dragleaveevent_isbase = false;
            QFileDialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qfiledialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QFileDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qfiledialog_dropevent_isbase) {
            qfiledialog_dropevent_isbase = false;
            QFileDialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = qfiledialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QFileDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qfiledialog_hideevent_isbase) {
            qfiledialog_hideevent_isbase = false;
            QFileDialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = qfiledialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QFileDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qfiledialog_nativeevent_isbase) {
            qfiledialog_nativeevent_isbase = false;
            return QFileDialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qfiledialog_nativeevent_callback;
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
        return QFileDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qfiledialog_metric_isbase) {
            qfiledialog_metric_isbase = false;
            return QFileDialog::metric(param1);
        }
        auto metric_cb = qfiledialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFileDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qfiledialog_initpainter_isbase) {
            qfiledialog_initpainter_isbase = false;
            QFileDialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = qfiledialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QFileDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qfiledialog_redirected_isbase) {
            qfiledialog_redirected_isbase = false;
            return QFileDialog::redirected(offset);
        }
        auto redirected_cb = qfiledialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QFileDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qfiledialog_sharedpainter_isbase) {
            qfiledialog_sharedpainter_isbase = false;
            return QFileDialog::sharedPainter();
        }
        auto sharedpainter_cb = qfiledialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QFileDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qfiledialog_inputmethodevent_isbase) {
            qfiledialog_inputmethodevent_isbase = false;
            QFileDialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qfiledialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QFileDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qfiledialog_inputmethodquery_isbase) {
            qfiledialog_inputmethodquery_isbase = false;
            return QFileDialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qfiledialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QFileDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qfiledialog_focusnextprevchild_isbase) {
            qfiledialog_focusnextprevchild_isbase = false;
            return QFileDialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qfiledialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QFileDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfiledialog_timerevent_isbase) {
            qfiledialog_timerevent_isbase = false;
            QFileDialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = qfiledialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QFileDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfiledialog_childevent_isbase) {
            qfiledialog_childevent_isbase = false;
            QFileDialog::childEvent(event);
            return;
        }
        auto childevent_cb = qfiledialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QFileDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfiledialog_customevent_isbase) {
            qfiledialog_customevent_isbase = false;
            QFileDialog::customEvent(event);
            return;
        }
        auto customevent_cb = qfiledialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QFileDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfiledialog_connectnotify_isbase) {
            qfiledialog_connectnotify_isbase = false;
            QFileDialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qfiledialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QFileDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfiledialog_disconnectnotify_isbase) {
            qfiledialog_disconnectnotify_isbase = false;
            QFileDialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qfiledialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QFileDialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qfiledialog_adjustposition_isbase) {
            qfiledialog_adjustposition_isbase = false;
            QFileDialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = qfiledialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        QFileDialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qfiledialog_updatemicrofocus_isbase) {
            qfiledialog_updatemicrofocus_isbase = false;
            QFileDialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qfiledialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QFileDialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qfiledialog_create_isbase) {
            qfiledialog_create_isbase = false;
            QFileDialog::create();
            return;
        }
        auto create_cb = qfiledialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QFileDialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qfiledialog_destroy_isbase) {
            qfiledialog_destroy_isbase = false;
            QFileDialog::destroy();
            return;
        }
        auto destroy_cb = qfiledialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QFileDialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qfiledialog_focusnextchild_isbase) {
            qfiledialog_focusnextchild_isbase = false;
            return QFileDialog::focusNextChild();
        }
        auto focusnextchild_cb = qfiledialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QFileDialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qfiledialog_focuspreviouschild_isbase) {
            qfiledialog_focuspreviouschild_isbase = false;
            return QFileDialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qfiledialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QFileDialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qfiledialog_sender_isbase) {
            qfiledialog_sender_isbase = false;
            return QFileDialog::sender();
        }
        auto sender_cb = qfiledialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QFileDialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qfiledialog_sendersignalindex_isbase) {
            qfiledialog_sendersignalindex_isbase = false;
            return QFileDialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = qfiledialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QFileDialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qfiledialog_receivers_isbase) {
            qfiledialog_receivers_isbase = false;
            return QFileDialog::receivers(signal);
        }
        auto receivers_cb = qfiledialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFileDialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qfiledialog_issignalconnected_isbase) {
            qfiledialog_issignalconnected_isbase = false;
            return QFileDialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qfiledialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QFileDialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qfiledialog_getdecodedmetricf_isbase) {
            qfiledialog_getdecodedmetricf_isbase = false;
            return QFileDialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qfiledialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QFileDialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void QFileDialog_Done(QFileDialog* self, int result);
    friend void QFileDialog_SuperDone(QFileDialog* self, int result);
    friend void QFileDialog_Accept(QFileDialog* self);
    friend void QFileDialog_SuperAccept(QFileDialog* self);
    friend void QFileDialog_ChangeEvent(QFileDialog* self, QEvent* e);
    friend void QFileDialog_SuperChangeEvent(QFileDialog* self, QEvent* e);
    friend void QFileDialog_KeyPressEvent(QFileDialog* self, QKeyEvent* param1);
    friend void QFileDialog_SuperKeyPressEvent(QFileDialog* self, QKeyEvent* param1);
    friend void QFileDialog_CloseEvent(QFileDialog* self, QCloseEvent* param1);
    friend void QFileDialog_SuperCloseEvent(QFileDialog* self, QCloseEvent* param1);
    friend void QFileDialog_ShowEvent(QFileDialog* self, QShowEvent* param1);
    friend void QFileDialog_SuperShowEvent(QFileDialog* self, QShowEvent* param1);
    friend void QFileDialog_ResizeEvent(QFileDialog* self, QResizeEvent* param1);
    friend void QFileDialog_SuperResizeEvent(QFileDialog* self, QResizeEvent* param1);
    friend void QFileDialog_ContextMenuEvent(QFileDialog* self, QContextMenuEvent* param1);
    friend void QFileDialog_SuperContextMenuEvent(QFileDialog* self, QContextMenuEvent* param1);
    friend bool QFileDialog_EventFilter(QFileDialog* self, QObject* param1, QEvent* param2);
    friend bool QFileDialog_SuperEventFilter(QFileDialog* self, QObject* param1, QEvent* param2);
    friend bool QFileDialog_Event(QFileDialog* self, QEvent* event);
    friend bool QFileDialog_SuperEvent(QFileDialog* self, QEvent* event);
    friend void QFileDialog_MousePressEvent(QFileDialog* self, QMouseEvent* event);
    friend void QFileDialog_SuperMousePressEvent(QFileDialog* self, QMouseEvent* event);
    friend void QFileDialog_MouseReleaseEvent(QFileDialog* self, QMouseEvent* event);
    friend void QFileDialog_SuperMouseReleaseEvent(QFileDialog* self, QMouseEvent* event);
    friend void QFileDialog_MouseDoubleClickEvent(QFileDialog* self, QMouseEvent* event);
    friend void QFileDialog_SuperMouseDoubleClickEvent(QFileDialog* self, QMouseEvent* event);
    friend void QFileDialog_MouseMoveEvent(QFileDialog* self, QMouseEvent* event);
    friend void QFileDialog_SuperMouseMoveEvent(QFileDialog* self, QMouseEvent* event);
    friend void QFileDialog_WheelEvent(QFileDialog* self, QWheelEvent* event);
    friend void QFileDialog_SuperWheelEvent(QFileDialog* self, QWheelEvent* event);
    friend void QFileDialog_KeyReleaseEvent(QFileDialog* self, QKeyEvent* event);
    friend void QFileDialog_SuperKeyReleaseEvent(QFileDialog* self, QKeyEvent* event);
    friend void QFileDialog_FocusInEvent(QFileDialog* self, QFocusEvent* event);
    friend void QFileDialog_SuperFocusInEvent(QFileDialog* self, QFocusEvent* event);
    friend void QFileDialog_FocusOutEvent(QFileDialog* self, QFocusEvent* event);
    friend void QFileDialog_SuperFocusOutEvent(QFileDialog* self, QFocusEvent* event);
    friend void QFileDialog_EnterEvent(QFileDialog* self, QEnterEvent* event);
    friend void QFileDialog_SuperEnterEvent(QFileDialog* self, QEnterEvent* event);
    friend void QFileDialog_LeaveEvent(QFileDialog* self, QEvent* event);
    friend void QFileDialog_SuperLeaveEvent(QFileDialog* self, QEvent* event);
    friend void QFileDialog_PaintEvent(QFileDialog* self, QPaintEvent* event);
    friend void QFileDialog_SuperPaintEvent(QFileDialog* self, QPaintEvent* event);
    friend void QFileDialog_MoveEvent(QFileDialog* self, QMoveEvent* event);
    friend void QFileDialog_SuperMoveEvent(QFileDialog* self, QMoveEvent* event);
    friend void QFileDialog_TabletEvent(QFileDialog* self, QTabletEvent* event);
    friend void QFileDialog_SuperTabletEvent(QFileDialog* self, QTabletEvent* event);
    friend void QFileDialog_ActionEvent(QFileDialog* self, QActionEvent* event);
    friend void QFileDialog_SuperActionEvent(QFileDialog* self, QActionEvent* event);
    friend void QFileDialog_DragEnterEvent(QFileDialog* self, QDragEnterEvent* event);
    friend void QFileDialog_SuperDragEnterEvent(QFileDialog* self, QDragEnterEvent* event);
    friend void QFileDialog_DragMoveEvent(QFileDialog* self, QDragMoveEvent* event);
    friend void QFileDialog_SuperDragMoveEvent(QFileDialog* self, QDragMoveEvent* event);
    friend void QFileDialog_DragLeaveEvent(QFileDialog* self, QDragLeaveEvent* event);
    friend void QFileDialog_SuperDragLeaveEvent(QFileDialog* self, QDragLeaveEvent* event);
    friend void QFileDialog_DropEvent(QFileDialog* self, QDropEvent* event);
    friend void QFileDialog_SuperDropEvent(QFileDialog* self, QDropEvent* event);
    friend void QFileDialog_HideEvent(QFileDialog* self, QHideEvent* event);
    friend void QFileDialog_SuperHideEvent(QFileDialog* self, QHideEvent* event);
    friend bool QFileDialog_NativeEvent(QFileDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QFileDialog_SuperNativeEvent(QFileDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QFileDialog_Metric(const QFileDialog* self, int param1);
    friend int QFileDialog_SuperMetric(const QFileDialog* self, int param1);
    friend void QFileDialog_InitPainter(const QFileDialog* self, QPainter* painter);
    friend void QFileDialog_SuperInitPainter(const QFileDialog* self, QPainter* painter);
    friend QPaintDevice* QFileDialog_Redirected(const QFileDialog* self, QPoint* offset);
    friend QPaintDevice* QFileDialog_SuperRedirected(const QFileDialog* self, QPoint* offset);
    friend QPainter* QFileDialog_SharedPainter(const QFileDialog* self);
    friend QPainter* QFileDialog_SuperSharedPainter(const QFileDialog* self);
    friend void QFileDialog_InputMethodEvent(QFileDialog* self, QInputMethodEvent* param1);
    friend void QFileDialog_SuperInputMethodEvent(QFileDialog* self, QInputMethodEvent* param1);
    friend bool QFileDialog_FocusNextPrevChild(QFileDialog* self, bool next);
    friend bool QFileDialog_SuperFocusNextPrevChild(QFileDialog* self, bool next);
    friend void QFileDialog_TimerEvent(QFileDialog* self, QTimerEvent* event);
    friend void QFileDialog_SuperTimerEvent(QFileDialog* self, QTimerEvent* event);
    friend void QFileDialog_ChildEvent(QFileDialog* self, QChildEvent* event);
    friend void QFileDialog_SuperChildEvent(QFileDialog* self, QChildEvent* event);
    friend void QFileDialog_CustomEvent(QFileDialog* self, QEvent* event);
    friend void QFileDialog_SuperCustomEvent(QFileDialog* self, QEvent* event);
    friend void QFileDialog_ConnectNotify(QFileDialog* self, const QMetaMethod* signal);
    friend void QFileDialog_SuperConnectNotify(QFileDialog* self, const QMetaMethod* signal);
    friend void QFileDialog_DisconnectNotify(QFileDialog* self, const QMetaMethod* signal);
    friend void QFileDialog_SuperDisconnectNotify(QFileDialog* self, const QMetaMethod* signal);
    friend void QFileDialog_AdjustPosition(QFileDialog* self, QWidget* param1);
    friend void QFileDialog_SuperAdjustPosition(QFileDialog* self, QWidget* param1);
    friend void QFileDialog_UpdateMicroFocus(QFileDialog* self);
    friend void QFileDialog_SuperUpdateMicroFocus(QFileDialog* self);
    friend void QFileDialog_Create(QFileDialog* self);
    friend void QFileDialog_SuperCreate(QFileDialog* self);
    friend void QFileDialog_Destroy(QFileDialog* self);
    friend void QFileDialog_SuperDestroy(QFileDialog* self);
    friend bool QFileDialog_FocusNextChild(QFileDialog* self);
    friend bool QFileDialog_SuperFocusNextChild(QFileDialog* self);
    friend bool QFileDialog_FocusPreviousChild(QFileDialog* self);
    friend bool QFileDialog_SuperFocusPreviousChild(QFileDialog* self);
    friend QObject* QFileDialog_Sender(const QFileDialog* self);
    friend QObject* QFileDialog_SuperSender(const QFileDialog* self);
    friend int QFileDialog_SenderSignalIndex(const QFileDialog* self);
    friend int QFileDialog_SuperSenderSignalIndex(const QFileDialog* self);
    friend int QFileDialog_Receivers(const QFileDialog* self, const char* signal);
    friend int QFileDialog_SuperReceivers(const QFileDialog* self, const char* signal);
    friend bool QFileDialog_IsSignalConnected(const QFileDialog* self, const QMetaMethod* signal);
    friend bool QFileDialog_SuperIsSignalConnected(const QFileDialog* self, const QMetaMethod* signal);
    friend double QFileDialog_GetDecodedMetricF(const QFileDialog* self, int metricA, int metricB);
    friend double QFileDialog_SuperGetDecodedMetricF(const QFileDialog* self, int metricA, int metricB);
};

#endif
