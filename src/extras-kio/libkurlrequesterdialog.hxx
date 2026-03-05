#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKURLREQUESTERDIALOG_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKURLREQUESTERDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KUrlRequesterDialog so that we can call protected methods
class VirtualKUrlRequesterDialog final : public KUrlRequesterDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKUrlRequesterDialog = true;

    // Virtual class public types (including callbacks)
    using KUrlRequesterDialog_MetaObject_Callback = QMetaObject* (*)();
    using KUrlRequesterDialog_Metacast_Callback = void* (*)(KUrlRequesterDialog*, const char*);
    using KUrlRequesterDialog_Metacall_Callback = int (*)(KUrlRequesterDialog*, int, int, void**);
    using KUrlRequesterDialog_SetVisible_Callback = void (*)(KUrlRequesterDialog*, bool);
    using KUrlRequesterDialog_SizeHint_Callback = QSize* (*)();
    using KUrlRequesterDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KUrlRequesterDialog_Open_Callback = void (*)();
    using KUrlRequesterDialog_Exec_Callback = int (*)();
    using KUrlRequesterDialog_Done_Callback = void (*)(KUrlRequesterDialog*, int);
    using KUrlRequesterDialog_Accept_Callback = void (*)();
    using KUrlRequesterDialog_Reject_Callback = void (*)();
    using KUrlRequesterDialog_KeyPressEvent_Callback = void (*)(KUrlRequesterDialog*, QKeyEvent*);
    using KUrlRequesterDialog_CloseEvent_Callback = void (*)(KUrlRequesterDialog*, QCloseEvent*);
    using KUrlRequesterDialog_ShowEvent_Callback = void (*)(KUrlRequesterDialog*, QShowEvent*);
    using KUrlRequesterDialog_ResizeEvent_Callback = void (*)(KUrlRequesterDialog*, QResizeEvent*);
    using KUrlRequesterDialog_ContextMenuEvent_Callback = void (*)(KUrlRequesterDialog*, QContextMenuEvent*);
    using KUrlRequesterDialog_EventFilter_Callback = bool (*)(KUrlRequesterDialog*, QObject*, QEvent*);
    using KUrlRequesterDialog_DevType_Callback = int (*)();
    using KUrlRequesterDialog_HeightForWidth_Callback = int (*)(const KUrlRequesterDialog*, int);
    using KUrlRequesterDialog_HasHeightForWidth_Callback = bool (*)();
    using KUrlRequesterDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KUrlRequesterDialog_Event_Callback = bool (*)(KUrlRequesterDialog*, QEvent*);
    using KUrlRequesterDialog_MousePressEvent_Callback = void (*)(KUrlRequesterDialog*, QMouseEvent*);
    using KUrlRequesterDialog_MouseReleaseEvent_Callback = void (*)(KUrlRequesterDialog*, QMouseEvent*);
    using KUrlRequesterDialog_MouseDoubleClickEvent_Callback = void (*)(KUrlRequesterDialog*, QMouseEvent*);
    using KUrlRequesterDialog_MouseMoveEvent_Callback = void (*)(KUrlRequesterDialog*, QMouseEvent*);
    using KUrlRequesterDialog_WheelEvent_Callback = void (*)(KUrlRequesterDialog*, QWheelEvent*);
    using KUrlRequesterDialog_KeyReleaseEvent_Callback = void (*)(KUrlRequesterDialog*, QKeyEvent*);
    using KUrlRequesterDialog_FocusInEvent_Callback = void (*)(KUrlRequesterDialog*, QFocusEvent*);
    using KUrlRequesterDialog_FocusOutEvent_Callback = void (*)(KUrlRequesterDialog*, QFocusEvent*);
    using KUrlRequesterDialog_EnterEvent_Callback = void (*)(KUrlRequesterDialog*, QEnterEvent*);
    using KUrlRequesterDialog_LeaveEvent_Callback = void (*)(KUrlRequesterDialog*, QEvent*);
    using KUrlRequesterDialog_PaintEvent_Callback = void (*)(KUrlRequesterDialog*, QPaintEvent*);
    using KUrlRequesterDialog_MoveEvent_Callback = void (*)(KUrlRequesterDialog*, QMoveEvent*);
    using KUrlRequesterDialog_TabletEvent_Callback = void (*)(KUrlRequesterDialog*, QTabletEvent*);
    using KUrlRequesterDialog_ActionEvent_Callback = void (*)(KUrlRequesterDialog*, QActionEvent*);
    using KUrlRequesterDialog_DragEnterEvent_Callback = void (*)(KUrlRequesterDialog*, QDragEnterEvent*);
    using KUrlRequesterDialog_DragMoveEvent_Callback = void (*)(KUrlRequesterDialog*, QDragMoveEvent*);
    using KUrlRequesterDialog_DragLeaveEvent_Callback = void (*)(KUrlRequesterDialog*, QDragLeaveEvent*);
    using KUrlRequesterDialog_DropEvent_Callback = void (*)(KUrlRequesterDialog*, QDropEvent*);
    using KUrlRequesterDialog_HideEvent_Callback = void (*)(KUrlRequesterDialog*, QHideEvent*);
    using KUrlRequesterDialog_NativeEvent_Callback = bool (*)(KUrlRequesterDialog*, libqt_string, void*, intptr_t*);
    using KUrlRequesterDialog_ChangeEvent_Callback = void (*)(KUrlRequesterDialog*, QEvent*);
    using KUrlRequesterDialog_Metric_Callback = int (*)(const KUrlRequesterDialog*, int);
    using KUrlRequesterDialog_InitPainter_Callback = void (*)(const KUrlRequesterDialog*, QPainter*);
    using KUrlRequesterDialog_Redirected_Callback = QPaintDevice* (*)(const KUrlRequesterDialog*, QPoint*);
    using KUrlRequesterDialog_SharedPainter_Callback = QPainter* (*)();
    using KUrlRequesterDialog_InputMethodEvent_Callback = void (*)(KUrlRequesterDialog*, QInputMethodEvent*);
    using KUrlRequesterDialog_InputMethodQuery_Callback = QVariant* (*)(const KUrlRequesterDialog*, int);
    using KUrlRequesterDialog_FocusNextPrevChild_Callback = bool (*)(KUrlRequesterDialog*, bool);
    using KUrlRequesterDialog_TimerEvent_Callback = void (*)(KUrlRequesterDialog*, QTimerEvent*);
    using KUrlRequesterDialog_ChildEvent_Callback = void (*)(KUrlRequesterDialog*, QChildEvent*);
    using KUrlRequesterDialog_CustomEvent_Callback = void (*)(KUrlRequesterDialog*, QEvent*);
    using KUrlRequesterDialog_ConnectNotify_Callback = void (*)(KUrlRequesterDialog*, QMetaMethod*);
    using KUrlRequesterDialog_DisconnectNotify_Callback = void (*)(KUrlRequesterDialog*, QMetaMethod*);
    using KUrlRequesterDialog_AdjustPosition_Callback = void (*)(KUrlRequesterDialog*, QWidget*);
    using KUrlRequesterDialog_UpdateMicroFocus_Callback = void (*)();
    using KUrlRequesterDialog_Create_Callback = void (*)();
    using KUrlRequesterDialog_Destroy_Callback = void (*)();
    using KUrlRequesterDialog_FocusNextChild_Callback = bool (*)();
    using KUrlRequesterDialog_FocusPreviousChild_Callback = bool (*)();
    using KUrlRequesterDialog_Sender_Callback = QObject* (*)();
    using KUrlRequesterDialog_SenderSignalIndex_Callback = int (*)();
    using KUrlRequesterDialog_Receivers_Callback = int (*)(const KUrlRequesterDialog*, const char*);
    using KUrlRequesterDialog_IsSignalConnected_Callback = bool (*)(const KUrlRequesterDialog*, QMetaMethod*);
    using KUrlRequesterDialog_GetDecodedMetricF_Callback = double (*)(const KUrlRequesterDialog*, int, int);

  protected:
    // Instance callback storage
    KUrlRequesterDialog_MetaObject_Callback kurlrequesterdialog_metaobject_callback = nullptr;
    KUrlRequesterDialog_Metacast_Callback kurlrequesterdialog_metacast_callback = nullptr;
    KUrlRequesterDialog_Metacall_Callback kurlrequesterdialog_metacall_callback = nullptr;
    KUrlRequesterDialog_SetVisible_Callback kurlrequesterdialog_setvisible_callback = nullptr;
    KUrlRequesterDialog_SizeHint_Callback kurlrequesterdialog_sizehint_callback = nullptr;
    KUrlRequesterDialog_MinimumSizeHint_Callback kurlrequesterdialog_minimumsizehint_callback = nullptr;
    KUrlRequesterDialog_Open_Callback kurlrequesterdialog_open_callback = nullptr;
    KUrlRequesterDialog_Exec_Callback kurlrequesterdialog_exec_callback = nullptr;
    KUrlRequesterDialog_Done_Callback kurlrequesterdialog_done_callback = nullptr;
    KUrlRequesterDialog_Accept_Callback kurlrequesterdialog_accept_callback = nullptr;
    KUrlRequesterDialog_Reject_Callback kurlrequesterdialog_reject_callback = nullptr;
    KUrlRequesterDialog_KeyPressEvent_Callback kurlrequesterdialog_keypressevent_callback = nullptr;
    KUrlRequesterDialog_CloseEvent_Callback kurlrequesterdialog_closeevent_callback = nullptr;
    KUrlRequesterDialog_ShowEvent_Callback kurlrequesterdialog_showevent_callback = nullptr;
    KUrlRequesterDialog_ResizeEvent_Callback kurlrequesterdialog_resizeevent_callback = nullptr;
    KUrlRequesterDialog_ContextMenuEvent_Callback kurlrequesterdialog_contextmenuevent_callback = nullptr;
    KUrlRequesterDialog_EventFilter_Callback kurlrequesterdialog_eventfilter_callback = nullptr;
    KUrlRequesterDialog_DevType_Callback kurlrequesterdialog_devtype_callback = nullptr;
    KUrlRequesterDialog_HeightForWidth_Callback kurlrequesterdialog_heightforwidth_callback = nullptr;
    KUrlRequesterDialog_HasHeightForWidth_Callback kurlrequesterdialog_hasheightforwidth_callback = nullptr;
    KUrlRequesterDialog_PaintEngine_Callback kurlrequesterdialog_paintengine_callback = nullptr;
    KUrlRequesterDialog_Event_Callback kurlrequesterdialog_event_callback = nullptr;
    KUrlRequesterDialog_MousePressEvent_Callback kurlrequesterdialog_mousepressevent_callback = nullptr;
    KUrlRequesterDialog_MouseReleaseEvent_Callback kurlrequesterdialog_mousereleaseevent_callback = nullptr;
    KUrlRequesterDialog_MouseDoubleClickEvent_Callback kurlrequesterdialog_mousedoubleclickevent_callback = nullptr;
    KUrlRequesterDialog_MouseMoveEvent_Callback kurlrequesterdialog_mousemoveevent_callback = nullptr;
    KUrlRequesterDialog_WheelEvent_Callback kurlrequesterdialog_wheelevent_callback = nullptr;
    KUrlRequesterDialog_KeyReleaseEvent_Callback kurlrequesterdialog_keyreleaseevent_callback = nullptr;
    KUrlRequesterDialog_FocusInEvent_Callback kurlrequesterdialog_focusinevent_callback = nullptr;
    KUrlRequesterDialog_FocusOutEvent_Callback kurlrequesterdialog_focusoutevent_callback = nullptr;
    KUrlRequesterDialog_EnterEvent_Callback kurlrequesterdialog_enterevent_callback = nullptr;
    KUrlRequesterDialog_LeaveEvent_Callback kurlrequesterdialog_leaveevent_callback = nullptr;
    KUrlRequesterDialog_PaintEvent_Callback kurlrequesterdialog_paintevent_callback = nullptr;
    KUrlRequesterDialog_MoveEvent_Callback kurlrequesterdialog_moveevent_callback = nullptr;
    KUrlRequesterDialog_TabletEvent_Callback kurlrequesterdialog_tabletevent_callback = nullptr;
    KUrlRequesterDialog_ActionEvent_Callback kurlrequesterdialog_actionevent_callback = nullptr;
    KUrlRequesterDialog_DragEnterEvent_Callback kurlrequesterdialog_dragenterevent_callback = nullptr;
    KUrlRequesterDialog_DragMoveEvent_Callback kurlrequesterdialog_dragmoveevent_callback = nullptr;
    KUrlRequesterDialog_DragLeaveEvent_Callback kurlrequesterdialog_dragleaveevent_callback = nullptr;
    KUrlRequesterDialog_DropEvent_Callback kurlrequesterdialog_dropevent_callback = nullptr;
    KUrlRequesterDialog_HideEvent_Callback kurlrequesterdialog_hideevent_callback = nullptr;
    KUrlRequesterDialog_NativeEvent_Callback kurlrequesterdialog_nativeevent_callback = nullptr;
    KUrlRequesterDialog_ChangeEvent_Callback kurlrequesterdialog_changeevent_callback = nullptr;
    KUrlRequesterDialog_Metric_Callback kurlrequesterdialog_metric_callback = nullptr;
    KUrlRequesterDialog_InitPainter_Callback kurlrequesterdialog_initpainter_callback = nullptr;
    KUrlRequesterDialog_Redirected_Callback kurlrequesterdialog_redirected_callback = nullptr;
    KUrlRequesterDialog_SharedPainter_Callback kurlrequesterdialog_sharedpainter_callback = nullptr;
    KUrlRequesterDialog_InputMethodEvent_Callback kurlrequesterdialog_inputmethodevent_callback = nullptr;
    KUrlRequesterDialog_InputMethodQuery_Callback kurlrequesterdialog_inputmethodquery_callback = nullptr;
    KUrlRequesterDialog_FocusNextPrevChild_Callback kurlrequesterdialog_focusnextprevchild_callback = nullptr;
    KUrlRequesterDialog_TimerEvent_Callback kurlrequesterdialog_timerevent_callback = nullptr;
    KUrlRequesterDialog_ChildEvent_Callback kurlrequesterdialog_childevent_callback = nullptr;
    KUrlRequesterDialog_CustomEvent_Callback kurlrequesterdialog_customevent_callback = nullptr;
    KUrlRequesterDialog_ConnectNotify_Callback kurlrequesterdialog_connectnotify_callback = nullptr;
    KUrlRequesterDialog_DisconnectNotify_Callback kurlrequesterdialog_disconnectnotify_callback = nullptr;
    KUrlRequesterDialog_AdjustPosition_Callback kurlrequesterdialog_adjustposition_callback = nullptr;
    KUrlRequesterDialog_UpdateMicroFocus_Callback kurlrequesterdialog_updatemicrofocus_callback = nullptr;
    KUrlRequesterDialog_Create_Callback kurlrequesterdialog_create_callback = nullptr;
    KUrlRequesterDialog_Destroy_Callback kurlrequesterdialog_destroy_callback = nullptr;
    KUrlRequesterDialog_FocusNextChild_Callback kurlrequesterdialog_focusnextchild_callback = nullptr;
    KUrlRequesterDialog_FocusPreviousChild_Callback kurlrequesterdialog_focuspreviouschild_callback = nullptr;
    KUrlRequesterDialog_Sender_Callback kurlrequesterdialog_sender_callback = nullptr;
    KUrlRequesterDialog_SenderSignalIndex_Callback kurlrequesterdialog_sendersignalindex_callback = nullptr;
    KUrlRequesterDialog_Receivers_Callback kurlrequesterdialog_receivers_callback = nullptr;
    KUrlRequesterDialog_IsSignalConnected_Callback kurlrequesterdialog_issignalconnected_callback = nullptr;
    KUrlRequesterDialog_GetDecodedMetricF_Callback kurlrequesterdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kurlrequesterdialog_metaobject_isbase = false;
    mutable bool kurlrequesterdialog_metacast_isbase = false;
    mutable bool kurlrequesterdialog_metacall_isbase = false;
    mutable bool kurlrequesterdialog_setvisible_isbase = false;
    mutable bool kurlrequesterdialog_sizehint_isbase = false;
    mutable bool kurlrequesterdialog_minimumsizehint_isbase = false;
    mutable bool kurlrequesterdialog_open_isbase = false;
    mutable bool kurlrequesterdialog_exec_isbase = false;
    mutable bool kurlrequesterdialog_done_isbase = false;
    mutable bool kurlrequesterdialog_accept_isbase = false;
    mutable bool kurlrequesterdialog_reject_isbase = false;
    mutable bool kurlrequesterdialog_keypressevent_isbase = false;
    mutable bool kurlrequesterdialog_closeevent_isbase = false;
    mutable bool kurlrequesterdialog_showevent_isbase = false;
    mutable bool kurlrequesterdialog_resizeevent_isbase = false;
    mutable bool kurlrequesterdialog_contextmenuevent_isbase = false;
    mutable bool kurlrequesterdialog_eventfilter_isbase = false;
    mutable bool kurlrequesterdialog_devtype_isbase = false;
    mutable bool kurlrequesterdialog_heightforwidth_isbase = false;
    mutable bool kurlrequesterdialog_hasheightforwidth_isbase = false;
    mutable bool kurlrequesterdialog_paintengine_isbase = false;
    mutable bool kurlrequesterdialog_event_isbase = false;
    mutable bool kurlrequesterdialog_mousepressevent_isbase = false;
    mutable bool kurlrequesterdialog_mousereleaseevent_isbase = false;
    mutable bool kurlrequesterdialog_mousedoubleclickevent_isbase = false;
    mutable bool kurlrequesterdialog_mousemoveevent_isbase = false;
    mutable bool kurlrequesterdialog_wheelevent_isbase = false;
    mutable bool kurlrequesterdialog_keyreleaseevent_isbase = false;
    mutable bool kurlrequesterdialog_focusinevent_isbase = false;
    mutable bool kurlrequesterdialog_focusoutevent_isbase = false;
    mutable bool kurlrequesterdialog_enterevent_isbase = false;
    mutable bool kurlrequesterdialog_leaveevent_isbase = false;
    mutable bool kurlrequesterdialog_paintevent_isbase = false;
    mutable bool kurlrequesterdialog_moveevent_isbase = false;
    mutable bool kurlrequesterdialog_tabletevent_isbase = false;
    mutable bool kurlrequesterdialog_actionevent_isbase = false;
    mutable bool kurlrequesterdialog_dragenterevent_isbase = false;
    mutable bool kurlrequesterdialog_dragmoveevent_isbase = false;
    mutable bool kurlrequesterdialog_dragleaveevent_isbase = false;
    mutable bool kurlrequesterdialog_dropevent_isbase = false;
    mutable bool kurlrequesterdialog_hideevent_isbase = false;
    mutable bool kurlrequesterdialog_nativeevent_isbase = false;
    mutable bool kurlrequesterdialog_changeevent_isbase = false;
    mutable bool kurlrequesterdialog_metric_isbase = false;
    mutable bool kurlrequesterdialog_initpainter_isbase = false;
    mutable bool kurlrequesterdialog_redirected_isbase = false;
    mutable bool kurlrequesterdialog_sharedpainter_isbase = false;
    mutable bool kurlrequesterdialog_inputmethodevent_isbase = false;
    mutable bool kurlrequesterdialog_inputmethodquery_isbase = false;
    mutable bool kurlrequesterdialog_focusnextprevchild_isbase = false;
    mutable bool kurlrequesterdialog_timerevent_isbase = false;
    mutable bool kurlrequesterdialog_childevent_isbase = false;
    mutable bool kurlrequesterdialog_customevent_isbase = false;
    mutable bool kurlrequesterdialog_connectnotify_isbase = false;
    mutable bool kurlrequesterdialog_disconnectnotify_isbase = false;
    mutable bool kurlrequesterdialog_adjustposition_isbase = false;
    mutable bool kurlrequesterdialog_updatemicrofocus_isbase = false;
    mutable bool kurlrequesterdialog_create_isbase = false;
    mutable bool kurlrequesterdialog_destroy_isbase = false;
    mutable bool kurlrequesterdialog_focusnextchild_isbase = false;
    mutable bool kurlrequesterdialog_focuspreviouschild_isbase = false;
    mutable bool kurlrequesterdialog_sender_isbase = false;
    mutable bool kurlrequesterdialog_sendersignalindex_isbase = false;
    mutable bool kurlrequesterdialog_receivers_isbase = false;
    mutable bool kurlrequesterdialog_issignalconnected_isbase = false;
    mutable bool kurlrequesterdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKUrlRequesterDialog(const QUrl& url) : KUrlRequesterDialog(url) {};
    VirtualKUrlRequesterDialog(const QUrl& url, const QString& text, QWidget* parent) : KUrlRequesterDialog(url, text, parent) {};
    VirtualKUrlRequesterDialog(const QUrl& url, QWidget* parent) : KUrlRequesterDialog(url, parent) {};

    // Callback setters
    inline void setKUrlRequesterDialog_MetaObject_Callback(KUrlRequesterDialog_MetaObject_Callback cb) { kurlrequesterdialog_metaobject_callback = cb; }
    inline void setKUrlRequesterDialog_Metacast_Callback(KUrlRequesterDialog_Metacast_Callback cb) { kurlrequesterdialog_metacast_callback = cb; }
    inline void setKUrlRequesterDialog_Metacall_Callback(KUrlRequesterDialog_Metacall_Callback cb) { kurlrequesterdialog_metacall_callback = cb; }
    inline void setKUrlRequesterDialog_SetVisible_Callback(KUrlRequesterDialog_SetVisible_Callback cb) { kurlrequesterdialog_setvisible_callback = cb; }
    inline void setKUrlRequesterDialog_SizeHint_Callback(KUrlRequesterDialog_SizeHint_Callback cb) { kurlrequesterdialog_sizehint_callback = cb; }
    inline void setKUrlRequesterDialog_MinimumSizeHint_Callback(KUrlRequesterDialog_MinimumSizeHint_Callback cb) { kurlrequesterdialog_minimumsizehint_callback = cb; }
    inline void setKUrlRequesterDialog_Open_Callback(KUrlRequesterDialog_Open_Callback cb) { kurlrequesterdialog_open_callback = cb; }
    inline void setKUrlRequesterDialog_Exec_Callback(KUrlRequesterDialog_Exec_Callback cb) { kurlrequesterdialog_exec_callback = cb; }
    inline void setKUrlRequesterDialog_Done_Callback(KUrlRequesterDialog_Done_Callback cb) { kurlrequesterdialog_done_callback = cb; }
    inline void setKUrlRequesterDialog_Accept_Callback(KUrlRequesterDialog_Accept_Callback cb) { kurlrequesterdialog_accept_callback = cb; }
    inline void setKUrlRequesterDialog_Reject_Callback(KUrlRequesterDialog_Reject_Callback cb) { kurlrequesterdialog_reject_callback = cb; }
    inline void setKUrlRequesterDialog_KeyPressEvent_Callback(KUrlRequesterDialog_KeyPressEvent_Callback cb) { kurlrequesterdialog_keypressevent_callback = cb; }
    inline void setKUrlRequesterDialog_CloseEvent_Callback(KUrlRequesterDialog_CloseEvent_Callback cb) { kurlrequesterdialog_closeevent_callback = cb; }
    inline void setKUrlRequesterDialog_ShowEvent_Callback(KUrlRequesterDialog_ShowEvent_Callback cb) { kurlrequesterdialog_showevent_callback = cb; }
    inline void setKUrlRequesterDialog_ResizeEvent_Callback(KUrlRequesterDialog_ResizeEvent_Callback cb) { kurlrequesterdialog_resizeevent_callback = cb; }
    inline void setKUrlRequesterDialog_ContextMenuEvent_Callback(KUrlRequesterDialog_ContextMenuEvent_Callback cb) { kurlrequesterdialog_contextmenuevent_callback = cb; }
    inline void setKUrlRequesterDialog_EventFilter_Callback(KUrlRequesterDialog_EventFilter_Callback cb) { kurlrequesterdialog_eventfilter_callback = cb; }
    inline void setKUrlRequesterDialog_DevType_Callback(KUrlRequesterDialog_DevType_Callback cb) { kurlrequesterdialog_devtype_callback = cb; }
    inline void setKUrlRequesterDialog_HeightForWidth_Callback(KUrlRequesterDialog_HeightForWidth_Callback cb) { kurlrequesterdialog_heightforwidth_callback = cb; }
    inline void setKUrlRequesterDialog_HasHeightForWidth_Callback(KUrlRequesterDialog_HasHeightForWidth_Callback cb) { kurlrequesterdialog_hasheightforwidth_callback = cb; }
    inline void setKUrlRequesterDialog_PaintEngine_Callback(KUrlRequesterDialog_PaintEngine_Callback cb) { kurlrequesterdialog_paintengine_callback = cb; }
    inline void setKUrlRequesterDialog_Event_Callback(KUrlRequesterDialog_Event_Callback cb) { kurlrequesterdialog_event_callback = cb; }
    inline void setKUrlRequesterDialog_MousePressEvent_Callback(KUrlRequesterDialog_MousePressEvent_Callback cb) { kurlrequesterdialog_mousepressevent_callback = cb; }
    inline void setKUrlRequesterDialog_MouseReleaseEvent_Callback(KUrlRequesterDialog_MouseReleaseEvent_Callback cb) { kurlrequesterdialog_mousereleaseevent_callback = cb; }
    inline void setKUrlRequesterDialog_MouseDoubleClickEvent_Callback(KUrlRequesterDialog_MouseDoubleClickEvent_Callback cb) { kurlrequesterdialog_mousedoubleclickevent_callback = cb; }
    inline void setKUrlRequesterDialog_MouseMoveEvent_Callback(KUrlRequesterDialog_MouseMoveEvent_Callback cb) { kurlrequesterdialog_mousemoveevent_callback = cb; }
    inline void setKUrlRequesterDialog_WheelEvent_Callback(KUrlRequesterDialog_WheelEvent_Callback cb) { kurlrequesterdialog_wheelevent_callback = cb; }
    inline void setKUrlRequesterDialog_KeyReleaseEvent_Callback(KUrlRequesterDialog_KeyReleaseEvent_Callback cb) { kurlrequesterdialog_keyreleaseevent_callback = cb; }
    inline void setKUrlRequesterDialog_FocusInEvent_Callback(KUrlRequesterDialog_FocusInEvent_Callback cb) { kurlrequesterdialog_focusinevent_callback = cb; }
    inline void setKUrlRequesterDialog_FocusOutEvent_Callback(KUrlRequesterDialog_FocusOutEvent_Callback cb) { kurlrequesterdialog_focusoutevent_callback = cb; }
    inline void setKUrlRequesterDialog_EnterEvent_Callback(KUrlRequesterDialog_EnterEvent_Callback cb) { kurlrequesterdialog_enterevent_callback = cb; }
    inline void setKUrlRequesterDialog_LeaveEvent_Callback(KUrlRequesterDialog_LeaveEvent_Callback cb) { kurlrequesterdialog_leaveevent_callback = cb; }
    inline void setKUrlRequesterDialog_PaintEvent_Callback(KUrlRequesterDialog_PaintEvent_Callback cb) { kurlrequesterdialog_paintevent_callback = cb; }
    inline void setKUrlRequesterDialog_MoveEvent_Callback(KUrlRequesterDialog_MoveEvent_Callback cb) { kurlrequesterdialog_moveevent_callback = cb; }
    inline void setKUrlRequesterDialog_TabletEvent_Callback(KUrlRequesterDialog_TabletEvent_Callback cb) { kurlrequesterdialog_tabletevent_callback = cb; }
    inline void setKUrlRequesterDialog_ActionEvent_Callback(KUrlRequesterDialog_ActionEvent_Callback cb) { kurlrequesterdialog_actionevent_callback = cb; }
    inline void setKUrlRequesterDialog_DragEnterEvent_Callback(KUrlRequesterDialog_DragEnterEvent_Callback cb) { kurlrequesterdialog_dragenterevent_callback = cb; }
    inline void setKUrlRequesterDialog_DragMoveEvent_Callback(KUrlRequesterDialog_DragMoveEvent_Callback cb) { kurlrequesterdialog_dragmoveevent_callback = cb; }
    inline void setKUrlRequesterDialog_DragLeaveEvent_Callback(KUrlRequesterDialog_DragLeaveEvent_Callback cb) { kurlrequesterdialog_dragleaveevent_callback = cb; }
    inline void setKUrlRequesterDialog_DropEvent_Callback(KUrlRequesterDialog_DropEvent_Callback cb) { kurlrequesterdialog_dropevent_callback = cb; }
    inline void setKUrlRequesterDialog_HideEvent_Callback(KUrlRequesterDialog_HideEvent_Callback cb) { kurlrequesterdialog_hideevent_callback = cb; }
    inline void setKUrlRequesterDialog_NativeEvent_Callback(KUrlRequesterDialog_NativeEvent_Callback cb) { kurlrequesterdialog_nativeevent_callback = cb; }
    inline void setKUrlRequesterDialog_ChangeEvent_Callback(KUrlRequesterDialog_ChangeEvent_Callback cb) { kurlrequesterdialog_changeevent_callback = cb; }
    inline void setKUrlRequesterDialog_Metric_Callback(KUrlRequesterDialog_Metric_Callback cb) { kurlrequesterdialog_metric_callback = cb; }
    inline void setKUrlRequesterDialog_InitPainter_Callback(KUrlRequesterDialog_InitPainter_Callback cb) { kurlrequesterdialog_initpainter_callback = cb; }
    inline void setKUrlRequesterDialog_Redirected_Callback(KUrlRequesterDialog_Redirected_Callback cb) { kurlrequesterdialog_redirected_callback = cb; }
    inline void setKUrlRequesterDialog_SharedPainter_Callback(KUrlRequesterDialog_SharedPainter_Callback cb) { kurlrequesterdialog_sharedpainter_callback = cb; }
    inline void setKUrlRequesterDialog_InputMethodEvent_Callback(KUrlRequesterDialog_InputMethodEvent_Callback cb) { kurlrequesterdialog_inputmethodevent_callback = cb; }
    inline void setKUrlRequesterDialog_InputMethodQuery_Callback(KUrlRequesterDialog_InputMethodQuery_Callback cb) { kurlrequesterdialog_inputmethodquery_callback = cb; }
    inline void setKUrlRequesterDialog_FocusNextPrevChild_Callback(KUrlRequesterDialog_FocusNextPrevChild_Callback cb) { kurlrequesterdialog_focusnextprevchild_callback = cb; }
    inline void setKUrlRequesterDialog_TimerEvent_Callback(KUrlRequesterDialog_TimerEvent_Callback cb) { kurlrequesterdialog_timerevent_callback = cb; }
    inline void setKUrlRequesterDialog_ChildEvent_Callback(KUrlRequesterDialog_ChildEvent_Callback cb) { kurlrequesterdialog_childevent_callback = cb; }
    inline void setKUrlRequesterDialog_CustomEvent_Callback(KUrlRequesterDialog_CustomEvent_Callback cb) { kurlrequesterdialog_customevent_callback = cb; }
    inline void setKUrlRequesterDialog_ConnectNotify_Callback(KUrlRequesterDialog_ConnectNotify_Callback cb) { kurlrequesterdialog_connectnotify_callback = cb; }
    inline void setKUrlRequesterDialog_DisconnectNotify_Callback(KUrlRequesterDialog_DisconnectNotify_Callback cb) { kurlrequesterdialog_disconnectnotify_callback = cb; }
    inline void setKUrlRequesterDialog_AdjustPosition_Callback(KUrlRequesterDialog_AdjustPosition_Callback cb) { kurlrequesterdialog_adjustposition_callback = cb; }
    inline void setKUrlRequesterDialog_UpdateMicroFocus_Callback(KUrlRequesterDialog_UpdateMicroFocus_Callback cb) { kurlrequesterdialog_updatemicrofocus_callback = cb; }
    inline void setKUrlRequesterDialog_Create_Callback(KUrlRequesterDialog_Create_Callback cb) { kurlrequesterdialog_create_callback = cb; }
    inline void setKUrlRequesterDialog_Destroy_Callback(KUrlRequesterDialog_Destroy_Callback cb) { kurlrequesterdialog_destroy_callback = cb; }
    inline void setKUrlRequesterDialog_FocusNextChild_Callback(KUrlRequesterDialog_FocusNextChild_Callback cb) { kurlrequesterdialog_focusnextchild_callback = cb; }
    inline void setKUrlRequesterDialog_FocusPreviousChild_Callback(KUrlRequesterDialog_FocusPreviousChild_Callback cb) { kurlrequesterdialog_focuspreviouschild_callback = cb; }
    inline void setKUrlRequesterDialog_Sender_Callback(KUrlRequesterDialog_Sender_Callback cb) { kurlrequesterdialog_sender_callback = cb; }
    inline void setKUrlRequesterDialog_SenderSignalIndex_Callback(KUrlRequesterDialog_SenderSignalIndex_Callback cb) { kurlrequesterdialog_sendersignalindex_callback = cb; }
    inline void setKUrlRequesterDialog_Receivers_Callback(KUrlRequesterDialog_Receivers_Callback cb) { kurlrequesterdialog_receivers_callback = cb; }
    inline void setKUrlRequesterDialog_IsSignalConnected_Callback(KUrlRequesterDialog_IsSignalConnected_Callback cb) { kurlrequesterdialog_issignalconnected_callback = cb; }
    inline void setKUrlRequesterDialog_GetDecodedMetricF_Callback(KUrlRequesterDialog_GetDecodedMetricF_Callback cb) { kurlrequesterdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKUrlRequesterDialog_MetaObject_IsBase(bool value) const { kurlrequesterdialog_metaobject_isbase = value; }
    inline void setKUrlRequesterDialog_Metacast_IsBase(bool value) const { kurlrequesterdialog_metacast_isbase = value; }
    inline void setKUrlRequesterDialog_Metacall_IsBase(bool value) const { kurlrequesterdialog_metacall_isbase = value; }
    inline void setKUrlRequesterDialog_SetVisible_IsBase(bool value) const { kurlrequesterdialog_setvisible_isbase = value; }
    inline void setKUrlRequesterDialog_SizeHint_IsBase(bool value) const { kurlrequesterdialog_sizehint_isbase = value; }
    inline void setKUrlRequesterDialog_MinimumSizeHint_IsBase(bool value) const { kurlrequesterdialog_minimumsizehint_isbase = value; }
    inline void setKUrlRequesterDialog_Open_IsBase(bool value) const { kurlrequesterdialog_open_isbase = value; }
    inline void setKUrlRequesterDialog_Exec_IsBase(bool value) const { kurlrequesterdialog_exec_isbase = value; }
    inline void setKUrlRequesterDialog_Done_IsBase(bool value) const { kurlrequesterdialog_done_isbase = value; }
    inline void setKUrlRequesterDialog_Accept_IsBase(bool value) const { kurlrequesterdialog_accept_isbase = value; }
    inline void setKUrlRequesterDialog_Reject_IsBase(bool value) const { kurlrequesterdialog_reject_isbase = value; }
    inline void setKUrlRequesterDialog_KeyPressEvent_IsBase(bool value) const { kurlrequesterdialog_keypressevent_isbase = value; }
    inline void setKUrlRequesterDialog_CloseEvent_IsBase(bool value) const { kurlrequesterdialog_closeevent_isbase = value; }
    inline void setKUrlRequesterDialog_ShowEvent_IsBase(bool value) const { kurlrequesterdialog_showevent_isbase = value; }
    inline void setKUrlRequesterDialog_ResizeEvent_IsBase(bool value) const { kurlrequesterdialog_resizeevent_isbase = value; }
    inline void setKUrlRequesterDialog_ContextMenuEvent_IsBase(bool value) const { kurlrequesterdialog_contextmenuevent_isbase = value; }
    inline void setKUrlRequesterDialog_EventFilter_IsBase(bool value) const { kurlrequesterdialog_eventfilter_isbase = value; }
    inline void setKUrlRequesterDialog_DevType_IsBase(bool value) const { kurlrequesterdialog_devtype_isbase = value; }
    inline void setKUrlRequesterDialog_HeightForWidth_IsBase(bool value) const { kurlrequesterdialog_heightforwidth_isbase = value; }
    inline void setKUrlRequesterDialog_HasHeightForWidth_IsBase(bool value) const { kurlrequesterdialog_hasheightforwidth_isbase = value; }
    inline void setKUrlRequesterDialog_PaintEngine_IsBase(bool value) const { kurlrequesterdialog_paintengine_isbase = value; }
    inline void setKUrlRequesterDialog_Event_IsBase(bool value) const { kurlrequesterdialog_event_isbase = value; }
    inline void setKUrlRequesterDialog_MousePressEvent_IsBase(bool value) const { kurlrequesterdialog_mousepressevent_isbase = value; }
    inline void setKUrlRequesterDialog_MouseReleaseEvent_IsBase(bool value) const { kurlrequesterdialog_mousereleaseevent_isbase = value; }
    inline void setKUrlRequesterDialog_MouseDoubleClickEvent_IsBase(bool value) const { kurlrequesterdialog_mousedoubleclickevent_isbase = value; }
    inline void setKUrlRequesterDialog_MouseMoveEvent_IsBase(bool value) const { kurlrequesterdialog_mousemoveevent_isbase = value; }
    inline void setKUrlRequesterDialog_WheelEvent_IsBase(bool value) const { kurlrequesterdialog_wheelevent_isbase = value; }
    inline void setKUrlRequesterDialog_KeyReleaseEvent_IsBase(bool value) const { kurlrequesterdialog_keyreleaseevent_isbase = value; }
    inline void setKUrlRequesterDialog_FocusInEvent_IsBase(bool value) const { kurlrequesterdialog_focusinevent_isbase = value; }
    inline void setKUrlRequesterDialog_FocusOutEvent_IsBase(bool value) const { kurlrequesterdialog_focusoutevent_isbase = value; }
    inline void setKUrlRequesterDialog_EnterEvent_IsBase(bool value) const { kurlrequesterdialog_enterevent_isbase = value; }
    inline void setKUrlRequesterDialog_LeaveEvent_IsBase(bool value) const { kurlrequesterdialog_leaveevent_isbase = value; }
    inline void setKUrlRequesterDialog_PaintEvent_IsBase(bool value) const { kurlrequesterdialog_paintevent_isbase = value; }
    inline void setKUrlRequesterDialog_MoveEvent_IsBase(bool value) const { kurlrequesterdialog_moveevent_isbase = value; }
    inline void setKUrlRequesterDialog_TabletEvent_IsBase(bool value) const { kurlrequesterdialog_tabletevent_isbase = value; }
    inline void setKUrlRequesterDialog_ActionEvent_IsBase(bool value) const { kurlrequesterdialog_actionevent_isbase = value; }
    inline void setKUrlRequesterDialog_DragEnterEvent_IsBase(bool value) const { kurlrequesterdialog_dragenterevent_isbase = value; }
    inline void setKUrlRequesterDialog_DragMoveEvent_IsBase(bool value) const { kurlrequesterdialog_dragmoveevent_isbase = value; }
    inline void setKUrlRequesterDialog_DragLeaveEvent_IsBase(bool value) const { kurlrequesterdialog_dragleaveevent_isbase = value; }
    inline void setKUrlRequesterDialog_DropEvent_IsBase(bool value) const { kurlrequesterdialog_dropevent_isbase = value; }
    inline void setKUrlRequesterDialog_HideEvent_IsBase(bool value) const { kurlrequesterdialog_hideevent_isbase = value; }
    inline void setKUrlRequesterDialog_NativeEvent_IsBase(bool value) const { kurlrequesterdialog_nativeevent_isbase = value; }
    inline void setKUrlRequesterDialog_ChangeEvent_IsBase(bool value) const { kurlrequesterdialog_changeevent_isbase = value; }
    inline void setKUrlRequesterDialog_Metric_IsBase(bool value) const { kurlrequesterdialog_metric_isbase = value; }
    inline void setKUrlRequesterDialog_InitPainter_IsBase(bool value) const { kurlrequesterdialog_initpainter_isbase = value; }
    inline void setKUrlRequesterDialog_Redirected_IsBase(bool value) const { kurlrequesterdialog_redirected_isbase = value; }
    inline void setKUrlRequesterDialog_SharedPainter_IsBase(bool value) const { kurlrequesterdialog_sharedpainter_isbase = value; }
    inline void setKUrlRequesterDialog_InputMethodEvent_IsBase(bool value) const { kurlrequesterdialog_inputmethodevent_isbase = value; }
    inline void setKUrlRequesterDialog_InputMethodQuery_IsBase(bool value) const { kurlrequesterdialog_inputmethodquery_isbase = value; }
    inline void setKUrlRequesterDialog_FocusNextPrevChild_IsBase(bool value) const { kurlrequesterdialog_focusnextprevchild_isbase = value; }
    inline void setKUrlRequesterDialog_TimerEvent_IsBase(bool value) const { kurlrequesterdialog_timerevent_isbase = value; }
    inline void setKUrlRequesterDialog_ChildEvent_IsBase(bool value) const { kurlrequesterdialog_childevent_isbase = value; }
    inline void setKUrlRequesterDialog_CustomEvent_IsBase(bool value) const { kurlrequesterdialog_customevent_isbase = value; }
    inline void setKUrlRequesterDialog_ConnectNotify_IsBase(bool value) const { kurlrequesterdialog_connectnotify_isbase = value; }
    inline void setKUrlRequesterDialog_DisconnectNotify_IsBase(bool value) const { kurlrequesterdialog_disconnectnotify_isbase = value; }
    inline void setKUrlRequesterDialog_AdjustPosition_IsBase(bool value) const { kurlrequesterdialog_adjustposition_isbase = value; }
    inline void setKUrlRequesterDialog_UpdateMicroFocus_IsBase(bool value) const { kurlrequesterdialog_updatemicrofocus_isbase = value; }
    inline void setKUrlRequesterDialog_Create_IsBase(bool value) const { kurlrequesterdialog_create_isbase = value; }
    inline void setKUrlRequesterDialog_Destroy_IsBase(bool value) const { kurlrequesterdialog_destroy_isbase = value; }
    inline void setKUrlRequesterDialog_FocusNextChild_IsBase(bool value) const { kurlrequesterdialog_focusnextchild_isbase = value; }
    inline void setKUrlRequesterDialog_FocusPreviousChild_IsBase(bool value) const { kurlrequesterdialog_focuspreviouschild_isbase = value; }
    inline void setKUrlRequesterDialog_Sender_IsBase(bool value) const { kurlrequesterdialog_sender_isbase = value; }
    inline void setKUrlRequesterDialog_SenderSignalIndex_IsBase(bool value) const { kurlrequesterdialog_sendersignalindex_isbase = value; }
    inline void setKUrlRequesterDialog_Receivers_IsBase(bool value) const { kurlrequesterdialog_receivers_isbase = value; }
    inline void setKUrlRequesterDialog_IsSignalConnected_IsBase(bool value) const { kurlrequesterdialog_issignalconnected_isbase = value; }
    inline void setKUrlRequesterDialog_GetDecodedMetricF_IsBase(bool value) const { kurlrequesterdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kurlrequesterdialog_metaobject_isbase) {
            kurlrequesterdialog_metaobject_isbase = false;
            return KUrlRequesterDialog::metaObject();
        }
        auto metaobject_cb = kurlrequesterdialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KUrlRequesterDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kurlrequesterdialog_metacast_isbase) {
            kurlrequesterdialog_metacast_isbase = false;
            return KUrlRequesterDialog::qt_metacast(param1);
        }
        auto metacast_cb = kurlrequesterdialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KUrlRequesterDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kurlrequesterdialog_metacall_isbase) {
            kurlrequesterdialog_metacall_isbase = false;
            return KUrlRequesterDialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kurlrequesterdialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KUrlRequesterDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kurlrequesterdialog_setvisible_isbase) {
            kurlrequesterdialog_setvisible_isbase = false;
            KUrlRequesterDialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = kurlrequesterdialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kurlrequesterdialog_sizehint_isbase) {
            kurlrequesterdialog_sizehint_isbase = false;
            return KUrlRequesterDialog::sizeHint();
        }
        auto sizehint_cb = kurlrequesterdialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KUrlRequesterDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kurlrequesterdialog_minimumsizehint_isbase) {
            kurlrequesterdialog_minimumsizehint_isbase = false;
            return KUrlRequesterDialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = kurlrequesterdialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KUrlRequesterDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kurlrequesterdialog_open_isbase) {
            kurlrequesterdialog_open_isbase = false;
            KUrlRequesterDialog::open();
            return;
        }
        auto open_cb = kurlrequesterdialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        KUrlRequesterDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kurlrequesterdialog_exec_isbase) {
            kurlrequesterdialog_exec_isbase = false;
            return KUrlRequesterDialog::exec();
        }
        auto exec_cb = kurlrequesterdialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return KUrlRequesterDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kurlrequesterdialog_done_isbase) {
            kurlrequesterdialog_done_isbase = false;
            KUrlRequesterDialog::done(param1);
            return;
        }
        auto done_cb = kurlrequesterdialog_done_callback;
        if (done_cb) {
            int cbval1 = param1;

            done_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kurlrequesterdialog_accept_isbase) {
            kurlrequesterdialog_accept_isbase = false;
            KUrlRequesterDialog::accept();
            return;
        }
        auto accept_cb = kurlrequesterdialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        KUrlRequesterDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kurlrequesterdialog_reject_isbase) {
            kurlrequesterdialog_reject_isbase = false;
            KUrlRequesterDialog::reject();
            return;
        }
        auto reject_cb = kurlrequesterdialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        KUrlRequesterDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kurlrequesterdialog_keypressevent_isbase) {
            kurlrequesterdialog_keypressevent_isbase = false;
            KUrlRequesterDialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = kurlrequesterdialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kurlrequesterdialog_closeevent_isbase) {
            kurlrequesterdialog_closeevent_isbase = false;
            KUrlRequesterDialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = kurlrequesterdialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kurlrequesterdialog_showevent_isbase) {
            kurlrequesterdialog_showevent_isbase = false;
            KUrlRequesterDialog::showEvent(param1);
            return;
        }
        auto showevent_cb = kurlrequesterdialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kurlrequesterdialog_resizeevent_isbase) {
            kurlrequesterdialog_resizeevent_isbase = false;
            KUrlRequesterDialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = kurlrequesterdialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kurlrequesterdialog_contextmenuevent_isbase) {
            kurlrequesterdialog_contextmenuevent_isbase = false;
            KUrlRequesterDialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = kurlrequesterdialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kurlrequesterdialog_eventfilter_isbase) {
            kurlrequesterdialog_eventfilter_isbase = false;
            return KUrlRequesterDialog::eventFilter(param1, param2);
        }
        auto eventfilter_cb = kurlrequesterdialog_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KUrlRequesterDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kurlrequesterdialog_devtype_isbase) {
            kurlrequesterdialog_devtype_isbase = false;
            return KUrlRequesterDialog::devType();
        }
        auto devtype_cb = kurlrequesterdialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KUrlRequesterDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kurlrequesterdialog_heightforwidth_isbase) {
            kurlrequesterdialog_heightforwidth_isbase = false;
            return KUrlRequesterDialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = kurlrequesterdialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KUrlRequesterDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kurlrequesterdialog_hasheightforwidth_isbase) {
            kurlrequesterdialog_hasheightforwidth_isbase = false;
            return KUrlRequesterDialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kurlrequesterdialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KUrlRequesterDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kurlrequesterdialog_paintengine_isbase) {
            kurlrequesterdialog_paintengine_isbase = false;
            return KUrlRequesterDialog::paintEngine();
        }
        auto paintengine_cb = kurlrequesterdialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KUrlRequesterDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kurlrequesterdialog_event_isbase) {
            kurlrequesterdialog_event_isbase = false;
            return KUrlRequesterDialog::event(event);
        }
        auto event_cb = kurlrequesterdialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KUrlRequesterDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kurlrequesterdialog_mousepressevent_isbase) {
            kurlrequesterdialog_mousepressevent_isbase = false;
            KUrlRequesterDialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kurlrequesterdialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kurlrequesterdialog_mousereleaseevent_isbase) {
            kurlrequesterdialog_mousereleaseevent_isbase = false;
            KUrlRequesterDialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kurlrequesterdialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kurlrequesterdialog_mousedoubleclickevent_isbase) {
            kurlrequesterdialog_mousedoubleclickevent_isbase = false;
            KUrlRequesterDialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kurlrequesterdialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kurlrequesterdialog_mousemoveevent_isbase) {
            kurlrequesterdialog_mousemoveevent_isbase = false;
            KUrlRequesterDialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kurlrequesterdialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kurlrequesterdialog_wheelevent_isbase) {
            kurlrequesterdialog_wheelevent_isbase = false;
            KUrlRequesterDialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kurlrequesterdialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kurlrequesterdialog_keyreleaseevent_isbase) {
            kurlrequesterdialog_keyreleaseevent_isbase = false;
            KUrlRequesterDialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kurlrequesterdialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kurlrequesterdialog_focusinevent_isbase) {
            kurlrequesterdialog_focusinevent_isbase = false;
            KUrlRequesterDialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kurlrequesterdialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kurlrequesterdialog_focusoutevent_isbase) {
            kurlrequesterdialog_focusoutevent_isbase = false;
            KUrlRequesterDialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kurlrequesterdialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kurlrequesterdialog_enterevent_isbase) {
            kurlrequesterdialog_enterevent_isbase = false;
            KUrlRequesterDialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = kurlrequesterdialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kurlrequesterdialog_leaveevent_isbase) {
            kurlrequesterdialog_leaveevent_isbase = false;
            KUrlRequesterDialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kurlrequesterdialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kurlrequesterdialog_paintevent_isbase) {
            kurlrequesterdialog_paintevent_isbase = false;
            KUrlRequesterDialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = kurlrequesterdialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kurlrequesterdialog_moveevent_isbase) {
            kurlrequesterdialog_moveevent_isbase = false;
            KUrlRequesterDialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = kurlrequesterdialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kurlrequesterdialog_tabletevent_isbase) {
            kurlrequesterdialog_tabletevent_isbase = false;
            KUrlRequesterDialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kurlrequesterdialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kurlrequesterdialog_actionevent_isbase) {
            kurlrequesterdialog_actionevent_isbase = false;
            KUrlRequesterDialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = kurlrequesterdialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kurlrequesterdialog_dragenterevent_isbase) {
            kurlrequesterdialog_dragenterevent_isbase = false;
            KUrlRequesterDialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kurlrequesterdialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kurlrequesterdialog_dragmoveevent_isbase) {
            kurlrequesterdialog_dragmoveevent_isbase = false;
            KUrlRequesterDialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kurlrequesterdialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kurlrequesterdialog_dragleaveevent_isbase) {
            kurlrequesterdialog_dragleaveevent_isbase = false;
            KUrlRequesterDialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kurlrequesterdialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kurlrequesterdialog_dropevent_isbase) {
            kurlrequesterdialog_dropevent_isbase = false;
            KUrlRequesterDialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = kurlrequesterdialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kurlrequesterdialog_hideevent_isbase) {
            kurlrequesterdialog_hideevent_isbase = false;
            KUrlRequesterDialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = kurlrequesterdialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kurlrequesterdialog_nativeevent_isbase) {
            kurlrequesterdialog_nativeevent_isbase = false;
            return KUrlRequesterDialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kurlrequesterdialog_nativeevent_callback;
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
        return KUrlRequesterDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kurlrequesterdialog_changeevent_isbase) {
            kurlrequesterdialog_changeevent_isbase = false;
            KUrlRequesterDialog::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kurlrequesterdialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kurlrequesterdialog_metric_isbase) {
            kurlrequesterdialog_metric_isbase = false;
            return KUrlRequesterDialog::metric(param1);
        }
        auto metric_cb = kurlrequesterdialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KUrlRequesterDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kurlrequesterdialog_initpainter_isbase) {
            kurlrequesterdialog_initpainter_isbase = false;
            KUrlRequesterDialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = kurlrequesterdialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kurlrequesterdialog_redirected_isbase) {
            kurlrequesterdialog_redirected_isbase = false;
            return KUrlRequesterDialog::redirected(offset);
        }
        auto redirected_cb = kurlrequesterdialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KUrlRequesterDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kurlrequesterdialog_sharedpainter_isbase) {
            kurlrequesterdialog_sharedpainter_isbase = false;
            return KUrlRequesterDialog::sharedPainter();
        }
        auto sharedpainter_cb = kurlrequesterdialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KUrlRequesterDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kurlrequesterdialog_inputmethodevent_isbase) {
            kurlrequesterdialog_inputmethodevent_isbase = false;
            KUrlRequesterDialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kurlrequesterdialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kurlrequesterdialog_inputmethodquery_isbase) {
            kurlrequesterdialog_inputmethodquery_isbase = false;
            return KUrlRequesterDialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kurlrequesterdialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KUrlRequesterDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kurlrequesterdialog_focusnextprevchild_isbase) {
            kurlrequesterdialog_focusnextprevchild_isbase = false;
            return KUrlRequesterDialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kurlrequesterdialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KUrlRequesterDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kurlrequesterdialog_timerevent_isbase) {
            kurlrequesterdialog_timerevent_isbase = false;
            KUrlRequesterDialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = kurlrequesterdialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kurlrequesterdialog_childevent_isbase) {
            kurlrequesterdialog_childevent_isbase = false;
            KUrlRequesterDialog::childEvent(event);
            return;
        }
        auto childevent_cb = kurlrequesterdialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kurlrequesterdialog_customevent_isbase) {
            kurlrequesterdialog_customevent_isbase = false;
            KUrlRequesterDialog::customEvent(event);
            return;
        }
        auto customevent_cb = kurlrequesterdialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kurlrequesterdialog_connectnotify_isbase) {
            kurlrequesterdialog_connectnotify_isbase = false;
            KUrlRequesterDialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kurlrequesterdialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kurlrequesterdialog_disconnectnotify_isbase) {
            kurlrequesterdialog_disconnectnotify_isbase = false;
            KUrlRequesterDialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kurlrequesterdialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kurlrequesterdialog_adjustposition_isbase) {
            kurlrequesterdialog_adjustposition_isbase = false;
            KUrlRequesterDialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = kurlrequesterdialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        KUrlRequesterDialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kurlrequesterdialog_updatemicrofocus_isbase) {
            kurlrequesterdialog_updatemicrofocus_isbase = false;
            KUrlRequesterDialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kurlrequesterdialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KUrlRequesterDialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kurlrequesterdialog_create_isbase) {
            kurlrequesterdialog_create_isbase = false;
            KUrlRequesterDialog::create();
            return;
        }
        auto create_cb = kurlrequesterdialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KUrlRequesterDialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kurlrequesterdialog_destroy_isbase) {
            kurlrequesterdialog_destroy_isbase = false;
            KUrlRequesterDialog::destroy();
            return;
        }
        auto destroy_cb = kurlrequesterdialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KUrlRequesterDialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kurlrequesterdialog_focusnextchild_isbase) {
            kurlrequesterdialog_focusnextchild_isbase = false;
            return KUrlRequesterDialog::focusNextChild();
        }
        auto focusnextchild_cb = kurlrequesterdialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KUrlRequesterDialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kurlrequesterdialog_focuspreviouschild_isbase) {
            kurlrequesterdialog_focuspreviouschild_isbase = false;
            return KUrlRequesterDialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kurlrequesterdialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KUrlRequesterDialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kurlrequesterdialog_sender_isbase) {
            kurlrequesterdialog_sender_isbase = false;
            return KUrlRequesterDialog::sender();
        }
        auto sender_cb = kurlrequesterdialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KUrlRequesterDialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kurlrequesterdialog_sendersignalindex_isbase) {
            kurlrequesterdialog_sendersignalindex_isbase = false;
            return KUrlRequesterDialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = kurlrequesterdialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KUrlRequesterDialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kurlrequesterdialog_receivers_isbase) {
            kurlrequesterdialog_receivers_isbase = false;
            return KUrlRequesterDialog::receivers(signal);
        }
        auto receivers_cb = kurlrequesterdialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KUrlRequesterDialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kurlrequesterdialog_issignalconnected_isbase) {
            kurlrequesterdialog_issignalconnected_isbase = false;
            return KUrlRequesterDialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kurlrequesterdialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KUrlRequesterDialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kurlrequesterdialog_getdecodedmetricf_isbase) {
            kurlrequesterdialog_getdecodedmetricf_isbase = false;
            return KUrlRequesterDialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kurlrequesterdialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KUrlRequesterDialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KUrlRequesterDialog_KeyPressEvent(KUrlRequesterDialog* self, QKeyEvent* param1);
    friend void KUrlRequesterDialog_SuperKeyPressEvent(KUrlRequesterDialog* self, QKeyEvent* param1);
    friend void KUrlRequesterDialog_CloseEvent(KUrlRequesterDialog* self, QCloseEvent* param1);
    friend void KUrlRequesterDialog_SuperCloseEvent(KUrlRequesterDialog* self, QCloseEvent* param1);
    friend void KUrlRequesterDialog_ShowEvent(KUrlRequesterDialog* self, QShowEvent* param1);
    friend void KUrlRequesterDialog_SuperShowEvent(KUrlRequesterDialog* self, QShowEvent* param1);
    friend void KUrlRequesterDialog_ResizeEvent(KUrlRequesterDialog* self, QResizeEvent* param1);
    friend void KUrlRequesterDialog_SuperResizeEvent(KUrlRequesterDialog* self, QResizeEvent* param1);
    friend void KUrlRequesterDialog_ContextMenuEvent(KUrlRequesterDialog* self, QContextMenuEvent* param1);
    friend void KUrlRequesterDialog_SuperContextMenuEvent(KUrlRequesterDialog* self, QContextMenuEvent* param1);
    friend bool KUrlRequesterDialog_EventFilter(KUrlRequesterDialog* self, QObject* param1, QEvent* param2);
    friend bool KUrlRequesterDialog_SuperEventFilter(KUrlRequesterDialog* self, QObject* param1, QEvent* param2);
    friend bool KUrlRequesterDialog_Event(KUrlRequesterDialog* self, QEvent* event);
    friend bool KUrlRequesterDialog_SuperEvent(KUrlRequesterDialog* self, QEvent* event);
    friend void KUrlRequesterDialog_MousePressEvent(KUrlRequesterDialog* self, QMouseEvent* event);
    friend void KUrlRequesterDialog_SuperMousePressEvent(KUrlRequesterDialog* self, QMouseEvent* event);
    friend void KUrlRequesterDialog_MouseReleaseEvent(KUrlRequesterDialog* self, QMouseEvent* event);
    friend void KUrlRequesterDialog_SuperMouseReleaseEvent(KUrlRequesterDialog* self, QMouseEvent* event);
    friend void KUrlRequesterDialog_MouseDoubleClickEvent(KUrlRequesterDialog* self, QMouseEvent* event);
    friend void KUrlRequesterDialog_SuperMouseDoubleClickEvent(KUrlRequesterDialog* self, QMouseEvent* event);
    friend void KUrlRequesterDialog_MouseMoveEvent(KUrlRequesterDialog* self, QMouseEvent* event);
    friend void KUrlRequesterDialog_SuperMouseMoveEvent(KUrlRequesterDialog* self, QMouseEvent* event);
    friend void KUrlRequesterDialog_WheelEvent(KUrlRequesterDialog* self, QWheelEvent* event);
    friend void KUrlRequesterDialog_SuperWheelEvent(KUrlRequesterDialog* self, QWheelEvent* event);
    friend void KUrlRequesterDialog_KeyReleaseEvent(KUrlRequesterDialog* self, QKeyEvent* event);
    friend void KUrlRequesterDialog_SuperKeyReleaseEvent(KUrlRequesterDialog* self, QKeyEvent* event);
    friend void KUrlRequesterDialog_FocusInEvent(KUrlRequesterDialog* self, QFocusEvent* event);
    friend void KUrlRequesterDialog_SuperFocusInEvent(KUrlRequesterDialog* self, QFocusEvent* event);
    friend void KUrlRequesterDialog_FocusOutEvent(KUrlRequesterDialog* self, QFocusEvent* event);
    friend void KUrlRequesterDialog_SuperFocusOutEvent(KUrlRequesterDialog* self, QFocusEvent* event);
    friend void KUrlRequesterDialog_EnterEvent(KUrlRequesterDialog* self, QEnterEvent* event);
    friend void KUrlRequesterDialog_SuperEnterEvent(KUrlRequesterDialog* self, QEnterEvent* event);
    friend void KUrlRequesterDialog_LeaveEvent(KUrlRequesterDialog* self, QEvent* event);
    friend void KUrlRequesterDialog_SuperLeaveEvent(KUrlRequesterDialog* self, QEvent* event);
    friend void KUrlRequesterDialog_PaintEvent(KUrlRequesterDialog* self, QPaintEvent* event);
    friend void KUrlRequesterDialog_SuperPaintEvent(KUrlRequesterDialog* self, QPaintEvent* event);
    friend void KUrlRequesterDialog_MoveEvent(KUrlRequesterDialog* self, QMoveEvent* event);
    friend void KUrlRequesterDialog_SuperMoveEvent(KUrlRequesterDialog* self, QMoveEvent* event);
    friend void KUrlRequesterDialog_TabletEvent(KUrlRequesterDialog* self, QTabletEvent* event);
    friend void KUrlRequesterDialog_SuperTabletEvent(KUrlRequesterDialog* self, QTabletEvent* event);
    friend void KUrlRequesterDialog_ActionEvent(KUrlRequesterDialog* self, QActionEvent* event);
    friend void KUrlRequesterDialog_SuperActionEvent(KUrlRequesterDialog* self, QActionEvent* event);
    friend void KUrlRequesterDialog_DragEnterEvent(KUrlRequesterDialog* self, QDragEnterEvent* event);
    friend void KUrlRequesterDialog_SuperDragEnterEvent(KUrlRequesterDialog* self, QDragEnterEvent* event);
    friend void KUrlRequesterDialog_DragMoveEvent(KUrlRequesterDialog* self, QDragMoveEvent* event);
    friend void KUrlRequesterDialog_SuperDragMoveEvent(KUrlRequesterDialog* self, QDragMoveEvent* event);
    friend void KUrlRequesterDialog_DragLeaveEvent(KUrlRequesterDialog* self, QDragLeaveEvent* event);
    friend void KUrlRequesterDialog_SuperDragLeaveEvent(KUrlRequesterDialog* self, QDragLeaveEvent* event);
    friend void KUrlRequesterDialog_DropEvent(KUrlRequesterDialog* self, QDropEvent* event);
    friend void KUrlRequesterDialog_SuperDropEvent(KUrlRequesterDialog* self, QDropEvent* event);
    friend void KUrlRequesterDialog_HideEvent(KUrlRequesterDialog* self, QHideEvent* event);
    friend void KUrlRequesterDialog_SuperHideEvent(KUrlRequesterDialog* self, QHideEvent* event);
    friend bool KUrlRequesterDialog_NativeEvent(KUrlRequesterDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KUrlRequesterDialog_SuperNativeEvent(KUrlRequesterDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KUrlRequesterDialog_ChangeEvent(KUrlRequesterDialog* self, QEvent* param1);
    friend void KUrlRequesterDialog_SuperChangeEvent(KUrlRequesterDialog* self, QEvent* param1);
    friend int KUrlRequesterDialog_Metric(const KUrlRequesterDialog* self, int param1);
    friend int KUrlRequesterDialog_SuperMetric(const KUrlRequesterDialog* self, int param1);
    friend void KUrlRequesterDialog_InitPainter(const KUrlRequesterDialog* self, QPainter* painter);
    friend void KUrlRequesterDialog_SuperInitPainter(const KUrlRequesterDialog* self, QPainter* painter);
    friend QPaintDevice* KUrlRequesterDialog_Redirected(const KUrlRequesterDialog* self, QPoint* offset);
    friend QPaintDevice* KUrlRequesterDialog_SuperRedirected(const KUrlRequesterDialog* self, QPoint* offset);
    friend QPainter* KUrlRequesterDialog_SharedPainter(const KUrlRequesterDialog* self);
    friend QPainter* KUrlRequesterDialog_SuperSharedPainter(const KUrlRequesterDialog* self);
    friend void KUrlRequesterDialog_InputMethodEvent(KUrlRequesterDialog* self, QInputMethodEvent* param1);
    friend void KUrlRequesterDialog_SuperInputMethodEvent(KUrlRequesterDialog* self, QInputMethodEvent* param1);
    friend bool KUrlRequesterDialog_FocusNextPrevChild(KUrlRequesterDialog* self, bool next);
    friend bool KUrlRequesterDialog_SuperFocusNextPrevChild(KUrlRequesterDialog* self, bool next);
    friend void KUrlRequesterDialog_TimerEvent(KUrlRequesterDialog* self, QTimerEvent* event);
    friend void KUrlRequesterDialog_SuperTimerEvent(KUrlRequesterDialog* self, QTimerEvent* event);
    friend void KUrlRequesterDialog_ChildEvent(KUrlRequesterDialog* self, QChildEvent* event);
    friend void KUrlRequesterDialog_SuperChildEvent(KUrlRequesterDialog* self, QChildEvent* event);
    friend void KUrlRequesterDialog_CustomEvent(KUrlRequesterDialog* self, QEvent* event);
    friend void KUrlRequesterDialog_SuperCustomEvent(KUrlRequesterDialog* self, QEvent* event);
    friend void KUrlRequesterDialog_ConnectNotify(KUrlRequesterDialog* self, const QMetaMethod* signal);
    friend void KUrlRequesterDialog_SuperConnectNotify(KUrlRequesterDialog* self, const QMetaMethod* signal);
    friend void KUrlRequesterDialog_DisconnectNotify(KUrlRequesterDialog* self, const QMetaMethod* signal);
    friend void KUrlRequesterDialog_SuperDisconnectNotify(KUrlRequesterDialog* self, const QMetaMethod* signal);
    friend void KUrlRequesterDialog_AdjustPosition(KUrlRequesterDialog* self, QWidget* param1);
    friend void KUrlRequesterDialog_SuperAdjustPosition(KUrlRequesterDialog* self, QWidget* param1);
    friend void KUrlRequesterDialog_UpdateMicroFocus(KUrlRequesterDialog* self);
    friend void KUrlRequesterDialog_SuperUpdateMicroFocus(KUrlRequesterDialog* self);
    friend void KUrlRequesterDialog_Create(KUrlRequesterDialog* self);
    friend void KUrlRequesterDialog_SuperCreate(KUrlRequesterDialog* self);
    friend void KUrlRequesterDialog_Destroy(KUrlRequesterDialog* self);
    friend void KUrlRequesterDialog_SuperDestroy(KUrlRequesterDialog* self);
    friend bool KUrlRequesterDialog_FocusNextChild(KUrlRequesterDialog* self);
    friend bool KUrlRequesterDialog_SuperFocusNextChild(KUrlRequesterDialog* self);
    friend bool KUrlRequesterDialog_FocusPreviousChild(KUrlRequesterDialog* self);
    friend bool KUrlRequesterDialog_SuperFocusPreviousChild(KUrlRequesterDialog* self);
    friend QObject* KUrlRequesterDialog_Sender(const KUrlRequesterDialog* self);
    friend QObject* KUrlRequesterDialog_SuperSender(const KUrlRequesterDialog* self);
    friend int KUrlRequesterDialog_SenderSignalIndex(const KUrlRequesterDialog* self);
    friend int KUrlRequesterDialog_SuperSenderSignalIndex(const KUrlRequesterDialog* self);
    friend int KUrlRequesterDialog_Receivers(const KUrlRequesterDialog* self, const char* signal);
    friend int KUrlRequesterDialog_SuperReceivers(const KUrlRequesterDialog* self, const char* signal);
    friend bool KUrlRequesterDialog_IsSignalConnected(const KUrlRequesterDialog* self, const QMetaMethod* signal);
    friend bool KUrlRequesterDialog_SuperIsSignalConnected(const KUrlRequesterDialog* self, const QMetaMethod* signal);
    friend double KUrlRequesterDialog_GetDecodedMetricF(const KUrlRequesterDialog* self, int metricA, int metricB);
    friend double KUrlRequesterDialog_SuperGetDecodedMetricF(const KUrlRequesterDialog* self, int metricA, int metricB);
};

#endif
