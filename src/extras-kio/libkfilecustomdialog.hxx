#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKFILECUSTOMDIALOG_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKFILECUSTOMDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileCustomDialog so that we can call protected methods
class VirtualKFileCustomDialog final : public KFileCustomDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKFileCustomDialog = true;

    // Virtual class public types (including callbacks)
    using KFileCustomDialog_MetaObject_Callback = QMetaObject* (*)();
    using KFileCustomDialog_Metacast_Callback = void* (*)(KFileCustomDialog*, const char*);
    using KFileCustomDialog_Metacall_Callback = int (*)(KFileCustomDialog*, int, int, void**);
    using KFileCustomDialog_Accept_Callback = void (*)();
    using KFileCustomDialog_SetVisible_Callback = void (*)(KFileCustomDialog*, bool);
    using KFileCustomDialog_SizeHint_Callback = QSize* (*)();
    using KFileCustomDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KFileCustomDialog_Open_Callback = void (*)();
    using KFileCustomDialog_Exec_Callback = int (*)();
    using KFileCustomDialog_Done_Callback = void (*)(KFileCustomDialog*, int);
    using KFileCustomDialog_Reject_Callback = void (*)();
    using KFileCustomDialog_KeyPressEvent_Callback = void (*)(KFileCustomDialog*, QKeyEvent*);
    using KFileCustomDialog_CloseEvent_Callback = void (*)(KFileCustomDialog*, QCloseEvent*);
    using KFileCustomDialog_ShowEvent_Callback = void (*)(KFileCustomDialog*, QShowEvent*);
    using KFileCustomDialog_ResizeEvent_Callback = void (*)(KFileCustomDialog*, QResizeEvent*);
    using KFileCustomDialog_ContextMenuEvent_Callback = void (*)(KFileCustomDialog*, QContextMenuEvent*);
    using KFileCustomDialog_EventFilter_Callback = bool (*)(KFileCustomDialog*, QObject*, QEvent*);
    using KFileCustomDialog_DevType_Callback = int (*)();
    using KFileCustomDialog_HeightForWidth_Callback = int (*)(const KFileCustomDialog*, int);
    using KFileCustomDialog_HasHeightForWidth_Callback = bool (*)();
    using KFileCustomDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KFileCustomDialog_Event_Callback = bool (*)(KFileCustomDialog*, QEvent*);
    using KFileCustomDialog_MousePressEvent_Callback = void (*)(KFileCustomDialog*, QMouseEvent*);
    using KFileCustomDialog_MouseReleaseEvent_Callback = void (*)(KFileCustomDialog*, QMouseEvent*);
    using KFileCustomDialog_MouseDoubleClickEvent_Callback = void (*)(KFileCustomDialog*, QMouseEvent*);
    using KFileCustomDialog_MouseMoveEvent_Callback = void (*)(KFileCustomDialog*, QMouseEvent*);
    using KFileCustomDialog_WheelEvent_Callback = void (*)(KFileCustomDialog*, QWheelEvent*);
    using KFileCustomDialog_KeyReleaseEvent_Callback = void (*)(KFileCustomDialog*, QKeyEvent*);
    using KFileCustomDialog_FocusInEvent_Callback = void (*)(KFileCustomDialog*, QFocusEvent*);
    using KFileCustomDialog_FocusOutEvent_Callback = void (*)(KFileCustomDialog*, QFocusEvent*);
    using KFileCustomDialog_EnterEvent_Callback = void (*)(KFileCustomDialog*, QEnterEvent*);
    using KFileCustomDialog_LeaveEvent_Callback = void (*)(KFileCustomDialog*, QEvent*);
    using KFileCustomDialog_PaintEvent_Callback = void (*)(KFileCustomDialog*, QPaintEvent*);
    using KFileCustomDialog_MoveEvent_Callback = void (*)(KFileCustomDialog*, QMoveEvent*);
    using KFileCustomDialog_TabletEvent_Callback = void (*)(KFileCustomDialog*, QTabletEvent*);
    using KFileCustomDialog_ActionEvent_Callback = void (*)(KFileCustomDialog*, QActionEvent*);
    using KFileCustomDialog_DragEnterEvent_Callback = void (*)(KFileCustomDialog*, QDragEnterEvent*);
    using KFileCustomDialog_DragMoveEvent_Callback = void (*)(KFileCustomDialog*, QDragMoveEvent*);
    using KFileCustomDialog_DragLeaveEvent_Callback = void (*)(KFileCustomDialog*, QDragLeaveEvent*);
    using KFileCustomDialog_DropEvent_Callback = void (*)(KFileCustomDialog*, QDropEvent*);
    using KFileCustomDialog_HideEvent_Callback = void (*)(KFileCustomDialog*, QHideEvent*);
    using KFileCustomDialog_NativeEvent_Callback = bool (*)(KFileCustomDialog*, libqt_string, void*, intptr_t*);
    using KFileCustomDialog_ChangeEvent_Callback = void (*)(KFileCustomDialog*, QEvent*);
    using KFileCustomDialog_Metric_Callback = int (*)(const KFileCustomDialog*, int);
    using KFileCustomDialog_InitPainter_Callback = void (*)(const KFileCustomDialog*, QPainter*);
    using KFileCustomDialog_Redirected_Callback = QPaintDevice* (*)(const KFileCustomDialog*, QPoint*);
    using KFileCustomDialog_SharedPainter_Callback = QPainter* (*)();
    using KFileCustomDialog_InputMethodEvent_Callback = void (*)(KFileCustomDialog*, QInputMethodEvent*);
    using KFileCustomDialog_InputMethodQuery_Callback = QVariant* (*)(const KFileCustomDialog*, int);
    using KFileCustomDialog_FocusNextPrevChild_Callback = bool (*)(KFileCustomDialog*, bool);
    using KFileCustomDialog_TimerEvent_Callback = void (*)(KFileCustomDialog*, QTimerEvent*);
    using KFileCustomDialog_ChildEvent_Callback = void (*)(KFileCustomDialog*, QChildEvent*);
    using KFileCustomDialog_CustomEvent_Callback = void (*)(KFileCustomDialog*, QEvent*);
    using KFileCustomDialog_ConnectNotify_Callback = void (*)(KFileCustomDialog*, QMetaMethod*);
    using KFileCustomDialog_DisconnectNotify_Callback = void (*)(KFileCustomDialog*, QMetaMethod*);
    using KFileCustomDialog_AdjustPosition_Callback = void (*)(KFileCustomDialog*, QWidget*);
    using KFileCustomDialog_UpdateMicroFocus_Callback = void (*)();
    using KFileCustomDialog_Create_Callback = void (*)();
    using KFileCustomDialog_Destroy_Callback = void (*)();
    using KFileCustomDialog_FocusNextChild_Callback = bool (*)();
    using KFileCustomDialog_FocusPreviousChild_Callback = bool (*)();
    using KFileCustomDialog_Sender_Callback = QObject* (*)();
    using KFileCustomDialog_SenderSignalIndex_Callback = int (*)();
    using KFileCustomDialog_Receivers_Callback = int (*)(const KFileCustomDialog*, const char*);
    using KFileCustomDialog_IsSignalConnected_Callback = bool (*)(const KFileCustomDialog*, QMetaMethod*);
    using KFileCustomDialog_GetDecodedMetricF_Callback = double (*)(const KFileCustomDialog*, int, int);

  protected:
    // Instance callback storage
    KFileCustomDialog_MetaObject_Callback kfilecustomdialog_metaobject_callback = nullptr;
    KFileCustomDialog_Metacast_Callback kfilecustomdialog_metacast_callback = nullptr;
    KFileCustomDialog_Metacall_Callback kfilecustomdialog_metacall_callback = nullptr;
    KFileCustomDialog_Accept_Callback kfilecustomdialog_accept_callback = nullptr;
    KFileCustomDialog_SetVisible_Callback kfilecustomdialog_setvisible_callback = nullptr;
    KFileCustomDialog_SizeHint_Callback kfilecustomdialog_sizehint_callback = nullptr;
    KFileCustomDialog_MinimumSizeHint_Callback kfilecustomdialog_minimumsizehint_callback = nullptr;
    KFileCustomDialog_Open_Callback kfilecustomdialog_open_callback = nullptr;
    KFileCustomDialog_Exec_Callback kfilecustomdialog_exec_callback = nullptr;
    KFileCustomDialog_Done_Callback kfilecustomdialog_done_callback = nullptr;
    KFileCustomDialog_Reject_Callback kfilecustomdialog_reject_callback = nullptr;
    KFileCustomDialog_KeyPressEvent_Callback kfilecustomdialog_keypressevent_callback = nullptr;
    KFileCustomDialog_CloseEvent_Callback kfilecustomdialog_closeevent_callback = nullptr;
    KFileCustomDialog_ShowEvent_Callback kfilecustomdialog_showevent_callback = nullptr;
    KFileCustomDialog_ResizeEvent_Callback kfilecustomdialog_resizeevent_callback = nullptr;
    KFileCustomDialog_ContextMenuEvent_Callback kfilecustomdialog_contextmenuevent_callback = nullptr;
    KFileCustomDialog_EventFilter_Callback kfilecustomdialog_eventfilter_callback = nullptr;
    KFileCustomDialog_DevType_Callback kfilecustomdialog_devtype_callback = nullptr;
    KFileCustomDialog_HeightForWidth_Callback kfilecustomdialog_heightforwidth_callback = nullptr;
    KFileCustomDialog_HasHeightForWidth_Callback kfilecustomdialog_hasheightforwidth_callback = nullptr;
    KFileCustomDialog_PaintEngine_Callback kfilecustomdialog_paintengine_callback = nullptr;
    KFileCustomDialog_Event_Callback kfilecustomdialog_event_callback = nullptr;
    KFileCustomDialog_MousePressEvent_Callback kfilecustomdialog_mousepressevent_callback = nullptr;
    KFileCustomDialog_MouseReleaseEvent_Callback kfilecustomdialog_mousereleaseevent_callback = nullptr;
    KFileCustomDialog_MouseDoubleClickEvent_Callback kfilecustomdialog_mousedoubleclickevent_callback = nullptr;
    KFileCustomDialog_MouseMoveEvent_Callback kfilecustomdialog_mousemoveevent_callback = nullptr;
    KFileCustomDialog_WheelEvent_Callback kfilecustomdialog_wheelevent_callback = nullptr;
    KFileCustomDialog_KeyReleaseEvent_Callback kfilecustomdialog_keyreleaseevent_callback = nullptr;
    KFileCustomDialog_FocusInEvent_Callback kfilecustomdialog_focusinevent_callback = nullptr;
    KFileCustomDialog_FocusOutEvent_Callback kfilecustomdialog_focusoutevent_callback = nullptr;
    KFileCustomDialog_EnterEvent_Callback kfilecustomdialog_enterevent_callback = nullptr;
    KFileCustomDialog_LeaveEvent_Callback kfilecustomdialog_leaveevent_callback = nullptr;
    KFileCustomDialog_PaintEvent_Callback kfilecustomdialog_paintevent_callback = nullptr;
    KFileCustomDialog_MoveEvent_Callback kfilecustomdialog_moveevent_callback = nullptr;
    KFileCustomDialog_TabletEvent_Callback kfilecustomdialog_tabletevent_callback = nullptr;
    KFileCustomDialog_ActionEvent_Callback kfilecustomdialog_actionevent_callback = nullptr;
    KFileCustomDialog_DragEnterEvent_Callback kfilecustomdialog_dragenterevent_callback = nullptr;
    KFileCustomDialog_DragMoveEvent_Callback kfilecustomdialog_dragmoveevent_callback = nullptr;
    KFileCustomDialog_DragLeaveEvent_Callback kfilecustomdialog_dragleaveevent_callback = nullptr;
    KFileCustomDialog_DropEvent_Callback kfilecustomdialog_dropevent_callback = nullptr;
    KFileCustomDialog_HideEvent_Callback kfilecustomdialog_hideevent_callback = nullptr;
    KFileCustomDialog_NativeEvent_Callback kfilecustomdialog_nativeevent_callback = nullptr;
    KFileCustomDialog_ChangeEvent_Callback kfilecustomdialog_changeevent_callback = nullptr;
    KFileCustomDialog_Metric_Callback kfilecustomdialog_metric_callback = nullptr;
    KFileCustomDialog_InitPainter_Callback kfilecustomdialog_initpainter_callback = nullptr;
    KFileCustomDialog_Redirected_Callback kfilecustomdialog_redirected_callback = nullptr;
    KFileCustomDialog_SharedPainter_Callback kfilecustomdialog_sharedpainter_callback = nullptr;
    KFileCustomDialog_InputMethodEvent_Callback kfilecustomdialog_inputmethodevent_callback = nullptr;
    KFileCustomDialog_InputMethodQuery_Callback kfilecustomdialog_inputmethodquery_callback = nullptr;
    KFileCustomDialog_FocusNextPrevChild_Callback kfilecustomdialog_focusnextprevchild_callback = nullptr;
    KFileCustomDialog_TimerEvent_Callback kfilecustomdialog_timerevent_callback = nullptr;
    KFileCustomDialog_ChildEvent_Callback kfilecustomdialog_childevent_callback = nullptr;
    KFileCustomDialog_CustomEvent_Callback kfilecustomdialog_customevent_callback = nullptr;
    KFileCustomDialog_ConnectNotify_Callback kfilecustomdialog_connectnotify_callback = nullptr;
    KFileCustomDialog_DisconnectNotify_Callback kfilecustomdialog_disconnectnotify_callback = nullptr;
    KFileCustomDialog_AdjustPosition_Callback kfilecustomdialog_adjustposition_callback = nullptr;
    KFileCustomDialog_UpdateMicroFocus_Callback kfilecustomdialog_updatemicrofocus_callback = nullptr;
    KFileCustomDialog_Create_Callback kfilecustomdialog_create_callback = nullptr;
    KFileCustomDialog_Destroy_Callback kfilecustomdialog_destroy_callback = nullptr;
    KFileCustomDialog_FocusNextChild_Callback kfilecustomdialog_focusnextchild_callback = nullptr;
    KFileCustomDialog_FocusPreviousChild_Callback kfilecustomdialog_focuspreviouschild_callback = nullptr;
    KFileCustomDialog_Sender_Callback kfilecustomdialog_sender_callback = nullptr;
    KFileCustomDialog_SenderSignalIndex_Callback kfilecustomdialog_sendersignalindex_callback = nullptr;
    KFileCustomDialog_Receivers_Callback kfilecustomdialog_receivers_callback = nullptr;
    KFileCustomDialog_IsSignalConnected_Callback kfilecustomdialog_issignalconnected_callback = nullptr;
    KFileCustomDialog_GetDecodedMetricF_Callback kfilecustomdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kfilecustomdialog_metaobject_isbase = false;
    mutable bool kfilecustomdialog_metacast_isbase = false;
    mutable bool kfilecustomdialog_metacall_isbase = false;
    mutable bool kfilecustomdialog_accept_isbase = false;
    mutable bool kfilecustomdialog_setvisible_isbase = false;
    mutable bool kfilecustomdialog_sizehint_isbase = false;
    mutable bool kfilecustomdialog_minimumsizehint_isbase = false;
    mutable bool kfilecustomdialog_open_isbase = false;
    mutable bool kfilecustomdialog_exec_isbase = false;
    mutable bool kfilecustomdialog_done_isbase = false;
    mutable bool kfilecustomdialog_reject_isbase = false;
    mutable bool kfilecustomdialog_keypressevent_isbase = false;
    mutable bool kfilecustomdialog_closeevent_isbase = false;
    mutable bool kfilecustomdialog_showevent_isbase = false;
    mutable bool kfilecustomdialog_resizeevent_isbase = false;
    mutable bool kfilecustomdialog_contextmenuevent_isbase = false;
    mutable bool kfilecustomdialog_eventfilter_isbase = false;
    mutable bool kfilecustomdialog_devtype_isbase = false;
    mutable bool kfilecustomdialog_heightforwidth_isbase = false;
    mutable bool kfilecustomdialog_hasheightforwidth_isbase = false;
    mutable bool kfilecustomdialog_paintengine_isbase = false;
    mutable bool kfilecustomdialog_event_isbase = false;
    mutable bool kfilecustomdialog_mousepressevent_isbase = false;
    mutable bool kfilecustomdialog_mousereleaseevent_isbase = false;
    mutable bool kfilecustomdialog_mousedoubleclickevent_isbase = false;
    mutable bool kfilecustomdialog_mousemoveevent_isbase = false;
    mutable bool kfilecustomdialog_wheelevent_isbase = false;
    mutable bool kfilecustomdialog_keyreleaseevent_isbase = false;
    mutable bool kfilecustomdialog_focusinevent_isbase = false;
    mutable bool kfilecustomdialog_focusoutevent_isbase = false;
    mutable bool kfilecustomdialog_enterevent_isbase = false;
    mutable bool kfilecustomdialog_leaveevent_isbase = false;
    mutable bool kfilecustomdialog_paintevent_isbase = false;
    mutable bool kfilecustomdialog_moveevent_isbase = false;
    mutable bool kfilecustomdialog_tabletevent_isbase = false;
    mutable bool kfilecustomdialog_actionevent_isbase = false;
    mutable bool kfilecustomdialog_dragenterevent_isbase = false;
    mutable bool kfilecustomdialog_dragmoveevent_isbase = false;
    mutable bool kfilecustomdialog_dragleaveevent_isbase = false;
    mutable bool kfilecustomdialog_dropevent_isbase = false;
    mutable bool kfilecustomdialog_hideevent_isbase = false;
    mutable bool kfilecustomdialog_nativeevent_isbase = false;
    mutable bool kfilecustomdialog_changeevent_isbase = false;
    mutable bool kfilecustomdialog_metric_isbase = false;
    mutable bool kfilecustomdialog_initpainter_isbase = false;
    mutable bool kfilecustomdialog_redirected_isbase = false;
    mutable bool kfilecustomdialog_sharedpainter_isbase = false;
    mutable bool kfilecustomdialog_inputmethodevent_isbase = false;
    mutable bool kfilecustomdialog_inputmethodquery_isbase = false;
    mutable bool kfilecustomdialog_focusnextprevchild_isbase = false;
    mutable bool kfilecustomdialog_timerevent_isbase = false;
    mutable bool kfilecustomdialog_childevent_isbase = false;
    mutable bool kfilecustomdialog_customevent_isbase = false;
    mutable bool kfilecustomdialog_connectnotify_isbase = false;
    mutable bool kfilecustomdialog_disconnectnotify_isbase = false;
    mutable bool kfilecustomdialog_adjustposition_isbase = false;
    mutable bool kfilecustomdialog_updatemicrofocus_isbase = false;
    mutable bool kfilecustomdialog_create_isbase = false;
    mutable bool kfilecustomdialog_destroy_isbase = false;
    mutable bool kfilecustomdialog_focusnextchild_isbase = false;
    mutable bool kfilecustomdialog_focuspreviouschild_isbase = false;
    mutable bool kfilecustomdialog_sender_isbase = false;
    mutable bool kfilecustomdialog_sendersignalindex_isbase = false;
    mutable bool kfilecustomdialog_receivers_isbase = false;
    mutable bool kfilecustomdialog_issignalconnected_isbase = false;
    mutable bool kfilecustomdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKFileCustomDialog(QWidget* parent) : KFileCustomDialog(parent) {};
    VirtualKFileCustomDialog() : KFileCustomDialog() {};
    VirtualKFileCustomDialog(const QUrl& startDir) : KFileCustomDialog(startDir) {};
    VirtualKFileCustomDialog(const QUrl& startDir, QWidget* parent) : KFileCustomDialog(startDir, parent) {};

    // Callback setters
    inline void setKFileCustomDialog_MetaObject_Callback(KFileCustomDialog_MetaObject_Callback cb) { kfilecustomdialog_metaobject_callback = cb; }
    inline void setKFileCustomDialog_Metacast_Callback(KFileCustomDialog_Metacast_Callback cb) { kfilecustomdialog_metacast_callback = cb; }
    inline void setKFileCustomDialog_Metacall_Callback(KFileCustomDialog_Metacall_Callback cb) { kfilecustomdialog_metacall_callback = cb; }
    inline void setKFileCustomDialog_Accept_Callback(KFileCustomDialog_Accept_Callback cb) { kfilecustomdialog_accept_callback = cb; }
    inline void setKFileCustomDialog_SetVisible_Callback(KFileCustomDialog_SetVisible_Callback cb) { kfilecustomdialog_setvisible_callback = cb; }
    inline void setKFileCustomDialog_SizeHint_Callback(KFileCustomDialog_SizeHint_Callback cb) { kfilecustomdialog_sizehint_callback = cb; }
    inline void setKFileCustomDialog_MinimumSizeHint_Callback(KFileCustomDialog_MinimumSizeHint_Callback cb) { kfilecustomdialog_minimumsizehint_callback = cb; }
    inline void setKFileCustomDialog_Open_Callback(KFileCustomDialog_Open_Callback cb) { kfilecustomdialog_open_callback = cb; }
    inline void setKFileCustomDialog_Exec_Callback(KFileCustomDialog_Exec_Callback cb) { kfilecustomdialog_exec_callback = cb; }
    inline void setKFileCustomDialog_Done_Callback(KFileCustomDialog_Done_Callback cb) { kfilecustomdialog_done_callback = cb; }
    inline void setKFileCustomDialog_Reject_Callback(KFileCustomDialog_Reject_Callback cb) { kfilecustomdialog_reject_callback = cb; }
    inline void setKFileCustomDialog_KeyPressEvent_Callback(KFileCustomDialog_KeyPressEvent_Callback cb) { kfilecustomdialog_keypressevent_callback = cb; }
    inline void setKFileCustomDialog_CloseEvent_Callback(KFileCustomDialog_CloseEvent_Callback cb) { kfilecustomdialog_closeevent_callback = cb; }
    inline void setKFileCustomDialog_ShowEvent_Callback(KFileCustomDialog_ShowEvent_Callback cb) { kfilecustomdialog_showevent_callback = cb; }
    inline void setKFileCustomDialog_ResizeEvent_Callback(KFileCustomDialog_ResizeEvent_Callback cb) { kfilecustomdialog_resizeevent_callback = cb; }
    inline void setKFileCustomDialog_ContextMenuEvent_Callback(KFileCustomDialog_ContextMenuEvent_Callback cb) { kfilecustomdialog_contextmenuevent_callback = cb; }
    inline void setKFileCustomDialog_EventFilter_Callback(KFileCustomDialog_EventFilter_Callback cb) { kfilecustomdialog_eventfilter_callback = cb; }
    inline void setKFileCustomDialog_DevType_Callback(KFileCustomDialog_DevType_Callback cb) { kfilecustomdialog_devtype_callback = cb; }
    inline void setKFileCustomDialog_HeightForWidth_Callback(KFileCustomDialog_HeightForWidth_Callback cb) { kfilecustomdialog_heightforwidth_callback = cb; }
    inline void setKFileCustomDialog_HasHeightForWidth_Callback(KFileCustomDialog_HasHeightForWidth_Callback cb) { kfilecustomdialog_hasheightforwidth_callback = cb; }
    inline void setKFileCustomDialog_PaintEngine_Callback(KFileCustomDialog_PaintEngine_Callback cb) { kfilecustomdialog_paintengine_callback = cb; }
    inline void setKFileCustomDialog_Event_Callback(KFileCustomDialog_Event_Callback cb) { kfilecustomdialog_event_callback = cb; }
    inline void setKFileCustomDialog_MousePressEvent_Callback(KFileCustomDialog_MousePressEvent_Callback cb) { kfilecustomdialog_mousepressevent_callback = cb; }
    inline void setKFileCustomDialog_MouseReleaseEvent_Callback(KFileCustomDialog_MouseReleaseEvent_Callback cb) { kfilecustomdialog_mousereleaseevent_callback = cb; }
    inline void setKFileCustomDialog_MouseDoubleClickEvent_Callback(KFileCustomDialog_MouseDoubleClickEvent_Callback cb) { kfilecustomdialog_mousedoubleclickevent_callback = cb; }
    inline void setKFileCustomDialog_MouseMoveEvent_Callback(KFileCustomDialog_MouseMoveEvent_Callback cb) { kfilecustomdialog_mousemoveevent_callback = cb; }
    inline void setKFileCustomDialog_WheelEvent_Callback(KFileCustomDialog_WheelEvent_Callback cb) { kfilecustomdialog_wheelevent_callback = cb; }
    inline void setKFileCustomDialog_KeyReleaseEvent_Callback(KFileCustomDialog_KeyReleaseEvent_Callback cb) { kfilecustomdialog_keyreleaseevent_callback = cb; }
    inline void setKFileCustomDialog_FocusInEvent_Callback(KFileCustomDialog_FocusInEvent_Callback cb) { kfilecustomdialog_focusinevent_callback = cb; }
    inline void setKFileCustomDialog_FocusOutEvent_Callback(KFileCustomDialog_FocusOutEvent_Callback cb) { kfilecustomdialog_focusoutevent_callback = cb; }
    inline void setKFileCustomDialog_EnterEvent_Callback(KFileCustomDialog_EnterEvent_Callback cb) { kfilecustomdialog_enterevent_callback = cb; }
    inline void setKFileCustomDialog_LeaveEvent_Callback(KFileCustomDialog_LeaveEvent_Callback cb) { kfilecustomdialog_leaveevent_callback = cb; }
    inline void setKFileCustomDialog_PaintEvent_Callback(KFileCustomDialog_PaintEvent_Callback cb) { kfilecustomdialog_paintevent_callback = cb; }
    inline void setKFileCustomDialog_MoveEvent_Callback(KFileCustomDialog_MoveEvent_Callback cb) { kfilecustomdialog_moveevent_callback = cb; }
    inline void setKFileCustomDialog_TabletEvent_Callback(KFileCustomDialog_TabletEvent_Callback cb) { kfilecustomdialog_tabletevent_callback = cb; }
    inline void setKFileCustomDialog_ActionEvent_Callback(KFileCustomDialog_ActionEvent_Callback cb) { kfilecustomdialog_actionevent_callback = cb; }
    inline void setKFileCustomDialog_DragEnterEvent_Callback(KFileCustomDialog_DragEnterEvent_Callback cb) { kfilecustomdialog_dragenterevent_callback = cb; }
    inline void setKFileCustomDialog_DragMoveEvent_Callback(KFileCustomDialog_DragMoveEvent_Callback cb) { kfilecustomdialog_dragmoveevent_callback = cb; }
    inline void setKFileCustomDialog_DragLeaveEvent_Callback(KFileCustomDialog_DragLeaveEvent_Callback cb) { kfilecustomdialog_dragleaveevent_callback = cb; }
    inline void setKFileCustomDialog_DropEvent_Callback(KFileCustomDialog_DropEvent_Callback cb) { kfilecustomdialog_dropevent_callback = cb; }
    inline void setKFileCustomDialog_HideEvent_Callback(KFileCustomDialog_HideEvent_Callback cb) { kfilecustomdialog_hideevent_callback = cb; }
    inline void setKFileCustomDialog_NativeEvent_Callback(KFileCustomDialog_NativeEvent_Callback cb) { kfilecustomdialog_nativeevent_callback = cb; }
    inline void setKFileCustomDialog_ChangeEvent_Callback(KFileCustomDialog_ChangeEvent_Callback cb) { kfilecustomdialog_changeevent_callback = cb; }
    inline void setKFileCustomDialog_Metric_Callback(KFileCustomDialog_Metric_Callback cb) { kfilecustomdialog_metric_callback = cb; }
    inline void setKFileCustomDialog_InitPainter_Callback(KFileCustomDialog_InitPainter_Callback cb) { kfilecustomdialog_initpainter_callback = cb; }
    inline void setKFileCustomDialog_Redirected_Callback(KFileCustomDialog_Redirected_Callback cb) { kfilecustomdialog_redirected_callback = cb; }
    inline void setKFileCustomDialog_SharedPainter_Callback(KFileCustomDialog_SharedPainter_Callback cb) { kfilecustomdialog_sharedpainter_callback = cb; }
    inline void setKFileCustomDialog_InputMethodEvent_Callback(KFileCustomDialog_InputMethodEvent_Callback cb) { kfilecustomdialog_inputmethodevent_callback = cb; }
    inline void setKFileCustomDialog_InputMethodQuery_Callback(KFileCustomDialog_InputMethodQuery_Callback cb) { kfilecustomdialog_inputmethodquery_callback = cb; }
    inline void setKFileCustomDialog_FocusNextPrevChild_Callback(KFileCustomDialog_FocusNextPrevChild_Callback cb) { kfilecustomdialog_focusnextprevchild_callback = cb; }
    inline void setKFileCustomDialog_TimerEvent_Callback(KFileCustomDialog_TimerEvent_Callback cb) { kfilecustomdialog_timerevent_callback = cb; }
    inline void setKFileCustomDialog_ChildEvent_Callback(KFileCustomDialog_ChildEvent_Callback cb) { kfilecustomdialog_childevent_callback = cb; }
    inline void setKFileCustomDialog_CustomEvent_Callback(KFileCustomDialog_CustomEvent_Callback cb) { kfilecustomdialog_customevent_callback = cb; }
    inline void setKFileCustomDialog_ConnectNotify_Callback(KFileCustomDialog_ConnectNotify_Callback cb) { kfilecustomdialog_connectnotify_callback = cb; }
    inline void setKFileCustomDialog_DisconnectNotify_Callback(KFileCustomDialog_DisconnectNotify_Callback cb) { kfilecustomdialog_disconnectnotify_callback = cb; }
    inline void setKFileCustomDialog_AdjustPosition_Callback(KFileCustomDialog_AdjustPosition_Callback cb) { kfilecustomdialog_adjustposition_callback = cb; }
    inline void setKFileCustomDialog_UpdateMicroFocus_Callback(KFileCustomDialog_UpdateMicroFocus_Callback cb) { kfilecustomdialog_updatemicrofocus_callback = cb; }
    inline void setKFileCustomDialog_Create_Callback(KFileCustomDialog_Create_Callback cb) { kfilecustomdialog_create_callback = cb; }
    inline void setKFileCustomDialog_Destroy_Callback(KFileCustomDialog_Destroy_Callback cb) { kfilecustomdialog_destroy_callback = cb; }
    inline void setKFileCustomDialog_FocusNextChild_Callback(KFileCustomDialog_FocusNextChild_Callback cb) { kfilecustomdialog_focusnextchild_callback = cb; }
    inline void setKFileCustomDialog_FocusPreviousChild_Callback(KFileCustomDialog_FocusPreviousChild_Callback cb) { kfilecustomdialog_focuspreviouschild_callback = cb; }
    inline void setKFileCustomDialog_Sender_Callback(KFileCustomDialog_Sender_Callback cb) { kfilecustomdialog_sender_callback = cb; }
    inline void setKFileCustomDialog_SenderSignalIndex_Callback(KFileCustomDialog_SenderSignalIndex_Callback cb) { kfilecustomdialog_sendersignalindex_callback = cb; }
    inline void setKFileCustomDialog_Receivers_Callback(KFileCustomDialog_Receivers_Callback cb) { kfilecustomdialog_receivers_callback = cb; }
    inline void setKFileCustomDialog_IsSignalConnected_Callback(KFileCustomDialog_IsSignalConnected_Callback cb) { kfilecustomdialog_issignalconnected_callback = cb; }
    inline void setKFileCustomDialog_GetDecodedMetricF_Callback(KFileCustomDialog_GetDecodedMetricF_Callback cb) { kfilecustomdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKFileCustomDialog_MetaObject_IsBase(bool value) const { kfilecustomdialog_metaobject_isbase = value; }
    inline void setKFileCustomDialog_Metacast_IsBase(bool value) const { kfilecustomdialog_metacast_isbase = value; }
    inline void setKFileCustomDialog_Metacall_IsBase(bool value) const { kfilecustomdialog_metacall_isbase = value; }
    inline void setKFileCustomDialog_Accept_IsBase(bool value) const { kfilecustomdialog_accept_isbase = value; }
    inline void setKFileCustomDialog_SetVisible_IsBase(bool value) const { kfilecustomdialog_setvisible_isbase = value; }
    inline void setKFileCustomDialog_SizeHint_IsBase(bool value) const { kfilecustomdialog_sizehint_isbase = value; }
    inline void setKFileCustomDialog_MinimumSizeHint_IsBase(bool value) const { kfilecustomdialog_minimumsizehint_isbase = value; }
    inline void setKFileCustomDialog_Open_IsBase(bool value) const { kfilecustomdialog_open_isbase = value; }
    inline void setKFileCustomDialog_Exec_IsBase(bool value) const { kfilecustomdialog_exec_isbase = value; }
    inline void setKFileCustomDialog_Done_IsBase(bool value) const { kfilecustomdialog_done_isbase = value; }
    inline void setKFileCustomDialog_Reject_IsBase(bool value) const { kfilecustomdialog_reject_isbase = value; }
    inline void setKFileCustomDialog_KeyPressEvent_IsBase(bool value) const { kfilecustomdialog_keypressevent_isbase = value; }
    inline void setKFileCustomDialog_CloseEvent_IsBase(bool value) const { kfilecustomdialog_closeevent_isbase = value; }
    inline void setKFileCustomDialog_ShowEvent_IsBase(bool value) const { kfilecustomdialog_showevent_isbase = value; }
    inline void setKFileCustomDialog_ResizeEvent_IsBase(bool value) const { kfilecustomdialog_resizeevent_isbase = value; }
    inline void setKFileCustomDialog_ContextMenuEvent_IsBase(bool value) const { kfilecustomdialog_contextmenuevent_isbase = value; }
    inline void setKFileCustomDialog_EventFilter_IsBase(bool value) const { kfilecustomdialog_eventfilter_isbase = value; }
    inline void setKFileCustomDialog_DevType_IsBase(bool value) const { kfilecustomdialog_devtype_isbase = value; }
    inline void setKFileCustomDialog_HeightForWidth_IsBase(bool value) const { kfilecustomdialog_heightforwidth_isbase = value; }
    inline void setKFileCustomDialog_HasHeightForWidth_IsBase(bool value) const { kfilecustomdialog_hasheightforwidth_isbase = value; }
    inline void setKFileCustomDialog_PaintEngine_IsBase(bool value) const { kfilecustomdialog_paintengine_isbase = value; }
    inline void setKFileCustomDialog_Event_IsBase(bool value) const { kfilecustomdialog_event_isbase = value; }
    inline void setKFileCustomDialog_MousePressEvent_IsBase(bool value) const { kfilecustomdialog_mousepressevent_isbase = value; }
    inline void setKFileCustomDialog_MouseReleaseEvent_IsBase(bool value) const { kfilecustomdialog_mousereleaseevent_isbase = value; }
    inline void setKFileCustomDialog_MouseDoubleClickEvent_IsBase(bool value) const { kfilecustomdialog_mousedoubleclickevent_isbase = value; }
    inline void setKFileCustomDialog_MouseMoveEvent_IsBase(bool value) const { kfilecustomdialog_mousemoveevent_isbase = value; }
    inline void setKFileCustomDialog_WheelEvent_IsBase(bool value) const { kfilecustomdialog_wheelevent_isbase = value; }
    inline void setKFileCustomDialog_KeyReleaseEvent_IsBase(bool value) const { kfilecustomdialog_keyreleaseevent_isbase = value; }
    inline void setKFileCustomDialog_FocusInEvent_IsBase(bool value) const { kfilecustomdialog_focusinevent_isbase = value; }
    inline void setKFileCustomDialog_FocusOutEvent_IsBase(bool value) const { kfilecustomdialog_focusoutevent_isbase = value; }
    inline void setKFileCustomDialog_EnterEvent_IsBase(bool value) const { kfilecustomdialog_enterevent_isbase = value; }
    inline void setKFileCustomDialog_LeaveEvent_IsBase(bool value) const { kfilecustomdialog_leaveevent_isbase = value; }
    inline void setKFileCustomDialog_PaintEvent_IsBase(bool value) const { kfilecustomdialog_paintevent_isbase = value; }
    inline void setKFileCustomDialog_MoveEvent_IsBase(bool value) const { kfilecustomdialog_moveevent_isbase = value; }
    inline void setKFileCustomDialog_TabletEvent_IsBase(bool value) const { kfilecustomdialog_tabletevent_isbase = value; }
    inline void setKFileCustomDialog_ActionEvent_IsBase(bool value) const { kfilecustomdialog_actionevent_isbase = value; }
    inline void setKFileCustomDialog_DragEnterEvent_IsBase(bool value) const { kfilecustomdialog_dragenterevent_isbase = value; }
    inline void setKFileCustomDialog_DragMoveEvent_IsBase(bool value) const { kfilecustomdialog_dragmoveevent_isbase = value; }
    inline void setKFileCustomDialog_DragLeaveEvent_IsBase(bool value) const { kfilecustomdialog_dragleaveevent_isbase = value; }
    inline void setKFileCustomDialog_DropEvent_IsBase(bool value) const { kfilecustomdialog_dropevent_isbase = value; }
    inline void setKFileCustomDialog_HideEvent_IsBase(bool value) const { kfilecustomdialog_hideevent_isbase = value; }
    inline void setKFileCustomDialog_NativeEvent_IsBase(bool value) const { kfilecustomdialog_nativeevent_isbase = value; }
    inline void setKFileCustomDialog_ChangeEvent_IsBase(bool value) const { kfilecustomdialog_changeevent_isbase = value; }
    inline void setKFileCustomDialog_Metric_IsBase(bool value) const { kfilecustomdialog_metric_isbase = value; }
    inline void setKFileCustomDialog_InitPainter_IsBase(bool value) const { kfilecustomdialog_initpainter_isbase = value; }
    inline void setKFileCustomDialog_Redirected_IsBase(bool value) const { kfilecustomdialog_redirected_isbase = value; }
    inline void setKFileCustomDialog_SharedPainter_IsBase(bool value) const { kfilecustomdialog_sharedpainter_isbase = value; }
    inline void setKFileCustomDialog_InputMethodEvent_IsBase(bool value) const { kfilecustomdialog_inputmethodevent_isbase = value; }
    inline void setKFileCustomDialog_InputMethodQuery_IsBase(bool value) const { kfilecustomdialog_inputmethodquery_isbase = value; }
    inline void setKFileCustomDialog_FocusNextPrevChild_IsBase(bool value) const { kfilecustomdialog_focusnextprevchild_isbase = value; }
    inline void setKFileCustomDialog_TimerEvent_IsBase(bool value) const { kfilecustomdialog_timerevent_isbase = value; }
    inline void setKFileCustomDialog_ChildEvent_IsBase(bool value) const { kfilecustomdialog_childevent_isbase = value; }
    inline void setKFileCustomDialog_CustomEvent_IsBase(bool value) const { kfilecustomdialog_customevent_isbase = value; }
    inline void setKFileCustomDialog_ConnectNotify_IsBase(bool value) const { kfilecustomdialog_connectnotify_isbase = value; }
    inline void setKFileCustomDialog_DisconnectNotify_IsBase(bool value) const { kfilecustomdialog_disconnectnotify_isbase = value; }
    inline void setKFileCustomDialog_AdjustPosition_IsBase(bool value) const { kfilecustomdialog_adjustposition_isbase = value; }
    inline void setKFileCustomDialog_UpdateMicroFocus_IsBase(bool value) const { kfilecustomdialog_updatemicrofocus_isbase = value; }
    inline void setKFileCustomDialog_Create_IsBase(bool value) const { kfilecustomdialog_create_isbase = value; }
    inline void setKFileCustomDialog_Destroy_IsBase(bool value) const { kfilecustomdialog_destroy_isbase = value; }
    inline void setKFileCustomDialog_FocusNextChild_IsBase(bool value) const { kfilecustomdialog_focusnextchild_isbase = value; }
    inline void setKFileCustomDialog_FocusPreviousChild_IsBase(bool value) const { kfilecustomdialog_focuspreviouschild_isbase = value; }
    inline void setKFileCustomDialog_Sender_IsBase(bool value) const { kfilecustomdialog_sender_isbase = value; }
    inline void setKFileCustomDialog_SenderSignalIndex_IsBase(bool value) const { kfilecustomdialog_sendersignalindex_isbase = value; }
    inline void setKFileCustomDialog_Receivers_IsBase(bool value) const { kfilecustomdialog_receivers_isbase = value; }
    inline void setKFileCustomDialog_IsSignalConnected_IsBase(bool value) const { kfilecustomdialog_issignalconnected_isbase = value; }
    inline void setKFileCustomDialog_GetDecodedMetricF_IsBase(bool value) const { kfilecustomdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfilecustomdialog_metaobject_isbase) {
            kfilecustomdialog_metaobject_isbase = false;
            return KFileCustomDialog::metaObject();
        }
        auto metaobject_cb = kfilecustomdialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KFileCustomDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfilecustomdialog_metacast_isbase) {
            kfilecustomdialog_metacast_isbase = false;
            return KFileCustomDialog::qt_metacast(param1);
        }
        auto metacast_cb = kfilecustomdialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KFileCustomDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfilecustomdialog_metacall_isbase) {
            kfilecustomdialog_metacall_isbase = false;
            return KFileCustomDialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kfilecustomdialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFileCustomDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kfilecustomdialog_accept_isbase) {
            kfilecustomdialog_accept_isbase = false;
            KFileCustomDialog::accept();
            return;
        }
        auto accept_cb = kfilecustomdialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        KFileCustomDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfilecustomdialog_setvisible_isbase) {
            kfilecustomdialog_setvisible_isbase = false;
            KFileCustomDialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = kfilecustomdialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfilecustomdialog_sizehint_isbase) {
            kfilecustomdialog_sizehint_isbase = false;
            return KFileCustomDialog::sizeHint();
        }
        auto sizehint_cb = kfilecustomdialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KFileCustomDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfilecustomdialog_minimumsizehint_isbase) {
            kfilecustomdialog_minimumsizehint_isbase = false;
            return KFileCustomDialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = kfilecustomdialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KFileCustomDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kfilecustomdialog_open_isbase) {
            kfilecustomdialog_open_isbase = false;
            KFileCustomDialog::open();
            return;
        }
        auto open_cb = kfilecustomdialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        KFileCustomDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kfilecustomdialog_exec_isbase) {
            kfilecustomdialog_exec_isbase = false;
            return KFileCustomDialog::exec();
        }
        auto exec_cb = kfilecustomdialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return KFileCustomDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kfilecustomdialog_done_isbase) {
            kfilecustomdialog_done_isbase = false;
            KFileCustomDialog::done(param1);
            return;
        }
        auto done_cb = kfilecustomdialog_done_callback;
        if (done_cb) {
            int cbval1 = param1;

            done_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kfilecustomdialog_reject_isbase) {
            kfilecustomdialog_reject_isbase = false;
            KFileCustomDialog::reject();
            return;
        }
        auto reject_cb = kfilecustomdialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        KFileCustomDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kfilecustomdialog_keypressevent_isbase) {
            kfilecustomdialog_keypressevent_isbase = false;
            KFileCustomDialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = kfilecustomdialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kfilecustomdialog_closeevent_isbase) {
            kfilecustomdialog_closeevent_isbase = false;
            KFileCustomDialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = kfilecustomdialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kfilecustomdialog_showevent_isbase) {
            kfilecustomdialog_showevent_isbase = false;
            KFileCustomDialog::showEvent(param1);
            return;
        }
        auto showevent_cb = kfilecustomdialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kfilecustomdialog_resizeevent_isbase) {
            kfilecustomdialog_resizeevent_isbase = false;
            KFileCustomDialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = kfilecustomdialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kfilecustomdialog_contextmenuevent_isbase) {
            kfilecustomdialog_contextmenuevent_isbase = false;
            KFileCustomDialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = kfilecustomdialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kfilecustomdialog_eventfilter_isbase) {
            kfilecustomdialog_eventfilter_isbase = false;
            return KFileCustomDialog::eventFilter(param1, param2);
        }
        auto eventfilter_cb = kfilecustomdialog_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFileCustomDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfilecustomdialog_devtype_isbase) {
            kfilecustomdialog_devtype_isbase = false;
            return KFileCustomDialog::devType();
        }
        auto devtype_cb = kfilecustomdialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KFileCustomDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfilecustomdialog_heightforwidth_isbase) {
            kfilecustomdialog_heightforwidth_isbase = false;
            return KFileCustomDialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = kfilecustomdialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFileCustomDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfilecustomdialog_hasheightforwidth_isbase) {
            kfilecustomdialog_hasheightforwidth_isbase = false;
            return KFileCustomDialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kfilecustomdialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KFileCustomDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfilecustomdialog_paintengine_isbase) {
            kfilecustomdialog_paintengine_isbase = false;
            return KFileCustomDialog::paintEngine();
        }
        auto paintengine_cb = kfilecustomdialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KFileCustomDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfilecustomdialog_event_isbase) {
            kfilecustomdialog_event_isbase = false;
            return KFileCustomDialog::event(event);
        }
        auto event_cb = kfilecustomdialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KFileCustomDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kfilecustomdialog_mousepressevent_isbase) {
            kfilecustomdialog_mousepressevent_isbase = false;
            KFileCustomDialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kfilecustomdialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kfilecustomdialog_mousereleaseevent_isbase) {
            kfilecustomdialog_mousereleaseevent_isbase = false;
            KFileCustomDialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kfilecustomdialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfilecustomdialog_mousedoubleclickevent_isbase) {
            kfilecustomdialog_mousedoubleclickevent_isbase = false;
            KFileCustomDialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kfilecustomdialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kfilecustomdialog_mousemoveevent_isbase) {
            kfilecustomdialog_mousemoveevent_isbase = false;
            KFileCustomDialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kfilecustomdialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kfilecustomdialog_wheelevent_isbase) {
            kfilecustomdialog_wheelevent_isbase = false;
            KFileCustomDialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kfilecustomdialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kfilecustomdialog_keyreleaseevent_isbase) {
            kfilecustomdialog_keyreleaseevent_isbase = false;
            KFileCustomDialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kfilecustomdialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kfilecustomdialog_focusinevent_isbase) {
            kfilecustomdialog_focusinevent_isbase = false;
            KFileCustomDialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kfilecustomdialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kfilecustomdialog_focusoutevent_isbase) {
            kfilecustomdialog_focusoutevent_isbase = false;
            KFileCustomDialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kfilecustomdialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfilecustomdialog_enterevent_isbase) {
            kfilecustomdialog_enterevent_isbase = false;
            KFileCustomDialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = kfilecustomdialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfilecustomdialog_leaveevent_isbase) {
            kfilecustomdialog_leaveevent_isbase = false;
            KFileCustomDialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kfilecustomdialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kfilecustomdialog_paintevent_isbase) {
            kfilecustomdialog_paintevent_isbase = false;
            KFileCustomDialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = kfilecustomdialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfilecustomdialog_moveevent_isbase) {
            kfilecustomdialog_moveevent_isbase = false;
            KFileCustomDialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = kfilecustomdialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfilecustomdialog_tabletevent_isbase) {
            kfilecustomdialog_tabletevent_isbase = false;
            KFileCustomDialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kfilecustomdialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfilecustomdialog_actionevent_isbase) {
            kfilecustomdialog_actionevent_isbase = false;
            KFileCustomDialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = kfilecustomdialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfilecustomdialog_dragenterevent_isbase) {
            kfilecustomdialog_dragenterevent_isbase = false;
            KFileCustomDialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kfilecustomdialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfilecustomdialog_dragmoveevent_isbase) {
            kfilecustomdialog_dragmoveevent_isbase = false;
            KFileCustomDialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kfilecustomdialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfilecustomdialog_dragleaveevent_isbase) {
            kfilecustomdialog_dragleaveevent_isbase = false;
            KFileCustomDialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kfilecustomdialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfilecustomdialog_dropevent_isbase) {
            kfilecustomdialog_dropevent_isbase = false;
            KFileCustomDialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = kfilecustomdialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kfilecustomdialog_hideevent_isbase) {
            kfilecustomdialog_hideevent_isbase = false;
            KFileCustomDialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = kfilecustomdialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfilecustomdialog_nativeevent_isbase) {
            kfilecustomdialog_nativeevent_isbase = false;
            return KFileCustomDialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kfilecustomdialog_nativeevent_callback;
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
        return KFileCustomDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kfilecustomdialog_changeevent_isbase) {
            kfilecustomdialog_changeevent_isbase = false;
            KFileCustomDialog::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kfilecustomdialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfilecustomdialog_metric_isbase) {
            kfilecustomdialog_metric_isbase = false;
            return KFileCustomDialog::metric(param1);
        }
        auto metric_cb = kfilecustomdialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFileCustomDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfilecustomdialog_initpainter_isbase) {
            kfilecustomdialog_initpainter_isbase = false;
            KFileCustomDialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = kfilecustomdialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfilecustomdialog_redirected_isbase) {
            kfilecustomdialog_redirected_isbase = false;
            return KFileCustomDialog::redirected(offset);
        }
        auto redirected_cb = kfilecustomdialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KFileCustomDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfilecustomdialog_sharedpainter_isbase) {
            kfilecustomdialog_sharedpainter_isbase = false;
            return KFileCustomDialog::sharedPainter();
        }
        auto sharedpainter_cb = kfilecustomdialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KFileCustomDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kfilecustomdialog_inputmethodevent_isbase) {
            kfilecustomdialog_inputmethodevent_isbase = false;
            KFileCustomDialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kfilecustomdialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kfilecustomdialog_inputmethodquery_isbase) {
            kfilecustomdialog_inputmethodquery_isbase = false;
            return KFileCustomDialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kfilecustomdialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KFileCustomDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfilecustomdialog_focusnextprevchild_isbase) {
            kfilecustomdialog_focusnextprevchild_isbase = false;
            return KFileCustomDialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kfilecustomdialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KFileCustomDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfilecustomdialog_timerevent_isbase) {
            kfilecustomdialog_timerevent_isbase = false;
            KFileCustomDialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = kfilecustomdialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfilecustomdialog_childevent_isbase) {
            kfilecustomdialog_childevent_isbase = false;
            KFileCustomDialog::childEvent(event);
            return;
        }
        auto childevent_cb = kfilecustomdialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfilecustomdialog_customevent_isbase) {
            kfilecustomdialog_customevent_isbase = false;
            KFileCustomDialog::customEvent(event);
            return;
        }
        auto customevent_cb = kfilecustomdialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfilecustomdialog_connectnotify_isbase) {
            kfilecustomdialog_connectnotify_isbase = false;
            KFileCustomDialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kfilecustomdialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfilecustomdialog_disconnectnotify_isbase) {
            kfilecustomdialog_disconnectnotify_isbase = false;
            KFileCustomDialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kfilecustomdialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kfilecustomdialog_adjustposition_isbase) {
            kfilecustomdialog_adjustposition_isbase = false;
            KFileCustomDialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = kfilecustomdialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        KFileCustomDialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kfilecustomdialog_updatemicrofocus_isbase) {
            kfilecustomdialog_updatemicrofocus_isbase = false;
            KFileCustomDialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kfilecustomdialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KFileCustomDialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kfilecustomdialog_create_isbase) {
            kfilecustomdialog_create_isbase = false;
            KFileCustomDialog::create();
            return;
        }
        auto create_cb = kfilecustomdialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KFileCustomDialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kfilecustomdialog_destroy_isbase) {
            kfilecustomdialog_destroy_isbase = false;
            KFileCustomDialog::destroy();
            return;
        }
        auto destroy_cb = kfilecustomdialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KFileCustomDialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kfilecustomdialog_focusnextchild_isbase) {
            kfilecustomdialog_focusnextchild_isbase = false;
            return KFileCustomDialog::focusNextChild();
        }
        auto focusnextchild_cb = kfilecustomdialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KFileCustomDialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kfilecustomdialog_focuspreviouschild_isbase) {
            kfilecustomdialog_focuspreviouschild_isbase = false;
            return KFileCustomDialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kfilecustomdialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KFileCustomDialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfilecustomdialog_sender_isbase) {
            kfilecustomdialog_sender_isbase = false;
            return KFileCustomDialog::sender();
        }
        auto sender_cb = kfilecustomdialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KFileCustomDialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfilecustomdialog_sendersignalindex_isbase) {
            kfilecustomdialog_sendersignalindex_isbase = false;
            return KFileCustomDialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = kfilecustomdialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KFileCustomDialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfilecustomdialog_receivers_isbase) {
            kfilecustomdialog_receivers_isbase = false;
            return KFileCustomDialog::receivers(signal);
        }
        auto receivers_cb = kfilecustomdialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFileCustomDialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfilecustomdialog_issignalconnected_isbase) {
            kfilecustomdialog_issignalconnected_isbase = false;
            return KFileCustomDialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kfilecustomdialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KFileCustomDialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kfilecustomdialog_getdecodedmetricf_isbase) {
            kfilecustomdialog_getdecodedmetricf_isbase = false;
            return KFileCustomDialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kfilecustomdialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KFileCustomDialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KFileCustomDialog_KeyPressEvent(KFileCustomDialog* self, QKeyEvent* param1);
    friend void KFileCustomDialog_SuperKeyPressEvent(KFileCustomDialog* self, QKeyEvent* param1);
    friend void KFileCustomDialog_CloseEvent(KFileCustomDialog* self, QCloseEvent* param1);
    friend void KFileCustomDialog_SuperCloseEvent(KFileCustomDialog* self, QCloseEvent* param1);
    friend void KFileCustomDialog_ShowEvent(KFileCustomDialog* self, QShowEvent* param1);
    friend void KFileCustomDialog_SuperShowEvent(KFileCustomDialog* self, QShowEvent* param1);
    friend void KFileCustomDialog_ResizeEvent(KFileCustomDialog* self, QResizeEvent* param1);
    friend void KFileCustomDialog_SuperResizeEvent(KFileCustomDialog* self, QResizeEvent* param1);
    friend void KFileCustomDialog_ContextMenuEvent(KFileCustomDialog* self, QContextMenuEvent* param1);
    friend void KFileCustomDialog_SuperContextMenuEvent(KFileCustomDialog* self, QContextMenuEvent* param1);
    friend bool KFileCustomDialog_EventFilter(KFileCustomDialog* self, QObject* param1, QEvent* param2);
    friend bool KFileCustomDialog_SuperEventFilter(KFileCustomDialog* self, QObject* param1, QEvent* param2);
    friend bool KFileCustomDialog_Event(KFileCustomDialog* self, QEvent* event);
    friend bool KFileCustomDialog_SuperEvent(KFileCustomDialog* self, QEvent* event);
    friend void KFileCustomDialog_MousePressEvent(KFileCustomDialog* self, QMouseEvent* event);
    friend void KFileCustomDialog_SuperMousePressEvent(KFileCustomDialog* self, QMouseEvent* event);
    friend void KFileCustomDialog_MouseReleaseEvent(KFileCustomDialog* self, QMouseEvent* event);
    friend void KFileCustomDialog_SuperMouseReleaseEvent(KFileCustomDialog* self, QMouseEvent* event);
    friend void KFileCustomDialog_MouseDoubleClickEvent(KFileCustomDialog* self, QMouseEvent* event);
    friend void KFileCustomDialog_SuperMouseDoubleClickEvent(KFileCustomDialog* self, QMouseEvent* event);
    friend void KFileCustomDialog_MouseMoveEvent(KFileCustomDialog* self, QMouseEvent* event);
    friend void KFileCustomDialog_SuperMouseMoveEvent(KFileCustomDialog* self, QMouseEvent* event);
    friend void KFileCustomDialog_WheelEvent(KFileCustomDialog* self, QWheelEvent* event);
    friend void KFileCustomDialog_SuperWheelEvent(KFileCustomDialog* self, QWheelEvent* event);
    friend void KFileCustomDialog_KeyReleaseEvent(KFileCustomDialog* self, QKeyEvent* event);
    friend void KFileCustomDialog_SuperKeyReleaseEvent(KFileCustomDialog* self, QKeyEvent* event);
    friend void KFileCustomDialog_FocusInEvent(KFileCustomDialog* self, QFocusEvent* event);
    friend void KFileCustomDialog_SuperFocusInEvent(KFileCustomDialog* self, QFocusEvent* event);
    friend void KFileCustomDialog_FocusOutEvent(KFileCustomDialog* self, QFocusEvent* event);
    friend void KFileCustomDialog_SuperFocusOutEvent(KFileCustomDialog* self, QFocusEvent* event);
    friend void KFileCustomDialog_EnterEvent(KFileCustomDialog* self, QEnterEvent* event);
    friend void KFileCustomDialog_SuperEnterEvent(KFileCustomDialog* self, QEnterEvent* event);
    friend void KFileCustomDialog_LeaveEvent(KFileCustomDialog* self, QEvent* event);
    friend void KFileCustomDialog_SuperLeaveEvent(KFileCustomDialog* self, QEvent* event);
    friend void KFileCustomDialog_PaintEvent(KFileCustomDialog* self, QPaintEvent* event);
    friend void KFileCustomDialog_SuperPaintEvent(KFileCustomDialog* self, QPaintEvent* event);
    friend void KFileCustomDialog_MoveEvent(KFileCustomDialog* self, QMoveEvent* event);
    friend void KFileCustomDialog_SuperMoveEvent(KFileCustomDialog* self, QMoveEvent* event);
    friend void KFileCustomDialog_TabletEvent(KFileCustomDialog* self, QTabletEvent* event);
    friend void KFileCustomDialog_SuperTabletEvent(KFileCustomDialog* self, QTabletEvent* event);
    friend void KFileCustomDialog_ActionEvent(KFileCustomDialog* self, QActionEvent* event);
    friend void KFileCustomDialog_SuperActionEvent(KFileCustomDialog* self, QActionEvent* event);
    friend void KFileCustomDialog_DragEnterEvent(KFileCustomDialog* self, QDragEnterEvent* event);
    friend void KFileCustomDialog_SuperDragEnterEvent(KFileCustomDialog* self, QDragEnterEvent* event);
    friend void KFileCustomDialog_DragMoveEvent(KFileCustomDialog* self, QDragMoveEvent* event);
    friend void KFileCustomDialog_SuperDragMoveEvent(KFileCustomDialog* self, QDragMoveEvent* event);
    friend void KFileCustomDialog_DragLeaveEvent(KFileCustomDialog* self, QDragLeaveEvent* event);
    friend void KFileCustomDialog_SuperDragLeaveEvent(KFileCustomDialog* self, QDragLeaveEvent* event);
    friend void KFileCustomDialog_DropEvent(KFileCustomDialog* self, QDropEvent* event);
    friend void KFileCustomDialog_SuperDropEvent(KFileCustomDialog* self, QDropEvent* event);
    friend void KFileCustomDialog_HideEvent(KFileCustomDialog* self, QHideEvent* event);
    friend void KFileCustomDialog_SuperHideEvent(KFileCustomDialog* self, QHideEvent* event);
    friend bool KFileCustomDialog_NativeEvent(KFileCustomDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KFileCustomDialog_SuperNativeEvent(KFileCustomDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KFileCustomDialog_ChangeEvent(KFileCustomDialog* self, QEvent* param1);
    friend void KFileCustomDialog_SuperChangeEvent(KFileCustomDialog* self, QEvent* param1);
    friend int KFileCustomDialog_Metric(const KFileCustomDialog* self, int param1);
    friend int KFileCustomDialog_SuperMetric(const KFileCustomDialog* self, int param1);
    friend void KFileCustomDialog_InitPainter(const KFileCustomDialog* self, QPainter* painter);
    friend void KFileCustomDialog_SuperInitPainter(const KFileCustomDialog* self, QPainter* painter);
    friend QPaintDevice* KFileCustomDialog_Redirected(const KFileCustomDialog* self, QPoint* offset);
    friend QPaintDevice* KFileCustomDialog_SuperRedirected(const KFileCustomDialog* self, QPoint* offset);
    friend QPainter* KFileCustomDialog_SharedPainter(const KFileCustomDialog* self);
    friend QPainter* KFileCustomDialog_SuperSharedPainter(const KFileCustomDialog* self);
    friend void KFileCustomDialog_InputMethodEvent(KFileCustomDialog* self, QInputMethodEvent* param1);
    friend void KFileCustomDialog_SuperInputMethodEvent(KFileCustomDialog* self, QInputMethodEvent* param1);
    friend bool KFileCustomDialog_FocusNextPrevChild(KFileCustomDialog* self, bool next);
    friend bool KFileCustomDialog_SuperFocusNextPrevChild(KFileCustomDialog* self, bool next);
    friend void KFileCustomDialog_TimerEvent(KFileCustomDialog* self, QTimerEvent* event);
    friend void KFileCustomDialog_SuperTimerEvent(KFileCustomDialog* self, QTimerEvent* event);
    friend void KFileCustomDialog_ChildEvent(KFileCustomDialog* self, QChildEvent* event);
    friend void KFileCustomDialog_SuperChildEvent(KFileCustomDialog* self, QChildEvent* event);
    friend void KFileCustomDialog_CustomEvent(KFileCustomDialog* self, QEvent* event);
    friend void KFileCustomDialog_SuperCustomEvent(KFileCustomDialog* self, QEvent* event);
    friend void KFileCustomDialog_ConnectNotify(KFileCustomDialog* self, const QMetaMethod* signal);
    friend void KFileCustomDialog_SuperConnectNotify(KFileCustomDialog* self, const QMetaMethod* signal);
    friend void KFileCustomDialog_DisconnectNotify(KFileCustomDialog* self, const QMetaMethod* signal);
    friend void KFileCustomDialog_SuperDisconnectNotify(KFileCustomDialog* self, const QMetaMethod* signal);
    friend void KFileCustomDialog_AdjustPosition(KFileCustomDialog* self, QWidget* param1);
    friend void KFileCustomDialog_SuperAdjustPosition(KFileCustomDialog* self, QWidget* param1);
    friend void KFileCustomDialog_UpdateMicroFocus(KFileCustomDialog* self);
    friend void KFileCustomDialog_SuperUpdateMicroFocus(KFileCustomDialog* self);
    friend void KFileCustomDialog_Create(KFileCustomDialog* self);
    friend void KFileCustomDialog_SuperCreate(KFileCustomDialog* self);
    friend void KFileCustomDialog_Destroy(KFileCustomDialog* self);
    friend void KFileCustomDialog_SuperDestroy(KFileCustomDialog* self);
    friend bool KFileCustomDialog_FocusNextChild(KFileCustomDialog* self);
    friend bool KFileCustomDialog_SuperFocusNextChild(KFileCustomDialog* self);
    friend bool KFileCustomDialog_FocusPreviousChild(KFileCustomDialog* self);
    friend bool KFileCustomDialog_SuperFocusPreviousChild(KFileCustomDialog* self);
    friend QObject* KFileCustomDialog_Sender(const KFileCustomDialog* self);
    friend QObject* KFileCustomDialog_SuperSender(const KFileCustomDialog* self);
    friend int KFileCustomDialog_SenderSignalIndex(const KFileCustomDialog* self);
    friend int KFileCustomDialog_SuperSenderSignalIndex(const KFileCustomDialog* self);
    friend int KFileCustomDialog_Receivers(const KFileCustomDialog* self, const char* signal);
    friend int KFileCustomDialog_SuperReceivers(const KFileCustomDialog* self, const char* signal);
    friend bool KFileCustomDialog_IsSignalConnected(const KFileCustomDialog* self, const QMetaMethod* signal);
    friend bool KFileCustomDialog_SuperIsSignalConnected(const KFileCustomDialog* self, const QMetaMethod* signal);
    friend double KFileCustomDialog_GetDecodedMetricF(const KFileCustomDialog* self, int metricA, int metricB);
    friend double KFileCustomDialog_SuperGetDecodedMetricF(const KFileCustomDialog* self, int metricA, int metricB);
};

#endif
