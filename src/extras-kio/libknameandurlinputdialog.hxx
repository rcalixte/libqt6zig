#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKNAMEANDURLINPUTDIALOG_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKNAMEANDURLINPUTDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNameAndUrlInputDialog so that we can call protected methods
class VirtualKNameAndUrlInputDialog final : public KNameAndUrlInputDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKNameAndUrlInputDialog = true;

    // Virtual class public types (including callbacks)
    using KNameAndUrlInputDialog_MetaObject_Callback = QMetaObject* (*)();
    using KNameAndUrlInputDialog_Metacast_Callback = void* (*)(KNameAndUrlInputDialog*, const char*);
    using KNameAndUrlInputDialog_Metacall_Callback = int (*)(KNameAndUrlInputDialog*, int, int, void**);
    using KNameAndUrlInputDialog_SetVisible_Callback = void (*)(KNameAndUrlInputDialog*, bool);
    using KNameAndUrlInputDialog_SizeHint_Callback = QSize* (*)();
    using KNameAndUrlInputDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KNameAndUrlInputDialog_Open_Callback = void (*)();
    using KNameAndUrlInputDialog_Exec_Callback = int (*)();
    using KNameAndUrlInputDialog_Done_Callback = void (*)(KNameAndUrlInputDialog*, int);
    using KNameAndUrlInputDialog_Accept_Callback = void (*)();
    using KNameAndUrlInputDialog_Reject_Callback = void (*)();
    using KNameAndUrlInputDialog_KeyPressEvent_Callback = void (*)(KNameAndUrlInputDialog*, QKeyEvent*);
    using KNameAndUrlInputDialog_CloseEvent_Callback = void (*)(KNameAndUrlInputDialog*, QCloseEvent*);
    using KNameAndUrlInputDialog_ShowEvent_Callback = void (*)(KNameAndUrlInputDialog*, QShowEvent*);
    using KNameAndUrlInputDialog_ResizeEvent_Callback = void (*)(KNameAndUrlInputDialog*, QResizeEvent*);
    using KNameAndUrlInputDialog_ContextMenuEvent_Callback = void (*)(KNameAndUrlInputDialog*, QContextMenuEvent*);
    using KNameAndUrlInputDialog_EventFilter_Callback = bool (*)(KNameAndUrlInputDialog*, QObject*, QEvent*);
    using KNameAndUrlInputDialog_DevType_Callback = int (*)();
    using KNameAndUrlInputDialog_HeightForWidth_Callback = int (*)(const KNameAndUrlInputDialog*, int);
    using KNameAndUrlInputDialog_HasHeightForWidth_Callback = bool (*)();
    using KNameAndUrlInputDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KNameAndUrlInputDialog_Event_Callback = bool (*)(KNameAndUrlInputDialog*, QEvent*);
    using KNameAndUrlInputDialog_MousePressEvent_Callback = void (*)(KNameAndUrlInputDialog*, QMouseEvent*);
    using KNameAndUrlInputDialog_MouseReleaseEvent_Callback = void (*)(KNameAndUrlInputDialog*, QMouseEvent*);
    using KNameAndUrlInputDialog_MouseDoubleClickEvent_Callback = void (*)(KNameAndUrlInputDialog*, QMouseEvent*);
    using KNameAndUrlInputDialog_MouseMoveEvent_Callback = void (*)(KNameAndUrlInputDialog*, QMouseEvent*);
    using KNameAndUrlInputDialog_WheelEvent_Callback = void (*)(KNameAndUrlInputDialog*, QWheelEvent*);
    using KNameAndUrlInputDialog_KeyReleaseEvent_Callback = void (*)(KNameAndUrlInputDialog*, QKeyEvent*);
    using KNameAndUrlInputDialog_FocusInEvent_Callback = void (*)(KNameAndUrlInputDialog*, QFocusEvent*);
    using KNameAndUrlInputDialog_FocusOutEvent_Callback = void (*)(KNameAndUrlInputDialog*, QFocusEvent*);
    using KNameAndUrlInputDialog_EnterEvent_Callback = void (*)(KNameAndUrlInputDialog*, QEnterEvent*);
    using KNameAndUrlInputDialog_LeaveEvent_Callback = void (*)(KNameAndUrlInputDialog*, QEvent*);
    using KNameAndUrlInputDialog_PaintEvent_Callback = void (*)(KNameAndUrlInputDialog*, QPaintEvent*);
    using KNameAndUrlInputDialog_MoveEvent_Callback = void (*)(KNameAndUrlInputDialog*, QMoveEvent*);
    using KNameAndUrlInputDialog_TabletEvent_Callback = void (*)(KNameAndUrlInputDialog*, QTabletEvent*);
    using KNameAndUrlInputDialog_ActionEvent_Callback = void (*)(KNameAndUrlInputDialog*, QActionEvent*);
    using KNameAndUrlInputDialog_DragEnterEvent_Callback = void (*)(KNameAndUrlInputDialog*, QDragEnterEvent*);
    using KNameAndUrlInputDialog_DragMoveEvent_Callback = void (*)(KNameAndUrlInputDialog*, QDragMoveEvent*);
    using KNameAndUrlInputDialog_DragLeaveEvent_Callback = void (*)(KNameAndUrlInputDialog*, QDragLeaveEvent*);
    using KNameAndUrlInputDialog_DropEvent_Callback = void (*)(KNameAndUrlInputDialog*, QDropEvent*);
    using KNameAndUrlInputDialog_HideEvent_Callback = void (*)(KNameAndUrlInputDialog*, QHideEvent*);
    using KNameAndUrlInputDialog_NativeEvent_Callback = bool (*)(KNameAndUrlInputDialog*, libqt_string, void*, intptr_t*);
    using KNameAndUrlInputDialog_ChangeEvent_Callback = void (*)(KNameAndUrlInputDialog*, QEvent*);
    using KNameAndUrlInputDialog_Metric_Callback = int (*)(const KNameAndUrlInputDialog*, int);
    using KNameAndUrlInputDialog_InitPainter_Callback = void (*)(const KNameAndUrlInputDialog*, QPainter*);
    using KNameAndUrlInputDialog_Redirected_Callback = QPaintDevice* (*)(const KNameAndUrlInputDialog*, QPoint*);
    using KNameAndUrlInputDialog_SharedPainter_Callback = QPainter* (*)();
    using KNameAndUrlInputDialog_InputMethodEvent_Callback = void (*)(KNameAndUrlInputDialog*, QInputMethodEvent*);
    using KNameAndUrlInputDialog_InputMethodQuery_Callback = QVariant* (*)(const KNameAndUrlInputDialog*, int);
    using KNameAndUrlInputDialog_FocusNextPrevChild_Callback = bool (*)(KNameAndUrlInputDialog*, bool);
    using KNameAndUrlInputDialog_TimerEvent_Callback = void (*)(KNameAndUrlInputDialog*, QTimerEvent*);
    using KNameAndUrlInputDialog_ChildEvent_Callback = void (*)(KNameAndUrlInputDialog*, QChildEvent*);
    using KNameAndUrlInputDialog_CustomEvent_Callback = void (*)(KNameAndUrlInputDialog*, QEvent*);
    using KNameAndUrlInputDialog_ConnectNotify_Callback = void (*)(KNameAndUrlInputDialog*, QMetaMethod*);
    using KNameAndUrlInputDialog_DisconnectNotify_Callback = void (*)(KNameAndUrlInputDialog*, QMetaMethod*);
    using KNameAndUrlInputDialog_AdjustPosition_Callback = void (*)(KNameAndUrlInputDialog*, QWidget*);
    using KNameAndUrlInputDialog_UpdateMicroFocus_Callback = void (*)();
    using KNameAndUrlInputDialog_Create_Callback = void (*)();
    using KNameAndUrlInputDialog_Destroy_Callback = void (*)();
    using KNameAndUrlInputDialog_FocusNextChild_Callback = bool (*)();
    using KNameAndUrlInputDialog_FocusPreviousChild_Callback = bool (*)();
    using KNameAndUrlInputDialog_Sender_Callback = QObject* (*)();
    using KNameAndUrlInputDialog_SenderSignalIndex_Callback = int (*)();
    using KNameAndUrlInputDialog_Receivers_Callback = int (*)(const KNameAndUrlInputDialog*, const char*);
    using KNameAndUrlInputDialog_IsSignalConnected_Callback = bool (*)(const KNameAndUrlInputDialog*, QMetaMethod*);
    using KNameAndUrlInputDialog_GetDecodedMetricF_Callback = double (*)(const KNameAndUrlInputDialog*, int, int);

  protected:
    // Instance callback storage
    KNameAndUrlInputDialog_MetaObject_Callback knameandurlinputdialog_metaobject_callback = nullptr;
    KNameAndUrlInputDialog_Metacast_Callback knameandurlinputdialog_metacast_callback = nullptr;
    KNameAndUrlInputDialog_Metacall_Callback knameandurlinputdialog_metacall_callback = nullptr;
    KNameAndUrlInputDialog_SetVisible_Callback knameandurlinputdialog_setvisible_callback = nullptr;
    KNameAndUrlInputDialog_SizeHint_Callback knameandurlinputdialog_sizehint_callback = nullptr;
    KNameAndUrlInputDialog_MinimumSizeHint_Callback knameandurlinputdialog_minimumsizehint_callback = nullptr;
    KNameAndUrlInputDialog_Open_Callback knameandurlinputdialog_open_callback = nullptr;
    KNameAndUrlInputDialog_Exec_Callback knameandurlinputdialog_exec_callback = nullptr;
    KNameAndUrlInputDialog_Done_Callback knameandurlinputdialog_done_callback = nullptr;
    KNameAndUrlInputDialog_Accept_Callback knameandurlinputdialog_accept_callback = nullptr;
    KNameAndUrlInputDialog_Reject_Callback knameandurlinputdialog_reject_callback = nullptr;
    KNameAndUrlInputDialog_KeyPressEvent_Callback knameandurlinputdialog_keypressevent_callback = nullptr;
    KNameAndUrlInputDialog_CloseEvent_Callback knameandurlinputdialog_closeevent_callback = nullptr;
    KNameAndUrlInputDialog_ShowEvent_Callback knameandurlinputdialog_showevent_callback = nullptr;
    KNameAndUrlInputDialog_ResizeEvent_Callback knameandurlinputdialog_resizeevent_callback = nullptr;
    KNameAndUrlInputDialog_ContextMenuEvent_Callback knameandurlinputdialog_contextmenuevent_callback = nullptr;
    KNameAndUrlInputDialog_EventFilter_Callback knameandurlinputdialog_eventfilter_callback = nullptr;
    KNameAndUrlInputDialog_DevType_Callback knameandurlinputdialog_devtype_callback = nullptr;
    KNameAndUrlInputDialog_HeightForWidth_Callback knameandurlinputdialog_heightforwidth_callback = nullptr;
    KNameAndUrlInputDialog_HasHeightForWidth_Callback knameandurlinputdialog_hasheightforwidth_callback = nullptr;
    KNameAndUrlInputDialog_PaintEngine_Callback knameandurlinputdialog_paintengine_callback = nullptr;
    KNameAndUrlInputDialog_Event_Callback knameandurlinputdialog_event_callback = nullptr;
    KNameAndUrlInputDialog_MousePressEvent_Callback knameandurlinputdialog_mousepressevent_callback = nullptr;
    KNameAndUrlInputDialog_MouseReleaseEvent_Callback knameandurlinputdialog_mousereleaseevent_callback = nullptr;
    KNameAndUrlInputDialog_MouseDoubleClickEvent_Callback knameandurlinputdialog_mousedoubleclickevent_callback = nullptr;
    KNameAndUrlInputDialog_MouseMoveEvent_Callback knameandurlinputdialog_mousemoveevent_callback = nullptr;
    KNameAndUrlInputDialog_WheelEvent_Callback knameandurlinputdialog_wheelevent_callback = nullptr;
    KNameAndUrlInputDialog_KeyReleaseEvent_Callback knameandurlinputdialog_keyreleaseevent_callback = nullptr;
    KNameAndUrlInputDialog_FocusInEvent_Callback knameandurlinputdialog_focusinevent_callback = nullptr;
    KNameAndUrlInputDialog_FocusOutEvent_Callback knameandurlinputdialog_focusoutevent_callback = nullptr;
    KNameAndUrlInputDialog_EnterEvent_Callback knameandurlinputdialog_enterevent_callback = nullptr;
    KNameAndUrlInputDialog_LeaveEvent_Callback knameandurlinputdialog_leaveevent_callback = nullptr;
    KNameAndUrlInputDialog_PaintEvent_Callback knameandurlinputdialog_paintevent_callback = nullptr;
    KNameAndUrlInputDialog_MoveEvent_Callback knameandurlinputdialog_moveevent_callback = nullptr;
    KNameAndUrlInputDialog_TabletEvent_Callback knameandurlinputdialog_tabletevent_callback = nullptr;
    KNameAndUrlInputDialog_ActionEvent_Callback knameandurlinputdialog_actionevent_callback = nullptr;
    KNameAndUrlInputDialog_DragEnterEvent_Callback knameandurlinputdialog_dragenterevent_callback = nullptr;
    KNameAndUrlInputDialog_DragMoveEvent_Callback knameandurlinputdialog_dragmoveevent_callback = nullptr;
    KNameAndUrlInputDialog_DragLeaveEvent_Callback knameandurlinputdialog_dragleaveevent_callback = nullptr;
    KNameAndUrlInputDialog_DropEvent_Callback knameandurlinputdialog_dropevent_callback = nullptr;
    KNameAndUrlInputDialog_HideEvent_Callback knameandurlinputdialog_hideevent_callback = nullptr;
    KNameAndUrlInputDialog_NativeEvent_Callback knameandurlinputdialog_nativeevent_callback = nullptr;
    KNameAndUrlInputDialog_ChangeEvent_Callback knameandurlinputdialog_changeevent_callback = nullptr;
    KNameAndUrlInputDialog_Metric_Callback knameandurlinputdialog_metric_callback = nullptr;
    KNameAndUrlInputDialog_InitPainter_Callback knameandurlinputdialog_initpainter_callback = nullptr;
    KNameAndUrlInputDialog_Redirected_Callback knameandurlinputdialog_redirected_callback = nullptr;
    KNameAndUrlInputDialog_SharedPainter_Callback knameandurlinputdialog_sharedpainter_callback = nullptr;
    KNameAndUrlInputDialog_InputMethodEvent_Callback knameandurlinputdialog_inputmethodevent_callback = nullptr;
    KNameAndUrlInputDialog_InputMethodQuery_Callback knameandurlinputdialog_inputmethodquery_callback = nullptr;
    KNameAndUrlInputDialog_FocusNextPrevChild_Callback knameandurlinputdialog_focusnextprevchild_callback = nullptr;
    KNameAndUrlInputDialog_TimerEvent_Callback knameandurlinputdialog_timerevent_callback = nullptr;
    KNameAndUrlInputDialog_ChildEvent_Callback knameandurlinputdialog_childevent_callback = nullptr;
    KNameAndUrlInputDialog_CustomEvent_Callback knameandurlinputdialog_customevent_callback = nullptr;
    KNameAndUrlInputDialog_ConnectNotify_Callback knameandurlinputdialog_connectnotify_callback = nullptr;
    KNameAndUrlInputDialog_DisconnectNotify_Callback knameandurlinputdialog_disconnectnotify_callback = nullptr;
    KNameAndUrlInputDialog_AdjustPosition_Callback knameandurlinputdialog_adjustposition_callback = nullptr;
    KNameAndUrlInputDialog_UpdateMicroFocus_Callback knameandurlinputdialog_updatemicrofocus_callback = nullptr;
    KNameAndUrlInputDialog_Create_Callback knameandurlinputdialog_create_callback = nullptr;
    KNameAndUrlInputDialog_Destroy_Callback knameandurlinputdialog_destroy_callback = nullptr;
    KNameAndUrlInputDialog_FocusNextChild_Callback knameandurlinputdialog_focusnextchild_callback = nullptr;
    KNameAndUrlInputDialog_FocusPreviousChild_Callback knameandurlinputdialog_focuspreviouschild_callback = nullptr;
    KNameAndUrlInputDialog_Sender_Callback knameandurlinputdialog_sender_callback = nullptr;
    KNameAndUrlInputDialog_SenderSignalIndex_Callback knameandurlinputdialog_sendersignalindex_callback = nullptr;
    KNameAndUrlInputDialog_Receivers_Callback knameandurlinputdialog_receivers_callback = nullptr;
    KNameAndUrlInputDialog_IsSignalConnected_Callback knameandurlinputdialog_issignalconnected_callback = nullptr;
    KNameAndUrlInputDialog_GetDecodedMetricF_Callback knameandurlinputdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool knameandurlinputdialog_metaobject_isbase = false;
    mutable bool knameandurlinputdialog_metacast_isbase = false;
    mutable bool knameandurlinputdialog_metacall_isbase = false;
    mutable bool knameandurlinputdialog_setvisible_isbase = false;
    mutable bool knameandurlinputdialog_sizehint_isbase = false;
    mutable bool knameandurlinputdialog_minimumsizehint_isbase = false;
    mutable bool knameandurlinputdialog_open_isbase = false;
    mutable bool knameandurlinputdialog_exec_isbase = false;
    mutable bool knameandurlinputdialog_done_isbase = false;
    mutable bool knameandurlinputdialog_accept_isbase = false;
    mutable bool knameandurlinputdialog_reject_isbase = false;
    mutable bool knameandurlinputdialog_keypressevent_isbase = false;
    mutable bool knameandurlinputdialog_closeevent_isbase = false;
    mutable bool knameandurlinputdialog_showevent_isbase = false;
    mutable bool knameandurlinputdialog_resizeevent_isbase = false;
    mutable bool knameandurlinputdialog_contextmenuevent_isbase = false;
    mutable bool knameandurlinputdialog_eventfilter_isbase = false;
    mutable bool knameandurlinputdialog_devtype_isbase = false;
    mutable bool knameandurlinputdialog_heightforwidth_isbase = false;
    mutable bool knameandurlinputdialog_hasheightforwidth_isbase = false;
    mutable bool knameandurlinputdialog_paintengine_isbase = false;
    mutable bool knameandurlinputdialog_event_isbase = false;
    mutable bool knameandurlinputdialog_mousepressevent_isbase = false;
    mutable bool knameandurlinputdialog_mousereleaseevent_isbase = false;
    mutable bool knameandurlinputdialog_mousedoubleclickevent_isbase = false;
    mutable bool knameandurlinputdialog_mousemoveevent_isbase = false;
    mutable bool knameandurlinputdialog_wheelevent_isbase = false;
    mutable bool knameandurlinputdialog_keyreleaseevent_isbase = false;
    mutable bool knameandurlinputdialog_focusinevent_isbase = false;
    mutable bool knameandurlinputdialog_focusoutevent_isbase = false;
    mutable bool knameandurlinputdialog_enterevent_isbase = false;
    mutable bool knameandurlinputdialog_leaveevent_isbase = false;
    mutable bool knameandurlinputdialog_paintevent_isbase = false;
    mutable bool knameandurlinputdialog_moveevent_isbase = false;
    mutable bool knameandurlinputdialog_tabletevent_isbase = false;
    mutable bool knameandurlinputdialog_actionevent_isbase = false;
    mutable bool knameandurlinputdialog_dragenterevent_isbase = false;
    mutable bool knameandurlinputdialog_dragmoveevent_isbase = false;
    mutable bool knameandurlinputdialog_dragleaveevent_isbase = false;
    mutable bool knameandurlinputdialog_dropevent_isbase = false;
    mutable bool knameandurlinputdialog_hideevent_isbase = false;
    mutable bool knameandurlinputdialog_nativeevent_isbase = false;
    mutable bool knameandurlinputdialog_changeevent_isbase = false;
    mutable bool knameandurlinputdialog_metric_isbase = false;
    mutable bool knameandurlinputdialog_initpainter_isbase = false;
    mutable bool knameandurlinputdialog_redirected_isbase = false;
    mutable bool knameandurlinputdialog_sharedpainter_isbase = false;
    mutable bool knameandurlinputdialog_inputmethodevent_isbase = false;
    mutable bool knameandurlinputdialog_inputmethodquery_isbase = false;
    mutable bool knameandurlinputdialog_focusnextprevchild_isbase = false;
    mutable bool knameandurlinputdialog_timerevent_isbase = false;
    mutable bool knameandurlinputdialog_childevent_isbase = false;
    mutable bool knameandurlinputdialog_customevent_isbase = false;
    mutable bool knameandurlinputdialog_connectnotify_isbase = false;
    mutable bool knameandurlinputdialog_disconnectnotify_isbase = false;
    mutable bool knameandurlinputdialog_adjustposition_isbase = false;
    mutable bool knameandurlinputdialog_updatemicrofocus_isbase = false;
    mutable bool knameandurlinputdialog_create_isbase = false;
    mutable bool knameandurlinputdialog_destroy_isbase = false;
    mutable bool knameandurlinputdialog_focusnextchild_isbase = false;
    mutable bool knameandurlinputdialog_focuspreviouschild_isbase = false;
    mutable bool knameandurlinputdialog_sender_isbase = false;
    mutable bool knameandurlinputdialog_sendersignalindex_isbase = false;
    mutable bool knameandurlinputdialog_receivers_isbase = false;
    mutable bool knameandurlinputdialog_issignalconnected_isbase = false;
    mutable bool knameandurlinputdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKNameAndUrlInputDialog(const QString& nameLabel, const QString& urlLabel, const QUrl& startDir, QWidget* parent) : KNameAndUrlInputDialog(nameLabel, urlLabel, startDir, parent) {};

    // Callback setters
    inline void setKNameAndUrlInputDialog_MetaObject_Callback(KNameAndUrlInputDialog_MetaObject_Callback cb) { knameandurlinputdialog_metaobject_callback = cb; }
    inline void setKNameAndUrlInputDialog_Metacast_Callback(KNameAndUrlInputDialog_Metacast_Callback cb) { knameandurlinputdialog_metacast_callback = cb; }
    inline void setKNameAndUrlInputDialog_Metacall_Callback(KNameAndUrlInputDialog_Metacall_Callback cb) { knameandurlinputdialog_metacall_callback = cb; }
    inline void setKNameAndUrlInputDialog_SetVisible_Callback(KNameAndUrlInputDialog_SetVisible_Callback cb) { knameandurlinputdialog_setvisible_callback = cb; }
    inline void setKNameAndUrlInputDialog_SizeHint_Callback(KNameAndUrlInputDialog_SizeHint_Callback cb) { knameandurlinputdialog_sizehint_callback = cb; }
    inline void setKNameAndUrlInputDialog_MinimumSizeHint_Callback(KNameAndUrlInputDialog_MinimumSizeHint_Callback cb) { knameandurlinputdialog_minimumsizehint_callback = cb; }
    inline void setKNameAndUrlInputDialog_Open_Callback(KNameAndUrlInputDialog_Open_Callback cb) { knameandurlinputdialog_open_callback = cb; }
    inline void setKNameAndUrlInputDialog_Exec_Callback(KNameAndUrlInputDialog_Exec_Callback cb) { knameandurlinputdialog_exec_callback = cb; }
    inline void setKNameAndUrlInputDialog_Done_Callback(KNameAndUrlInputDialog_Done_Callback cb) { knameandurlinputdialog_done_callback = cb; }
    inline void setKNameAndUrlInputDialog_Accept_Callback(KNameAndUrlInputDialog_Accept_Callback cb) { knameandurlinputdialog_accept_callback = cb; }
    inline void setKNameAndUrlInputDialog_Reject_Callback(KNameAndUrlInputDialog_Reject_Callback cb) { knameandurlinputdialog_reject_callback = cb; }
    inline void setKNameAndUrlInputDialog_KeyPressEvent_Callback(KNameAndUrlInputDialog_KeyPressEvent_Callback cb) { knameandurlinputdialog_keypressevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_CloseEvent_Callback(KNameAndUrlInputDialog_CloseEvent_Callback cb) { knameandurlinputdialog_closeevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_ShowEvent_Callback(KNameAndUrlInputDialog_ShowEvent_Callback cb) { knameandurlinputdialog_showevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_ResizeEvent_Callback(KNameAndUrlInputDialog_ResizeEvent_Callback cb) { knameandurlinputdialog_resizeevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_ContextMenuEvent_Callback(KNameAndUrlInputDialog_ContextMenuEvent_Callback cb) { knameandurlinputdialog_contextmenuevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_EventFilter_Callback(KNameAndUrlInputDialog_EventFilter_Callback cb) { knameandurlinputdialog_eventfilter_callback = cb; }
    inline void setKNameAndUrlInputDialog_DevType_Callback(KNameAndUrlInputDialog_DevType_Callback cb) { knameandurlinputdialog_devtype_callback = cb; }
    inline void setKNameAndUrlInputDialog_HeightForWidth_Callback(KNameAndUrlInputDialog_HeightForWidth_Callback cb) { knameandurlinputdialog_heightforwidth_callback = cb; }
    inline void setKNameAndUrlInputDialog_HasHeightForWidth_Callback(KNameAndUrlInputDialog_HasHeightForWidth_Callback cb) { knameandurlinputdialog_hasheightforwidth_callback = cb; }
    inline void setKNameAndUrlInputDialog_PaintEngine_Callback(KNameAndUrlInputDialog_PaintEngine_Callback cb) { knameandurlinputdialog_paintengine_callback = cb; }
    inline void setKNameAndUrlInputDialog_Event_Callback(KNameAndUrlInputDialog_Event_Callback cb) { knameandurlinputdialog_event_callback = cb; }
    inline void setKNameAndUrlInputDialog_MousePressEvent_Callback(KNameAndUrlInputDialog_MousePressEvent_Callback cb) { knameandurlinputdialog_mousepressevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_MouseReleaseEvent_Callback(KNameAndUrlInputDialog_MouseReleaseEvent_Callback cb) { knameandurlinputdialog_mousereleaseevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_MouseDoubleClickEvent_Callback(KNameAndUrlInputDialog_MouseDoubleClickEvent_Callback cb) { knameandurlinputdialog_mousedoubleclickevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_MouseMoveEvent_Callback(KNameAndUrlInputDialog_MouseMoveEvent_Callback cb) { knameandurlinputdialog_mousemoveevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_WheelEvent_Callback(KNameAndUrlInputDialog_WheelEvent_Callback cb) { knameandurlinputdialog_wheelevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_KeyReleaseEvent_Callback(KNameAndUrlInputDialog_KeyReleaseEvent_Callback cb) { knameandurlinputdialog_keyreleaseevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_FocusInEvent_Callback(KNameAndUrlInputDialog_FocusInEvent_Callback cb) { knameandurlinputdialog_focusinevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_FocusOutEvent_Callback(KNameAndUrlInputDialog_FocusOutEvent_Callback cb) { knameandurlinputdialog_focusoutevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_EnterEvent_Callback(KNameAndUrlInputDialog_EnterEvent_Callback cb) { knameandurlinputdialog_enterevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_LeaveEvent_Callback(KNameAndUrlInputDialog_LeaveEvent_Callback cb) { knameandurlinputdialog_leaveevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_PaintEvent_Callback(KNameAndUrlInputDialog_PaintEvent_Callback cb) { knameandurlinputdialog_paintevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_MoveEvent_Callback(KNameAndUrlInputDialog_MoveEvent_Callback cb) { knameandurlinputdialog_moveevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_TabletEvent_Callback(KNameAndUrlInputDialog_TabletEvent_Callback cb) { knameandurlinputdialog_tabletevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_ActionEvent_Callback(KNameAndUrlInputDialog_ActionEvent_Callback cb) { knameandurlinputdialog_actionevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_DragEnterEvent_Callback(KNameAndUrlInputDialog_DragEnterEvent_Callback cb) { knameandurlinputdialog_dragenterevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_DragMoveEvent_Callback(KNameAndUrlInputDialog_DragMoveEvent_Callback cb) { knameandurlinputdialog_dragmoveevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_DragLeaveEvent_Callback(KNameAndUrlInputDialog_DragLeaveEvent_Callback cb) { knameandurlinputdialog_dragleaveevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_DropEvent_Callback(KNameAndUrlInputDialog_DropEvent_Callback cb) { knameandurlinputdialog_dropevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_HideEvent_Callback(KNameAndUrlInputDialog_HideEvent_Callback cb) { knameandurlinputdialog_hideevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_NativeEvent_Callback(KNameAndUrlInputDialog_NativeEvent_Callback cb) { knameandurlinputdialog_nativeevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_ChangeEvent_Callback(KNameAndUrlInputDialog_ChangeEvent_Callback cb) { knameandurlinputdialog_changeevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_Metric_Callback(KNameAndUrlInputDialog_Metric_Callback cb) { knameandurlinputdialog_metric_callback = cb; }
    inline void setKNameAndUrlInputDialog_InitPainter_Callback(KNameAndUrlInputDialog_InitPainter_Callback cb) { knameandurlinputdialog_initpainter_callback = cb; }
    inline void setKNameAndUrlInputDialog_Redirected_Callback(KNameAndUrlInputDialog_Redirected_Callback cb) { knameandurlinputdialog_redirected_callback = cb; }
    inline void setKNameAndUrlInputDialog_SharedPainter_Callback(KNameAndUrlInputDialog_SharedPainter_Callback cb) { knameandurlinputdialog_sharedpainter_callback = cb; }
    inline void setKNameAndUrlInputDialog_InputMethodEvent_Callback(KNameAndUrlInputDialog_InputMethodEvent_Callback cb) { knameandurlinputdialog_inputmethodevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_InputMethodQuery_Callback(KNameAndUrlInputDialog_InputMethodQuery_Callback cb) { knameandurlinputdialog_inputmethodquery_callback = cb; }
    inline void setKNameAndUrlInputDialog_FocusNextPrevChild_Callback(KNameAndUrlInputDialog_FocusNextPrevChild_Callback cb) { knameandurlinputdialog_focusnextprevchild_callback = cb; }
    inline void setKNameAndUrlInputDialog_TimerEvent_Callback(KNameAndUrlInputDialog_TimerEvent_Callback cb) { knameandurlinputdialog_timerevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_ChildEvent_Callback(KNameAndUrlInputDialog_ChildEvent_Callback cb) { knameandurlinputdialog_childevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_CustomEvent_Callback(KNameAndUrlInputDialog_CustomEvent_Callback cb) { knameandurlinputdialog_customevent_callback = cb; }
    inline void setKNameAndUrlInputDialog_ConnectNotify_Callback(KNameAndUrlInputDialog_ConnectNotify_Callback cb) { knameandurlinputdialog_connectnotify_callback = cb; }
    inline void setKNameAndUrlInputDialog_DisconnectNotify_Callback(KNameAndUrlInputDialog_DisconnectNotify_Callback cb) { knameandurlinputdialog_disconnectnotify_callback = cb; }
    inline void setKNameAndUrlInputDialog_AdjustPosition_Callback(KNameAndUrlInputDialog_AdjustPosition_Callback cb) { knameandurlinputdialog_adjustposition_callback = cb; }
    inline void setKNameAndUrlInputDialog_UpdateMicroFocus_Callback(KNameAndUrlInputDialog_UpdateMicroFocus_Callback cb) { knameandurlinputdialog_updatemicrofocus_callback = cb; }
    inline void setKNameAndUrlInputDialog_Create_Callback(KNameAndUrlInputDialog_Create_Callback cb) { knameandurlinputdialog_create_callback = cb; }
    inline void setKNameAndUrlInputDialog_Destroy_Callback(KNameAndUrlInputDialog_Destroy_Callback cb) { knameandurlinputdialog_destroy_callback = cb; }
    inline void setKNameAndUrlInputDialog_FocusNextChild_Callback(KNameAndUrlInputDialog_FocusNextChild_Callback cb) { knameandurlinputdialog_focusnextchild_callback = cb; }
    inline void setKNameAndUrlInputDialog_FocusPreviousChild_Callback(KNameAndUrlInputDialog_FocusPreviousChild_Callback cb) { knameandurlinputdialog_focuspreviouschild_callback = cb; }
    inline void setKNameAndUrlInputDialog_Sender_Callback(KNameAndUrlInputDialog_Sender_Callback cb) { knameandurlinputdialog_sender_callback = cb; }
    inline void setKNameAndUrlInputDialog_SenderSignalIndex_Callback(KNameAndUrlInputDialog_SenderSignalIndex_Callback cb) { knameandurlinputdialog_sendersignalindex_callback = cb; }
    inline void setKNameAndUrlInputDialog_Receivers_Callback(KNameAndUrlInputDialog_Receivers_Callback cb) { knameandurlinputdialog_receivers_callback = cb; }
    inline void setKNameAndUrlInputDialog_IsSignalConnected_Callback(KNameAndUrlInputDialog_IsSignalConnected_Callback cb) { knameandurlinputdialog_issignalconnected_callback = cb; }
    inline void setKNameAndUrlInputDialog_GetDecodedMetricF_Callback(KNameAndUrlInputDialog_GetDecodedMetricF_Callback cb) { knameandurlinputdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKNameAndUrlInputDialog_MetaObject_IsBase(bool value) const { knameandurlinputdialog_metaobject_isbase = value; }
    inline void setKNameAndUrlInputDialog_Metacast_IsBase(bool value) const { knameandurlinputdialog_metacast_isbase = value; }
    inline void setKNameAndUrlInputDialog_Metacall_IsBase(bool value) const { knameandurlinputdialog_metacall_isbase = value; }
    inline void setKNameAndUrlInputDialog_SetVisible_IsBase(bool value) const { knameandurlinputdialog_setvisible_isbase = value; }
    inline void setKNameAndUrlInputDialog_SizeHint_IsBase(bool value) const { knameandurlinputdialog_sizehint_isbase = value; }
    inline void setKNameAndUrlInputDialog_MinimumSizeHint_IsBase(bool value) const { knameandurlinputdialog_minimumsizehint_isbase = value; }
    inline void setKNameAndUrlInputDialog_Open_IsBase(bool value) const { knameandurlinputdialog_open_isbase = value; }
    inline void setKNameAndUrlInputDialog_Exec_IsBase(bool value) const { knameandurlinputdialog_exec_isbase = value; }
    inline void setKNameAndUrlInputDialog_Done_IsBase(bool value) const { knameandurlinputdialog_done_isbase = value; }
    inline void setKNameAndUrlInputDialog_Accept_IsBase(bool value) const { knameandurlinputdialog_accept_isbase = value; }
    inline void setKNameAndUrlInputDialog_Reject_IsBase(bool value) const { knameandurlinputdialog_reject_isbase = value; }
    inline void setKNameAndUrlInputDialog_KeyPressEvent_IsBase(bool value) const { knameandurlinputdialog_keypressevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_CloseEvent_IsBase(bool value) const { knameandurlinputdialog_closeevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_ShowEvent_IsBase(bool value) const { knameandurlinputdialog_showevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_ResizeEvent_IsBase(bool value) const { knameandurlinputdialog_resizeevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_ContextMenuEvent_IsBase(bool value) const { knameandurlinputdialog_contextmenuevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_EventFilter_IsBase(bool value) const { knameandurlinputdialog_eventfilter_isbase = value; }
    inline void setKNameAndUrlInputDialog_DevType_IsBase(bool value) const { knameandurlinputdialog_devtype_isbase = value; }
    inline void setKNameAndUrlInputDialog_HeightForWidth_IsBase(bool value) const { knameandurlinputdialog_heightforwidth_isbase = value; }
    inline void setKNameAndUrlInputDialog_HasHeightForWidth_IsBase(bool value) const { knameandurlinputdialog_hasheightforwidth_isbase = value; }
    inline void setKNameAndUrlInputDialog_PaintEngine_IsBase(bool value) const { knameandurlinputdialog_paintengine_isbase = value; }
    inline void setKNameAndUrlInputDialog_Event_IsBase(bool value) const { knameandurlinputdialog_event_isbase = value; }
    inline void setKNameAndUrlInputDialog_MousePressEvent_IsBase(bool value) const { knameandurlinputdialog_mousepressevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_MouseReleaseEvent_IsBase(bool value) const { knameandurlinputdialog_mousereleaseevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_MouseDoubleClickEvent_IsBase(bool value) const { knameandurlinputdialog_mousedoubleclickevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_MouseMoveEvent_IsBase(bool value) const { knameandurlinputdialog_mousemoveevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_WheelEvent_IsBase(bool value) const { knameandurlinputdialog_wheelevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_KeyReleaseEvent_IsBase(bool value) const { knameandurlinputdialog_keyreleaseevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_FocusInEvent_IsBase(bool value) const { knameandurlinputdialog_focusinevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_FocusOutEvent_IsBase(bool value) const { knameandurlinputdialog_focusoutevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_EnterEvent_IsBase(bool value) const { knameandurlinputdialog_enterevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_LeaveEvent_IsBase(bool value) const { knameandurlinputdialog_leaveevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_PaintEvent_IsBase(bool value) const { knameandurlinputdialog_paintevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_MoveEvent_IsBase(bool value) const { knameandurlinputdialog_moveevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_TabletEvent_IsBase(bool value) const { knameandurlinputdialog_tabletevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_ActionEvent_IsBase(bool value) const { knameandurlinputdialog_actionevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_DragEnterEvent_IsBase(bool value) const { knameandurlinputdialog_dragenterevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_DragMoveEvent_IsBase(bool value) const { knameandurlinputdialog_dragmoveevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_DragLeaveEvent_IsBase(bool value) const { knameandurlinputdialog_dragleaveevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_DropEvent_IsBase(bool value) const { knameandurlinputdialog_dropevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_HideEvent_IsBase(bool value) const { knameandurlinputdialog_hideevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_NativeEvent_IsBase(bool value) const { knameandurlinputdialog_nativeevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_ChangeEvent_IsBase(bool value) const { knameandurlinputdialog_changeevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_Metric_IsBase(bool value) const { knameandurlinputdialog_metric_isbase = value; }
    inline void setKNameAndUrlInputDialog_InitPainter_IsBase(bool value) const { knameandurlinputdialog_initpainter_isbase = value; }
    inline void setKNameAndUrlInputDialog_Redirected_IsBase(bool value) const { knameandurlinputdialog_redirected_isbase = value; }
    inline void setKNameAndUrlInputDialog_SharedPainter_IsBase(bool value) const { knameandurlinputdialog_sharedpainter_isbase = value; }
    inline void setKNameAndUrlInputDialog_InputMethodEvent_IsBase(bool value) const { knameandurlinputdialog_inputmethodevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_InputMethodQuery_IsBase(bool value) const { knameandurlinputdialog_inputmethodquery_isbase = value; }
    inline void setKNameAndUrlInputDialog_FocusNextPrevChild_IsBase(bool value) const { knameandurlinputdialog_focusnextprevchild_isbase = value; }
    inline void setKNameAndUrlInputDialog_TimerEvent_IsBase(bool value) const { knameandurlinputdialog_timerevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_ChildEvent_IsBase(bool value) const { knameandurlinputdialog_childevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_CustomEvent_IsBase(bool value) const { knameandurlinputdialog_customevent_isbase = value; }
    inline void setKNameAndUrlInputDialog_ConnectNotify_IsBase(bool value) const { knameandurlinputdialog_connectnotify_isbase = value; }
    inline void setKNameAndUrlInputDialog_DisconnectNotify_IsBase(bool value) const { knameandurlinputdialog_disconnectnotify_isbase = value; }
    inline void setKNameAndUrlInputDialog_AdjustPosition_IsBase(bool value) const { knameandurlinputdialog_adjustposition_isbase = value; }
    inline void setKNameAndUrlInputDialog_UpdateMicroFocus_IsBase(bool value) const { knameandurlinputdialog_updatemicrofocus_isbase = value; }
    inline void setKNameAndUrlInputDialog_Create_IsBase(bool value) const { knameandurlinputdialog_create_isbase = value; }
    inline void setKNameAndUrlInputDialog_Destroy_IsBase(bool value) const { knameandurlinputdialog_destroy_isbase = value; }
    inline void setKNameAndUrlInputDialog_FocusNextChild_IsBase(bool value) const { knameandurlinputdialog_focusnextchild_isbase = value; }
    inline void setKNameAndUrlInputDialog_FocusPreviousChild_IsBase(bool value) const { knameandurlinputdialog_focuspreviouschild_isbase = value; }
    inline void setKNameAndUrlInputDialog_Sender_IsBase(bool value) const { knameandurlinputdialog_sender_isbase = value; }
    inline void setKNameAndUrlInputDialog_SenderSignalIndex_IsBase(bool value) const { knameandurlinputdialog_sendersignalindex_isbase = value; }
    inline void setKNameAndUrlInputDialog_Receivers_IsBase(bool value) const { knameandurlinputdialog_receivers_isbase = value; }
    inline void setKNameAndUrlInputDialog_IsSignalConnected_IsBase(bool value) const { knameandurlinputdialog_issignalconnected_isbase = value; }
    inline void setKNameAndUrlInputDialog_GetDecodedMetricF_IsBase(bool value) const { knameandurlinputdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knameandurlinputdialog_metaobject_isbase) {
            knameandurlinputdialog_metaobject_isbase = false;
            return KNameAndUrlInputDialog::metaObject();
        }
        auto metaobject_cb = knameandurlinputdialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KNameAndUrlInputDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knameandurlinputdialog_metacast_isbase) {
            knameandurlinputdialog_metacast_isbase = false;
            return KNameAndUrlInputDialog::qt_metacast(param1);
        }
        auto metacast_cb = knameandurlinputdialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KNameAndUrlInputDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knameandurlinputdialog_metacall_isbase) {
            knameandurlinputdialog_metacall_isbase = false;
            return KNameAndUrlInputDialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = knameandurlinputdialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNameAndUrlInputDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (knameandurlinputdialog_setvisible_isbase) {
            knameandurlinputdialog_setvisible_isbase = false;
            KNameAndUrlInputDialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = knameandurlinputdialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (knameandurlinputdialog_sizehint_isbase) {
            knameandurlinputdialog_sizehint_isbase = false;
            return KNameAndUrlInputDialog::sizeHint();
        }
        auto sizehint_cb = knameandurlinputdialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KNameAndUrlInputDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (knameandurlinputdialog_minimumsizehint_isbase) {
            knameandurlinputdialog_minimumsizehint_isbase = false;
            return KNameAndUrlInputDialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = knameandurlinputdialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KNameAndUrlInputDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (knameandurlinputdialog_open_isbase) {
            knameandurlinputdialog_open_isbase = false;
            KNameAndUrlInputDialog::open();
            return;
        }
        auto open_cb = knameandurlinputdialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        KNameAndUrlInputDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (knameandurlinputdialog_exec_isbase) {
            knameandurlinputdialog_exec_isbase = false;
            return KNameAndUrlInputDialog::exec();
        }
        auto exec_cb = knameandurlinputdialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return KNameAndUrlInputDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (knameandurlinputdialog_done_isbase) {
            knameandurlinputdialog_done_isbase = false;
            KNameAndUrlInputDialog::done(param1);
            return;
        }
        auto done_cb = knameandurlinputdialog_done_callback;
        if (done_cb) {
            int cbval1 = param1;

            done_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (knameandurlinputdialog_accept_isbase) {
            knameandurlinputdialog_accept_isbase = false;
            KNameAndUrlInputDialog::accept();
            return;
        }
        auto accept_cb = knameandurlinputdialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        KNameAndUrlInputDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (knameandurlinputdialog_reject_isbase) {
            knameandurlinputdialog_reject_isbase = false;
            KNameAndUrlInputDialog::reject();
            return;
        }
        auto reject_cb = knameandurlinputdialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        KNameAndUrlInputDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (knameandurlinputdialog_keypressevent_isbase) {
            knameandurlinputdialog_keypressevent_isbase = false;
            KNameAndUrlInputDialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = knameandurlinputdialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (knameandurlinputdialog_closeevent_isbase) {
            knameandurlinputdialog_closeevent_isbase = false;
            KNameAndUrlInputDialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = knameandurlinputdialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (knameandurlinputdialog_showevent_isbase) {
            knameandurlinputdialog_showevent_isbase = false;
            KNameAndUrlInputDialog::showEvent(param1);
            return;
        }
        auto showevent_cb = knameandurlinputdialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (knameandurlinputdialog_resizeevent_isbase) {
            knameandurlinputdialog_resizeevent_isbase = false;
            KNameAndUrlInputDialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = knameandurlinputdialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (knameandurlinputdialog_contextmenuevent_isbase) {
            knameandurlinputdialog_contextmenuevent_isbase = false;
            KNameAndUrlInputDialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = knameandurlinputdialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (knameandurlinputdialog_eventfilter_isbase) {
            knameandurlinputdialog_eventfilter_isbase = false;
            return KNameAndUrlInputDialog::eventFilter(param1, param2);
        }
        auto eventfilter_cb = knameandurlinputdialog_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNameAndUrlInputDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (knameandurlinputdialog_devtype_isbase) {
            knameandurlinputdialog_devtype_isbase = false;
            return KNameAndUrlInputDialog::devType();
        }
        auto devtype_cb = knameandurlinputdialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KNameAndUrlInputDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (knameandurlinputdialog_heightforwidth_isbase) {
            knameandurlinputdialog_heightforwidth_isbase = false;
            return KNameAndUrlInputDialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = knameandurlinputdialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNameAndUrlInputDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (knameandurlinputdialog_hasheightforwidth_isbase) {
            knameandurlinputdialog_hasheightforwidth_isbase = false;
            return KNameAndUrlInputDialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = knameandurlinputdialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KNameAndUrlInputDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (knameandurlinputdialog_paintengine_isbase) {
            knameandurlinputdialog_paintengine_isbase = false;
            return KNameAndUrlInputDialog::paintEngine();
        }
        auto paintengine_cb = knameandurlinputdialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KNameAndUrlInputDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knameandurlinputdialog_event_isbase) {
            knameandurlinputdialog_event_isbase = false;
            return KNameAndUrlInputDialog::event(event);
        }
        auto event_cb = knameandurlinputdialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KNameAndUrlInputDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (knameandurlinputdialog_mousepressevent_isbase) {
            knameandurlinputdialog_mousepressevent_isbase = false;
            KNameAndUrlInputDialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = knameandurlinputdialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (knameandurlinputdialog_mousereleaseevent_isbase) {
            knameandurlinputdialog_mousereleaseevent_isbase = false;
            KNameAndUrlInputDialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = knameandurlinputdialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (knameandurlinputdialog_mousedoubleclickevent_isbase) {
            knameandurlinputdialog_mousedoubleclickevent_isbase = false;
            KNameAndUrlInputDialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = knameandurlinputdialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (knameandurlinputdialog_mousemoveevent_isbase) {
            knameandurlinputdialog_mousemoveevent_isbase = false;
            KNameAndUrlInputDialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = knameandurlinputdialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (knameandurlinputdialog_wheelevent_isbase) {
            knameandurlinputdialog_wheelevent_isbase = false;
            KNameAndUrlInputDialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = knameandurlinputdialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (knameandurlinputdialog_keyreleaseevent_isbase) {
            knameandurlinputdialog_keyreleaseevent_isbase = false;
            KNameAndUrlInputDialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = knameandurlinputdialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (knameandurlinputdialog_focusinevent_isbase) {
            knameandurlinputdialog_focusinevent_isbase = false;
            KNameAndUrlInputDialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = knameandurlinputdialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (knameandurlinputdialog_focusoutevent_isbase) {
            knameandurlinputdialog_focusoutevent_isbase = false;
            KNameAndUrlInputDialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = knameandurlinputdialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (knameandurlinputdialog_enterevent_isbase) {
            knameandurlinputdialog_enterevent_isbase = false;
            KNameAndUrlInputDialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = knameandurlinputdialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (knameandurlinputdialog_leaveevent_isbase) {
            knameandurlinputdialog_leaveevent_isbase = false;
            KNameAndUrlInputDialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = knameandurlinputdialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (knameandurlinputdialog_paintevent_isbase) {
            knameandurlinputdialog_paintevent_isbase = false;
            KNameAndUrlInputDialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = knameandurlinputdialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (knameandurlinputdialog_moveevent_isbase) {
            knameandurlinputdialog_moveevent_isbase = false;
            KNameAndUrlInputDialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = knameandurlinputdialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (knameandurlinputdialog_tabletevent_isbase) {
            knameandurlinputdialog_tabletevent_isbase = false;
            KNameAndUrlInputDialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = knameandurlinputdialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (knameandurlinputdialog_actionevent_isbase) {
            knameandurlinputdialog_actionevent_isbase = false;
            KNameAndUrlInputDialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = knameandurlinputdialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (knameandurlinputdialog_dragenterevent_isbase) {
            knameandurlinputdialog_dragenterevent_isbase = false;
            KNameAndUrlInputDialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = knameandurlinputdialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (knameandurlinputdialog_dragmoveevent_isbase) {
            knameandurlinputdialog_dragmoveevent_isbase = false;
            KNameAndUrlInputDialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = knameandurlinputdialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (knameandurlinputdialog_dragleaveevent_isbase) {
            knameandurlinputdialog_dragleaveevent_isbase = false;
            KNameAndUrlInputDialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = knameandurlinputdialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (knameandurlinputdialog_dropevent_isbase) {
            knameandurlinputdialog_dropevent_isbase = false;
            KNameAndUrlInputDialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = knameandurlinputdialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (knameandurlinputdialog_hideevent_isbase) {
            knameandurlinputdialog_hideevent_isbase = false;
            KNameAndUrlInputDialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = knameandurlinputdialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (knameandurlinputdialog_nativeevent_isbase) {
            knameandurlinputdialog_nativeevent_isbase = false;
            return KNameAndUrlInputDialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = knameandurlinputdialog_nativeevent_callback;
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
        return KNameAndUrlInputDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (knameandurlinputdialog_changeevent_isbase) {
            knameandurlinputdialog_changeevent_isbase = false;
            KNameAndUrlInputDialog::changeEvent(param1);
            return;
        }
        auto changeevent_cb = knameandurlinputdialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (knameandurlinputdialog_metric_isbase) {
            knameandurlinputdialog_metric_isbase = false;
            return KNameAndUrlInputDialog::metric(param1);
        }
        auto metric_cb = knameandurlinputdialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNameAndUrlInputDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (knameandurlinputdialog_initpainter_isbase) {
            knameandurlinputdialog_initpainter_isbase = false;
            KNameAndUrlInputDialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = knameandurlinputdialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (knameandurlinputdialog_redirected_isbase) {
            knameandurlinputdialog_redirected_isbase = false;
            return KNameAndUrlInputDialog::redirected(offset);
        }
        auto redirected_cb = knameandurlinputdialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KNameAndUrlInputDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (knameandurlinputdialog_sharedpainter_isbase) {
            knameandurlinputdialog_sharedpainter_isbase = false;
            return KNameAndUrlInputDialog::sharedPainter();
        }
        auto sharedpainter_cb = knameandurlinputdialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KNameAndUrlInputDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (knameandurlinputdialog_inputmethodevent_isbase) {
            knameandurlinputdialog_inputmethodevent_isbase = false;
            KNameAndUrlInputDialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = knameandurlinputdialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (knameandurlinputdialog_inputmethodquery_isbase) {
            knameandurlinputdialog_inputmethodquery_isbase = false;
            return KNameAndUrlInputDialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = knameandurlinputdialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KNameAndUrlInputDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (knameandurlinputdialog_focusnextprevchild_isbase) {
            knameandurlinputdialog_focusnextprevchild_isbase = false;
            return KNameAndUrlInputDialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = knameandurlinputdialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KNameAndUrlInputDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knameandurlinputdialog_timerevent_isbase) {
            knameandurlinputdialog_timerevent_isbase = false;
            KNameAndUrlInputDialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = knameandurlinputdialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knameandurlinputdialog_childevent_isbase) {
            knameandurlinputdialog_childevent_isbase = false;
            KNameAndUrlInputDialog::childEvent(event);
            return;
        }
        auto childevent_cb = knameandurlinputdialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knameandurlinputdialog_customevent_isbase) {
            knameandurlinputdialog_customevent_isbase = false;
            KNameAndUrlInputDialog::customEvent(event);
            return;
        }
        auto customevent_cb = knameandurlinputdialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knameandurlinputdialog_connectnotify_isbase) {
            knameandurlinputdialog_connectnotify_isbase = false;
            KNameAndUrlInputDialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = knameandurlinputdialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knameandurlinputdialog_disconnectnotify_isbase) {
            knameandurlinputdialog_disconnectnotify_isbase = false;
            KNameAndUrlInputDialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = knameandurlinputdialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (knameandurlinputdialog_adjustposition_isbase) {
            knameandurlinputdialog_adjustposition_isbase = false;
            KNameAndUrlInputDialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = knameandurlinputdialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        KNameAndUrlInputDialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (knameandurlinputdialog_updatemicrofocus_isbase) {
            knameandurlinputdialog_updatemicrofocus_isbase = false;
            KNameAndUrlInputDialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = knameandurlinputdialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KNameAndUrlInputDialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (knameandurlinputdialog_create_isbase) {
            knameandurlinputdialog_create_isbase = false;
            KNameAndUrlInputDialog::create();
            return;
        }
        auto create_cb = knameandurlinputdialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KNameAndUrlInputDialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (knameandurlinputdialog_destroy_isbase) {
            knameandurlinputdialog_destroy_isbase = false;
            KNameAndUrlInputDialog::destroy();
            return;
        }
        auto destroy_cb = knameandurlinputdialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KNameAndUrlInputDialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (knameandurlinputdialog_focusnextchild_isbase) {
            knameandurlinputdialog_focusnextchild_isbase = false;
            return KNameAndUrlInputDialog::focusNextChild();
        }
        auto focusnextchild_cb = knameandurlinputdialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KNameAndUrlInputDialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (knameandurlinputdialog_focuspreviouschild_isbase) {
            knameandurlinputdialog_focuspreviouschild_isbase = false;
            return KNameAndUrlInputDialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = knameandurlinputdialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KNameAndUrlInputDialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knameandurlinputdialog_sender_isbase) {
            knameandurlinputdialog_sender_isbase = false;
            return KNameAndUrlInputDialog::sender();
        }
        auto sender_cb = knameandurlinputdialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KNameAndUrlInputDialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knameandurlinputdialog_sendersignalindex_isbase) {
            knameandurlinputdialog_sendersignalindex_isbase = false;
            return KNameAndUrlInputDialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = knameandurlinputdialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KNameAndUrlInputDialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knameandurlinputdialog_receivers_isbase) {
            knameandurlinputdialog_receivers_isbase = false;
            return KNameAndUrlInputDialog::receivers(signal);
        }
        auto receivers_cb = knameandurlinputdialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNameAndUrlInputDialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knameandurlinputdialog_issignalconnected_isbase) {
            knameandurlinputdialog_issignalconnected_isbase = false;
            return KNameAndUrlInputDialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = knameandurlinputdialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KNameAndUrlInputDialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (knameandurlinputdialog_getdecodedmetricf_isbase) {
            knameandurlinputdialog_getdecodedmetricf_isbase = false;
            return KNameAndUrlInputDialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = knameandurlinputdialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KNameAndUrlInputDialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KNameAndUrlInputDialog_KeyPressEvent(KNameAndUrlInputDialog* self, QKeyEvent* param1);
    friend void KNameAndUrlInputDialog_SuperKeyPressEvent(KNameAndUrlInputDialog* self, QKeyEvent* param1);
    friend void KNameAndUrlInputDialog_CloseEvent(KNameAndUrlInputDialog* self, QCloseEvent* param1);
    friend void KNameAndUrlInputDialog_SuperCloseEvent(KNameAndUrlInputDialog* self, QCloseEvent* param1);
    friend void KNameAndUrlInputDialog_ShowEvent(KNameAndUrlInputDialog* self, QShowEvent* param1);
    friend void KNameAndUrlInputDialog_SuperShowEvent(KNameAndUrlInputDialog* self, QShowEvent* param1);
    friend void KNameAndUrlInputDialog_ResizeEvent(KNameAndUrlInputDialog* self, QResizeEvent* param1);
    friend void KNameAndUrlInputDialog_SuperResizeEvent(KNameAndUrlInputDialog* self, QResizeEvent* param1);
    friend void KNameAndUrlInputDialog_ContextMenuEvent(KNameAndUrlInputDialog* self, QContextMenuEvent* param1);
    friend void KNameAndUrlInputDialog_SuperContextMenuEvent(KNameAndUrlInputDialog* self, QContextMenuEvent* param1);
    friend bool KNameAndUrlInputDialog_EventFilter(KNameAndUrlInputDialog* self, QObject* param1, QEvent* param2);
    friend bool KNameAndUrlInputDialog_SuperEventFilter(KNameAndUrlInputDialog* self, QObject* param1, QEvent* param2);
    friend bool KNameAndUrlInputDialog_Event(KNameAndUrlInputDialog* self, QEvent* event);
    friend bool KNameAndUrlInputDialog_SuperEvent(KNameAndUrlInputDialog* self, QEvent* event);
    friend void KNameAndUrlInputDialog_MousePressEvent(KNameAndUrlInputDialog* self, QMouseEvent* event);
    friend void KNameAndUrlInputDialog_SuperMousePressEvent(KNameAndUrlInputDialog* self, QMouseEvent* event);
    friend void KNameAndUrlInputDialog_MouseReleaseEvent(KNameAndUrlInputDialog* self, QMouseEvent* event);
    friend void KNameAndUrlInputDialog_SuperMouseReleaseEvent(KNameAndUrlInputDialog* self, QMouseEvent* event);
    friend void KNameAndUrlInputDialog_MouseDoubleClickEvent(KNameAndUrlInputDialog* self, QMouseEvent* event);
    friend void KNameAndUrlInputDialog_SuperMouseDoubleClickEvent(KNameAndUrlInputDialog* self, QMouseEvent* event);
    friend void KNameAndUrlInputDialog_MouseMoveEvent(KNameAndUrlInputDialog* self, QMouseEvent* event);
    friend void KNameAndUrlInputDialog_SuperMouseMoveEvent(KNameAndUrlInputDialog* self, QMouseEvent* event);
    friend void KNameAndUrlInputDialog_WheelEvent(KNameAndUrlInputDialog* self, QWheelEvent* event);
    friend void KNameAndUrlInputDialog_SuperWheelEvent(KNameAndUrlInputDialog* self, QWheelEvent* event);
    friend void KNameAndUrlInputDialog_KeyReleaseEvent(KNameAndUrlInputDialog* self, QKeyEvent* event);
    friend void KNameAndUrlInputDialog_SuperKeyReleaseEvent(KNameAndUrlInputDialog* self, QKeyEvent* event);
    friend void KNameAndUrlInputDialog_FocusInEvent(KNameAndUrlInputDialog* self, QFocusEvent* event);
    friend void KNameAndUrlInputDialog_SuperFocusInEvent(KNameAndUrlInputDialog* self, QFocusEvent* event);
    friend void KNameAndUrlInputDialog_FocusOutEvent(KNameAndUrlInputDialog* self, QFocusEvent* event);
    friend void KNameAndUrlInputDialog_SuperFocusOutEvent(KNameAndUrlInputDialog* self, QFocusEvent* event);
    friend void KNameAndUrlInputDialog_EnterEvent(KNameAndUrlInputDialog* self, QEnterEvent* event);
    friend void KNameAndUrlInputDialog_SuperEnterEvent(KNameAndUrlInputDialog* self, QEnterEvent* event);
    friend void KNameAndUrlInputDialog_LeaveEvent(KNameAndUrlInputDialog* self, QEvent* event);
    friend void KNameAndUrlInputDialog_SuperLeaveEvent(KNameAndUrlInputDialog* self, QEvent* event);
    friend void KNameAndUrlInputDialog_PaintEvent(KNameAndUrlInputDialog* self, QPaintEvent* event);
    friend void KNameAndUrlInputDialog_SuperPaintEvent(KNameAndUrlInputDialog* self, QPaintEvent* event);
    friend void KNameAndUrlInputDialog_MoveEvent(KNameAndUrlInputDialog* self, QMoveEvent* event);
    friend void KNameAndUrlInputDialog_SuperMoveEvent(KNameAndUrlInputDialog* self, QMoveEvent* event);
    friend void KNameAndUrlInputDialog_TabletEvent(KNameAndUrlInputDialog* self, QTabletEvent* event);
    friend void KNameAndUrlInputDialog_SuperTabletEvent(KNameAndUrlInputDialog* self, QTabletEvent* event);
    friend void KNameAndUrlInputDialog_ActionEvent(KNameAndUrlInputDialog* self, QActionEvent* event);
    friend void KNameAndUrlInputDialog_SuperActionEvent(KNameAndUrlInputDialog* self, QActionEvent* event);
    friend void KNameAndUrlInputDialog_DragEnterEvent(KNameAndUrlInputDialog* self, QDragEnterEvent* event);
    friend void KNameAndUrlInputDialog_SuperDragEnterEvent(KNameAndUrlInputDialog* self, QDragEnterEvent* event);
    friend void KNameAndUrlInputDialog_DragMoveEvent(KNameAndUrlInputDialog* self, QDragMoveEvent* event);
    friend void KNameAndUrlInputDialog_SuperDragMoveEvent(KNameAndUrlInputDialog* self, QDragMoveEvent* event);
    friend void KNameAndUrlInputDialog_DragLeaveEvent(KNameAndUrlInputDialog* self, QDragLeaveEvent* event);
    friend void KNameAndUrlInputDialog_SuperDragLeaveEvent(KNameAndUrlInputDialog* self, QDragLeaveEvent* event);
    friend void KNameAndUrlInputDialog_DropEvent(KNameAndUrlInputDialog* self, QDropEvent* event);
    friend void KNameAndUrlInputDialog_SuperDropEvent(KNameAndUrlInputDialog* self, QDropEvent* event);
    friend void KNameAndUrlInputDialog_HideEvent(KNameAndUrlInputDialog* self, QHideEvent* event);
    friend void KNameAndUrlInputDialog_SuperHideEvent(KNameAndUrlInputDialog* self, QHideEvent* event);
    friend bool KNameAndUrlInputDialog_NativeEvent(KNameAndUrlInputDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KNameAndUrlInputDialog_SuperNativeEvent(KNameAndUrlInputDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KNameAndUrlInputDialog_ChangeEvent(KNameAndUrlInputDialog* self, QEvent* param1);
    friend void KNameAndUrlInputDialog_SuperChangeEvent(KNameAndUrlInputDialog* self, QEvent* param1);
    friend int KNameAndUrlInputDialog_Metric(const KNameAndUrlInputDialog* self, int param1);
    friend int KNameAndUrlInputDialog_SuperMetric(const KNameAndUrlInputDialog* self, int param1);
    friend void KNameAndUrlInputDialog_InitPainter(const KNameAndUrlInputDialog* self, QPainter* painter);
    friend void KNameAndUrlInputDialog_SuperInitPainter(const KNameAndUrlInputDialog* self, QPainter* painter);
    friend QPaintDevice* KNameAndUrlInputDialog_Redirected(const KNameAndUrlInputDialog* self, QPoint* offset);
    friend QPaintDevice* KNameAndUrlInputDialog_SuperRedirected(const KNameAndUrlInputDialog* self, QPoint* offset);
    friend QPainter* KNameAndUrlInputDialog_SharedPainter(const KNameAndUrlInputDialog* self);
    friend QPainter* KNameAndUrlInputDialog_SuperSharedPainter(const KNameAndUrlInputDialog* self);
    friend void KNameAndUrlInputDialog_InputMethodEvent(KNameAndUrlInputDialog* self, QInputMethodEvent* param1);
    friend void KNameAndUrlInputDialog_SuperInputMethodEvent(KNameAndUrlInputDialog* self, QInputMethodEvent* param1);
    friend bool KNameAndUrlInputDialog_FocusNextPrevChild(KNameAndUrlInputDialog* self, bool next);
    friend bool KNameAndUrlInputDialog_SuperFocusNextPrevChild(KNameAndUrlInputDialog* self, bool next);
    friend void KNameAndUrlInputDialog_TimerEvent(KNameAndUrlInputDialog* self, QTimerEvent* event);
    friend void KNameAndUrlInputDialog_SuperTimerEvent(KNameAndUrlInputDialog* self, QTimerEvent* event);
    friend void KNameAndUrlInputDialog_ChildEvent(KNameAndUrlInputDialog* self, QChildEvent* event);
    friend void KNameAndUrlInputDialog_SuperChildEvent(KNameAndUrlInputDialog* self, QChildEvent* event);
    friend void KNameAndUrlInputDialog_CustomEvent(KNameAndUrlInputDialog* self, QEvent* event);
    friend void KNameAndUrlInputDialog_SuperCustomEvent(KNameAndUrlInputDialog* self, QEvent* event);
    friend void KNameAndUrlInputDialog_ConnectNotify(KNameAndUrlInputDialog* self, const QMetaMethod* signal);
    friend void KNameAndUrlInputDialog_SuperConnectNotify(KNameAndUrlInputDialog* self, const QMetaMethod* signal);
    friend void KNameAndUrlInputDialog_DisconnectNotify(KNameAndUrlInputDialog* self, const QMetaMethod* signal);
    friend void KNameAndUrlInputDialog_SuperDisconnectNotify(KNameAndUrlInputDialog* self, const QMetaMethod* signal);
    friend void KNameAndUrlInputDialog_AdjustPosition(KNameAndUrlInputDialog* self, QWidget* param1);
    friend void KNameAndUrlInputDialog_SuperAdjustPosition(KNameAndUrlInputDialog* self, QWidget* param1);
    friend void KNameAndUrlInputDialog_UpdateMicroFocus(KNameAndUrlInputDialog* self);
    friend void KNameAndUrlInputDialog_SuperUpdateMicroFocus(KNameAndUrlInputDialog* self);
    friend void KNameAndUrlInputDialog_Create(KNameAndUrlInputDialog* self);
    friend void KNameAndUrlInputDialog_SuperCreate(KNameAndUrlInputDialog* self);
    friend void KNameAndUrlInputDialog_Destroy(KNameAndUrlInputDialog* self);
    friend void KNameAndUrlInputDialog_SuperDestroy(KNameAndUrlInputDialog* self);
    friend bool KNameAndUrlInputDialog_FocusNextChild(KNameAndUrlInputDialog* self);
    friend bool KNameAndUrlInputDialog_SuperFocusNextChild(KNameAndUrlInputDialog* self);
    friend bool KNameAndUrlInputDialog_FocusPreviousChild(KNameAndUrlInputDialog* self);
    friend bool KNameAndUrlInputDialog_SuperFocusPreviousChild(KNameAndUrlInputDialog* self);
    friend QObject* KNameAndUrlInputDialog_Sender(const KNameAndUrlInputDialog* self);
    friend QObject* KNameAndUrlInputDialog_SuperSender(const KNameAndUrlInputDialog* self);
    friend int KNameAndUrlInputDialog_SenderSignalIndex(const KNameAndUrlInputDialog* self);
    friend int KNameAndUrlInputDialog_SuperSenderSignalIndex(const KNameAndUrlInputDialog* self);
    friend int KNameAndUrlInputDialog_Receivers(const KNameAndUrlInputDialog* self, const char* signal);
    friend int KNameAndUrlInputDialog_SuperReceivers(const KNameAndUrlInputDialog* self, const char* signal);
    friend bool KNameAndUrlInputDialog_IsSignalConnected(const KNameAndUrlInputDialog* self, const QMetaMethod* signal);
    friend bool KNameAndUrlInputDialog_SuperIsSignalConnected(const KNameAndUrlInputDialog* self, const QMetaMethod* signal);
    friend double KNameAndUrlInputDialog_GetDecodedMetricF(const KNameAndUrlInputDialog* self, int metricA, int metricB);
    friend double KNameAndUrlInputDialog_SuperGetDecodedMetricF(const KNameAndUrlInputDialog* self, int metricA, int metricB);
};

#endif
