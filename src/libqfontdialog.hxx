#pragma once
#ifndef SRCC_LIBVIRTUALQFONTDIALOG_H
#define SRCC_LIBVIRTUALQFONTDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFontDialog so that we can call protected methods
class VirtualQFontDialog final : public QFontDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualQFontDialog = true;

    // Virtual class public types (including callbacks)
    using QFontDialog_MetaObject_Callback = QMetaObject* (*)();
    using QFontDialog_Metacast_Callback = void* (*)(QFontDialog*, const char*);
    using QFontDialog_Metacall_Callback = int (*)(QFontDialog*, int, int, void**);
    using QFontDialog_SetVisible_Callback = void (*)(QFontDialog*, bool);
    using QFontDialog_ChangeEvent_Callback = void (*)(QFontDialog*, QEvent*);
    using QFontDialog_Done_Callback = void (*)(QFontDialog*, int);
    using QFontDialog_EventFilter_Callback = bool (*)(QFontDialog*, QObject*, QEvent*);
    using QFontDialog_SizeHint_Callback = QSize* (*)();
    using QFontDialog_MinimumSizeHint_Callback = QSize* (*)();
    using QFontDialog_Open_Callback = void (*)();
    using QFontDialog_Exec_Callback = int (*)();
    using QFontDialog_Accept_Callback = void (*)();
    using QFontDialog_Reject_Callback = void (*)();
    using QFontDialog_KeyPressEvent_Callback = void (*)(QFontDialog*, QKeyEvent*);
    using QFontDialog_CloseEvent_Callback = void (*)(QFontDialog*, QCloseEvent*);
    using QFontDialog_ShowEvent_Callback = void (*)(QFontDialog*, QShowEvent*);
    using QFontDialog_ResizeEvent_Callback = void (*)(QFontDialog*, QResizeEvent*);
    using QFontDialog_ContextMenuEvent_Callback = void (*)(QFontDialog*, QContextMenuEvent*);
    using QFontDialog_DevType_Callback = int (*)();
    using QFontDialog_HeightForWidth_Callback = int (*)(const QFontDialog*, int);
    using QFontDialog_HasHeightForWidth_Callback = bool (*)();
    using QFontDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using QFontDialog_Event_Callback = bool (*)(QFontDialog*, QEvent*);
    using QFontDialog_MousePressEvent_Callback = void (*)(QFontDialog*, QMouseEvent*);
    using QFontDialog_MouseReleaseEvent_Callback = void (*)(QFontDialog*, QMouseEvent*);
    using QFontDialog_MouseDoubleClickEvent_Callback = void (*)(QFontDialog*, QMouseEvent*);
    using QFontDialog_MouseMoveEvent_Callback = void (*)(QFontDialog*, QMouseEvent*);
    using QFontDialog_WheelEvent_Callback = void (*)(QFontDialog*, QWheelEvent*);
    using QFontDialog_KeyReleaseEvent_Callback = void (*)(QFontDialog*, QKeyEvent*);
    using QFontDialog_FocusInEvent_Callback = void (*)(QFontDialog*, QFocusEvent*);
    using QFontDialog_FocusOutEvent_Callback = void (*)(QFontDialog*, QFocusEvent*);
    using QFontDialog_EnterEvent_Callback = void (*)(QFontDialog*, QEnterEvent*);
    using QFontDialog_LeaveEvent_Callback = void (*)(QFontDialog*, QEvent*);
    using QFontDialog_PaintEvent_Callback = void (*)(QFontDialog*, QPaintEvent*);
    using QFontDialog_MoveEvent_Callback = void (*)(QFontDialog*, QMoveEvent*);
    using QFontDialog_TabletEvent_Callback = void (*)(QFontDialog*, QTabletEvent*);
    using QFontDialog_ActionEvent_Callback = void (*)(QFontDialog*, QActionEvent*);
    using QFontDialog_DragEnterEvent_Callback = void (*)(QFontDialog*, QDragEnterEvent*);
    using QFontDialog_DragMoveEvent_Callback = void (*)(QFontDialog*, QDragMoveEvent*);
    using QFontDialog_DragLeaveEvent_Callback = void (*)(QFontDialog*, QDragLeaveEvent*);
    using QFontDialog_DropEvent_Callback = void (*)(QFontDialog*, QDropEvent*);
    using QFontDialog_HideEvent_Callback = void (*)(QFontDialog*, QHideEvent*);
    using QFontDialog_NativeEvent_Callback = bool (*)(QFontDialog*, libqt_string, void*, intptr_t*);
    using QFontDialog_Metric_Callback = int (*)(const QFontDialog*, int);
    using QFontDialog_InitPainter_Callback = void (*)(const QFontDialog*, QPainter*);
    using QFontDialog_Redirected_Callback = QPaintDevice* (*)(const QFontDialog*, QPoint*);
    using QFontDialog_SharedPainter_Callback = QPainter* (*)();
    using QFontDialog_InputMethodEvent_Callback = void (*)(QFontDialog*, QInputMethodEvent*);
    using QFontDialog_InputMethodQuery_Callback = QVariant* (*)(const QFontDialog*, int);
    using QFontDialog_FocusNextPrevChild_Callback = bool (*)(QFontDialog*, bool);
    using QFontDialog_TimerEvent_Callback = void (*)(QFontDialog*, QTimerEvent*);
    using QFontDialog_ChildEvent_Callback = void (*)(QFontDialog*, QChildEvent*);
    using QFontDialog_CustomEvent_Callback = void (*)(QFontDialog*, QEvent*);
    using QFontDialog_ConnectNotify_Callback = void (*)(QFontDialog*, QMetaMethod*);
    using QFontDialog_DisconnectNotify_Callback = void (*)(QFontDialog*, QMetaMethod*);
    using QFontDialog_AdjustPosition_Callback = void (*)(QFontDialog*, QWidget*);
    using QFontDialog_UpdateMicroFocus_Callback = void (*)();
    using QFontDialog_Create_Callback = void (*)();
    using QFontDialog_Destroy_Callback = void (*)();
    using QFontDialog_FocusNextChild_Callback = bool (*)();
    using QFontDialog_FocusPreviousChild_Callback = bool (*)();
    using QFontDialog_Sender_Callback = QObject* (*)();
    using QFontDialog_SenderSignalIndex_Callback = int (*)();
    using QFontDialog_Receivers_Callback = int (*)(const QFontDialog*, const char*);
    using QFontDialog_IsSignalConnected_Callback = bool (*)(const QFontDialog*, QMetaMethod*);
    using QFontDialog_GetDecodedMetricF_Callback = double (*)(const QFontDialog*, int, int);

  protected:
    // Instance callback storage
    QFontDialog_MetaObject_Callback qfontdialog_metaobject_callback = nullptr;
    QFontDialog_Metacast_Callback qfontdialog_metacast_callback = nullptr;
    QFontDialog_Metacall_Callback qfontdialog_metacall_callback = nullptr;
    QFontDialog_SetVisible_Callback qfontdialog_setvisible_callback = nullptr;
    QFontDialog_ChangeEvent_Callback qfontdialog_changeevent_callback = nullptr;
    QFontDialog_Done_Callback qfontdialog_done_callback = nullptr;
    QFontDialog_EventFilter_Callback qfontdialog_eventfilter_callback = nullptr;
    QFontDialog_SizeHint_Callback qfontdialog_sizehint_callback = nullptr;
    QFontDialog_MinimumSizeHint_Callback qfontdialog_minimumsizehint_callback = nullptr;
    QFontDialog_Open_Callback qfontdialog_open_callback = nullptr;
    QFontDialog_Exec_Callback qfontdialog_exec_callback = nullptr;
    QFontDialog_Accept_Callback qfontdialog_accept_callback = nullptr;
    QFontDialog_Reject_Callback qfontdialog_reject_callback = nullptr;
    QFontDialog_KeyPressEvent_Callback qfontdialog_keypressevent_callback = nullptr;
    QFontDialog_CloseEvent_Callback qfontdialog_closeevent_callback = nullptr;
    QFontDialog_ShowEvent_Callback qfontdialog_showevent_callback = nullptr;
    QFontDialog_ResizeEvent_Callback qfontdialog_resizeevent_callback = nullptr;
    QFontDialog_ContextMenuEvent_Callback qfontdialog_contextmenuevent_callback = nullptr;
    QFontDialog_DevType_Callback qfontdialog_devtype_callback = nullptr;
    QFontDialog_HeightForWidth_Callback qfontdialog_heightforwidth_callback = nullptr;
    QFontDialog_HasHeightForWidth_Callback qfontdialog_hasheightforwidth_callback = nullptr;
    QFontDialog_PaintEngine_Callback qfontdialog_paintengine_callback = nullptr;
    QFontDialog_Event_Callback qfontdialog_event_callback = nullptr;
    QFontDialog_MousePressEvent_Callback qfontdialog_mousepressevent_callback = nullptr;
    QFontDialog_MouseReleaseEvent_Callback qfontdialog_mousereleaseevent_callback = nullptr;
    QFontDialog_MouseDoubleClickEvent_Callback qfontdialog_mousedoubleclickevent_callback = nullptr;
    QFontDialog_MouseMoveEvent_Callback qfontdialog_mousemoveevent_callback = nullptr;
    QFontDialog_WheelEvent_Callback qfontdialog_wheelevent_callback = nullptr;
    QFontDialog_KeyReleaseEvent_Callback qfontdialog_keyreleaseevent_callback = nullptr;
    QFontDialog_FocusInEvent_Callback qfontdialog_focusinevent_callback = nullptr;
    QFontDialog_FocusOutEvent_Callback qfontdialog_focusoutevent_callback = nullptr;
    QFontDialog_EnterEvent_Callback qfontdialog_enterevent_callback = nullptr;
    QFontDialog_LeaveEvent_Callback qfontdialog_leaveevent_callback = nullptr;
    QFontDialog_PaintEvent_Callback qfontdialog_paintevent_callback = nullptr;
    QFontDialog_MoveEvent_Callback qfontdialog_moveevent_callback = nullptr;
    QFontDialog_TabletEvent_Callback qfontdialog_tabletevent_callback = nullptr;
    QFontDialog_ActionEvent_Callback qfontdialog_actionevent_callback = nullptr;
    QFontDialog_DragEnterEvent_Callback qfontdialog_dragenterevent_callback = nullptr;
    QFontDialog_DragMoveEvent_Callback qfontdialog_dragmoveevent_callback = nullptr;
    QFontDialog_DragLeaveEvent_Callback qfontdialog_dragleaveevent_callback = nullptr;
    QFontDialog_DropEvent_Callback qfontdialog_dropevent_callback = nullptr;
    QFontDialog_HideEvent_Callback qfontdialog_hideevent_callback = nullptr;
    QFontDialog_NativeEvent_Callback qfontdialog_nativeevent_callback = nullptr;
    QFontDialog_Metric_Callback qfontdialog_metric_callback = nullptr;
    QFontDialog_InitPainter_Callback qfontdialog_initpainter_callback = nullptr;
    QFontDialog_Redirected_Callback qfontdialog_redirected_callback = nullptr;
    QFontDialog_SharedPainter_Callback qfontdialog_sharedpainter_callback = nullptr;
    QFontDialog_InputMethodEvent_Callback qfontdialog_inputmethodevent_callback = nullptr;
    QFontDialog_InputMethodQuery_Callback qfontdialog_inputmethodquery_callback = nullptr;
    QFontDialog_FocusNextPrevChild_Callback qfontdialog_focusnextprevchild_callback = nullptr;
    QFontDialog_TimerEvent_Callback qfontdialog_timerevent_callback = nullptr;
    QFontDialog_ChildEvent_Callback qfontdialog_childevent_callback = nullptr;
    QFontDialog_CustomEvent_Callback qfontdialog_customevent_callback = nullptr;
    QFontDialog_ConnectNotify_Callback qfontdialog_connectnotify_callback = nullptr;
    QFontDialog_DisconnectNotify_Callback qfontdialog_disconnectnotify_callback = nullptr;
    QFontDialog_AdjustPosition_Callback qfontdialog_adjustposition_callback = nullptr;
    QFontDialog_UpdateMicroFocus_Callback qfontdialog_updatemicrofocus_callback = nullptr;
    QFontDialog_Create_Callback qfontdialog_create_callback = nullptr;
    QFontDialog_Destroy_Callback qfontdialog_destroy_callback = nullptr;
    QFontDialog_FocusNextChild_Callback qfontdialog_focusnextchild_callback = nullptr;
    QFontDialog_FocusPreviousChild_Callback qfontdialog_focuspreviouschild_callback = nullptr;
    QFontDialog_Sender_Callback qfontdialog_sender_callback = nullptr;
    QFontDialog_SenderSignalIndex_Callback qfontdialog_sendersignalindex_callback = nullptr;
    QFontDialog_Receivers_Callback qfontdialog_receivers_callback = nullptr;
    QFontDialog_IsSignalConnected_Callback qfontdialog_issignalconnected_callback = nullptr;
    QFontDialog_GetDecodedMetricF_Callback qfontdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qfontdialog_metaobject_isbase = false;
    mutable bool qfontdialog_metacast_isbase = false;
    mutable bool qfontdialog_metacall_isbase = false;
    mutable bool qfontdialog_setvisible_isbase = false;
    mutable bool qfontdialog_changeevent_isbase = false;
    mutable bool qfontdialog_done_isbase = false;
    mutable bool qfontdialog_eventfilter_isbase = false;
    mutable bool qfontdialog_sizehint_isbase = false;
    mutable bool qfontdialog_minimumsizehint_isbase = false;
    mutable bool qfontdialog_open_isbase = false;
    mutable bool qfontdialog_exec_isbase = false;
    mutable bool qfontdialog_accept_isbase = false;
    mutable bool qfontdialog_reject_isbase = false;
    mutable bool qfontdialog_keypressevent_isbase = false;
    mutable bool qfontdialog_closeevent_isbase = false;
    mutable bool qfontdialog_showevent_isbase = false;
    mutable bool qfontdialog_resizeevent_isbase = false;
    mutable bool qfontdialog_contextmenuevent_isbase = false;
    mutable bool qfontdialog_devtype_isbase = false;
    mutable bool qfontdialog_heightforwidth_isbase = false;
    mutable bool qfontdialog_hasheightforwidth_isbase = false;
    mutable bool qfontdialog_paintengine_isbase = false;
    mutable bool qfontdialog_event_isbase = false;
    mutable bool qfontdialog_mousepressevent_isbase = false;
    mutable bool qfontdialog_mousereleaseevent_isbase = false;
    mutable bool qfontdialog_mousedoubleclickevent_isbase = false;
    mutable bool qfontdialog_mousemoveevent_isbase = false;
    mutable bool qfontdialog_wheelevent_isbase = false;
    mutable bool qfontdialog_keyreleaseevent_isbase = false;
    mutable bool qfontdialog_focusinevent_isbase = false;
    mutable bool qfontdialog_focusoutevent_isbase = false;
    mutable bool qfontdialog_enterevent_isbase = false;
    mutable bool qfontdialog_leaveevent_isbase = false;
    mutable bool qfontdialog_paintevent_isbase = false;
    mutable bool qfontdialog_moveevent_isbase = false;
    mutable bool qfontdialog_tabletevent_isbase = false;
    mutable bool qfontdialog_actionevent_isbase = false;
    mutable bool qfontdialog_dragenterevent_isbase = false;
    mutable bool qfontdialog_dragmoveevent_isbase = false;
    mutable bool qfontdialog_dragleaveevent_isbase = false;
    mutable bool qfontdialog_dropevent_isbase = false;
    mutable bool qfontdialog_hideevent_isbase = false;
    mutable bool qfontdialog_nativeevent_isbase = false;
    mutable bool qfontdialog_metric_isbase = false;
    mutable bool qfontdialog_initpainter_isbase = false;
    mutable bool qfontdialog_redirected_isbase = false;
    mutable bool qfontdialog_sharedpainter_isbase = false;
    mutable bool qfontdialog_inputmethodevent_isbase = false;
    mutable bool qfontdialog_inputmethodquery_isbase = false;
    mutable bool qfontdialog_focusnextprevchild_isbase = false;
    mutable bool qfontdialog_timerevent_isbase = false;
    mutable bool qfontdialog_childevent_isbase = false;
    mutable bool qfontdialog_customevent_isbase = false;
    mutable bool qfontdialog_connectnotify_isbase = false;
    mutable bool qfontdialog_disconnectnotify_isbase = false;
    mutable bool qfontdialog_adjustposition_isbase = false;
    mutable bool qfontdialog_updatemicrofocus_isbase = false;
    mutable bool qfontdialog_create_isbase = false;
    mutable bool qfontdialog_destroy_isbase = false;
    mutable bool qfontdialog_focusnextchild_isbase = false;
    mutable bool qfontdialog_focuspreviouschild_isbase = false;
    mutable bool qfontdialog_sender_isbase = false;
    mutable bool qfontdialog_sendersignalindex_isbase = false;
    mutable bool qfontdialog_receivers_isbase = false;
    mutable bool qfontdialog_issignalconnected_isbase = false;
    mutable bool qfontdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualQFontDialog(QWidget* parent) : QFontDialog(parent) {};
    VirtualQFontDialog() : QFontDialog() {};
    VirtualQFontDialog(const QFont& initial) : QFontDialog(initial) {};
    VirtualQFontDialog(const QFont& initial, QWidget* parent) : QFontDialog(initial, parent) {};

    // Callback setters
    inline void setQFontDialog_MetaObject_Callback(QFontDialog_MetaObject_Callback cb) { qfontdialog_metaobject_callback = cb; }
    inline void setQFontDialog_Metacast_Callback(QFontDialog_Metacast_Callback cb) { qfontdialog_metacast_callback = cb; }
    inline void setQFontDialog_Metacall_Callback(QFontDialog_Metacall_Callback cb) { qfontdialog_metacall_callback = cb; }
    inline void setQFontDialog_SetVisible_Callback(QFontDialog_SetVisible_Callback cb) { qfontdialog_setvisible_callback = cb; }
    inline void setQFontDialog_ChangeEvent_Callback(QFontDialog_ChangeEvent_Callback cb) { qfontdialog_changeevent_callback = cb; }
    inline void setQFontDialog_Done_Callback(QFontDialog_Done_Callback cb) { qfontdialog_done_callback = cb; }
    inline void setQFontDialog_EventFilter_Callback(QFontDialog_EventFilter_Callback cb) { qfontdialog_eventfilter_callback = cb; }
    inline void setQFontDialog_SizeHint_Callback(QFontDialog_SizeHint_Callback cb) { qfontdialog_sizehint_callback = cb; }
    inline void setQFontDialog_MinimumSizeHint_Callback(QFontDialog_MinimumSizeHint_Callback cb) { qfontdialog_minimumsizehint_callback = cb; }
    inline void setQFontDialog_Open_Callback(QFontDialog_Open_Callback cb) { qfontdialog_open_callback = cb; }
    inline void setQFontDialog_Exec_Callback(QFontDialog_Exec_Callback cb) { qfontdialog_exec_callback = cb; }
    inline void setQFontDialog_Accept_Callback(QFontDialog_Accept_Callback cb) { qfontdialog_accept_callback = cb; }
    inline void setQFontDialog_Reject_Callback(QFontDialog_Reject_Callback cb) { qfontdialog_reject_callback = cb; }
    inline void setQFontDialog_KeyPressEvent_Callback(QFontDialog_KeyPressEvent_Callback cb) { qfontdialog_keypressevent_callback = cb; }
    inline void setQFontDialog_CloseEvent_Callback(QFontDialog_CloseEvent_Callback cb) { qfontdialog_closeevent_callback = cb; }
    inline void setQFontDialog_ShowEvent_Callback(QFontDialog_ShowEvent_Callback cb) { qfontdialog_showevent_callback = cb; }
    inline void setQFontDialog_ResizeEvent_Callback(QFontDialog_ResizeEvent_Callback cb) { qfontdialog_resizeevent_callback = cb; }
    inline void setQFontDialog_ContextMenuEvent_Callback(QFontDialog_ContextMenuEvent_Callback cb) { qfontdialog_contextmenuevent_callback = cb; }
    inline void setQFontDialog_DevType_Callback(QFontDialog_DevType_Callback cb) { qfontdialog_devtype_callback = cb; }
    inline void setQFontDialog_HeightForWidth_Callback(QFontDialog_HeightForWidth_Callback cb) { qfontdialog_heightforwidth_callback = cb; }
    inline void setQFontDialog_HasHeightForWidth_Callback(QFontDialog_HasHeightForWidth_Callback cb) { qfontdialog_hasheightforwidth_callback = cb; }
    inline void setQFontDialog_PaintEngine_Callback(QFontDialog_PaintEngine_Callback cb) { qfontdialog_paintengine_callback = cb; }
    inline void setQFontDialog_Event_Callback(QFontDialog_Event_Callback cb) { qfontdialog_event_callback = cb; }
    inline void setQFontDialog_MousePressEvent_Callback(QFontDialog_MousePressEvent_Callback cb) { qfontdialog_mousepressevent_callback = cb; }
    inline void setQFontDialog_MouseReleaseEvent_Callback(QFontDialog_MouseReleaseEvent_Callback cb) { qfontdialog_mousereleaseevent_callback = cb; }
    inline void setQFontDialog_MouseDoubleClickEvent_Callback(QFontDialog_MouseDoubleClickEvent_Callback cb) { qfontdialog_mousedoubleclickevent_callback = cb; }
    inline void setQFontDialog_MouseMoveEvent_Callback(QFontDialog_MouseMoveEvent_Callback cb) { qfontdialog_mousemoveevent_callback = cb; }
    inline void setQFontDialog_WheelEvent_Callback(QFontDialog_WheelEvent_Callback cb) { qfontdialog_wheelevent_callback = cb; }
    inline void setQFontDialog_KeyReleaseEvent_Callback(QFontDialog_KeyReleaseEvent_Callback cb) { qfontdialog_keyreleaseevent_callback = cb; }
    inline void setQFontDialog_FocusInEvent_Callback(QFontDialog_FocusInEvent_Callback cb) { qfontdialog_focusinevent_callback = cb; }
    inline void setQFontDialog_FocusOutEvent_Callback(QFontDialog_FocusOutEvent_Callback cb) { qfontdialog_focusoutevent_callback = cb; }
    inline void setQFontDialog_EnterEvent_Callback(QFontDialog_EnterEvent_Callback cb) { qfontdialog_enterevent_callback = cb; }
    inline void setQFontDialog_LeaveEvent_Callback(QFontDialog_LeaveEvent_Callback cb) { qfontdialog_leaveevent_callback = cb; }
    inline void setQFontDialog_PaintEvent_Callback(QFontDialog_PaintEvent_Callback cb) { qfontdialog_paintevent_callback = cb; }
    inline void setQFontDialog_MoveEvent_Callback(QFontDialog_MoveEvent_Callback cb) { qfontdialog_moveevent_callback = cb; }
    inline void setQFontDialog_TabletEvent_Callback(QFontDialog_TabletEvent_Callback cb) { qfontdialog_tabletevent_callback = cb; }
    inline void setQFontDialog_ActionEvent_Callback(QFontDialog_ActionEvent_Callback cb) { qfontdialog_actionevent_callback = cb; }
    inline void setQFontDialog_DragEnterEvent_Callback(QFontDialog_DragEnterEvent_Callback cb) { qfontdialog_dragenterevent_callback = cb; }
    inline void setQFontDialog_DragMoveEvent_Callback(QFontDialog_DragMoveEvent_Callback cb) { qfontdialog_dragmoveevent_callback = cb; }
    inline void setQFontDialog_DragLeaveEvent_Callback(QFontDialog_DragLeaveEvent_Callback cb) { qfontdialog_dragleaveevent_callback = cb; }
    inline void setQFontDialog_DropEvent_Callback(QFontDialog_DropEvent_Callback cb) { qfontdialog_dropevent_callback = cb; }
    inline void setQFontDialog_HideEvent_Callback(QFontDialog_HideEvent_Callback cb) { qfontdialog_hideevent_callback = cb; }
    inline void setQFontDialog_NativeEvent_Callback(QFontDialog_NativeEvent_Callback cb) { qfontdialog_nativeevent_callback = cb; }
    inline void setQFontDialog_Metric_Callback(QFontDialog_Metric_Callback cb) { qfontdialog_metric_callback = cb; }
    inline void setQFontDialog_InitPainter_Callback(QFontDialog_InitPainter_Callback cb) { qfontdialog_initpainter_callback = cb; }
    inline void setQFontDialog_Redirected_Callback(QFontDialog_Redirected_Callback cb) { qfontdialog_redirected_callback = cb; }
    inline void setQFontDialog_SharedPainter_Callback(QFontDialog_SharedPainter_Callback cb) { qfontdialog_sharedpainter_callback = cb; }
    inline void setQFontDialog_InputMethodEvent_Callback(QFontDialog_InputMethodEvent_Callback cb) { qfontdialog_inputmethodevent_callback = cb; }
    inline void setQFontDialog_InputMethodQuery_Callback(QFontDialog_InputMethodQuery_Callback cb) { qfontdialog_inputmethodquery_callback = cb; }
    inline void setQFontDialog_FocusNextPrevChild_Callback(QFontDialog_FocusNextPrevChild_Callback cb) { qfontdialog_focusnextprevchild_callback = cb; }
    inline void setQFontDialog_TimerEvent_Callback(QFontDialog_TimerEvent_Callback cb) { qfontdialog_timerevent_callback = cb; }
    inline void setQFontDialog_ChildEvent_Callback(QFontDialog_ChildEvent_Callback cb) { qfontdialog_childevent_callback = cb; }
    inline void setQFontDialog_CustomEvent_Callback(QFontDialog_CustomEvent_Callback cb) { qfontdialog_customevent_callback = cb; }
    inline void setQFontDialog_ConnectNotify_Callback(QFontDialog_ConnectNotify_Callback cb) { qfontdialog_connectnotify_callback = cb; }
    inline void setQFontDialog_DisconnectNotify_Callback(QFontDialog_DisconnectNotify_Callback cb) { qfontdialog_disconnectnotify_callback = cb; }
    inline void setQFontDialog_AdjustPosition_Callback(QFontDialog_AdjustPosition_Callback cb) { qfontdialog_adjustposition_callback = cb; }
    inline void setQFontDialog_UpdateMicroFocus_Callback(QFontDialog_UpdateMicroFocus_Callback cb) { qfontdialog_updatemicrofocus_callback = cb; }
    inline void setQFontDialog_Create_Callback(QFontDialog_Create_Callback cb) { qfontdialog_create_callback = cb; }
    inline void setQFontDialog_Destroy_Callback(QFontDialog_Destroy_Callback cb) { qfontdialog_destroy_callback = cb; }
    inline void setQFontDialog_FocusNextChild_Callback(QFontDialog_FocusNextChild_Callback cb) { qfontdialog_focusnextchild_callback = cb; }
    inline void setQFontDialog_FocusPreviousChild_Callback(QFontDialog_FocusPreviousChild_Callback cb) { qfontdialog_focuspreviouschild_callback = cb; }
    inline void setQFontDialog_Sender_Callback(QFontDialog_Sender_Callback cb) { qfontdialog_sender_callback = cb; }
    inline void setQFontDialog_SenderSignalIndex_Callback(QFontDialog_SenderSignalIndex_Callback cb) { qfontdialog_sendersignalindex_callback = cb; }
    inline void setQFontDialog_Receivers_Callback(QFontDialog_Receivers_Callback cb) { qfontdialog_receivers_callback = cb; }
    inline void setQFontDialog_IsSignalConnected_Callback(QFontDialog_IsSignalConnected_Callback cb) { qfontdialog_issignalconnected_callback = cb; }
    inline void setQFontDialog_GetDecodedMetricF_Callback(QFontDialog_GetDecodedMetricF_Callback cb) { qfontdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQFontDialog_MetaObject_IsBase(bool value) const { qfontdialog_metaobject_isbase = value; }
    inline void setQFontDialog_Metacast_IsBase(bool value) const { qfontdialog_metacast_isbase = value; }
    inline void setQFontDialog_Metacall_IsBase(bool value) const { qfontdialog_metacall_isbase = value; }
    inline void setQFontDialog_SetVisible_IsBase(bool value) const { qfontdialog_setvisible_isbase = value; }
    inline void setQFontDialog_ChangeEvent_IsBase(bool value) const { qfontdialog_changeevent_isbase = value; }
    inline void setQFontDialog_Done_IsBase(bool value) const { qfontdialog_done_isbase = value; }
    inline void setQFontDialog_EventFilter_IsBase(bool value) const { qfontdialog_eventfilter_isbase = value; }
    inline void setQFontDialog_SizeHint_IsBase(bool value) const { qfontdialog_sizehint_isbase = value; }
    inline void setQFontDialog_MinimumSizeHint_IsBase(bool value) const { qfontdialog_minimumsizehint_isbase = value; }
    inline void setQFontDialog_Open_IsBase(bool value) const { qfontdialog_open_isbase = value; }
    inline void setQFontDialog_Exec_IsBase(bool value) const { qfontdialog_exec_isbase = value; }
    inline void setQFontDialog_Accept_IsBase(bool value) const { qfontdialog_accept_isbase = value; }
    inline void setQFontDialog_Reject_IsBase(bool value) const { qfontdialog_reject_isbase = value; }
    inline void setQFontDialog_KeyPressEvent_IsBase(bool value) const { qfontdialog_keypressevent_isbase = value; }
    inline void setQFontDialog_CloseEvent_IsBase(bool value) const { qfontdialog_closeevent_isbase = value; }
    inline void setQFontDialog_ShowEvent_IsBase(bool value) const { qfontdialog_showevent_isbase = value; }
    inline void setQFontDialog_ResizeEvent_IsBase(bool value) const { qfontdialog_resizeevent_isbase = value; }
    inline void setQFontDialog_ContextMenuEvent_IsBase(bool value) const { qfontdialog_contextmenuevent_isbase = value; }
    inline void setQFontDialog_DevType_IsBase(bool value) const { qfontdialog_devtype_isbase = value; }
    inline void setQFontDialog_HeightForWidth_IsBase(bool value) const { qfontdialog_heightforwidth_isbase = value; }
    inline void setQFontDialog_HasHeightForWidth_IsBase(bool value) const { qfontdialog_hasheightforwidth_isbase = value; }
    inline void setQFontDialog_PaintEngine_IsBase(bool value) const { qfontdialog_paintengine_isbase = value; }
    inline void setQFontDialog_Event_IsBase(bool value) const { qfontdialog_event_isbase = value; }
    inline void setQFontDialog_MousePressEvent_IsBase(bool value) const { qfontdialog_mousepressevent_isbase = value; }
    inline void setQFontDialog_MouseReleaseEvent_IsBase(bool value) const { qfontdialog_mousereleaseevent_isbase = value; }
    inline void setQFontDialog_MouseDoubleClickEvent_IsBase(bool value) const { qfontdialog_mousedoubleclickevent_isbase = value; }
    inline void setQFontDialog_MouseMoveEvent_IsBase(bool value) const { qfontdialog_mousemoveevent_isbase = value; }
    inline void setQFontDialog_WheelEvent_IsBase(bool value) const { qfontdialog_wheelevent_isbase = value; }
    inline void setQFontDialog_KeyReleaseEvent_IsBase(bool value) const { qfontdialog_keyreleaseevent_isbase = value; }
    inline void setQFontDialog_FocusInEvent_IsBase(bool value) const { qfontdialog_focusinevent_isbase = value; }
    inline void setQFontDialog_FocusOutEvent_IsBase(bool value) const { qfontdialog_focusoutevent_isbase = value; }
    inline void setQFontDialog_EnterEvent_IsBase(bool value) const { qfontdialog_enterevent_isbase = value; }
    inline void setQFontDialog_LeaveEvent_IsBase(bool value) const { qfontdialog_leaveevent_isbase = value; }
    inline void setQFontDialog_PaintEvent_IsBase(bool value) const { qfontdialog_paintevent_isbase = value; }
    inline void setQFontDialog_MoveEvent_IsBase(bool value) const { qfontdialog_moveevent_isbase = value; }
    inline void setQFontDialog_TabletEvent_IsBase(bool value) const { qfontdialog_tabletevent_isbase = value; }
    inline void setQFontDialog_ActionEvent_IsBase(bool value) const { qfontdialog_actionevent_isbase = value; }
    inline void setQFontDialog_DragEnterEvent_IsBase(bool value) const { qfontdialog_dragenterevent_isbase = value; }
    inline void setQFontDialog_DragMoveEvent_IsBase(bool value) const { qfontdialog_dragmoveevent_isbase = value; }
    inline void setQFontDialog_DragLeaveEvent_IsBase(bool value) const { qfontdialog_dragleaveevent_isbase = value; }
    inline void setQFontDialog_DropEvent_IsBase(bool value) const { qfontdialog_dropevent_isbase = value; }
    inline void setQFontDialog_HideEvent_IsBase(bool value) const { qfontdialog_hideevent_isbase = value; }
    inline void setQFontDialog_NativeEvent_IsBase(bool value) const { qfontdialog_nativeevent_isbase = value; }
    inline void setQFontDialog_Metric_IsBase(bool value) const { qfontdialog_metric_isbase = value; }
    inline void setQFontDialog_InitPainter_IsBase(bool value) const { qfontdialog_initpainter_isbase = value; }
    inline void setQFontDialog_Redirected_IsBase(bool value) const { qfontdialog_redirected_isbase = value; }
    inline void setQFontDialog_SharedPainter_IsBase(bool value) const { qfontdialog_sharedpainter_isbase = value; }
    inline void setQFontDialog_InputMethodEvent_IsBase(bool value) const { qfontdialog_inputmethodevent_isbase = value; }
    inline void setQFontDialog_InputMethodQuery_IsBase(bool value) const { qfontdialog_inputmethodquery_isbase = value; }
    inline void setQFontDialog_FocusNextPrevChild_IsBase(bool value) const { qfontdialog_focusnextprevchild_isbase = value; }
    inline void setQFontDialog_TimerEvent_IsBase(bool value) const { qfontdialog_timerevent_isbase = value; }
    inline void setQFontDialog_ChildEvent_IsBase(bool value) const { qfontdialog_childevent_isbase = value; }
    inline void setQFontDialog_CustomEvent_IsBase(bool value) const { qfontdialog_customevent_isbase = value; }
    inline void setQFontDialog_ConnectNotify_IsBase(bool value) const { qfontdialog_connectnotify_isbase = value; }
    inline void setQFontDialog_DisconnectNotify_IsBase(bool value) const { qfontdialog_disconnectnotify_isbase = value; }
    inline void setQFontDialog_AdjustPosition_IsBase(bool value) const { qfontdialog_adjustposition_isbase = value; }
    inline void setQFontDialog_UpdateMicroFocus_IsBase(bool value) const { qfontdialog_updatemicrofocus_isbase = value; }
    inline void setQFontDialog_Create_IsBase(bool value) const { qfontdialog_create_isbase = value; }
    inline void setQFontDialog_Destroy_IsBase(bool value) const { qfontdialog_destroy_isbase = value; }
    inline void setQFontDialog_FocusNextChild_IsBase(bool value) const { qfontdialog_focusnextchild_isbase = value; }
    inline void setQFontDialog_FocusPreviousChild_IsBase(bool value) const { qfontdialog_focuspreviouschild_isbase = value; }
    inline void setQFontDialog_Sender_IsBase(bool value) const { qfontdialog_sender_isbase = value; }
    inline void setQFontDialog_SenderSignalIndex_IsBase(bool value) const { qfontdialog_sendersignalindex_isbase = value; }
    inline void setQFontDialog_Receivers_IsBase(bool value) const { qfontdialog_receivers_isbase = value; }
    inline void setQFontDialog_IsSignalConnected_IsBase(bool value) const { qfontdialog_issignalconnected_isbase = value; }
    inline void setQFontDialog_GetDecodedMetricF_IsBase(bool value) const { qfontdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qfontdialog_metaobject_isbase) {
            qfontdialog_metaobject_isbase = false;
            return QFontDialog::metaObject();
        }
        auto metaobject_cb = qfontdialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QFontDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qfontdialog_metacast_isbase) {
            qfontdialog_metacast_isbase = false;
            return QFontDialog::qt_metacast(param1);
        }
        auto metacast_cb = qfontdialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QFontDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfontdialog_metacall_isbase) {
            qfontdialog_metacall_isbase = false;
            return QFontDialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qfontdialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QFontDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qfontdialog_setvisible_isbase) {
            qfontdialog_setvisible_isbase = false;
            QFontDialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = qfontdialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QFontDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qfontdialog_changeevent_isbase) {
            qfontdialog_changeevent_isbase = false;
            QFontDialog::changeEvent(event);
            return;
        }
        auto changeevent_cb = qfontdialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = event;

            changeevent_cb(this, cbval1);
            return;
        }
        QFontDialog::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qfontdialog_done_isbase) {
            qfontdialog_done_isbase = false;
            QFontDialog::done(result);
            return;
        }
        auto done_cb = qfontdialog_done_callback;
        if (done_cb) {
            int cbval1 = result;

            done_cb(this, cbval1);
            return;
        }
        QFontDialog::done(result);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qfontdialog_eventfilter_isbase) {
            qfontdialog_eventfilter_isbase = false;
            return QFontDialog::eventFilter(object, event);
        }
        auto eventfilter_cb = qfontdialog_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QFontDialog::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qfontdialog_sizehint_isbase) {
            qfontdialog_sizehint_isbase = false;
            return QFontDialog::sizeHint();
        }
        auto sizehint_cb = qfontdialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QFontDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qfontdialog_minimumsizehint_isbase) {
            qfontdialog_minimumsizehint_isbase = false;
            return QFontDialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = qfontdialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QFontDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qfontdialog_open_isbase) {
            qfontdialog_open_isbase = false;
            QFontDialog::open();
            return;
        }
        auto open_cb = qfontdialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        QFontDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qfontdialog_exec_isbase) {
            qfontdialog_exec_isbase = false;
            return QFontDialog::exec();
        }
        auto exec_cb = qfontdialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return QFontDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qfontdialog_accept_isbase) {
            qfontdialog_accept_isbase = false;
            QFontDialog::accept();
            return;
        }
        auto accept_cb = qfontdialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        QFontDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qfontdialog_reject_isbase) {
            qfontdialog_reject_isbase = false;
            QFontDialog::reject();
            return;
        }
        auto reject_cb = qfontdialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        QFontDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qfontdialog_keypressevent_isbase) {
            qfontdialog_keypressevent_isbase = false;
            QFontDialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = qfontdialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        QFontDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qfontdialog_closeevent_isbase) {
            qfontdialog_closeevent_isbase = false;
            QFontDialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = qfontdialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        QFontDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qfontdialog_showevent_isbase) {
            qfontdialog_showevent_isbase = false;
            QFontDialog::showEvent(param1);
            return;
        }
        auto showevent_cb = qfontdialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        QFontDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qfontdialog_resizeevent_isbase) {
            qfontdialog_resizeevent_isbase = false;
            QFontDialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = qfontdialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        QFontDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qfontdialog_contextmenuevent_isbase) {
            qfontdialog_contextmenuevent_isbase = false;
            QFontDialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = qfontdialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QFontDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qfontdialog_devtype_isbase) {
            qfontdialog_devtype_isbase = false;
            return QFontDialog::devType();
        }
        auto devtype_cb = qfontdialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QFontDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qfontdialog_heightforwidth_isbase) {
            qfontdialog_heightforwidth_isbase = false;
            return QFontDialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = qfontdialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFontDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qfontdialog_hasheightforwidth_isbase) {
            qfontdialog_hasheightforwidth_isbase = false;
            return QFontDialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qfontdialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QFontDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qfontdialog_paintengine_isbase) {
            qfontdialog_paintengine_isbase = false;
            return QFontDialog::paintEngine();
        }
        auto paintengine_cb = qfontdialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QFontDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qfontdialog_event_isbase) {
            qfontdialog_event_isbase = false;
            return QFontDialog::event(event);
        }
        auto event_cb = qfontdialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QFontDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qfontdialog_mousepressevent_isbase) {
            qfontdialog_mousepressevent_isbase = false;
            QFontDialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qfontdialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QFontDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qfontdialog_mousereleaseevent_isbase) {
            qfontdialog_mousereleaseevent_isbase = false;
            QFontDialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qfontdialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QFontDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qfontdialog_mousedoubleclickevent_isbase) {
            qfontdialog_mousedoubleclickevent_isbase = false;
            QFontDialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qfontdialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QFontDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qfontdialog_mousemoveevent_isbase) {
            qfontdialog_mousemoveevent_isbase = false;
            QFontDialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qfontdialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QFontDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qfontdialog_wheelevent_isbase) {
            qfontdialog_wheelevent_isbase = false;
            QFontDialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qfontdialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QFontDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qfontdialog_keyreleaseevent_isbase) {
            qfontdialog_keyreleaseevent_isbase = false;
            QFontDialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qfontdialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QFontDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qfontdialog_focusinevent_isbase) {
            qfontdialog_focusinevent_isbase = false;
            QFontDialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qfontdialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QFontDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qfontdialog_focusoutevent_isbase) {
            qfontdialog_focusoutevent_isbase = false;
            QFontDialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qfontdialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QFontDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qfontdialog_enterevent_isbase) {
            qfontdialog_enterevent_isbase = false;
            QFontDialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = qfontdialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QFontDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qfontdialog_leaveevent_isbase) {
            qfontdialog_leaveevent_isbase = false;
            QFontDialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qfontdialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QFontDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qfontdialog_paintevent_isbase) {
            qfontdialog_paintevent_isbase = false;
            QFontDialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = qfontdialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        QFontDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qfontdialog_moveevent_isbase) {
            qfontdialog_moveevent_isbase = false;
            QFontDialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = qfontdialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QFontDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qfontdialog_tabletevent_isbase) {
            qfontdialog_tabletevent_isbase = false;
            QFontDialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qfontdialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QFontDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qfontdialog_actionevent_isbase) {
            qfontdialog_actionevent_isbase = false;
            QFontDialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = qfontdialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QFontDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qfontdialog_dragenterevent_isbase) {
            qfontdialog_dragenterevent_isbase = false;
            QFontDialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qfontdialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QFontDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qfontdialog_dragmoveevent_isbase) {
            qfontdialog_dragmoveevent_isbase = false;
            QFontDialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qfontdialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QFontDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qfontdialog_dragleaveevent_isbase) {
            qfontdialog_dragleaveevent_isbase = false;
            QFontDialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qfontdialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QFontDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qfontdialog_dropevent_isbase) {
            qfontdialog_dropevent_isbase = false;
            QFontDialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = qfontdialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QFontDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qfontdialog_hideevent_isbase) {
            qfontdialog_hideevent_isbase = false;
            QFontDialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = qfontdialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QFontDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qfontdialog_nativeevent_isbase) {
            qfontdialog_nativeevent_isbase = false;
            return QFontDialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qfontdialog_nativeevent_callback;
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
        return QFontDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qfontdialog_metric_isbase) {
            qfontdialog_metric_isbase = false;
            return QFontDialog::metric(param1);
        }
        auto metric_cb = qfontdialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFontDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qfontdialog_initpainter_isbase) {
            qfontdialog_initpainter_isbase = false;
            QFontDialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = qfontdialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QFontDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qfontdialog_redirected_isbase) {
            qfontdialog_redirected_isbase = false;
            return QFontDialog::redirected(offset);
        }
        auto redirected_cb = qfontdialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QFontDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qfontdialog_sharedpainter_isbase) {
            qfontdialog_sharedpainter_isbase = false;
            return QFontDialog::sharedPainter();
        }
        auto sharedpainter_cb = qfontdialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QFontDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qfontdialog_inputmethodevent_isbase) {
            qfontdialog_inputmethodevent_isbase = false;
            QFontDialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qfontdialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QFontDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qfontdialog_inputmethodquery_isbase) {
            qfontdialog_inputmethodquery_isbase = false;
            return QFontDialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qfontdialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QFontDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qfontdialog_focusnextprevchild_isbase) {
            qfontdialog_focusnextprevchild_isbase = false;
            return QFontDialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qfontdialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QFontDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfontdialog_timerevent_isbase) {
            qfontdialog_timerevent_isbase = false;
            QFontDialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = qfontdialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QFontDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfontdialog_childevent_isbase) {
            qfontdialog_childevent_isbase = false;
            QFontDialog::childEvent(event);
            return;
        }
        auto childevent_cb = qfontdialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QFontDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfontdialog_customevent_isbase) {
            qfontdialog_customevent_isbase = false;
            QFontDialog::customEvent(event);
            return;
        }
        auto customevent_cb = qfontdialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QFontDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfontdialog_connectnotify_isbase) {
            qfontdialog_connectnotify_isbase = false;
            QFontDialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qfontdialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QFontDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfontdialog_disconnectnotify_isbase) {
            qfontdialog_disconnectnotify_isbase = false;
            QFontDialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qfontdialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QFontDialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qfontdialog_adjustposition_isbase) {
            qfontdialog_adjustposition_isbase = false;
            QFontDialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = qfontdialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        QFontDialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qfontdialog_updatemicrofocus_isbase) {
            qfontdialog_updatemicrofocus_isbase = false;
            QFontDialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qfontdialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QFontDialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qfontdialog_create_isbase) {
            qfontdialog_create_isbase = false;
            QFontDialog::create();
            return;
        }
        auto create_cb = qfontdialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QFontDialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qfontdialog_destroy_isbase) {
            qfontdialog_destroy_isbase = false;
            QFontDialog::destroy();
            return;
        }
        auto destroy_cb = qfontdialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QFontDialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qfontdialog_focusnextchild_isbase) {
            qfontdialog_focusnextchild_isbase = false;
            return QFontDialog::focusNextChild();
        }
        auto focusnextchild_cb = qfontdialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QFontDialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qfontdialog_focuspreviouschild_isbase) {
            qfontdialog_focuspreviouschild_isbase = false;
            return QFontDialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qfontdialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QFontDialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qfontdialog_sender_isbase) {
            qfontdialog_sender_isbase = false;
            return QFontDialog::sender();
        }
        auto sender_cb = qfontdialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QFontDialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qfontdialog_sendersignalindex_isbase) {
            qfontdialog_sendersignalindex_isbase = false;
            return QFontDialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = qfontdialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QFontDialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qfontdialog_receivers_isbase) {
            qfontdialog_receivers_isbase = false;
            return QFontDialog::receivers(signal);
        }
        auto receivers_cb = qfontdialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFontDialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qfontdialog_issignalconnected_isbase) {
            qfontdialog_issignalconnected_isbase = false;
            return QFontDialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qfontdialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QFontDialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qfontdialog_getdecodedmetricf_isbase) {
            qfontdialog_getdecodedmetricf_isbase = false;
            return QFontDialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qfontdialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QFontDialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void QFontDialog_ChangeEvent(QFontDialog* self, QEvent* event);
    friend void QFontDialog_SuperChangeEvent(QFontDialog* self, QEvent* event);
    friend void QFontDialog_Done(QFontDialog* self, int result);
    friend void QFontDialog_SuperDone(QFontDialog* self, int result);
    friend bool QFontDialog_EventFilter(QFontDialog* self, QObject* object, QEvent* event);
    friend bool QFontDialog_SuperEventFilter(QFontDialog* self, QObject* object, QEvent* event);
    friend void QFontDialog_KeyPressEvent(QFontDialog* self, QKeyEvent* param1);
    friend void QFontDialog_SuperKeyPressEvent(QFontDialog* self, QKeyEvent* param1);
    friend void QFontDialog_CloseEvent(QFontDialog* self, QCloseEvent* param1);
    friend void QFontDialog_SuperCloseEvent(QFontDialog* self, QCloseEvent* param1);
    friend void QFontDialog_ShowEvent(QFontDialog* self, QShowEvent* param1);
    friend void QFontDialog_SuperShowEvent(QFontDialog* self, QShowEvent* param1);
    friend void QFontDialog_ResizeEvent(QFontDialog* self, QResizeEvent* param1);
    friend void QFontDialog_SuperResizeEvent(QFontDialog* self, QResizeEvent* param1);
    friend void QFontDialog_ContextMenuEvent(QFontDialog* self, QContextMenuEvent* param1);
    friend void QFontDialog_SuperContextMenuEvent(QFontDialog* self, QContextMenuEvent* param1);
    friend bool QFontDialog_Event(QFontDialog* self, QEvent* event);
    friend bool QFontDialog_SuperEvent(QFontDialog* self, QEvent* event);
    friend void QFontDialog_MousePressEvent(QFontDialog* self, QMouseEvent* event);
    friend void QFontDialog_SuperMousePressEvent(QFontDialog* self, QMouseEvent* event);
    friend void QFontDialog_MouseReleaseEvent(QFontDialog* self, QMouseEvent* event);
    friend void QFontDialog_SuperMouseReleaseEvent(QFontDialog* self, QMouseEvent* event);
    friend void QFontDialog_MouseDoubleClickEvent(QFontDialog* self, QMouseEvent* event);
    friend void QFontDialog_SuperMouseDoubleClickEvent(QFontDialog* self, QMouseEvent* event);
    friend void QFontDialog_MouseMoveEvent(QFontDialog* self, QMouseEvent* event);
    friend void QFontDialog_SuperMouseMoveEvent(QFontDialog* self, QMouseEvent* event);
    friend void QFontDialog_WheelEvent(QFontDialog* self, QWheelEvent* event);
    friend void QFontDialog_SuperWheelEvent(QFontDialog* self, QWheelEvent* event);
    friend void QFontDialog_KeyReleaseEvent(QFontDialog* self, QKeyEvent* event);
    friend void QFontDialog_SuperKeyReleaseEvent(QFontDialog* self, QKeyEvent* event);
    friend void QFontDialog_FocusInEvent(QFontDialog* self, QFocusEvent* event);
    friend void QFontDialog_SuperFocusInEvent(QFontDialog* self, QFocusEvent* event);
    friend void QFontDialog_FocusOutEvent(QFontDialog* self, QFocusEvent* event);
    friend void QFontDialog_SuperFocusOutEvent(QFontDialog* self, QFocusEvent* event);
    friend void QFontDialog_EnterEvent(QFontDialog* self, QEnterEvent* event);
    friend void QFontDialog_SuperEnterEvent(QFontDialog* self, QEnterEvent* event);
    friend void QFontDialog_LeaveEvent(QFontDialog* self, QEvent* event);
    friend void QFontDialog_SuperLeaveEvent(QFontDialog* self, QEvent* event);
    friend void QFontDialog_PaintEvent(QFontDialog* self, QPaintEvent* event);
    friend void QFontDialog_SuperPaintEvent(QFontDialog* self, QPaintEvent* event);
    friend void QFontDialog_MoveEvent(QFontDialog* self, QMoveEvent* event);
    friend void QFontDialog_SuperMoveEvent(QFontDialog* self, QMoveEvent* event);
    friend void QFontDialog_TabletEvent(QFontDialog* self, QTabletEvent* event);
    friend void QFontDialog_SuperTabletEvent(QFontDialog* self, QTabletEvent* event);
    friend void QFontDialog_ActionEvent(QFontDialog* self, QActionEvent* event);
    friend void QFontDialog_SuperActionEvent(QFontDialog* self, QActionEvent* event);
    friend void QFontDialog_DragEnterEvent(QFontDialog* self, QDragEnterEvent* event);
    friend void QFontDialog_SuperDragEnterEvent(QFontDialog* self, QDragEnterEvent* event);
    friend void QFontDialog_DragMoveEvent(QFontDialog* self, QDragMoveEvent* event);
    friend void QFontDialog_SuperDragMoveEvent(QFontDialog* self, QDragMoveEvent* event);
    friend void QFontDialog_DragLeaveEvent(QFontDialog* self, QDragLeaveEvent* event);
    friend void QFontDialog_SuperDragLeaveEvent(QFontDialog* self, QDragLeaveEvent* event);
    friend void QFontDialog_DropEvent(QFontDialog* self, QDropEvent* event);
    friend void QFontDialog_SuperDropEvent(QFontDialog* self, QDropEvent* event);
    friend void QFontDialog_HideEvent(QFontDialog* self, QHideEvent* event);
    friend void QFontDialog_SuperHideEvent(QFontDialog* self, QHideEvent* event);
    friend bool QFontDialog_NativeEvent(QFontDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QFontDialog_SuperNativeEvent(QFontDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QFontDialog_Metric(const QFontDialog* self, int param1);
    friend int QFontDialog_SuperMetric(const QFontDialog* self, int param1);
    friend void QFontDialog_InitPainter(const QFontDialog* self, QPainter* painter);
    friend void QFontDialog_SuperInitPainter(const QFontDialog* self, QPainter* painter);
    friend QPaintDevice* QFontDialog_Redirected(const QFontDialog* self, QPoint* offset);
    friend QPaintDevice* QFontDialog_SuperRedirected(const QFontDialog* self, QPoint* offset);
    friend QPainter* QFontDialog_SharedPainter(const QFontDialog* self);
    friend QPainter* QFontDialog_SuperSharedPainter(const QFontDialog* self);
    friend void QFontDialog_InputMethodEvent(QFontDialog* self, QInputMethodEvent* param1);
    friend void QFontDialog_SuperInputMethodEvent(QFontDialog* self, QInputMethodEvent* param1);
    friend bool QFontDialog_FocusNextPrevChild(QFontDialog* self, bool next);
    friend bool QFontDialog_SuperFocusNextPrevChild(QFontDialog* self, bool next);
    friend void QFontDialog_TimerEvent(QFontDialog* self, QTimerEvent* event);
    friend void QFontDialog_SuperTimerEvent(QFontDialog* self, QTimerEvent* event);
    friend void QFontDialog_ChildEvent(QFontDialog* self, QChildEvent* event);
    friend void QFontDialog_SuperChildEvent(QFontDialog* self, QChildEvent* event);
    friend void QFontDialog_CustomEvent(QFontDialog* self, QEvent* event);
    friend void QFontDialog_SuperCustomEvent(QFontDialog* self, QEvent* event);
    friend void QFontDialog_ConnectNotify(QFontDialog* self, const QMetaMethod* signal);
    friend void QFontDialog_SuperConnectNotify(QFontDialog* self, const QMetaMethod* signal);
    friend void QFontDialog_DisconnectNotify(QFontDialog* self, const QMetaMethod* signal);
    friend void QFontDialog_SuperDisconnectNotify(QFontDialog* self, const QMetaMethod* signal);
    friend void QFontDialog_AdjustPosition(QFontDialog* self, QWidget* param1);
    friend void QFontDialog_SuperAdjustPosition(QFontDialog* self, QWidget* param1);
    friend void QFontDialog_UpdateMicroFocus(QFontDialog* self);
    friend void QFontDialog_SuperUpdateMicroFocus(QFontDialog* self);
    friend void QFontDialog_Create(QFontDialog* self);
    friend void QFontDialog_SuperCreate(QFontDialog* self);
    friend void QFontDialog_Destroy(QFontDialog* self);
    friend void QFontDialog_SuperDestroy(QFontDialog* self);
    friend bool QFontDialog_FocusNextChild(QFontDialog* self);
    friend bool QFontDialog_SuperFocusNextChild(QFontDialog* self);
    friend bool QFontDialog_FocusPreviousChild(QFontDialog* self);
    friend bool QFontDialog_SuperFocusPreviousChild(QFontDialog* self);
    friend QObject* QFontDialog_Sender(const QFontDialog* self);
    friend QObject* QFontDialog_SuperSender(const QFontDialog* self);
    friend int QFontDialog_SenderSignalIndex(const QFontDialog* self);
    friend int QFontDialog_SuperSenderSignalIndex(const QFontDialog* self);
    friend int QFontDialog_Receivers(const QFontDialog* self, const char* signal);
    friend int QFontDialog_SuperReceivers(const QFontDialog* self, const char* signal);
    friend bool QFontDialog_IsSignalConnected(const QFontDialog* self, const QMetaMethod* signal);
    friend bool QFontDialog_SuperIsSignalConnected(const QFontDialog* self, const QMetaMethod* signal);
    friend double QFontDialog_GetDecodedMetricF(const QFontDialog* self, int metricA, int metricB);
    friend double QFontDialog_SuperGetDecodedMetricF(const QFontDialog* self, int metricA, int metricB);
};

#endif
