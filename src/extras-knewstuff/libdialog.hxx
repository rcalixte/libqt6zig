#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBVIRTUALDIALOG_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBVIRTUALDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNSWidgets::Dialog so that we can call protected methods
class VirtualKNSWidgetsDialog final : public KNSWidgets::Dialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKNSWidgetsDialog = true;

    // Virtual class public types (including callbacks)
    using KNSWidgets__Dialog_MetaObject_Callback = QMetaObject* (*)();
    using KNSWidgets__Dialog_Metacast_Callback = void* (*)(KNSWidgets__Dialog*, const char*);
    using KNSWidgets__Dialog_Metacall_Callback = int (*)(KNSWidgets__Dialog*, int, int, void**);
    using KNSWidgets__Dialog_Open_Callback = void (*)();
    using KNSWidgets__Dialog_SetVisible_Callback = void (*)(KNSWidgets__Dialog*, bool);
    using KNSWidgets__Dialog_SizeHint_Callback = QSize* (*)();
    using KNSWidgets__Dialog_MinimumSizeHint_Callback = QSize* (*)();
    using KNSWidgets__Dialog_Exec_Callback = int (*)();
    using KNSWidgets__Dialog_Done_Callback = void (*)(KNSWidgets__Dialog*, int);
    using KNSWidgets__Dialog_Accept_Callback = void (*)();
    using KNSWidgets__Dialog_Reject_Callback = void (*)();
    using KNSWidgets__Dialog_KeyPressEvent_Callback = void (*)(KNSWidgets__Dialog*, QKeyEvent*);
    using KNSWidgets__Dialog_CloseEvent_Callback = void (*)(KNSWidgets__Dialog*, QCloseEvent*);
    using KNSWidgets__Dialog_ShowEvent_Callback = void (*)(KNSWidgets__Dialog*, QShowEvent*);
    using KNSWidgets__Dialog_ResizeEvent_Callback = void (*)(KNSWidgets__Dialog*, QResizeEvent*);
    using KNSWidgets__Dialog_ContextMenuEvent_Callback = void (*)(KNSWidgets__Dialog*, QContextMenuEvent*);
    using KNSWidgets__Dialog_EventFilter_Callback = bool (*)(KNSWidgets__Dialog*, QObject*, QEvent*);
    using KNSWidgets__Dialog_DevType_Callback = int (*)();
    using KNSWidgets__Dialog_HeightForWidth_Callback = int (*)(const KNSWidgets__Dialog*, int);
    using KNSWidgets__Dialog_HasHeightForWidth_Callback = bool (*)();
    using KNSWidgets__Dialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KNSWidgets__Dialog_Event_Callback = bool (*)(KNSWidgets__Dialog*, QEvent*);
    using KNSWidgets__Dialog_MousePressEvent_Callback = void (*)(KNSWidgets__Dialog*, QMouseEvent*);
    using KNSWidgets__Dialog_MouseReleaseEvent_Callback = void (*)(KNSWidgets__Dialog*, QMouseEvent*);
    using KNSWidgets__Dialog_MouseDoubleClickEvent_Callback = void (*)(KNSWidgets__Dialog*, QMouseEvent*);
    using KNSWidgets__Dialog_MouseMoveEvent_Callback = void (*)(KNSWidgets__Dialog*, QMouseEvent*);
    using KNSWidgets__Dialog_WheelEvent_Callback = void (*)(KNSWidgets__Dialog*, QWheelEvent*);
    using KNSWidgets__Dialog_KeyReleaseEvent_Callback = void (*)(KNSWidgets__Dialog*, QKeyEvent*);
    using KNSWidgets__Dialog_FocusInEvent_Callback = void (*)(KNSWidgets__Dialog*, QFocusEvent*);
    using KNSWidgets__Dialog_FocusOutEvent_Callback = void (*)(KNSWidgets__Dialog*, QFocusEvent*);
    using KNSWidgets__Dialog_EnterEvent_Callback = void (*)(KNSWidgets__Dialog*, QEnterEvent*);
    using KNSWidgets__Dialog_LeaveEvent_Callback = void (*)(KNSWidgets__Dialog*, QEvent*);
    using KNSWidgets__Dialog_PaintEvent_Callback = void (*)(KNSWidgets__Dialog*, QPaintEvent*);
    using KNSWidgets__Dialog_MoveEvent_Callback = void (*)(KNSWidgets__Dialog*, QMoveEvent*);
    using KNSWidgets__Dialog_TabletEvent_Callback = void (*)(KNSWidgets__Dialog*, QTabletEvent*);
    using KNSWidgets__Dialog_ActionEvent_Callback = void (*)(KNSWidgets__Dialog*, QActionEvent*);
    using KNSWidgets__Dialog_DragEnterEvent_Callback = void (*)(KNSWidgets__Dialog*, QDragEnterEvent*);
    using KNSWidgets__Dialog_DragMoveEvent_Callback = void (*)(KNSWidgets__Dialog*, QDragMoveEvent*);
    using KNSWidgets__Dialog_DragLeaveEvent_Callback = void (*)(KNSWidgets__Dialog*, QDragLeaveEvent*);
    using KNSWidgets__Dialog_DropEvent_Callback = void (*)(KNSWidgets__Dialog*, QDropEvent*);
    using KNSWidgets__Dialog_HideEvent_Callback = void (*)(KNSWidgets__Dialog*, QHideEvent*);
    using KNSWidgets__Dialog_NativeEvent_Callback = bool (*)(KNSWidgets__Dialog*, libqt_string, void*, intptr_t*);
    using KNSWidgets__Dialog_ChangeEvent_Callback = void (*)(KNSWidgets__Dialog*, QEvent*);
    using KNSWidgets__Dialog_Metric_Callback = int (*)(const KNSWidgets__Dialog*, int);
    using KNSWidgets__Dialog_InitPainter_Callback = void (*)(const KNSWidgets__Dialog*, QPainter*);
    using KNSWidgets__Dialog_Redirected_Callback = QPaintDevice* (*)(const KNSWidgets__Dialog*, QPoint*);
    using KNSWidgets__Dialog_SharedPainter_Callback = QPainter* (*)();
    using KNSWidgets__Dialog_InputMethodEvent_Callback = void (*)(KNSWidgets__Dialog*, QInputMethodEvent*);
    using KNSWidgets__Dialog_InputMethodQuery_Callback = QVariant* (*)(const KNSWidgets__Dialog*, int);
    using KNSWidgets__Dialog_FocusNextPrevChild_Callback = bool (*)(KNSWidgets__Dialog*, bool);
    using KNSWidgets__Dialog_TimerEvent_Callback = void (*)(KNSWidgets__Dialog*, QTimerEvent*);
    using KNSWidgets__Dialog_ChildEvent_Callback = void (*)(KNSWidgets__Dialog*, QChildEvent*);
    using KNSWidgets__Dialog_CustomEvent_Callback = void (*)(KNSWidgets__Dialog*, QEvent*);
    using KNSWidgets__Dialog_ConnectNotify_Callback = void (*)(KNSWidgets__Dialog*, QMetaMethod*);
    using KNSWidgets__Dialog_DisconnectNotify_Callback = void (*)(KNSWidgets__Dialog*, QMetaMethod*);
    using KNSWidgets__Dialog_AdjustPosition_Callback = void (*)(KNSWidgets__Dialog*, QWidget*);
    using KNSWidgets__Dialog_UpdateMicroFocus_Callback = void (*)();
    using KNSWidgets__Dialog_Create_Callback = void (*)();
    using KNSWidgets__Dialog_Destroy_Callback = void (*)();
    using KNSWidgets__Dialog_FocusNextChild_Callback = bool (*)();
    using KNSWidgets__Dialog_FocusPreviousChild_Callback = bool (*)();
    using KNSWidgets__Dialog_Sender_Callback = QObject* (*)();
    using KNSWidgets__Dialog_SenderSignalIndex_Callback = int (*)();
    using KNSWidgets__Dialog_Receivers_Callback = int (*)(const KNSWidgets__Dialog*, const char*);
    using KNSWidgets__Dialog_IsSignalConnected_Callback = bool (*)(const KNSWidgets__Dialog*, QMetaMethod*);
    using KNSWidgets__Dialog_GetDecodedMetricF_Callback = double (*)(const KNSWidgets__Dialog*, int, int);

  protected:
    // Instance callback storage
    KNSWidgets__Dialog_MetaObject_Callback knswidgets__dialog_metaobject_callback = nullptr;
    KNSWidgets__Dialog_Metacast_Callback knswidgets__dialog_metacast_callback = nullptr;
    KNSWidgets__Dialog_Metacall_Callback knswidgets__dialog_metacall_callback = nullptr;
    KNSWidgets__Dialog_Open_Callback knswidgets__dialog_open_callback = nullptr;
    KNSWidgets__Dialog_SetVisible_Callback knswidgets__dialog_setvisible_callback = nullptr;
    KNSWidgets__Dialog_SizeHint_Callback knswidgets__dialog_sizehint_callback = nullptr;
    KNSWidgets__Dialog_MinimumSizeHint_Callback knswidgets__dialog_minimumsizehint_callback = nullptr;
    KNSWidgets__Dialog_Exec_Callback knswidgets__dialog_exec_callback = nullptr;
    KNSWidgets__Dialog_Done_Callback knswidgets__dialog_done_callback = nullptr;
    KNSWidgets__Dialog_Accept_Callback knswidgets__dialog_accept_callback = nullptr;
    KNSWidgets__Dialog_Reject_Callback knswidgets__dialog_reject_callback = nullptr;
    KNSWidgets__Dialog_KeyPressEvent_Callback knswidgets__dialog_keypressevent_callback = nullptr;
    KNSWidgets__Dialog_CloseEvent_Callback knswidgets__dialog_closeevent_callback = nullptr;
    KNSWidgets__Dialog_ShowEvent_Callback knswidgets__dialog_showevent_callback = nullptr;
    KNSWidgets__Dialog_ResizeEvent_Callback knswidgets__dialog_resizeevent_callback = nullptr;
    KNSWidgets__Dialog_ContextMenuEvent_Callback knswidgets__dialog_contextmenuevent_callback = nullptr;
    KNSWidgets__Dialog_EventFilter_Callback knswidgets__dialog_eventfilter_callback = nullptr;
    KNSWidgets__Dialog_DevType_Callback knswidgets__dialog_devtype_callback = nullptr;
    KNSWidgets__Dialog_HeightForWidth_Callback knswidgets__dialog_heightforwidth_callback = nullptr;
    KNSWidgets__Dialog_HasHeightForWidth_Callback knswidgets__dialog_hasheightforwidth_callback = nullptr;
    KNSWidgets__Dialog_PaintEngine_Callback knswidgets__dialog_paintengine_callback = nullptr;
    KNSWidgets__Dialog_Event_Callback knswidgets__dialog_event_callback = nullptr;
    KNSWidgets__Dialog_MousePressEvent_Callback knswidgets__dialog_mousepressevent_callback = nullptr;
    KNSWidgets__Dialog_MouseReleaseEvent_Callback knswidgets__dialog_mousereleaseevent_callback = nullptr;
    KNSWidgets__Dialog_MouseDoubleClickEvent_Callback knswidgets__dialog_mousedoubleclickevent_callback = nullptr;
    KNSWidgets__Dialog_MouseMoveEvent_Callback knswidgets__dialog_mousemoveevent_callback = nullptr;
    KNSWidgets__Dialog_WheelEvent_Callback knswidgets__dialog_wheelevent_callback = nullptr;
    KNSWidgets__Dialog_KeyReleaseEvent_Callback knswidgets__dialog_keyreleaseevent_callback = nullptr;
    KNSWidgets__Dialog_FocusInEvent_Callback knswidgets__dialog_focusinevent_callback = nullptr;
    KNSWidgets__Dialog_FocusOutEvent_Callback knswidgets__dialog_focusoutevent_callback = nullptr;
    KNSWidgets__Dialog_EnterEvent_Callback knswidgets__dialog_enterevent_callback = nullptr;
    KNSWidgets__Dialog_LeaveEvent_Callback knswidgets__dialog_leaveevent_callback = nullptr;
    KNSWidgets__Dialog_PaintEvent_Callback knswidgets__dialog_paintevent_callback = nullptr;
    KNSWidgets__Dialog_MoveEvent_Callback knswidgets__dialog_moveevent_callback = nullptr;
    KNSWidgets__Dialog_TabletEvent_Callback knswidgets__dialog_tabletevent_callback = nullptr;
    KNSWidgets__Dialog_ActionEvent_Callback knswidgets__dialog_actionevent_callback = nullptr;
    KNSWidgets__Dialog_DragEnterEvent_Callback knswidgets__dialog_dragenterevent_callback = nullptr;
    KNSWidgets__Dialog_DragMoveEvent_Callback knswidgets__dialog_dragmoveevent_callback = nullptr;
    KNSWidgets__Dialog_DragLeaveEvent_Callback knswidgets__dialog_dragleaveevent_callback = nullptr;
    KNSWidgets__Dialog_DropEvent_Callback knswidgets__dialog_dropevent_callback = nullptr;
    KNSWidgets__Dialog_HideEvent_Callback knswidgets__dialog_hideevent_callback = nullptr;
    KNSWidgets__Dialog_NativeEvent_Callback knswidgets__dialog_nativeevent_callback = nullptr;
    KNSWidgets__Dialog_ChangeEvent_Callback knswidgets__dialog_changeevent_callback = nullptr;
    KNSWidgets__Dialog_Metric_Callback knswidgets__dialog_metric_callback = nullptr;
    KNSWidgets__Dialog_InitPainter_Callback knswidgets__dialog_initpainter_callback = nullptr;
    KNSWidgets__Dialog_Redirected_Callback knswidgets__dialog_redirected_callback = nullptr;
    KNSWidgets__Dialog_SharedPainter_Callback knswidgets__dialog_sharedpainter_callback = nullptr;
    KNSWidgets__Dialog_InputMethodEvent_Callback knswidgets__dialog_inputmethodevent_callback = nullptr;
    KNSWidgets__Dialog_InputMethodQuery_Callback knswidgets__dialog_inputmethodquery_callback = nullptr;
    KNSWidgets__Dialog_FocusNextPrevChild_Callback knswidgets__dialog_focusnextprevchild_callback = nullptr;
    KNSWidgets__Dialog_TimerEvent_Callback knswidgets__dialog_timerevent_callback = nullptr;
    KNSWidgets__Dialog_ChildEvent_Callback knswidgets__dialog_childevent_callback = nullptr;
    KNSWidgets__Dialog_CustomEvent_Callback knswidgets__dialog_customevent_callback = nullptr;
    KNSWidgets__Dialog_ConnectNotify_Callback knswidgets__dialog_connectnotify_callback = nullptr;
    KNSWidgets__Dialog_DisconnectNotify_Callback knswidgets__dialog_disconnectnotify_callback = nullptr;
    KNSWidgets__Dialog_AdjustPosition_Callback knswidgets__dialog_adjustposition_callback = nullptr;
    KNSWidgets__Dialog_UpdateMicroFocus_Callback knswidgets__dialog_updatemicrofocus_callback = nullptr;
    KNSWidgets__Dialog_Create_Callback knswidgets__dialog_create_callback = nullptr;
    KNSWidgets__Dialog_Destroy_Callback knswidgets__dialog_destroy_callback = nullptr;
    KNSWidgets__Dialog_FocusNextChild_Callback knswidgets__dialog_focusnextchild_callback = nullptr;
    KNSWidgets__Dialog_FocusPreviousChild_Callback knswidgets__dialog_focuspreviouschild_callback = nullptr;
    KNSWidgets__Dialog_Sender_Callback knswidgets__dialog_sender_callback = nullptr;
    KNSWidgets__Dialog_SenderSignalIndex_Callback knswidgets__dialog_sendersignalindex_callback = nullptr;
    KNSWidgets__Dialog_Receivers_Callback knswidgets__dialog_receivers_callback = nullptr;
    KNSWidgets__Dialog_IsSignalConnected_Callback knswidgets__dialog_issignalconnected_callback = nullptr;
    KNSWidgets__Dialog_GetDecodedMetricF_Callback knswidgets__dialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool knswidgets__dialog_metaobject_isbase = false;
    mutable bool knswidgets__dialog_metacast_isbase = false;
    mutable bool knswidgets__dialog_metacall_isbase = false;
    mutable bool knswidgets__dialog_open_isbase = false;
    mutable bool knswidgets__dialog_setvisible_isbase = false;
    mutable bool knswidgets__dialog_sizehint_isbase = false;
    mutable bool knswidgets__dialog_minimumsizehint_isbase = false;
    mutable bool knswidgets__dialog_exec_isbase = false;
    mutable bool knswidgets__dialog_done_isbase = false;
    mutable bool knswidgets__dialog_accept_isbase = false;
    mutable bool knswidgets__dialog_reject_isbase = false;
    mutable bool knswidgets__dialog_keypressevent_isbase = false;
    mutable bool knswidgets__dialog_closeevent_isbase = false;
    mutable bool knswidgets__dialog_showevent_isbase = false;
    mutable bool knswidgets__dialog_resizeevent_isbase = false;
    mutable bool knswidgets__dialog_contextmenuevent_isbase = false;
    mutable bool knswidgets__dialog_eventfilter_isbase = false;
    mutable bool knswidgets__dialog_devtype_isbase = false;
    mutable bool knswidgets__dialog_heightforwidth_isbase = false;
    mutable bool knswidgets__dialog_hasheightforwidth_isbase = false;
    mutable bool knswidgets__dialog_paintengine_isbase = false;
    mutable bool knswidgets__dialog_event_isbase = false;
    mutable bool knswidgets__dialog_mousepressevent_isbase = false;
    mutable bool knswidgets__dialog_mousereleaseevent_isbase = false;
    mutable bool knswidgets__dialog_mousedoubleclickevent_isbase = false;
    mutable bool knswidgets__dialog_mousemoveevent_isbase = false;
    mutable bool knswidgets__dialog_wheelevent_isbase = false;
    mutable bool knswidgets__dialog_keyreleaseevent_isbase = false;
    mutable bool knswidgets__dialog_focusinevent_isbase = false;
    mutable bool knswidgets__dialog_focusoutevent_isbase = false;
    mutable bool knswidgets__dialog_enterevent_isbase = false;
    mutable bool knswidgets__dialog_leaveevent_isbase = false;
    mutable bool knswidgets__dialog_paintevent_isbase = false;
    mutable bool knswidgets__dialog_moveevent_isbase = false;
    mutable bool knswidgets__dialog_tabletevent_isbase = false;
    mutable bool knswidgets__dialog_actionevent_isbase = false;
    mutable bool knswidgets__dialog_dragenterevent_isbase = false;
    mutable bool knswidgets__dialog_dragmoveevent_isbase = false;
    mutable bool knswidgets__dialog_dragleaveevent_isbase = false;
    mutable bool knswidgets__dialog_dropevent_isbase = false;
    mutable bool knswidgets__dialog_hideevent_isbase = false;
    mutable bool knswidgets__dialog_nativeevent_isbase = false;
    mutable bool knswidgets__dialog_changeevent_isbase = false;
    mutable bool knswidgets__dialog_metric_isbase = false;
    mutable bool knswidgets__dialog_initpainter_isbase = false;
    mutable bool knswidgets__dialog_redirected_isbase = false;
    mutable bool knswidgets__dialog_sharedpainter_isbase = false;
    mutable bool knswidgets__dialog_inputmethodevent_isbase = false;
    mutable bool knswidgets__dialog_inputmethodquery_isbase = false;
    mutable bool knswidgets__dialog_focusnextprevchild_isbase = false;
    mutable bool knswidgets__dialog_timerevent_isbase = false;
    mutable bool knswidgets__dialog_childevent_isbase = false;
    mutable bool knswidgets__dialog_customevent_isbase = false;
    mutable bool knswidgets__dialog_connectnotify_isbase = false;
    mutable bool knswidgets__dialog_disconnectnotify_isbase = false;
    mutable bool knswidgets__dialog_adjustposition_isbase = false;
    mutable bool knswidgets__dialog_updatemicrofocus_isbase = false;
    mutable bool knswidgets__dialog_create_isbase = false;
    mutable bool knswidgets__dialog_destroy_isbase = false;
    mutable bool knswidgets__dialog_focusnextchild_isbase = false;
    mutable bool knswidgets__dialog_focuspreviouschild_isbase = false;
    mutable bool knswidgets__dialog_sender_isbase = false;
    mutable bool knswidgets__dialog_sendersignalindex_isbase = false;
    mutable bool knswidgets__dialog_receivers_isbase = false;
    mutable bool knswidgets__dialog_issignalconnected_isbase = false;
    mutable bool knswidgets__dialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKNSWidgetsDialog(const QString& configFile) : KNSWidgets::Dialog(configFile) {};
    VirtualKNSWidgetsDialog(const QString& configFile, QWidget* parent) : KNSWidgets::Dialog(configFile, parent) {};

    // Callback setters
    inline void setKNSWidgets__Dialog_MetaObject_Callback(KNSWidgets__Dialog_MetaObject_Callback cb) { knswidgets__dialog_metaobject_callback = cb; }
    inline void setKNSWidgets__Dialog_Metacast_Callback(KNSWidgets__Dialog_Metacast_Callback cb) { knswidgets__dialog_metacast_callback = cb; }
    inline void setKNSWidgets__Dialog_Metacall_Callback(KNSWidgets__Dialog_Metacall_Callback cb) { knswidgets__dialog_metacall_callback = cb; }
    inline void setKNSWidgets__Dialog_Open_Callback(KNSWidgets__Dialog_Open_Callback cb) { knswidgets__dialog_open_callback = cb; }
    inline void setKNSWidgets__Dialog_SetVisible_Callback(KNSWidgets__Dialog_SetVisible_Callback cb) { knswidgets__dialog_setvisible_callback = cb; }
    inline void setKNSWidgets__Dialog_SizeHint_Callback(KNSWidgets__Dialog_SizeHint_Callback cb) { knswidgets__dialog_sizehint_callback = cb; }
    inline void setKNSWidgets__Dialog_MinimumSizeHint_Callback(KNSWidgets__Dialog_MinimumSizeHint_Callback cb) { knswidgets__dialog_minimumsizehint_callback = cb; }
    inline void setKNSWidgets__Dialog_Exec_Callback(KNSWidgets__Dialog_Exec_Callback cb) { knswidgets__dialog_exec_callback = cb; }
    inline void setKNSWidgets__Dialog_Done_Callback(KNSWidgets__Dialog_Done_Callback cb) { knswidgets__dialog_done_callback = cb; }
    inline void setKNSWidgets__Dialog_Accept_Callback(KNSWidgets__Dialog_Accept_Callback cb) { knswidgets__dialog_accept_callback = cb; }
    inline void setKNSWidgets__Dialog_Reject_Callback(KNSWidgets__Dialog_Reject_Callback cb) { knswidgets__dialog_reject_callback = cb; }
    inline void setKNSWidgets__Dialog_KeyPressEvent_Callback(KNSWidgets__Dialog_KeyPressEvent_Callback cb) { knswidgets__dialog_keypressevent_callback = cb; }
    inline void setKNSWidgets__Dialog_CloseEvent_Callback(KNSWidgets__Dialog_CloseEvent_Callback cb) { knswidgets__dialog_closeevent_callback = cb; }
    inline void setKNSWidgets__Dialog_ShowEvent_Callback(KNSWidgets__Dialog_ShowEvent_Callback cb) { knswidgets__dialog_showevent_callback = cb; }
    inline void setKNSWidgets__Dialog_ResizeEvent_Callback(KNSWidgets__Dialog_ResizeEvent_Callback cb) { knswidgets__dialog_resizeevent_callback = cb; }
    inline void setKNSWidgets__Dialog_ContextMenuEvent_Callback(KNSWidgets__Dialog_ContextMenuEvent_Callback cb) { knswidgets__dialog_contextmenuevent_callback = cb; }
    inline void setKNSWidgets__Dialog_EventFilter_Callback(KNSWidgets__Dialog_EventFilter_Callback cb) { knswidgets__dialog_eventfilter_callback = cb; }
    inline void setKNSWidgets__Dialog_DevType_Callback(KNSWidgets__Dialog_DevType_Callback cb) { knswidgets__dialog_devtype_callback = cb; }
    inline void setKNSWidgets__Dialog_HeightForWidth_Callback(KNSWidgets__Dialog_HeightForWidth_Callback cb) { knswidgets__dialog_heightforwidth_callback = cb; }
    inline void setKNSWidgets__Dialog_HasHeightForWidth_Callback(KNSWidgets__Dialog_HasHeightForWidth_Callback cb) { knswidgets__dialog_hasheightforwidth_callback = cb; }
    inline void setKNSWidgets__Dialog_PaintEngine_Callback(KNSWidgets__Dialog_PaintEngine_Callback cb) { knswidgets__dialog_paintengine_callback = cb; }
    inline void setKNSWidgets__Dialog_Event_Callback(KNSWidgets__Dialog_Event_Callback cb) { knswidgets__dialog_event_callback = cb; }
    inline void setKNSWidgets__Dialog_MousePressEvent_Callback(KNSWidgets__Dialog_MousePressEvent_Callback cb) { knswidgets__dialog_mousepressevent_callback = cb; }
    inline void setKNSWidgets__Dialog_MouseReleaseEvent_Callback(KNSWidgets__Dialog_MouseReleaseEvent_Callback cb) { knswidgets__dialog_mousereleaseevent_callback = cb; }
    inline void setKNSWidgets__Dialog_MouseDoubleClickEvent_Callback(KNSWidgets__Dialog_MouseDoubleClickEvent_Callback cb) { knswidgets__dialog_mousedoubleclickevent_callback = cb; }
    inline void setKNSWidgets__Dialog_MouseMoveEvent_Callback(KNSWidgets__Dialog_MouseMoveEvent_Callback cb) { knswidgets__dialog_mousemoveevent_callback = cb; }
    inline void setKNSWidgets__Dialog_WheelEvent_Callback(KNSWidgets__Dialog_WheelEvent_Callback cb) { knswidgets__dialog_wheelevent_callback = cb; }
    inline void setKNSWidgets__Dialog_KeyReleaseEvent_Callback(KNSWidgets__Dialog_KeyReleaseEvent_Callback cb) { knswidgets__dialog_keyreleaseevent_callback = cb; }
    inline void setKNSWidgets__Dialog_FocusInEvent_Callback(KNSWidgets__Dialog_FocusInEvent_Callback cb) { knswidgets__dialog_focusinevent_callback = cb; }
    inline void setKNSWidgets__Dialog_FocusOutEvent_Callback(KNSWidgets__Dialog_FocusOutEvent_Callback cb) { knswidgets__dialog_focusoutevent_callback = cb; }
    inline void setKNSWidgets__Dialog_EnterEvent_Callback(KNSWidgets__Dialog_EnterEvent_Callback cb) { knswidgets__dialog_enterevent_callback = cb; }
    inline void setKNSWidgets__Dialog_LeaveEvent_Callback(KNSWidgets__Dialog_LeaveEvent_Callback cb) { knswidgets__dialog_leaveevent_callback = cb; }
    inline void setKNSWidgets__Dialog_PaintEvent_Callback(KNSWidgets__Dialog_PaintEvent_Callback cb) { knswidgets__dialog_paintevent_callback = cb; }
    inline void setKNSWidgets__Dialog_MoveEvent_Callback(KNSWidgets__Dialog_MoveEvent_Callback cb) { knswidgets__dialog_moveevent_callback = cb; }
    inline void setKNSWidgets__Dialog_TabletEvent_Callback(KNSWidgets__Dialog_TabletEvent_Callback cb) { knswidgets__dialog_tabletevent_callback = cb; }
    inline void setKNSWidgets__Dialog_ActionEvent_Callback(KNSWidgets__Dialog_ActionEvent_Callback cb) { knswidgets__dialog_actionevent_callback = cb; }
    inline void setKNSWidgets__Dialog_DragEnterEvent_Callback(KNSWidgets__Dialog_DragEnterEvent_Callback cb) { knswidgets__dialog_dragenterevent_callback = cb; }
    inline void setKNSWidgets__Dialog_DragMoveEvent_Callback(KNSWidgets__Dialog_DragMoveEvent_Callback cb) { knswidgets__dialog_dragmoveevent_callback = cb; }
    inline void setKNSWidgets__Dialog_DragLeaveEvent_Callback(KNSWidgets__Dialog_DragLeaveEvent_Callback cb) { knswidgets__dialog_dragleaveevent_callback = cb; }
    inline void setKNSWidgets__Dialog_DropEvent_Callback(KNSWidgets__Dialog_DropEvent_Callback cb) { knswidgets__dialog_dropevent_callback = cb; }
    inline void setKNSWidgets__Dialog_HideEvent_Callback(KNSWidgets__Dialog_HideEvent_Callback cb) { knswidgets__dialog_hideevent_callback = cb; }
    inline void setKNSWidgets__Dialog_NativeEvent_Callback(KNSWidgets__Dialog_NativeEvent_Callback cb) { knswidgets__dialog_nativeevent_callback = cb; }
    inline void setKNSWidgets__Dialog_ChangeEvent_Callback(KNSWidgets__Dialog_ChangeEvent_Callback cb) { knswidgets__dialog_changeevent_callback = cb; }
    inline void setKNSWidgets__Dialog_Metric_Callback(KNSWidgets__Dialog_Metric_Callback cb) { knswidgets__dialog_metric_callback = cb; }
    inline void setKNSWidgets__Dialog_InitPainter_Callback(KNSWidgets__Dialog_InitPainter_Callback cb) { knswidgets__dialog_initpainter_callback = cb; }
    inline void setKNSWidgets__Dialog_Redirected_Callback(KNSWidgets__Dialog_Redirected_Callback cb) { knswidgets__dialog_redirected_callback = cb; }
    inline void setKNSWidgets__Dialog_SharedPainter_Callback(KNSWidgets__Dialog_SharedPainter_Callback cb) { knswidgets__dialog_sharedpainter_callback = cb; }
    inline void setKNSWidgets__Dialog_InputMethodEvent_Callback(KNSWidgets__Dialog_InputMethodEvent_Callback cb) { knswidgets__dialog_inputmethodevent_callback = cb; }
    inline void setKNSWidgets__Dialog_InputMethodQuery_Callback(KNSWidgets__Dialog_InputMethodQuery_Callback cb) { knswidgets__dialog_inputmethodquery_callback = cb; }
    inline void setKNSWidgets__Dialog_FocusNextPrevChild_Callback(KNSWidgets__Dialog_FocusNextPrevChild_Callback cb) { knswidgets__dialog_focusnextprevchild_callback = cb; }
    inline void setKNSWidgets__Dialog_TimerEvent_Callback(KNSWidgets__Dialog_TimerEvent_Callback cb) { knswidgets__dialog_timerevent_callback = cb; }
    inline void setKNSWidgets__Dialog_ChildEvent_Callback(KNSWidgets__Dialog_ChildEvent_Callback cb) { knswidgets__dialog_childevent_callback = cb; }
    inline void setKNSWidgets__Dialog_CustomEvent_Callback(KNSWidgets__Dialog_CustomEvent_Callback cb) { knswidgets__dialog_customevent_callback = cb; }
    inline void setKNSWidgets__Dialog_ConnectNotify_Callback(KNSWidgets__Dialog_ConnectNotify_Callback cb) { knswidgets__dialog_connectnotify_callback = cb; }
    inline void setKNSWidgets__Dialog_DisconnectNotify_Callback(KNSWidgets__Dialog_DisconnectNotify_Callback cb) { knswidgets__dialog_disconnectnotify_callback = cb; }
    inline void setKNSWidgets__Dialog_AdjustPosition_Callback(KNSWidgets__Dialog_AdjustPosition_Callback cb) { knswidgets__dialog_adjustposition_callback = cb; }
    inline void setKNSWidgets__Dialog_UpdateMicroFocus_Callback(KNSWidgets__Dialog_UpdateMicroFocus_Callback cb) { knswidgets__dialog_updatemicrofocus_callback = cb; }
    inline void setKNSWidgets__Dialog_Create_Callback(KNSWidgets__Dialog_Create_Callback cb) { knswidgets__dialog_create_callback = cb; }
    inline void setKNSWidgets__Dialog_Destroy_Callback(KNSWidgets__Dialog_Destroy_Callback cb) { knswidgets__dialog_destroy_callback = cb; }
    inline void setKNSWidgets__Dialog_FocusNextChild_Callback(KNSWidgets__Dialog_FocusNextChild_Callback cb) { knswidgets__dialog_focusnextchild_callback = cb; }
    inline void setKNSWidgets__Dialog_FocusPreviousChild_Callback(KNSWidgets__Dialog_FocusPreviousChild_Callback cb) { knswidgets__dialog_focuspreviouschild_callback = cb; }
    inline void setKNSWidgets__Dialog_Sender_Callback(KNSWidgets__Dialog_Sender_Callback cb) { knswidgets__dialog_sender_callback = cb; }
    inline void setKNSWidgets__Dialog_SenderSignalIndex_Callback(KNSWidgets__Dialog_SenderSignalIndex_Callback cb) { knswidgets__dialog_sendersignalindex_callback = cb; }
    inline void setKNSWidgets__Dialog_Receivers_Callback(KNSWidgets__Dialog_Receivers_Callback cb) { knswidgets__dialog_receivers_callback = cb; }
    inline void setKNSWidgets__Dialog_IsSignalConnected_Callback(KNSWidgets__Dialog_IsSignalConnected_Callback cb) { knswidgets__dialog_issignalconnected_callback = cb; }
    inline void setKNSWidgets__Dialog_GetDecodedMetricF_Callback(KNSWidgets__Dialog_GetDecodedMetricF_Callback cb) { knswidgets__dialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKNSWidgets__Dialog_MetaObject_IsBase(bool value) const { knswidgets__dialog_metaobject_isbase = value; }
    inline void setKNSWidgets__Dialog_Metacast_IsBase(bool value) const { knswidgets__dialog_metacast_isbase = value; }
    inline void setKNSWidgets__Dialog_Metacall_IsBase(bool value) const { knswidgets__dialog_metacall_isbase = value; }
    inline void setKNSWidgets__Dialog_Open_IsBase(bool value) const { knswidgets__dialog_open_isbase = value; }
    inline void setKNSWidgets__Dialog_SetVisible_IsBase(bool value) const { knswidgets__dialog_setvisible_isbase = value; }
    inline void setKNSWidgets__Dialog_SizeHint_IsBase(bool value) const { knswidgets__dialog_sizehint_isbase = value; }
    inline void setKNSWidgets__Dialog_MinimumSizeHint_IsBase(bool value) const { knswidgets__dialog_minimumsizehint_isbase = value; }
    inline void setKNSWidgets__Dialog_Exec_IsBase(bool value) const { knswidgets__dialog_exec_isbase = value; }
    inline void setKNSWidgets__Dialog_Done_IsBase(bool value) const { knswidgets__dialog_done_isbase = value; }
    inline void setKNSWidgets__Dialog_Accept_IsBase(bool value) const { knswidgets__dialog_accept_isbase = value; }
    inline void setKNSWidgets__Dialog_Reject_IsBase(bool value) const { knswidgets__dialog_reject_isbase = value; }
    inline void setKNSWidgets__Dialog_KeyPressEvent_IsBase(bool value) const { knswidgets__dialog_keypressevent_isbase = value; }
    inline void setKNSWidgets__Dialog_CloseEvent_IsBase(bool value) const { knswidgets__dialog_closeevent_isbase = value; }
    inline void setKNSWidgets__Dialog_ShowEvent_IsBase(bool value) const { knswidgets__dialog_showevent_isbase = value; }
    inline void setKNSWidgets__Dialog_ResizeEvent_IsBase(bool value) const { knswidgets__dialog_resizeevent_isbase = value; }
    inline void setKNSWidgets__Dialog_ContextMenuEvent_IsBase(bool value) const { knswidgets__dialog_contextmenuevent_isbase = value; }
    inline void setKNSWidgets__Dialog_EventFilter_IsBase(bool value) const { knswidgets__dialog_eventfilter_isbase = value; }
    inline void setKNSWidgets__Dialog_DevType_IsBase(bool value) const { knswidgets__dialog_devtype_isbase = value; }
    inline void setKNSWidgets__Dialog_HeightForWidth_IsBase(bool value) const { knswidgets__dialog_heightforwidth_isbase = value; }
    inline void setKNSWidgets__Dialog_HasHeightForWidth_IsBase(bool value) const { knswidgets__dialog_hasheightforwidth_isbase = value; }
    inline void setKNSWidgets__Dialog_PaintEngine_IsBase(bool value) const { knswidgets__dialog_paintengine_isbase = value; }
    inline void setKNSWidgets__Dialog_Event_IsBase(bool value) const { knswidgets__dialog_event_isbase = value; }
    inline void setKNSWidgets__Dialog_MousePressEvent_IsBase(bool value) const { knswidgets__dialog_mousepressevent_isbase = value; }
    inline void setKNSWidgets__Dialog_MouseReleaseEvent_IsBase(bool value) const { knswidgets__dialog_mousereleaseevent_isbase = value; }
    inline void setKNSWidgets__Dialog_MouseDoubleClickEvent_IsBase(bool value) const { knswidgets__dialog_mousedoubleclickevent_isbase = value; }
    inline void setKNSWidgets__Dialog_MouseMoveEvent_IsBase(bool value) const { knswidgets__dialog_mousemoveevent_isbase = value; }
    inline void setKNSWidgets__Dialog_WheelEvent_IsBase(bool value) const { knswidgets__dialog_wheelevent_isbase = value; }
    inline void setKNSWidgets__Dialog_KeyReleaseEvent_IsBase(bool value) const { knswidgets__dialog_keyreleaseevent_isbase = value; }
    inline void setKNSWidgets__Dialog_FocusInEvent_IsBase(bool value) const { knswidgets__dialog_focusinevent_isbase = value; }
    inline void setKNSWidgets__Dialog_FocusOutEvent_IsBase(bool value) const { knswidgets__dialog_focusoutevent_isbase = value; }
    inline void setKNSWidgets__Dialog_EnterEvent_IsBase(bool value) const { knswidgets__dialog_enterevent_isbase = value; }
    inline void setKNSWidgets__Dialog_LeaveEvent_IsBase(bool value) const { knswidgets__dialog_leaveevent_isbase = value; }
    inline void setKNSWidgets__Dialog_PaintEvent_IsBase(bool value) const { knswidgets__dialog_paintevent_isbase = value; }
    inline void setKNSWidgets__Dialog_MoveEvent_IsBase(bool value) const { knswidgets__dialog_moveevent_isbase = value; }
    inline void setKNSWidgets__Dialog_TabletEvent_IsBase(bool value) const { knswidgets__dialog_tabletevent_isbase = value; }
    inline void setKNSWidgets__Dialog_ActionEvent_IsBase(bool value) const { knswidgets__dialog_actionevent_isbase = value; }
    inline void setKNSWidgets__Dialog_DragEnterEvent_IsBase(bool value) const { knswidgets__dialog_dragenterevent_isbase = value; }
    inline void setKNSWidgets__Dialog_DragMoveEvent_IsBase(bool value) const { knswidgets__dialog_dragmoveevent_isbase = value; }
    inline void setKNSWidgets__Dialog_DragLeaveEvent_IsBase(bool value) const { knswidgets__dialog_dragleaveevent_isbase = value; }
    inline void setKNSWidgets__Dialog_DropEvent_IsBase(bool value) const { knswidgets__dialog_dropevent_isbase = value; }
    inline void setKNSWidgets__Dialog_HideEvent_IsBase(bool value) const { knswidgets__dialog_hideevent_isbase = value; }
    inline void setKNSWidgets__Dialog_NativeEvent_IsBase(bool value) const { knswidgets__dialog_nativeevent_isbase = value; }
    inline void setKNSWidgets__Dialog_ChangeEvent_IsBase(bool value) const { knswidgets__dialog_changeevent_isbase = value; }
    inline void setKNSWidgets__Dialog_Metric_IsBase(bool value) const { knswidgets__dialog_metric_isbase = value; }
    inline void setKNSWidgets__Dialog_InitPainter_IsBase(bool value) const { knswidgets__dialog_initpainter_isbase = value; }
    inline void setKNSWidgets__Dialog_Redirected_IsBase(bool value) const { knswidgets__dialog_redirected_isbase = value; }
    inline void setKNSWidgets__Dialog_SharedPainter_IsBase(bool value) const { knswidgets__dialog_sharedpainter_isbase = value; }
    inline void setKNSWidgets__Dialog_InputMethodEvent_IsBase(bool value) const { knswidgets__dialog_inputmethodevent_isbase = value; }
    inline void setKNSWidgets__Dialog_InputMethodQuery_IsBase(bool value) const { knswidgets__dialog_inputmethodquery_isbase = value; }
    inline void setKNSWidgets__Dialog_FocusNextPrevChild_IsBase(bool value) const { knswidgets__dialog_focusnextprevchild_isbase = value; }
    inline void setKNSWidgets__Dialog_TimerEvent_IsBase(bool value) const { knswidgets__dialog_timerevent_isbase = value; }
    inline void setKNSWidgets__Dialog_ChildEvent_IsBase(bool value) const { knswidgets__dialog_childevent_isbase = value; }
    inline void setKNSWidgets__Dialog_CustomEvent_IsBase(bool value) const { knswidgets__dialog_customevent_isbase = value; }
    inline void setKNSWidgets__Dialog_ConnectNotify_IsBase(bool value) const { knswidgets__dialog_connectnotify_isbase = value; }
    inline void setKNSWidgets__Dialog_DisconnectNotify_IsBase(bool value) const { knswidgets__dialog_disconnectnotify_isbase = value; }
    inline void setKNSWidgets__Dialog_AdjustPosition_IsBase(bool value) const { knswidgets__dialog_adjustposition_isbase = value; }
    inline void setKNSWidgets__Dialog_UpdateMicroFocus_IsBase(bool value) const { knswidgets__dialog_updatemicrofocus_isbase = value; }
    inline void setKNSWidgets__Dialog_Create_IsBase(bool value) const { knswidgets__dialog_create_isbase = value; }
    inline void setKNSWidgets__Dialog_Destroy_IsBase(bool value) const { knswidgets__dialog_destroy_isbase = value; }
    inline void setKNSWidgets__Dialog_FocusNextChild_IsBase(bool value) const { knswidgets__dialog_focusnextchild_isbase = value; }
    inline void setKNSWidgets__Dialog_FocusPreviousChild_IsBase(bool value) const { knswidgets__dialog_focuspreviouschild_isbase = value; }
    inline void setKNSWidgets__Dialog_Sender_IsBase(bool value) const { knswidgets__dialog_sender_isbase = value; }
    inline void setKNSWidgets__Dialog_SenderSignalIndex_IsBase(bool value) const { knswidgets__dialog_sendersignalindex_isbase = value; }
    inline void setKNSWidgets__Dialog_Receivers_IsBase(bool value) const { knswidgets__dialog_receivers_isbase = value; }
    inline void setKNSWidgets__Dialog_IsSignalConnected_IsBase(bool value) const { knswidgets__dialog_issignalconnected_isbase = value; }
    inline void setKNSWidgets__Dialog_GetDecodedMetricF_IsBase(bool value) const { knswidgets__dialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knswidgets__dialog_metaobject_isbase) {
            knswidgets__dialog_metaobject_isbase = false;
            return KNSWidgets__Dialog::metaObject();
        }
        auto metaobject_cb = knswidgets__dialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KNSWidgets__Dialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knswidgets__dialog_metacast_isbase) {
            knswidgets__dialog_metacast_isbase = false;
            return KNSWidgets__Dialog::qt_metacast(param1);
        }
        auto metacast_cb = knswidgets__dialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KNSWidgets__Dialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knswidgets__dialog_metacall_isbase) {
            knswidgets__dialog_metacall_isbase = false;
            return KNSWidgets__Dialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = knswidgets__dialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNSWidgets__Dialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (knswidgets__dialog_open_isbase) {
            knswidgets__dialog_open_isbase = false;
            KNSWidgets__Dialog::open();
            return;
        }
        auto open_cb = knswidgets__dialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        KNSWidgets__Dialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (knswidgets__dialog_setvisible_isbase) {
            knswidgets__dialog_setvisible_isbase = false;
            KNSWidgets__Dialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = knswidgets__dialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (knswidgets__dialog_sizehint_isbase) {
            knswidgets__dialog_sizehint_isbase = false;
            return KNSWidgets__Dialog::sizeHint();
        }
        auto sizehint_cb = knswidgets__dialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KNSWidgets__Dialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (knswidgets__dialog_minimumsizehint_isbase) {
            knswidgets__dialog_minimumsizehint_isbase = false;
            return KNSWidgets__Dialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = knswidgets__dialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KNSWidgets__Dialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (knswidgets__dialog_exec_isbase) {
            knswidgets__dialog_exec_isbase = false;
            return KNSWidgets__Dialog::exec();
        }
        auto exec_cb = knswidgets__dialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return KNSWidgets__Dialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (knswidgets__dialog_done_isbase) {
            knswidgets__dialog_done_isbase = false;
            KNSWidgets__Dialog::done(param1);
            return;
        }
        auto done_cb = knswidgets__dialog_done_callback;
        if (done_cb) {
            int cbval1 = param1;

            done_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (knswidgets__dialog_accept_isbase) {
            knswidgets__dialog_accept_isbase = false;
            KNSWidgets__Dialog::accept();
            return;
        }
        auto accept_cb = knswidgets__dialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        KNSWidgets__Dialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (knswidgets__dialog_reject_isbase) {
            knswidgets__dialog_reject_isbase = false;
            KNSWidgets__Dialog::reject();
            return;
        }
        auto reject_cb = knswidgets__dialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        KNSWidgets__Dialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (knswidgets__dialog_keypressevent_isbase) {
            knswidgets__dialog_keypressevent_isbase = false;
            KNSWidgets__Dialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = knswidgets__dialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (knswidgets__dialog_closeevent_isbase) {
            knswidgets__dialog_closeevent_isbase = false;
            KNSWidgets__Dialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = knswidgets__dialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (knswidgets__dialog_showevent_isbase) {
            knswidgets__dialog_showevent_isbase = false;
            KNSWidgets__Dialog::showEvent(param1);
            return;
        }
        auto showevent_cb = knswidgets__dialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (knswidgets__dialog_resizeevent_isbase) {
            knswidgets__dialog_resizeevent_isbase = false;
            KNSWidgets__Dialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = knswidgets__dialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (knswidgets__dialog_contextmenuevent_isbase) {
            knswidgets__dialog_contextmenuevent_isbase = false;
            KNSWidgets__Dialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = knswidgets__dialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (knswidgets__dialog_eventfilter_isbase) {
            knswidgets__dialog_eventfilter_isbase = false;
            return KNSWidgets__Dialog::eventFilter(param1, param2);
        }
        auto eventfilter_cb = knswidgets__dialog_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNSWidgets__Dialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (knswidgets__dialog_devtype_isbase) {
            knswidgets__dialog_devtype_isbase = false;
            return KNSWidgets__Dialog::devType();
        }
        auto devtype_cb = knswidgets__dialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KNSWidgets__Dialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (knswidgets__dialog_heightforwidth_isbase) {
            knswidgets__dialog_heightforwidth_isbase = false;
            return KNSWidgets__Dialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = knswidgets__dialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNSWidgets__Dialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (knswidgets__dialog_hasheightforwidth_isbase) {
            knswidgets__dialog_hasheightforwidth_isbase = false;
            return KNSWidgets__Dialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = knswidgets__dialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KNSWidgets__Dialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (knswidgets__dialog_paintengine_isbase) {
            knswidgets__dialog_paintengine_isbase = false;
            return KNSWidgets__Dialog::paintEngine();
        }
        auto paintengine_cb = knswidgets__dialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KNSWidgets__Dialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knswidgets__dialog_event_isbase) {
            knswidgets__dialog_event_isbase = false;
            return KNSWidgets__Dialog::event(event);
        }
        auto event_cb = knswidgets__dialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KNSWidgets__Dialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (knswidgets__dialog_mousepressevent_isbase) {
            knswidgets__dialog_mousepressevent_isbase = false;
            KNSWidgets__Dialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = knswidgets__dialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (knswidgets__dialog_mousereleaseevent_isbase) {
            knswidgets__dialog_mousereleaseevent_isbase = false;
            KNSWidgets__Dialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = knswidgets__dialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (knswidgets__dialog_mousedoubleclickevent_isbase) {
            knswidgets__dialog_mousedoubleclickevent_isbase = false;
            KNSWidgets__Dialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = knswidgets__dialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (knswidgets__dialog_mousemoveevent_isbase) {
            knswidgets__dialog_mousemoveevent_isbase = false;
            KNSWidgets__Dialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = knswidgets__dialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (knswidgets__dialog_wheelevent_isbase) {
            knswidgets__dialog_wheelevent_isbase = false;
            KNSWidgets__Dialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = knswidgets__dialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (knswidgets__dialog_keyreleaseevent_isbase) {
            knswidgets__dialog_keyreleaseevent_isbase = false;
            KNSWidgets__Dialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = knswidgets__dialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (knswidgets__dialog_focusinevent_isbase) {
            knswidgets__dialog_focusinevent_isbase = false;
            KNSWidgets__Dialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = knswidgets__dialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (knswidgets__dialog_focusoutevent_isbase) {
            knswidgets__dialog_focusoutevent_isbase = false;
            KNSWidgets__Dialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = knswidgets__dialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (knswidgets__dialog_enterevent_isbase) {
            knswidgets__dialog_enterevent_isbase = false;
            KNSWidgets__Dialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = knswidgets__dialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (knswidgets__dialog_leaveevent_isbase) {
            knswidgets__dialog_leaveevent_isbase = false;
            KNSWidgets__Dialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = knswidgets__dialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (knswidgets__dialog_paintevent_isbase) {
            knswidgets__dialog_paintevent_isbase = false;
            KNSWidgets__Dialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = knswidgets__dialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (knswidgets__dialog_moveevent_isbase) {
            knswidgets__dialog_moveevent_isbase = false;
            KNSWidgets__Dialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = knswidgets__dialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (knswidgets__dialog_tabletevent_isbase) {
            knswidgets__dialog_tabletevent_isbase = false;
            KNSWidgets__Dialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = knswidgets__dialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (knswidgets__dialog_actionevent_isbase) {
            knswidgets__dialog_actionevent_isbase = false;
            KNSWidgets__Dialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = knswidgets__dialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (knswidgets__dialog_dragenterevent_isbase) {
            knswidgets__dialog_dragenterevent_isbase = false;
            KNSWidgets__Dialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = knswidgets__dialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (knswidgets__dialog_dragmoveevent_isbase) {
            knswidgets__dialog_dragmoveevent_isbase = false;
            KNSWidgets__Dialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = knswidgets__dialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (knswidgets__dialog_dragleaveevent_isbase) {
            knswidgets__dialog_dragleaveevent_isbase = false;
            KNSWidgets__Dialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = knswidgets__dialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (knswidgets__dialog_dropevent_isbase) {
            knswidgets__dialog_dropevent_isbase = false;
            KNSWidgets__Dialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = knswidgets__dialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (knswidgets__dialog_hideevent_isbase) {
            knswidgets__dialog_hideevent_isbase = false;
            KNSWidgets__Dialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = knswidgets__dialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (knswidgets__dialog_nativeevent_isbase) {
            knswidgets__dialog_nativeevent_isbase = false;
            return KNSWidgets__Dialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = knswidgets__dialog_nativeevent_callback;
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
        return KNSWidgets__Dialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (knswidgets__dialog_changeevent_isbase) {
            knswidgets__dialog_changeevent_isbase = false;
            KNSWidgets__Dialog::changeEvent(param1);
            return;
        }
        auto changeevent_cb = knswidgets__dialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (knswidgets__dialog_metric_isbase) {
            knswidgets__dialog_metric_isbase = false;
            return KNSWidgets__Dialog::metric(param1);
        }
        auto metric_cb = knswidgets__dialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNSWidgets__Dialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (knswidgets__dialog_initpainter_isbase) {
            knswidgets__dialog_initpainter_isbase = false;
            KNSWidgets__Dialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = knswidgets__dialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (knswidgets__dialog_redirected_isbase) {
            knswidgets__dialog_redirected_isbase = false;
            return KNSWidgets__Dialog::redirected(offset);
        }
        auto redirected_cb = knswidgets__dialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KNSWidgets__Dialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (knswidgets__dialog_sharedpainter_isbase) {
            knswidgets__dialog_sharedpainter_isbase = false;
            return KNSWidgets__Dialog::sharedPainter();
        }
        auto sharedpainter_cb = knswidgets__dialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KNSWidgets__Dialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (knswidgets__dialog_inputmethodevent_isbase) {
            knswidgets__dialog_inputmethodevent_isbase = false;
            KNSWidgets__Dialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = knswidgets__dialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (knswidgets__dialog_inputmethodquery_isbase) {
            knswidgets__dialog_inputmethodquery_isbase = false;
            return KNSWidgets__Dialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = knswidgets__dialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KNSWidgets__Dialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (knswidgets__dialog_focusnextprevchild_isbase) {
            knswidgets__dialog_focusnextprevchild_isbase = false;
            return KNSWidgets__Dialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = knswidgets__dialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KNSWidgets__Dialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knswidgets__dialog_timerevent_isbase) {
            knswidgets__dialog_timerevent_isbase = false;
            KNSWidgets__Dialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = knswidgets__dialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knswidgets__dialog_childevent_isbase) {
            knswidgets__dialog_childevent_isbase = false;
            KNSWidgets__Dialog::childEvent(event);
            return;
        }
        auto childevent_cb = knswidgets__dialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knswidgets__dialog_customevent_isbase) {
            knswidgets__dialog_customevent_isbase = false;
            KNSWidgets__Dialog::customEvent(event);
            return;
        }
        auto customevent_cb = knswidgets__dialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knswidgets__dialog_connectnotify_isbase) {
            knswidgets__dialog_connectnotify_isbase = false;
            KNSWidgets__Dialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = knswidgets__dialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knswidgets__dialog_disconnectnotify_isbase) {
            knswidgets__dialog_disconnectnotify_isbase = false;
            KNSWidgets__Dialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = knswidgets__dialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (knswidgets__dialog_adjustposition_isbase) {
            knswidgets__dialog_adjustposition_isbase = false;
            KNSWidgets__Dialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = knswidgets__dialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        KNSWidgets__Dialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (knswidgets__dialog_updatemicrofocus_isbase) {
            knswidgets__dialog_updatemicrofocus_isbase = false;
            KNSWidgets__Dialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = knswidgets__dialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KNSWidgets__Dialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (knswidgets__dialog_create_isbase) {
            knswidgets__dialog_create_isbase = false;
            KNSWidgets__Dialog::create();
            return;
        }
        auto create_cb = knswidgets__dialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KNSWidgets__Dialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (knswidgets__dialog_destroy_isbase) {
            knswidgets__dialog_destroy_isbase = false;
            KNSWidgets__Dialog::destroy();
            return;
        }
        auto destroy_cb = knswidgets__dialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KNSWidgets__Dialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (knswidgets__dialog_focusnextchild_isbase) {
            knswidgets__dialog_focusnextchild_isbase = false;
            return KNSWidgets__Dialog::focusNextChild();
        }
        auto focusnextchild_cb = knswidgets__dialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KNSWidgets__Dialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (knswidgets__dialog_focuspreviouschild_isbase) {
            knswidgets__dialog_focuspreviouschild_isbase = false;
            return KNSWidgets__Dialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = knswidgets__dialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KNSWidgets__Dialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knswidgets__dialog_sender_isbase) {
            knswidgets__dialog_sender_isbase = false;
            return KNSWidgets__Dialog::sender();
        }
        auto sender_cb = knswidgets__dialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KNSWidgets__Dialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knswidgets__dialog_sendersignalindex_isbase) {
            knswidgets__dialog_sendersignalindex_isbase = false;
            return KNSWidgets__Dialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = knswidgets__dialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KNSWidgets__Dialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knswidgets__dialog_receivers_isbase) {
            knswidgets__dialog_receivers_isbase = false;
            return KNSWidgets__Dialog::receivers(signal);
        }
        auto receivers_cb = knswidgets__dialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNSWidgets__Dialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knswidgets__dialog_issignalconnected_isbase) {
            knswidgets__dialog_issignalconnected_isbase = false;
            return KNSWidgets__Dialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = knswidgets__dialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KNSWidgets__Dialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (knswidgets__dialog_getdecodedmetricf_isbase) {
            knswidgets__dialog_getdecodedmetricf_isbase = false;
            return KNSWidgets__Dialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = knswidgets__dialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KNSWidgets__Dialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KNSWidgets__Dialog_KeyPressEvent(KNSWidgets::Dialog* self, QKeyEvent* param1);
    friend void KNSWidgets__Dialog_SuperKeyPressEvent(KNSWidgets::Dialog* self, QKeyEvent* param1);
    friend void KNSWidgets__Dialog_CloseEvent(KNSWidgets::Dialog* self, QCloseEvent* param1);
    friend void KNSWidgets__Dialog_SuperCloseEvent(KNSWidgets::Dialog* self, QCloseEvent* param1);
    friend void KNSWidgets__Dialog_ShowEvent(KNSWidgets::Dialog* self, QShowEvent* param1);
    friend void KNSWidgets__Dialog_SuperShowEvent(KNSWidgets::Dialog* self, QShowEvent* param1);
    friend void KNSWidgets__Dialog_ResizeEvent(KNSWidgets::Dialog* self, QResizeEvent* param1);
    friend void KNSWidgets__Dialog_SuperResizeEvent(KNSWidgets::Dialog* self, QResizeEvent* param1);
    friend void KNSWidgets__Dialog_ContextMenuEvent(KNSWidgets::Dialog* self, QContextMenuEvent* param1);
    friend void KNSWidgets__Dialog_SuperContextMenuEvent(KNSWidgets::Dialog* self, QContextMenuEvent* param1);
    friend bool KNSWidgets__Dialog_EventFilter(KNSWidgets::Dialog* self, QObject* param1, QEvent* param2);
    friend bool KNSWidgets__Dialog_SuperEventFilter(KNSWidgets::Dialog* self, QObject* param1, QEvent* param2);
    friend bool KNSWidgets__Dialog_Event(KNSWidgets::Dialog* self, QEvent* event);
    friend bool KNSWidgets__Dialog_SuperEvent(KNSWidgets::Dialog* self, QEvent* event);
    friend void KNSWidgets__Dialog_MousePressEvent(KNSWidgets::Dialog* self, QMouseEvent* event);
    friend void KNSWidgets__Dialog_SuperMousePressEvent(KNSWidgets::Dialog* self, QMouseEvent* event);
    friend void KNSWidgets__Dialog_MouseReleaseEvent(KNSWidgets::Dialog* self, QMouseEvent* event);
    friend void KNSWidgets__Dialog_SuperMouseReleaseEvent(KNSWidgets::Dialog* self, QMouseEvent* event);
    friend void KNSWidgets__Dialog_MouseDoubleClickEvent(KNSWidgets::Dialog* self, QMouseEvent* event);
    friend void KNSWidgets__Dialog_SuperMouseDoubleClickEvent(KNSWidgets::Dialog* self, QMouseEvent* event);
    friend void KNSWidgets__Dialog_MouseMoveEvent(KNSWidgets::Dialog* self, QMouseEvent* event);
    friend void KNSWidgets__Dialog_SuperMouseMoveEvent(KNSWidgets::Dialog* self, QMouseEvent* event);
    friend void KNSWidgets__Dialog_WheelEvent(KNSWidgets::Dialog* self, QWheelEvent* event);
    friend void KNSWidgets__Dialog_SuperWheelEvent(KNSWidgets::Dialog* self, QWheelEvent* event);
    friend void KNSWidgets__Dialog_KeyReleaseEvent(KNSWidgets::Dialog* self, QKeyEvent* event);
    friend void KNSWidgets__Dialog_SuperKeyReleaseEvent(KNSWidgets::Dialog* self, QKeyEvent* event);
    friend void KNSWidgets__Dialog_FocusInEvent(KNSWidgets::Dialog* self, QFocusEvent* event);
    friend void KNSWidgets__Dialog_SuperFocusInEvent(KNSWidgets::Dialog* self, QFocusEvent* event);
    friend void KNSWidgets__Dialog_FocusOutEvent(KNSWidgets::Dialog* self, QFocusEvent* event);
    friend void KNSWidgets__Dialog_SuperFocusOutEvent(KNSWidgets::Dialog* self, QFocusEvent* event);
    friend void KNSWidgets__Dialog_EnterEvent(KNSWidgets::Dialog* self, QEnterEvent* event);
    friend void KNSWidgets__Dialog_SuperEnterEvent(KNSWidgets::Dialog* self, QEnterEvent* event);
    friend void KNSWidgets__Dialog_LeaveEvent(KNSWidgets::Dialog* self, QEvent* event);
    friend void KNSWidgets__Dialog_SuperLeaveEvent(KNSWidgets::Dialog* self, QEvent* event);
    friend void KNSWidgets__Dialog_PaintEvent(KNSWidgets::Dialog* self, QPaintEvent* event);
    friend void KNSWidgets__Dialog_SuperPaintEvent(KNSWidgets::Dialog* self, QPaintEvent* event);
    friend void KNSWidgets__Dialog_MoveEvent(KNSWidgets::Dialog* self, QMoveEvent* event);
    friend void KNSWidgets__Dialog_SuperMoveEvent(KNSWidgets::Dialog* self, QMoveEvent* event);
    friend void KNSWidgets__Dialog_TabletEvent(KNSWidgets::Dialog* self, QTabletEvent* event);
    friend void KNSWidgets__Dialog_SuperTabletEvent(KNSWidgets::Dialog* self, QTabletEvent* event);
    friend void KNSWidgets__Dialog_ActionEvent(KNSWidgets::Dialog* self, QActionEvent* event);
    friend void KNSWidgets__Dialog_SuperActionEvent(KNSWidgets::Dialog* self, QActionEvent* event);
    friend void KNSWidgets__Dialog_DragEnterEvent(KNSWidgets::Dialog* self, QDragEnterEvent* event);
    friend void KNSWidgets__Dialog_SuperDragEnterEvent(KNSWidgets::Dialog* self, QDragEnterEvent* event);
    friend void KNSWidgets__Dialog_DragMoveEvent(KNSWidgets::Dialog* self, QDragMoveEvent* event);
    friend void KNSWidgets__Dialog_SuperDragMoveEvent(KNSWidgets::Dialog* self, QDragMoveEvent* event);
    friend void KNSWidgets__Dialog_DragLeaveEvent(KNSWidgets::Dialog* self, QDragLeaveEvent* event);
    friend void KNSWidgets__Dialog_SuperDragLeaveEvent(KNSWidgets::Dialog* self, QDragLeaveEvent* event);
    friend void KNSWidgets__Dialog_DropEvent(KNSWidgets::Dialog* self, QDropEvent* event);
    friend void KNSWidgets__Dialog_SuperDropEvent(KNSWidgets::Dialog* self, QDropEvent* event);
    friend void KNSWidgets__Dialog_HideEvent(KNSWidgets::Dialog* self, QHideEvent* event);
    friend void KNSWidgets__Dialog_SuperHideEvent(KNSWidgets::Dialog* self, QHideEvent* event);
    friend bool KNSWidgets__Dialog_NativeEvent(KNSWidgets::Dialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KNSWidgets__Dialog_SuperNativeEvent(KNSWidgets::Dialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KNSWidgets__Dialog_ChangeEvent(KNSWidgets::Dialog* self, QEvent* param1);
    friend void KNSWidgets__Dialog_SuperChangeEvent(KNSWidgets::Dialog* self, QEvent* param1);
    friend int KNSWidgets__Dialog_Metric(const KNSWidgets::Dialog* self, int param1);
    friend int KNSWidgets__Dialog_SuperMetric(const KNSWidgets::Dialog* self, int param1);
    friend void KNSWidgets__Dialog_InitPainter(const KNSWidgets::Dialog* self, QPainter* painter);
    friend void KNSWidgets__Dialog_SuperInitPainter(const KNSWidgets::Dialog* self, QPainter* painter);
    friend QPaintDevice* KNSWidgets__Dialog_Redirected(const KNSWidgets::Dialog* self, QPoint* offset);
    friend QPaintDevice* KNSWidgets__Dialog_SuperRedirected(const KNSWidgets::Dialog* self, QPoint* offset);
    friend QPainter* KNSWidgets__Dialog_SharedPainter(const KNSWidgets::Dialog* self);
    friend QPainter* KNSWidgets__Dialog_SuperSharedPainter(const KNSWidgets::Dialog* self);
    friend void KNSWidgets__Dialog_InputMethodEvent(KNSWidgets::Dialog* self, QInputMethodEvent* param1);
    friend void KNSWidgets__Dialog_SuperInputMethodEvent(KNSWidgets::Dialog* self, QInputMethodEvent* param1);
    friend bool KNSWidgets__Dialog_FocusNextPrevChild(KNSWidgets::Dialog* self, bool next);
    friend bool KNSWidgets__Dialog_SuperFocusNextPrevChild(KNSWidgets::Dialog* self, bool next);
    friend void KNSWidgets__Dialog_TimerEvent(KNSWidgets::Dialog* self, QTimerEvent* event);
    friend void KNSWidgets__Dialog_SuperTimerEvent(KNSWidgets::Dialog* self, QTimerEvent* event);
    friend void KNSWidgets__Dialog_ChildEvent(KNSWidgets::Dialog* self, QChildEvent* event);
    friend void KNSWidgets__Dialog_SuperChildEvent(KNSWidgets::Dialog* self, QChildEvent* event);
    friend void KNSWidgets__Dialog_CustomEvent(KNSWidgets::Dialog* self, QEvent* event);
    friend void KNSWidgets__Dialog_SuperCustomEvent(KNSWidgets::Dialog* self, QEvent* event);
    friend void KNSWidgets__Dialog_ConnectNotify(KNSWidgets::Dialog* self, const QMetaMethod* signal);
    friend void KNSWidgets__Dialog_SuperConnectNotify(KNSWidgets::Dialog* self, const QMetaMethod* signal);
    friend void KNSWidgets__Dialog_DisconnectNotify(KNSWidgets::Dialog* self, const QMetaMethod* signal);
    friend void KNSWidgets__Dialog_SuperDisconnectNotify(KNSWidgets::Dialog* self, const QMetaMethod* signal);
    friend void KNSWidgets__Dialog_AdjustPosition(KNSWidgets::Dialog* self, QWidget* param1);
    friend void KNSWidgets__Dialog_SuperAdjustPosition(KNSWidgets::Dialog* self, QWidget* param1);
    friend void KNSWidgets__Dialog_UpdateMicroFocus(KNSWidgets::Dialog* self);
    friend void KNSWidgets__Dialog_SuperUpdateMicroFocus(KNSWidgets::Dialog* self);
    friend void KNSWidgets__Dialog_Create(KNSWidgets::Dialog* self);
    friend void KNSWidgets__Dialog_SuperCreate(KNSWidgets::Dialog* self);
    friend void KNSWidgets__Dialog_Destroy(KNSWidgets::Dialog* self);
    friend void KNSWidgets__Dialog_SuperDestroy(KNSWidgets::Dialog* self);
    friend bool KNSWidgets__Dialog_FocusNextChild(KNSWidgets::Dialog* self);
    friend bool KNSWidgets__Dialog_SuperFocusNextChild(KNSWidgets::Dialog* self);
    friend bool KNSWidgets__Dialog_FocusPreviousChild(KNSWidgets::Dialog* self);
    friend bool KNSWidgets__Dialog_SuperFocusPreviousChild(KNSWidgets::Dialog* self);
    friend QObject* KNSWidgets__Dialog_Sender(const KNSWidgets::Dialog* self);
    friend QObject* KNSWidgets__Dialog_SuperSender(const KNSWidgets::Dialog* self);
    friend int KNSWidgets__Dialog_SenderSignalIndex(const KNSWidgets::Dialog* self);
    friend int KNSWidgets__Dialog_SuperSenderSignalIndex(const KNSWidgets::Dialog* self);
    friend int KNSWidgets__Dialog_Receivers(const KNSWidgets::Dialog* self, const char* signal);
    friend int KNSWidgets__Dialog_SuperReceivers(const KNSWidgets::Dialog* self, const char* signal);
    friend bool KNSWidgets__Dialog_IsSignalConnected(const KNSWidgets::Dialog* self, const QMetaMethod* signal);
    friend bool KNSWidgets__Dialog_SuperIsSignalConnected(const KNSWidgets::Dialog* self, const QMetaMethod* signal);
    friend double KNSWidgets__Dialog_GetDecodedMetricF(const KNSWidgets::Dialog* self, int metricA, int metricB);
    friend double KNSWidgets__Dialog_SuperGetDecodedMetricF(const KNSWidgets::Dialog* self, int metricA, int metricB);
};

#endif
