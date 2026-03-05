#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKOPENWITHDIALOG_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKOPENWITHDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KOpenWithDialog so that we can call protected methods
class VirtualKOpenWithDialog final : public KOpenWithDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKOpenWithDialog = true;

    // Virtual class public types (including callbacks)
    using KOpenWithDialog_MetaObject_Callback = QMetaObject* (*)();
    using KOpenWithDialog_Metacast_Callback = void* (*)(KOpenWithDialog*, const char*);
    using KOpenWithDialog_Metacall_Callback = int (*)(KOpenWithDialog*, int, int, void**);
    using KOpenWithDialog_Accept_Callback = void (*)();
    using KOpenWithDialog_SetVisible_Callback = void (*)(KOpenWithDialog*, bool);
    using KOpenWithDialog_SizeHint_Callback = QSize* (*)();
    using KOpenWithDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KOpenWithDialog_Open_Callback = void (*)();
    using KOpenWithDialog_Exec_Callback = int (*)();
    using KOpenWithDialog_Done_Callback = void (*)(KOpenWithDialog*, int);
    using KOpenWithDialog_Reject_Callback = void (*)();
    using KOpenWithDialog_KeyPressEvent_Callback = void (*)(KOpenWithDialog*, QKeyEvent*);
    using KOpenWithDialog_CloseEvent_Callback = void (*)(KOpenWithDialog*, QCloseEvent*);
    using KOpenWithDialog_ShowEvent_Callback = void (*)(KOpenWithDialog*, QShowEvent*);
    using KOpenWithDialog_ResizeEvent_Callback = void (*)(KOpenWithDialog*, QResizeEvent*);
    using KOpenWithDialog_ContextMenuEvent_Callback = void (*)(KOpenWithDialog*, QContextMenuEvent*);
    using KOpenWithDialog_DevType_Callback = int (*)();
    using KOpenWithDialog_HeightForWidth_Callback = int (*)(const KOpenWithDialog*, int);
    using KOpenWithDialog_HasHeightForWidth_Callback = bool (*)();
    using KOpenWithDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KOpenWithDialog_Event_Callback = bool (*)(KOpenWithDialog*, QEvent*);
    using KOpenWithDialog_MousePressEvent_Callback = void (*)(KOpenWithDialog*, QMouseEvent*);
    using KOpenWithDialog_MouseReleaseEvent_Callback = void (*)(KOpenWithDialog*, QMouseEvent*);
    using KOpenWithDialog_MouseDoubleClickEvent_Callback = void (*)(KOpenWithDialog*, QMouseEvent*);
    using KOpenWithDialog_MouseMoveEvent_Callback = void (*)(KOpenWithDialog*, QMouseEvent*);
    using KOpenWithDialog_WheelEvent_Callback = void (*)(KOpenWithDialog*, QWheelEvent*);
    using KOpenWithDialog_KeyReleaseEvent_Callback = void (*)(KOpenWithDialog*, QKeyEvent*);
    using KOpenWithDialog_FocusInEvent_Callback = void (*)(KOpenWithDialog*, QFocusEvent*);
    using KOpenWithDialog_FocusOutEvent_Callback = void (*)(KOpenWithDialog*, QFocusEvent*);
    using KOpenWithDialog_EnterEvent_Callback = void (*)(KOpenWithDialog*, QEnterEvent*);
    using KOpenWithDialog_LeaveEvent_Callback = void (*)(KOpenWithDialog*, QEvent*);
    using KOpenWithDialog_PaintEvent_Callback = void (*)(KOpenWithDialog*, QPaintEvent*);
    using KOpenWithDialog_MoveEvent_Callback = void (*)(KOpenWithDialog*, QMoveEvent*);
    using KOpenWithDialog_TabletEvent_Callback = void (*)(KOpenWithDialog*, QTabletEvent*);
    using KOpenWithDialog_ActionEvent_Callback = void (*)(KOpenWithDialog*, QActionEvent*);
    using KOpenWithDialog_DragEnterEvent_Callback = void (*)(KOpenWithDialog*, QDragEnterEvent*);
    using KOpenWithDialog_DragMoveEvent_Callback = void (*)(KOpenWithDialog*, QDragMoveEvent*);
    using KOpenWithDialog_DragLeaveEvent_Callback = void (*)(KOpenWithDialog*, QDragLeaveEvent*);
    using KOpenWithDialog_DropEvent_Callback = void (*)(KOpenWithDialog*, QDropEvent*);
    using KOpenWithDialog_HideEvent_Callback = void (*)(KOpenWithDialog*, QHideEvent*);
    using KOpenWithDialog_NativeEvent_Callback = bool (*)(KOpenWithDialog*, libqt_string, void*, intptr_t*);
    using KOpenWithDialog_ChangeEvent_Callback = void (*)(KOpenWithDialog*, QEvent*);
    using KOpenWithDialog_Metric_Callback = int (*)(const KOpenWithDialog*, int);
    using KOpenWithDialog_InitPainter_Callback = void (*)(const KOpenWithDialog*, QPainter*);
    using KOpenWithDialog_Redirected_Callback = QPaintDevice* (*)(const KOpenWithDialog*, QPoint*);
    using KOpenWithDialog_SharedPainter_Callback = QPainter* (*)();
    using KOpenWithDialog_InputMethodEvent_Callback = void (*)(KOpenWithDialog*, QInputMethodEvent*);
    using KOpenWithDialog_InputMethodQuery_Callback = QVariant* (*)(const KOpenWithDialog*, int);
    using KOpenWithDialog_FocusNextPrevChild_Callback = bool (*)(KOpenWithDialog*, bool);
    using KOpenWithDialog_TimerEvent_Callback = void (*)(KOpenWithDialog*, QTimerEvent*);
    using KOpenWithDialog_ChildEvent_Callback = void (*)(KOpenWithDialog*, QChildEvent*);
    using KOpenWithDialog_CustomEvent_Callback = void (*)(KOpenWithDialog*, QEvent*);
    using KOpenWithDialog_ConnectNotify_Callback = void (*)(KOpenWithDialog*, QMetaMethod*);
    using KOpenWithDialog_DisconnectNotify_Callback = void (*)(KOpenWithDialog*, QMetaMethod*);
    using KOpenWithDialog_AdjustPosition_Callback = void (*)(KOpenWithDialog*, QWidget*);
    using KOpenWithDialog_UpdateMicroFocus_Callback = void (*)();
    using KOpenWithDialog_Create_Callback = void (*)();
    using KOpenWithDialog_Destroy_Callback = void (*)();
    using KOpenWithDialog_FocusNextChild_Callback = bool (*)();
    using KOpenWithDialog_FocusPreviousChild_Callback = bool (*)();
    using KOpenWithDialog_Sender_Callback = QObject* (*)();
    using KOpenWithDialog_SenderSignalIndex_Callback = int (*)();
    using KOpenWithDialog_Receivers_Callback = int (*)(const KOpenWithDialog*, const char*);
    using KOpenWithDialog_IsSignalConnected_Callback = bool (*)(const KOpenWithDialog*, QMetaMethod*);
    using KOpenWithDialog_GetDecodedMetricF_Callback = double (*)(const KOpenWithDialog*, int, int);

  protected:
    // Instance callback storage
    KOpenWithDialog_MetaObject_Callback kopenwithdialog_metaobject_callback = nullptr;
    KOpenWithDialog_Metacast_Callback kopenwithdialog_metacast_callback = nullptr;
    KOpenWithDialog_Metacall_Callback kopenwithdialog_metacall_callback = nullptr;
    KOpenWithDialog_Accept_Callback kopenwithdialog_accept_callback = nullptr;
    KOpenWithDialog_SetVisible_Callback kopenwithdialog_setvisible_callback = nullptr;
    KOpenWithDialog_SizeHint_Callback kopenwithdialog_sizehint_callback = nullptr;
    KOpenWithDialog_MinimumSizeHint_Callback kopenwithdialog_minimumsizehint_callback = nullptr;
    KOpenWithDialog_Open_Callback kopenwithdialog_open_callback = nullptr;
    KOpenWithDialog_Exec_Callback kopenwithdialog_exec_callback = nullptr;
    KOpenWithDialog_Done_Callback kopenwithdialog_done_callback = nullptr;
    KOpenWithDialog_Reject_Callback kopenwithdialog_reject_callback = nullptr;
    KOpenWithDialog_KeyPressEvent_Callback kopenwithdialog_keypressevent_callback = nullptr;
    KOpenWithDialog_CloseEvent_Callback kopenwithdialog_closeevent_callback = nullptr;
    KOpenWithDialog_ShowEvent_Callback kopenwithdialog_showevent_callback = nullptr;
    KOpenWithDialog_ResizeEvent_Callback kopenwithdialog_resizeevent_callback = nullptr;
    KOpenWithDialog_ContextMenuEvent_Callback kopenwithdialog_contextmenuevent_callback = nullptr;
    KOpenWithDialog_DevType_Callback kopenwithdialog_devtype_callback = nullptr;
    KOpenWithDialog_HeightForWidth_Callback kopenwithdialog_heightforwidth_callback = nullptr;
    KOpenWithDialog_HasHeightForWidth_Callback kopenwithdialog_hasheightforwidth_callback = nullptr;
    KOpenWithDialog_PaintEngine_Callback kopenwithdialog_paintengine_callback = nullptr;
    KOpenWithDialog_Event_Callback kopenwithdialog_event_callback = nullptr;
    KOpenWithDialog_MousePressEvent_Callback kopenwithdialog_mousepressevent_callback = nullptr;
    KOpenWithDialog_MouseReleaseEvent_Callback kopenwithdialog_mousereleaseevent_callback = nullptr;
    KOpenWithDialog_MouseDoubleClickEvent_Callback kopenwithdialog_mousedoubleclickevent_callback = nullptr;
    KOpenWithDialog_MouseMoveEvent_Callback kopenwithdialog_mousemoveevent_callback = nullptr;
    KOpenWithDialog_WheelEvent_Callback kopenwithdialog_wheelevent_callback = nullptr;
    KOpenWithDialog_KeyReleaseEvent_Callback kopenwithdialog_keyreleaseevent_callback = nullptr;
    KOpenWithDialog_FocusInEvent_Callback kopenwithdialog_focusinevent_callback = nullptr;
    KOpenWithDialog_FocusOutEvent_Callback kopenwithdialog_focusoutevent_callback = nullptr;
    KOpenWithDialog_EnterEvent_Callback kopenwithdialog_enterevent_callback = nullptr;
    KOpenWithDialog_LeaveEvent_Callback kopenwithdialog_leaveevent_callback = nullptr;
    KOpenWithDialog_PaintEvent_Callback kopenwithdialog_paintevent_callback = nullptr;
    KOpenWithDialog_MoveEvent_Callback kopenwithdialog_moveevent_callback = nullptr;
    KOpenWithDialog_TabletEvent_Callback kopenwithdialog_tabletevent_callback = nullptr;
    KOpenWithDialog_ActionEvent_Callback kopenwithdialog_actionevent_callback = nullptr;
    KOpenWithDialog_DragEnterEvent_Callback kopenwithdialog_dragenterevent_callback = nullptr;
    KOpenWithDialog_DragMoveEvent_Callback kopenwithdialog_dragmoveevent_callback = nullptr;
    KOpenWithDialog_DragLeaveEvent_Callback kopenwithdialog_dragleaveevent_callback = nullptr;
    KOpenWithDialog_DropEvent_Callback kopenwithdialog_dropevent_callback = nullptr;
    KOpenWithDialog_HideEvent_Callback kopenwithdialog_hideevent_callback = nullptr;
    KOpenWithDialog_NativeEvent_Callback kopenwithdialog_nativeevent_callback = nullptr;
    KOpenWithDialog_ChangeEvent_Callback kopenwithdialog_changeevent_callback = nullptr;
    KOpenWithDialog_Metric_Callback kopenwithdialog_metric_callback = nullptr;
    KOpenWithDialog_InitPainter_Callback kopenwithdialog_initpainter_callback = nullptr;
    KOpenWithDialog_Redirected_Callback kopenwithdialog_redirected_callback = nullptr;
    KOpenWithDialog_SharedPainter_Callback kopenwithdialog_sharedpainter_callback = nullptr;
    KOpenWithDialog_InputMethodEvent_Callback kopenwithdialog_inputmethodevent_callback = nullptr;
    KOpenWithDialog_InputMethodQuery_Callback kopenwithdialog_inputmethodquery_callback = nullptr;
    KOpenWithDialog_FocusNextPrevChild_Callback kopenwithdialog_focusnextprevchild_callback = nullptr;
    KOpenWithDialog_TimerEvent_Callback kopenwithdialog_timerevent_callback = nullptr;
    KOpenWithDialog_ChildEvent_Callback kopenwithdialog_childevent_callback = nullptr;
    KOpenWithDialog_CustomEvent_Callback kopenwithdialog_customevent_callback = nullptr;
    KOpenWithDialog_ConnectNotify_Callback kopenwithdialog_connectnotify_callback = nullptr;
    KOpenWithDialog_DisconnectNotify_Callback kopenwithdialog_disconnectnotify_callback = nullptr;
    KOpenWithDialog_AdjustPosition_Callback kopenwithdialog_adjustposition_callback = nullptr;
    KOpenWithDialog_UpdateMicroFocus_Callback kopenwithdialog_updatemicrofocus_callback = nullptr;
    KOpenWithDialog_Create_Callback kopenwithdialog_create_callback = nullptr;
    KOpenWithDialog_Destroy_Callback kopenwithdialog_destroy_callback = nullptr;
    KOpenWithDialog_FocusNextChild_Callback kopenwithdialog_focusnextchild_callback = nullptr;
    KOpenWithDialog_FocusPreviousChild_Callback kopenwithdialog_focuspreviouschild_callback = nullptr;
    KOpenWithDialog_Sender_Callback kopenwithdialog_sender_callback = nullptr;
    KOpenWithDialog_SenderSignalIndex_Callback kopenwithdialog_sendersignalindex_callback = nullptr;
    KOpenWithDialog_Receivers_Callback kopenwithdialog_receivers_callback = nullptr;
    KOpenWithDialog_IsSignalConnected_Callback kopenwithdialog_issignalconnected_callback = nullptr;
    KOpenWithDialog_GetDecodedMetricF_Callback kopenwithdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kopenwithdialog_metaobject_isbase = false;
    mutable bool kopenwithdialog_metacast_isbase = false;
    mutable bool kopenwithdialog_metacall_isbase = false;
    mutable bool kopenwithdialog_accept_isbase = false;
    mutable bool kopenwithdialog_setvisible_isbase = false;
    mutable bool kopenwithdialog_sizehint_isbase = false;
    mutable bool kopenwithdialog_minimumsizehint_isbase = false;
    mutable bool kopenwithdialog_open_isbase = false;
    mutable bool kopenwithdialog_exec_isbase = false;
    mutable bool kopenwithdialog_done_isbase = false;
    mutable bool kopenwithdialog_reject_isbase = false;
    mutable bool kopenwithdialog_keypressevent_isbase = false;
    mutable bool kopenwithdialog_closeevent_isbase = false;
    mutable bool kopenwithdialog_showevent_isbase = false;
    mutable bool kopenwithdialog_resizeevent_isbase = false;
    mutable bool kopenwithdialog_contextmenuevent_isbase = false;
    mutable bool kopenwithdialog_devtype_isbase = false;
    mutable bool kopenwithdialog_heightforwidth_isbase = false;
    mutable bool kopenwithdialog_hasheightforwidth_isbase = false;
    mutable bool kopenwithdialog_paintengine_isbase = false;
    mutable bool kopenwithdialog_event_isbase = false;
    mutable bool kopenwithdialog_mousepressevent_isbase = false;
    mutable bool kopenwithdialog_mousereleaseevent_isbase = false;
    mutable bool kopenwithdialog_mousedoubleclickevent_isbase = false;
    mutable bool kopenwithdialog_mousemoveevent_isbase = false;
    mutable bool kopenwithdialog_wheelevent_isbase = false;
    mutable bool kopenwithdialog_keyreleaseevent_isbase = false;
    mutable bool kopenwithdialog_focusinevent_isbase = false;
    mutable bool kopenwithdialog_focusoutevent_isbase = false;
    mutable bool kopenwithdialog_enterevent_isbase = false;
    mutable bool kopenwithdialog_leaveevent_isbase = false;
    mutable bool kopenwithdialog_paintevent_isbase = false;
    mutable bool kopenwithdialog_moveevent_isbase = false;
    mutable bool kopenwithdialog_tabletevent_isbase = false;
    mutable bool kopenwithdialog_actionevent_isbase = false;
    mutable bool kopenwithdialog_dragenterevent_isbase = false;
    mutable bool kopenwithdialog_dragmoveevent_isbase = false;
    mutable bool kopenwithdialog_dragleaveevent_isbase = false;
    mutable bool kopenwithdialog_dropevent_isbase = false;
    mutable bool kopenwithdialog_hideevent_isbase = false;
    mutable bool kopenwithdialog_nativeevent_isbase = false;
    mutable bool kopenwithdialog_changeevent_isbase = false;
    mutable bool kopenwithdialog_metric_isbase = false;
    mutable bool kopenwithdialog_initpainter_isbase = false;
    mutable bool kopenwithdialog_redirected_isbase = false;
    mutable bool kopenwithdialog_sharedpainter_isbase = false;
    mutable bool kopenwithdialog_inputmethodevent_isbase = false;
    mutable bool kopenwithdialog_inputmethodquery_isbase = false;
    mutable bool kopenwithdialog_focusnextprevchild_isbase = false;
    mutable bool kopenwithdialog_timerevent_isbase = false;
    mutable bool kopenwithdialog_childevent_isbase = false;
    mutable bool kopenwithdialog_customevent_isbase = false;
    mutable bool kopenwithdialog_connectnotify_isbase = false;
    mutable bool kopenwithdialog_disconnectnotify_isbase = false;
    mutable bool kopenwithdialog_adjustposition_isbase = false;
    mutable bool kopenwithdialog_updatemicrofocus_isbase = false;
    mutable bool kopenwithdialog_create_isbase = false;
    mutable bool kopenwithdialog_destroy_isbase = false;
    mutable bool kopenwithdialog_focusnextchild_isbase = false;
    mutable bool kopenwithdialog_focuspreviouschild_isbase = false;
    mutable bool kopenwithdialog_sender_isbase = false;
    mutable bool kopenwithdialog_sendersignalindex_isbase = false;
    mutable bool kopenwithdialog_receivers_isbase = false;
    mutable bool kopenwithdialog_issignalconnected_isbase = false;
    mutable bool kopenwithdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKOpenWithDialog(QWidget* parent) : KOpenWithDialog(parent) {};
    VirtualKOpenWithDialog(const QList<QUrl>& urls) : KOpenWithDialog(urls) {};
    VirtualKOpenWithDialog(const QList<QUrl>& urls, const QString& text, const QString& value) : KOpenWithDialog(urls, text, value) {};
    VirtualKOpenWithDialog(const QString& mimeType, const QString& value) : KOpenWithDialog(mimeType, value) {};
    VirtualKOpenWithDialog(const QList<QUrl>& urls, const QString& mimeType, const QString& text, const QString& value) : KOpenWithDialog(urls, mimeType, text, value) {};
    VirtualKOpenWithDialog() : KOpenWithDialog() {};
    VirtualKOpenWithDialog(const QList<QUrl>& urls, QWidget* parent) : KOpenWithDialog(urls, parent) {};
    VirtualKOpenWithDialog(const QList<QUrl>& urls, const QString& text, const QString& value, QWidget* parent) : KOpenWithDialog(urls, text, value, parent) {};
    VirtualKOpenWithDialog(const QString& mimeType, const QString& value, QWidget* parent) : KOpenWithDialog(mimeType, value, parent) {};
    VirtualKOpenWithDialog(const QList<QUrl>& urls, const QString& mimeType, const QString& text, const QString& value, QWidget* parent) : KOpenWithDialog(urls, mimeType, text, value, parent) {};

    // Callback setters
    inline void setKOpenWithDialog_MetaObject_Callback(KOpenWithDialog_MetaObject_Callback cb) { kopenwithdialog_metaobject_callback = cb; }
    inline void setKOpenWithDialog_Metacast_Callback(KOpenWithDialog_Metacast_Callback cb) { kopenwithdialog_metacast_callback = cb; }
    inline void setKOpenWithDialog_Metacall_Callback(KOpenWithDialog_Metacall_Callback cb) { kopenwithdialog_metacall_callback = cb; }
    inline void setKOpenWithDialog_Accept_Callback(KOpenWithDialog_Accept_Callback cb) { kopenwithdialog_accept_callback = cb; }
    inline void setKOpenWithDialog_SetVisible_Callback(KOpenWithDialog_SetVisible_Callback cb) { kopenwithdialog_setvisible_callback = cb; }
    inline void setKOpenWithDialog_SizeHint_Callback(KOpenWithDialog_SizeHint_Callback cb) { kopenwithdialog_sizehint_callback = cb; }
    inline void setKOpenWithDialog_MinimumSizeHint_Callback(KOpenWithDialog_MinimumSizeHint_Callback cb) { kopenwithdialog_minimumsizehint_callback = cb; }
    inline void setKOpenWithDialog_Open_Callback(KOpenWithDialog_Open_Callback cb) { kopenwithdialog_open_callback = cb; }
    inline void setKOpenWithDialog_Exec_Callback(KOpenWithDialog_Exec_Callback cb) { kopenwithdialog_exec_callback = cb; }
    inline void setKOpenWithDialog_Done_Callback(KOpenWithDialog_Done_Callback cb) { kopenwithdialog_done_callback = cb; }
    inline void setKOpenWithDialog_Reject_Callback(KOpenWithDialog_Reject_Callback cb) { kopenwithdialog_reject_callback = cb; }
    inline void setKOpenWithDialog_KeyPressEvent_Callback(KOpenWithDialog_KeyPressEvent_Callback cb) { kopenwithdialog_keypressevent_callback = cb; }
    inline void setKOpenWithDialog_CloseEvent_Callback(KOpenWithDialog_CloseEvent_Callback cb) { kopenwithdialog_closeevent_callback = cb; }
    inline void setKOpenWithDialog_ShowEvent_Callback(KOpenWithDialog_ShowEvent_Callback cb) { kopenwithdialog_showevent_callback = cb; }
    inline void setKOpenWithDialog_ResizeEvent_Callback(KOpenWithDialog_ResizeEvent_Callback cb) { kopenwithdialog_resizeevent_callback = cb; }
    inline void setKOpenWithDialog_ContextMenuEvent_Callback(KOpenWithDialog_ContextMenuEvent_Callback cb) { kopenwithdialog_contextmenuevent_callback = cb; }
    inline void setKOpenWithDialog_DevType_Callback(KOpenWithDialog_DevType_Callback cb) { kopenwithdialog_devtype_callback = cb; }
    inline void setKOpenWithDialog_HeightForWidth_Callback(KOpenWithDialog_HeightForWidth_Callback cb) { kopenwithdialog_heightforwidth_callback = cb; }
    inline void setKOpenWithDialog_HasHeightForWidth_Callback(KOpenWithDialog_HasHeightForWidth_Callback cb) { kopenwithdialog_hasheightforwidth_callback = cb; }
    inline void setKOpenWithDialog_PaintEngine_Callback(KOpenWithDialog_PaintEngine_Callback cb) { kopenwithdialog_paintengine_callback = cb; }
    inline void setKOpenWithDialog_Event_Callback(KOpenWithDialog_Event_Callback cb) { kopenwithdialog_event_callback = cb; }
    inline void setKOpenWithDialog_MousePressEvent_Callback(KOpenWithDialog_MousePressEvent_Callback cb) { kopenwithdialog_mousepressevent_callback = cb; }
    inline void setKOpenWithDialog_MouseReleaseEvent_Callback(KOpenWithDialog_MouseReleaseEvent_Callback cb) { kopenwithdialog_mousereleaseevent_callback = cb; }
    inline void setKOpenWithDialog_MouseDoubleClickEvent_Callback(KOpenWithDialog_MouseDoubleClickEvent_Callback cb) { kopenwithdialog_mousedoubleclickevent_callback = cb; }
    inline void setKOpenWithDialog_MouseMoveEvent_Callback(KOpenWithDialog_MouseMoveEvent_Callback cb) { kopenwithdialog_mousemoveevent_callback = cb; }
    inline void setKOpenWithDialog_WheelEvent_Callback(KOpenWithDialog_WheelEvent_Callback cb) { kopenwithdialog_wheelevent_callback = cb; }
    inline void setKOpenWithDialog_KeyReleaseEvent_Callback(KOpenWithDialog_KeyReleaseEvent_Callback cb) { kopenwithdialog_keyreleaseevent_callback = cb; }
    inline void setKOpenWithDialog_FocusInEvent_Callback(KOpenWithDialog_FocusInEvent_Callback cb) { kopenwithdialog_focusinevent_callback = cb; }
    inline void setKOpenWithDialog_FocusOutEvent_Callback(KOpenWithDialog_FocusOutEvent_Callback cb) { kopenwithdialog_focusoutevent_callback = cb; }
    inline void setKOpenWithDialog_EnterEvent_Callback(KOpenWithDialog_EnterEvent_Callback cb) { kopenwithdialog_enterevent_callback = cb; }
    inline void setKOpenWithDialog_LeaveEvent_Callback(KOpenWithDialog_LeaveEvent_Callback cb) { kopenwithdialog_leaveevent_callback = cb; }
    inline void setKOpenWithDialog_PaintEvent_Callback(KOpenWithDialog_PaintEvent_Callback cb) { kopenwithdialog_paintevent_callback = cb; }
    inline void setKOpenWithDialog_MoveEvent_Callback(KOpenWithDialog_MoveEvent_Callback cb) { kopenwithdialog_moveevent_callback = cb; }
    inline void setKOpenWithDialog_TabletEvent_Callback(KOpenWithDialog_TabletEvent_Callback cb) { kopenwithdialog_tabletevent_callback = cb; }
    inline void setKOpenWithDialog_ActionEvent_Callback(KOpenWithDialog_ActionEvent_Callback cb) { kopenwithdialog_actionevent_callback = cb; }
    inline void setKOpenWithDialog_DragEnterEvent_Callback(KOpenWithDialog_DragEnterEvent_Callback cb) { kopenwithdialog_dragenterevent_callback = cb; }
    inline void setKOpenWithDialog_DragMoveEvent_Callback(KOpenWithDialog_DragMoveEvent_Callback cb) { kopenwithdialog_dragmoveevent_callback = cb; }
    inline void setKOpenWithDialog_DragLeaveEvent_Callback(KOpenWithDialog_DragLeaveEvent_Callback cb) { kopenwithdialog_dragleaveevent_callback = cb; }
    inline void setKOpenWithDialog_DropEvent_Callback(KOpenWithDialog_DropEvent_Callback cb) { kopenwithdialog_dropevent_callback = cb; }
    inline void setKOpenWithDialog_HideEvent_Callback(KOpenWithDialog_HideEvent_Callback cb) { kopenwithdialog_hideevent_callback = cb; }
    inline void setKOpenWithDialog_NativeEvent_Callback(KOpenWithDialog_NativeEvent_Callback cb) { kopenwithdialog_nativeevent_callback = cb; }
    inline void setKOpenWithDialog_ChangeEvent_Callback(KOpenWithDialog_ChangeEvent_Callback cb) { kopenwithdialog_changeevent_callback = cb; }
    inline void setKOpenWithDialog_Metric_Callback(KOpenWithDialog_Metric_Callback cb) { kopenwithdialog_metric_callback = cb; }
    inline void setKOpenWithDialog_InitPainter_Callback(KOpenWithDialog_InitPainter_Callback cb) { kopenwithdialog_initpainter_callback = cb; }
    inline void setKOpenWithDialog_Redirected_Callback(KOpenWithDialog_Redirected_Callback cb) { kopenwithdialog_redirected_callback = cb; }
    inline void setKOpenWithDialog_SharedPainter_Callback(KOpenWithDialog_SharedPainter_Callback cb) { kopenwithdialog_sharedpainter_callback = cb; }
    inline void setKOpenWithDialog_InputMethodEvent_Callback(KOpenWithDialog_InputMethodEvent_Callback cb) { kopenwithdialog_inputmethodevent_callback = cb; }
    inline void setKOpenWithDialog_InputMethodQuery_Callback(KOpenWithDialog_InputMethodQuery_Callback cb) { kopenwithdialog_inputmethodquery_callback = cb; }
    inline void setKOpenWithDialog_FocusNextPrevChild_Callback(KOpenWithDialog_FocusNextPrevChild_Callback cb) { kopenwithdialog_focusnextprevchild_callback = cb; }
    inline void setKOpenWithDialog_TimerEvent_Callback(KOpenWithDialog_TimerEvent_Callback cb) { kopenwithdialog_timerevent_callback = cb; }
    inline void setKOpenWithDialog_ChildEvent_Callback(KOpenWithDialog_ChildEvent_Callback cb) { kopenwithdialog_childevent_callback = cb; }
    inline void setKOpenWithDialog_CustomEvent_Callback(KOpenWithDialog_CustomEvent_Callback cb) { kopenwithdialog_customevent_callback = cb; }
    inline void setKOpenWithDialog_ConnectNotify_Callback(KOpenWithDialog_ConnectNotify_Callback cb) { kopenwithdialog_connectnotify_callback = cb; }
    inline void setKOpenWithDialog_DisconnectNotify_Callback(KOpenWithDialog_DisconnectNotify_Callback cb) { kopenwithdialog_disconnectnotify_callback = cb; }
    inline void setKOpenWithDialog_AdjustPosition_Callback(KOpenWithDialog_AdjustPosition_Callback cb) { kopenwithdialog_adjustposition_callback = cb; }
    inline void setKOpenWithDialog_UpdateMicroFocus_Callback(KOpenWithDialog_UpdateMicroFocus_Callback cb) { kopenwithdialog_updatemicrofocus_callback = cb; }
    inline void setKOpenWithDialog_Create_Callback(KOpenWithDialog_Create_Callback cb) { kopenwithdialog_create_callback = cb; }
    inline void setKOpenWithDialog_Destroy_Callback(KOpenWithDialog_Destroy_Callback cb) { kopenwithdialog_destroy_callback = cb; }
    inline void setKOpenWithDialog_FocusNextChild_Callback(KOpenWithDialog_FocusNextChild_Callback cb) { kopenwithdialog_focusnextchild_callback = cb; }
    inline void setKOpenWithDialog_FocusPreviousChild_Callback(KOpenWithDialog_FocusPreviousChild_Callback cb) { kopenwithdialog_focuspreviouschild_callback = cb; }
    inline void setKOpenWithDialog_Sender_Callback(KOpenWithDialog_Sender_Callback cb) { kopenwithdialog_sender_callback = cb; }
    inline void setKOpenWithDialog_SenderSignalIndex_Callback(KOpenWithDialog_SenderSignalIndex_Callback cb) { kopenwithdialog_sendersignalindex_callback = cb; }
    inline void setKOpenWithDialog_Receivers_Callback(KOpenWithDialog_Receivers_Callback cb) { kopenwithdialog_receivers_callback = cb; }
    inline void setKOpenWithDialog_IsSignalConnected_Callback(KOpenWithDialog_IsSignalConnected_Callback cb) { kopenwithdialog_issignalconnected_callback = cb; }
    inline void setKOpenWithDialog_GetDecodedMetricF_Callback(KOpenWithDialog_GetDecodedMetricF_Callback cb) { kopenwithdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKOpenWithDialog_MetaObject_IsBase(bool value) const { kopenwithdialog_metaobject_isbase = value; }
    inline void setKOpenWithDialog_Metacast_IsBase(bool value) const { kopenwithdialog_metacast_isbase = value; }
    inline void setKOpenWithDialog_Metacall_IsBase(bool value) const { kopenwithdialog_metacall_isbase = value; }
    inline void setKOpenWithDialog_Accept_IsBase(bool value) const { kopenwithdialog_accept_isbase = value; }
    inline void setKOpenWithDialog_SetVisible_IsBase(bool value) const { kopenwithdialog_setvisible_isbase = value; }
    inline void setKOpenWithDialog_SizeHint_IsBase(bool value) const { kopenwithdialog_sizehint_isbase = value; }
    inline void setKOpenWithDialog_MinimumSizeHint_IsBase(bool value) const { kopenwithdialog_minimumsizehint_isbase = value; }
    inline void setKOpenWithDialog_Open_IsBase(bool value) const { kopenwithdialog_open_isbase = value; }
    inline void setKOpenWithDialog_Exec_IsBase(bool value) const { kopenwithdialog_exec_isbase = value; }
    inline void setKOpenWithDialog_Done_IsBase(bool value) const { kopenwithdialog_done_isbase = value; }
    inline void setKOpenWithDialog_Reject_IsBase(bool value) const { kopenwithdialog_reject_isbase = value; }
    inline void setKOpenWithDialog_KeyPressEvent_IsBase(bool value) const { kopenwithdialog_keypressevent_isbase = value; }
    inline void setKOpenWithDialog_CloseEvent_IsBase(bool value) const { kopenwithdialog_closeevent_isbase = value; }
    inline void setKOpenWithDialog_ShowEvent_IsBase(bool value) const { kopenwithdialog_showevent_isbase = value; }
    inline void setKOpenWithDialog_ResizeEvent_IsBase(bool value) const { kopenwithdialog_resizeevent_isbase = value; }
    inline void setKOpenWithDialog_ContextMenuEvent_IsBase(bool value) const { kopenwithdialog_contextmenuevent_isbase = value; }
    inline void setKOpenWithDialog_DevType_IsBase(bool value) const { kopenwithdialog_devtype_isbase = value; }
    inline void setKOpenWithDialog_HeightForWidth_IsBase(bool value) const { kopenwithdialog_heightforwidth_isbase = value; }
    inline void setKOpenWithDialog_HasHeightForWidth_IsBase(bool value) const { kopenwithdialog_hasheightforwidth_isbase = value; }
    inline void setKOpenWithDialog_PaintEngine_IsBase(bool value) const { kopenwithdialog_paintengine_isbase = value; }
    inline void setKOpenWithDialog_Event_IsBase(bool value) const { kopenwithdialog_event_isbase = value; }
    inline void setKOpenWithDialog_MousePressEvent_IsBase(bool value) const { kopenwithdialog_mousepressevent_isbase = value; }
    inline void setKOpenWithDialog_MouseReleaseEvent_IsBase(bool value) const { kopenwithdialog_mousereleaseevent_isbase = value; }
    inline void setKOpenWithDialog_MouseDoubleClickEvent_IsBase(bool value) const { kopenwithdialog_mousedoubleclickevent_isbase = value; }
    inline void setKOpenWithDialog_MouseMoveEvent_IsBase(bool value) const { kopenwithdialog_mousemoveevent_isbase = value; }
    inline void setKOpenWithDialog_WheelEvent_IsBase(bool value) const { kopenwithdialog_wheelevent_isbase = value; }
    inline void setKOpenWithDialog_KeyReleaseEvent_IsBase(bool value) const { kopenwithdialog_keyreleaseevent_isbase = value; }
    inline void setKOpenWithDialog_FocusInEvent_IsBase(bool value) const { kopenwithdialog_focusinevent_isbase = value; }
    inline void setKOpenWithDialog_FocusOutEvent_IsBase(bool value) const { kopenwithdialog_focusoutevent_isbase = value; }
    inline void setKOpenWithDialog_EnterEvent_IsBase(bool value) const { kopenwithdialog_enterevent_isbase = value; }
    inline void setKOpenWithDialog_LeaveEvent_IsBase(bool value) const { kopenwithdialog_leaveevent_isbase = value; }
    inline void setKOpenWithDialog_PaintEvent_IsBase(bool value) const { kopenwithdialog_paintevent_isbase = value; }
    inline void setKOpenWithDialog_MoveEvent_IsBase(bool value) const { kopenwithdialog_moveevent_isbase = value; }
    inline void setKOpenWithDialog_TabletEvent_IsBase(bool value) const { kopenwithdialog_tabletevent_isbase = value; }
    inline void setKOpenWithDialog_ActionEvent_IsBase(bool value) const { kopenwithdialog_actionevent_isbase = value; }
    inline void setKOpenWithDialog_DragEnterEvent_IsBase(bool value) const { kopenwithdialog_dragenterevent_isbase = value; }
    inline void setKOpenWithDialog_DragMoveEvent_IsBase(bool value) const { kopenwithdialog_dragmoveevent_isbase = value; }
    inline void setKOpenWithDialog_DragLeaveEvent_IsBase(bool value) const { kopenwithdialog_dragleaveevent_isbase = value; }
    inline void setKOpenWithDialog_DropEvent_IsBase(bool value) const { kopenwithdialog_dropevent_isbase = value; }
    inline void setKOpenWithDialog_HideEvent_IsBase(bool value) const { kopenwithdialog_hideevent_isbase = value; }
    inline void setKOpenWithDialog_NativeEvent_IsBase(bool value) const { kopenwithdialog_nativeevent_isbase = value; }
    inline void setKOpenWithDialog_ChangeEvent_IsBase(bool value) const { kopenwithdialog_changeevent_isbase = value; }
    inline void setKOpenWithDialog_Metric_IsBase(bool value) const { kopenwithdialog_metric_isbase = value; }
    inline void setKOpenWithDialog_InitPainter_IsBase(bool value) const { kopenwithdialog_initpainter_isbase = value; }
    inline void setKOpenWithDialog_Redirected_IsBase(bool value) const { kopenwithdialog_redirected_isbase = value; }
    inline void setKOpenWithDialog_SharedPainter_IsBase(bool value) const { kopenwithdialog_sharedpainter_isbase = value; }
    inline void setKOpenWithDialog_InputMethodEvent_IsBase(bool value) const { kopenwithdialog_inputmethodevent_isbase = value; }
    inline void setKOpenWithDialog_InputMethodQuery_IsBase(bool value) const { kopenwithdialog_inputmethodquery_isbase = value; }
    inline void setKOpenWithDialog_FocusNextPrevChild_IsBase(bool value) const { kopenwithdialog_focusnextprevchild_isbase = value; }
    inline void setKOpenWithDialog_TimerEvent_IsBase(bool value) const { kopenwithdialog_timerevent_isbase = value; }
    inline void setKOpenWithDialog_ChildEvent_IsBase(bool value) const { kopenwithdialog_childevent_isbase = value; }
    inline void setKOpenWithDialog_CustomEvent_IsBase(bool value) const { kopenwithdialog_customevent_isbase = value; }
    inline void setKOpenWithDialog_ConnectNotify_IsBase(bool value) const { kopenwithdialog_connectnotify_isbase = value; }
    inline void setKOpenWithDialog_DisconnectNotify_IsBase(bool value) const { kopenwithdialog_disconnectnotify_isbase = value; }
    inline void setKOpenWithDialog_AdjustPosition_IsBase(bool value) const { kopenwithdialog_adjustposition_isbase = value; }
    inline void setKOpenWithDialog_UpdateMicroFocus_IsBase(bool value) const { kopenwithdialog_updatemicrofocus_isbase = value; }
    inline void setKOpenWithDialog_Create_IsBase(bool value) const { kopenwithdialog_create_isbase = value; }
    inline void setKOpenWithDialog_Destroy_IsBase(bool value) const { kopenwithdialog_destroy_isbase = value; }
    inline void setKOpenWithDialog_FocusNextChild_IsBase(bool value) const { kopenwithdialog_focusnextchild_isbase = value; }
    inline void setKOpenWithDialog_FocusPreviousChild_IsBase(bool value) const { kopenwithdialog_focuspreviouschild_isbase = value; }
    inline void setKOpenWithDialog_Sender_IsBase(bool value) const { kopenwithdialog_sender_isbase = value; }
    inline void setKOpenWithDialog_SenderSignalIndex_IsBase(bool value) const { kopenwithdialog_sendersignalindex_isbase = value; }
    inline void setKOpenWithDialog_Receivers_IsBase(bool value) const { kopenwithdialog_receivers_isbase = value; }
    inline void setKOpenWithDialog_IsSignalConnected_IsBase(bool value) const { kopenwithdialog_issignalconnected_isbase = value; }
    inline void setKOpenWithDialog_GetDecodedMetricF_IsBase(bool value) const { kopenwithdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kopenwithdialog_metaobject_isbase) {
            kopenwithdialog_metaobject_isbase = false;
            return KOpenWithDialog::metaObject();
        }
        auto metaobject_cb = kopenwithdialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KOpenWithDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kopenwithdialog_metacast_isbase) {
            kopenwithdialog_metacast_isbase = false;
            return KOpenWithDialog::qt_metacast(param1);
        }
        auto metacast_cb = kopenwithdialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KOpenWithDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kopenwithdialog_metacall_isbase) {
            kopenwithdialog_metacall_isbase = false;
            return KOpenWithDialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kopenwithdialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KOpenWithDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kopenwithdialog_accept_isbase) {
            kopenwithdialog_accept_isbase = false;
            KOpenWithDialog::accept();
            return;
        }
        auto accept_cb = kopenwithdialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        KOpenWithDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kopenwithdialog_setvisible_isbase) {
            kopenwithdialog_setvisible_isbase = false;
            KOpenWithDialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = kopenwithdialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kopenwithdialog_sizehint_isbase) {
            kopenwithdialog_sizehint_isbase = false;
            return KOpenWithDialog::sizeHint();
        }
        auto sizehint_cb = kopenwithdialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KOpenWithDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kopenwithdialog_minimumsizehint_isbase) {
            kopenwithdialog_minimumsizehint_isbase = false;
            return KOpenWithDialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = kopenwithdialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KOpenWithDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kopenwithdialog_open_isbase) {
            kopenwithdialog_open_isbase = false;
            KOpenWithDialog::open();
            return;
        }
        auto open_cb = kopenwithdialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        KOpenWithDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kopenwithdialog_exec_isbase) {
            kopenwithdialog_exec_isbase = false;
            return KOpenWithDialog::exec();
        }
        auto exec_cb = kopenwithdialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return KOpenWithDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kopenwithdialog_done_isbase) {
            kopenwithdialog_done_isbase = false;
            KOpenWithDialog::done(param1);
            return;
        }
        auto done_cb = kopenwithdialog_done_callback;
        if (done_cb) {
            int cbval1 = param1;

            done_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kopenwithdialog_reject_isbase) {
            kopenwithdialog_reject_isbase = false;
            KOpenWithDialog::reject();
            return;
        }
        auto reject_cb = kopenwithdialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        KOpenWithDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kopenwithdialog_keypressevent_isbase) {
            kopenwithdialog_keypressevent_isbase = false;
            KOpenWithDialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = kopenwithdialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kopenwithdialog_closeevent_isbase) {
            kopenwithdialog_closeevent_isbase = false;
            KOpenWithDialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = kopenwithdialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kopenwithdialog_showevent_isbase) {
            kopenwithdialog_showevent_isbase = false;
            KOpenWithDialog::showEvent(param1);
            return;
        }
        auto showevent_cb = kopenwithdialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kopenwithdialog_resizeevent_isbase) {
            kopenwithdialog_resizeevent_isbase = false;
            KOpenWithDialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = kopenwithdialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kopenwithdialog_contextmenuevent_isbase) {
            kopenwithdialog_contextmenuevent_isbase = false;
            KOpenWithDialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = kopenwithdialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kopenwithdialog_devtype_isbase) {
            kopenwithdialog_devtype_isbase = false;
            return KOpenWithDialog::devType();
        }
        auto devtype_cb = kopenwithdialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KOpenWithDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kopenwithdialog_heightforwidth_isbase) {
            kopenwithdialog_heightforwidth_isbase = false;
            return KOpenWithDialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = kopenwithdialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KOpenWithDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kopenwithdialog_hasheightforwidth_isbase) {
            kopenwithdialog_hasheightforwidth_isbase = false;
            return KOpenWithDialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kopenwithdialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KOpenWithDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kopenwithdialog_paintengine_isbase) {
            kopenwithdialog_paintengine_isbase = false;
            return KOpenWithDialog::paintEngine();
        }
        auto paintengine_cb = kopenwithdialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KOpenWithDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kopenwithdialog_event_isbase) {
            kopenwithdialog_event_isbase = false;
            return KOpenWithDialog::event(event);
        }
        auto event_cb = kopenwithdialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KOpenWithDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kopenwithdialog_mousepressevent_isbase) {
            kopenwithdialog_mousepressevent_isbase = false;
            KOpenWithDialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kopenwithdialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kopenwithdialog_mousereleaseevent_isbase) {
            kopenwithdialog_mousereleaseevent_isbase = false;
            KOpenWithDialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kopenwithdialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kopenwithdialog_mousedoubleclickevent_isbase) {
            kopenwithdialog_mousedoubleclickevent_isbase = false;
            KOpenWithDialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kopenwithdialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kopenwithdialog_mousemoveevent_isbase) {
            kopenwithdialog_mousemoveevent_isbase = false;
            KOpenWithDialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kopenwithdialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kopenwithdialog_wheelevent_isbase) {
            kopenwithdialog_wheelevent_isbase = false;
            KOpenWithDialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kopenwithdialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kopenwithdialog_keyreleaseevent_isbase) {
            kopenwithdialog_keyreleaseevent_isbase = false;
            KOpenWithDialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kopenwithdialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kopenwithdialog_focusinevent_isbase) {
            kopenwithdialog_focusinevent_isbase = false;
            KOpenWithDialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kopenwithdialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kopenwithdialog_focusoutevent_isbase) {
            kopenwithdialog_focusoutevent_isbase = false;
            KOpenWithDialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kopenwithdialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kopenwithdialog_enterevent_isbase) {
            kopenwithdialog_enterevent_isbase = false;
            KOpenWithDialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = kopenwithdialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kopenwithdialog_leaveevent_isbase) {
            kopenwithdialog_leaveevent_isbase = false;
            KOpenWithDialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kopenwithdialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kopenwithdialog_paintevent_isbase) {
            kopenwithdialog_paintevent_isbase = false;
            KOpenWithDialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = kopenwithdialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kopenwithdialog_moveevent_isbase) {
            kopenwithdialog_moveevent_isbase = false;
            KOpenWithDialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = kopenwithdialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kopenwithdialog_tabletevent_isbase) {
            kopenwithdialog_tabletevent_isbase = false;
            KOpenWithDialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kopenwithdialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kopenwithdialog_actionevent_isbase) {
            kopenwithdialog_actionevent_isbase = false;
            KOpenWithDialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = kopenwithdialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kopenwithdialog_dragenterevent_isbase) {
            kopenwithdialog_dragenterevent_isbase = false;
            KOpenWithDialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kopenwithdialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kopenwithdialog_dragmoveevent_isbase) {
            kopenwithdialog_dragmoveevent_isbase = false;
            KOpenWithDialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kopenwithdialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kopenwithdialog_dragleaveevent_isbase) {
            kopenwithdialog_dragleaveevent_isbase = false;
            KOpenWithDialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kopenwithdialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kopenwithdialog_dropevent_isbase) {
            kopenwithdialog_dropevent_isbase = false;
            KOpenWithDialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = kopenwithdialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kopenwithdialog_hideevent_isbase) {
            kopenwithdialog_hideevent_isbase = false;
            KOpenWithDialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = kopenwithdialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kopenwithdialog_nativeevent_isbase) {
            kopenwithdialog_nativeevent_isbase = false;
            return KOpenWithDialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kopenwithdialog_nativeevent_callback;
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
        return KOpenWithDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kopenwithdialog_changeevent_isbase) {
            kopenwithdialog_changeevent_isbase = false;
            KOpenWithDialog::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kopenwithdialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kopenwithdialog_metric_isbase) {
            kopenwithdialog_metric_isbase = false;
            return KOpenWithDialog::metric(param1);
        }
        auto metric_cb = kopenwithdialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KOpenWithDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kopenwithdialog_initpainter_isbase) {
            kopenwithdialog_initpainter_isbase = false;
            KOpenWithDialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = kopenwithdialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kopenwithdialog_redirected_isbase) {
            kopenwithdialog_redirected_isbase = false;
            return KOpenWithDialog::redirected(offset);
        }
        auto redirected_cb = kopenwithdialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KOpenWithDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kopenwithdialog_sharedpainter_isbase) {
            kopenwithdialog_sharedpainter_isbase = false;
            return KOpenWithDialog::sharedPainter();
        }
        auto sharedpainter_cb = kopenwithdialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KOpenWithDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kopenwithdialog_inputmethodevent_isbase) {
            kopenwithdialog_inputmethodevent_isbase = false;
            KOpenWithDialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kopenwithdialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kopenwithdialog_inputmethodquery_isbase) {
            kopenwithdialog_inputmethodquery_isbase = false;
            return KOpenWithDialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kopenwithdialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KOpenWithDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kopenwithdialog_focusnextprevchild_isbase) {
            kopenwithdialog_focusnextprevchild_isbase = false;
            return KOpenWithDialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kopenwithdialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KOpenWithDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kopenwithdialog_timerevent_isbase) {
            kopenwithdialog_timerevent_isbase = false;
            KOpenWithDialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = kopenwithdialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kopenwithdialog_childevent_isbase) {
            kopenwithdialog_childevent_isbase = false;
            KOpenWithDialog::childEvent(event);
            return;
        }
        auto childevent_cb = kopenwithdialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kopenwithdialog_customevent_isbase) {
            kopenwithdialog_customevent_isbase = false;
            KOpenWithDialog::customEvent(event);
            return;
        }
        auto customevent_cb = kopenwithdialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kopenwithdialog_connectnotify_isbase) {
            kopenwithdialog_connectnotify_isbase = false;
            KOpenWithDialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kopenwithdialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kopenwithdialog_disconnectnotify_isbase) {
            kopenwithdialog_disconnectnotify_isbase = false;
            KOpenWithDialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kopenwithdialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kopenwithdialog_adjustposition_isbase) {
            kopenwithdialog_adjustposition_isbase = false;
            KOpenWithDialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = kopenwithdialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        KOpenWithDialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kopenwithdialog_updatemicrofocus_isbase) {
            kopenwithdialog_updatemicrofocus_isbase = false;
            KOpenWithDialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kopenwithdialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KOpenWithDialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kopenwithdialog_create_isbase) {
            kopenwithdialog_create_isbase = false;
            KOpenWithDialog::create();
            return;
        }
        auto create_cb = kopenwithdialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KOpenWithDialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kopenwithdialog_destroy_isbase) {
            kopenwithdialog_destroy_isbase = false;
            KOpenWithDialog::destroy();
            return;
        }
        auto destroy_cb = kopenwithdialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KOpenWithDialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kopenwithdialog_focusnextchild_isbase) {
            kopenwithdialog_focusnextchild_isbase = false;
            return KOpenWithDialog::focusNextChild();
        }
        auto focusnextchild_cb = kopenwithdialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KOpenWithDialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kopenwithdialog_focuspreviouschild_isbase) {
            kopenwithdialog_focuspreviouschild_isbase = false;
            return KOpenWithDialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kopenwithdialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KOpenWithDialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kopenwithdialog_sender_isbase) {
            kopenwithdialog_sender_isbase = false;
            return KOpenWithDialog::sender();
        }
        auto sender_cb = kopenwithdialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KOpenWithDialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kopenwithdialog_sendersignalindex_isbase) {
            kopenwithdialog_sendersignalindex_isbase = false;
            return KOpenWithDialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = kopenwithdialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KOpenWithDialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kopenwithdialog_receivers_isbase) {
            kopenwithdialog_receivers_isbase = false;
            return KOpenWithDialog::receivers(signal);
        }
        auto receivers_cb = kopenwithdialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KOpenWithDialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kopenwithdialog_issignalconnected_isbase) {
            kopenwithdialog_issignalconnected_isbase = false;
            return KOpenWithDialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kopenwithdialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KOpenWithDialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kopenwithdialog_getdecodedmetricf_isbase) {
            kopenwithdialog_getdecodedmetricf_isbase = false;
            return KOpenWithDialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kopenwithdialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KOpenWithDialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KOpenWithDialog_Accept(KOpenWithDialog* self);
    friend void KOpenWithDialog_SuperAccept(KOpenWithDialog* self);
    friend void KOpenWithDialog_KeyPressEvent(KOpenWithDialog* self, QKeyEvent* param1);
    friend void KOpenWithDialog_SuperKeyPressEvent(KOpenWithDialog* self, QKeyEvent* param1);
    friend void KOpenWithDialog_CloseEvent(KOpenWithDialog* self, QCloseEvent* param1);
    friend void KOpenWithDialog_SuperCloseEvent(KOpenWithDialog* self, QCloseEvent* param1);
    friend void KOpenWithDialog_ShowEvent(KOpenWithDialog* self, QShowEvent* param1);
    friend void KOpenWithDialog_SuperShowEvent(KOpenWithDialog* self, QShowEvent* param1);
    friend void KOpenWithDialog_ResizeEvent(KOpenWithDialog* self, QResizeEvent* param1);
    friend void KOpenWithDialog_SuperResizeEvent(KOpenWithDialog* self, QResizeEvent* param1);
    friend void KOpenWithDialog_ContextMenuEvent(KOpenWithDialog* self, QContextMenuEvent* param1);
    friend void KOpenWithDialog_SuperContextMenuEvent(KOpenWithDialog* self, QContextMenuEvent* param1);
    friend bool KOpenWithDialog_Event(KOpenWithDialog* self, QEvent* event);
    friend bool KOpenWithDialog_SuperEvent(KOpenWithDialog* self, QEvent* event);
    friend void KOpenWithDialog_MousePressEvent(KOpenWithDialog* self, QMouseEvent* event);
    friend void KOpenWithDialog_SuperMousePressEvent(KOpenWithDialog* self, QMouseEvent* event);
    friend void KOpenWithDialog_MouseReleaseEvent(KOpenWithDialog* self, QMouseEvent* event);
    friend void KOpenWithDialog_SuperMouseReleaseEvent(KOpenWithDialog* self, QMouseEvent* event);
    friend void KOpenWithDialog_MouseDoubleClickEvent(KOpenWithDialog* self, QMouseEvent* event);
    friend void KOpenWithDialog_SuperMouseDoubleClickEvent(KOpenWithDialog* self, QMouseEvent* event);
    friend void KOpenWithDialog_MouseMoveEvent(KOpenWithDialog* self, QMouseEvent* event);
    friend void KOpenWithDialog_SuperMouseMoveEvent(KOpenWithDialog* self, QMouseEvent* event);
    friend void KOpenWithDialog_WheelEvent(KOpenWithDialog* self, QWheelEvent* event);
    friend void KOpenWithDialog_SuperWheelEvent(KOpenWithDialog* self, QWheelEvent* event);
    friend void KOpenWithDialog_KeyReleaseEvent(KOpenWithDialog* self, QKeyEvent* event);
    friend void KOpenWithDialog_SuperKeyReleaseEvent(KOpenWithDialog* self, QKeyEvent* event);
    friend void KOpenWithDialog_FocusInEvent(KOpenWithDialog* self, QFocusEvent* event);
    friend void KOpenWithDialog_SuperFocusInEvent(KOpenWithDialog* self, QFocusEvent* event);
    friend void KOpenWithDialog_FocusOutEvent(KOpenWithDialog* self, QFocusEvent* event);
    friend void KOpenWithDialog_SuperFocusOutEvent(KOpenWithDialog* self, QFocusEvent* event);
    friend void KOpenWithDialog_EnterEvent(KOpenWithDialog* self, QEnterEvent* event);
    friend void KOpenWithDialog_SuperEnterEvent(KOpenWithDialog* self, QEnterEvent* event);
    friend void KOpenWithDialog_LeaveEvent(KOpenWithDialog* self, QEvent* event);
    friend void KOpenWithDialog_SuperLeaveEvent(KOpenWithDialog* self, QEvent* event);
    friend void KOpenWithDialog_PaintEvent(KOpenWithDialog* self, QPaintEvent* event);
    friend void KOpenWithDialog_SuperPaintEvent(KOpenWithDialog* self, QPaintEvent* event);
    friend void KOpenWithDialog_MoveEvent(KOpenWithDialog* self, QMoveEvent* event);
    friend void KOpenWithDialog_SuperMoveEvent(KOpenWithDialog* self, QMoveEvent* event);
    friend void KOpenWithDialog_TabletEvent(KOpenWithDialog* self, QTabletEvent* event);
    friend void KOpenWithDialog_SuperTabletEvent(KOpenWithDialog* self, QTabletEvent* event);
    friend void KOpenWithDialog_ActionEvent(KOpenWithDialog* self, QActionEvent* event);
    friend void KOpenWithDialog_SuperActionEvent(KOpenWithDialog* self, QActionEvent* event);
    friend void KOpenWithDialog_DragEnterEvent(KOpenWithDialog* self, QDragEnterEvent* event);
    friend void KOpenWithDialog_SuperDragEnterEvent(KOpenWithDialog* self, QDragEnterEvent* event);
    friend void KOpenWithDialog_DragMoveEvent(KOpenWithDialog* self, QDragMoveEvent* event);
    friend void KOpenWithDialog_SuperDragMoveEvent(KOpenWithDialog* self, QDragMoveEvent* event);
    friend void KOpenWithDialog_DragLeaveEvent(KOpenWithDialog* self, QDragLeaveEvent* event);
    friend void KOpenWithDialog_SuperDragLeaveEvent(KOpenWithDialog* self, QDragLeaveEvent* event);
    friend void KOpenWithDialog_DropEvent(KOpenWithDialog* self, QDropEvent* event);
    friend void KOpenWithDialog_SuperDropEvent(KOpenWithDialog* self, QDropEvent* event);
    friend void KOpenWithDialog_HideEvent(KOpenWithDialog* self, QHideEvent* event);
    friend void KOpenWithDialog_SuperHideEvent(KOpenWithDialog* self, QHideEvent* event);
    friend bool KOpenWithDialog_NativeEvent(KOpenWithDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KOpenWithDialog_SuperNativeEvent(KOpenWithDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KOpenWithDialog_ChangeEvent(KOpenWithDialog* self, QEvent* param1);
    friend void KOpenWithDialog_SuperChangeEvent(KOpenWithDialog* self, QEvent* param1);
    friend int KOpenWithDialog_Metric(const KOpenWithDialog* self, int param1);
    friend int KOpenWithDialog_SuperMetric(const KOpenWithDialog* self, int param1);
    friend void KOpenWithDialog_InitPainter(const KOpenWithDialog* self, QPainter* painter);
    friend void KOpenWithDialog_SuperInitPainter(const KOpenWithDialog* self, QPainter* painter);
    friend QPaintDevice* KOpenWithDialog_Redirected(const KOpenWithDialog* self, QPoint* offset);
    friend QPaintDevice* KOpenWithDialog_SuperRedirected(const KOpenWithDialog* self, QPoint* offset);
    friend QPainter* KOpenWithDialog_SharedPainter(const KOpenWithDialog* self);
    friend QPainter* KOpenWithDialog_SuperSharedPainter(const KOpenWithDialog* self);
    friend void KOpenWithDialog_InputMethodEvent(KOpenWithDialog* self, QInputMethodEvent* param1);
    friend void KOpenWithDialog_SuperInputMethodEvent(KOpenWithDialog* self, QInputMethodEvent* param1);
    friend bool KOpenWithDialog_FocusNextPrevChild(KOpenWithDialog* self, bool next);
    friend bool KOpenWithDialog_SuperFocusNextPrevChild(KOpenWithDialog* self, bool next);
    friend void KOpenWithDialog_TimerEvent(KOpenWithDialog* self, QTimerEvent* event);
    friend void KOpenWithDialog_SuperTimerEvent(KOpenWithDialog* self, QTimerEvent* event);
    friend void KOpenWithDialog_ChildEvent(KOpenWithDialog* self, QChildEvent* event);
    friend void KOpenWithDialog_SuperChildEvent(KOpenWithDialog* self, QChildEvent* event);
    friend void KOpenWithDialog_CustomEvent(KOpenWithDialog* self, QEvent* event);
    friend void KOpenWithDialog_SuperCustomEvent(KOpenWithDialog* self, QEvent* event);
    friend void KOpenWithDialog_ConnectNotify(KOpenWithDialog* self, const QMetaMethod* signal);
    friend void KOpenWithDialog_SuperConnectNotify(KOpenWithDialog* self, const QMetaMethod* signal);
    friend void KOpenWithDialog_DisconnectNotify(KOpenWithDialog* self, const QMetaMethod* signal);
    friend void KOpenWithDialog_SuperDisconnectNotify(KOpenWithDialog* self, const QMetaMethod* signal);
    friend void KOpenWithDialog_AdjustPosition(KOpenWithDialog* self, QWidget* param1);
    friend void KOpenWithDialog_SuperAdjustPosition(KOpenWithDialog* self, QWidget* param1);
    friend void KOpenWithDialog_UpdateMicroFocus(KOpenWithDialog* self);
    friend void KOpenWithDialog_SuperUpdateMicroFocus(KOpenWithDialog* self);
    friend void KOpenWithDialog_Create(KOpenWithDialog* self);
    friend void KOpenWithDialog_SuperCreate(KOpenWithDialog* self);
    friend void KOpenWithDialog_Destroy(KOpenWithDialog* self);
    friend void KOpenWithDialog_SuperDestroy(KOpenWithDialog* self);
    friend bool KOpenWithDialog_FocusNextChild(KOpenWithDialog* self);
    friend bool KOpenWithDialog_SuperFocusNextChild(KOpenWithDialog* self);
    friend bool KOpenWithDialog_FocusPreviousChild(KOpenWithDialog* self);
    friend bool KOpenWithDialog_SuperFocusPreviousChild(KOpenWithDialog* self);
    friend QObject* KOpenWithDialog_Sender(const KOpenWithDialog* self);
    friend QObject* KOpenWithDialog_SuperSender(const KOpenWithDialog* self);
    friend int KOpenWithDialog_SenderSignalIndex(const KOpenWithDialog* self);
    friend int KOpenWithDialog_SuperSenderSignalIndex(const KOpenWithDialog* self);
    friend int KOpenWithDialog_Receivers(const KOpenWithDialog* self, const char* signal);
    friend int KOpenWithDialog_SuperReceivers(const KOpenWithDialog* self, const char* signal);
    friend bool KOpenWithDialog_IsSignalConnected(const KOpenWithDialog* self, const QMetaMethod* signal);
    friend bool KOpenWithDialog_SuperIsSignalConnected(const KOpenWithDialog* self, const QMetaMethod* signal);
    friend double KOpenWithDialog_GetDecodedMetricF(const KOpenWithDialog* self, int metricA, int metricB);
    friend double KOpenWithDialog_SuperGetDecodedMetricF(const KOpenWithDialog* self, int metricA, int metricB);
};

#endif
